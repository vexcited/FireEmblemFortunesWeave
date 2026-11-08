#include <stdint.h>

// Every NvRmGpu object starts with the table of its backend operations, so
// the API dispatches through the slot of each call.
struct NvRmGpuObject {
  const uintptr_t* ops;
};

// Calls without attributes use the read only defaults of the driver.
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuChannelSetWatchdogDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuTSGSubcontextCreateDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuChannelSetBoostDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuChannelSetTimeoutDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuRegOpsSessionExecWithAttrDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuRegOpsSessionComptagsMapDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuRegOpsSessionComptagsUnmapDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuProfilerV2VabConfigureDefaultAttributes[];
[[gnu::visibility("hidden")]] extern const uint8_t
  g_NvRmGpuProfilerV2VabFlushDefaultAttributes[];

namespace {

template <typename... Args>
[[gnu::always_inline]] inline uint64_t Dispatch(NvRmGpuObject* object,
  int offset, Args... args) {
  using Operation = uint64_t (*)(NvRmGpuObject*, Args...);
  return reinterpret_cast<Operation>(object->ops[offset / 8])(object,
    args...);
}

}

extern "C" uint64_t NvRmGpuDeviceGetInfo(NvRmGpuObject* object) {
  return Dispatch(object, 0x28);
}

extern "C" uint64_t NvRmGpuDeviceSetDeterministicChannelOptions(
  NvRmGpuObject* object, uintptr_t argument1, uintptr_t argument2,
  uintptr_t argument3) {
  return Dispatch(object, 0x1b0, argument1, argument2, argument3);
}

extern "C" uint64_t NvRmGpuDeviceGetBufferInfo(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  return Dispatch(object, 0x60, argument1, argument2);
}

extern "C" uint64_t NvRmGpuDeviceGetMemoryState(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x68, argument1);
}

extern "C" uint64_t NvRmGpuChannelControl(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0xb0, argument1);
}

extern "C" uint64_t NvRmGpuChannelSetPreemptionModes(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x50, argument1);
}

extern "C" uint64_t NvRmGpuTaskSchedulingGroupControl(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x28, argument1);
}

extern "C" uint64_t NvRmGpuTaskSchedulingGroupSetL2MaxWaysEvictLast(
  NvRmGpuObject* object, uintptr_t argument1) {
  return Dispatch(object, 0x80, argument1);
}

extern "C" uint64_t NvRmGpuDeviceSchedulingDomainRemove(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x100, argument1);
}

extern "C" uint64_t NvRmGpuDeviceZbcGetTableSize(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x78, argument1);
}

extern "C" uint64_t NvRmGpuDeviceZbcGetColorTableEntry(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3) {
  return Dispatch(object, 0x80, argument1, argument2, argument3);
}

extern "C" uint64_t NvRmGpuDeviceZbcGetDepthTableEntry(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3) {
  return Dispatch(object, 0x90, argument1, argument2, argument3);
}

extern "C" uint64_t NvRmGpuDeviceZbcGetStencilTableEntry(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3) {
  return Dispatch(object, 0xa0, argument1, argument2, argument3);
}

extern "C" uint64_t NvRmGpuDeviceZbcAddColor(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  return Dispatch(object, 0x88, argument1, argument2);
}

extern "C" uint64_t NvRmGpuDeviceZbcAddDepth(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  return Dispatch(object, 0x98, argument1, argument2);
}

extern "C" uint64_t NvRmGpuDeviceZbcAddStencil(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  return Dispatch(object, 0xa8, argument1, argument2);
}

extern "C" uint64_t NvRmGpuDeviceSetMmuDebugMode(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x118, argument1);
}

extern "C" uint64_t NvRmGpuDeviceSetSmDebugMode(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3) {
  return Dispatch(object, 0x120, argument1, argument2, argument3);
}

extern "C" uint64_t NvRmGpuDeviceGetTpcExceptionEnMask(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x128, argument1);
}

extern "C" uint64_t NvRmGpuDeviceTriggerSuspend(NvRmGpuObject* object) {
  return Dispatch(object, 0x130);
}

