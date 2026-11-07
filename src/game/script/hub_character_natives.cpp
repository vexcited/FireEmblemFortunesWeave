#include <new>
#include <string>
#include <string_view>

#include "as/script_context.hpp"
#include "game/hub/area_event.hpp"
#include "game/hub/character.hpp"
#include "game/script/script_string.hpp"
#include "math/vec3.hpp"
#include "nn/util/vector.hpp"

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

as::string GetPID(CharacterHandle handle) {
  Character* character = Open(handle);
  return as::string(character != nullptr ?
    character->GetPid().c_str() : "");
}

as::string GetDisposLabel(CharacterHandle handle) {
  Character* character = Open(handle);
  return as::string(character != nullptr ?
    character->GetDisposLabel().c_str() : "");
}

bool IsValid(const CharacterHandle* self) {
  return self->IsValid();
}

bool IsPlayingMotion(CharacterHandle handle) {
  Character* character = Open(handle);
  return character != nullptr && character->GetModel()->IsPlayingOneTime();
}

bool IsBehaviorComplete(CharacterHandle handle) {
  Character* character = Open(handle);
  return character != nullptr && !character->GetBehavior()->IsRunning();
}

bool IsBehaviorException(CharacterHandle handle) {
  Character* character = Open(handle);
  return character != nullptr && character->GetBehavior()->IsException();
}

void WaitBehaviorComplete(CharacterHandle handle) {
  if (Character* character = handle.Get()) {
    Wait(character->GetBehavior()->IsRunning());
  }
}

bool IsAutonomyWait(CharacterHandle handle) {
  Character* character = Open(handle);
  if (character == nullptr) {
    return true;
  }
  game::hub::CharacterAutonomy* autonomy = character->GetAutonomy();
  return autonomy == nullptr || autonomy->IsWaiting();
}

namespace {

[[gnu::always_inline]] inline void SetAutonomy(const CharacterHandle& handle,
  int state) {
  OpenBlock();
  if (handle.IsValid()) {
    handle->SetControlMode(Character::kControlAutonomy, false);
    if (game::hub::CharacterAutonomy* autonomy = handle->GetAutonomy()) {
      autonomy->GetStateMachine().Request(state);
    }
  }
}

}

void AutonomyWait(CharacterHandle handle) {
  SetAutonomy(handle, game::hub::CharacterAutonomy::kStateWait);
}

void AutonomyFollow(CharacterHandle handle) {
  SetAutonomy(handle, game::hub::CharacterAutonomy::kStateFollow);
}

void EndPlayerAutonomy() {
  as::ScriptContext* context = as::GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
  if (std::shared_ptr<Character> player = std::weak_ptr<Character>(
    game::hub::CharacterManager::GetInstance()->GetPlayer()).lock()) {
    player->SetControlMode(Character::kControlPlayer, false);
  }
}

bool IsIdleMotionName(CharacterHandle handle, const std::string& name) {
  Character* character = Open(handle);
  return character != nullptr &&
    character->GetModel()->GetState()->IsIdleMotion(
      game::hub::HashMotionName(name.c_str()));
}

void CancelMotion(CharacterHandle handle, float blendSec) {
  if (Character* character = Open(handle)) {
    game::hub::CharacterModel* model = character->GetModel();
    model->CancelOneTime();
    model->GetState()->GetAnimator()->ClearHold();
    model->GetState()->GetAnimator()->Stop(1, blendSec);
  }
}

void PlayMotionOneTime(CharacterHandle handle, const std::string& name) {
  if (Character* character = Open(handle)) {
    int index = game::hub::FindMotion(name);
    if (index != game::hub::kMotionCount) {
      character->GetModel()->PlayOneTime(game::hub::g_motions[index].id, false,
        std::nullopt, std::nullopt, std::nullopt, 1.0f);
    }
  }
}

void PlayMotionOneTime(CharacterHandle handle, const std::string& name,
  float blendSec) {
  if (Character* character = Open(handle)) {
    int index = game::hub::FindMotion(name);
    if (index != game::hub::kMotionCount) {
      character->GetModel()->PlayOneTime(game::hub::g_motions[index].id, false,
        blendSec, std::nullopt, std::nullopt, 1.0f);
    }
  }
}

