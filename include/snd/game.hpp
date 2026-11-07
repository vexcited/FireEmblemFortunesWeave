#pragma once

#include <cstdint>
#include <functional>
#include <vector>

#include "nn/os/system_event_class.hpp"
#include "snd/fade.hpp"
#include "snd/fnd/fast_alloc.hpp"
#include "snd/fnd/math.hpp"
#include "snd/fnd/string.hpp"
#include "snd/fnd/weak_handle.hpp"
#include "snd/obj.hpp"

namespace snd {

class Listener;
class Manager;

namespace data {

struct CtrlBgmData;

}

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
    bool unknown_150_ = false;
    bool paused = false;
    bool systemPaused = false;
    bool muted = false;
    bool systemMuted = false;
    bool stopping = false;
    bool fromData = false;
    const data::CtrlBgmData* data = nullptr;
    int track = 0;
    int nextTrack = 0;
    int unknown_168_ = 0;
    int unknown_16c_ = 0;
    int unknown_170_ = 0;
    int bridgeBeats = 0;
    int bridgeWaits = 0;
    float fadeFrame = 0.0f;
    bool loop = false;
    fnd::WeakHandle handle;
    bool elevator = false;
  };

  using EntryList = std::vector<Entry, fnd::Allocator<Entry>>;

  // The names of the tracks to start, in track order.
  struct Request {
    Request() : names{}, count(0) {
    }

    explicit Request(const char* name) : names{name}, count(1) {
    }

    void add(const char* name) {
      names[count] = name;
      names[count + 1] = nullptr;
      count++;
    }

    const char* names[7];
    uint32_t count;
  };

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

  static void playData(const char* name, int track, int kind);
  static void play(const char* name, const Fade& fade, int track,
    float delay, float volume);
  static void play(const Request& request, const Fade& fade, int track,
    float delay, float volume);
  static bool isFinished();
  static void release();
  static bool playNext(const char* name, const Fade& fade, int track,
    float delay, float volume);
  static void queue(const char* name, const Fade& fade, int track,
    float delay, float volume);
  static void queue(const Request& request, const Fade& fade, int track,
    float delay, float volume);
  static void playTrack(int track, const char* name, const Fade& fade,
    int kind, float delay, float volume);
  static void addTracks(const char* name, const Fade& fade, float delay,
    float volume);
  static void replaceTrack(int track, const char* name, const Fade& fade,
    int kind, float delay, float volume);
  static void stop(const Fade& fade);
  static void stopTrack(int track, const Fade& fade);
  static void pauseSystem(const Fade& fade);
  static void resumeSystemPause(const Fade& fade);
  static void mute(const Fade& fade);
  static void muteTrack(int track, const Fade& fade);
  static void resumeMute(const Fade& fade);
  static void resumeMuteTrack(int track, const Fade& fade);
  static void muteSystem(const Fade& fade);
  static void resumeSystemMute(const Fade& fade);
  static bool isActive();
  static bool isActive(int track);
  static void startVolume(const Fade& fade, float target);
  static void startPlayerVolume(const Fade& fade, float target);
  static float getVolume();
  static void startTrackVolume(int track, const Fade& fade, float target);
  static void startTrackPlayerVolume(int track, const Fade& fade,
    float target);
  static float getTrackVolume(int track);
  static void startPitch(const Fade& fade, float target);
  static void startTrackPitch(int track, const Fade& fade, float target);
  static void startPan(const Fade& fade, float target);
  static void startTrackPan(int track, const Fade& fade, float target);
  static void startSurroundPan(const Fade& fade, float target);
  static float getSurroundPan();
  static void startTrackSurroundPan(int track, const Fade& fade,
    float target);
  static float getTrackSurroundPan(int track);
  static void startLpfFrequency(const Fade& fade, float target);
  static void startTrackLpfFrequency(int track, const Fade& fade,
    float target);
  static void startPitchChecked(const Fade& fade, float target);
  static void startTrackPitchChecked(int track, const Fade& fade,
    float target);
  static float getPlayPosition();
  static float getTrackPlayPosition(int track);
  static void stopNamed(const char* name, const Fade& fade, float delay,
    float volume);
  static void stopPrevious(const Fade& fade);
  static void startPreviousVolume(const Fade& fade, float target);
  static float getPreviousVolume();
  static void playDataFrom(const char* name, const Fade& fade);
  static void dropPrevious();
  static const char* getPlayingName();

  BGM();
  virtual ~BGM();

  virtual void update();
  virtual void requestPlay(const char* name, const Fade& fade, int track,
    float delay, float volume);
  virtual bool requestNext(const char* name, const Fade& fade, int track,
    float delay, float volume);
  virtual bool requestPlay(const uint32_t* hash, const Fade& fade, int track,
    float delay, float volume);
  virtual void stop(const Fade& fade, bool force);
  virtual void pause(const Fade& fade);
  virtual void pauseTrack(int track, const Fade& fade);
  virtual void pauseSystemAll(const Fade& fade);
  virtual void setVolume(const Fade& fade, bool force, float volume);
  virtual void refreshVolume();

  // Stops every entry still in the list.
  void stopTracks(const Fade& fade);

  void requestData(const char* name, int track, int kind);
  void start(const Request& request, const Fade& fade, int track, int index,
    float delay, float volume);
  bool checkFinished() const;
  bool enqueue(const Request& request, const Fade& fade, int track,
    bool replace, float delay, float volume);
  void startTrack(int track, const char* name, const Fade& fade, int kind,
    float delay, float volume);
  void appendTracks(const Request& request, const Fade& fade, float delay,
    float volume);
  void swapTrack(int track, const char* name, const Fade& fade, int kind,
    float delay, float volume);
  void resumeSystemPauseAll(const Fade& fade);
  void muteAll(const Fade& fade);
  void resumeMuteAll(const Fade& fade);
  void muteSystemAll(const Fade& fade);
  void resumeSystemMuteAll(const Fade& fade);
  void startVolumeAll(const Fade& fade, float target);
  void startPlayerVolumeAll(const Fade& fade, float target);
  float getFirstVolume() const;
  void startPitchAll(const Fade& fade, float target);
  void startPanAll(const Fade& fade, float target);
  void startSurroundPanAll(const Fade& fade, float target);
  float getFirstSurroundPan() const;
  void startLpfFrequencyAll(const Fade& fade, float target);
  void startPitchCheckedAll(const Fade& fade, float target);
  float getFirstPlayPosition() const;
  void stopNamedEntry(const char* name, const Fade& fade, float delay,
    float volume);
  void stopPreviousEntry(const Fade& fade);
  void startPreviousVolumeAll(const Fade& fade, float target);
  float getFirstPreviousVolume() const;
  void playDataFromEntry(const char* name, const Fade& fade, int kind,
    float delay, float volume);
  void dropPreviousEntries();
  int getBeat(const fnd::WeakHandle& voice, int tempo) const;
  bool isStoppingNow() const;
  static bool equals(const fnd::String& string, const char* name);
  void releaseFirst();
  void resumePauseAll(const Fade& fade);
  void stopTrackVoice(int track, const Fade& fade);
  void playTrackVoice(int track, const char* label, int position,
    const Fade& fade, float delay, float volume);
  void playNewTrack(int track, const char* label, const Fade& fade,
    int kind, float delay, float volume);
  void playList(const Request& request, int position, const Fade& fade,
    float delay, float volume);
  float getFirstPlayerVolume() const;
  const char* getFirstName() const;
  fnd::String getFirstNameString() const;
  void resetVolume();
  void playHash(const uint32_t* hash, const Fade& fade, int track, int index,
    float delay, float volume);

  bool isAnyDelayed() const;
  bool isFirstActive() const;
  fnd::WeakHandle getFirstHandle() const;
  void startActorVolumeAll(const Fade& fade, float target);
  bool isAudible() const;
  float getAudibleStartOffset() const;
  void startEntry(const Request& request, const Fade& fade, int kind,
    int index, float delay, float volume);
  void replaceEntry(const Request& request, const Fade& fade, int kind,
    int index, float delay, float volume);
  void playSingle(const char* label, const Fade& fade, int kind, float delay,
    float volume);
  void updateState();

  bool isLastStopping() const {
    return entries_.empty() ? false : entries_.back().stopping;
  }

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
  // A position a wind sound is played from.
  class Pos {
  public:
    uint8_t unknown_00_[0x38];
  };

  // One sound of a wind group, its voice and position list.
  class Element : public Name {
  public:
    Element() = default;

    uint8_t unknown_20_[8];
    fnd::WeakHandle voice;
    std::vector<Pos*, fnd::Allocator<Pos*>> positions;
    fnd::String label;
    uint8_t unknown_68_[0x48];
  };

  class Group : public Name {
  public:
    Group() = default;

    std::vector<Element*, fnd::Allocator<Element*>> elements;
  };

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

  Group* findGroup(const char* name);
  void stopGroup(const char* name);
  void removeGroup(Group* group);
  void updateElement(Element* element);
  void mute(const Fade& fade);
  void resumeMute(const Fade& fade);

  static fnd::Vec3 getListenerPosition();

