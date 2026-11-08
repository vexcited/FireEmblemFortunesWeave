#include <stdint.h>

using CUresult = uint32_t;
using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr CUresult kInvalidValue = 1;
constexpr CUresult kInvalidContext = 201;
constexpr CUresult kInvalidHandle = 400;
constexpr CUresult kNotSupported = 800;
constexpr CUresult kNotPermitted = 801;
constexpr CUresult kStreamCaptureUnsupported = 900;

[[gnu::visibility("hidden")]] void CudaLog(const char* tag, U32 level,
  const char* format, ...);
[[gnu::visibility("hidden")]] CUresult CudaGetCurrentContext(U64* pContext);
[[gnu::visibility("hidden")]] void CudaLock(U64 mutex, U32, U64, U32);
[[gnu::visibility("hidden")]] void CudaUnlock(U64 mutex);
[[gnu::visibility("hidden")]] void CudaLockShared(U64 mutex, U32, U64);
[[gnu::visibility("hidden")]] void CudaUnlockShared(U64 mutex);
[[gnu::visibility("hidden")]] void CudaLockRead(U64 mutex, U32, U64);
[[gnu::visibility("hidden")]] void CudaUnlockRead(U64 mutex);
[[gnu::visibility("hidden")]] CUresult CudaGetThreadState(U64* pState);
[[gnu::visibility("hidden")]] CUresult CudaGetThreadContext(U64 state,
  U64* pContext, U32 apiVersion);
[[gnu::visibility("hidden")]] CUresult CudaReleaseThreadState(U64 state);

