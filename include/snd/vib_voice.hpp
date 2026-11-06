#pragma once

#include "snd/voice.hpp"

namespace snd {

namespace data {

struct VibVoiceInfo {
  uint32_t type;
  int group;
};

struct VibBuffer {
  uint64_t reserved0;
  fnd::String name;
};

// The header of a loaded .bnvib file. Format 2 has a separate loop part.
struct VibrationFile {
  int format;
  int offset;
  uint32_t size;
  int loopOffset;
  uint32_t loopSize;
};

}

// The loaded vibration file, reached through a weak handle.
class VibrationData : public HandlePtr {
public:
  virtual void unknown2();
  virtual void unknown3();
  virtual void unknown4();
  virtual void load();
  virtual void unknown6();
  virtual bool isLoaded();
  virtual void unknown8();
  virtual const data::VibrationFile* getData();
  virtual uint32_t getSize();
};

// Only the slots the voice calls.
class VibrationPlayer {
public:
  virtual void unknown0();
  virtual void unknown1();
  virtual void unknown2();
  virtual void unknown3();
  virtual void unknown4();
  virtual void unknown5();
  virtual void unknown6();
  virtual void unknown7();
  virtual void setSource(const void* data, uint32_t size, const void* loop,
    uint32_t loopSize);
  virtual void unknown9();
  virtual void play();
  virtual void unknown11();
  virtual void unknown12();
  virtual bool isPlaying();
  virtual void togglePause();
  virtual void unknown15();
  virtual void mute();
  virtual void unmute();
  virtual void unknown18();
  virtual void stop();
};

class VibVoice : public Voice {
public:
  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void updateActor() override;
  void update(float ms) override;
  float getPriorityReduction() const override;
  bool isLoading() const override;
  bool checkLoaded() override;
  void prepare() override;
  void start() override;
  void play() override;
  bool isPrepared() const override;
  bool isPlaying() override;
  void updateHandle() override;
  void stop(const Fade& fade, Actor* actor, bool force, float value) override;
  void stop(const Fade& fade, bool force, float value) override;
  void kill(Actor* actor) override;
  void kill() override;
  void pause(const Fade& fade, Actor* actor) override;
  void pause(const Fade& fade, bool force) override;
  void resumePause(const Fade& fade, Actor* actor) override;
  void resumePause(const Fade& fade) override;
  void mute(const Fade& fade, Actor* actor) override;
  void mute(const Fade& fade, bool force) override;
  void resumeMute(const Fade& fade, Actor* actor) override;
  void resumeMute(const Fade& fade) override;
  void silent(const Fade& fade, Actor* actor) override;
  void silent(const Fade& fade, bool force) override;
  void resumeSilent(const Fade& fade, Actor* actor) override;
  void resumeSilent(const Fade& fade) override;
  bool isActiveFor(Actor* actor) override;
  bool isActive() const override;
  bool isPaused() const override;
  bool isMuted() const override;
  float calcPitch() const override;
  float calcSurroundPan() const override;
  void checkPriority() override;
  uint32_t getSoundType() const override;
  int getSoundGroup() const override;
  void addToSlot() override;
  void updatePlaying() override;

  VibVoice* getSlotNext() const {
    return slotNext_;
  }

private:
  bool hasVibration() const {
    return !vibBuffer_->name.empty();
  }

  void setSource();
  void stopImpl(const Fade& fade, bool force, float value);
  void killImpl();

  VibVoice* slotPrev_;
  VibVoice* slotNext_;
  data::VibBuffer* vibBuffer_;
  const data::VibVoiceInfo* vibInfo_;
  fnd::WeakHandle vibration_;
  const data::VibrationFile* file_;
  uint32_t fileSize_;
  VibrationPlayer* player_;
  int count1800_;
  int count1804_;
};

}
