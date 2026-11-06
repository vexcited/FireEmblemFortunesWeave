#include <cstdint>
#include <string>

#include "game/proc/proc_singleton.hpp"

// Sequence steps whose destructors only add to the ProcInst one: the
// singletons clear their instance, the others own a string.
#define GAME_PROC_SINGLETON(T, ...) \
  class T : public ProcSingleton<T> __VA_OPT__(, public __VA_ARGS__) { \
  public: \
    T(); \
  }; \
  [[gnu::used]] T::T() = default;
#define GAME_NESTED_PROC_SINGLETON(O, T) \
  class O::T : public ProcSingleton<O::T> { \
  public: \
    T(); \
  }; \
  [[gnu::used]] O::T::T() = default;
#define GAME_STRING_PROC(T) \
  class T : public ProcInst { \
  public: \
    T(); \
  \
  protected: \
    std::string unknown_98_; \
  }; \
  [[gnu::used]] T::T() = default;
#define GAME_DERIVED_PROC(T, B) \
  class T : public B { \
  public: \
    T(); \
  }; \
  [[gnu::used]] T::T() = default;

namespace game {

#pragma GCC visibility push(hidden)

class AchieveConst {};
class RecallConst {};

GAME_PROC_SINGLETON(ProcAchieve, AchieveConst)

class GameCalendar {
public:
  class ProcCalendarWatcher;
};

GAME_NESTED_PROC_SINGLETON(GameCalendar, ProcCalendarWatcher)

class GameSideStoryData {
public:
  class ProcSideStoryWatcher;
};

GAME_NESTED_PROC_SINGLETON(GameSideStoryData, ProcSideStoryWatcher)

class GameSubquestData {
public:
  class ProcSubquestWatcher;
};

GAME_NESTED_PROC_SINGLETON(GameSubquestData, ProcSubquestWatcher)

namespace {

GAME_PROC_SINGLETON(ProcRecallSeq, RecallConst)

}

namespace cmdbtl {

namespace {

GAME_PROC_SINGLETON(ProcCmdBtlSeqTransferHp)
GAME_PROC_SINGLETON(ProcSeqHpRecoverSeq)

}

}

namespace hub {

namespace {

GAME_PROC_SINGLETON(ProcTimeSlipPerch)

GAME_STRING_PROC(ProcHubTalkOnProgramSeq)
GAME_STRING_PROC(ProcHubTalkWindowSeq)
GAME_STRING_PROC(ProcHubSeqObeliskPerchBase)
GAME_DERIVED_PROC(ProcHubSeqObeliskPerchPart3, ProcHubSeqObeliskPerchBase)
GAME_STRING_PROC(ProcChallengeBase)
GAME_DERIVED_PROC(ProcChallengeBegin, ProcChallengeBase)

}

}

namespace gmap {

class ProcGmapFixedEventSeq : public ProcInst {
public:
  ProcGmapFixedEventSeq();

protected:
  uint8_t unknown_98_[0x18];
  std::string unknown_b0_;
};

[[gnu::used]] ProcGmapFixedEventSeq::ProcGmapFixedEventSeq() = default;

namespace {

GAME_STRING_PROC(ProcSubquestDemoSeq)

}

}

namespace map {

class TrickConst {};

namespace {

GAME_PROC_SINGLETON(ProcUpdate, TrickConst)
GAME_PROC_SINGLETON(ProcFadeTimeSlip)

}

}

namespace menu {

namespace {

GAME_PROC_SINGLETON(UnitMakeDitherAlpha)

}

}

#pragma GCC visibility pop

}

#undef GAME_DERIVED_PROC
#undef GAME_STRING_PROC
#undef GAME_NESTED_PROC_SINGLETON
#undef GAME_PROC_SINGLETON
