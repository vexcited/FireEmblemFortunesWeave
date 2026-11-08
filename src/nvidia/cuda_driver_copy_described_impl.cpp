#include <stddef.h>
#include <stdint.h>

using CUresult = uint32_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr CUresult kInvalidValue = 1;

struct CudaCopyEndpoint {
  uint8_t storage[200];
};

struct CudaMemcpy3D {
  U64 srcXInBytes;
  U64 srcY;
  U64 srcZ;
  U64 srcLOD;
  U32 srcMemoryType;
  U64 srcHost;
  U64 srcDevice;
  U64 srcArray;
  U64 reserved0;
  U64 srcPitch;
  U64 srcHeight;
  U64 dstXInBytes;
  U64 dstY;
  U64 dstZ;
  U64 dstLOD;
  U32 dstMemoryType;
  U64 dstHost;
  U64 dstDevice;
  U64 dstArray;
  U64 reserved1;
  U64 dstPitch;
  U64 dstHeight;
  U64 WidthInBytes;
  U64 Height;
  U64 Depth;
};

static_assert(sizeof(CudaMemcpy3D) == 200);

// The legacy descriptors use 32 bit offsets, pitches and device pointers.
struct CudaMemcpy3DV1 {
  U32 srcXInBytes;
  U32 srcY;
  U32 srcZ;
  U32 srcLOD;
  U32 srcMemoryType;
  U64 srcHost;
  U32 srcDevice;
  U64 srcArray;
  U64 reserved0;
  U32 srcPitch;
  U32 srcHeight;
  U32 dstXInBytes;
  U32 dstY;
  U32 dstZ;
  U32 dstLOD;
  U32 dstMemoryType;
  U64 dstHost;
  U32 dstDevice;
  U64 dstArray;
  U64 reserved1;
  U32 dstPitch;
  U32 dstHeight;
  U32 WidthInBytes;
  U32 Height;
  U32 Depth;
};

static_assert(offsetof(CudaMemcpy3DV1, dstMemoryType) == 0x50);
static_assert(offsetof(CudaMemcpy3DV1, WidthInBytes) == 0x80);

template <typename Size, typename Device>
struct CudaMemcpy2D {
  Size srcXInBytes;
  Size srcY;
  U32 srcMemoryType;
  U64 srcHost;
  Device srcDevice;
  U64 srcArray;
  Size srcPitch;
  Size dstXInBytes;
  Size dstY;
  U32 dstMemoryType;
  U64 dstHost;
  Device dstDevice;
  U64 dstArray;
  Size dstPitch;
  Size WidthInBytes;
  Size Height;
};

using CudaMemcpy2DV1 = CudaMemcpy2D<U32, U32>;
using CudaMemcpy2DV2 = CudaMemcpy2D<U64, U64>;

static_assert(offsetof(CudaMemcpy2DV1, dstMemoryType) == 0x34);
static_assert(offsetof(CudaMemcpy2DV2, WidthInBytes) == 0x70);

struct CudaMemcpy3DPeer {
  U64 srcXInBytes;
  U64 srcY;
  U64 srcZ;
  U64 srcLOD;
  U32 srcMemoryType;
  U64 srcHost;
  U64 srcDevice;
  U64 srcArray;
  U64 srcContext;
  U64 srcPitch;
  U64 srcHeight;
  U64 dstXInBytes;
  U64 dstY;
  U64 dstZ;
  U64 dstLOD;
  U32 dstMemoryType;
  U64 dstHost;
  U64 dstDevice;
  U64 dstArray;
  U64 dstContext;
  U64 dstPitch;
  U64 dstHeight;
  U64 WidthInBytes;
  U64 Height;
  U64 Depth;
};

static_assert(sizeof(CudaMemcpy3DPeer) == 200);

struct CudaCopy {
  CUresult result;
  U32 reserved04;
  U64 context;
  U64 reserved10;
  CudaCopyEndpoint source;
  CudaCopyEndpoint destination;
  U64 engines[3];
  uint8_t reserved1c0[0x34];
  uint8_t isRecorded;
  uint8_t reserved1f5[3];
  CudaMemcpy3D record;
};

static_assert(offsetof(CudaCopy, isRecorded) == 0x1f4);

struct CudaCopyEndpointArgs {
  U32 memoryType;
  U64 host;
  U64 device;
  U64 array;
  U64 x;
  U64 y;
  U64 z;
  U64 lod;
  U64 pitch;
  U64 height;
};

[[gnu::visibility("hidden")]] void InitCudaCopy(CudaCopy* pCopy, U64 stream,
  U32 kind, U32 isPerThread, U32 flags, U64* pToken);
[[gnu::visibility("hidden")]] void SetCudaCopyExtent(
  CudaCopyEndpoint* pEndpoint, U64 width, U64 height, U64 depth);
