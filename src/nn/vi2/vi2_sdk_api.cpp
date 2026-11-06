#include <atomic>

#include "nn/diag/diag_abort.hpp"
#include "nn/os/mutex.hpp"
#include "nn/vi2/vi2_frontend.hpp"
#include "nn/vi2/vi2_service_functions.hpp"

namespace nn::gs::sdk {

int CalculateNativeImageArraySize(size_t* pOutSize, size_t* pOutAlignment,
  const NativeImageFormatDescriptor& descriptor, uint32_t count);

}

namespace nn::gsv::imgdesc::impl::user::ounce {

enum DisplayAlphaMode : int {};

}

namespace nn::vi2 {

namespace detail {

struct LibraryVersion {
  uint64_t majorVersion;
  uint64_t minorVersion;
  uint64_t count;
  Frontend frontend;
};

extern char g_DefaultDisplayName[8];
extern os::MutexType g_InitializeLock;
extern ServiceFunctions g_ServiceFunctions;
extern LibraryVersion g_LibraryVersion;
extern bool g_IsConnected;
extern std::atomic<uint32_t> g_InitialBufferPermission;
extern std::atomic<uint32_t> g_InitialBufferContent;

}

using detail::g_Frontend;

namespace {

// The low half holds the bit values and the high half the bits that were
// changed from their defaults.
void ChangeBits(std::atomic<uint32_t>* pBits, uint32_t bits, bool isEnabled) {
  uint32_t expected = 0;
  uint32_t desired;

  do {
    const uint32_t current = expected & 0xffff;
    const uint32_t value = isEnabled ? current | bits : current & ~bits;
    const uint32_t mask = (expected >> 16) | bits;
    desired = (value & 0xffff) | (mask << 16);
  } while (!pBits->compare_exchange_weak(expected, desired,
    std::memory_order_relaxed));
}

void ResetBits(std::atomic<uint32_t>* pBits, uint32_t bits) {
  uint32_t expected = 0;
  uint32_t desired;

  do {
    const uint32_t mask = (expected >> 16) & ~bits;
    desired = (expected & 0xffff) | (mask << 16);
  } while (!pBits->compare_exchange_weak(expected, desired,
    std::memory_order_relaxed));
}

}

namespace sdk {

const detail::ServiceFunctions* GetFrontendVersion() {
  return &detail::g_ServiceFunctions;
}

const detail::LibraryVersion* GetLibraryVersion() {
  return &detail::g_LibraryVersion;
}

os::MutexType* GetInitializeLock() {
  return &detail::g_InitializeLock;
}

bool IsConnected() {
  return detail::g_IsConnected;
}

// Finalizing only waits for a running initialization.
void Finalize() {
  os::LockMutex(&detail::g_InitializeLock);
  os::UnlockMutex(&detail::g_InitializeLock);
}

BufferPreference MakeBufferPreference(uint16_t width, uint16_t height,
  gsv::imgdesc::impl::user::ounce::DisplayAlphaMode alphaMode) {
  BufferPreference preference = {};
  preference.format = 2;
  preference.widthMinusOne = uint16_t(width - 1);
  preference.heightMinusOne = uint16_t(height - 1);
  preference.alphaMode = uint32_t(alphaMode);
  return preference;
}

BufferPreference MakeBufferPreference_RGBX(uint16_t width, uint16_t height) {
  BufferPreference preference = {};
  preference.format = 3;
  preference.widthMinusOne = uint16_t(width - 1);
  preference.heightMinusOne = uint16_t(height - 1);
  return preference;
}

void OverrideDefaultDisplayName(const char* name) {
  char buffer[8] = {};

  if (name != nullptr) {
    for (int i = 0; i < 8 && name[i] != '\0'; ++i) {
      buffer[i] = name[i];
    }
  }

  __builtin_memcpy(detail::g_DefaultDisplayName, buffer, sizeof(buffer));
}

void OverrideInitialBufferPermission(BufferPermissionBits permission,
  BufferPermissionBits mask) {
  detail::g_InitialBufferPermission.store(
    (uint32_t(permission) & 0xffff) | (uint32_t(mask) << 16),
    std::memory_order_relaxed);
}

void ChangeBufferPermission(BufferPermissionBits bits, bool isEnabled) {
  ChangeBits(&detail::g_InitialBufferPermission, uint32_t(bits), isEnabled);
}

void ResetBufferPermission(BufferPermissionBits bits) {
  ResetBits(&detail::g_InitialBufferPermission, uint32_t(bits));
}

void ChangeBufferContent(BufferContentBits bits, bool isEnabled) {
  ChangeBits(&detail::g_InitialBufferContent, uint32_t(bits), isEnabled);
}

void ResetBufferContent(BufferContentBits bits) {
  ResetBits(&detail::g_InitialBufferContent, uint32_t(bits));
}

Result CreateBufferPoolWithTransferMemory(BufferPoolType* pPool,
  const BufferPreference& preference, uint64_t count,
  gsdrv::UniqueNativeHandle&& handle, uint64_t size,
  os::MemoryPermission permission) {
  gsdrv::UniqueNativeHandle memory;
  memory = handle.Release();
  return g_Frontend.sdkCreateBufferPoolWithTransferMemory(g_Frontend.context,
    pPool, preference, uint32_t(count), &memory, size, permission);
}

Result CreateBufferPoolWithProtectedMemory(BufferPoolType* pPool,
  const BufferPreference& preference, uint64_t count, uint64_t size) {
  return g_Frontend.sdkCreateBufferPoolWithProtectedMemory(g_Frontend.context,
    pPool, preference, count, size);
}

BufferDescriptor MakeRgba32BufferDescriptor(uint16_t width, uint16_t height,
  uint64_t stride) {
  return {gs::sdk::MakeRgba32ImageFormat(width, height, stride)};
}

Result CalculateRequiredBufferMemory(uint64_t* pOutSize,
  uint64_t* pOutAlignment, const BufferDescriptor& descriptor,
  uint64_t count) {
  const gs::sdk::NativeImageFormatDescriptor format = descriptor.format;
  size_t size = 0;
  size_t alignment = 0;
  const int result = gs::sdk::CalculateNativeImageArraySize(&size,
    &alignment, format, uint32_t(count));

  if (result != 0) {
    return {uint32_t(result)};
  }

  if (alignment <= 0x1000) {
    alignment = 0x1000;
  }

  *pOutSize = (size + alignment - 1) & ~(alignment - 1);
  *pOutAlignment = alignment;
  return {0};
}

}

}
