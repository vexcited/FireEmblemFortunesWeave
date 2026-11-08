#include <stdint.h>

using CUresult = uint32_t;
using U8 = uint8_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr CUresult kInvalidValue = 1;
constexpr CUresult kInvalidDevice = 101;
constexpr CUresult kInvalidHandle = 400;
constexpr CUresult kNotPermitted = 801;

// Querying the driver version through the attribute API skips the device.
constexpr U32 kDriverVersionAttribute = 0x20080403;

struct CudaDevice {
  U8 reserved0[0x41e0];
  U64 greenContexts;
  U8 primaryLock[0x53e0 - 0x41e8];
  CUresult (*getLuid)(CudaDevice* device, U64 luid, U64 mask);
};

struct CudaDriverGlobals {
  U8 reserved0[0x118];
  CudaDevice* devices[64];
  int32_t deviceCount;
  U8 reserved1[0x44e0 - 0x31c];
  U8 interopFlags;
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

[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_2b880(U64*, U64, U32,
  U64, U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_2d560(U64, U64, U64, U32,
  U64, U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_97fd0(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_99530(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_9a090(CudaDevice*,
  U32, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_9ab20(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_9b180(CudaDevice*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_bb120(U64, U32, U32,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_bbeb0(U64, U64*, U64,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_bcdd0();
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_bd040(U64*, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_c2ce0(U64, U64, U32,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_c7ea0(U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d82e0(U64, U64, U64,
  U64, U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d8550(U64, U64, U64,
  U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d8770(U64, U64, U64,
  U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d9180(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_db7c0(U64, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_ddfc0(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_de220(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_df0b0(U64, U64*, U64,
  U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_ebab0(U64, U32, U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_f22e0(U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_11e860(U64, U64*,
  U64, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_11ea60(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_11ef90(U64, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_11f0a0(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_112680(U64, U64, U32,
  U64*, U32**, U32, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_121b80(U64, U32**);

namespace {

[[gnu::always_inline]] inline bool IsDeviceOrdinal(int32_t device) {
  return device >= 0 && device < g_CudaDriver.deviceCount;
}

// The context keeps its lock at 0x18 and its device at 0x40.
[[gnu::always_inline]] inline U64 ContextLock(U64 context) {
  return context + 0x18;
}

[[gnu::always_inline]] inline U64 PrimaryLock(CudaDevice* device) {
  return reinterpret_cast<U64>(device->primaryLock);
}

}

CUresult cuDeviceGraphMemTrim_impl(int32_t device) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (!IsDeviceOrdinal(device)) {
    CudaLog("CUDA", 0, "Parameter device must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  CudaDriverRoutine_f22e0(device);
  return 0;
}

CUresult cuDeviceGetLuid_impl(U64 luid, U64 mask, int32_t device) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (luid == 0 || mask == 0) {
    return kInvalidValue;
  }

  if (!IsDeviceOrdinal(device)) {
    CudaLog("CUDA", 0, "Parameter dev must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  CudaDevice* pDevice = g_CudaDriver.devices[device];
  return pDevice->getLuid(pDevice, luid, mask);
}

CUresult cuDeviceGetAttribute_impl(U64 pValue, U32 attribute,
  int32_t device) {
  if (pValue == 0) {
    return kInvalidValue;
  }

  if (attribute == kDriverVersionAttribute) {
    return CudaDriverRoutine_9ab20(pValue);
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

  return CudaDriverRoutine_9a090(g_CudaDriver.devices[device], attribute,
    pValue);
}

CUresult cuDevicePrimaryCtxRelease_v2_impl(int32_t device) {
  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (!IsDeviceOrdinal(device)) {
    return kInvalidDevice;
  }

  CudaDevice* pDevice = g_CudaDriver.devices[device];
  CudaLockShared(PrimaryLock(pDevice), 0, 0);
  result = CudaDriverRoutine_9b180(pDevice);
  CudaUnlockShared(PrimaryLock(pDevice));
  return result;
}

// A green context points at its device from 0x40.
CUresult cuGreenCtxDestroy_impl(U64 green) {
  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_de220(green, 4);
  if (result != 0) {
    return result;
  }

  CudaDevice* pDevice = *reinterpret_cast<CudaDevice**>(green + 0x40);
  CudaDriverRoutine_ddfc0(green);
  CudaDriverRoutine_97fd0(pDevice->greenContexts);
  CudaLockShared(PrimaryLock(pDevice), 0, 0);
  CudaDriverRoutine_9b180(pDevice);
  CudaUnlockShared(PrimaryLock(pDevice));
  return 0;
}

CUresult cuStreamGetGreenCtx_impl(U64 stream, U32** pGreen) {
  U32* green = nullptr;
  U64 resolved = 0;
  if (pGreen == nullptr) {
    return kInvalidValue;
  }

  const CUresult result = CudaDriverRoutine_112680(0, stream, 2, &resolved,
    &green, 1, 0);
  if (result != 0) {
    return result;
  }

  *pGreen = green;
  if (*green != 1) {
    *pGreen = nullptr;
  }

  return 0;
}

CUresult cuCtxGetLimit_impl(U64 pValue, U32 limit) {
  U64 context = 0;
  CUresult result = CudaGetCurrentContext(&context);
  if (result != 0) {
    return result;
  }

  if (pValue == 0 || limit > 9) {
    return kInvalidValue;
  }

  CudaLock(ContextLock(context), 0, 0, 0);
  result = CudaDriverRoutine_ebab0(context, limit, pValue);
  CudaUnlock(ContextLock(context));
  return result;
}

CUresult cuFlushGPUDirectRDMAWrites_impl(U32 target, U32 scope) {
  U64 context = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_df0b0(state, &context, 0, 0);
  if (result != 0) {
    return result;
  }

  if (target != 0 || (scope != 200 && scope != 100)) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_99530(context, scope);
}

// The device dispatch table holds the tensor map patcher at 0x4d60.
CUresult cuTensorMapReplaceAddress_impl(U64 tensorMap, U64 address) {
  U64 context = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, &context, 0);
  if (result != 0) {
    return result;
  }

  if (address == 0) {
    return kInvalidValue;
  }

  const U64 device = *reinterpret_cast<U64*>(context + 0x40);
  using Replace = CUresult (*)(U64, U64);
  return (*reinterpret_cast<Replace*>(device + 0x4d60))(tensorMap, address);
}

CUresult cuFuncSetAttribute_impl(U64 function, U32 attribute, U32 value) {
  U64 context = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_bbeb0(state, &context, function, 0);
  if (result != 0) {
    return result;
  }

  CudaLock(ContextLock(context), 0, 0, 0);
  result = CudaDriverRoutine_bb120(function, attribute, value, 1);
  CudaUnlock(ContextLock(context));
  return result;
}

CUresult cuFuncLoad_impl(U64 function) {
  U64 state = 0;
  if (function == 0) {
    CudaLog("CUDA", 0, "function cannot be NULL\n");
    return kInvalidHandle;
  }

  const CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_bbeb0(state, nullptr, function, 0);
}

CUresult cuGLInit_impl() {
  U64 unused = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  U64 context = 0;
  result = CudaGetThreadContext(state, &context, 0);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_bd040(&unused, context);
}

CUresult cuGLGetDevices_v2_impl(U64 pCount, U64 pDevices, U32 capacity,
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

  return CudaDriverRoutine_c2ce0(pCount, pDevices, capacity, list);
}

CUresult cuThreadExchangeStreamCaptureMode_impl(U32* pMode) {
  U64 state = 0;
  const CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  U32* capture;
  CudaDriverRoutine_121b80(state, &capture);
  const U32 previous = capture[1];
  capture[1] = *pMode;
  *pMode = previous;
  return 0;
}

namespace {

template <typename Update>
[[gnu::always_inline]] inline CUresult UpdateTexRef(U64 texture,
  Update update) {
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

  CudaLock(ContextLock(context), 0, 0, 0);
  update();
  CudaUnlock(ContextLock(context));
  return 0;
}

[[gnu::always_inline]] inline CUresult LookupTexRef(U64 texture) {
  U64 context = 0;
  U64 state = 0;
  const CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_11e860(state, &context, texture, 0);
}

}

CUresult cuTexRefDestroy_impl(U64 texture) {
  return UpdateTexRef(texture, [&] {
    CudaDriverRoutine_11ea60(texture);
  });
}

CUresult cuTexRefSetFilterMode_impl(U64 texture, U32 mode) {
  return UpdateTexRef(texture, [&] {
    CudaDriverRoutine_11ef90(texture, mode);
  });
}

CUresult cuTexRefSetMaxAnisotropy_impl(U64 texture, U32 anisotropy) {
  return UpdateTexRef(texture, [&] {
    CudaDriverRoutine_11f0a0(texture, anisotropy);
  });
}

// The texture reference keeps its format at 0x60 and its mipmap clamp at
// 0x120.
CUresult cuTexRefGetFormat_impl(U32* pFormat, U32* pChannels, U64 texture) {
  const CUresult result = LookupTexRef(texture);
  if (result != 0) {
    return result;
  }

  if (pFormat != nullptr) {
    *pFormat = *reinterpret_cast<U32*>(texture + 0x60);
  }

  if (pChannels != nullptr) {
    *pChannels = *reinterpret_cast<U32*>(texture + 0x64);
  }

  return 0;
}

CUresult cuTexRefGetMipmapLevelClamp_impl(float* pMinimum, float* pMaximum,
  U64 texture) {
  const CUresult result = LookupTexRef(texture);
  if (result != 0) {
    return result;
  }

  if (pMinimum == nullptr || pMaximum == nullptr) {
    return kInvalidValue;
  }

  *pMinimum = *reinterpret_cast<float*>(texture + 0x120);
  *pMaximum = *reinterpret_cast<float*>(texture + 0x124);
  return 0;
}

CUresult cuGraphMemsetNodeGetParams_impl(U64 node, U64 params) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (node == 0) {
    CudaLog("CUDA", 0, "Node cannot be NULL");
    return kInvalidValue;
  }

  if (params == 0) {
    CudaLog("CUDA", 0, "Node parameters cannot be NULL");
    return kInvalidValue;
  }

  return CudaDriverRoutine_d9180(node, params);
}

// Only kernel, memcpy and memset nodes can be toggled.
CUresult cuGraphNodeSetEnabled_impl(U64 exec, U64 node, U32 isEnabled) {
  if (node == 0) {
    return kInvalidValue;
  }

  const U32 type = *reinterpret_cast<U32*>(node + 4);
  if (type >= 3) {
    CudaLog("CUDA", 0, "Unsupported node type: %x", type);
    return kInvalidValue;
  }

  U32 scratch;
  const U64 execNode = CudaDriverRoutine_2d560(exec, node,
    reinterpret_cast<U64>(&scratch), type, 0, 0);
  if (execNode == 0) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_db7c0(execNode, isEnabled);
}

CUresult cuGraphDebugDotPrint_impl(U64 graph, U64 path, U32 flags) {
  if (path == 0) {
    CudaLog("CUDA", 0, "Path cannot be NULL");
    return kInvalidValue;
  }

  if (graph == 0) {
    CudaLog("CUDA", 0, "The source graph pointer is NULL");
  }
  else if (*reinterpret_cast<U32*>(graph + 4) == 1) {
    return CudaDriverRoutine_c7ea0(graph, path, flags);
  }
  else {
    CudaLog("CUDA", 0, "The source graph pointer is invalid");
  }

  CudaLog("CUDA", 0, "Graph is not a valid source graph");
  return kInvalidValue;
}

namespace {

[[gnu::always_inline]] inline CUresult AddNode(U64 pNode, U64 graph,
  U64 dependencies, U64 count, U64 params, U32 type, const char* missing,
  U64* pGraph) {
  if (pNode == 0) {
    CudaLog("CUDA", 0, "Node pointer cannot be NULL");
    return kInvalidValue;
  }

  if (params == 0) {
    CudaLog("CUDA", 0, missing);
    return kInvalidValue;
  }

  *pGraph = 0;
  return CudaDriverRoutine_2b880(pGraph, graph, type, dependencies, 0, count);
}

}

CUresult cuGraphAddEventRecordNode_impl(U64 pNode, U64 graph,
  U64 dependencies, U64 count, U64 event) {
  U64 resolved;
  if (AddNode(pNode, graph, dependencies, count, event, 7,
    "event cannot be NULL", &resolved) != 0) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_d82e0(pNode, resolved, dependencies, 0, 0, count,
    event, 1, 2);
}

CUresult cuGraphAddEventWaitNode_impl(U64 pNode, U64 graph,
  U64 dependencies, U64 count, U64 event) {
  U64 resolved;
  if (AddNode(pNode, graph, dependencies, count, event, 6,
    "event cannot be NULL", &resolved) != 0) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_d82e0(pNode, resolved, dependencies, 0, 0, count,
    event, 0, 2);
}

CUresult cuGraphAddExternalSemaphoresSignalNode_impl(U64 pNode, U64 graph,
  U64 dependencies, U64 count, U64 params) {
  U64 resolved;
  if (AddNode(pNode, graph, dependencies, count, params, 8,
    "Node parameters cannot be NULL", &resolved) != 0) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_d8550(pNode, resolved, dependencies, 0, 0, count,
    params, 2);
}

CUresult cuGraphAddExternalSemaphoresWaitNode_impl(U64 pNode, U64 graph,
  U64 dependencies, U64 count, U64 params) {
  U64 resolved;
  if (AddNode(pNode, graph, dependencies, count, params, 9,
    "Node parameters cannot be NULL", &resolved) != 0) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_d8770(pNode, resolved, dependencies, 0, 0, count,
    params, 2);
}
