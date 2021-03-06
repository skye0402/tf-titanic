/*
  Our trained model for the Titanic survival rate
  created by command
  xxd -i titanic-model.tflite > titanic-model.cc
*/

#include "titanic_model.h"

alignas(8) const unsigned char titanic_model_tflite[] = {
  0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x14, 0x00, 0x20, 0x00,
  0x04, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x10, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x1c, 0x00, 0x14, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00,
  0x20, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x68, 0x03, 0x00, 0x00, 0x5c, 0x01, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00,
  0xd0, 0x06, 0x00, 0x00, 0xcc, 0x06, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00,
  0x80, 0x05, 0x00, 0x00, 0x10, 0x05, 0x00, 0x00, 0xbc, 0x04, 0x00, 0x00,
  0x38, 0x04, 0x00, 0x00, 0xcc, 0x03, 0x00, 0x00, 0xb0, 0x06, 0x00, 0x00,
  0xac, 0x06, 0x00, 0x00, 0xa8, 0x06, 0x00, 0x00, 0xa4, 0x06, 0x00, 0x00,
  0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x04, 0x00, 0x08, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x13, 0x00, 0x00, 0x00, 0x6d, 0x69, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x74,
  0x69, 0x6d, 0x65, 0x5f, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00,
  0x6a, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x31, 0x2e, 0x31, 0x34, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52,
  0x20, 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00,
  0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0c, 0x00,
  0x10, 0x00, 0x14, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x40, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00,
  0x58, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0xc4, 0x05, 0x00, 0x00,
  0x5c, 0x05, 0x00, 0x00, 0xd4, 0x04, 0x00, 0x00, 0x60, 0x04, 0x00, 0x00,
  0x0c, 0x04, 0x00, 0x00, 0xb0, 0x03, 0x00, 0x00, 0x2c, 0x03, 0x00, 0x00,
  0x80, 0x02, 0x00, 0x00, 0x8c, 0x01, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00,
  0x6c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x04, 0x02, 0x00, 0x00, 0x34, 0x01, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e,
  0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x04, 0x00, 0x08, 0x00, 0x0c, 0x00,
  0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, 0xfe, 0xff, 0xff,
  0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x01, 0x00, 0x00, 0x00,
  0xe4, 0xfa, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x49, 0x64, 0x65, 0x6e, 0x74, 0x69, 0x74, 0x79,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x01, 0x00, 0x00, 0x00, 0xd0, 0xfa, 0xff, 0xff, 0x6e, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x08, 0x18, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0xe8, 0xfa, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x58, 0xfb, 0xff, 0xff,
  0x14, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x4c, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00,
  0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f,
  0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x6d, 0x6f, 0x64, 0x65, 0x6c,
  0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41,
  0x64, 0x64, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x01, 0x00, 0x00, 0x00, 0x34, 0xfc, 0xff, 0xff, 0x00, 0x00, 0x0e, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x10, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x1c, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x32, 0xff, 0xff, 0xff,
  0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0xfc, 0xfb, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00,
  0x09, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00,
  0x64, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x6d, 0x6f, 0x64, 0x65,
  0x6c, 0x2f, 0x73, 0x65, 0x63, 0x6f, 0x6e, 0x64, 0x5f, 0x6c, 0x61, 0x79,
  0x65, 0x72, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x6d, 0x6f,
  0x64, 0x65, 0x6c, 0x2f, 0x73, 0x65, 0x63, 0x6f, 0x6e, 0x64, 0x5f, 0x6c,
  0x61, 0x79, 0x65, 0x72, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x6d, 0x6f,
  0x64, 0x65, 0x6c, 0x2f, 0x73, 0x65, 0x63, 0x6f, 0x6e, 0x64, 0x5f, 0x6c,
  0x61, 0x79, 0x65, 0x72, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64,
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff,
  0x02, 0x00, 0x00, 0x00, 0x00, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x0e, 0x00,
  0x16, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x10, 0x00,
  0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x24, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,
  0x08, 0x00, 0x07, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
  0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x10, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x04, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09,
  0x01, 0x00, 0x00, 0x00, 0xec, 0xfc, 0xff, 0xff, 0x14, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00,
  0x60, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x49, 0x00, 0x00, 0x00, 0x6d, 0x6f, 0x64, 0x65,
  0x6c, 0x2f, 0x66, 0x69, 0x72, 0x73, 0x74, 0x5f, 0x6c, 0x61, 0x79, 0x65,
  0x72, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x6d, 0x6f, 0x64,
  0x65, 0x6c, 0x2f, 0x66, 0x69, 0x72, 0x73, 0x74, 0x5f, 0x6c, 0x61, 0x79,
  0x65, 0x72, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x6d, 0x6f, 0x64, 0x65,
  0x6c, 0x2f, 0x66, 0x69, 0x72, 0x73, 0x74, 0x5f, 0x6c, 0x61, 0x79, 0x65,
  0x72, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00,
  0x18, 0xfd, 0xff, 0xff, 0xe6, 0xfd, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x18, 0x00, 0x00, 0x00, 0x73, 0x88, 0x14, 0xbf, 0x4d, 0x96, 0x86, 0xbf,
  0xf4, 0x4d, 0xcc, 0x3e, 0x46, 0xb9, 0x06, 0x3f, 0x9c, 0x66, 0xcf, 0xbf,
  0x97, 0xfd, 0xae, 0xbf, 0xf2, 0xfd, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
  0x07, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
  0x19, 0x00, 0x00, 0x00, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x73, 0x65,
  0x63, 0x6f, 0x6e, 0x64, 0x5f, 0x6c, 0x61, 0x79, 0x65, 0x72, 0x2f, 0x4d,
  0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00, 0x80, 0xfd, 0xff, 0xff,
  0x4e, 0xfe, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
  0xe7, 0xa9, 0x0b, 0x3f, 0x18, 0xd7, 0xb4, 0x3e, 0x8e, 0x00, 0x2f, 0xbf,
  0xed, 0xcc, 0x08, 0x3e, 0x69, 0xcf, 0xa0, 0xbf, 0x1a, 0xba, 0xb8, 0xbe,
  0x42, 0x58, 0x9b, 0xbe, 0x75, 0x88, 0x02, 0xbf, 0x4c, 0x57, 0xac, 0xbe,
  0x4e, 0x35, 0x3a, 0x3e, 0xbb, 0x78, 0x29, 0xbf, 0xd4, 0xd6, 0xac, 0xbe,
  0x72, 0xfe, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x66, 0x69, 0x72, 0x73, 0x74, 0x5f,
  0x6c, 0x61, 0x79, 0x65, 0x72, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 0xff, 0xff, 0xce, 0xfe, 0xff, 0xff,
  0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x7f, 0x4d, 0x3e,
  0xe9, 0x9f, 0xf6, 0xbf, 0xca, 0xfe, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
  0x05, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x12, 0x00, 0x00, 0x00, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x64, 0x65,
  0x6e, 0x73, 0x65, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00,
  0x50, 0xfe, 0xff, 0xff, 0x1e, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x08, 0x00, 0x00, 0x00, 0x3e, 0x05, 0x0e, 0xbc, 0xb9, 0xe4, 0x5a, 0x3f,
  0x1a, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x00, 0x6d, 0x6f, 0x64, 0x65,
  0x6c, 0x2f, 0x73, 0x65, 0x63, 0x6f, 0x6e, 0x64, 0x5f, 0x6c, 0x61, 0x79,
  0x65, 0x72, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52,
  0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f,
  0x70, 0x2f, 0x72, 0x65, 0x73, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x00, 0x00,
  0xbc, 0xfe, 0xff, 0xff, 0x8a, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00,
  0x0c, 0x00, 0x00, 0x00, 0xcf, 0x26, 0x24, 0x3f, 0xaf, 0x17, 0x30, 0xbe,
  0x68, 0x63, 0x80, 0xbe, 0x8a, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x31, 0x00, 0x00, 0x00,
  0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x66, 0x69, 0x72, 0x73, 0x74, 0x5f,
  0x6c, 0x61, 0x79, 0x65, 0x72, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64,
  0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62,
  0x6c, 0x65, 0x4f, 0x70, 0x2f, 0x72, 0x65, 0x73, 0x6f, 0x75, 0x72, 0x63,
  0x65, 0x00, 0x00, 0x00, 0x04, 0x00, 0x06, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00,
  0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xe0, 0x0c, 0x86, 0x3f,
  0x00, 0x00, 0x0e, 0x00, 0x14, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00,
  0x0c, 0x00, 0x10, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00,
  0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x00, 0x00,
  0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f,
  0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64,
  0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x2f, 0x72,
  0x65, 0x73, 0x6f, 0x75, 0x72, 0x63, 0x65, 0x00, 0xa8, 0xff, 0xff, 0xff,
  0x14, 0x00, 0x18, 0x00, 0x04, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0c, 0x00,
  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x14, 0x00, 0x00, 0x00,
  0x14, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
  0x2c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
  0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
  0x69, 0x6e, 0x70, 0x75, 0x74, 0x5f, 0x31, 0x00, 0x02, 0x00, 0x00, 0x00,
  0xff, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0xfc, 0xff, 0xff, 0xff,
  0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00
};
unsigned int titanic_model_tflite_len = 1832;
