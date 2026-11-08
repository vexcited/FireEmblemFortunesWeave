#include <stdint.h>

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_NotImplemented = 2,
  NvError_BadParameter = 4,
  NvError_InsufficientMemory = 6,
  NvError_BadValue = 11,
};

struct NvVicImpl;

// A handle points at the slot holding its implementation.
struct NvVic {
  NvVicImpl* impl;
};

struct NvVicResult {
  uint64_t value[2];
};

struct NvVicCrcValue {
  uint64_t value[3];
};

struct NvVicDefaultDevice {
  uint32_t deviceId;
  bool isSecure;
};

struct NvVicAttributes {
  uint32_t deviceId;
  uint8_t reserved4;
  uint8_t isSecure;
  uint8_t isProtected;
  uint8_t reserved7;
  uint64_t timeouts[3];
  uint64_t queueDepth;
  uint32_t maxSurfaces;
  uint32_t maxLayers;
  uint32_t priority;
  uint32_t reserved34;
};

static_assert(sizeof(NvVicAttributes) == 0x38);

struct [[gnu::packed]] NvVicDeviceInfo {
  uint8_t reserved00;
  uint16_t value01;
  uint8_t value03;
  uint8_t reserved04[2];
  uint8_t isSecure;
  uint8_t value07;
  uint8_t reserved08;
  uint8_t value09;
  uint16_t value0a;
  uint8_t value0c;
  uint16_t value0d;
  uint8_t reserved0f;
  uint64_t value10;
  uint64_t value18;
  uint32_t value20;
  uint32_t value24;
  float value28;
  float value2c;
  uint32_t value30;
  uint32_t value34;
};

struct [[gnu::packed]] NvVicAttrCapabilities {
  uint8_t isSupported;
  uint8_t value01;
  uint8_t value02;
  uint8_t isValid;
  uint16_t value04;
  uint8_t value06;
  uint16_t reserved07;
  uint16_t value09;
  uint8_t value0b;
  uint32_t value0c;
  uint64_t value10;
  uint64_t value18;
  uint32_t value20;
  uint32_t value24;
  float value28;
  float value2c;
  uint32_t value30;
  uint32_t value34;
  uint32_t reserved38;
};

template <typename T>
struct NvVicExpected {
  bool isSuccess;
  union {
    T value;
    NvError error;
  };
};

struct NvVicExpectedByte {
  bool isSuccess;
  uint32_t value;
};

extern "C" void* memcpy(void* destination, const void* source,
  unsigned long size);

// Handles and implementations convert through an empty function the
// linker folded with others, it hands back its argument.
[[gnu::visibility("hidden")]] NvVicImpl* NvVicUnwrap(NvVicImpl* impl);
[[gnu::visibility("hidden")]] NvVic* NvVicWrap(NvVicImpl* impl);

[[gnu::visibility("hidden")]] NvVicDefaultDevice NvVicGetDefaultDevice();
[[gnu::visibility("hidden")]] const NvVicDeviceInfo* NvVicFindDevice(
  uint32_t deviceId);
[[gnu::visibility("hidden")]] NvVicImpl* NvVicCreate(
  const NvVicAttributes* attributes, const NvVicDeviceInfo* device);
[[gnu::visibility("hidden")]] NvError NvVicInitialize(NvVicImpl* impl);
[[gnu::visibility("hidden")]] NvError NvVicFinalize(NvVicImpl* impl);
[[gnu::visibility("hidden")]] void NvVicDestroy(NvVicImpl* impl);
[[gnu::visibility("hidden")]] uint32_t NvVicSyncpointGetId(void* syncpoint);
[[gnu::visibility("hidden")]] NvError NvVicPinMemory(void* pins,
  uint32_t memory, uint32_t flags);
[[gnu::visibility("hidden")]] NvError NvVicUnpinMemory(void* pins,
  uint32_t memory);
[[gnu::visibility("hidden")]] const NvVicResult* NvVicDefaultResult(
  NvVicImpl* impl);
[[gnu::visibility("hidden")]] const void* NvVicComposeDefaults(
  void* composer);
[[gnu::visibility("hidden")]] const void* NvVicLdcDefaults(NvVicImpl* impl);
[[gnu::visibility("hidden")]] NvVicExpected<NvVicResult> NvVicComposeImpl(
  void* composer, const void* parameters);
[[gnu::visibility("hidden")]] NvVicExpected<NvVicCrcValue> NvVicReadCrc(
  void* crc, const void* parameters);
[[gnu::visibility("hidden")]] NvVicExpectedByte NvVicCompareCrc(void* crc,
  const void* parameters);

