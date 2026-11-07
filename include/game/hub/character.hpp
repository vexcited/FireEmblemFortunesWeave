#pragma once

#include <cmath>
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

#include "game/hub/manager.hpp"
#include "game/singleton.hpp"
#include "math/vec3.hpp"
#include "nn/util/vector.hpp"

namespace game::hub {

class AccessPopup;
class AreaEvent;

#pragma GCC visibility push(hidden)

// The names of motions are hashed as they are looked up.
inline uint32_t HashMotionName(const char* name) {
  uint32_t hash = 0;
  for (; *name != '\0'; name++) {
    hash = hash * 31 + static_cast<uint8_t>(*name);
  }
  return hash;
}

// The motions known by name.
struct MotionInfo {
  const char* name;
  uint32_t id;
  uint8_t unknown_0c_[0x1c];
};

inline constexpr int kMotionCount = 639;

extern MotionInfo g_motions[kMotionCount];

// The index of a motion, kMotionCount when there is none of that name.
int FindMotion(std::string_view name);

class CharacterFader {
public:
  void Refresh();
};

class CharacterVisibility {
public:
  void SetVisible(bool isVisible) {
    const float alpha = isVisible ? 1.0f : 0.0f;
    CharacterFader* fader = fader_;
    alpha_ = alpha;
    time_ = 0;
    target_ = alpha;
    dirty_ = true;
    changed_ = true;
    fader->Refresh();
  }

private:
  uint8_t unknown_00_[0x110];
  float alpha_;
  float target_;
  uint8_t unknown_118_[0x8];
  int time_;
  bool dirty_;
  uint8_t unknown_125_[0x43];
  CharacterFader* fader_;
  uint8_t unknown_170_;
  bool changed_;
};

// Plays the motions of a model.
class CharacterAnimator {
public:
  float GetFrameCount(uint32_t motion) const;
  void Stop(int layer, float blendSec);

  uint64_t GetCurrent() const {
    return current_;
  }

  void ClearHold() {
    if (hold_) {
      hold_ = false;
      held_.reset();
    }
  }

private:
  uint8_t unknown_00_[0x50];
  std::optional<uint64_t> held_;
  uint8_t unknown_60_[0xf9];
  bool hold_;
  uint8_t unknown_15a_[0x6];
  uint64_t current_;
};

struct FacialRequest {
  std::string name;
  std::optional<float> sec;
};

class CharacterFacial {
public:
  void Apply(std::optional<float> sec);

  void Reset(float sec) {
    request_.reset();
    Apply(sec);
  }

private:
  uint8_t unknown_00_[0x10];
  std::optional<FacialRequest> request_;
};

class CharacterJoint {
public:
  const math::Vec3& GetTranslation() const {
    return translation_;
  }

private:
  uint8_t unknown_00_[0x30];
  math::Vec3 translation_;
};

class CharacterModelState {
public:
  bool IsIdle() const;

  const CharacterJoint* GetHeadJoint() const {
    return head_joint_;
  }

  bool IsIdleMotion(uint32_t motion) const;

  CharacterFacial* GetFacial() const {
    return facial_;
  }

  bool IsLoaded() const {
    return loaded_ == 1;
  }

  CharacterAnimator* GetAnimator() const {
    return animator_;
  }

  bool HasModel() const {
    return loaded_ & 1;
  }

  // Paused while the model runs with a frame time.
  bool IsPaused() const {
    return loaded_ == 1 && dt_ > 1.1920929e-7f;
  }

  float GetDt() const {
    return dt_;
  }

  CharacterVisibility* GetVisibility() const {
    return visibility_;
  }

private:
  uint8_t unknown_00_[0x91];
  uint8_t loaded_;
  uint8_t unknown_92_[0x52];
  float dt_;
  uint8_t unknown_e8_[0x8];
  CharacterJoint* head_joint_;
  uint8_t unknown_f8_[0x50];
  CharacterVisibility* visibility_;
  uint8_t unknown_150_[0x8];
  CharacterAnimator* animator_;
  CharacterFacial* facial_;
};

class CharacterCollider {
public:
  void Refresh();

