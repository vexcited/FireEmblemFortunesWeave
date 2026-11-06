#include "nn/swkbd/swkbd_modeless.hpp"

#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/la/la_common_arguments.hpp"
#include "nn/os/system_event.hpp"

namespace nn::applet {

void RequestExitLibraryAppletAndWait(LibraryAppletHandle handle);
ChannelHandle OpenNamedChannelAsChild(const char* pName);
void CloseChannel(ChannelHandle handle);
void PushToChannel(ChannelHandle handle, StorageHandle storage);
bool TryPopFromChannel(StorageHandle* pOutStorage, ChannelHandle handle);

}

namespace nn::swkbd::detail {

namespace {

constexpr applet::AppletId AppletId_Swkbd = applet::AppletId(0x1010011);
constexpr applet::LibraryAppletMode LibraryAppletMode_Modeless =
  applet::LibraryAppletMode(6);
constexpr uint32_t SwkbdLaVersion = 0x160012;
constexpr size_t RequestHeaderSize = 5;
constexpr size_t SpeechResponseSize = 2008;

}

bool ModelessKeyboardImpl::Initialize(bool isWebBrowser) {
  m_Mutex.Lock();
  bool isStarted = m_Handle._p == nullptr;
  if (isStarted) {
    m_IsInitialized = false;
    m_IsWebBrowser = isWebBrowser;
    NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateLibraryApplet(&m_Handle,
      AppletId_Swkbd, LibraryAppletMode_Modeless));
    {
      la::CommonArgumentsWriter writer(SwkbdLaVersion);
      writer.PushToInChannel(m_Handle);
    }

    bool isInteractive = true;
    NN_ABORT_UNLESS_RESULT_SUCCESS(
      applet::StartLibraryApplet(m_Handle, &isInteractive));
  }

  m_Mutex.Unlock();
  return isStarted;
}

bool ModelessKeyboardImpl::IsRunning() const {
  return m_Handle._p != nullptr;
}

void ModelessKeyboardImpl::Finalize() {
  m_Mutex.Lock();
  if (m_Handle._p == nullptr) {
    m_Mutex.Unlock();
    return;
  }

  SendRequest_(CommandFromShimToSwkbd_Finalize, nullptr, 0);
  applet::RequestExitLibraryAppletAndWait(m_Handle);
  applet::JoinLibraryApplet(m_Handle);
  applet::LibraryAppletExitReason reason =
    applet::GetLibraryAppletExitReason(m_Handle);
  NN_ABORT_UNLESS(reason != applet::LibraryAppletExitReason_Unexpected);
  NN_ABORT_UNLESS(reason != applet::LibraryAppletExitReason_Abnormal);
  applet::CloseLibraryApplet(m_Handle);
  m_Handle._p = nullptr;
  m_Request = RequestData();
  m_IsInitialized = false;
  if (m_IsWebBrowser == true) {
    FinalizePrivateChannelForWebBrowser_();
  }

  m_Mutex.Unlock();
}

void ModelessKeyboardImpl::SendRequest_(CommandFromShimToSwkbd command,
  const void* pData, size_t size) {
  if (m_Handle._p == nullptr) {
    return;
  }

  applet::StorageHandle storage = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::CreateStorage(&storage, RequestHeaderSize + size));
  uint8_t isRequest = 1;
  WriteToStorage_(storage, 0, &isRequest, sizeof(isRequest));
  WriteToStorage_(storage, sizeof(isRequest), &command, sizeof(command));
  if (size != 0) {
    WriteToStorage_(storage, RequestHeaderSize, pData, size);
  }

  applet::PushToInteractiveInChannel(m_Handle, storage);
}

void ModelessKeyboardImpl::FinalizePrivateChannelForWebBrowser_() {
  if (m_WebBrowserChannel._p != nullptr) {
    applet::CloseChannel(m_WebBrowserChannel);
    m_WebBrowserChannel._p = nullptr;
  }
}

bool ModelessKeyboardImpl::Appear(const ModelessKeyboardArg& arg,
  Trigger trigger) {
  m_Mutex.Lock();
  State state = m_State;
  if (state == State_Hidden) {
    m_State = State_Appearing;
    m_Request.arg = arg;
    m_Request.trigger = trigger;
    m_Request.flags |= RequestFlag_Appear;
  }

  m_Mutex.Unlock();
  return state == State_Hidden;
}

bool ModelessKeyboardImpl::Disappear() {
  m_Mutex.Lock();
  State state = m_State;
  if (state == State_Shown) {
    m_State = State_Disappearing;
    m_Request.flags |= RequestFlag_Disappear;
  }

  m_Mutex.Unlock();
  return state == State_Shown;
}

