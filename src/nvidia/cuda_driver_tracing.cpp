#include <stddef.h>
#include <stdint.h>

#include <tuple>

using CUresult = uint32_t;
using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

// The record handed to tracing subscribers around each driver call.
struct CudaCallbackData {
  uint32_t size;
  uint64_t contextUid;
  uint64_t reserved10;
  uint64_t reserved18;
  uint64_t* pCorrelationData;
  CUresult* pReturnValue;
  const char* pFunctionName;
  const void* pParameters;
  void* pContext;
  uint64_t reserved48;
  uint32_t callbackId;
  uint32_t site;
  uint32_t* pSkip;
  uint64_t reserved60;
};

static_assert(sizeof(CudaCallbackData) == 0x68);
static_assert(offsetof(CudaCallbackData, callbackId) == 0x50);

// One enable flag per callback id.
struct CudaTracingSubscriber {
  uint32_t isEnabled[1024];
};

struct CudaTracingState {
  uint8_t reserved[0x30];
  const CudaTracingSubscriber* pSubscriber;
};

struct CudaContextInfo {
  uint8_t reserved[0x38];
  uint32_t uid;
};

struct CudaCurrentContext {
  const CudaContextInfo* pInfo;
  void* pContext;
};

[[gnu::visibility("hidden")]] extern CudaTracingState g_CudaTracingState;

[[gnu::visibility("hidden")]] uint32_t GetCudaCurrentContext(
  void** ppOutContext);
[[gnu::visibility("hidden")]] uint32_t GetCudaContextInfo(void* pContext,
  CudaCurrentContext* pOutInfo, size_t size);
[[gnu::visibility("hidden")]] void InvokeCudaCallbacks(uint32_t domain,
  uint32_t callbackId, CudaCallbackData* pData);

namespace {

constexpr CUresult CUDA_ERROR_UNKNOWN = 999;
constexpr uint32_t CallbackDomainDriverApi = 6;
constexpr uint32_t CallbackSiteEnter = 0;
constexpr uint32_t CallbackSiteExit = 1;

// Calls go straight through unless a subscriber listens in a context. The
// subscribers see the arguments packed in call order and may change them
// before the call.
template<typename... Types>
[[gnu::always_inline]] inline CUresult TraceDriverCall(uint32_t callbackId,
  const char* pFunctionName, CUresult (*call)(Types...),
  Types... arguments) {
  CUresult result = CUDA_ERROR_UNKNOWN;
  CudaCurrentContext context = {};
  if (g_CudaTracingState.pSubscriber->isEnabled[callbackId] == 0 ||
    GetCudaCurrentContext(&context.pContext) != 0 ||
    GetCudaContextInfo(context.pContext, &context, sizeof(context)) != 0) {
    return call(arguments...);
  }

  std::tuple<Types...> parameters(arguments...);
  uint64_t correlationData = 0;
  uint32_t skip = 0;
  CudaCallbackData data;
  data.size = sizeof(data);
  data.pContext = const_cast<CudaContextInfo*>(context.pInfo);
  data.contextUid = context.pInfo != nullptr ? context.pInfo->uid : 0;
  data.reserved10 = 0;
  data.pCorrelationData = &correlationData;
  data.pReturnValue = &result;
  data.pFunctionName = pFunctionName;
  data.pParameters = &parameters;
  data.reserved48 = 0;
  data.callbackId = callbackId;
  data.site = CallbackSiteEnter;
  data.pSkip = &skip;
  InvokeCudaCallbacks(CallbackDomainDriverApi, callbackId, &data);
  if (skip == 0) {
    result = std::apply(call, parameters);
  }

  data.pContext = const_cast<CudaContextInfo*>(context.pInfo);
  data.contextUid = context.pInfo != nullptr ? context.pInfo->uid : 0;
  data.site = CallbackSiteExit;
  InvokeCudaCallbacks(CallbackDomainDriverApi, callbackId, &data);
  return result;
}

}

#define CUDA_TRACED_0(name, id) \
  [[gnu::visibility("hidden")]] CUresult name##_impl(); \
  CUresult name##_traced() { \
    return TraceDriverCall(id, #name, name##_impl); \
  }

#define CUDA_TRACED_1(name, id, T0) \
  [[gnu::visibility("hidden")]] CUresult name##_impl( \
    T0); \
  CUresult name##_traced( \
    T0 a0) { \
    return TraceDriverCall(id, #name, name##_impl, \
      a0); \
  }

#define CUDA_TRACED_2(name, id, T0, T1) \
  [[gnu::visibility("hidden")]] CUresult name##_impl( \
    T0, T1); \
  CUresult name##_traced( \
    T0 a0, T1 a1) { \
    return TraceDriverCall(id, #name, name##_impl, \
      a0, a1); \
  }

#define CUDA_TRACED_3(name, id, T0, T1, T2) \
  [[gnu::visibility("hidden")]] CUresult name##_impl( \
    T0, T1, T2); \
  CUresult name##_traced( \
    T0 a0, T1 a1, T2 a2) { \
    return TraceDriverCall(id, #name, name##_impl, \
      a0, a1, a2); \
  }

#define CUDA_TRACED_4(name, id, T0, T1, T2, T3) \
  [[gnu::visibility("hidden")]] CUresult name##_impl( \
    T0, T1, T2, T3); \
  CUresult name##_traced( \
    T0 a0, T1 a1, T2 a2, T3 a3) { \
    return TraceDriverCall(id, #name, name##_impl, \
      a0, a1, a2, a3); \
  }

#define CUDA_TRACED_5(name, id, T0, T1, T2, T3, T4) \
  [[gnu::visibility("hidden")]] CUresult name##_impl( \
    T0, T1, T2, T3, T4); \
  CUresult name##_traced( \
    T0 a0, T1 a1, T2 a2, T3 a3, T4 a4) { \
    return TraceDriverCall(id, #name, name##_impl, \
      a0, a1, a2, a3, a4); \
  }

#define CUDA_TRACED_6(name, id, T0, T1, T2, T3, T4, T5) \
  [[gnu::visibility("hidden")]] CUresult name##_impl( \
    T0, T1, T2, T3, T4, T5); \
  CUresult name##_traced( \
    T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5) { \
    return TraceDriverCall(id, #name, name##_impl, \
      a0, a1, a2, a3, a4, a5); \
  }

#define CUDA_TRACED_7(name, id, T0, T1, T2, T3, T4, T5, T6) \
  [[gnu::visibility("hidden")]] CUresult name##_impl( \
    T0, T1, T2, T3, T4, T5, T6); \
  CUresult name##_traced( \
    T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6) { \
    return TraceDriverCall(id, #name, name##_impl, \
      a0, a1, a2, a3, a4, a5, a6); \
  }

#define CUDA_TRACED_8(name, id, T0, T1, T2, T3, T4, T5, T6, T7) \
  [[gnu::visibility("hidden")]] CUresult name##_impl( \
    T0, T1, T2, T3, T4, T5, T6, T7); \
  CUresult name##_traced( \
    T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7) { \
    return TraceDriverCall(id, #name, name##_impl, \
      a0, a1, a2, a3, a4, a5, a6, a7); \
  }

