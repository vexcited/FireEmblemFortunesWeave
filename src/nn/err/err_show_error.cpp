#include <string.h>

#include "nn/am/service/am_controllers.hpp"
#include "nn/applet/applet_api.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/diag/unexpected_default.hpp"
#include "nn/err/err_show_error.hpp"
#include "nn/err/err_startup_param.hpp"
#include "nn/la/la_common_arguments.hpp"
#include "nn/util/util_format_string.hpp"

namespace movie {

struct MultimediaTelemetryReport {
  uint8_t data[312];
};

}

namespace nn::account {

Result ShowLicenseRequirementsForNetworkServiceForUnspecifiedUsers(
  const err::ErrorCode& errorCode);

}

namespace nn::err {

namespace {

constexpr applet::AppletId AppletId_Error = applet::AppletId(0x100000e);
constexpr applet::AppletId AppletId_Eula = applet::AppletId(0x1000028);

constexpr Result ResultUnacceptableApplicationVersion = {0xc8a2};
constexpr Result ResultUnacceptableAddOnContentVersion = {0xcaa2};
constexpr Result ResultUnacceptableAddOnContentForUpgradeVersion = {0xcca2};

constexpr uint32_t ResultCategoryBase = 2000;

// The error context pointer at the end of SystemErrorArg is not sent.
constexpr size_t SystemErrorStartupParamSize =
  sizeof(SystemErrorArg) - sizeof(ErrorContext*);

struct ErrorCodeCategoryEntry {
  ErrorCodeCategoryType type;
  uint32_t category;
};

const ErrorCodeCategoryEntry ErrorCodeCategoryTable[] = {
  {ErrorCodeCategoryType(0), 2621},
  {ErrorCodeCategoryType(1), 2622},
};

struct ErrorViewerStartupParamForParentalControlVersion0 {
  ErrorViewerStartupParamHeader header;
  Result result;
};

struct ErrorViewerStartupParamForEula {
  ErrorViewerStartupParamHeader header;
  settings::system::RegionCode regionCode;
};

struct ErrorViewerStartupParamForErrorRecord {
  ErrorViewerStartupParamHeader header;
  ErrorCode errorCode;
  time::PosixTime time;
};

struct ErrorViewerStartupParamForRecordedSystemData {
  ErrorViewerStartupParamHeader header;
  ErrorCode errorCode;
  time::PosixTime time;
  char message[2048];
};

struct ErrorViewerStartupParamForRecordedApplicationError {
  ErrorViewerStartupParamHeader header;
  uint32_t number;
  ns::ApplicationErrorCodePrefix prefix;
  time::PosixTime time;
  char category[8];
  char message[2048];
};

template <size_t N>
void CopyString(char (&destination)[N], const char* source) {
  size_t i = 0;
  for (; i < N - 1 && source[i] != '\0'; i++) {
    destination[i] = source[i];
  }
  destination[i] = '\0';
}

inline void CopyString(char* destination, const char* source, int size) {
  if (size > 0) {
    int i = 0;
    for (; i < size - 1 && source[i] != '\0'; i++) {
      destination[i] = source[i];
    }
    destination[i] = '\0';
  }
}

inline ErrorCode MakeErrorCodeFromResult(Result result) {
  return ErrorCode{(result.value & 0x1ff) + ResultCategoryBase,
    (result.value >> 9) & 0x1fff};
}

inline bool IsDisplayable(ErrorCode errorCode) {
  return errorCode.number < 10000 &&
    errorCode.category - ResultCategoryBase < 1000;
}

inline bool IsNetworkServiceErrorImpl(ErrorCode errorCode) {
  switch (errorCode.category) {
    case 2226:
      return errorCode.number == 251;
    case 2306:
      return errorCode.number == 821 || errorCode.number == 823 ||
        errorCode.number == 824;
    case 2307:
      return errorCode.number == 2118;
    case 2321:
      return errorCode.number == 5765;
    case 2618:
      return errorCode.number == 590 || errorCode.number == 592 ||
        errorCode.number == 593;
    default:
      return false;
  }
}

// Parental control restrictions are shown with their own viewer layout.
inline bool IsParentalControlRestriction(Result result) {
  const uint32_t module = result.value & 0x1ff;
  const uint32_t description = (result.value >> 9) & 0x1fff;
  return module == 142 && description >= 100 && description < 124;
}

inline void PushToInChannel(applet::LibraryAppletHandle handle,
  const void* pData, size_t size) {
  applet::StorageHandle storage = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateStorage(&storage, size));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::WriteToStorage(storage, 0, pData, size));
  applet::PushToInChannel(handle, storage);
}

