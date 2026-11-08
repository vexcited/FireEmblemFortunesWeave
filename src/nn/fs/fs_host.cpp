#include "nn/fs/fs_host.hpp"

#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_file_system_service_object_adapter.hpp"
#include "nn/fs/detail/fs_id_string.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/fs_path_utility.hpp"
#include "nn/fs/fsa/fs_registrar.hpp"
#include "nn/util/string_util.hpp"

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

#define NN_FS_ACCESS_LOG_MOUNT_UNLESS_SUCCESS(result, expression, ...) \
  do { \
    if (::nn::fs::detail::IsEnabledAccessLog( \
      NN_FS_ACCESS_LOG_TARGET_APPLICATION)) { \
      const ::nn::os::Tick fsStart_ = ::nn::os::GetSystemTick(); \
      result = (expression); \
      const ::nn::os::Tick fsEnd_ = ::nn::os::GetSystemTick(); \
      ::nn::fs::detail::OutputAccessLogUnlessResultSuccess(result, fsStart_, \
        fsEnd_, __FUNCTION__, nullptr, __VA_ARGS__); \
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

const char HostRootFileSystemMountName[] = "@Host";

const int RootPathLengthMax = 768;

bool g_IsHostRootMounted = false;

class HostRootCommonMountNameGenerator
  : public fsa::ICommonMountNameGenerator, public detail::Newable {
public:
  Result GenerateCommonMountName(char* name, size_t nameSize) override {
    util::SNPrintf(name, nameSize, "@Host:");
    return ResultSuccess();
  }
};

class HostCommonMountNameGenerator
  : public fsa::ICommonMountNameGenerator, public detail::Newable {
public:
  explicit HostCommonMountNameGenerator(const char* rootPath) {
    util::Strlcpy(m_RootPath, rootPath, sizeof(m_RootPath));
  }

  Result GenerateCommonMountName(char* name, size_t nameSize) override {
    const size_t requiredSize =
      util::Strnlen(m_RootPath, sizeof(m_RootPath)) + 7;
    NN_FS_RESULT_THROW_UNLESS(nameSize >= requiredSize, ResultTooLongPath());
    util::SNPrintf(name, nameSize, "%s%s", "@Host:", m_RootPath);
    return ResultSuccess();
  }

private:
  char m_RootPath[RootPathLengthMax + 1];
};

[[gnu::noinline]] Result OpenHostFileSystemImpl(
  std::unique_ptr<fsa::IFileSystem>* outFileSystem,
  const fssrv::sf::FspPath& rootPath, MountHostOption option) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IFileSystem> fileSystem;
  if (option.flags != MountHostOptionFlag_None) {
    NN_FS_RESULT_DO(fileSystemProxy->OpenHostFileSystemWithOption(
      nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(&fileSystem),
      rootPath, option.flags));
  }
  else {
    NN_FS_RESULT_DO(fileSystemProxy->OpenHostFileSystem(
      nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(&fileSystem),
      rootPath));
  }
  std::unique_ptr<fsa::IFileSystem> adapter(
    new detail::FileSystemServiceObjectAdapter(std::move(fileSystem)));
  NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
    ResultAllocationMemoryFailedInHostA());
  *outFileSystem = std::move(adapter);
  return ResultSuccess();
}

inline Result RegisterHostRoot(std::unique_ptr<fsa::IFileSystem>&& fileSystem) {
  std::unique_ptr<fsa::ICommonMountNameGenerator> generator(
    new HostRootCommonMountNameGenerator());
  NN_FS_RESULT_THROW_UNLESS(generator != nullptr,
    ResultAllocationMemoryFailedInHostC());
  return fsa::Register(HostRootFileSystemMountName, std::move(fileSystem),
    std::move(generator));
}

