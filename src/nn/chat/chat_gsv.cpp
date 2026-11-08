#include "nn/chat/chat_gsv.hpp"

#include <atomic>
#include <string.h>

#include "movie/detail/movie_gs_handles.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/vi2/vi2_service_functions.hpp"

namespace nn::gs::sdk {

NativeImageHandle CalculateNativeImageHandle(NativeImageHandle base,
  uint32_t index);

}

namespace nn::chat::gsv {

namespace detail {

struct DisplaySession;
struct ImageSession;

// The sessions and their requests are template code of the gsv clients.
[[gnu::visibility("hidden")]] extern std::atomic<bool> g_IsInitialized;
[[gnu::visibility("hidden")]] extern DisplaySession g_DisplaySession;
[[gnu::visibility("hidden")]] extern ImageSession g_ImageSession;

[[gnu::visibility("hidden")]] Result InitializeDisplaySession(
  DisplaySession* pSession);
[[gnu::visibility("hidden")]] Result OpenVirtualDisplay(
  VirtualDisplayType* pDisplay, DisplaySession* pSession, uint64_t name);
[[gnu::visibility("hidden")]] void CloseVirtualDisplay(
  VirtualDisplayType* pDisplay, DisplaySession* pSession);
[[gnu::visibility("hidden")]] Result CreateImage(ImageSession* pSession,
  uint32_t* pOutImage, ImagePreference preference, uint64_t count,
  uint32_t memoryHandle);
[[gnu::visibility("hidden")]] void DestroyImage(ImageSession* pSession,
  uint32_t image);
[[gnu::visibility("hidden")]] Result CreateMetadataPool(uint32_t* pOutId,
  DisplaySession* pSession, MetadataPoolType* pPool, uint64_t count);
[[gnu::visibility("hidden")]] void DestroyMetadataPool(
  DisplaySession* pSession, MetadataPoolType* pPool, uint32_t id);
[[gnu::visibility("hidden")]] Result RequestReceiveImage(
  VirtualDisplayType* pDisplay, gs::NativeSyncHandle* pOutSync,
  ImagePoolType* pPool, ImageSession* pSession, uint32_t index,
  MetadataPoolType* pMetadataPool, uint8_t metadataIndex,
  gs::NativeSyncHandle releaseSync);

}

namespace {

constexpr uint32_t MetadataPoolStateCreated = 1;
constexpr uint32_t MetadataPoolStateDestroyed = 2;

// Names are packed in eight bytes and stop at the first terminator.
uint64_t MakeName(const char* pName) {
  char buffer[8] = {};
  if (pName != nullptr) {
    for (int i = 0; i < 8 && pName[i] != '\0'; ++i) {
      buffer[i] = pName[i];
    }
  }
  uint64_t name;
  memcpy(&name, buffer, sizeof(name));
  return name;
}

}

void Initialize() {
  if (!detail::g_IsInitialized.exchange(true)) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      detail::InitializeDisplaySession(&detail::g_DisplaySession));
  }
}

void Finalize() {}

Result OpenVirtualDisplay(VirtualDisplayType* pDisplay, const char* pName) {
  *pDisplay = {};
  return detail::OpenVirtualDisplay(pDisplay, &detail::g_DisplaySession,
    MakeName(pName));
}

void CloseVirtualDisplay(VirtualDisplayType* pDisplay) {
  syncpt::sdk::WaitSyncPoint(pDisplay->syncPoint);
  detail::CloseVirtualDisplay(pDisplay, &detail::g_DisplaySession);
}

// The memory is always mapped read and write, the permission is unused.
Result CreateImagePool(ImagePoolType* pPool,
  const ImagePreference& preference, uint64_t count, void* pMemory,
  size_t memorySize, os::MemoryPermission) {
  pPool->memoryHandle = 0;
  pPool->imageHandle = 0;
  pPool->pMemory = nullptr;
  gs::NativeMemoryHandle memory = {};
  NN_RESULT_DO(gs::sdk::CreateNativeMemory(&memory, pMemory, memorySize,
    os::MemoryPermission_ReadWrite, gs::cpu::MemoryCacheability{0}));
  uint32_t image = 0;
  const Result result = detail::CreateImage(&detail::g_ImageSession, &image,
    preference, count, memory.value);
  if (result.IsFailure()) {
    gs::sdk::DestroyNativeMemory(memory);
    return result;
  }
  pPool->memoryHandle = memory.value;
  pPool->imageHandle = image;
  pPool->pMemory = pMemory;
  return Result{0};
}

void DestroyImagePool(ImagePoolType* pPool) {
  detail::DestroyImage(&detail::g_ImageSession, pPool->imageHandle);
  gs::sdk::DestroyNativeMemory(gs::NativeMemoryHandle{pPool->memoryHandle});
  pPool->memoryHandle = 0;
  pPool->imageHandle = 0;
}

Result CreateMetadataPool(MetadataPoolType* pPool, uint64_t count) {
  pPool->state = 0;
  pPool->id = 0;
  uint32_t id = 0;
  NN_RESULT_DO(detail::CreateMetadataPool(&id, &detail::g_DisplaySession,
    pPool, count));
  pPool->state = MetadataPoolStateCreated;
  pPool->id = id;
  return Result{0};
}

void DestroyMetadataPool(MetadataPoolType* pPool) {
  detail::DestroyMetadataPool(&detail::g_DisplaySession, pPool, pPool->id);
  pPool->state = MetadataPoolStateDestroyed;
  pPool->id = 0;
}

Result RequestReceiveImage(gs::NativeSyncHandle* pOutSync,
  VirtualDisplayType* pDisplay, ImagePoolType* pPool, uint32_t index,
  MetadataPoolType* pMetadataPool, uint8_t metadataIndex,
  gs::NativeSyncHandle releaseSync) {
  return detail::RequestReceiveImage(pDisplay, pOutSync, pPool,
    &detail::g_ImageSession, index, pMetadataPool, metadataIndex,
    releaseSync);
}

gs::NativeImageHandle GetImagePoolImageHandle(const ImagePoolType* pPool,
  uint32_t index) {
  return gs::sdk::CalculateNativeImageHandle(
    gs::NativeImageHandle{pPool->imageHandle}, index);
}

ImagePreference MakeImagePreference(uint16_t width, uint16_t height,
  ImageEncoding encoding) {
  switch (encoding) {
    case ImageEncoding_Raw: {
      ImagePreference preference = {};
      preference.encoding = encoding;
      preference.planeCount = 1;
      preference.widthMinusOne = width - 1;
      preference.heightMinusOne = height - 1;
      return preference;
    }
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

void GetMetadataFaceDetectionFlag(bool* pOutValue,
  const MetadataType* pMetadata) {
  *pOutValue = (pMetadata->flags & 1) != 0;
}

void GetMetadataPhotographedContentsFlag(bool* pOutValue,
  const MetadataType* pMetadata) {
  *pOutValue = (pMetadata->flags >> 1 & 1) != 0;
}

void GetMetadataSmallVideoOnlyFlag(bool* pOutValue,
  const MetadataType* pMetadata) {
  *pOutValue = (pMetadata->flags >> 2 & 1) != 0;
}

void GetMetadataStreamGeneration(uint8_t* pOutValue,
  const MetadataType* pMetadata) {
  *pOutValue = pMetadata->streamGeneration;
}

}
