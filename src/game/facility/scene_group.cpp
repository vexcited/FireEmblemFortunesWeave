#pragma GCC visibility push(hidden)
#include "game/data/data_files.hpp"
#include "game/facility/scene_base.hpp"
#pragma GCC visibility pop

namespace game::facility {

namespace {

// Groups of scene data files created and released together.
template<typename T>
class GroupBase : public Singleton<T> {
public:
  virtual void Create() = 0;
  virtual void Release() = 0;
};

class CommonGroup : public GroupBase<CommonGroup> {
public:
  CommonGroup();

  ~CommonGroup() override {
    Release();
  }

  void Create() override;

  void Release() final {
    SingletonControl<FacilitySceneVariableFile>::Destroy();
    SingletonControl<FacilitySceneObjectLocationFile>::Destroy();
    SingletonControl<FacilitySceneEffectFile>::Destroy();
    SingletonControl<FacilitySceneMobFile>::Destroy();
    SingletonControl<FacilitySceneCharacterDisposFile>::Destroy();
    SingletonControl<FacilitySceneAppearanceFile>::Destroy();
    SingletonControl<FacilityScenePartVoiceFile>::Destroy();
    SingletonControl<FacilitySceneCharacterResponseFile>::Destroy();
    SingletonControl<FacilitySceneCharacterMotionFile>::Destroy();
    SingletonControl<FacilitySceneObjectFile>::Destroy();
    SingletonControl<FacilitySceneSoundFile>::Destroy();
  }
};

class DisposGroup : public GroupBase<DisposGroup> {
public:
  DisposGroup();

  ~DisposGroup() override {
    Release();
  }

  void Create() override;

  void Release() final {
    SingletonControl<FacilitySceneLocationFile>::Destroy();
    SingletonControl<FacilitySceneMapVariationFile>::Destroy();
    SingletonControl<FacilitySceneMapFile>::Destroy();
  }
};

class CameraGroup : public GroupBase<CameraGroup> {
public:
  CameraGroup();

  ~CameraGroup() override {
    Release();
  }

  void Create() override;

  void Release() final {
    SingletonControl<FacilitySceneCameraWorkFile>::Destroy();
    SingletonControl<FacilitySceneCameraMotionFile>::Destroy();
    SingletonControl<FacilitySceneCameraFile>::Destroy();
  }
};

}

}

namespace game {

// Kept out of the merged globals so each one keeps its own address.
#define GROUP_STATICS(T) \
  template<> \
  [[gnu::used]] facility::T* Singleton<facility::T>::instance_ = nullptr; \
  template<> \
  [[gnu::used]] int Singleton<facility::T>::registered_ = 0;
GROUP_STATICS(CommonGroup)
GROUP_STATICS(DisposGroup)
GROUP_STATICS(CameraGroup)
#undef GROUP_STATICS

}

namespace game::facility {

namespace {

[[gnu::used]] CommonGroup::CommonGroup() = default;
[[gnu::used]] DisposGroup::DisposGroup() = default;
[[gnu::used]] CameraGroup::CameraGroup() = default;

}

void ReleaseGroups() {
  SingletonControl<CommonGroup>::Release();
  SingletonControl<CameraGroup>::Release();
  SingletonControl<DisposGroup>::Release();
}

}