  bool IsLanded() const {
    return grounded_ || landing_;
  }

private:
  uint8_t unknown_00_[0x3a];
  bool landing_;
  bool grounded_;
  uint8_t unknown_3c_[0x5c];
};

// Wraps an angle in radians into the half open range from minus pi to pi.
inline float NormalizeRadian(float angle) {
  constexpr float kPi = 3.14159265f;
  float wrapped = std::fmod(angle - 0.0f, kPi * 2.0f);
  wrapped = wrapped < 0.0f ? wrapped + 0.0f + kPi * 2.0f : wrapped + 0.0f;
  if (wrapped > kPi) {
    wrapped -= kPi * 2.0f;
  }
  return wrapped;
}

class CharacterTransform {
public:
  float GetTargetRotY() const;
  void ResetLook();
  void Apply();

  // Turns at once.
  void SetRotY(float rotY) {
    target_rot_y_ = rotY;
    rot_y_ = rotY;
    turn_.reset();
    Apply();
  }

  float GetRotY() const {
    return rot_y_;
  }

  // The rotation reached its target.
  bool IsRotated() const {
    const float target = GetTargetRotY();
    return std::fabs(NormalizeRadian(rot_y_ - target)) <= 1.1920929e-7f;
  }

private:
  uint8_t unknown_00_[0x20];
  float target_rot_y_;
  float rot_y_;
  uint8_t unknown_28_[0x88];
  std::optional<float> turn_;
};

template<typename T>
class StateMachine {
public:
  void Change();

  int GetState() const {
    return state_.value_or(0);
  }

  // Only a change of state is requested.
  void Request(int state) {
    if (state_ != state) {
      next_ = state;
    }
    if (!changing_ && immediate_) {
      Change();
    }
  }

  T* GetContext() const {
    return context_;
  }

private:
  uint8_t unknown_00_[0x8];
  std::optional<int> state_;
  std::optional<int> next_;
  T* context_;
  uint8_t unknown_20_[0x40];
  bool changing_;
  bool immediate_;
};

class CharacterWarper;

class WarperContext;

class CharacterWarper {
public:
  static constexpr int kStateWarp = 2;

  bool IsLocked() const {
    return locked_;
  }

  StateMachine<WarperContext>& GetStateMachine() {
    return state_machine_;
  }

private:
  uint8_t unknown_00_[0x10];
  StateMachine<WarperContext> state_machine_;
  uint8_t unknown_72_[0x2de];
  bool locked_;
};

// A warp the scripts ask for, run by the warper.
class WarpRequest {
public:
  void Set(const math::Vec3& pos, float angleDeg, float fadeSec,
    bool isExitWaitVisible) {
    pos_ = pos;
    angle_ = angleDeg;
    fade_sec_ = fadeSec;
    exit_wait_visible_ = isExitWaitVisible;
    if (!warper_->IsLocked()) {
      warper_->GetStateMachine().Request(CharacterWarper::kStateWarp);
    }
  }

private:
  uint8_t unknown_00_[0x8];
  CharacterWarper* warper_;
  uint8_t unknown_10_[0x10];
  math::Vec3 pos_;
  std::optional<float> angle_;
  float fade_sec_;
  bool exit_wait_visible_;
};

class WarperContext {
public:
  WarpRequest* GetRequest() const {
    return request_;
  }

private:
  uint8_t unknown_00_[0x10];
  WarpRequest* request_;
};

class CharacterMover {
public:
  float GetDashSpeed() const {
    return dash_speed_;
  }

  float GetRunSpeed() const {
    return run_speed_;
  }

  float GetWalkSpeed() const {
    return walk_speed_;
  }

  void SetPenetrate(bool isEnable) {
    penetrate_ = isEnable;
    collider_.Refresh();
  }

  const CharacterTransform* GetTransform() const {
    return transform_;
  }

  CharacterTransform* GetTransform() {
    return transform_;
  }

  bool IsWarping() const {
    return warp_state_ == 2 && warping_;
  }

