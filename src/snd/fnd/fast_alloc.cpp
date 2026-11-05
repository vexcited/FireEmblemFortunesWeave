#include "snd/fnd/fast_alloc.hpp"

#include "snd/target/sound.hpp"

namespace snd::fnd {

namespace {

[[gnu::used]] FastAlloc<target::StartInfoNX, 0> s_startInfos;
[[gnu::used]] FastAlloc<target::SoundHandleNX, 0> s_soundHandles;
[[gnu::used]] FastAlloc<target::Sound3DListenerNX, 0> s_sound3DListeners;
[[gnu::used]] FastAlloc<target::SoundActorNX, 0> s_soundActors;
[[gnu::used]] FastAlloc<target::Sound3DActorNX, 0> s_sound3DActors;
[[gnu::used]] FastAlloc<target::SoundVoiceNX, 0> s_soundVoices;

}

}