private:
  [[gnu::visibility("hidden")]] static Wind* s_instance;

  std::vector<Group*, fnd::Allocator<Group*>> groups_;
  fnd::FastAlloc<Pos, 0> positions_;
  fnd::FastAlloc<Element, 0> elements_;
  fnd::FastAlloc<Group, 0> groupPool_;
  const void* data_ = nullptr;
  fnd::String name_;
  const void* unknown_130_ = nullptr;
  float volume_ = 1.0f;
  bool muted_ = false;
  nn::os::MutexType mutex_ = {};
};

// Plays the force feedback sounds, optionally pausing or ducking the BGM
// while they play.
class FF {
public:
  static FF* create();
  static void destroy();

  static void play(const char* name, const Fade& fade);
  static void playOver(const char* name, const Fade& fade);
  static void playPausing(const char* name, const Fade& fade);
  static void playDucking(const char* name, const Fade& fade, float volume);
  static void stopVoice(const Fade& fade);
  static bool isPlaying();
  static void startVolume(const Fade& fade, float target);
  static void startPitch(const Fade& fade, float target);
  static void startPan(const Fade& fade, float target);
  static void startLpfFrequency(const Fade& fade, float target);

  FF();
  virtual ~FF();

  void update();
  void stop(const Fade& fade);
  void playOverBgm(const char* name, const Fade& fade);
  void playPausingBgm(const char* name, const Fade& fade);
  void playDuckingBgm(const char* name, const Fade& fade, float volume);

private:
  [[gnu::visibility("hidden")]] static FF* s_instance;