extern "C" uint64_t NvRmGpuDeviceWaitForPause(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x138, argument1);
}

extern "C" uint64_t NvRmGpuDeviceResumeFromPause(NvRmGpuObject* object) {
  return Dispatch(object, 0x140);
}

extern "C" uint64_t NvRmGpuDeviceClearSmErrors(NvRmGpuObject* object) {
  return Dispatch(object, 0x148);
}

extern "C" uint64_t NvRmGpuDeviceZbcGetActiveSlotMask(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0xb0, argument1);
}

extern "C" uint64_t NvRmGpuCtxSwTraceSetMode(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x28, argument1);
}

extern "C" uint64_t NvRmGpuCtxSwTraceGetInfo(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x30, argument1);
}

extern "C" uint64_t NvRmGpuCtxSwTraceFlush(NvRmGpuObject* object) {
  return Dispatch(object, 0x38);
}

extern "C" uint64_t NvRmGpuCtxSwTraceWait(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x40, argument1);
}

extern "C" uint64_t NvRmGpuCtxSwTraceSetFilter(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  return Dispatch(object, 0x50, argument1, argument2);
}

extern "C" uint64_t NvRmGpuAddressSpaceFlushDeferredMappings(
  NvRmGpuObject* object) {
  return Dispatch(object, 0x48);
}

extern "C" uint64_t NvRmGpuDeviceWaitSemaphore(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3,
  uintptr_t argument4) {
  return Dispatch(object, 0x70, argument1, argument2, argument3, argument4);
}

extern "C" uint64_t NvRmGpuChannelZcullBind(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  return Dispatch(object, 0x38, argument1, argument2);
}

extern "C" uint64_t NvRmGpuChannelReschedule(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x48, argument1);
}

extern "C" uint64_t NvRmGpuChannelSetPriority(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x60, argument1);
}

extern "C" uint64_t NvRmGpuChannelSetInterleave(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x68, argument1);
}

extern "C" uint64_t NvRmGpuChannelSetTimeslice(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x78, argument1);
}

extern "C" uint64_t NvRmGpuChannelCycleStatsInstallBuffer(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x90, argument1);
}

extern "C" uint64_t NvRmGpuChannelCycleStatsDetachSnapshot(
  NvRmGpuObject* object, uintptr_t argument1) {
  return Dispatch(object, 0xa0, argument1);
}

extern "C" uint64_t NvRmGpuChannelCycleStatsFlushSnapshot(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0xa8, argument1);
}

extern "C" uint64_t NvRmGpuChannelEventIdControl(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3) {
  return Dispatch(object, 0xb8, argument1, argument2, argument3);
}

extern "C" uint64_t NvRmGpuRegOpsSessionSmEventsControl(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x58, argument1);
}

extern "C" uint64_t NvRmGpuRegOpsSessionSetSmExceptionMask(
  NvRmGpuObject* object, uintptr_t argument1) {
  return Dispatch(object, 0x60, argument1);
}

extern "C" uint64_t NvRmGpuRegOpsSessionClearSingleSmErrorState(
  NvRmGpuObject* object, uintptr_t argument1) {
  return Dispatch(object, 0x70, argument1);
}

extern "C" uint64_t NvRmGpuRegOpsSessionSuspendResumeContexts(
  NvRmGpuObject* object, uintptr_t argument1, uintptr_t argument2,
  uintptr_t argument3) {
  return Dispatch(object, 0x78, argument1, argument2, argument3);
}

extern "C" uint64_t NvRmGpuRegOpsSessionSuspendResumeSingleSM(
  NvRmGpuObject* object, uintptr_t argument1, uintptr_t argument2,
  uintptr_t argument3, uintptr_t argument4) {
  return Dispatch(object, 0x80, argument1, argument2, argument3, argument4);
}

extern "C" uint64_t NvRmGpuRegOpsSessionSetPowergateMode(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x88, argument1);
}

extern "C" uint64_t NvRmGpuRegOpsTsgSetTimeslice(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x110, argument1);
}

