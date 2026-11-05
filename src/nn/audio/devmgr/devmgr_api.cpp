#include "nn/audio/detail/audio_name_storage.hpp"
#include "nn/audio/devmgr/devmgr.hpp"

namespace nn::audio::devmgr {
namespace {

constexpr Result ResultNotInitialized = {0xc8099};
constexpr Result ResultAlreadyCreated = {0xc8699};
constexpr Result ResultInvalidArgument = {0xc8899};

bool IsAvailable(const ProxyContext* proxy) {
  return detail::IsInitializedImpl() &&
    (proxy == nullptr || proxy->_pService != nullptr);
}

}

Result Initialize() {
  return detail::InitializeImpl();
}

void Finalize() {
  detail::FinalizeImpl();
}

Result CreateProxyContext(ProxyContext* proxy,
  applet::AppletResourceUserId aruid) {
  if (proxy == nullptr) {
    return ResultInvalidArgument;
  }
  if (proxy->_pService != nullptr) {
    return ResultAlreadyCreated;
  }
  return detail::CreateProxyContextImpl(proxy, aruid);
}

void DestroyProxyContext(ProxyContext* proxy) {
  detail::DestroyProxyContextImpl(proxy);
}

int ListVirtualDeviceNames(audio::detail::NameStorageType<255>* names,
  int count, DeviceFunctionality functionality, bool isActiveOnly,
  const ProxyContext* proxy) {
  int listed = 0;
  if (detail::ListVirtualDeviceNamesImpl(&listed, names, count,
    functionality, isActiveOnly, proxy).IsFailure()) {
    return 0;
  }
  return listed;
}

Result GetDefaultVirtualDeviceName(audio::detail::NameStorage<255>* name,
  DeviceFunctionality functionality, const ProxyContext* proxy) {
  Result result =
    detail::GetDefaultVirtualDeviceNameImpl(name, functionality, proxy);
  if (result.IsFailure()) {
    audio::detail::ClearName(name);
  }
  return result;
}

Result IsVirtualDeviceAvailable(const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const ProxyContext* proxy) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  bool isValid = proxy != nullptr ? proxy->_pService != nullptr :
    detail::IsInitializedImpl();
  if (!isValid) {
    return ResultNotInitialized;
  }
  if (functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::IsVirtualDeviceAvailableImpl(name, functionality, proxy);
}

Result IsVirtualDeviceStreamFormatSupported(
  const audio::detail::NameStorage<255>& name, const StreamFormat& format,
  DeviceFunctionality functionality, const ProxyContext* proxy) {
  if (!IsAvailable(proxy)) {
    return ResultNotInitialized;
  }
  if (functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::IsVirtualDeviceStreamFormatSupportedImpl(name, format,
    functionality, proxy);
}

Result IsCaptureDeviceStreamFormatSupported(
  const audio::detail::NameStorage<255>& name, const StreamFormat& format,
  const ProxyContext* proxy) {
  if (!IsAvailable(proxy)) {
    return ResultNotInitialized;
  }
  return detail::IsCaptureDeviceStreamFormatSupportedImpl(name, format,
    proxy);
}

Result GetVirtualDeviceProfile(VirtualDeviceProfile* profile,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const ProxyContext* proxy) {
  if (!IsAvailable(proxy)) {
    return ResultNotInitialized;
  }
  if (profile == nullptr || functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::GetVirtualDeviceProfileImpl(profile, name, functionality,
    proxy);
}

Result GetCaptureDeviceProfile(CaptureDeviceProfile* profile,
  const audio::detail::NameStorage<255>& name, const ProxyContext* proxy) {
  if (!IsAvailable(proxy)) {
    return ResultNotInitialized;
  }
  if (profile == nullptr) {
    return ResultInvalidArgument;
  }
  return detail::GetCaptureDeviceProfileImpl(profile, name, proxy);
}

Result GetPhysicalDeviceName(audio::detail::NameStorage<255>* physicalName,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const ProxyContext* proxy) {
  if (!IsAvailable(proxy)) {
    return ResultNotInitialized;
  }
  if (physicalName == nullptr || functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::GetPhysicalDeviceNameImpl(physicalName, name,
    functionality, proxy);
}

Result AttachStream(const audio::detail::NameStorage<255>& name, uint32_t id,
  DeviceFunctionality functionality, ProxyContext* proxy) {
  if (!IsAvailable(proxy)) {
    return ResultNotInitialized;
  }
  if (functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::AttachStreamImpl(name, id, functionality, proxy);
}

Result AttachCaptureStream(const audio::detail::NameStorage<255>& name,
  uint32_t id, ProxyContext* proxy) {
  if (!IsAvailable(proxy)) {
    return ResultNotInitialized;
  }
  return detail::AttachCaptureStreamImpl(name, id, proxy);
}

Result AttachInjectionStream(const audio::detail::NameStorage<255>& name,
  uint32_t id, ProxyContext* proxy) {
  if (!IsAvailable(proxy)) {
    return ResultNotInitialized;
  }
  return detail::AttachInjectionStreamImpl(name, id, proxy);
}

Result DetachStream(uint32_t id, ProxyContext* proxy) {
  if (!IsAvailable(proxy)) {
    return ResultNotInitialized;
  }
  return detail::DetachStreamImpl(id, proxy);
}

Result GetDeviceStreamFormat(StreamFormat* format,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, const ProxyContext* proxy) {
  if (!IsAvailable(proxy)) {
    return ResultNotInitialized;
  }
  if (format == nullptr || functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::GetDeviceStreamFormatImpl(format, name, functionality,
    proxy);
}

Result AcquireVirtualDeviceStateChangeEvent(os::SystemEvent* event,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, ProxyContext* proxy) {
  if (!IsAvailable(proxy)) {
    return ResultNotInitialized;
  }
  if (event == nullptr || functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::AcquireVirtualDeviceStateChangeEventImpl(event, name,
    functionality, proxy);
}

Result ReleaseVirtualDeviceStateChangeEvent(os::SystemEvent* event,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, ProxyContext* proxy) {
  if (!IsAvailable(proxy)) {
    return ResultNotInitialized;
  }
  if (event == nullptr || functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::ReleaseVirtualDeviceStateChangeEventImpl(event, name,
    functionality, proxy);
}

Result AcquireVirtualDeviceStateChangeEventHandle(uint32_t* handle,
  uint64_t key, const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, ProxyContext* proxy) {
  if (!IsAvailable(proxy)) {
    return ResultNotInitialized;
  }
  if (handle == nullptr || functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::AcquireVirtualDeviceStateChangeEventHandleImpl(handle, key,
    name, functionality, proxy);
}

Result ReleaseVirtualDeviceStateChangeEventHandle(uint64_t key,
  const audio::detail::NameStorage<255>& name,
  DeviceFunctionality functionality, ProxyContext* proxy) {
  if (!IsAvailable(proxy)) {
    return ResultNotInitialized;
  }
  if (functionality == 0) {
    return ResultInvalidArgument;
  }
  return detail::ReleaseVirtualDeviceStateChangeEventHandleImpl(key, name,
    functionality, proxy);
}

int GetMixCount() {
  if (!detail::IsInitializedImpl()) {
    return 0;
  }
  return detail::GetMixCountImpl();
}

int GetMixTopology(MixNode* nodes, int count, MixNodeFlagSet flags) {
  bool isInitialized = detail::IsInitializedImpl();
  if (count < 1 || !isInitialized) {
    return 0;
  }
  return detail::GetMixTopologyImpl(nodes, count, flags);
}

Result GetMixNode(MixNode* node, uint32_t id, MixNodeFlagSet flags) {
  if (!detail::IsInitializedImpl()) {
    return ResultNotInitialized;
  }
  return detail::GetMixNodeImpl(node, id, flags);
}

}
