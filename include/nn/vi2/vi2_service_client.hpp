#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/codec/video_server_context.hpp"
#include "nn/codec/video_shim.hpp"
#include "nn/vi2/vi2_service_functions.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/memory_permission.hpp"
#include "nn/os/synchronization.hpp"
#include "nn/result.hpp"
#include "nn/tipc/tipc_message.hpp"

namespace nn::vi2::detail {

// The client side of the vi2 display service. Requests go through the
// session opened from the gsv user session, serialized by the mutex.
class ServiceClient {
public:
  static constexpr Result ResultNotConnected = {0x7ce72};
  static constexpr Result ResultOutOfSession = {0x1872};
  static constexpr uint64_t LibraryVersion = 0x300040000;

  Result Initialize();
  void Finalize();

  Result Connect(uint64_t version);
  void Disconnect();

  Result GetMaxDisplayIndex(uint32_t* pOutIndex);
  Result GetDisplayEvent(gsdrv::UniqueNativeHandle* pOutHandle,
    uint32_t eventId);
  Result DuplicateEvent(gsdrv::UniqueNativeHandle* pOutHandle,
    uint32_t eventId, uint32_t handle);
  Result GetMaxLayerIndex(uint32_t* pOutIndex);
  Result GetLayerEvent(gsdrv::UniqueNativeHandle* pOutHandle,
    uint32_t eventId);
  void ReleaseEvent(uint32_t eventId);
  Result ReadSharedData(void* buffer, size_t size);

  Result CreateNativeImage(uint32_t* pOutHandle,
    const ImageDescriptor& descriptor, uint32_t count, uint32_t memory);
  Result CreateNativeImageForSystem(uint32_t* pOutHandle,
    const ImageDescriptor& descriptor, uint32_t count, uint32_t memory);
  void DestroyNativeImage(uint32_t image);
  Result CreateAliasImage(uint32_t image, uint32_t count);
  void DestroyAliasImage(uint32_t image);

  Result OpenDisplay(uint64_t display, uint32_t index);
  void CloseDisplay(uint64_t display);
  Result CreateEndpoint(uint64_t endpoint, uint64_t display,
    uint64_t settings);
  Result CreateLayer(uint64_t layer, uint64_t endpoint);
  void DestroyLayer(uint64_t layer, uint64_t endpoint);
  Result CreateVsyncEvent(uint64_t display, uint32_t eventId);
  void DestroyVsyncEvent(uint64_t display, uint32_t eventId);
  Result RegisterLayerBuffer(uint64_t layer, uint64_t pool);
  void UnregisterLayerBuffer(uint64_t layer);
  Result SetLayerSwapInterval(uint64_t layer, uint32_t interval,
    uint32_t extended);
  void ClearLayerSwapInterval(uint64_t layer);
  Result GetLayerFrameNumber(uint64_t* pOutValue, uint64_t layer);
  Result PresentLayerBuffer(uint64_t* pOutFrame, Uuid* pOutFence,
    uint64_t layer, uint8_t slot, uint32_t flags,
    const ImageDescriptor& descriptor, const Uuid& sync);
  Result AcquireLayerBuffer(uint64_t* pOutFrame, Uuid* pOutFence,
    uint64_t layer, uint8_t slot, const ImageDescriptor& descriptor);

  Result SetDisplayRefreshRateCapability(uint64_t display, uint64_t rate,
    uint64_t capability);
  Result QueryDisplayRefreshRate(uint64_t* pOutValue, uint64_t display);
  Result CreateRefreshRateEvent(uint64_t display, uint32_t eventId);
  void DestroyRefreshRateEvent(uint64_t display, uint32_t eventId);
  Result SetDisplayHdrOutputFormatCapability(uint64_t display,
    uint64_t format, uint64_t capability);
  Result QueryDisplayHdrStatus(uint64_t* pOutFormat, uint16_t* pOutLuminance,
    uint64_t display);
  Result CreateHdrStatusEvent(uint64_t display, uint32_t eventId);
  void DestroyHdrStatusEvent(uint64_t display, uint32_t eventId);
  Result QueryDisplayHdrPaperWhite(uint16_t* pOutValue, uint64_t display);
  Result CreateHdrPaperWhiteEvent(uint64_t display, uint32_t eventId);
  void DestroyHdrPaperWhiteEvent(uint64_t display, uint32_t eventId);
  Result QueryDisplayBufferMaxResolution(uint64_t* pOutValue,
    uint64_t display);
  Result CreateBufferMaxResolutionEvent(uint64_t display, uint32_t eventId);
  void DestroyBufferMaxResolutionEvent(uint64_t display, uint32_t eventId);
  Result QueryDisplayModeCapability(uint64_t* pOutRefreshRates,
    uint64_t* pOutHdrOutputFormats, uint64_t* pOutVrrRefreshRates,
    uint64_t display);
  Result CreateModeCapabilityEvent(uint64_t display, uint32_t eventId);
  void DestroyModeCapabilityEvent(uint64_t display, uint32_t eventId);

