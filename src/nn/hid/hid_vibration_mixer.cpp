#include "nn/hid/detail/hid_abort.hpp"
#include "nn/hid/hid_vibration_node.hpp"
#include "nn/os/synchronization.hpp"

namespace nn::detail {

[[noreturn]] void UnexpectedDefaultImpl();

}

namespace nn::hid {

namespace {

constexpr float DefaultFrequencyLow = 160.0f;
constexpr float DefaultFrequencyHigh = 320.0f;
constexpr float CompressorRatioLimit = 60.0f;

os::SdkMutexType g_MixerMutex;

VibrationNodeConnection* GetConnection(util::IntrusiveListNode* node) {
  return util::IntrusiveListBaseNodeTraits<VibrationNodeConnection>::GetItem(
    node);
}

}

void VibrationMixer::CompressorParameter::Apply(VibrationValue* pValue) {
  if (pValue->amplitudeLow >= threshold) {
    float amplitude = threshold;
    if (ratio < CompressorRatioLimit) {
      amplitude += (pValue->amplitudeLow - threshold) / ratio;
    }
    pValue->amplitudeLow = amplitude;
  }
  if (pValue->amplitudeHigh >= threshold) {
    float amplitude = threshold;
    if (ratio < CompressorRatioLimit) {
      amplitude += (pValue->amplitudeHigh - threshold) / ratio;
    }
    pValue->amplitudeHigh = amplitude;
  }
}

VibrationMixer::VibrationMixer() :
  m_MixMode(VibrationMixMode_MaxAmplitudePerSubband),
  m_Compressor{0.0f, 1.0f} {}

VibrationMixer::~VibrationMixer() {}

void VibrationMixer::SetMixMode(const VibrationMixMode& mode) {
  g_MixerMutex.Lock();
  m_MixMode = mode;
  g_MixerMutex.Unlock();
}

void VibrationMixer::SetCompressor(const CompressorParameter& parameter) {
  NN_ABORT_UNLESS(parameter.threshold >= 0.0f);
  NN_ABORT_UNLESS(parameter.ratio >= 1.0f);
  m_Compressor = parameter;
}

void VibrationMixer::OnNextSampleRequired(VibrationValue* pValue,
  VibrationNodeConnectionList* pInputConnections) {
  g_MixerMutex.Lock();
  *pValue = VibrationValue{0.0f, DefaultFrequencyLow, 0.0f,
    DefaultFrequencyHigh};
  switch (m_MixMode) {
    case VibrationMixMode_None:
      break;
    case VibrationMixMode_MaxAmplitude:
      for (util::IntrusiveListNode* node = pInputConnections->GetFirstNode();
        !pInputConnections->IsEnd(node); node = node->GetNext()) {
        VibrationNodeConnection* pConnection = GetConnection(node);
        const VibrationValue value =
          pConnection->GetSource()->GetCurrentVibration();
        const VibrationModulation modulation = pConnection->GetModulation();
        const float amplitudeLow = value.amplitudeLow * modulation.gainLow;
        const float amplitudeHigh = value.amplitudeHigh * modulation.gainHigh;
        if (amplitudeLow + amplitudeHigh >=
          pValue->amplitudeLow + pValue->amplitudeHigh) {
          pValue->amplitudeLow = amplitudeLow;
          pValue->frequencyLow = value.frequencyLow * modulation.frequencyLow;
          pValue->amplitudeHigh = amplitudeHigh;
          pValue->frequencyHigh =
            value.frequencyHigh * modulation.frequencyHigh;
        }
      }
      break;
    case VibrationMixMode_MaxAmplitudePerSubband:
      for (util::IntrusiveListNode* node = pInputConnections->GetFirstNode();
        !pInputConnections->IsEnd(node); node = node->GetNext()) {
        VibrationNodeConnection* pConnection = GetConnection(node);
        const VibrationValue value =
          pConnection->GetSource()->GetCurrentVibration();
        const VibrationModulation modulation = pConnection->GetModulation();
        const float amplitudeLow = value.amplitudeLow * modulation.gainLow;
        if (amplitudeLow >= pValue->amplitudeLow) {
          pValue->amplitudeLow = amplitudeLow;
          pValue->frequencyLow = value.frequencyLow * modulation.frequencyLow;
        }
        const float amplitudeHigh = value.amplitudeHigh * modulation.gainHigh;
        if (amplitudeHigh >= pValue->amplitudeHigh) {
          pValue->amplitudeHigh = amplitudeHigh;
          pValue->frequencyHigh =
            value.frequencyHigh * modulation.frequencyHigh;
        }
      }
      break;
    case VibrationMixMode_AmplitudeSum: {
      float weightedFrequencyLow = 0.0f;
      float weightedFrequencyHigh = 0.0f;
      bool hasInput = false;
      for (util::IntrusiveListNode* node = pInputConnections->GetFirstNode();
        !pInputConnections->IsEnd(node); node = node->GetNext()) {
        VibrationNodeConnection* pConnection = GetConnection(node);
        const VibrationValue value =
          pConnection->GetSource()->GetCurrentVibration();
        const VibrationModulation modulation = pConnection->GetModulation();
        const float amplitudeLow = value.amplitudeLow * modulation.gainLow;
        const float amplitudeHigh = value.amplitudeHigh * modulation.gainHigh;
        weightedFrequencyLow +=
          amplitudeLow * (value.frequencyLow * modulation.frequencyLow);
        weightedFrequencyHigh +=
          amplitudeHigh * (value.frequencyHigh * modulation.frequencyHigh);
        pValue->amplitudeLow += amplitudeLow;
        pValue->amplitudeHigh += amplitudeHigh;
        hasInput = true;
      }
      if (hasInput) {
        if (pValue->amplitudeLow > 0.0f) {
          pValue->frequencyLow = weightedFrequencyLow / pValue->amplitudeLow;
        }
        if (pValue->amplitudeHigh > 0.0f) {
          pValue->frequencyHigh =
            weightedFrequencyHigh / pValue->amplitudeHigh;
        }
      }
      break;
    }
    default:
      nn::detail::UnexpectedDefaultImpl();
  }
  m_Compressor.Apply(pValue);
  g_MixerMutex.Unlock();
}

}
