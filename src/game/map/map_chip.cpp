#include <stdio.h>

#include <memory>
#include <string>

#include "game/map/trick.hpp"
#include "game/map/unit.hpp"
#include "ui/ui2d.hpp"
#include "ui/layout_accessor.hpp"
#include "ui/manager.hpp"

namespace game::map {

namespace {

constexpr uint32_t kWhite = 0xffffffff;
constexpr uint32_t kDoneColor = 0xff808080;

void ApplyIcon(nn::ui2d::Pane* pane, const char* name) {
  if (pane != nullptr) {
    ui::Manager::instance_->GetIcons().Apply(pane, 0, 8, name);
  }
}

}

// The vtables are addressed through the GOT, so these keep the default
// visibility.
class MapChip {
public:
  virtual ~MapChip() = default;

  virtual void Setup(const std::weak_ptr<ui::LayoutAccessor>& layout,
    int index) {}

  virtual void SetPosition(nn::ui2d::Pane* pane, float x, float y) {
    pane->SetTranslate({x, y, 0.0f});
  }

  virtual void SetIcon(nn::ui2d::Pane* pane) {}

  virtual void SetRotation(nn::ui2d::Pane* pane, float angle) {
    pane->SetRotate({0.0f, 0.0f, angle});
  }

  virtual void Update(const std::weak_ptr<ui::LayoutAccessor>& layout) {}

protected:
  // Copies the first chip part of the layout and hides the new copy.
  [[gnu::always_inline]] std::shared_ptr<ui::LayoutAccessor> CreatePart(
      const std::shared_ptr<ui::LayoutAccessor>& layout, const char* format,
      const char* first, const char* parent, int index) {
    char name[32];
    sprintf(name, format, index);
    name_ = name;
    if (index >= 1) {
      layout->CopyPane(first, parent, name);
    }
    return layout->GetPart(name).lock();
  }

  std::string name_;
  float scale_ = 1.0f;
};

class ObjectMapChip : public MapChip {
public:
  void Setup(const std::weak_ptr<ui::LayoutAccessor>& layout,
      int index) override {
    if (std::shared_ptr<ui::LayoutAccessor> owner = layout.lock()) {
      if (std::shared_ptr<ui::LayoutAccessor> part = CreatePart(owner,
          "L_Object%d", "L_Object0", "N_Object", index)) {
        part->SetVisible(false);
      }
    }
  }

  virtual void Place(const std::weak_ptr<ui::LayoutAccessor>& layout,
      int& count, float x, float y, float angle) {
    if (std::shared_ptr<ui::LayoutAccessor> owner = layout.lock()) {
      if (std::shared_ptr<ui::LayoutAccessor> part =
          owner->GetPart(name_.c_str()).lock()) {
        part->SetTranslate({x, y, 0.0f});
        part->SetVisible(true);
        if (nn::ui2d::Pane* pane = part->FindPane("MapChip_Object")) {
          if (auto* picture = dynamic_cast<nn::ui2d::Picture*>(pane)) {
            SetIcon(picture);
            SetRotation(picture, angle);
            picture->SetSize({scale_, scale_});
          }
        }
        if (nn::ui2d::Pane* top = part->FindPane("N_Top")) {
          top->SetSize({scale_, scale_});
        }
      }
      ++count;
    }
  }

protected:
  int state_ = 0;
};

class TerrainMapChip : public MapChip {
public:
  void Setup(const std::weak_ptr<ui::LayoutAccessor>& layout,
      int index) override {
    if (std::shared_ptr<ui::LayoutAccessor> owner = layout.lock()) {
      char name[32];
      sprintf(name, "L_Terrain%d", index);
      name_ = name;
      if (index >= 1) {
        owner->CopyPane("L_Terrain0", "N_Terrain", name);
      }
      if (nn::ui2d::Pane* pane = owner->FindPane(name)) {
        pane->SetVisible(false);
      }
    }
  }