[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_30a40(U64, U64, U64,
  U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_98190(U64, U32);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_98340(U32*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_b4d40(U64, U64, U64,
  U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_b58d0(U64, U64, U64,
  U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_bae90(U64, U64,
  U64*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_bbeb0(U64, U64*,
  U32*, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_de220(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_deeb0(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_e8dd0(U32**, U32*,
  U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_efea0(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_f0380(U64, U64, U64,
  U64, U64, U64*);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_f0f50(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_f1180(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_f2a00(U64, U64, U64,
  U64*);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_f2fe0(U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_102040(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_102fe0(U64, U32,
  U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_1030f0(U64, U32,
  U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_105c00(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_1077c0(U64, U64*,
  U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_10ac30(U64, U32*,
  U32, U64, U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_10b270(U64, U64,
  U32*, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_112680(U64, U64, U32,
  U64*, U32**, U32, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_117c40(U64, U32, U32,
  U32);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_118a60(U64, U64, U32,
  U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_118bc0(U64, U64, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_1275c0(U64);

namespace {

[[gnu::always_inline]] inline U64 ContextLock(U64 context) {
  return context + 0x18;
}

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

// The event lock sits at 0x20, the context channel at 0x58 and its stream
// at 0x60.
[[gnu::always_inline]] inline CUresult RecordOn(U64 target, U64 channel,
  U64 stream, U64 event) {
  if (At<U32>(channel, 0xd0) != 0) {
    CudaDriverRoutine_117c40(At<U64>(channel, 8), 2, 1, 0);
    return kStreamCaptureUnsupported;
  }

  const U32 token = CudaDriverRoutine_118a60(target, stream, 4, 0);
  CudaLockShared(event + 0x20, 0, 0);
  const CUresult result = CudaDriverRoutine_b58d0(target, event, stream,
    0x100, 0x100);
  if (result != 0) {
    return result;
  }

  CudaUnlockShared(event + 0x20);
  CudaDriverRoutine_118bc0(target, stream, token);
  return 0;
}

}

// Green contexts record on their primary context from 0xa8.
CUresult cuCtxRecordEvent_impl(U64 context, U64 event) {
  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_deeb0(context, 0);
  if (result != 0) {
    return result;
  }

  U64 target = context;
  if (At<U32>(context, 0) == 1) {
    target = At<U64>(context, 0xa8);
  }

  const U64 channel = At<U64>(context, 0x58);
  const U64 stream = At<U64>(context, 0x60);
  result = CudaDriverRoutine_b4d40(event, target, 0, 0);
  if (result != 0) {
    return result;
  }

  return RecordOn(target, channel, stream, event);
}

CUresult cuGreenCtxRecordEvent_impl(U64 green, U64 event) {
  if (green == 0 || At<U32>(green, 0) == 0) {
    return kInvalidContext;
  }

  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_de220(green, 0);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_b4d40(event, At<U64>(green, 0xa8), 0, 0);
  if (result != 0) {
    return result;
  }

  const U64 channel = At<U64>(green, 0x58);
  if (At<U32>(channel, 0xd0) != 0) {
    CudaDriverRoutine_117c40(At<U64>(channel, 8), 2, 1, 0);
    return kStreamCaptureUnsupported;
  }

  const U32 token = CudaDriverRoutine_118a60(green, At<U64>(green, 0x60), 4,
    0);
  CudaLockShared(event + 0x20, 0, 0);
  result = CudaDriverRoutine_b58d0(green, event, At<U64>(green, 0x60), 0x100,
    0x100);
  CudaUnlockShared(event + 0x20);
  CudaDriverRoutine_118bc0(green, At<U64>(green, 0x60), token);
  return result;
}

namespace {

[[gnu::always_inline]] inline CUresult EnterPoolCall() {
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, nullptr, 0);
  if (result != 0) {
    return result;
  }

  return CudaReleaseThreadState(state);
}

// Only pools from the creation API have a record at 0x60, locked at 0x58.
[[gnu::always_inline]] inline bool IsCreatedPool(U64 pool) {
  const U64 record = At<U64>(pool, 0x60);
  return record != 0 && CudaDriverRoutine_f2fe0(record) != 0;
}

}

CUresult cuMemPoolSetAttribute_impl(U64 pool, U32 attribute, U64 value) {
  const CUresult result = EnterPoolCall();
  if (result != 0) {
    return result;
  }

  if (pool == 0) {
    CudaLog("CUDA", 0, "Parameter pool cannot be NULL");
    return kInvalidValue;
  }

  if (!IsCreatedPool(pool)) {
    CudaLog("CUDA", 0, "Set Attribute operation is only supported with "
      "pools created with the memory pool creation API");
    return kInvalidValue;
  }

  CudaLockShared(At<U64>(At<U64>(pool, 0x60), 0x58), 0, 0);
  const CUresult set = CudaDriverRoutine_102fe0(At<U64>(At<U64>(pool, 0x60),
    0), attribute, value);
  CudaUnlockShared(At<U64>(At<U64>(pool, 0x60), 0x58));
  return set;
}

CUresult cuMemPoolGetAttribute_impl(U64 pool, U32 attribute, U64 pValue) {
  const CUresult result = EnterPoolCall();
  if (result != 0) {
    return result;
  }

  if (pool == 0 || pValue == 0) {
    if (pool == 0) {
      CudaLog("CUDA", 0, "Parameter pool cannot be NULL");
    }

    if (pValue == 0) {
      CudaLog("CUDA", 0, "Parameter value cannot be NULL");
    }

    return kInvalidValue;
  }

  if (!IsCreatedPool(pool)) {
    CudaLog("CUDA", 0, "Get Attribute operation is only supported with "
      "pools created with the memory pool creation API");
    return kInvalidValue;
  }

  CudaLockShared(At<U64>(At<U64>(pool, 0x60), 0x58), 0, 0);
  const CUresult got = CudaDriverRoutine_1030f0(At<U64>(At<U64>(pool, 0x60),
    0), attribute, pValue);
  CudaUnlockShared(At<U64>(At<U64>(pool, 0x60), 0x58));
  return got;
}

// Trimming works in whole allocation granules.
CUresult cuMemPoolTrimTo_impl(U64 pool, U64 minimum) {
  const CUresult result = EnterPoolCall();
  if (result != 0) {
    return result;
  }

  if (pool == 0) {
    CudaLog("CUDA", 0, "Parameter pool cannot be NULL");
    return kInvalidValue;
  }

  const U64 record = At<U64>(pool, 0x60);
  if (record == 0 || CudaDriverRoutine_f2fe0(record) == 0) {
    CudaLog("CUDA", 0, "TrimTo operation is only supported with pools "
      "created with the memory pool creation API");
    return kInvalidValue;
  }

  CudaLockShared(At<U64>(record, 0x58), 0, 0);
  const U64 granule = At<U32>(CudaDriverRoutine_102040(
    CudaDriverRoutine_f0f50(record)), 8);
  CudaDriverRoutine_f1180(record,
    (minimum + static_cast<U32>(granule - 1)) / granule);
  CudaUnlockShared(At<U64>(record, 0x58));
  return 0;
}

CUresult cuMemPoolCreate_impl(U64* pPool, U64 props) {
  CUresult result = EnterPoolCall();
  if (result != 0) {
    return result;
  }

  if (pPool == nullptr || props == 0) {
    if (pPool == nullptr) {
      CudaLog("CUDA", 0, "pool cannot be NULL");
    }

    if (props == 0) {
      CudaLog("CUDA", 0, "poolProps cannot be NULL");
    }

    return kInvalidValue;
  }

  result = CudaDriverRoutine_efea0(props);
  if (result != 0) {
    return result;
  }

  const U64 device = At<U64>(props, 0x18);
  U64 location = 0;
  result = CudaDriverRoutine_f2a00(props + 8, device, 0, &location);
  if (result != 0) {
    return result;
  }

  U64 record = 0;
  result = CudaDriverRoutine_f0380(props, device, location, 0, 0, &record);
  if (result == 0) {
    *pPool = record + 0xb0;
  }

  return result;
}

// Modules loaded from a library at 0x1d8 belong to it.
CUresult cuModuleUnload_impl(U64 module) {
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

  result = CudaReleaseThreadState(state);
  if (result != 0) {
    return result;
  }

  if (At<U64>(module, 0x1d8) != 0) {
    CudaLog("CUDA", 0, "Not permitted to unload a module from a "
      "CUlibrary\n");
    return kNotSupported;
  }

  CudaDriverRoutine_98190(context, 0);
  const U64 image = (At<U16>(module, 0x24) & 0x40) != 0 ?
    At<U64>(module, 0x170) : 0;
  CudaLock(ContextLock(context), 0, 0, 0);
  CudaDriverRoutine_105c00(module);
  CudaUnlock(ContextLock(context));
  if (image != 0) {
    CudaDriverRoutine_1275c0(image);
  }

  return 0;
}

CUresult cuModuleGetFunction_impl(U64* pFunction, U64 module,
  const char* name) {
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

  if (pFunction == nullptr) {
    CudaLog("CUDA", 0, "hfunc cannot be NULL\n");
  }
  else if (name == nullptr) {
    CudaLog("CUDA", 0, "name cannot be NULL\n");
  }
  else if (*name == '\0') {
    CudaLog("CUDA", 0, "name cannot be empty\n");
  }
  else {
    *pFunction = 0;
    CudaLock(ContextLock(context), 0, 0, 0);
    result = CudaDriverRoutine_bae90(module, reinterpret_cast<U64>(name),
      pFunction);
    CudaUnlock(ContextLock(context));
    return result;
  }

  return kInvalidValue;
}

namespace {

// Green contexts are tagged 1 and report their primary context.
[[gnu::always_inline]] inline CUresult GetStreamContexts(U64 stream,
  U64* pContext, U32** pGreen, U32 apiVersion) {
  if (pContext == nullptr && pGreen == nullptr) {
    return kInvalidValue;
  }

  U32* context = nullptr;
  U64 resolved = 0;
  const CUresult result = CudaDriverRoutine_112680(0, stream, apiVersion,
    &resolved, &context, 1, 0);
  if (result != 0) {
    return result;
  }

  U32* green = context;
  U64 primary;
  if (*context == 1) {
    primary = CudaDriverRoutine_98340(context);
  }
  else {
    primary = reinterpret_cast<U64>(context);
    green = nullptr;
  }

  if (pContext != nullptr) {
    *pContext = primary;
  }

  if (pGreen != nullptr) {
    *pGreen = green;
  }

  return 0;
}

}

CUresult cuStreamGetCtx_v2_impl(U64 stream, U64* pContext, U32** pGreen) {
  return GetStreamContexts(stream, pContext, pGreen, 2);
}

CUresult cuStreamGetCtx_v2_ptsz_impl(U64 stream, U64* pContext,
  U32** pGreen) {
  return GetStreamContexts(stream, pContext, pGreen, 3);
}

// Kernel nodes keep their context at 0x4b0 and a device update flag at
// 0x3ad.
CUresult cuGraphKernelNodeCopyAttributes_impl(U64 destination, U64 source) {
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, nullptr, 0);
  if (result != 0) {
    return result;
  }

  if (source == 0) {
    CudaLog("CUDA", 0, "Source node cannot be NULL");
    return kInvalidValue;
  }

  if (destination == 0) {
    CudaLog("CUDA", 0, "Destination node cannot be NULL");
    return kInvalidValue;
  }

  if (At<U32>(source, 4) != 0) {
    CudaLog("CUDA", 0, "Source node is not a kernel node");
    return kInvalidValue;
  }

  if (At<U32>(destination, 4) != 0) {
    CudaLog("CUDA", 0, "Destination node is not a kernel node");
    return kInvalidValue;
  }

  if (At<U64>(destination, 0x4b0) != At<U64>(source, 0x4b0)) {
    CudaLog("CUDA", 0, "Nodes must be in the same context to copy the "
      "attributes");
    return kInvalidValue;
  }

  if (At<U8>(destination, 0x3ad) != 0 || At<U8>(source, 0x3ad) != 0) {
    CudaLog("CUDA", 0, "Attributes cannot be copied to/from a "
      "device-updatable node");
    return kNotPermitted;
  }

  return CudaDriverRoutine_30a40(0, state, destination, source);
}

namespace {

// Functions are tagged 1 and kernels 2, a kernel resolves to its function
// in the current context.
[[gnu::always_inline]] inline CUresult ResolveFunction(U32** pFunction,
  U32* function, U64 context) {
  if (function == nullptr) {
    return kInvalidHandle;
  }

  if (*function == 1) {
    U64 state = 0;
    CUresult result = CudaGetThreadState(&state);
    if (result != 0) {
      return result;
    }

    result = CudaDriverRoutine_bbeb0(state, nullptr, function, 0);
    if (result != 0) {
      return result;
    }

    *pFunction = function;
    return 0;
  }

  if (*function == 2) {
    return CudaDriverRoutine_e8dd0(pFunction, function, context);
  }

  return kInvalidHandle;
}

}

CUresult cuOccupancyAvailableDynamicSMemPerBlock_impl(U64 pSize,
  U32* function, int32_t blockCount, U32 blockSize) {
  U32* resolved = function;
  U64 context = 0;
  CUresult result = CudaGetCurrentContext(&context);
  if (result != 0) {
    return result;
  }

  if (blockCount < 1) {
    return kInvalidValue;
  }

  result = ResolveFunction(&resolved, function, context);
  if (result != 0) {
    return result;
  }

  CudaLock(ContextLock(context), 0, 0, 0);
  result = CudaDriverRoutine_10b270(context, pSize, resolved, blockCount,
    blockSize);
  CudaUnlock(ContextLock(context));
  return result;
}

CUresult cuOccupancyMaxActiveBlocksPerMultiprocessorWithFlags_impl(
  U64 pBlocks, U32* function, U32 blockSize, U64 sharedSize, U32 flags) {
  U32* resolved = function;
  U64 context = 0;
  CUresult result = CudaGetCurrentContext(&context);
  if (result != 0) {
    return result;
  }

  if (pBlocks == 0 || flags > 1) {
    return kInvalidValue;
  }

  result = ResolveFunction(&resolved, function, context);
  if (result != 0) {
    return result;
  }

  CudaLockRead(ContextLock(context), 0, 0);
  result = CudaDriverRoutine_10ac30(context, resolved, blockSize, pBlocks,
    sharedSize, flags);
  CudaUnlockRead(ContextLock(context));
  return result;
}