namespace {

const uint64_t NvVicMaxTimeout = INT64_MAX / 1000;
const uint64_t NvVicDefaultQueueDepth = 16;
const uint32_t NvVicDefaultMaxSurfaces = 16;
const uint32_t NvVicDefaultPriority = 100;
const uint32_t NvVicComposeParametersSize = 0xf50;
const uint32_t NvVicLdcParametersSize = 0xd0;

template <typename T>
[[gnu::always_inline]] inline T* Member(NvVicImpl* impl, uint32_t offset) {
  return reinterpret_cast<T*>(reinterpret_cast<uint8_t*>(impl) + offset);
}

[[gnu::always_inline]] inline NvError CheckAttributes(
  const NvVicAttributes* attributes) {
  if (attributes->isProtected & 1) {
    return NvError_NotImplemented;
  }

  if (attributes->timeouts[0] > NvVicMaxTimeout ||
    attributes->timeouts[1] > NvVicMaxTimeout) {
    return NvError_BadValue;
  }

  if (attributes->timeouts[2] > NvVicMaxTimeout) {
    return NvError_BadValue;
  }

  return NvSuccess;
}

}

extern "C" NvVicAttributes NvVicGetDefaultAttributes() {
  const NvVicDefaultDevice device = NvVicGetDefaultDevice();

  NvVicAttributes attributes;
  attributes.deviceId = device.deviceId;
  attributes.reserved4 = 0;
  attributes.isSecure = device.isSecure;
  attributes.isProtected = 0;
  attributes.reserved7 = 0;
  attributes.timeouts[0] = NvVicMaxTimeout;
  attributes.timeouts[1] = NvVicMaxTimeout;
  attributes.timeouts[2] = NvVicMaxTimeout;
  attributes.queueDepth = NvVicDefaultQueueDepth;
  attributes.maxSurfaces = NvVicDefaultMaxSurfaces;
  attributes.maxLayers = NvVicDefaultMaxSurfaces;
  attributes.priority = NvVicDefaultPriority;
  attributes.reserved34 = 0;
  return attributes;
}

extern "C" NvError NvVicGetAttrCapabilities(
  NvVicAttrCapabilities* pOutCapabilities,
  const NvVicAttributes* attributes) {
  if (pOutCapabilities == nullptr || attributes == nullptr) {
    return NvError_BadParameter;
  }

  const NvError result = CheckAttributes(attributes);
  if (result != NvSuccess) {
    return result;
  }

  const NvVicDeviceInfo* device = NvVicFindDevice(attributes->deviceId);
  if (device == nullptr) {
    return NvError_NotImplemented;
  }

  NvVicAttrCapabilities* caps = pOutCapabilities;
  caps->isSupported = ((attributes->isSecure == 0) | device->isSecure) & 1;
  caps->value01 = device->value07;
  caps->value02 = device->value09;
  caps->isValid = 1;
  caps->value04 = device->value01;
  caps->value06 = device->value03;
  caps->reserved07 = 0;
  caps->value09 = device->value0a;
  caps->value0b = device->value0c;
  caps->value0c = device->value0d;
  caps->value10 = device->value10;
  caps->value18 = device->value18;
  caps->value20 = device->value20;
  caps->value24 = device->value24;
  caps->value28 = device->value28;
  caps->value2c = device->value2c;
  caps->value30 = device->value30;
  caps->value34 = device->value34;
  caps->reserved38 = 0;
  return NvSuccess;
}

extern "C" NvError NvVicOpen(NvVic** pOutVic,
  const NvVicAttributes* attributes) {
  if (pOutVic == nullptr || attributes == nullptr) {
    return NvError_BadParameter;
  }

  NvError result = CheckAttributes(attributes);
  if (result != NvSuccess) {
    return result;
  }

  const NvVicDeviceInfo* device = NvVicFindDevice(attributes->deviceId);
  if (device == nullptr) {
    return NvError_NotImplemented;
  }

  NvVicImpl* impl = NvVicCreate(attributes, device);
  if (impl == nullptr) {
    return NvError_InsufficientMemory;
  }

  result = NvVicInitialize(impl);
  if (result != NvSuccess) {
    NvVicDestroy(impl);
    return result;
  }

  *pOutVic = NvVicWrap(impl);
  return NvSuccess;
}

extern "C" NvError NvVicClose(NvVic* vic) {
  if (vic == nullptr) {
    return NvError_BadParameter;
  }

  NvVicImpl* impl = NvVicUnwrap(vic->impl);
  const NvError result = NvVicFinalize(impl);
  if (result != NvSuccess) {
    return result;
  }

  NvVicDestroy(impl);
  return NvSuccess;
}

extern "C" uint32_t NvVicGetSyncpointId(NvVic* vic) {
  if (vic == nullptr) {
    return UINT32_MAX;
  }

  return NvVicSyncpointGetId(Member<void>(NvVicUnwrap(vic->impl), 0x4a8));
}

