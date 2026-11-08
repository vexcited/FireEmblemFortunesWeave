#include <stdint.h>

using CUresult = uint32_t;
using U8 = uint8_t;
using U16 = uint16_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr CUresult kInvalidValue = 1;
constexpr CUresult kInvalidDevice = 101;
constexpr CUresult kInvalidHandle = 400;
constexpr CUresult kNotReady = 600;
constexpr CUresult kNotPermitted = 801;
constexpr CUresult kFunctionNotLoaded = 913;

// Address reservations and multicast bindings work in 2 MiB pages.
constexpr U64 kGranularity = 0x200000;
constexpr U64 kGranularityMask = kGranularity - 1;

struct CudaDriverGlobals {
  U8 reserved0[0x118];
  U64 devices[64];
  int32_t deviceCount;
  U8 reserved1[0x5198 - 0x31c];
  U8 addressLock[8];
};

struct CudaMemAllocNodeParams {
  U64 words[15];
};

struct CudaKernelNodeParamsV2 {
  U64 words[7];
  U64 kernel;
  U64 context;
};

[[gnu::visibility("hidden")]] extern CudaDriverGlobals g_CudaDriver;

// Bit 0 selects the per device primary context list.
[[gnu::visibility("hidden")]] extern U16 g_CudaPrimaryContextFlags;

[[gnu::visibility("hidden")]] void CudaLog(const char* tag, U32 level,
  const char* format, ...);
[[gnu::visibility("hidden")]] CUresult CudaGetCurrentContext(U64* pContext);
[[gnu::visibility("hidden")]] void CudaLockShared(U64 mutex, U32, U64);
[[gnu::visibility("hidden")]] void CudaUnlockShared(U64 mutex);
[[gnu::visibility("hidden")]] void CudaLockRead(U64 mutex, U32, U64);
[[gnu::visibility("hidden")]] void CudaUnlockRead(U64 mutex);
[[gnu::visibility("hidden")]] CUresult CudaGetThreadState(U64* pState);
[[gnu::visibility("hidden")]] CUresult CudaGetThreadContext(U64 state,
  U64* pContext, U32 apiVersion);
[[gnu::visibility("hidden")]] CUresult CudaReleaseThreadState(U64 state);

