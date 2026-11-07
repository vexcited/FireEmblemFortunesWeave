#include "game/game_mode_data.hpp"
#include "game/unit_list_set.hpp"

#pragma GCC visibility push(hidden)
#include "game/facility/facility_seq.hpp"
#include "game/proc/proc_singleton.hpp"
#pragma GCC visibility pop

namespace game {

#pragma GCC visibility push(hidden)

extern const HashedString kVariableHubFacilityForced;

#pragma GCC visibility pop

}

namespace game::facility {

namespace {

enum Label : int {};
enum LessonLabel : int {};
enum EducateLabel : int {};
enum ReinforceLabel : int {};

}

// The perch view index, reset when the sequence ends.
[[gnu::visibility("hidden")]] extern int g_perch_view;

namespace {

#define GAME_FACILITY_SEQ(T, L) \
  class T : public ProcJumpableSingleton<T, L>, public FacilitySeq { \
  public: \
    T(); \
    ~T() override { \
      Leave(); \
    } \
    void Unknown00() override; \
  }; \
  [[gnu::used]] T::T() = default;

GAME_FACILITY_SEQ(ProcStableSeq, Label)
GAME_FACILITY_SEQ(ProcArenaSeq, Label)
GAME_FACILITY_SEQ(ProcTheaterSeq, Label)
GAME_FACILITY_SEQ(ProcTrainingSeq, Label)
GAME_FACILITY_SEQ(ProcSkillEducateSeq, EducateLabel)
GAME_FACILITY_SEQ(ProcSkillReinforceSeq, ReinforceLabel)
GAME_FACILITY_SEQ(ProcHotelSeq, Label)
GAME_FACILITY_SEQ(ProcTempleSeq, Label)

#undef GAME_FACILITY_SEQ

void BuildUnitList(int index, uint8_t kind) {
  UnitListSet::instance_->GetList(index)->Build({kind});
}

void ProcArenaSeq::Unknown00() {
  BuildUnitList(0,
    GameModeData::IsVariableSet(kVariableHubFacilityForced) ? 7 : 5);
}

void ProcTheaterSeq::Unknown00() {
  BuildUnitList(0, 5);
  BuildUnitList(1, 3);
}

void ProcTrainingSeq::Unknown00() {
  BuildUnitList(0, 5);
}

void ProcHotelSeq::Unknown00() {
  BuildUnitList(0, 3);
}

void ProcTempleSeq::Unknown00() {
  BuildTempleUnitLists();
}

class ProcDivinationSeq : public ProcJumpableSingleton<ProcDivinationSeq,
  Label>, public FacilitySeq {
public:
  ProcDivinationSeq();

  ~ProcDivinationSeq() override {
    Leave();
  }
};

[[gnu::used]] ProcDivinationSeq::ProcDivinationSeq() = default;

class ProcPerchSeq : public ProcJumpableSingleton<ProcPerchSeq, Label>,
  public FacilitySeq {
public:
  ProcPerchSeq();

  ~ProcPerchSeq() override {
    g_perch_view = -1;
    Leave();
  }

  void Unknown00() override;
};

[[gnu::used]] ProcPerchSeq::ProcPerchSeq() = default;

// These two list the facility base first.
#define GAME_FACILITY_SEQ(T, L) \
  class T : public FacilitySeq, public ProcJumpableSingleton<T, L> { \
  public: \
    T(); \
    ~T() override { \
      Leave(); \
    } \
  }; \
  [[gnu::used]] T::T() = default;

GAME_FACILITY_SEQ(ProcLessonSeq, LessonLabel)
GAME_FACILITY_SEQ(ProcSortiePlanSeq, Label)

#undef GAME_FACILITY_SEQ

}

}