CUDA_TRACED_2(cuGetErrorString, 372, U32, U64)
CUDA_TRACED_2(cuGetErrorName, 373, U32, U64)
CUDA_TRACED_1(cuInit, 1, U32)
CUDA_TRACED_1(cuDriverGetVersion, 2, U64)
CUDA_TRACED_2(cuDeviceGet, 3, U64, U32)
CUDA_TRACED_1(cuDeviceGetCount, 4, U64)
CUDA_TRACED_3(cuDeviceGetName, 5, U64, U32, U32)
CUDA_TRACED_2(cuDeviceGetUuid, 482, U64, U32)
CUDA_TRACED_2(cuDeviceGetUuid_v2, 647, U64, U32)
CUDA_TRACED_3(cuDeviceGetLuid, 532, U64, U64, U32)
CUDA_TRACED_2(cuDeviceTotalMem_v2, 259, U64, U32)
CUDA_TRACED_4(cuDeviceGetTexture1DLinearMaxWidth, 579, U64, U32, U32, U32)
CUDA_TRACED_3(cuDeviceGetAttribute, 9, U64, U32, U32)
CUDA_TRACED_2(cuDeviceSetMemPool, 609, U32, U64)
CUDA_TRACED_2(cuDeviceGetMemPool, 610, U64, U32)
CUDA_TRACED_2(cuDeviceGetDefaultMemPool, 606, U64, U32)
CUDA_TRACED_3(cuDeviceGetExecAffinitySupport, 644, U64, U32, U32)
CUDA_TRACED_2(cuFlushGPUDirectRDMAWrites, 627, U32, U32)
CUDA_TRACED_2(cuDeviceGetProperties, 8, U64, U32)
CUDA_TRACED_3(cuDeviceComputeCapability, 6, U64, U64, U32)
CUDA_TRACED_2(cuDevicePrimaryCtxRetain, 386, U64, U32)
CUDA_TRACED_1(cuDevicePrimaryCtxRelease_v2, 544, U32)
CUDA_TRACED_2(cuDevicePrimaryCtxSetFlags_v2, 546, U32, U32)
CUDA_TRACED_3(cuDevicePrimaryCtxGetState, 392, U32, U64, U64)
CUDA_TRACED_1(cuDevicePrimaryCtxReset_v2, 545, U32)
CUDA_TRACED_1(cuCtxGetCurrent, 304, U64)
CUDA_TRACED_1(cuCtxGetDevice, 16, U64)
CUDA_TRACED_1(cuCtxGetFlags, 391, U64)
CUDA_TRACED_1(cuCtxSetFlags, 705, U32)
CUDA_TRACED_2(cuCtxGetId, 695, U64, U64)
CUDA_TRACED_0(cuCtxSynchronize, 17)
CUDA_TRACED_2(cuCtxSetLimit, 136, U32, U64)
CUDA_TRACED_2(cuCtxGetLimit, 137, U64, U32)
CUDA_TRACED_1(cuCtxGetCacheConfig, 299, U64)
CUDA_TRACED_1(cuCtxSetCacheConfig, 300, U32)
CUDA_TRACED_2(cuCtxGetApiVersion, 296, U64, U64)
CUDA_TRACED_2(cuCtxGetStreamPriorityRange, 370, U64, U64)
CUDA_TRACED_0(cuCtxResetPersistingL2Cache, 568)
CUDA_TRACED_2(cuCtxGetExecAffinity, 646, U64, U32)
CUDA_TRACED_2(cuCtxRecordEvent, 755, U64, U64)
CUDA_TRACED_2(cuCtxWaitEvent, 756, U64, U64)
CUDA_TRACED_2(cuCtxAttach, 12, U64, U32)
CUDA_TRACED_1(cuCtxGetSharedMemConfig, 337, U64)
CUDA_TRACED_1(cuCtxSetSharedMemConfig, 336, U32)
CUDA_TRACED_2(cuModuleLoad, 18, U64, U64)
CUDA_TRACED_2(cuModuleLoadData, 19, U64, U64)
CUDA_TRACED_5(cuModuleLoadDataEx, 20, U64, U64, U32, U64, U64)
CUDA_TRACED_2(cuModuleLoadFatBinary, 21, U64, U64)
CUDA_TRACED_1(cuModuleUnload, 22, U64)
CUDA_TRACED_1(cuModuleGetLoadingMode, 673, U64)
CUDA_TRACED_3(cuModuleGetFunction, 23, U64, U64, U64)
CUDA_TRACED_2(cuModuleGetFunctionCount, 737, U64, U64)
CUDA_TRACED_3(cuModuleEnumerateFunctions, 738, U64, U32, U64)
CUDA_TRACED_4(cuModuleGetGlobal_v2, 241, U64, U64, U64, U64)
CUDA_TRACED_4(cuLinkCreate_v2, 381, U32, U64, U64, U64)
CUDA_TRACED_8(cuLinkAddData_v2, 382, U64, U32, U64, U64, U64, U32, U64, U64)
CUDA_TRACED_6(cuLinkAddFile_v2, 383, U64, U32, U64, U32, U64, U64)
CUDA_TRACED_3(cuLinkComplete, 365, U64, U64, U64)
CUDA_TRACED_1(cuLinkDestroy, 366, U64)
CUDA_TRACED_3(cuModuleGetTexRef, 26, U64, U64, U64)
CUDA_TRACED_3(cuModuleGetSurfRef, 190, U64, U64, U64)
CUDA_TRACED_8(cuLibraryLoadData, 678, U64, U64, U64, U64, U32, U64, U64, U32)
CUDA_TRACED_8(cuLibraryLoadFromFile, 679, U64, U64, U64, U64, U32, U64, U64,
  U32)
