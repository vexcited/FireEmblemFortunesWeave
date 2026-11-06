#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <string_view>

namespace math {

class Vec3;

}

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

class CharacterModelState {
public:
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
  uint8_t unknown_e8_[0x60];
  CharacterVisibility* visibility_;
};

class CharacterCollider {
public:
  void Refresh();

private:
  uint8_t unknown_00_[0x98];
};

class CharacterTransform {
public:
  float GetRotY() const {
    return rot_y_;
  }

private:
  uint8_t unknown_00_[0x24];
  float rot_y_;
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

  bool IsWarping() const {
    return warp_state_ == 2 && warping_;
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
  uint8_t unknown_1d_[0x6b];
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
};

class CharacterLookAt {
public:
  void ClearKeep() {
    if (state_ == 1) {
      state_ = 0;
    }
    keep_ = false;
  }

private:
  uint8_t unknown_00_[0x19];
  bool keep_;
  uint8_t unknown_1a_[0x46];
  uint8_t state_;
};

class CharacterModel {
public:
  void RefreshControl();
  void Play(uint32_t motion, std::optional<float> blend,
    std::optional<float> start, std::optional<float> unknown, float rate);
  void PlayAtRandomFrame(uint32_t motion, std::optional<float> blend);

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
  uint8_t unknown_20_[0x1f0];
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

class CharacterBehavior {
public:
  void ClearStack();
  void Restart();
  void PushMove(const math::Vec3& target, float speed);
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
    if (kind_ == 1 && enemy_ != nullptr) {
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

  void SetupActiveAccessDelay(bool isActive) {
    active_access_delay_ = isActive;
  }

  void RestartInitScript();
  void ChangeRunContact();
  void SetFlag(uint32_t flag, bool enabled);
  void OverrideAccessArea(const math::Vec3& pos, float angleY,
    const math::Vec3& size);

private:
  uint8_t unknown_00_[0x8];
  uint32_t pool_;
  uint32_t id_;
  uint8_t unknown_10_[0x8];
  CharacterModel* model_;
  uint8_t unknown_20_[0x18];
  CharacterEnemy* enemy_;
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
  uint8_t unknown_158_[0x3c];
  float dispos_angle_;
  uint8_t unknown_198_[0x290];
  float alpha_;
  float target_alpha_;
  float fade_sec_;
  uint8_t unknown_434_[0x24];
  int kind_;
  uint8_t unknown_45c_[0x4d];
  bool check_raycast_;
  uint8_t unknown_4aa_[0x89];
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

// The handle base of the hub objects, naming one by its pool and slot.
class ObjectHandle {
public:
  static constexpr uint32_t kInvalidId = 0x4000;

  ObjectHandle() = default;

  explicit ObjectHandle(Character* character) {
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

  virtual ~ObjectHandle();

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

class CharacterHandle : public ObjectHandle {
public:
  CharacterHandle() = default;

  explicit CharacterHandle(Character* character)
    : ObjectHandle(character) {}

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

}