  Result GetMaxTimestampRecorderIndex(uint32_t* pOutIndex);
  Result InitializeTimestampRecorders(uint32_t maxIndex);
  Result GetRecordedTimestamps(uint64_t* pOutCount, bool* pOutIsValid,
    uint32_t index, uint64_t checkpoints, uint64_t* buffer, size_t count);
  Result SetLayerHdrMetadata(uint64_t layer, uint64_t metadata);
  Result SetLayerHdrBezierMetadata(uint64_t layer, float kneeX, float kneeY,
    float anchor);
  Result ClearLayerHdrMetadata(uint64_t layer);
  Result QueryDisplayPanelIdentifier(PanelIdentifierData* pOutValue,
    uint64_t display);
  Result QueryAvailableRefreshRates(void* buffer, uint32_t count,
    uint8_t* pOutCount, uint64_t display);
  Result CreateAvailableRefreshRatesEvent(uint64_t display, uint32_t eventId);
  void DestroyAvailableRefreshRatesEvent(uint64_t display, uint32_t eventId);

private:
  // Every request runs with the client locked and fails without a session.
  template <typename Function>
  [[gnu::always_inline]] Result Call(Function function) {
    m_Mutex.Lock();

    if (m_pSession == nullptr) {
      m_Mutex.Unlock();
      return ResultNotConnected;
    }

    const Result result = function(m_pSession);
    m_Mutex.Unlock();
    return result;
  }

  template <typename WriteRequest, typename ReadReply>
  [[gnu::always_inline]] static Result Invoke(
    const tipc::SessionHandle* session, uint64_t requestHeader,
    uint64_t replyHeader, WriteRequest writeRequest, ReadReply readReply) {
    uint8_t* message = tipc::GetMessageBuffer();
    writeRequest(message);
    tipc::WriteMessage<uint64_t>(message, 0, requestHeader);
    const uint32_t result = tipc::Invoke(session, message, replyHeader);

    if (result != 0) {
      gsdrv::tipc1::CheckIpcResult({result});
      return {result};
    }

    readReply(message);
    return {0};
  }

  // Replies carry a moved handle in front of the result word.
  template <typename WriteRequest>
  [[gnu::always_inline]] static Result ReceiveHandle(
    const tipc::SessionHandle* session, uint64_t requestHeader,
    uint32_t command, gsdrv::UniqueNativeHandle* pOutHandle,
    WriteRequest writeRequest) {
    uint8_t* message = tipc::GetMessageBuffer();
    writeRequest(message);
    tipc::WriteMessage<uint64_t>(message, 0, requestHeader);
    uint32_t result;

    {
      tipc::UniqueHandle handle;
      result = tipc::SendSyncRequest(session);

      if (result == 0) {
        tipc::WriteMessage<uint64_t>(message, 0,
          0x8000000100000000 | command);
        tipc::WriteMessage<uint32_t>(message, 8, 0x20);
        handle =
          tipc::UniqueHandle(tipc::ReadMessage<uint32_t>(message, 12));
        result = tipc::ReadMessage<uint32_t>(message, 16);

        if (result == 0) {
          *pOutHandle = static_cast<tipc::UniqueHandle&&>(handle);
        }
      }
    }

    if (result != 0) {
      gsdrv::tipc1::CheckIpcResult({result});
    }

    return {result};
  }

  os::SdkMutexType m_Mutex;
  codec::video::detail::ServiceObjectPool<tipc::ClientSession, 1>
    m_SessionPool;
  tipc::ClientSession* m_pSession;
};

}