extern "C" const void* NvVicGetCapabilities(NvVic* vic) {
  if (vic == nullptr) {
    return nullptr;
  }

  return Member<void>(NvVicUnwrap(vic->impl), 0x420);
}

extern "C" const void* NvVicGetMetrics(NvVic* vic) {
  if (vic == nullptr) {
    return nullptr;
  }

  return Member<void>(NvVicUnwrap(vic->impl), 0x468);
}

extern "C" NvError NvVicPin(NvVic* vic, uint32_t memory, uint32_t flags) {
  if (vic == nullptr || memory == 0) {
    return NvError_BadParameter;
  }

  return NvVicPinMemory(Member<void>(NvVicUnwrap(vic->impl), 0x4e8), memory,
    flags);
}

extern "C" NvError NvVicUnpin(NvVic* vic, uint32_t memory) {
  if (vic == nullptr || memory == 0) {
    return NvError_BadParameter;
  }

  return NvVicUnpinMemory(Member<void>(NvVicUnwrap(vic->impl), 0x4e8),
    memory);
}

extern "C" void NvVicInitResult(NvVic* vic, NvVicResult* pOutResult) {
  if (vic == nullptr || pOutResult == nullptr) {
    return;
  }

  *pOutResult = *NvVicDefaultResult(NvVicUnwrap(vic->impl));
}

extern "C" void NvVicInitComposeParameters(NvVic* vic, void* pParameters) {
  if (vic == nullptr || pParameters == nullptr) {
    return;
  }

  NvVicImpl* impl = NvVicUnwrap(vic->impl);
  memcpy(pParameters, NvVicComposeDefaults(Member<void>(impl, 0x1358)),
    NvVicComposeParametersSize);
}

extern "C" void NvVicInitLdcParameters(NvVic* vic, void* pParameters) {
  if (vic == nullptr || pParameters == nullptr) {
    return;
  }

  memcpy(pParameters, NvVicLdcDefaults(NvVicUnwrap(vic->impl)),
    NvVicLdcParametersSize);
}

extern "C" NvError NvVicCompose(NvVic* vic, const void* parameters,
  NvVicResult* pOutResult) {
  if (vic == nullptr || parameters == nullptr || pOutResult == nullptr) {
    return NvError_BadParameter;
  }

  NvVicImpl* impl = NvVicUnwrap(vic->impl);
  const NvVicExpected<NvVicResult> composed = NvVicComposeImpl(
    Member<void>(impl, 0x1358), parameters);
  if (composed.isSuccess) {
    *pOutResult = composed.value;
    return NvSuccess;
  }

  *pOutResult = *NvVicDefaultResult(impl);
  return composed.error;
}

// Geometric transforms and diagnostics are not supported by this VIC.
extern "C" NvError NvVicGeotrans(NvVic* vic, const void* parameters,
  NvVicResult* pOutResult) {
  if (vic == nullptr || parameters == nullptr || pOutResult == nullptr) {
    return NvError_BadParameter;
  }

  *pOutResult = *NvVicDefaultResult(NvVicUnwrap(vic->impl));
  return NvError_NotImplemented;
}

extern "C" NvError NvVicDiagnostic(NvVic* vic, const void* parameters,
  NvVicResult* pOutResult) {
  if (vic == nullptr || parameters == nullptr || pOutResult == nullptr) {
    return NvError_BadParameter;
  }

  *pOutResult = *NvVicDefaultResult(NvVicUnwrap(vic->impl));
  return NvError_NotImplemented;
}

extern "C" NvError NvVicReadCrcValue(NvVic* vic, const void* parameters,
  NvVicCrcValue* pOutValue) {
  if (vic == nullptr || parameters == nullptr || pOutValue == nullptr) {
    return NvError_BadParameter;
  }

  const NvVicExpected<NvVicCrcValue> read = NvVicReadCrc(
    Member<void>(NvVicUnwrap(vic->impl), 0x508), parameters);
  if (!read.isSuccess) {
    return read.error;
  }

  *pOutValue = read.value;
  return NvSuccess;
}

extern "C" NvError NvVicReadCrcComparison(NvVic* vic, const void* parameters,
  uint8_t* pOutIsEqual) {
  if (vic == nullptr || parameters == nullptr || pOutIsEqual == nullptr) {
    return NvError_BadParameter;
  }

  const NvVicExpectedByte compared = NvVicCompareCrc(
    Member<void>(NvVicUnwrap(vic->impl), 0x508), parameters);
  if (!compared.isSuccess) {
    return static_cast<NvError>(compared.value);
  }

  *pOutIsEqual = static_cast<uint8_t>(compared.value);
  return NvSuccess;
}
