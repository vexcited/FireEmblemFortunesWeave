#include <stdint.h>

using CUresult = uint32_t;
using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr CUresult kInvalidValue = 1;
constexpr CUresult kInvalidDevice = 101;
constexpr CUresult kInvalidContext = 201;
constexpr CUresult kUnsupportedExecAffinity = 224;
constexpr CUresult kInvalidHandle = 400;
constexpr CUresult kIllegalState = 401;
constexpr CUresult kNotPermitted = 801;

// Allocations and multicast objects come in 2 MiB pages, large multicast
// objects in 512 MiB ones.
constexpr U64 kGranularity = 0x200000;
constexpr U64 kLargeGranularity = 0x20000000;

struct CudaUuid {
  U8 bytes[16];
};

struct CudaDriverGlobals {
  U8 reserved0[0x118];
  U64 devices[64];
  int32_t deviceCount;
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

[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_4f840(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_99860(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_c3200(U64, U32);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_d47e0(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_d8ba0(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d8be0(U64, U64, U64,
  U64, U64, U64*, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d9230(U64*, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_deeb0(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_df0b0(U64, U64*,
  U64*, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_e8dd0(U64*, U32*,
  U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_e8e30(U32*, U32, U64,
  U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_efe40(U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_fe960();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_f29c0(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_f2bb0(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_f2c20(U64, U64*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_106fc0(U64, U64,
  U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_107080(U64, U64,
  U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_1077c0(U64, U64*,
  U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_10be60(U64, U32, U64,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_112680(U64, U64, U32,
  U64*, U64*, U32, U32);

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

[[gnu::always_inline]] inline bool HasMulticastDevice() {
  for (U64 i = 0; i < static_cast<U32>(g_CudaDriver.deviceCount); i++) {
    if (CudaDriverRoutine_4f840(g_CudaDriver.devices[i]) != 0) {
      return true;
    }
  }

  return false;
}

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

CUresult cuGraphChildGraphNodeGetGraph_impl(U64 node, U64* pGraph) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (node == 0) {
    CudaLog("CUDA", 0, "Node cannot be NULL");
  }
  else if (pGraph == nullptr) {
    CudaLog("CUDA", 0, "phGraph cannot be NULL");
  }
  else if (At<U32>(node, 4) != 4) {
    CudaLog("CUDA", 0, "Node is not a child graph node");
  }
  else if (At<U32>(At<U64>(node, 0x18), 4) != 1) {
    CudaLog("CUDA", 0, "Node is invalid or does not belong to a source "
      "graph");
  }
  else {
    *pGraph = At<U64>(node, 0x30);
    return 0;
  }

  return kInvalidValue;
}

CUresult cuMemGetAllocationGranularity_impl(U64* pGranularity, U64 prop,
  U32 option) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (CudaDriverRoutine_fe960() == 0) {
    return kNotPermitted;
  }

  if (pGranularity == nullptr) {
    CudaLog("CUDA", 0, "granularity return pointer cannot be NULL");
  }
  else if (prop == 0) {
    CudaLog("CUDA", 0, "CUmemAllocationProp prop cannot be NULL");
  }
  else if (option < 2) {
    *pGranularity = kGranularity;
    return 0;
  }
  else {
    CudaLog("CUDA", 0, "Invalid CUmemAllocationGranularity_flags option");
  }

  return kInvalidValue;
}

// The recommended granularity grows with the requested size at 0x8.
CUresult cuMulticastGetGranularity_impl(U64* pGranularity, U64 prop,
  U32 option) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (!HasMulticastDevice()) {
    return kNotPermitted;
  }

  if (pGranularity == nullptr || prop == 0) {
    return kInvalidValue;
  }

  U64 granularity;
  if (option == 0) {
    granularity = kGranularity;
  }
  else if (option == 1) {
    granularity = At<U64>(prop, 8) > kGranularity ? kLargeGranularity :
      kGranularity;
  }
  else {
    return kInvalidValue;
  }

  *pGranularity = granularity;
  return 0;
}

// Devices flagged at 0x41d0 report their second identifier.
CUresult cuDeviceGetUuid_v2_impl(CudaUuid* pUuid, int32_t device) {
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

  const U64 pDevice = g_CudaDriver.devices[device];
  if ((At<U16>(pDevice, 0x41d0) & 0x80) != 0) {
    *pUuid = At<CudaUuid>(pDevice, 0xc27);
  }
  else {
    *pUuid = At<CudaUuid>(pDevice, 0xc06);
  }

  return 0;
}

[[gnu::noinline]] CUresult cuGraphGetEdges_v2_impl(U64 graph, U64 from,
  U64 to, U64 edgeData, U64* pCount) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

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

  if (pCount == nullptr) {
    CudaLog("CUDA", 0, "numEdges cannot be NULL");
    return kInvalidValue;
  }

  if (__builtin_expect((from == 0) == (to != 0), 0)) {
    CudaLog("CUDA", 0, "from and to must both be either NULL or non-NULL");
    return kInvalidValue;
  }

  if (from == 0) {
    if (__builtin_expect(edgeData != 0, 0)) {
      CudaLog("CUDA", 0, "from must be non-NULL when querying edge data");
      return kInvalidValue;
    }

    *pCount = CudaDriverRoutine_d8ba0(graph);
    return 0;
  }

  if (__builtin_expect(*pCount == 0, 0)) {
    CudaLog("CUDA", 0, "Zero edges requested but from is non-NULL");
    return kInvalidValue;
  }

  return CudaDriverRoutine_d8be0(graph, from, to, edgeData, *pCount, pCount,
    0);
}

CUresult cuGraphGetEdges_impl(U64 graph, U64 from, U64 to, U64* pCount) {
  return cuGraphGetEdges_v2_impl(graph, from, to, 0, pCount);
}

namespace {

// A stream being captured points at its capture from 0x3e0, the capture
// starts with its identifier and keeps an invalidation flag at 0x118.
[[gnu::always_inline]] inline CUresult GetCaptureInfo(U64 stream,
  U32* pStatus, U64* pId, U32 apiVersion) {
  U64 context = 0;
  U64 resolved = 0;
  if (pStatus == nullptr) {
    return kInvalidValue;
  }

  const CUresult result = CudaDriverRoutine_112680(0, stream, apiVersion,
    &resolved, &context, 13, 0);
  if (result != 0) {
    return result;
  }

  const U64 capture = At<U64>(resolved, 0x3e0);
  if (capture == 0) {
    *pStatus = 0;
    return 0;
  }

  if (At<U32>(capture, 0x118) != 0) {
    *pStatus = 2;
    return 0;
  }

  *pStatus = 1;
  if (pId != nullptr) {
    *pId = *reinterpret_cast<U32*>(At<U64>(resolved, 0x3e0));
  }

  return 0;
}

}

CUresult cuStreamGetCaptureInfo_impl(U64 stream, U32* pStatus, U64* pId) {
  return GetCaptureInfo(stream, pStatus, pId, 2);
}

CUresult cuStreamGetCaptureInfo_ptsz_impl(U64 stream, U32* pStatus,
  U64* pId) {
  return GetCaptureInfo(stream, pStatus, pId, 3);
}

CUresult cuCtxGetFlags_impl(U32* pFlags) {
  U64 context = 0;
  U64 state = 0;
  if (pFlags == nullptr) {
    return kInvalidValue;
  }

  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, &context, 8);
  if (result != 0) {
    return result;
  }

  CudaLockRead(ContextLock(context), 0, 0);
  U32 flags = At<U32>(context, 0x3e54);
  if (At<U8>(context, 0x3e5c) != 0) {
    flags |= 8;
  }

  if (At<U32>(context, 0x510) != 0) {
    flags |= 0x10;
  }

  if (At<U8>(context, 0x4060) != 0) {
    flags |= 0x20;
  }

  if (At<U8>(context, 0x3f0) != 0) {
    flags |= 0x80;
  }

  CudaUnlockRead(ContextLock(context));
  *pFlags = flags;
  return 0;
}

CUresult cuCtxGetExecAffinity_impl(U32* pAffinity, U32 type) {
  U64 state = 0;
  U64 green = 0;
  U64 context = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_df0b0(state, &context, &green, 0);
  if (result != 0) {
    return result;
  }

  if (green != 0) {
    return kInvalidContext;
  }

  if (pAffinity == nullptr) {
    return kInvalidValue;
  }

  pAffinity[0] = type;
  if (type != 0) {
    return kUnsupportedExecAffinity;
  }

  pAffinity[1] = At<U32>(context, 0xa4);
  return 0;
}

CUresult cuCtxGetId_impl(U64 context, U64* pId) {
  if (pId == nullptr) {
    return kInvalidValue;
  }

  U64 target;
  if (context != 0) {
    CUresult result = CudaGetCurrentContext(nullptr);
    if (result != 0) {
      return result;
    }

    result = CudaDriverRoutine_deeb0(context, 4);
    if (result != 0) {
      return result;
    }

    target = context;
  }
  else {
    U64 state = 0;
    CUresult result = CudaGetThreadState(&state);
    if (result != 0) {
      return result;
    }

    U64 current;
    U64 green;
    result = CudaDriverRoutine_df0b0(state, &current, &green, 0);
    if (result != 0) {
      return result;
    }

    target = green != 0 ? green : current;
  }

  *pId = CudaDriverRoutine_99860(target);
  return 0;
}

CUresult cuGraphDestroyNode_impl(U64 node) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (node == 0) {
    CudaLog("CUDA", 0, "Node cannot be NULL");
    return kInvalidValue;
  }

  const U64 graph = At<U64>(node, 0x18);
  if (At<U32>(graph, 4) != 1) {
    CudaLog("CUDA", 0, "Node is not associated with a source graph");
    return kInvalidValue;
  }

  if (CudaDriverRoutine_d47e0(At<U64>(node, 0x18)) != 0) {
    CudaLog("CUDA", 0, "Node deletion is not supported in graphs with "
      "memory allocation or free nodes");
    return kNotPermitted;
  }

  if (At<U64>(graph, 0x110) != 0) {
    CudaLog("CUDA", 0, "Cannot remove nodes from a graph while it is being "
      "captured to");
    return kIllegalState;
  }

  if (At<U32>(node, 4) == 0 && At<U8>(node, 0x3ad) != 0) {
    CudaLog("CUDA", 0, "Cannot remove device-updatable kernel nodes");
    return kNotPermitted;
  }

  CudaDriverRoutine_c3200(node, 0);
  return 0;
}

CUresult cuGraphNodeFindInClone_impl(U64* pClone, U64 original,
  U64 cloned) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (pClone == nullptr) {
    CudaLog("CUDA", 0, "Cloned node pointer cannot be NULL");
  }
  else if (original == 0) {
    CudaLog("CUDA", 0, "Original graph node handle cannot be NULL");
  }
  else if (cloned == 0) {
    CudaLog("CUDA", 0, "Handle for the cloned graph cannot be NULL");
  }
  else if (At<U32>(cloned, 4) != 1) {
    CudaLog("CUDA", 0, "The source graph pointer is invalid");
    CudaLog("CUDA", 0, "Graph is not a valid source graph");
  }
  else {
    U64 clone;
    const CUresult found = CudaDriverRoutine_d9230(&clone, original, cloned);
    *pClone = found != 0 ? 0 : clone;
    return found;
  }

  return kInvalidValue;
}

// Pools keep their record at 0x60, the record its device at 0xb0.
CUresult cuDeviceSetMemPool_impl(int32_t device, U64 pool) {
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

  if (device < 0 || pool == 0 || device >= g_CudaDriver.deviceCount) {
    return kInvalidValue;
  }

  if (CudaDriverRoutine_efe40(g_CudaDriver.devices[device]) == 0) {
    return kNotPermitted;
  }

  const U64 record = At<U64>(pool, 0x60);
  if (record == 0 || At<U32>(pool, 0x10) != 1 ||
    g_CudaDriver.devices[device] != At<U64>(record, 0xb0)) {
    return kInvalidValue;
  }

  CudaDriverRoutine_f29c0(record);
  return 0;
}

CUresult cuDeviceGetDefaultMemPool_impl(U64* pPool, int32_t device) {
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, nullptr, 0);
  if (result != 0) {
    return result;
  }

  if (!IsDeviceOrdinal(device)) {
    CudaLog("CUDA", 0, "Parameter dev must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  if (pPool == nullptr) {
    return kInvalidValue;
  }

  const U64 pDevice = g_CudaDriver.devices[device];
  U64 record = CudaDriverRoutine_f2bb0(pDevice);
  if (record == 0) {
    result = CudaDriverRoutine_f2c20(pDevice, &record);
    if (result != 0) {
      return result;
    }
  }

  *pPool = record + 0xb0;
  return 0;
}

namespace {

template <typename Get>
[[gnu::always_inline]] inline CUresult GetModuleReference(U64 pReference,
  U64 module, const char* name, const char* missing, Get get) {
  U64 context = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_1077c0(state, &context, module, 0);
  if (result != 0) {
    return result;
  }

  if (name == nullptr) {
    CudaLog("CUDA", 0, "name cannot be NULL\n");
  }
  else if (*name == '\0') {
    CudaLog("CUDA", 0, "name cannot be empty\n");
  }
  else if (pReference == 0) {
    CudaLog("CUDA", 0, missing);
  }
  else {
    CudaLock(ContextLock(context), 0, 0, 0);
    result = get();
    CudaUnlock(ContextLock(context));
    return result;
  }

  return kInvalidValue;
}

}

CUresult cuModuleGetTexRef_impl(U64 pTexture, U64 module, const char* name) {
  return GetModuleReference(pTexture, module, name, "pTexRef cannot be NULL\n",
    [&] {
      return CudaDriverRoutine_106fc0(module, reinterpret_cast<U64>(name),
        pTexture);
    });
}

CUresult cuModuleGetSurfRef_impl(U64 pSurface, U64 module, const char* name) {
  return GetModuleReference(pSurface, module, name,
    "pSurfRef cannot be NULL\n", [&] {
      return CudaDriverRoutine_107080(module, reinterpret_cast<U64>(name),
        pSurface);
    });
}

CUresult cuParamSetv_impl(U64 function, U32 offset, U64 data, U32 size) {
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

  if (data == 0) {
    return kInvalidValue;
  }

  if (size == 0) {
    return 0;
  }

  CudaLock(ContextLock(context), 0, 0, 0);
  result = CudaDriverRoutine_10be60(function, offset, data, size);
  CudaUnlock(ContextLock(context));
  return result;
}

CUresult cuKernelGetAttribute_impl(U32* pValue, U32 attribute, U32* kernel,
  int32_t device) {
  if (kernel == nullptr) {
    CudaLog("CUDA", 0, "kernel cannot be NULL\n");
    return kInvalidHandle;
  }

  if (!IsKernel(kernel)) {
    return kInvalidHandle;
  }

  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (pValue == nullptr) {
    CudaLog("CUDA", 0, "pi cannot be NULL\n");
    return kInvalidValue;
  }

  if (!IsDeviceOrdinal(device)) {
    CudaLog("CUDA", 0, "Parameter dev must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  if (attribute >= 0x10) {
    CudaLog("CUDA", 0, "Invalid CUfunction_attribute value %d\n", attribute);
    return kInvalidValue;
  }

  return CudaDriverRoutine_e8e30(kernel, attribute,
    g_CudaDriver.devices[device], reinterpret_cast<U64>(pValue));
}

// Each parameter record is 0x68 bytes, listed from 0x270 and counted at
// 0x268.
CUresult cuKernelGetParamInfo_impl(U32* kernel, U64 index, U64* pOffset,
  U64* pSize) {
  if (kernel == nullptr) {
    CudaLog("CUDA", 0, "kernel cannot be NULL\n");
    return kInvalidValue;
  }

  if (pOffset == nullptr) {
    CudaLog("CUDA", 0, "paramOffset cannot be NULL\n");
    return kInvalidValue;
  }

  U64 context;
  CUresult result = CudaGetCurrentContext(&context);
  if (result != 0) {
    return result;
  }

  if (!IsKernel(kernel)) {
    return kInvalidHandle;
  }

  result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  U64 function;
  result = CudaDriverRoutine_e8dd0(&function, kernel, context);
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
