#pragma once

#include <cstdint>
#include <functional>
#include <vector>

#include "nn/os/system_event_class.hpp"
#include "snd/fade.hpp"
#include "snd/fnd/string.hpp"
#include "snd/fnd/weak_handle.hpp"
#include "snd/obj.hpp"

namespace snd {

class Listener;
class Manager;

// Free functions of the sound facade the game layer uses.
bool isRunning();
void setListenerPosition(float x, float y, float z, float angle);
void setListenerPosition(float x, float y, float z);
void setListenerAngle(float angle);
void setVibrationSurround(const void* data);
void startMasterVolume(const Fade& fade, float target);
void startBgmVolume(const Fade& fade, float target);
void startSeVolume(const Fade& fade, float target);
void startBusVolume(const Fade& fade, int bus, int kind, float target);
void stopBuses(const Fade& fade, int kind, float value);
void resetBusVolume();
void resetBuses();
float getFadeTime(const char* name);
fnd::WeakHandle findSlot(const uint32_t* hash);

// The wrappers the game calls without an instance.
void loadSoundData(const char* label);
void addVoiceSend(const char* name);
void clearVoiceSends();
void addBgmSend(const char* name);
void addSeSend(const char* name);
void clearSeSends();
void updateMixer();

// The players of the game layer, each created on initialization as the
// single instance of its class.
class BGM {
public:
  // One part of a piece, the voice playing it and its volume offset.
  class Track : public Name {
  public:
    fnd::WeakHandle voice;
    float offset;
  };

  // A piece of music, the last one requested plays.
  struct Entry {
    Track tracks[6];
    uint8_t unknown_150_[5];
    bool stopping;
    uint8_t unknown_156_[0xa];
    int track;
    int nextTrack;
    int unknown_168_;
    int unknown_16c_;
    int unknown_170_;
    uint8_t unknown_174_[8];
    int fadeFrame;
    bool loop;
    uint8_t unknown_181_[0x1f];
  };

  using EntryList = std::vector<Entry, fnd::Allocator<Entry>>;

  static constexpr int kStateIdle = 0;
  static constexpr int kStatePlaying = 2;
  static constexpr int kStateChanging = 3;

  static BGM* create();
  static void destroy();
  static void setInstance(BGM* bgm);
  static BGM* getInstance();

  static bool isPlaying();
  static bool isStopping();
  static int getUnknown168();
  static int getUnknown16c();
  static int getUnknown170();
  static void change(int track, bool loop);

  BGM();
  virtual ~BGM();

  virtual void update();
  virtual void updateTracks();
  virtual void updateRequests();
  virtual void updateFade();
  virtual void stop(const Fade& fade, bool force);

  // Stops every entry still in the list.
  void stopTracks(const Fade& fade);

private:
  [[gnu::visibility("hidden")]] static BGM* s_instance;

  EntryList entries_;
  float volume_ = 1.0f;
  int state_ = kStateIdle;
  int unknown_28_ = 0;
  fnd::WeakHandle handle_;
};

static_assert(sizeof(BGM::Entry) == 0x1a0);
static_assert(sizeof(BGM) == 0x40);

class Wind {
public:
  static Wind* create();
  static void destroy();

  Wind();
  virtual ~Wind();

  void update();
  void stop(const Fade& fade);
  void stop(const char* name);
  void reset();
  void play(const void* data, const char* weather, const char* time,
    void* param);

private:
  [[gnu::visibility("hidden")]] static Wind* s_instance;

  uint8_t unknown_08_[0x158];
};

class FF {
public:
  static FF* create();
  static void destroy();

  FF();
  virtual ~FF();

  void update();
  void stop(const Fade& fade);

private:
  [[gnu::visibility("hidden")]] static FF* s_instance;

  uint8_t unknown_08_[0x18];
};

class Env {
public:
  static Env* create();
  static void destroy();

  Env();
  virtual ~Env();

  void update();
  void stop(const Fade& fade);
  void stop(const char* name);
  void reset();
  void play(const char* name, const void* data, const char* weather,
    const char* time, uint8_t kind, void* param);

private:
  [[gnu::visibility("hidden")]] static Env* s_instance;

  uint8_t unknown_08_[0x1b8];
};

class GroupCtrl {
public:
  static GroupCtrl* create();
  static void destroy();

  GroupCtrl();
  virtual ~GroupCtrl();

  bool isReady() const;
  void update();
  void load(const char* name, const char* group);
  void unload(const char* name);
  void loadGroup(const uint32_t* hash);
  void unloadGroup(const uint32_t* hash);

private:
  [[gnu::visibility("hidden")]] static GroupCtrl* s_instance;

