#include <algorithm>

#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/la/la_common_arguments.hpp"

namespace nn::la {

enum LibraryAppletCreateHookResult : int32_t {
  LibraryAppletCreateHookResult_Continue = 0,
  LibraryAppletCreateHookResult_Cancel = 1,
};

struct LibraryAppletCreateHookArg {
  void Initialize(applet::AppletId appletId, applet::LibraryAppletMode mode,
    bool isExtremity);

  applet::AppletId appletId;
  applet::LibraryAppletMode mode;
  bool isExtremity;
};

using LibraryAppletCreateHook =
  LibraryAppletCreateHookResult (*)(const LibraryAppletCreateHookArg& arg);

Result StartLibraryApplet(applet::LibraryAppletHandle handle,
  bool isExtremity);

namespace detail {

extern LibraryAppletCreateHook g_LibraryAppletCreateHook;
extern bool g_IsJumpLibraryAppletUsed;

}

void LibraryAppletCreateHookArg::Initialize(applet::AppletId appletId,
  applet::LibraryAppletMode mode, bool isExtremity) {
  this->appletId = appletId;
  this->mode = mode;
  this->isExtremity = isExtremity;
}

namespace {

constexpr Result ResultCreationCanceled = {0x890};
constexpr Result ResultCanceled = {0x690};
constexpr uint32_t ResultUnexpectedExit = 0xa90;
constexpr uint32_t ResultAbnormalExit = 0x290;

inline LibraryAppletCreateHookResult InvokeHook(
  const LibraryAppletCreateHookArg& arg) {
  if (detail::g_LibraryAppletCreateHook == nullptr) {
    return LibraryAppletCreateHookResult_Continue;
  }

  return detail::g_LibraryAppletCreateHook(arg);
}

inline Result CreateLibraryAppletImpl(applet::LibraryAppletHandle* pOutHandle,
  applet::AppletId appletId, applet::LibraryAppletMode mode,
  bool isExtremity) {
  const LibraryAppletCreateHookArg arg = {appletId, mode, isExtremity};
  if (InvokeHook(arg) == LibraryAppletCreateHookResult_Cancel) {
    return ResultCreationCanceled;
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::CreateLibraryApplet(pOutHandle, appletId, mode));
  return Result();
}

inline void PushToInChannelImpl(applet::LibraryAppletHandle handle,
  const void* pData, size_t size) {
  applet::StorageHandle storage = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateStorage(&storage, size));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::WriteToStorage(storage, 0, pData, size));
  applet::PushToInChannel(handle, storage);
}

inline void PopFromOutChannelImpl(applet::LibraryAppletHandle handle,
  void* pBuffer, size_t bufferSize, size_t* pOutSize) {
  applet::StorageHandle storage = {};
  size_t size = 0;
  if (applet::TryPopFromOutChannel(&storage, handle)) {
    size = std::min(bufferSize,
      static_cast<size_t>(applet::GetStorageSize(storage)));
    if (pBuffer != nullptr) {
      NN_ABORT_UNLESS_RESULT_SUCCESS(
        applet::ReadFromStorage(storage, 0, pBuffer, size));
    }

    applet::ReleaseStorage(storage);
  }

  if (pOutSize != nullptr) {
    *pOutSize = size;
  }
}

}

void SetLibraryAppletCreateHook(LibraryAppletCreateHook hook) {
  detail::g_LibraryAppletCreateHook = hook;
}

LibraryAppletCreateHookResult InvokeLibraryAppletCreateHook(
  const LibraryAppletCreateHookArg& arg) {
  return InvokeHook(arg);
}

void PushToInChannel(applet::LibraryAppletHandle handle, const void* pData,
  size_t size) {
  PushToInChannelImpl(handle, pData, size);
}

void PopFromOutChannel(applet::LibraryAppletHandle handle, void* pBuffer,
  size_t bufferSize, size_t* pOutSize) {
  PopFromOutChannelImpl(handle, pBuffer, bufferSize, pOutSize);
}

Result CreateLibraryAppletEasy(applet::LibraryAppletHandle* pOutHandle,
  applet::AppletId appletId, applet::LibraryAppletMode mode,
  bool isExtremity) {
  return CreateLibraryAppletImpl(pOutHandle, appletId, mode, isExtremity);
}

void UseJumpLibraryApplet(bool isUsed) {
  detail::g_IsJumpLibraryAppletUsed = isUsed;
}

Result StartLibraryApplet(applet::LibraryAppletHandle handle,
  bool isExtremity) {
  if (detail::g_IsJumpLibraryAppletUsed) {
    applet::JumpLibraryApplet(handle);
  }

  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::StartLibraryApplet(handle, &isExtremity));
  applet::JoinLibraryApplet(handle);
  switch (applet::GetLibraryAppletExitReason(handle)) {
    case applet::LibraryAppletExitReason_Canceled:
      return ResultCanceled;
    case applet::LibraryAppletExitReason_Unexpected: {
      const Result result = {ResultUnexpectedExit};
      diag::detail::AbortImpl(&result);
    }
    case applet::LibraryAppletExitReason_Abnormal: {
      const Result result = {ResultAbnormalExit};
      diag::detail::AbortImpl(&result);
    }
    default:
      return Result();
  }
}

Result StartLibraryAppletEasy(applet::AppletId appletId,
  const CommonArgumentsWriter& writer, const void* inData, size_t inDataSize,
  void* outData, size_t outDataSize, size_t* outActualSize,
  bool isExtremity) {
  applet::LibraryAppletHandle handle = {};
  NN_RESULT_DO(CreateLibraryAppletImpl(&handle, appletId,
    applet::LibraryAppletMode(), isExtremity));
  writer.PushToInChannel(handle);
  PushToInChannelImpl(handle, inData, inDataSize);
  const Result result = StartLibraryApplet(handle, isExtremity);
  if (result.IsSuccess()) {
    PopFromOutChannelImpl(handle, outData, outDataSize, outActualSize);
  }

  applet::CloseLibraryApplet(handle);
  return result;
}

}