  void SetPosition(const math::Vec3& pos, bool force);

  const math::Vec3& GetPosition() const {
    return position_;
  }

  WarperContext* GetWarper() const {
    return warper_;
  }

  void ClearLookTarget() {
    if (look_target_) {
      look_target_.reset();
    }
  }

  bool IsStopped() const {
    return move_x_ * move_x_ + move_z_ * move_z_ <= 0.0f &&
      collider_.IsLanded();
  }

  void SetDashSpeed(float speed) {
    SetSpeed(dash_override_, speed);
  }

  void SetRunSpeed(float speed) {
    SetSpeed(run_override_, speed);
  }

  void SetWalkSpeed(float speed) {
    SetSpeed(walk_override_, speed);
  }

  void UpdateSpeed(bool force);

private:
  struct SpeedOverride {
    float value;
    bool set;
  };

  // Only a changed speed updates the mover.
  void SetSpeed(SpeedOverride& speed_override, float speed) {
    if (!speed_override.set || speed_override.value != speed) {
      speed_override.value = speed;
      speed_override.set = true;
      UpdateSpeed(true);
    }
  }

  uint8_t unknown_00_[0x18];
  int warp_state_;
  bool warping_;
  uint8_t unknown_1d_[0xb];
  WarperContext* warper_;
  uint8_t unknown_30_[0x58];
  CharacterCollider collider_;
  bool penetrate_;
  uint8_t unknown_121_[0x47];
  float dash_speed_;
  float run_speed_;
  float walk_speed_;
  uint8_t unknown_174_[0x34];
  SpeedOverride dash_override_;
  SpeedOverride run_override_;
  SpeedOverride walk_override_;
  uint8_t unknown_1c0_[0x28];
  CharacterTransform* transform_;
  uint8_t unknown_1f0_[0x40];
  math::Vec3 position_;
  uint8_t unknown_240_[0x5c];
  float move_x_;
  float move_z_;
  uint8_t unknown_2a4_[0xb4];
  std::shared_ptr<const void> look_target_;
};

// Where a character looks, a joint of another model or a position.
struct LookTarget {
  LookTarget() : speed(0.0f), unknown_04(false) {}

  float speed;
  bool unknown_04;
  std::optional<uint32_t> joint;
  std::optional<math::Vec3> pos;
  std::optional<float> unknown_30;
};

class CharacterLookAt {
public:
  static constexpr float kTurnSpeed = 6.2832f;

  void ClearKeep() {
    script_.reset();
    keep_ = false;
  }

  // The look the scripts set turns the rate of a full turn a second.
  void LookTo(const math::Vec3& pos, float rate) {
    keep_ = false;
    script_.emplace();
    script_->speed = rate * kTurnSpeed;
    script_->pos = pos;
    mover_->GetTransform()->ResetLook();
  }

  void LookTo(uint32_t joint, float rate) {
    keep_ = false;
    script_.emplace();
    script_->speed = rate * kTurnSpeed;
    script_->joint = joint;
    mover_->GetTransform()->ResetLook();
  }

  void SetDefault(const math::Vec3& pos) {
    default_ = LookTarget();
    default_->unknown_04 = false;
    default_->speed = kTurnSpeed;
    default_->pos = pos;
  }

  void SetDefault(uint32_t joint) {
    default_ = LookTarget();
    default_->unknown_04 = false;
    default_->speed = kTurnSpeed;
    default_->joint = joint;
  }

private:
  uint8_t unknown_00_[0x10];
  CharacterMover* mover_;
  uint8_t unknown_18_;
  bool keep_;
  uint8_t unknown_1a_[0x6];
  std::optional<LookTarget> script_;
  std::optional<LookTarget> default_;
};

class CharacterModel {
public:
  void RefreshControl();
  void Play(uint32_t motion, std::optional<float> blend,
    std::optional<float> start, std::optional<float> unknown, float rate);
  void PlayAtRandomFrame(uint32_t motion, std::optional<float> blend);
  void PlayOneTime(uint32_t motion, bool unknown, std::optional<float> blend,
    std::optional<float> start, std::optional<float> end, float rate);

