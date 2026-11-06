#pragma once

#include <stddef.h>
#include <stdint.h>

#include "nn/audio/server/memory_pool_info.hpp"
#include "nn/span.hpp"

namespace nn::audio {

struct VoiceState {
  uint8_t state[256];
};

namespace server {

struct VoiceChannelResource {
  static constexpr int MixVolumeCountMax = 24;

  struct InParameter {
    uint32_t id;
    float mixVolume[MixVolumeCountMax];
    bool isUsed;
    uint8_t reserved[11];
  };

  float mixVolume[MixVolumeCountMax];
  float mixVolumePrev[MixVolumeCountMax];
  uint32_t id;
  bool isUsed;
  uint8_t reserved[11];
};

static_assert(sizeof(VoiceChannelResource) == 208);
static_assert(sizeof(VoiceChannelResource::InParameter) == 112);

class WaveBuffer {
public:
  WaveBuffer();

  void Initialize();

private:
  AddressInfo m_Buffer;
  uint8_t reserved0[8];
  AddressInfo m_Context;
  uint8_t reserved1[8];
  int m_StartSampleOffset;
  int m_EndSampleOffset;
  bool m_IsLoop;
  bool m_IsEndOfStream;
  bool m_IsSentToServer;
  uint8_t reserved2;
  int m_LoopStartSampleOffset;
  int m_LoopEndSampleOffset;
  int m_LoopCount;
};

static_assert(sizeof(WaveBuffer) == 88);

class VoiceContext;

class VoiceInfo {
public:
  static constexpr int WaveBufferCountMax = 4;
  static constexpr int UnusedMixId = 0x7fffffff;
  static constexpr int UnusedSplitterId = -1;
  static constexpr int LowestPriority = 0xff;

  enum ServerPlayState {
    ServerPlayState_Started,
    ServerPlayState_Stopped,
    ServerPlayState_RequestStop,
    ServerPlayState_Paused,
  };

  enum PlayState : uint8_t {
    PlayState_Start,
    PlayState_Stop,
    PlayState_Pause,
  };

  enum Flag : uint16_t {
    Flag_IsInUse = 1 << 0,
    Flag_IsPitchAndSrcSkipped = 1 << 1,
    Flag_IsBiquadFilterEnabled = 1 << 2,
    Flag_IsVoiceDropped = 1 << 3,
    Flag_IsDataUnmapped = 1 << 4,
    Flag_IsBufferUnmapped = 1 << 5,
  };

  VoiceInfo();

  void Initialize();
  bool ShouldUpdateWaveBuffer(
    const renderer::ipc::Voice::WaveBuffer* waveBuffer) const;
  bool ShouldSkip() const;
  bool UpdateForCommandGeneration(VoiceContext* context);
  void UpdatePlayState(uint8_t state);

  uint32_t GetNodeId() const {
    return m_NodeId;
  }

private:
  bool IsFlagSet(Flag flag) const {
    return (m_Flags & flag) != 0;
  }

  int m_Id;
  bool m_IsNew;
  bool m_WasPlaying;
  uint8_t m_SampleFormat;
  uint8_t reserved0;
  uint32_t m_NodeId;
  uint32_t m_SampleRate;
  int m_DestinationMixId;
  int m_PlayState;
  int m_PrevPlayState;
  int m_Priority;
  int m_SortingOrder;
  uint16_t m_Flags;
  uint8_t m_SrcQuality;
  uint8_t m_FlushWaveBufferCount;
  int m_WaveBufferCount;
  float m_Pitch;
  float m_Volume;
  float m_PrevVolume;
  int m_WaveBufferIndex;
  int m_WaveBufferConsumed;
  int m_DestinationSplitterId;
  uint16_t m_BehaviorFlags;
  uint8_t m_BiquadFilterCrossFadeCurveType;
  uint8_t reserved1;
  uint8_t m_Parameter[88];
  AddressInfo m_DataAddress;
  uint8_t reserved2[8];
  WaveBuffer m_WaveBuffers[WaveBufferCountMax];
  uint8_t reserved3[24];
};

static_assert(sizeof(VoiceInfo) == 568);

class VoiceContext {
public:
  VoiceContext();

  void Initialize(VoiceInfo** sortedInfos, VoiceInfo* infos,
    VoiceChannelResource* channelResources, VoiceState* states,
    VoiceState* dspSharedStates, int count);
  VoiceState* GetDspSharedState(int index) const;
  VoiceChannelResource* GetChannelResource(int index) const;
  VoiceInfo* GetSortedInfo(int index) const;
  VoiceInfo* GetInfo(int index) const;
  VoiceState* GetState(int index) const;
  int GetCount() const;
  void UpdateStateByDspShared();

private:
  Span<VoiceInfo> m_Infos;
  Span<VoiceInfo*> m_SortedInfos;
  Span<VoiceChannelResource> m_ChannelResources;
  Span<VoiceState> m_States;
  Span<VoiceState> m_DspSharedStates;
  int m_ActiveCount;
};

}
}
