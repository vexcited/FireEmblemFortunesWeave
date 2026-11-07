#pragma once

#include <cstdint>
#include <map>
#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

#include "game/hub/handle.hpp"
#include "game/singleton.hpp"
#include "math/vec3.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

class Object;

// The done animation of an object.
class ObjectDone {
public:
  virtual ~ObjectDone();
  virtual void Unknown01();
  virtual void Unknown02();
  virtual bool IsCompleted() const;

  void Play();
  void PlayIdle();

  Object* GetObject() const {
    return object_;
  }

private:
  Object* object_;
};

class Object : public HandlePtr {
public:
  void SetRunAccessScript(std::string script);
  void Destroy();
  void RefreshActive();
  void RefreshTransform();
  void PlayAnim(std::string_view name);
  void PlayAnimEnd(std::string_view name);
  bool IsPlayingAnim() const;
  void EnableDone();
  void SetAlphaIn(float sec);
  void SetAlphaOut(float sec);

  uint64_t GetGlobalHash() const {
    return global_hash_;
  }

  bool IsActive() const {
    return active_;
  }

  void SetActive(bool isActive) {
    active_ = isActive;
    RefreshActive();
  }

  bool IsVisible() const {
    return visible_;
  }

  void SetVisible(bool isVisible) {
    visible_ = isVisible;
    RefreshActive();
  }

  // The done animation, when the object has one.
  ObjectDone* GetDone() const {
    return has_done_ ? done_ : nullptr;
  }

  const std::optional<math::Vec3>& GetPosition() const {
    return position_;
  }

  const std::optional<math::Vec3>& GetRotation() const {
    return rotation_;
  }

  const std::optional<math::Vec3>& GetScale() const {
    return scale_;
  }

  void SetPosition(const math::Vec3& position) {
    SetTransform(position_, position);
  }

  void SetRotation(const math::Vec3& rotation) {
    SetTransform(rotation_, rotation);
  }

  void SetScale(const math::Vec3& scale) {
    SetTransform(scale_, scale);
  }

private:
  void SetTransform(std::optional<math::Vec3>& field,
    const math::Vec3& value) {
    if (field == value) {
      return;
    }
    field = value;
    RefreshTransform();
  }

  uint8_t unknown_10_[0x38];
  uint64_t global_hash_;
  uint8_t unknown_50_[0x290];
  ObjectDone* done_;
  uint8_t unknown_2e8_[0xc9];
  bool active_;
  bool visible_;
  bool has_done_;
  uint8_t unknown_3b4_[0xc];
  std::optional<math::Vec3> position_;
  std::optional<math::Vec3> rotation_;
  std::optional<math::Vec3> scale_;
};

class ObjectHandle : public Handle<Object> {
public:
  ObjectHandle() = default;

  explicit ObjectHandle(Object* object) : Handle(object) {}

  ObjectHandle(const ObjectHandle& other) : Handle(other.Get()) {}

  ~ObjectHandle() override;

  ObjectHandle& operator=(const ObjectHandle& other) = default;
};

// A path of smoothed points, picked by a rate.
class SmoothPoint3 {
public:
  math::Vec3 GetRoundPoint(float t) const;
  math::Vec3 GetPoint(float t) const;

  math::Vec3 Get(float rate01) const {
    return round_ ? GetRoundPoint(rate01 * static_cast<float>(count() - 1)) :
      GetPoint(rate01 * static_cast<float>(count() - 1));
  }

  int count() const {
    return static_cast<int>(points_.size());
  }

private:
  uint8_t unknown_00_[0xd];
  bool round_;
  uint8_t unknown_0e_[0x2a];
  std::vector<math::Vec3> points_;
};

class ObjectManager : public Singleton<ObjectManager> {
public:
  Object* FindLabel(std::string_view label) const;

  Object* FindGlobalHash(uint64_t hash) const {
    for (const std::shared_ptr<Object>& entry : objects_) {
      if (entry->GetGlobalHash() == hash) {
        return entry.get();
      }
    }
    for (const std::shared_ptr<Object>& entry : dynamic_objects_) {
      if (entry->GetGlobalHash() == hash) {
        return entry.get();
      }
    }
    return nullptr;
  }

  const SmoothPoint3* FindSmoothPoint3(uint64_t id) const {
    auto found = smooth_points_.find(id);
    return found != smooth_points_.end() ? &found->second : nullptr;
  }

private:
  uint8_t unknown_08_[0x20];
  std::vector<std::shared_ptr<Object>> objects_;
  std::vector<std::shared_ptr<Object>> dynamic_objects_;
  uint8_t unknown_58_[0x8];
  std::map<uint64_t, SmoothPoint3> smooth_points_;
};

#pragma GCC visibility pop

}
