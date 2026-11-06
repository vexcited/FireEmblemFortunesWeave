#pragma once

#include <stddef.h>
#include <stdint.h>

#include <variant>

#include "nn/applet/applet_types.hpp"
#include "nn/os/mutex.hpp"
#include "nn/swkbd/swkbd_types.hpp"

namespace nn::applet {

struct ChannelHandle {
  void* _p;
};

}

namespace nn::swkbd {

struct ModelessKeyboardArg {
  KeyboardMode keyboardMode = KeyboardMode_ASCII;
  uint8_t _reserved0[48] = {};
  int32_t _reserved1 = 0;
  float opacity = 1.0f;
  bool isUseSound = false;
  bool isUseBlurBackground = true;
  uint8_t _reserved2[126] = {};
};

static_assert(sizeof(ModelessKeyboardArg) == 188);

struct DisplayArea {
  int16_t data[25] = {};
};

struct InitializedArg {
  void* pUserData;
};

struct ForcedFinalizeArg {
  void* pUserData;
};

struct EntryConfirmedArg {
  void* pUserData;
};

struct EntryCanceledArg {
  void* pUserData;
};

struct RequestBasicSpeechInfo {
  uint32_t value;
};

struct ResponseBasicSpeechInfo {
  int32_t result;
  char16_t text[1000];
};

using SpeechRequest = std::variant<RequestBasicSpeechInfo>;
using SpeechResponse = std::variant<ResponseBasicSpeechInfo>;
using InitializedCallback = void (*)(const InitializedArg* pArg);
using ForcedFinalizeCallback = void (*)(const ForcedFinalizeArg* pArg);
using EntryConfirmedCallback = void (*)(const EntryConfirmedArg* pArg);
using EntryCanceledCallback = void (*)(const EntryCanceledArg* pArg);
using ReceiveSpeechRequestCallback = void (*)(const SpeechRequest& request,
  void* pUserData);

enum CommandFromShimToSwkbd : int32_t {
  CommandFromShimToSwkbd_Finalize,
  CommandFromShimToSwkbd_UpdateRequest,
  CommandFromShimToSwkbd_InquireDisplayArea,
};

enum CommandFromSwkbdToShim : int32_t {
  CommandFromSwkbdToShim_Initialized,
  CommandFromSwkbdToShim_ChangedState,
  CommandFromSwkbdToShim_EntryConfirmed,
  CommandFromSwkbdToShim_EntryCanceled,
  CommandFromSwkbdToShim_UpdateDisplayArea,
  CommandFromSwkbdToShim_DisplayArea,
};

namespace detail {

class ModelessKeyboardImpl {
public:
  enum State : int32_t {
    State_None,
    State_Appearing,
    State_Shown,
    State_Disappearing,
    State_Hidden,
  };

  enum RequestFlag : uint64_t {
    RequestFlag_Appear = 1 << 0,
    RequestFlag_Disappear = 1 << 1,
    RequestFlag_Backspace = 1 << 2,
    RequestFlag_RightStick = 1 << 3,
    RequestFlag_Opacity = 1 << 4,
  };

  struct RequestData {
    uint64_t flags = 0;
    ModelessKeyboardArg arg;
    bool isBackspaceEnabled = false;
    bool isRightStickInputEnabled = false;
    Trigger trigger = Trigger(0);
    float opacity = 1.0f;
    uint8_t _reserved[124] = {};
  };

  static_assert(sizeof(RequestData) == 328);

  struct ReceiveRequestData {
    uint8_t isRequest;
    CommandFromSwkbdToShim command;
  };

  bool Initialize(bool isWebBrowser);
  bool IsRunning() const;
  void Finalize();
  bool Appear(const ModelessKeyboardArg& arg, Trigger trigger);
  bool Disappear();
  State Calc();
  void SetInitializedCallback(InitializedCallback callback, void* pUserData);
  void SetForcedFinalizeCallback(ForcedFinalizeCallback callback,
    void* pUserData);
  void SetEntryConfirmedCallback(EntryConfirmedCallback callback,
    void* pUserData);
  void SetEntryCanceledCallback(EntryCanceledCallback callback,
    void* pUserData);
  void EnableBackspaceButton(bool isEnabled);
  void EnableRightStickInput(bool isEnabled);
  void GetDisplayArea(DisplayArea* pOutArea) const;
  void InquireDisplayArea(const ModelessKeyboardArg& arg,
    DisplayArea* pOutArea);
  void SetReceiveSpeechRequestCallback(
    const ReceiveSpeechRequestCallback& callback, void* pUserData);
  void SendSpeechResponse(const SpeechResponse& response);
  void SetOpacity(float opacity);

