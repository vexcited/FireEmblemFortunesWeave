#include <stdint.h>

enum NvError : int32_t {
  NvSuccess = 0,
  NvError_NotImplemented = 1,
  NvError_NotSupported = 2,
  NvError_NotInitialized = 3,
};

extern "C" void NvOsSetAllocHook() {}

extern "C" void NvOsSetResourceAllocFileLine() {}

extern "C" void NvOsShowError() {}

extern "C" NvError NvOsTlsRemoveTerminator() {
  return NvError_NotImplemented;
}

extern "C" NvError NvOsTlsAddTerminator() {
  return NvSuccess;
}

extern "C" NvError NvOsPhysicalMemMap() {
  return NvError_NotSupported;
}

extern "C" void NvOsPhysicalMemUnmap() {}

extern "C" NvError NvOsInterruptRegister() {
  return NvError_NotImplemented;
}

extern "C" void NvOsInterruptUnregister() {}

extern "C" NvError NvOsInterruptEnable() {
  return NvError_NotImplemented;
}

extern "C" void NvOsInterruptDone() {}

extern "C" NvError NvOsSemaphoreClone() {
  return NvError_NotImplemented;
}

extern "C" NvError NvOsSharedMemAlloc() {
  return NvError_NotImplemented;
}

extern "C" NvError NvOsSharedMemHandleFromFd() {
  return NvError_NotImplemented;
}

extern "C" NvError NvOsSharedMemGetFd() {
  return NvError_NotImplemented;
}

extern "C" NvError NvOsSharedMemMap() {
  return NvError_NotImplemented;
}

extern "C" void NvOsSharedMemUnmap() {}

extern "C" void NvOsSharedMemFree() {}

extern "C" void NvOsLibraryUnload() {}

extern "C" NvError NvOsLibraryUnloadEx() {
  return NvError_NotSupported;
}

extern "C" void NvOsFlushWriteCombineBuffer() {}

extern "C" int32_t NvOsGetOsInformation() {
  return 1;
}

extern "C" NvError NvOsGetSystemTime() {
  return NvError_NotImplemented;
}

extern "C" NvError NvOsSetFpsTarget() {
  return NvSuccess;
}

extern "C" NvError NvOsModifyFpsTarget() {
  return NvSuccess;
}

extern "C" void NvOsCancelFpsTarget() {}

extern "C" void NvOsVerbosePrintf() {}

extern "C" NvError NvOsReadReg() {
  return NvSuccess;
}

extern "C" void NvOsWriteReg() {}

extern "C" NvError NvOsMapRegSpace() {
  return NvError_NotSupported;
}

extern "C" NvError NvOsUnMapRegSpace() {
  return NvSuccess;
}

extern "C" void NvOsHosSetCurrentAllocatorPointers() {}

extern "C" NvError NvOsDrvMapSharedMem() {
  return NvError_NotSupported;
}

extern "C" int32_t NvRmIsOnHypervisor() {
  return 0;
}

extern "C" int32_t NvRmPrivGetChipIdLimited() {
  return 35;
}

extern "C" int32_t NvRmChannelGetBackEnd() {
  return 4;
}

extern "C" NvError NvRmChannelOpenDeviceFile() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmChannelSetErrNotifier() {
  return NvError_NotImplemented;
}

extern "C" NvError NvRmChannelMapCmdBuf() {
  return NvError_NotImplemented;
}

extern "C" NvError NvRmChannelGetClientManagedSyncPoint() {
  return NvError_NotSupported;
}

extern "C" void NvRmChannelFreeClientManagedSyncPoint() {}

extern "C" int32_t NvRmChannelGatherFilterEnabled() {
  return 0;
}

extern "C" int32_t NvRmChannelMapAtSubmitEnabled() {
  return 0;
}

extern "C" NvError NvRmChannelSyncPointWaitmexTimeout() {
  return NvError_NotImplemented;
}

extern "C" void NvRmChannelSyncPointFree() {}

extern "C" NvError NvRmChannelGetModuleClockRate() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmChannelSetModuleClockRate() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmChannelRegRd() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmChannelRegWr() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmChannelBlockRegRd() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmChannelBlockRegWr() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmChannelSetModuleBandwidth() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmChannelSetModulePixelRate() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmHostCreateEventPollFd() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmHostTriggerEventPollFd() {
  return NvError_NotSupported;
}

extern "C" void NvRmHost1xInitializeSystem() {}

extern "C" void NvRmHost1xFinalizeSystem() {}

extern "C" int32_t NvRmHost1xGetPartitionId() {
  return 1;
}

