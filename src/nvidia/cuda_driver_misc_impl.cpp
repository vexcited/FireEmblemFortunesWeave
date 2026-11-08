#include <stdint.h>

using CUresult = uint32_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr CUresult kInvalidValue = 1;
constexpr CUresult kNotInitialized = 3;

// A device ordinal, or the host when the ordinal is -1.
struct CudaLocation {
  U32 type;
  U32 id;
};

// Stream memory operations share one 48 byte parameter block.
struct CudaStreamMemOp {
  U32 operation;
  U64 address;
  U64 value;
  U32 flags;
  U64 alias;
  U64 reserved;
};

struct CudaChildGraph {
  U64 graph;
  U64 ownership;
};

struct CudaGraphUpdateInfo {
  U32 result;
  U64 errorNode;
  U64 errorFromNode;
};

struct CudaStreamDescription {
  U32 priority;
  U32 flags;
};

[[gnu::visibility("hidden")]] void CudaLog(const char* tag, U32 level,
  const char* message);

[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_97330(U32, U64, U64,
  U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_977a0(U32, U64, U64,
  U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_9ab20(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_28cb0(U64, U32,
  CudaStreamMemOp*, U32, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_2a850(U64*, U64*,
  U32, U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_2d560(U64, U64, U64, U32,
  U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_2e940(U64, U64, U64,
  U64, U64, CudaChildGraph*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_30490(U64, U64,
  CudaGraphUpdateInfo*, U32);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_12e7d0();
[[gnu::visibility("hidden")]] void CudaDriverRoutine_de900();
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_df240(U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_33180(U64*, U64*,
  U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_ed8e0(U64, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_edaa0(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_edb00(U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_edcc0(U64, U64, U64,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_36bb0(U64*, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_372d0(U64, U64, U32,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_37930(U64, U64,
  CudaLocation, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_37c10(U64, U64, U32,
  CudaLocation);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_37fe0(U64*, U64*,
  U32*, U64, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_39220(U64*, U64, U32,
  U32);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_12e660(U64, U64, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_47600(U64,
  CudaStreamDescription*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_48470(U64, U32, U32,
  U64, U64, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_49a60(U64, U32, U64,
  U64, U32, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_4aa00(U64*, U64, U64,
  U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_b62b0(U64, U64, U64,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d6980(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d8640(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_da230(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_da430(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_da480(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaGetCurrentContext(U64* pContext);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_112680(U64, U64, U32,
  U64*, U64*, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_112b20(U64, U64, U32,
  U64*, U64*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_117030(U32, U32*);

namespace {

[[gnu::always_inline]] inline CudaLocation PrefetchLocation(U32 device) {
  if (device == UINT32_MAX) {
    return {2, UINT32_MAX};
  }

  return {1, device};
}

[[gnu::always_inline]] inline CUresult StreamMemOp(U64 stream, U32 operation,
  U64 address, U64 value, U32 flags, U32 apiVersion, U32 isLegacy) {
  CudaStreamMemOp op = {};
  op.operation = operation;
  op.address = address;
  op.value = value;
  op.flags = flags;
  return CudaDriverRoutine_28cb0(stream, 1, &op, 0, apiVersion, isLegacy);
}

}

#define CUDA_STREAM_MEMOP(name, type, operation, apiVersion, isLegacy) \
  CUresult name##_impl(U64 stream, U64 address, type value, U32 flags) { \
    return StreamMemOp(stream, operation, address, value, flags, \
      apiVersion, isLegacy); \
  }

CUDA_STREAM_MEMOP(cuStreamWaitValue32, U32, 1, 2, 1)
CUDA_STREAM_MEMOP(cuStreamWaitValue32_ptsz, U32, 1, 3, 1)
CUDA_STREAM_MEMOP(cuStreamWaitValue32_v2, U32, 1, 2, 0)
CUDA_STREAM_MEMOP(cuStreamWaitValue32_v2_ptsz, U32, 1, 3, 0)
CUDA_STREAM_MEMOP(cuStreamWriteValue32, U32, 2, 2, 1)
CUDA_STREAM_MEMOP(cuStreamWriteValue32_ptsz, U32, 2, 3, 1)
CUDA_STREAM_MEMOP(cuStreamWriteValue32_v2, U32, 2, 2, 0)
CUDA_STREAM_MEMOP(cuStreamWriteValue32_v2_ptsz, U32, 2, 3, 0)
CUDA_STREAM_MEMOP(cuStreamWaitValue64, U64, 4, 2, 1)
CUDA_STREAM_MEMOP(cuStreamWaitValue64_ptsz, U64, 4, 3, 1)
CUDA_STREAM_MEMOP(cuStreamWaitValue64_v2, U64, 4, 2, 0)
CUDA_STREAM_MEMOP(cuStreamWaitValue64_v2_ptsz, U64, 4, 3, 0)
CUDA_STREAM_MEMOP(cuStreamWriteValue64, U64, 5, 2, 1)
CUDA_STREAM_MEMOP(cuStreamWriteValue64_ptsz, U64, 5, 3, 1)
CUDA_STREAM_MEMOP(cuStreamWriteValue64_v2, U64, 5, 2, 0)
CUDA_STREAM_MEMOP(cuStreamWriteValue64_v2_ptsz, U64, 5, 3, 0)

CUresult cuMemAllocHost_impl(U64 pp, U32 bytesize) {
  return CudaDriverRoutine_372d0(pp, bytesize, 0, 1);
}

CUresult cuNNSetAllocator_impl(U64 a1, U64 a2, U64 a3, U64 a4) {
  return CudaDriverRoutine_12e660(a1, a2, a3, a4) != 0;
}

CUresult cuStreamBeginCapture_impl(U64 stream) {
  return CudaDriverRoutine_48470(stream, 2, 2, 0, 0, 0, 0);
}

CUresult cuStreamBeginCapture_ptsz_impl(U64 stream) {
  return CudaDriverRoutine_48470(stream, 2, 3, 0, 0, 0, 0);
}

CUresult cuStreamBeginCaptureToGraph_impl(U64 stream, U64 graph,
  U64 dependencies, U64 edgeData, U64 count, U32 mode) {
  if (graph == 0) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_48470(stream, mode, 2, graph, dependencies,
    edgeData, count);
}

CUresult cuStreamBeginCaptureToGraph_ptsz_impl(U64 stream, U64 graph,
  U64 dependencies, U64 edgeData, U64 count, U32 mode) {
  if (graph == 0) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_48470(stream, mode, 3, graph, dependencies,
    edgeData, count);
}

CUresult cuStreamAddCallback_impl(U64 stream, U64 callback, U64 userData,
  U32 flags) {
  return CudaDriverRoutine_49a60(stream, 0, callback, userData, flags, 2, 0);
}

CUresult cuStreamAddCallback_ptsz_impl(U64 stream, U64 callback,
  U64 userData, U32 flags) {
  return CudaDriverRoutine_49a60(stream, 0, callback, userData, flags, 3, 0);
}

CUresult cuLaunchHostFunc_impl(U64 stream, U64 function, U64 userData) {
  return CudaDriverRoutine_49a60(stream, 1, function, userData, 0, 2, 1);
}

CUresult cuLaunchHostFunc_ptsz_impl(U64 stream, U64 function,
  U64 userData) {
  return CudaDriverRoutine_49a60(stream, 1, function, userData, 0, 3, 1);
}

// Valid attributes run from 1 to 7.
CUresult cuCoredumpGetAttribute_impl(U32 attribute, U64 value, U64 size) {
  if (attribute - 8 < UINT32_MAX - 6 || size == 0) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_97330(attribute, value, 0, size);
}

CUresult cuCoredumpSetAttribute_impl(U32 attribute, U64 value, U64 size) {
  if (attribute - 8 < UINT32_MAX - 6 || size == 0) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_977a0(attribute, value, 0, size);
}

CUresult cuDriverGetVersion_impl(U64 pVersion) {
  if (pVersion == 0) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_9ab20(pVersion);
}

CUresult cuLogsRegisterCallback_impl(U64 callback, U64 userData,
  U64 pHandle) {
  if (callback == 0) {
    CudaLog("CUDA", 0, "callbackFunc cannot be NULL\n");
    return kInvalidValue;
  }

  return CudaDriverRoutine_ed8e0(callback, userData, pHandle);
}

CUresult cuLogsCurrent_impl(U64 pIterator, U32 flags) {
  if (pIterator == 0) {
    CudaLog("CUDA", 0, "Iterator cannot be NULL\n");
    return kInvalidValue;
  }

  return CudaDriverRoutine_edaa0(pIterator, flags);
}

CUresult cuLogsDumpToFile_impl(U64 iterator, U64 path, U32 flags) {
  if (path == 0) {
    CudaLog("CUDA", 0, "pathToFile cannot be NULL\n");
    return kInvalidValue;
  }

  return CudaDriverRoutine_edb00(iterator, path, flags);
}

CUresult cuLogsDumpToMemory_impl(U64 iterator, U64 buffer, U64 size,
  U32 flags) {
  if (buffer == 0) {
    CudaLog("CUDA", 0, "buffer cannot be NULL\n");
    return kInvalidValue;
  }

  if (size == 0) {
    CudaLog("CUDA", 0, "Memory buffer size must be given for log dump\n");
    return kInvalidValue;
  }

  return CudaDriverRoutine_edcc0(iterator, buffer, size, flags);
}

CUresult cuGraphAddChildGraphNode_impl(U64 pNode, U64 graph,
  U64 dependencies, U64 count, U64 childGraph) {
  CudaChildGraph params = {childGraph, 0};
  return CudaDriverRoutine_2e940(pNode, graph, dependencies, 0, count,
    &params);
}

CUresult cuGraphExecUpdate_impl(U64 exec, U64 graph, U64* pErrorNode,
  U32* pResult) {
  CudaGraphUpdateInfo info;
  const CUresult result = CudaDriverRoutine_30490(exec, graph, &info, 1);
  if (pErrorNode != nullptr) {
    *pErrorNode = info.errorNode;
  }

  if (pResult != nullptr) {
    *pResult = info.result;
  }

  return result;
}

CUresult cuGraphExecUpdate_v2_impl(U64 exec, U64 graph,
  CudaGraphUpdateInfo* pInfo) {
  CudaGraphUpdateInfo info;
  if (pInfo == nullptr) {
    pInfo = &info;
  }

  return CudaDriverRoutine_30490(exec, graph, pInfo, 2);
}

CUresult cuMemPrefetchAsync_impl(U64 pointer, U64 count, U32 device,
  U64 stream) {
  return CudaDriverRoutine_37930(pointer, count, PrefetchLocation(device),
    stream, 2);
}

CUresult cuMemPrefetchAsync_ptsz_impl(U64 pointer, U64 count, U32 device,
  U64 stream) {
  return CudaDriverRoutine_37930(pointer, count, PrefetchLocation(device),
    stream, 3);
}

// Negative ordinals other than the host one name no location.
CUresult cuMemAdvise_impl(U64 pointer, U64 count, U32 advice, U32 device) {
  CudaLocation location;
  if (static_cast<int32_t>(device) >= 0) {
    location = {1, device};
  }
  else if (device == UINT32_MAX) {
    location = {2, UINT32_MAX};
  }
  else {
    location = {0, UINT32_MAX - 1};
  }

  return CudaDriverRoutine_37c10(pointer, count, advice, location);
}

CUresult cuMemRangeGetAttribute_impl(U64 data, U64 dataSize, U32 attribute,
  U64 pointer, U64 count) {
  U64 datas = data;
  U64 dataSizes = dataSize;
  U32 attributes = attribute;
  return CudaDriverRoutine_37fe0(&datas, &dataSizes, &attributes, 1, pointer,
    count);
}

CUresult cuInit_impl(U32 flags) {
  if (CudaDriverRoutine_12e7d0() == 0) {
    return kNotInitialized;
  }

  CudaDriverRoutine_de900();
  if (flags != 0) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_df240(1);
}

CUresult cuGraphExecHostNodeSetParams_impl(U64 exec, U64 node, U64 params) {
  const U64 execNode = CudaDriverRoutine_2d560(exec, node, params, 3, 0, 0);
  if (execNode == 0 || CudaDriverRoutine_da230(params) != 0) {
    return kInvalidValue;
  }

  CudaDriverRoutine_d6980(execNode, params);
  return 0;
}

CUresult cuGraphExecExternalSemaphoresSignalNodeSetParams_impl(U64 exec,
  U64 node, U64 params) {
  const U64 execNode = CudaDriverRoutine_2d560(exec, node, params, 8, 0, 0);
  if (execNode == 0 || CudaDriverRoutine_da480(execNode, params) != 0) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_d8640(execNode, params);
}

CUresult cuGraphExecExternalSemaphoresWaitNodeSetParams_impl(U64 exec,
  U64 node, U64 params) {
  const U64 execNode = CudaDriverRoutine_2d560(exec, node, params, 9, 0, 0);
  if (execNode == 0 || CudaDriverRoutine_da480(execNode, params) != 0) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_d8640(execNode, params);
}

namespace {

// The executable node keeps its event at 0x20.
[[gnu::always_inline]] inline CUresult SetExecNodeEvent(U64 exec, U64 node,
  U64 event, U32 type) {
  const U64 execNode = CudaDriverRoutine_2d560(exec, node, event, type, 0, 0);
  if (execNode == 0) {
    return kInvalidValue;
  }

  U64* pEvent = reinterpret_cast<U64*>(execNode + 0x20);
  if (CudaDriverRoutine_da430(*pEvent, event) != 0) {
    return kInvalidValue;
  }

  *pEvent = event;
  return 0;
}

}

CUresult cuGraphExecEventRecordNodeSetEvent_impl(U64 exec, U64 node,
  U64 event) {
  return SetExecNodeEvent(exec, node, event, 7);
}

CUresult cuGraphExecEventWaitNodeSetEvent_impl(U64 exec, U64 node,
  U64 event) {
  return SetExecNodeEvent(exec, node, event, 6);
}

CUresult cuEventCreateFromNVNSync_impl(U64 pEvent, U64 sync, U32 flags) {
  U64 context = 0;
  const CUresult result = CudaGetCurrentContext(&context);
  if (result != 0) {
    return result;
  }

  if (pEvent == 0 || sync == 0 || flags > 1) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_b62b0(context, pEvent, sync, flags);
}

namespace {

// The stream keeps its identifier at 0x130 and its priority at 0x3c.
[[gnu::always_inline]] inline CUresult GetStreamId(U64 stream, U64* pId,
  U32 apiVersion) {
  U64 context = 0;
  U64 resolved = 0;
  if (pId == nullptr) {
    return kInvalidValue;
  }

  const CUresult result = CudaDriverRoutine_112b20(0, stream, apiVersion,
    &resolved, &context);
  if (result == 0) {
    *pId = *reinterpret_cast<U64*>(resolved + 0x130);
  }

  return result;
}

[[gnu::always_inline]] inline CUresult GetStreamPriority(U64 stream,
  U32* pPriority, U32 apiVersion) {
  U64 context = 0;
  U64 resolved = 0;
  if (pPriority == nullptr) {
    return kInvalidValue;
  }

  const CUresult result = CudaDriverRoutine_112680(0, stream, apiVersion,
    &resolved, &context, 1, 0);
  if (result == 0) {
    *pPriority = *reinterpret_cast<U32*>(resolved + 0x3c);
  }

  return result;
}

}

CUresult cuStreamGetId_impl(U64 stream, U64* pId) {
  return GetStreamId(stream, pId, 2);
}

CUresult cuStreamGetId_ptsz_impl(U64 stream, U64* pId) {
  return GetStreamId(stream, pId, 3);
}

CUresult cuStreamGetPriority_impl(U64 stream, U32* pPriority) {
  return GetStreamPriority(stream, pPriority, 2);
}

CUresult cuStreamGetPriority_ptsz_impl(U64 stream, U32* pPriority) {
  return GetStreamPriority(stream, pPriority, 3);
}

CUresult cuStreamCreate_impl(U64 pStream, U32 flags) {
  CudaStreamDescription description = {};
  const CUresult result = CudaDriverRoutine_117030(flags,
    &description.flags);
  if (result != 0) {
    return result;
  }

  description.priority = 0;
  return CudaDriverRoutine_47600(pStream, &description);
}

CUresult cuStreamCreateWithPriority_impl(U64 pStream, U32 flags,
  U32 priority) {
  CudaStreamDescription description = {};
  const CUresult result = CudaDriverRoutine_117030(flags,
    &description.flags);
  if (result != 0) {
    return result;
  }

  description.priority = priority;
  return CudaDriverRoutine_47600(pStream, &description);
}

// The legacy entry points hand back 32 bit device pointers and sizes.
template <typename Pointer, typename Size>
[[gnu::always_inline]] inline CUresult MapBufferObject(Pointer* pPointer,
  Size* pSize, U32 buffer, U64 stream, U32 apiVersion) {
  U64 pointer = 0;
  U64 size = 0;
  const CUresult result = CudaDriverRoutine_2a850(&pointer, &size, buffer,
    stream, apiVersion);
  if (pPointer != nullptr) {
    *pPointer = pointer;
  }

  if (pSize != nullptr) {
    *pSize = size;
  }

  return result;
}

CUresult cuGLMapBufferObject_impl(U32* pPointer, U32* pSize, U32 buffer) {
  return MapBufferObject(pPointer, pSize, buffer, 0, 1);
}

CUresult cuGLMapBufferObject_v2_impl(U64* pPointer, U64* pSize, U32 buffer) {
  return MapBufferObject(pPointer, pSize, buffer, 0, 2);
}

CUresult cuGLMapBufferObject_v2_ptds_impl(U64* pPointer, U64* pSize,
  U32 buffer) {
  return MapBufferObject(pPointer, pSize, buffer, 0, 2);
}

CUresult cuGLMapBufferObjectAsync_impl(U32* pPointer, U32* pSize, U32 buffer,
  U64 stream) {
  return MapBufferObject(pPointer, pSize, buffer, stream, 1);
}

CUresult cuGLMapBufferObjectAsync_v2_impl(U64* pPointer, U64* pSize,
  U32 buffer, U64 stream) {
  return MapBufferObject(pPointer, pSize, buffer, stream, 2);
}

CUresult cuGLMapBufferObjectAsync_v2_ptsz_impl(U64* pPointer, U64* pSize,
  U32 buffer, U64 stream) {
  return MapBufferObject(pPointer, pSize, buffer, stream, 2);
}

template <typename Pointer, typename Size>
[[gnu::always_inline]] inline CUresult GetMappedPointer(Pointer* pPointer,
  Size* pSize, U64 resource, U32 apiVersion) {
  U64 pointer = 0;
  U64 size = 0;
  const CUresult result = CudaDriverRoutine_33180(&pointer, &size, resource,
    apiVersion);
  if (pPointer != nullptr) {
    *pPointer = pointer;
  }

  if (pSize != nullptr) {
    *pSize = size;
  }

  return result;
}

CUresult cuGraphicsResourceGetMappedPointer_impl(U32* pPointer, U32* pSize,
  U64 resource) {
  return GetMappedPointer(pPointer, pSize, resource, 1);
}

CUresult cuGraphicsResourceGetMappedPointer_v2_impl(U64* pPointer,
  U64* pSize, U64 resource) {
  return GetMappedPointer(pPointer, pSize, resource, 2);
}

template <typename Pointer>
[[gnu::always_inline]] inline CUresult MemAlloc(Pointer* pPointer, U64 size,
  U32 apiVersion) {
  U64 pointer = 0;
  const CUresult result = CudaDriverRoutine_36bb0(
    pPointer != nullptr ? &pointer : nullptr, size, apiVersion);
  if (pPointer != nullptr) {
    *pPointer = pointer;
  }

  return result;
}

CUresult cuMemAlloc_impl(U32* pPointer, U32 size) {
  return MemAlloc(pPointer, size, 1);
}

CUresult cuMemAlloc_v2_impl(U64* pPointer, U64 size) {
  return MemAlloc(pPointer, size, 2);
}

template <typename Pointer>
[[gnu::always_inline]] inline CUresult HostGetDevicePointer(
  Pointer* pPointer, U64 host, U32 flags, U32 apiVersion) {
  U64 pointer = 0;
  const CUresult result = CudaDriverRoutine_39220(
    pPointer != nullptr ? &pointer : nullptr, host, flags, apiVersion);
  if (pPointer != nullptr) {
    *pPointer = pointer;
  }

  return result;
}

CUresult cuMemHostGetDevicePointer_impl(U32* pPointer, U64 host, U32 flags) {
  return HostGetDevicePointer(pPointer, host, flags, 1);
}

CUresult cuMemHostGetDevicePointer_v2_impl(U64* pPointer, U64 host,
  U32 flags) {
  return HostGetDevicePointer(pPointer, host, flags, 2);
}

CUresult cuTexRefSetAddress_impl(U32* pOffset, U64 texture, U32 pointer,
  U32 size) {
  U64 offset = 0;
  const CUresult result = CudaDriverRoutine_4aa00(
    pOffset != nullptr ? &offset : nullptr, texture, pointer, size, 1);
  if (pOffset != nullptr) {
    *pOffset = offset;
  }

  return result;
}
