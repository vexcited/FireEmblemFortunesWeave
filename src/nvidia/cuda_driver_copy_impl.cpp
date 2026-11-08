#include <stddef.h>
#include <stdint.h>

using CUresult = uint32_t;
using U32 = uint32_t;
using U64 = uint64_t;

struct CudaCopyEndpoint {
  uint8_t storage[200];
};

// The public three dimensional copy description, kept for stream capture.
struct CudaMemcpy3D {
  uint64_t srcXInBytes;
  uint64_t srcY;
  uint64_t srcZ;
  uint64_t srcLOD;
  uint32_t srcMemoryType;
  uint64_t srcHost;
  uint64_t srcDevice;
  uint64_t srcArray;
  uint64_t reserved0;
  uint64_t srcPitch;
  uint64_t srcHeight;
  uint64_t dstXInBytes;
  uint64_t dstY;
  uint64_t dstZ;
  uint64_t dstLOD;
  uint32_t dstMemoryType;
  uint64_t dstHost;
  uint64_t dstDevice;
  uint64_t dstArray;
  uint64_t reserved1;
  uint64_t dstPitch;
  uint64_t dstHeight;
  uint64_t WidthInBytes;
  uint64_t Height;
  uint64_t Depth;
};

static_assert(sizeof(CudaMemcpy3D) == 200);

// One copy between two endpoints, run by the copy engines it names.
struct CudaCopy {
  CUresult result;
  uint32_t reserved04;
  uint64_t context;
  uint64_t reserved10;
  CudaCopyEndpoint source;
  CudaCopyEndpoint destination;
  uint64_t engines[3];
  uint8_t reserved1c0[0x34];
  uint8_t isRecorded;
  uint8_t reserved1f5[3];
  CudaMemcpy3D record;
};

static_assert(offsetof(CudaCopy, source) == 0x18);
static_assert(offsetof(CudaCopy, destination) == 0xe0);
static_assert(offsetof(CudaCopy, engines) == 0x1a8);
static_assert(offsetof(CudaCopy, isRecorded) == 0x1f4);
static_assert(offsetof(CudaCopy, record) == 0x1f8);

// Memory type, then the host, device and array addresses with the offsets,
// pitch and height inside them.
struct CudaCopyEndpointArgs {
  uint32_t memoryType;
  uint64_t host;
  uint64_t device;
  uint64_t array;
  uint64_t x;
  uint64_t y;
  uint64_t z;
  uint64_t lod;
  uint64_t pitch;
  uint64_t height;
};

[[gnu::visibility("hidden")]] void InitCudaCopy(CudaCopy* pCopy,
  uint64_t stream, uint32_t kind, uint32_t isPerThread, uint32_t flags,
  uint64_t* pToken);
[[gnu::visibility("hidden")]] void SetCudaCopyExtent(
  CudaCopyEndpoint* pEndpoint, uint64_t width, uint64_t height,
  uint64_t depth);
[[gnu::visibility("hidden")]] CUresult SetCudaCopyEndpoint(
  CudaCopyEndpoint* pEndpoint, uint64_t context, uint32_t memoryType,
  uint64_t host, uint64_t device, uint64_t array, uint64_t x, uint64_t y,
  uint64_t z, uint64_t lod, uint64_t pitch, uint64_t height,
  uint64_t* pEngines, uint64_t token);
[[gnu::visibility("hidden")]] CUresult FinishCudaCopy(CudaCopy* pCopy,
  const CudaMemcpy3D* pRecord);

