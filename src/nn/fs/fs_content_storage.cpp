#include "nn/fs/fs_content_storage.hpp"

#include <memory>

#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_file_system_service_object_adapter.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fsa/fs_registrar.hpp"
#include "nn/os/sleep_thread.hpp"
#include "nn/util/string_util.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::fs {

extern const char* const ContentStorageMountNames[] = {
  "@SystemContent",
  "@UserContent",
  "@SdCardContent",
  "@SystemContent0",
  "@SystemContent3",
};

namespace {

const int MountRetryCount = 60;
const int64_t MountRetryIntervalNanoSeconds = 1000000000;

inline const char* GetContentStorageMountNameImpl(ContentStorageId id) {
  if (static_cast<unsigned int>(id) <=
    static_cast<unsigned int>(ContentStorageId::System3)) {
    return ContentStorageMountNames[static_cast<unsigned int>(id)];
  }
  nn::detail::UnexpectedDefaultImpl();
}

class ContentStorageCommonMountNameGenerator
  : public fsa::ICommonMountNameGenerator, public detail::Newable {
public:
  explicit ContentStorageCommonMountNameGenerator(ContentStorageId id)
    : m_Id(id) {}

  Result GenerateCommonMountName(char* name, size_t nameSize) override {
    util::SNPrintf(name, nameSize, "%s:",
      GetContentStorageMountNameImpl(m_Id));
    return ResultSuccess();
  }

private:
  ContentStorageId m_Id;
};

}

const char* GetContentStorageMountName(ContentStorageId id) {
  return GetContentStorageMountNameImpl(id);
}

Result MountContentStorage(ContentStorageId id) {
  return MountContentStorage(GetContentStorageMountNameImpl(id), id);
}

Result MountContentStorage(const char* name, ContentStorageId id) {
  auto mount = [&]() -> Result {
    NN_FS_RESULT_DO(detail::CheckMountNameAcceptingReservedMountName(name));
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    nn::sf::SharedPointer<fssrv::sf::IFileSystem> fileSystem;
    auto openFileSystem = [&]() -> Result {
      return fileSystemProxy->OpenContentStorageFileSystem(
        nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(
          &fileSystem), static_cast<uint32_t>(id));
    };
    Result result = openFileSystem();
    if (IsFailure(result)) [[unlikely]] {
      int retryCount = MountRetryCount - 1;
      do {
        NN_FS_RESULT_THROW_UNLESS(
          IsResultIncluded(result, ResultSystemPartitionNotReady()) &&
            retryCount != 0, result);
        os::SleepThread(TimeSpan{MountRetryIntervalNanoSeconds});
        --retryCount;
        result = openFileSystem();
      } while (IsFailure(result));
    }
    std::unique_ptr<fsa::IFileSystem> adapter(
      new detail::FileSystemServiceObjectAdapter(std::move(fileSystem)));
    NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
      ResultAllocationMemoryFailedInContentStorageA());
    std::unique_ptr<fsa::ICommonMountNameGenerator> generator(
      new ContentStorageCommonMountNameGenerator(id));
    NN_FS_RESULT_THROW_UNLESS(generator != nullptr,
      ResultAllocationMemoryFailedInContentStorageB());
    return fsa::Register(name, std::move(adapter), std::move(generator));
  };
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(mount());
  return ResultSuccess();
}

}
