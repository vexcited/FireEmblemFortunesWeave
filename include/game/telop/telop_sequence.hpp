#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <string_view>
#include <vector>

#include "game/gameui/gauge_util.hpp"
#include "game/proc/proc_inst.hpp"
#include "snd/fnd/weak_handle.hpp"
#include "ui/layout.hpp"
#include "ui/layout_accessor.hpp"

namespace game::telop {

// Title text shown over some telops, its type is not recovered.
class TitleSystem {
public:
  bool IsPlaying();
  void Close(bool immediate);
  // Jumps the title animations to their last frame.
  void Finish();
};


// An effect handle checked against the serial of its target.
class EffectHandle {
public:
  bool IsValid() const {
    return ref_->target != nullptr && ref_->target->serial == ref_->serial;
  }

  void Stop(bool immediate);

private:
  struct Target {
    uint8_t unknown_00_[0x10];
    uint32_t serial;
  };

  struct Ref {
    Target* target;
    uint32_t serial;
  };

  std::shared_ptr<Ref> ref_;
};

// Base of the on-screen captions.
class TelopSequence : public ProcInst {
public:
  ~TelopSequence() override;

  virtual int Unknown18() { return unknown_151_ ? 1 : 5; }
  virtual int Unknown19() { return 0; }
  virtual int Unknown20() { return 1; }
  virtual void Unknown21();
  virtual int Unknown22() { return 0; }
  virtual int Unknown23() { return 0; }
  virtual int Unknown24() { return 60; }
  virtual int Unknown25() { return 5; }
  virtual const char* GetInAnimation() { return "In"; }
  virtual const char* GetOutAnimation() { return "Out"; }
  virtual const char* GetWaitAnimation() { return "Wait"; }
  virtual void Unknown29() {}
  virtual void Unknown30();
  virtual void Unknown31();
  virtual void Unknown32();
  virtual void Unknown33() {}
  virtual void Unknown34() {}
  virtual void Unknown35() {}
  virtual void Unknown36();
  virtual bool Unknown37();
  virtual void Unknown38();
  virtual void Unknown39() {}
  virtual void Unknown40();
  virtual bool Unknown41();
  virtual void Unknown42();
  virtual bool Unknown43();
  virtual void Unknown44() {}
  virtual void Unknown45();
  virtual void Unknown46() {}
  virtual void Unknown47();
  virtual void Unknown48() {}
  virtual void Unknown49();
  virtual void Unknown50();
  virtual const char* Unknown51() { return "L_NextCursor"; }
  virtual int Unknown52() { return 0; }
  virtual nn::ui2d::Pane* Unknown53() { return nullptr; }
  virtual const char* Unknown54() { return nullptr; }

  using PartList = std::vector<std::weak_ptr<ui::LayoutAccessor>>;

protected:
  // True once no part plays its In animation anymore.
  static bool IsPartsInFinished(const PartList& parts);

  void Unknown1374cc0(bool unknown);

  std::shared_ptr<ui::Layout> layout_;
  ui::LayoutAccessor accessor_;
  std::string unknown_110_;
  std::string unknown_128_;
  int32_t unknown_140_;
  float unknown_144_;
  float unknown_148_;
  uint8_t unknown_14c_[5];
  bool unknown_151_;
  uint8_t unknown_152_[0x4e];
  float unknown_1a0_;
  float unknown_1a4_;
  snd::fnd::WeakHandle voice_;
  uint8_t unknown_1b8_[0x160];
  TitleSystem* title_;
  uint8_t unknown_320_[0x18];
};

static_assert(sizeof(TelopSequence) == 0x338);

// Telops reporting the result of an activity.
class TelopResult : public TelopSequence {
public:
  ~TelopResult() override;

  void Unknown33() override;
  void Unknown46() override;

  virtual int Unknown55() { return 1; }
  virtual void Unknown56() {}
  virtual void Unknown57() {}
  virtual int Unknown58() { return 5; }
  virtual void Unknown59() {}
  virtual void Unknown60() {}
  virtual void Unknown61() {}

  bool Unknown37() override;
  void Unknown38() override;
  void Unknown45() override;
  nn::ui2d::Pane* Unknown53() override;

protected:
  // Hides the motivation gauge, its type is not recovered.
  struct Gauge {
    uint8_t unknown_00_[0xec];
    bool unknown_ec_;
    uint8_t unknown_ed_[3];
    uint64_t unknown_f0_;
  };

  void Unknown175fac0();
  void ShowJudge(int kind, int unknown, bool unknown2);
  void PlayJudge(int kind);
  void ShowHeadline(int unknown, bool unknown2, const std::string_view& mid,
    const std::string_view& se, const std::string_view& animation,
    const std::string_view& type);
  void ShowSkill(const void* data, const char* mid);
  // Copies the alpha and translate of the contents and overlay panes to the
  // numbered parts.
  void Unknown175ff40();

  std::string unknown_338_;
  EffectHandle effect_;
  uint8_t unknown_360_[0x50];
  Gauge* gauge_;
  uint64_t unknown_3b8_;
  std::string unknown_3c0_;
  gameui::GaugeUtil::HonorExpChange counter_;
  std::vector<gameui::GaugeUtil::RelianceExpChange> lines_;
  uint8_t unknown_480_[0x8];
  TitleSystem* sub_title_;
};

}
