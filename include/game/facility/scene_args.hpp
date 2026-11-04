#pragma once

#include <cstdint>
#include <memory>
#include <vector>

namespace game {

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

class ISortiePlanResult {
public:
  virtual ~ISortiePlanResult() = default;
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

class IVolunteerArgs : public TempleConst {
public:
  virtual ~IVolunteerArgs() = default;
  virtual void Unknown02() = 0;
  virtual void Unknown03() = 0;
  virtual void Unknown04() = 0;
  virtual void Unknown05() = 0;
  virtual void Unknown06() = 0;
  virtual void Unknown07() = 0;
  virtual void Unknown08() = 0;
  virtual void Unknown09() = 0;
  virtual void Unknown10() = 0;
  virtual void Unknown11() = 0;
  virtual void Unknown12() = 0;
};

class VolunteerArgs : public IVolunteerArgs, public FacilityTalkConst,
  public IFacilityDialogueCaller {
public:
  void Unknown02() override;
  void Unknown03() override;
  void Unknown04() override;
  void Unknown05() override;
  void Unknown06() override;
  void Unknown07() override;
  void Unknown08() override;
  void Unknown09() override;
  void Unknown10() override;
  void Unknown11() override;
  void Unknown12() override;
  void GetDialogue(const void* talker, int kind, void* out) override;
  void Update();

private:
  std::vector<map::Unit*> units_;
};

class ITrainingArgs : public TrainingConst {
public:
  virtual ~ITrainingArgs() = default;
  virtual void Unknown02() = 0;
};

class TrainingArgs : public ITrainingArgs, public FacilityTalkConst,
  public IFacilityDialogueCaller {
public:
  void Unknown02() override;
  void GetDialogue(const void* talker, int kind, void* out) override;
  void Update();

  std::vector<map::Unit*> units_;
  uint64_t unknown_28_;
  const SceneLabeled* unknown_30_;
};

}

}