  bool IsPlayingOneTime() const {
    return one_time_motion_.has_value() &&
      *one_time_motion_ == state_->GetAnimator()->GetCurrent();
  }

  void CancelOneTime() {
    one_time_frame_ = 0;
    one_time_motion_.reset();
  }

  void SetIdleMotion(uint32_t motion) {
    idle_motion_ = motion;
  }

  void MarkDirty() {
    dirty_ = true;
  }

  uint32_t GetJointId() const {
    return joint_id_;
  }

  // Idle once turned and stopped, while the model is not rebuilt.
  bool IsIdle() const {
    if (dirty_) {
      return false;
    }
    if (!mover_->GetTransform()->IsRotated()) {
      return false;
    }
    if (!mover_->IsStopped()) {
      return false;
    }
    return state_->IsIdle();
  }

  const CharacterModelState* GetState() const {
    return state_;
  }

  CharacterMover* GetMover() const {
    return mover_;
  }

  CharacterLookAt* GetLookAt() const {
    return look_at_;
  }

  float GetRadius() const {
    return radius_;
  }

  float GetHeight() const {
    return height_;
  }

private:
  uint8_t unknown_00_[0x8];
  CharacterModelState* state_;
  CharacterMover* mover_;
  CharacterLookAt* look_at_;
  uint8_t unknown_20_[0x98];
  uint32_t joint_id_;
  uint8_t unknown_bc_[0x4c];
  std::optional<uint64_t> one_time_motion_;
  int one_time_frame_;
  uint8_t unknown_11c_[0x94];
  bool dirty_;
  uint8_t unknown_1b1_[0x23];
  std::optional<uint32_t> idle_motion_;
  uint8_t unknown_1dc_[0x34];
  float radius_;
  uint8_t unknown_214_[0xc];
  float height_;
};

class PathFollower {
public:
  void SetSpeed(float speed) {
    speed_ = speed;
    target_speed_ = speed;
    time_ = 0;
  }

private:
  uint8_t unknown_00_[0x14];
  float speed_;
  float target_speed_;
  int time_;
};

class CharacterPath {
public:
  void Attach(std::string_view file);
  void Detach();

  const std::weak_ptr<PathFollower>& GetFollower() const {
    return follower_;
  }

private:
  uint8_t unknown_00_[0x10];
  std::weak_ptr<PathFollower> follower_;
};

class CharacterAction {
public:
  virtual void Unknown00();
  virtual void Unknown01();
  virtual void Unknown02();
  virtual void Unknown03();
  virtual void Unknown04();
  virtual bool IsException() const;
};

class CharacterBehavior {
public:
  void ClearStack();
  void Restart();
  void PushMove(const math::Vec3& target, float speed);

  bool IsRunning() const {
    return current_.lock() != nullptr;
  }

  // Disabling cancels the running action.
  void SetEnableRunning(bool isEnable);

  // Starts the next stacked action when nothing runs.
  void UpdateRunning();

  bool IsException() const {
    std::shared_ptr<CharacterAction> action = current_.lock();
    return action != nullptr && action->IsException();
  }

private:
  uint8_t unknown_00_[0x9];
  bool isEnableRunning_;
  uint8_t unknown_0a_[0x26];
  std::weak_ptr<CharacterAction> current_;
};

class AutonomyFollow {
public:
  bool IsWaiting() const {
    return waiting_;
  }

private:
  uint8_t unknown_00_[0x21];
  bool waiting_;
};

// The stick input of a player character run by the scripts.
class AutonomyCommand {
public:
  void Set(float stickX, float stickY, bool isDash, bool isForceSpeed) {
    stick_x_ = stickX;
    stick_y_ = stickY;
    dash_ = isDash;
    force_speed_ = isForceSpeed;
  }

private:
  uint8_t unknown_00_[0x10];
  float stick_x_;
  float stick_y_;
  bool dash_;
  bool force_speed_;
};

// A move to a position of a player character run by the scripts.
class AutonomyMove {
public:
  void Set(const math::Vec3& pos, float speed) {
    target_ = pos;
    speed_ = speed;
    arrived_ = false;
  }

private:
  uint8_t unknown_00_[0x14];
  bool arrived_;
  uint8_t unknown_15_[0xb];
  math::Vec3 target_;
  float speed_;
};

class AutonomyContext {
public:
  const AutonomyFollow* GetFollow() const {
    return follow_;
  }