inline Result OpenHostFileSystemImpl(
  std::unique_ptr<fsa::IFileSystem>* outFileSystem, const char* name,
  const char* rootPath, MountHostOption option) {
  NN_FS_RESULT_THROW_UNLESS(outFileSystem != nullptr && name != nullptr &&
    rootPath != nullptr, ResultNullptrArgument());
  NN_FS_RESULT_THROW_UNLESS(!IsWindowsDrive(name), ResultInvalidMountName());
  NN_FS_RESULT_THROW_UNLESS(!detail::IsUsedReservedMountName(name),
    ResultInvalidMountName());
  fssrv::sf::FspPath sfPath = {};
  NN_FS_RESULT_DO(ConvertToFspPath(&sfPath, rootPath));
  if (sfPath.str[0] == '\0') {
    sfPath.str[0] = '.';
    sfPath.str[1] = '\0';
  }
  std::unique_ptr<fsa::IFileSystem> fileSystem;
  NN_FS_RESULT_DO(OpenHostFileSystemImpl(&fileSystem, sfPath, option));
  *outFileSystem = std::move(fileSystem);
  return ResultSuccess();
}

inline Result MountHostImpl(const char* name, const char* rootPath,
  MountHostOption option) {
  NN_FS_RESULT_DO(detail::CheckMountName(name));
  NN_FS_RESULT_THROW_UNLESS(rootPath != nullptr, ResultNullptrArgument());
  std::unique_ptr<fsa::IFileSystem> fileSystem;
  std::unique_ptr<fsa::ICommonMountNameGenerator> generator(
    new HostCommonMountNameGenerator(rootPath));
  NN_FS_RESULT_THROW_UNLESS(generator != nullptr,
    ResultAllocationMemoryFailedInHostB());
  NN_FS_RESULT_DO(OpenHostFileSystemImpl(&fileSystem, name, rootPath,
    option));
  return fsa::Register(name, std::move(fileSystem), std::move(generator));
}

}

namespace detail {

[[gnu::noinline]] Result OpenHostFileSystem(
  std::unique_ptr<fsa::IFileSystem>* outFileSystem,
  const char* name, const char* rootPath, MountHostOption option) {
  return OpenHostFileSystemImpl(outFileSystem, name, rootPath, option);
}

}

Result MountHost(const char* name, const char* rootPath) {
  std::unique_ptr<HostCommonMountNameGenerator> generator;
  auto makeGenerator = [&]() -> Result {
    NN_FS_RESULT_DO(detail::CheckMountName(name));
    NN_FS_RESULT_THROW_UNLESS(rootPath != nullptr, ResultNullptrArgument());
    generator.reset(new HostCommonMountNameGenerator(rootPath));
    NN_FS_RESULT_THROW_UNLESS(generator != nullptr,
      ResultAllocationMemoryFailedInHostB());
    return ResultSuccess();
  };
  Result result;
  NN_FS_ACCESS_LOG_MOUNT_UNLESS_SUCCESS(result, makeGenerator(),
    ", name: \"%s\", root_path: \"%s\"", name, rootPath);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  std::unique_ptr<fsa::IFileSystem> fileSystem;
  NN_FS_ACCESS_LOG_MOUNT_UNLESS_SUCCESS(result,
    detail::OpenHostFileSystem(&fileSystem, name, rootPath,
      MountHostOption{}),
    ", name: \"%s\", root_path: \"%s\"", name, rootPath);
  NN_FS_RESULT_DO(result);
  NN_FS_ACCESS_LOG_MOUNT(result,
    fsa::Register(name, std::move(fileSystem), std::move(generator)),
    ", name: \"%s\", root_path: \"%s\"", name, rootPath);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  NN_FS_ENABLE_MOUNT_ACCESS_LOG(name);
  return ResultSuccess();
}

