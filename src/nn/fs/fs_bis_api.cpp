#include <memory>

#include "nn/fs/fs_bis.hpp"
#include "nn/fs/fs_flush_check_storage.hpp"
#include "nn/fs/detail/fs_file_system_accessor.hpp"
#include "nn/fs/detail/fs_file_system_proxy_service_object.hpp"
#include "nn/fs/detail/fs_file_system_service_object_adapter.hpp"
#include "nn/fs/detail/fs_log.hpp"
#include "nn/fs/detail/fs_newable.hpp"
#include "nn/fs/detail/fs_storage_service_object_adapter.hpp"
#include "nn/fs/fsa/fs_registrar.hpp"
#include "nn/util/string_util.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::diag::detail {

[[noreturn]] void AbortImpl();

}

namespace nn::fs {

namespace {

constexpr Result ResultAllocationMemoryFailedInBisA() {
  return detail::MakeResult(3215);
}

constexpr Result ResultAllocationMemoryFailedInBisB() {
  return detail::MakeResult(3216);
}

constexpr Result ResultAllocationMemoryFailedInBisC() {
  return detail::MakeResult(3217);
}

inline const char* GetBisMountNameImpl(BisPartitionId id) {
  switch (id) {
    case BisPartitionId::CalibrationFile:
      return "@CalibFile";
    case BisPartitionId::SafeMode:
      return "@Safe";
    case BisPartitionId::User:
      return "@User";
    case BisPartitionId::System:
      return "@System";
    case BisPartitionId::System0:
      return "@System0";
    case BisPartitionId::BootPartition1Root:
    case BisPartitionId::BootPartition2Root:
    case BisPartitionId::UserDataRoot:
    case BisPartitionId::BootConfigAndPackage2Part1:
    case BisPartitionId::BootConfigAndPackage2Part2:
    case BisPartitionId::BootConfigAndPackage2Part3:
    case BisPartitionId::BootConfigAndPackage2Part4:
    case BisPartitionId::BootConfigAndPackage2Part5:
    case BisPartitionId::BootConfigAndPackage2Part6:
    case BisPartitionId::CalibrationBinary:
    case BisPartitionId::DeviceTreeBlob:
      diag::detail::AbortImpl();
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

class Wiper : public IWiper, public detail::Newable {
public:
  explicit Wiper(nn::sf::SharedPointer<fssrv::sf::IWiper>&& wiper)
    : m_pWiper(wiper.Detach()) {}

  ~Wiper() override {
    if (m_pWiper != nullptr) {
      m_pWiper->Release();
    }
  }

  Result Startup() override {
    NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_pWiper->Startup());
    return ResultSuccess();
  }

  Result Process() override {
    NN_FS_RESULT_DO_WITH_ABORT_CHECK(m_pWiper->Process());
    return ResultSuccess();
  }

private:
  fssrv::sf::IWiper* m_pWiper;
};

class BisCommonMountNameGenerator : public fsa::ICommonMountNameGenerator,
  public detail::Newable {
public:
  explicit BisCommonMountNameGenerator(BisPartitionId id) : m_Id(id) {}

  Result GenerateCommonMountName(char* name, size_t nameSize) override {
    util::SNPrintf(name, nameSize, "%s:", GetBisMountNameImpl(m_Id));
    return ResultSuccess();
  }

private:
  BisPartitionId m_Id;
};

Result MountBis(const char* name, BisPartitionId id, const char* rootPath) {
  static_cast<void>(rootPath);
  auto mount = [&]() -> Result {
    NN_FS_RESULT_DO(detail::CheckMountNameAcceptingReservedMountName(name));
    auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
    fssrv::sf::FspPath sfPath = {};
    nn::sf::SharedPointer<fssrv::sf::IFileSystem> fileSystem;
    NN_FS_RESULT_DO(fileSystemProxy->OpenBisFileSystem(
      nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IFileSystem>>(&fileSystem),
      sfPath, static_cast<uint32_t>(id)));
    std::unique_ptr<BisCommonMountNameGenerator> generator(
      new BisCommonMountNameGenerator(id));
    NN_FS_RESULT_THROW_UNLESS(generator != nullptr,
      ResultAllocationMemoryFailedInBisA());
    std::unique_ptr<detail::FileSystemServiceObjectAdapter> adapter(
      new detail::FileSystemServiceObjectAdapter(std::move(fileSystem)));
    NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
      ResultAllocationMemoryFailedInBisB());
    return fsa::Register(name, std::move(adapter), std::move(generator));
  };
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(mount());
  return ResultSuccess();
}

}

const char* GetBisMountName(BisPartitionId id) {
  return GetBisMountNameImpl(id);
}

Result MountBis(const char* name, BisPartitionId id) {
  return MountBis(name, id, nullptr);
}

Result MountBis(BisPartitionId id, const char* rootPath) {
  return MountBis(GetBisMountNameImpl(id), id, rootPath);
}

namespace detail {

// The public wrapper reaches this exported function through its PLT stub.
[[gnu::noinline]] Result OpenBisPartition(
  std::unique_ptr<IStorage>* outStorage, BisPartitionId id) {
  auto fileSystemProxy = GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IStorage> storage;
  NN_FS_RESULT_DO(fileSystemProxy->OpenBisStorage(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IStorage>>(&storage),
    static_cast<uint32_t>(id)));
  std::unique_ptr<IStorage> adapter(
    new StorageServiceObjectAdapter<fssrv::sf::IStorage>(std::move(storage)));
  NN_FS_RESULT_THROW_UNLESS(adapter != nullptr,
    ResultAllocationMemoryFailedInBisC());
  std::unique_ptr<IStorage> flushCheckStorage(
    new FlushCheckStorage(std::move(adapter)));
  NN_FS_RESULT_THROW_UNLESS(flushCheckStorage != nullptr,
    ResultAllocationMemoryFailedNew());
  *outStorage = std::move(flushCheckStorage);
  return ResultSuccess();
}

}

Result OpenBisPartition(std::unique_ptr<IStorage>* outStorage,
  BisPartitionId id) {
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(detail::OpenBisPartition(outStorage, id));
  return ResultSuccess();
}

Result FlushCheckStorage::Read(int64_t offset, void* buffer, size_t size) {
  NN_FS_RESULT_DO(m_LastResult);
  m_LastResult = m_BaseStorage->Read(offset, buffer, size);
  return m_LastResult;
}

Result FlushCheckStorage::Write(int64_t offset, const void* buffer,
  size_t size) {
  NN_FS_RESULT_DO(m_LastResult);
  m_LastResult = m_BaseStorage->Write(offset, buffer, size);
  if (IsSuccess(m_LastResult)) {
    m_NeedsFlush = true;
  }
  return m_LastResult;
}

Result FlushCheckStorage::Flush() {
  NN_FS_RESULT_DO(m_LastResult);
  m_NeedsFlush = false;
  const Result result = m_BaseStorage->Flush();
  m_LastResult = result;
  NN_FS_RESULT_DO(result);
  return ResultSuccess();
}

Result FlushCheckStorage::SetSize(int64_t size) {
  NN_FS_RESULT_DO(m_LastResult);
  m_LastResult = m_BaseStorage->SetSize(size);
  return m_LastResult;
}

Result FlushCheckStorage::GetSize(int64_t* outSize) {
  NN_FS_RESULT_DO(m_LastResult);
  m_LastResult = m_BaseStorage->GetSize(outSize);
  return m_LastResult;
}

Result FlushCheckStorage::OperateRange(void* outBuffer, size_t outBufferSize,
  OperationId operationId, int64_t offset, int64_t size, const void* inBuffer,
  size_t inBufferSize) {
  NN_FS_RESULT_DO(m_LastResult);
  return m_BaseStorage->OperateRange(outBuffer, outBufferSize, operationId,
    offset, size, inBuffer, inBufferSize);
}

Result OpenBisWiper(std::unique_ptr<IWiper>* outWiper,
  nn::sf::NativeHandle&& transferMemoryHandle, size_t transferMemorySize) {
  auto fileSystemProxy = detail::GetFileSystemProxyServiceObject();
  nn::sf::SharedPointer<fssrv::sf::IWiper> wiper;
  NN_FS_RESULT_DO_WITH_ABORT_CHECK(fileSystemProxy->OpenBisWiper(
    nn::sf::Out<nn::sf::SharedPointer<fssrv::sf::IWiper>>(&wiper),
    std::move(transferMemoryHandle), transferMemorySize));
  outWiper->reset(new Wiper(std::move(wiper)));
  return ResultSuccess();
}

}