  AutonomyCommand* GetCommand() const {
    return command_;
  }

  AutonomyMove* GetMove() const {
    return move_;
  }

private:
  uint8_t unknown_00_[0x8];
  AutonomyFollow* follow_;
  AutonomyCommand* command_;
  AutonomyMove* move_;
};

// A player character the scripts take control of.
class CharacterAutonomy {
public:
  static constexpr int kStateWait = 0;
  static constexpr int kStateFollow = 1;
  static constexpr int kStateCommand = 2;
  static constexpr int kStateMoveTo = 3;

  StateMachine<AutonomyContext>& GetStateMachine() {
    return state_machine_;
  }

  // Following waits while the target does.
  bool IsWaiting() const {
    switch (state_machine_.GetState()) {
      case kStateWait:
        return true;
      case kStateFollow:
        return state_machine_.GetContext()->GetFollow() != nullptr &&
          state_machine_.GetContext()->GetFollow()->IsWaiting();
      default:
        return false;
    }
  }

private:
  uint8_t unknown_00_[0x20];
  StateMachine<AutonomyContext> state_machine_;
};

class CharacterEnemy {
public:
  void SetInvincible(bool isEnable) {
    invincible_ = isEnable;
  }

private:
  uint8_t unknown_00_[0xb4];
  bool invincible_;
};

// A character of the hub. Only the members the script natives touch.
class Character {
public:
  static constexpr uint32_t kFlagHeadLookToPlayer = 0x10;
  static constexpr uint32_t kFlagIndifference = 0x2;
  static constexpr uint32_t kFlagCmdbtlGuest = 0x4;
  static constexpr uint32_t kFlagDisableRotate = 0x8;
  static constexpr uint32_t kFlagDisableIK = 0x20;
  static constexpr uint32_t kFlagForceShow = 0x40;
  static constexpr uint32_t kFlagFixedScriptAnim = 0x80;
  static constexpr uint32_t kFlagForceActive = 0x100;
  static constexpr uint32_t kFlagIgnoreAdjustPassage = 0x1000;

  static constexpr int kKindEnemy = 1;
  static constexpr int kKindPlayer = 2;

  static constexpr int kControlAutonomy = 2;
  static constexpr int kControlPlayer = 3;

  uint32_t GetPool() const {
    return pool_;
  }

  uint32_t GetId() const {
    return id_;
  }

  CharacterModel* GetModel() const {
    return model_;
  }

  CharacterPath* GetPath() const {
    return path_;
  }

  CharacterBehavior* GetBehavior() const {
    return behavior_;
  }

  bool IsIndifference() const {
    return flags_ & kFlagIndifference;
  }

  uint64_t GetGlobalHash() const {
    return global_hash_;
  }

  const std::string& GetPid() const {
    return pid_;
  }

  const std::string& GetDisposLabel() const {
    return dispos_label_;
  }

  float GetDisposAngle() const {
    return dispos_angle_;
  }

  math::Vec3 GetDisposPosition() const {
    return math::Vec3(dispos_position_.x, dispos_position_.y,
      dispos_position_.z);
  }

  const math::Vec3& GetPosition() const {
    return position_;
  }

  void SetPositionValue(const math::Vec3& pos) {
    position_ = pos;
  }

  void FixAngle() {
    if (!fixed_angle_) {
      fixed_angle_ = true;
    }
  }

  void UpdatePosition(bool force);
  void SkipTalk();

  // A zero time sets the alpha at once.
  void Fade(float target, float sec) {
    fade_sec_ = sec;
    target_alpha_ = target;
    if (sec == 0.0f) {
      alpha_ = target;
    }
  }

