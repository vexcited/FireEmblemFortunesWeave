#include <stdint.h>

using CUresult = uint32_t;
using U8 = uint8_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr CUresult kInvalidValue = 1;
constexpr CUresult kInvalidDevice = 101;
constexpr CUresult kAlreadyAcquired = 201;
constexpr CUresult kInvalidHandle = 400;
constexpr CUresult kNotPermitted = 801;
constexpr CUresult kInvalidResourceType = 914;

// Mapped arrays are aligned to 64 KiB pages.
constexpr U64 kArrayAlignment = 0x10000;

struct CudaUuid {
  U8 bytes[16];
};

struct CudaDevice {
  U8 reserved0[0xc06];
  CudaUuid uuid;
  U8 reserved1[0x41e8 - 0xc16];
  U8 primaryLock[8];
};

struct CudaDriverGlobals {
  U8 reserved0[0x118];
  CudaDevice* devices[64];
  int32_t deviceCount;
  U8 reserved1[0x44e0 - 0x31c];
  U8 interopFlags;
};

struct CudaExtent {
  U32 width;
  U32 height;
  U32 depth;
};

struct CudaSparseProperties {
  CudaExtent tileExtent;
  U32 miptailFirstLevel;
  U64 miptailSize;
  U32 flags;
  U32 reserved[4];
};

struct CudaMemoryRequirements {
  U64 size;
  U64 alignment;
  U32 reserved[4];
};

[[gnu::visibility("hidden")]] extern CudaDriverGlobals g_CudaDriver;

[[gnu::visibility("hidden")]] void CudaLog(const char* tag, U32 level,
  const char* format, ...);
[[gnu::visibility("hidden")]] CUresult CudaGetCurrentContext(U64* pContext);
[[gnu::visibility("hidden")]] void CudaLock(U64 mutex, U32, U64, U32);
[[gnu::visibility("hidden")]] void CudaUnlock(U64 mutex);
[[gnu::visibility("hidden")]] void CudaLockShared(U64 mutex, U32, U64);
[[gnu::visibility("hidden")]] void CudaUnlockShared(U64 mutex);
[[gnu::visibility("hidden")]] CUresult CudaGetThreadState(U64* pState);
[[gnu::visibility("hidden")]] CUresult CudaGetThreadContext(U64 state,
  U64* pContext, U32 apiVersion);
[[gnu::visibility("hidden")]] CUresult CudaReleaseThreadState(U64 state);

