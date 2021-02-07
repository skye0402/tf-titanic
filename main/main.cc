/* Titanic ML dataset example on ESP32 hardware

   Developed by G. Albrecht Jan 2021 

   This is a demonstration how to run a flatbuffer TF lite model
   on a microcontroller. Its purpose is to understand what is needed
   to set it up.
*/
#include <cstdio>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"

// TF Lite micro related includes
#include "tensorflow/lite/micro/all_ops_resolver.h"
#include "tensorflow/lite/micro/micro_error_reporter.h"
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/schema/schema_generated.h"
#include "tensorflow/lite/version.h"
#include "titanic_model.h" // Our trained model
#include "output_handler.h"

// Globals, used for compatibility with Arduino-style sketches.
namespace {
    tflite::ErrorReporter* error_reporter = nullptr;
    const tflite::Model* model = nullptr;
    tflite::MicroInterpreter* interpreter = nullptr;
    TfLiteTensor* input = nullptr;
    TfLiteTensor* output = nullptr;
    int inference_count = 0;

    constexpr int kTensorArenaSize = 2000;
    uint8_t tensor_arena[kTensorArenaSize];
}  // namespace

extern "C" {
    void app_main(void);
}

void app_main(void)
{
    printf("Hello world with TF Lite linked in!\n");
    static tflite::MicroErrorReporter micro_error_reporter;
    error_reporter = &micro_error_reporter;
    
    // Map the model into a usable data structure. This doesn't involve any
    // copying or parsing, it's a very lightweight operation.
    model = tflite::GetModel(g_model);
    // if (model->version() != TFLITE_SCHEMA_VERSION) {
    //     TF_LITE_REPORT_ERROR(error_reporter, "Model provided is schema version %d not equal "
    //                                          "to supported version %d.",
    //                                          model->version(), TFLITE_SCHEMA_VERSION);
    //     return;
    // }
    
    // This pulls in all the operation implementations we need
    // NOLINTNEXTLINE(runtime-global-variables)
    static tflite::AllOpsResolver resolver;
    
    // // Build an interpreter to run the model with.
    // static tflite::MicroInterpreter static_interpreter(
    //     model, resolver, tensor_arena, kTensorArenaSize, error_reporter);
    // interpreter = &static_interpreter;
    
    // // Allocate memory from the tensor_arena for the model's tensors.
    // TfLiteStatus allocate_status = interpreter->AllocateTensors();
    // if (allocate_status != kTfLiteOk) {
    //     TF_LITE_REPORT_ERROR(error_reporter, "AllocateTensors() failed");
    //     return;
    // }
    
    // // Obtain pointers to the model's input and output tensors.
    // input = interpreter->input(0);
    // output = interpreter->output(0);
    
    // Keep track of how many inferences we have performed.
    inference_count = 0;
    printf("The model is loaded and the interpreter is instantiated.");

    /* Print chip information */
    esp_chip_info_t chip_info;
    esp_chip_info(&chip_info);
    printf("This is ESP32 chip with %d CPU cores, WiFi%s%s, ",
            chip_info.cores,
            (chip_info.features & CHIP_FEATURE_BT) ? "/BT" : "",
            (chip_info.features & CHIP_FEATURE_BLE) ? "/BLE" : "");

    printf("silicon revision %d, ", chip_info.revision);

    printf("%dMB %s flash\n", spi_flash_get_chip_size() / (1024 * 1024),
            (chip_info.features & CHIP_FEATURE_EMB_FLASH) ? "embedded" : "external");

    for (int i = 10; i >= 0; i--) {
        printf("Restarting in %d seconds...\n", i);
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
    printf("Restarting now.\n");
    fflush(stdout);
    esp_restart();
}
