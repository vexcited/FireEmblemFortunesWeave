#include <string.h>

#include <algorithm>
#include <new>

#include "nn/audio/common/revision.hpp"
#include "nn/audio/server/splitter_context.hpp"

namespace nn::audio::common {

uint32_t GetSplitterInfoMagic();

}

namespace nn::audio::server {
namespace {

struct DestinationHeader {
  uint32_t magic;
  int id;
};

template<class Parameter>
void CopyBiquadFilter(TBiquadFilterParameter<float>& out,
  const Parameter& in);

template<>
void CopyBiquadFilter(TBiquadFilterParameter<float>& out,
  const renderer::ipc::SplitterDestination::BiquadFilterParameter& in) {
  out.enable = in.enable;
  for (int i = 0; i < 3; i++) {
    out.numerator[i] = in.numerator[i];
  }
  for (int i = 0; i < 2; i++) {
    out.denominator[i] = in.denominator[i];
  }
}

// Fixed point coefficients are Q14.
template<>
void CopyBiquadFilter(TBiquadFilterParameter<float>& out,
  const renderer::ipc::SplitterDestinationFixedBiquadFilterParameter& in) {
  out.enable = in.enable;
  for (int i = 0; i < 3; i++) {
    out.numerator[i] = static_cast<float>(in.numerator[i]) / 16384.0f;
  }
  for (int i = 0; i < 2; i++) {
    out.denominator[i] = static_cast<float>(in.denominator[i]) / 16384.0f;
  }
}

}

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

template<class Parameter>
size_t SplitterDestinationDataVer2::UpdateImpl(const Parameter* in,
  bool isPrevVolumeResetSupported) {
  if (in == nullptr || in->magic != common::GetSplitterSendDataMagic() ||
    in->id != m_Id) {
    return sizeof(Parameter);
  }

  if (m_MixId != in->destinationId) {
    m_MixId = in->destinationId;
    m_IsBiquadFilterStateResetRequired = true;
  }
  if (m_MixId == -1) {
    m_MixId = UnusedMixId;
  }
  for (int i = 0; i < MixVolumeCountMax; i++) {
    m_MixVolume[i] = in->mixVolume[i];
  }
  for (int i = 0; i < BiquadFilterCount; i++) {
    CopyBiquadFilter(m_BiquadFilter[i], in->biquadFilter[i]);
  }

  const bool isResetRequired = isPrevVolumeResetSupported
    ? in->isPrevVolumeResetRequired
    : !m_IsInUse && in->isInUse == true;
  if (isResetRequired) {
    ResetMixVolumePrev();
    m_NeedToUpdateInternalState = false;
    m_IsBiquadFilterStateResetRequired = true;
    SplitterDestinationDataVer2::ClearBiquadFilterState();
  }
  m_IsInUse = in->isInUse;
  return sizeof(Parameter);
}

size_t SplitterDestinationDataVer2::Update(const void* data,
  bool isPrevVolumeResetSupported, bool isBiquadFilterParameterFloat) {
  if (isBiquadFilterParameterFloat) {
    return UpdateImpl(
      static_cast<const renderer::ipc::SplitterDestination::UpdateData<2>*>(
        data), isPrevVolumeResetSupported);
  }
  return UpdateImpl(
    static_cast<const renderer::ipc::SplitterDestination::UpdateData<1>*>(
      data), isPrevVolumeResetSupported);
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

bool SplitterContext::Initialize(const BehaviorInfo& behavior,
  const audio::detail::AudioRendererParameterInternal& parameter,
  void* buffer, size_t size, SplitterDestinationState* states) {
  m_DataCount = 0;
  m_InfoCount = 0;
  m_Data = nullptr;
  m_Infos = nullptr;
  common::WorkBufferAllocator allocator(buffer, size);

  if (!behavior.IsSplitterSupported() || parameter.splitterCount <= 0 ||
    parameter.splitterSendChannelCount <= 0) {
    return true;
  }

  m_IsSplitterBugFixed = behavior.IsSplitterBugFixed();
  m_IsBiquadFilterParameterSupported =
    behavior.IsBiquadFilterParameterForSplitterEnabled();
  m_IsPrevVolumeResetSupported =
    behavior.IsSplitterPrevVolumeResetSupported();
  m_IsBiquadFilterParameterFloatSupported =
    behavior.IsBiquadFilterParameterFloatSupported();
  if (states == nullptr && m_IsBiquadFilterParameterSupported) {
    return false;
  }

  const int infoCount = parameter.splitterCount;
  SplitterInfo* infos = static_cast<SplitterInfo*>(
    allocator.Allocate(infoCount * sizeof(SplitterInfo), 16));
  for (int i = 0; i < infoCount; i++) {
    new (&infos[i]) SplitterInfo(i);
  }
  if (infos == nullptr) {
    return false;
  }

  const int dataCount = parameter.splitterSendChannelCount;
  void* data;
  if (m_IsBiquadFilterParameterSupported == true) {
    SplitterDestinationDataVer2* entries =
      static_cast<SplitterDestinationDataVer2*>(allocator.Allocate(
        dataCount * sizeof(SplitterDestinationDataVer2), 16));
    for (int i = 0; i < dataCount; i++) {
      new (&entries[i]) SplitterDestinationDataVer2(i);
    }
    data = entries;
  }
  else {
    SplitterDestinationDataVer1* entries =
      static_cast<SplitterDestinationDataVer1*>(allocator.Allocate(
        dataCount * sizeof(SplitterDestinationDataVer1), 16));
    for (int i = 0; i < dataCount; i++) {
      new (&entries[i]) SplitterDestinationDataVer1(i);
    }
    data = entries;
  }
  if (data == nullptr) {
    return false;
  }

  if (m_IsBiquadFilterParameterSupported == true) {
    SplitterDestinationDataVer2* entries =
      static_cast<SplitterDestinationDataVer2*>(data);
    for (int i = 0; i < parameter.splitterSendChannelCount; i++) {
      entries[i].m_BiquadFilterState = states[i].data;
    }
  }
  for (int i = 0; i < infoCount; i++) {
    infos[i].m_DestinationCount = 0;
    infos[i].m_Data = nullptr;
    infos[i].m_HasNewConnection = true;
  }

  m_Infos = infos;
  m_InfoCount = infoCount;
  m_Data = data;
  m_DataCount = dataCount;
  return true;
}

bool SplitterContext::Update(uintptr_t input, size_t& consumedSize) {
  if (m_DataCount <= 0 || static_cast<int>(m_InfoCount) <= 0) {
    consumedSize = 0;
    return true;
  }

  ClearAllNewConnectionFlag();
  nn::util::ConstBytePtr ptr(reinterpret_cast<const void*>(input));
  const auto* header =
    reinterpret_cast<const renderer::ipc::SplitterInParameterHeader*>(input);
  size_t offset = UpdateInfo(ptr, sizeof(*header), header->infoCount);
  offset = UpdateData(ptr, offset, header->dataCount);
  consumedSize = (offset + 15) & ~size_t{15};
  return true;
}

size_t SplitterContext::UpdateInfo(nn::util::ConstBytePtr& input,
  size_t offset, int count) {
  for (int i = 0; i < count; i++) {
    const auto* in =
      static_cast<const renderer::ipc::Splitter::UpdateData<0>*>(
        input.Get(offset));
    if (in->magic != common::GetSplitterInfoMagic()) {
      continue;
    }
    if (in->id < 0 || in->id >= static_cast<int>(m_InfoCount)) {
      continue;
    }
    SplitterInfo& info = m_Infos[in->id];
    RecomposeDestination(info, in);
    offset += info.Update(in);
  }
  return offset;
}

size_t SplitterContext::UpdateData(nn::util::ConstBytePtr& input,
  size_t offset, int count) {
  for (int i = 0; i < count; i++) {
    const void* in = input.Get(offset);
    const int id = static_cast<const DestinationHeader*>(in)->id;
    if (0 <= id && id < m_DataCount) {
      offset += GetData(id)->Update(in, m_IsPrevVolumeResetSupported,
        m_IsBiquadFilterParameterFloatSupported);
    }
  }
  return offset;
}

void SplitterContext::UpdateInternalState() {
  for (size_t i = 0; i < m_InfoCount; i++) {
    m_Infos[i].UpdateInternalState();
  }
}

void SplitterContext::RecomposeDestination(SplitterInfo& info,
  const renderer::ipc::Splitter::UpdateData<0>* in) {
  ISplitterDestinationData* data = info.m_Data;
  while (data != nullptr) {
    ISplitterDestinationData* next = data->m_Next;
    data->m_Next = nullptr;
    data = next;
  }
  info.m_Data = nullptr;

  int destinationCount = in->destinationCount;
  if (!m_IsSplitterBugFixed) {
    destinationCount = std::min(destinationCount,
      GetDestCountPerInfoForCompat());
  }
  if (destinationCount <= 0) {
    return;
  }

  ISplitterDestinationData* head = GetData(in->destinationIds[0]);
  ISplitterDestinationData* last = head;
  for (int i = 1; i < destinationCount; i++) {
    ISplitterDestinationData* next = GetData(in->destinationIds[i]);
    last->m_Next = next;
    last = next;
  }
  info.m_Data = head;
  info.m_DestinationCount = destinationCount;
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