  void SendRequest_(CommandFromShimToSwkbd command, const void* pData,
    size_t size);
  void FinalizePrivateChannelForWebBrowser_();
  void receiveInteractiveChannelRequest_();
  void receiveWebBrowserChannelRequest_();
  void CalcCommandFromInteractiveChannel_(CommandFromSwkbdToShim command,
    applet::StorageHandle storage, size_t offset);
  void CalcInitialized_(applet::StorageHandle storage, size_t offset);
  void CalcChangedState_(applet::StorageHandle storage, size_t offset);
  void CalcEntryConfirmed_(applet::StorageHandle storage, size_t offset);
  void CalcEntryCanceled_(applet::StorageHandle storage, size_t offset);
  void CalcUpdateDisplayArea_(applet::StorageHandle storage, size_t offset);
  size_t ReadRequest_(ReceiveRequestData* pOut,
    applet::StorageHandle storage);
  void WriteToStorage_(applet::StorageHandle storage, int64_t offset,
    const void* pData, size_t size);
  void InitializePrivateChannelForWebBrowser_();
  bool isWebBrowserChannelOpened_();

  bool m_IsWebBrowser;
  applet::ChannelHandle m_WebBrowserChannel;
  State m_State;
  applet::LibraryAppletHandle m_Handle;
  InitializedCallback m_InitializedCallback;
  ForcedFinalizeCallback m_ForcedFinalizeCallback;
  EntryConfirmedCallback m_EntryConfirmedCallback;
  EntryCanceledCallback m_EntryCanceledCallback;
  ReceiveSpeechRequestCallback m_ReceiveSpeechRequestCallback;
  void* m_pInitializedUserData;
  void* m_pForcedFinalizeUserData;
  void* m_pEntryConfirmedUserData;
  void* m_pEntryCanceledUserData;
  void* m_pReceiveSpeechRequestUserData;
  RequestData m_Request;
  bool m_IsInitialized = false;
  DisplayArea m_DisplayArea;
  mutable os::Mutex m_Mutex{true};
  uint64_t _reserved[14] = {};
};

static_assert(sizeof(ModelessKeyboardImpl) == 640);

}

class ModelessKeyboard {
public:
  ModelessKeyboard();
  ~ModelessKeyboard();

  static size_t GetRequiredWorkBufferSize();
  bool Initialize(void* pWorkBuffer, size_t workBufferSize);
  void Finalize();
  bool Appear(const ModelessKeyboardArg& arg);
  bool Disappear();
  int Calc();
  void SetInitializedCallback(InitializedCallback callback, void* pUserData);
  void SetForcedFinalizeCallback(ForcedFinalizeCallback callback,
    void* pUserData);
  void SetEntryConfirmedCallback(EntryConfirmedCallback callback,
    void* pUserData);
  void SetEntryCanceledCallback(EntryCanceledCallback callback,
    void* pUserData);
  void SetOpacity(float opacity);

private:
  detail::ModelessKeyboardImpl* m_pImpl;
};

class ModelessKeyboardForWebBrowser {
public:
  ModelessKeyboardForWebBrowser();
  ~ModelessKeyboardForWebBrowser();

  static size_t GetRequiredWorkBufferSize();
  bool Initialize(void* pWorkBuffer, size_t workBufferSize);
  void Finalize();
  bool Appear(const ModelessKeyboardArg& arg);
  bool Appear(const ModelessKeyboardArg& arg, Trigger trigger);
  bool Disappear();
  int Calc();
  void SetInitializedCallback(InitializedCallback callback, void* pUserData);
  void SetForcedFinalizeCallback(ForcedFinalizeCallback callback,
    void* pUserData);
  void SetEntryConfirmedCallback(EntryConfirmedCallback callback,
    void* pUserData);
  void SetEntryCanceledCallback(EntryCanceledCallback callback,
    void* pUserData);
  void EnableBackspaceButton(bool isEnabled);
  void EnableRightStickInput(bool isEnabled);
  void GetDisplayArea(DisplayArea* pOutArea) const;
  void InquireDisplayArea(const ModelessKeyboardArg& arg,
    DisplayArea* pOutArea);
  void SetReceiveSpeechRequestCallback(
    const ReceiveSpeechRequestCallback& callback, void* pUserData);
  void SendSpeechResponse(const SpeechResponse& response);
  void SetOpacity(float opacity);

private:
  detail::ModelessKeyboardImpl* m_pImpl;
};

}
