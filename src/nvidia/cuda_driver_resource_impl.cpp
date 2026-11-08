#include <stdint.h>

using CUresult = uint32_t;
using U8 = uint8_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr CUresult kInvalidValue = 1;
constexpr CUresult kInvalidHandle = 400;
constexpr CUresult kNotPermitted = 801;

// Multicast objects are sized in 2 MiB pages.
constexpr U64 kMulticastPageMask = 0x1fffff;

struct CudaDriverGlobals {
  U8 reserved0[0x118];
  U64 devices[64];
  int32_t deviceCount;
};

struct CudaKernelNodeParams {
  U64 words[7];
};

struct CudaMemAllocNodeState {
  U64 pool;
  U64 reserved[5];
};

struct CudaMulticastHandles {
  U64 words[48];
};

// Registered graphics resources point at their record, which keeps its
// context first and its operations at 0x30.
struct CudaGraphicsOps {
  U8 reserved[0x20];
  CUresult (*getMappedMipmappedArray)(U64* record, U64 pArray,
    U64* resource);
  CUresult (*getMappedArray)(U64* record, U64 pArray, U64* resource,
    U32 index, U32 level);
};

[[gnu::visibility("hidden")]] extern CudaDriverGlobals g_CudaDriver;

[[gnu::visibility("hidden")]] void CudaLog(const char* tag, U32 level,
  const char* format, ...);
[[gnu::visibility("hidden")]] CUresult CudaGetCurrentContext(U64* pContext);
[[gnu::visibility("hidden")]] CUresult CudaGetThreadState(U64* pState);
[[gnu::visibility("hidden")]] CUresult CudaGetThreadContext(U64 state,
  U64* pContext, U32 apiVersion);
[[gnu::visibility("hidden")]] CUresult CudaReleaseThreadState(U64 state);

