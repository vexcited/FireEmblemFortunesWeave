#include "game/proc/proc_singleton.hpp"

namespace game {

// The sequences only need their singleton bases here, so empty classes are
// enough to instantiate them. Their constructors are kept so that the
// internal ones are emitted.
#define GAME_PROC(T) \
  class T : public ProcSingleton<T> { \
  public: \
    T(); \
  }; \
  [[gnu::used]] T::T() = default;
#define GAME_PROC_JUMPABLE(T, L) \
  class T : public ProcJumpableSingleton<T, L> { \
  public: \
    T(); \
  }; \
  [[gnu::used]] T::T() = default;

namespace MainSeq {

enum Label : int {};

}

namespace cmdbtl {

namespace CmdBtlSeq {

enum Label : int {};

}

namespace CmdBtlSeqHuman {

enum Label : int {};

}

}

namespace facility {

namespace {

enum Label : int {};
enum LessonLabel : int {};
enum EducateLabel : int {};
enum ReinforceLabel : int {};

}

}

namespace gmap {

namespace GmapPhaseSeq {

enum Label : int {};

}

namespace GmapSeq {

enum Label : int {};

}

namespace {

enum Label : int {};

}

}

namespace hub {

enum Label : int {};

namespace HubSeq {

enum Label : int {};

}

}

namespace map {

enum Label : int {};

namespace MapSeq {

enum Label : int {};

}

namespace MapSeqHuman {

enum Label : int {};

}

namespace MapSeqSortie {

enum Label : int {};

}

namespace {

enum TargetSelectLabel : int {};

}

}

namespace menu {

namespace TalkSelectSeq {

enum Label : int {};

}

}

namespace {

enum Label : int {};

}

namespace cmdbtl {

namespace {

GAME_PROC_JUMPABLE(ProcCmdBtlSeq, CmdBtlSeq::Label)
GAME_PROC_JUMPABLE(ProcCmdBtlSeqHuman, CmdBtlSeqHuman::Label)

}

}

namespace facility {

namespace {

GAME_PROC_JUMPABLE(ProcArenaSeq, Label)
GAME_PROC_JUMPABLE(ProcClassExaminerScene, Label)
GAME_PROC_JUMPABLE(ProcDivinationSeq, Label)
GAME_PROC_JUMPABLE(ProcHotelSeq, Label)
GAME_PROC_JUMPABLE(ProcLessonSeq, LessonLabel)
GAME_PROC_JUMPABLE(ProcPerchScene, Label)
GAME_PROC_JUMPABLE(ProcPerchSeq, Label)
GAME_PROC_JUMPABLE(ProcSkillEducateSeq, EducateLabel)
GAME_PROC_JUMPABLE(ProcSkillReinforceSeq, ReinforceLabel)
GAME_PROC_JUMPABLE(ProcSortiePlanSeq, Label)
GAME_PROC_JUMPABLE(ProcStableSeq, Label)
GAME_PROC_JUMPABLE(ProcTempleSeq, Label)
GAME_PROC_JUMPABLE(ProcTheaterSeq, Label)
GAME_PROC_JUMPABLE(ProcTrainingSeq, Label)
GAME_PROC(ProcBanquetScene)

}

}

namespace gmap {

GAME_PROC_JUMPABLE(ProcGmapEvent, Label)
GAME_PROC_JUMPABLE(ProcGmapMove, Label)
GAME_PROC_JUMPABLE(ProcGmapPhaseSeq, GmapPhaseSeq::Label)
GAME_PROC_JUMPABLE(ProcGmapSeq, GmapSeq::Label)
GAME_PROC_JUMPABLE(ProcGmapTalkSeq, Label)

namespace {

GAME_PROC(ProcHeroMove)
GAME_PROC(ProcHeroWarp)

}

}

namespace hub {

GAME_PROC_JUMPABLE(ProcRunFacilityScript, Label)

namespace {

GAME_PROC_JUMPABLE(ProcHubSeq, HubSeq::Label)
enum Label : int {};
GAME_PROC_JUMPABLE(ProcHubSeqEnter, Label)

}

}

namespace map {

GAME_PROC_JUMPABLE(ProcMapSeqZoomViewer, Label)

namespace {

GAME_PROC_JUMPABLE(ProcMapSeq, MapSeq::Label)
GAME_PROC_JUMPABLE(ProcMapSeqHuman, MapSeqHuman::Label)
GAME_PROC_JUMPABLE(ProcMapSeqSortie, MapSeqSortie::Label)
GAME_PROC_JUMPABLE(ProcMapSeqTargetSelect, TargetSelectLabel)

}

}

namespace menu {

namespace {

GAME_PROC_JUMPABLE(TalkSelectSeqProc, TalkSelectSeq::Label)

}

}

namespace talk {

GAME_PROC(Seq)

}

namespace {

GAME_PROC_JUMPABLE(ProcMainSeq, MainSeq::Label)
GAME_PROC_JUMPABLE(ProcTitleSeq, Label)
GAME_PROC(ProcJobIntroScene)

}

#undef GAME_PROC_JUMPABLE
#undef GAME_PROC

}
