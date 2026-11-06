#pragma once

#include <cstdint>
#include <vector>

#include "nn/os/mutex.hpp"
#include "snd/fade.hpp"
#include "snd/fnd/string.hpp"
#include "snd/fnd/weak_handle.hpp"
#include "snd/handle_ptr.hpp"
#include "snd/obj.hpp"
#include "snd/param.hpp"
#include "snd/target/sound.hpp"

namespace snd {

class Actor;
class Slot;

namespace data {

// The per voice parameters taken from a FastAlloc pool of the manager. Only
// the fields the voices read are named.
struct VoiceBuffer {
  void update();

  fnd::String label;
  uint32_t labelHash[2];
  fnd::String name;
  uint32_t nameHash[2];
  uint8_t reserved40[0x10];
  fnd::String file;
  uint32_t fileHash[2];
  uint8_t reserved70[0x8];
  int loadState;
  int loadCount;
  float volume;
  uint8_t reserved84[0x8];
  float volumeScale;
  uint8_t reserved90[0x8];
  float actorScale;
  uint8_t reserved9c[0x20];
  int priority;
  uint8_t reservedc0[0x4];
  int sendCount;
  uint8_t reservedc8[0x20];
  float surroundPan;
  float pitch;
  float pan;
  float delay;
  float startOffsetMin;
  float startOffsetMax;
  float length;
  float envelope[5];
  float randomVolume[2];
  float randomSurroundPan[2];
  float randomPitch[2];
  float randomPan[2];
  float randomLpf[2];
  float volumeFluctuation[4];
  float surroundPanFluctuation[4];
  float panFluctuation[4];
  float lpf;
  uint32_t outputLine;
  float mainSend;
  uint8_t reserved17c[0x4];
  float biquadValue;
  float fxSend;
  float outputVolume;
  float mixVolume0;
  float mixVolume1;
  uint8_t reserved194[0x14];
  int priorityArchive;
  float priorityReduction;
  uint8_t reserved1b0[0x6c];
  int features[24];
  uint8_t reserved27c[0x1c];
};

struct VoiceInfo {
  uint32_t hash[2];
  uint32_t reserved8;
  uint32_t type;
  int group;
  uint32_t reserved14;
  const char* label;
};

}

// The start parameters of a voice. The facade fills it on the stack and the
// voice constructor copies it.
struct VoiceParam {
  Fade fade{0.0f};
  float delay = 0.0f;
  float volume = 1.0f;
  int kind = 0;
  // Overwritten by every caller, the default packs two ones.
  int priority = 0x10001;
  int group = 0;
  bool isFront = false;
  bool reserved_dd = false;
  bool reserved_de = false;
  bool direct = false;
  bool reserved_e0[3] = {};
  void* user = nullptr;
};

static_assert(sizeof(VoiceParam) == 0xf0);

// A named position in the sound, reported back while it plays.
class Marker {
public:
  virtual ~Marker();

private:
  fnd::String name_;
  int id_;
};

class VoiceBase : public Obj, public Param, public HandlePtr {
public:
  VoiceBase(Manager* manager, const char* name, bool isFront, int priority,
    VoiceBase* parent);
  ~VoiceBase() override;

  virtual void** getRegistry();
  static void** registry();

  VoiceBase* getListNext() const {
    return listNext_;
  }

  // Set on the voices of a sequence.
  bool isSequence() const {
    return flag1701_;
  }

  // The sound frame the voice was created in.
  uint64_t getStartFrame() const {
    return listReserved_[0];
  }

protected:
  enum State {
    kStateNone,
    kStateIdle,
  };

  uint64_t listReserved_[2];
  uint64_t serial_;
  VoiceBase* listPrev_;
  VoiceBase* listNext_;
  data::VoiceBuffer* buffer_;
  const data::VoiceInfo* info_;
  target::SoundHandle* handle_;
  void* request_;
  fnd::String label_;
  void* labelData_;
  fnd::String archiveName_;
  fnd::String addonName_;
  target::StartInfo* startInfo_;
  uint32_t soundId_;
  int archive_;
  const char* addon_;
  int error_;
  float priorityReduction_;
  int state_;
  fnd::WeakHandle slot_;
  fnd::WeakHandle group_;
  fnd::WeakHandle env_;
  fnd::WeakHandle actor_;
  fnd::WeakHandle parent_;
  int playCount_;
  bool isFront_;
  bool dead_;
  bool actorRegistered_;
  bool flag16ff_;
  bool hasParent_;
  bool flag1701_;
  bool flag1702_;
  bool flag1703_;
  bool flag1704_;
  bool held_;
  bool flag1706_;
  bool invalid_;
  bool active_;
  bool stopping_;
  bool stopRequested_;
  bool looped_;
  bool loading_;
  bool loaded_;
  bool preparing_;
  bool prepared_;
  bool paused_;
  bool muted_;
  bool silent_;
  bool flag1713_;
  bool flag1714_;
  bool flag1715_;
  bool flag1716_;
  bool flag1717_;
  bool flag1718_;
  bool flag1719_;
  bool flag171a_;
  bool flag171b_;
  bool flag171c_;
  bool streamed_;
  bool locked_;
  bool mainLocked_;
  int kind_;
  int priority_;
  uint32_t outputLine_;
  int outputMode_;
  float startOffset_;
  uint32_t userFlags_;
  mutable nn::os::MutexType mutex_;
  void* userBuffer_;
  fnd::WeakHandle owner_;
  bool hasOwner_;
  std::vector<Marker, fnd::Allocator<Marker>> markers_;
  int markerIndex_;
  int channelIds_[6];
  float pitchOffset_;
  bool reserved17b0_;
};

class Voice : public VoiceBase {
public:
  Voice(Manager* manager, Slot* slot, const char* name, const char* label,
    Actor* actor, VoiceParam* param, VoiceBase* parent);
  ~Voice() override;

  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;

