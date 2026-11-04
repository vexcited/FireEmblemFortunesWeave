#pragma once

#include <stdint.h>

#include <vector>

#include "game/singleton.hpp"

namespace game::gmap {

#pragma GCC visibility push(hidden)

class GmapSituationConst {};

class GmapSituation : public Singleton<GmapSituation>,
  public GmapSituationConst {
public:
  void Initialize() override;
  void Finalize() override;

  void RequestContinueMove() {
    continue_move_ = true;
  }

private:
  std::vector<int> unknown_08_;
  int64_t unknown_20_;
  int unknown_28_;
  int unknown_2c_;
  uint8_t unknown_30_[9];
  bool continue_move_;
  uint8_t unknown_3a_;
  bool unknown_3b_;
};

#pragma GCC visibility pop

}
