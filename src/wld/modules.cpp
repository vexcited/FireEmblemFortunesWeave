#pragma GCC visibility push(hidden)
#include "wld/object_module.hpp"
#pragma GCC visibility pop

namespace wld {

int ObjectModule::GetPriority() const {
  return 0;
}

void ObjectModule::Unknown08() {}

void ObjectModule::Unknown09() {}

const char* ClothModule::GetName() const {
  return "ClothModule";
}

int DecalModule::GetPriority() const {
  return 128;
}

const char* DecalModule::GetName() const {
  return "DecalModule";
}

void DecalModule::Unknown09() {
  for (Decal& decal : decals_) {
    decal.resource->valid = false;
  }
}

int ModelModule::GetPriority() const {
  return 128;
}

const char* ModelModule::GetName() const {
  return "ModelModule";
}

void ModelModule::Unknown09() {
  model_->valid = false;
  if (subModel_ != nullptr) {
    subModel_->valid = false;
  }
}

WaterModule::~WaterModule() {}

const char* WaterModule::GetName() const {
  return "WaterModule";
}

int EffectModule::GetPriority() const {
  return 197;
}

const char* EffectModule::GetName() const {
  return "EffectModule";
}

int GroundModule::GetPriority() const {
  return 128;
}

const char* GroundModule::GetName() const {
  return "GroundModule";
}

int LocatorModule::GetPriority() const {
  return 196;
}

const char* LocatorModule::GetName() const {
  return "LocatorModule";
}

int MapAnimModule::GetPriority() const {
  return -1;
}

const char* MapAnimModule::GetName() const {
  return "MapAnimModule";
}

const char* WorldAOModule::GetName() const {
  return "WorldAOModule";
}

int AnimCtrlModule::GetPriority() const {
  return 64;
}

const char* AnimCtrlModule::GetName() const {
  return "AnimCtrlModule";
}

int MapCrowdModule::GetPriority() const {
  return 128;
}

const char* MapCrowdModule::GetName() const {
  return "MapCrowdModule";
}

void MapCrowdModule::Unknown09() {
  crowd_->valid = false;
}

const char* LightAnimModule::GetName() const {
  return "LightAnimModule";
}

const char* MapObjectModule::GetName() const {
  return "MapObjectModule";
}

void MapObjectModule::Unknown08() {
  dirty_ = true;
}

void MapObjectModule::Unknown09() {
  dirty_ = true;
  UpdateStage1();
}

const char* RigidBodyModule::GetName() const {
  return "RigidBody";
}

int DynamicLightModule::GetPriority() const {
  return 200;
}

const char* DynamicLightModule::GetName() const {
  return "DynamicLightModule";
}

void DynamicLightModule::Unknown09() {}

int LightingAnimModule::GetPriority() const {
  return 128;
}

const char* LightingAnimModule::GetName() const {
  return "LightingAnimModule";
}

const char* MaterialAnimModule::GetName() const {
  return "MaterialAnimModule";
}

const char* ShadowCasterModule::GetName() const {
  return "ShadowCasterModule";
}

int AnimLayerCtrlModule::GetPriority() const {
  return 64;
}

const char* AnimLayerCtrlModule::GetName() const {
  return "AnimLayerCtrlModule";
}

int MultiJointAOVModule::GetPriority() const {
  return 255;
}

const char* MultiJointAOVModule::GetName() const {
  return "MultiJointAOVModule";
}

void MultiJointAOVModule::Unknown09() {
  for (Joint& joint : joints_) {
    *joint.dirty = false;
  }
}

InstancedObjectCtrlModule::~InstancedObjectCtrlModule() {}

int InstancedObjectCtrlModule::GetPriority() const {
  return 129;
}

const char* InstancedObjectCtrlModule::GetName() const {
  return "InstancedObjectCtrlModule";
}

int LODModule::GetPriority() const {
  return 120;
}

const char* LODModule::GetName() const {
  return "LODModule";
}

}
