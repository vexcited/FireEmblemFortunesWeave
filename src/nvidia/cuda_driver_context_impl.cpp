#include <stdint.h>

using CUresult = uint32_t;
using U8 = uint8_t;
using U32 = uint32_t;
using U64 = uint64_t;

constexpr CUresult kInvalidValue = 1;
constexpr CUresult kInvalidDevice = 101;

struct CudaDevice {
  U8 reserved[0x5050];
  CUresult (*getName)(CudaDevice* device, char* name, U32 length);
};

// Driver wide state, the devices are indexed by ordinal.
struct CudaDriverGlobals {
  U8 reserved0[0x118];
  CudaDevice* devices[64];
  U32 deviceCount;
  U8 reserved1[0x71c8 - 0x31c];
  U8 isLazyLoading;
};

// The driver describes every array with 32 bit extents.
struct CudaArrayDescription {
  U32 width;
  U32 height;
  U32 depth;
  U32 format;
  U32 channelCount;
  U32 flags;
};

template <typename Size>
struct CudaArrayDescriptor {
  Size width;
  Size height;
  U32 format;
  U32 channelCount;
};

template <typename Size>
struct CudaArray3DDescriptor {
  Size width;
  Size height;
  Size depth;
  U32 format;
  U32 channelCount;
  U32 flags;
};

struct CudaArray {
  U8 reserved[0xc];
  U32 width;
  U32 height;
  U32 depth;
  U32 format;
  U32 channelCount;
  U32 flags;
};

struct CudaGraphInstantiateParams {
  U64 flags;
  U64 uploadStream;
  U64 errorNode;
  U64 result;
};

struct CudaErrorEntry {
  U64 code;
  const char* name;
  const char* string;
};

[[gnu::visibility("hidden")]] extern CudaDriverGlobals g_CudaDriver;

[[gnu::visibility("hidden")]] void CudaLog(const char* tag, U32 level,
  const char* message);
[[gnu::visibility("hidden")]] CUresult CudaGetCurrentContext(U64* pContext);
[[gnu::visibility("hidden")]] void CudaLock(U64 mutex, U32, U64, U32);
[[gnu::visibility("hidden")]] void CudaUnlock(U64 mutex);
[[gnu::visibility("hidden")]] CUresult CudaGetThreadState(U64* pState);
[[gnu::visibility("hidden")]] CUresult CudaGetThreadContext(U64 state,
  U64* pContext, U32 apiVersion);
[[gnu::visibility("hidden")]] CUresult CudaReleaseThreadState(U64 state);