namespace {

[[gnu::always_inline]] inline bool IsCopyReady(const CudaCopy& copy,
  CUresult status) {
  return status == 0 && copy.engines[0] != 0 && copy.engines[1] != 0 &&
    copy.engines[2] != 0;
}

[[gnu::always_inline]] inline CUresult SetEndpoint(CudaCopy& copy,
  CudaCopyEndpoint* pEndpoint, const CudaCopyEndpointArgs& args,
  uint64_t token) {
  return SetCudaCopyEndpoint(pEndpoint, copy.context, args.memoryType,
    args.host, args.device, args.array, args.x, args.y, args.z, args.lod,
    args.pitch, args.height, copy.engines, token);
}

[[gnu::always_inline]] inline void Record(CudaCopy& copy, uint64_t width,
  uint64_t height, uint64_t depth, const CudaCopyEndpointArgs& destination,
  const CudaCopyEndpointArgs& source) {
  CudaMemcpy3D& record = copy.record;
  record = {};
  copy.isRecorded = 1;
  record.srcXInBytes = source.x;
  record.srcY = source.y;
  record.srcZ = source.z;
  record.srcLOD = source.lod;
  record.srcMemoryType = source.memoryType;
  record.srcHost = source.host;
  record.srcDevice = source.device;
  record.srcArray = source.array;
  record.srcPitch = source.pitch;
  record.srcHeight = source.height;
  record.dstXInBytes = destination.x;
  record.dstY = destination.y;
  record.dstZ = destination.z;
  record.dstLOD = destination.lod;
  record.dstMemoryType = destination.memoryType;
  record.dstHost = destination.host;
  record.dstDevice = destination.device;
  record.dstArray = destination.array;
  record.dstPitch = destination.pitch;
  record.dstHeight = destination.height;
  record.WidthInBytes = width;
  record.Height = height;
  record.Depth = depth;
}

// The destination is described first, each step only runs while the copy is
// still healthy. Asynchronous copies keep their description for capture.
[[gnu::always_inline]] inline CUresult RunCudaCopy(uint64_t stream,
  uint32_t kind, uint32_t isPerThread, uint32_t flags, uint64_t width,
  uint64_t height, uint64_t depth, const CudaCopyEndpointArgs& destination,
  const CudaCopyEndpointArgs& source, bool isRecorded) {
  uint64_t token = 0;
  CudaCopy copy;
  InitCudaCopy(&copy, stream, kind, isPerThread, flags, &token);
  if (isRecorded) {
    Record(copy, width, height, depth, destination, source);
  }

  CUresult status = copy.result;
  if (status == 0) {
    SetCudaCopyExtent(&copy.source, width, height, depth);
    status = copy.result;
    if (IsCopyReady(copy, status)) {
      status = SetEndpoint(copy, &copy.destination, destination, token);
      copy.result = status;
    }
  }

  if (IsCopyReady(copy, status)) {
    copy.result = SetEndpoint(copy, &copy.source, source, token);
  }

  return FinishCudaCopy(&copy, isRecorded ? &copy.record : nullptr);
}

}

