#include <stdint.h>

using CUresult = uint32_t;
using U8 = uint8_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr CUresult kInvalidValue = 1;
constexpr CUresult kInvalidDevice = 101;
constexpr CUresult kInvalidContext = 201;
constexpr CUresult kIllegalState = 401;
constexpr CUresult kNotSupported = 800;
constexpr CUresult kNotPermitted = 801;
constexpr CUresult kStreamCaptureUnsupported = 900;

struct CudaDriverGlobals {
  U8 reserved0[0x118];
  U64 devices[64];
  int32_t deviceCount;
};

struct CudaHostNodeParams {
  U64 function;
  U64 userData;
};

struct CudaKernelNodeParams {
  U64 words[7];
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
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_86e90(U64*, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_87110(U32, U32);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_87a10(U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_8a4c0(U64*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_8a9e0(U64*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_98190(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_98340(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_985e0(U64, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_99e80(U64, U64*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_9b180(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_9b2b0(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_b48b0(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_b4990(U64, U64, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_c36c0(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d3530(U64*, U64, U64,
  U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_d4800(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_de220(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_deeb0(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_e30b0(U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_efe40(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_f2cf0(U64, U64*);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_10e160(U64*);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_10e240(U64*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_10e620(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_112680(U64, U64, U32,
  U64*, U64*, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_114b90(U64, U64,
  U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_117c40(U64, U32, U32,
  U32);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_121b40(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_1b8de0(U64*, U64,
  U64, U64, U64);

namespace {

[[gnu::always_inline]] inline bool IsDeviceOrdinal(int32_t device) {
  return device >= 0 && device < g_CudaDriver.deviceCount;
}

[[gnu::always_inline]] inline U64 ContextLock(U64 context) {
  return context + 0x18;
}

[[gnu::always_inline]] inline U64 PrimaryLock(U64 device) {
  return device + 0x41e8;
}

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::always_inline]] inline bool IsSourceGraph(U64 graph,
  const char* invalid) {
  if (graph == 0) {
    CudaLog("CUDA", 0, "The source graph pointer is NULL");
    CudaLog("CUDA", 0, invalid);
    return false;
  }

  if (At<U32>(graph, 4) != 1) {
    CudaLog("CUDA", 0, "The source graph pointer is invalid");
    CudaLog("CUDA", 0, invalid);
    return false;
  }

  return true;
}

}

CUresult cuGraphAddMemFreeNode_impl(U64* pNode, U64 graph, U64 dependencies,
  U64 count, U64 pointer) {
  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (pNode == nullptr) {
    CudaLog("CUDA", 0, "phGraphNode cannot be NULL");
    return kInvalidValue;
  }

  U64 resolved = 0;
  if (CudaDriverRoutine_2b880(&resolved, graph, 11, dependencies, 0,
    count) != 0) {
    return kInvalidValue;
  }

  U64 node;
  result = CudaDriverRoutine_d3530(&node, resolved, dependencies, 0, 0, count,
    pointer, 2);
  if (result == 0) {
    *pNode = node;
  }

  return result;
}

CUresult cuGraphDestroy_impl(U64 graph) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (!IsSourceGraph(graph, "Graph is not a valid source graph")) {
    return kInvalidValue;
  }

  if (At<U64>(graph, 0x110) != 0) {
    CudaLog("CUDA", 0, "Cannot destroy a graph while it is being captured "
      "to");
    return kIllegalState;
  }

  if (CudaDriverRoutine_d4800(graph) != 0) {
    CudaLog("CUDA", 0, "Graph is owned by another graph and cannot be "
      "independently destroyed");
    return kInvalidValue;
  }

  CudaDriverRoutine_c36c0(graph);
  return 0;
}

namespace {

// Every node keeps its type at 0x4 and its parameters from 0x20.
template <typename T>
[[gnu::always_inline]] inline CUresult GetNodeParams(U64 node, T* pParams,
  U32 type, const char* missing, const char* nodeMissing,
  const char* mismatch) {
  if (node == 0) {
    CudaLog("CUDA", 0, nodeMissing);
    return kInvalidValue;
  }

  if (pParams == nullptr) {
    CudaLog("CUDA", 0, missing);
    return kInvalidValue;
  }

  if (At<U32>(node, 4) != type) {
    CudaLog("CUDA", 0, mismatch);
    return kInvalidValue;
  }

  *pParams = At<T>(node, 0x20);
  return 0;
}

}

CUresult cuGraphHostNodeGetParams_impl(U64 node,
  CudaHostNodeParams* pParams) {
  return GetNodeParams(node, pParams, 3, "nodeParams cannot be NULL",
    "Node cannot be NULL", "Node is not a host node");
}

CUresult cuGraphEventRecordNodeGetEvent_impl(U64 node, U64* pEvent) {
  return GetNodeParams(node, pEvent, 7, "event_out cannot be NULL",
    "Node cannot be NULL", "Node is not an event record node");
}

CUresult cuGraphEventWaitNodeGetEvent_impl(U64 node, U64* pEvent) {
  return GetNodeParams(node, pEvent, 6, "event_out cannot be NULL",
    "Node cannot be NULL", "Node is not an event wait node");
}

CUresult cuGraphMemFreeNodeGetParams_impl(U64 node, U64* pPointer) {
  return GetNodeParams(node, pPointer, 11, "dptr_out cannot be NULL",
    "hNode cannot be NULL", "Node is not a memory free node");
}

CUresult cuGraphKernelNodeGetParams_impl(U64 node,
  CudaKernelNodeParams* pParams) {
  const char* message;
  if (node == 0) {
    message = "Node cannot be NULL";
  }
  else if (pParams == nullptr) {
    message = "Node parameters cannot be NULL";
  }
  else if (At<U32>(node, 4) != 0) {
    message = "Node is not a kernel node";
  }
  else {
    *pParams = At<CudaKernelNodeParams>(node, 0x20);
    return 0;
  }

  CudaLog("CUDA", 0, message);
  return kInvalidValue;
}

CUresult cuArrayDestroy_impl(U64* array) {
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_86e90(array, 0);
  if (result != 0) {
    return result;
  }

  const U64 context = *array;
  result = CudaReleaseThreadState(state);
  if (result != 0) {
    return result;
  }

  CudaDriverRoutine_10e160(array);
  CudaLock(ContextLock(context), 0, 0, 0);
  result = CudaDriverRoutine_98190(context, 0);
  if (result == 0) {
    result = CudaDriverRoutine_8a4c0(array);
  }

  CudaUnlock(ContextLock(context));
  return result;
}

CUresult cuMipmappedArrayDestroy_impl(U64* array) {
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_86e90(array, 0);
  if (result != 0) {
    return result;
  }

  const U64 context = *array;
  result = CudaReleaseThreadState(state);
  if (result != 0) {
    return result;
  }

  CudaDriverRoutine_10e240(array);
  CudaLock(ContextLock(context), 0, 0, 0);
  result = CudaDriverRoutine_98190(context, 0);
  if (result == 0) {
    result = CudaDriverRoutine_8a9e0(array);
  }

  CudaUnlock(ContextLock(context));
  return result;
}

// The default pool sits 0xb0 bytes into the device pool record.
CUresult cuDeviceGetMemPool_impl(U64* pPool, U32 device) {
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, nullptr, 0);
  if (result != 0) {
    return result;
  }

  if (pPool == nullptr || !IsDeviceOrdinal(device)) {
    return kInvalidValue;
  }

  if (CudaDriverRoutine_efe40(g_CudaDriver.devices[device]) == 0) {
    return kNotPermitted;
  }

  U64 pool = 0;
  result = CudaDriverRoutine_f2cf0(g_CudaDriver.devices[device], &pool);
  if (result == 0) {
    *pPool = pool + 0xb0;
  }

  return result;
}

// Interprocess and blocking flags need device support.
CUresult cuEventCreate_impl(U64 pEvent, U32 flags) {
  U64 context = 0;
  CUresult result = CudaGetCurrentContext(&context);
  if (result != 0) {
    return result;
  }

  if (pEvent == 0 || flags > 7) {
    return kInvalidValue;
  }

  if (flags >= 4) {
    result = CudaDriverRoutine_e30b0(At<U64>(context, 0x40));
    if (result != 0) {
      return result;
    }

    if ((flags & 2) == 0) {
      return kInvalidValue;
    }
  }

  CudaLock(ContextLock(context), 0, 0, 0);
  result = CudaDriverRoutine_b4990(context, pEvent, flags);
  CudaUnlock(ContextLock(context));
  return result;
}

namespace {

// Streams being captured keep the thread state for the allocation.
[[gnu::always_inline]] inline CUresult MemAllocAsync(U64* pPointer,
  U64 size, U64 stream, U32 apiVersion) {
  if (pPointer != nullptr) {
    *pPointer = 0;
  }

  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  if (CudaDriverRoutine_121b40(state) == 0) {
    return kNotSupported;
  }

  U64 resolved;
  U64 context;
  result = CudaDriverRoutine_112680(state, stream, apiVersion, &resolved,
    &context, 1, 0);
  if (result != 0) {
    return result;
  }

  if (At<U64>(resolved, 0x3e0) == 0) {
    result = CudaReleaseThreadState(state);
    if (result != 0) {
      return result;
    }
  }

  return CudaDriverRoutine_1b8de0(pPointer, size, 0, resolved, context);
}

}

CUresult cuMemAllocAsync_impl(U64* pPointer, U64 size, U64 stream) {
  return MemAllocAsync(pPointer, size, stream, 2);
}

CUresult cuMemAllocAsync_ptsz_impl(U64* pPointer, U64 size, U64 stream) {
  return MemAllocAsync(pPointer, size, stream, 3);
}

CUresult cuCtxGetApiVersion_impl(U64 context, U32* pVersion) {
  CUresult result;
  U64 resolved;
  if (context != 0) {
    result = CudaGetCurrentContext(nullptr);
    if (result != 0) {
      return result;
    }

    if (pVersion == nullptr) {
      return kInvalidValue;
    }

    if (CudaDriverRoutine_deeb0(context, 4) != 0) {
      return kInvalidContext;
    }

    resolved = CudaDriverRoutine_98340(context);
  }
  else {
    U64 current;
    result = CudaGetCurrentContext(&current);
    if (result != 0) {
      return result;
    }

    if (pVersion == nullptr || current == 0) {
      return kInvalidValue;
    }

    resolved = current;
  }

  *pVersion = At<U32>(resolved, 0xc0);
  return 0;
}

// The device dispatch table holds the linear width query at 0x4d38.
CUresult cuDeviceGetTexture1DLinearMaxWidth_impl(U64* pWidth, U32 format,
  U32 channels, int32_t device) {
  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (pWidth == nullptr) {
    return kInvalidValue;
  }

  result = CudaDriverRoutine_87110(format, channels);
  if (result != 0) {
    return result;
  }

  if (!IsDeviceOrdinal(device)) {
    CudaLog("CUDA", 0, "Parameter dev must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  const U32 elementSize = CudaDriverRoutine_87a10(format, channels);
  using Query = U64 (*)(U32);
  *pWidth = At<Query>(g_CudaDriver.devices[device], 0x4d38)(elementSize);
  return 0;
}

CUresult cuDevicePrimaryCtxReset_impl(int32_t device) {
  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (!IsDeviceOrdinal(device)) {
    CudaLog("CUDA", 0, "Parameter dev must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  const U64 pDevice = g_CudaDriver.devices[device];
  CudaLockShared(PrimaryLock(pDevice), 0, 0);
  result = CudaDriverRoutine_9b2b0(pDevice);
  if (result == 0) {
    result = CudaDriverRoutine_9b180(pDevice);
    if (result == kInvalidContext) {
      result = 0;
    }
  }

  CudaUnlockShared(PrimaryLock(pDevice));
  return result;
}

// The legacy query saturates the size to 32 bits.
CUresult cuDeviceTotalMem_impl(U32* pBytes, int32_t device) {
  CUresult result = CudaGetCurrentContext(nullptr);
  U32 bytes = 0;
  if (result != 0) {
    if (pBytes == nullptr) {
      return result;
    }
  }
  else {
    if (pBytes == nullptr) {
      return kInvalidValue;
    }

    result = kInvalidDevice;
    if (IsDeviceOrdinal(device)) {
      U64 total;
      result = CudaDriverRoutine_99e80(g_CudaDriver.devices[device], &total);
      if (result == 0) {
        bytes = total >= UINT32_MAX ? UINT32_MAX : total;
      }
    }
  }

  *pBytes = bytes;
  return result;
}

namespace {

[[gnu::always_inline]] inline CUresult SetContextConfig(U32 which,
  U32 value, U32 limit) {
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

  result = CudaReleaseThreadState(state);
  if (result != 0) {
    return result;
  }

  if (value > limit) {
    return kInvalidValue;
  }

  CudaLock(ContextLock(context), 0, 0, 0);
  result = CudaDriverRoutine_985e0(context, which, value);
  CudaUnlock(ContextLock(context));
  return result;
}

}

CUresult cuCtxSetCacheConfig_impl(U32 config) {
  return SetContextConfig(0, config, 3);
}

CUresult cuCtxSetSharedMemConfig_impl(U32 config) {
  return SetContextConfig(1, config, 2);
}

// Contexts reach their device peer table through 0x50.
CUresult cuCtxDisablePeerAccess_impl(U64 peer) {
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

  if (peer == 0) {
    return kInvalidContext;
  }

  result = CudaDriverRoutine_deeb0(peer, 0);
  if (result != 0) {
    return result;
  }

  const U64 resolved = CudaDriverRoutine_98340(peer);
  result = CudaReleaseThreadState(state);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_10e620(At<U64>(context, 0x50),
    At<U64>(resolved, 0x50));
}

namespace {

// An event with pending work makes the context stream wait on it.
[[gnu::always_inline]] inline CUresult WaitContextEvent(U64 context,
  U64 event) {
  const U64 channel = At<U64>(context, 0x58);
  const U64 stream = At<U64>(context, 0x60);
  if (At<U32>(channel, 0xd0) != 0) {
    CudaDriverRoutine_117c40(At<U64>(channel, 8), 2, 1, 0);
    return kStreamCaptureUnsupported;
  }

  const CUresult result = CudaDriverRoutine_b48b0(event, 0);
  if (result != 0) {
    return result;
  }

  if (At<U32>(event, 0x30) == 0 && At<U32>(event, 0x48) == 0) {
    return 0;
  }

  return CudaDriverRoutine_114b90(stream, event, 2);
}

}

CUresult cuCtxWaitEvent_impl(U64 context, U64 event) {
  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_deeb0(context, 0);
  if (result != 0) {
    return result;
  }

  return WaitContextEvent(context, event);
}

CUresult cuGreenCtxWaitEvent_impl(U64 green, U64 event) {
  if (green == 0 || At<U32>(green, 0) == 0) {
    return kInvalidContext;
  }

  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_de220(green, 0);
  if (result != 0) {
    return result;
  }

  return WaitContextEvent(green, event);
}
