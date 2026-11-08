#include <stdint.h>

using CUresult = uint32_t;
using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

// Every memset entry point fills the same description: element size, two
// dimensional extent, stream and how the call was made.
[[gnu::visibility("hidden")]] CUresult CudaMemset(U64 destination, U32 value,
  U32 elementSize, U64 width, U64 height, U64 pitch, U64 stream,
  U32 synchronization, U32 apiVersion, U32 streamKind, U8 isAsync);

CUresult cuMemsetD8_impl(U32 a1, U8 a2, U32 a3) {
  return CudaMemset(a1, a2, 1, a3, 1, 0, 0, 2, 1, 0, 0);
}

CUresult cuMemsetD8_v2_impl(U64 a1, U8 a2, U64 a3) {
  return CudaMemset(a1, a2, 1, a3, 1, 0, 0, 2, 2, 0, 0);
}

CUresult cuMemsetD8_v2_ptds_impl(U64 a1, U8 a2, U64 a3) {
  return CudaMemset(a1, a2, 1, a3, 1, 0, 0, 2, 2, 1, 0);
}

CUresult cuMemsetD8Async_impl(U64 a1, U8 a2, U64 a3, U64 a4) {
  return CudaMemset(a1, a2, 1, a3, 1, 0, a4, 0, 2, 2, 1);
}

CUresult cuMemsetD8Async_ptsz_impl(U64 a1, U8 a2, U64 a3, U64 a4) {
  return CudaMemset(a1, a2, 1, a3, 1, 0, a4, 0, 2, 3, 1);
}

CUresult cuMemsetD2D8_impl(U32 a1, U32 a2, U8 a3, U32 a4, U32 a5) {
  return CudaMemset(a1, a3, 1, a4, a5, a2, 0, 2, 1, 0, 0);
}

CUresult cuMemsetD2D8_v2_impl(U64 a1, U64 a2, U8 a3, U64 a4, U64 a5) {
  return CudaMemset(a1, a3, 1, a4, a5, a2, 0, 2, 2, 0, 0);
}

CUresult cuMemsetD2D8_v2_ptds_impl(U64 a1, U64 a2, U8 a3, U64 a4, U64 a5) {
  return CudaMemset(a1, a3, 1, a4, a5, a2, 0, 2, 2, 1, 0);
}

CUresult cuMemsetD2D8Async_impl(U64 a1, U64 a2, U8 a3, U64 a4, U64 a5, U64 a6) {
  return CudaMemset(a1, a3, 1, a4, a5, a2, a6, 0, 2, 2, 1);
}

CUresult cuMemsetD2D8Async_ptsz_impl(
  U64 a1, U64 a2, U8 a3, U64 a4, U64 a5, U64 a6) {
  return CudaMemset(a1, a3, 1, a4, a5, a2, a6, 0, 2, 3, 1);
}

CUresult cuMemsetD16_impl(U32 a1, U16 a2, U32 a3) {
  return CudaMemset(a1, a2, 2, a3, 1, 0, 0, 2, 1, 0, 0);
}

CUresult cuMemsetD16_v2_impl(U64 a1, U16 a2, U64 a3) {
  return CudaMemset(a1, a2, 2, a3, 1, 0, 0, 2, 2, 0, 0);
}

CUresult cuMemsetD16_v2_ptds_impl(U64 a1, U16 a2, U64 a3) {
  return CudaMemset(a1, a2, 2, a3, 1, 0, 0, 2, 2, 1, 0);
}

CUresult cuMemsetD16Async_impl(U64 a1, U16 a2, U64 a3, U64 a4) {
  return CudaMemset(a1, a2, 2, a3, 1, 0, a4, 0, 2, 2, 1);
}

CUresult cuMemsetD16Async_ptsz_impl(U64 a1, U16 a2, U64 a3, U64 a4) {
  return CudaMemset(a1, a2, 2, a3, 1, 0, a4, 0, 2, 3, 1);
}

CUresult cuMemsetD2D16_impl(U32 a1, U32 a2, U16 a3, U32 a4, U32 a5) {
  return CudaMemset(a1, a3, 2, a4, a5, a2, 0, 2, 1, 0, 0);
}

CUresult cuMemsetD2D16_v2_impl(U64 a1, U64 a2, U16 a3, U64 a4, U64 a5) {
  return CudaMemset(a1, a3, 2, a4, a5, a2, 0, 2, 2, 0, 0);
}

CUresult cuMemsetD2D16_v2_ptds_impl(U64 a1, U64 a2, U16 a3, U64 a4, U64 a5) {
  return CudaMemset(a1, a3, 2, a4, a5, a2, 0, 2, 2, 1, 0);
}

CUresult cuMemsetD2D16Async_impl(
  U64 a1, U64 a2, U16 a3, U64 a4, U64 a5, U64 a6) {
  return CudaMemset(a1, a3, 2, a4, a5, a2, a6, 0, 2, 2, 1);
}

CUresult cuMemsetD2D16Async_ptsz_impl(
  U64 a1, U64 a2, U16 a3, U64 a4, U64 a5, U64 a6) {
  return CudaMemset(a1, a3, 2, a4, a5, a2, a6, 0, 2, 3, 1);
}

CUresult cuMemsetD32_impl(U32 a1, U32 a2, U32 a3) {
  return CudaMemset(a1, a2, 4, a3, 1, 0, 0, 2, 1, 0, 0);
}

CUresult cuMemsetD32_v2_impl(U64 a1, U32 a2, U64 a3) {
  return CudaMemset(a1, a2, 4, a3, 1, 0, 0, 2, 2, 0, 0);
}

CUresult cuMemsetD32_v2_ptds_impl(U64 a1, U32 a2, U64 a3) {
  return CudaMemset(a1, a2, 4, a3, 1, 0, 0, 2, 2, 1, 0);
}

CUresult cuMemsetD32Async_impl(U64 a1, U32 a2, U64 a3, U64 a4) {
  return CudaMemset(a1, a2, 4, a3, 1, 0, a4, 0, 2, 2, 1);
}

CUresult cuMemsetD32Async_ptsz_impl(U64 a1, U32 a2, U64 a3, U64 a4) {
  return CudaMemset(a1, a2, 4, a3, 1, 0, a4, 0, 2, 3, 1);
}

CUresult cuMemsetD2D32_impl(U32 a1, U32 a2, U32 a3, U32 a4, U32 a5) {
  return CudaMemset(a1, a3, 4, a4, a5, a2, 0, 2, 1, 0, 0);
}

CUresult cuMemsetD2D32_v2_impl(U64 a1, U64 a2, U32 a3, U64 a4, U64 a5) {
  return CudaMemset(a1, a3, 4, a4, a5, a2, 0, 2, 2, 0, 0);
}

CUresult cuMemsetD2D32_v2_ptds_impl(U64 a1, U64 a2, U32 a3, U64 a4, U64 a5) {
  return CudaMemset(a1, a3, 4, a4, a5, a2, 0, 2, 2, 1, 0);
}

CUresult cuMemsetD2D32Async_impl(
  U64 a1, U64 a2, U32 a3, U64 a4, U64 a5, U64 a6) {
  return CudaMemset(a1, a3, 4, a4, a5, a2, a6, 0, 2, 2, 1);
}

CUresult cuMemsetD2D32Async_ptsz_impl(
  U64 a1, U64 a2, U32 a3, U64 a4, U64 a5, U64 a6) {
  return CudaMemset(a1, a3, 4, a4, a5, a2, a6, 0, 2, 3, 1);
}