  virtual void Place(const std::weak_ptr<ui::LayoutAccessor>& layout,
      int& count, float x, float y, float angle) {
    if (std::shared_ptr<ui::LayoutAccessor> owner = layout.lock()) {
      if (std::shared_ptr<ui::LayoutAccessor> part =
          owner->GetPart(name_.c_str()).lock()) {
        part->SetTranslate({x, y, 0.0f});
        part->SetVisible(true);
        if (nn::ui2d::Pane* pane = part->FindPane("MapChip_Terrain")) {
          if (auto* picture = dynamic_cast<nn::ui2d::Picture*>(pane)) {
            SetIcon(picture);
            SetRotation(picture, angle);
            picture->SetSize({kScale, kScale});
          }
        }
        if (nn::ui2d::Pane* top = part->FindPane("N_Top")) {
          top->SetSize({kScale, kScale});
        }
      }
      ++count;
    }
  }

private:
  static constexpr float kScale = 16.0f;
};

class UnitChip : public MapChip {
public:
  void Update(const std::weak_ptr<ui::LayoutAccessor>& layout) override;

  virtual int GetForce() const {
    return 9;
  }

  virtual void Place(const std::weak_ptr<ui::LayoutAccessor>& layout,
      int& count, float x, float y, float angle);

  void Setup(const std::weak_ptr<ui::LayoutAccessor>& layout,
      int index) override {
    if (std::shared_ptr<ui::LayoutAccessor> owner = layout.lock()) {
      if (std::shared_ptr<ui::LayoutAccessor> part = CreatePart(owner,
          "L_Unit%d", "L_Unit0", "N_Unit", index)) {
        part->SetVisible(false);
      }
    }
  }

protected:
  void ApplyUnitIcon(nn::ui2d::Pane* pane, const char* name) {
    ApplyIcon(pane, name);
    icon_ = ui::Manager::instance_->GetIcons().Find(8, name);
  }

  [[gnu::always_inline]] void ApplySizedIcon(nn::ui2d::Pane* pane,
      const std::string& suffix) {
    if (unit_->GetSize() < 2) {
      std::string name = "Battle_MiniMap_Unit";
      name += suffix;
      ApplyUnitIcon(pane, name.c_str());
      return;
    }
    if (unit_->GetSize() == 2) {
      std::string name = "Battle_MiniMap_Unit2x2";
      name += suffix;
      ApplyUnitIcon(pane, name.c_str());
    }
    if (unit_->GetSize() == 3) {
      std::string name = "Battle_MiniMap_Unit3x3";
      name += suffix;
      ApplyUnitIcon(pane, name.c_str());
    }
  }

