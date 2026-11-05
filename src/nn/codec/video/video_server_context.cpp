#include "nn/codec/video_server_context.hpp"
#include "nn/codec/video_shim.hpp"

namespace nn::codec::video::detail {

namespace {

os::SdkMutexType g_Mutex;
ipc::VideoDecServiceCreator* g_VideoDecServiceCreator;
ipc::VideoEncServiceCreator* g_VideoEncServiceCreator;
ServiceObjectPool<ipc::VideoDecServiceCreator, 1> g_VideoDecServiceCreatorPool;
ServiceObjectPool<ipc::VideoEncServiceCreator, 1> g_VideoEncServiceCreatorPool;

uint32_t CreateService(const tipc::SessionHandle* creator,
  tipc::UniqueHandle* handle) {
  uint8_t* message = tipc::GetMessageBuffer();
  tipc::WriteMessage<uint64_t>(message, 0, 0x11);
  uint32_t result = tipc::SendSyncRequest(creator);

  if (result != 0) {
    return result;
  }

  result = tipc::ReadMessage<uint32_t>(message, 16);
  tipc::WriteMessage<uint64_t>(message, 0, 0x8000000100000011);
  tipc::WriteMessage<uint32_t>(message, 8, 0x20);

  if (result != 0) {
    return result;
  }

  *handle = tipc::UniqueHandle(tipc::ReadMessage<uint32_t>(message, 12));
  return 0;
}

}

Result InitializeServerContext(bool isResolutionUnlimitedModeEnabled,
  const gsv::VideoDecoderLibraryVersion& version) {
  g_Mutex.Lock();
  NN_ABORT_UNLESS_RESULT_SUCCESS(gsv::GetUserSession()->Invoke(0x395));

  {
    gsdrv::UniqueNativeHandle handle;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      gsv::GetUserSession()->OpenVideoDecServiceCreator({&handle},
        isResolutionUnlimitedModeEnabled, version));
    g_VideoDecServiceCreator =
      g_VideoDecServiceCreatorPool.Allocate(handle.Release());
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(gsv::GetUserSession()->Invoke(0x3f9));

  {
    gsdrv::UniqueNativeHandle handle;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      gsv::GetUserSession()->OpenVideoEncServiceCreator({&handle}));
    g_VideoEncServiceCreator =
      g_VideoEncServiceCreatorPool.Allocate(handle.Release());
  }

  g_Mutex.Unlock();
  return {0};
}

Result InitializeServerContextForSystem(SystemUserName name) {
  g_Mutex.Lock();
  NN_ABORT_UNLESS_RESULT_SUCCESS(gsv::GetUserSession()->Invoke(0x395));

  {
    gsdrv::UniqueNativeHandle handle;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      gsv::GetUserSession()->OpenVideoDecServiceCreatorForSystem({&handle},
        name));
    g_VideoDecServiceCreator =
      g_VideoDecServiceCreatorPool.Allocate(handle.Release());
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(gsv::GetUserSession()->Invoke(0x3f9));

  {
    gsdrv::UniqueNativeHandle handle;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      gsv::GetUserSession()->OpenVideoEncServiceCreatorForSystem({&handle},
        name));
    g_VideoEncServiceCreator =
      g_VideoEncServiceCreatorPool.Allocate(handle.Release());
  }

  g_Mutex.Unlock();
  return {0};
}

void FinalizeServerContext() {
  g_Mutex.Lock();
  g_VideoDecServiceCreatorPool.Free(g_VideoDecServiceCreator);
  g_VideoEncServiceCreatorPool.Free(g_VideoEncServiceCreator);
  g_VideoDecServiceCreator = nullptr;
  g_VideoEncServiceCreator = nullptr;
  gsv::GetUserSession()->Invoke(0x397);
  gsv::GetUserSession()->Invoke(0x3fb);
  g_Mutex.Unlock();
}

Result CreateVideoDecoderService(tipc::UniqueHandle* handle) {
  g_Mutex.Lock();
  const uint32_t result = CreateService(g_VideoDecServiceCreator, handle);
  g_Mutex.Unlock();
  return {result};
}

Result CreateVideoEncoderService(tipc::UniqueHandle* handle) {
  g_Mutex.Lock();
  const uint32_t result = CreateService(g_VideoEncServiceCreator, handle);
  g_Mutex.Unlock();
  return {result};
}

}
