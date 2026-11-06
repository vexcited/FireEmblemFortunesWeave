#pragma once

#include <cstdint>
#include <functional>
#include <vector>

#include "snd/fnd/string.hpp"
#include "snd/fnd/weak_handle.hpp"

namespace snd {

class Fade;
class Slot;
class WaveReader;
struct VoiceParam;

namespace fnd {

class Vec3;

// The file loads queued for the sound thread.
class AsyncLoader {
public:
  static AsyncLoader* getInstance();

  bool isBusy(int kind, int priority);
};

}

namespace data {

struct EffectData;

}

namespace fx {

class FxBase;

}

// Only the parts the voices use.
class Loader {
public:
  bool isDone(void* request);
  bool isIdle() const;
  void loadGroup(const char* name);
  void loadGroup(const char* name, bool force);
  void unloadGroup(const char* name);
  void loadUserGroup(const char* name);
};

// The sound archives added on top of the main one.
class AddonManager {
public:
  bool isIdle() const;
  void* getActive();
};

// Loads the archive files of the data groups.
class ArchiveLoader {
public:
  bool isIdle() const;
  void load(const char* name);
  void unload(const char* name);
  void loadArchive(const char* path);
};

// A send the mixer counts while it is listed.
struct MixerSend {
  uint8_t unknown_00_[0x28];
  int refs;
};

// The sends the mixer keeps per kind.
struct MixerSends {
  using List = std::vector<MixerSend*, fnd::Allocator<MixerSend*>>;

  static void clear(List& sends) {
    for (size_t i = 0; i < sends.size(); ++i) {
      if (MixerSend* send = sends[i]) {
        --send->refs;
        sends[i] = nullptr;
      }
    }
  }

  List voices;
  List bgms;
  List ses;
};

class Mixer {
public:
  void addVoiceSend(const uint32_t* ids);
  void addBgmSend(const uint32_t* ids);
  void addSeSend(const uint32_t* ids);
  void clearBgmSends();
  void update();

  void clearVoiceSends() {
    MixerSends::clear(sends_->voices);
  }

  void clearSeSends() {
    MixerSends::clear(sends_->ses);
  }

private:
  uint8_t unknown_00_[0x50];
  MixerSends* sends_;
};

// The four output buses and the effect applied to them.
class BusManager {
public:
  void setFrame(int frame);
  void stop(const Fade& fade, int kind, float value);
  void reset();
  void setEffect(int bus, const data::EffectData* effect);
  void setEffect(int bus, const char* name);
  void startVolume(int bus, const Fade& fade, int kind, float target);

  void clearRequest() {
    request_ = 0;
  }

  void setRequest(float request) {
    request_ = request;
  }

private:
  uint8_t unknown_00_[0x5b0];
  float request_;
};

template <typename T>
struct ObjList {
  T* head;
};

class Manager {
public:
  static void lock();
  static void unlock();

  static Manager* getInstance();

  Loader* getLoader() const;
  AddonManager* getAddonManager() const;
  ArchiveLoader* getArchiveLoader() const;
  void addAddon(void* addon, const char* name, const char* path);
  void removeAddon(void* addon, const char* name);
  bool isAddonOpen(void* addon, const char* name);
  bool openAddon(void* addon, const char* name);
  void resetAddons();
  WaveReader* createReader();
  void destroyReader(WaveReader* reader);

  void unlockSlots();
  void destroyFx(fx::FxBase* fx);
  void main();
  bool isDisabled() const;
  float getMasterVolume() const;
  void setMasterVolume(float volume);
  Mixer* getMixer() const;
  BusManager* getBusManager() const;
  fnd::WeakHandle getListener(int index);
  bool hasListenerOverride() const;
  fnd::Vec3 getListenerOverride() const;
  fnd::WeakHandle findBus(const uint32_t* hash);

  fnd::WeakHandle play(const fnd::WeakHandle& slot, const char* name,
    const char* label, const fnd::WeakHandle& actor, const VoiceParam& param,
    const fnd::WeakHandle& parent);
  fnd::WeakHandle play(const fnd::WeakHandle& slot, const char* name,
    const uint32_t* key, const fnd::WeakHandle& actor,
    const VoiceParam& param, const fnd::WeakHandle& parent);
  fnd::WeakHandle playAt(const fnd::WeakHandle& slot, const char* name,
    const char* label, const VoiceParam& param, float x, float y, float z);
  fnd::WeakHandle playAt(const fnd::WeakHandle& slot, const char* name,
    const char* label, const fnd::Vec3& position, const VoiceParam& param);
  fnd::WeakHandle findVoice(const char* label);
  void stop(const fnd::WeakHandle& voice, const Fade& fade, bool force);
  void kill(const fnd::WeakHandle& voice, const fnd::WeakHandle& actor);
  void stopAll(const Fade& fade);
  void stopKind(int kind, const Fade& fade);
  bool isActive(const fnd::WeakHandle& voice);
  bool isLoaded(const uint32_t* key);
  uint32_t findSoundId(const uint32_t* key);
  void setListenerPosition(int index, float x, float y, float z);
  void setListenerDirection(int index, float x, float y, float z);
  void setListener(const float* pose, int index);
  void setListenerIndex(int index);
  void setVibrationSurround(const void* data);
  void startMasterVolume(const Fade& fade, float target);
  void resetMasterVolume(const Fade& fade);
  void startBgmVolume(const Fade& fade, float target);
  void startSeVolume(const Fade& fade, float target);
  void unloadUnused();
  void clearStreams();

  bool isRunning() const {
    return !stopped_;
  }

  void* getUnknown10() {
    return &unknown_10_;
  }

  void* getUnknown38() {
    return &unknown_38_;
  }

  void eachSlot(const std::function<void(Slot*)>& function);

private:
  uint8_t unknown_00_[8];
  bool stopped_;
  uint8_t unknown_09_[7];
  uint8_t unknown_10_[0x18];
  ObjList<Slot>* slots_;
  uint8_t unknown_30_[8];
  uint8_t unknown_38_[8];
};

// The manager of the sound engine, reached directly and through the global
// offset table.
extern Manager* g_manager;
[[gnu::visibility("hidden")]] extern Manager* s_manager;

// The frame counter of the sound thread.
extern uint64_t g_frameCount;
[[gnu::visibility("hidden")]] extern uint64_t s_frameCount;

}
