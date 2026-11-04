#pragma GCC visibility push(hidden)
#include "game/facility/scene_args.hpp"
#include "game/facility/scene_base.hpp"
#include "game/facility/scene_diff.hpp"
#pragma GCC visibility pop

namespace game::facility {

namespace {

class ProcStayScene : public ProcFacilityScene {
public:
  ProcStayScene();
};

[[gnu::used]] ProcStayScene::ProcStayScene() = default;

class ProcReaction : public ProcFacilityScene {
public:
  ProcReaction();
};

[[gnu::used]] ProcReaction::ProcReaction() = default;

class ProcOpeningCameraWork : public ProcFacilityScene {
public:
  ProcOpeningCameraWork();
};

[[gnu::used]] ProcOpeningCameraWork::ProcOpeningCameraWork() = default;

class ProcSortiePlanVolunteerScene : public ProcFacilityScene {
public:
  ProcSortiePlanVolunteerScene();
};

[[gnu::used]]
ProcSortiePlanVolunteerScene::ProcSortiePlanVolunteerScene() = default;

class ProcSkillReinforceScene : public ProcFacilityScene {
public:
  ProcSkillReinforceScene();

  ~ProcSkillReinforceScene() override {
    SingletonControl<SkillReinforceSceneDiff>::Destroy();
  }

  void StartFade() override;

  virtual void Load() {
    SkillReinforceSceneDiff::GetInstance()->Execute("マップロード");
    SkillReinforceSceneDiff::GetInstance()->Execute("キャラロード");
  }

private:
  uint64_t unknown_b8_;
};

[[gnu::used]] ProcSkillReinforceScene::ProcSkillReinforceScene() = default;

class ProcSkillEducateScene : public ProcFacilityScene {
public:
  ProcSkillEducateScene();

  ~ProcSkillEducateScene() override {
    SingletonControl<SkillReinforceSceneDiff>::Destroy();
  }

  void StartFade() override;

  virtual void Load() {
    SkillReinforceSceneDiff::GetInstance()->Execute("マップロード");
    SkillReinforceSceneDiff::GetInstance()->Execute("キャラロード");
  }

private:
  uint64_t unknown_b8_;
};

[[gnu::used]] ProcSkillEducateScene::ProcSkillEducateScene() = default;

class ProcShowmanScene : public ProcFacilityScene {
public:
  ProcShowmanScene();

  ~ProcShowmanScene() override {
    SingletonControl<ShowmanSceneDiff>::Destroy();
  }

  void StartFade() override;

  virtual void Load() {
    ShowmanSceneDiff::GetInstance()->Execute("ロード");
  }

private:
  uint64_t unknown_b8_;
};

[[gnu::used]] ProcShowmanScene::ProcShowmanScene() = default;

class ProcOpening : public ProcFacilityScene, public TheaterConst {
public:
  ProcOpening();

private:
  uint64_t unknown_b8_;
  std::shared_ptr<void> unknown_c0_;
};

[[gnu::used]] ProcOpening::ProcOpening() = default;

class ProcDivinePerformance : public ProcFacilityScene, public TheaterConst {
public:
  ProcDivinePerformance();

private:
  std::shared_ptr<void> unknown_b8_;
};

[[gnu::used]] ProcDivinePerformance::ProcDivinePerformance() = default;

class ProcDiningScene : public ProcFacilityScene {
public:
  ProcDiningScene();

  ~ProcDiningScene() override {
    SingletonControl<DiningSceneDiff>::Destroy();
  }

  void StartFade() override;

  virtual void Load() {
    DiningSceneDiff::GetInstance()->Execute("ロード");
  }

  virtual void UpdateArgs() { args_.Update(); }

private:
  DiningArgs args_;
};

[[gnu::used]] ProcDiningScene::ProcDiningScene() = default;

class ProcVolunteerScene : public ProcFacilityScene {
public:
  ProcVolunteerScene();

  ~ProcVolunteerScene() override {
    SingletonControl<VolunteerSceneDiff>::Destroy();
  }

  virtual void Load();
  virtual void UpdateArgs() { args_.Update(); }

private:
  VolunteerArgs args_;
};

[[gnu::used]] ProcVolunteerScene::ProcVolunteerScene() = default;

class ProcTrainingScene : public ProcFacilityScene {
public:
  ProcTrainingScene();

  ~ProcTrainingScene() override {
    SingletonControl<TrainingSceneDiff>::Destroy();
  }

  void StartFade() override;

  virtual void Load() {
    TrainingSceneDiff::GetInstance()->Execute("マップロード");
    TrainingSceneDiff::GetInstance()->Execute("キャラロード");
  }

  virtual void UpdateArgs() { args_.Update(); }

private:
  TrainingArgs args_;
};

[[gnu::used]] ProcTrainingScene::ProcTrainingScene() = default;

class ProcTheaterSceneWatch : public ProcFacilityScene {
public:
  ProcTheaterSceneWatch();

  ~ProcTheaterSceneWatch() override {
    SingletonControl<TheaterSceneDiff>::Destroy();
  }

  void StartFade() override;

  virtual void Load() {
    TheaterSceneDiff::GetInstance()->Execute("ロード");
  }

  virtual void UpdateArgs() { args_.Update(); }

private:
  TheaterWatchArgs args_;
};

[[gnu::used]] ProcTheaterSceneWatch::ProcTheaterSceneWatch() = default;

class ProcThermaeScene : public ProcFacilityScene {
public:
  ProcThermaeScene();

  void StartFade() override;
  virtual void Load();
  virtual void UpdateArgs() { args_.Update(); }

private:
  ThermaeArgs args_;
};

[[gnu::used]] ProcThermaeScene::ProcThermaeScene() = default;

}

}
