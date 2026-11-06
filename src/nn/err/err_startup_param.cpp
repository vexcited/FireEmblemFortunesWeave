#include <string.h>

#include "nn/err/err_startup_param.hpp"

namespace nn::err {

namespace {

template <size_t N>
void CopyString(char (&destination)[N], const char* source) {
  size_t i = 0;
  for (; i < N - 1 && source[i] != '\0'; i++) {
    destination[i] = source[i];
  }
  destination[i] = '\0';
}

}

void ErrorViewerStartupParamForSystemData::SetResult(const Result& result) {
  m_IsErrorCode = false;
  m_Result = result;
}

void ErrorViewerStartupParamForSystemData::SetErrorCode(
  const ErrorCode& errorCode) {
  m_ErrorCode = errorCode;
  m_IsErrorCode = true;
}

void ErrorViewerStartupParamForSystemData::SetCallerIdentifier(
  const CallerIdentifier& callerIdentifier) {
  m_HasCallerIdentifier = true;
  m_CallerIdentifier = callerIdentifier;
}

void ErrorViewerStartupParamForParentalControl::SetCallerIdentifier(
  const CallerIdentifier& callerIdentifier) {
  m_HasCallerIdentifier = true;
  m_CallerIdentifier = callerIdentifier;
}

void ErrorViewerStartupParamForParentalControl::SetResultBacktrace(
  const ResultBacktrace& resultBacktrace) {
  m_HasResultBacktrace = true;
  m_ResultBacktrace = resultBacktrace;
}

void ErrorViewerStartupParamForParentalControl::SetErrorContext(
  const ErrorContext& errorContext) {
  m_HasErrorContext = true;
  m_ErrorContext = errorContext;
}

ApplicationErrorArg::ApplicationErrorArg() : m_Number(0) {
  m_Header.errorType = ErrorType_ApplicationError;
  m_LanguageCode.string[0] = '\0';
  m_DialogMessage[0] = '\0';
  m_FullScreenMessage[0] = '\0';
}

ApplicationErrorArg::ApplicationErrorArg(uint32_t number,
  const char* dialogMessage, const char* fullScreenMessage,
  const settings::LanguageCode& languageCode) : m_Number(number) {
  m_Header.errorType = ErrorType_ApplicationError;
  CopyString(m_DialogMessage, dialogMessage);
  CopyString(m_FullScreenMessage, fullScreenMessage);
  CopyString(m_LanguageCode.string, languageCode.string);
}

void ApplicationErrorArg::SetApplicationErrorCodeNumber(uint32_t number) {
  m_Number = number;
}

void ApplicationErrorArg::SetDialogMessage(const char* message) {
  CopyString(m_DialogMessage, message);
}

void ApplicationErrorArg::SetFullScreenMessage(const char* message) {
  CopyString(m_FullScreenMessage, message);
}

void ApplicationErrorArg::SetLanguageCode(
  const settings::LanguageCode& languageCode) {
  CopyString(m_LanguageCode.string, languageCode.string);
}

uint32_t ApplicationErrorArg::GetApplicationErrorCodeNumber() const {
  return m_Number;
}

const char* ApplicationErrorArg::GetDialogMessage() const {
  return m_DialogMessage;
}

const char* ApplicationErrorArg::GetFullScreenMessage() const {
  return m_FullScreenMessage;
}

settings::LanguageCode ApplicationErrorArg::GetLanguageCode() const {
  return m_LanguageCode;
}

ErrorResultVariant::ErrorResultVariant() : m_State(State_None) {}

ErrorResultVariant::ErrorResultVariant(const Result& result)
  : m_State(State_Result) {
  m_Result = Result{result.value & 0x3fffff};
}

ErrorResultVariant::ErrorResultVariant(const ErrorCode& errorCode)
  : m_State(State_ErrorCode) {
  m_ErrorCode = errorCode;
}

ErrorResultVariant& ErrorResultVariant::operator=(const Result& result) {
  m_State = State_Result;
  m_Result = Result{result.value & 0x3fffff};
  return *this;
}

ErrorResultVariant& ErrorResultVariant::operator=(const ErrorCode& errorCode) {
  m_State = State_ErrorCode;
  m_ErrorCode = errorCode;
  return *this;
}

ErrorResultVariant::operator Result() const {
  return m_Result;
}

ErrorResultVariant::operator ErrorCode() const {
  return m_ErrorCode;
}

int ErrorResultVariant::GetState() const {
  return m_State;
}

MinorsProtectionWarningForPlatformRegionChinaArg::
  MinorsProtectionWarningForPlatformRegionChinaArg() {
  memset(this, 0, sizeof(*this));
  m_FullScreenMessage[0] = '\0';
  m_Header.errorType = 1;
  m_Header.version = 1;
  m_ErrorCode = ErrorCode{2899, 9000};
  // The terminator comes from the clear above.
  memcpy(m_LanguageCode.string, "zh-Hans", 7);
}

MinorsProtectionWarningForPlatformRegionChinaArg::
  MinorsProtectionWarningForPlatformRegionChinaArg(const char* dialogMessage,
    const char* fullScreenMessage) {
  memset(this, 0, sizeof(*this));
  m_Header.errorType = 1;
  m_Header.version = 1;
  m_ErrorCode = ErrorCode{2899, 9000};
  memcpy(m_LanguageCode.string, "zh-Hans", 7);
  CopyString(m_DialogMessage, dialogMessage);
  CopyString(m_FullScreenMessage, fullScreenMessage);
}

void MinorsProtectionWarningForPlatformRegionChinaArg::SetDialogMessage(
  const char* message) {
  CopyString(m_DialogMessage, message);
}

void MinorsProtectionWarningForPlatformRegionChinaArg::SetFullScreenMessage(
  const char* message) {
  CopyString(m_FullScreenMessage, message);
}

const char* MinorsProtectionWarningForPlatformRegionChinaArg::GetDialogMessage()
  const {
  return m_DialogMessage;
}

const char*
MinorsProtectionWarningForPlatformRegionChinaArg::GetFullScreenMessage() const {
  return m_FullScreenMessage;
}

SystemErrorArg::SystemErrorArg() : m_ErrorCode(), m_pErrorContext(nullptr) {
  m_Header.errorType = 1;
  m_Header.isJumpEnabled = true;
  m_Header.reserved2[0] = 0;
  m_Header.reserved2[1] = 0;
  m_Header.version = 1;
  m_Header.hasErrorContext = false;
  m_Header.reserved6[0] = 0;
  m_Header.reserved6[1] = 0;
  m_LanguageCode.string[0] = '\0';
  m_DialogMessage[0] = '\0';
  m_FullScreenMessage[0] = '\0';
  memset(m_ServerCode, 0, sizeof(m_ServerCode));
}

SystemErrorArg::SystemErrorArg(ErrorCode errorCode, const char* dialogMessage,
  const char* fullScreenMessage, const settings::LanguageCode& languageCode)
  : m_ErrorCode(errorCode), m_pErrorContext(nullptr) {
  m_Header.errorType = 1;
  m_Header.isJumpEnabled = true;
  m_Header.reserved2[0] = 0;
  m_Header.reserved2[1] = 0;
  m_Header.version = 1;
  m_Header.hasErrorContext = false;
  m_Header.reserved6[0] = 0;
  m_Header.reserved6[1] = 0;
  memset(m_ServerCode, 0, sizeof(m_ServerCode));
  CopyString(m_DialogMessage, dialogMessage);
  CopyString(m_FullScreenMessage, fullScreenMessage);
  CopyString(m_LanguageCode.string, languageCode.string);
}

void SystemErrorArg::SetErrorCode(ErrorCode errorCode) {
  m_ErrorCode = errorCode;
}

void SystemErrorArg::SetDialogMessage(const char* message) {
  CopyString(m_DialogMessage, message);
}

void SystemErrorArg::SetFullScreenMessage(const char* message) {
  CopyString(m_FullScreenMessage, message);
}

void SystemErrorArg::SetLanguageCode(
  const settings::LanguageCode& languageCode) {
  CopyString(m_LanguageCode.string, languageCode.string);
}

ErrorCode SystemErrorArg::GetErrorCode() const {
  return m_ErrorCode;
}

const char* SystemErrorArg::GetDialogMessage() const {
  return m_DialogMessage;
}

const char* SystemErrorArg::GetFullScreenMessage() const {
  return m_FullScreenMessage;
}

settings::LanguageCode SystemErrorArg::GetLanguageCode() const {
  return m_LanguageCode;
}

const ErrorViewerStartupParamHeader* SystemErrorArg::GetStartupParam() const {
  return &m_Header;
}

void SystemErrorArg::AttachErrorContext(ErrorContext* pErrorContext) {
  m_pErrorContext = pErrorContext;
  m_Header.hasErrorContext = true;
}

void SystemErrorArg::DetachErrorContext() {
  m_pErrorContext = nullptr;
  m_Header.hasErrorContext = false;
}

ErrorContext* SystemErrorArg::GetErrorContext() const {
  return m_pErrorContext;
}

void SystemErrorArg::SetServerCode(const char* serverCode) {
  // Server codes are at most 8 characters long.
  char (&code)[9] = reinterpret_cast<char (&)[9]>(m_ServerCode);
  CopyString(code, serverCode);
}

const char* SystemErrorArg::GetServerCode() const {
  return m_ServerCode;
}

}
