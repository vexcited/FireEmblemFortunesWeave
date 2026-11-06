#include <new>
#include <string>
#include <string_view>

#include "as/script_context.hpp"
#include "game/hub/area_event.hpp"
#include "game/hub/character.hpp"
#include "game/script/script_string.hpp"

// The natives of the hub::character script namespace and the behaviors of
// the CharacterHandle script type. Each native opens the script block, then
// works on the character while the handle still names one.
namespace game::script::hub::character {

using game::hub::Character;
using game::hub::CharacterHandle;

// The script manager of as/script_context.hpp, read through the global offset
// table by these natives.
extern as::ScriptManager* g_script_manager;

#pragma GCC visibility push(hidden)

namespace {

[[gnu::always_inline]] inline as::ScriptContext* GetCurrentContext() {
  as::ScriptThread* thread =
    g_script_manager->GetThread(as::g_thread_info->GetIndex());
  return thread != nullptr ? thread->GetContext() : nullptr;
}

[[gnu::always_inline]] inline void OpenBlock() {
  as::ScriptContext* context = GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

[[gnu::always_inline]] inline Character* Open(const CharacterHandle& handle) {
  OpenBlock();
  return handle.Get();
}

[[gnu::always_inline]] inline void SetFlag(const CharacterHandle& handle,
  uint32_t flag, bool enabled) {
  if (Character* character = Open(handle)) {
    character->SetFlag(flag, enabled);
  }
}

}

// The behaviors of the script type.
void Destruct(CharacterHandle* self) {
  self->~CharacterHandle();
}

void Construct(void* memory) {
  new (memory) CharacterHandle();
}

CharacterHandle& Assign(CharacterHandle* self, const CharacterHandle& other) {
  return *self = other;
}

bool Equals(const CharacterHandle* self, const CharacterHandle& other) {
  return *self == other;
}

void CopyConstruct(const CharacterHandle& other, void* memory) {
  new (memory) CharacterHandle(other.Get());
}

float GetDisposAngle(CharacterHandle handle) {
  Character* character = Open(handle);
  return character != nullptr ? character->GetDisposAngle() : 0.0f;
}

uint64_t GetGlobalHash(CharacterHandle handle) {
  Character* character = Open(handle);
  return character != nullptr ? character->GetGlobalHash() : 0;
}

float GetHeight(CharacterHandle handle) {
  Character* character = Open(handle);
  return character != nullptr ? character->GetModel()->GetHeight() : 0.0f;
}

float GetRadius(CharacterHandle handle) {
  Character* character = Open(handle);
  return character != nullptr ? character->GetModel()->GetRadius() : 0.0f;
}

float GetDt(CharacterHandle handle) {
  Character* character = Open(handle);
  return character != nullptr ?
    character->GetModel()->GetState()->GetDt() : 0.0f;
}

float GetWalkSpeed(CharacterHandle handle) {
  Character* character = Open(handle);
  return character != nullptr ?
    character->GetModel()->GetMover()->GetWalkSpeed() : 0.0f;
}

float GetRunSpeed(CharacterHandle handle) {
  Character* character = Open(handle);
  return character != nullptr ?
    character->GetModel()->GetMover()->GetRunSpeed() : 0.0f;
}

float GetDashSpeed(CharacterHandle handle) {
  Character* character = Open(handle);
  return character != nullptr ?
    character->GetModel()->GetMover()->GetDashSpeed() : 0.0f;
}

// The rotation is kept in radians.
float GetAngle(CharacterHandle handle) {
  Character* character = Open(handle);
  if (character == nullptr) {
    return 0.0f;
  }
  return character->GetModel()->GetMover()->GetTransform()->GetRotY() *
    57.296f;
}

void RestartInitScript(CharacterHandle handle) {
  if (Character* character = Open(handle)) {
    character->RestartInitScript();
  }
}

void ChangeRunContact(CharacterHandle handle) {
  if (Character* character = Open(handle)) {
    character->ChangeRunContact();
  }
}

bool IsIndifference(CharacterHandle handle) {
  Character* character = Open(handle);
  return character != nullptr && character->IsIndifference();
}

void ClearBehaviorStack(CharacterHandle handle) {
  if (Character* character = Open(handle)) {
    character->GetBehavior()->ClearStack();
  }
}

void SetBehaviorRestart(CharacterHandle handle) {
  if (Character* character = Open(handle)) {
    character->GetBehavior()->Restart();
  }
}

void PushBehaviorMove(CharacterHandle handle, const math::Vec3& targetPos,
  float speed) {
  if (Character* character = Open(handle)) {
    character->GetBehavior()->PushMove(targetPos, speed);
  }
}

void SetupActiveAccessDelay(CharacterHandle handle, bool isActive) {
  if (Character* character = Open(handle)) {
    character->SetupActiveAccessDelay(isActive);
  }
}

void DetachPath(CharacterHandle handle) {
  if (Character* character = Open(handle)) {
    character->GetPath()->Detach();
  }
}

void AttachPath(CharacterHandle handle, const std::string& filePath) {
  if (Character* character = Open(handle)) {
    character->GetPath()->Attach(filePath.c_str());
  }
}

void RefreshControl(CharacterHandle handle) {
  if (Character* character = Open(handle)) {
    character->GetModel()->RefreshControl();
  }
}

// Characters without a handle count as having a model.
bool HasModel(CharacterHandle handle) {
  Character* character = Open(handle);
  return character == nullptr ||
    character->GetModel()->GetState()->HasModel();
}

bool IsPauseScript(CharacterHandle handle) {
  Character* character = Open(handle);
  return character == nullptr ||
    !character->GetModel()->GetState()->IsPaused();
}

void HeadLookToPlayer(CharacterHandle handle) {
  SetFlag(handle, Character::kFlagHeadLookToPlayer, true);
}

void EnableIndifference(CharacterHandle handle) {
  SetFlag(handle, Character::kFlagIndifference, true);
}

void CmdbtlGuset(CharacterHandle handle) {
  SetFlag(handle, Character::kFlagCmdbtlGuest, true);
}

void SetForceShow(CharacterHandle handle, bool isEnable) {
  SetFlag(handle, Character::kFlagForceShow, isEnable);
}

void SetForceActive(CharacterHandle handle, bool isEnable) {
  SetFlag(handle, Character::kFlagForceActive, isEnable);
}

void SetFixedScriptAnim(CharacterHandle handle, bool isEnable) {
  SetFlag(handle, Character::kFlagFixedScriptAnim, isEnable);
}

void SetIgnoreAdjustPassage(CharacterHandle handle, bool isIgnore) {
  SetFlag(handle, Character::kFlagIgnoreAdjustPassage, isIgnore);
}

void SetEnableRotate(CharacterHandle handle, bool isEnable) {
  SetFlag(handle, Character::kFlagDisableRotate, !isEnable);
}

void SetEnableIK(CharacterHandle handle, bool isEnable) {
  SetFlag(handle, Character::kFlagDisableIK, !isEnable);
}

void ClearKeepLookTo(CharacterHandle handle) {
  if (Character* character = Open(handle)) {
    character->GetModel()->GetLookAt()->ClearKeep();
  }
}

void FadeOut(CharacterHandle handle, float sec) {
  if (Character* character = Open(handle)) {
    character->Fade(0.0f, sec);
  }
}

void FadeIn(CharacterHandle handle, float sec) {
  if (Character* character = Open(handle)) {
    character->Fade(1.0f, sec);
  }
}

void SetEnemyInvincible(CharacterHandle handle, bool isEnable) {
  if (Character* character = Open(handle)) {
    character->SetEnemyInvincible(isEnable);
  }
}

void SetPenetrate(CharacterHandle handle, bool isEnable) {
  if (Character* character = Open(handle)) {
    character->GetModel()->GetMover()->SetPenetrate(isEnable);
  }
}

void OverrideAccessArea(CharacterHandle handle, const math::Vec3& pos,
  float angleY, const math::Vec3& size) {
  if (Character* character = Open(handle)) {
    character->OverrideAccessArea(pos, angleY, size);
  }
}

void SetWalkSpeed(CharacterHandle handle, float speed) {
  if (Character* character = Open(handle)) {
    character->GetModel()->GetMover()->SetWalkSpeed(speed);
  }
}

void SetRunSpeed(CharacterHandle handle, float speed) {
  if (Character* character = Open(handle)) {
    character->GetModel()->GetMover()->SetRunSpeed(speed);
  }
}

void SetDashSpeed(CharacterHandle handle, float speed) {
  if (Character* character = Open(handle)) {
    character->GetModel()->GetMover()->SetDashSpeed(speed);
  }
}

void SetVisible(CharacterHandle handle, bool isVisible) {
  if (Character* character = Open(handle)) {
    character->GetModel()->GetState()->GetVisibility()->SetVisible(isVisible);
  }
}

void PlayMotion(CharacterHandle handle, const std::string& name) {
  if (Character* character = Open(handle)) {
    character->GetModel()->Play(game::hub::HashMotionName(name.c_str()),
      std::nullopt, std::nullopt, std::nullopt, 1.0f);
  }
}

void PlayMotion(CharacterHandle handle, const std::string& name,
  float blendSec) {
  if (Character* character = Open(handle)) {
    character->GetModel()->Play(game::hub::HashMotionName(name.c_str()),
      blendSec, std::nullopt, std::nullopt, 1.0f);
  }
}

void PlayMotionAtRandomFrame(CharacterHandle handle, const std::string& name) {
  if (Character* character = Open(handle)) {
    character->GetModel()->PlayAtRandomFrame(
      game::hub::HashMotionName(name.c_str()), std::nullopt);
  }
}

void PlayMotionAtRandomFrame(CharacterHandle handle, const std::string& name,
  float blendSec) {
  if (Character* character = Open(handle)) {
    character->GetModel()->PlayAtRandomFrame(
      game::hub::HashMotionName(name.c_str()), blendSec);
  }
}

namespace {

// Keeps the script waiting while the character is busy, without a block.
// These read the manager directly.
[[gnu::always_inline]] inline void Wait(bool busy) {
  as::ScriptContext* context = as::GetCurrentContext();
  if (busy) {
    context->GetRunner()->SetBlockState(0);
    return;
  }
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

}

void WaitWarp(CharacterHandle handle) {
  if (Character* character = handle.Get()) {
    Wait(character->GetModel()->GetMover()->IsWarping());
  }
}

void WaitFadeOut(CharacterHandle handle) {
  if (Character* character = handle.Get()) {
    Wait(character->GetAlpha() != 0.0f);
  }
}

void SetCheckRaycast(CharacterHandle handle, bool isCheck) {
  if (Character* character = Open(handle)) {
    character->SetCheckRaycastValue(isCheck);
    if (std::shared_ptr<game::hub::AreaEvent> event =
      character->GetAreaEvent().lock()) {
      event->SetFlag(game::hub::AreaEvent::kFlagCheckRaycast,
        character->GetCheckRaycast());
    }
  }
}

void SetForceShowPopup(CharacterHandle handle, bool isEnable) {
  if (Character* character = Open(handle)) {
    if (std::shared_ptr<game::hub::AccessPopup> popup =
      character->GetPopup().lock()) {
      popup->SetForceShow(isEnable);
    }
  }
}

// The area event is locked through a copy of its weak pointer.
void SetEventFrontAngle(CharacterHandle handle, const float degree) {
  if (Character* character = Open(handle)) {
    if (std::shared_ptr<game::hub::AreaEvent> event =
      std::weak_ptr<game::hub::AreaEvent>(character->GetAreaEvent()).lock()) {
      event->SetFrontAngle(degree);
    }
  }
}

void SetEventDisableSec(CharacterHandle handle, const float sec) {
  if (Character* character = Open(handle)) {
    if (std::shared_ptr<game::hub::AreaEvent> event =
      std::weak_ptr<game::hub::AreaEvent>(character->GetAreaEvent()).lock()) {
      event->ExtendDisableSec(sec);
    }
  }
}

void SetPathSpeed(CharacterHandle handle, float speed) {
  if (Character* character = Open(handle)) {
    if (std::shared_ptr<game::hub::PathFollower> follower =
      std::weak_ptr<game::hub::PathFollower>(
        character->GetPath()->GetFollower()).lock()) {
      follower->SetSpeed(speed);
    }
  }
}

ScriptString GetPID(CharacterHandle handle) {
  Character* character = Open(handle);
  return ScriptString(character != nullptr ?
    character->GetPid().c_str() : "");
}

ScriptString GetDisposLabel(CharacterHandle handle) {
  Character* character = Open(handle);
  return ScriptString(character != nullptr ?
    character->GetDisposLabel().c_str() : "");
}

#pragma GCC visibility pop

}