CUDA_TRACED_1(cuLibraryUnload, 680, U64)
CUDA_TRACED_3(cuLibraryGetKernel, 681, U64, U64, U64)
CUDA_TRACED_2(cuLibraryGetKernelCount, 739, U64, U64)
CUDA_TRACED_3(cuLibraryEnumerateKernels, 740, U64, U32, U64)
CUDA_TRACED_2(cuLibraryGetModule, 682, U64, U64)
CUDA_TRACED_2(cuKernelGetFunction, 683, U64, U64)
CUDA_TRACED_2(cuKernelGetLibrary, 754, U64, U64)
CUDA_TRACED_4(cuLibraryGetGlobal, 684, U64, U64, U64, U64)
CUDA_TRACED_4(cuLibraryGetManaged, 685, U64, U64, U64, U64)
CUDA_TRACED_3(cuLibraryGetUnifiedFunction, 700, U64, U64, U64)
CUDA_TRACED_4(cuKernelGetAttribute, 686, U64, U32, U64, U32)
CUDA_TRACED_4(cuKernelSetAttribute, 687, U32, U32, U64, U32)
CUDA_TRACED_3(cuKernelSetCacheConfig, 688, U64, U32, U32)
CUDA_TRACED_2(cuKernelGetName, 719, U64, U64)
CUDA_TRACED_4(cuKernelGetParamInfo, 734, U64, U64, U64, U64)
CUDA_TRACED_2(cuMemGetInfo_v2, 242, U64, U64)
CUDA_TRACED_2(cuMemAlloc_v2, 243, U64, U64)
CUDA_TRACED_5(cuMemAllocPitch_v2, 244, U64, U64, U64, U64, U32)
CUDA_TRACED_1(cuMemFree_v2, 245, U64)
CUDA_TRACED_3(cuMemGetAddressRange_v2, 246, U64, U64, U64)
CUDA_TRACED_2(cuMemAllocHost_v2, 294, U64, U64)
CUDA_TRACED_1(cuMemFreeHost, 38, U64)
CUDA_TRACED_3(cuMemHostAlloc, 39, U64, U64, U32)
CUDA_TRACED_3(cuMemHostGetDevicePointer_v2, 247, U64, U64, U32)
CUDA_TRACED_2(cuMemHostGetFlags, 42, U64, U64)
CUDA_TRACED_3(cuMemAllocManaged, 371, U64, U64, U32)
CUDA_TRACED_4(cuDeviceRegisterAsyncNotification, 735, U32, U64, U64, U64)
CUDA_TRACED_2(cuDeviceUnregisterAsyncNotification, 736, U32, U64)
CUDA_TRACED_2(cuDeviceGetByPCIBusId, 331, U64, U64)
CUDA_TRACED_3(cuDeviceGetPCIBusId, 332, U64, U32, U32)
CUDA_TRACED_2(cuIpcGetEventHandle, 334, U64, U64)
CUDA_TRACED_2(cuIpcGetMemHandle, 328, U64, U64)
CUDA_TRACED_1(cuIpcCloseMemHandle, 330, U64)
CUDA_TRACED_3(cuMemHostRegister_v2, 379, U64, U64, U32)
CUDA_TRACED_1(cuMemHostUnregister, 302, U64)
CUDA_TRACED_3(cuMemcpy_ptds, 408, U64, U64, U64)
CUDA_TRACED_5(cuMemcpyPeer_ptds, 409, U64, U64, U64, U64, U64)
CUDA_TRACED_3(cuMemcpyHtoD_v2_ptds, 397, U64, U64, U64)
CUDA_TRACED_3(cuMemcpyDtoH_v2_ptds, 398, U64, U64, U64)
CUDA_TRACED_3(cuMemcpyDtoD_v2_ptds, 399, U64, U64, U64)
CUDA_TRACED_4(cuMemcpyDtoA_v2_ptds, 400, U64, U64, U64, U64)
CUDA_TRACED_4(cuMemcpyAtoD_v2_ptds, 401, U64, U64, U64, U64)
CUDA_TRACED_4(cuMemcpyHtoA_v2_ptds, 402, U64, U64, U64, U64)
CUDA_TRACED_4(cuMemcpyAtoH_v2_ptds, 403, U64, U64, U64, U64)
CUDA_TRACED_5(cuMemcpyAtoA_v2_ptds, 404, U64, U64, U64, U64, U64)
CUDA_TRACED_1(cuMemcpy2D_v2_ptds, 405, U64)
CUDA_TRACED_1(cuMemcpy2DUnaligned_v2_ptds, 406, U64)
CUDA_TRACED_1(cuMemcpy3D_v2_ptds, 407, U64)
CUDA_TRACED_1(cuMemcpy3DPeer_ptds, 410, U64)
CUDA_TRACED_4(cuMemcpyAsync_ptsz, 418, U64, U64, U64, U64)
CUDA_TRACED_6(cuMemcpyPeerAsync_ptsz, 426, U64, U64, U64, U64, U64, U64)
CUDA_TRACED_4(cuMemcpyHtoDAsync_v2_ptsz, 421, U64, U64, U64, U64)
CUDA_TRACED_4(cuMemcpyDtoHAsync_v2_ptsz, 422, U64, U64, U64, U64)
CUDA_TRACED_4(cuMemcpyDtoDAsync_v2_ptsz, 423, U64, U64, U64, U64)
CUDA_TRACED_5(cuMemcpyHtoAAsync_v2_ptsz, 419, U64, U64, U64, U64, U64)
CUDA_TRACED_5(cuMemcpyAtoHAsync_v2_ptsz, 420, U64, U64, U64, U64, U64)
CUDA_TRACED_2(cuMemcpy2DAsync_v2_ptsz, 424, U64, U64)
CUDA_TRACED_2(cuMemcpy3DAsync_v2_ptsz, 425, U64, U64)
CUDA_TRACED_2(cuMemcpy3DPeerAsync_ptsz, 427, U64, U64)
CUDA_TRACED_5(cuMemcpy3DBatchAsync_ptsz, 779, U64, U64, U64, U64, U64)
CUDA_TRACED_3(cuMemsetD8_v2_ptds, 411, U64, U8, U64)
CUDA_TRACED_3(cuMemsetD16_v2_ptds, 412, U64, U16, U64)
CUDA_TRACED_3(cuMemsetD32_v2_ptds, 413, U64, U32, U64)
CUDA_TRACED_5(cuMemsetD2D8_v2_ptds, 414, U64, U64, U8, U64, U64)
CUDA_TRACED_5(cuMemsetD2D16_v2_ptds, 415, U64, U64, U16, U64, U64)
CUDA_TRACED_5(cuMemsetD2D32_v2_ptds, 416, U64, U64, U32, U64, U64)
CUDA_TRACED_4(cuMemsetD8Async_ptsz, 428, U64, U8, U64, U64)
CUDA_TRACED_4(cuMemsetD16Async_ptsz, 429, U64, U16, U64, U64)
CUDA_TRACED_4(cuMemsetD32Async_ptsz, 430, U64, U32, U64, U64)
CUDA_TRACED_6(cuMemsetD2D8Async_ptsz, 431, U64, U64, U8, U64, U64, U64)
CUDA_TRACED_6(cuMemsetD2D16Async_ptsz, 432, U64, U64, U16, U64, U64, U64)
CUDA_TRACED_6(cuMemsetD2D32Async_ptsz, 433, U64, U64, U32, U64, U64, U64)
CUDA_TRACED_2(cuArrayCreate_v2, 272, U64, U64)
CUDA_TRACED_2(cuArrayGetDescriptor_v2, 273, U64, U64)
CUDA_TRACED_2(cuArrayGetSparseProperties, 582, U64, U64)
CUDA_TRACED_2(cuMipmappedArrayGetSparseProperties, 583, U64, U64)
CUDA_TRACED_3(cuArrayGetMemoryRequirements, 654, U64, U64, U32)
CUDA_TRACED_3(cuMipmappedArrayGetMemoryRequirements, 655, U64, U64, U32)
CUDA_TRACED_3(cuArrayGetPlane, 597, U64, U64, U32)
CUDA_TRACED_1(cuArrayDestroy, 89, U64)
CUDA_TRACED_2(cuArray3DCreate_v2, 274, U64, U64)
CUDA_TRACED_2(cuArray3DGetDescriptor_v2, 275, U64, U64)
CUDA_TRACED_3(cuMipmappedArrayCreate, 347, U64, U64, U32)
CUDA_TRACED_3(cuMipmappedArrayGetLevel, 348, U64, U64, U32)
CUDA_TRACED_1(cuMipmappedArrayDestroy, 349, U64)
CUDA_TRACED_5(cuMemGetHandleForAddressRange, 674, U64, U64, U64, U32, U64)
CUDA_TRACED_5(cuMemAddressReserve, 547, U64, U64, U64, U64, U64)
CUDA_TRACED_2(cuMemAddressFree, 548, U64, U64)
CUDA_TRACED_4(cuMemCreate, 549, U64, U64, U64, U64)
CUDA_TRACED_1(cuMemRelease, 550, U64)
CUDA_TRACED_5(cuMemMap, 551, U64, U64, U64, U64, U64)
CUDA_TRACED_3(cuMemMapArrayAsync_ptsz, 585, U64, U32, U64)
CUDA_TRACED_2(cuMemUnmap, 552, U64, U64)
CUDA_TRACED_4(cuMemSetAccess, 553, U64, U64, U64, U64)
CUDA_TRACED_3(cuMemGetAccess, 558, U64, U64, U64)
CUDA_TRACED_4(cuMemExportToShareableHandle, 554, U64, U64, U32, U64)
CUDA_TRACED_3(cuMemImportFromShareableHandle, 555, U64, U64, U32)
CUDA_TRACED_3(cuMemGetAllocationGranularity, 556, U64, U64, U32)
CUDA_TRACED_2(cuMemGetAllocationPropertiesFromHandle, 557, U64, U64)
CUDA_TRACED_2(cuMemRetainAllocationHandle, 565, U64, U64)
CUDA_TRACED_2(cuMemFreeAsync_ptsz, 601, U64, U64)
CUDA_TRACED_3(cuMemAllocAsync_ptsz, 599, U64, U64, U64)
CUDA_TRACED_2(cuMemPoolTrimTo, 602, U64, U64)
CUDA_TRACED_3(cuMemPoolSetAttribute, 603, U64, U32, U64)
CUDA_TRACED_3(cuMemPoolGetAttribute, 604, U64, U32, U64)
CUDA_TRACED_3(cuMemPoolSetAccess, 605, U64, U64, U64)
CUDA_TRACED_3(cuMemPoolGetAccess, 617, U64, U64, U64)
CUDA_TRACED_2(cuMemPoolCreate, 607, U64, U64)
CUDA_TRACED_1(cuMemPoolDestroy, 608, U64)
CUDA_TRACED_4(cuMemAllocFromPoolAsync_ptsz, 612, U64, U64, U64, U64)
CUDA_TRACED_4(cuMemPoolExportToShareableHandle, 613, U64, U64, U32, U64)
CUDA_TRACED_4(cuMemPoolImportFromShareableHandle, 614, U64, U64, U32, U64)
CUDA_TRACED_2(cuMemPoolExportPointer, 615, U64, U64)
CUDA_TRACED_3(cuMemPoolImportPointer, 616, U64, U64, U64)
CUDA_TRACED_2(cuMulticastCreate, 706, U64, U64)
CUDA_TRACED_2(cuMulticastAddDevice, 707, U64, U32)
CUDA_TRACED_6(cuMulticastBindMem, 708, U64, U64, U64, U64, U64, U64)
CUDA_TRACED_5(cuMulticastBindAddr, 709, U64, U64, U64, U64, U64)
CUDA_TRACED_4(cuMulticastUnbind, 710, U64, U32, U64, U64)
CUDA_TRACED_3(cuMulticastGetGranularity, 711, U64, U64, U32)
CUDA_TRACED_3(cuPointerGetAttribute, 310, U64, U32, U64)
CUDA_TRACED_4(cuMemPrefetchAsync_ptsz, 468, U64, U64, U32, U64)
CUDA_TRACED_5(cuMemPrefetchAsync_v2_ptsz, 717, U64, U64, U64, U32, U64)
CUDA_TRACED_4(cuMemAdvise, 457, U64, U64, U32, U32)
CUDA_TRACED_4(cuMemAdvise_v2, 715, U64, U64, U32, U64)
CUDA_TRACED_5(cuMemRangeGetAttribute, 471, U64, U64, U32, U64, U64)
CUDA_TRACED_6(cuMemRangeGetAttributes, 472, U64, U64, U64, U64, U64, U64)
CUDA_TRACED_3(cuPointerSetAttribute, 378, U64, U32, U64)
CUDA_TRACED_4(cuPointerGetAttributes, 450, U32, U64, U64, U64)
CUDA_TRACED_2(cuStreamCreate, 124, U64, U32)
CUDA_TRACED_3(cuStreamCreateWithPriority, 367, U64, U32, U32)
CUDA_TRACED_2(cuStreamGetPriority_ptsz, 434, U64, U64)
CUDA_TRACED_2(cuStreamGetDevice_ptsz, 775, U64, U64)
CUDA_TRACED_2(cuStreamGetFlags_ptsz, 435, U64, U64)
CUDA_TRACED_2(cuStreamGetId_ptsz, 694, U64, U64)
CUDA_TRACED_2(cuStreamGetCtx_ptsz, 484, U64, U64)
CUDA_TRACED_3(cuStreamGetCtx_v2_ptsz, 760, U64, U64, U64)
CUDA_TRACED_3(cuStreamWaitEvent_ptsz, 436, U64, U64, U32)
CUDA_TRACED_4(cuStreamAddCallback_ptsz, 437, U64, U64, U64, U32)
CUDA_TRACED_2(cuStreamBeginCapture_v2_ptsz, 540, U64, U32)
CUDA_TRACED_6(cuStreamBeginCaptureToGraph_ptsz, 721, U64, U64, U64, U64, U64,
  U32)