CUresult cuMemcpy_impl(U64 a1, U64 a2, U64 a3) {
  return RunCudaCopy(0, 2, 0, 0, a3, 1, 1,
    {4, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {4, 0, a2, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpy_ptds_impl(U64 a1, U64 a2, U64 a3) {
  return RunCudaCopy(0, 2, 1, 0, a3, 1, 1,
    {4, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {4, 0, a2, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyAsync_impl(U64 a1, U64 a2, U64 a3, U64 a4) {
  return RunCudaCopy(a4, 2, 2, 1, a3, 1, 1,
    {4, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {4, 0, a2, 0, 0, 0, 0, 0, 0, 0}, true);
}

CUresult cuMemcpyAsync_ptsz_impl(U64 a1, U64 a2, U64 a3, U64 a4) {
  return RunCudaCopy(a4, 2, 3, 1, a3, 1, 1,
    {4, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {4, 0, a2, 0, 0, 0, 0, 0, 0, 0}, true);
}

CUresult cuMemcpyHtoD_impl(U32 a1, U64 a2, U32 a3) {
  return RunCudaCopy(0, 1, 0, 0, a3, 1, 1,
    {2, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {1, a2, 0, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyHtoD_v2_impl(U64 a1, U64 a2, U64 a3) {
  return RunCudaCopy(0, 2, 0, 0, a3, 1, 1,
    {2, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {1, a2, 0, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyHtoD_v2_ptds_impl(U64 a1, U64 a2, U64 a3) {
  return RunCudaCopy(0, 2, 1, 0, a3, 1, 1,
    {2, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {1, a2, 0, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyHtoDAsync_impl(U32 a1, U64 a2, U32 a3, U64 a4) {
  return RunCudaCopy(a4, 1, 2, 0, a3, 1, 1,
    {2, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {1, a2, 0, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyHtoDAsync_v2_impl(U64 a1, U64 a2, U64 a3, U64 a4) {
  return RunCudaCopy(a4, 2, 2, 1, a3, 1, 1,
    {2, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {1, a2, 0, 0, 0, 0, 0, 0, 0, 0}, true);
}

CUresult cuMemcpyHtoDAsync_v2_ptsz_impl(U64 a1, U64 a2, U64 a3, U64 a4) {
  return RunCudaCopy(a4, 2, 3, 1, a3, 1, 1,
    {2, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {1, a2, 0, 0, 0, 0, 0, 0, 0, 0}, true);
}

CUresult cuMemcpyDtoH_impl(U64 a1, U32 a2, U32 a3) {
  return RunCudaCopy(0, 1, 0, 0, a3, 1, 1,
    {1, a1, 0, 0, 0, 0, 0, 0, 0, 0},
    {2, 0, a2, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyDtoH_v2_impl(U64 a1, U64 a2, U64 a3) {
  return RunCudaCopy(0, 2, 0, 0, a3, 1, 1,
    {1, a1, 0, 0, 0, 0, 0, 0, 0, 0},
    {2, 0, a2, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyDtoH_v2_ptds_impl(U64 a1, U64 a2, U64 a3) {
  return RunCudaCopy(0, 2, 1, 0, a3, 1, 1,
    {1, a1, 0, 0, 0, 0, 0, 0, 0, 0},
    {2, 0, a2, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyDtoHAsync_impl(U64 a1, U32 a2, U32 a3, U64 a4) {
  return RunCudaCopy(a4, 1, 2, 0, a3, 1, 1,
    {1, a1, 0, 0, 0, 0, 0, 0, 0, 0},
    {2, 0, a2, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyDtoHAsync_v2_impl(U64 a1, U64 a2, U64 a3, U64 a4) {
  return RunCudaCopy(a4, 2, 2, 1, a3, 1, 1,
    {1, a1, 0, 0, 0, 0, 0, 0, 0, 0},
    {2, 0, a2, 0, 0, 0, 0, 0, 0, 0}, true);
}

CUresult cuMemcpyDtoHAsync_v2_ptsz_impl(U64 a1, U64 a2, U64 a3, U64 a4) {
  return RunCudaCopy(a4, 2, 3, 1, a3, 1, 1,
    {1, a1, 0, 0, 0, 0, 0, 0, 0, 0},
    {2, 0, a2, 0, 0, 0, 0, 0, 0, 0}, true);
}

CUresult cuMemcpyDtoD_impl(U32 a1, U32 a2, U32 a3) {
  return RunCudaCopy(0, 1, 0, 0, a3, 1, 1,
    {2, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {2, 0, a2, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyDtoD_v2_impl(U64 a1, U64 a2, U64 a3) {
  return RunCudaCopy(0, 2, 0, 0, a3, 1, 1,
    {2, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {2, 0, a2, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyDtoD_v2_ptds_impl(U64 a1, U64 a2, U64 a3) {
  return RunCudaCopy(0, 2, 1, 0, a3, 1, 1,
    {2, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {2, 0, a2, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyDtoDAsync_impl(U32 a1, U32 a2, U32 a3, U64 a4) {
  return RunCudaCopy(a4, 1, 2, 0, a3, 1, 1,
    {2, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {2, 0, a2, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyDtoDAsync_v2_impl(U64 a1, U64 a2, U64 a3, U64 a4) {
  return RunCudaCopy(a4, 2, 2, 1, a3, 1, 1,
    {2, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {2, 0, a2, 0, 0, 0, 0, 0, 0, 0}, true);
}

CUresult cuMemcpyDtoDAsync_v2_ptsz_impl(U64 a1, U64 a2, U64 a3, U64 a4) {
  return RunCudaCopy(a4, 2, 3, 1, a3, 1, 1,
    {2, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {2, 0, a2, 0, 0, 0, 0, 0, 0, 0}, true);
}

CUresult cuMemcpyHtoA_impl(U64 a1, U32 a2, U64 a3, U32 a4) {
  return RunCudaCopy(0, 1, 0, 0, a4, 1, 1,
    {3, 0, 0, a1, a2, 0, 0, 0, 0, 0},
    {1, a3, 0, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyHtoA_v2_impl(U64 a1, U64 a2, U64 a3, U64 a4) {
  return RunCudaCopy(0, 2, 0, 0, a4, 1, 1,
    {3, 0, 0, a1, a2, 0, 0, 0, 0, 0},
    {1, a3, 0, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyHtoA_v2_ptds_impl(U64 a1, U64 a2, U64 a3, U64 a4) {
  return RunCudaCopy(0, 2, 1, 0, a4, 1, 1,
    {3, 0, 0, a1, a2, 0, 0, 0, 0, 0},
    {1, a3, 0, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyHtoAAsync_impl(U64 a1, U32 a2, U64 a3, U32 a4, U64 a5) {
  return RunCudaCopy(a5, 1, 2, 0, a4, 1, 1,
    {3, 0, 0, a1, a2, 0, 0, 0, 0, 0},
    {1, a3, 0, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyHtoAAsync_v2_impl(U64 a1, U64 a2, U64 a3, U64 a4, U64 a5) {
  return RunCudaCopy(a5, 2, 2, 1, a4, 1, 1,
    {3, 0, 0, a1, a2, 0, 0, 0, 0, 0},
    {1, a3, 0, 0, 0, 0, 0, 0, 0, 0}, true);
}

CUresult cuMemcpyHtoAAsync_v2_ptsz_impl(
  U64 a1, U64 a2, U64 a3, U64 a4, U64 a5) {
  return RunCudaCopy(a5, 2, 3, 1, a4, 1, 1,
    {3, 0, 0, a1, a2, 0, 0, 0, 0, 0},
    {1, a3, 0, 0, 0, 0, 0, 0, 0, 0}, true);
}

CUresult cuMemcpyAtoH_impl(U64 a1, U64 a2, U32 a3, U32 a4) {
  return RunCudaCopy(0, 1, 0, 0, a4, 1, 1,
    {1, a1, 0, 0, 0, 0, 0, 0, 0, 0},
    {3, 0, 0, a2, a3, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyAtoH_v2_impl(U64 a1, U64 a2, U64 a3, U64 a4) {
  return RunCudaCopy(0, 2, 0, 0, a4, 1, 1,
    {1, a1, 0, 0, 0, 0, 0, 0, 0, 0},
    {3, 0, 0, a2, a3, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyAtoH_v2_ptds_impl(U64 a1, U64 a2, U64 a3, U64 a4) {
  return RunCudaCopy(0, 2, 1, 0, a4, 1, 1,
    {1, a1, 0, 0, 0, 0, 0, 0, 0, 0},
    {3, 0, 0, a2, a3, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyAtoHAsync_impl(U64 a1, U64 a2, U32 a3, U32 a4, U64 a5) {
  return RunCudaCopy(a5, 1, 2, 0, a4, 1, 1,
    {1, a1, 0, 0, 0, 0, 0, 0, 0, 0},
    {3, 0, 0, a2, a3, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyAtoHAsync_v2_impl(U64 a1, U64 a2, U64 a3, U64 a4, U64 a5) {
  return RunCudaCopy(a5, 2, 2, 1, a4, 1, 1,
    {1, a1, 0, 0, 0, 0, 0, 0, 0, 0},
    {3, 0, 0, a2, a3, 0, 0, 0, 0, 0}, true);
}

CUresult cuMemcpyAtoHAsync_v2_ptsz_impl(
  U64 a1, U64 a2, U64 a3, U64 a4, U64 a5) {
  return RunCudaCopy(a5, 2, 3, 1, a4, 1, 1,
    {1, a1, 0, 0, 0, 0, 0, 0, 0, 0},
    {3, 0, 0, a2, a3, 0, 0, 0, 0, 0}, true);
}

CUresult cuMemcpyAtoD_impl(U32 a1, U64 a2, U32 a3, U32 a4) {
  return RunCudaCopy(0, 1, 0, 0, a4, 1, 1,
    {2, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {3, 0, 0, a2, a3, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyAtoD_v2_impl(U64 a1, U64 a2, U64 a3, U64 a4) {
  return RunCudaCopy(0, 2, 0, 0, a4, 1, 1,
    {2, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {3, 0, 0, a2, a3, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyAtoD_v2_ptds_impl(U64 a1, U64 a2, U64 a3, U64 a4) {
  return RunCudaCopy(0, 2, 1, 0, a4, 1, 1,
    {2, 0, a1, 0, 0, 0, 0, 0, 0, 0},
    {3, 0, 0, a2, a3, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyDtoA_impl(U64 a1, U32 a2, U32 a3, U32 a4) {
  return RunCudaCopy(0, 1, 0, 0, a4, 1, 1,
    {3, 0, 0, a1, a2, 0, 0, 0, 0, 0},
    {2, 0, a3, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyDtoA_v2_impl(U64 a1, U64 a2, U64 a3, U64 a4) {
  return RunCudaCopy(0, 2, 0, 0, a4, 1, 1,
    {3, 0, 0, a1, a2, 0, 0, 0, 0, 0},
    {2, 0, a3, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyDtoA_v2_ptds_impl(U64 a1, U64 a2, U64 a3, U64 a4) {
  return RunCudaCopy(0, 2, 1, 0, a4, 1, 1,
    {3, 0, 0, a1, a2, 0, 0, 0, 0, 0},
    {2, 0, a3, 0, 0, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyAtoA_impl(U64 a1, U32 a2, U64 a3, U32 a4, U32 a5) {
  return RunCudaCopy(0, 1, 0, 0, a5, 1, 1,
    {3, 0, 0, a1, a2, 0, 0, 0, 0, 0},
    {3, 0, 0, a3, a4, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyAtoA_v2_impl(U64 a1, U64 a2, U64 a3, U64 a4, U64 a5) {
  return RunCudaCopy(0, 2, 0, 0, a5, 1, 1,
    {3, 0, 0, a1, a2, 0, 0, 0, 0, 0},
    {3, 0, 0, a3, a4, 0, 0, 0, 0, 0}, false);
}

CUresult cuMemcpyAtoA_v2_ptds_impl(U64 a1, U64 a2, U64 a3, U64 a4, U64 a5) {
  return RunCudaCopy(0, 2, 1, 0, a5, 1, 1,
    {3, 0, 0, a1, a2, 0, 0, 0, 0, 0},
    {3, 0, 0, a3, a4, 0, 0, 0, 0, 0}, false);
}
