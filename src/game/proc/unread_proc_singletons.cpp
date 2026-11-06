#include "game/proc/proc_singleton.hpp"

namespace game {

// Nothing reads the instance of these sequences, so link time optimization
// dropped its store from their destructors. Each class is declared first
// so that the specialization comes before the destructor is used.
#define GAME_PROC_UNREAD(T) \
  template<> \
  ProcSingleton<T>::~ProcSingleton() {}
#define GAME_PROC_JUMPABLE(T, L) \
  class T : public ProcJumpableSingleton<T, L> { \
  public: \
    T(); \
  \
  private: \
    [[gnu::used]] static constexpr auto kApplyJump = &T::ApplyJump; \
  }; \
  [[gnu::used]] T::T() = default;

namespace cmdbtl {

namespace {

enum Label : int {};

class ProcCmdBtlSeqAI;
class ProcCmdBtlSeqAfterResult;
class ProcCmdBtlSeqCaptureAction;

}

}

GAME_PROC_UNREAD(cmdbtl::ProcCmdBtlSeqAI)
GAME_PROC_UNREAD(cmdbtl::ProcCmdBtlSeqAfterResult)
GAME_PROC_UNREAD(cmdbtl::ProcCmdBtlSeqCaptureAction)

namespace cmdbtl {

namespace {

GAME_PROC_JUMPABLE(ProcCmdBtlSeqAI, Label)
GAME_PROC_JUMPABLE(ProcCmdBtlSeqAfterResult, Label)
GAME_PROC_JUMPABLE(ProcCmdBtlSeqCaptureAction, Label)

}

}

namespace facility {

namespace {

enum Label : int {};
enum ImpressionLabel : int {};
enum ProcurementLabel : int {};

class ProcArenaWatchingSeq;
class ProcClassExaminerSeq;
class ProcImpression;
class ProcIndividualSeq;
class ProcPerchSceneGaze;
class ProcProcurementSeq;
class ProcThermaeSeq;

}

}

GAME_PROC_UNREAD(facility::ProcArenaWatchingSeq)
GAME_PROC_UNREAD(facility::ProcClassExaminerSeq)
GAME_PROC_UNREAD(facility::ProcImpression)
GAME_PROC_UNREAD(facility::ProcIndividualSeq)
GAME_PROC_UNREAD(facility::ProcPerchSceneGaze)
GAME_PROC_UNREAD(facility::ProcProcurementSeq)
GAME_PROC_UNREAD(facility::ProcThermaeSeq)

namespace facility {

namespace {

GAME_PROC_JUMPABLE(ProcArenaWatchingSeq, Label)
GAME_PROC_JUMPABLE(ProcClassExaminerSeq, Label)
GAME_PROC_JUMPABLE(ProcImpression, ImpressionLabel)
GAME_PROC_JUMPABLE(ProcIndividualSeq, Label)
GAME_PROC_JUMPABLE(ProcPerchSceneGaze, Label)
GAME_PROC_JUMPABLE(ProcProcurementSeq, ProcurementLabel)
GAME_PROC_JUMPABLE(ProcThermaeSeq, Label)

}

}

namespace gmap {

namespace GmapCommandSeq {

enum Kind : int {};

}

namespace {

enum Label : int {};

class ProcAnimalSeq;
class ProcGmapAnimalCmdBtlSeq;
class ProcGmapCommandSeq;
class ProcGmapCycleExp;
class ProcGmapDisposTroop;
class ProcGmapGateSeq;

}

class ProcConfirmStartBattleSeq;
class ProcGmapFort;

}

GAME_PROC_UNREAD(gmap::ProcAnimalSeq)
GAME_PROC_UNREAD(gmap::ProcGmapAnimalCmdBtlSeq)
GAME_PROC_UNREAD(gmap::ProcGmapCommandSeq)
GAME_PROC_UNREAD(gmap::ProcGmapCycleExp)
GAME_PROC_UNREAD(gmap::ProcGmapDisposTroop)
GAME_PROC_UNREAD(gmap::ProcGmapGateSeq)
GAME_PROC_UNREAD(gmap::ProcConfirmStartBattleSeq)
GAME_PROC_UNREAD(gmap::ProcGmapFort)

namespace gmap {

namespace {

GAME_PROC_JUMPABLE(ProcAnimalSeq, Label)
GAME_PROC_JUMPABLE(ProcGmapAnimalCmdBtlSeq, Label)
GAME_PROC_JUMPABLE(ProcGmapCommandSeq, GmapCommandSeq::Kind)
GAME_PROC_JUMPABLE(ProcGmapCycleExp, Label)
GAME_PROC_JUMPABLE(ProcGmapDisposTroop, Label)
GAME_PROC_JUMPABLE(ProcGmapGateSeq, Label)

}

GAME_PROC_JUMPABLE(ProcConfirmStartBattleSeq, Label)
GAME_PROC_JUMPABLE(ProcGmapFort, Label)

}

namespace hub {

enum Label : int {};

class ProcRunFacility;

}

GAME_PROC_UNREAD(hub::ProcRunFacility)

namespace hub {

GAME_PROC_JUMPABLE(ProcRunFacility, Label)

}

namespace hub {

namespace {

enum Label : int {};

class ProcHubSeqExit;
class ProcHubSeqMenu;
class ProcHubSeqPlay;

}

}

GAME_PROC_UNREAD(hub::ProcHubSeqExit)
GAME_PROC_UNREAD(hub::ProcHubSeqMenu)
GAME_PROC_UNREAD(hub::ProcHubSeqPlay)

namespace hub {

namespace {

GAME_PROC_JUMPABLE(ProcHubSeqExit, Label)
GAME_PROC_JUMPABLE(ProcHubSeqMenu, Label)
GAME_PROC_JUMPABLE(ProcHubSeqPlay, Label)

}

}

namespace menu {

namespace TalkSelectGiftSeq {

enum Label : int {};

}

namespace {

enum Label : int {};

class ConvergeSeqProc;
class ProcNextSeq;
class ScoutTrySeqProc;
class TalkSelectGiftSeqProc;

}

}

GAME_PROC_UNREAD(menu::ConvergeSeqProc)
GAME_PROC_UNREAD(menu::ProcNextSeq)
GAME_PROC_UNREAD(menu::ScoutTrySeqProc)
GAME_PROC_UNREAD(menu::TalkSelectGiftSeqProc)

namespace menu {

namespace {

GAME_PROC_JUMPABLE(ConvergeSeqProc, Label)
GAME_PROC_JUMPABLE(ProcNextSeq, Label)
GAME_PROC_JUMPABLE(ScoutTrySeqProc, Label)
GAME_PROC_JUMPABLE(TalkSelectGiftSeqProc, TalkSelectGiftSeq::Label)

}

}

// Its label lives in an anonymous namespace nested in the gmap one.
namespace gmap {

namespace {

namespace {

enum Label : int {};
using DestroyMiasmaLabel = Label;

}

class ProcDestroyMiasmaSeq;

}

}

GAME_PROC_UNREAD(gmap::ProcDestroyMiasmaSeq)

namespace gmap {

namespace {

GAME_PROC_JUMPABLE(ProcDestroyMiasmaSeq, DestroyMiasmaLabel)

}

}

#undef GAME_PROC_JUMPABLE
#undef GAME_PROC_UNREAD

}