[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_21920(U64,
  const CudaArrayDescription*, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_2ce20(U64, U64,
  CudaGraphInstantiateParams*, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_4aa00(U64*, U64, U64,
  U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_4abc0(U64,
  const CudaArrayDescription*, U64, U64, U32, U32, U32, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_86e90(U64, U32);
[[gnu::visibility("hidden")]] U8 CudaDriverRoutine_87c60(U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_98190(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_985d0(U64, U32, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_99410(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_99ca0(U64, U32**);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_99df0(CudaDevice*,
  U64, U32);
[[gnu::visibility("hidden")]] const CudaErrorEntry* CudaDriverRoutine_b4720(
  U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_b48b0(U64*, U32);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_b5f70(U64*);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_d57e0(CudaDevice*,
  U32, U64);
[[gnu::visibility("hidden")]] void CudaDriverRoutine_d9080(U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_de220(U64, U32);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_e2b00(U64, U64, U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_e30b0(U64);
[[gnu::visibility("hidden")]] CUresult CudaDriverRoutine_112b20(U64, U64, U32,
  U64*, U64*);

namespace {

// The context keeps its lock at 0x18 and its device at 0x40.
[[gnu::always_inline]] inline U64 ContextLock(U64 context) {
  return context + 0x18;
}

[[gnu::always_inline]] inline U64 ContextDevice(U64 context) {
  return *reinterpret_cast<U64*>(context + 0x40);
}

template <typename Size>
[[gnu::always_inline]] inline const CudaArrayDescription* Describe(
  CudaArrayDescription* pDescription,
  const CudaArrayDescriptor<Size>* pDescriptor) {
  *pDescription = {};
  if (pDescriptor == nullptr) {
    return nullptr;
  }

  pDescription->width = pDescriptor->width;
  pDescription->height = pDescriptor->height;
  pDescription->depth = 0;
  pDescription->format = pDescriptor->format;
  pDescription->channelCount = pDescriptor->channelCount;
  return pDescription;
}

template <typename Size>
[[gnu::always_inline]] inline const CudaArrayDescription* Describe(
  CudaArrayDescription* pDescription,
  const CudaArray3DDescriptor<Size>* pDescriptor) {
  *pDescription = {};
  if (pDescriptor == nullptr) {
    return nullptr;
  }

  pDescription->width = pDescriptor->width;
  pDescription->height = pDescriptor->height;
  pDescription->depth = pDescriptor->depth;
  pDescription->format = pDescriptor->format;
  pDescription->channelCount = pDescriptor->channelCount;
  pDescription->flags = pDescriptor->flags;
  return pDescription;
}

template <typename Size>
[[gnu::always_inline]] inline CUresult GetArrayDescriptor(
  CudaArrayDescriptor<Size>* pDescriptor, CudaArray* array, U32 apiVersion) {
  const CUresult result = CudaDriverRoutine_86e90(
    reinterpret_cast<U64>(array), apiVersion);
  if (pDescriptor != nullptr && result == 0) {
    pDescriptor->width = array->width;
    pDescriptor->height = array->height;
    pDescriptor->format = array->format;
    pDescriptor->channelCount = array->channelCount;
  }

  if (result != 0) {
    return result;
  }

  return pDescriptor == nullptr;
}

template <typename Size>
[[gnu::always_inline]] inline CUresult GetArrayDescriptor(
  CudaArray3DDescriptor<Size>* pDescriptor, CudaArray* array,
  U32 apiVersion) {
  const CUresult result = CudaDriverRoutine_86e90(
    reinterpret_cast<U64>(array), apiVersion);
  if (pDescriptor != nullptr && result == 0) {
    pDescriptor->width = array->width;
    pDescriptor->height = array->height;
    pDescriptor->format = array->format;
    pDescriptor->channelCount = array->channelCount;
    pDescriptor->flags = array->flags;
    pDescriptor->depth = array->depth;
  }

  if (result != 0) {
    return result;
  }

  return pDescriptor == nullptr;
}

[[gnu::always_inline]] inline bool IsDeviceOrdinal(U32 device) {
  return static_cast<int32_t>(device) >= 0 &&
    static_cast<int32_t>(device) <
    static_cast<int32_t>(g_CudaDriver.deviceCount);
}

}

CUresult cuArrayCreate_impl(U64 pArray,
  const CudaArrayDescriptor<U32>* pDescriptor) {
  CudaArrayDescription description;
  return CudaDriverRoutine_21920(pArray, Describe(&description, pDescriptor),
    1);
}

CUresult cuArrayCreate_v2_impl(U64 pArray,
  const CudaArrayDescriptor<U64>* pDescriptor) {
  CudaArrayDescription description;
  return CudaDriverRoutine_21920(pArray, Describe(&description, pDescriptor),
    2);
}

CUresult cuArray3DCreate_impl(U64 pArray,
  const CudaArray3DDescriptor<U32>* pDescriptor) {
  CudaArrayDescription description;
  return CudaDriverRoutine_21920(pArray, Describe(&description, pDescriptor),
    1);
}

CUresult cuArray3DCreate_v2_impl(U64 pArray,
  const CudaArray3DDescriptor<U64>* pDescriptor) {
  CudaArrayDescription description;
  return CudaDriverRoutine_21920(pArray, Describe(&description, pDescriptor),
    2);
}

CUresult cuArrayGetDescriptor_impl(CudaArrayDescriptor<U32>* pDescriptor,
  CudaArray* array) {
  return GetArrayDescriptor(pDescriptor, array, 1);
}

CUresult cuArrayGetDescriptor_v2_impl(CudaArrayDescriptor<U64>* pDescriptor,
  CudaArray* array) {
  return GetArrayDescriptor(pDescriptor, array, 2);
}

CUresult cuArray3DGetDescriptor_impl(
  CudaArray3DDescriptor<U32>* pDescriptor, CudaArray* array) {
  return GetArrayDescriptor(pDescriptor, array, 1);
}

CUresult cuArray3DGetDescriptor_v2_impl(
  CudaArray3DDescriptor<U64>* pDescriptor, CudaArray* array) {
  return GetArrayDescriptor(pDescriptor, array, 2);
}

// Planar arrays list their planes at 0xa0, counted at 0x9c.
CUresult cuArrayGetPlane_impl(U64* pPlane, U64 array, U32 plane) {
  const CUresult result = CudaDriverRoutine_86e90(array, 0);
  if (result != 0) {
    return result;
  }

  if (pPlane == nullptr ||
    CudaDriverRoutine_87c60(*reinterpret_cast<U32*>(array + 0x18)) == 0 ||
    plane >= *reinterpret_cast<U32*>(array + 0x9c)) {
    return kInvalidValue;
  }

  *pPlane = (*reinterpret_cast<U64**>(array + 0xa0))[plane];
  return 0;
}

// Mipmapped arrays list their levels at 0x40, counted at 0x28.
CUresult cuMipmappedArrayGetLevel_impl(U64* pLevel, U64 array, U32 level) {
  const CUresult result = CudaDriverRoutine_86e90(array, 0);
  if (result != 0) {
    return result;
  }

  if (pLevel == nullptr || level >= *reinterpret_cast<U32*>(array + 0x28)) {
    return kInvalidValue;
  }

  *pLevel = (*reinterpret_cast<U64**>(array + 0x40))[level];
  return 0;
}

CUresult cuTexRefSetAddress_v2_impl(U64* pOffset, U64 texture, U64 pointer,
  U64 size) {
  U64 offset = 0;
  const CUresult result = CudaDriverRoutine_4aa00(
    pOffset != nullptr ? &offset : nullptr, texture, pointer, size, 2);
  if (pOffset != nullptr) {
    *pOffset = static_cast<U32>(offset);
  }

  return result;
}

CUresult cuTexRefSetAddress2D_impl(U64 texture,
  const CudaArrayDescriptor<U32>* pDescriptor, U32 pointer, U32 pitch) {
  CudaArrayDescription description;
  return CudaDriverRoutine_4abc0(texture, Describe(&description, pDescriptor),
    pointer, pitch, 1, 0, 0, 0);
}

CUresult cuTexRefSetAddress2D_v2_impl(U64 texture,
  const CudaArrayDescriptor<U64>* pDescriptor, U64 pointer, U64 pitch) {
  CudaArrayDescription description;
  return CudaDriverRoutine_4abc0(texture, Describe(&description, pDescriptor),
    pointer, pitch, 2, 1, 0, 0);
}

CUresult cuTexRefSetAddress2D_v3_impl(U64 texture,
  const CudaArrayDescriptor<U64>* pDescriptor, U64 pointer, U64 pitch) {
  CudaArrayDescription description;
  return CudaDriverRoutine_4abc0(texture, Describe(&description, pDescriptor),
    pointer, pitch, 2, 1, 1, 1);
}

CUresult cuGetErrorString_impl(U32 error, const char** pString) {
  const CudaErrorEntry* entry = CudaDriverRoutine_b4720(error);
  if (entry == nullptr) {
    *pString = nullptr;
    return kInvalidValue;
  }

  *pString = entry->string;
  return 0;
}

CUresult cuGetErrorName_impl(U32 error, const char** pName) {
  const CudaErrorEntry* entry = CudaDriverRoutine_b4720(error);
  if (entry == nullptr) {
    *pName = nullptr;
    return kInvalidValue;
  }

  *pName = entry->name;
  return 0;
}

CUresult cuEventDestroy_impl(U64* event) {
  CUresult result = CudaDriverRoutine_b48b0(event, 3);
  if (result != 0) {
    return result;
  }

  const U64 context = *event;
  CudaLock(ContextLock(context), 0, 0, 0);
  result = CudaDriverRoutine_98190(context, 0);
  if (result == 0) {
    CudaDriverRoutine_b5f70(event);
  }

  CudaUnlock(ContextLock(context));
  return result;
}

CUresult cuEventDestroy_v2_impl(U64* event) {
  const CUresult result = CudaDriverRoutine_b48b0(event, 3);
  if (result != 0) {
    return result;
  }

  const U64 context = *event;
  CudaLock(ContextLock(context), 0, 0, 0);
  CudaDriverRoutine_b5f70(event);
  CudaUnlock(ContextLock(context));
  return 0;
}

CUresult cuCtxResetPersistingL2Cache_impl() {
  U64 context = 0;
  CUresult result = CudaGetCurrentContext(&context);
  if (result != 0) {
    return result;
  }

  CudaLock(ContextLock(context), 0, 0, 0);
  result = CudaDriverRoutine_99410(context);
  CudaUnlock(ContextLock(context));
  return result;
}

namespace {

[[gnu::always_inline]] inline CUresult GetContextConfig(U32 which,
  U64 pConfig) {
  U64 context = 0;
  CUresult result = CudaGetCurrentContext(&context);
  if (result != 0) {
    return result;
  }

  if (pConfig == 0) {
    return kInvalidValue;
  }

  CudaLock(ContextLock(context), 0, 0, 0);
  result = CudaDriverRoutine_985d0(context, which, pConfig);
  CudaUnlock(ContextLock(context));
  return result;
}

}

CUresult cuCtxGetCacheConfig_impl(U64 pConfig) {
  return GetContextConfig(0, pConfig);
}

CUresult cuCtxGetSharedMemConfig_impl(U64 pConfig) {
  return GetContextConfig(1, pConfig);
}

// The device keeps its stream priority range at 0x1110.
CUresult cuCtxGetStreamPriorityRange_impl(U32* pLeast, U32* pGreatest) {
  U64 context = 0;
  const CUresult result = CudaGetCurrentContext(&context);
  if (result != 0) {
    return result;
  }

  if (pLeast != nullptr) {
    *pLeast = *reinterpret_cast<U32*>(ContextDevice(context) + 0x1110);
  }

  if (pGreatest != nullptr) {
    *pGreatest = *reinterpret_cast<U32*>(ContextDevice(context) + 0x1114);
  }

  return result;
}

CUresult cuCtxGetDevice_impl(U32* pDevice) {
  if (pDevice == nullptr) {
    CudaLog("CUDA", 0, "device cannot be NULL");
    return kInvalidValue;
  }

  U64 state = 0;
  U64 context;
  CUresult result = CudaGetThreadState(&state);
  if (result != 0) {
    return result;
  }

  result = CudaGetThreadContext(state, &context, 8);
  if (result == 0) {
    *pDevice = **reinterpret_cast<U32**>(context + 0x10);
  }

  return result;
}

CUresult cuCtxFromGreenCtx_impl(U64* pContext, U64 green) {
  if (pContext == nullptr) {
    return kInvalidValue;
  }

  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_de220(green, 0);
  if (result != 0) {
    return result;
  }

  *reinterpret_cast<U8*>(green + 4) = 1;
  *pContext = green;
  return result;
}

namespace {

[[gnu::always_inline]] inline CUresult ProfilerToggle() {
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

  return CudaReleaseThreadState(state);
}

}

CUresult cuProfilerStart_impl() {
  return ProfilerToggle();
}

CUresult cuProfilerStop_impl() {
  return ProfilerToggle();
}

CUresult cuModuleGetLoadingMode_impl(U32* pMode) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  *pMode = g_CudaDriver.isLazyLoading != 0 ? 2 : 1;
  return result;
}

CUresult cuDeviceGetCount_impl(U32* pCount) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (pCount == nullptr) {
    return kInvalidValue;
  }

  *pCount = g_CudaDriver.deviceCount;
  return 0;
}

CUresult cuDeviceSetGraphMemAttribute_impl(U32 device, U32 attribute,
  U64 value) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (!IsDeviceOrdinal(device)) {
    return kInvalidDevice;
  }

  if (value == 0) {
    return kInvalidValue;
  }

  return CudaDriverRoutine_d57e0(g_CudaDriver.devices[device], attribute,
    value);
}

CUresult cuDeviceGetPCIBusId_impl(U64 busId, U32 length, U32 device) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (busId == 0) {
    return kInvalidValue;
  }

  if (!IsDeviceOrdinal(device)) {
    return kInvalidDevice;
  }

  return CudaDriverRoutine_99df0(g_CudaDriver.devices[device], busId, length);
}

CUresult cuDeviceGetName_impl(char* name, U32 length, U32 device) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (name == nullptr) {
    return kInvalidValue;
  }

  if (!IsDeviceOrdinal(device)) {
    return kInvalidDevice;
  }

  CudaDevice* pDevice = g_CudaDriver.devices[device];
  return pDevice->getName(pDevice, name, length);
}

CUresult cuDeviceGetByPCIBusId_impl(U32* pDevice, U64 busId) {
  U32* pFound = nullptr;
  CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (pDevice == nullptr || busId == 0) {
    return kInvalidValue;
  }

  result = CudaDriverRoutine_99ca0(busId, &pFound);
  if (result == 0) {
    *pDevice = *pFound;
  }

  return result;
}

CUresult cuIpcGetEventHandle_impl(U64 pHandle, U64 event) {
  U64 context = 0;
  if (pHandle == 0 || event == 0) {
    return kInvalidValue;
  }

  CUresult result = CudaGetCurrentContext(&context);
  if (result != 0) {
    return result;
  }

  result = CudaDriverRoutine_e30b0(ContextDevice(context));
  if (result != 0) {
    return result;
  }

  return CudaDriverRoutine_e2b00(context, event, pHandle);
}

namespace {

// The stream keeps its context at 0x10 and its flags at 0x38.
[[gnu::always_inline]] inline CUresult GetStreamDevice(U64 stream,
  U32* pDevice, U32 apiVersion) {
  U64 context = 0;
  if (pDevice == nullptr) {
    CudaLog("CUDA", 0, "NULL device pointer\n");
    return kInvalidValue;
  }

  const CUresult result = CudaDriverRoutine_112b20(0, stream, apiVersion,
    nullptr, &context);
  if (result == 0) {
    *pDevice = **reinterpret_cast<U32**>(context + 0x10);
  }

  return result;
}

[[gnu::always_inline]] inline CUresult GetStreamFlags(U64 stream,
  U32* pFlags, U32 apiVersion) {
  U64 context = 0;
  U64 resolved = 0;
  if (pFlags == nullptr) {
    return kInvalidValue;
  }

  const CUresult result = CudaDriverRoutine_112b20(0, stream, apiVersion,
    &resolved, &context);
  if (result == 0) {
    *pFlags = (*reinterpret_cast<U8*>(resolved + 0x38) & 5) == 0;
  }

  return result;
}

}

CUresult cuStreamGetDevice_impl(U64 stream, U32* pDevice) {
  return GetStreamDevice(stream, pDevice, 2);
}

CUresult cuStreamGetDevice_ptsz_impl(U64 stream, U32* pDevice) {
  return GetStreamDevice(stream, pDevice, 3);
}

CUresult cuStreamGetFlags_impl(U64 stream, U32* pFlags) {
  return GetStreamFlags(stream, pFlags, 2);
}

CUresult cuStreamGetFlags_ptsz_impl(U64 stream, U32* pFlags) {
  return GetStreamFlags(stream, pFlags, 3);
}

CUresult cuGraphNodeGetType_impl(U64 node, U64 pType) {
  const CUresult result = CudaGetCurrentContext(nullptr);
  if (result != 0) {
    return result;
  }

  if (node == 0) {
    CudaLog("CUDA", 0, "Node cannot be NULL");
    return kInvalidValue;
  }

  if (pType == 0) {
    CudaLog("CUDA", 0, "Node type pointer cannot be NULL");
    return kInvalidValue;
  }

  CudaDriverRoutine_d9080(node, pType);
  return 0;
}

CUresult cuGraphInstantiateWithFlags_impl(U64 pExec, U64 graph, U64 flags) {
  CudaGraphInstantiateParams params = {};
  if ((flags & 2) != 0) {
    CudaLog("CUDA", 0, "This API does not support the upload flag");
    return kInvalidValue;
  }

  params.flags = flags;
  return CudaDriverRoutine_2ce20(pExec, graph, &params, 2, 11040);
}

namespace {

[[gnu::always_inline]] inline CUresult Instantiate(U64 pExec, U64 graph,
  U64* pErrorNode, char* log, U64 logSize, U32 version) {
  CudaGraphInstantiateParams params = {};
  if (log == nullptr && logSize != 0) {
    CudaLog("CUDA", 0, "Instantiation log buffer pointer is NULL but "
      "buffer size is non-zero");
  }

  if (pErrorNode != nullptr) {
    *pErrorNode = 0;
  }

  if (log != nullptr && logSize != 0) {
    *log = '\0';
  }

  params.flags = 0;
  return CudaDriverRoutine_2ce20(pExec, graph, &params, 2, version);
}

}

CUresult cuGraphInstantiate_impl(U64 pExec, U64 graph, U64* pErrorNode,
  char* log, U64 logSize) {
  return Instantiate(pExec, graph, pErrorNode, log, logSize, 10020);
}

CUresult cuGraphInstantiate_v2_impl(U64 pExec, U64 graph, U64* pErrorNode,
  char* log, U64 logSize) {
  return Instantiate(pExec, graph, pErrorNode, log, logSize, 11000);
}