  uint8_t unknown_08_[0x50];
};

namespace data {

// The sound settings of a map field, looked up by the hash of its name.
struct FieldData {
  uint32_t hash;
  uint32_t effect;
  float volumes[3];
  uint32_t env;
  uint8_t unknown_18_[0x20];
  uint32_t wind;
  uint8_t envKind;
  uint8_t unknown_3d_[3];
  uint32_t group;
  uint8_t unknown_44_[0x10];
  uint32_t surround;
  uint8_t unknown_58_[4];
  uint32_t vibration;
};

struct EffectData {
  uint32_t hash;
};

struct GroupData {
  uint32_t hash;
};

struct VoiceData {
  uint8_t unknown_00_[0x20];
  uint32_t sends[2];
  uint8_t unknown_28_[0x5c];
  int kind;
};

const FieldData* findFieldData(const uint32_t* hash);
const void* findEnvData(const uint32_t* hash);
const void* findWindData(const uint32_t* hash);
const GroupData* findGroupData(const uint32_t* hash);
const void* findSurroundData(const uint32_t* hash);
const EffectData* findEffectData(const uint32_t* hash);

inline const FieldData* findFieldData(uint32_t hash) {
  return findFieldData(&hash);
}

inline const GroupData* findGroupData(uint32_t hash) {
  return findGroupData(&hash);
}

inline const EffectData* findEffectData(uint32_t hash) {
  return findEffectData(&hash);
}

// The key is the forward and the reverse hash of the label.
const VoiceData* findVoiceData(const uint32_t* key, const void** info);

}

// The interface between the game and the sound engine. Its five
// controllers are created on initialization.
class Game {
public:
  using NameList = std::vector<const char*, fnd::Allocator<const char*>>;

  virtual ~Game();

  virtual void initialize();
  virtual void finalize();
  virtual void update();
  virtual void updateSuspend();
  virtual void updateFrame();
  virtual float getMasterScale() const;
  virtual void stopField();
  virtual void reset(const Fade& fade);
  virtual void stopWithoutBGM(const Fade& fade);
  virtual void setupFields();
  virtual void updateListener(float x, float y, float z, float angle);
  virtual void setListener(float x, float y, float z, float angle);
  virtual void playFieldEnv(const char* name, bool rain, bool night,
    bool hds, void* param);
  virtual void playFieldWind(const char* name, bool rain, bool night,
    bool hds, void* param);
  virtual void setField(const char* name);
  virtual void setFieldSurround(const char* name);
  virtual const char* getBgmGroupName() const;
  virtual const char* getFfGroupName() const;
  virtual const char* getSeGroupName() const;
  virtual const char* getAmbGroupName() const;
  virtual const char* getVoiceGroupName() const;
  virtual void onSuspend();
  virtual void onResume();
  virtual NameList getBgmNames() const;
  virtual NameList getEnvNames() const;
  virtual NameList getSeNames() const;
  virtual NameList getVoiceNames() const;
  virtual void refresh();

  void setInstance(Game* game);
  void stop(const Fade& fade);
  void stopAll();
  void stopFieldSounds(const Fade& fade);
  void setEffect(const char* name);
  void setEffect(uint32_t hash);
  void setSurround(const char* name, const char* vibration);
  void setGroup(const char* name);
  void loadGroup(const char* name);
  void unloadGroup(const char* name);

  static void clearSends();

  static void setFieldGroup(const char* name);
  static void setFieldByName(const char* name);
  static void setSurroundByName(const char* name);
  static void beginSkip();
  static void markSkip();
  static void endSkip();
  static void doneSkip();
  static void enableFlag60();
  static void disableFlag60();
  static void enableFlag62();
  static void disableFlag62();
  static void enableFlag61();
  static void disableFlag61();
  static void releaseListener();
  static void fixListener();

  [[gnu::visibility("hidden")]] static Game* s_instance;

protected:
  bool isSkipped(uint64_t start, uint64_t frame) const {
    return (start > skipStart_ && start <= skipMark_) ||
      (start >= skipEnd_ && start <= frame);
  }

  BGM* bgm_;
  Wind* wind_;
  FF* ff_;
  Env* env_;
  GroupCtrl* group_;
  bool initialized_;
  uint8_t unknown_31_[0x2d];
  bool externalOutput_;
  bool speakerOutput_;
  bool flag60_;
  bool flag61_;
  bool flag62_;
  const data::EffectData* effect_;
  fnd::String effectName_;
  const void* surround_;
  const void* vibration_;
  const data::GroupData* groupData_;
  fnd::String groupName_;
  const data::EffectData* prevEffect_;
  const void* prevSurround_;
  const void* prevVibration_;
  bool fieldsReady_;
  nn::os::SystemEvent outputEvent_;
  uint8_t unknown_108_[0x8];
  float listenerX_;
  float listenerY_;
  float listenerZ_;
  float unknown_11c_;
  float listenerAngle_;
  float duckDistance_;
  float duckTime_;
  float duckVolume_;
  bool ducked_;
  bool listenerFollow_;
  bool listenerFixed_;
  uint64_t skipStart_;
  uint64_t skipMark_;
  uint64_t skipEnd_;
  float masterVolume_;
};

static_assert(sizeof(Game) == 0x158);

// The game instance, read through the global offset table by some wrappers.
extern Game* g_game;

}
