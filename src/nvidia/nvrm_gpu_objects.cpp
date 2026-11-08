#include <stdint.h>

// Objects start with their backend operations, slot 0 closes and slot 1
// destroys, and the API marks them closed in between.
struct NvRmGpuObject {
  const uintptr_t* ops;
  uint8_t reserved[9];
  bool isClosed;
};

struct NvRmGpuChannelCreateAttributes {
  uint8_t reserved[0x28];
  uint64_t errorNotifier;
  uint64_t errorNotifierEx;
};

struct NvRmGpuProfilerV2CreateAttributes {
  uint64_t first;
  uint64_t second;
};

struct NvRmGpuPmaStreamState {
  uint64_t reserved;
  bool isUpdate;
  bool isFlush;
};

struct NvRmGpuShareToken {
  uint64_t value[2];
};

struct NvRmGpuSchedulingDomainList {
  uint64_t domains;
  uint64_t count;
};

struct NvRmGpuSchedulingDomainAttributes {
  uint64_t reserved[8];
};

struct NvRmGpuClockInfo {
  uint8_t reserved0[0x41];
  uint8_t hasDomains;
  uint8_t reserved1[0x2f8 - 0x42];
  uint64_t domains;
  uint64_t count;
};

struct NvRmGpuSensorInfo {
  uint8_t reserved[0xa0];
  uint8_t flags;
};

// The library holds a process wide reference while it is open, the token
// owns it when its byte is set.
struct NvRmGpuLibReference {
  uint8_t isOwned;
};

extern "C" void* NvOsAlloc(uint64_t size);
extern "C" void NvOsFree(void* pointer);
extern "C" void* stderr;
extern "C" int fprintf(void* stream, const char* format, ...);

[[gnu::visibility("hidden")]] uint32_t NvRmGpuLibAcquire(
  NvRmGpuLibReference* reference);
[[gnu::visibility("hidden")]] uint32_t NvRmGpuLibRelease(
  NvRmGpuLibReference* reference);
[[gnu::visibility("hidden")]] void NvRmGpuLibMoveReference(
  NvRmGpuLibReference* destination, NvRmGpuLibReference* source);
[[gnu::visibility("hidden")]] void NvRmGpuLibDestroyReference(
  NvRmGpuLibReference* reference);
[[gnu::visibility("hidden")]] void NvRmGpuLibConstruct(NvRmGpuObject* lib,
  NvRmGpuLibReference* reference);
[[gnu::visibility("hidden")]] uint32_t NvRmGpuLibInitialize(
  NvRmGpuObject* lib);

// The shipped build folds this into an empty function.
[[gnu::visibility("hidden")]] void NvRmGpuObjectDetach(NvRmGpuObject* object);

