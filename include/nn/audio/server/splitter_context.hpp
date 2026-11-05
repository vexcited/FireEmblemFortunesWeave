#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/audio/effect_api.hpp"
#include "nn/audio/renderer_ipc.hpp"
#include "nn/audio/server/behavior_info.hpp"

namespace nn::audio {

namespace detail {

struct AudioRendererParameterInternal {
  int sampleRate;
  int sampleCount;
  int mixBufferCount;
  int subMixCount;
  int voiceCount;
  int sinkCount;
  int effectCount;
  int performanceFrameCount;
  bool isVoiceDropEnabled;
  int splitterCount;
  int splitterSendChannelCount;
  uint8_t executionMode;
  uint8_t renderingDevice;
  uint8_t reserved0[2];
  uint32_t revision;
  uint8_t reserved1[4];
};

static_assert(sizeof(AudioRendererParameterInternal) == 56);

}

namespace common {

uint32_t GetSplitterSendDataMagic();

}

namespace server {

class ISplitterDestinationData {
public:
  static constexpr int MixVolumeCountMax = 24;
  static constexpr int UnusedMixId = 0x7fffffff;

  explicit ISplitterDestinationData(int id);

  virtual size_t Update(const void* data, bool isPrevVolumeResetSupported,
    bool isBiquadFilterParameterFloat) = 0;
  virtual bool IsBiquadFilterEnabled();
  virtual const void* GetBiquadFilterParameter() const;
  virtual void ClearBiquadFilterState();
  virtual void* GetBiquadFilterStatePrev();
  virtual bool IsBiquadFilterStateResetRequired() const;
  virtual void ClearBiquadFilterStateResetRequired();

  int GetId() const;
  bool IsConfigured() const;
  int GetMixId() const;
  void MarkAsNeedToUpdateInternalState();
  float GetMixVolume(int index) const;
  const float* GetMixVolume() const;
  float GetMixVolumePrev(int index) const;
  const float* GetMixVolumePrev() const;
  void ResetMixVolumePrev();
  void UpdateInternalState();

  ISplitterDestinationData* GetNext() const {
    return m_Next;
  }

protected:
  int m_Id;
  int m_MixId;
  ISplitterDestinationData* m_Next;
  bool m_IsInUse;
  bool m_NeedToUpdateInternalState;
  float m_MixVolume[MixVolumeCountMax];
  float m_MixVolumePrev[MixVolumeCountMax];
};

static_assert(sizeof(ISplitterDestinationData) == 224);

class SplitterDestinationDataVer1 : public ISplitterDestinationData {
public:
  struct InParameter {
    uint32_t magic;
    int id;
    float mixVolume[MixVolumeCountMax];
    int mixId;
    bool isInUse;
    uint8_t reserved[3];
  };

  explicit SplitterDestinationDataVer1(int id);

  size_t Update(const void* data, bool isPrevVolumeResetSupported,
    bool isBiquadFilterParameterFloat) override;
};

class SplitterDestinationDataVer2 : public ISplitterDestinationData {
public:
  static constexpr int BiquadFilterCount = 2;

  explicit SplitterDestinationDataVer2(int id);

  size_t Update(const void* data, bool isPrevVolumeResetSupported,
    bool isBiquadFilterParameterFloat) override;
  bool IsBiquadFilterEnabled() override;
  const void* GetBiquadFilterParameter() const override;
  void ClearBiquadFilterState() override;
  void* GetBiquadFilterStatePrev() override;
  bool IsBiquadFilterStateResetRequired() const override;
  void ClearBiquadFilterStateResetRequired() override;

  bool IsBiquadFilterEnabledPrev(int index) const;

private:
  uint8_t* m_BiquadFilterState;
  uint8_t reserved[8];
  TBiquadFilterParameter<float> m_BiquadFilter[BiquadFilterCount];
  bool m_IsBiquadFilterEnabledPrev[BiquadFilterCount];
  bool m_IsBiquadFilterStateResetRequired;
  uint8_t reserved2[5];
  uint8_t reserved3[8];
};

static_assert(sizeof(SplitterDestinationDataVer2) == 304);

class SplitterInfo {
public:
  explicit SplitterInfo(int id);

  size_t Update(const renderer::ipc::Splitter::UpdateData<0>* in);
  ISplitterDestinationData* GetData(int index) const;
  int GetDestinationCount() const;
  bool HasNewConnection() const;
  void ClearNewConnectionFlag();
  void UpdateInternalState();

private:
  int m_Id;
  int m_SampleRate;
  int m_DestinationCount;
  bool m_HasNewConnection;
  uint8_t reserved[3];
  ISplitterDestinationData* m_Data;
  uint8_t reserved2[8];
};

static_assert(sizeof(SplitterInfo) == 32);

class SplitterContext {
public:
  ISplitterDestinationData* GetDestinationData(int splitterId,
    int index) const;
  SplitterInfo* GetInfo(int index) const;
  int GetDataCount() const;
  int GetInfoCount() const;
  ISplitterDestinationData* GetData(int index) const;
  void Reset();
  bool UsingSplitter() const;
  void ClearAllNewConnectionFlag();
  bool Update(uintptr_t input, size_t& consumedSize);
  int GetDestCountPerInfoForCompat() const;
  static size_t CalcWorkBufferSize(const BehaviorInfo& behavior,
    const audio::detail::AudioRendererParameterInternal& parameter);
  static size_t CalcWorkBufferSizeForCompat(const BehaviorInfo& behavior,
    const audio::detail::AudioRendererParameterInternal& parameter);

private:
  SplitterInfo* m_Infos;
  size_t m_InfoCount;
  void* m_Data;
  int m_DataCount;
  bool m_IsSplitterBugFixed;
  bool m_IsBiquadFilterParameterSupported;
  uint8_t reserved[2];
};

}
}