extern "C" uint64_t NvRmGpuRegOpsSessionSetSmpcContextSwitchMode(
  NvRmGpuObject* object, uintptr_t argument1) {
  return Dispatch(object, 0x98, argument1);
}

extern "C" uint64_t NvRmGpuRegOpsSessionSetHwpmContextSwitchMode(
  NvRmGpuObject* object, uintptr_t argument1) {
  return Dispatch(object, 0xa0, argument1);
}

extern "C" uint64_t NvRmGpuRegOpsSessionSetMmuDebugMode(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x90, argument1);
}

extern "C" uint64_t NvRmGpuRegOpsSessionSetPcSamplingMode(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0xa8, argument1);
}

extern "C" uint64_t NvRmGpuRegOpsSessionSetErrbarDebugMode(
  NvRmGpuObject* object, uintptr_t argument1) {
  return Dispatch(object, 0xb0, argument1);
}

extern "C" uint64_t NvRmGpuRegOpsSessionSetTimeoutMode(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0xc0, argument1);
}

extern "C" uint64_t NvRmGpuRegOpsSessionPerfbufMap(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3) {
  return Dispatch(object, 0xc8, argument1, argument2, argument3);
}

extern "C" uint64_t NvRmGpuRegOpsSessionPerfbufUnmap(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0xd0, argument1);
}

extern "C" uint64_t NvRmGpuRegOpsSessionReadFB(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3,
  uintptr_t argument4, uintptr_t argument5) {
  return Dispatch(object, 0xd8, argument1, argument2, argument3, argument4,
    argument5);
}

extern "C" uint64_t NvRmGpuRegOpsSessionWriteFB(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3,
  uintptr_t argument4, uintptr_t argument5) {
  return Dispatch(object, 0xe0, argument1, argument2, argument3, argument4,
    argument5);
}

extern "C" uint64_t NvRmGpuRegOpsSessionGetGrContext(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  return Dispatch(object, 0xf0, argument1, argument2);
}

extern "C" uint64_t NvRmGpuProfilerCreate(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x28, argument1);
}

extern "C" uint64_t NvRmGpuProfilerReserveHwpm(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x28, argument1);
}

extern "C" uint64_t NvRmGpuProfilerV2GetInfo(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x28, argument1);
}

extern "C" uint64_t NvRmGpuProfilerV2ReservePmResource(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  return Dispatch(object, 0x30, argument1, argument2);
}

extern "C" uint64_t NvRmGpuProfilerV2ReleasePmResource(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x38, argument1);
}

extern "C" uint64_t NvRmGpuProfilerV2BindPmResources(NvRmGpuObject* object) {
  return Dispatch(object, 0x40);
}

extern "C" uint64_t NvRmGpuProfilerV2UnbindPmResources(NvRmGpuObject* object) {
  return Dispatch(object, 0x48);
}

extern "C" uint64_t NvRmGpuProfilerV2PmaStreamFree(NvRmGpuObject* object) {
  return Dispatch(object, 0x68);
}

extern "C" uint64_t NvRmGpuProfilerV2GetPmaStreamInfoEx(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x28, argument1);
}

extern "C" uint64_t NvRmGpuProfilerV2VabRelease(NvRmGpuObject* object) {
  return Dispatch(object, 0x88);
}

extern "C" uint64_t NvRmGpuTaskSchedulingGroupEventIdControl(
  NvRmGpuObject* object, uintptr_t argument1, uintptr_t argument2,
  uintptr_t argument3) {
  return Dispatch(object, 0x30, argument1, argument2, argument3);
}

extern "C" uint64_t NvRmGpuTaskSchedulingGroupSetInterleave(
  NvRmGpuObject* object, uintptr_t argument1) {
  return Dispatch(object, 0x38, argument1);
}

extern "C" uint64_t NvRmGpuTaskSchedulingGroupSetTimeslice(
  NvRmGpuObject* object, uintptr_t argument1) {
  return Dispatch(object, 0x48, argument1);
}

