#pragma once

#include <stdint.h>

#include <algorithm>
#include <functional>
#include <memory>
#include <vector>

#include "game/singleton.hpp"
#include "game/zview/camera.hpp"

namespace game {

class ProcInst;
class Unit;

}

namespace game::cmdbtl {

#pragma GCC visibility push(hidden)

// The battle camera is a render camera.
using Camera = gfx::render::Camera;

using zview::CameraQuake;

class CameraDirector {
public:
  struct Transition {
    uint8_t unknown_00_[0x1c];
    float sec;
  };

  // The event camera at the position and rotation, in degrees.
  void StartEvent(const float (&transform)[6], float sec);

  // Whether the first transition still runs.
  bool IsTransitioning() const {
    bool running = false;
    if (!transitions_.empty()) {
      std::shared_ptr<Transition> transition = transitions_.front();
      running = transition != nullptr && time_ < transition->sec;
    }
    return running;
  }

private:
  uint8_t unknown_00_[0x1a0];
  std::vector<std::shared_ptr<Transition>> transitions_;
  uint8_t unknown_1b8_[0x10];
  float time_;
  uint8_t unknown_1cc_[0x1c];
};

// The battles of the command battle, as the battle info and the viewer show
// them.
class BattleRecord {
public:
  class Entry {
  public:
    void Set(bool viewer, int force, int kind);

  private:
    uint8_t unknown_00_[0x30];
  };

  void New();

  Entry* GetLast() {
    return !entries_.empty() ? &entries_.back() : nullptr;
  }

private:
  uint8_t unknown_00_[0x8];
  std::vector<Entry> entries_;
};

class CmdBtlActor {
public:
  class Model {
  public:
    void RefreshVisible();
  };

  Model* GetModel() const {
    return model_;
  }

private:
  uint8_t unknown_00_[0x28];
  Model* model_;
};

// A unit of the command battle, found by its global id.
class CmdBtlUnit {
public:
  int GetId() const {
    return id_;
  }

  Unit* GetUnit() const {
    return unit_;
  }

  float GetAngle() const {
    return angle_;
  }

  bool IsVisible() const {
    return visible_;
  }

  void SetVisible(bool isVisible) {
    visible_ = isVisible;
    if (actor_ != nullptr) {
      actor_->GetModel()->RefreshVisible();
    }
  }

  bool IsDying() const;

  // The low byte forces the dying state while the high one is set. The unit
  // gets dirty when the state changes.
  void SetDying(uint16_t dying) {
    const bool was = IsDying();
    dying_ = dying;
    if (was != IsDying()) {
      dirty_ = true;
    }
  }

  void ClearDying() {
    SetDying(0);
  }

  void SetForceDying(bool isDying) {
    SetDying(isDying | 0x100);
  }

  void PlayIdleMotion(bool withStart, float blendSec);

  void ClearHeadLookToTarget() {
    head_look_target_.reset();
  }

private:
  uint8_t unknown_00_[0x8];
  int id_;
  uint8_t unknown_0c_[0x4];
  Unit* unit_;
  uint8_t unknown_18_[0x8];
  float angle_;
  uint8_t unknown_24_[0x96];
  bool visible_;
  uint8_t unknown_bb_[0x4];
  bool dirty_;
  uint8_t unknown_c0_[0x18];
  CmdBtlActor* actor_;
  uint8_t unknown_e0_[0x68];
  std::weak_ptr<CmdBtlUnit> head_look_target_;
  uint8_t unknown_158_[0x18];
  uint16_t dying_;
};

// The hit points, stock and units shared by a force.
class Party {
public:
  int GetHp() const {
    return hp_;
  }

  int GetMaxHp() const {
    return std::max(base_max_hp_ + bonus_max_hp_, 1);
  }

  void SetHp(int hp) {
    const int old = hp_;
    hp_ = std::clamp(hp, 0, GetMaxHp());
    if (hp_ != old) {
      RefreshHp();
    }
  }

  void SetBonusMaxHp(int hp) {
    bonus_max_hp_ = hp;
    SetHp(hp_);
  }

  // The hit points can not drop below one.
  bool IsHpLocked() const;
  void RefreshHp();
  void SetLinkPoint(int point);

  bool IsLinkDisabled() const {
    return link_disabled_ != 0;
  }

  int GetStock() const {
    return stock_;
  }

  int GetLifeState() const {
    return life_state_;
  }

  void SetLifeState(int lifeState) {
    life_state_ = lifeState;
  }

  const std::vector<std::shared_ptr<CmdBtlUnit>>& GetUnits() const {
    return units_;
  }

  std::weak_ptr<CmdBtlUnit> GetLeader() const {
    return leader_;
  }

  void ClearLockTargetLeader() {
    lock_target_leader_.reset();
  }

private:
  uint8_t unknown_00_[0x8];
  int link_disabled_;
  int hp_;
  int base_max_hp_;
  int bonus_max_hp_;
  int stock_;
  uint8_t unknown_1c_[0x8];
  int life_state_;
  std::vector<std::shared_ptr<CmdBtlUnit>> units_;
  uint8_t unknown_40_[0x10];
  std::weak_ptr<CmdBtlUnit> leader_;
  std::weak_ptr<CmdBtlUnit> lock_target_leader_;
  uint8_t unknown_70_[0x10];
};

using UnitCallback = std::function<void(std::shared_ptr<CmdBtlUnit>)>;

// Tells the process the pollution of the unit changed.
void NotifyPollution(ProcInst* proc, Unit* unit);

// Calls the function with each unit of a party.
void ForEachPartyUnit(int partyType, const UnitCallback& func);

class Manager : public Singleton<Manager> {
public:
  static constexpr uint32_t kFlagEventDateOpen = 0x400;

  // Where the units are relocated to, none for their dispos positions.
  struct RelocateParam {
    const void* unknown_00 = nullptr;
    std::weak_ptr<void> target;
  };

  void RelocateUnits(RelocateParam param);

  void SetFlag(uint32_t flag) {
    flags_ |= flag;
  }

  CameraDirector& GetDirector() {
    return director_;
  }

  Camera* GetCamera() const {
    return camera_;
  }

  CameraQuake* GetQuake() const {
    return quake_;
  }

  BattleRecord& GetRecord() {
    return record_;
  }

  int GetPhase() const {
    return phase_;
  }

  int GetTurn() const {
    return turn_;
  }

  bool IsLoading() const;

  Party& GetParty(int partyType) {
    return parties_[partyType];
  }

  void ForEachUnit(const UnitCallback& func) const;
  std::weak_ptr<CmdBtlUnit> FindGlobal(int unitId) const;

  // Moves a temporary unit into a party.
  void TransferFromTemporary(int temporaryUnitId, int targetPartyType);

private:
  uint8_t unknown_08_[0x8];
  CameraDirector director_;
  Camera* camera_;
  uint8_t unknown_200_[0x20];
  CameraQuake* quake_;
  uint8_t unknown_228_[0x18];
  BattleRecord record_;
  int phase_;
  int turn_;
  uint8_t unknown_268_[0x38];
  Party parties_[4];
  uint8_t unknown_4a0_[0x14];
  uint32_t flags_;
};

#pragma GCC visibility pop

}

// The script natives read the manager through the global offset table.
[[gnu::visibility("default")]] extern game::cmdbtl::Manager* g_cmdbtl_manager;
