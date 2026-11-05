#pragma once

#include <stdint.h>

#include "nn/fs/fs_istorage.hpp"
#include "nn/fssrv/sf/fssrv_sf_path.hpp"
#include "nn/result.hpp"
#include "nn/sf/sf_buffers.hpp"
#include "nn/sf/shared_pointer.hpp"

namespace nn::fs {

struct FileTimeStampRaw;

namespace fsa {

struct FileSystemAttribute;

}

}

namespace nn::fssrv::sf {

class IFile : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Read(nn::sf::Out<int64_t> outSize, int64_t offset,
    const nn::sf::OutBuffer& buffer, int64_t size, uint32_t option) = 0;
  virtual Result Write(int64_t offset, const nn::sf::InBuffer& buffer,
    int64_t size, uint32_t option) = 0;
  virtual Result Flush() = 0;
  virtual Result SetSize(int64_t size) = 0;
  virtual Result GetSize(nn::sf::Out<int64_t> outSize) = 0;
  virtual Result OperateRange(nn::sf::Out<fs::QueryRangeInfo> outInfo,
    int32_t operationId, int64_t offset, int64_t size) = 0;
  virtual Result OperateRangeWithBuffer(const nn::sf::OutBuffer& outBuffer,
    const nn::sf::InBuffer& inBuffer, int32_t operationId, int64_t offset,
    int64_t size) = 0;
};

class IDirectory : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual Result Read(nn::sf::Out<int64_t> outCount,
    const nn::sf::OutBuffer& entries) = 0;
  virtual Result GetEntryCount(nn::sf::Out<int64_t> outCount) = 0;
};

class IFileSystem : public nn::sf::IServiceObject {
public:
  virtual void Reserved2() = 0;
  virtual void Reserved3() = 0;
  virtual void Reserved4() = 0;
  virtual Result CreateFile(const FspPath& path, int64_t size,
    int32_t option) = 0;
  virtual Result DeleteFile(const FspPath& path) = 0;
  virtual Result CreateDirectory(const FspPath& path) = 0;
  virtual Result DeleteDirectory(const FspPath& path) = 0;
  virtual Result DeleteDirectoryRecursively(const FspPath& path) = 0;
  virtual Result RenameFile(const FspPath& currentPath,
    const FspPath& newPath) = 0;
  virtual Result RenameDirectory(const FspPath& currentPath,
    const FspPath& newPath) = 0;
  virtual Result GetEntryType(nn::sf::Out<uint32_t> outType,
    const FspPath& path) = 0;
  virtual Result OpenFile(
    const nn::sf::Out<nn::sf::SharedPointer<IFile>>& outFile,
    const FspPath& path, uint32_t mode) = 0;
  virtual Result OpenDirectory(
    const nn::sf::Out<nn::sf::SharedPointer<IDirectory>>& outDirectory,
    const FspPath& path, uint32_t mode) = 0;
  virtual Result Commit() = 0;
  virtual Result GetFreeSpaceSize(nn::sf::Out<int64_t> outSize,
    const FspPath& path) = 0;
  virtual Result GetTotalSpaceSize(nn::sf::Out<int64_t> outSize,
    const FspPath& path) = 0;
  virtual Result CleanDirectoryRecursively(const FspPath& path) = 0;
  virtual Result GetFileTimeStampRaw(
    nn::sf::Out<fs::FileTimeStampRaw> outTimeStamp,
    const FspPath& path) = 0;
  virtual Result QueryEntry(const nn::sf::OutBuffer& outBuffer,
    const nn::sf::InBuffer& inBuffer, int32_t queryId,
    const FspPath& path) = 0;
  virtual Result GetFileSystemAttribute(
    nn::sf::Out<fs::fsa::FileSystemAttribute> outAttribute) = 0;
};

}