[[gnu::visibility("hidden")]] CUresult SetCudaCopyEndpoint(
  CudaCopyEndpoint* pEndpoint, U64 context, U32 memoryType, U64 host,
  U64 device, U64 array, U64 x, U64 y, U64 z, U64 lod, U64 pitch, U64 height,
  U64* pEngines, U64 token);
[[gnu::visibility("hidden")]] CUresult FinishCudaCopy(CudaCopy* pCopy,
  const CudaMemcpy3D* pRecord);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_deeb0(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_98340(U64);

namespace {

struct CudaCopyExtent {
  U64 width;
  U64 height;
  U64 depth;
};

[[gnu::always_inline]] inline bool IsCopyReady(const CudaCopy& copy,
  CUresult status) {
  return status == 0 && copy.engines[0] != 0 && copy.engines[1] != 0 &&
    copy.engines[2] != 0;
}

[[gnu::always_inline]] inline CUresult SetEndpoint(CudaCopy& copy,
  CudaCopyEndpoint* pEndpoint, U64 context, const CudaCopyEndpointArgs& args,
  U64 token) {
  return SetCudaCopyEndpoint(pEndpoint, context, args.memoryType, args.host,
    args.device, args.array, args.x, args.y, args.z, args.lod, args.pitch,
    args.height, copy.engines, token);
}

template <typename Size, typename Device>
[[gnu::always_inline]] inline CudaCopyExtent Extent(
  const CudaMemcpy2D<Size, Device>& desc) {
  return {desc.WidthInBytes, desc.Height, 1};
}

template <typename Size, typename Device>
[[gnu::always_inline]] inline CudaCopyEndpointArgs Destination(
  const CudaMemcpy2D<Size, Device>& desc) {
  return {desc.dstMemoryType, desc.dstHost, desc.dstDevice, desc.dstArray,
    desc.dstXInBytes, desc.dstY, 0, 0, desc.dstPitch, 0};
}

template <typename Size, typename Device>
[[gnu::always_inline]] inline CudaCopyEndpointArgs Source(
  const CudaMemcpy2D<Size, Device>& desc) {
  return {desc.srcMemoryType, desc.srcHost, desc.srcDevice, desc.srcArray,
    desc.srcXInBytes, desc.srcY, 0, 0, desc.srcPitch, 0};
}

template <typename Desc>
[[gnu::always_inline]] inline CudaCopyExtent Extent3D(const Desc& desc) {
  return {desc.WidthInBytes, desc.Height, desc.Depth};
}

template <typename Desc>
[[gnu::always_inline]] inline CudaCopyEndpointArgs Destination3D(
  const Desc& desc) {
  return {desc.dstMemoryType, desc.dstHost, desc.dstDevice, desc.dstArray,
    desc.dstXInBytes, desc.dstY, desc.dstZ, desc.dstLOD, desc.dstPitch,
    desc.dstHeight};
}

template <typename Desc>
[[gnu::always_inline]] inline CudaCopyEndpointArgs Source3D(const Desc& desc) {
  return {desc.srcMemoryType, desc.srcHost, desc.srcDevice, desc.srcArray,
    desc.srcXInBytes, desc.srcY, desc.srcZ, desc.srcLOD, desc.srcPitch,
    desc.srcHeight};
}

[[gnu::always_inline]] inline CudaCopyExtent Extent(const CudaMemcpy3DV1& desc) {
  return Extent3D(desc);
}

[[gnu::always_inline]] inline CudaCopyEndpointArgs Destination(
  const CudaMemcpy3DV1& desc) {
  return Destination3D(desc);
}

[[gnu::always_inline]] inline CudaCopyEndpointArgs Source(
  const CudaMemcpy3DV1& desc) {
  return Source3D(desc);
}

[[gnu::always_inline]] inline CudaCopyExtent Extent(const CudaMemcpy3D& desc) {
  return Extent3D(desc);
}

[[gnu::always_inline]] inline CudaCopyEndpointArgs Destination(
  const CudaMemcpy3D& desc) {
  return Destination3D(desc);
}

[[gnu::always_inline]] inline CudaCopyEndpointArgs Source(
  const CudaMemcpy3D& desc) {
  return Source3D(desc);
}

[[gnu::always_inline]] inline void Record(CudaMemcpy3D& record,
  const CudaMemcpy2DV2& desc) {
  record.srcXInBytes = desc.srcXInBytes;
  record.srcY = desc.srcY;
  record.srcZ = 0;
  record.srcLOD = 0;
  record.srcMemoryType = desc.srcMemoryType;
  record.srcHost = desc.srcHost;
  record.srcDevice = desc.srcDevice;
  record.srcArray = desc.srcArray;
  record.reserved0 = 0;
  record.srcPitch = desc.srcPitch;
  record.srcHeight = 0;
  record.dstXInBytes = desc.dstXInBytes;
  record.dstY = desc.dstY;
  record.dstZ = 0;
  record.dstLOD = 0;
  record.dstMemoryType = desc.dstMemoryType;
  record.dstHost = desc.dstHost;
  record.dstDevice = desc.dstDevice;
  record.dstArray = desc.dstArray;
  record.reserved1 = 0;
  record.dstPitch = desc.dstPitch;
  record.dstHeight = 0;
  record.WidthInBytes = desc.WidthInBytes;
  record.Height = desc.Height;
  record.Depth = 1;
}

// The destination is described first. Asynchronous copies are flagged for
// capture, the current descriptors are recorded as they are or converted
// into the copy.
template <bool isConverted = false, typename Desc>
[[gnu::always_inline]] inline CUresult RunDescribedCopy(U64 stream,
  U32 kind, U32 isPerThread, U32 flags, bool isAsync, const Desc* desc,
  const CudaMemcpy3D* record) {
  U64 token = 0;
  CudaCopy copy;
  InitCudaCopy(&copy, stream, kind, isPerThread, flags, &token);
  CUresult status = copy.result;
  if (isAsync) {
    copy.isRecorded = 1;
  }

  if constexpr (isConverted) {
    if (desc != nullptr) {
      Record(copy.record, *desc);
      record = &copy.record;
    }
  }

  if (desc == nullptr) {
    if (status == 0) {
      copy.result = kInvalidValue;
    }

    return FinishCudaCopy(&copy, record);
  }

  if (status == 0) {
    const CudaCopyExtent extent = Extent(*desc);
    SetCudaCopyExtent(&copy.source, extent.width, extent.height,
      extent.depth);
    status = copy.result;
    if (IsCopyReady(copy, status)) {
      status = SetEndpoint(copy, &copy.destination, copy.context,
        Destination(*desc), token);
      copy.result = status;
    }
  }

  if (IsCopyReady(copy, status)) {
    copy.result = SetEndpoint(copy, &copy.source, copy.context, Source(*desc),
      token);
  }

  return FinishCudaCopy(&copy, record);
}

// Green contexts copy through their primary context.
[[gnu::always_inline]] inline U64 ResolvePeer(CudaCopy& copy, U64 context) {
  if (context == 0 || *reinterpret_cast<U32*>(context) != 1 ||
    copy.result != 0) {
    return context;
  }

  copy.result = CudaDriverRoutine_deeb0(context, 0);
  if (copy.result != 0) {
    return context;
  }

  return CudaDriverRoutine_98340(context);
}

[[gnu::always_inline]] inline CUresult RunPeerCopy(U64 stream,
  U32 isPerThread, bool isAsync, U64 destinationContext,
  const CudaCopyEndpointArgs& destination, U64 sourceContext,
  const CudaCopyEndpointArgs& source, const CudaCopyExtent& extent) {
  U64 token = 0;
  CudaCopy copy;
  InitCudaCopy(&copy, stream, 2, isPerThread, 0, &token);
  if (isAsync) {
    copy.isRecorded = 1;
  }

  destinationContext = ResolvePeer(copy, destinationContext);
  sourceContext = ResolvePeer(copy, sourceContext);
  CUresult status = copy.result;
  if (status == 0) {
    SetCudaCopyExtent(&copy.source, extent.width, extent.height,
      extent.depth);
    status = copy.result;
    if (IsCopyReady(copy, status)) {
      status = SetEndpoint(copy, &copy.destination, destinationContext,
        destination, token);
      copy.result = status;
    }
  }

  if (IsCopyReady(copy, status)) {
    copy.result = SetEndpoint(copy, &copy.source, sourceContext, source,
      token);
  }

  return FinishCudaCopy(&copy, nullptr);
}

[[gnu::always_inline]] inline CUresult RunLinearPeerCopy(U64 stream,
  U32 isPerThread, bool isAsync, U64 destination, U64 destinationContext,
  U64 source, U64 sourceContext, U64 size) {
  return RunPeerCopy(stream, isPerThread, isAsync, destinationContext,
    {2, 0, destination, 0, 0, 0, 0, 0, 0, 0}, sourceContext,
    {2, 0, source, 0, 0, 0, 0, 0, 0, 0}, {size, 1, 1});
}

// The descriptor is not checked for null.
[[gnu::always_inline]] inline CUresult Run3DPeerCopy(U64 stream,
  U32 isPerThread, bool isAsync, const CudaMemcpy3DPeer& desc) {
  return RunPeerCopy(stream, isPerThread, isAsync, desc.dstContext,
    Destination3D(desc), desc.srcContext, Source3D(desc), Extent3D(desc));
}

}

CUresult cuMemcpy2D_impl(const CudaMemcpy2DV1* desc) {
  return RunDescribedCopy(0, 1, 0, 0, false, desc, nullptr);
}

CUresult cuMemcpy2D_v2_impl(const CudaMemcpy2DV2* desc) {
  return RunDescribedCopy(0, 2, 0, 0, false, desc, nullptr);
}

CUresult cuMemcpy2D_v2_ptds_impl(const CudaMemcpy2DV2* desc) {
  return RunDescribedCopy(0, 2, 1, 0, false, desc, nullptr);
}

CUresult cuMemcpy2DUnaligned_impl(const CudaMemcpy2DV1* desc) {
  return RunDescribedCopy(0, 1, 0, 0, false, desc, nullptr);
}

CUresult cuMemcpy2DUnaligned_v2_impl(const CudaMemcpy2DV2* desc) {
  return RunDescribedCopy(0, 2, 0, 0, false, desc, nullptr);
}

CUresult cuMemcpy2DUnaligned_v2_ptds_impl(const CudaMemcpy2DV2* desc) {
  return RunDescribedCopy(0, 2, 1, 0, false, desc, nullptr);
}

CUresult cuMemcpy2DAsync_impl(const CudaMemcpy2DV1* desc, U64 stream) {
  return RunDescribedCopy(stream, 1, 2, 0, true, desc, nullptr);
}

CUresult cuMemcpy2DAsync_v2_impl(const CudaMemcpy2DV2* desc, U64 stream) {
  return RunDescribedCopy<true>(stream, 2, 2, 1, true, desc, nullptr);
}

CUresult cuMemcpy2DAsync_v2_ptsz_impl(const CudaMemcpy2DV2* desc,
  U64 stream) {
  return RunDescribedCopy<true>(stream, 2, 3, 1, true, desc, nullptr);
}

CUresult cuMemcpy3D_impl(const CudaMemcpy3DV1* desc) {
  return RunDescribedCopy(0, 1, 0, 0, false, desc, nullptr);
}

CUresult cuMemcpy3D_v2_impl(const CudaMemcpy3D* desc) {
  return RunDescribedCopy(0, 2, 0, 0, false, desc, nullptr);
}

CUresult cuMemcpy3D_v2_ptds_impl(const CudaMemcpy3D* desc) {
  return RunDescribedCopy(0, 2, 1, 0, false, desc, nullptr);
}

CUresult cuMemcpy3DAsync_impl(const CudaMemcpy3DV1* desc, U64 stream) {
  return RunDescribedCopy(stream, 1, 2, 0, true, desc, nullptr);
}

CUresult cuMemcpy3DAsync_v2_impl(const CudaMemcpy3D* desc, U64 stream) {
  return RunDescribedCopy(stream, 2, 2, 1, true, desc, desc);
}

CUresult cuMemcpy3DAsync_v2_ptsz_impl(const CudaMemcpy3D* desc,
  U64 stream) {
  return RunDescribedCopy(stream, 2, 3, 1, true, desc, desc);
}

CUresult cuMemcpyPeer_impl(U64 destination, U64 destinationContext,
  U64 source, U64 sourceContext, U64 size) {
  return RunLinearPeerCopy(0, 0, false, destination, destinationContext, source,
    sourceContext, size);
}

CUresult cuMemcpyPeer_ptds_impl(U64 destination, U64 destinationContext,
  U64 source, U64 sourceContext, U64 size) {
  return RunLinearPeerCopy(0, 1, false, destination, destinationContext, source,
    sourceContext, size);
}

CUresult cuMemcpyPeerAsync_impl(U64 destination, U64 destinationContext,
  U64 source, U64 sourceContext, U64 size, U64 stream) {
  return RunLinearPeerCopy(stream, 2, true, destination, destinationContext,
    source, sourceContext, size);
}

CUresult cuMemcpyPeerAsync_ptsz_impl(U64 destination,
  U64 destinationContext, U64 source, U64 sourceContext, U64 size,
  U64 stream) {
  return RunLinearPeerCopy(stream, 3, true, destination, destinationContext,
    source, sourceContext, size);
}

CUresult cuMemcpy3DPeer_impl(const CudaMemcpy3DPeer* desc) {
  return Run3DPeerCopy(0, 0, false, *desc);
}

CUresult cuMemcpy3DPeer_ptds_impl(const CudaMemcpy3DPeer* desc) {
  return Run3DPeerCopy(0, 1, false, *desc);
}

CUresult cuMemcpy3DPeerAsync_impl(const CudaMemcpy3DPeer* desc, U64 stream) {
  return Run3DPeerCopy(stream, 2, true, *desc);
}

CUresult cuMemcpy3DPeerAsync_ptsz_impl(const CudaMemcpy3DPeer* desc,
  U64 stream) {
  return Run3DPeerCopy(stream, 3, true, *desc);
}
