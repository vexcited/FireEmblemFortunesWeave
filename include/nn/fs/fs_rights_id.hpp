#pragma once

#include <stdint.h>

#include "nn/fs/fs_file_system_proxy_types.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/result.hpp"

namespace nn::spl {

struct WrappedKey256 {
  uint8_t data[60];
};

}

namespace nn::fs {

bool IsRightsIdValid(const RightsId& rightsId);
bool IsRightsIdSecondaryKeyEnabled(const RightsId& rightsId);
Result GetRightsId(RightsId* outRightsId, ncm::ProgramId programId,
  ncm::StorageId storageId);
Result GetRightsId(RightsId* outRightsId, const char* path,
  ContentAttributes attributes);
Result GetRightsId(RightsId* outRightsId, uint8_t* outKeyGeneration,
  const char* path, ContentAttributes attributes);
Result RegisterCpDeviceUniqueKey(const spl::WrappedKey256* key);

}
