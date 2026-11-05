#include <mutex>

#include "nn/am/service/am_controllers.hpp"
#include "nn/am/service/am_storage.hpp"
#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/os/transfer_memory.hpp"

namespace nn::result::detail {

[[gnu::cold]] void ConvertInvalidImpl(Result result);

}

namespace nn::applet {

Result MapHandleStorage(void** pOutAddress, size_t* pOutSize,
  StorageHandle storage);
void UnmapHandleStorage(StorageHandle storage);
int64_t GetStorageSize(StorageHandle storage);
Result CreateLargeStorage(StorageHandle* pOutStorage, void* buffer,
  size_t size, bool isWritable);
bool TryPopFromAppletBoundChannel(StorageHandle* pOutStorage);

namespace {

using am::service::IStorage;
using am::service::IStorageAccessor;
using am::service::ITransferStorageAccessor;

// Applet results are module 131.
const Result ResultStorageNotAccessible = {(30 << 9) | 131};
const Result ResultTransferStorageNotAccessible = {(31 << 9) | 131};
const Result ResultHandleStorageFull = {(20 << 9) | 131};
const Result ResultHandleStorageAlreadyMapped = {(21 << 9) | 131};

bool IsResultInvalidStorageType(Result result) {
  return result.GetInnerValueForDebug() == ((511 << 9) | 128);
}

bool IsResultNoData(Result result) {
  return result.GetInnerValueForDebug() == ((2 << 9) | 128);
}

IStorage* GetStorage(StorageHandle handle) {
  return static_cast<IStorage*>(handle._p);
}

struct HandleStorageHolder {
  IStorage* storage;
  uint64_t size;
  os::TransferMemoryType transferMemory;
};

const int HandleStorageCountMax = 8;

os::SdkMutex g_HandleStorageMutex;
HandleStorageHolder g_HandleStorageHolders[HandleStorageCountMax];

HandleStorageHolder* FindHandleStorageHolder(IStorage* storage) {
  for (HandleStorageHolder& holder : g_HandleStorageHolders) {
    if (holder.storage == storage) {
      return &holder;
    }
  }
  return nullptr;
}

}

Result CreateStorage(StorageHandle* pOutStorage, size_t size) {
  sf::SharedPointer<IStorage> storage;
  NN_RESULT_DO(am::service::GetLibraryAppletCreatorObject()->CreateStorage(
    sf::Out<sf::SharedPointer<IStorage>>(&storage), size));
  pOutStorage->_p = storage.Detach();
  return Result{0};
}

Result CreateLargeStorage(StorageHandle* pOutStorage, void* buffer,
  size_t size, bool isWritable) {
  os::TransferMemoryType transferMemory = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(os::CreateTransferMemory(&transferMemory,
    buffer, size, os::MemoryPermission_None));

  Result result;
  {
    sf::SharedPointer<IStorage> storage;
    am::service::ILibraryAppletCreator* pCreator =
      am::service::GetLibraryAppletCreatorObject();
    result = pCreator->CreateTransferMemoryStorage(
      sf::Out<sf::SharedPointer<IStorage>>(&storage),
      sf::NativeHandle(os::DetachTransferMemory(&transferMemory), true), size,
      isWritable);
    if (result.IsSuccess()) {
      pOutStorage->_p = storage.Detach();
    }
  }

  if (transferMemory.state != os::TransferMemoryType::State_NotInitialized) {
    os::DestroyTransferMemory(&transferMemory);
  }
  return result;
}

void ReleaseStorage(StorageHandle storage) {
  GetStorage(storage)->Release();
}

int64_t GetStorageSize(StorageHandle storage) {
  sf::SharedPointer<IStorageAccessor> accessor;
  NN_ABORT_UNLESS_RESULT_SUCCESS(GetStorage(storage)->Open(
    sf::Out<sf::SharedPointer<IStorageAccessor>>(&accessor)));
  int64_t size = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    accessor->GetSize(sf::Out<int64_t>(&size)));
  return size;
}

Result WriteToStorage(StorageHandle storage, int64_t offset,
  const void* buffer, size_t size) {
  sf::SharedPointer<IStorageAccessor> accessor;
  const Result result = GetStorage(storage)->Open(
    sf::Out<sf::SharedPointer<IStorageAccessor>>(&accessor));
  if (IsResultInvalidStorageType(result)) {
    return ResultStorageNotAccessible;
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    accessor->Write(offset, sf::InBuffer(buffer, size)));
  return Result{0};
}

Result ReadFromStorage(StorageHandle storage, int64_t offset, void* buffer,
  size_t size) {
  sf::SharedPointer<IStorageAccessor> accessor;
  const Result result = GetStorage(storage)->Open(
    sf::Out<sf::SharedPointer<IStorageAccessor>>(&accessor));
  if (IsResultInvalidStorageType(result)) {
    return ResultStorageNotAccessible;
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(result);
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    accessor->Read(offset, sf::OutBuffer(buffer, size)));
  return Result{0};
}

Result MapHandleStorage(void** pOutAddress, size_t* pOutSize,
  StorageHandle storage) {
  sf::SharedPointer<ITransferStorageAccessor> accessor;
  const Result openResult = GetStorage(storage)->OpenTransferStorage(
    sf::Out<sf::SharedPointer<ITransferStorageAccessor>>(&accessor));
  if (IsResultInvalidStorageType(openResult)) {
    return ResultTransferStorageNotAccessible;
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(openResult);

  sf::NativeHandle handle;
  uint64_t size = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(accessor->GetHandle(
    sf::Out<sf::NativeHandle>(&handle), sf::Out<uint64_t>(&size)));
  const uint32_t osHandle = handle.GetOsHandle();
  const bool isManaged = handle.IsManaged();
  handle.Detach();

  g_HandleStorageMutex.lock();
  Result result = ResultHandleStorageAlreadyMapped;
  if (FindHandleStorageHolder(GetStorage(storage)) == nullptr) {
    HandleStorageHolder* pHolder = FindHandleStorageHolder(nullptr);
    if (pHolder != nullptr) {
      os::AttachTransferMemory(&pHolder->transferMemory, size, osHandle,
        isManaged);
      pHolder->storage = GetStorage(storage);
      pHolder->size = size;
      result = os::MapTransferMemory(pOutAddress, &pHolder->transferMemory,
        os::MemoryPermission_None);
      g_HandleStorageMutex.unlock();
      if (result.IsSuccess()) {
        *pOutSize = size;
      }
      return result;
    }
    result = ResultHandleStorageFull;
  }
  g_HandleStorageMutex.unlock();
  if (isManaged) {
    os::CloseNativeHandle(osHandle);
  }
  return result;
}

void UnmapHandleStorage(StorageHandle storage) {
  std::lock_guard<os::SdkMutex> lock(g_HandleStorageMutex);
  HandleStorageHolder* pHolder = FindHandleStorageHolder(GetStorage(storage));
  NN_ABORT_UNLESS_NOT_NULL(pHolder);
  os::DestroyTransferMemory(&pHolder->transferMemory);
  pHolder->storage = nullptr;
}

bool TryPopFromAppletBoundChannel(StorageHandle* pOutStorage) {
  sf::SharedPointer<IStorage> storage;
  const Result result =
    am::service::GetAppletCommonFunctionsObject()->PopFromAppletBoundChannel(
      sf::Out<sf::SharedPointer<IStorage>>(&storage));
  if (result.IsFailure()) {
    if (!IsResultNoData(result)) {
      result::detail::ConvertInvalidImpl(result);
    }
    return false;
  }
  pOutStorage->_p = storage.Detach();
  return true;
}

}