void PauseMotion(CharacterHandle handle, const std::string& name,
  float startSec) {
  if (Character* character = Open(handle)) {
    int index = game::hub::FindMotion(name);
    if (index != game::hub::kMotionCount) {
      character->GetModel()->Play(game::hub::g_motions[index].id, 0.0f,
        startSec, 0.0f, 1.0f);
    }
  }
}

// The length of a motion in seconds.
float GetMotionSec(CharacterHandle handle, const std::string& name) {
  Character* character = Open(handle);
  if (character == nullptr) {
    return 0.0f;
  }
  int index = game::hub::FindMotion(name);
  if (index == game::hub::kMotionCount) {
    return 0.0f;
  }
  const game::hub::CharacterModelState* state =
    character->GetModel()->GetState();
  if (!state->IsLoaded()) {
    return 0.0f;
  }
  return state->GetAnimator()->GetFrameCount(game::hub::g_motions[index].id) /
    60.0f;
}

void SetIdleMotion(CharacterHandle handle, const std::string& name) {
  OpenBlock();
  if (handle.IsValid()) {
    uint32_t motion = game::hub::HashMotionName(name.c_str());
    handle->GetModel()->Play(motion, 0.0f, std::nullopt, std::nullopt, 1.0f);
    handle->GetModel()->SetIdleMotion(motion);
  }
}

void SetIdleMotionAtRandomFrame(CharacterHandle handle,
  const std::string& name) {
  OpenBlock();
  if (handle.IsValid()) {
    uint32_t motion = game::hub::HashMotionName(name.c_str());
    handle->GetModel()->PlayAtRandomFrame(motion, 0.0f);
    handle->GetModel()->SetIdleMotion(motion);
  }
}

void ClearEventLookTo(CharacterHandle handle) {
  if (Character* character = Open(handle)) {
    game::hub::CharacterManager* manager =
      game::hub::CharacterManager::GetInstance();
    manager->ClearEventLookTo(manager->Find(character));
  }
}

CharacterHandle GetHandlePlayer() {
  OpenBlock();
  if (std::shared_ptr<Character> player = std::weak_ptr<Character>(
    game::hub::CharacterManager::GetInstance()->GetPlayer()).lock()) {
    return CharacterHandle(player.get());
  }
  return CharacterHandle();
}

namespace {

[[gnu::always_inline]] inline CharacterHandle FindHandle(
  std::weak_ptr<Character> weak) {
  if (std::shared_ptr<Character> character = weak.lock()) {
    return CharacterHandle(character.get());
  }
  return CharacterHandle();
}

}

CharacterHandle GetHandleGlobalHash(uint64_t hash) {
  OpenBlock();
  return FindHandle(
    game::hub::CharacterManager::GetInstance()->FindGlobalHash(hash));
}

CharacterHandle TryGetHandleGlobalHash(uint64_t hash) {
  OpenBlock();
  return FindHandle(
    game::hub::CharacterManager::GetInstance()->FindGlobalHash(hash));
}

CharacterHandle GetHandleLabel(const std::string& label) {
  OpenBlock();
  return FindHandle(
    game::hub::CharacterManager::GetInstance()->FindLabel(label));
}

CharacterHandle TryGetHandleLabel(const std::string& label) {
  OpenBlock();
  return FindHandle(
    game::hub::CharacterManager::GetInstance()->FindLabel(label));
}

void AutonomyCommand(CharacterHandle handle, float stickX, float stickY,
  bool isDash, bool isForceSpeed) {
  OpenBlock();
  if (handle.IsValid()) {
    handle->SetControlMode(Character::kControlAutonomy, false);
    if (game::hub::CharacterAutonomy* autonomy = handle->GetAutonomy()) {
      game::hub::StateMachine<game::hub::AutonomyContext>& machine =
        autonomy->GetStateMachine();
      machine.Request(game::hub::CharacterAutonomy::kStateCommand);
      if (game::hub::AutonomyCommand* command =
        machine.GetContext()->GetCommand()) {
        command->Set(stickX, stickY, isDash, isForceSpeed);
      }
    }
  }
}

