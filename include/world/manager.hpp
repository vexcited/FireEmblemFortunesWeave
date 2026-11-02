#pragma once

#include "task/processing.hpp"

namespace fw::world {

using Float4 = float __attribute__((vector_size(16)));

struct Transform {
  Float4 rows[4];
};

struct Camera;

struct CameraVTable {
  uintptr_t unknown_00[2];
  Transform (*first_transform)(Camera* camera);
  Transform (*second_transform)(Camera* camera);
  uintptr_t unknown_20[3];
  float (*parameter)(Camera* camera);
};

struct Camera {
  CameraVTable* vtable;
};

struct Component;

struct ComponentVTable {
  uintptr_t unknown_00;
  void (*destroy)(Component* component);
  void (*update)(Component* component);
  void (*early_update)(Component* component);
  uintptr_t unknown_20;
  void (*late_update)(Component* component);
};

struct Component {
  ComponentVTable* vtable;
};

struct ComponentGroup {
  uint32_t key;
  uint32_t unknown_04;
  Component** begin;
  Component** end;
  Component** capacity_end;
};

struct Components {
  unsigned char unknown_00[0x20];
  ComponentGroup** source_begin;
  ComponentGroup** source_end;
  ComponentGroup** source_capacity_end;
  ComponentGroup* cached_begin;
  ComponentGroup* cached_end;
  ComponentGroup* cached_capacity_end;
  uint8_t dirty;
  unsigned char unknown_51[7];
  Component** removed_begin;
  Component** removed_end;

  void Rebuild();
};

struct Scene;
struct Transition;

struct World {
  unsigned char unknown_00[0x18];
  Camera* camera;
  uintptr_t unknown_20;
  Scene* scene;
  Components* components;
  void* controller;
  Transition* transition;
  uint32_t sequence;
};

struct Manager {
  unsigned char unknown_00[0x18];
  World** begin;
  World** end;
  World** capacity_end;
  uint8_t updating;

  void EarlyUpdate();
  void Main();
  void LateUpdate();
  void GfxUpdate();
};

static_assert(sizeof(ComponentGroup) == 32);
static_assert(offsetof(Components, cached_begin) == 0x38);
static_assert(offsetof(Components, dirty) == 0x50);
static_assert(offsetof(Components, removed_begin) == 0x58);
static_assert(offsetof(World, scene) == 0x28);
static_assert(offsetof(World, sequence) == 0x48);
static_assert(offsetof(Manager, begin) == 0x18);
static_assert(offsetof(Manager, updating) == 0x30);

}
