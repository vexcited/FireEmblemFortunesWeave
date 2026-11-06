#include "snd/fnd/fast_alloc.hpp"

#include "snd/data.hpp"
#include "snd/manager.hpp"
#include "snd/seq_voice.hpp"
#include "snd/slot.hpp"
#include "snd/target/sound.hpp"
#include "snd/vib_voice.hpp"
#include "snd/voice.hpp"
#include "snd/wave_multi_voice.hpp"
#include "snd/wave_voice.hpp"

namespace snd {

class TargetFile;
class TargetVibration;

namespace data {

struct SeqVoiceBuffer;
struct VibrationBuffer;

}

}

namespace snd::fnd {

namespace {

[[gnu::used]] FastAlloc<Slot, 0> s_slots;
[[gnu::used]] FastAlloc<Listener, 0> s_listeners;
[[gnu::used]] FastAlloc<Actor, 0> s_actors;
[[gnu::used]] FastAlloc<Voice, 0> s_voices;
[[gnu::used]] FastAlloc<SeqVoice, 0> s_seqVoices;
[[gnu::used]] FastAlloc<WaveVoice, 0> s_waveVoices;
[[gnu::used]] FastAlloc<WaveMultiVoice, 0> s_waveMultiVoices;
[[gnu::used]] FastAlloc<VibVoice, 0> s_vibVoices;
[[gnu::used]] FastAlloc<data::VoiceBuffer, 0> s_voiceBuffers;
[[gnu::used]] FastAlloc<data::SeqVoiceBuffer, 0> s_seqVoiceBuffers;
[[gnu::used]] FastAlloc<data::VibrationBuffer, 0> s_vibrationBuffers;
[[gnu::used]] FastAlloc<Manager::PlayList, 0> s_playLists;
[[gnu::used]] FastAlloc<TargetFile, 0> s_targetFiles;
[[gnu::used]] FastAlloc<TargetElfFile, 0> s_targetElfFiles;
[[gnu::used]] FastAlloc<TargetVibration, 0> s_targetVibrations;
[[gnu::used]] FastAlloc<target::StartInfoNX, 0> s_startInfos;
[[gnu::used]] FastAlloc<target::SoundHandleNX, 0> s_soundHandles;
[[gnu::used]] FastAlloc<target::Sound3DListenerNX, 0> s_sound3DListeners;
[[gnu::used]] FastAlloc<target::SoundActorNX, 0> s_soundActors;
[[gnu::used]] FastAlloc<target::Sound3DActorNX, 0> s_sound3DActors;
[[gnu::used]] FastAlloc<target::SoundVoiceNX, 0> s_soundVoices;

}

}
