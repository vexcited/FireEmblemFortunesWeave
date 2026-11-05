#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/hid/detail/hid_nmouse_accessor.hpp"
#include "nn/hid/hid_device_states.hpp"
#include "nn/hid/hid_npad_state.hpp"
#include "nn/hid/hid_touch_screen.hpp"
#include "nn/result.hpp"

namespace nn::imf {

namespace detail {

struct SessionStorage;

}

struct SessionHandle {
  detail::SessionStorage* pStorage;
};

struct ServiceId {
  uint64_t value;
};

struct UserWord;
struct AdditionalDictionary;

struct ContextHandle {
  uint64_t value;
};

enum class MessageType : uint8_t {};
enum class SinkMessageType : uint8_t {};
enum class SwkbdKey : uint8_t {};

class Message {
 public:
  MessageType GetMessageType() const;
  int GetSelectionStart() const;
  int GetSelectionEnd() const;
  int GetSelectionLength() const;
  int GetTextStart() const;
  int GetTextEnd() const;
  int GetTextLength() const;
  int GetCompositionStart() const;
  int GetCompositionEnd() const;
  int GetCompositionLength() const;

 private:
  MessageType m_Type;
  uint8_t m_Reserved[7];
  int32_t m_SelectionStart;
  int32_t m_SelectionEnd;
  int32_t m_TextStart;
  int32_t m_TextEnd;
  int32_t m_CompositionStart;
  int32_t m_CompositionEnd;
};

class PrivateMessage {
 public:
  MessageType GetMessageType() const;
  int GetSelectionStart() const;
  int GetSelectionEnd() const;
  int GetSelectionLength() const;
  int GetTextStart() const;
  int GetTextEnd() const;
  int GetTextLength() const;
  int GetCompositionStart() const;
  int GetCompositionEnd() const;
  int GetCompositionLength() const;
  SwkbdKey GetSwkbdKey() const;

 private:
  MessageType m_Type;
  uint8_t m_Reserved[2];
  SwkbdKey m_SwkbdKey;
  uint8_t m_Reserved2[4];
  int32_t m_SelectionStart;
  int32_t m_SelectionEnd;
  int32_t m_TextStart;
  int32_t m_TextEnd;
  int32_t m_CompositionStart;
  int32_t m_CompositionEnd;
};

class SinkMessage {
 public:
  SinkMessageType GetSinkMessageType() const;
  const ContextHandle& GetContextHandle() const;
  int GetTextStart() const;
  int GetTextEnd() const;
  int GetTextLength() const;

 private:
  SinkMessageType m_Type;
  uint8_t m_Reserved[15];
  int32_t m_TextStart;
  int32_t m_TextEnd;
  ContextHandle m_ContextHandle;
};

namespace detail {

struct HidStateSetUnit {
  uint32_t flags;
  uint8_t reserved[0x1c];
  hid::KeyboardState keyboardState;
  uint8_t reserved2[0x28];
  hid::NpadFullKeyState npadFullKeyState;
  hid::NpadHandheldState npadHandheldState;
  uint8_t reserved3[0x110];
  hid::NmouseState nmouseState;
  hid::NpadJoyDualState npadJoyDualState;
  hid::NpadJoyLeftState npadJoyLeftState;
  hid::NpadJoyRightState npadJoyRightState;
  hid::TouchScreenState<hid::TouchStateCountMax> touchScreenState;
  uint8_t reserved4[0x2f0];
};

static_assert(sizeof(HidStateSetUnit) == 0x800);

}

class HidStateSet {
 public:
  void Reset();

  bool IsKeyboardStateUpdated() const;
  const hid::KeyboardState& GetKeyboardState() const;
  void SetKeyboardStates(const hid::KeyboardState* pStates, int count);
  void SetKeyboardStateForcibly(const hid::KeyboardState& state);

  bool IsNpadFullKeyStateUpdated() const;
  const hid::NpadFullKeyState& GetNpadFullKeyState() const;
  void SetNpadFullKeyStates(const hid::NpadFullKeyState* pStates, int count);
  void SetNpadFullKeyStateForcibly(const hid::NpadFullKeyState& state);

  bool IsNpadHandheldStateUpdated() const;
  const hid::NpadHandheldState& GetNpadHandheldState() const;
  void SetNpadHandheldStates(const hid::NpadHandheldState* pStates,
    int count);
  void SetNpadHandheldStateForcibly(const hid::NpadHandheldState& state);

  bool IsNpadJoyDualStateUpdated() const;
  const hid::NpadJoyDualState& GetNpadJoyDualState() const;
  void SetNpadJoyDualStates(const hid::NpadJoyDualState* pStates, int count);
  void SetNpadJoyDualStateForcibly(const hid::NpadJoyDualState& state);

