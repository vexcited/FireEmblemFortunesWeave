#pragma once

#include <cstdint>

#include "nn/audio/renderer_api.hpp"

namespace nn::audio {

struct AudioRendererConfig;

void ReleaseVoiceSlot(AudioRendererConfig* config, VoiceType* voice);
bool IsVoiceValid(const VoiceType* voice);
const WaveBuffer* GetReleasedWaveBuffer(VoiceType* voice);
int GetWaveBufferCount(const VoiceType* voice);
int64_t GetVoicePlayedSampleCount(const VoiceType* voice);
void SetVoiceVolume(VoiceType* voice, float volume);
void SetVoicePlayState(VoiceType* voice, VoiceType::PlayState state);
VoiceType::PlayState GetVoicePlayState(const VoiceType* voice);

}