extern "C" int32_t NvRmHost1xGetDefaultOpenAttrs() {
  return 1;
}

extern "C" void NvRmHost1xChannelUnpin() {}

extern "C" int32_t NvRmHost1xGetDefaultSyncpointAllocateAttrs() {
  return 0;
}

extern "C" void NvRmHost1xChannelPinGetUIdPRIVATE() {}

extern "C" int64_t NvRmHost1xChannelPinGetSizePRIVATE() {
  return -1;
}

extern "C" NvError NvRmHost1xWaiterAllocateWithEventService() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmHost1xWaiterCreateEventNotifier() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmHost1xSyncpointCreateReadOnlyMemHandle() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmHost1xSyncpointCreateMemHandle() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmHost1xSyncpointCreateFullReadOnlyMemHandle() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmHost1xSyncpointMemHandleExport() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmHost1xSyncpointMemHandleImport() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmHost1xWaiterArmSyncpointEvent() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmHost1xWaiterDisarmSyncpointEvent() {
  return NvError_NotSupported;
}

extern "C" void NvRmMemGetFd() {}

extern "C" void NvRmMemGetId() {}

extern "C" int64_t NvRmMemGetIVCId() {
  return -1;
}

extern "C" NvError NvRmMemHandleFromIVCId() {
  return NvError_NotSupported;
}

extern "C" int64_t NvRmMemPin() {
  return -1;
}

extern "C" void NvRmMemUnpin() {}

extern "C" NvError NvRmMemUnmap() {
  return NvSuccess;
}

extern "C" NvError NvRmMemHandleExportForAruid() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmMemHandleRemoveExportForAruid() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmMemGetImportIdMult() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmMemGetImportId() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmMemHandleFromImportId() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmMemSetVprFloor() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmMemCacheListSyncForCpu64() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmMemCacheListSyncForDevice64() {
  return NvError_NotSupported;
}

extern "C" void NvRmMemReserve64() {}

extern "C" NvError NvRmMemDmaMap() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmMemDmaUnmap() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmMemMgrInit() {
  return NvSuccess;
}

extern "C" NvError NvRmMemLoadMapBufferSgl() {
  return NvSuccess;
}

extern "C" int32_t NvRmMemIsHwVprHeap() {
  return 0;
}

extern "C" int32_t NvRmSurfaceGetDefaultLayout() {
  return 3;
}

extern "C" NvError NvRmSurfaceDebugControlInternal() {
  return NvError_NotSupported;
}

extern "C" NvError NvRmSurfaceDebugControl() {
  return NvError_NotSupported;
}

extern "C" int32_t NvRmSyncCalculateSizeForInplaceFd() {
  return 0;
}

extern "C" NvError NvRmSyncExtractFd() {
  return NvError_NotSupported;
}

extern "C" void* NvRmSyncCreateFromSemaphores() {
  return nullptr;
}

extern "C" NvError NvRmSyncCreateFromSemaphoresWithAttr() {
  return NvError_NotSupported;
}

extern "C" void* NvRmSyncGetSemaphores() {
  return nullptr;
}

extern "C" void NvRmSyncFreeSemaphores() {}

extern "C" int32_t NvRmSyncCalculateSizeForInplaceSemaphores() {
  return 0;
}

extern "C" int32_t NvRmSyncGetNumSemaphores() {
  return 1;
}

extern "C" NvError NvRmSyncExtractSemaphore() {
  return NvError_NotImplemented;
}

extern "C" int32_t NvTegraSysGetSkuInfo() {
  return -1;
}

extern "C" int32_t NvTegraSysGetReservedProduction() {
  return -1;
}

extern "C" int32_t NvTegraSysGetPackageInfo() {
  return -1;
}

extern "C" int32_t NvTegraSysGetFuseVP9Disable() {
  return -1;
}

extern "C" int32_t NvTegraSysGetFuseVP9EncDisable() {
  return -1;
}

extern "C" int32_t NvTegraSysGetFuseVP9DecDisable() {
  return -1;
}

extern "C" int32_t NvTegraSysGetFuseDLADisable() {
  return -1;
}

extern "C" int32_t NvTegraSysGetFuseOPT_info() {
  return -1;
}

extern "C" NvError NvTegraSysDeInit() {
  return NvSuccess;
}

extern "C" int32_t NvHvCheckOsNative() {
  return 1;
}

extern "C" int32_t NvHvGetOsVmId() {
  return -1;
}

extern "C" int32_t NvHvGetDisplayVmId() {
  return -1;
}

extern "C" int32_t NvHvGetSysinfoAddr() {
  return -1;
}

extern "C" void NvRmGpuDebugDumpObjectTree() {}
