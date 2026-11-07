#include <new>
#include <string>
#include <string_view>

#include "as/script_context.hpp"
#include "game/game_hub_data.hpp"
#include "game/hub/object.hpp"
#include "game/script/script_string.hpp"
#include "math/vec3.hpp"

// The natives of the hub::object script namespace and the behaviors of the
// ObjectHandle script type. Each native opens the script block, then works on
// the object while the handle still names one.
namespace game::script::hub::object {

using game::hub::Object;
using game::hub::ObjectHandle;
using game::hub::ObjectManager;

// The script manager of as/script_context.hpp, read through the global offset
// table by these natives.
extern as::ScriptManager* g_script_manager;

// Some natives read the instances through the global offset table.
template<typename T>
extern T* g_instance;

#pragma GCC visibility push(hidden)

namespace {

[[gnu::always_inline]] inline as::ScriptContext* GetCurrentContext() {
  as::ScriptThread* thread =
    g_script_manager->GetThread(as::g_thread_info->GetIndex());
  return thread != nullptr ? thread->GetContext() : nullptr;
}

// The second lookup of the waiting natives skips the null check.
[[gnu::always_inline]] inline as::ScriptContext* GetRunningContext() {
  return g_script_manager->GetThread(as::g_thread_info->GetIndex())
    ->GetContext();
}

[[gnu::always_inline]] inline void OpenBlock() {
  as::ScriptContext* context = GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

[[gnu::always_inline]] inline Object* Open(const ObjectHandle& handle) {
  OpenBlock();
  return handle.Get();
}

}

// The behaviors of the script type.
void Construct(void* memory) {
  new (memory) ObjectHandle();
}

void CopyConstruct(const ObjectHandle& other, void* memory) {
  new (memory) ObjectHandle(other);
}

void Destruct(ObjectHandle* self) {
  self->~ObjectHandle();
}

ObjectHandle& Assign(ObjectHandle* self, const ObjectHandle& other) {
  return *self = other;
}

bool Equals(const ObjectHandle* self, const ObjectHandle& other) {
  return *self == other;
}

ObjectHandle GetHandleLabel(const as::string& label) {
  OpenBlock();
  return ObjectHandle(ObjectManager::GetInstance()->FindLabel(label));
}

ObjectHandle GetHandleGlobalHash(uint64_t globalHash) {
  OpenBlock();
  return ObjectHandle(
    ObjectManager::GetInstance()->FindGlobalHash(globalHash));
}

void Destroy(ObjectHandle handle) {
  if (Object* object = Open(handle)) {
    object->Destroy();
    if (game::GameHubData::ObjectState* state =
      g_instance<game::GameHubData>->FindObjectState(object)) {
      state->exists = false;
    }
  }
}

void SetActive(ObjectHandle handle, bool isActive) {
  if (Object* object = Open(handle)) {
    object->SetActive(isActive);
  }
}

bool IsActive(ObjectHandle handle) {
  Object* object = Open(handle);
  return object != nullptr && object->IsActive();
}

void SetVisible(ObjectHandle handle, bool isVisible) {
  if (Object* object = Open(handle)) {
    object->SetVisible(isVisible);
  }
}

bool IsVisible(ObjectHandle handle) {
  Object* object = Open(handle);
  return object != nullptr && object->IsVisible();
}

uint64_t GetGlobalHash(ObjectHandle handle) {
  Object* object = Open(handle);
  return object != nullptr ? object->GetGlobalHash() : 0;
}

void SetPos(ObjectHandle handle, const math::Vec3& pos) {
  if (Object* object = Open(handle)) {
    object->SetPosition(pos);
  }
}

math::Vec3 GetPos(ObjectHandle handle) {
  Object* object = Open(handle);
  return object != nullptr && object->GetPosition().has_value() ?
    *object->GetPosition() : math::Vec3::Zero();
}

void SetRot(ObjectHandle handle, const math::Vec3& rot) {
  if (Object* object = Open(handle)) {
    object->SetRotation(rot);
  }
}

math::Vec3 GetRot(ObjectHandle handle) {
  Object* object = Open(handle);
  return object != nullptr && object->GetRotation().has_value() ?
    *object->GetRotation() : math::Vec3::Zero();
}

void SetScale(ObjectHandle handle, const math::Vec3& scale) {
  if (Object* object = Open(handle)) {
    object->SetScale(scale);
  }
}

math::Vec3 GetScale(ObjectHandle handle) {
  Object* object = Open(handle);
  return object != nullptr && object->GetScale().has_value() ?
    *object->GetScale() : math::Vec3::One();
}

void PlayAnim(ObjectHandle handle, const as::string& animName) {
  if (Object* object = Open(handle)) {
    object->PlayAnim(animName);
  }
}

void PlayAnimEnd(ObjectHandle handle, const as::string& animName) {
  if (Object* object = Open(handle)) {
    object->PlayAnimEnd(animName);
  }
}

bool IsPlayingAnim(ObjectHandle handle) {
  Object* object = Open(handle);
  return object != nullptr && object->IsPlayingAnim();
}

void WaitPlayingAnim(ObjectHandle handle) {
  if (Object* object = Open(handle)) {
    const bool playing = object->IsPlayingAnim();
    as::ScriptContext* context = GetCurrentContext();
    if (playing) {
      context->GetRunner()->SetBlockState(0);
      return;
    }
    context->GetRunner()->SetBlockState(2);
    context->ClearCallback();
  }
}

void EnableDone(ObjectHandle handle) {
  if (Object* object = Open(handle)) {
    object->EnableDone();
  }
}

void PlayDone(ObjectHandle handle) {
  if (Object* object = Open(handle)) {
    if (game::hub::ObjectDone* done = object->GetDone()) {
      done->Play();
    }
  }
}

void PlayDoneIdle(ObjectHandle handle) {
  if (Object* object = Open(handle)) {
    if (game::hub::ObjectDone* done = object->GetDone()) {
      done->PlayIdle();
    }
  }
}

bool IsPlayingDone(ObjectHandle handle) {
  Object* object = Open(handle);
  if (object == nullptr) {
    return false;
  }
  game::hub::ObjectDone* done = object->GetDone();
  return done != nullptr && done->GetObject()->IsPlayingAnim();
}

bool IsCompletedDone(ObjectHandle handle) {
  Object* object = Open(handle);
  if (object == nullptr) {
    return false;
  }
  game::hub::ObjectDone* done = object->GetDone();
  return done != nullptr && done->IsCompleted();
}

void WaitCompletedDone(ObjectHandle handle) {
  if (Object* object = Open(handle)) {
    game::hub::ObjectDone* done = object->GetDone();
    if (done == nullptr || done->IsCompleted()) {
      as::ScriptContext* context = GetCurrentContext();
      context->GetRunner()->SetBlockState(2);
      context->ClearCallback();
      return;
    }
    GetRunningContext()->GetRunner()->SetBlockState(0);
  }
}

void SetAlphaIn(ObjectHandle handle, float sec) {
  if (Object* object = Open(handle)) {
    object->SetAlphaIn(sec);
  }
}

void SetAlphaOut(ObjectHandle handle, float sec) {
  if (Object* object = Open(handle)) {
    object->SetAlphaOut(sec);
  }
}

math::Vec3 GetSmoothPoint3(const uint64_t id, const float rate01) {
  OpenBlock();
  const game::zview::SmoothPath* path =
    g_instance<ObjectManager>->FindSmoothPoint3(id);
  if (path != nullptr && path->count() >= 2) {
    // The original copies the point out of a temporary.
    const math::Vec3& point = path->Get(rate01);
    return point;
  }
  return math::Vec3::Zero();
}

void CreateSmoothPoint3(const uint64_t id, const math::Vec3& p0,
  const math::Vec3& p1, const math::Vec3& p2) {
  game::zview::SmoothPath& path =
    g_instance<ObjectManager>->CreateSmoothPoint3(id);
  path.Clear();
  path.SetRound(false);
  game::zview::SmoothPathWayPoint* first = path.Add();
  game::zview::SmoothPathWayPoint* second = path.Add();
  game::zview::SmoothPathWayPoint* third = path.Add();
  first->SetPosition(p0);
  second->SetPosition(p1);
  third->SetPosition(p2);
}

void BindDngBanquet(ObjectHandle handle) {
  as::ScriptContext* context = as::GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

void SetRunAccessScript(ObjectHandle handle, const std::string& script) {
  if (Object* object = Open(handle)) {
    object->SetRunAccessScript(script.c_str());
  }
}

void SetRunAccessScript(ObjectHandle handle, const std::string& script,
  const std::string& arg1) {
  if (Open(handle) != nullptr) {
    std::vector<std::string> args;
    args.push_back(arg1.c_str());
    handle.Get()->SetRunAccessScript(script.c_str(), args);
  }
}

void SetRunAccessScript(ObjectHandle handle, const std::string& script,
  const std::string& arg1, const std::string& arg2) {
  if (Open(handle) != nullptr) {
    std::vector<std::string> args;
    args.push_back(arg1.c_str());
    args.push_back(arg2.c_str());
    handle.Get()->SetRunAccessScript(script.c_str(), args);
  }
}

#pragma GCC visibility pop

}
