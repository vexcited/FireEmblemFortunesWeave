#include "nn/err/err_show_error.hpp"
#include "nn/la/la_common_arguments.hpp"
#include "nn/nfp/nfp_client.hpp"
#include "nn/os/mutex.hpp"
#include "nn/os/sleep_thread.hpp"

namespace nn::nfc::detail {

enum FunctionLevel : int32_t {
  FunctionLevel_None,
};

}

namespace nn::nfp {

struct ReturnValueForAmiiboSettings {
  uint8_t isSucceeded;
  uint8_t data[391];
};

struct StartParamForAmiiboSettings {
  uint8_t data[424];
};

}

namespace nn::nfp::detail {

namespace {

constexpr applet::AppletId AppletId_Cabinet =
  static_cast<applet::AppletId>(0x100000b);
constexpr uint32_t CommonArgumentsVersion = 1;

constexpr Result ResultAmiiboSettingsCanceled = {0x1a073};
constexpr Result ResultNeedRestart = {0x8073};

constexpr uint32_t ResultModuleNfp = 115;

nfc::detail::FunctionLevel g_FunctionLevel;

os::Mutex g_AmiiboSettingsMutex(false);

struct AmiiboSettingsBuffer {
  ReturnValueForAmiiboSettings returnValue;
  StartParamForAmiiboSettings startParam;
};

AmiiboSettingsBuffer g_AmiiboSettingsBuffer;

bool IsRestartRequired(Result result) {
  const uint32_t value = result.GetInnerValueForDebug();
  return value == (ResultModuleNfp | 112 << 9) ||
    value == (ResultModuleNfp | 113 << 9) ||
    value == (ResultModuleNfp | 114 << 9) ||
    value == (ResultModuleNfp | 115 << 9);
}

bool IsRetryRecommended(Result result) {
  const uint32_t description = result.value >> 9 & 0x1fff;
  return (result.value & 0x1ff) == ResultModuleNfp && description >= 75 &&
    description < 80;
}

}

nfc::detail::FunctionLevel GetFunctionLevel() {
  return g_FunctionLevel;
}

void SetFunctionLevel(nfc::detail::FunctionLevel level) {
  g_FunctionLevel = level;
}

void ResetFunctionLevel() {
  g_FunctionLevel = nfc::detail::FunctionLevel_None;
}

os::Mutex& RefMutexForAmiiboSettings() {
  return g_AmiiboSettingsMutex;
}

void GetBufferForAmiiboSettings(ReturnValueForAmiiboSettings** pOutReturnValue,
  StartParamForAmiiboSettings** pOutStartParam) {
  *pOutReturnValue = &g_AmiiboSettingsBuffer.returnValue;
  *pOutStartParam = &g_AmiiboSettingsBuffer.startParam;
}

Result StartAmiiboSettings(ReturnValueForAmiiboSettings* pOutReturnValue,
  const StartParamForAmiiboSettings& startParam) {
  Result result = ResultAmiiboSettingsCanceled;
  la::CommonArgumentsWriter writer(CommonArgumentsVersion);
  size_t outSize = 0;
  if (la::StartLibraryAppletEasy(AppletId_Cabinet, writer, &startParam,
    sizeof(startParam), pOutReturnValue, sizeof(*pOutReturnValue),
    &outSize, false).IsFailure()) {
    pOutReturnValue->isSucceeded = 0;
  }
  else if (pOutReturnValue->isSucceeded != 0) {
    result = Result{};
  }
  return result;
}

Result CheckError(const Result& result) {
  if (result.IsSuccess()) {
    return result;
  }
  if (IsRestartRequired(result)) {
    if (IsErrorVisible()) {
      err::ShowError(result);
    }
    return ResultNeedRestart;
  }
  if (IsRetryRecommended(result)) {
    os::SleepThread(TimeSpan{50000000});
  }
  return result;
}

}
