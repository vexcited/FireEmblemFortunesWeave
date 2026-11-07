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

  [[gnu::always_inline]] ~ProcSkillReinforceScene() override {
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

  [[gnu::always_inline]] ~ProcSkillEducateScene() override {
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

  [[gnu::always_inline]] ~ProcShowmanScene() override {
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
  [[gnu::always_inline]] ~ProcOpening() override = default;

private:
  uint64_t unknown_b8_;
  std::shared_ptr<void> unknown_c0_;
};

[[gnu::used]] ProcOpening::ProcOpening() = default;

class ProcDivinePerformance : public ProcFacilityScene, public TheaterConst {
public:
  ProcDivinePerformance();
  [[gnu::always_inline]] ~ProcDivinePerformance() override = default;

private:
  std::shared_ptr<void> unknown_b8_;
};

[[gnu::used]] ProcDivinePerformance::ProcDivinePerformance() = default;

class ProcDiningScene : public ProcFacilityScene {
public:
  ProcDiningScene();

  [[gnu::always_inline]] ~ProcDiningScene() override {
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

  [[gnu::always_inline]] ~ProcVolunteerScene() override {
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

  [[gnu::always_inline]] ~ProcTrainingScene() override {
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

  [[gnu::always_inline]] ~ProcTheaterSceneWatch() override {
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
