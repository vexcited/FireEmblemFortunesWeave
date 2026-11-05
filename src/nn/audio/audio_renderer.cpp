#include "nn/audio/audio_renderer.hpp"
#include "nn/audio/renderer_config.hpp"
#include "nn/diag/diag_abort.hpp"
#include "nn/os/semaphore.hpp"
#include "nn/os/system_event.hpp"

namespace nn::audio {
namespace detail {

extern os::SemaphoreType g_RendererResourceSemaphore;

}

namespace {

bool IsRenderingTimeLimitUnsupported(Result result) {
  return result.GetInnerValueForDebug() == 0x499;
}

bool IsManualExecutionUnsupported(Result result) {
  return result.GetInnerValueForDebug() == 0x40299;
}

}

void CloseAudioRenderer(AudioRendererHandle handle) {
  handle._pObject->Release();
  if (detail::g_IsResourceExclusionCheckEnabled) {
    detail::ResourceExclusionChecker* checker =
      detail::FindResourceExclusionCheckerFromInternalHandleImpl(
        handle._pObject);
    if (checker != nullptr) {
      detail::ReleaseResourceExclusionChecker(checker);
    }
  }
  os::ReleaseSemaphore(&detail::g_RendererResourceSemaphore);
}

Result StartAudioRenderer(AudioRendererHandle handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(handle._pObject->Start());
  handle._pInfo->state = AudioRendererState_Started;
  return Result{0};
}

void StopAudioRenderer(AudioRendererHandle handle) {
  NN_ABORT_UNLESS_RESULT_SUCCESS(handle._pObject->Stop());
  handle._pInfo->state = AudioRendererState_Stopped;
}

int GetAudioRendererSampleRate(AudioRendererHandle handle) {
  return handle._pInfo->sampleRate;
}

int GetAudioRendererSampleCount(AudioRendererHandle handle) {
  return handle._pInfo->sampleCount;
}

int GetAudioRendererMixBufferCount(AudioRendererHandle handle) {
  return handle._pInfo->mixBufferCount;
}

AudioRendererState GetAudioRendererState(AudioRendererHandle handle) {
  return static_cast<AudioRendererState>(handle._pInfo->state);
}

Result SetAudioRendererRenderingTimeLimit(AudioRendererHandle handle,
  int limit) {
  if (handle._pInfo->renderingTimeLimit == limit) {
    return Result{0};
  }
  Result result = handle._pObject->SetRenderingTimeLimit(limit);
  if (result.IsSuccess()) {
    handle._pInfo->renderingTimeLimit = limit;
    return result;
  }
  if (IsRenderingTimeLimitUnsupported(result)) {
    return result;
  }
  diag::detail::AbortImpl(&result);
}

int GetAudioRendererRenderingTimeLimit(AudioRendererHandle handle) {
  return handle._pInfo->renderingTimeLimit;
}

Result ExecuteAudioRendererRendering(AudioRendererHandle handle) {
  Result result = handle._pObject->ExecuteAudioRendererRendering();
  if (result.IsSuccess()) {
    if (handle._pInfo->pSystemEvent != nullptr) {
      os::SignalSystemEvent(handle._pInfo->pSystemEvent);
    }
    return result;
  }
  if (IsManualExecutionUnsupported(result)) {
    return result;
  }
  diag::detail::AbortImpl(&result);
}

AudioRendererRenderingDevice GetAudioRendererRenderingDevice(
  AudioRendererHandle handle) {
  return static_cast<AudioRendererRenderingDevice>(
    handle._pInfo->renderingDevice);
}

AudioRendererExecutionMode GetAudioRendererExecutionMode(
  AudioRendererHandle handle) {
  return static_cast<AudioRendererExecutionMode>(
    handle._pInfo->executionMode);
}

void SetAudioRendererVoiceDropParameter(AudioRendererHandle handle,
  float parameter) {
  if (handle._pInfo->voiceDropParameter == parameter) {
    return;
  }
  NN_ABORT_UNLESS_RESULT_SUCCESS(
    handle._pObject->SetVoiceDropParameter(parameter));
  handle._pInfo->voiceDropParameter = parameter;
}

float GetAudioRendererVoiceDropParameter(AudioRendererHandle handle) {
  return handle._pInfo->voiceDropParameter;
}

}