CUDA_TRACED_1(cuThreadExchangeStreamCaptureMode, 541, U64)
CUDA_TRACED_2(cuStreamEndCapture_ptsz, 498, U64, U64)
CUDA_TRACED_2(cuStreamIsCapturing_ptsz, 500, U64, U64)
CUDA_TRACED_6(cuStreamGetCaptureInfo_v2_ptsz, 630, U64, U64, U64, U64, U64, U64)
CUDA_TRACED_7(cuStreamGetCaptureInfo_v3_ptsz, 730, U64, U64, U64, U64, U64,
  U64, U64)
CUDA_TRACED_4(cuStreamUpdateCaptureDependencies_ptsz, 632, U64, U64, U64, U32)
CUDA_TRACED_5(cuStreamUpdateCaptureDependencies_v2_ptsz, 732, U64, U64, U64,
  U64, U32)
CUDA_TRACED_4(cuStreamAttachMemAsync_ptsz, 438, U64, U64, U64, U32)
CUDA_TRACED_1(cuStreamQuery_ptsz, 439, U64)
CUDA_TRACED_1(cuStreamSynchronize_ptsz, 440, U64)
CUDA_TRACED_1(cuStreamDestroy_v2, 326, U64)
CUDA_TRACED_2(cuStreamCopyAttributes_ptsz, 573, U64, U64)
CUDA_TRACED_3(cuStreamGetAttribute_ptsz, 575, U64, U32, U64)
CUDA_TRACED_3(cuStreamSetAttribute_ptsz, 577, U64, U32, U64)
CUDA_TRACED_2(cuEventCreate, 118, U64, U32)
CUDA_TRACED_2(cuEventRecord_ptsz, 441, U64, U64)
CUDA_TRACED_3(cuEventRecordWithFlags_ptsz, 588, U64, U64, U32)
CUDA_TRACED_1(cuEventQuery, 120, U64)
CUDA_TRACED_1(cuEventSynchronize, 121, U64)
CUDA_TRACED_1(cuEventDestroy_v2, 325, U64)
CUDA_TRACED_3(cuEventElapsedTime, 123, U64, U64, U64)
CUDA_TRACED_3(cuEventElapsedTime_v2, 780, U64, U64, U64)
CUDA_TRACED_2(cuImportExternalMemory, 485, U64, U64)
CUDA_TRACED_3(cuExternalMemoryGetMappedBuffer, 486, U64, U64, U64)
CUDA_TRACED_3(cuExternalMemoryGetMappedMipmappedArray, 487, U64, U64, U64)
CUDA_TRACED_1(cuDestroyExternalMemory, 488, U64)
CUDA_TRACED_2(cuImportExternalSemaphore, 489, U64, U64)
CUDA_TRACED_4(cuSignalExternalSemaphoresAsync_ptsz, 491, U64, U64, U32, U64)
CUDA_TRACED_4(cuWaitExternalSemaphoresAsync_ptsz, 493, U64, U64, U32, U64)
CUDA_TRACED_1(cuDestroyExternalSemaphore, 494, U64)
CUDA_TRACED_4(cuStreamWaitValue32_v2_ptsz, 660, U64, U64, U32, U32)
CUDA_TRACED_4(cuStreamWaitValue64_v2_ptsz, 662, U64, U64, U64, U32)
CUDA_TRACED_4(cuStreamWriteValue32_v2_ptsz, 664, U64, U64, U32, U32)
CUDA_TRACED_4(cuStreamWriteValue64_v2_ptsz, 666, U64, U64, U64, U32)
CUDA_TRACED_4(cuStreamBatchMemOp_v2_ptsz, 668, U64, U32, U64, U32)
CUDA_TRACED_3(cuFuncGetAttribute, 85, U64, U32, U64)
CUDA_TRACED_3(cuFuncSetAttribute, 481, U64, U32, U32)
CUDA_TRACED_2(cuFuncSetCacheConfig, 86, U64, U32)
CUDA_TRACED_2(cuFuncGetModule, 566, U64, U64)
CUDA_TRACED_2(cuFuncGetName, 718, U64, U64)
CUDA_TRACED_4(cuFuncGetParamInfo, 733, U64, U64, U64, U64)
CUDA_TRACED_2(cuFuncIsLoaded, 741, U64, U64)
CUDA_TRACED_1(cuFuncLoad, 742, U64)
CUDA_TRACED_4(cuLaunchKernelEx_ptsz, 653, U64, U64, U64, U64)
CUDA_TRACED_3(cuLaunchCooperativeKernelMultiDevice, 480, U64, U32, U32)
CUDA_TRACED_3(cuLaunchHostFunc_ptsz, 528, U64, U64, U64)
CUDA_TRACED_4(cuFuncSetBlockShape, 83, U64, U32, U32, U32)
CUDA_TRACED_2(cuFuncSetSharedSize, 84, U64, U32)
CUDA_TRACED_2(cuParamSetSize, 110, U64, U32)
CUDA_TRACED_3(cuParamSeti, 111, U64, U32, U32)
CUDA_TRACED_4(cuParamSetv, 113, U64, U32, U64, U32)
CUDA_TRACED_1(cuLaunch, 115, U64)
CUDA_TRACED_3(cuLaunchGrid, 116, U64, U32, U32)
CUDA_TRACED_4(cuLaunchGridAsync, 117, U64, U32, U32, U64)
CUDA_TRACED_3(cuParamSetTexRef, 114, U64, U32, U64)
CUDA_TRACED_2(cuFuncSetSharedMemConfig, 338, U64, U32)
CUDA_TRACED_2(cuGraphCreate, 501, U64, U32)
CUDA_TRACED_5(cuGraphAddKernelNode_v2, 689, U64, U64, U64, U64, U64)
CUDA_TRACED_2(cuGraphKernelNodeGetParams_v2, 690, U64, U64)
CUDA_TRACED_2(cuGraphKernelNodeSetParams_v2, 691, U64, U64)
CUDA_TRACED_6(cuGraphAddMemcpyNode, 504, U64, U64, U64, U64, U64, U64)
CUDA_TRACED_2(cuGraphMemcpyNodeGetParams, 505, U64, U64)
CUDA_TRACED_2(cuGraphMemcpyNodeSetParams, 520, U64, U64)
CUDA_TRACED_6(cuGraphAddMemsetNode, 506, U64, U64, U64, U64, U64, U64)
CUDA_TRACED_2(cuGraphMemsetNodeGetParams, 507, U64, U64)
CUDA_TRACED_2(cuGraphMemsetNodeSetParams, 508, U64, U64)
CUDA_TRACED_5(cuGraphAddHostNode, 530, U64, U64, U64, U64, U64)
CUDA_TRACED_2(cuGraphHostNodeGetParams, 531, U64, U64)
CUDA_TRACED_2(cuGraphHostNodeSetParams, 533, U64, U64)
CUDA_TRACED_5(cuGraphAddChildGraphNode, 525, U64, U64, U64, U64, U64)
CUDA_TRACED_2(cuGraphChildGraphNodeGetGraph, 529, U64, U64)
CUDA_TRACED_4(cuGraphAddEmptyNode, 526, U64, U64, U64, U64)
CUDA_TRACED_5(cuGraphAddEventRecordNode, 589, U64, U64, U64, U64, U64)
CUDA_TRACED_2(cuGraphEventRecordNodeGetEvent, 591, U64, U64)
CUDA_TRACED_2(cuGraphEventRecordNodeSetEvent, 593, U64, U64)
CUDA_TRACED_5(cuGraphAddEventWaitNode, 590, U64, U64, U64, U64, U64)
CUDA_TRACED_2(cuGraphEventWaitNodeGetEvent, 592, U64, U64)
CUDA_TRACED_2(cuGraphEventWaitNodeSetEvent, 594, U64, U64)
CUDA_TRACED_5(cuGraphAddExternalSemaphoresSignalNode, 618, U64, U64, U64, U64,
  U64)
