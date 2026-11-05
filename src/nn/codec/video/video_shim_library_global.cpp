#include "nn/codec/video_shim.hpp"

namespace nn::codec::video::detail {

namespace {

constexpr gsv::VideoDecoderLibraryVersion DefaultLibraryVersion = {
  {0x30000, 3}};

constexpr Result ResultLibraryNotInitialized = {0x106c6f};

}

[[gnu::noinline]] ShimLibraryGlobal::ShimLibraryGlobal()
  : m_Mutex(), m_DecServicePool(), m_EncServicePool(), m_ReferenceCount(0),
    m_IsResolutionUnlimitedModeEnabled(false) {}

void ShimLibraryGlobal::SetResolutionUnlimitedModeEnabled(bool isEnabled) {
  m_Mutex.Lock();
  m_IsResolutionUnlimitedModeEnabled = isEnabled;
  m_Mutex.Unlock();
}

[[gnu::noinline]] Result ShimLibraryGlobal::Initialize() {
  m_Mutex.Lock();

  if (m_ReferenceCount == 0) {
    const bool isEnabled = m_IsResolutionUnlimitedModeEnabled;
    ResetServicePools();
    const Result result =
      InitializeServerContext(isEnabled, DefaultLibraryVersion);

    if (result.IsFailure()) {
      m_Mutex.Unlock();
      return result;
    }
  }

  ++m_ReferenceCount;
  m_Mutex.Unlock();
  return {0};
}

Result ShimLibraryGlobal::InitializeForTest(
  const gsv::VideoDecoderLibraryVersion& version) {
  m_Mutex.Lock();

  if (m_ReferenceCount == 0) {
    const bool isEnabled = m_IsResolutionUnlimitedModeEnabled;
    ResetServicePools();
    const Result result = InitializeServerContext(isEnabled, version);

    if (result.IsFailure()) {
      m_Mutex.Unlock();
      return result;
    }
  }

  ++m_ReferenceCount;
  m_Mutex.Unlock();
  return {0};
}

Result ShimLibraryGlobal::InitializeForSystem(SystemUserName name) {
  m_Mutex.Lock();

  if (m_ReferenceCount == 0) {
    ResetServicePools();
    const Result result = InitializeServerContextForSystem(name);

    if (result.IsFailure()) {
      m_Mutex.Unlock();
      return result;
    }
  }

  ++m_ReferenceCount;
  m_Mutex.Unlock();
  return {0};
}

[[gnu::noinline]] void ShimLibraryGlobal::Finalize() {
  m_Mutex.Lock();

  if (--m_ReferenceCount == 0) {
    std::destroy_at(&m_DecServicePool);
    std::destroy_at(&m_EncServicePool);
    FinalizeServerContext();
  }

  m_Mutex.Unlock();
}

Result ShimLibraryGlobal::CreateVideoDecService(
  ipc::VideoDecService** service) {
  m_Mutex.Lock();
  Result result = ResultLibraryNotInitialized;

  if (m_ReferenceCount != 0) {
    tipc::UniqueHandle handle;
    result = CreateVideoDecoderService(&handle);

    if (result.IsSuccess()) {
      *service = m_DecServicePool.Allocate(handle.Release());
    }
  }

  m_Mutex.Unlock();
  return result;
}

void ShimLibraryGlobal::DestroyVideoDecService(
  ipc::VideoDecService* service) {
  m_Mutex.Lock();

  if (m_ReferenceCount != 0) {
    m_DecServicePool.Free(service);
  }

  m_Mutex.Unlock();
}

Result ShimLibraryGlobal::CreateVideoEncService(
  ipc::VideoEncService** service) {
  m_Mutex.Lock();
  Result result = ResultLibraryNotInitialized;

  if (m_ReferenceCount != 0) {
    tipc::UniqueHandle handle;
    result = CreateVideoEncoderService(&handle);

    if (result.IsSuccess()) {
      *service = m_EncServicePool.Allocate(handle.Release());
    }
  }

  m_Mutex.Unlock();
  return result;
}

void ShimLibraryGlobal::DestroyVideoEncService(
  ipc::VideoEncService* service) {
  m_Mutex.Lock();

  if (m_ReferenceCount != 0) {
    m_EncServicePool.Free(service);
  }

  m_Mutex.Unlock();
}

Result CreateTransferMemory(gsdrv::UniqueNativeHandle* handle, void* address,
  size_t size) {
  os::TransferMemoryType transferMemory = {};
  const Result result = os::CreateTransferMemory(&transferMemory, address,
    size, os::MemoryPermission_None);

  if (result.IsFailure()) {
    return result;
  }

  const uint32_t nativeHandle = os::DetachTransferMemory(&transferMemory);
  os::DestroyTransferMemory(&transferMemory);
  *handle = nativeHandle;
  return result;
}

}

namespace nn::codec::video {

void Initialize() {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    detail::ShimLibraryGlobal::GetInstance().Initialize());
}

void Finalize() {
  detail::ShimLibraryGlobal::GetInstance().Finalize();
}

}
