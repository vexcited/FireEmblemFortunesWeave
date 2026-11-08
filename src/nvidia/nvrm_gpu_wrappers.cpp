#include <stdint.h>

struct NvRmGpuObject {
  const uintptr_t* ops;
};

struct NvRmGpuRegisterBufferAttributes {
  uint32_t reserved;
  uint8_t kind;
  uint8_t flags;
};

[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuDeviceOpenDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const NvRmGpuRegisterBufferAttributes
  g_NvRmGpuDeviceRegisterBufferDefaultAttributes;
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuChannelKickoffPbDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuDeviceGetCpuTimeCorrelationInfoDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuRegOpsSessionCreateDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuRegOpsSessionExecWithAttrDefaultAttributes[];

[[gnu::visibility("hidden")]] uint64_t NvRmGpuLibGetVersionInfoImpl(
  uintptr_t argument0);
[[gnu::visibility("hidden")]] void NvRmGpuLibGetInfoImpl(uintptr_t argument0,
  uintptr_t argument1);
[[gnu::visibility("hidden")]] uint64_t NvRmGpuLibListDevicesImpl(
  uintptr_t argument0, uintptr_t argument1);
[[gnu::visibility("hidden")]] uint64_t NvRmGpuDeviceOpenImpl(
  uintptr_t argument0, uintptr_t argument1, uintptr_t argument2,
  uintptr_t argument3);
[[gnu::visibility("hidden")]] uint64_t NvRmGpuChannelKickoffPbImpl(
  uintptr_t argument0, uintptr_t argument1, uintptr_t argument2,
  uintptr_t argument3, uintptr_t argument4, uintptr_t argument5,
  uintptr_t attributes);

namespace {

template <typename... Args>
[[gnu::always_inline]] inline uint64_t Dispatch(NvRmGpuObject* object,
  int offset, Args... args) {
  using Operation = uint64_t (*)(NvRmGpuObject*, Args...);
  return reinterpret_cast<Operation>(object->ops[offset / 8])(object,
    args...);
}

}

extern "C" uint64_t NvRmGpuLibGetVersionInfo(uintptr_t argument0) {
  return NvRmGpuLibGetVersionInfoImpl(argument0);
}

extern "C" uint64_t NvRmGpuLibGetInfo(uintptr_t argument0,
  uintptr_t argument1) {
  NvRmGpuLibGetInfoImpl(argument0, argument1);
  return 0;
}

extern "C" uint64_t NvRmGpuLibListDevices(uintptr_t argument0,
  uintptr_t argument1) {
  return NvRmGpuLibListDevicesImpl(argument0, argument1);
}

extern "C" uint64_t NvRmGpuDeviceOpen(uintptr_t argument0,
  uintptr_t argument1, uintptr_t attributes, uintptr_t argument3) {
  if (attributes == 0) {
    attributes = reinterpret_cast<uintptr_t>(
      g_NvRmGpuDeviceOpenDefaultAttributes);
  }

  return NvRmGpuDeviceOpenImpl(argument0, argument1, attributes, argument3);
}

extern "C" uint64_t NvRmGpuDeviceGetKindInfo(NvRmGpuObject* object,
  uint32_t argument1, uintptr_t argument2) {
  auto* info = reinterpret_cast<NvRmGpuObject*>(Dispatch(object, 0x38));
  Dispatch(info, 0x90, argument1, argument2);
  return 0;
}

extern "C" uint64_t NvRmGpuDeviceRegisterBuffer(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3,
  const NvRmGpuRegisterBufferAttributes* attributes) {
  if (attributes == nullptr) {
    attributes = &g_NvRmGpuDeviceRegisterBufferDefaultAttributes;
  }

  return Dispatch(object, 0x58, argument1, argument2, argument3,
    attributes->kind, attributes->flags, attributes);
}

extern "C" uint64_t NvRmGpuAddressSpaceGetInfo(NvRmGpuObject* object,
  uintptr_t argument1) {
  Dispatch(object, 0x40, argument1);
  return 0;
}

extern "C" uint64_t NvRmGpuAddressSpaceAllocationGetInfo(
  NvRmGpuObject* object, uintptr_t argument1) {
  Dispatch(object, 0x28, argument1);
  return 0;
}

extern "C" uint64_t NvRmGpuMappingGetInfo(NvRmGpuObject* object,
  uintptr_t argument1) {
  if (argument1 != 0) {
    Dispatch(object, 0x28, argument1);
  }

  return 0;
}

extern "C" void NvRmGpuChannelGetInfo(NvRmGpuObject* object,
  uintptr_t argument1) {
  if (argument1 == 0) {
    return;
  }

  using Operation = void (*)(NvRmGpuObject*, uintptr_t);
  reinterpret_cast<Operation>(object->ops[0x28 / 8])(object, argument1);
}

extern "C" uint64_t NvRmGpuChannelKickoffPb(uintptr_t argument0,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3,
  uintptr_t argument4, uintptr_t argument5) {
  return NvRmGpuChannelKickoffPbImpl(argument0, argument1, argument2,
    argument3, argument4, argument5,
    reinterpret_cast<uintptr_t>(g_NvRmGpuChannelKickoffPbDefaultAttributes));
}

extern "C" uint64_t NvRmGpuChannelKickoffPbWithAttr(uintptr_t argument0,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3,
  uintptr_t argument4, uintptr_t argument5, uintptr_t attributes) {
  if (attributes == 0) {
    attributes = reinterpret_cast<uintptr_t>(
      g_NvRmGpuChannelKickoffPbDefaultAttributes);
  }

  return NvRmGpuChannelKickoffPbImpl(argument0, argument1, argument2,
    argument3, argument4, argument5, attributes);
}

extern "C" uint64_t NvRmGpuTaskSchedulingGroupRevokeShareToken(
  NvRmGpuObject* object, uintptr_t argument1, uintptr_t argument2) {
  if (object == nullptr || argument2 == 0) {
    return 4;
  }

  return Dispatch(object, 0x68, argument1, argument2);
}

extern "C" uint64_t NvRmGpuTSGSubcontextGetInfo(NvRmGpuObject* object,
  uintptr_t argument1) {
  Dispatch(object, 0x28, argument1);
  return 0;
}

extern "C" uint64_t NvRmGpuDeviceSchedulingDomainGetInfo(
  NvRmGpuObject* object, uintptr_t argument1) {
  if (argument1 != 0) {
    Dispatch(object, 0x28, argument1);
  }

  return 0;
}

extern "C" int32_t NvRmGpuNvgpuGetGpuCtrlFd(const uint8_t* nvgpu) {
  return *reinterpret_cast<const int32_t*>(nvgpu + 0x398);
}

extern "C" int32_t NvRmGpuNvgpuGetAsFd(const uint8_t* nvgpu) {
  return *reinterpret_cast<const int32_t*>(nvgpu + 0x18);
}

extern "C" int32_t NvRmGpuNvgpuGetGpuChannelFd(const uint8_t* nvgpu) {
  return *reinterpret_cast<const int32_t*>(nvgpu + 0x30);
}

extern "C" int32_t NvRmGpuNvgpuGetDbgFd(const uint8_t* nvgpu) {
  return *reinterpret_cast<const int32_t*>(nvgpu + 0x20);
}

extern "C" uint64_t NvRmGpuDeviceGetCpuTimeCorrelationInfo(
  NvRmGpuObject* object, uintptr_t attributes, uintptr_t argument2) {
  if (argument2 == 0) {
    return 11;
  }

  if (attributes == 0) {
    attributes = reinterpret_cast<uintptr_t>(
      g_NvRmGpuDeviceGetCpuTimeCorrelationInfoDefaultAttributes);
  }

  return Dispatch(object, 0x1a8, attributes, argument2);
}

extern "C" uint64_t NvRmGpuRegOpsSessionCreateChannelless(
  NvRmGpuObject* object, uintptr_t argument1) {
  return Dispatch(object, 0xb8, argument1, reinterpret_cast<uintptr_t>(
    g_NvRmGpuRegOpsSessionCreateDefaultAttributes));
}

extern "C" uint64_t NvRmGpuRegOpsSessionCreateChannellessAttr(
  NvRmGpuObject* object, uintptr_t attributes, uintptr_t argument2) {
  if (attributes == 0) {
    attributes = reinterpret_cast<uintptr_t>(
      g_NvRmGpuRegOpsSessionCreateDefaultAttributes);
  }

  return Dispatch(object, 0xb8, argument2, attributes);
}

extern "C" uint64_t NvRmGpuCtxSwTraceReadEntries(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  if (argument1 == 0 || argument2 == 0) {
    return 4;
  }

  return Dispatch(object, 0x48, argument1, argument2);
}

extern "C" uint64_t NvRmGpuChannelCycleStatsUninstallBuffer(
  NvRmGpuObject* object) {
  return Dispatch(object, 0x90, uintptr_t{0});
}

extern "C" uint64_t NvRmGpuRegOpsSessionExec(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  return Dispatch(object, 0x30, argument1, argument2,
    reinterpret_cast<uintptr_t>(
      g_NvRmGpuRegOpsSessionExecWithAttrDefaultAttributes));
}

extern "C" uint64_t NvRmGpuDeviceEventSessionRead(NvRmGpuObject* object,
  uintptr_t argument1) {
  if (object == nullptr || argument1 == 0) {
    return 4;
  }

  return Dispatch(object, 0x28, argument1);
}
