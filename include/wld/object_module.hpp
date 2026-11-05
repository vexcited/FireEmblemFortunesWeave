#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

namespace wld {

class Object;

// Modules attached to a world object. The four stage slots default to
// leaving their stage once: the module flags itself and marks the stage
// list of its object as stale.
class ObjectModule {
public:
  virtual ~ObjectModule() = default;

  virtual int GetPriority() const;
  virtual const char* GetName() const = 0;
  virtual void UpdateStage0();
  virtual void UpdateStage1();
  virtual void UpdateStage2();
  virtual void UpdateStage3();
  virtual void Unknown08();
  virtual void Unknown09();

protected:
  struct StageState {
    bool left : 1;
  };

  Object* object_;
  uint8_t unknown10_;
  StageState stages_[4];
};

// A render resource whose byte at 0x20 is cleared when the module is
// invalidated.
struct ModuleResource {
  uint8_t unknown00_[0x20];
  bool valid;
};

class ClothModule : public ObjectModule {
public:
  ~ClothModule() override;
  const char* GetName() const override;
};

class DecalModule : public ObjectModule {
public:
  struct Decal {
    ModuleResource* resource;
    uint8_t unknown08_[0x58];
  };

  ~DecalModule() override;
  int GetPriority() const override;
  const char* GetName() const override;
  void UpdateStage2() override;
  void UpdateStage3() override;
  void Unknown09() override;

private:
  uint8_t unknown15_[0x13];
  std::vector<Decal> decals_;
};

class ModelModule : public ObjectModule {
public:
  ~ModelModule() override;
  int GetPriority() const override;
  const char* GetName() const override;
  void UpdateStage2() override;
  void UpdateStage3() override;
  void Unknown09() override;

private:
  ModuleResource* model_;
  ModuleResource* subModel_;
};

class WaterModule : public ObjectModule {
public:
  ~WaterModule() override;
  const char* GetName() const override;
  void UpdateStage1() override;

private:
  std::weak_ptr<void> owner_;
  bool enabled_;
};

class EffectModule : public ObjectModule {
public:
  ~EffectModule() override;
  int GetPriority() const override;
  const char* GetName() const override;
  void UpdateStage1() override;
  void UpdateStage3() override;
};

class GroundModule : public ObjectModule {
public:
  ~GroundModule() override;
  int GetPriority() const override;
  const char* GetName() const override;
};

class LocatorModule : public ObjectModule {
public:
  ~LocatorModule() override;
  int GetPriority() const override;
  const char* GetName() const override;
  void UpdateStage2() override;
};

class MapAnimModule : public ObjectModule {
public:
  ~MapAnimModule() override;
  int GetPriority() const override;
  const char* GetName() const override;
  void UpdateStage1() override;
};

class WorldAOModule : public ObjectModule {
public:
  ~WorldAOModule() override;
  const char* GetName() const override;
  void UpdateStage3() override;
  void Unknown09() override;
};

class AnimCtrlModule : public ObjectModule {
public:
  ~AnimCtrlModule() override;
  int GetPriority() const override;
  const char* GetName() const override;
  void UpdateStage0() override;
  void UpdateStage2() override;
};

class MapCrowdModule : public ObjectModule {
public:
  ~MapCrowdModule() override;
  int GetPriority() const override;
  const char* GetName() const override;
  void UpdateStage1() override;
  void Unknown09() override;

private:
  ModuleResource* crowd_;
};

class LightAnimModule : public ObjectModule {
public:
  ~LightAnimModule() override;
  const char* GetName() const override;
  void UpdateStage1() override;
};

class MapObjectModule : public ObjectModule {
public:
  ~MapObjectModule() override;
  const char* GetName() const override;
  void UpdateStage1() override;
  void Unknown08() override;
  void Unknown09() override;

private:
  uint8_t unknown15_[0x85];
  bool dirty_;
};

class RigidBodyModule : public ObjectModule {
public:
  ~RigidBodyModule() override;
  const char* GetName() const override;
  void UpdateStage1() override;
};

class DynamicLightModule : public ObjectModule {
public:
  ~DynamicLightModule() override;
  int GetPriority() const override;
  const char* GetName() const override;
  void UpdateStage3() override;
  void Unknown09() override;
};

class LightController {
public:
  void Apply(int light, bool immediate);
};

// Fades named lights toward their target intensity.
class LightingAnimModule : public ObjectModule {
public:
  struct Animation {
    std::string name;
    int light;
    float current;
    float target;
  };

  ~LightingAnimModule() override;
  int GetPriority() const override;
  const char* GetName() const override;
  void UpdateStage1() override;

private:
  uint8_t unknown15_[0x3];
  LightController* lights_;
  std::vector<Animation> animations_;
  float speed_;
};

class MaterialAnimModule : public ObjectModule {
public:
  ~MaterialAnimModule() override;
  const char* GetName() const override;
  void UpdateStage1() override;
};

class ShadowCasterModule : public ObjectModule {
public:
  ~ShadowCasterModule() override;
  const char* GetName() const override;
  void UpdateStage1() override;
};

class AnimLayerCtrlModule : public ObjectModule {
public:
  ~AnimLayerCtrlModule() override;
  int GetPriority() const override;
  const char* GetName() const override;
  void UpdateStage0() override;
  void UpdateStage2() override;
};

class MultiJointAOVModule : public ObjectModule {
public:
  struct Joint {
    bool* dirty;
    uint8_t unknown08_[0x68];
  };

  ~MultiJointAOVModule() override;
  int GetPriority() const override;
  const char* GetName() const override;
  void UpdateStage2() override;
  void UpdateStage3() override;
  void Unknown09() override;

private:
  uint8_t unknown15_[0xb];
  std::vector<Joint> joints_;
};

class InstancedObjectCtrlModule final : public ObjectModule {
public:
  ~InstancedObjectCtrlModule() override;
  int GetPriority() const override;
  const char* GetName() const override;
  void UpdateStage3() override;

private:
  std::weak_ptr<void> owner_;
  std::vector<uint32_t> instances_;
};

class LODModule : public ObjectModule {
public:
  ~LODModule() override;
  int GetPriority() const override;
  const char* GetName() const override;
  void UpdateStage2() override;
  void UpdateStage3() override;
  void Unknown08() override;
  void Unknown09() override;
};

}
