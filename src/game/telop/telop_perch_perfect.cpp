#pragma GCC visibility push(hidden)
#include "game/telop/telop_sequence.hpp"
#pragma GCC visibility pop

namespace game::telop {

class TelopPerchPerfect : public TelopSequence {
public:
  ~TelopPerchPerfect() override;

  void Unknown21() override;
  const char* GetInAnimation() override { return "In_Perfect"; }
  void Unknown33() override;
  bool Unknown37() override;
  void Unknown39() override;
  bool Unknown41() override;
  void Unknown42() override;
  bool Unknown43() override;
  void Unknown45() override;
  nn::ui2d::Pane* Unknown53() override;

private:
  const void* unknown_338_;
  gameui::GaugeUtil::RelianceExpChange line_;
  EffectHandle effect_;
};

TelopPerchPerfect::~TelopPerchPerfect() {
  if (effect_.IsValid()) {
    effect_.Stop(true);
  }
}

void TelopPerchPerfect::Unknown39() {
  if (effect_.IsValid()) {
    effect_.Stop(true);
  }
}

void TelopPerchPerfect::Unknown45() {
  TelopSequence::Unknown45();
  line_.SetState(2);
}

nn::ui2d::Pane* TelopPerchPerfect::Unknown53() {
  return accessor_.FindPane("L_RelianceExpGet_00");
}

}