  int unknown_24_ = 0;
  const Unit* unit_ = nullptr;
  const ui::IconTexture* icon_ = nullptr;
  int origin_x_ = 0;
  int origin_z_ = 0;
  float offset_ = 0.0f;
  int height_ = 0;
  float cell_ = 0.0f;
};

void UnitChip::Place(const std::weak_ptr<ui::LayoutAccessor>& layout,
    int& count, float x, float y, float angle) {
  if (unit_ == nullptr || unit_->GetForceType() != GetForce()) {
    return;
  }

  // Large units cover more cells from their origin.
  float size = 1.0f;
  switch (unit_->GetSize()) {
    case 3:
      size = 3.0f;
      x += 0.0f;
      y += scale_ * 2.0f;
      break;
    case 2:
      size = 2.0f;
      x += 0.0f;
      y += scale_;
      break;
  }

  if (std::shared_ptr<ui::LayoutAccessor> owner = layout.lock()) {
    if (std::shared_ptr<ui::LayoutAccessor> part =
        owner->GetPart(name_.c_str()).lock()) {
      part->SetTranslate({x, y, 0.0f});
      part->SetVisible(true);
      part->SetPaneSize(name_.c_str(), size * scale_, size * scale_);
      if (nn::ui2d::Pane* top = part->FindPane("N_Top")) {
        top->SetSize({size * scale_, size * scale_});
      }
      if (nn::ui2d::Pane* pane = part->FindPane("MapChip_Unit")) {
        if (auto* picture = dynamic_cast<nn::ui2d::Picture*>(pane)) {
          SetIcon(picture);
          SetRotation(picture, angle);
          picture->SetSize({scale_, scale_});
          float extent = size * scale_;
          if (icon_ != nullptr) {
            const float width = icon_->GetSize().width;
            if (extent < width) {
              extent = width;
            }
          }
          const float ratio = extent / picture->GetSize().width;
          picture->SetScale({ratio, ratio});
        }
      }
    }
    ++count;
  }
}

void UnitChip::Update(const std::weak_ptr<ui::LayoutAccessor>& layout) {
  if (std::shared_ptr<ui::LayoutAccessor> owner = layout.lock()) {
    if (std::shared_ptr<ui::LayoutAccessor> part =
        owner->GetPart(name_.c_str()).lock()) {
      if (unit_ == nullptr || !unit_->IsOnMap()) {
        part->SetVisible(false);
        return;
      }
    }
  }

  float x = -(offset_ + cell_ * (unit_->GetX() - origin_x_));
  float y = -(offset_ + cell_ * (origin_z_ + ~unit_->GetZ() + height_));
  switch (unit_->GetSize()) {
    case 3:
      x = 0.0f + x;
      y = scale_ * 2.0f + y;
      break;
    case 2:
      x = 0.0f + x;
      y = scale_ + y;
      break;
  }

  if (std::shared_ptr<ui::LayoutAccessor> owner = layout.lock()) {
    if (std::shared_ptr<ui::LayoutAccessor> part =
        owner->GetPart(name_.c_str()).lock()) {
      part->SetTranslate({x, y, 0.0f});
      if (nn::ui2d::Pane* pane = part->FindPane("MapChip_Unit")) {
        if (auto* picture = dynamic_cast<nn::ui2d::Picture*>(pane)) {
          picture->SetColor(unit_->IsDone() ? kDoneColor : kWhite);
        }
      }
    }
  }
}

class TrasureChip : public ObjectMapChip {
public:
  void SetIcon(nn::ui2d::Pane* pane) override {
    if (pane == nullptr) {
      return;
    }

    const char* name;
    if (static_cast<uint8_t>(state_) != 0) {
      name = "Battle_MiniMap_Object_Treasure";
    }
    else {
      name = "Battle_MiniMap_Object_TreasureOpened";
    }
    ui::Manager::instance_->GetIcons().Apply(pane, 0, 8, name);
  }
};

class GimmickChip : public ObjectMapChip {
public:
  void SetIcon(nn::ui2d::Pane* pane) override {
    const char* name = "Battle_MiniMap_Object_Device";
    if (trick_ != nullptr) {
      if (trick_->GetStatus() == 0) {
        name = "Battle_MiniMap_Object_Device_Blue";
      }
      else if (trick_->GetStatus() == 1) {
        name = "Battle_MiniMap_Object_Device_Red";
      }
    }
    ApplyIcon(pane, name);
  }

  void Update(const std::weak_ptr<ui::LayoutAccessor>& layout) override {
    if (trick_ == nullptr || status_ == trick_->GetStatus()) {
      return;
    }
    status_ = trick_->GetStatus();

    if (std::shared_ptr<ui::LayoutAccessor> owner = layout.lock()) {
      if (std::shared_ptr<ui::LayoutAccessor> part =
          owner->GetPart(name_.c_str()).lock()) {
        if (nn::ui2d::Pane* pane = part->FindPane("MapChip_Object")) {
          if (auto* picture = dynamic_cast<nn::ui2d::Picture*>(pane)) {
            SetIcon(picture);
          }
        }
      }
    }
  }

private:
  const TrickData* trick_ = nullptr;
  uint8_t status_ = 0;
};

class CannonChip : public ObjectMapChip {
public:
  void SetIcon(nn::ui2d::Pane* pane) override {
    ApplyIcon(pane, "Battle_MiniMapLarge_Object_Cannon");
  }
};

class DestructibleChip : public ObjectMapChip {
public:
  void SetIcon(nn::ui2d::Pane* pane) override {
    ApplyIcon(pane, "Battle_MiniMap_Object_Destructible");
  }
};

class DoorChip : public ObjectMapChip {
public:
  void SetIcon(nn::ui2d::Pane* pane) override {
    ApplyIcon(pane, "Battle_MiniMap_Object_Door");
  }
};

class BarrierChip : public ObjectMapChip {
public:
  void SetIcon(nn::ui2d::Pane* pane) override {
    if (pane == nullptr) {
      return;
    }

    const char* name;
    switch (state_) {
      case 1:
        name = "Battle_MiniMap_Object_Barrier_0";
        break;
      case 2:
        name = "Battle_MiniMap_Object_Barrier_0_2";
        break;
      case 3:
        name = "Battle_MiniMap_Object_Barrier_1";
        break;
      case 4:
        name = "Battle_MiniMap_Object_Barrier_2";
        break;
      case 5:
        name = "Battle_MiniMap_Object_Barrier_2_2";
        break;
      case 6:
        name = "Battle_MiniMap_Object_Barrier_3";
        break;
      case 7:
        name = "Battle_MiniMap_Object_Barrier_4";
        break;
      default:
        return;
    }
    ui::Manager::instance_->GetIcons().Apply(pane, 0, 8, name);
  }
};

class WarpArrow : public MapChip {
public:
  void Setup(const std::weak_ptr<ui::LayoutAccessor>& layout,
    int index) override;
  void Update(const std::weak_ptr<ui::LayoutAccessor>& layout) override;

private:
  uint8_t unknown_24_[0x4c];
};

class WarpChip : public ObjectMapChip {
public:
  ~WarpChip() override;