[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_2b880(U64*, U64, U32,
  U64, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_2bb60(U64, U64, U64,
  U32, U64, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_2c050(U64*, U64*,
  CudaKernelNodeParams*, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_45b10(U64*,
  CudaMulticastHandles*, U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_4f840(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_12e320(U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_12b530();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_12c8b0(U64, U64*, U64*,
  U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_12cad0(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_1dbf90(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_1b4600(U64*);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1b4700(U64*);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1b4750(U64*);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1b47a0(U64*);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1b4800(U64*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d2c20(
  CudaMemAllocNodeState*, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d2fe0(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d3250(U64*, U64, U64,
  U64, U64, U64, CudaMemAllocNodeState*, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_db0e0(U64, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_deeb0(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_efe20(U64, U64, U64,
  U64, U32, U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_fe960();
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_fe6b0(U64, U64,
  CudaMulticastHandles*, U64*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_ff0a0(U64, U64);

namespace {

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::always_inline]] inline CUresult ResolveGraphicsResource(
  U64* resource, U64* pState, U64** pRecord) {
  *pState = 0;
  CUresult result = CudaGetThreadState(pState);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(*pState, nullptr, 0);
  if (result != 0) {
    return result;
  }

  if (resource == nullptr) {
    return kInvalidHandle;
  }

  U64* record = reinterpret_cast<U64*>(*resource);
  if (record == nullptr) {
    return kInvalidHandle;
  }

  result = CudaDriverRoutine_deeb0(record[0], 0);
  if (result != 0) {
    return result;
  }

  if (record[6] == 0) {
    return kInvalidHandle;
  }

  *pRecord = record;
  return 0;
}

[[gnu::always_inline]] inline const CudaGraphicsOps* GraphicsOps(
  const U64* record) {
  return reinterpret_cast<const CudaGraphicsOps*>(record[6]);
}

}

CUresult cuGraphicsSubResourceGetMappedArray_impl(U64 pArray, U64* resource,
  U32 index, U32 level) {
  U64 state;
  U64* record;
  CUresult result = ResolveGraphicsResource(resource, &state, &record);
  if (result != 0) {
    return result;
  }

  if (pArray == 0) {
    return kInvalidValue;
  }

  CudaDriverRoutine_1b4700(record);
  result = GraphicsOps(record)->getMappedArray(record, pArray, resource,
    index, level);
  CudaDriverRoutine_1b4750(record);
  return result;
}

CUresult cuGraphicsResourceGetMappedMipmappedArray_impl(U64 pArray,
  U64* resource) {
  U64 state;
  U64* record;
  CUresult result = ResolveGraphicsResource(resource, &state, &record);
  if (result != 0) {
    return result;
  }

  if (pArray == 0) {
    return kInvalidValue;
  }

  CudaDriverRoutine_1b4700(record);
  result = GraphicsOps(record)->getMappedMipmappedArray(record, pArray,
    resource);
  CudaDriverRoutine_1b4750(record);
  return result;
}

CUresult cuGraphicsUnregisterResource_impl(U64* resource) {
  U64 state;
  U64* record;
  CUresult result = ResolveGraphicsResource(resource, &state, &record);
  if (result != 0) {
    return result;
  }

  result = CudaReleaseThreadState(state);
  if (result != 0) {
    return result;
  }

  CudaDriverRoutine_1b47a0(record);
  CudaDriverRoutine_1b4700(record);
  result = CudaDriverRoutine_1b4600(resource);
  CudaDriverRoutine_1b4750(record);
  if (result != 0) {
    return result;
  }

  CudaDriverRoutine_1b4800(record);
  return 0;
}

// Kernel nodes keep their launch state at 0x358 and their context at 0x4b0.
CUresult cuGraphKernelNodeSetParams_v2_impl(U64 node, U64 params) {
  U64 extra = 0;
  U64 function = 0;
  if (node == 0) {
    CudaLog("CUDA", 0, "Node cannot be NULL");
    return kInvalidValue;
  }

  if (At<U32>(node, 4) != 0) {
    CudaLog("CUDA", 0, "Node is not a kernel node");
    return kInvalidValue;
  }

  const U64 context = At<U64>(node, 0x4b0);
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, nullptr, 0);
  if (result != 0) {
    return result;
  }

  CudaKernelNodeParams converted;
  result = CudaDriverRoutine_2c050(&function, &extra, &converted, params,
    state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_2bb60(state, function, extra, 1, node + 0x358, 0,
    context);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_db0e0(node, function, extra);
}

// The multicast size at 0x8 must be page aligned, at least two devices
// must take part and no handle types beyond the defaults at 0x18.
CUresult cuMulticastCreate_impl(U64* pHandle, U64 props) {
  U64 handle = 0;
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  U64 index = 0;
  while (true) {
    if (index >= static_cast<U32>(g_CudaDriver.deviceCount)) {
      return kNotPermitted;
    }

    if (CudaDriverRoutine_4f840(g_CudaDriver.devices[index]) != 0) {
      break;
    }

    index++;
  }

  if (pHandle == nullptr || props == 0 || At<U64>(props, 0x18) != 0) {
    return kInvalidValue;
  }

  const U64 size = At<U64>(props, 8);
  if (size == 0 || (size & kMulticastPageMask) != 0 ||
    At<U32>(props, 0) < 2) {
    return kInvalidValue;
  }

  U64 devices;
  CudaMulticastHandles handles;
  CUresult created = CudaDriverRoutine_45b10(&devices, &handles, props);
  if (created != 0) {
    return created;
  }

  created = CudaDriverRoutine_fe6b0(devices, At<U64>(props, 8), &handles,
    &handle);
  if (created == 0) {
    *pHandle = handle;
  }

  return created;
}

[[gnu::noinline]] CUresult CudaAddMemAllocNode(U64* pNode, U64 graph,
  U64 dependencies, U64 edgeData, U64 count, U64 params) {
  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (pNode == nullptr) {
    CudaLog("CUDA", 0, "phGraphNode cannot be NULL");
    return kInvalidValue;
  }

  U64 resolved = 0;
  if (CudaDriverRoutine_2b880(&resolved, graph, 10, dependencies, edgeData,
    count) != 0) {
    return kInvalidValue;
  }

  CudaMemAllocNodeState allocation;
  result = CudaDriverRoutine_d2c20(&allocation, params);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_d2fe0(resolved, allocation.pool);
  if (result != 0) {
    return result;
  }

  U64 node;
  result = CudaDriverRoutine_d3250(&node, resolved, dependencies, edgeData, 0,
    count, &allocation, params, 2);
  if (result == 0) {
    *pNode = node;
  }

  return result;
}

CUresult cuGraphAddMemAllocNode_impl(U64* pNode, U64 graph, U64 dependencies,
  U64 count, U64 params) {
  return CudaAddMemAllocNode(pNode, graph, dependencies, 0, count, params);
}

// The range must be page aligned, flags are zero or carry bit 0.
CUresult cuMemGetHandleForAddressRange_impl(U64 pHandle, U64 pointer,
  U64 size, U32 type, U64 flags) {
  U64 context = 0;
  if (pHandle == 0 || pointer == 0 || size == 0) {
    return kInvalidValue;
  }

  const bool isBadFlags = (flags & 1) == 0 && flags != 0;
  if (pointer + size < pointer || isBadFlags) {
    return kInvalidValue;
  }

  const U32 page = CudaDriverRoutine_12e320(1);
  if ((pointer & (page - 1)) != 0) {
    return kInvalidValue;
  }

  if ((size & (CudaDriverRoutine_12e320(page) - 1)) != 0) {
    return kInvalidValue;
  }

  if (CudaDriverRoutine_12b530() == 0) {
    return kNotPermitted;
  }

  const CUresult result = CudaGetCurrentContext(&context);
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_efe20(context, pHandle, pointer, size, type,
    flags);
}

// Only whole mappings from cuMemMap can be unmapped.
CUresult cuMemUnmap_impl(U64 pointer, U64 size) {
  CudaDriverRoutine_12e320(pointer);
  U64 offset = 0;
  U64 mapping = 0;
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (CudaDriverRoutine_fe960() == 0) {
    return kNotPermitted;
  }

  if (pointer == 0) {
    CudaLog("CUDA", 0, "Parameter ptr cannot be NULL");
    return kInvalidValue;
  }

  if (size == 0) {
    CudaLog("CUDA", 0, "Parameter size cannot be 0");
    return kInvalidValue;
  }

  CudaDriverRoutine_12c8b0(0, &mapping, &offset, pointer);
  bool isPartial = mapping != 0 && offset != 0;
  if (!isPartial) {
    CudaDriverRoutine_12c8b0(0, &mapping, &offset, pointer + size - 1);
    isPartial = mapping != 0 &&
      offset + 1 != CudaDriverRoutine_1dbf90(mapping);
  }

  if (isPartial) {
    CudaLog("CUDA", 0, "Partially unmapping a previous cuMemMap mapping is "
      "not supported");
    return kInvalidValue;
  }

  if (CudaDriverRoutine_12cad0(pointer) == 0) {
    CudaLog("CUDA", 0, "Specified ptr must belong to a previous "
      "cuMemAddressRange() call");
    return kInvalidValue;
  }

  return CudaDriverRoutine_ff0a0(pointer, size);
}