  bool IsNpadJoyLeftStateUpdated() const;
  const hid::NpadJoyLeftState& GetNpadJoyLeftState() const;
  void SetNpadJoyLeftStates(const hid::NpadJoyLeftState* pStates, int count);
  void SetNpadJoyLeftStateForcibly(const hid::NpadJoyLeftState& state);

  bool IsNpadJoyRightStateUpdated() const;
  const hid::NpadJoyRightState& GetNpadJoyRightState() const;
  void SetNpadJoyRightStates(const hid::NpadJoyRightState* pStates,
    int count);
  void SetNpadJoyRightStateForcibly(const hid::NpadJoyRightState& state);

  bool IsNmouseStateUpdated() const;
  const hid::NmouseState& GetNmouseState() const;
  void SetNmouseStates(const hid::NmouseState* pStates, int count);
  void SetNmouseStateForcibly(const hid::NmouseState& state);

  bool IsTouchScreenStateUpdated() const;

  template <size_t N>
  const hid::TouchScreenState<N>& GetTouchScreenState() const;

  template <size_t N>
  void SetTouchScreenStates(const hid::TouchScreenState<N>* pStates,
    int count);

  template <size_t N>
  void SetTouchScreenStateForcibly(const hid::TouchScreenState<N>& state);

  detail::HidStateSetUnit& GetUnit() {
    return m_Unit;
  }

  const detail::HidStateSetUnit& GetUnit() const {
    return m_Unit;
  }

  detail::HidStateSetUnit& GetWorkUnit() {
    return m_WorkUnit;
  }

 private:
  detail::HidStateSetUnit m_Unit;
  detail::HidStateSetUnit m_WorkUnit;
};

static_assert(sizeof(HidStateSet) == 0x1000);

void CreateSession(SessionHandle* pOutHandle, const ServiceId& id,
  void* pBuffer, size_t bufferSize);
void DeleteSession(const SessionHandle& handle);
bool IsSessionInUse(const SessionHandle& handle);
bool ReadMessage(Message* pOutMessage, const SessionHandle& handle);
bool ReadMessage(PrivateMessage* pOutMessage, const SessionHandle& handle);
void PassHidStateSet(HidStateSet* pOutSet, const SessionHandle& handle,
  const HidStateSet& set);
void SetSelection(const SessionHandle& handle, int start, int end);
int ReadText(char* pOutText, int size, const SessionHandle& handle);
int ReadText(char* pOutText, int size, int start,
  const SessionHandle& handle);
int WriteText(const SessionHandle& handle, const char* pText, int size);
void TerminateComposition(const SessionHandle& handle);
void EnableUserWords(const SessionHandle& handle, int count);
void DisableUserWords(const SessionHandle& handle);
void SetUserWords(const SessionHandle& handle, const UserWord* pWords,
  int count);
void EnableAdditionalDictionaries(const SessionHandle& handle,
  uint64_t mask);
void DisableAdditionalDictionaries(const SessionHandle& handle);
void SetAdditionalDictionaries(const SessionHandle& handle,
  const AdditionalDictionary* pDictionaries, int count, const void* pData,
  size_t dataSize);
void SetAdditionalDictionaries(const SessionHandle& handle,
  const AdditionalDictionary* pDictionaries, int count, uint64_t size,
  uint32_t transferMemoryHandle);

}

namespace nn::imf::detail {

Result CreateSession(SessionHandle* pOutHandle, const ServiceId& id,
  void* pBuffer, size_t bufferSize);
Result DeleteSession(const SessionHandle& handle);
Result GetSessionInUseFlag(bool* pOutInUse, const SessionHandle& handle);
Result ReadMessage(bool* pOutIsRead, Message* pOutMessage,
  const SessionHandle& handle);
Result PassHidStateSet(HidStateSetUnit* pOutUnit,
  const SessionHandle& handle, const HidStateSetUnit& unit);
Result SetSelection(const SessionHandle& handle, int start, int end);
Result ReadText(int* pOutSize, char* pOutText, int size,
  const SessionHandle& handle);
Result ReadText(int* pOutSize, char* pOutText, int size, int start,
  const SessionHandle& handle);
Result WriteText(int* pOutSize, const SessionHandle& handle,
  const char* pText, int size);
Result TerminateComposition(const SessionHandle& handle);
Result EnableUserWords(const SessionHandle& handle, int count);
Result DisableUserWords(const SessionHandle& handle);
Result SetUserWords(const SessionHandle& handle, const UserWord* pWords,
  int count);
Result EnableAdditionalDictionaries(const SessionHandle& handle,
  uint64_t mask);
Result DisableAdditionalDictionaries(const SessionHandle& handle);
Result SetAdditionalDictionaries(const SessionHandle& handle,
  const AdditionalDictionary* pDictionaries, int count, const void* pData,
  size_t dataSize);
Result SetAdditionalDictionaries(const SessionHandle& handle,
  const AdditionalDictionary* pDictionaries, int count, uint64_t size,
  uint32_t transferMemoryHandle);

}