void RunTalkCameraFacility(CharacterHandle handle) {
  if (Character* character = Open(handle)) {
    std::weak_ptr<Character> target =
      game::hub::CharacterManager::GetInstance()->Find(character);
    game::hub::TalkSupport::GetInstance()->RunCameraFacility(target, false);
  }
}

void RunTalkCameraSolo(CharacterHandle handle) {
  if (Character* character = Open(handle)) {
    std::weak_ptr<Character> target =
      game::hub::CharacterManager::GetInstance()->Find(character);
    game::hub::TalkSupport::GetInstance()->RunCameraSolo(target, false,
      std::nullopt);
  }
}

void RunTalkCameraSoloBlendSec(CharacterHandle handle, float blendSec) {
  if (Character* character = Open(handle)) {
    std::weak_ptr<Character> target =
      game::hub::CharacterManager::GetInstance()->Find(character);
    game::hub::TalkSupport::GetInstance()->RunCameraSolo(target, false,
      blendSec);
  }
}

void ResetFacial(CharacterHandle handle, float sec) {
  if (Character* character = Open(handle)) {
    character->GetModel()->GetState()->GetFacial()->Reset(sec);
  }
}

bool IsIdle(CharacterHandle handle) {
  Character* character = Open(handle);
  return character != nullptr && character->GetModel()->IsIdle();
}

void WaitIdle(CharacterHandle handle) {
  if (Character* character = handle.Get()) {
    Wait(!character->GetModel()->IsIdle());
  }
}

void SetBehaviorEnableRunning(CharacterHandle handle, bool isEnable) {
  if (Character* character = Open(handle)) {
    character->GetBehavior()->SetEnableRunning(isEnable);
  }
}

// Shared by the position getters of characters without a handle.
[[gnu::always_inline]] inline const math::Vec3& ZeroVector() {
  static const math::Vec3 zero(nn::util::Vector3f::ConstantZero);
  return zero;
}

math::Vec3 GetPosition(CharacterHandle handle) {
  Character* character = Open(handle);
  return character != nullptr ?
    character->GetModel()->GetMover()->GetPosition() : ZeroVector();
}

math::Vec3 GetDisposPosition(CharacterHandle handle) {
  Character* character = Open(handle);
  return character != nullptr ? character->GetDisposPosition() : ZeroVector();
}

// Without a head joint the head is guessed from the height.
math::Vec3 GetHeadPosition(CharacterHandle handle) {
  Character* character = Open(handle);
  if (character == nullptr) {
    return ZeroVector();
  }
  const game::hub::CharacterModel* model = character->GetModel();
  if (const game::hub::CharacterJoint* head =
    model->GetState()->GetHeadJoint()) {
    return head->GetTranslation();
  }
  return model->GetMover()->GetPosition() +
    math::Vec3(0.0f, model->GetHeight() * 0.8f, 0.0f);
}

void SetPosition(CharacterHandle handle, const math::Vec3& pos) {
  if (Character* character = Open(handle)) {
    character->GetModel()->GetMover()->SetPosition(pos, true);
    if ((character->GetPosition() -
      character->GetModel()->GetMover()->GetPosition()).LengthSquared() >
      1.1920929e-7f) {
      game::hub::CharacterManager::GetInstance()->NotifyMoved();
    }
    character->SetPositionValue(pos);
    character->UpdatePosition(true);
    handle->GetModel()->MarkDirty();
  }
}

// The angle is given in degrees.
void SetAngle(CharacterHandle handle, float rotY) {
  if (Character* character = Open(handle)) {
    character->FixAngle();
    game::hub::CharacterMover* mover = character->GetModel()->GetMover();
    mover->ClearLookTarget();
    mover->GetTransform()->SetRotY(rotY * 0.017453292f);
    handle->GetModel()->MarkDirty();
  }
}

void AutonomyMoveTo(CharacterHandle handle, const math::Vec3& pos,
  float speed) {
  OpenBlock();
  if (handle.IsValid()) {
    handle->SetControlMode(Character::kControlAutonomy, false);
    if (game::hub::CharacterAutonomy* autonomy = handle->GetAutonomy()) {
      game::hub::StateMachine<game::hub::AutonomyContext>& machine =
        autonomy->GetStateMachine();
      machine.Request(game::hub::CharacterAutonomy::kStateMoveTo);
      if (game::hub::AutonomyMove* move = machine.GetContext()->GetMove()) {
        move->Set(pos, speed);
      }
    }
  }
}

