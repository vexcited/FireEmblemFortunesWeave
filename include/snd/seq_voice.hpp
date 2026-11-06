#pragma once

#include <vector>

#include "snd/voice.hpp"

namespace snd {

namespace data {

struct SeqVoiceInfo {
  uint8_t reserved0[0x18];
  int count;
  uint8_t reserved1c[0x8];
  uint32_t type;
  int group;
};

// The pool entry of a sequence voice, the buffer of the sequence itself and
// one buffer per child voice.
struct SeqBuffer {
  uint64_t reserved0;
  int type;
  VoiceBuffer buffer;
  std::vector<VoiceBuffer, fnd::Allocator<VoiceBuffer>> children;
  uint64_t reserved2c0;
};

}

class WaveMultiVoice;

// A sequence plays child voices. Types 1, 2, 3, 5, 6, 8, 11 and 12 keep one
// child, types 4, 7, 9 and 10 keep one child per entry of the info.
class SeqVoice : public Voice {
public:
  static void** registry() {
    static void* base = Voice::registry();
    return &base;
  }

  void destroy() override;
  void mainUnlocked() override;
  void** getRegistry() override;
  void updateActor() override;
  void update(float ms) override;
  void updatePriorityReduction() override;
  float getPriorityReduction() const override;
  bool isPlaying() override;
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
  void startVolume(int kind, const Fade& fade, float target) override;
  float getVolume(int kind) override;
  fnd::WeakHandle getHandle(int kind) override;
  float calcPriorityReduction() override;
  float getPlayTime(uint32_t kind) override;
  float getPlayPosition(uint32_t kind) override;
  bool isStopRequested() override;
  void clearStopRequest() override;
  bool isLoopEnded() override;
  float getStartOffset() const override;
  void setUserFlags(uint32_t flags) override;
  void addUserFlags(uint32_t flags) override;
  void removeUserFlags(uint32_t flags) override;
  void setStopping(bool stopping) override;
  void setLocked(bool locked) override;
  bool isLocked() const override;
  uint32_t getOutputLine() const override;
  void setOutputMode(int mode) override;
  void checkPriority() override;
  uint32_t getSoundType() const override;
  int getSoundGroup() const override;
  bool crossFade(int state, float time, float volume) override;
  void addToSlot() override;
  void updatePlaying() override;

  // The pitch and surround pan offsets a sequence adds to its children.
  float calcTotalPitch() const;
  float calcTotalSurroundPan() const;

  SeqVoice* getSlotNext() const {
    return slotNext_;
  }

private:
  struct Child {
    fnd::WeakHandle voice;
  };

  // Type 6 repeats its child as many times as the info asks.
  struct RepeatChild {
    fnd::WeakHandle voice;
    int count;
  };

  // Type 11 plays the tracks of a multi wave voice.
  struct TrackChild {
    fnd::WeakHandle voice;
    std::vector<float, fnd::Allocator<float>> volumes;
  };

  struct ChildList {
    std::vector<fnd::WeakHandle, fnd::Allocator<fnd::WeakHandle>> voices;
  };

  // Type 9 mixes its children with one volume each.
  struct MixChildList {
    std::vector<fnd::WeakHandle, fnd::Allocator<fnd::WeakHandle>> voices;
    std::vector<float, fnd::Allocator<float>> volumes;
  };

  int getType() const {
    return seqBuffer_->type;
  }

  int getChildCount() const {
    return seqInfo_->count;
  }

  Voice* getChild() const {
    return static_cast<Child*>(children_)->voice.get<Voice>();
  }

  Voice* getChild(int index) const {
    return static_cast<ChildList*>(children_)->voices[index].get<Voice>();
  }

  template <typename F>
  void forEachChild(F function);

  int getHandleCount() const;
  void getHandles(fnd::WeakHandle* handles, int count) const;
  void stopImpl(const Fade& fade, bool force, float value);
  void killImpl();

  SeqVoice* slotPrev_;
  SeqVoice* slotNext_;
  data::SeqBuffer* seqBuffer_;
  const data::SeqVoiceInfo* seqInfo_;
  void* children_;
  bool reserved17e0_;
  bool flag17e1_;
};

}
