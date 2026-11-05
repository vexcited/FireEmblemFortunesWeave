#include <string.h>

#include "nn/audio/server/splitter_context.hpp"

namespace nn::audio::server {

ISplitterDestinationData::ISplitterDestinationData(int id)
  : m_Id(id), m_MixId(UnusedMixId), m_Next(nullptr), m_IsInUse(false),
    m_NeedToUpdateInternalState(false), m_MixVolume{}, m_MixVolumePrev{} {
}

bool ISplitterDestinationData::IsBiquadFilterEnabled() {
  return false;
}

const void* ISplitterDestinationData::GetBiquadFilterParameter() const {
  return nullptr;
}

void ISplitterDestinationData::ClearBiquadFilterState() {
}

void* ISplitterDestinationData::GetBiquadFilterStatePrev() {
  return nullptr;
}

bool ISplitterDestinationData::IsBiquadFilterStateResetRequired() const {
  return false;
}

void ISplitterDestinationData::ClearBiquadFilterStateResetRequired() {
}

int ISplitterDestinationData::GetId() const {
  return m_Id;
}

bool ISplitterDestinationData::IsConfigured() const {
  return m_IsInUse && m_MixId != UnusedMixId;
}

int ISplitterDestinationData::GetMixId() const {
  return m_MixId;
}

void ISplitterDestinationData::MarkAsNeedToUpdateInternalState() {
  m_NeedToUpdateInternalState = true;
}

float ISplitterDestinationData::GetMixVolume(int index) const {
  if (0 <= index && index < MixVolumeCountMax) {
    return m_MixVolume[index];
  }
  return 0.0f;
}

const float* ISplitterDestinationData::GetMixVolume() const {
  return m_MixVolume;
}

float ISplitterDestinationData::GetMixVolumePrev(int index) const {
  if (0 <= index && index < MixVolumeCountMax) {
    return m_MixVolumePrev[index];
  }
  return 0.0f;
}

const float* ISplitterDestinationData::GetMixVolumePrev() const {
  return m_MixVolumePrev;
}

void ISplitterDestinationData::ResetMixVolumePrev() {
  memcpy(m_MixVolumePrev, m_MixVolume, sizeof(m_MixVolumePrev));
}

void ISplitterDestinationData::UpdateInternalState() {
  if (m_IsInUse == true && m_NeedToUpdateInternalState) {
    memcpy(m_MixVolumePrev, m_MixVolume, sizeof(m_MixVolumePrev));
  }
  m_NeedToUpdateInternalState = false;
}

SplitterDestinationDataVer1::SplitterDestinationDataVer1(int id)
  : ISplitterDestinationData(id) {
}

size_t SplitterDestinationDataVer1::Update(const void* data,
  bool isPrevVolumeResetSupported, bool isBiquadFilterParameterFloat) {
  if (data != nullptr) {
    const InParameter* in = static_cast<const InParameter*>(data);
    if (in->magic == common::GetSplitterSendDataMagic() && in->id == m_Id) {
      m_MixId = in->mixId == -1 ? UnusedMixId : in->mixId;
      for (int i = 0; i < MixVolumeCountMax; i++) {
        m_MixVolume[i] = in->mixVolume[i];
      }
      if (!m_IsInUse && in->isInUse == true) {
        memcpy(m_MixVolumePrev, m_MixVolume, sizeof(m_MixVolumePrev));
        m_NeedToUpdateInternalState = false;
      }
      m_IsInUse = in->isInUse;
    }
  }
  return sizeof(InParameter);
}

SplitterDestinationDataVer2::SplitterDestinationDataVer2(int id)
  : ISplitterDestinationData(id), m_BiquadFilterState(nullptr), reserved{},
    m_BiquadFilter{}, m_IsBiquadFilterEnabledPrev{},
    m_IsBiquadFilterStateResetRequired(false), reserved2{} {
}

bool SplitterDestinationDataVer2::IsBiquadFilterEnabled() {
  return m_BiquadFilter[0].enable || m_BiquadFilter[1].enable;
}

const void* SplitterDestinationDataVer2::GetBiquadFilterParameter() const {
  return m_BiquadFilter;
}

void SplitterDestinationDataVer2::ClearBiquadFilterState() {
  memset(m_BiquadFilterState, 0, 128);
}

void* SplitterDestinationDataVer2::GetBiquadFilterStatePrev() {
  return m_BiquadFilterState + 128;
}

bool SplitterDestinationDataVer2::IsBiquadFilterStateResetRequired() const {
  return m_IsBiquadFilterStateResetRequired;
}

void SplitterDestinationDataVer2::ClearBiquadFilterStateResetRequired() {
  m_IsBiquadFilterStateResetRequired = false;
}

bool SplitterDestinationDataVer2::IsBiquadFilterEnabledPrev(int index) const {
  return m_IsBiquadFilterEnabledPrev[index];
}

SplitterInfo::SplitterInfo(int id)
  : m_Id(id), m_SampleRate(0), m_DestinationCount(0),
    m_HasNewConnection(false), reserved{}, m_Data(nullptr), reserved2{} {
}

size_t SplitterInfo::Update(const renderer::ipc::Splitter::UpdateData<0>* in) {
  if (in->id != m_Id) {
    return 0;
  }
  m_SampleRate = in->sampleRate;
  m_HasNewConnection = true;
  return sizeof(*in) + in->destinationCount * sizeof(int);
}

ISplitterDestinationData* SplitterInfo::GetData(int index) const {
  ISplitterDestinationData* data = m_Data;
  for (int i = 0; i < index && data != nullptr; i++) {
    data = data->GetNext();
  }
  return data;
}

int SplitterInfo::GetDestinationCount() const {
  return m_DestinationCount;
}

bool SplitterInfo::HasNewConnection() const {
  return m_HasNewConnection;
}

void SplitterInfo::ClearNewConnectionFlag() {
  m_HasNewConnection = false;
}

void SplitterInfo::UpdateInternalState() {
  for (ISplitterDestinationData* data = m_Data; data != nullptr;
    data = data->GetNext()) {
    data->UpdateInternalState();
  }
}

ISplitterDestinationData* SplitterContext::GetDestinationData(int splitterId,
  int index) const {
  return GetInfo(splitterId)->GetData(index);
}

SplitterInfo* SplitterContext::GetInfo(int index) const {
  return &m_Infos[index];
}

int SplitterContext::GetDataCount() const {
  return m_DataCount;
}

int SplitterContext::GetInfoCount() const {
  return static_cast<int>(m_InfoCount);
}

ISplitterDestinationData* SplitterContext::GetData(int index) const {
  if (m_IsBiquadFilterParameterSupported) {
    return &static_cast<SplitterDestinationDataVer2*>(m_Data)[index];
  }
  return &static_cast<SplitterDestinationDataVer1*>(m_Data)[index];
}

void SplitterContext::Reset() {
  m_Infos = nullptr;
  m_InfoCount = 0;
  m_Data = nullptr;
  m_DataCount = 0;
}

bool SplitterContext::UsingSplitter() const {
  return m_InfoCount != 0 && m_Data != nullptr && m_DataCount > 0;
}

void SplitterContext::ClearAllNewConnectionFlag() {
  for (size_t i = 0; i < m_InfoCount; i++) {
    m_Infos[i].ClearNewConnectionFlag();
  }
}

int SplitterContext::GetDestCountPerInfoForCompat() const {
  if (m_InfoCount == 0) {
    return 0;
  }
  return m_DataCount / static_cast<int>(m_InfoCount);
}

size_t SplitterContext::CalcWorkBufferSize(const BehaviorInfo& behavior,
  const audio::detail::AudioRendererParameterInternal& parameter) {
  if (!behavior.IsSplitterSupported()) {
    return 0;
  }
  size_t dataSize = behavior.IsBiquadFilterParameterForSplitterEnabled()
    ? sizeof(SplitterDestinationDataVer2)
    : sizeof(SplitterDestinationDataVer1);
  size_t size = parameter.splitterCount * sizeof(SplitterInfo) +
    parameter.splitterSendChannelCount * dataSize;
  if (!behavior.IsSplitterBugFixed()) {
    size += (parameter.splitterSendChannelCount * sizeof(int) + 15) &
      ~size_t{15};
  }
  return size;
}

size_t SplitterContext::CalcWorkBufferSizeForCompat(
  const BehaviorInfo& behavior,
  const audio::detail::AudioRendererParameterInternal& parameter) {
  // Compatible layouts without float biquad parameters only keep 8 bytes.
  constexpr size_t CompatDataSize = 8;
  if (!behavior.IsSplitterSupported()) {
    return 0;
  }
  size_t size = parameter.splitterCount * sizeof(SplitterInfo);
  if (behavior.IsBiquadFilterParameterForSplitterEnabled()) {
    size_t dataSize = behavior.IsBiquadFilterParameterFloatSupported()
      ? sizeof(SplitterDestinationDataVer2) : CompatDataSize;
    size += (parameter.splitterSendChannelCount * dataSize + 15) &
      ~size_t{15};
  }
  else {
    size += parameter.splitterSendChannelCount *
      sizeof(SplitterDestinationDataVer1);
  }
  if (!behavior.IsSplitterBugFixed()) {
    size += (parameter.splitterSendChannelCount * sizeof(int) + 15) &
      ~size_t{15};
  }
  return size;
}

}
