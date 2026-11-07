#pragma once

#include <stdint.h>

#include "game/singleton.hpp"

namespace game::gmap {

struct GmapTime;

}

namespace game::cmdbtl {

#pragma GCC visibility push(hidden)

// The ends of the battle the scripts ask for.
class CmdBtlSituation : public Singleton<CmdBtlSituation> {
public:
  void SetComplete() {
    complete_ = true;
  }

  void SetGameOver() {
    game_over_ = true;
  }

  void SetEscape() {
    escape_ = true;
  }

  bool IsLinkLocked() const {
    return link_locked_;
  }

  bool IsBattledWithAttack() const {
    return battled_with_attack_;
  }

private:
  bool complete_;
  bool game_over_;
  uint8_t unknown_0a_;
  bool escape_;
  bool link_locked_;
  uint8_t unknown_0d_[0x17];
  bool battled_with_attack_;
};

// The view of the command battle sequence process.
class ProcCmdBtlSeqView {
public:
  static ProcCmdBtlSeqView* instance_;

  void OpenEventDate(const gmap::GmapTime& time);
};

#pragma GCC visibility pop

}
