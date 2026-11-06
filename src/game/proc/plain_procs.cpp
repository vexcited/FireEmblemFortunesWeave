#include "game/proc/proc_inst.hpp"

// Sequence steps deriving from ProcInst without members. Only their
// deleting destructors exist, the base destructor is the ProcInst one.
#define GAME_PROC(T) \
  class T : public game::ProcInst { \
  public: \
    T(); \
    ~T() override; \
  }; \
  [[gnu::used]] T::T() = default; \
  T::~T() = default;
#define GAME_NESTED_PROC(O, T) \
  class O::T : public game::ProcInst { \
  public: \
    T(); \
    ~T() override; \
  }; \
  [[gnu::used]] O::T::T() = default; \
  O::T::~T() = default;

#pragma GCC visibility push(hidden)

namespace game {

GAME_PROC(ProcTalk)
GAME_PROC(ProcWaitRelease)

class GameCalendar {
public:
  class ProcNotifyBirthday;
};

GAME_NESTED_PROC(GameCalendar, ProcNotifyBirthday)

class GameSideStoryData {
public:
  class ProcAccept;
};

GAME_NESTED_PROC(GameSideStoryData, ProcAccept)

namespace cmdbtl {

namespace {

GAME_PROC(ProcCmdBtlSeqCaptureComplete)
GAME_PROC(ProcCmdBtlSeqCaptureEscape)
GAME_PROC(ProcCmdBtlSeqLinkRelocation)
GAME_PROC(ProcCmdBtlSeqMind)
GAME_PROC(ProcCmdBtlSeqNewWave)
GAME_PROC(ProcCmdBtlSeqRecord)
GAME_PROC(ProcMapSeqResultExp)
GAME_PROC(ProcMapSeqSkill)
GAME_PROC(ProcReinforceIsmStart)
GAME_PROC(ProcSeqDead)
GAME_PROC(ProcSeqStock)
GAME_PROC(ProcUnitBlazeOff)

}

}

namespace combat {

namespace {

GAME_PROC(WaitProc)

}

}

namespace facility {

namespace {

GAME_PROC(ProcLessonResultSeq)
GAME_PROC(ProcStableBreedingResult)
GAME_PROC(ProcTalk)
GAME_PROC(ProcTempleTrialSeqEnter)
GAME_PROC(ProcTempleTrialSeqExit)
GAME_PROC(ProcWait)

class ProcPerchSceneGaze {
public:
  class ProcReaction;
};

GAME_NESTED_PROC(ProcPerchSceneGaze, ProcReaction)

}

}

namespace gameui {

class DelayImageLoader {
public:
  class ProcDelayImageLoader;
};

GAME_NESTED_PROC(DelayImageLoader, ProcDelayImageLoader)

namespace {

GAME_PROC(ProcInOut)

class ProcCalendar {
public:
  class ProcMoveEdgeToEdge;
};

GAME_NESTED_PROC(ProcCalendar, ProcMoveEdgeToEdge)

}

}

namespace hub {

namespace {

GAME_PROC(ProcEnterDngMenu)
GAME_PROC(ProcSharedSubQuestReward)

}

}

namespace map {

GAME_PROC(ProcRain)

}

namespace menu {

GAME_PROC(ScoutJoinProc)
GAME_PROC(UnitMakeName)

class BasicMenu {
public:
  class ChangeChildCloseProc;
};

GAME_NESTED_PROC(BasicMenu, ChangeChildCloseProc)

class TutorialInfoImpl {
public:
  class ProcDelayChangeRequest;
};

GAME_NESTED_PROC(TutorialInfoImpl, ProcDelayChangeRequest)

namespace {

GAME_PROC(GoldNegotiationSeqProc)
GAME_PROC(ItemNegotiationSeqProc)
GAME_PROC(NoNegotiationSeqProc)
GAME_PROC(ScoutStatusSeqProc)
GAME_PROC(SpecialNegotiationSeqProc)
GAME_PROC(SubQuestNegotiationSeqProc)

}

}

namespace talk {

GAME_PROC(ProcFaceChange)
GAME_PROC(ProcHideUI)
GAME_PROC(ProcKeyWait)
GAME_PROC(ProcSkipFadeWait)
GAME_PROC(ProcWait)

}

namespace zview {

class Sequence {
public:
  class ProcSequence;
};

GAME_NESTED_PROC(Sequence, ProcSequence)

}

namespace {

GAME_PROC(ProcApplet)
GAME_PROC(ProcGainHonorSeq)
GAME_PROC(ProcLoadWait)
GAME_PROC(ProcPreloadWait)
GAME_PROC(ProcSkipWait)
GAME_PROC(ProcSplashSeq)
GAME_PROC(ProcStrapGuide)

}

}

namespace ui {

namespace control {

class AsyncLoadImage {
public:
  class ProcAsyncLoadWait;
};

GAME_NESTED_PROC(AsyncLoadImage, ProcAsyncLoadWait)

}

}

namespace {

GAME_PROC(CameraWaitProc)
GAME_PROC(FadeWaitProc)
GAME_PROC(MotionWaitProc)
GAME_PROC(MoveWaitProc)
GAME_PROC(ObjectPlayStateWaitProc)
GAME_PROC(SeWaitProc)
GAME_PROC(WaitProc)

class ProcTransitionAnim {
public:
  class ProcTransLastUpdate;
};

GAME_NESTED_PROC(ProcTransitionAnim, ProcTransLastUpdate)

}

#pragma GCC visibility pop

#undef GAME_NESTED_PROC
#undef GAME_PROC