  void Setup(const std::weak_ptr<ui::LayoutAccessor>& layout,
    int index) override;

  void SetIcon(nn::ui2d::Pane* pane) override {
    if (pane == nullptr) {
      return;
    }

    const char* name;
    if (selected_) {
      name = "Battle_MiniMap_Object_Warp_Select";
    }
    else {
      name = "Battle_MiniMap_Object_Warp";
    }
    ui::Manager::instance_->GetIcons().Apply(pane, 0, 8, name);
  }

  void Update(const std::weak_ptr<ui::LayoutAccessor>& layout) override;

private:
  WarpArrow arrow_;
  bool selected_ = false;
};

WarpChip::~WarpChip() = default;

class PlainChip : public TerrainMapChip {
public:
  void SetIcon(nn::ui2d::Pane* pane) override {
    ApplyIcon(pane, "Battle_MiniMap_Terrain_Plain");
  }
};

class FlyChip : public TerrainMapChip {
public:
  void SetIcon(nn::ui2d::Pane* pane) override {
    ApplyIcon(pane, "Battle_MiniMap_Terrain_Fly");
  }
};

class RecoveryChip : public TerrainMapChip {
public:
  void SetIcon(nn::ui2d::Pane* pane) override {
    ApplyIcon(pane, "Battle_MiniMap_Terrain_Recovery");
  }
};

class QuicksandChip : public TerrainMapChip {
public:
  void SetIcon(nn::ui2d::Pane* pane) override {
    ApplyIcon(pane, "Battle_MiniMapLarge_Terrain_Quicksand");
  }
};

class PlayerChip : public UnitChip {
public:
  int GetForce() const override {
    return 0;
  }

  void SetIcon(nn::ui2d::Pane* pane) override {
    if (unit_ == nullptr) {
      return;
    }
    if (unit_->GetSize() < 2) {
      ApplyUnitIcon(pane, "Battle_MiniMap_Unit_Player");
      return;
    }
    if (unit_->GetSize() == 2) {
      ApplyUnitIcon(pane, "Battle_MiniMap_Unit2x2_Player");
    }
    if (unit_->GetSize() == 3) {
      ApplyUnitIcon(pane, "Battle_MiniMap_Unit3x3_Player");
    }
  }
};

class AllyChip : public UnitChip {
public:
  int GetForce() const override {
    return 3;
  }

  void SetIcon(nn::ui2d::Pane* pane) override {
    if (unit_ == nullptr) {
      return;
    }
    if (unit_->GetSize() < 2) {
      ApplyUnitIcon(pane, "Battle_MiniMap_Unit_Ally");
      return;
    }
    if (unit_->GetSize() == 2) {
      ApplyUnitIcon(pane, "Battle_MiniMap_Unit2x2_Ally");
    }
    if (unit_->GetSize() == 3) {
      ApplyUnitIcon(pane, "Battle_MiniMap_Unit3x3_Ally");
    }
  }
};

class GuestChip : public UnitChip {
public:
  int GetForce() const override {
    return 0;
  }

  void SetIcon(nn::ui2d::Pane* pane) override {
    if (unit_ == nullptr) {
      return;
    }
    if (unit_->GetSize() < 2) {
      ApplyUnitIcon(pane, "Battle_MiniMap_Unit_Guest");
      return;
    }
    if (unit_->GetSize() == 2) {
      ApplyUnitIcon(pane, "Battle_MiniMap_Unit2x2_Guest");
    }
    if (unit_->GetSize() == 3) {
      ApplyUnitIcon(pane, "Battle_MiniMap_Unit3x3_Guest");
    }
  }
};

class EnemyChip : public UnitChip {
public:
  int GetForce() const override {
    return 1;
  }

