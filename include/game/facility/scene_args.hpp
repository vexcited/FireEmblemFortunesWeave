#pragma once

#include <cstdint>
#include <memory>
#include <vector>

namespace game {

struct TempleData;

namespace map {

class Unit;

}

class FlavaConst {};
class TempleConst : public FlavaConst {};
class TheaterConst : public FlavaConst {};
class ThermaeConst {};
class TrainingConst {};
class FacilityTalkConst {};

class IFacilityDialogueCaller {
public:
  virtual void GetDialogue(const void* talker, int kind, void* out) = 0;
};

// One trainee and the values the training gives it.
struct TrainingEntry {
  const map::Unit* unit;
  int32_t unknown_08;
  uint8_t unknown_0c[0x4e];
  uint8_t unknown_5a;
};

struct TrainingEntryOption {
  uint16_t unknown_00;
  uint8_t unknown_02;
};

void SetupTrainingEntry(void* out, const TrainingEntry* entry,
  const TrainingEntryOption& option);

class ISortiePlanResult {
public:
  virtual ~ISortiePlanResult() = default;
  virtual void Clear() = 0;
  virtual void Unknown04() = 0;
  virtual void Unknown05() = 0;
  virtual void Unknown06(TrainingEntry* out, const map::Unit* unit) = 0;
};

namespace facility {

struct SceneNamed {
  uint8_t unknown_00_[0x8];
  const char* name_;
};

struct SceneLabeled {
  uint8_t unknown_00_[0x20];
  const char* label_;
};

struct PerchArgs {
  const SceneLabeled* unknown_00_;
};

struct StableArgs {
  const SceneLabeled* unknown_00_;
};

struct SkillReinforceArgs {
  const SceneNamed* unit_;
};

struct SkillEducateArgs {
  const SceneNamed* unit_;
};

class TheaterActArgs;

class SceneConst {};
class DiningConst : public FlavaConst {};

class DiningArgs : public DiningConst, public SceneConst,
  public FacilityTalkConst, public IFacilityDialogueCaller {
public:
  void GetDialogue(const void* talker, int kind, void* out) override;
  void Update();

  std::vector<map::Unit*> units_;
  uint64_t unknown_20_;
  const SceneNamed* recipe_;
};

class ThermaeArgs : public ThermaeConst, public FacilityTalkConst,
  public IFacilityDialogueCaller {
public:
  void GetDialogue(const void* talker, int kind, void* out) override;
  void Update();

private:
  std::vector<map::Unit*> units_;
  uint64_t unknown_20_;
  std::vector<map::Unit*> unknown_28_;
  std::vector<map::Unit*> unknown_40_;
};

class TheaterWatchArgs : public TheaterConst, public IFacilityDialogueCaller {
public:
  void GetDialogue(const void* talker, int kind, void* out) override;
  void Update();

private:
  std::vector<map::Unit*> units_;
};

// Pair of values reset to minus one, their meaning is unknown.
struct VolunteerPair {
  int32_t first;
  int32_t second;
};

class IVolunteerArgs : public TempleConst {
public:
  virtual ~IVolunteerArgs() = default;
  virtual void Setup() = 0;
  virtual void Clear() = 0;
  virtual void Unknown04() = 0;
  virtual const std::vector<map::Unit*>& GetUnits() = 0;
  virtual const TempleData* GetTemple() = 0;
  virtual uint8_t GetResult() = 0;
  virtual const VolunteerPair& Unknown08() = 0;
  virtual int Unknown09() = 0;
  virtual const VolunteerPair& Unknown10() = 0;
  virtual void Reset() = 0;
  virtual void Unknown12() = 0;
};

class VolunteerArgs : public IVolunteerArgs, public FacilityTalkConst,
  public IFacilityDialogueCaller {
public:
  void Setup() override;

  void Clear() override {
    units_.clear();
    temple_ = nullptr;
    Reset();
  }

  void Unknown04() override;
  const std::vector<map::Unit*>& GetUnits() override { return units_; }
  const TempleData* GetTemple() override { return temple_; }
  uint8_t GetResult() override { return result_; }
  const VolunteerPair& Unknown08() override { return unknown_34_; }
  int Unknown09() override;
  const VolunteerPair& Unknown10() override { return unknown_3c_; }

  void Reset() override {
    result_ = 0;
    unknown_48_ = 0;
    unknown_34_ = {-1, -1};
    unknown_3c_ = {-1, -1};
  }

  void Unknown12() override;
  void GetDialogue(const void* talker, int kind, void* out) override;
  void Update();

private:
  std::vector<map::Unit*> units_;
  const TempleData* temple_;
  uint8_t result_;
  VolunteerPair unknown_34_;
  VolunteerPair unknown_3c_;
  uint64_t unknown_48_;
};

// Volunteer arguments of the sortie plan, without units.
class SortiePlanVolunteerArgs : public IVolunteerArgs {
public:
  void Setup() override;

  void Clear() override {
    temple_ = nullptr;
    Reset();
  }

  void Unknown04() override;
  const std::vector<map::Unit*>& GetUnits() override;
  const TempleData* GetTemple() override { return temple_; }
  uint8_t GetResult() override { return result_; }
  const VolunteerPair& Unknown08() override;
  int Unknown09() override;
  const VolunteerPair& Unknown10() override { return unknown_14_; }

  void Reset() override {
    result_ = 0;
    unknown_14_ = {-1, -1};
  }

  void Unknown12() override;

private:
  const TempleData* temple_;
  uint8_t result_;
  VolunteerPair unknown_14_;
};

class ITrainingArgs : public TrainingConst {
public:
  virtual ~ITrainingArgs() = default;
  virtual void Unknown02(void* out, int index) = 0;
};

class TrainingArgs : public ITrainingArgs, public FacilityTalkConst,
  public IFacilityDialogueCaller {
public:
  void Unknown02(void* out, int index) override;
  void GetDialogue(const void* talker, int kind, void* out) override;
  void Update();

  std::vector<map::Unit*> units_;
  uint64_t unknown_28_;
  const SceneLabeled* unknown_30_;
  uint8_t unknown_38_[0x18];
  TrainingEntry entries_[2];
};

// Results owned by the sortie plan training arguments, only their virtual
// destructor is known.
class SortiePlanResult {
public:
  virtual ~SortiePlanResult();
};

class SortiePlanTrainingArgs : public ITrainingArgs, public ISortiePlanResult {
public:
  void Unknown02(void* out, int index) override;

  void Clear() override {
    entries_.clear();
    for (SortiePlanResult* result : results_) {
      delete result;
    }
    results_.clear();
    kind_ = 0;
  }

  void Unknown04() override;
  void Unknown05() override;
  void Unknown06(TrainingEntry* out, const map::Unit* unit) override;

private:
  std::vector<TrainingEntry> entries_;
  std::vector<SortiePlanResult*> results_;
  uint8_t kind_;
};

class SortiePlanBottomUpArgs : public ITrainingArgs, public ISortiePlanResult {
public:
  void Unknown02(void* out, int index) override;

  void Clear() override {
    entries_.clear();
    for (SortiePlanResult* result : results_) {
      delete result;
    }
    results_.clear();
    count_ = 1;
  }

  void Unknown04() override;
  void Unknown05() override;
  void Unknown06(TrainingEntry* out, const map::Unit* unit) override;

private:
  std::vector<TrainingEntry> entries_;
  std::vector<SortiePlanResult*> results_;
  int32_t count_;
};

}

}
