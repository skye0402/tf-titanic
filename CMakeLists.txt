# The following lines of boilerplate have to be in your project's
# CMakeLists in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.5)

include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(tf-titanic)
set(EXTRA_COMPONENT_DIRS "../../../.espressif/tools/xtensa-esp32-elf/esp-2020r2-8.2.0/xtensa-esp32-elf/xtensa-esp32-elf/include/")
#add_subdirectory(tensorflow)