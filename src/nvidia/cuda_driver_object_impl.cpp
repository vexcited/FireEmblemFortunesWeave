#include <stdint.h>

using CUresult = uint32_t;
using U8 = uint8_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr CUresult kInvalidValue = 1;
constexpr CUresult kInvalidDevice = 101;
constexpr CUresult kInvalidHandle = 400;
constexpr CUresult kNotPermitted = 801;
constexpr CUresult kUnknown = 999;

struct CudaDriverGlobals {
  U8 reserved0[0x118];
  U64 devices[64];
  int32_t deviceCount;
};

[[gnu::visibility("hidden")]] extern CudaDriverGlobals g_CudaDriver;

[[gnu::visibility("hidden")]] void CudaLog(const char* tag, U32 level,
  const char* format, ...);
[[gnu::visibility("hidden")]] CUresult CudaGetCurrentContext(U64* pContext);
[[gnu::visibility("hidden")]] void CudaLock(U64 mutex, U32, U64, U32);
[[gnu::visibility("hidden")]] void CudaUnlock(U64 mutex);
[[gnu::visibility("hidden")]] CUresult CudaGetThreadState(U64* pState);
[[gnu::visibility("hidden")]] CUresult CudaGetThreadContext(U64 state,
  U64* pContext, U32 apiVersion);
[[gnu::visibility("hidden")]] CUresult CudaReleaseThreadState(U64 state);

