#include <string.h>

#include "nn/nfp/nfp_amiibo_settings.hpp"

namespace nn::nfp {

namespace {

[[gnu::always_inline]] inline void SetUpStartParam(
  StartParamForAmiiboSettings* pStartParam, AmiiboSettingsMode mode,
  uint8_t flags, const AmiiboSettingsStartParam& startParam) {
  memset(pStartParam, 0, sizeof(*pStartParam));
  pStartParam->mode = mode;
  pStartParam->flags = flags;
  pStartParam->option = startParam.option;
  pStartParam->handle = startParam.handle;
}

[[gnu::always_inline]] inline void SetApplicationData(
  StartParamForAmiiboSettings* pStartParam,
  const AmiiboSettingsStartParam& startParam) {
  memcpy(pStartParam->applicationData, startParam.applicationData,
    sizeof(pStartParam->applicationData));
}

}

Result StartNicknameAndOwnerSettings(DeviceHandle* pOutHandle,
  bool* pOutIsRegistered, RegisterInfo* pOutRegisterInfo,
  const AmiiboSettingsStartParam& startParam, const TagInfo& tagInfo,
  const RegisterInfo& registerInfo) {
  ReturnValueForAmiiboSettings* pReturnValue = nullptr;
  StartParamForAmiiboSettings* pStartParam = nullptr;
  os::Mutex& mutex = detail::RefMutexForAmiiboSettings();
  mutex.Lock();
  detail::GetBufferForAmiiboSettings(&pReturnValue, &pStartParam);
  SetUpStartParam(pStartParam, AmiiboSettingsMode_NicknameAndOwnerSettings,
    AmiiboSettingsFlag_None | AmiiboSettingsFlag_TagInfo |
      AmiiboSettingsFlag_RegisterInfo, startParam);
  pStartParam->tagInfo = tagInfo;
  pStartParam->registerInfo = registerInfo;
  SetApplicationData(pStartParam, startParam);
  const Result result = detail::StartAmiiboSettings(pReturnValue,
    *pStartParam);
  if (result.IsSuccess()) {
    *pOutHandle = pReturnValue->handle;
    *pOutIsRegistered =
      (pReturnValue->flags & AmiiboSettingsFlag_RegisterInfo) != 0;
    if (pReturnValue->flags & AmiiboSettingsFlag_RegisterInfo) {
      *pOutRegisterInfo = pReturnValue->registerInfo;
    }
  }
  mutex.Unlock();
  return result;
}

Result StartNicknameAndOwnerSettings(DeviceHandle* pOutHandle,
  bool* pOutIsRegistered, RegisterInfo* pOutRegisterInfo,
  const AmiiboSettingsStartParam& startParam, const TagInfo& tagInfo) {
  ReturnValueForAmiiboSettings* pReturnValue = nullptr;
  StartParamForAmiiboSettings* pStartParam = nullptr;
  os::Mutex& mutex = detail::RefMutexForAmiiboSettings();
  mutex.Lock();
  detail::GetBufferForAmiiboSettings(&pReturnValue, &pStartParam);
  SetUpStartParam(pStartParam, AmiiboSettingsMode_NicknameAndOwnerSettings,
    AmiiboSettingsFlag_None | AmiiboSettingsFlag_TagInfo, startParam);
  pStartParam->tagInfo = tagInfo;
  SetApplicationData(pStartParam, startParam);
  const Result result = detail::StartAmiiboSettings(pReturnValue,
    *pStartParam);
  if (result.IsSuccess()) {
    *pOutHandle = pReturnValue->handle;
    *pOutIsRegistered =
      (pReturnValue->flags & AmiiboSettingsFlag_RegisterInfo) != 0;
    if (pReturnValue->flags & AmiiboSettingsFlag_RegisterInfo) {
      *pOutRegisterInfo = pReturnValue->registerInfo;
    }
  }
  mutex.Unlock();
  return result;
}

Result StartGameDataEraser(DeviceHandle* pOutHandle,
  const AmiiboSettingsStartParam& startParam, const TagInfo& tagInfo) {
  ReturnValueForAmiiboSettings* pReturnValue = nullptr;
  StartParamForAmiiboSettings* pStartParam = nullptr;
  os::Mutex& mutex = detail::RefMutexForAmiiboSettings();
  mutex.Lock();
  detail::GetBufferForAmiiboSettings(&pReturnValue, &pStartParam);
  SetUpStartParam(pStartParam, AmiiboSettingsMode_GameDataEraser,
    AmiiboSettingsFlag_None | AmiiboSettingsFlag_TagInfo, startParam);
  pStartParam->tagInfo = tagInfo;
  SetApplicationData(pStartParam, startParam);
  const Result result = detail::StartAmiiboSettings(pReturnValue,
    *pStartParam);
  if (result.IsSuccess()) {
    *pOutHandle = pReturnValue->handle;
  }
  mutex.Unlock();
  return result;
}

Result StartRestorer(DeviceHandle* pOutHandle,
  const AmiiboSettingsStartParam& startParam, const TagInfo& tagInfo) {
  ReturnValueForAmiiboSettings* pReturnValue = nullptr;
  StartParamForAmiiboSettings* pStartParam = nullptr;
  os::Mutex& mutex = detail::RefMutexForAmiiboSettings();
  mutex.Lock();
  detail::GetBufferForAmiiboSettings(&pReturnValue, &pStartParam);
  SetUpStartParam(pStartParam, AmiiboSettingsMode_Restorer,
    AmiiboSettingsFlag_None | AmiiboSettingsFlag_TagInfo, startParam);
  pStartParam->tagInfo = tagInfo;
  SetApplicationData(pStartParam, startParam);
  const Result result = detail::StartAmiiboSettings(pReturnValue,
    *pStartParam);
  if (result.IsSuccess()) {
    *pOutHandle = pReturnValue->handle;
  }
  mutex.Unlock();
  return result;
}

Result StartNicknameAndOwnerSettings(TagInfo* pOutTagInfo,
  DeviceHandle* pOutHandle, bool* pOutIsRegistered,
  RegisterInfo* pOutRegisterInfo,
  const AmiiboSettingsStartParam& startParam) {
  ReturnValueForAmiiboSettings* pReturnValue = nullptr;
  StartParamForAmiiboSettings* pStartParam = nullptr;
  os::Mutex& mutex = detail::RefMutexForAmiiboSettings();
  mutex.Lock();
  detail::GetBufferForAmiiboSettings(&pReturnValue, &pStartParam);
  SetUpStartParam(pStartParam, AmiiboSettingsMode_NicknameAndOwnerSettings,
    AmiiboSettingsFlag_None, startParam);
  SetApplicationData(pStartParam, startParam);
  const Result result = detail::StartAmiiboSettings(pReturnValue,
    *pStartParam);
  if (result.IsSuccess()) {
    *pOutTagInfo = pReturnValue->tagInfo;
    *pOutHandle = pReturnValue->handle;
    *pOutIsRegistered =
      (pReturnValue->flags & AmiiboSettingsFlag_RegisterInfo) != 0;
    if (pReturnValue->flags & AmiiboSettingsFlag_RegisterInfo) {
      *pOutRegisterInfo = pReturnValue->registerInfo;
    }
  }
  mutex.Unlock();
  return result;
}

namespace {

[[gnu::always_inline]] inline Result StartWithTagInfoOutput(
  TagInfo* pOutTagInfo, DeviceHandle* pOutHandle, AmiiboSettingsMode mode,
  const AmiiboSettingsStartParam& startParam) {
  ReturnValueForAmiiboSettings* pReturnValue = nullptr;
  StartParamForAmiiboSettings* pStartParam = nullptr;
  os::Mutex& mutex = detail::RefMutexForAmiiboSettings();
  mutex.Lock();
  detail::GetBufferForAmiiboSettings(&pReturnValue, &pStartParam);
  SetUpStartParam(pStartParam, mode, AmiiboSettingsFlag_None, startParam);
  SetApplicationData(pStartParam, startParam);
  const Result result = detail::StartAmiiboSettings(pReturnValue,
    *pStartParam);
  if (result.IsSuccess()) {
    *pOutTagInfo = pReturnValue->tagInfo;
    *pOutHandle = pReturnValue->handle;
  }
  mutex.Unlock();
  return result;
}

}

Result StartGameDataEraser(TagInfo* pOutTagInfo, DeviceHandle* pOutHandle,
  const AmiiboSettingsStartParam& startParam) {
  return StartWithTagInfoOutput(pOutTagInfo, pOutHandle,
    AmiiboSettingsMode_GameDataEraser, startParam);
}

Result StartRestorer(TagInfo* pOutTagInfo, DeviceHandle* pOutHandle,
  const AmiiboSettingsStartParam& startParam) {
  return StartWithTagInfoOutput(pOutTagInfo, pOutHandle,
    AmiiboSettingsMode_Restorer, startParam);
}

Result StartFormatter(TagInfo* pOutTagInfo, DeviceHandle* pOutHandle,
  const AmiiboSettingsStartParam& startParam) {
  return StartWithTagInfoOutput(pOutTagInfo, pOutHandle,
    AmiiboSettingsMode_Formatter, startParam);
}

}