  static void** registry();

  virtual void updateActor();
  virtual void update(float ms);
  virtual void updateTarget();
  virtual void updateProxy();
  virtual void main();
  virtual float getPriorityReduction() const;
  virtual void updatePriorityReduction();
  virtual void load();
  virtual bool isLoading() const;
  virtual bool checkLoaded();
  virtual void prepare();
  virtual void start();
  virtual void play();
  virtual bool isPrepared() const;
  virtual bool isPlaying();
  virtual void updateHandle();
  virtual void hold();
  virtual void release();
  virtual bool isHeld() const;
  virtual bool isDelayed() const;
  virtual bool isStopping() const;
  virtual void stop(const Fade& fade, Actor* actor, bool force, float value);
  virtual void stop(const Fade& fade, bool force, float value);
  virtual void kill(Actor* actor);
  virtual void kill();
  virtual void pause(const Fade& fade, Actor* actor);
  virtual void pause(const Fade& fade, bool force);
  virtual void resumePause(const Fade& fade, Actor* actor);
  virtual void resumePause(const Fade& fade);
  virtual void mute(const Fade& fade, Actor* actor);
  virtual void mute(const Fade& fade, bool force);
  virtual void resumeMute(const Fade& fade, Actor* actor);
  virtual void resumeMute(const Fade& fade);
  virtual void silent(const Fade& fade, Actor* actor);
  virtual void silent(const Fade& fade, bool force);
  virtual void resumeSilent(const Fade& fade, Actor* actor);
  virtual void resumeSilent(const Fade& fade);
  virtual bool isActiveFor(Actor* actor);
  virtual bool isActive() const;
  virtual bool isPaused() const;
  virtual bool isMuted() const;
  virtual void setVariable(uint32_t index, const Fade& fade, Actor* actor,
    float value);
  virtual void setVariable(int index, const Fade& fade, float value);
  virtual float getVariable(int index) const;
  virtual void startVolume(int kind, const Fade& fade, float target);
  virtual float getVolume(int kind);
  virtual fnd::WeakHandle getHandle(int kind);
  virtual float calcPriorityReduction();
  virtual float getPlayTime(uint32_t kind);
  virtual float getPlayPosition(uint32_t kind);
  virtual int getPlaySample(uint32_t kind);
  virtual float getLength() const;
  virtual float getPitchOffset() const;
  virtual bool isStopRequested();
  virtual void clearStopRequest();
  virtual bool isLoopEnded();
  virtual float getStartOffset() const;
  virtual void setStartOffset(float offset);
  float calcVolume() const override;
  float calcPitch() const override;
  float calcPan() const override;
  float calcSurroundPan() const override;
  float calcLpf() const override;
  float calcMainSend() const override;
  float calcBiquadValue() const override;
  float calcFxSend() const override;
  float calcOutputVolume() const override;
  float calcMixVolume0() const override;
  float calcMixVolume1() const override;
  virtual float calcMaxVariable() const;
  virtual void setUserFlags(uint32_t flags);
  virtual uint32_t getUserFlags() const;
  virtual void addUserFlags(uint32_t flags);
  virtual void removeUserFlags(uint32_t flags);
  virtual bool hasUserFlags(uint32_t flags) const;
  virtual void setStopping(bool stopping);
  virtual bool getStopping() const;
  virtual bool isStream() const;
  virtual void setLocked(bool locked);
  virtual bool isLocked() const;
  virtual uint32_t getOutputLine() const;
  virtual void setOutputMode(int mode);
  virtual void checkPriority();
  virtual uint32_t getSoundType() const;
  virtual int getSoundGroup() const;
  virtual bool crossFade(int state, float time, float volume);
  virtual void addToSlot();
  virtual void mainCore(bool locked);
  virtual void stopHandle(const Fade& fade);
  virtual void updatePlaying();

  bool hasFeature(uint32_t index) const;
  bool hasFeature0() const;
  int getFeature0() const;
  bool hasFeature1() const;
  int getFeature1() const;
  bool hasFeature2() const;
  bool hasFeature4() const;
  bool hasFeature6() const;
  bool hasFeature7() const;
  bool hasFeature8() const;
  bool hasFeature13() const;
  bool hasFeature22() const;
  bool hasSends() const;
  bool isActorScaled() const;
  uint32_t getBufferOutputLine() const;
  int getChannelId(int index) const;
  bool isDead() const;

  int getOutputMode() const {
    return outputMode_;
  }
  void setLabel(const char* label);
  void setArchiveName(const char* name);
  const char* getBufferLabel() const;
  void finish();
  bool isForcedFront() const;
  float calcVolumeScale() const;
  void startPitchChecked(const Fade& fade, float target);
  float calcOwnPriorityReduction();

protected:
  void stopImpl(const Fade& fade, bool force, float value);
  void killImpl();
  void updateActorImpl(Actor* actor);
  void resolveLabel();
};

}