void KeepLookTo(CharacterHandle handle, const math::Vec3& targetPos,
  float rotateSpeedRate) {
  if (Character* character = Open(handle)) {
    character->GetModel()->GetLookAt()->LookTo(targetPos, rotateSpeedRate);
    handle->GetModel()->MarkDirty();
  }
}

void KeepLookTo(CharacterHandle handle, CharacterHandle target,
  float rotateSpeedRate) {
  if (Character* character = Open(handle)) {
    if (Character* other = target.Get()) {
      character->GetModel()->GetLookAt()->LookTo(
        other->GetModel()->GetJointId(), rotateSpeedRate);
      handle->GetModel()->MarkDirty();
    }
  }
}

void EventLookTo(CharacterHandle handle, const math::Vec3& targetPos,
  float rotateSpeedRate) {
  if (Character* character = Open(handle)) {
    character->GetModel()->GetLookAt()->LookTo(targetPos, rotateSpeedRate);
    handle->GetModel()->MarkDirty();
    game::hub::CharacterManager* manager =
      game::hub::CharacterManager::GetInstance();
    manager->AddEventLookTo(manager->Find(handle.Get()));
  }
}

void EventLookTo(CharacterHandle handle, CharacterHandle target,
  float rotateSpeedRate) {
  if (Character* character = Open(handle)) {
    if (Character* other = target.Get()) {
      character->GetModel()->GetLookAt()->LookTo(
        other->GetModel()->GetJointId(), rotateSpeedRate);
      handle->GetModel()->MarkDirty();
      game::hub::CharacterManager* manager =
        game::hub::CharacterManager::GetInstance();
      manager->AddEventLookTo(manager->Find(handle.Get()));
    }
  }
}

void DefaultLookTo(CharacterHandle handle, const math::Vec3& targetPos) {
  if (Character* character = Open(handle)) {
    character->GetModel()->GetLookAt()->SetDefault(targetPos);
    handle->GetModel()->MarkDirty();
  }
}

void DefaultLookTo(CharacterHandle handle, CharacterHandle target) {
  if (Character* character = Open(handle)) {
    if (Character* other = target.Get()) {
      character->GetModel()->GetLookAt()->SetDefault(
        other->GetModel()->GetJointId());
      handle->GetModel()->MarkDirty();
    }
  }
}

void WarpTo(CharacterHandle handle, const math::Vec3& pos, float angleDeg,
  float fadeSec, bool isExitWaitVisible) {
  if (Character* character = Open(handle)) {
    if (game::hub::WarpRequest* request =
      character->GetModel()->GetMover()->GetWarper()->GetRequest()) {
      request->Set(pos, angleDeg, fadeSec, isExitWaitVisible);
    }
  }
}

CharacterHandle GetHandleAccessingChara() {
  OpenBlock();
  if (std::shared_ptr<game::hub::AreaEvent> event =
    std::weak_ptr<game::hub::AreaEvent>(game::hub::EventManager::GetInstance()
      ->GetAccessState()->GetEvent()).lock()) {
    if (std::shared_ptr<Character> character =
      std::weak_ptr<Character>(event->GetCharacter()).lock()) {
      return CharacterHandle(character.get());
    }
  }
  return CharacterHandle();
}

// A skipped script skips the talk, then the script waits for the event.
void PreTalkEvent(CharacterHandle handle) {
  if (!handle.IsValid()) {
    return;
  }
  as::ScriptContext* running =
    g_script_manager->GetThread(as::g_thread_info->GetIndex())->GetContext();
  if (running->GetRunner()->IsSkipping()) {
    handle->SkipTalk();
  }
  const bool busy =
    game::hub::CharacterManager::IsTalkEventRunning("PreTalkEvent");
  as::ScriptContext* context = GetCurrentContext();
  if (busy) {
    context->GetRunner()->SetBlockState(0);
    return;
  }
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

#pragma GCC visibility pop

}
