#include <stdint.h>

using CUresult = uint32_t;
using U8 = uint8_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr CUresult kInvalidValue = 1;
constexpr CUresult kInvalidDevice = 101;
constexpr CUresult kInvalidContext = 201;
constexpr CUresult kPeerAccessUnsupported = 217;
constexpr CUresult kInvalidHandle = 400;
constexpr CUresult kNotSupported = 800;
constexpr CUresult kNotPermitted = 801;
constexpr CUresult kInvalidResourceType = 914;

struct CudaDriverGlobals {
  U8 reserved0[0x118];
  U64 devices[64];
  int32_t deviceCount;
  U8 reserved1[0x7370 - 0x31c];
  U64 execGraphs;
  U8 execGraphsLock[8];
};

struct CudaSemaphoresNodeParams {
  U64 words[3];
};

struct CudaBatchMemOpNodeParams {
  U64 context;
  U32 count;
  U64 operations;
  U32 flags;
};

struct CudaHostNodeParams {
  U64 function;
  U64 userData;
};

[[gnu::visibility("hidden")]] extern CudaDriverGlobals g_CudaDriver;

[[gnu::visibility("hidden")]] void CudaLog(const char* tag, U32 level,
  const char* format, ...);
[[gnu::visibility("hidden")]] CUresult CudaGetCurrentContext(U64* pContext);
[[gnu::visibility("hidden")]] void CudaLock(U64 mutex, U32, U64, U32);
[[gnu::visibility("hidden")]] void CudaUnlock(U64 mutex);
[[gnu::visibility("hidden")]] void CudaLockRead(U64 mutex, U32, U64);
[[gnu::visibility("hidden")]] void CudaUnlockRead(U64 mutex);
[[gnu::visibility("hidden")]] CUresult CudaGetThreadState(U64* pState);
[[gnu::visibility("hidden")]] CUresult CudaGetThreadContext(U64 state,
  U64* pContext, U32 apiVersion);
[[gnu::visibility("hidden")]] CUresult CudaReleaseThreadState(U64 state);

