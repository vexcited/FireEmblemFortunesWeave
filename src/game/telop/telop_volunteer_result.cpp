// The deleting destructors reach the gauge vtables through the global offset
// table.
#include "game/gameui/gauge_util.hpp"

#pragma GCC visibility push(hidden)
#include "game/facility/scene_args.hpp"
#include "game/telop/telop_sequence.hpp"

namespace game::telop {

class TelopVolunteerResult : public TelopResult {
public:
  [[gnu::always_inline]] ~TelopVolunteerResult() override;

  bool Unknown43() override;
  void Unknown56() override;
  void Unknown57() override;
  int Unknown58() override;
  void Unknown59() override;
  void Unknown61() override;
  virtual int Unknown62() { return 1; }

private:
  facility::IVolunteerArgs* args_;
  uint8_t unknown_498_[0x10];
  gameui::GaugeUtil::MiracleExpChange units_;
};

class TelopSortieVolunteerResult : public TelopVolunteerResult {
public:
  ~TelopSortieVolunteerResult() override;

  int Unknown62() override { return 0; }
};

TelopVolunteerResult::~TelopVolunteerResult() = default;
TelopSortieVolunteerResult::~TelopSortieVolunteerResult() = default;

bool TelopVolunteerResult::Unknown43() {
  return !units_.Update(1);
}

void TelopVolunteerResult::Unknown56() {
  ShowJudge(Unknown58(), unknown_338_.empty(), false);
}

int TelopVolunteerResult::Unknown58() {
  uint8_t result = args_->GetResult();
  if (static_cast<uint8_t>(result - 1) < 3) {
    return result;
  }
  return 5;
}

void TelopVolunteerResult::Unknown59() {
  PlayJudge(Unknown58());
}

void TelopVolunteerResult::Unknown61() {
  units_.Update(2);
}

}

#pragma GCC visibility pop
