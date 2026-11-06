#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <string_view>
#include <vector>

#include "game/singleton.hpp"

namespace math {

class Vec3;

}

namespace game::hub {

// The shape of the area an event covers.
class AreaShape {
public:
  float GetNearLengthXZ(const math::Vec3& pos) const;

private:
  uint8_t unknown_00_[0x60];
};

// The popup shown while the player can access an event.
class AccessPopup {
public:
  void SetForceShow(bool isEnable) {
    if (force_show_ != isEnable) {
      force_show_ = isEnable;
      Refresh();
    }
  }

  void Refresh();

private:
  uint8_t unknown_00_[0x131];
  bool force_show_;
};

// An event placed in an area of the hub. Only the members the script
// natives touch.
class AreaEvent {
public:
  uint32_t GetPool() const {
    return pool_;
  }

  uint32_t GetId() const {
    return id_;
  }

  const AreaShape& GetShape() const {
    return shape_;
  }

  // Contact, access, surround access or forward access.
  uint32_t GetType() const {
    return type_;
  }

  uint64_t GetGlobalHash() const {
    return global_hash_;
  }

  float GetRotY() const {
    return rot_y_;
  }

  void SetFrontAngle(float degree) {
    front_angle_ = degree;
    has_front_angle_ = true;
  }

  bool HasAccessEvent() const {
    return access_events_.begin() != access_events_.end();
  }

  bool IsWalkExit() const {
    return access_events_.begin() == access_events_.end() && type_ == 0;
  }

  void MakeInvisibleWall() {
    invisible_wall_ = true;
  }

  void RegisterNavMeshObstacle() {
    nav_mesh_obstacle_ = true;
  }

  void SetupAreaChange() {
    area_change_target_ = -1;
    flags_ |= kFlagAreaChange;
  }

  void SetFlag(uint32_t flag, bool enabled) {
    flags_ = (flags_ & ~flag) | (enabled ? flag : 0);
  }

  // The devoice state is made on first use.
  void SetGayaDevoice(bool isDevoice) {
    if (!has_gaya_) {
      gaya_[2] = nullptr;
      gaya_[1] = nullptr;
      gaya_[0] = nullptr;
      has_gaya_ = true;
    }
    gaya_devoice_ = isDevoice;
  }

  const std::weak_ptr<AccessPopup>& GetPopup() const {
    return popup_;
  }

  const char* GetLabel() const {
    return label_;
  }

  void ClearSelectItemList();
  void AddEventExecute(const std::string& eventFunc,
    const std::vector<std::string>& args);

  static constexpr uint32_t kFlagShowAccessIcon = 0x2;
  static constexpr uint32_t kFlagAreaChange = 0x4;
  static constexpr uint32_t kFlagShowMinimap = 0x8;
  static constexpr uint32_t kFlagRestrictedArea = 0x10;
  static constexpr uint32_t kFlagCheckRaycast = 0x40;
  static constexpr uint32_t kFlagEnableEnterSeq = 0x80;

private:
  uint8_t unknown_00_[0x8];
  uint32_t pool_;
  uint32_t id_;
  AreaShape shape_;
  float front_angle_;
  bool has_front_angle_;
  uint8_t unknown_75_[0x3b];
  uint64_t global_hash_;
  uint8_t unknown_b8_[0x48];
  uint32_t type_;
  uint8_t unknown_104_[0xc];
  float rot_y_;
  uint8_t unknown_114_[0x25c];
  char label_[0x14c];
  bool invisible_wall_;
  bool nav_mesh_obstacle_;
  uint8_t unknown_4be_[0xa2];
  std::vector<void*> access_events_;
  uint8_t unknown_578_[0x30];
  int area_change_target_;
  uint8_t unknown_5ac_[0x64];
  std::weak_ptr<AccessPopup> popup_;
  uint8_t unknown_620_[0x88];
  void* gaya_[3];
  bool gaya_devoice_;
  uint8_t unknown_6c1_[0x7];
  bool has_gaya_;
  uint8_t unknown_6c9_[0x17];
  uint32_t flags_;
};

// The slots of the handled objects, one table per pool.
struct HandleSlot {
  const void* key;
  AreaEvent* object;
};

extern HandleSlot* g_handle_slots[];

// Names an area event by its pool and slot, 0x4000 when it names none.
class AreaEventHandle {
public:
  static constexpr uint32_t kInvalidId = 0x4000;

  AreaEventHandle() = default;
  explicit AreaEventHandle(AreaEvent* event);
  virtual ~AreaEventHandle();

  AreaEventHandle& operator=(const AreaEventHandle& other);
  bool operator==(const AreaEventHandle& other) const;

  // The event while the slot still holds it, null otherwise.
  AreaEvent* Get() const {
    if (id_ == kInvalidId) {
      return nullptr;
    }
    const HandleSlot& slot = g_handle_slots[pool_][id_];
    if (slot.object == nullptr || slot.key != key_) {
      return nullptr;
    }
    return slot.object;
  }

private:
  const void* key_ = nullptr;
  uint32_t id_ = kInvalidId;
  uint32_t pool_ = 1;
  AreaEvent* object_ = nullptr;
};

// What the player is currently accessing.
class AccessState {
public:
  const std::weak_ptr<AreaEvent>& GetEvent() const {
    return event_;
  }

private:
  uint8_t unknown_00_[0x20];
  std::weak_ptr<AreaEvent> event_;
};

inline AreaEventHandle::AreaEventHandle(AreaEvent* event) {
  if (event == nullptr) {
    return;
  }
  uint32_t id = event->GetId();
  if (id == kInvalidId) {
    return;
  }
  uint32_t pool = event->GetPool();
  const HandleSlot& slot = g_handle_slots[pool][id];
  if (slot.object != event) {
    return;
  }
  id_ = id;
  pool_ = pool;
  object_ = event;
  key_ = slot.key;
}

class EventManager : public Singleton<EventManager> {
public:
  std::shared_ptr<AreaEvent> FindLabelMap(std::string_view label) const;

  const AccessState* GetAccessState() const {
    return access_state_;
  }

  void ReserveErase(AreaEvent* event);

private:
  uint8_t unknown_08_[0x58];
  AccessState* access_state_;
};

class GlobalMapData : public Singleton<GlobalMapData> {
public:
  void SetExitHashTraverse(uint64_t globalHash);
};

}