  // Only the enemies take the invincibility.
  void SetEnemyInvincible(bool isEnable) {
    if (kind_ == kKindEnemy && enemy_ != nullptr) {
      enemy_->SetInvincible(isEnable);
    }
  }

  float GetAlpha() const {
    return alpha_;
  }

  bool GetCheckRaycast() const {
    return check_raycast_;
  }

  void SetCheckRaycastValue(bool isCheck) {
    check_raycast_ = isCheck;
  }

  const std::weak_ptr<AreaEvent>& GetAreaEvent() const {
    return area_event_;
  }

  const std::weak_ptr<AccessPopup>& GetPopup() const {
    return popup_;
  }

  // Only the player characters run on their own.
  CharacterAutonomy* GetAutonomy() const {
    return kind_ == kKindPlayer ? autonomy_ : nullptr;
  }

  void SetupActiveAccessDelay(bool isActive) {
    active_access_delay_ = isActive;
  }

  void RestartInitScript();
  void ChangeRunContact();
  void SetFlag(uint32_t flag, bool enabled);
  void SetControlMode(int mode, bool force);
  void OverrideAccessArea(const math::Vec3& pos, float angleY,
    const math::Vec3& size);

private:
  uint8_t unknown_00_[0x8];
  uint32_t pool_;
  uint32_t id_;
  uint8_t unknown_10_[0x8];
  CharacterModel* model_;
  uint8_t unknown_20_[0x18];
  // The kind tells which one is kept.
  union {
    CharacterEnemy* enemy_;
    CharacterAutonomy* autonomy_;
  };
  uint8_t unknown_40_[0x8];
  CharacterPath* path_;
  uint8_t unknown_50_[0x8];
  CharacterBehavior* behavior_;
  uint8_t unknown_60_[0x8];
  std::weak_ptr<AreaEvent> area_event_;
  uint8_t unknown_78_[0x40];
  uint8_t flags_;
  uint8_t unknown_b9_[0x7];
  std::weak_ptr<AccessPopup> popup_;
  uint8_t unknown_d0_[0x38];
  uint64_t global_hash_;
  uint8_t unknown_110_[0x18];
  std::string pid_;
  std::string dispos_label_;
  uint8_t unknown_158_[0x30];
  nn::util::Float3 dispos_position_;
  float dispos_angle_;
  uint8_t unknown_198_[0x290];
  float alpha_;
  float target_alpha_;
  float fade_sec_;
  uint8_t unknown_434_[0x24];
  int kind_;
  uint8_t unknown_45c_[0x4d];
  bool check_raycast_;
  uint8_t unknown_4aa_[0x46];
  math::Vec3 position_;
  uint8_t unknown_500_[0x31];
  bool fixed_angle_;
  uint8_t unknown_532_;
  bool active_access_delay_;
};

#pragma GCC visibility pop

// The slots of the handled objects, shared with the area events.
struct CharacterSlot {
  const void* key;
  Character* object;
};

extern CharacterSlot* g_character_slots[];

#pragma GCC visibility push(hidden)

template<typename T>
class Handle;

// The handle base of the characters, naming one by its pool and slot.
template<>
class Handle<Character> {
public:
  static constexpr uint32_t kInvalidId = 0x4000;

  Handle() = default;

  explicit Handle(Character* character) {
    if (character == nullptr) {
      return;
    }
    const uint32_t id = character->GetId();
    if (id == kInvalidId) {
      return;
    }
    const CharacterSlot& slot = g_character_slots[character->GetPool()][id];
    if (slot.object != character) {
      return;
    }
    id_ = id;
    key_ = slot.key;
    object_ = character;
    pool_ = character->GetPool();
  }

  virtual ~Handle();

  bool IsValid() const {
    return Get() != nullptr;
  }

  // The character of the slot, once the handle was checked.
  Character* operator->() const {
    return g_character_slots[pool_][id_].object;
  }