  fnd::WeakHandle voice_;
  bool playing_ = false;
  bool plain_ = false;
  bool bgmPaused_ = false;
  bool bgmDucked_ = false;
};

static_assert(sizeof(FF) == 0x20);

class Env {
public:
  // A position an environment sound is played from.
  class Pos {
  public:
    uint8_t unknown_00_[0x38];
  };

  // One sound of an environment group, its voice and position list.
  class Element : public Name {
  public:
    Element() = default;

    uint8_t unknown_20_[8];
    fnd::WeakHandle voice;
    std::vector<Pos*, fnd::Allocator<Pos*>> positions;
    fnd::String label;
    uint8_t unknown_68_[0x70];
  };

  class Group : public Name {
  public:
    Group() = default;

    std::vector<Element*, fnd::Allocator<Element*>> elements;
    bool unknown_38_;
    bool positional;
    uint8_t unknown_3a_[6];
  };

  static Env* create();
  static void destroy();

  static void stopAll(const Fade& fade);
  static void restart();
  static void startPitchChecked(const Fade& fade, float target);
  static void refreshPositions(const char* name, const Fade& fade);
  static void startElementVolume(const char* name, const Fade& fade);
  static void playField(const char* name);
  static void playFieldSub(const char* name);

  Env();
  virtual ~Env();

