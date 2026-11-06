#pragma once

#include <stdint.h>

#include "nn/err/err_types.hpp"
#include "nn/settings/settings_types.hpp"

namespace nn::err {

enum ErrorType : uint8_t {
  ErrorType_SystemData,
  ErrorType_SystemError,
  ErrorType_ApplicationError,
  ErrorType_Eula,
  ErrorType_ParentalControl,
  ErrorType_ErrorRecord,
  ErrorType_RecordedSystemData,
  ErrorType_RecordedApplicationError,
  ErrorType_SystemUpdateEula,
};

struct ErrorViewerStartupParamHeader {
  uint8_t errorType;
  bool isJumpEnabled;
  uint8_t reserved2[2];
  uint8_t version;
  bool hasErrorContext;
  uint8_t reserved6[2];
};

// The error viewer reads these parameters as raw bytes, so the members are
// filled in place by the show functions.
class ErrorViewerStartupParamForSystemData {
 public:
  void SetResult(const Result& result);
  void SetErrorCode(const ErrorCode& errorCode);
  void SetCallerIdentifier(const CallerIdentifier& callerIdentifier);

  uint8_t m_ErrorType;
  bool m_IsJumpEnabled;
  uint8_t m_Version;
  uint8_t m_Reserved[2];
  bool m_HasResultBacktrace;
  bool m_IsErrorCode;
  bool m_HasErrorContext;
  ErrorCode m_ErrorCode;
  Result m_Result;
  bool m_HasCallerIdentifier;
  CallerIdentifier m_CallerIdentifier;
};

class ErrorViewerStartupParamForParentalControl {
 public:
  void SetCallerIdentifier(const CallerIdentifier& callerIdentifier);
  void SetResultBacktrace(const ResultBacktrace& resultBacktrace);
  void SetErrorContext(const ErrorContext& errorContext);

  ErrorViewerStartupParamHeader m_Header;
  Result m_Result;
  bool m_HasCallerIdentifier;
  bool m_HasResultBacktrace;
  bool m_HasErrorContext;
  CallerIdentifier m_CallerIdentifier;
  ResultBacktrace m_ResultBacktrace;
  ErrorContext m_ErrorContext;
};

class ErrorResultVariant {
 public:
  ErrorResultVariant();
  explicit ErrorResultVariant(const Result& result);
  explicit ErrorResultVariant(const ErrorCode& errorCode);

  ErrorResultVariant& operator=(const Result& result);
  ErrorResultVariant& operator=(const ErrorCode& errorCode);
  operator Result() const;
  operator ErrorCode() const;
  int GetState() const;

 private:
  enum State {
    State_None,
    State_Result,
    State_ErrorCode,
  };

  int32_t m_State;
  union {
    Result m_Result;
    ErrorCode m_ErrorCode;
  };
};

class ApplicationErrorArg {
 public:
  ApplicationErrorArg();
  ApplicationErrorArg(uint32_t number, const char* dialogMessage,
    const char* fullScreenMessage, const settings::LanguageCode& languageCode);

  void SetApplicationErrorCodeNumber(uint32_t number);
  void SetDialogMessage(const char* message);
  void SetFullScreenMessage(const char* message);
  void SetLanguageCode(const settings::LanguageCode& languageCode);
  uint32_t GetApplicationErrorCodeNumber() const;
  const char* GetDialogMessage() const;
  const char* GetFullScreenMessage() const;
  settings::LanguageCode GetLanguageCode() const;

 private:
  ErrorViewerStartupParamHeader m_Header;
  uint32_t m_Number;
  settings::LanguageCode m_LanguageCode;
  char m_DialogMessage[2048];
  char m_FullScreenMessage[2048];
};

class SystemErrorArg {
 public:
  SystemErrorArg();
  SystemErrorArg(ErrorCode errorCode, const char* dialogMessage,
    const char* fullScreenMessage, const settings::LanguageCode& languageCode);

  void SetErrorCode(ErrorCode errorCode);
  void SetDialogMessage(const char* message);
  void SetFullScreenMessage(const char* message);
  void SetLanguageCode(const settings::LanguageCode& languageCode);
  ErrorCode GetErrorCode() const;
  const char* GetDialogMessage() const;
  const char* GetFullScreenMessage() const;
  settings::LanguageCode GetLanguageCode() const;
  const ErrorViewerStartupParamHeader* GetStartupParam() const;
  void AttachErrorContext(ErrorContext* pErrorContext);
  void DetachErrorContext();
  ErrorContext* GetErrorContext() const;
  void SetServerCode(const char* serverCode);
  const char* GetServerCode() const;

 private:
  ErrorViewerStartupParamHeader m_Header;
  ErrorCode m_ErrorCode;
  settings::LanguageCode m_LanguageCode;
  char m_DialogMessage[2048];
  char m_FullScreenMessage[2048];
  char m_ServerCode[16];
  ErrorContext* m_pErrorContext;
};

class MinorsProtectionWarningForPlatformRegionChinaArg {
 public:
  MinorsProtectionWarningForPlatformRegionChinaArg();
  MinorsProtectionWarningForPlatformRegionChinaArg(const char* dialogMessage,
    const char* fullScreenMessage);

  void SetDialogMessage(const char* message);
  void SetFullScreenMessage(const char* message);

  const char* GetDialogMessage() const;
  const char* GetFullScreenMessage() const;

 private:
  ErrorViewerStartupParamHeader m_Header;
  ErrorCode m_ErrorCode;
  settings::LanguageCode m_LanguageCode;
  char m_DialogMessage[2048];
  char m_FullScreenMessage[2048];
  uint8_t m_Reserved[16];
};

}
