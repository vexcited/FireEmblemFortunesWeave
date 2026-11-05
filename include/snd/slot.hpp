#pragma once

#include "snd/handle_ptr.hpp"
#include "snd/obj.hpp"
#include "snd/param.hpp"

namespace snd {

class SeqVoice;
class VibVoice;
class Voice;

// Only the parts the voices use. Slots, actors and listeners share the
// layout of a voice base: Obj, then Param at 0x28, then HandlePtr at 0x15d8.
class Slot : public Obj, public Param, public HandlePtr {
public:
  ~Slot() override;

  void destroy() override;
  void mainUnlocked() override;
  virtual void** getRegistry();

  float calcVolume() const override;
  float calcVolume(const std::bitset<64>& mask) const override;
  float calcPitch() const override;
  float calcPan() const override;
  float calcSurroundPan() const override;
  float calcLpf() const override;
  float calcMainSend() const override;
  float calcBiquadValue() const override;
  float calcFxSend() const override;
  float calcOutputVolume() const override;

  void addVoice(Voice* voice);
  void destroyVoice(Voice* voice);
  void checkPriority(Voice* voice);
  void addVoice(SeqVoice* voice);
  void checkPriority(SeqVoice* voice);
  void addVoice(VibVoice* voice);
  void destroyVoice(VibVoice* voice);
  void checkPriority(VibVoice* voice);
};

class Actor : public Obj, public Param, public HandlePtr {
};

}