[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_2b880(U64*, U64, U32,
  U64, U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_2d560(U64, U64, U64, U32,
  U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_36eb0(U64*, U64*,
  U64, U64, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_38e00(U64*, U64*,
  U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_39040(U64*, U64*,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_457c0(U64*, U64*,
  U64, U64, U32);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_644e0(U32*, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_86e90(U64, U32);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_874b0(U64);
[[gnu::visibility("hidden")]] CudaExtent CudaDriverRoutine_87d10(U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_87f00(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_8c570(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_8c9f0(U64, U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_9f320(U32*, U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_9f380(U32*, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_9a090(CudaDevice*,
  U32, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_9afb0(U32, U32**);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_9b180(CudaDevice*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_9b2b0(CudaDevice*);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_9b410(CudaDevice*, U64,
  U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_b5980(U64, U64*,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_b5b20(U64, U64*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_b5f20(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_b48b0(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_b8680(U64, U32, U32,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_baca0(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_bc020(U64, U64*, U64,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_bcdd0();
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_c2ce0(U64, U64, U32,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d8220(U64*, U64, U64,
  U64, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d8640(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_dc4f0(U64, U64,
  int32_t, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_de220(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_deeb0(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_ea9e0(U64, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_eab20(U64, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_eace0(U64, U64, U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_fe960();
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_ff1c0(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_10be00(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_11a390(U64, U64*,
  U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_11e860(U64, U64*,
  U64, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_11f740(U64, U64, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_11f810(U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1216a0(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_112680(U64, U64, U32,
  U64*, U64*, U32, U32);

namespace {

[[gnu::always_inline]] inline bool IsDeviceOrdinal(int32_t device) {
  return device >= 0 && device < g_CudaDriver.deviceCount;
}

[[gnu::always_inline]] inline U64 ContextLock(U64 context) {
  return context + 0x18;
}

[[gnu::always_inline]] inline U64 PrimaryLock(CudaDevice* device) {
  return reinterpret_cast<U64>(device->primaryLock);
}

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

// The routines fill 64 bit locals, the legacy entry points narrow them.
template <typename A, typename B, typename Call>
[[gnu::always_inline]] inline CUresult WithOutputs(A* pFirst, B* pSecond,
  Call call) {
  U64 second = 0;
  U64 first = 0;
  const CUresult result = call(pFirst != nullptr ? &first : nullptr,
    pSecond != nullptr ? &second : nullptr);
  if (pFirst != nullptr) {
    *pFirst = first;
  }

  if (pSecond != nullptr) {
    *pSecond = second;
  }

  return result;
}

}

CUresult cuArrayGetMemoryRequirements_impl(
  CudaMemoryRequirements* pRequirements, U64 array, U32 device) {
  const CUresult result = CudaDriverRoutine_86e90(array, 0);
  if (pRequirements == nullptr || result != 0 || At<U64>(array, 0xc8) != 0) {
    return kInvalidValue;
  }

  if (CudaDriverRoutine_874b0(array + 0xc) == 0) {
    return kInvalidValue;
  }

  *pRequirements = {};
  pRequirements->size = At<U64>(array, 0x78);
  pRequirements->alignment = kArrayAlignment;
  return 0;
}

CUresult cuMipmappedArrayGetMemoryRequirements_impl(
  CudaMemoryRequirements* pRequirements, U64 array, U32 device) {
  const CUresult result = CudaDriverRoutine_86e90(array, 0);
  if (pRequirements == nullptr || result != 0) {
    return kInvalidValue;
  }

  if (CudaDriverRoutine_874b0(array + 8) == 0) {
    return kInvalidValue;
  }

  *pRequirements = {};
  pRequirements->size = At<U64>(array, 0x38);
  pRequirements->alignment = kArrayAlignment;
  return 0;
}

CUresult cuArrayGetSparseProperties_impl(CudaSparseProperties* pProperties,
  U64 array) {
  const CUresult result = CudaDriverRoutine_86e90(array, 0);
  if (pProperties == nullptr || result != 0 || At<U64>(array, 0xc8) != 0 ||
    (At<U8>(array, 0x20) & 0x40) == 0) {
    return kInvalidValue;
  }

  pProperties->tileExtent = CudaDriverRoutine_87d10(array + 0xc);
  pProperties->miptailFirstLevel = 0;
  pProperties->miptailSize = 0;
  pProperties->flags = 0;
  if (CudaDriverRoutine_87f00(array + 0xc) == 0) {
    pProperties->miptailSize = At<U64>(array, 0x78);
    pProperties->flags |= 1;
  }

  return 0;
}

CUresult cuMipmappedArrayGetSparseProperties_impl(
  CudaSparseProperties* pProperties, U64 array) {
  const CUresult result = CudaDriverRoutine_86e90(array, 0);
  if (pProperties == nullptr || result != 0 ||
    (At<U8>(array, 0x1c) & 0x40) == 0) {
    return kInvalidValue;
  }

  pProperties->tileExtent = CudaDriverRoutine_87d10(array + 8);
  pProperties->miptailFirstLevel = At<U32>(array, 0x48);
  pProperties->miptailSize = At<U64>(array, 0x50);
  pProperties->flags = CudaDriverRoutine_87f00(array + 8) == 0;
  return 0;
}

namespace {

template <typename Wait>
[[gnu::always_inline]] inline CUresult WaitEvent(U64 event, Wait wait) {
  U64 state = 0;
  CUresult result = CudaDriverRoutine_b48b0(event, 0);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaReleaseThreadState(state);
  if (result != 0) {
    return result;
  }

  U64 status;
  result = wait(&status);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_b5f20(event, status);
}

}

CUresult cuEventQuery_impl(U64 event) {
  return WaitEvent(event, [&](U64* pStatus) {
    return CudaDriverRoutine_b5980(event, pStatus, 1);
  });
}

CUresult cuEventSynchronize_impl(U64 event) {
  return WaitEvent(event, [&](U64* pStatus) {
    return CudaDriverRoutine_b5b20(event, pStatus);
  });
}

CUresult cuCtxGetCurrent_impl(U64* pContext) {
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, nullptr, 0);
  if (result != 0) {
    return result;
  }

  if (pContext == nullptr) {
    return kInvalidValue;
  }

  *pContext = CudaDriverRoutine_1216a0(state);
  return 0;
}

// Attaching counts a reference unless the context is a primary one.
CUresult cuCtxAttach_impl(U64* pContext, U32 flags) {
  U64 context = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, &context, 4);
  if (result != 0) {
    return result;
  }

  if (pContext == nullptr || flags != 0) {
    return kInvalidValue;
  }

  if ((At<U8>(context, 0xc) & 2) == 0) {
    At<U32>(context, 0x34)++;
  }

  *pContext = context;
  return 0;
}

CUresult cuDeviceComputeCapability_impl(U64 pMajor, U64 pMinor,
  int32_t device) {
  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (pMajor == 0 || pMinor == 0) {
    return kInvalidValue;
  }

  if (!IsDeviceOrdinal(device)) {
    CudaLog("CUDA", 0, "Parameter dev must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  result = CudaDriverRoutine_9a090(g_CudaDriver.devices[device], 75, pMajor);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_9a090(g_CudaDriver.devices[device], 76, pMinor);
}

CUresult cuDeviceGet_impl(U32* pDevice, int32_t ordinal) {
  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (pDevice == nullptr) {
    return kInvalidValue;
  }

  if (!IsDeviceOrdinal(ordinal)) {
    CudaLog("CUDA", 0, "Parameter ordinal must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  U32* pFound;
  result = CudaDriverRoutine_9afb0(ordinal, &pFound);
  if (result == 0) {
    *pDevice = *pFound;
  }

  return result;
}

CUresult cuDeviceGetUuid_impl(CudaUuid* pUuid, int32_t device) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (pUuid == nullptr) {
    return kInvalidValue;
  }

  if (!IsDeviceOrdinal(device)) {
    CudaLog("CUDA", 0, "Parameter dev must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  *pUuid = g_CudaDriver.devices[device]->uuid;
  return 0;
}

// No execution affinity type is supported.
CUresult cuDeviceGetExecAffinitySupport_impl(U32* pSupported, U32 type,
  int32_t device) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (pSupported == nullptr) {
    return kInvalidValue;
  }

  if (!IsDeviceOrdinal(device)) {
    CudaLog("CUDA", 0, "Parameter dev must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  *pSupported = 0;
  return 0;
}

// Releasing a primary context that is not active is not an error here.
CUresult cuDevicePrimaryCtxRelease_impl(int32_t device) {
  CUresult result = CudaGetCurrentContext(nullptr);
  if (result == 0) {
    if (!IsDeviceOrdinal(device)) {
      return kInvalidDevice;
    }

    CudaDevice* pDevice = g_CudaDriver.devices[device];
    CudaLockShared(PrimaryLock(pDevice), 0, 0);
    result = CudaDriverRoutine_9b180(pDevice);
    CudaUnlockShared(PrimaryLock(pDevice));
  }

  return result == kAlreadyAcquired ? 0 : result;
}

CUresult cuDevicePrimaryCtxReset_v2_impl(int32_t device) {
  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (!IsDeviceOrdinal(device)) {
    CudaLog("CUDA", 0, "Parameter dev must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  CudaDevice* pDevice = g_CudaDriver.devices[device];
  CudaLockShared(PrimaryLock(pDevice), 0, 0);
  result = CudaDriverRoutine_9b2b0(pDevice);
  CudaUnlockShared(PrimaryLock(pDevice));
  return result;
}

CUresult cuDevicePrimaryCtxGetState_impl(int32_t device, U64 pFlags,
  U64 pActive) {
  if (pFlags == 0 || pActive == 0) {
    return kInvalidValue;
  }

  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (!IsDeviceOrdinal(device)) {
    CudaLog("CUDA", 0, "Parameter dev must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  CudaDevice* pDevice = g_CudaDriver.devices[device];
  CudaLockShared(PrimaryLock(pDevice), 0, 0);
  CudaDriverRoutine_9b410(pDevice, pFlags, pActive);
  CudaUnlockShared(PrimaryLock(pDevice));
  return 0;
}

namespace {

// Streaming multiprocessor resources carry a checksum of their first 0x90
// bytes.
template <typename Check, typename Fill>
[[gnu::always_inline]] inline CUresult GetDevResource(U32* pResource,
  U32 type, Check check, Fill fill) {
  if (pResource == nullptr) {
    return kInvalidValue;
  }

  if (type != 1) {
    return kInvalidResourceType;
  }

  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  result = check();
  if (result != 0) {
    return result;
  }

  fill();
  if (pResource[0] == 1) {
    pResource[5] = 0;
    pResource[5] = CudaDriverRoutine_644e0(pResource, 0x90);
  }

  return 0;
}

}

CUresult cuCtxGetDevResource_impl(U64 context, U32* pResource, U32 type) {
  return GetDevResource(pResource, type, [&] {
    return CudaDriverRoutine_deeb0(context, 0);
  }, [&] {
    CudaDriverRoutine_9f380(pResource, context);
  });
}

CUresult cuGreenCtxGetDevResource_impl(U64 green, U32* pResource, U32 type) {
  return GetDevResource(pResource, type, [&] {
    return CudaDriverRoutine_de220(green, 0);
  }, [&] {
    CudaDriverRoutine_9f320(pResource, green);
  });
}

CUresult cuMemAllocPitch_impl(U32* pPointer, U32* pPitch, U32 width,
  U32 height, U32 elementSize) {
  return WithOutputs(pPointer, pPitch, [&](U64* pFirst, U64* pSecond) {
    return CudaDriverRoutine_36eb0(pFirst, pSecond, width, height,
      elementSize, 1);
  });
}

CUresult cuMemAllocPitch_v2_impl(U64* pPointer, U64* pPitch, U64 width,
  U64 height, U32 elementSize) {
  return WithOutputs(pPointer, pPitch, [&](U64* pFirst, U64* pSecond) {
    return CudaDriverRoutine_36eb0(pFirst, pSecond, width, height,
      elementSize, 2);
  });
}

CUresult cuMemGetAddressRange_impl(U32* pBase, U32* pSize, U32 pointer) {
  return WithOutputs(pBase, pSize, [&](U64* pFirst, U64* pSecond) {
    return CudaDriverRoutine_38e00(pFirst, pSecond, pointer, 1);
  });
}

CUresult cuMemGetAddressRange_v2_impl(U64* pBase, U64* pSize, U64 pointer) {
  return WithOutputs(pBase, pSize, [&](U64* pFirst, U64* pSecond) {
    return CudaDriverRoutine_38e00(pFirst, pSecond, pointer, 2);
  });
}

CUresult cuMemGetInfo_impl(U32* pFree, U32* pTotal) {
  return WithOutputs(pFree, pTotal, [&](U64* pFirst, U64* pSecond) {
    return CudaDriverRoutine_39040(pFirst, pSecond, 1);
  });
}

CUresult cuMemGetInfo_v2_impl(U64* pFree, U64* pTotal) {
  return WithOutputs(pFree, pTotal, [&](U64* pFirst, U64* pSecond) {
    return CudaDriverRoutine_39040(pFirst, pSecond, 2);
  });
}

CUresult cuModuleGetGlobal_impl(U32* pPointer, U32* pSize, U64 module,
  U64 name) {
  return WithOutputs(pPointer, pSize, [&](U64* pFirst, U64* pSecond) {
    return CudaDriverRoutine_457c0(pFirst, pSecond, module, name, 1);
  });
}

CUresult cuModuleGetGlobal_v2_impl(U64* pPointer, U64* pSize, U64 module,
  U64 name) {
  return WithOutputs(pPointer, pSize, [&](U64* pFirst, U64* pSecond) {
    return CudaDriverRoutine_457c0(pFirst, pSecond, module, name, 2);
  });
}

namespace {

// The stream keeps its flags at 0x38 and its capture at 0x3e0.
[[gnu::always_inline]] inline CUresult GetStreamContext(U64 stream,
  U64* pContext, U32 apiVersion) {
  U64 context = 0;
  U64 resolved = 0;
  if (pContext == nullptr) {
    return kInvalidValue;
  }

  const CUresult result = CudaDriverRoutine_112680(0, stream, apiVersion,
    &resolved, &context, 1, 0);
  if (result != 0) {
    return result;
  }

  if ((At<U8>(resolved, 0x38) & 8) != 0) {
    return kNotPermitted;
  }

  *pContext = context;
  return 0;
}

[[gnu::always_inline]] inline CUresult IsStreamCapturing(U64 stream,
  U32* pStatus, U32 apiVersion) {
  U64 resolved = 0;
  U64 context = 0;
  if (pStatus == nullptr) {
    return kInvalidValue;
  }

  const CUresult result = CudaDriverRoutine_112680(0, stream, apiVersion,
    &resolved, &context, 13, 0);
  if (result != 0) {
    return result;
  }

  const U64 capture = At<U64>(resolved, 0x3e0);
  U32 status = 0;
  if (capture != 0) {
    status = At<U32>(capture, 0x118) != 0 ? 2 : 1;
  }

  *pStatus = status;
  return 0;
}

}

CUresult cuStreamGetCtx_impl(U64 stream, U64* pContext) {
  return GetStreamContext(stream, pContext, 2);
}

CUresult cuStreamGetCtx_ptsz_impl(U64 stream, U64* pContext) {
  return GetStreamContext(stream, pContext, 3);
}

CUresult cuStreamIsCapturing_impl(U64 stream, U32* pStatus) {
  return IsStreamCapturing(stream, pStatus, 2);
}

CUresult cuStreamIsCapturing_ptsz_impl(U64 stream, U32* pStatus) {
  return IsStreamCapturing(stream, pStatus, 3);
}

// The legacy query reports a missing OpenGL context differently.
CUresult cuGLGetDevices_impl(U64 pCount, U64 pDevices, U32 capacity,
  U32 list) {
  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if ((g_CudaDriver.interopFlags & 4) != 0) {
    return kNotPermitted;
  }

  result = CudaDriverRoutine_bcdd0();
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_c2ce0(pCount, pDevices, capacity, list);
  return result == 219 ? kAlreadyAcquired : result;
}

CUresult cuGraphNodeGetEnabled_impl(U64 exec, U64 node, U32* pIsEnabled) {
  if (node == 0) {
    return kInvalidValue;
  }

  const U32 type = At<U32>(node, 4);
  if (type >= 3) {
    CudaLog("CUDA", 0, "Unsupported node type: %x", type);
    return kInvalidValue;
  }

  const U64 execNode = CudaDriverRoutine_2d560(exec, node,
    reinterpret_cast<U64>(pIsEnabled), type, 0, 0);
  if (execNode == 0) {
    return kInvalidValue;
  }

  *pIsEnabled = At<U8>(execNode, 0x584) == 0;
  return 0;
}

CUresult cuGraphAddEmptyNode_impl(U64* pNode, U64 graph, U64 dependencies,
  U64 count) {
  if (pNode == nullptr) {
    CudaLog("CUDA", 0, "Node pointer cannot be NULL");
    return kInvalidValue;
  }

  U64 resolved = 0;
  if (CudaDriverRoutine_2b880(&resolved, graph, 5, dependencies, 0,
    count) != 0) {
    return kInvalidValue;
  }

  U64 node;
  const CUresult result = CudaDriverRoutine_d8220(&node, resolved,
    dependencies, 0, 0, count);
  if (result == 0) {
    *pNode = node;
  }

  return result;
}

namespace {

[[gnu::always_inline]] inline CUresult SetSemaphoresNodeParams(U64 node,
  U64 params, U32 type, const char* mismatch) {
  if (node == 0) {
    CudaLog("CUDA", 0, "Node cannot be NULL");
    return kInvalidValue;
  }

  if (params == 0) {
    CudaLog("CUDA", 0, "Node parameters cannot be NULL");
    return kInvalidValue;
  }

  if (At<U32>(node, 4) != type) {
    CudaLog("CUDA", 0, mismatch);
    return kInvalidValue;
  }

  return CudaDriverRoutine_d8640(node, params);
}

}

CUresult cuGraphExternalSemaphoresSignalNodeSetParams_impl(U64 node,
  U64 params) {
  return SetSemaphoresNodeParams(node, params, 8,
    "Node is not a semaphore signal node");
}

CUresult cuGraphExternalSemaphoresWaitNodeSetParams_impl(U64 node,
  U64 params) {
  return SetSemaphoresNodeParams(node, params, 9,
    "Node is not a semaphore wait node");
}

CUresult cuGraphReleaseUserObject_impl(U64 graph, U64 object,
  int32_t count) {
  if (count < 0) {
    CudaLog("CUDA", 0, "count cannot exceed INT_MAX");
    return kInvalidValue;
  }

  if (graph == 0) {
    CudaLog("CUDA", 0, "The source graph pointer is NULL");
    CudaLog("CUDA", 0, "graph is not a valid source graph");
    return kInvalidValue;
  }

  if (At<U32>(graph, 4) != 1) {
    CudaLog("CUDA", 0, "The source graph pointer is invalid");
    CudaLog("CUDA", 0, "graph is not a valid source graph");
    return kInvalidValue;
  }

  if (object == 0) {
    CudaLog("CUDA", 0, "object cannot be NULL");
    return kInvalidValue;
  }

  if (count == 0) {
    CudaLog("CUDA", 0, "count cannot be 0");
    return kInvalidValue;
  }

  // Retain and release share one routine taking a signed delta.
  return CudaDriverRoutine_dc4f0(graph, object, -count, 0);
}

CUresult cuLibraryGetModule_impl(U64 pModule, U64 library) {
  if (pModule == 0) {
    CudaLog("CUDA", 0, "pMod cannot be NULL\n");
    return kInvalidValue;
  }

  if (library == 0) {
    CudaLog("CUDA", 0, "library cannot be NULL\n");
    return kInvalidHandle;
  }

  U64 context;
  const CUresult result = CudaGetCurrentContext(&context);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_ea9e0(pModule, library, context);
}

CUresult cuLibraryGetKernel_impl(U64 pKernel, U64 library, U64 name) {
  if (pKernel == 0) {
    CudaLog("CUDA", 0, "pKernel cannot be NULL\n");
    return kInvalidValue;
  }

  if (name == 0) {
    CudaLog("CUDA", 0, "name cannot be NULL\n");
    return kInvalidValue;
  }

  if (library == 0) {
    CudaLog("CUDA", 0, "library cannot be NULL\n");
    return kInvalidHandle;
  }

  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_eab20(pKernel, library, name);
}

CUresult cuLibraryGetUnifiedFunction_impl(U64 pFunction, U64 library,
  U64 symbol) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (pFunction == 0) {
    CudaLog("CUDA", 0, "fptr cannot be NULL\n");
    return kInvalidValue;
  }

  if (library == 0) {
    CudaLog("CUDA", 0, "library cannot be NULL\n");
    return kInvalidHandle;
  }

  if (symbol == 0) {
    CudaLog("CUDA", 0, "symbol cannot be NULL\n");
    return kInvalidValue;
  }

  return CudaDriverRoutine_eace0(pFunction, library, symbol);
}

CUresult cuMemGetAllocationPropertiesFromHandle_impl(U64 pProperties,
  U64 handle) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (CudaDriverRoutine_fe960() == 0) {
    return kNotPermitted;
  }

  if (pProperties == 0) {
    CudaLog("CUDA", 0, "Parameter prop cannot be NULL");
    return kInvalidValue;
  }

  if (handle == 0) {
    CudaLog("CUDA", 0, "Parameter handle is not a valid "
      "CUmemGenericAllocationHandle");
    return kInvalidValue;
  }

  return CudaDriverRoutine_ff1c0(pProperties, handle);
}

// The function name sits at 0x8.
CUresult cuFuncGetName_impl(U64* pName, U64 function) {
  U64 context = 0;
  U64 state = 0;
  if (pName == nullptr) {
    CudaLog("CUDA", 0, "name cannot be NULL\n");
    return kInvalidValue;
  }

  if (function == 0) {
    CudaLog("CUDA", 0, "hfunc cannot be NULL\n");
    return kInvalidValue;
  }

  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_bc020(state, &context, function, 0);
  if (result == 0) {
    *pName = At<U64>(function, 8);
  }

  return result;
}

namespace {

// A function belongs to the current context when its module does.
template <typename Update>
[[gnu::always_inline]] inline CUresult UpdateFunction(U64 function,
  Update update) {
  U64 context = 0;
  CUresult result = CudaGetCurrentContext(&context);
  if (result != 0) {
    return result;
  }

  if (function == 0) {
    return kInvalidHandle;
  }

  const U64 module = At<U64>(function, 0x20);
  if (module == 0 ||
    context != __atomic_fetch_or(&At<U64>(module, 0x18), 0,
    __ATOMIC_SEQ_CST)) {
    return kInvalidHandle;
  }

  CudaLock(ContextLock(context), 0, 0, 0);
  result = update();
  CudaUnlock(ContextLock(context));
  return result;
}

}

CUresult cuFuncSetBlockShape_impl(U64 function, U32 x, U32 y, U32 z) {
  return UpdateFunction(function, [&] {
    return CudaDriverRoutine_b8680(function, x, y, z);
  });
}

CUresult cuFuncSetSharedSize_impl(U64 function, U32 size) {
  return UpdateFunction(function, [&] {
    return CudaDriverRoutine_baca0(function, size);
  });
}

CUresult cuParamSetSize_impl(U64 function, U32 size) {
  return UpdateFunction(function, [&] {
    return CudaDriverRoutine_10be00(function, size);
  });
}

namespace {

template <typename Destroy>
[[gnu::always_inline]] inline CUresult DestroyObject(Destroy destroy) {
  U64 context = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, &context, 2);
  if (result != 0) {
    return result;
  }

  result = CudaReleaseThreadState(state);
  if (result != 0) {
    return result;
  }

  CudaLock(ContextLock(context), 0, 0, 0);
  result = destroy(context);
  CudaUnlock(ContextLock(context));
  return result;
}

template <typename Read>
[[gnu::always_inline]] inline CUresult ReadTexRef(U64 texture, Read read) {
  U64 context = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_11e860(state, &context, texture, 0);
  if (result != 0) {
    return result;
  }

  return read();
}

template <typename T>
[[gnu::always_inline]] inline CUresult GetTexRefField(T* pValue,
  U64 texture, U64 offset) {
  return ReadTexRef(texture, [&] {
    if (pValue == nullptr) {
      return kInvalidValue;
    }

    *pValue = At<T>(texture, offset);
    return CUresult(0);
  });
}

}

CUresult cuSurfObjectDestroy_impl(U64 surface) {
  return DestroyObject([&](U64 context) {
    return CudaDriverRoutine_8c9f0(context, surface);
  });
}

CUresult cuTexObjectDestroy_impl(U64 texture) {
  return DestroyObject([&](U64 context) {
    return CudaDriverRoutine_8c570(context, texture);
  });
}

// A surface reference bound to an array keeps it at 0x48.
CUresult cuSurfRefGetArray_impl(U64* pArray, U64 surface) {
  U64 context = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_11a390(state, &context, surface, 0);
  if (result != 0) {
    return result;
  }

  if (At<U32>(surface, 0x20) != 2) {
    return kInvalidValue;
  }

  *pArray = At<U64>(surface, 0x48);
  return 0;
}

// A texture reference bound to an array keeps it at 0x40, a mipmapped one
// at 0x58.
CUresult cuTexRefGetArray_impl(U64* pArray, U64 texture) {
  return ReadTexRef(texture, [&] {
    if (At<U32>(texture, 0x28) != 2 || At<U64>(texture, 0x58) != 0) {
      return kInvalidValue;
    }

    *pArray = At<U64>(texture, 0x40);
    return CUresult(0);
  });
}

CUresult cuTexRefGetMipmappedArray_impl(U64* pArray, U64 texture) {
  return ReadTexRef(texture, [&] {
    const U64 array = At<U64>(texture, 0x58);
    if (At<U32>(texture, 0x28) != 2 || array == 0) {
      return kInvalidValue;
    }

    *pArray = array;
    return CUresult(0);
  });
}

CUresult cuTexRefGetFilterMode_impl(U32* pMode, U64 texture) {
  return GetTexRefField(pMode, texture, 0x114);
}

CUresult cuTexRefGetMipmapFilterMode_impl(U32* pMode, U64 texture) {
  return GetTexRefField(pMode, texture, 0x118);
}

CUresult cuTexRefGetMipmapLevelBias_impl(float* pBias, U64 texture) {
  return GetTexRefField(pBias, texture, 0x11c);
}

CUresult cuTexRefGetMaxAnisotropy_impl(U32* pAnisotropy, U64 texture) {
  return GetTexRefField(pAnisotropy, texture, 0x128);
}

CUresult cuTexRefGetFlags_impl(U32* pFlags, U64 texture) {
  return GetTexRefField(pFlags, texture, 0x148);
}

CUresult cuTexRefGetBorderColor_impl(U64 pColor, U64 texture) {
  return ReadTexRef(texture, [&] {
    if (pColor == 0) {
      return kInvalidValue;
    }

    CudaDriverRoutine_11f810(pColor, texture);
    return CUresult(0);
  });
}

CUresult cuTexRefGetAddressMode_impl(U64 pMode, U64 texture,
  U32 dimension) {
  return ReadTexRef(texture, [&] {
    if (pMode == 0 || dimension > 2) {
      return kInvalidValue;
    }

    CudaDriverRoutine_11f740(pMode, texture, dimension);
    return CUresult(0);
  });
}
