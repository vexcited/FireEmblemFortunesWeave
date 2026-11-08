#include <stdint.h>

using CUresult = uint32_t;
using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

// Shared driver routines the small entry points finish in, named after their
// address.
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_23d20(
  U64, U64, U64, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_275b0(U32, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_284f0(
  U64, U64, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_28800(
  U64, U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_28cb0(
  U64, U32, U64, U32, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_2a2c0(
  U64, U32, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_2abc0(U32, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_2c870(
  U64, U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_2cb30(
  U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_2ce20(
  U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_2ddf0(U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_2df00(U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_332f0(U64, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_33440(
  U32, U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_335c0(
  U32, U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_37090(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_372d0(
  U64, U64, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_37b00(
  U64, U64, U64, U32, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_39540(U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_425d0(
  U64, U32, U32, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_43940(
  U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_46880(
  U64, U64, U32, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_469a0(
  U64, U64, U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_48080(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_481a0(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_48260(
  U64, U64, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_48470(
  U64, U32, U32, U64, U64, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_489c0(U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_48d00(
  U64, U64, U64, U64, U64, U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_49240(
  U64, U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_49500(
  U64, U64, U64, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_49640(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_49870(
  U64, U32, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_49940(
  U64, U32, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_111ca0(
  U64, U64, U32, U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_1b9890(U64, U64, U32);

CUresult cuDevicePrimaryCtxSetFlags_v2_impl(U32 a0, U32 a1) {
  return CudaDriverRoutine_275b0(a0, a1, 1);
}

CUresult cuLinkCreate_v2_impl(U32 a0, U64 a1, U64 a2, U64 a3) {
  return 801;
}

CUresult cuLinkAddData_v2_impl(
  U64 a0, U32 a1, U64 a2, U64 a3, U64 a4, U32 a5, U64 a6, U64 a7) {
  return 801;
}

CUresult cuLinkAddFile_v2_impl(U64 a0, U32 a1, U64 a2, U32 a3, U64 a4, U64 a5) {
  return 801;
}

CUresult cuLinkComplete_impl(U64 a0, U64 a1, U64 a2) {
  return 801;
}

CUresult cuLinkDestroy_impl(U64 a0) {
  return 801;
}

CUresult cuMemFree_v2_impl(U64 a0) {
  return CudaDriverRoutine_37090(a0, 2);
}

CUresult cuMemAllocHost_v2_impl(U64 a0, U64 a1) {
  return CudaDriverRoutine_372d0(a0, a1, 0, 2);
}

CUresult cuMemHostAlloc_impl(U64 a0, U64 a1, U32 a2) {
  return CudaDriverRoutine_372d0(a0, a1, a2, 0);
}

CUresult cuMemHostRegister_v2_impl(U64 a0, U64 a1, U32 a2) {
  return CudaDriverRoutine_39540(a0, a1, a2);
}

CUresult cuMemcpy3DBatchAsync_ptsz_impl(
  U64 a0, U64 a1, U64 a2, U64 a3, U64 a4) {
  return CudaDriverRoutine_23d20(a0, a1, a2, a3, a4);
}

CUresult cuMemMapArrayAsync_ptsz_impl(U64 a0, U32 a1, U64 a2) {
  return CudaDriverRoutine_425d0(a0, a1, 3, a2);
}

CUresult cuMemFreeAsync_ptsz_impl(U64 a0, U64 a1) {
  return CudaDriverRoutine_1b9890(a0, a1, 3);
}

CUresult cuMemAllocFromPoolAsync_ptsz_impl(U64 a0, U64 a1, U64 a2, U64 a3) {
  return CudaDriverRoutine_43940(a0, a1, a2, a3, 3);
}

CUresult cuMemPrefetchAsync_v2_ptsz_impl(
  U64 a0, U64 a1, U64 a2, U32 a3, U64 a4) {
  return CudaDriverRoutine_37b00(a0, a1, a2, a3, a4, 3);
}

CUresult cuStreamWaitEvent_ptsz_impl(U64 a0, U64 a1, U32 a2) {
  return CudaDriverRoutine_48260(a0, a1, a2, 3);
}

CUresult cuStreamBeginCapture_v2_ptsz_impl(U64 a0, U32 a1) {
  return CudaDriverRoutine_48470(a0, a1, 3, 0, 0, 0, 0);
}

CUresult cuStreamEndCapture_ptsz_impl(U64 a0, U64 a1) {
  return CudaDriverRoutine_489c0(a0, a1, 3);
}

CUresult cuStreamGetCaptureInfo_v2_ptsz_impl(
  U64 a0, U64 a1, U64 a2, U64 a3, U64 a4, U64 a5) {
  return CudaDriverRoutine_48d00(a0, a1, a2, a3, a4, 0, a5, 3);
}

CUresult cuStreamGetCaptureInfo_v3_ptsz_impl(
  U64 a0, U64 a1, U64 a2, U64 a3, U64 a4, U64 a5, U64 a6) {
  return CudaDriverRoutine_48d00(a0, a1, a2, a3, a4, a5, a6, 3);
}

CUresult cuStreamUpdateCaptureDependencies_v2_ptsz_impl(
  U64 a0, U64 a1, U64 a2, U64 a3, U32 a4) {
  return CudaDriverRoutine_49240(a0, a1, a2, a3, a4, 3);
}

CUresult cuStreamAttachMemAsync_ptsz_impl(U64 a0, U64 a1, U64 a2, U32 a3) {
  return CudaDriverRoutine_49500(a0, a1, a2, a3, 3);
}

CUresult cuStreamQuery_ptsz_impl(U64 a0) {
  return CudaDriverRoutine_49640(a0, 3);
}

CUresult cuStreamSynchronize_ptsz_impl(U64 a0) {
  return CudaDriverRoutine_481a0(a0, 3);
}

CUresult cuStreamDestroy_v2_impl(U64 a0) {
  return CudaDriverRoutine_48080(a0, 0);
}

CUresult cuStreamGetAttribute_ptsz_impl(U64 a0, U32 a1, U64 a2) {
  return CudaDriverRoutine_49870(a0, a1, a2, 3);
}

CUresult cuStreamSetAttribute_ptsz_impl(U64 a0, U32 a1, U64 a2) {
  return CudaDriverRoutine_49940(a0, a1, a2, 3);
}

CUresult cuEventRecord_ptsz_impl(U64 a0, U64 a1) {
  return CudaDriverRoutine_284f0(a0, a1, 0, 3);
}

CUresult cuEventRecordWithFlags_ptsz_impl(U64 a0, U64 a1, U32 a2) {
  return CudaDriverRoutine_284f0(a0, a1, a2, 3);
}

CUresult cuEventElapsedTime_v2_impl(U64 a0, U64 a1, U64 a2) {
  return CudaDriverRoutine_28800(a0, a1, a2, 0);
}

CUresult cuImportExternalMemory_impl(U64 a0, U64 a1) {
  return 801;
}

CUresult cuExternalMemoryGetMappedBuffer_impl(U64 a0, U64 a1, U64 a2) {
  return 801;
}

CUresult cuExternalMemoryGetMappedMipmappedArray_impl(U64 a0, U64 a1, U64 a2) {
  return 801;
}

CUresult cuDestroyExternalMemory_impl(U64 a0) {
  return 801;
}

CUresult cuImportExternalSemaphore_impl(U64 a0, U64 a1) {
  return 801;
}

CUresult cuSignalExternalSemaphoresAsync_ptsz_impl(
  U64 a0, U64 a1, U32 a2, U64 a3) {
  return 801;
}

CUresult cuWaitExternalSemaphoresAsync_ptsz_impl(
  U64 a0, U64 a1, U32 a2, U64 a3) {
  return 801;
}

CUresult cuDestroyExternalSemaphore_impl(U64 a0) {
  return 801;
}

CUresult cuStreamBatchMemOp_v2_ptsz_impl(U64 a0, U32 a1, U64 a2, U32 a3) {
  return CudaDriverRoutine_28cb0(a0, a1, a2, a3, 3, 0);
}

CUresult cuGraphGetNodes_impl(U64 a0, U64 a1, U64 a2) {
  return CudaDriverRoutine_2c870(a0, a1, a2, 0);
}

CUresult cuGraphGetRootNodes_impl(U64 a0, U64 a1, U64 a2) {
  return CudaDriverRoutine_2c870(a0, a1, a2, 1);
}

CUresult cuGraphNodeGetDependencies_impl(U64 a0, U64 a1, U64 a2) {
  return CudaDriverRoutine_2cb30(a0, a1, 0, a2, 1);
}

CUresult cuGraphNodeGetDependencies_v2_impl(U64 a0, U64 a1, U64 a2, U64 a3) {
  return CudaDriverRoutine_2cb30(a0, a1, a2, a3, 1);
}

CUresult cuGraphNodeGetDependentNodes_impl(U64 a0, U64 a1, U64 a2) {
  return CudaDriverRoutine_2cb30(a0, a1, 0, a2, 0);
}

CUresult cuGraphNodeGetDependentNodes_v2_impl(U64 a0, U64 a1, U64 a2, U64 a3) {
  return CudaDriverRoutine_2cb30(a0, a1, a2, a3, 0);
}

CUresult cuGraphInstantiateWithParams_ptsz_impl(U64 a0, U64 a1, U64 a2) {
  return CudaDriverRoutine_2ce20(a0, a1, a2, 3, 11060);
}

CUresult cuGraphUpload_ptsz_impl(U64 a0, U64 a1) {
  return CudaDriverRoutine_2ddf0(a0, a1, 3);
}

CUresult cuGraphLaunch_ptsz_impl(U64 a0, U64 a1) {
  return CudaDriverRoutine_2df00(a0, a1, 3);
}

CUresult cuOccupancyMaxActiveBlocksPerMultiprocessor_impl(
  U64 a0, U64 a1, U32 a2, U64 a3) {
  return CudaDriverRoutine_46880(a0, a1, a2, a3, 0);
}

CUresult cuOccupancyMaxPotentialBlockSize_impl(
  U64 a0, U64 a1, U64 a2, U64 a3, U64 a4, U32 a5) {
  return CudaDriverRoutine_469a0(a0, a1, a2, a3, a4, a5, 0);
}

CUresult cuGraphicsResourceSetMapFlags_v2_impl(U64 a0, U32 a1) {
  return CudaDriverRoutine_332f0(a0, a1, 2);
}

CUresult cuGraphicsMapResources_ptsz_impl(U32 a0, U64 a1, U64 a2) {
  return CudaDriverRoutine_33440(a0, a1, a2, 3);
}

CUresult cuGraphicsUnmapResources_ptsz_impl(U32 a0, U64 a1, U64 a2) {
  return CudaDriverRoutine_335c0(a0, a1, a2, 3);
}

CUresult cuGetProcAddress_v2_impl(U64 a0, U64 a1, U32 a2, U64 a3, U64 a4) {
  return CudaDriverRoutine_111ca0(a0, a1, a2, a3, a4, 1);
}

CUresult cuMemHostRegister_impl(U64 a0, U64 a1, U32 a2) {
  return CudaDriverRoutine_39540(a0, a1, (a2 & 3u));
}

CUresult cuGraphicsResourceSetMapFlags_impl(U64 a0, U32 a1) {
  return CudaDriverRoutine_332f0(a0, a1, 1);
}

CUresult cuLinkCreate_impl(U32 a0, U64 a1, U64 a2, U64 a3) {
  return 801;
}

CUresult cuLinkAddData_impl(
  U64 a0, U32 a1, U64 a2, U64 a3, U64 a4, U32 a5, U64 a6, U64 a7) {
  return 801;
}

CUresult cuLinkAddFile_impl(U64 a0, U32 a1, U64 a2, U32 a3, U64 a4, U64 a5) {
  return 801;
}

CUresult cuStreamDestroy_impl(U64 a0) {
  return CudaDriverRoutine_48080(a0, 1);
}

CUresult cuDevicePrimaryCtxSetFlags_impl(U32 a0, U32 a1) {
  return CudaDriverRoutine_275b0(a0, a1, 0);
}

CUresult cuStreamWaitEvent_impl(U64 a0, U64 a1, U32 a2) {
  return CudaDriverRoutine_48260(a0, a1, a2, 2);
}

CUresult cuStreamAttachMemAsync_impl(U64 a0, U64 a1, U64 a2, U32 a3) {
  return CudaDriverRoutine_49500(a0, a1, a2, a3, 2);
}

CUresult cuStreamQuery_impl(U64 a0) {
  return CudaDriverRoutine_49640(a0, 2);
}

CUresult cuStreamSynchronize_impl(U64 a0) {
  return CudaDriverRoutine_481a0(a0, 2);
}

CUresult cuEventRecord_impl(U64 a0, U64 a1) {
  return CudaDriverRoutine_284f0(a0, a1, 0, 2);
}

CUresult cuEventRecordWithFlags_impl(U64 a0, U64 a1, U32 a2) {
  return CudaDriverRoutine_284f0(a0, a1, a2, 2);
}

CUresult cuGraphicsMapResources_impl(U32 a0, U64 a1, U64 a2) {
  return CudaDriverRoutine_33440(a0, a1, a2, 2);
}

CUresult cuGraphicsUnmapResources_impl(U32 a0, U64 a1, U64 a2) {
  return CudaDriverRoutine_335c0(a0, a1, a2, 2);
}

CUresult cuStreamBatchMemOp_ptsz_impl(U64 a0, U32 a1, U64 a2, U32 a3) {
  return CudaDriverRoutine_28cb0(a0, a1, a2, a3, 3, 1);
}

CUresult cuStreamBatchMemOp_v2_impl(U64 a0, U32 a1, U64 a2, U32 a3) {
  return CudaDriverRoutine_28cb0(a0, a1, a2, a3, 2, 0);
}

CUresult cuMemPrefetchAsync_v2_impl(U64 a0, U64 a1, U64 a2, U32 a3, U64 a4) {
  return CudaDriverRoutine_37b00(a0, a1, a2, a3, a4, 2);
}

CUresult cuSignalExternalSemaphoresAsync_impl(U64 a0, U64 a1, U32 a2, U64 a3) {
  return 801;
}

CUresult cuWaitExternalSemaphoresAsync_impl(U64 a0, U64 a1, U32 a2, U64 a3) {
  return 801;
}

CUresult cuStreamBeginCapture_v2_impl(U64 a0, U32 a1) {
  return CudaDriverRoutine_48470(a0, a1, 2, 0, 0, 0, 0);
}

CUresult cuStreamEndCapture_impl(U64 a0, U64 a1) {
  return CudaDriverRoutine_489c0(a0, a1, 2);
}

CUresult cuStreamGetCaptureInfo_v2_impl(
  U64 a0, U64 a1, U64 a2, U64 a3, U64 a4, U64 a5) {
  return CudaDriverRoutine_48d00(a0, a1, a2, a3, a4, 0, a5, 2);
}

CUresult cuStreamGetCaptureInfo_v3_impl(
  U64 a0, U64 a1, U64 a2, U64 a3, U64 a4, U64 a5, U64 a6) {
  return CudaDriverRoutine_48d00(a0, a1, a2, a3, a4, a5, a6, 2);
}

CUresult cuGraphInstantiateWithParams_impl(U64 a0, U64 a1, U64 a2) {
  return CudaDriverRoutine_2ce20(a0, a1, a2, 2, 11060);
}

CUresult cuGraphUpload_impl(U64 a0, U64 a1) {
  return CudaDriverRoutine_2ddf0(a0, a1, 2);
}

CUresult cuGraphLaunch_impl(U64 a0, U64 a1) {
  return CudaDriverRoutine_2df00(a0, a1, 2);
}

CUresult cuStreamGetAttribute_impl(U64 a0, U32 a1, U64 a2) {
  return CudaDriverRoutine_49870(a0, a1, a2, 2);
}

CUresult cuStreamSetAttribute_impl(U64 a0, U32 a1, U64 a2) {
  return CudaDriverRoutine_49940(a0, a1, a2, 2);
}

CUresult cuMemMapArrayAsync_impl(U64 a0, U32 a1, U64 a2) {
  return CudaDriverRoutine_425d0(a0, a1, 2, a2);
}

CUresult cuMemFreeAsync_impl(U64 a0, U64 a1) {
  return CudaDriverRoutine_1b9890(a0, a1, 2);
}

CUresult cuMemAllocFromPoolAsync_impl(U64 a0, U64 a1, U64 a2, U64 a3) {
  return CudaDriverRoutine_43940(a0, a1, a2, a3, 2);
}

CUresult cuStreamUpdateCaptureDependencies_v2_impl(
  U64 a0, U64 a1, U64 a2, U64 a3, U32 a4) {
  return CudaDriverRoutine_49240(a0, a1, a2, a3, a4, 2);
}

CUresult cuGetProcAddress_impl(U64 a0, U64 a1, U32 a2, U64 a3) {
  return CudaDriverRoutine_111ca0(a0, a1, a2, a3, 0, 0);
}

CUresult cuCheckpointProcessGetRestoreThreadId_impl(U32 a0, U64 a1) {
  return 801;
}

CUresult cuCheckpointProcessGetState_impl(U32 a0, U64 a1) {
  return 801;
}

CUresult cuCheckpointProcessLock_impl(U32 a0, U64 a1) {
  return 801;
}

CUresult cuCheckpointProcessCheckpoint_impl(U32 a0, U64 a1) {
  return 801;
}

CUresult cuCheckpointProcessRestore_impl(U32 a0, U64 a1) {
  return 801;
}

CUresult cuCheckpointProcessUnlock_impl(U32 a0, U64 a1) {
  return 801;
}

CUresult cuGLCtxCreate_v2_impl(U64 a0, U32 a1, U32 a2) {
  return CudaDriverRoutine_2a2c0(a0, a1, a2, 3020);
}

CUresult cuGLUnmapBufferObjectAsync_impl(U32 a0, U64 a1) {
  return CudaDriverRoutine_2abc0(a0, a1);
}

CUresult cuGLCtxCreate_impl(U64 a0, U32 a1, U32 a2) {
  return CudaDriverRoutine_2a2c0(a0, a1, a2, 3010);
}

CUresult cuProfilerInitialize_impl(U64 a0, U64 a1, U32 a2) {
  return 801;
}