  // The character while the slot still holds it, null otherwise.
  Character* Get() const {
    if (id_ == kInvalidId) {
      return nullptr;
    }
    const CharacterSlot& slot = g_character_slots[pool_][id_];
    if (slot.object == nullptr || slot.key != key_) {
      return nullptr;
    }
    return slot.object;
  }

protected:
  const void* key_ = nullptr;
  uint32_t id_ = kInvalidId;
  uint32_t pool_ = 1;
  Character* object_ = nullptr;
};

class CharacterHandle : public Handle<Character> {
public:
  CharacterHandle() = default;

  explicit CharacterHandle(Character* character)
    : Handle(character) {}

  ~CharacterHandle() override;

  CharacterHandle& operator=(const CharacterHandle& other) {
    key_ = other.key_;
    id_ = other.id_;
    pool_ = other.pool_;
    object_ = other.object_;
    return *this;
  }

  bool operator==(const CharacterHandle& other) const {
    return Get() == other.Get();
  }
};

#pragma GCC visibility pop

#pragma GCC visibility push(hidden)

class CharacterManager : public Singleton<CharacterManager> {
public:
  void ClearEventLookTo(std::weak_ptr<Character> character);

  std::weak_ptr<Character> Find(const Character* character) const {
    for (const std::shared_ptr<Character>& entry : characters_) {
      if (entry.get() == character) {
        return entry;
      }
    }
    return {};
  }

  // Whether the talk event of that name still runs.
  static bool IsTalkEventRunning(const std::string& name);

  std::weak_ptr<Character> FindGlobalHash(uint64_t hash) const {
    for (const std::shared_ptr<Character>& entry : characters_) {
      if (entry->GetGlobalHash() == hash) {
        return entry;
      }
    }
    return {};
  }

  std::weak_ptr<Character> FindLabel(const std::string& label) const {
    if (label.empty()) {
      return {};
    }
    for (const std::shared_ptr<Character>& entry : characters_) {
      if (entry->GetDisposLabel() == label) {
        return entry;
      }
    }
    return {};
  }

  const std::weak_ptr<Character>& GetPlayer() const {
    return player_;
  }

  // Marks the positions as moved once.
  void NotifyMoved() {
    if (!notice_->moved) {
      notice_->moved = true;
    }
  }

  void AddEventLookTo(std::weak_ptr<Character> character);

private:
  struct MoveNotice {
    uint8_t unknown_00[0xc];
    bool moved;
  };

  uint8_t unknown_08_[0x10];
  std::vector<std::shared_ptr<Character>> characters_;
  uint8_t unknown_30_[0x18];
  std::weak_ptr<Character> player_;
  uint8_t unknown_58_[0x20];
  MoveNotice* notice_;
};

#pragma GCC visibility pop

#pragma GCC visibility push(hidden)

class TalkSupport : public Singleton<TalkSupport> {
public:
  void RunCameraFacility(std::weak_ptr<Character> target, bool unknown);
  void RunCameraSolo(std::weak_ptr<Character> target, bool unknown,
    std::optional<float> blendSec);

  void StorePosure(std::weak_ptr<Character> target, bool unknown);
  void CommitRestore(float endCameraSec);

  bool IsEnableBindFinal() const {
    return enable_bind_final_;
  }

  void SetEnableBindFinal(bool isEnable) {
    enable_bind_final_ = isEnable;
  }

  CountedSwitch& GetPosure() {
    return posure_;
  }

  // Clears the flag of the interface the posure hid.
  bool TakeHideUi() {
    if (!hide_ui_) {
      return false;
    }
    hide_ui_ = false;
    return true;
  }

  void SetCameraStateGroup(int group) {
    camera_state_group_ = group;
  }

  bool IsYesNoDialogResult() const {
    return yes_no_dialog_result_;
  }

private:
  CountedSwitch posure_;
  uint8_t unknown_18_[0x29];
  bool hide_ui_;
  uint8_t unknown_42_[0x2];
  int camera_state_group_;
  uint8_t unknown_48_[0x38];
  bool yes_no_dialog_result_;
  uint8_t unknown_81_[0xf];
  bool enable_bind_final_;
};

#pragma GCC visibility pop

}
