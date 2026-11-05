#include "nn/audio/detail/audio_name_storage.hpp"
#include "nn/audio/devmgr/devmgr_allocator.hpp"
#include "nn/audio/devmgr/devmgr_service.hpp"
#include "nn/os/system_event_class.hpp"

namespace nn::audio::devmgr::detail {

InitializationState g_InitializationState;
ProxyContextImpl g_DefaultContext;
ServiceObjectAllocator<1216> g_ServiceObjectAllocator;

namespace {

IDeviceManager* GetService(const ProxyContext* proxy) {
  const ProxyContextImpl* context =
    proxy != nullptr ? GetImpl(proxy) : &g_DefaultContext;
  return context->service;
}

}

void FinalizeImpl() {
  g_InitializationState.mutex.Lock();
  if (g_InitializationState.count == 1) {
    IDeviceManager* service = g_DefaultContext.service;
    g_DefaultContext.service = nullptr;
    if (service != nullptr) {
      service->Release();
    }
    g_ServiceObjectAllocator.Release();
  }
  --g_InitializationState.count;
  g_InitializationState.mutex.Unlock();
}

void DestroyProxyContextImpl(ProxyContext* proxy) {
  ProxyContextImpl* context = GetImpl(proxy);
  context->service->Release();
  context->service = nullptr;
  context->aruid = 0;
  g_ServiceObjectAllocator.Release();
}

bool IsInitializedImpl() {
  return g_DefaultContext.service != nullptr;
}

ProxyContextImpl* GetImpl(ProxyContext* proxy) {
  return reinterpret_cast<ProxyContextImpl*>(proxy);
}

const ProxyContextImpl* GetImpl(const ProxyContext* proxy) {
  return reinterpret_cast<const ProxyContextImpl*>(proxy);
}

Result ListVirtualDeviceNamesImpl(int* count,
  audio::detail::NameStorageType<255>* names, int countMax,
  DeviceFunctionality functionality, bool isActiveOnly,
  const ProxyContext* proxy) {
  sf::OutBuffer outBuffer(names, sizeof(*names) * countMax);
  return GetService(proxy)->ListVirtualDeviceNames(sf::Out<int>(count),
    outBuffer, functionality, isActiveOnly);
}

Result GetDefaultVirtualDeviceNameImpl(audio::detail::NameStorage<255>* name,
  DeviceFunctionality functionality, const ProxyContext* proxy) {
  audio::detail::NameStorageType<255> received = {};
  sf::OutBuffer outBuffer(&received, sizeof(received));
  Result result =
    GetService(proxy)->GetDefaultVirtualDeviceName(outBuffer, functionality);
  if (result.IsFailure()) {
    return result;
  }
  audio::detail::CopyName(name, received.buffer);
  return Result{0};
}

Result IsVirtualDeviceAvailableImpl(
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const ProxyContext* proxy) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetService(proxy)->IsVirtualDeviceAvailable(nameBuffer,
    functionality);
}

Result IsVirtualDeviceStreamFormatSupportedImpl(
  const audio::detail::NameStorage<255>& name, const StreamFormat& format,
  DeviceFunctionality functionality, const ProxyContext* proxy) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetService(proxy)->IsVirtualDeviceStreamFormatSupported(nameBuffer,
    format, functionality);
}

Result IsCaptureDeviceStreamFormatSupportedImpl(
  const audio::detail::NameStorage<255>& name, const StreamFormat& format,
  const ProxyContext* proxy) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetService(proxy)->IsCaptureDeviceStreamFormatSupported(nameBuffer,
    format);
}

Result GetVirtualDeviceProfileImpl(VirtualDeviceProfile* profile,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const ProxyContext* proxy) {
  sf::OutBuffer outBuffer(profile, sizeof(*profile));
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetService(proxy)->GetVirtualDeviceProfile(outBuffer, nameBuffer,
    functionality);
}

Result GetCaptureDeviceProfileImpl(CaptureDeviceProfile* profile,
  const audio::detail::NameStorage<255>& name, const ProxyContext* proxy) {
  sf::OutBuffer outBuffer(profile, sizeof(*profile));
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetService(proxy)->GetCaptureDeviceProfile(outBuffer, nameBuffer);
}

