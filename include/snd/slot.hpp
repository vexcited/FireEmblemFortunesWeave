#pragma once

#include <functional>

#include "snd/fnd/weak_handle.hpp"
#include "snd/handle_ptr.hpp"
#include "snd/manager.hpp"
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
  void destroyVoice(SeqVoice* voice);
  void checkPriority(SeqVoice* voice);
  void addVoice(VibVoice* voice);
  void destroyVoice(VibVoice* voice);
  void checkPriority(VibVoice* voice);

  void fadeVoices(const Fade& fade, float target);
  void pauseVoices(const Fade& fade, bool force);
  void resumeVoices(const Fade& fade);
  void muteVoices(const Fade& fade);
  void unmuteVoices(const Fade& fade);

  Slot* getNext() const {
    return next_;
  }

  void eachVoice(const std::function<void(Voice*)>& function);
  void eachSeqVoice(const std::function<void(SeqVoice*)>& function);
  void eachVibVoice(const std::function<void(VibVoice*)>& function);

private:
  uint64_t unknown_15e8_;
  Slot* next_;
  uint8_t unknown_15f8_[0x30];
  float volumeScale_;
  float lpfBias_;
  uint8_t unknown_1630_[0x30];
  // The slots whose values add to the ones of this slot.
  fnd::WeakHandle links_[4];
  uint8_t unknown_16a0_[0x18];
  ObjList<Voice>* voices_;
  uint8_t unknown_16c0_[0x20];
  ObjList<SeqVoice>* seqVoices_;
  uint8_t unknown_16e8_[0x20];
  ObjList<VibVoice>* vibVoices_;
};

class Actor : public Obj, public Param, public HandlePtr {
};

class Listener : public Obj, public Param, public HandlePtr {
public:
  void setSurround(const char* name);
  void setSurround(const void* data);
};

// A volume group found by the hash of its name.
class Bus : public Param, public HandlePtr {
};

// The slots list their voices by kind, the next one is read before the
// callback runs.
inline void Manager::eachSlot(const std::function<void(Slot*)>& function) {
  for (Slot* slot = slots_->head; slot != nullptr;) {
    Slot* next = slot->getNext();
    function(slot);
    slot = next;
  }
}

}
