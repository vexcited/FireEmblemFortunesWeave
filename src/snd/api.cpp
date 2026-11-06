#include "snd/api.hpp"

#include "snd/data.hpp"
#include "snd/fnd/math.hpp"
#include "snd/game.hpp"
#include "snd/manager.hpp"
#include "snd/slot.hpp"
#include "snd/target/base.hpp"
#include "snd/voice.hpp"

namespace snd {

namespace {

Voice* getVoice(const fnd::WeakHandle& handle) {
  return handle.get<Voice>();
}

Param* getVoiceParam(const fnd::WeakHandle& handle) {
  return handle.get<Voice>();
}

uint32_t hashName(const char* name) {
  return fnd::calcCrc32(name, 0);
}

Listener& getMainListener() {
  return static_cast<Listener&>(*g_manager->getListener(-1).get());
}

}

fnd::WeakHandle play(const char* name, const char* label, const Fade& fade,
  int kind, int priority, int group, float delay, float volume) {
  VoiceParam param;
  param.fade = fade;
  param.delay = delay;
  param.volume = volume;
  param.isFront = false;
  param.kind = kind;
  param.priority = priority;
  param.group = group;
  return g_manager->play(fnd::WeakHandle(), name, label, fnd::WeakHandle(),
    param, fnd::WeakHandle());
}

fnd::WeakHandle play(const char* name, const char* label,
  const fnd::WeakHandle& actor, const Fade& fade, int kind, int priority,
  int group, float delay, float volume) {
  VoiceParam param;
  param.fade = fade;
  param.delay = delay;
  param.volume = volume;
  param.isFront = false;
  param.kind = kind;
  param.priority = priority;
  param.group = group;
  return g_manager->play(fnd::WeakHandle(), name, label, actor, param,
    fnd::WeakHandle());
}

fnd::WeakHandle playAt(const char* name, const char* label, const Fade& fade,
  int kind, int priority, int group, float x, float y, float z, float delay,
  float volume) {
  VoiceParam param;
  param.fade = fade;
  param.delay = delay;
  param.volume = volume;
  param.isFront = false;
  param.kind = kind;
  param.priority = priority;
  param.group = group;
  return g_manager->playAt(fnd::WeakHandle(), name, label, param, x, y, z);
}

fnd::WeakHandle playAt(const char* name, const char* label,
  const fnd::Vec3& position, const Fade& fade, int kind, int priority,
  int group, float delay, float volume) {
  VoiceParam param;
  param.fade = fade;
  param.delay = delay;
  param.volume = volume;
  param.isFront = false;
  param.kind = kind;
  param.priority = priority;
  param.group = group;
  return g_manager->playAt(fnd::WeakHandle(), name, label, position, param);
}

fnd::WeakHandle playDirect(const char* name, const char* label,
  const Fade& fade, int kind, int priority, int group, float delay,
  float volume) {
  VoiceParam param;
  param.fade = fade;
  param.delay = delay;
  param.volume = volume;
  param.isFront = false;
  param.kind = kind;
  param.priority = priority;
  param.group = group;
  param.direct = true;
  return s_manager->play(fnd::WeakHandle(), name, label, fnd::WeakHandle(),
    param, fnd::WeakHandle());
}

fnd::WeakHandle playDirect(const char* name, const uint32_t* key,
  const Fade& fade, int kind, int priority, int group, float delay,
  float volume) {
  VoiceParam param;
  param.fade = fade;
  param.delay = delay;
  param.volume = volume;
  param.isFront = false;
  param.kind = kind;
  param.priority = priority;
  param.group = group;
  param.direct = true;
  return s_manager->play(fnd::WeakHandle(), name, key, fnd::WeakHandle(),
    param, fnd::WeakHandle());
}

fnd::WeakHandle playDirectAt(const char* name, const char* label,
  const Fade& fade, int kind, int priority, int group, float x, float y,
  float z, float delay, float volume) {
  VoiceParam param;
  param.fade = fade;
  param.delay = delay;
  param.volume = volume;
  param.isFront = false;
  param.kind = kind;
  param.priority = priority;
  param.group = group;
  param.direct = true;
  return s_manager->playAt(fnd::WeakHandle(), name, label, param, x, y, z);
}

fnd::WeakHandle playDirectAt(const char* name, const char* label,
  const fnd::Vec3& position, const Fade& fade, int kind, int priority,
  int group, float delay, float volume) {
  VoiceParam param;
  param.fade = fade;
  param.delay = delay;
  param.volume = volume;
  param.isFront = false;
  param.kind = kind;
  param.priority = priority;
  param.group = group;
  param.direct = true;
  return s_manager->playAt(fnd::WeakHandle(), name, label, position, param);
}

void release(const char* label) {
  fnd::WeakHandle voice = g_manager->findVoice(label);
  if (voice.isValid()) {
    getVoice(voice)->release();
  }
}

void release(const fnd::WeakHandle& voice) {
  if (voice.isValid()) {
    getVoice(voice)->release();
  }
}

void stop(const char* label, const Fade& fade) {
  fnd::WeakHandle voice = g_manager->findVoice(label);
  if (voice.isValid()) {
    g_manager->stop(voice, fade, false);
  }
}

void stop(const fnd::WeakHandle& voice, const Fade& fade) {
  if (voice.isValid()) {
    g_manager->stop(voice, fade, false);
  }
}

void forceStop(const fnd::WeakHandle& voice, const Fade& fade) {
  if (voice.isValid()) {
    g_manager->stop(voice, fade, true);
  }
}

void kill(const fnd::WeakHandle& voice) {
  if (voice.isValid()) {
    g_manager->kill(voice, fnd::WeakHandle());
  }
}

void stopAll(const Fade& fade) {
  g_manager->stopAll(fade);
}

void unlockSlots() {
  s_manager->unlockSlots();
}

void stopKind(int kind, const Fade& fade) {
  g_manager->stopKind(kind, fade);
}

void startDistanceVolume(const fnd::WeakHandle& voice, const Fade& fade,
  float target) {
  if (voice.isValid()) {
    getVoiceParam(voice)->startDistanceVolume(fade, target);
  }
}

void startVolume(const fnd::WeakHandle& voice, const Fade& fade,
  float target) {
  if (voice.isValid()) {
    getVoiceParam(voice)->startVolume(fade, target);
  }
}

float getVolume(const fnd::WeakHandle& voice) {
  if (!voice.isValid()) {
    return 0.0f;
  }
  return getVoiceParam(voice)->getVolume();
}

void startSurroundPan(const fnd::WeakHandle& voice, const Fade& fade,
  float target) {
  if (voice.isValid()) {
    getVoiceParam(voice)->startSurroundPan(fade, target);
  }
}

void startPitch(const fnd::WeakHandle& voice, const Fade& fade,
  float target) {
  if (voice.isValid()) {
    getVoiceParam(voice)->startPitch(fade, target);
  }
}

void startPan(const fnd::WeakHandle& voice, const Fade& fade, float target) {
  if (voice.isValid()) {
    getVoiceParam(voice)->startPan(fade, target);
  }
}

bool isActive(const char* label) {
  fnd::WeakHandle voice = g_manager->findVoice(label);
  if (voice.isValid()) {
    return g_manager->isActive(voice);
  }
  return false;
}

bool isActive(const fnd::WeakHandle& voice) {
  if (voice.isValid()) {
    return g_manager->isActive(voice);
  }
  return false;
}

void pause(const fnd::WeakHandle& voice, const Fade& fade) {
  if (voice.isValid()) {
    getVoice(voice)->pause(fade, false);
  }
}

void resumePause(const fnd::WeakHandle& voice, const Fade& fade) {
  if (voice.isValid()) {
    getVoice(voice)->resumePause(fade);
  }
}

void mute(const fnd::WeakHandle& voice, const Fade& fade) {
  if (voice.isValid()) {
    getVoice(voice)->mute(fade, false);
  }
}

bool isMuted(const fnd::WeakHandle& voice) {
  if (!voice.isValid()) {
    return false;
  }
  return getVoice(voice)->isMuted();
}

void resumeMute(const fnd::WeakHandle& voice, const Fade& fade) {
  if (voice.isValid()) {
    getVoice(voice)->resumeMute(fade);
  }
}

void startMainSend(const fnd::WeakHandle& voice, const Fade& fade,
  float target) {
  if (voice.isValid()) {
    getVoiceParam(voice)->startMainSend(fade, target);
  }
}

void startLpfFrequency(const fnd::WeakHandle& voice, const Fade& fade,
  float target) {
  if (voice.isValid()) {
    getVoiceParam(voice)->startLpfFrequency(fade, target);
  }
}

// A voice that is gone counts as playing.
bool isPlaying(const char* label) {
  fnd::WeakHandle voice = g_manager->findVoice(label);
  if (!voice.isValid()) {
    return true;
  }
  return getVoice(voice)->isPlaying();
}

bool isPlaying(const fnd::WeakHandle& voice) {
  if (!voice.isValid()) {
    return true;
  }
  return getVoice(voice)->isPlaying();
}

void setPosition(const fnd::WeakHandle& voice, const fnd::Vec3& position) {
  if (voice.isValid()) {
    getVoiceParam(voice)->setPosition(position);
  }
}

void setPosition(const fnd::WeakHandle& voice, float x, float y, float z) {
  if (voice.isValid()) {
    getVoiceParam(voice)->setPosition(x, y, z);
  }
}

void getPosition(const fnd::WeakHandle& voice, fnd::Vec3* position) {
  if (voice.isValid()) {
    *position = getVoiceParam(voice)->getPosition();
  }
}

float getPlayPosition(const fnd::WeakHandle& voice) {
  if (!voice.isValid()) {
    return 0.0f;
  }
  return getVoice(voice)->getPlayPosition(0);
}

void startVolume(const fnd::WeakHandle& voice, int kind, const Fade& fade,
  float target) {
  if (voice.isValid()) {
    getVoice(voice)->startVolume(kind, fade, target);
  }
}

fnd::WeakHandle findVoice(const char* label) {
  return g_manager->findVoice(label);
}

void setListenerPosition(float x, float y, float z) {
  g_manager->setListenerPosition(-1, x, y, z);
}

void setListenerAngle(float angle) {
  float x = 0.0f;
  float z = 0.0f;
  fnd::moveByAngle(&x, &z, 1.0f, angle);
  g_manager->setListenerDirection(-1, x, 0.0f, z);
}

void getListenerPosition(float* x, float* y, float* z) {
  Param* listener = g_manager->getListener(-1).get<Listener>();
  listener->getPosition(x, y, z);
}

fnd::Vec3 getListenerPosition() {
  Param* listener = g_manager->getListener(-1).get<Listener>();
  return listener->getPosition();
}

void setListenerIndex(int index) {
  g_manager->setListenerIndex(index);
}

fnd::WeakHandle getListener() {
  return g_manager->getListener(-1);
}

void setListenerSurround(const char* name) {
  getMainListener().setSurround(name);
}

void setListenerSurround(const void* data) {
  getMainListener().setSurround(data);
}

fnd::WeakHandle findSound(const char* label) {
  return g_manager->findVoice(label);
}

// The manager is read before the name is hashed.
fnd::WeakHandle findSlot(const char* name) {
  Manager* manager = g_manager;
  uint32_t hash = hashName(name);
  return manager->findBus(&hash);
}

fnd::WeakHandle findSlot(const uint32_t* hash) {
  uint32_t key = *hash;
  return g_manager->findBus(&key);
}

void* getUnknown10() {
  return s_manager->getUnknown10();
}

void startSlotVolume(const char* name, const Fade& fade, float target) {
  fnd::WeakHandle slot = findSlot(name);
  if (slot.isValid()) {
    static_cast<Param*>(slot.get<Slot>())->startVolume(fade, target);
  }
}

void startSlotVolume(const uint32_t* hash, const Fade& fade, float target) {
  fnd::WeakHandle slot = findSlot(hash);
  if (slot.isValid()) {
    static_cast<Param*>(slot.get<Slot>())->startVolume(fade, target);
  }
}

void startSlotFadeVolume(const char* name, const Fade& fade, float target) {
  fnd::WeakHandle slot = findSlot(name);
  if (slot.isValid()) {
    Slot* object = slot.get<Slot>();
    object->startFadeVolume(Fade(fade.getTime()), target);
  }
}

void startSlotFadeVolume(const uint32_t* hash, const Fade& fade,
  float target) {
  fnd::WeakHandle slot = findSlot(hash);
  if (slot.isValid()) {
    Slot* object = slot.get<Slot>();
    object->startFadeVolume(Fade(fade.getTime()), target);
  }
}

float getSlotVolume(const char* name) {
  fnd::WeakHandle slot = findSlot(name);
  if (slot.isValid()) {
    return static_cast<Param*>(slot.get<Slot>())->getVolume();
  }
  return 0.0f;
}

void fadeSlot(const char* name, const Fade& fade, float target) {
  fnd::WeakHandle slot = findSlot(name);
  if (slot.isValid()) {
    slot.get<Slot>()->fadeVoices(fade, target);
  }
}

void pauseSlot(const char* name, const Fade& fade) {
  fnd::WeakHandle slot = findSlot(name);
  if (slot.isValid()) {
    slot.get<Slot>()->pauseVoices(fade, false);
  }
}

void resumePauseSlot(const char* name, const Fade& fade) {
  fnd::WeakHandle slot = findSlot(name);
  if (slot.isValid()) {
    slot.get<Slot>()->resumeVoices(fade);
  }
}

void muteSlot(const char* name, const Fade& fade) {
  fnd::WeakHandle slot = findSlot(name);
  if (slot.isValid()) {
    slot.get<Slot>()->muteVoices(fade);
  }
}

void resumeMuteSlot(const char* name, const Fade& fade) {
  fnd::WeakHandle slot = findSlot(name);
  if (slot.isValid()) {
    slot.get<Slot>()->unmuteVoices(fade);
  }
}

void startSlotLpfFrequency(const char* name, const Fade& fade,
  float target) {
  fnd::WeakHandle slot = findSlot(name);
  if (slot.isValid()) {
    slot.get<Slot>()->startLpfFrequency(fade, target);
  }
}

void startSlotLpfFrequency(const uint32_t* hash, const Fade& fade,
  float target) {
  fnd::WeakHandle slot = findSlot(hash);
  if (slot.isValid()) {
    slot.get<Slot>()->startLpfFrequency(fade, target);
  }
}

void startSlotBiquadValue(const char* name, const Fade& fade, float target) {
  fnd::WeakHandle slot = findSlot(name);
  if (slot.isValid()) {
    slot.get<Slot>()->startBiquadValue(fade, target);
  }
}

void startMasterVolume(const Fade& fade, float target) {
  g_manager->startMasterVolume(fade, target);
}

void resetMasterVolume(const Fade& fade) {
  g_manager->resetMasterVolume(fade);
}

void startBgmVolume(const Fade& fade, float target) {
  g_manager->startBgmVolume(fade, target);
}

void startSeVolume(const Fade& fade, float target) {
  g_manager->startSeVolume(fade, target);
}

void* getUnknown38() {
  return s_manager->getUnknown38();
}

void setBusEffect(const char* name, int bus) {
  g_manager->getBusManager()->setEffect(bus, name);
}

void stopBuses(const Fade& fade, int kind, float value) {
  g_manager->getBusManager()->stop(fade, kind, value);
}

void startBusVolume(const Fade& fade, int bus, int kind, float target) {
  g_manager->getBusManager()->startVolume(bus, fade, kind, target);
}

void resetBuses() {
  s_manager->getBusManager()->reset();
}

void setBusRequest(float request) {
  g_manager->getBusManager()->setRequest(request);
}

void resetBusVolume() {
  s_manager->getBusManager()->clearRequest();
}

float getDefineValue(const char* name) {
  uint32_t hash = hashName(name);
  const data::DefineData* data = data::findDefineData(&hash);
  if (data == nullptr) {
    return 0.0f;
  }
  return data->value;
}

int getDefineInt(const char* name) {
  uint32_t hash = hashName(name);
  const data::DefineData* data = data::findDefineData(&hash);
  if (data == nullptr) {
    return 0;
  }
  return static_cast<int>(data->value);
}

bool hasDefine(const char* name) {
  uint32_t hash = hashName(name);
  return data::findDefineData(&hash) != nullptr;
}

float getFadeTime(const char* name) {
  uint32_t hash = hashName(name);
  const data::FadeData* data = data::findFadeData(&hash);
  if (data == nullptr) {
    return 0.0f;
  }
  return Fade(data).getTime();
}

bool isRunning() {
  return g_manager->isRunning();
}

void unloadUnused() {
  s_manager->unloadUnused();
}

void clearStreams() {
  g_manager->clearStreams();
}

void setListenerPosition(float x, float y, float z, float angle) {
  const float pose[4] = {x, y, z, angle};
  g_manager->setListener(pose, -1);
}

void setVibrationSurround(const void* data) {
  g_manager->setVibrationSurround(data);
}

void setVibrationSurround(const char* name) {
  uint32_t hash = hashName(name);
  if (const void* data = data::findSurroundData(&hash)) {
    g_manager->setVibrationSurround(data);
  }
}

bool hasSound(const char* label) {
  Manager* manager = g_manager;
  const uint32_t key[2] = {fnd::calcCrc32(label, 0),
    fnd::calcCrc32Reverse(label, 0)};
  return manager->findSoundId(key) != 0xffffffff;
}

bool isLoaded(const char* label) {
  Manager* manager = g_manager;
  const uint32_t key[2] = {fnd::calcCrc32(label, 0),
    fnd::calcCrc32Reverse(label, 0)};
  return manager->isLoaded(key);
}

void attachSound3DListener(target::Sound3DListener* listener, int archive,
  int index) {
  s_target->attachSound3DListener(listener, archive, index);
}

bool isDisabled() {
  return s_manager->isDisabled();
}

}
