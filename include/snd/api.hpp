#pragma once

#include <cstdint>

#include "snd/fade.hpp"
#include "snd/fnd/math.hpp"
#include "snd/fnd/weak_handle.hpp"

namespace snd::target {

class Sound3DListener;

}

namespace snd {

// The free functions the game uses to drive the sound engine. Voices,
// slots and the listener are passed around as weak handles.
fnd::WeakHandle play(const char* name, const char* label, const Fade& fade,
  int kind, int priority, int group, float delay, float volume);
fnd::WeakHandle play(const char* name, const char* label,
  const fnd::WeakHandle& actor, const Fade& fade, int kind, int priority,
  int group, float delay, float volume);
fnd::WeakHandle playAt(const char* name, const char* label, const Fade& fade,
  int kind, int priority, int group, float x, float y, float z, float delay,
  float volume);
fnd::WeakHandle playAt(const char* name, const char* label,
  const fnd::Vec3& position, const Fade& fade, int kind, int priority,
  int group, float delay, float volume);
fnd::WeakHandle playDirect(const char* name, const char* label,
  const Fade& fade, int kind, int priority, int group, float delay,
  float volume);
fnd::WeakHandle playDirect(const char* name, const uint32_t* key,
  const Fade& fade, int kind, int priority, int group, float delay,
  float volume);
fnd::WeakHandle playDirectAt(const char* name, const char* label,
  const Fade& fade, int kind, int priority, int group, float x, float y,
  float z, float delay, float volume);
fnd::WeakHandle playDirectAt(const char* name, const char* label,
  const fnd::Vec3& position, const Fade& fade, int kind, int priority,
  int group, float delay, float volume);

void release(const char* label);
void release(const fnd::WeakHandle& voice);
void stop(const char* label, const Fade& fade);
void stop(const fnd::WeakHandle& voice, const Fade& fade);
void forceStop(const fnd::WeakHandle& voice, const Fade& fade);
void kill(const fnd::WeakHandle& voice);
void stopAll(const Fade& fade);
void unlockSlots();
void stopKind(int kind, const Fade& fade);

void startDistanceVolume(const fnd::WeakHandle& voice, const Fade& fade,
  float target);
void startVolume(const fnd::WeakHandle& voice, const Fade& fade,
  float target);
float getVolume(const fnd::WeakHandle& voice);
void startSurroundPan(const fnd::WeakHandle& voice, const Fade& fade,
  float target);
void startPitch(const fnd::WeakHandle& voice, const Fade& fade,
  float target);
void startPan(const fnd::WeakHandle& voice, const Fade& fade, float target);
bool isActive(const char* label);
bool isActive(const fnd::WeakHandle& voice);
void pause(const fnd::WeakHandle& voice, const Fade& fade);
void resumePause(const fnd::WeakHandle& voice, const Fade& fade);
void mute(const fnd::WeakHandle& voice, const Fade& fade);
bool isMuted(const fnd::WeakHandle& voice);
void resumeMute(const fnd::WeakHandle& voice, const Fade& fade);
void startMainSend(const fnd::WeakHandle& voice, const Fade& fade,
  float target);
void startLpfFrequency(const fnd::WeakHandle& voice, const Fade& fade,
  float target);
bool isPlaying(const char* label);
bool isPlaying(const fnd::WeakHandle& voice);
void setPosition(const fnd::WeakHandle& voice, const fnd::Vec3& position);
void setPosition(const fnd::WeakHandle& voice, float x, float y, float z);
void getPosition(const fnd::WeakHandle& voice, fnd::Vec3* position);
float getPlayPosition(const fnd::WeakHandle& voice);
void startVolume(const fnd::WeakHandle& voice, int kind, const Fade& fade,
  float target);
fnd::WeakHandle findVoice(const char* label);
fnd::WeakHandle findSound(const char* label);

void setListenerPosition(float x, float y, float z);
void setListenerPosition(float x, float y, float z, float angle);
void setListenerAngle(float angle);
void getListenerPosition(float* x, float* y, float* z);
fnd::Vec3 getListenerPosition();
void setListenerIndex(int index);
fnd::WeakHandle getListener();
void setListenerSurround(const char* name);
void setListenerSurround(const void* data);
void attachSound3DListener(target::Sound3DListener* listener, int archive,
  int index);

fnd::WeakHandle findSlot(const char* name);
fnd::WeakHandle findSlot(const uint32_t* hash);
void* getUnknown10();
void* getUnknown38();
void startSlotVolume(const char* name, const Fade& fade, float target);
void startSlotVolume(const uint32_t* hash, const Fade& fade, float target);
void startSlotFadeVolume(const char* name, const Fade& fade, float target);
void startSlotFadeVolume(const uint32_t* hash, const Fade& fade,
  float target);
float getSlotVolume(const char* name);
void fadeSlot(const char* name, const Fade& fade, float target);
void pauseSlot(const char* name, const Fade& fade);
void resumePauseSlot(const char* name, const Fade& fade);
void muteSlot(const char* name, const Fade& fade);
void resumeMuteSlot(const char* name, const Fade& fade);
void startSlotLpfFrequency(const char* name, const Fade& fade,
  float target);
void startSlotLpfFrequency(const uint32_t* hash, const Fade& fade,
  float target);
void startSlotBiquadValue(const char* name, const Fade& fade, float target);

void startMasterVolume(const Fade& fade, float target);
void resetMasterVolume(const Fade& fade);
void startBgmVolume(const Fade& fade, float target);
void startSeVolume(const Fade& fade, float target);
void setBusEffect(const char* name, int bus);
void stopBuses(const Fade& fade, int kind, float value);
void startBusVolume(const Fade& fade, int bus, int kind, float target);
void resetBuses();
void setBusRequest(float request);
void resetBusVolume();

float getDefineValue(const char* name);
int getDefineInt(const char* name);
bool hasDefine(const char* name);
float getFadeTime(const char* name);

bool isRunning();
void unloadUnused();
void clearStreams();
void setVibrationSurround(const void* data);
void setVibrationSurround(const char* name);
bool hasSound(const char* label);
bool isLoaded(const char* label);
bool isDisabled();

}
