#include "world/manager.hpp"

extern "C" void* memcpy(void* destination, const void* source, size_t size);

namespace fw::world {

struct SceneOwner {
  unsigned char unknown_00[0x30];
  uint8_t active;
  unsigned char unknown_31[0xbf];
  uint64_t sequence;
};

struct PendingRender {
  unsigned char unknown_00[0x80];
  uint64_t ticket;
  unsigned char event[8];
};

struct RenderWork {
  unsigned char unknown_00[0xe0];
  PendingRender* pending;
  uint64_t ticket;
};

struct HourState {
  unsigned char unknown_00[0x24];
  int32_t hour;
  unsigned char unknown_28[8];
};

struct Scene {
  unsigned char unknown_00[0x10];
  SceneOwner* owner;
  processing::SharedControl* owner_control;
  unsigned char unknown_20[0x58];
  unsigned char transform_parameters[0x18];
  RenderWork* render_work;
  unsigned char unknown_98[0x60];
  HourState first_time;
  HourState second_time;
  uint8_t use_second_time;
  unsigned char unknown_159[7];
  uint8_t use_first_time;
};

struct TransitionItem {
  unsigned char unknown_00[0xf0];
  uint32_t state;
};

struct TransitionNode {
  TransitionNode* next;
  unsigned char unknown_08[0x20];
  TransitionItem* item;
};

struct TransitionRenderState {
  unsigned char unknown_00[0x680];
  uint8_t requested;
  uint8_t unknown_681;
  uint8_t ready;
  unsigned char unknown_683[9];
  uint32_t mode;
};

struct TransitionOwner {
  unsigned char unknown_00[0xb8];
  TransitionRenderState* render;
  unsigned char unknown_c0[0x21];
  uint8_t requested;
};

struct Transition {
  TransitionOwner* owner;
  unsigned char unknown_08[0x51];
  uint8_t ready;
  unsigned char unknown_5a[6];
  TransitionItem* first;
  unsigned char unknown_68[0x10];
  TransitionNode* additional;
};

struct TimeRequest {
  uint32_t kind;
  uint32_t unknown_04;
  text::String name;
  uint32_t flags;
};

static_assert(sizeof(Transform) == 64);
static_assert(offsetof(SceneOwner, sequence) == 0xf0);
static_assert(offsetof(Scene, render_work) == 0x90);
static_assert(offsetof(Scene, first_time) == 0xf8);
static_assert(offsetof(Scene, second_time) == 0x128);
static_assert(offsetof(Scene, use_first_time) == 0x160);
static_assert(offsetof(Transition, ready) == 0x59);
static_assert(offsetof(Transition, first) == 0x60);
static_assert(offsetof(Transition, additional) == 0x78);
static_assert(offsetof(TransitionOwner, requested) == 0xe1);
static_assert(offsetof(TransitionRenderState, mode) == 0x68c);
static_assert(offsetof(TimeRequest, name) == 8);

void UpdateTransitionItem(TransitionItem* item);
void UpdateController(void* controller);
uint32_t ControllerReady(void* controller);
processing::SharedControl* LockWeak(processing::SharedControl* control);
void UpdateScene(Scene* scene);
void SetTime(Transition* transition, TimeRequest* request);
void UpdateComponents(Components* components);
void UpdateGraphics(Scene* scene, Camera** camera);
void PrepareRender(
  RenderWork* work, const Transform* transform, const void* parameters,
  float parameter
);
void WaitLightEvent(void* event);
[[noreturn]] void ComponentLengthError();
[[noreturn]] void GroupLengthError();
[[noreturn]] void AllocationSizeError();
extern const char g_day_name[];
extern const char g_night_name[];

namespace {

void Free(void* pointer) {
  memory::g_heap_manager->GetAllocator(0).Free(pointer);
}

void* Allocate(size_t size) {
  return memory::g_heap_manager->Allocate(size, 16, 0);
}

void DrainRemoved(Components* components) {
  Component** first = components->removed_begin;
  Component** last = components->removed_end;

  if (first != last) {
    do {
      Component* component = *first++;

      if (component != nullptr) {
        component->vtable->destroy(component);
      }
    } while (first != last);

    first = components->removed_begin;
  }

  components->removed_end = first;
}

bool TransitionComplete(Transition* transition) {
  if (transition == nullptr || transition->first == nullptr ||
      transition->first->state != 5) {
    return false;
  }

  for (TransitionNode* node = transition->additional; node != nullptr;
       node = node->next) {
    if (node->item->state != 5) {
      return false;
    }
  }

  return true;
}

void Release(processing::SharedControl* control) {
  if (__atomic_fetch_sub(&control->shared_owners, uint64_t{1},
                         __ATOMIC_ACQ_REL) == 0) {
    control->vtable->destroy_object(control);
    processing::ReleaseWeak(control);
  }
}

void CopyGroup(ComponentGroup* target, const ComponentGroup* source) {
  target->key = source->key;
  target->begin = nullptr;
  target->end = nullptr;
  target->capacity_end = nullptr;
  uintptr_t bytes = reinterpret_cast<uintptr_t>(source->end) -
                    reinterpret_cast<uintptr_t>(source->begin);

  if (bytes == 0) {
    return;
  }

  if (bytes >> 63) {
    ComponentLengthError();
  }

  auto** allocation = static_cast<Component**>(Allocate(bytes));
  target->begin = allocation;
  target->capacity_end = reinterpret_cast<Component**>(
    reinterpret_cast<uintptr_t>(allocation) + bytes
  );
  memcpy(allocation, source->begin, bytes);
  target->end = target->capacity_end;
}

}

void Components::Rebuild() {
  if (dirty != 1) {
    return;
  }

  ComponentGroup* destination = cached_begin;

  for (ComponentGroup* group = cached_end; group != destination;) {
    --group;

    if (group->begin != nullptr) {
      group->end = group->begin;
      Free(group->begin);
    }
  }

  cached_end = destination;
  ComponentGroup** first = source_begin;
  ComponentGroup** last = source_end;

  for (; first != last; ++first) {
    ComponentGroup* source = *first;

    if (reinterpret_cast<uintptr_t>(destination) <
        reinterpret_cast<uintptr_t>(cached_capacity_end)) {
      CopyGroup(destination, source);
      cached_end = ++destination;
      continue;
    }

    ComponentGroup* previous = cached_begin;
    uintptr_t used_bytes = reinterpret_cast<uintptr_t>(destination) -
                           reinterpret_cast<uintptr_t>(previous);
    uintptr_t count = static_cast<int64_t>(used_bytes) >> 5;
    uintptr_t required = count + 1;

    if (required >> 59) {
      GroupLengthError();
    }

    uintptr_t capacity_bytes =
      reinterpret_cast<uintptr_t>(cached_capacity_end) -
      reinterpret_cast<uintptr_t>(previous);
    uintptr_t capacity = static_cast<int64_t>(capacity_bytes) >> 4;

    if (capacity < required) {
      capacity = required;
    }

    if (capacity_bytes >= 0x7fffffffffffffe0) {
      capacity = 0x7ffffffffffffff;
    }

    if (capacity >> 59) {
      AllocationSizeError();
    }

    auto* allocation = static_cast<ComponentGroup*>(Allocate(capacity * 32));
    ComponentGroup* inserted = allocation + count;
    CopyGroup(inserted, source);
    ComponentGroup* moved = allocation;

    for (ComponentGroup* group = previous; group != destination; ++group) {
      moved->key = group->key;
      moved->begin = group->begin;
      moved->end = group->end;
      moved->capacity_end = group->capacity_end;
      group->begin = nullptr;
      group->end = nullptr;
      group->capacity_end = nullptr;
      ++moved;
    }

    for (ComponentGroup* group = previous; group != destination; ++group) {
      if (group->begin != nullptr) {
        group->end = group->begin;
        Free(group->begin);
      }
    }

    if (previous != destination) {
      previous = cached_begin;
    }

    destination = inserted + 1;
    cached_begin = allocation;
    cached_end = destination;
    cached_capacity_end = allocation + capacity;

    if (previous != nullptr) {
      Free(previous);
    }
  }

  dirty = 0;
}

void Manager::EarlyUpdate() {
  if (begin == end || end[-1] == nullptr) {
    return;
  }

  Components* components = end[-1]->components;
  DrainRemoved(components);
  components->Rebuild();
  ComponentGroup* first = components->cached_begin;
  ComponentGroup* last = components->cached_end;

  for (; first != last; ++first) {
    Component** item = first->begin;
    Component** limit = first->end;

    for (; item != limit; ++item) {
      Component* component = *item;
      component->vtable->early_update(component);
    }
  }
}

void Manager::Main() {
  if (begin == end || end[-1] == nullptr) {
    return;
  }

  World* world = end[-1];
  Transition* transition = world->transition;

  if (transition != nullptr) {
    if (transition->first != nullptr) {
      UpdateTransitionItem(transition->first);
    }

    for (TransitionNode* node = transition->additional; node != nullptr;
         node = node->next) {
      UpdateTransitionItem(node->item);
    }

    if ((transition->ready & 1) == 0) {
      if (TransitionComplete(transition)) {
        transition->ready = 1;
        transition->owner->requested = 1;
        transition->owner->render->requested = 1;
        transition->owner->render->mode = 3;
        transition->owner->render->ready = 0;
      }
      else {
        transition->ready = 0;
      }
    }
  }

  if (world->controller != nullptr) {
    UpdateController(world->controller);
  }

  Scene* scene = world->scene;

  if (scene != nullptr) {
    processing::SharedControl* control = scene->owner_control;

    if (control != nullptr) {
      SceneOwner* owner = scene->owner;
      __atomic_fetch_add(&control->weak_owners, uint64_t{1}, __ATOMIC_RELAXED);
      processing::SharedControl* shared = LockWeak(control);
      processing::ReleaseWeak(control);

      if (shared != nullptr) {
        if (owner != nullptr) {
          owner->sequence = world->sequence;
        }

        Release(shared);
      }
    }

    UpdateScene(world->scene);
    World* current = end[-1];

    if ((ControllerReady(current->controller) & 1) != 0 &&
        TransitionComplete(current->transition)) {
      scene = world->scene;
      transition = world->transition;
      HourState* time = &scene->second_time;

      if ((scene->use_first_time & 1) != 0 ||
          (scene->use_second_time & 1) == 0) {
        time = &scene->first_time;
      }

      TimeRequest request;
      request.kind = 0;
      request.flags = 0;
      reinterpret_cast<unsigned char*>(&request.name)[0] = 0;
      reinterpret_cast<unsigned char*>(&request.name)[1] = 0;
      bool day = static_cast<uint32_t>(time->hour % 24 - 6) < 12;
      request.name.Assign(day ? g_day_name : g_night_name);
      SetTime(transition, &request);

      if ((request.name.words[0] & 1) != 0 && request.name.words[2] != 0) {
        Free(reinterpret_cast<void*>(request.name.words[2]));
      }
    }
  }

  if (world->components != nullptr) {
    UpdateComponents(world->components);
  }
}

void Manager::LateUpdate() {
  if (begin == end || end[-1] == nullptr) {
    return;
  }

  World* world = end[-1];

  if ((updating & 1) == 0) {
    updating = 1;
  }

  Scene* scene = world->scene;

  if (scene != nullptr && scene->owner->active == 1) {
    Transform first = world->camera->vtable->first_transform(world->camera);
    Transform second = world->camera->vtable->second_transform(world->camera);
    RenderWork* work = scene->render_work;
    Transform composed;

    for (size_t row = 0; row < 4; ++row) {
      for (size_t lane = 0; lane < 4; ++lane) {
        float value = second.rows[0][lane] * first.rows[row][0];
        value = __builtin_fmaf(second.rows[1][lane], first.rows[row][1], value);
        value = __builtin_fmaf(second.rows[2][lane], first.rows[row][2], value);
        composed.rows[row][lane] = row == 3 ? second.rows[3][lane] + value
                                          : value;
      }
    }

    float parameter = world->camera->vtable->parameter(world->camera);
    PrepareRender(work, &composed, scene->transform_parameters, parameter);
  }

  Components* components = world->components;

  if (components != nullptr) {
    DrainRemoved(components);
    components->Rebuild();
    ComponentGroup* first = components->cached_begin;
    ComponentGroup* last = components->cached_end;

    for (; first != last; ++first) {
      Component** item = first->begin;
      Component** limit = first->end;

      for (; item != limit; ++item) {
        Component* component = *item;
        component->vtable->late_update(component);
      }
    }
  }

  scene = world->scene;

  if (scene != nullptr && scene->owner->active == 1) {
    RenderWork* work = scene->render_work;
    PendingRender* pending = work->pending;

    if (pending != nullptr) {
      if (pending->ticket == work->ticket) {
        WaitLightEvent(pending->event);
      }

      work->pending = nullptr;
      work->ticket = 10000;
    }
  }

  updating = 0;
}

void Manager::GfxUpdate() {
  if (begin != end) {
    World* world = end[-1];

    if (world != nullptr && world->scene != nullptr) {
      UpdateGraphics(world->scene, &world->camera);
    }
  }
}

}
