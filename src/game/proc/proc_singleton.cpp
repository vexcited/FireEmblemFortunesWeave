#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "game/cmdbtl/auto_play.hpp"
#include "game/hub/input.hpp"
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
  \
  private: \
    [[gnu::used]] static constexpr auto kApplyJump = &T::ApplyJump; \
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

class ProcCmdBtlSeqHuman : public ProcJumpableSingleton<
  ProcCmdBtlSeqHuman, CmdBtlSeqHuman::Label
> {
public:
  ProcCmdBtlSeqHuman();

  ~ProcCmdBtlSeqHuman() override {
    AutoPlay::GetInstance()->SetUnknown0a(true);
  }

private:
  [[gnu::used]] static constexpr auto kApplyJump =
    &ProcCmdBtlSeqHuman::ApplyJump;
};

[[gnu::used]] ProcCmdBtlSeqHuman::ProcCmdBtlSeqHuman() = default;

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

class ProcGmapPhaseSeq : public ProcJumpableSingleton<
  ProcGmapPhaseSeq, GmapPhaseSeq::Label
> {
public:
  ProcGmapPhaseSeq();

private:
  [[gnu::used]] static constexpr auto kApplyJump =
    &ProcGmapPhaseSeq::ApplyJump;

  // Mirrors include/game/gmap/proc_gmap_phase_seq.hpp, whose labels clash
  // with the stand-in ones here.
  int command_;
  std::shared_ptr<void> unknown_d8_;
  uint64_t unknown_e8_;
  std::string mid_;
};

[[gnu::used]] ProcGmapPhaseSeq::ProcGmapPhaseSeq() = default;

GAME_PROC_JUMPABLE(ProcGmapSeq, GmapSeq::Label)

class ProcGmapTalkSeq : public ProcJumpableSingleton<ProcGmapTalkSeq, Label> {
public:
  ProcGmapTalkSeq();

private:
  [[gnu::used]] static constexpr auto kApplyJump = &ProcGmapTalkSeq::ApplyJump;

  uint64_t unknown_d0_;
  std::string unknown_d8_;
};

[[gnu::used]] ProcGmapTalkSeq::ProcGmapTalkSeq() = default;

namespace {

GAME_PROC(ProcHeroMove)
GAME_PROC(ProcHeroWarp)

}

}

namespace hub {

class ProcRunFacilityScript : public ProcJumpableSingleton<
  ProcRunFacilityScript, Label
> {
public:
  ProcRunFacilityScript();

  [[gnu::always_inline]] ~ProcRunFacilityScript() override {
    if (input_stopped_ == true) {
      input_stopped_ = false;

      if (Input* input = Input::GetInstance()) {
        input->RestartInput();
      }
    }
  }

private:
  [[gnu::used]] static constexpr auto kApplyJump =
    &ProcRunFacilityScript::ApplyJump;

  bool input_stopped_;
  std::string unknown_d8_;
};

[[gnu::used]] ProcRunFacilityScript::ProcRunFacilityScript() = default;

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

class ProcMapSeqHuman : public ProcJumpableSingleton<
  ProcMapSeqHuman, MapSeqHuman::Label
> {
public:
  ProcMapSeqHuman();

  ~ProcMapSeqHuman() override { Finish(); }

private:
  [[gnu::used]] static constexpr auto kApplyJump = &ProcMapSeqHuman::ApplyJump;

  void Finish();

  std::vector<uint32_t> unknown_d0_;
};

[[gnu::used]] ProcMapSeqHuman::ProcMapSeqHuman() = default;

GAME_PROC_JUMPABLE(ProcMapSeqSortie, MapSeqSortie::Label)
GAME_PROC_JUMPABLE(ProcMapSeqTargetSelect, TargetSelectLabel)

}

}

namespace menu {

namespace {

class TalkSelectSeqProc : public ProcJumpableSingleton<
  TalkSelectSeqProc, TalkSelectSeq::Label
> {
public:
  TalkSelectSeqProc();

private:
  // The talk choices, their container type is not recovered.
  class Choices {
  public:
    ~Choices();
  };

  [[gnu::used]] static constexpr auto kApplyJump =
    &TalkSelectSeqProc::ApplyJump;

  Choices choices_;
};

[[gnu::used]] TalkSelectSeqProc::TalkSelectSeqProc() = default;

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