CUDA_TRACED_2(cuGraphExternalSemaphoresSignalNodeGetParams, 619, U64, U64)
CUDA_TRACED_2(cuGraphExternalSemaphoresSignalNodeSetParams, 620, U64, U64)
CUDA_TRACED_5(cuGraphAddExternalSemaphoresWaitNode, 621, U64, U64, U64, U64,
  U64)
CUDA_TRACED_2(cuGraphExternalSemaphoresWaitNodeGetParams, 622, U64, U64)
CUDA_TRACED_2(cuGraphExternalSemaphoresWaitNodeSetParams, 623, U64, U64)
CUDA_TRACED_5(cuGraphAddBatchMemOpNode, 669, U64, U64, U64, U64, U64)
CUDA_TRACED_2(cuGraphBatchMemOpNodeGetParams, 670, U64, U64)
CUDA_TRACED_2(cuGraphBatchMemOpNodeSetParams, 671, U64, U64)
CUDA_TRACED_3(cuGraphExecBatchMemOpNodeSetParams, 672, U64, U64, U64)
CUDA_TRACED_5(cuGraphAddMemAllocNode, 638, U64, U64, U64, U64, U64)
CUDA_TRACED_2(cuGraphMemAllocNodeGetParams, 648, U64, U64)
CUDA_TRACED_5(cuGraphAddMemFreeNode, 639, U64, U64, U64, U64, U64)
CUDA_TRACED_2(cuGraphMemFreeNodeGetParams, 649, U64, U64)
CUDA_TRACED_1(cuDeviceGraphMemTrim, 640, U32)
CUDA_TRACED_3(cuDeviceGetGraphMemAttribute, 641, U32, U32, U64)
CUDA_TRACED_3(cuDeviceSetGraphMemAttribute, 642, U32, U32, U64)
CUDA_TRACED_2(cuGraphClone, 523, U64, U64)
CUDA_TRACED_3(cuGraphNodeFindInClone, 524, U64, U64, U64)
CUDA_TRACED_2(cuGraphNodeGetType, 509, U64, U64)
CUDA_TRACED_3(cuGraphGetNodes, 534, U64, U64, U64)
CUDA_TRACED_3(cuGraphGetRootNodes, 510, U64, U64, U64)
CUDA_TRACED_4(cuGraphGetEdges, 535, U64, U64, U64, U64)
CUDA_TRACED_5(cuGraphGetEdges_v2, 724, U64, U64, U64, U64, U64)
CUDA_TRACED_3(cuGraphNodeGetDependencies, 511, U64, U64, U64)
CUDA_TRACED_4(cuGraphNodeGetDependencies_v2, 725, U64, U64, U64, U64)
CUDA_TRACED_3(cuGraphNodeGetDependentNodes, 512, U64, U64, U64)
CUDA_TRACED_4(cuGraphNodeGetDependentNodes_v2, 726, U64, U64, U64, U64)
CUDA_TRACED_4(cuGraphAddDependencies, 518, U64, U64, U64, U64)
CUDA_TRACED_5(cuGraphAddDependencies_v2, 727, U64, U64, U64, U64, U64)
CUDA_TRACED_4(cuGraphRemoveDependencies, 519, U64, U64, U64, U64)
CUDA_TRACED_5(cuGraphRemoveDependencies_v2, 728, U64, U64, U64, U64, U64)
CUDA_TRACED_1(cuGraphDestroyNode, 522, U64)
CUDA_TRACED_3(cuGraphInstantiateWithFlags, 643, U64, U64, U64)
CUDA_TRACED_3(cuGraphInstantiateWithParams_ptsz, 657, U64, U64, U64)
CUDA_TRACED_2(cuGraphExecGetFlags, 658, U64, U64)
CUDA_TRACED_3(cuGraphExecKernelNodeSetParams_v2, 692, U64, U64, U64)
CUDA_TRACED_4(cuGraphExecMemcpyNodeSetParams, 562, U64, U64, U64, U64)
CUDA_TRACED_4(cuGraphExecMemsetNodeSetParams, 563, U64, U64, U64, U64)
CUDA_TRACED_3(cuGraphExecHostNodeSetParams, 564, U64, U64, U64)
CUDA_TRACED_3(cuGraphExecChildGraphNodeSetParams, 586, U64, U64, U64)
CUDA_TRACED_3(cuGraphExecEventRecordNodeSetEvent, 595, U64, U64, U64)
CUDA_TRACED_3(cuGraphExecEventWaitNodeSetEvent, 596, U64, U64, U64)
CUDA_TRACED_3(cuGraphExecExternalSemaphoresSignalNodeSetParams, 624, U64, U64,
  U64)
CUDA_TRACED_3(cuGraphExecExternalSemaphoresWaitNodeSetParams, 625, U64, U64,
  U64)
CUDA_TRACED_3(cuGraphNodeSetEnabled, 650, U64, U64, U32)
CUDA_TRACED_3(cuGraphNodeGetEnabled, 651, U64, U64, U64)
CUDA_TRACED_2(cuGraphUpload_ptsz, 581, U64, U64)
CUDA_TRACED_2(cuGraphLaunch_ptsz, 515, U64, U64)
CUDA_TRACED_1(cuGraphExecDestroy, 516, U64)
CUDA_TRACED_1(cuGraphDestroy, 517, U64)
CUDA_TRACED_3(cuGraphExecUpdate_v2, 696, U64, U64, U64)
CUDA_TRACED_2(cuGraphKernelNodeCopyAttributes, 569, U64, U64)
CUDA_TRACED_3(cuGraphKernelNodeGetAttribute, 570, U64, U32, U64)
CUDA_TRACED_3(cuGraphKernelNodeSetAttribute, 571, U64, U32, U64)
CUDA_TRACED_3(cuGraphDebugDotPrint, 628, U64, U64, U32)
CUDA_TRACED_5(cuUserObjectCreate, 633, U64, U64, U64, U32, U32)
CUDA_TRACED_2(cuUserObjectRetain, 634, U64, U32)
CUDA_TRACED_2(cuUserObjectRelease, 635, U64, U32)
CUDA_TRACED_4(cuGraphRetainUserObject, 636, U64, U64, U32, U32)
CUDA_TRACED_3(cuGraphReleaseUserObject, 637, U64, U64, U32)
CUDA_TRACED_5(cuGraphAddNode, 712, U64, U64, U64, U64, U64)
CUDA_TRACED_6(cuGraphAddNode_v2, 723, U64, U64, U64, U64, U64, U64)
CUDA_TRACED_2(cuGraphNodeSetParams, 713, U64, U64)
CUDA_TRACED_3(cuGraphExecNodeSetParams, 714, U64, U64, U64)
CUDA_TRACED_5(cuGraphConditionalHandleCreate, 722, U64, U64, U64, U32, U32)
CUDA_TRACED_4(cuOccupancyMaxActiveBlocksPerMultiprocessor, 374, U64, U64, U32,
  U64)
CUDA_TRACED_5(cuOccupancyMaxActiveBlocksPerMultiprocessorWithFlags, 451, U64,
  U64, U32, U64, U32)
CUDA_TRACED_6(cuOccupancyMaxPotentialBlockSize, 384, U64, U64, U64, U64, U64,
  U32)
