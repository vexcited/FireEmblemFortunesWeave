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

namespace data {

struct EffectData;

}

// Only the parts the voices use.
class Loader {
public:
  bool isDone(void* request);
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

  void clearRequest() {
    request_ = 0;
  }

private:
  uint8_t unknown_00_[0x5b0];
  int request_;
};

template <typename T>
struct ObjList {
  T* head;
};

class Manager {
public:
  static void lock();
  static void unlock();

  Loader* getLoader() const;
  WaveReader* createReader();
  void destroyReader(WaveReader* reader);

  void unlockSlots();
  void main();
  bool isDisabled() const;
  float getMasterVolume() const;
  void setMasterVolume(float volume);
  Mixer* getMixer() const;
  BusManager* getBusManager() const;
  fnd::WeakHandle getListener(int index);
  fnd::WeakHandle findBus(const uint32_t* hash);

  void eachSlot(const std::function<void(Slot*)>& function);

private:
  uint8_t unknown_00_[0x28];
  ObjList<Slot>* slots_;
};

// The manager of the sound engine, reached directly and through the global
// offset table.
extern Manager* g_manager;
[[gnu::visibility("hidden")]] extern Manager* s_manager;

// The frame counter of the sound thread.
extern uint64_t g_frameCount;
[[gnu::visibility("hidden")]] extern uint64_t s_frameCount;

}
