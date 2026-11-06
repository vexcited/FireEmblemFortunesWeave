#include <cstdint>

#include "game/proc/proc_inst.hpp"

namespace game::menu {

#pragma GCC visibility push(hidden)

// Second base of the scouting sequences at 0x98, the sequences without own
// members only destroy it and the process.
class ScoutBaseProc {
public:
  ~ScoutBaseProc() {
    if (state_ == 1) {
      state_ = 0;
      active_ = false;
    }
  }

private:
  uint8_t unknown_00_[0x14];
  uint8_t state_;

  static bool active_;
};

bool ScoutBaseProc::active_;

namespace {

class BaseSpecialSeqProc : public ProcInst, public ScoutBaseProc {};

#define GAME_SPECIAL_SEQ(T) \
  class T : public BaseSpecialSeqProc { \
  public: \
    T(); \
  }; \
  [[gnu::used]] T::T() = default;

GAME_SPECIAL_SEQ(BonSeqProc)
GAME_SPECIAL_SEQ(BucSeqProc)
GAME_SPECIAL_SEQ(DieSeqProc)
GAME_SPECIAL_SEQ(FabSeqProc)
GAME_SPECIAL_SEQ(GatSeqProc)
GAME_SPECIAL_SEQ(MajSeqProc)
GAME_SPECIAL_SEQ(SarSeqProc)
GAME_SPECIAL_SEQ(TiaSeqProc)
GAME_SPECIAL_SEQ(TobSeqProc)
GAME_SPECIAL_SEQ(UrsSeqProc)
GAME_SPECIAL_SEQ(VenSeqProc)
GAME_SPECIAL_SEQ(YanSeqProc)
GAME_SPECIAL_SEQ(ZacSeqProc)

#undef GAME_SPECIAL_SEQ

}

#pragma GCC visibility pop

}