[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_28980(U64, U32, U64,
  U32, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_2b880(U64*, U64, U32,
  U64, U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_2d560(U64, U64, U64, U32,
  U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_2fae0(U64, U64*, U64*,
  U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_30e80(U64, U64, U32,
  U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_644e0(U32*, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_8ac00(U64, U64, U64,
  U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_8acb0(U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_98340(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_9f2d0(U32*, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1a2980(U64, U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_c3c20(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_bc020(U64, U64*, U64,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d5f10(U64, U64, U64,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d6880(U64*, U64, U64,
  U64, U64, U64, CudaHostNodeParams*, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_d6980(U64,
  CudaHostNodeParams*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d83a0(U64, U64, U64,
  U64, U64, U64, CudaBatchMemOpNodeParams*, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d84d0(U64,
  CudaBatchMemOpNodeParams*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_da280(U64,
  CudaBatchMemOpNodeParams*);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_de370();
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_deeb0(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_e3160(U32, U64, U64,
  U64, U64, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_e8dd0(U64, U32*, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_e9c60(U64, U64, U64,
  U64, U32, U64, U64, U32, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_ea8a0(U64, U64, U64,
  U64, U32, U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_eb7e0(U64, U32, U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_eec70(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_1092a0(U64*, U64,
  U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_1099b0(U64, U64*,
  U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_10e4b0(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_11e860(U64, U64*,
  U64, U32);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_121b60(U64);

namespace {

[[gnu::always_inline]] inline bool IsDeviceOrdinal(int32_t device) {
  return device >= 0 && device < g_CudaDriver.deviceCount;
}

[[gnu::always_inline]] inline U64 ContextLock(U64 context) {
  return context + 0x18;
}

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::always_inline]] inline U64 FindExecGraph(U64 exec) {
  const U64 lock = reinterpret_cast<U64>(g_CudaDriver.execGraphsLock);
  CudaLockRead(lock, 0, 0);
  const U64 found = CudaDriverRoutine_1a2980(g_CudaDriver.execGraphs, exec);
  CudaUnlockRead(lock);
  return found;
}

}

CUresult cuGraphAddHostNode_impl(U64* pNode, U64 graph, U64 dependencies,
  U64 count, CudaHostNodeParams* pParams) {
  if (pParams == nullptr) {
    CudaLog("CUDA", 0, "nodeParams cannot be NULL");
    return kInvalidValue;
  }

  if (pParams->function == 0) {
    CudaLog("CUDA", 0, "Host function cannot be NULL");
    return kInvalidValue;
  }

  if (pNode == nullptr) {
    CudaLog("CUDA", 0, "Node pointer cannot be NULL");
    return kInvalidValue;
  }

  if (CudaDriverRoutine_de370() == 0) {
    CudaLog("CUDA", 0, "Stream callbacks and host nodes are not supported "
      "with MPS");
    return kNotPermitted;
  }

  U64 resolved = 0;
  if (CudaDriverRoutine_2b880(&resolved, graph, 3, dependencies, 0,
    count) != 0) {
    return kInvalidValue;
  }

  U64 node;
  const CUresult result = CudaDriverRoutine_d6880(&node, resolved,
    dependencies, 0, 0, count, pParams, 2);
  if (result == 0) {
    *pNode = node;
  }

  return result;
}

CUresult cuGraphHostNodeSetParams_impl(U64 node,
  CudaHostNodeParams* pParams) {
  if (node == 0) {
    CudaLog("CUDA", 0, "Node cannot be NULL");
    return kInvalidValue;
  }

  if (pParams == nullptr) {
    CudaLog("CUDA", 0, "nodeParams cannot be NULL");
    return kInvalidValue;
  }

  if (pParams->function == 0) {
    CudaLog("CUDA", 0, "Host function cannot be NULL");
    return kInvalidValue;
  }

  if (At<U32>(node, 4) != 3) {
    CudaLog("CUDA", 0, "Node is not a host node");
    return kInvalidValue;
  }

  CudaDriverRoutine_d6980(node, pParams);
  return 0;
}

namespace {

template <typename T>
[[gnu::always_inline]] inline CUresult GetNodeParams(U64 node, T* pParams,
  U32 type, const char* mismatch) {
  if (node == 0) {
    CudaLog("CUDA", 0, "Node cannot be NULL");
    return kInvalidValue;
  }

  if (pParams == nullptr) {
    CudaLog("CUDA", 0, "params_out cannot be NULL");
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

CUresult cuGraphExternalSemaphoresSignalNodeGetParams_impl(U64 node,
  CudaSemaphoresNodeParams* pParams) {
  return GetNodeParams(node, pParams, 8,
    "Node is not a semaphore signal node");
}

CUresult cuGraphExternalSemaphoresWaitNodeGetParams_impl(U64 node,
  CudaSemaphoresNodeParams* pParams) {
  return GetNodeParams(node, pParams, 9,
    "Node is not a semaphore wait node");
}

CUresult cuGraphBatchMemOpNodeGetParams_impl(U64 node,
  CudaBatchMemOpNodeParams* pParams) {
  return GetNodeParams(node, pParams, 12,
    "Node is not a batch memory operation node");
}

namespace {

[[gnu::always_inline]] inline CUresult CheckBatchMemOps(
  const CudaBatchMemOpNodeParams* pParams) {
  return CudaDriverRoutine_28980(pParams->context, pParams->count,
    pParams->operations, pParams->flags, 0, 0);
}

}

CUresult cuGraphAddBatchMemOpNode_impl(U64 pNode, U64 graph,
  U64 dependencies, U64 count, CudaBatchMemOpNodeParams* pParams) {
  if (pNode == 0) {
    CudaLog("CUDA", 0, "Node pointer cannot be NULL");
    return kInvalidValue;
  }

  if (pParams == nullptr) {
    CudaLog("CUDA", 0, "Node parameters cannot be NULL");
    return kInvalidValue;
  }

  if (pParams->context == 0) {
    CudaLog("CUDA", 0, "Context cannot be NULL");
    return kInvalidValue;
  }

  if (pParams->count != 0 && pParams->operations == 0) {
    CudaLog("CUDA", 0, "paramArray cannot be NULL");
    return kInvalidValue;
  }

  U64 resolved = 0;
  if (CudaDriverRoutine_2b880(&resolved, graph, 12, dependencies, 0,
    count) != 0) {
    return kInvalidValue;
  }

  const CUresult result = CheckBatchMemOps(pParams);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_d83a0(pNode, resolved, dependencies, 0, 0, count,
    pParams, 2);
}

CUresult cuGraphBatchMemOpNodeSetParams_impl(U64 node,
  CudaBatchMemOpNodeParams* pParams) {
  if (node == 0) {
    CudaLog("CUDA", 0, "Node cannot be NULL");
    return kInvalidValue;
  }

  if (pParams == nullptr) {
    CudaLog("CUDA", 0, "Node parameters cannot be NULL");
    return kInvalidValue;
  }

  if (pParams->context == 0) {
    CudaLog("CUDA", 0, "Context cannot be NULL");
    return kInvalidValue;
  }

  if (pParams->count != 0 && pParams->operations == 0) {
    CudaLog("CUDA", 0, "paramArray cannot be NULL");
    return kInvalidValue;
  }

  if (At<U32>(node, 4) != 12) {
    CudaLog("CUDA", 0, "Node is not a batch memory operation node");
    return kInvalidValue;
  }

  const CUresult result = CheckBatchMemOps(pParams);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_d84d0(node, pParams);
}

CUresult cuGraphExecBatchMemOpNodeSetParams_impl(U64 exec, U64 node,
  CudaBatchMemOpNodeParams* pParams) {
  const U64 execNode = CudaDriverRoutine_2d560(exec, node,
    reinterpret_cast<U64>(pParams), 12, 0, 0);
  if (execNode == 0) {
    return kInvalidValue;
  }

  if (pParams->context == 0) {
    CudaLog("CUDA", 0, "CUDA_BATCH_MEM_OP_NODE_PARAMS::ctx cannot be NULL");
    return kInvalidValue;
  }

  if (pParams->count != 0 && pParams->operations == 0) {
    CudaLog("CUDA", 0, "paramArray cannot be NULL");
    return kInvalidValue;
  }

  const CUresult result = CheckBatchMemOps(pParams);
  if (result != 0) {
    return result;
  }

  if (CudaDriverRoutine_da280(execNode, pParams) != 0) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_d84d0(execNode, pParams);
}

// The edge data pointer is handed to every edge as is.
[[gnu::noinline]] CUresult cuGraphAddDependencies_v2_impl(U64 graph,
  U64* from, U64* to, U64 edgeData, U64 count) {
  if (graph == 0) {
    CudaLog("CUDA", 0, "The source graph pointer is NULL");
    CudaLog("CUDA", 0, "Graph is not a valid source graph");
    return kInvalidValue;
  }

  if (At<U32>(graph, 4) != 1) {
    CudaLog("CUDA", 0, "The source graph pointer is invalid");
    CudaLog("CUDA", 0, "Graph is not a valid source graph");
    return kInvalidValue;
  }

  if (CudaDriverRoutine_2fae0(graph, from, to, edgeData, count) != 0) {
    return kInvalidValue;
  }

  for (U64 i = 0; i < count; i++) {
    const CUresult result = CudaDriverRoutine_d5f10(from[i], to[i], edgeData,
      2);
    if (result != 0) {
      CudaLog("CUDA", 0, "Index %zu: Failed to add edge", i);
      return result;
    }
  }

  return 0;
}

CUresult cuGraphAddDependencies_impl(U64 graph, U64* from, U64* to,
  U64 count) {
  return cuGraphAddDependencies_v2_impl(graph, from, to, 0, count);
}

// Kernel nodes lock the context of their function, found from 0x4b0.
CUresult cuGraphKernelNodeSetAttribute_impl(U64 node, U32 attribute,
  U64 pValue) {
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, nullptr, 0);
  if (result != 0) {
    return result;
  }

  if (node == 0) {
    CudaLog("CUDA", 0, "hNode cannot be NULL");
    return kInvalidValue;
  }

  if (At<U32>(node, 4) != 0) {
    CudaLog("CUDA", 0, "hNode is not a kernel node");
    return kInvalidValue;
  }

  CudaLock(ContextLock(CudaDriverRoutine_98340(At<U64>(node, 0x4b0))), 0, 0,
    0);
  result = CudaDriverRoutine_30e80(state, node, attribute, pValue);
  CudaUnlock(ContextLock(CudaDriverRoutine_98340(At<U64>(node, 0x4b0))));
  return result;
}

// Executable graphs are either registered or tagged with type 2.
CUresult cuGraphExecGetFlags_impl(U64 exec, U64* pFlags) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  U64 graph = 0;
  if (exec != 0) {
    graph = FindExecGraph(exec);
    if (graph == 0 && At<U32>(exec, 4) == 2) {
      graph = exec;
    }
  }

  if (graph == 0) {
    CudaLog("CUDA", 0, "Graph is not a valid executable graph");
    return kInvalidValue;
  }

  if (pFlags == nullptr) {
    CudaLog("CUDA", 0, "flags cannot be NULL");
    return kInvalidValue;
  }

  *pFlags = 0;
  const U64 flags = At<U8>(graph, 0x150) != 0;
  *pFlags = flags;
  if (At<U8>(graph, 0x19f) != 0) {
    *pFlags = flags | 4;
  }

  return 0;
}

CUresult cuGraphExecDestroy_impl(U64 exec) {
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, nullptr, 0);
  if (result != 0) {
    return result;
  }

  result = CudaReleaseThreadState(state);
  if (result != 0) {
    return result;
  }

  U64 graph = 0;
  if (exec != 0) {
    graph = FindExecGraph(exec);
    if (graph == 0 && At<U32>(exec, 4) == 2) {
      graph = exec;
    }
  }

  if (graph == 0) {
    CudaLog("CUDA", 0, "Graph is not a valid executable graph");
    return kInvalidValue;
  }

  CudaDriverRoutine_c3c20(graph);
  return 0;
}

namespace {

// Kernels are tagged 2 at offset 0, functions 1.
[[gnu::always_inline]] inline bool IsKernel(const U32* kernel) {
  if (*kernel == 2) {
    return true;
  }

  if (*kernel == 1) {
    CudaLog("CUDA", 0, "kernel is of wrong type, expected CUkernel and "
      "received CUfunction\n");
  }

  return false;
}

}

CUresult cuKernelGetLibrary_impl(U64* pLibrary, U32* kernel) {
  if (pLibrary == nullptr) {
    CudaLog("CUDA", 0, "pLib cannot be NULL\n");
    return kInvalidValue;
  }

  if (kernel == nullptr) {
    CudaLog("CUDA", 0, "kernel cannot be NULL\n");
    return kInvalidHandle;
  }

  if (!IsKernel(kernel)) {
    return kInvalidHandle;
  }

  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result == 0) {
    *pLibrary = At<U64>(reinterpret_cast<U64>(kernel), 0x10);
  }

  return result;
}

CUresult cuKernelGetName_impl(U64* pName, U32* kernel) {
  if (pName == nullptr) {
    CudaLog("CUDA", 0, "name cannot be NULL\n");
    return kInvalidValue;
  }

  if (kernel == nullptr) {
    CudaLog("CUDA", 0, "hfunc cannot be NULL\n");
    return kInvalidValue;
  }

  if (!IsKernel(kernel)) {
    return kInvalidHandle;
  }

  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result == 0) {
    *pName = At<U64>(reinterpret_cast<U64>(kernel), 8);
  }

  return result;
}

CUresult cuKernelGetFunction_impl(U64 pFunction, U32* kernel) {
  if (pFunction == 0) {
    CudaLog("CUDA", 0, "pFunc cannot be NULL\n");
    return kInvalidValue;
  }

  if (kernel == nullptr) {
    CudaLog("CUDA", 0, "kernel cannot be NULL\n");
    return kInvalidHandle;
  }

  if (!IsKernel(kernel)) {
    return kInvalidHandle;
  }

  U64 context;
  const CUresult result = CudaGetCurrentContext(&context);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_e8dd0(pFunction, kernel, context);
}

CUresult cuCtxSetLimit_impl(U32 limit, U64 value) {
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

  if (limit > 9) {
    return kInvalidValue;
  }

  CudaLock(ContextLock(context), 0, 0, 0);
  result = CudaDriverRoutine_eb7e0(context, limit, value);
  CudaUnlock(ContextLock(context));
  return result;
}

// Contexts reach their device from 0x40 and the peer table from 0x50.
CUresult cuCtxEnablePeerAccess_impl(U64 peer, U32 flags) {
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

  if (flags != 0) {
    return kInvalidValue;
  }

  result = CudaDriverRoutine_deeb0(peer, 0);
  if (result != 0) {
    return result;
  }

  const U64 resolved = CudaDriverRoutine_98340(peer);
  if (CudaDriverRoutine_eec70(At<U64>(resolved, 0x40),
    At<U64>(context, 0x40)) == 0) {
    return kPeerAccessUnsupported;
  }

  if (context == resolved) {
    return kInvalidContext;
  }

  result = CudaReleaseThreadState(state);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_10e4b0(At<U64>(context, 0x50),
    At<U64>(resolved, 0x50));
}

CUresult cuNVNtextureGetArray_impl(U64* pArray, U64 texture, U64 sampler,
  U32 flags) {
  U64 array = 0;
  if (pArray == nullptr || texture == 0 || sampler == 0) {
    return kInvalidValue;
  }

  U64 state = 0;
  U64 context = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, &context, 0);
  if (result != 0) {
    return result;
  }

  U64 device;
  result = CudaDriverRoutine_1092a0(&device, context, texture, 1);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_1099b0(device, &array, texture, sampler, flags);
  if (result == 0) {
    *pArray = array;
  }

  return result;
}

// Texture references bound to linear memory keep the address at 0x30.
template <typename Pointer>
[[gnu::always_inline]] inline CUresult GetTexRefAddress(Pointer* pPointer,
  U64 texture, U32 apiVersion) {
  U64 context = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result == 0) {
    result = CudaDriverRoutine_11e860(state, &context, texture, apiVersion);
  }

  Pointer pointer = 0;
  if (result == 0) {
    if (At<U32>(texture, 0x28) != 1) {
      result = kInvalidValue;
    }
    else {
      pointer = At<Pointer>(texture, 0x30);
    }
  }

  if (pPointer != nullptr) {
    *pPointer = pointer;
  }

  return result;
}

CUresult cuTexRefGetAddress_impl(U32* pPointer, U64 texture) {
  return GetTexRefAddress(pPointer, texture, 1);
}

CUresult cuTexRefGetAddress_v2_impl(U64* pPointer, U64 texture) {
  return GetTexRefAddress(pPointer, texture, 2);
}

CUresult cuDeviceGetDevResource_impl(int32_t device, U32* pResource,
  U32 type) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (!IsDeviceOrdinal(device)) {
    CudaLog("CUDA", 0, "Parameter dev must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  if (pResource == nullptr) {
    return kInvalidValue;
  }

  if (type != 1) {
    return kInvalidResourceType;
  }

  CudaDriverRoutine_9f2d0(pResource, g_CudaDriver.devices[device]);
  if (pResource[0] == 1) {
    pResource[5] = 0;
    pResource[5] = CudaDriverRoutine_644e0(pResource, 0x90);
  }

  return 0;
}

// Each parameter record is 0x68 bytes, listed from 0x270 and counted at
// 0x268.
CUresult cuFuncGetParamInfo_impl(U64 function, U64 index, U64* pOffset,
  U64* pSize) {
  U64 context = 0;
  U64 state = 0;
  if (function == 0) {
    CudaLog("CUDA", 0, "func cannot be NULL\n");
    return kInvalidValue;
  }

  if (pOffset == nullptr) {
    CudaLog("CUDA", 0, "paramOffset cannot be NULL\n");
    return kInvalidValue;
  }

  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_bc020(state, &context, function, 0);
  if (result != 0) {
    return result;
  }

  const U64 count = At<U32>(function, 0x268);
  if (index >= count) {
    CudaLog("CUDA", 0, "paramIndex %zd outside of kernel parameter count "
      "%u\n", index, count);
    return kInvalidValue;
  }

  const U64 record = At<U64>(function, 0x270) + index * 0x68;
  if (pSize != nullptr) {
    *pSize = At<U32>(record, 0xc);
  }

  *pOffset = At<U32>(record, 8);
  return 0;
}

CUresult cuLibraryLoadFromFile_impl(U64 pLibrary, U64 fileName,
  U64 jitOptions, U64 jitValues, U32 jitCount, U64 libraryOptions,
  U64 libraryValues, U32 libraryCount) {
  if (pLibrary == 0) {
    CudaLog("CUDA", 0, "library cannot be NULL\n");
    return kInvalidValue;
  }

  if (fileName == 0) {
    CudaLog("CUDA", 0, "fileName cannot be NULL\n");
    return kInvalidValue;
  }

  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_e3160(jitCount, jitOptions, jitValues, 0, 0, 6,
    1);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_ea8a0(pLibrary, fileName, jitOptions, jitValues,
    jitCount, libraryOptions, libraryValues, libraryCount);
}

CUresult cuLibraryLoadData_impl(U64 pLibrary, U64 code, U64 jitOptions,
  U64 jitValues, U32 jitCount, U64 libraryOptions, U64 libraryValues,
  U32 libraryCount) {
  if (pLibrary == 0) {
    CudaLog("CUDA", 0, "library cannot be NULL\n");
    return kInvalidValue;
  }

  if (code == 0) {
    CudaLog("CUDA", 0, "code cannot be NULL\n");
    return kInvalidValue;
  }

  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_e3160(jitCount, jitOptions, jitValues, 0, 0, 6,
    1);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_e9c60(pLibrary, code, jitOptions, jitValues,
    jitCount, libraryOptions, libraryValues, libraryCount, 0);
}

namespace {

// Callbacks cannot change registrations from the notification thread.
template <typename Call>
[[gnu::always_inline]] inline CUresult AsyncNotification(int32_t device,
  U64 callback, Call call) {
  U64 state = 0;
  const CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  if (CudaDriverRoutine_121b60(state) == 0) {
    CudaLog("CUDA", 0, "Not permitted to use async notification apis from "
      "async notification thread\n");
    return kNotSupported;
  }

  if (callback == 0) {
    CudaLog("CUDA", 0, "Parameter callbackFunc cannot be NULL\n");
    return kInvalidValue;
  }

  if (!IsDeviceOrdinal(device)) {
    CudaLog("CUDA", 0, "Parameter device must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  return call(g_CudaDriver.devices[device]);
}

}

CUresult cuDeviceRegisterAsyncNotification_impl(int32_t device,
  U64 callback, U64 userData, U64 pHandle) {
  return AsyncNotification(device, callback, [&](U64 pDevice) {
    return CudaDriverRoutine_8ac00(pDevice, callback, userData, pHandle);
  });
}

CUresult cuDeviceUnregisterAsyncNotification_impl(int32_t device,
  U64 callback) {
  return AsyncNotification(device, callback, [&](U64 pDevice) {
    return CudaDriverRoutine_8acb0(pDevice, callback);
  });
}
