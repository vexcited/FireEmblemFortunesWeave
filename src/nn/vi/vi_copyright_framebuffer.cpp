#include "nn/diag/diag_abort.hpp"
#include "nn/os/memory_permission.hpp"
#include "nn/vi/vi_layer.hpp"

namespace nn::gsv::imgdesc::impl::user::ounce {

enum DisplayAlphaMode : int32_t {};

}

namespace nn::vi2 {

struct BufferPreference {
  alignas(8) uint8_t storage[0x40];
};

enum BufferPermissionBits : int32_t {};
enum ImageTransform : int32_t {};

Result CreateDisplay(DisplayType* pDisplay, const char* pName);
void DestroyDisplay(DisplayType* pDisplay);
Result CreateEndpoint(EndpointType* pEndpoint, const char* pName,
  const DisplayType* pDisplay);
void DestroyEndpoint(EndpointType* pEndpoint);
Result CreateLayer(LayerType* pLayer, const EndpointType* pEndpoint);
void DestroyLayer(LayerType* pLayer);
Result CalculateRequiredBufferMemory(uint64_t* pOutSize,
  uint64_t* pOutAlignment, const BufferPreference& preference,
  uint64_t count);
Result CreateBufferPool(BufferPoolType* pPool,
  const BufferPreference& preference, uint64_t count, void* pMemory,
  size_t size, os::MemoryPermission permission);
void DestroyBufferPool(BufferPoolType* pPool);
Result RegisterLayerBuffer(LayerType* pLayer, uint32_t slot,
  const BufferPoolType* pPool, uint64_t index);
void UnregisterLayerBuffer(LayerType* pLayer, uint32_t slot, uint32_t count);
Result AcquireLayerBuffer(uint32_t* pOutIndex, gs::NativeSyncHandle* pOutSync,
  LayerType* pLayer);
void PresentLayerBuffer(LayerType* pLayer, uint32_t index,
  const gs::NativeSyncHandle& sync);
void SetLayerNextPermission(LayerType* pLayer,
  BufferPermissionBits permission, bool isEnabled);
Result BlankBufferPoolImage(BufferPoolType* pPool, uint64_t index);
Result WriteBufferPoolImage(BufferPoolType* pPool, uint64_t index,
  uint16_t x, uint16_t y, uint16_t width, uint16_t height,
  const void* pImage, size_t size, ImageTransform transform);

namespace sdk {

enum RotationResolveMode : int32_t {};

BufferPreference MakeBufferPreference(uint16_t width, uint16_t height,
  gsv::imgdesc::impl::user::ounce::DisplayAlphaMode alphaMode);
void SetLayerNextRotationResolveMode(LayerType* pLayer,
  RotationResolveMode mode);

}

}

namespace nn::gs {

void WaitNativeSync(const NativeSyncHandle& sync);

}

