#pragma once

#include <functional>
#include <string>
#include <unordered_map>

#include "game/facility/scene_args.hpp"
#include "game/singleton.hpp"

namespace game::facility {

#pragma GCC visibility push(hidden)

template<typename T>
class SceneDiffBase : public Singleton<T> {
public:
  ~SceneDiffBase() override {
    funcs_.clear();
  }

  // Runs the step registered under this name.
  void Execute(const std::string& name);

protected:
  std::string unknown_08_;
  std::string unknown_20_;
  std::unordered_map<std::string, std::function<void()>> funcs_;
};

class DiningSceneDiff : public SceneDiffBase<DiningSceneDiff> {
public:
  DiningSceneDiff();

  ~DiningSceneDiff() override {
    args_ = nullptr;
  }

  virtual const char* Unknown04();

private:
  const DiningArgs* args_ = nullptr;
};

class VolunteerSceneDiff : public SceneDiffBase<VolunteerSceneDiff> {
public:
  VolunteerSceneDiff();

  ~VolunteerSceneDiff() override {
    args_ = nullptr;
  }

  virtual const char* Unknown04() { return ""; }

private:
  const VolunteerArgs* args_ = nullptr;
};

class PerchSceneDiff : public SceneDiffBase<PerchSceneDiff> {
public:
  PerchSceneDiff();

  ~PerchSceneDiff() override {
    args_ = nullptr;
  }

  virtual const char* Unknown04() { return args_->unknown_00_->label_; }

private:
  const PerchArgs* args_ = nullptr;
};

class TheaterSceneDiff : public SceneDiffBase<TheaterSceneDiff> {
public:
  TheaterSceneDiff();

  ~TheaterSceneDiff() override {
    act_args_ = nullptr;
    watch_args_ = nullptr;
  }

  virtual const char* Unknown04() { return ""; }

private:
  const TheaterActArgs* act_args_ = nullptr;
  const TheaterWatchArgs* watch_args_ = nullptr;
};

class StableSceneDiff : public SceneDiffBase<StableSceneDiff> {
public:
  StableSceneDiff();

  ~StableSceneDiff() override {
    args_ = nullptr;
  }

  virtual const char* Unknown04() { return args_->unknown_00_->label_; }

private:
  const StableArgs* args_ = nullptr;
};

class SkillReinforceSceneDiff
  : public SceneDiffBase<SkillReinforceSceneDiff> {
public:
  SkillReinforceSceneDiff();

  virtual const char* Unknown04();

private:
  const SkillReinforceArgs* reinforce_args_ = nullptr;
  const SkillEducateArgs* educate_args_ = nullptr;
};

class TrainingSceneDiff : public SceneDiffBase<TrainingSceneDiff> {
public:
  TrainingSceneDiff();

  virtual const char* Unknown04() { return args_->unknown_30_->label_; }

private:
  const TrainingArgs* args_ = nullptr;
};

class BanquetSceneDiff : public SceneDiffBase<BanquetSceneDiff> {
public:
  BanquetSceneDiff();

  virtual const char* Unknown04();
};

class ShowmanSceneDiff : public SceneDiffBase<ShowmanSceneDiff> {
public:
  ShowmanSceneDiff();

  virtual const char* Unknown04();
};

#pragma GCC visibility pop

}
