#include "nn/fs/fs_ram_disk_file_system.hpp"

#include <string.h>

#include "nn/crypto/sha256_generator.hpp"
#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/fsa/fs_registrar.hpp"

#define NN_FS_ACCESS_LOG_TARGET_APPLICATION 1u

#define NN_FS_ACCESS_LOG_MOUNT(result, expression, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog( \
      NN_FS_ACCESS_LOG_TARGET_APPLICATION)) { \
      const ::nn::os::Tick fsStart_ = ::nn::os::GetSystemTick(); \
      result = (expression); \
      const ::nn::os::Tick fsEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLog(result, fsStart_, fsEnd_, \
        __FUNCTION__, nullptr, __VA_ARGS__); \
    } \
    else { \
      result = (expression); \
    } \
  } while (0)

#define NN_FS_ENABLE_MOUNT_ACCESS_LOG(name) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog( \
      NN_FS_ACCESS_LOG_TARGET_APPLICATION)) { \
      ::nn::fs::detail::EnableFileSystemAccessorAccessLog(name); \
    } \
  } while (0)

namespace nn::fs::detail {

void EnableFileSystemAccessorAccessLog(const char* name);

}

namespace nn::fs {

namespace {

const size_t RamDiskSpaceSizeMax = 4000ULL * 1024 * 1024;

constexpr Result ResultUnsupportedOperationForVerifiedMemoryStorage() {
  return detail::MakeResult(6300);
}

constexpr Result ResultRamDiskVerifiedMemoryStorageCorrupted() {
  return detail::MakeResult(7101);
}

class VerifiedMemoryStorage : public IStorage, public detail::Newable {
public:
  static const size_t GuardSize = sizeof(uint64_t);

  VerifiedMemoryStorage(void* buffer, size_t size)
    : m_Buffer(static_cast<char*>(buffer)), m_DataBuffer(m_Buffer + GuardSize),
      m_BufferSize(size), m_DataSize(size - GuardSize * 2) {
    os::Tick tick = os::GetSystemTick();
    uint64_t hash[4] = {};
    crypto::GenerateSha256Hash(hash, sizeof(hash), &tick, sizeof(tick));
    m_Guard = hash[0];
    *reinterpret_cast<uint64_t*>(m_Buffer) = m_Guard;
    *reinterpret_cast<uint64_t*>(m_Buffer + m_BufferSize - GuardSize) =
      m_Guard;
  }

  virtual ~VerifiedMemoryStorage() override {
    NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(Verify());
  }

  virtual Result Read(int64_t offset, void* buffer, size_t size) override {
    NN_FS_RESULT_THROW_UNLESS(offset >= 0 && offset <= m_DataSize,
      ResultInvalidOffset());
    NN_FS_RESULT_THROW_UNLESS(
      offset + static_cast<int64_t>(size) <= m_DataSize, ResultInvalidSize());
    NN_FS_RESULT_DO(Verify());
    memcpy(buffer, m_DataBuffer + offset, size);
    return ResultSuccess();
  }

  virtual Result Write(int64_t offset, const void* buffer,
    size_t size) override {
    NN_FS_RESULT_THROW_UNLESS(offset >= 0 && offset <= m_DataSize,
      ResultInvalidOffset());
    NN_FS_RESULT_THROW_UNLESS(
      offset + static_cast<int64_t>(size) <= m_DataSize, ResultInvalidSize());
    NN_FS_RESULT_DO(Verify());
    memcpy(m_DataBuffer + offset, buffer, size);
    return ResultSuccess();
  }

  virtual Result Flush() override {
    return ResultSuccess();
  }

  virtual Result SetSize(int64_t size) override {
    static_cast<void>(size);
    return ResultUnsupportedOperationForVerifiedMemoryStorage();
  }

  virtual Result GetSize(int64_t* outSize) override {
    *outSize = m_DataSize;
    return ResultSuccess();
  }