applet::LibraryAppletHandle CreateLibraryApplet(applet::AppletId appletId,
  const void* pParam, size_t paramSize) {
  applet::LibraryAppletHandle handle = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateLibraryApplet(&handle,
    appletId, applet::LibraryAppletMode(0)));
  la::CommonArgumentsWriter writer(0);
  writer.PushToInChannel(handle);
  applet::StorageHandle storage = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateStorage(&storage, paramSize));
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::WriteToStorage(storage, 0, pParam, paramSize));
  applet::PushToInChannel(handle, storage);
  return handle;
}

void StartLibraryApplet(applet::LibraryAppletHandle handle,
  bool isExtremity) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    applet::StartLibraryApplet(handle, &isExtremity));
  applet::JoinLibraryApplet(handle);
  switch (applet::GetLibraryAppletExitReason(handle)) {
    case applet::LibraryAppletExitReason_Normal:
    case applet::LibraryAppletExitReason_Canceled:
      break;
    case applet::LibraryAppletExitReason_Abnormal:
      [[clang::nomerge]] diag::detail::AbortImpl();
    case applet::LibraryAppletExitReason_Unexpected:
      [[clang::nomerge]] diag::detail::AbortImpl();
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

inline void ShowLibraryApplet(applet::AppletId appletId, const void* pParam,
  size_t paramSize, bool isExtremity) {
  const applet::LibraryAppletHandle handle =
    CreateLibraryApplet(appletId, pParam, paramSize);
  StartLibraryApplet(handle, isExtremity);
  applet::CloseLibraryApplet(handle);
}

inline void ShowErrorViewerImpl(const void* pParam, size_t paramSize) {
  ShowLibraryApplet(AppletId_Error, pParam, paramSize, true);
}

void ShowErrorViewerImpl(const void* pParam, size_t paramSize,
  const void* pData, size_t dataSize) {
  const applet::LibraryAppletHandle handle =
    CreateLibraryApplet(AppletId_Error, pParam, paramSize);
  PushToInChannel(handle, pData, dataSize);
  StartLibraryApplet(handle, true);
  applet::CloseLibraryApplet(handle);
}

inline ErrorViewerStartupParamForSystemData MakeSystemDataParam() {
  ErrorViewerStartupParamForSystemData param = {};
  param.m_ErrorType = ErrorType_SystemData;
  param.m_IsJumpEnabled = true;
  param.m_Version = 1;
  return param;
}

inline void InitializeParentalControlParam(
  ErrorViewerStartupParamForParentalControl* pParam, Result result) {
  pParam->m_Header.errorType = ErrorType_ParentalControl;
  pParam->m_Header.isJumpEnabled = true;
  pParam->m_Header.version = 1;
  pParam->m_Result = result;
}

void ShowResultErrorViewer(Result result) {
  if (IsParentalControlRestriction(result)) {
    ErrorViewerStartupParamForParentalControlVersion0 param = {};
    param.header.errorType = ErrorType_ParentalControl;
    param.header.isJumpEnabled = true;
    param.result = result;
    ShowErrorViewerImpl(&param, sizeof(param));
  }
  else {
    ErrorViewerStartupParamForSystemData param = MakeSystemDataParam();
    param.m_Result = result;
    ShowErrorViewerImpl(&param, sizeof(param));
  }
}

inline void ShowErrorCodeErrorViewer(ErrorCode errorCode) {
  ErrorViewerStartupParamForSystemData param = MakeSystemDataParam();
  param.m_IsErrorCode = true;
  param.m_ErrorCode = errorCode;
  ShowErrorViewerImpl(&param, sizeof(param));
}

inline void ShowErrorImpl(Result result) {
  const ErrorCode errorCode = MakeErrorCodeFromResult(result);
  if (IsNetworkServiceErrorImpl(errorCode)) {
    account::ShowLicenseRequirementsForNetworkServiceForUnspecifiedUsers(
      errorCode);
    return;
  }
  ShowResultErrorViewer(result);
}

inline void ShowErrorRecordImpl(ErrorCode errorCode, time::PosixTime time) {
  ErrorViewerStartupParamForErrorRecord param = {};
  param.header.errorType = ErrorType_ErrorRecord;
  param.header.isJumpEnabled = true;
  param.errorCode = errorCode;
  param.time = time;
  ShowErrorViewerImpl(&param, sizeof(param));
}

}