ModelessKeyboardImpl::State ModelessKeyboardImpl::Calc() {
  m_Mutex.Lock();
  State state = State_None;
  if (m_Handle._p != nullptr) {
    if (os::TryWaitSystemEvent(applet::GetLibraryAppletExitEvent(m_Handle))) {
      applet::JoinLibraryApplet(m_Handle);
      applet::CloseLibraryApplet(m_Handle);
      m_Handle._p = nullptr;
      m_Request = RequestData();
      m_IsInitialized = false;
      if (m_ForcedFinalizeCallback != nullptr) {
        ForcedFinalizeArg arg;
        arg.pUserData = m_pForcedFinalizeUserData;
        m_ForcedFinalizeCallback(&arg);
      }

      if (m_IsWebBrowser == true) {
        FinalizePrivateChannelForWebBrowser_();
      }

      m_State = State_None;
    }
    else {
      if (m_Request.flags != 0) {
        SendRequest_(CommandFromShimToSwkbd_UpdateRequest, &m_Request,
          sizeof(m_Request));
        m_Request.flags = 0;
      }

      receiveInteractiveChannelRequest_();
      receiveWebBrowserChannelRequest_();
      state = m_State;
    }
  }

  m_Mutex.Unlock();
  return state;
}

void ModelessKeyboardImpl::receiveInteractiveChannelRequest_() {
  if (!os::TryWaitSystemEvent(
    applet::GetPopFromInteractiveOutChannelEvent(m_Handle))) {
    return;
  }

  applet::StorageHandle storage = {};
  while (applet::TryPopFromInteractiveOutChannel(&storage, m_Handle)) {
    ReceiveRequestData request = {};
    size_t offset = ReadRequest_(&request, storage);
    NN_ABORT_UNLESS(request.isRequest == 0);
    CalcCommandFromInteractiveChannel_(request.command, storage, offset);
  }
}

void ModelessKeyboardImpl::receiveWebBrowserChannelRequest_() {
  if (m_WebBrowserChannel._p == nullptr) {
    return;
  }

  applet::StorageHandle storage = {};
  while (applet::TryPopFromChannel(&storage, m_WebBrowserChannel)) {
    size_t size = static_cast<size_t>(applet::GetStorageSize(storage));
    SpeechRequest request;
    if (size > sizeof(request)) {
      continue;
    }

    NN_ABORT_UNLESS_RESULT_SUCCESS(
      applet::ReadFromStorage(storage, 0, &request, size));
    applet::ReleaseStorage(storage);
    if (m_ReceiveSpeechRequestCallback != nullptr) {
      m_ReceiveSpeechRequestCallback(request,
        m_pReceiveSpeechRequestUserData);
    }
  }
}

void ModelessKeyboardImpl::CalcCommandFromInteractiveChannel_(
  CommandFromSwkbdToShim command, applet::StorageHandle storage,
  size_t offset) {
  switch (command) {
    case CommandFromSwkbdToShim_Initialized:
      CalcInitialized_(storage, offset);
      break;
    case CommandFromSwkbdToShim_ChangedState:
      CalcChangedState_(storage, offset);
      break;
    case CommandFromSwkbdToShim_EntryConfirmed:
      CalcEntryConfirmed_(storage, offset);
      break;
    case CommandFromSwkbdToShim_EntryCanceled:
      CalcEntryCanceled_(storage, offset);
      break;
    case CommandFromSwkbdToShim_UpdateDisplayArea:
      CalcUpdateDisplayArea_(storage, offset);
      break;
    default:
      break;
  }

  applet::ReleaseStorage(storage);
}

void ModelessKeyboardImpl::CalcInitialized_(applet::StorageHandle storage,
  size_t offset) {
  InitializedArg arg = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::ReadFromStorage(storage, offset, &arg, sizeof(arg)));
  m_State = State_Hidden;
  m_IsInitialized = true;
  if (m_InitializedCallback != nullptr) {
    arg.pUserData = m_pInitializedUserData;
    m_InitializedCallback(&arg);
  }

  if (m_IsWebBrowser == true) {
    InitializePrivateChannelForWebBrowser_();
  }
}

void ModelessKeyboardImpl::CalcChangedState_(applet::StorageHandle storage,
  size_t offset) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::ReadFromStorage(storage, offset, &m_State, sizeof(m_State)));
}

void ModelessKeyboardImpl::CalcEntryConfirmed_(applet::StorageHandle storage,
  size_t offset) {
  EntryConfirmedArg arg = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::ReadFromStorage(storage, offset, &arg, sizeof(arg)));
  if (m_EntryConfirmedCallback != nullptr) {
    arg.pUserData = m_pEntryConfirmedUserData;
    m_EntryConfirmedCallback(&arg);
  }
}

void ModelessKeyboardImpl::CalcEntryCanceled_(applet::StorageHandle storage,
  size_t offset) {
  EntryCanceledArg arg = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::ReadFromStorage(storage, offset, &arg, sizeof(arg)));
  if (m_EntryCanceledCallback != nullptr) {
    arg.pUserData = m_pEntryCanceledUserData;
    m_EntryCanceledCallback(&arg);
  }
}

void ModelessKeyboardImpl::CalcUpdateDisplayArea_(
  applet::StorageHandle storage, size_t offset) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::ReadFromStorage(storage, offset,
    &m_DisplayArea, sizeof(m_DisplayArea)));
}

