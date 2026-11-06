#include "nn/swkbd/swkbd_modeless.hpp"

#include <new>

namespace nn::swkbd {

ModelessKeyboard::ModelessKeyboard() : m_pImpl(nullptr) {}

ModelessKeyboard::~ModelessKeyboard() {
  Finalize();
}

void ModelessKeyboard::Finalize() {
  if (m_pImpl != nullptr && m_pImpl->IsRunning()) {
    m_pImpl->Finalize();
    m_pImpl->~ModelessKeyboardImpl();
    m_pImpl = nullptr;
  }
}

size_t ModelessKeyboard::GetRequiredWorkBufferSize() {
  return sizeof(detail::ModelessKeyboardImpl);
}

bool ModelessKeyboard::Initialize(void* pWorkBuffer, size_t workBufferSize) {
  if (pWorkBuffer == nullptr ||
    (m_pImpl != nullptr && m_pImpl->IsRunning())) {
    return false;
  }

  m_pImpl = new (pWorkBuffer) detail::ModelessKeyboardImpl();
  return m_pImpl->Initialize(false);
}

bool ModelessKeyboard::Appear(const ModelessKeyboardArg& arg) {
  if (m_pImpl != nullptr && m_pImpl->IsRunning()) {
    return m_pImpl->Appear(arg, Trigger(0));
  }

  return false;
}

bool ModelessKeyboard::Disappear() {
  if (m_pImpl != nullptr && m_pImpl->IsRunning()) {
    return m_pImpl->Disappear();
  }

  return false;
}

int ModelessKeyboard::Calc() {
  if (m_pImpl != nullptr && m_pImpl->IsRunning()) {
    return m_pImpl->Calc();
  }

  return 0;
}

void ModelessKeyboard::SetInitializedCallback(InitializedCallback callback,
  void* pUserData) {
  if (m_pImpl != nullptr) {
    m_pImpl->SetInitializedCallback(callback, pUserData);
  }
}

void ModelessKeyboard::SetForcedFinalizeCallback(
  ForcedFinalizeCallback callback, void* pUserData) {
  if (m_pImpl != nullptr) {
    m_pImpl->SetForcedFinalizeCallback(callback, pUserData);
  }
}

void ModelessKeyboard::SetEntryConfirmedCallback(
  EntryConfirmedCallback callback, void* pUserData) {
  if (m_pImpl != nullptr) {
    m_pImpl->SetEntryConfirmedCallback(callback, pUserData);
  }
}

void ModelessKeyboard::SetEntryCanceledCallback(
  EntryCanceledCallback callback, void* pUserData) {
  if (m_pImpl != nullptr) {
    m_pImpl->SetEntryCanceledCallback(callback, pUserData);
  }
}

void ModelessKeyboard::SetOpacity(float opacity) {
  if (m_pImpl != nullptr) {
    m_pImpl->SetOpacity(opacity);
  }
}

ModelessKeyboardForWebBrowser::ModelessKeyboardForWebBrowser()
  : m_pImpl(nullptr) {}

ModelessKeyboardForWebBrowser::~ModelessKeyboardForWebBrowser() {}

size_t ModelessKeyboardForWebBrowser::GetRequiredWorkBufferSize() {
  return sizeof(detail::ModelessKeyboardImpl);
}

bool ModelessKeyboardForWebBrowser::Initialize(void* pWorkBuffer,
  size_t workBufferSize) {
  if (pWorkBuffer == nullptr ||
    (m_pImpl != nullptr && m_pImpl->IsRunning())) {
    return false;
  }

  m_pImpl = new (pWorkBuffer) detail::ModelessKeyboardImpl();
  return m_pImpl->Initialize(true);
}

void ModelessKeyboardForWebBrowser::Finalize() {
  if (m_pImpl != nullptr && m_pImpl->IsRunning()) {
    m_pImpl->Finalize();
    m_pImpl->~ModelessKeyboardImpl();
    m_pImpl = nullptr;
  }
}

bool ModelessKeyboardForWebBrowser::Appear(const ModelessKeyboardArg& arg) {
  if (m_pImpl != nullptr && m_pImpl->IsRunning()) {
    return m_pImpl->Appear(arg, Trigger(0));
  }

  return false;
}

bool ModelessKeyboardForWebBrowser::Appear(const ModelessKeyboardArg& arg,
  Trigger trigger) {
  if (m_pImpl != nullptr && m_pImpl->IsRunning()) {
    return m_pImpl->Appear(arg, trigger);
  }

  return false;
}

bool ModelessKeyboardForWebBrowser::Disappear() {
  if (m_pImpl != nullptr && m_pImpl->IsRunning()) {
    return m_pImpl->Disappear();
  }

  return false;
}

int ModelessKeyboardForWebBrowser::Calc() {
  if (m_pImpl != nullptr && m_pImpl->IsRunning()) {
    return m_pImpl->Calc();
  }

  return 0;
}

void ModelessKeyboardForWebBrowser::SetInitializedCallback(
  InitializedCallback callback, void* pUserData) {
  if (m_pImpl != nullptr) {
    m_pImpl->SetInitializedCallback(callback, pUserData);
  }
}

void ModelessKeyboardForWebBrowser::SetForcedFinalizeCallback(
  ForcedFinalizeCallback callback, void* pUserData) {
  if (m_pImpl != nullptr) {
    m_pImpl->SetForcedFinalizeCallback(callback, pUserData);
  }
}

void ModelessKeyboardForWebBrowser::SetEntryConfirmedCallback(
  EntryConfirmedCallback callback, void* pUserData) {
  if (m_pImpl != nullptr) {
    m_pImpl->SetEntryConfirmedCallback(callback, pUserData);
  }
}

void ModelessKeyboardForWebBrowser::SetEntryCanceledCallback(
  EntryCanceledCallback callback, void* pUserData) {
  if (m_pImpl != nullptr) {
    m_pImpl->SetEntryCanceledCallback(callback, pUserData);
  }
}

void ModelessKeyboardForWebBrowser::EnableBackspaceButton(bool isEnabled) {
  if (m_pImpl != nullptr) {
    m_pImpl->EnableBackspaceButton(isEnabled);
  }
}

void ModelessKeyboardForWebBrowser::EnableRightStickInput(bool isEnabled) {
  if (m_pImpl != nullptr) {
    m_pImpl->EnableRightStickInput(isEnabled);
  }
}

void ModelessKeyboardForWebBrowser::GetDisplayArea(
  DisplayArea* pOutArea) const {
  if (m_pImpl != nullptr) {
    m_pImpl->GetDisplayArea(pOutArea);
  }
}

void ModelessKeyboardForWebBrowser::InquireDisplayArea(
  const ModelessKeyboardArg& arg, DisplayArea* pOutArea) {
  if (m_pImpl != nullptr) {
    m_pImpl->InquireDisplayArea(arg, pOutArea);
  }
}

void ModelessKeyboardForWebBrowser::SetReceiveSpeechRequestCallback(
  const ReceiveSpeechRequestCallback& callback, void* pUserData) {
  if (m_pImpl != nullptr) {
    m_pImpl->SetReceiveSpeechRequestCallback(callback, pUserData);
  }
}

void ModelessKeyboardForWebBrowser::SendSpeechResponse(
  const SpeechResponse& response) {
  if (m_pImpl != nullptr) {
    m_pImpl->SendSpeechResponse(response);
  }
}

void ModelessKeyboardForWebBrowser::SetOpacity(float opacity) {
  if (m_pImpl != nullptr) {
    m_pImpl->SetOpacity(opacity);
  }
}

}