CUDA_TRACED_7(cuOccupancyMaxPotentialBlockSizeWithFlags, 452, U64, U64, U64,
  U64, U64, U32, U32)
CUDA_TRACED_4(cuOccupancyAvailableDynamicSMemPerBlock, 543, U64, U64, U32, U32)
CUDA_TRACED_3(cuOccupancyMaxPotentialClusterSize, 675, U64, U64, U64)
CUDA_TRACED_3(cuOccupancyMaxActiveClusters, 676, U64, U64, U64)
CUDA_TRACED_3(cuTexRefSetArray, 94, U64, U64, U32)
CUDA_TRACED_3(cuTexRefSetMipmappedArray, 350, U64, U64, U32)
CUDA_TRACED_4(cuTexRefSetAddress_v2, 255, U64, U64, U64, U64)
CUDA_TRACED_4(cuTexRefSetAddress2D_v3, 327, U64, U64, U64, U64)
CUDA_TRACED_3(cuTexRefSetFormat, 99, U64, U32, U32)
CUDA_TRACED_3(cuTexRefSetAddressMode, 100, U64, U32, U32)
CUDA_TRACED_2(cuTexRefSetFilterMode, 101, U64, U32)
CUDA_TRACED_2(cuTexRefSetMipmapFilterMode, 351, U64, U32)
CUDA_TRACED_2(cuTexRefSetMaxAnisotropy, 354, U64, U32)
CUDA_TRACED_2(cuTexRefSetBorderColor, 455, U64, U64)
CUDA_TRACED_2(cuTexRefSetFlags, 102, U64, U32)
CUDA_TRACED_2(cuTexRefGetAddress_v2, 257, U64, U64)
CUDA_TRACED_2(cuTexRefGetArray, 105, U64, U64)
CUDA_TRACED_2(cuTexRefGetMipmappedArray, 355, U64, U64)
CUDA_TRACED_3(cuTexRefGetAddressMode, 106, U64, U64, U32)
CUDA_TRACED_2(cuTexRefGetFilterMode, 107, U64, U64)
CUDA_TRACED_3(cuTexRefGetFormat, 108, U64, U64, U64)
CUDA_TRACED_2(cuTexRefGetMipmapFilterMode, 356, U64, U64)
CUDA_TRACED_2(cuTexRefGetMipmapLevelBias, 357, U64, U64)
CUDA_TRACED_3(cuTexRefGetMipmapLevelClamp, 358, U64, U64, U64)
CUDA_TRACED_2(cuTexRefGetMaxAnisotropy, 359, U64, U64)
CUDA_TRACED_2(cuTexRefGetBorderColor, 456, U64, U64)
CUDA_TRACED_2(cuTexRefGetFlags, 109, U64, U64)
CUDA_TRACED_1(cuTexRefCreate, 92, U64)
CUDA_TRACED_1(cuTexRefDestroy, 93, U64)
CUDA_TRACED_3(cuSurfRefSetArray, 194, U64, U64, U32)
CUDA_TRACED_2(cuSurfRefGetArray, 196, U64, U64)
CUDA_TRACED_4(cuTexObjectCreate, 339, U64, U64, U64, U64)
CUDA_TRACED_1(cuTexObjectDestroy, 340, U64)
CUDA_TRACED_2(cuTexObjectGetResourceDesc, 341, U64, U64)
CUDA_TRACED_2(cuTexObjectGetTextureDesc, 342, U64, U64)
CUDA_TRACED_2(cuTexObjectGetResourceViewDesc, 361, U64, U64)
CUDA_TRACED_2(cuSurfObjectCreate, 343, U64, U64)
CUDA_TRACED_1(cuSurfObjectDestroy, 344, U64)
CUDA_TRACED_2(cuSurfObjectGetResourceDesc, 345, U64, U64)
CUDA_TRACED_2(cuTensorMapReplaceAddress, 699, U64, U64)
CUDA_TRACED_3(cuDeviceCanAccessPeer, 312, U64, U32, U32)
CUDA_TRACED_2(cuCtxEnablePeerAccess, 313, U64, U32)
CUDA_TRACED_1(cuCtxDisablePeerAccess, 314, U64)
CUDA_TRACED_4(cuDeviceGetP2PAttribute, 454, U64, U32, U32, U32)
CUDA_TRACED_1(cuGraphicsUnregisterResource, 128, U64)
CUDA_TRACED_4(cuGraphicsSubResourceGetMappedArray, 129, U64, U64, U32, U32)
CUDA_TRACED_2(cuGraphicsResourceGetMappedMipmappedArray, 360, U64, U64)
CUDA_TRACED_3(cuGraphicsResourceGetMappedPointer_v2, 258, U64, U64, U64)
CUDA_TRACED_2(cuGraphicsResourceSetMapFlags_v2, 380, U64, U32)
CUDA_TRACED_3(cuGraphicsMapResources_ptsz, 443, U32, U64, U64)
CUDA_TRACED_3(cuGraphicsUnmapResources_ptsz, 444, U32, U64, U64)
CUDA_TRACED_5(cuGetProcAddress_v2, 677, U64, U64, U32, U64, U64)
CUDA_TRACED_3(cuCoredumpGetAttribute, 701, U32, U64, U64)
CUDA_TRACED_3(cuCoredumpGetAttributeGlobal, 702, U32, U64, U64)
CUDA_TRACED_3(cuCoredumpSetAttribute, 703, U32, U64, U64)
CUDA_TRACED_3(cuCoredumpSetAttributeGlobal, 704, U32, U64, U64)
CUDA_TRACED_4(cuGreenCtxCreate, 743, U64, U64, U32, U32)
CUDA_TRACED_1(cuGreenCtxDestroy, 744, U64)
CUDA_TRACED_2(cuCtxFromGreenCtx, 753, U64, U64)
CUDA_TRACED_3(cuDeviceGetDevResource, 745, U32, U64, U32)
CUDA_TRACED_3(cuCtxGetDevResource, 746, U64, U64, U32)
CUDA_TRACED_3(cuGreenCtxGetDevResource, 747, U64, U64, U32)
CUDA_TRACED_6(cuDevSmResourceSplitByCount, 751, U64, U64, U64, U64, U32, U32)
CUDA_TRACED_3(cuDevResourceGenerateDesc, 748, U64, U64, U32)
CUDA_TRACED_2(cuGreenCtxRecordEvent, 749, U64, U64)
CUDA_TRACED_2(cuGreenCtxWaitEvent, 750, U64, U64)
CUDA_TRACED_2(cuStreamGetGreenCtx, 752, U64, U64)
CUDA_TRACED_4(cuGreenCtxStreamCreate, 758, U64, U64, U32, U32)
CUDA_TRACED_3(cuLogsRegisterCallback, 763, U64, U64, U64)
CUDA_TRACED_1(cuLogsUnregisterCallback, 764, U64)
CUDA_TRACED_2(cuLogsCurrent, 765, U64, U32)
CUDA_TRACED_3(cuLogsDumpToFile, 766, U64, U64, U32)
CUDA_TRACED_4(cuLogsDumpToMemory, 767, U64, U64, U64, U32)
CUDA_TRACED_3(cuMemHostRegister, 301, U64, U64, U32)
CUDA_TRACED_2(cuGraphicsResourceSetMapFlags, 132, U64, U32)
CUDA_TRACED_4(cuLinkCreate, 362, U32, U64, U64, U64)
CUDA_TRACED_8(cuLinkAddData, 363, U64, U32, U64, U64, U64, U32, U64, U64)
CUDA_TRACED_6(cuLinkAddFile, 364, U64, U32, U64, U32, U64, U64)
CUDA_TRACED_4(cuTexRefSetAddress2D_v2, 256, U64, U64, U64, U64)
CUDA_TRACED_2(cuDeviceTotalMem, 7, U64, U32)
CUDA_TRACED_4(cuModuleGetGlobal, 24, U64, U64, U64, U64)
CUDA_TRACED_2(cuMemGetInfo, 27, U64, U64)
CUDA_TRACED_2(cuMemAlloc, 29, U64, U32)
CUDA_TRACED_5(cuMemAllocPitch, 31, U64, U64, U32, U32, U32)
CUDA_TRACED_1(cuMemFree, 33, U32)
CUDA_TRACED_3(cuMemGetAddressRange, 35, U64, U64, U32)
CUDA_TRACED_2(cuMemAllocHost, 37, U64, U32)
CUDA_TRACED_3(cuMemHostGetDevicePointer, 40, U64, U64, U32)
CUDA_TRACED_3(cuMemcpyHtoD, 43, U32, U64, U32)
CUDA_TRACED_3(cuMemcpyDtoH, 45, U64, U32, U32)
CUDA_TRACED_3(cuMemcpyDtoD, 47, U32, U32, U32)
CUDA_TRACED_4(cuMemcpyDtoA, 49, U64, U32, U32, U32)
CUDA_TRACED_4(cuMemcpyAtoD, 51, U32, U64, U32, U32)
CUDA_TRACED_4(cuMemcpyHtoA, 53, U64, U32, U64, U32)
CUDA_TRACED_4(cuMemcpyAtoH, 54, U64, U64, U32, U32)
CUDA_TRACED_5(cuMemcpyAtoA, 55, U64, U32, U64, U32, U32)
CUDA_TRACED_5(cuMemcpyHtoAAsync, 66, U64, U32, U64, U32, U64)
CUDA_TRACED_5(cuMemcpyAtoHAsync, 67, U64, U64, U32, U32, U64)
CUDA_TRACED_1(cuMemcpy2D, 56, U64)
CUDA_TRACED_1(cuMemcpy2DUnaligned, 57, U64)
CUDA_TRACED_1(cuMemcpy3D, 58, U64)
CUDA_TRACED_4(cuMemcpyHtoDAsync, 60, U32, U64, U32, U64)
CUDA_TRACED_4(cuMemcpyDtoHAsync, 62, U64, U32, U32, U64)
CUDA_TRACED_4(cuMemcpyDtoDAsync, 64, U32, U32, U32, U64)
CUDA_TRACED_2(cuMemcpy2DAsync, 68, U64, U64)
CUDA_TRACED_2(cuMemcpy3DAsync, 69, U64, U64)
CUDA_TRACED_3(cuMemsetD8, 71, U32, U8, U32)
CUDA_TRACED_3(cuMemsetD16, 73, U32, U16, U32)
CUDA_TRACED_3(cuMemsetD32, 75, U32, U32, U32)
CUDA_TRACED_5(cuMemsetD2D8, 77, U32, U32, U8, U32, U32)
CUDA_TRACED_5(cuMemsetD2D16, 79, U32, U32, U16, U32, U32)
CUDA_TRACED_5(cuMemsetD2D32, 81, U32, U32, U32, U32, U32)
CUDA_TRACED_2(cuArrayCreate, 87, U64, U64)
CUDA_TRACED_2(cuArrayGetDescriptor, 88, U64, U64)
CUDA_TRACED_2(cuArray3DCreate, 90, U64, U64)
CUDA_TRACED_2(cuArray3DGetDescriptor, 91, U64, U64)
CUDA_TRACED_4(cuTexRefSetAddress, 95, U64, U64, U32, U32)
CUDA_TRACED_4(cuTexRefSetAddress2D, 97, U64, U64, U32, U32)
CUDA_TRACED_2(cuTexRefGetAddress, 103, U64, U64)
CUDA_TRACED_3(cuGraphicsResourceGetMappedPointer, 130, U64, U64, U64)
CUDA_TRACED_1(cuStreamDestroy, 127, U64)
CUDA_TRACED_1(cuEventDestroy, 122, U64)
CUDA_TRACED_1(cuDevicePrimaryCtxRelease, 387, U32)
CUDA_TRACED_1(cuDevicePrimaryCtxReset, 389, U32)
CUDA_TRACED_2(cuDevicePrimaryCtxSetFlags, 388, U32, U32)
CUDA_TRACED_3(cuMemcpyHtoD_v2, 276, U64, U64, U64)
CUDA_TRACED_3(cuMemcpyDtoH_v2, 278, U64, U64, U64)
CUDA_TRACED_3(cuMemcpyDtoD_v2, 280, U64, U64, U64)
CUDA_TRACED_4(cuMemcpyDtoA_v2, 285, U64, U64, U64, U64)
CUDA_TRACED_4(cuMemcpyAtoD_v2, 284, U64, U64, U64, U64)
CUDA_TRACED_4(cuMemcpyHtoA_v2, 292, U64, U64, U64, U64)
CUDA_TRACED_4(cuMemcpyAtoH_v2, 282, U64, U64, U64, U64)
CUDA_TRACED_5(cuMemcpyAtoA_v2, 286, U64, U64, U64, U64, U64)
CUDA_TRACED_5(cuMemcpyHtoAAsync_v2, 293, U64, U64, U64, U64, U64)
CUDA_TRACED_5(cuMemcpyAtoHAsync_v2, 283, U64, U64, U64, U64, U64)
CUDA_TRACED_1(cuMemcpy2D_v2, 287, U64)
CUDA_TRACED_1(cuMemcpy2DUnaligned_v2, 288, U64)
CUDA_TRACED_1(cuMemcpy3D_v2, 290, U64)
CUDA_TRACED_4(cuMemcpyHtoDAsync_v2, 277, U64, U64, U64, U64)
CUDA_TRACED_4(cuMemcpyDtoHAsync_v2, 279, U64, U64, U64, U64)
CUDA_TRACED_4(cuMemcpyDtoDAsync_v2, 281, U64, U64, U64, U64)
CUDA_TRACED_2(cuMemcpy2DAsync_v2, 289, U64, U64)
CUDA_TRACED_2(cuMemcpy3DAsync_v2, 291, U64, U64)
CUDA_TRACED_3(cuMemsetD8_v2, 249, U64, U8, U64)
CUDA_TRACED_3(cuMemsetD16_v2, 250, U64, U16, U64)
CUDA_TRACED_3(cuMemsetD32_v2, 251, U64, U32, U64)
CUDA_TRACED_5(cuMemsetD2D8_v2, 252, U64, U64, U8, U64, U64)
CUDA_TRACED_5(cuMemsetD2D16_v2, 253, U64, U64, U16, U64, U64)
CUDA_TRACED_5(cuMemsetD2D32_v2, 254, U64, U64, U32, U64, U64)
CUDA_TRACED_3(cuMemcpy, 305, U64, U64, U64)
CUDA_TRACED_4(cuMemcpyAsync, 306, U64, U64, U64, U64)
CUDA_TRACED_5(cuMemcpyPeer, 318, U64, U64, U64, U64, U64)
CUDA_TRACED_6(cuMemcpyPeerAsync, 319, U64, U64, U64, U64, U64, U64)
CUDA_TRACED_1(cuMemcpy3DPeer, 320, U64)
CUDA_TRACED_2(cuMemcpy3DPeerAsync, 321, U64, U64)
CUDA_TRACED_5(cuMemcpy3DBatchAsync, 778, U64, U64, U64, U64, U64)
CUDA_TRACED_4(cuMemsetD8Async, 216, U64, U8, U64, U64)
CUDA_TRACED_4(cuMemsetD16Async, 218, U64, U16, U64, U64)
CUDA_TRACED_4(cuMemsetD32Async, 220, U64, U32, U64, U64)
CUDA_TRACED_6(cuMemsetD2D8Async, 222, U64, U64, U8, U64, U64, U64)
CUDA_TRACED_6(cuMemsetD2D16Async, 224, U64, U64, U16, U64, U64, U64)
CUDA_TRACED_6(cuMemsetD2D32Async, 226, U64, U64, U32, U64, U64, U64)
CUDA_TRACED_2(cuStreamGetPriority, 368, U64, U64)
CUDA_TRACED_2(cuStreamGetId, 693, U64, U64)
CUDA_TRACED_2(cuStreamGetFlags, 369, U64, U64)
CUDA_TRACED_2(cuStreamGetDevice, 774, U64, U64)
CUDA_TRACED_2(cuStreamGetCtx, 483, U64, U64)
CUDA_TRACED_3(cuStreamGetCtx_v2, 759, U64, U64, U64)
CUDA_TRACED_3(cuStreamWaitEvent, 295, U64, U64, U32)
CUDA_TRACED_4(cuStreamAddCallback, 346, U64, U64, U64, U32)
CUDA_TRACED_4(cuStreamAttachMemAsync, 377, U64, U64, U64, U32)
CUDA_TRACED_1(cuStreamQuery, 125, U64)
CUDA_TRACED_1(cuStreamSynchronize, 126, U64)
CUDA_TRACED_2(cuEventRecord, 119, U64, U64)
CUDA_TRACED_3(cuEventRecordWithFlags, 587, U64, U64, U32)
CUDA_TRACED_4(cuLaunchKernelEx, 652, U64, U64, U64, U64)
CUDA_TRACED_3(cuLaunchHostFunc, 527, U64, U64, U64)
CUDA_TRACED_3(cuGraphicsMapResources, 133, U32, U64, U64)
CUDA_TRACED_3(cuGraphicsUnmapResources, 134, U32, U64, U64)
CUDA_TRACED_4(cuStreamWriteValue32, 460, U64, U64, U32, U32)
CUDA_TRACED_4(cuStreamWaitValue32, 458, U64, U64, U32, U32)
CUDA_TRACED_4(cuStreamWriteValue64, 475, U64, U64, U64, U32)
CUDA_TRACED_4(cuStreamWaitValue64, 473, U64, U64, U64, U32)
CUDA_TRACED_4(cuStreamBatchMemOp, 462, U64, U32, U64, U32)
CUDA_TRACED_4(cuStreamWriteValue32_ptsz, 461, U64, U64, U32, U32)
CUDA_TRACED_4(cuStreamWaitValue32_ptsz, 459, U64, U64, U32, U32)
CUDA_TRACED_4(cuStreamWriteValue64_ptsz, 476, U64, U64, U64, U32)
CUDA_TRACED_4(cuStreamWaitValue64_ptsz, 474, U64, U64, U64, U32)
CUDA_TRACED_4(cuStreamBatchMemOp_ptsz, 463, U64, U32, U64, U32)
CUDA_TRACED_4(cuStreamWriteValue32_v2, 663, U64, U64, U32, U32)
CUDA_TRACED_4(cuStreamWaitValue32_v2, 659, U64, U64, U32, U32)
CUDA_TRACED_4(cuStreamWriteValue64_v2, 665, U64, U64, U64, U32)
CUDA_TRACED_4(cuStreamWaitValue64_v2, 661, U64, U64, U64, U32)
CUDA_TRACED_4(cuStreamBatchMemOp_v2, 667, U64, U32, U64, U32)
CUDA_TRACED_4(cuMemPrefetchAsync, 467, U64, U64, U32, U64)
CUDA_TRACED_5(cuMemPrefetchAsync_v2, 716, U64, U64, U64, U32, U64)
CUDA_TRACED_4(cuSignalExternalSemaphoresAsync, 490, U64, U64, U32, U64)
CUDA_TRACED_4(cuWaitExternalSemaphoresAsync, 492, U64, U64, U32, U64)
CUDA_TRACED_1(cuStreamBeginCapture, 495, U64)
CUDA_TRACED_1(cuStreamBeginCapture_ptsz, 496, U64)
CUDA_TRACED_2(cuStreamBeginCapture_v2, 539, U64, U32)
CUDA_TRACED_6(cuStreamBeginCaptureToGraph, 720, U64, U64, U64, U64, U64, U32)
CUDA_TRACED_2(cuStreamEndCapture, 497, U64, U64)
CUDA_TRACED_2(cuStreamIsCapturing, 499, U64, U64)
CUDA_TRACED_3(cuStreamGetCaptureInfo, 536, U64, U64, U64)
CUDA_TRACED_3(cuStreamGetCaptureInfo_ptsz, 537, U64, U64, U64)
CUDA_TRACED_6(cuStreamGetCaptureInfo_v2, 629, U64, U64, U64, U64, U64, U64)
CUDA_TRACED_7(cuStreamGetCaptureInfo_v3, 729, U64, U64, U64, U64, U64, U64, U64)
CUDA_TRACED_5(cuGraphAddKernelNode, 502, U64, U64, U64, U64, U64)
CUDA_TRACED_2(cuGraphKernelNodeGetParams, 503, U64, U64)
CUDA_TRACED_2(cuGraphKernelNodeSetParams, 521, U64, U64)
CUDA_TRACED_3(cuGraphExecKernelNodeSetParams, 538, U64, U64, U64)
CUDA_TRACED_3(cuGraphInstantiateWithParams, 656, U64, U64, U64)
CUDA_TRACED_4(cuGraphExecUpdate, 561, U64, U64, U64, U64)
CUDA_TRACED_2(cuGraphUpload, 580, U64, U64)
CUDA_TRACED_2(cuGraphLaunch, 514, U64, U64)
CUDA_TRACED_2(cuStreamCopyAttributes, 572, U64, U64)
CUDA_TRACED_3(cuStreamGetAttribute, 574, U64, U32, U64)
CUDA_TRACED_3(cuStreamSetAttribute, 576, U64, U32, U64)
CUDA_TRACED_5(cuGraphInstantiate, 513, U64, U64, U64, U64, U64)
CUDA_TRACED_5(cuGraphInstantiate_v2, 578, U64, U64, U64, U64, U64)
CUDA_TRACED_3(cuMemMapArrayAsync, 584, U64, U32, U64)
CUDA_TRACED_2(cuMemFreeAsync, 600, U64, U64)
CUDA_TRACED_3(cuMemAllocAsync, 598, U64, U64, U64)
CUDA_TRACED_4(cuMemAllocFromPoolAsync, 611, U64, U64, U64, U64)
CUDA_TRACED_4(cuStreamUpdateCaptureDependencies, 631, U64, U64, U64, U32)
CUDA_TRACED_5(cuStreamUpdateCaptureDependencies_v2, 731, U64, U64, U64, U64,
  U32)