[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_4f840(U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_77ce0(U32, U64, U8*, U64);
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_78230(U32, U64, U32, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_8c600(U64, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_8c750(U64, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_8c810(U64, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_8cad0(U64, U64, U64);
[[gnu::visibility("hidden")]] U64 CudaDriverRoutine_98340(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_99e80(U64, U64*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_9b3a0(U32, bool);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_9e250(U64, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_bace0(U64, U32, U32,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_bbeb0(U64, U64*, U64,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_bc020(U64, U64*, U64,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_c30d0(U64*, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d7b40(U64, U64, U64,
  U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_deeb0(U64, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_ea620(U64, U32);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_eec70(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_fe750(U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_fe960();
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_10be60(U64, U32,
  U32*, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_112680(U64, U64, U32,
  U64*, U64*, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_117500(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_11e860(U64, U64*,
  U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_11e8e0(U64, U64, U64,
  U64, U64, U64, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_11ee80(U64, U32, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_11eee0(U64, U32, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_11efe0(U64, U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_11f010(U64, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_11f030(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_30bf0(U64, U32, U64);

namespace {

[[gnu::always_inline]] inline bool IsDeviceOrdinal(int32_t device) {
  return device >= 0 && device < g_CudaDriver.deviceCount;
}

[[gnu::always_inline]] inline U64 ContextLock(U64 context) {
  return context + 0x18;
}

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

// The coredump layer reports its own error codes.
[[gnu::always_inline]] inline CUresult CoredumpResult(U32 error) {
  if (error == 0) {
    return 0;
  }

  if (error == 4) {
    return kInvalidValue;
  }

  return error == 46 ? kNotPermitted : kUnknown;
}

}

CUresult cuCoredumpGetAttributeGlobal_impl(U32 attribute, U64 value,
  U64 size) {
  if (attribute - 8 < UINT32_MAX - 6 || size == 0) {
    return kInvalidValue;
  }

  U8 scratch;
  const U32 error = CudaDriverRoutine_77ce0(attribute, value, &scratch,
    size);
  if (error == 0) {
    return 0;
  }

  return error == 4 ? kInvalidValue : kUnknown;
}

CUresult cuCoredumpSetAttributeGlobal_impl(U32 attribute, U64 value,
  U64 size) {
  if (attribute - 8 < UINT32_MAX - 6 || size == 0) {
    return kInvalidValue;
  }

  return CoredumpResult(CudaDriverRoutine_78230(attribute, value, 0, size));
}

// Generic allocation handles carry their kind in bits 54 to 58 of the
// word at 0xf0.
CUresult cuMemRelease_impl(U64 handle) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (CudaDriverRoutine_fe960() == 0) {
    return kNotPermitted;
  }

  if (handle == 0 ||
    (At<U64>(handle, 0xf0) & 0x7c0000000000000) != 0x3c0000000000000) {
    CudaLog("CUDA", 0, "Parameter handle is not a valid "
      "CUmemGenericAllocationHandle");
    return kInvalidValue;
  }

  return CudaDriverRoutine_fe750(handle);
}

namespace {

[[gnu::always_inline]] inline CUresult CopyStreamAttributes(U64 destination,
  U64 source, U32 apiVersion) {
  U64 destinationContext = 0;
  U64 sourceContext = 0;
  U64 sourceStream = 0;
  U64 destinationStream = 0;
  CUresult result = CudaDriverRoutine_112680(0, destination, apiVersion,
    &destinationStream, &destinationContext, 1, 0);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_112680(0, source, apiVersion, &sourceStream,
    &sourceContext, 1, 0);
  if (result != 0) {
    return result;
  }

  if (destinationContext != sourceContext) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_117500(destinationStream, sourceStream);
}

}

CUresult cuStreamCopyAttributes_impl(U64 destination, U64 source) {
  return CopyStreamAttributes(destination, source, 2);
}

CUresult cuStreamCopyAttributes_ptsz_impl(U64 destination, U64 source) {
  return CopyStreamAttributes(destination, source, 3);
}

namespace {

template <typename Check, typename Update>
[[gnu::always_inline]] inline CUresult UpdateTexRef(U64 texture, Check check,
  Update update) {
  U64 context = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_11e860(state, &context, texture, 0);
  if (result != 0) {
    return result;
  }

  if (!check()) {
    return kInvalidValue;
  }

  CudaLock(ContextLock(context), 0, 0, 0);
  update();
  CudaUnlock(ContextLock(context));
  return 0;
}

}

// Formats 3 and anything past 4 are not valid channel layouts here.
CUresult cuTexRefSetFormat_impl(U64 texture, U32 format, U32 channels) {
  return UpdateTexRef(texture, [&] {
    return channels <= 4 && channels != 3;
  }, [&] {
    CudaDriverRoutine_11eee0(texture, format, channels);
  });
}

CUresult cuTexRefSetAddressMode_impl(U64 texture, U32 dimension, U32 mode) {
  return UpdateTexRef(texture, [&] {
    return dimension <= 2;
  }, [&] {
    CudaDriverRoutine_11ee80(texture, dimension, mode);
  });
}

CUresult cuTexRefSetBorderColor_impl(U64 texture, U64 color) {
  return UpdateTexRef(texture, [&] {
    return color != 0;
  }, [&] {
    CudaDriverRoutine_11efe0(texture, color);
  });
}

CUresult cuTexRefSetFlags_impl(U64 texture, U32 flags) {
  return UpdateTexRef(texture, [&] {
    return flags <= 0x3f;
  }, [&] {
    CudaDriverRoutine_11f010(texture, flags);
  });
}

CUresult cuTexRefSetMipmapFilterMode_impl(U64 texture, U32 mode) {
  return UpdateTexRef(texture, [&] {
    return mode <= 1;
  }, [&] {
    CudaDriverRoutine_11f030(texture, mode);
  });
}

CUresult cuTexRefCreate_impl(U64 pTexture) {
  U64 context = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, &context, 0);
  if (result != 0) {
    return result;
  }

  if (pTexture == 0) {
    return kInvalidValue;
  }

  CudaLock(ContextLock(context), 0, 0, 0);
  result = CudaDriverRoutine_11e8e0(context, 0, 0, 0, 0, pTexture, 1);
  CudaUnlock(ContextLock(context));
  return result;
}

namespace {

template <typename Describe>
[[gnu::always_inline]] inline CUresult DescribeObject(U64 pDescription,
  Describe describe) {
  U64 context = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, &context, 2);
  if (result != 0) {
    return result;
  }

  if (pDescription == 0) {
    return kInvalidValue;
  }

  CudaLock(ContextLock(context), 0, 0, 0);
  result = describe(context);
  CudaUnlock(ContextLock(context));
  return result;
}

}

CUresult cuSurfObjectGetResourceDesc_impl(U64 pDescription, U64 surface) {
  return DescribeObject(pDescription, [&](U64 context) {
    return CudaDriverRoutine_8cad0(context, surface, pDescription);
  });
}

CUresult cuTexObjectGetResourceDesc_impl(U64 pDescription, U64 texture) {
  return DescribeObject(pDescription, [&](U64 context) {
    return CudaDriverRoutine_8c600(context, texture, pDescription);
  });
}

CUresult cuTexObjectGetTextureDesc_impl(U64 pDescription, U64 texture) {
  return DescribeObject(pDescription, [&](U64 context) {
    return CudaDriverRoutine_8c750(context, texture, pDescription);
  });
}

CUresult cuTexObjectGetResourceViewDesc_impl(U64 pDescription,
  U64 texture) {
  return DescribeObject(pDescription, [&](U64 context) {
    return CudaDriverRoutine_8c810(context, texture, pDescription);
  });
}

// The output is cleared whenever it can be written.
CUresult cuDeviceTotalMem_v2_impl(U64* pBytes, int32_t device) {
  CUresult result = CudaGetCurrentContext(nullptr);
  U64 bytes = 0;
  if (result != 0) {
    if (pBytes == nullptr) {
      return result;
    }
  }
  else {
    if (pBytes == nullptr) {
      return kInvalidValue;
    }

    result = kInvalidDevice;
    if (IsDeviceOrdinal(device)) {
      U64 total;
      result = CudaDriverRoutine_99e80(g_CudaDriver.devices[device], &total);
      bytes = result != 0 ? 0 : total;
    }
  }

  *pBytes = bytes;
  return result;
}

CUresult cuDeviceCanAccessPeer_impl(U32* pCanAccess, int32_t device,
  int32_t peer) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (pCanAccess == nullptr) {
    return kInvalidValue;
  }

  if (!IsDeviceOrdinal(device)) {
    CudaLog("CUDA", 0, "Parameter dev must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  if (!IsDeviceOrdinal(peer)) {
    CudaLog("CUDA", 0, "Parameter peerDev must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  *pCanAccess = CudaDriverRoutine_eec70(g_CudaDriver.devices[device],
    g_CudaDriver.devices[peer]);
  return 0;
}

// Multicast needs one capable device, the object dispatches through the
// table at 0x278.
CUresult cuMulticastAddDevice_impl(U64 object, int32_t device) {
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

  if (object == 0 || device < 0 || device > g_CudaDriver.deviceCount) {
    return kInvalidValue;
  }

  using AddDevice = CUresult (*)(U64, U64, U32);
  const U64 table = At<U64>(object, 0x278);
  return At<AddDevice>(table, 0x9c8)(object, g_CudaDriver.devices[device], 0);
}

CUresult cuCtxSetFlags_impl(U32 flags) {
  U64 context = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, &context, 8);
  if (result != 0) {
    return result;
  }

  // The primary context of the device ignores the host blocking flag.
  const U64 device = At<U64>(context, 0x40);
  const bool isPrimary = context == At<U64>(device, 0x41e0);
  if (isPrimary) {
    flags &= ~8u;
  }

  result = CudaDriverRoutine_9b3a0(flags, isPrimary);
  if (result != 0) {
    return result;
  }

  CudaLock(ContextLock(context), 0, 0, 0);
  result = CudaDriverRoutine_9e250(context, flags, 1);
  CudaUnlock(ContextLock(context));
  return result;
}

namespace {

[[gnu::always_inline]] inline CUresult SetFunctionConfig(U64 function,
  U32 which, U32 value, U32 limit, const char* message) {
  U64 context = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_bbeb0(state, &context, function, 0);
  if (result != 0) {
    return result;
  }

  if (value >= limit) {
    CudaLog("CUDA", 0, message, value);
    return kInvalidValue;
  }

  CudaLock(ContextLock(context), 0, 0, 0);
  result = CudaDriverRoutine_bace0(function, which, value, 1);
  CudaUnlock(ContextLock(context));
  return result;
}

}

CUresult cuFuncSetCacheConfig_impl(U64 function, U32 config) {
  return SetFunctionConfig(function, 0, config, 4,
    "Invalid CUfunc_cache value %d\n");
}

CUresult cuFuncSetSharedMemConfig_impl(U64 function, U32 config) {
  return SetFunctionConfig(function, 1, config, 3,
    "Invalid CUsharedconfig value %d\n");
}

// A function keeps its module at 0x20 and its load state at 0x3e8.
CUresult cuFuncGetModule_impl(U64* pModule, U64 function) {
  U64 context = 0;
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  if (pModule == nullptr) {
    CudaLog("CUDA", 0, "hmod cannot be NULL\n");
    return kInvalidValue;
  }

  if (function == 0) {
    CudaLog("CUDA", 0, "hfunc cannot be NULL\n");
    return kInvalidValue;
  }

  result = CudaDriverRoutine_bc020(state, &context, function, 0);
  if (result == 0) {
    *pModule = At<U64>(function, 0x20);
  }

  return result;
}

CUresult cuFuncIsLoaded_impl(U32* pState, U64 function) {
  U64 state = 0;
  if (pState == nullptr) {
    CudaLog("CUDA", 0, "state cannot be NULL\n");
    return kInvalidValue;
  }

  if (function == 0) {
    CudaLog("CUDA", 0, "function cannot be NULL\n");
    return kInvalidHandle;
  }

  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_bc020(state, nullptr, function, 0);
  if (result == 0) {
    *pState = At<U32>(function, 0x3e8) == 2;
  }

  return result;
}

CUresult cuParamSeti_impl(U64 function, U32 offset, U32 value) {
  U32 parameter = value;
  U64 context = 0;
  CUresult result = CudaGetCurrentContext(&context);
  if (result != 0) {
    return result;
  }

  if (function == 0) {
    return kInvalidHandle;
  }

  const U64 module = At<U64>(function, 0x20);
  if (module == 0 ||
    context != __atomic_fetch_or(&At<U64>(module, 0x18), 0,
    __ATOMIC_SEQ_CST)) {
    return kInvalidHandle;
  }

  CudaLock(ContextLock(context), 0, 0, 0);
  result = CudaDriverRoutine_10be60(function, offset, &parameter, 4);
  CudaUnlock(ContextLock(context));
  return result;
}

CUresult cuLibraryUnload_impl(U64 library) {
  U64 state = 0;
  if (library == 0) {
    CudaLog("CUDA", 0, "library cannot be NULL\n");
    return kInvalidHandle;
  }

  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, nullptr, 0);
  if (result != 0) {
    return result;
  }

  result = CudaReleaseThreadState(state);
  if (result != 0) {
    return result;
  }

  CudaDriverRoutine_ea620(library, 1);
  return 0;
}

CUresult cuGraphCreate_impl(U64* pGraph, U32 flags) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (pGraph == nullptr) {
    CudaLog("CUDA", 0, "Graph pointer cannot be NULL");
    return kInvalidValue;
  }

  if (flags != 0) {
    CudaLog("CUDA", 0, "Invalid flags specified: 0x%x", flags);
    return kInvalidValue;
  }

  U64 graph;
  const CUresult created = CudaDriverRoutine_c30d0(&graph, 1, 0);
  if (created == 0) {
    *pGraph = graph;
  }

  return created;
}

CUresult cuGraphConditionalHandleCreate_impl(U64 pHandle, U64 graph,
  U64 context, U32 defaultValue, U32 flags) {
  if (pHandle == 0) {
    CudaLog("CUDA", 0, "pHandle_out cannot be NULL");
    return kInvalidValue;
  }

  if (graph == 0) {
    CudaLog("CUDA", 0, "hGraph cannot be NULL");
    return kInvalidValue;
  }

  if (flags >= 2) {
    CudaLog("CUDA", 0, "Invalid flags 0x%x", flags);
    return kInvalidValue;
  }

  const CUresult result = CudaDriverRoutine_deeb0(context, 0);
  if (result != 0) {
    return result;
  }

  if (At<U32>(graph, 4) != 1) {
    CudaLog("CUDA", 0, "The source graph pointer is invalid");
    CudaLog("CUDA", 0, "Graph is not a valid source graph");
    return kInvalidValue;
  }

  return CudaDriverRoutine_d7b40(pHandle, graph, context, defaultValue, flags);
}

// Kernel nodes lock the context of their function, found from 0x4b0.
CUresult cuGraphKernelNodeGetAttribute_impl(U64 node, U32 attribute,
  U64 pValue) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (node == 0) {
    CudaLog("CUDA", 0, "hNode cannot be NULL");
    return kInvalidValue;
  }

  if (At<U32>(node, 4) != 0) {
    CudaLog("CUDA", 0, "hNode is not a kernel node");
    return kInvalidValue;
  }

  CudaLock(ContextLock(CudaDriverRoutine_98340(At<U64>(node, 0x4b0))), 0, 0,
    0);
  const CUresult value = CudaDriverRoutine_30bf0(node, attribute, pValue);
  CudaUnlock(ContextLock(CudaDriverRoutine_98340(At<U64>(node, 0x4b0))));
  return value;
}
