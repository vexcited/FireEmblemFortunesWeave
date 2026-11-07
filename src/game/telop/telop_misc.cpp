#pragma GCC visibility push(hidden)
#include "game/proc/proc_game_skip_view.hpp"
#include "game/telop/telop_sequence.hpp"

namespace game::telop {

class TelopHonorExp : public TelopSequence {
public:
  ~TelopHonorExp() override;

  void Unknown36() override {
    accessor_.PlayAnimation(GetWaitAnimation(), 1.0f);
    unknown_1a4_ = 0.0f;
  }

  bool Unknown43() override;
  void Unknown45() override { counter_.SetState(2); }
  void Unknown50() override;

  nn::ui2d::Pane* Unknown53() override {
    return accessor_.FindPane("N_Contents");
  }

private:
  uint8_t unknown_338_[0x10];
  gameui::GaugeUtil::HonorExpChange counter_;
};

class TelopLevelUp : public TelopSequence {
public:
  ~TelopLevelUp() override;

  void Unknown34() override;
  void Unknown45() override { skipped_ = true; }
  void Unknown50() override;

private:
  uint8_t unknown_338_[0x1e8];
  bool skipped_;
  uint8_t unknown_521_[0x3f];
  uint8_t unknown_560_;
};

class TelopStatusChange : public TelopSequence {
public:
  ~TelopStatusChange() override;

  void Unknown45() override { skipped_ = true; }

private:
  uint8_t unknown_338_[0x180];
  bool skipped_;
};

class TelopPhase : public TelopSequence {
public:
  ~TelopPhase() override;

  virtual int Unknown55() { return turn_; }
  virtual int Unknown56() { return phase_; }

protected:
  uint8_t unknown_338_[0x30];
  int32_t turn_;
  int32_t phase_;
};

class TelopCmdbtlStart : public TelopPhase {
public:
  ~TelopCmdbtlStart() override;

  int Unknown55() override { return turn_ + 1; }
  int Unknown56() override { return phase_ + 1; }
};

class TelopClassTrialResultTelop : public TelopSequence {
public:
  ~TelopClassTrialResultTelop() override;

  const char* GetInAnimation() override {
    return passed_ ? "In_Passed" : "In_Failed";
  }

  const char* GetOutAnimation() override {
    return passed_ ? "Out_Passed" : "Out_Failed";
  }

  void Unknown35() override;

private:
  bool passed_;
};

class TelopTitle : public TelopSequence {
public:
  ~TelopTitle() override;

  void Unknown30() override;
  void Unknown31() override;
  void Unknown34() override { accessor_.SetVisible(false); }
};

TelopHonorExp::~TelopHonorExp() = default;
TelopLevelUp::~TelopLevelUp() = default;

// A skipped game ends the telop at once.
void TelopHonorExp::Unknown50() {
  if (ProcGameSkipView::IsSkipping()) {
    JumpTo(8);
  }
}

void TelopLevelUp::Unknown50() {
  if (!ProcGameSkipView::IsSkipping()) {
    return;
  }
  const uint32_t flags = ProcGameSkipView::instance_->GetFlags();
  JumpTo(((flags | unknown_560_) & 1) != 0 ? 8 : 6);
}
TelopStatusChange::~TelopStatusChange() = default;
TelopPhase::~TelopPhase() = default;
TelopCmdbtlStart::~TelopCmdbtlStart() = default;
TelopClassTrialResultTelop::~TelopClassTrialResultTelop() = default;
TelopTitle::~TelopTitle() = default;

}

#pragma GCC visibility pop