CUDA_TRACED_4(cuGetProcAddress, 626, U64, U64, U32, U64)
CUDA_TRACED_2(cuCheckpointProcessGetRestoreThreadId, 768, U32, U64)
CUDA_TRACED_2(cuCheckpointProcessGetState, 769, U32, U64)
CUDA_TRACED_2(cuCheckpointProcessLock, 770, U32, U64)
CUDA_TRACED_2(cuCheckpointProcessCheckpoint, 771, U32, U64)
CUDA_TRACED_2(cuCheckpointProcessRestore, 772, U32, U64)
CUDA_TRACED_2(cuCheckpointProcessUnlock, 773, U32, U64)
CUDA_TRACED_3(cuGraphicsGLRegisterBuffer, 175, U64, U32, U32)
CUDA_TRACED_4(cuGraphicsGLRegisterImage, 176, U64, U32, U32, U32)
CUDA_TRACED_4(cuGLGetDevices_v2, 385, U64, U64, U32, U32)
CUDA_TRACED_3(cuGLCtxCreate_v2, 239, U64, U32, U32)
CUDA_TRACED_0(cuGLInit, 178)
CUDA_TRACED_1(cuGLRegisterBufferObject, 179, U32)
CUDA_TRACED_3(cuGLMapBufferObject_v2_ptds, 417, U64, U64, U32)
CUDA_TRACED_1(cuGLUnmapBufferObject, 181, U32)
CUDA_TRACED_1(cuGLUnregisterBufferObject, 182, U32)
CUDA_TRACED_2(cuGLSetBufferObjectMapFlags, 183, U32, U32)
CUDA_TRACED_4(cuGLMapBufferObjectAsync_v2_ptsz, 445, U64, U64, U32, U64)
CUDA_TRACED_2(cuGLUnmapBufferObjectAsync, 185, U32, U64)
CUDA_TRACED_4(cuGLGetDevices, 333, U64, U64, U32, U32)
CUDA_TRACED_3(cuGLMapBufferObject_v2, 269, U64, U64, U32)
CUDA_TRACED_4(cuGLMapBufferObjectAsync_v2, 270, U64, U64, U32, U64)
CUDA_TRACED_3(cuGLCtxCreate, 174, U64, U32, U32)
CUDA_TRACED_3(cuGLMapBufferObject, 180, U64, U64, U32)
CUDA_TRACED_4(cuGLMapBufferObjectAsync, 184, U64, U64, U32, U64)
CUDA_TRACED_4(cuNNSetAllocator, 466, U64, U64, U64, U64)
CUDA_TRACED_4(cuNVNbufferGetPointer, 464, U64, U64, U32, U64)
CUDA_TRACED_4(cuNVNtextureGetArray, 465, U64, U64, U64, U32)
CUDA_TRACED_3(cuEventCreateFromNVNSync, 469, U64, U64, U32)
CUDA_TRACED_3(cuProfilerInitialize, 311, U64, U64, U32)
CUDA_TRACED_0(cuProfilerStart, 308)
CUDA_TRACED_0(cuProfilerStop, 309)
