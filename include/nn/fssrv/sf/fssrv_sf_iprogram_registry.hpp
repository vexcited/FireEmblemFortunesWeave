#pragma once

#include <stdint.h>

#include "nn/fs/fs_file_system_proxy_types.hpp"
#include "nn/fssrv/sf/fssrv_sf_ifile_system.hpp"
#include "nn/ncm/ncm_ids.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::fssrv::sf {

class IProgramRegistry : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result RegisterProgram(uint64_t processId, uint64_t programId,
    uint8_t storageId, const nn::sf::InBuffer& data, int64_t dataSize,
    const nn::sf::InBuffer& descriptor, int64_t descriptorSize,
    fs::FsAccessControlRestrictionMode mode) = 0;
  virtual Result UnregisterProgram(uint64_t processId) = 0;
  virtual Result SetCurrentProcess(uint64_t clientProcessId) = 0;
};

class IFileSystemProxyForLoader : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result OpenCodeFileSystem(
    const nn::sf::Out<nn::sf::SharedPointer<IFileSystem>>& outFileSystem,
    const nn::sf::OutBuffer& outVerificationData,
    fs::ContentAttributes attributes, ncm::ProgramId programId,
    ncm::StorageId storageId) = 0;
  virtual Result IsArchivedProgram(nn::sf::Out<bool> outValue,
    uint64_t processId) = 0;
  virtual Result SetCurrentProcess(uint64_t clientProcessId) = 0;
};

}