[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuDeviceReadTimeNsDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuDeviceAllocateMemoryDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuAddressSpaceCreateDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuAddressSpaceAllocationCreateDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuMappingCreateDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const NvRmGpuChannelCreateAttributes
  g_NvRmGpuChannelCreateDefaultAttributes;
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuTaskSchedulingGroupCreateDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuCtxSwTraceOpenDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuRegOpsSessionCreateDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const NvRmGpuProfilerV2CreateAttributes
  g_NvRmGpuProfilerV2CreateForDeviceDefaultAttributes;
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuProfilerV2CreateDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuProfilerV2RegOpsExecDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuProfilerV2PmaStreamAllocDefaultAttributes[];

namespace {

template <typename R = uint32_t, typename... Args>
[[gnu::always_inline]] inline R Call(NvRmGpuObject* object, int offset,
  Args... args) {
  using Operation = R (*)(NvRmGpuObject*, Args...);
  return reinterpret_cast<Operation>(object->ops[offset / 8])(object,
    args...);
}

[[gnu::always_inline]] inline uint32_t Close(NvRmGpuObject* object) {
  if (object == nullptr) {
    return 0;
  }

  uint32_t result = Call(object, 0x0);
  object->isClosed = true;
  Call<void>(object, 0x8);
  NvOsFree(object);
  return result;
}

// A failed create can still hand back an object, it is closed and freed
// through the slot that received it.
[[gnu::always_inline]] inline void Discard(NvRmGpuObject** slot) {
  NvRmGpuObject* object = *slot;
  if (object == nullptr) {
    return;
  }

  Call(object, 0x0);
  object->isClosed = true;

  if (*slot != nullptr) {
    Call<void>(*slot, 0x8);
    NvOsFree(*slot);
  }
}

template <typename... Args>
[[gnu::always_inline]] inline uint32_t Create(NvRmGpuObject** out,
  NvRmGpuObject* parent, int offset, Args... args) {
  NvRmGpuObject* created = nullptr;
  uint32_t result = Call(parent, offset, args..., &created);
  if (result != 0) {
    Discard(&created);
    return result;
  }

  *out = created;
  return result;
}

template <typename T, typename... Args>
[[gnu::always_inline]] inline uint32_t Query(T* out, NvRmGpuObject* object,
  int offset, Args... args) {
  T value = 0;
  uint32_t result = Call(object, offset, args..., &value);
  if (result == 0) {
    *out = value;
  }

  return result;
}

template <typename A>
[[gnu::always_inline]] inline const A* Default(const A* attributes,
  const A* fallback) {
  return attributes != nullptr ? attributes : fallback;
}

// Only bit 0 of the flags byte tells whether the sensors are present.
[[gnu::always_inline]] inline bool HasSensors(NvRmGpuObject* device) {
  return (Call<const NvRmGpuSensorInfo*>(device, 0x28)->flags & 1) != 0;
}

}

extern "C" {

NvRmGpuObject* NvRmGpuLibOpen() {
  NvRmGpuLibReference reference = {};
  NvRmGpuObject* lib = nullptr;

  uint32_t result = NvRmGpuLibAcquire(&reference);
  if (result == 0) {
    NvRmGpuLibReference owned;
    NvRmGpuLibMoveReference(&owned, &reference);

    lib = static_cast<NvRmGpuObject*>(NvOsAlloc(0x70));
    if (lib == nullptr) {
      result = 6;
    }
    else {
      NvRmGpuLibConstruct(lib, &owned);
      result = NvRmGpuLibInitialize(lib);
      if (result != 0) {
        Close(lib);
        lib = nullptr;
      }
    }

    NvRmGpuLibDestroyReference(&owned);
  }

  if (result != 0) {
    fprintf(stderr, "libnvrm_gpu.so: %s failed, error=%u\n",
      "NvRmGpuLibOpen", result);
  }

  NvRmGpuLibRelease(&reference);
  NvRmGpuLibDestroyReference(&reference);
  return lib;
}

// The first error wins, from the reference, the close or the release.
uint32_t NvRmGpuLibClose(NvRmGpuObject* lib) {
  NvRmGpuLibReference reference = {};
  uint32_t result = NvRmGpuLibAcquire(&reference);

  if (lib != nullptr) {
    const uint32_t closeResult = Close(lib);
    if (closeResult != 0 && result == 0) {
      result = closeResult;
    }
  }

  const uint32_t releaseResult = NvRmGpuLibRelease(&reference);
  if (releaseResult != 0 && result == 0) {
    result = releaseResult;
  }

  NvRmGpuLibDestroyReference(&reference);
  return result;
}

uint32_t NvRmGpuDeviceClose(NvRmGpuObject* object) {
  return Close(object);
}

uint32_t NvRmGpuDeviceReadTimeNs(NvRmGpuObject* object,
  const uint8_t* attributes, uint64_t* out) {
  return Query(out, object, 0x150,
    Default(attributes, g_NvRmGpuDeviceReadTimeNsDefaultAttributes));
}

uint32_t NvRmGpuDeviceChooseKind(NvRmGpuObject* object, uintptr_t argument1,
  uint32_t* out) {
  auto* info = Call<NvRmGpuObject*>(object, 0x38);
  uint32_t kind;
  uint32_t result = Call(info, 0x98, argument1, &kind);
  if (result == 0) {
    *out = kind;
  }

  return result;
}

uint32_t NvRmGpuDeviceAllocateMemory(NvRmGpuObject* object, uint32_t size,
  uintptr_t argument2, uintptr_t argument3, const uint8_t* attributes,
  uint32_t* out) {
  uint32_t handle = 0;
  if (size == 0) {
    return 4;
  }

  uint32_t result = Call(object, 0x50, size, argument2, argument3,
    Default(attributes, g_NvRmGpuDeviceAllocateMemoryDefaultAttributes),
    &handle);
  if (result == 0) {
    *out = handle;
  }

  return result;
}

uint32_t NvRmGpuAddressSpaceCreate(NvRmGpuObject* device,
  const uint8_t* attributes, NvRmGpuObject** out) {
  return Create(out, device, 0x40,
    Default(attributes, g_NvRmGpuAddressSpaceCreateDefaultAttributes));
}

uint32_t NvRmGpuAddressSpaceClose(NvRmGpuObject* object) {
  return Close(object);
}

uint32_t NvRmGpuAddressSpaceAllocationCreate(NvRmGpuObject* addressSpace,
  uintptr_t argument1, uintptr_t argument2, const uint8_t* attributes,
  NvRmGpuObject** out, uintptr_t info) {
  NvRmGpuObject* created = nullptr;
  uint32_t result = Call(addressSpace, 0x28, argument1, argument2,
    Default(attributes,
      g_NvRmGpuAddressSpaceAllocationCreateDefaultAttributes),
    &created);
  if (result != 0) {
    Discard(&created);
    return result;
  }

  if (info != 0) {
    Call(created, 0x28, info);
  }

  *out = created;
  return result;
}

uint32_t NvRmGpuAddressSpaceAllocationClose(NvRmGpuObject* object) {
  return Close(object);
}

uint32_t NvRmGpuMappingCreateFixed(NvRmGpuObject* addressSpace,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3,
  const uint8_t* attributes, NvRmGpuObject** out, uintptr_t info) {
  NvRmGpuObject* created = nullptr;
  uint32_t result = Call(addressSpace, 0x30, argument1, argument2,
    argument3, Default(attributes, g_NvRmGpuMappingCreateDefaultAttributes),
    &created);
  if (result != 0) {
    Discard(&created);
    return result;
  }

  if (info != 0) {
    Call(created, 0x28, info);
  }

  *out = created;
  return result;
}

uint32_t NvRmGpuAddressSpaceGetSyncpointShimRoAddress(NvRmGpuObject* object,
  uintptr_t argument1, uint64_t* out) {
  return Query(out, object, 0x30, argument1);
}

uint32_t NvRmGpuMappingCreate(NvRmGpuObject* addressSpace,
  uintptr_t argument1, uintptr_t argument2, const uint8_t* attributes,
  NvRmGpuObject** out, uintptr_t info) {
  NvRmGpuObject* created = nullptr;
  uint32_t result = Call(addressSpace, 0x38, argument1, argument2,
    Default(attributes, g_NvRmGpuMappingCreateDefaultAttributes), &created);
  if (result != 0) {
    Discard(&created);
    return result;
  }

  if (info != 0) {
    Call(created, 0x28, info);
  }

  *out = created;
  return result;
}

uint32_t NvRmGpuMappingClose(NvRmGpuObject* object) {
  return Close(object);
}

uint32_t NvRmGpuChannelCreate(NvRmGpuObject* addressSpace,
  const NvRmGpuChannelCreateAttributes* attributes, NvRmGpuObject** out) {
  attributes = Default(attributes, &g_NvRmGpuChannelCreateDefaultAttributes);
  if (attributes->errorNotifierEx != 0 && attributes->errorNotifier != 0) {
    return 4;
  }

  return Create(out, addressSpace, 0x48, attributes);
}

uint32_t NvRmGpuChannelClose(NvRmGpuObject* object) {
  return Close(object);
}

uint32_t NvRmGpuTaskSchedulingGroupCreate(NvRmGpuObject* device,
  const uint8_t* attributes, NvRmGpuObject** out) {
  return Create(out, device, 0xd0,
    Default(attributes, g_NvRmGpuTaskSchedulingGroupCreateDefaultAttributes));
}

uint32_t NvRmGpuTaskSchedulingGroupClose(NvRmGpuObject* object) {
  return Close(object);
}

uint32_t NvRmGpuTaskSchedulingGroupCreateShareToken(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t, NvRmGpuShareToken* out) {
  if (object == nullptr || out == nullptr) {
    return 4;
  }

  NvRmGpuShareToken token = {};
  uint32_t result = Call(object, 0x60, argument1, &token);
  if (result == 0) {
    *out = token;
  }

  return result;
}

uint32_t NvRmGpuTaskSchedulingGroupGetL2MaxWaysEvictLast(
  NvRmGpuObject* object, uint32_t* out) {
  return Query(out, object, 0x88);
}

uint32_t NvRmGpuTSGSubcontextClose(NvRmGpuObject* object) {
  return Close(object);
}

uint32_t NvRmGpuDeviceListSchedulingDomains(NvRmGpuObject* object,
  uint64_t* domains, uint64_t* count) {
  const NvRmGpuSchedulingDomainList* list = nullptr;
  uint32_t result = Call(object, 0xf0, &list);
  if (result == 0) {
    *count = list->count;
    *domains = list->domains;
  }

  return result;
}

uint32_t NvRmGpuDeviceSchedulingDomainCreate(NvRmGpuObject* object,
  const NvRmGpuSchedulingDomainAttributes* attributes) {
  if (attributes != nullptr) {
    return Call(object, 0xf8, attributes);
  }

  NvRmGpuSchedulingDomainAttributes defaults = {};
  return Call(object, 0xf8, &defaults);
}

uint32_t NvRmGpuDeviceSchedulingDomainOpen(NvRmGpuObject* device,
  uintptr_t argument1, NvRmGpuObject** out) {
  return Create(out, device, 0x108, argument1);
}

uint32_t NvRmGpuDeviceSchedulingDomainClose(NvRmGpuObject* object) {
  return Close(object);
}

uint32_t NvRmGpuCtxSwTraceOpen(NvRmGpuObject* device,
  const uint8_t* attributes, NvRmGpuObject** out, uintptr_t info) {
  uint32_t result = Call(device, 0xc0, out,
    Default(attributes, g_NvRmGpuCtxSwTraceOpenDefaultAttributes));
  if (info != 0 && result == 0) {
    Call(*out, 0x30, info);
  }

  return result;
}

uint32_t NvRmGpuCtxSwTraceClose(NvRmGpuObject* object) {
  return Close(object);
}

uint32_t NvRmGpuRegOpsSessionCreateForChannel(NvRmGpuObject* channel,
  NvRmGpuObject** out) {
  NvRmGpuObject* created = nullptr;
  uint32_t result = Call(channel, 0x40, &created,
    g_NvRmGpuRegOpsSessionCreateDefaultAttributes);
  if (result != 0) {
    Discard(&created);
    return result;
  }

  *out = created;
  return result;
}

uint32_t NvRmGpuRegOpsSessionCreateForChannelAttr(NvRmGpuObject* channel,
  const uint8_t* attributes, NvRmGpuObject** out) {
  NvRmGpuObject* created = nullptr;
  uint32_t result = Call(channel, 0x40, &created,
    Default(attributes, g_NvRmGpuRegOpsSessionCreateDefaultAttributes));
  if (result != 0) {
    Discard(&created);
    return result;
  }

  *out = created;
  return result;
}

uint32_t NvRmGpuChannelGetTimeslice(NvRmGpuObject* object, uint32_t* out) {
  return Query(out, object, 0x70);
}

uint32_t NvRmGpuChannelCycleStatsAttachSnapshot(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uint32_t* out) {
  uint32_t value = 0;
  if (out == nullptr) {
    return 11;
  }

  uint32_t result = Call(object, 0x98, argument1, argument2, &value);
  if (result == 0) {
    *out = value;
  }

  return result;
}

uint32_t NvRmGpuRegOpsSessionClose(NvRmGpuObject* object) {
  return Close(object);
}

uint32_t NvRmGpuRegOpsTsgGetTimeslice(NvRmGpuObject* object, uint32_t* out) {
  return Query(out, object, 0x108);
}

uint32_t NvRmGpuProfilerClose(NvRmGpuObject* object) {
  return Close(object);
}

uint32_t NvRmGpuProfilerV2CreateForDevice(NvRmGpuObject* device,
  const NvRmGpuProfilerV2CreateAttributes* attributes, NvRmGpuObject** out) {
  attributes = Default(attributes,
    &g_NvRmGpuProfilerV2CreateForDeviceDefaultAttributes);
  if (attributes->second != 0 && attributes->first != 0) {
    return 11;
  }

  return Create(out, device, 0xd8, attributes);
}

uint32_t NvRmGpuProfilerV2CreateForChannel(NvRmGpuObject* device,
  uintptr_t channel, const uint8_t* attributes, NvRmGpuObject** out) {
  return Create(out, device, 0xe0, channel,
    Default(attributes, g_NvRmGpuProfilerV2CreateDefaultAttributes));
}

uint32_t NvRmGpuProfilerV2CreateForTSG(NvRmGpuObject* device, uintptr_t tsg,
  const uint8_t* attributes, NvRmGpuObject** out) {
  return Create(out, device, 0xe8, tsg,
    Default(attributes, g_NvRmGpuProfilerV2CreateDefaultAttributes));
}

uint32_t NvRmGpuProfilerV2Close(NvRmGpuObject* object) {
  return Close(object);
}

uint32_t NvRmGpuProfilerV2RegOpsExec(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, const uint8_t* attributes,
  uint64_t* out) {
  uint64_t value = 0;
  uint32_t result = Call(object, 0x50, argument1, argument2,
    Default(attributes, g_NvRmGpuProfilerV2RegOpsExecDefaultAttributes),
    &value);
  if (out != nullptr && result == 0) {
    *out = value;
  }

  return result;
}

uint32_t NvRmGpuProfilerV2PmaStreamAlloc(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3,
  uintptr_t argument4, const uint8_t* attributes, uint64_t* out0,
  uint64_t* out1) {
  uint64_t values[2] = {};
  uint32_t result = Call(object, 0x58, argument1, argument2, argument3,
    argument4,
    Default(attributes, g_NvRmGpuProfilerV2PmaStreamAllocDefaultAttributes),
    &values[1], &values[0]);
  if (result == 0) {
    *out0 = values[1];
    *out1 = values[0];
  }

  return result;
}

uint32_t NvRmGpuProfilerV2PmaStreamUpdateState(NvRmGpuObject* object,
  const NvRmGpuPmaStreamState* state, uintptr_t argument2) {
  if (state == nullptr || argument2 == 0) {
    return 11;
  }

  if (!state->isUpdate && state->isFlush) {
    return 11;
  }

  return Call(object, 0x60, state, argument2);
}

uint32_t NvRmGpuProfilerV2PmaStreamAllocEx(NvRmGpuObject* object,
  uintptr_t argument1, NvRmGpuObject** out) {
  if (argument1 == 0) {
    return 11;
  }

  return Create(out, object, 0x70, argument1);
}

uint32_t NvRmGpuProfilerV2PmaStreamUpdateStateEx(NvRmGpuObject* object,
  const NvRmGpuPmaStreamState* state, uintptr_t argument2) {
  if (state == nullptr || argument2 == 0) {
    return 11;
  }

  if (!state->isUpdate && state->isFlush) {
    return 11;
  }

  return Call(object, 0x30, state, argument2);
}

uint32_t NvRmGpuProfilerV2PmaStreamFreeEx(NvRmGpuObject* object) {
  return Close(object);
}

uint32_t NvRmGpuTaskSchedulingGroupGetTimeslice(NvRmGpuObject* object,
  uint32_t* out) {
  return Query(out, object, 0x40);
}

uint32_t NvRmGpuClockGetDomains(NvRmGpuObject* device, uint64_t* count,
  uint64_t* domains) {
  if (domains == nullptr) {
    return 4;
  }

  auto* info = Call<const NvRmGpuClockInfo*>(device, 0x28);
  if (info->hasDomains != 1) {
    return 2;
  }

  uint64_t list = info->domains;
  if (count != nullptr) {
    *count = info->count;
  }

  *domains = list;
  return 0;
}

uint32_t NvRmGpuDeviceListVoltageSensors(NvRmGpuObject* device,
  uint64_t* sensors, uint64_t* count) {
  if (sensors == nullptr || count == nullptr) {
    return 4;
  }

  if (HasSensors(device)) {
    return Call(Call<NvRmGpuObject*>(device, 0x38), 0xf0, sensors, count);
  }

  *count = 0;
  *sensors = 0;
  return 0;
}

uint32_t NvRmGpuDeviceListCurrentSensors(NvRmGpuObject* device,
  uint64_t* sensors, uint64_t* count) {
  if (HasSensors(device)) {
    return Call(Call<NvRmGpuObject*>(device, 0x38), 0xf8, sensors, count);
  }

  *count = 0;
  *sensors = 0;
  return 0;
}

uint32_t NvRmGpuDeviceListPowerSensors(NvRmGpuObject* device,
  uint64_t* sensors, uint64_t* count) {
  if (HasSensors(device)) {
    return Call(Call<NvRmGpuObject*>(device, 0x38), 0x100, sensors, count);
  }

  *count = 0;
  *sensors = 0;
  return 0;
}

uint32_t NvRmGpuDeviceListTemperatureSensors(NvRmGpuObject* device,
  uint64_t* sensors, uint64_t* count) {
  if (HasSensors(device)) {
    return Call(Call<NvRmGpuObject*>(device, 0x38), 0x108, sensors, count);
  }

  *count = 0;
  *sensors = 0;
  return 0;
}

uint32_t NvRmGpuDeviceEventSessionClose(NvRmGpuObject* object) {
  return Close(object);
}

void NvRmGpuDropObject(NvRmGpuObject* object) {
  if (object == nullptr) {
    return;
  }

  NvRmGpuObjectDetach(object);
  Call(object, 0x0);
  object->isClosed = true;
  Call<void>(object, 0x8);
  NvOsFree(object);
}

}