extern "C" uint64_t NvRmGpuTaskSchedulingGroupSetL2SectorPromotionPolicy(
  NvRmGpuObject* object, uintptr_t argument1) {
  return Dispatch(object, 0x90, argument1);
}

extern "C" uint64_t NvRmGpuClockSet(NvRmGpuObject* object, uintptr_t argument1,
  uintptr_t argument2, uintptr_t argument3) {
  return Dispatch(object, 0x160, argument1, argument2, argument3);
}

extern "C" uint64_t NvRmGpuClockWaitAsyncReq(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3) {
  return Dispatch(object, 0x168, argument1, argument2, argument3);
}

extern "C" uint64_t NvRmGpuClockCloseAsyncReq(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x170, argument1);
}

extern "C" uint64_t NvRmGpuClockGet(NvRmGpuObject* object, uintptr_t argument1,
  uintptr_t argument2) {
  return Dispatch(object, 0x178, argument1, argument2);
}

extern "C" uint64_t NvRmGpuDeviceThermalAlertSetLimit(NvRmGpuObject* object,
  uintptr_t argument1) {
  return Dispatch(object, 0x1a0, argument1);
}

extern "C" uint64_t NvRmGpuDeviceEventSessionOpen(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  return Dispatch(object, 0xc8, argument1, argument2);
}

extern "C" uint64_t NvRmGpuDeviceCacheControl(NvRmGpuObject* object,
  uintptr_t argument1) {
  if (argument1 == 0) {
    return 4;
  }

  return Dispatch(object, 0x110, argument1);
}

extern "C" uint64_t NvRmGpuChannelSetWatchdog(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  if (argument2 == 0) {
    argument2 = reinterpret_cast<uintptr_t>(
      g_NvRmGpuChannelSetWatchdogDefaultAttributes);
  }

  return Dispatch(object, 0x88, argument1, argument2);
}

extern "C" uint64_t NvRmGpuTaskSchedulingGroupReadSmErrorState(
  NvRmGpuObject* object, uintptr_t argument1, uintptr_t argument2) {
  if (argument1 == 0) {
    return 11;
  }

  return Dispatch(object, 0x50, argument1, argument2);
}

extern "C" uint64_t NvRmGpuTSGSubcontextCreate(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3) {
  if (argument2 == 0) {
    argument2 = reinterpret_cast<uintptr_t>(
      g_NvRmGpuTSGSubcontextCreateDefaultAttributes);
  }

  return Dispatch(object, 0x58, argument1, argument2, argument3);
}

extern "C" uint64_t NvRmGpuChannelGetErrorInfo(NvRmGpuObject* object,
  uintptr_t argument1) {
  if (argument1 == 0) {
    return 4;
  }

  return Dispatch(object, 0xc0, argument1);
}

extern "C" uint64_t NvRmGpuCtxSwTraceGetFilter(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  if (argument2 == 0) {
    return 4;
  }

  return Dispatch(object, 0x58, argument1, argument2);
}

extern "C" uint64_t NvRmGpuAddressSpaceAllocationRemap(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3) {
  if (argument3 == 0) {
    return 4;
  }

  return Dispatch(object, 0x38, argument1, argument2, argument3);
}

extern "C" uint64_t NvRmGpuMappingModify(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3) {
  if (argument3 == 0) {
    return 4;
  }

  return Dispatch(object, 0x30, argument1, argument2, argument3);
}

extern "C" uint64_t NvRmGpuChannelSetBoost(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  if (argument2 == 0) {
    argument2 = reinterpret_cast<uintptr_t>(
      g_NvRmGpuChannelSetBoostDefaultAttributes);
  }

  return Dispatch(object, 0x58, argument1, argument2);
}

extern "C" uint64_t NvRmGpuChannelSetTimeout(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  if (argument2 == 0) {
    argument2 = reinterpret_cast<uintptr_t>(
      g_NvRmGpuChannelSetTimeoutDefaultAttributes);
  }

  return Dispatch(object, 0x80, argument1, argument2);
}

