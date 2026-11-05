#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/fs/fs_file_system_proxy_types.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/os/process_id.hpp"
#include "nn/result.hpp"

namespace nn::fs {

Result GetProcessEnvironmentSource(ProcessEnvironmentSource* outSource,
  const char* path, ContentAttributes attributes);
Result GetProgramId(ncm::ProgramId* outProgramId, const char* path,
  ContentAttributes attributes);
Result RegisterProgramIndexMapInfo(const ProgramIndexMapInfo* infos,
  int count);
Result RegisterProgram(uint64_t processId, uint64_t programId,
  uint8_t storageId, const void* data, size_t dataSize,
  const void* descriptor, size_t descriptorSize,
  FsAccessControlRestrictionMode mode);
void UnregisterProgram(uint64_t processId);
Result IsArchivedProgram(bool* outValue, os::ProcessId processId);

namespace detail {

void InitializeFileSystemLibrary();
void InitializeFileSystemCreatorInterfaces();

}

}