Result GetPhysicalDeviceNameImpl(
  audio::detail::NameStorage<255>* physicalName,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const ProxyContext* proxy) {
  audio::detail::NameStorageType<255> received = {};
  sf::OutBuffer outBuffer(&received, sizeof(received));
  sf::InBuffer nameBuffer = ToInBuffer(name);
  Result result = GetService(proxy)->GetPhysicalDeviceName(outBuffer,
    nameBuffer, functionality);
  if (result.IsFailure()) {
    return result;
  }
  audio::detail::CopyName(physicalName, received.buffer);
  return Result{0};
}

Result AttachStreamImpl(const audio::detail::NameStorage<255>& name,
  uint32_t id, DeviceFunctionality functionality, ProxyContext* proxy) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetService(proxy)->AttachStream(nameBuffer, id, functionality);
}

Result AttachCaptureStreamImpl(const audio::detail::NameStorage<255>& name,
  uint32_t id, ProxyContext* proxy) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetService(proxy)->AttachCaptureStream(nameBuffer, id);
}

Result AttachInjectionStreamImpl(const audio::detail::NameStorage<255>& name,
  uint32_t id, ProxyContext* proxy) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetService(proxy)->AttachInjectionStream(nameBuffer, id);
}

Result DetachStreamImpl(uint32_t id, ProxyContext* proxy) {
  return GetService(proxy)->DetachStream(id);
}

Result GetDeviceStreamFormatImpl(StreamFormat* format,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const ProxyContext* proxy) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetService(proxy)->GetDeviceStreamFormat(
    sf::Out<StreamFormat>(format), nameBuffer, functionality);
}

// The event address doubles as the key that identifies the registration.
Result AcquireVirtualDeviceStateChangeEventImpl(os::SystemEvent* event,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, ProxyContext* proxy) {
  sf::NativeHandle handle;
  sf::InBuffer nameBuffer = ToInBuffer(name);
  Result result = GetService(proxy)->AcquireVirtualDeviceStateChangeEvent(
    sf::Out<sf::NativeHandle>(&handle), reinterpret_cast<uint64_t>(event),
    nameBuffer, functionality);
  if (result.IsFailure()) {
    return result;
  }
  event->AttachReadableHandle(handle.GetOsHandle(), handle.IsManaged(),
    os::EventClearMode_AutoClear);
  handle.Detach();
  return Result{0};
}

Result ReleaseVirtualDeviceStateChangeEventImpl(os::SystemEvent* event,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, ProxyContext* proxy) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  Result result = GetService(proxy)->ReleaseVirtualDeviceStateChangeEvent(
    reinterpret_cast<uint64_t>(event), nameBuffer, functionality);
  if (result.IsFailure()) {
    return result;
  }
  os::DestroySystemEvent(event->GetBase());
  return Result{0};
}

Result AcquireVirtualDeviceStateChangeEventHandleImpl(uint32_t* outHandle,
  uint64_t key, const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, ProxyContext* proxy) {
  sf::NativeHandle handle;
  sf::InBuffer nameBuffer = ToInBuffer(name);
  Result result = GetService(proxy)->AcquireVirtualDeviceStateChangeEvent(
    sf::Out<sf::NativeHandle>(&handle), key, nameBuffer, functionality);
  if (result.IsFailure()) {
    return result;
  }
  *outHandle = handle.GetOsHandle();
  handle.Detach();
  return result;
}

Result ReleaseVirtualDeviceStateChangeEventHandleImpl(uint64_t key,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, ProxyContext* proxy) {
  sf::InBuffer nameBuffer = ToInBuffer(name);
  return GetService(proxy)->ReleaseVirtualDeviceStateChangeEvent(key,
    nameBuffer, functionality);
}

int GetMixCountImpl() {
  int count = 0;
  if (g_DefaultContext.service->GetMixCount(sf::Out<int>(&count))
    .IsFailure()) {
    return 0;
  }
  return count;
}

int GetMixTopologyImpl(MixNode* nodes, int count, MixNodeFlagSet flags) {
  int listed = 0;
  sf::OutBuffer outBuffer(nodes, sizeof(*nodes) * count);
  if (g_DefaultContext.service->GetMixTopology(sf::Out<int>(&listed),
    outBuffer, flags).IsFailure()) {
    return 0;
  }
  return listed;
}

Result GetMixNodeImpl(MixNode* node, uint32_t id, MixNodeFlagSet flags) {
  sf::OutBuffer outBuffer(node, sizeof(*node));
  return g_DefaultContext.service->GetMixNode(outBuffer, id, flags);
}

}
