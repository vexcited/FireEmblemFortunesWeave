#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/fs/fs_save_data_types.hpp"
#include "nn/fs/fs_types.hpp"
#include "nn/fssystem/fssystem_nca_header.hpp"

namespace nn::fs {

enum class ContextType : uint8_t {
  SaveDataSpaceId = 1,
  SaveDataReferenceId = 2,
  SaveDataType = 3,
  SystemSaveDataId = 4,
  SaveDataAttribute = 5,
  StorageId = 64,
  PatchStorageId = 65,
  ContentType = 66,
  ProgramId = 67,
  Aes = 128,
};

struct TruncatedSaveDataAttribute {
  char data[59];
};

struct AesErrorContext {
  char data[16];
};

struct ErrorContext {
  enum class StorageId : uint8_t {};

  template<ContextType Type, typename T>
  static uint8_t GetType(T value);

  static int ToString(char* buffer, size_t size, const ErrorContext& context);

  uint8_t type;
  uint8_t data[59];
};

size_t GetContextSize(uint8_t type);

}
