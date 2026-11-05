#pragma once

#include "snd/voice.hpp"

namespace snd {

namespace data {

struct VibVoiceInfo {
  uint32_t type;
  int group;
};

}

class VibVoice : public Voice {
public:
  void destroy() override;
  void mainUnlocked() override;
  float getPriorityReduction() const override;
  bool isLoading() const override;
  bool isPrepared() const override;
  bool isPlaying() override;
  void stop(const Fade& fade, bool force, float value) override;
  bool isActive() const override;
  void checkPriority() override;
  uint32_t getSoundType() const override;
  int getSoundGroup() const override;
  void addToSlot() override;

private:
  void stopImpl(const Fade& fade, bool force, float value);

  uint8_t reserved17b8_[0x18];
  const data::VibVoiceInfo* vibInfo_;
  fnd::WeakHandle vibration_;
  uint8_t reserved17e8_[0x20];
};

}
