#pragma once

#include "snd/voice.hpp"

namespace snd {

namespace data {

struct SeqVoiceInfo {
  uint8_t reserved0[0x24];
  uint32_t type;
  int group;
};

}

class SeqVoice : public Voice {
public:
  void mainUnlocked() override;
  float getPriorityReduction() const override;
  void stop(const Fade& fade, bool force, float value) override;
  void kill(Actor* actor) override;
  void kill() override;
  bool isActiveFor(Actor* actor) override;
  bool isActive() const override;
  bool isPaused() const override;
  bool isMuted() const override;
  float getPlayTime(uint32_t kind) override;
  float getPlayPosition(uint32_t kind) override;
  void checkPriority() override;
  uint32_t getSoundType() const override;
  int getSoundGroup() const override;
  void addToSlot() override;

private:
  void stopImpl(const Fade& fade, bool force, float value);
  void killImpl();

  uint8_t reserved17b8_[0x18];
  const data::SeqVoiceInfo* seqInfo_;
  uint8_t reserved17d8_[0x10];
};

}
