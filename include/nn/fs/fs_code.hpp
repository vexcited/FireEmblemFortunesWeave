#pragma once

#include <stdint.h>

#include "nn/fs/fs_file_system_proxy_types.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/result.hpp"

namespace nn::fs {

struct CodeVerificationData {
  uint8_t data[420];
};

Result MountCode(CodeVerificationData* outVerificationData, const char* name,
  ContentAttributes attributes, ncm::ProgramId programId,
  ncm::StorageId storageId);

}