  void SetIcon(nn::ui2d::Pane* pane) override {
    std::string suffix = "_Enemy";
    if (strong_) {
      suffix.append("Strong");
    }
    ApplySizedIcon(pane, suffix);
  }

protected:
  uint8_t unknown_38_[0x14] = {};
  bool strong_ = false;
};

class ThirdChip : public UnitChip {
public:
  int GetForce() const override {
    return 2;
  }

  void SetIcon(nn::ui2d::Pane* pane) override {
    std::string suffix = "_Third";
    if (strong_) {
      suffix.append("Strong");
    }
    ApplySizedIcon(pane, suffix);
  }

protected:
  uint8_t unknown_38_[0x14] = {};
  bool strong_ = false;
};

class EnemyLeaderChip : public UnitChip {
public:
  int GetForce() const override {
    return 1;
  }

  void Setup(const std::weak_ptr<ui::LayoutAccessor>& layout,
      int index) override {
    if (std::shared_ptr<ui::LayoutAccessor> owner = layout.lock()) {
      if (std::shared_ptr<ui::LayoutAccessor> part = CreatePart(owner,
          "L_Unit_EnemyLeader%d", "L_Unit_EnemyLeader0", "N_Unit", index)) {
        part->SetVisible(false);
        part->PlayAnimation("Loop", 1.0f);
      }
    }
  }

  void SetIcon(nn::ui2d::Pane* pane) override {
    if (unit_->GetSize() < 2) {
      ApplyUnitIcon(pane, "Battle_MiniMap_Unit_EnemyLeader");
      return;
    }
    if (unit_->GetSize() == 2) {
      ApplyUnitIcon(pane, "Battle_MiniMap_Unit2x2_EnemyLeader");
    }
    if (unit_->GetSize() == 3) {
      ApplyUnitIcon(pane, "Battle_MiniMap_Unit3x3_EnemyLeader");
    }
  }
};

class ThirdLeaderChip : public UnitChip {
public:
  int GetForce() const override {
    return 2;
  }

  void Setup(const std::weak_ptr<ui::LayoutAccessor>& layout,
      int index) override {
    if (std::shared_ptr<ui::LayoutAccessor> owner = layout.lock()) {
      if (std::shared_ptr<ui::LayoutAccessor> part = CreatePart(owner,
          "L_Unit_ThirdLeader%d", "L_Unit_ThirdLeader0", "N_Unit", index)) {
        part->SetVisible(false);
        part->PlayAnimation("Loop", 1.0f);
      }
    }
  }

  void SetIcon(nn::ui2d::Pane* pane) override {
    if (unit_->GetSize() < 2) {
      ApplyUnitIcon(pane, "Battle_MiniMap_Unit_ThirdLeader");
      return;
    }
    if (unit_->GetSize() == 2) {
      ApplyUnitIcon(pane, "Battle_MiniMap_Unit2x2_ThirdLeader");
    }
    if (unit_->GetSize() == 3) {
      ApplyUnitIcon(pane, "Battle_MiniMap_Unit3x3_ThirdLeader");
    }
  }
};

[[gnu::used]] MapChip* CreateChip(int kind) {
  switch (kind) {
    case 0:
      return new MapChip();
    case 1:
      return new TrasureChip();
    case 2:
      return new GimmickChip();
    case 3:
      return new CannonChip();
    case 4:
      return new DestructibleChip();
    case 5:
      return new DoorChip();
    case 6:
      return new BarrierChip();
    case 7:
      return new PlainChip();
    case 8:
      return new FlyChip();
    case 9:
      return new RecoveryChip();
    case 10:
      return new QuicksandChip();
    case 11:
      return new UnitChip();
    case 12:
      return new PlayerChip();
    case 13:
      return new EnemyChip();
    case 14:
      return new EnemyLeaderChip();
    case 15:
      return new ThirdChip();
    case 16:
      return new ThirdLeaderChip();
    case 17:
      return new AllyChip();
    default:
      return new GuestChip();
  }
}

}