void ModelessKeyboardImpl::SetInitializedCallback(
  InitializedCallback callback, void* pUserData) {
  m_Mutex.Lock();
  m_InitializedCallback = callback;
  m_pInitializedUserData = pUserData;
  m_Mutex.Unlock();
}

void ModelessKeyboardImpl::SetForcedFinalizeCallback(
  ForcedFinalizeCallback callback, void* pUserData) {
  m_Mutex.Lock();
  m_ForcedFinalizeCallback = callback;
  m_pForcedFinalizeUserData = pUserData;
  m_Mutex.Unlock();
}

void ModelessKeyboardImpl::SetEntryConfirmedCallback(
  EntryConfirmedCallback callback, void* pUserData) {
  m_Mutex.Lock();
  m_EntryConfirmedCallback = callback;
  m_pEntryConfirmedUserData = pUserData;
  m_Mutex.Unlock();
}

void ModelessKeyboardImpl::SetEntryCanceledCallback(
  EntryCanceledCallback callback, void* pUserData) {
  m_Mutex.Lock();
  m_EntryCanceledCallback = callback;
  m_pEntryCanceledUserData = pUserData;
  m_Mutex.Unlock();
}

void ModelessKeyboardImpl::EnableBackspaceButton(bool isEnabled) {
  m_Mutex.Lock();
  m_Request.isBackspaceEnabled = isEnabled;
  m_Request.flags |= RequestFlag_Backspace;
  m_Mutex.Unlock();
}

void ModelessKeyboardImpl::EnableRightStickInput(bool isEnabled) {
  m_Mutex.Lock();
  m_Request.isRightStickInputEnabled = isEnabled;
  m_Request.flags |= RequestFlag_RightStick;
  m_Mutex.Unlock();
}

void ModelessKeyboardImpl::GetDisplayArea(DisplayArea* pOutArea) const {
  m_Mutex.Lock();
  *pOutArea = m_DisplayArea;
  m_Mutex.Unlock();
}

void ModelessKeyboardImpl::InquireDisplayArea(const ModelessKeyboardArg& arg,
  DisplayArea* pOutArea) {
  m_Mutex.Lock();
  if (m_IsInitialized == true) {
    SendRequest_(CommandFromShimToSwkbd_InquireDisplayArea, &arg,
      sizeof(arg));
    if (applet::WaitPopFromInteractiveOutChannelEvent(m_Handle)) {
      applet::StorageHandle storage = {};
      applet::TryPopFromInteractiveOutChannel(&storage, m_Handle);
      ReceiveRequestData request = {};
      size_t offset = ReadRequest_(&request, storage);
      NN_ABORT_UNLESS(request.isRequest == 0);
      NN_ABORT_UNLESS(request.command == CommandFromSwkbdToShim_DisplayArea);
      NN_ABORT_UNLESS_RESULT_SUCCESS(applet::ReadFromStorage(storage, offset,
        pOutArea, sizeof(*pOutArea)));
      applet::ReleaseStorage(storage);
    }
  }

  m_Mutex.Unlock();
}

size_t ModelessKeyboardImpl::ReadRequest_(ReceiveRequestData* pOut,
  applet::StorageHandle storage) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::ReadFromStorage(storage, 0,
    &pOut->isRequest, sizeof(pOut->isRequest)));
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::ReadFromStorage(storage,
    sizeof(pOut->isRequest), &pOut->command, sizeof(pOut->command)));
  return RequestHeaderSize;
}

void ModelessKeyboardImpl::SetReceiveSpeechRequestCallback(
  const ReceiveSpeechRequestCallback& callback, void* pUserData) {
  m_Mutex.Lock();
  m_ReceiveSpeechRequestCallback = callback;
  m_pReceiveSpeechRequestUserData = pUserData;
  m_Mutex.Unlock();
}

void ModelessKeyboardImpl::SendSpeechResponse(const SpeechResponse& response) {
  m_Mutex.Lock();
  applet::StorageHandle storage = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::CreateStorage(&storage, SpeechResponseSize));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::WriteToStorage(storage, 0, &response, SpeechResponseSize));
  applet::PushToChannel(m_WebBrowserChannel, storage);
  m_Mutex.Unlock();
}

void ModelessKeyboardImpl::WriteToStorage_(applet::StorageHandle storage,
  int64_t offset, const void* pData, size_t size) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::WriteToStorage(storage, offset, pData, size));
}

void ModelessKeyboardImpl::SetOpacity(float opacity) {
  m_Mutex.Lock();
  m_Request.opacity = opacity;
  m_Request.flags |= RequestFlag_Opacity;
  m_Mutex.Unlock();
}

void ModelessKeyboardImpl::InitializePrivateChannelForWebBrowser_() {
  m_WebBrowserChannel = applet::OpenNamedChannelAsChild("WebBrowser");
}

bool ModelessKeyboardImpl::isWebBrowserChannelOpened_() {
  return m_WebBrowserChannel._p != nullptr;
}

}
