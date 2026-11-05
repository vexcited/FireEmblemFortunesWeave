#include <mutex>

#include "nn/am/service/am_library_applet_self.hpp"
#include "nn/applet/applet_api.hpp"
#include "nn/applet/applet_types.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/sdk_mutex.hpp"
#include "nn/os/system_event.hpp"

namespace nn::applet {

LibraryAppletSelfHandle CreateLibraryAppletSelf(
  sf::SharedPointer<am::service::ILibraryAppletSelfAccessor> self,
  sf::SharedPointer<am::service::IProcessWindingController> winding);
void CloseLibraryAppletSelf(LibraryAppletSelfHandle handle);
void UnpopToInChannel(LibraryAppletSelfHandle handle, StorageHandle storage);
bool TryPopFromInChannel(StorageHandle* pOutStorage,
  LibraryAppletSelfHandle handle);
bool TryPopFromInteractiveInChannel(StorageHandle* pOutStorage,
  LibraryAppletSelfHandle handle);
os::SystemEventType* GetPopFromInteractiveInChannelEvent(
  LibraryAppletSelfHandle handle);
void PushToOutChannel(LibraryAppletSelfHandle handle, StorageHandle storage);
void PushToInteractiveOutChannel(LibraryAppletSelfHandle handle,
  StorageHandle storage);
void PushToContextStack(LibraryAppletSelfHandle handle,
  StorageHandle storage);
bool TryPopFromContextStack(StorageHandle* pOutStorage,
  LibraryAppletSelfHandle handle);
uint64_t GetIndirectLayerProducerHandle(LibraryAppletSelfHandle handle);

namespace {

using am::service::ILibraryAppletSelfAccessor;
using am::service::IProcessWindingController;
using am::service::IStorage;

struct LibraryAppletSelf {
  ILibraryAppletSelfAccessor* self;
  IProcessWindingController* winding;
  bool isPopFromInteractiveInChannelEventInitialized;
  os::SystemEventType popFromInteractiveInChannelEvent;
};

const int LibraryAppletSelfCountMax = 2;

os::SdkMutex g_LibraryAppletSelfMutex;
LibraryAppletSelf g_LibraryAppletSelves[LibraryAppletSelfCountMax];

LibraryAppletSelf* Get(LibraryAppletSelfHandle handle) {
  return static_cast<LibraryAppletSelf*>(handle._p);
}

bool IsResultNoData(Result result) {
  return result.GetInnerValueForDebug() == ((2 << 9) | 128);
}

template <typename T>
bool TryPopStorage(StorageHandle* pOutStorage, T* pObject,
  Result (T::*pop)(const sf::Out<sf::SharedPointer<IStorage>>&)) {
  sf::SharedPointer<IStorage> storage;
  const Result result =
    (pObject->*pop)(sf::Out<sf::SharedPointer<IStorage>>(&storage));
  if (result.IsSuccess()) {
    pOutStorage->_p = storage.Detach();
    return true;
  }
  const Result unexpected = IsResultNoData(result) ? Result{0} : result;
  storage.Reset();
  NN_ABORT_UNLESS_RESULT_SUCCESS(unexpected);
  return false;
}

template <typename T>
void PushStorage(T* pObject, Result (T::*push)(sf::SharedPointer<IStorage>),
  StorageHandle storage) {
  NN_ABORT_UNLESS_RESULT_SUCCESS((pObject->*push)(
    sf::SharedPointer<IStorage>(static_cast<IStorage*>(storage._p), true)));
  ReleaseStorage(storage);
}

}

LibraryAppletSelfHandle CreateLibraryAppletSelf(
  sf::SharedPointer<ILibraryAppletSelfAccessor> self,
  sf::SharedPointer<IProcessWindingController> winding) {
  ILibraryAppletSelfAccessor* pSelf = self.Detach();
  IProcessWindingController* pWinding = winding.Detach();

  std::lock_guard<os::SdkMutex> lock(g_LibraryAppletSelfMutex);
  LibraryAppletSelf* pEntry = nullptr;
  for (LibraryAppletSelf& entry : g_LibraryAppletSelves) {
    if (entry.self == nullptr) {
      pEntry = &entry;
      break;
    }
  }
  NN_ABORT_UNLESS(pEntry != nullptr);
  pEntry->self = pSelf;
  pEntry->winding = pWinding;
  pEntry->isPopFromInteractiveInChannelEventInitialized = false;
  return LibraryAppletSelfHandle{pEntry};
}

void CloseLibraryAppletSelf(LibraryAppletSelfHandle handle) {
  std::lock_guard<os::SdkMutex> lock(g_LibraryAppletSelfMutex);
  LibraryAppletSelf* pEntry = Get(handle);
  if (pEntry->isPopFromInteractiveInChannelEventInitialized) {
    os::DestroySystemEvent(&pEntry->popFromInteractiveInChannelEvent);
  }
  pEntry->self->Release();
  pEntry->winding->Release();
  pEntry->self = nullptr;
}

void UnpopToInChannel(LibraryAppletSelfHandle handle, StorageHandle storage) {
  PushStorage(Get(handle)->self, &ILibraryAppletSelfAccessor::UnpopInData,
    storage);
}

bool TryPopFromInChannel(StorageHandle* pOutStorage,
  LibraryAppletSelfHandle handle) {
  return TryPopStorage(pOutStorage, Get(handle)->self,
    &ILibraryAppletSelfAccessor::PopInData);
}

bool TryPopFromInteractiveInChannel(StorageHandle* pOutStorage,
  LibraryAppletSelfHandle handle) {
  return TryPopStorage(pOutStorage, Get(handle)->self,
    &ILibraryAppletSelfAccessor::PopInteractiveInData);
}

os::SystemEventType* GetPopFromInteractiveInChannelEvent(
  LibraryAppletSelfHandle handle) {
  std::lock_guard<os::SdkMutex> lock(g_LibraryAppletSelfMutex);
  LibraryAppletSelf* pEntry = Get(handle);
  if (!pEntry->isPopFromInteractiveInChannelEventInitialized) {
    sf::NativeHandle eventHandle;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      pEntry->self->GetPopInteractiveInDataEvent(
        sf::Out<sf::NativeHandle>(&eventHandle)));
    os::AttachReadableHandleToSystemEvent(
      &pEntry->popFromInteractiveInChannelEvent, eventHandle.GetOsHandle(),
      eventHandle.IsManaged(), os::EventClearMode_ManualClear);
    eventHandle.Detach();
    pEntry->isPopFromInteractiveInChannelEventInitialized = true;
  }
  return &pEntry->popFromInteractiveInChannelEvent;
}

void PushToOutChannel(LibraryAppletSelfHandle handle, StorageHandle storage) {
  PushStorage(Get(handle)->self, &ILibraryAppletSelfAccessor::PushOutData,
    storage);
}

void PushToInteractiveOutChannel(LibraryAppletSelfHandle handle,
  StorageHandle storage) {
  PushStorage(Get(handle)->self,
    &ILibraryAppletSelfAccessor::PushInteractiveOutData, storage);
}

void PushToContextStack(LibraryAppletSelfHandle handle,
  StorageHandle storage) {
  PushStorage(Get(handle)->winding, &IProcessWindingController::PushContext,
    storage);
}

bool TryPopFromContextStack(StorageHandle* pOutStorage,
  LibraryAppletSelfHandle handle) {
  return TryPopStorage(pOutStorage, Get(handle)->winding,
    &IProcessWindingController::PopContext);
}

uint64_t GetIndirectLayerProducerHandle(LibraryAppletSelfHandle handle) {
  uint64_t layerHandle = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    Get(handle)->self->GetIndirectLayerProducerHandle(
      sf::Out<uint64_t>(&layerHandle)));
  return layerHandle;
}

}