  virtual Result OperateRange(void* outBuffer, size_t outBufferSize,
    OperationId operationId, int64_t offset, int64_t size,
    const void* inBuffer, size_t inBufferSize) override {
    static_cast<void>(inBuffer);
    static_cast<void>(inBufferSize);
    switch (operationId) {
      case OperationId_FillZero: {
        NN_FS_RESULT_THROW_UNLESS(offset >= 0 && offset <= m_DataSize,
          ResultInvalidOffset());
        const int64_t restSize = m_DataSize - offset;
        memset(m_DataBuffer + offset, 0, size < restSize ? size : restSize);
        return ResultSuccess();
      }
      case OperationId_Invalidate:
        return ResultSuccess();
      case OperationId_QueryRange:
        NN_FS_RESULT_THROW_UNLESS(outBuffer != nullptr,
          ResultNullptrArgument());
        NN_FS_RESULT_THROW_UNLESS(outBufferSize == sizeof(QueryRangeInfo),
          ResultInvalidSize());
        static_cast<QueryRangeInfo*>(outBuffer)->Clear();
        return ResultSuccess();
      default:
        return ResultUnsupportedOperationForVerifiedMemoryStorage();
    }
  }

private:
  Result Verify() const {
    NN_FS_RESULT_THROW_UNLESS(
      *reinterpret_cast<const uint64_t*>(m_Buffer) == m_Guard &&
        *reinterpret_cast<const uint64_t*>(
          m_Buffer + m_BufferSize - GuardSize) == m_Guard,
      ResultRamDiskVerifiedMemoryStorageCorrupted());
    return ResultSuccess();
  }

  char* m_Buffer;
  char* m_DataBuffer;
  int64_t m_BufferSize;
  int64_t m_DataSize;
  uint64_t m_Guard;
};

}

size_t GetRamDiskBufferSize(size_t spaceSize) {
  size_t bufferSize = 0;
  auto getBufferSize = [&]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(spaceSize <= RamDiskSpaceSizeMax,
      ResultInvalidSize());
    size_t fileSystemSize = 0;
    NN_FS_RESULT_DO(RamDiskFileSystem::GetBufferSize(&fileSystemSize,
      spaceSize));
    const size_t totalSize =
      fileSystemSize + VerifiedMemoryStorage::GuardSize * 2;
    NN_FS_RESULT_THROW_UNLESS(totalSize > fileSystemSize,
      ResultInvalidSize());
    bufferSize = totalSize;
    return ResultSuccess();
  };
  Result result;
  NN_FS_ACCESS_LOG_APPLICATION(result, getBufferSize(),
    ", space_size: %zu, buffer_size: %zu", spaceSize, bufferSize);
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(result);
  return bufferSize;
}

Result MountRamDisk(const char* name, void* buffer, size_t bufferSize) {
  auto mount = [=]() -> Result {
    NN_FS_RESULT_THROW_UNLESS(buffer != nullptr, ResultNullptrArgument());
    size_t minimumSize = 0;
    NN_FS_RESULT_DO(RamDiskFileSystem::GetBufferSize(&minimumSize, 0));
    NN_FS_RESULT_THROW_UNLESS(
      minimumSize + VerifiedMemoryStorage::GuardSize * 2 > minimumSize,
      ResultInvalidSize());
    NN_FS_RESULT_THROW_UNLESS(
      bufferSize >= minimumSize + VerifiedMemoryStorage::GuardSize * 2,
      ResultInvalidSize());
    size_t maximumSize = 0;
    NN_FS_RESULT_DO(RamDiskFileSystem::GetBufferSize(&maximumSize,
      RamDiskSpaceSizeMax));
    NN_FS_RESULT_THROW_UNLESS(
      maximumSize + VerifiedMemoryStorage::GuardSize * 2 > maximumSize,
      ResultInvalidSize());
    NN_FS_RESULT_THROW_UNLESS(
      bufferSize <= maximumSize + VerifiedMemoryStorage::GuardSize * 2,
      ResultInvalidSize());
    NN_FS_RESULT_DO(detail::CheckMountName(name));

    std::unique_ptr<IStorage> storage(
      new VerifiedMemoryStorage(buffer, bufferSize));
    NN_FS_RESULT_THROW_UNLESS(storage != nullptr,
      ResultAllocationMemoryFailedNew());
    std::unique_ptr<RamDiskFileSystem> fileSystem(
      new RamDiskFileSystem(std::move(storage)));
    NN_FS_RESULT_THROW_UNLESS(fileSystem != nullptr,
      ResultAllocationMemoryFailedNew());
    NN_FS_RESULT_DO(fileSystem->FormatAndMount());
    return fsa::Register(name, std::move(fileSystem));
  };
  Result result;
  NN_FS_ACCESS_LOG_MOUNT(result, mount(), ", name: \"%s\", size: %zu", name,
    bufferSize);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  NN_FS_ENABLE_MOUNT_ACCESS_LOG(name);
  return ResultSuccess();
}

}