Result MountHost(const char* name, const char* rootPath,
  const MountHostOption& option) {
  std::unique_ptr<HostCommonMountNameGenerator> generator;
  auto makeGenerator = [&]() -> Result {
    NN_FS_RESULT_DO(detail::CheckMountName(name));
    NN_FS_RESULT_THROW_UNLESS(rootPath != nullptr, ResultNullptrArgument());
    generator.reset(new HostCommonMountNameGenerator(rootPath));
    NN_FS_RESULT_THROW_UNLESS(generator != nullptr,
      ResultAllocationMemoryFailedInHostB());
    return ResultSuccess();
  };
  Result result;
  NN_FS_ACCESS_LOG_MOUNT_UNLESS_SUCCESS(result, makeGenerator(),
    ", name: \"%s\", root_path: \"%s\", mount_host_option: %s", name,
    rootPath, detail::IdString().ToString(option));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  std::unique_ptr<fsa::IFileSystem> fileSystem;
  NN_FS_ACCESS_LOG_MOUNT_UNLESS_SUCCESS(result,
    detail::OpenHostFileSystem(&fileSystem, name, rootPath, option),
    ", name: \"%s\", root_path: \"%s\", mount_host_option: %s", name,
    rootPath, detail::IdString().ToString(option));
  NN_FS_RESULT_DO(result);
  NN_FS_ACCESS_LOG_MOUNT(result,
    fsa::Register(name, std::move(fileSystem), std::move(generator)),
    ", name: \"%s\", root_path: \"%s\", mount_host_option: %s", name,
    rootPath, detail::IdString().ToString(option));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  NN_FS_ENABLE_MOUNT_ACCESS_LOG(name);
  return ResultSuccess();
}

Result MountHostForSystem(const char* name, const char* rootPath) {
  return MountHostImpl(name, rootPath, MountHostOption{});
}

Result MountHostRoot() {
  std::unique_ptr<fsa::IFileSystem> fileSystem;
  fssrv::sf::FspPath sfPath = {};
  Result result;
  NN_FS_ACCESS_LOG_MOUNT_UNLESS_SUCCESS(result,
    OpenHostFileSystemImpl(&fileSystem, sfPath, MountHostOption{}),
    ", name: \"%s\"", HostRootFileSystemMountName);
  NN_FS_RESULT_DO(result);
  NN_FS_ACCESS_LOG_MOUNT(result, RegisterHostRoot(std::move(fileSystem)),
    ", name: \"%s\"", HostRootFileSystemMountName);
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  g_IsHostRootMounted = true;
  NN_FS_ENABLE_MOUNT_ACCESS_LOG(HostRootFileSystemMountName);
  return ResultSuccess();
}

Result MountHostRoot(const MountHostOption& option) {
  std::unique_ptr<fsa::IFileSystem> fileSystem;
  fssrv::sf::FspPath sfPath = {};
  Result result;
  NN_FS_ACCESS_LOG_MOUNT_UNLESS_SUCCESS(result,
    OpenHostFileSystemImpl(&fileSystem, sfPath, option),
    ", name: \"%s\", mount_host_option: %s", HostRootFileSystemMountName,
    detail::IdString().ToString(option));
  NN_FS_RESULT_DO(result);
  NN_FS_ACCESS_LOG_MOUNT(result, RegisterHostRoot(std::move(fileSystem)),
    ", name: \"%s\", mount_host_option: %s", HostRootFileSystemMountName,
    detail::IdString().ToString(option));
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(result);
  g_IsHostRootMounted = true;
  NN_FS_ENABLE_MOUNT_ACCESS_LOG(HostRootFileSystemMountName);
  return ResultSuccess();
}

void UnmountHostRoot() {
  Result result;
  NN_FS_ACCESS_LOG_FILE_SYSTEM_ACCESSOR(result,
    detail::Unmount(HostRootFileSystemMountName),
    HostRootFileSystemMountName, ", name: \"%s\"",
    HostRootFileSystemMountName);
  NN_FS_ABORT_UNLESS_RESULT_SUCCESS_WITH_LOG(result);
  g_IsHostRootMounted = false;
}

bool IsHostRootMounted() {
  return g_IsHostRootMounted;
}

}