  void update();
  void stop(const Fade& fade);
  void stop(const char* name);
  void reset();
  void play(const char* name, const void* data, const char* weather,
    const char* time, uint8_t kind, void* param);

  Group* findGroup(const char* name);
  void restartFields();
  void updateGroup(Group* group);
  void updatePositionalGroup(Group* group);
  void removeGroup(Group* group);
  void stopGroup(const char* name);
  void playGroup(Group* group, const void* data, const char* weather,
    const char* time, bool kind, const Fade& fade);
  void refreshElementPositions(const char* name);
  void startElementVolumeImpl(const char* name, const Fade& fade);

  static fnd::Vec3 getListenerPosition();

private:
  [[gnu::visibility("hidden")]] static Env* s_instance;

  std::vector<Group*, fnd::Allocator<Group*>> groups_;
  std::vector<void*, fnd::Allocator<void*>> unknown_20_;
  fnd::FastAlloc<Pos, 0> positions_;
  fnd::FastAlloc<Element, 0> elements_;
  fnd::FastAlloc<Group, 0> groupPool_;
  const void* data_ = nullptr;
  fnd::String name_;
  const void* subData_ = nullptr;
  fnd::String subName_;
  const void* field_ = nullptr;
  const void* fieldSub_ = nullptr;
  int unknown_178_ = -1;
  int unknown_17c_ = 0;
  int unknown_180_ = 0;
  fnd::Vec3 position_;
  nn::os::MutexType mutex_ = {};
};

static_assert(sizeof(Env) == 0x1c0);
static_assert(sizeof(Wind) == 0x160);

// Loads the sound data groups, the boot and common ones and the one of
// the current field.
class GroupCtrl {
public:
  // A loaded name and the hash of the data it came from.
  struct Load {
    fnd::String name{""};
    uint32_t hash = 0;
  };

  // An added sound archive entry, laid out like a load.
  struct Addon {
    fnd::String name{""};
    uint32_t hash = 0;
  };

  // The name and group of a loaded slot, boot, common, then the fields.
  struct Pair {
    fnd::String name{""};
    fnd::String group{""};
  };

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

  void loadBoot();
  void unloadBoot();
  void loadCommon();
  void unloadCommon();
  void unloadCurrent(const char* name);
  void loadUserGroup(const uint32_t* hash);
  void loadAddSoundArc(const uint32_t* hash);

private:
  void loadData(const char* name);
  void unloadData(const char* name);
  void unloadNamed(const char* name);
  void unloadAddons(const char* name);
  template <typename T>
  T& findFree(std::vector<T, fnd::Allocator<T>>& list);

  [[gnu::visibility("hidden")]] static GroupCtrl* s_instance;

  std::vector<Load, fnd::Allocator<Load>> loads_;
  std::vector<Addon, fnd::Allocator<Addon>> addons_;
  std::vector<Pair, fnd::Allocator<Pair>> pairs_;
  int current_ = -1;
  bool bootLoaded_ = false;
  bool commonLoaded_ = false;
};

static_assert(sizeof(GroupCtrl) == 0x58);

// The lock of the group loads, reached directly and through the global
// offset table.
extern nn::os::MutexType g_groupMutex;
[[gnu::visibility("hidden")]] extern nn::os::MutexType s_groupMutex;

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
  uint32_t userGroup;
  const char* archive;
  uint32_t addSoundArc;
  uint32_t surround;
  uint8_t unknown_58_[4];
  uint32_t vibration;
};

struct EffectData {
  uint32_t hash;
};

struct GroupData {
  uint32_t hash;
  const char* const* names;
  int count;
};

// The archives of an added sound archive entry.
struct AddSoundArcData {
  uint32_t hash;
  const char* const* names;
  int count;
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