[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_4f840(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_9b080(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_b7390(U64*, U64,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_bb080(U32, U8*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_bb530(U64, U32, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_bc020(U64, U64*, U64,
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_bb0f0(U64, U64*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_fdbf0(U64, U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_fe960();
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_fe9d0(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_1077c0(U64, U64*,
  U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_12ca80(U64);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_12cad0(U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_12dc90();
[[gnu::visibility("hidden")]] U32 CudaDriverRoutine_12e320(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_1d8eb0(U64, U64,
  U32);

namespace {

[[gnu::always_inline]] inline bool IsDeviceOrdinal(int32_t device) {
  return device >= 0 && device < g_CudaDriver.deviceCount;
}

template <typename T>
[[gnu::always_inline]] inline T& At(U64 address, U64 offset) {
  return *reinterpret_cast<T*>(address + offset);
}

[[gnu::always_inline]] inline bool HasMulticastDevice() {
  for (U64 i = 0; i < static_cast<U32>(g_CudaDriver.deviceCount); i++) {
    if (CudaDriverRoutine_4f840(g_CudaDriver.devices[i]) != 0) {
      return true;
    }
  }

  return false;
}

// Multicast objects dispatch through the table at 0x278 and keep their
// size at 0x80.
template <typename T>
[[gnu::always_inline]] inline T MulticastOp(U64 object, U64 offset) {
  return At<T>(At<U64>(object, 0x278), offset);
}

// Allocation handles carry their kind in bits 35 to 39 of the word at 0xf0
// and their sharing flags in the byte at 0xf9.
[[gnu::always_inline]] inline bool IsMulticastHandle(U64 handle) {
  return (At<U64>(handle, 0xf0) & 0xf800000000) == 0x800000000;
}

[[gnu::always_inline]] inline bool IsShared(U64 handle) {
  return (At<U8>(handle, 0xf9) & 0xf8) != 0;
}

}

CUresult cuGraphMemAllocNodeGetParams_impl(U64 node,
  CudaMemAllocNodeParams* pParams) {
  if (node == 0) {
    CudaLog("CUDA", 0, "hNode cannot be NULL");
    return kInvalidValue;
  }

  if (pParams == nullptr) {
    CudaLog("CUDA", 0, "params_out cannot be NULL");
    return kInvalidValue;
  }

  if (At<U32>(node, 4) != 10) {
    CudaLog("CUDA", 0, "hNode type is not CU_GRAPH_NODE_TYPE_MEM_ALLOC");
    return kInvalidValue;
  }

  *pParams = At<CudaMemAllocNodeParams>(node, 0x20);
  return 0;
}

// The kernel handle is looked up from the function.
CUresult cuGraphKernelNodeGetParams_v2_impl(U64 node,
  CudaKernelNodeParamsV2* pParams) {
  const char* message;
  if (node == 0) {
    message = "Node cannot be NULL";
  }
  else if (pParams == nullptr) {
    message = "Node parameters cannot be NULL";
  }
  else if (At<U32>(node, 4) != 0) {
    message = "Node is not a kernel node";
  }
  else {
    for (U32 i = 0; i < 7; i++) {
      pParams->words[i] = At<U64>(node, 0x20 + i * 8);
    }

    const U64 function = pParams->words[0];
    if (function == 0) {
      pParams->kernel = 0;
      pParams->context = 0;
      return 0;
    }

    pParams->context = At<U64>(node, 0x4b0);
    return CudaDriverRoutine_bb0f0(function, &pParams->kernel);
  }

  CudaLog("CUDA", 0, message);
  return kInvalidValue;
}

CUresult cuMemAddressFree_impl(U64 pointer, U64 size) {
  CudaDriverRoutine_12e320(pointer);
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (CudaDriverRoutine_fe960() == 0) {
    return kNotPermitted;
  }

  if (pointer == 0 || size == 0) {
    if (pointer == 0) {
      CudaLog("CUDA", 0, "Parameter ptr cannot be 0");
    }

    if (size == 0) {
      CudaLog("CUDA", 0, "Parameter size cannot be 0");
    }

    return kInvalidValue;
  }

  if ((size & kGranularityMask) != 0) {
    CudaLog("CUDA", 0, "Specified size not aligned to minimum granularity "
      "(0x%zx bytes)", kGranularity);
    return kInvalidValue;
  }

  if (CudaDriverRoutine_12cad0(pointer) == 0) {
    CudaLog("CUDA", 0, "Address range requested to free must belong to a "
      "range reserved previously by cuMemAddressReserve()");
    return kInvalidValue;
  }

  if (CudaDriverRoutine_fe9d0(pointer, size) != 0) {
    CudaLog("CUDA", 0, "Address range contains existing mapping");
    return kInvalidValue;
  }

  const U64 lock = reinterpret_cast<U64>(g_CudaDriver.addressLock);
  CudaLockShared(lock, 0, 0);
  CUresult freed = CudaDriverRoutine_fdbf0(pointer, size);
  if (freed == 0) {
    freed = CudaDriverRoutine_12ca80(pointer);
  }

  CudaUnlockShared(lock);
  return freed;
}

CUresult cuDevicePrimaryCtxRetain_impl(U64* pContext, int32_t device) {
  U64 state = 0;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, nullptr, 0);
  if (result != 0) {
    return result;
  }

  if (!IsDeviceOrdinal(device)) {
    CudaLog("CUDA", 0, "Parameter dev must be between 0 and %d",
      g_CudaDriver.deviceCount);
    return kInvalidDevice;
  }

  if (pContext == nullptr) {
    return kInvalidValue;
  }

  const U64 pDevice = g_CudaDriver.devices[device];
  CudaLockShared(pDevice + 0x41e8, 0, 0);
  result = CudaDriverRoutine_9b080(pDevice);
  if (result != 0) {
    CudaUnlockShared(pDevice + 0x41e8);
    return result;
  }

  const U64 offset = (g_CudaPrimaryContextFlags & 1) != 0 ? 0x4218 : 0x41e0;
  const U64 context = At<U64>(pDevice, offset);
  CudaUnlockShared(pDevice + 0x41e8);
  *pContext = context;
  return 0;
}

namespace {

// Functions are chained from 0xe0 through 0x478, kernels are tagged 2 at
// 0x370 and hidden ones flagged at 0x3d1.
[[gnu::always_inline]] inline bool IsListedFunction(U64 function) {
  return At<U32>(function, 0x370) == 2 &&
    (At<U16>(function, 0x3d1) & 0x800) == 0;
}

}

CUresult cuModuleGetFunctionCount_impl(U32* pCount, U64 module) {
  U64 state = 0;
  if (pCount == nullptr) {
    CudaLog("CUDA", 0, "count cannot be NULL\n");
    return kInvalidValue;
  }

  if (module == 0) {
    CudaLog("CUDA", 0, "mod cannot be NULL\n");
    return kInvalidHandle;
  }

  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_1077c0(state, nullptr, module, 0);
  if (result != 0) {
    return result;
  }

  U32 count = 0;
  for (U64 f = At<U64>(module, 0xe0); f != 0; f = At<U64>(f, 0x478)) {
    if (IsListedFunction(f)) {
      count++;
    }
  }

  *pCount = count;
  return 0;
}

CUresult cuModuleEnumerateFunctions_impl(U64* functions, U32 capacity,
  U64 module) {
  U64 state = 0;
  if (functions == nullptr) {
    CudaLog("CUDA", 0, "functions cannot be NULL\n");
    return kInvalidValue;
  }

  if (module == 0) {
    CudaLog("CUDA", 0, "mod cannot be NULL\n");
    return kInvalidHandle;
  }

  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_1077c0(state, nullptr, module, 0);
  if (result != 0) {
    return result;
  }

  U64 f = At<U64>(module, 0xe0);
  if (f == 0 || capacity == 0) {
    return result;
  }

  U64 count = 0;
  do {
    if (IsListedFunction(f)) {
      functions[count++] = f;
    }

    f = At<U64>(f, 0x478);
  } while (f != 0 && count < capacity);

  return 0;
}

// The graph memory counters sit at 0x4230 in the device.
CUresult cuDeviceGetGraphMemAttribute_impl(int32_t device, U32 attribute,
  U64* pValue) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (!IsDeviceOrdinal(device)) {
    return kInvalidDevice;
  }

  if (pValue == nullptr) {
    return kInvalidValue;
  }

  const U64 pDevice = g_CudaDriver.devices[device];
  if (attribute > 3) {
    CudaLog("CUDA", 0, "Invalid graph allocation attribute: %d", attribute);
    return kInvalidValue;
  }

  *pValue = __atomic_fetch_or(&At<U64>(pDevice, 0x4230 + attribute * 8), 0,
    __ATOMIC_SEQ_CST);
  return 0;
}

// Handle types 1, 2, 4 and 8 can be exported, when the allocation was made
// shareable for them.
CUresult cuMemExportToShareableHandle_impl(U64 pShareable, U64 handle,
  U32 type, U64 flags) {
  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (CudaDriverRoutine_fe960() == 0) {
    return kNotPermitted;
  }

  if (handle != 0) {
    if (pShareable != 0) {
      if (flags != 0) {
        CudaLog("CUDA", 0, "Parameter flags must be 0");
      }
      else if (type <= 8 && ((1 << type) & 0x116) != 0) {
        if ((type & ~(At<U32>(handle, 0xf8) >> 11)) == 0) {
          result = CudaDriverRoutine_1d8eb0(handle, pShareable, type);
          if (result != 0) {
            CudaLog("CUDA", 0, "Failed to export shareable memory handle to "
              "os native handle (requestedHandleType = 0x%x)", type);
          }

          return result;
        }

        CudaLog("CUDA", 0, "Allocation not configured for sharing with "
          "requested handleType");
      }
      else {
        CudaLog("CUDA", 0, "Invalid export handleType");
      }
    }
    else {
      CudaLog("CUDA", 0, "Parameter shareableHandle cannot be NULL");
    }
  }
  else {
    CudaLog("CUDA", 0, "Parameter handle is not a valid "
      "CUmemGenericAllocationHandle");
  }

  return kInvalidValue;
}

CUresult cuMemPoolImportFromShareableHandle_impl(U64* pPool, U64 handle,
  U32 type, U64 flags) {
  U64 record = 0;
  U64 state = 0;
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

  if (pPool == nullptr || handle == 0 || flags != 0) {
    if (pPool == nullptr) {
      CudaLog("CUDA", 0, "pool_out cannot be NULL");
    }

    if (handle == 0) {
      CudaLog("CUDA", 0, "handle cannot be NULL");
    }

    if (flags != 0) {
      CudaLog("CUDA", 0, "flags must be 0");
    }

    return kInvalidValue;
  }

  *pPool = 0;
  if (type > 8 || ((1 << type) & 0x106) == 0) {
    CudaLog("CUDA", 0, "Invalid handletype requested");
    return kInvalidValue;
  }

  result = CudaDriverRoutine_b7390(&record, handle, type);
  if (result == 0) {
    *pPool = record + 0x68;
  }

  return result;
}

// Attributes 0, 2 and 8 need the function to be loaded.
CUresult cuFuncGetAttribute_impl(U64 pValue, U32 attribute, U64 function) {
  U64 state = 0;
  U64 context = 0;
  if (pValue == 0) {
    CudaLog("CUDA", 0, "pi cannot be NULL\n");
    return kInvalidValue;
  }

  if (function == 0) {
    CudaLog("CUDA", 0, "hfunc cannot be NULL\n");
    return kInvalidHandle;
  }

  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_bc020(state, &context, function, 0);
  if (result != 0) {
    return result;
  }

  U8 isLocked[8];
  result = CudaDriverRoutine_bb080(attribute, isLocked);
  if (result != 0) {
    return result;
  }

  if (At<U32>(function, 0x3e8) != 2 && attribute <= 8 &&
    ((1 << attribute) & 0x105) != 0) {
    CudaLog("CUDA", 0, "hfunc not fully loaded yet, see cuFuncIsLoad and "
      "cuFuncLoad\n");
    return kFunctionNotLoaded;
  }

  if (isLocked[0] == 0) {
    return CudaDriverRoutine_bb530(function, attribute, pValue);
  }

  CudaLockRead(context + 0x18, 0, 0);
  result = CudaDriverRoutine_bb530(function, attribute, pValue);
  CudaUnlockRead(context + 0x18);
  return result;
}

CUresult cuMulticastBindMem_impl(U64 object, U64 objectOffset, U64 handle,
  U64 handleOffset, U64 size, U64 flags) {
  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (!HasMulticastDevice()) {
    return kNotPermitted;
  }

  if (object == 0 || handle == 0 || flags != 0 || IsMulticastHandle(handle)) {
    return kInvalidValue;
  }

  if (!((!IsShared(object) && !IsMulticastHandle(object)) ||
    IsShared(handle))) {
    return kInvalidValue;
  }

  if ((static_cast<U32>(handleOffset | objectOffset | size) &
    kGranularityMask) != 0) {
    return kInvalidValue;
  }

  if (size + objectOffset < size ||
    At<U64>(object, 0x80) < size + objectOffset ||
    size + handleOffset < size || At<U64>(handle, 0x80) < size + handleOffset) {
    return kInvalidValue;
  }

  using Bind = CUresult (*)(U64, U64, U64, U64, U64, U64);
  while (true) {
    result = MulticastOp<Bind>(object, 0x9c0)(object, objectOffset, handle,
      handleOffset, size, 0);
    if (result != kNotReady) {
      return result;
    }

    CudaDriverRoutine_12dc90();
  }
}

CUresult cuMulticastUnbind_impl(U64 object, int32_t device, U64 offset,
  U64 size) {
  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (!HasMulticastDevice()) {
    return kNotPermitted;
  }

  if ((static_cast<U32>(size | offset) & kGranularityMask) != 0 ||
    object == 0 || device < 0 || device > g_CudaDriver.deviceCount ||
    size + offset < size || At<U64>(object, 0x80) < size + offset) {
    return kInvalidValue;
  }

  using Unbind = CUresult (*)(U64, U64, U64, U64, U64*);
  while (size != 0) {
    U64 done = 0;
    result = MulticastOp<Unbind>(object, 0x9d0)(object,
      g_CudaDriver.devices[device], offset, 0, &done);
    size -= done;
    offset += done;
    if (result != 0) {
      return result;
    }
  }

  return 0;
}
