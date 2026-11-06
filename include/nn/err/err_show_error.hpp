#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/err/err_startup_param.hpp"
#include "nn/err/err_types.hpp"
#include "nn/result.hpp"
#include "nn/settings/settings_types.hpp"
#include "nn/time/time_types.hpp"

namespace movie {

struct MultimediaTelemetryReport;

}

namespace nn::err {

struct EulaData {
  uint8_t data[0x20000];
};

void ShowError(Result result);
void ShowError(ErrorCode errorCode);
void ShowError(const ErrorResultVariant& variant);
void ShowError(Result result, const ResultBacktrace& backtrace);
void ShowError(Result result, const ErrorContext& context);
void ShowError(ErrorCode errorCode, const ErrorContext& context);
void ShowError(Result result, const CallerIdentifier& caller);
void ShowError(Result result, const ResultBacktrace& backtrace,
  const CallerIdentifier& caller);
void ShowError(Result result, const ErrorContext& context,
  const CallerIdentifier& caller);
void ShowError(ErrorCode errorCode, const CallerIdentifier& caller);
void ShowError(ErrorCode errorCode, const ErrorContext& context,
  const CallerIdentifier& caller);
void ShowUnacceptableApplicationVersionError();
void ShowUnacceptableAddOnContentVersionError();
[[noreturn]] void ShowUnacceptableAddOnContentForUpgradeVersionError();
void ShowApplicationError(const ApplicationErrorArg& arg);
void ShowSystemError(const SystemErrorArg& arg);
void ShowEula(settings::system::RegionCode regionCode);
void ShowSystemUpdateEula(settings::system::RegionCode regionCode,
  EulaData& eulaData);
void ShowErrorRecord(Result result, time::PosixTime time);
void ShowErrorRecord(ErrorCode errorCode, time::PosixTime time);
void ShowErrorRecord(const void* pParam, size_t paramSize);
bool CreateErrorViewerStartupParamForRecordedError(void* pOutParam,
  size_t* pOutSize, size_t paramSize, const char* errorCodeString,
  const char* message, time::PosixTime time);
void ShowErrorViewer(Result result);
void ShowErrorViewer(ErrorCode errorCode);
void ShowMinorsProtectionWarningForPlatformRegionChina(
  const MinorsProtectionWarningForPlatformRegionChinaArg& arg);
void GetErrorCodeString(char* buffer, size_t size, ErrorCode errorCode);
bool IsNetworkServiceError(ErrorCode errorCode);
bool IsNetworkServiceError(Result result);
void ReportMultimediaError(Result result,
  const movie::MultimediaTelemetryReport& report);
void ReportNplnError(Result result);

}
