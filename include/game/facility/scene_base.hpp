#pragma once

#include <cstdint>

#include "game/proc/proc_inst.hpp"
#include "game/singleton.hpp"
#include "game/sound/se.hpp"

namespace game {

#pragma GCC visibility push(hidden)

// The original manipulates the singleton pointers from outside the classes,
// which the shared template only allows to derived classes.
template<typename T>
class SingletonControl : public Singleton<T> {
public:
  static void Destroy() {
    Singleton<T>::instance_->Finalize();
    delete Singleton<T>::instance_;
    Singleton<T>::instance_ = nullptr;
  }

  // Shared singletons count their users in the registered word.
  static void Release() {
    if (Singleton<T>::instance_ != nullptr &&
        --Singleton<T>::registered_ <= 0) {
      Singleton<T>::instance_->Finalize();
      delete Singleton<T>::instance_;
      Singleton<T>::instance_ = nullptr;
    }
  }
};

#pragma GCC visibility pop

namespace sound {

class BgmPlayer {
public:
  void Stop(const PlayParam& param);
};

}

extern sound::BgmPlayer* g_bgm_player;

namespace facility {

class SceneManager : public Singleton<SceneManager> {
public:
  void Update();
};

struct SceneFade {
  float time;
  bool unknown_04;
};

void StartSceneFade(int unknown, SceneFade fade);
void UpdateSceneSystem();

// Releases the common, camera and dispos groups.
void ReleaseGroups();

class FacilitySceneBase {
public:
  virtual ~FacilitySceneBase() {
    SingletonControl<SceneManager>::Release();
    ReleaseGroups();
  }

  virtual void StartFade() { StartSceneFade(0, {0.5f, true}); }

  virtual void StopBgm() {
    sound::PlayParam param("FadeTime_BGM_Act_Out");
    g_bgm_player->Stop(param);
  }

  virtual void SceneUnknown04() {}
  virtual bool SceneUnknown05() { return false; }
  virtual void SceneUnknown06() {}

  void Detach(ProcInst* proc);

protected:
  int32_t unknown_08_;
  bool unknown_0c_;
  uint8_t unknown_0d_[0xb];
  int32_t unknown_18_;
  bool unknown_1c_;
};

class ProcFacilityScene : public ProcInst, public FacilitySceneBase {
public:
  ~ProcFacilityScene() override {
    Detach(this);
  }

  void Unknown03() override {
    SceneManager::GetInstance()->Update();
    UpdateSceneSystem();
  }

  void Unknown12() override;

  void StartFade() override { StartSceneFade(0, {0.5f, true}); }

  void StopBgm() override {
    sound::PlayParam param("FadeTime_BGM_Act_Out");
    g_bgm_player->Stop(param);
  }
};

}

}
