#pragma once

#include "game/game_save_const.hpp"
#include "game/proc/proc_singleton.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

namespace GmapSeq {

enum Label : int {
  kLabelTitle = 16,
  kLabelEnd = 18,
  kLabelReset = 19,
};

}

class GmapSeqHook {
public:
  virtual void Begin();
  virtual void End();
};

class ProcGmapSeq
  : public ProcJumpableSingleton<ProcGmapSeq, GmapSeq::Label>,
    public GameSaveConst::LocalSerializer {
public:
  void Unknown10() override;
  void Unknown11() override;
  void Unknown12() override;
  void Unknown13() override;
  void Unknown14() override;
  const char* GetName() const override;
  int GetVersion() const override;
  void Serialize(Stream& stream) const override;
  void Deserialize(Stream& stream, int version) override;

private:
  GmapSeqHook& GetHook() {
    return hook_;
  }

  uint64_t unknown_d8_;
  std::string unknown_e0_;
  GmapSeqHook hook_;
  int hook_count_;
};

#pragma GCC visibility pop

}