extern "C" uint64_t NvRmGpuChannelGetErrorNotification(NvRmGpuObject* object,
  uintptr_t argument1) {
  if (argument1 == 0) {
    return 4;
  }

  return Dispatch(object, 0xc8, argument1);
}

extern "C" uint64_t NvRmGpuRegOpsSessionExecWithAttr(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3) {
  if (argument3 == 0) {
    argument3 = reinterpret_cast<uintptr_t>(
      g_NvRmGpuRegOpsSessionExecWithAttrDefaultAttributes);
  }

  return Dispatch(object, 0x30, argument1, argument2, argument3);
}

extern "C" uint64_t NvRmGpuRegOpsSessionReadSingleSmErrorState(
  NvRmGpuObject* object, uintptr_t argument1, uintptr_t argument2) {
  if (argument1 == 0) {
    return 11;
  }

  return Dispatch(object, 0x68, argument1, argument2);
}

extern "C" uint64_t NvRmGpuRegOpsSessionGetTimeoutMode(NvRmGpuObject* object,
  uintptr_t argument1) {
  if (argument1 == 0) {
    return 4;
  }

  return Dispatch(object, 0xb8, argument1);
}

extern "C" uint64_t NvRmGpuRegOpsSessionGetGrContextSize(NvRmGpuObject* object,
  uintptr_t argument1) {
  if (argument1 == 0) {
    return 4;
  }

  return Dispatch(object, 0xe8, argument1);
}

extern "C" uint64_t NvRmGpuRegOpsSessionComptagsMap(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3,
  uintptr_t argument4) {
  if (argument4 == 0) {
    argument4 = reinterpret_cast<uintptr_t>(
      g_NvRmGpuRegOpsSessionComptagsMapDefaultAttributes);
  }

  return Dispatch(object, 0xf8, argument1, argument2, argument3, argument4);
}

extern "C" uint64_t NvRmGpuRegOpsSessionComptagsUnmap(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3) {
  if (argument3 == 0) {
    argument3 = reinterpret_cast<uintptr_t>(
      g_NvRmGpuRegOpsSessionComptagsUnmapDefaultAttributes);
  }

  return Dispatch(object, 0x100, argument1, argument2, argument3);
}

extern "C" uint64_t NvRmGpuProfilerV2VabConfigure(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3,
  uintptr_t argument4) {
  if (argument4 == 0) {
    argument4 = reinterpret_cast<uintptr_t>(
      g_NvRmGpuProfilerV2VabConfigureDefaultAttributes);
  }

  return Dispatch(object, 0x78, argument1, argument2, argument3, argument4);
}

extern "C" uint64_t NvRmGpuProfilerV2VabFlush(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3) {
  if (argument3 == 0) {
    argument3 = reinterpret_cast<uintptr_t>(
      g_NvRmGpuProfilerV2VabFlushDefaultAttributes);
  }

  return Dispatch(object, 0x80, argument1, argument2, argument3);
}

extern "C" uint64_t NvRmGpuClockGetPoints(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2, uintptr_t argument3) {
  if (argument3 == 0) {
    return 4;
  }

  return Dispatch(object, 0x158, argument1, argument2, argument3);
}

extern "C" uint64_t NvRmGpuDeviceGetVoltage(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  if (argument2 == 0) {
    return 4;
  }

  return Dispatch(object, 0x180, argument1, argument2);
}

extern "C" uint64_t NvRmGpuDeviceGetCurrent(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  if (argument2 == 0) {
    return 4;
  }

  return Dispatch(object, 0x188, argument1, argument2);
}

extern "C" uint64_t NvRmGpuDeviceGetPower(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  if (argument2 == 0) {
    return 4;
  }

  return Dispatch(object, 0x190, argument1, argument2);
}

extern "C" uint64_t NvRmGpuDeviceGetTemperature(NvRmGpuObject* object,
  uintptr_t argument1, uintptr_t argument2) {
  if (argument2 == 0) {
    return 4;
  }

  return Dispatch(object, 0x198, argument1, argument2);
}