ErrorCode MakeErrorCode(ErrorCodeCategoryType type, uint32_t number) {
  const ErrorCodeCategoryEntry* pEntry = nullptr;
  for (const ErrorCodeCategoryEntry& entry : ErrorCodeCategoryTable) {
    if (entry.type == type) {
      pEntry = &entry;
      break;
    }
  }
  NN_ABORT_UNLESS(pEntry != nullptr);
  return ErrorCode{pEntry->category, number};
}

void ShowError(Result result) {
  ShowErrorImpl(result);
}

void ShowError(ErrorCode errorCode) {
  if (IsNetworkServiceErrorImpl(errorCode)) {
    account::ShowLicenseRequirementsForNetworkServiceForUnspecifiedUsers(
      errorCode);
    return;
  }
  ShowErrorCodeErrorViewer(errorCode);
}

void ShowError(const ErrorResultVariant& variant) {
  switch (variant.GetState()) {
    case 1:
      ShowErrorImpl(variant);
      break;
    case 2:
      ShowError(static_cast<ErrorCode>(variant));
      break;
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
}

void ShowUnacceptableApplicationVersionError() {
  ErrorViewerStartupParamForSystemData param = MakeSystemDataParam();
  param.m_Result = ResultUnacceptableApplicationVersion;
  ShowErrorViewerImpl(&param, sizeof(param));
}

void ShowUnacceptableAddOnContentVersionError() {
  ErrorViewerStartupParamForSystemData param = MakeSystemDataParam();
  param.m_Result = ResultUnacceptableAddOnContentVersion;
  ShowErrorViewerImpl(&param, sizeof(param));
}

void ShowUnacceptableAddOnContentForUpgradeVersionError() {
  ErrorViewerStartupParamForSystemData param = MakeSystemDataParam();
  param.m_Result = ResultUnacceptableAddOnContentForUpgradeVersion;
  // The viewer comes back every time it is closed.
  while (true) {
    ShowErrorViewerImpl(&param, sizeof(param));
  }
}

void ShowApplicationError(const ApplicationErrorArg& arg) {
  ShowErrorViewerImpl(&arg, sizeof(arg));
}

void ShowError(Result result, const ResultBacktrace& backtrace) {
  if (IsParentalControlRestriction(result)) {
    ErrorViewerStartupParamForParentalControl param = {};
    InitializeParentalControlParam(&param, result);
    param.m_HasResultBacktrace = true;
    param.m_ResultBacktrace = backtrace;
    ShowErrorViewerImpl(&param, sizeof(param));
  }
  else {
    ErrorViewerStartupParamForSystemData param = MakeSystemDataParam();
    param.m_HasResultBacktrace = true;
    param.m_Result = result;
    ShowErrorViewerImpl(&param, sizeof(param), &backtrace, sizeof(backtrace));
  }
}

void ShowError(Result result, const ErrorContext& context) {
  if (IsParentalControlRestriction(result)) {
    ErrorViewerStartupParamForParentalControl param = {};
    InitializeParentalControlParam(&param, result);
    param.m_HasErrorContext = true;
    param.m_ErrorContext = context;
    ShowErrorViewerImpl(&param, sizeof(param));
  }
  else {
    ErrorViewerStartupParamForSystemData param = MakeSystemDataParam();
    param.m_HasErrorContext = true;
    param.m_Result = result;
    ShowErrorViewerImpl(&param, sizeof(param), &context, sizeof(context));
  }
}

void ShowError(ErrorCode errorCode, const ErrorContext& context) {
  ErrorViewerStartupParamForSystemData param = MakeSystemDataParam();
  param.m_IsErrorCode = true;
  param.m_HasErrorContext = true;
  param.m_ErrorCode = errorCode;
  ShowErrorViewerImpl(&param, sizeof(param), &context, sizeof(context));
}

void ShowError(Result result, const CallerIdentifier& caller) {
  if (IsParentalControlRestriction(result)) {
    ErrorViewerStartupParamForParentalControl param = {};
    InitializeParentalControlParam(&param, result);
    param.m_HasCallerIdentifier = true;
    param.m_CallerIdentifier = caller;
    ShowErrorViewerImpl(&param, sizeof(param));
  }
  else {
    ErrorViewerStartupParamForSystemData param = MakeSystemDataParam();
    param.m_Result = result;
    param.m_HasCallerIdentifier = true;
    param.m_CallerIdentifier = caller;
    ShowErrorViewerImpl(&param, sizeof(param));
  }
}

void ShowError(Result result, const ResultBacktrace& backtrace,
  const CallerIdentifier& caller) {
  if (IsParentalControlRestriction(result)) {
    ErrorViewerStartupParamForParentalControl param = {};
    InitializeParentalControlParam(&param, result);
    param.m_HasCallerIdentifier = true;
    param.m_HasResultBacktrace = true;
    param.m_ResultBacktrace = backtrace;
    param.m_CallerIdentifier = caller;
    ShowErrorViewerImpl(&param, sizeof(param));
  }
  else {
    ErrorViewerStartupParamForSystemData param = MakeSystemDataParam();
    param.m_HasResultBacktrace = true;
    param.m_Result = result;
    param.m_HasCallerIdentifier = true;
    param.m_CallerIdentifier = caller;
    ShowErrorViewerImpl(&param, sizeof(param), &backtrace, sizeof(backtrace));
  }
}

void ShowError(Result result, const ErrorContext& context,
  const CallerIdentifier& caller) {
  if (IsParentalControlRestriction(result)) {
    ErrorViewerStartupParamForParentalControl param = {};
    InitializeParentalControlParam(&param, result);
    param.m_HasCallerIdentifier = true;
    param.m_HasErrorContext = true;
    param.m_ErrorContext = context;
    param.m_CallerIdentifier = caller;
    ShowErrorViewerImpl(&param, sizeof(param));
  }
  else {
    ErrorViewerStartupParamForSystemData param = MakeSystemDataParam();
    param.m_HasErrorContext = true;
    param.m_Result = result;
    param.m_HasCallerIdentifier = true;
    param.m_CallerIdentifier = caller;
    ShowErrorViewerImpl(&param, sizeof(param), &context, sizeof(context));
  }
}

void ShowError(ErrorCode errorCode, const CallerIdentifier& caller) {
  ErrorViewerStartupParamForSystemData param = MakeSystemDataParam();
  param.m_IsErrorCode = true;
  param.m_ErrorCode = errorCode;
  param.m_HasCallerIdentifier = true;
  param.m_CallerIdentifier = caller;
  ShowErrorViewerImpl(&param, sizeof(param));
}

void ShowError(ErrorCode errorCode, const ErrorContext& context,
  const CallerIdentifier& caller) {
  ErrorViewerStartupParamForSystemData param = MakeSystemDataParam();
  param.m_IsErrorCode = true;
  param.m_HasErrorContext = true;
  param.m_ErrorCode = errorCode;
  param.m_HasCallerIdentifier = true;
  param.m_CallerIdentifier = caller;
  ShowErrorViewerImpl(&param, sizeof(param), &context, sizeof(context));
}

void ShowSystemError(const SystemErrorArg& arg) {
  const ErrorViewerStartupParamHeader* pParam = arg.GetStartupParam();
  if (pParam->hasErrorContext) {
    ShowErrorViewerImpl(pParam, SystemErrorStartupParamSize,
      arg.GetErrorContext(), sizeof(ErrorContext));
  }
  else {
    ShowErrorViewerImpl(pParam, SystemErrorStartupParamSize);
  }
}

void ShowEula(settings::system::RegionCode regionCode) {
  ErrorViewerStartupParamForEula param = {};
  param.header.errorType = ErrorType_Eula;
  param.header.isJumpEnabled = true;
  param.regionCode = regionCode;
  ShowLibraryApplet(AppletId_Eula, &param, sizeof(param), false);
}

void ShowSystemUpdateEula(settings::system::RegionCode regionCode,
  EulaData& eulaData) {
  ErrorViewerStartupParamForEula param = {};
  param.header.errorType = ErrorType_SystemUpdateEula;
  param.header.isJumpEnabled = true;
  param.regionCode = regionCode;
  const applet::LibraryAppletHandle handle =
    CreateLibraryApplet(AppletId_Eula, &param, sizeof(param));
  applet::StorageHandle storage = {};
  NN_ABORT_UNLESS_RESULT_SUCCESS(applet::CreateLargeStorage(&storage,
    &eulaData, sizeof(eulaData), false));
  applet::PushToInChannel(handle, storage);
  StartLibraryApplet(handle, false);
  applet::CloseLibraryApplet(handle);
}

void ShowErrorRecord(Result result, time::PosixTime time) {
  ShowErrorRecordImpl(MakeErrorCodeFromResult(result), time);
}

void ShowErrorRecord(ErrorCode errorCode, time::PosixTime time) {
  ShowErrorRecordImpl(errorCode, time);
}

bool CreateErrorViewerStartupParamForRecordedError(void* pOutParam,
  size_t* pOutSize, size_t paramSize, const char* errorCodeString,
  const char* message, time::PosixTime time) {
  static_cast<void>(paramSize);
  ErrorCode errorCode = {};
  if (detail::TryParseErrorCodeString(&errorCode, errorCodeString)) {
    if (message != nullptr) {
      auto* pParam =
        static_cast<ErrorViewerStartupParamForRecordedSystemData*>(pOutParam);
      pParam->header.version = 0;
      pParam->header.errorType = ErrorType_RecordedSystemData;
      pParam->errorCode = errorCode;
      pParam->time = time;
      CopyString(pParam->message, message);
      *pOutSize = sizeof(*pParam);
    }
    else {
      auto* pParam =
        static_cast<ErrorViewerStartupParamForErrorRecord*>(pOutParam);
      pParam->header.version = 0;
      pParam->header.errorType = ErrorType_ErrorRecord;
      pParam->errorCode = errorCode;
      pParam->time = time;
      *pOutSize = sizeof(*pParam);
    }
    return true;
  }

  ns::ApplicationErrorCodePrefix prefix = {};
  ns::ApplicationErrorCodeCategory category = {};
  uint32_t number = 0;
  if (detail::TryParseApplicationErrorCodeString(&prefix, &category, &number,
    errorCodeString) && message != nullptr) {
    auto* pParam =
      static_cast<ErrorViewerStartupParamForRecordedApplicationError*>(
        pOutParam);
    pParam->header.version = 0;
    pParam->header.errorType = ErrorType_RecordedApplicationError;
    CopyString(pParam->category, category.value);
    pParam->time = time;
    pParam->number = number;
    pParam->prefix = prefix;
    CopyString(pParam->message, message);
    *pOutSize = sizeof(*pParam);
    return true;
  }
  return false;
}

void ShowErrorRecord(const void* pParam, size_t paramSize) {
  ShowErrorViewerImpl(pParam, paramSize);
}

void ShowErrorViewer(Result result) {
  ShowResultErrorViewer(result);
}

void ShowErrorViewer(ErrorCode errorCode) {
  ShowErrorCodeErrorViewer(errorCode);
}

void ShowMinorsProtectionWarningForPlatformRegionChina(
  const MinorsProtectionWarningForPlatformRegionChinaArg& arg) {
  ShowErrorViewerImpl(&arg, sizeof(arg));
}

void GetErrorCodeString(char* buffer, size_t size, ErrorCode errorCode) {
  if (IsDisplayable(errorCode)) {
    util::TSNPrintf(buffer, size, "%04u-%04u", errorCode.category,
      errorCode.number);
  }
  else {
    CopyString(buffer, "2999-9999", static_cast<int>(size));
  }
}

void ResultBacktrace::Make(ResultBacktrace* pOut, const Result* results,
  int count) {
  pOut->count = count;
  for (int i = 0; i < count; ++i) {
    pOut->results[i] = results[i];
  }
}

bool IsNetworkServiceError(ErrorCode errorCode) {
  return IsNetworkServiceErrorImpl(errorCode);
}

bool IsNetworkServiceError(Result result) {
  return IsNetworkServiceErrorImpl(MakeErrorCodeFromResult(result));
}

void ReportMultimediaError(Result result,
  const movie::MultimediaTelemetryReport& report) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    am::service::GetSelfControllerObject()->ReportMultimediaError(
      result.GetInnerValueForDebug(), sf::InBuffer(&report, sizeof(report))));
}

void ReportNplnError(Result result) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    am::service::GetSelfControllerObject()->ReportNplnError(
      result.GetInnerValueForDebug()));
}

}