namespace nn::vi {

namespace {

constexpr int SizeMax = 0x10000;
constexpr int BufferIndexMask = 1;
constexpr auto PremultipliedAlpha =
  gsv::imgdesc::impl::user::ounce::DisplayAlphaMode(1);
constexpr auto ReadWritePermission = os::MemoryPermission(3);
constexpr auto LayerPermission = vi2::BufferPermissionBits(3);
constexpr auto RotationResolveModeFixed = vi2::sdk::RotationResolveMode(1);

}

void CopyrightFramebuffer::Initialize(void* pMemory, size_t size, int width,
  int height) {
  m_Mutex.Lock();
  NN_ABORT_UNLESS(static_cast<uint32_t>(width) < SizeMax);
  NN_ABORT_UNLESS(static_cast<uint32_t>(height) < SizeMax);
  NN_ABORT_UNLESS_RESULT_SUCCESS(vi2::CreateDisplay(&m_Display, "cpyrght"));
  NN_ABORT_UNLESS_RESULT_SUCCESS(vi2::CreateEndpoint(&m_Endpoint, "default",
    &m_Display));
  NN_ABORT_UNLESS_RESULT_SUCCESS(vi2::CreateLayer(&m_Layer, &m_Endpoint));

  const vi2::BufferPreference preference = vi2::sdk::MakeBufferPreference(
    width, height, PremultipliedAlpha);
  uint64_t requiredSize = 0;
  uint64_t requiredAlignment = 0;
  NN_ABORT_UNLESS_RESULT_SUCCESS(vi2::CalculateRequiredBufferMemory(
    &requiredSize, &requiredAlignment, preference, BufferCount));
  NN_ABORT_UNLESS_RESULT_SUCCESS(vi2::CreateBufferPool(&m_BufferPool,
    preference, BufferCount, pMemory, size, ReadWritePermission));
  for (int i = 0; i < BufferCount; i++) {
    NN_ABORT_UNLESS_RESULT_SUCCESS(vi2::RegisterLayerBuffer(&m_Layer, i,
      &m_BufferPool, i));
  }
  for (int i = 0; i < BufferCount; i++) {
    uint32_t index = 0;
    SyncHandle sync = {};
    NN_ABORT_UNLESS_RESULT_SUCCESS(vi2::AcquireLayerBuffer(&index,
      reinterpret_cast<gs::NativeSyncHandle*>(&sync), &m_Layer));
    m_Syncs[index] = sync;
  }
  vi2::SetLayerNextPermission(&m_Layer, LayerPermission, true);
  m_Index = 0;
  m_Width = width;
  m_Height = height;
  m_IsInitialized = true;
  m_Mutex.Unlock();
}

void CopyrightFramebuffer::Finalize() {
  m_Mutex.Lock();
  if (m_IsInitialized == true) {
    for (int i = 0; i < BufferCount; i++) {
      vi2::UnregisterLayerBuffer(&m_Layer, i, 1);
    }
    for (int i = 0; i < BufferCount; i++) {
      gs::WaitNativeSync(
        *reinterpret_cast<const gs::NativeSyncHandle*>(&m_Syncs[i]));
      m_Syncs[i] = {};
    }
    m_Index = 0;
    m_Width = 0;
    m_Height = 0;
    vi2::DestroyBufferPool(&m_BufferPool);
    vi2::DestroyLayer(&m_Layer);
    vi2::DestroyEndpoint(&m_Endpoint);
    vi2::DestroyDisplay(&m_Display);
    m_IsInitialized = false;
  }
  m_Mutex.Unlock();
}

// The pool counts rows from the bottom, so top left images are flipped. The
// acquired fence goes back to the slot just presented.
void CopyrightFramebuffer::WriteImage(const void* pImage, size_t size, int x,
  int y, int width, int height, gs::sdk::OriginMode mode) {
  m_Mutex.Lock();
  NN_ABORT_UNLESS(m_IsInitialized);
  NN_ABORT_UNLESS(static_cast<uint32_t>(x) < SizeMax);
  NN_ABORT_UNLESS(static_cast<uint32_t>(y) < SizeMax);
  NN_ABORT_UNLESS(static_cast<uint32_t>(width) < SizeMax);
  NN_ABORT_UNLESS(static_cast<uint32_t>(height) < SizeMax);

  const uint32_t index = m_Index;
  SyncHandle& sync = m_Syncs[index];
  gs::WaitNativeSync(*reinterpret_cast<const gs::NativeSyncHandle*>(&sync));
  NN_ABORT_UNLESS_RESULT_SUCCESS(vi2::BlankBufferPoolImage(&m_BufferPool,
    index));
  const bool isFlipped = mode == 0;
  const int top = isFlipped ? m_Height - (height + y) : y;
  NN_ABORT_UNLESS_RESULT_SUCCESS(vi2::WriteBufferPoolImage(&m_BufferPool,
    index, x, top, width, height, pImage, size,
    vi2::ImageTransform(isFlipped)));
  vi2::sdk::SetLayerNextRotationResolveMode(&m_Layer,
    RotationResolveModeFixed);
  const SyncHandle noSync = {};
  vi2::PresentLayerBuffer(&m_Layer, index,
    *reinterpret_cast<const gs::NativeSyncHandle*>(&noSync));

  uint32_t nextIndex = 0;
  SyncHandle nextSync = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(vi2::AcquireLayerBuffer(&nextIndex,
    reinterpret_cast<gs::NativeSyncHandle*>(&nextSync), &m_Layer));
  sync = nextSync;
  m_Index = ~m_Index & BufferIndexMask;
  m_Mutex.Unlock();
}

}
