#pragma once

#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "ui/control/async_load_image.hpp"
#include "ui/control/element.hpp"
#include "ui/control/menu_item.hpp"
#include "ui/layout.hpp"
#include "ui/layout_control.hpp"
#include "ui/manager.hpp"

namespace game::gameui::control {

#pragma GCC visibility push(hidden)

// Owned helper objects whose concrete types are not recovered yet.
class OwnedObject {
public:
  virtual ~OwnedObject();
};

class IHelpable {
public:
  virtual void Unknown0() = 0;
  virtual void Unknown1() = 0;
  virtual void Unknown2();
};

class HelpableElement : public ui::control::Element, public IHelpable {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

  void Unknown0() override;
  void Unknown1() override;
  void Unknown2() override;
  virtual void Unknown46();

protected:
  HelpableElement(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  HelpableElement(const HelpableElement& source, nn::ui2d::Layout* layout)
    : Element(source, layout),
      unknown_410_(source.unknown_410_),
      unknown_414_(source.unknown_414_),
      help_(source.help_) {}

  uint32_t unknown_410_;
  uint8_t unknown_414_;
  std::string help_;
  uint8_t unknown_430_;
  uint8_t unknown_431_;
  uint8_t unknown_432_[2];
  int32_t unknown_434_;
};

class BattlePopup : public ui::ILayoutControl {
public:
  ~BattlePopup() override;

  void Update() override;
  bool IsVisible() const override;
  void SetVisible(bool visible) override;
  nn::ui2d::Size GetSize() const override;
  void SetSize(const nn::ui2d::Size& size) override;

  virtual void Unknown17();
  virtual void Unknown18();
  virtual void Unknown19();
  virtual void Unknown20();
  virtual void Unknown21();
  virtual void Unknown22();
  virtual void Unknown23();
  virtual void Unknown24();

protected:
  BattlePopup(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  BattlePopup(const BattlePopup& source, nn::ui2d::Layout* layout);

private:
  alignas(16) uint8_t unknown_50_[0xd0];
};

class KeyIcon : public ui::control::Element {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  ~KeyIcon() override {
    ui::Manager::instance_->RemoveEventListener(this);
  }

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  KeyIcon(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  KeyIcon(const KeyIcon& source, nn::ui2d::Layout* layout);

private:
  uint8_t unknown_408_[0x10];
};

class GmapTroopInfo : public KeyIcon {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  GmapTroopInfo(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  GmapTroopInfo(const GmapTroopInfo& source, nn::ui2d::Layout* layout);
};

class KeySort : public KeyIcon {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  KeySort(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  KeySort(const KeySort& source, nn::ui2d::Layout* layout);
};

class KeyArrow : public KeyIcon {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  KeyArrow(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  KeyArrow(const KeyArrow& source, nn::ui2d::Layout* layout);
};

class InfoDetails : public ui::control::Element {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

protected:
  InfoDetails(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  InfoDetails(const InfoDetails& source, nn::ui2d::Layout* layout);
};

class InfoDetailsItem : public InfoDetails {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

protected:
  InfoDetailsItem(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  InfoDetailsItem(const InfoDetailsItem& source, nn::ui2d::Layout* layout);
};

class InfoDetailsText : public InfoDetails {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

protected:
  InfoDetailsText(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  InfoDetailsText(const InfoDetailsText& source, nn::ui2d::Layout* layout);
};

class InfoDetailsAnimal : public InfoDetails {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

protected:
  InfoDetailsAnimal(const nn::ui2d::ControlSrc& source,
    nn::ui2d::Layout* layout, ui::Layout* owner);
  InfoDetailsAnimal(const InfoDetailsAnimal& source, nn::ui2d::Layout* layout);
};

class InfoDetailsLegion : public InfoDetails {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

protected:
  InfoDetailsLegion(const nn::ui2d::ControlSrc& source,
    nn::ui2d::Layout* layout, ui::Layout* owner);
  InfoDetailsLegion(const InfoDetailsLegion& source, nn::ui2d::Layout* layout);
};

class HelpGroup : public ui::control::Element {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

protected:
  HelpGroup(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  HelpGroup(const HelpGroup& source, nn::ui2d::Layout* layout);

private:
  uint8_t unknown_408_[0x8];
};

class BattleInfoSkillList : public HelpGroup {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

protected:
  BattleInfoSkillList(const nn::ui2d::ControlSrc& source,
    nn::ui2d::Layout* layout, ui::Layout* owner);
  BattleInfoSkillList(const BattleInfoSkillList& source,
    nn::ui2d::Layout* layout);

private:
  std::vector<std::weak_ptr<OwnedObject>> unknown_410_;
};

class BlnPopup : public ui::control::Element {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  BlnPopup(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  BlnPopup(const BlnPopup& source, nn::ui2d::Layout* layout);
};

class InfoTitle : public ui::control::Element {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  InfoTitle(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  InfoTitle(const InfoTitle& source, nn::ui2d::Layout* layout);

  void Initialize();
};

class StatusNum : public ui::control::Element {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  StatusNum(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  StatusNum(const StatusNum& source, nn::ui2d::Layout* layout);
};

class StatusName : public ui::control::Element {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  StatusName(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  StatusName(const StatusName& source, nn::ui2d::Layout* layout);
};

class FloatingHelp : public ui::control::Element {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  ~FloatingHelp() override;

protected:
  FloatingHelp(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  FloatingHelp(const FloatingHelp& source, nn::ui2d::Layout* layout);

private:
  uint8_t unknown_408_[0x48];
};

class BlazeGauge : public HelpableElement {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

protected:
  BlazeGauge(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  BlazeGauge(const BlazeGauge& source, nn::ui2d::Layout* layout);

private:
  uint8_t unknown_438_[0x28];
  std::string unknown_460_;
  uint8_t unknown_478_[0x10];
};

class IconLegion : public HelpableElement {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  IconLegion(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  IconLegion(const IconLegion& source, nn::ui2d::Layout* layout);

private:
  void* unknown_438_ = nullptr;
  void* unknown_440_ = nullptr;
  void* unknown_448_ = nullptr;
  void* unknown_450_ = nullptr;
  bool unknown_458_ = false;
  uint8_t unknown_459_[0x7];
};

class StatusItem : public HelpableElement {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  StatusItem(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  StatusItem(const StatusItem& source, nn::ui2d::Layout* layout);

  void Initialize();

private:
  std::weak_ptr<OwnedObject> unknown_438_{};
  std::weak_ptr<OwnedObject> unknown_448_{};
  uint64_t unknown_458_ = 0;
  uint64_t unknown_460_ = 0;
  uint32_t unknown_468_;
  uint8_t unknown_46c_[0x4];
  uint64_t unknown_470_ = 0;
  uint32_t unknown_478_ = 0;
  uint16_t unknown_47c_ = 0;
  uint8_t unknown_47e_[0x2];
};

class IconGimmick : public HelpableElement {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

protected:
  IconGimmick(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  IconGimmick(const IconGimmick& source, nn::ui2d::Layout* layout);
};

class MasteryInfo : public HelpableElement {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

protected:
  MasteryInfo(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  MasteryInfo(const MasteryInfo& source, nn::ui2d::Layout* layout);
};

class StatusClass : public HelpableElement {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  StatusClass(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  StatusClass(const StatusClass& source, nn::ui2d::Layout* layout);

  void Initialize();

private:
  uint64_t unknown_438_ = 0;
  std::weak_ptr<OwnedObject> unknown_440_{};
  std::weak_ptr<OwnedObject> unknown_450_{};
  bool unknown_460_ = false;
  uint8_t unknown_461_[0x7];
  uint64_t unknown_468_ = 0;
};

class StatusTotal : public HelpableElement {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  StatusTotal(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  StatusTotal(const StatusTotal& source, nn::ui2d::Layout* layout);
};

class UnitInfoClan : public HelpableElement {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

protected:
  UnitInfoClan(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  UnitInfoClan(const UnitInfoClan& source, nn::ui2d::Layout* layout);

private:
  void* unknown_438_ = nullptr;
};

class InfoItemSkill : public HelpableElement {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

protected:
  InfoItemSkill(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  InfoItemSkill(const InfoItemSkill& source, nn::ui2d::Layout* layout);

private:
  uint8_t unknown_438_[0x10];
};

class BattleInfoEquip : public HelpableElement {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

protected:
  BattleInfoEquip(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  BattleInfoEquip(const BattleInfoEquip& source, nn::ui2d::Layout* layout);

private:
  void* unknown_438_ = nullptr;
  void* unknown_440_ = nullptr;
  void* unknown_448_ = nullptr;
  uint16_t unknown_450_ = 0;
  uint8_t unknown_452_[0x6];
};

class BattleInfoStatus : public HelpableElement {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  BattleInfoStatus(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  BattleInfoStatus(const BattleInfoStatus& source, nn::ui2d::Layout* layout);

private:
  void* unknown_438_ = nullptr;
  uint8_t unknown_440_[0x8];
};

class BattleInfoReliance : public HelpableElement {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

protected:
  BattleInfoReliance(const nn::ui2d::ControlSrc& source,
    nn::ui2d::Layout* layout, ui::Layout* owner);
  BattleInfoReliance(const BattleInfoReliance& source,
    nn::ui2d::Layout* layout);

private:
  void* unknown_438_ = nullptr;
  void* unknown_440_ = nullptr;
};

class JobIcon : public HelpableElement {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  JobIcon(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  JobIcon(const JobIcon& source, nn::ui2d::Layout* layout);

private:
  uint8_t unknown_438_[0x20];
};

class StatusHP : public HelpableElement {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  StatusHP(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  StatusHP(const StatusHP& source, nn::ui2d::Layout* layout);

  void Initialize();

private:
  uint64_t unknown_438_ = 0;
  uint8_t unknown_440_[0x8];
  std::weak_ptr<OwnedObject> unknown_448_{};
};

class StatusLV : public HelpableElement {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  StatusLV(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  StatusLV(const StatusLV& source, nn::ui2d::Layout* layout);

  void Initialize();

private:
  std::weak_ptr<OwnedObject> unknown_438_{};
  uint8_t unknown_448_[0x10];
};

class UnitName : public HelpableElement {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  UnitName(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  UnitName(const UnitName& source, nn::ui2d::Layout* layout);

private:
  void* unknown_438_ = nullptr;
  void* unknown_440_ = nullptr;
};

class IconSkill : public HelpableElement {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

protected:
  IconSkill(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  IconSkill(const IconSkill& source, nn::ui2d::Layout* layout);

private:
  uint8_t unknown_438_[0x18];
  std::string unknown_450_;
};

class MenuItemInfo : public ui::control::MenuItem {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  MenuItemInfo(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  MenuItemInfo(const MenuItemInfo& source, nn::ui2d::Layout* layout);
};

class MenuItemRage : public ui::control::MenuItem {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  MenuItemRage(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  MenuItemRage(const MenuItemRage& source, nn::ui2d::Layout* layout);

  void Initialize();

private:
  uint8_t unknown_428_[0x8];
  std::unique_ptr<OwnedObject> unknown_430_{};
};

class MenuItemMorph : public ui::control::MenuItem {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  MenuItemMorph(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  MenuItemMorph(const MenuItemMorph& source, nn::ui2d::Layout* layout);

  void Initialize();

private:
  uint64_t unknown_428_ = 0;
  uint64_t unknown_430_ = 0;
  std::unique_ptr<OwnedObject> unknown_438_{};
  std::unique_ptr<OwnedObject> unknown_440_{};
  std::unique_ptr<OwnedObject> unknown_448_{};
  std::unique_ptr<OwnedObject> unknown_450_{};
  uint32_t unknown_458_ = 0;
  uint8_t unknown_45c_ = 0;
  uint8_t unknown_45d_[0x3];
};

class MenuItemAnimal : public ui::control::MenuItem {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  MenuItemAnimal(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  MenuItemAnimal(const MenuItemAnimal& source, nn::ui2d::Layout* layout);

  void Initialize();

private:
  uint8_t unknown_428_[0x8];
  uint32_t unknown_430_ = 0;
  uint8_t unknown_434_ = 0;
  uint8_t unknown_435_ = 0;
  uint8_t unknown_436_ = 0;
  uint8_t unknown_437_[0x1];
  std::unique_ptr<OwnedObject> unknown_438_{};
  std::unique_ptr<OwnedObject> unknown_440_{};
  std::unique_ptr<OwnedObject> unknown_448_{};
  std::unique_ptr<OwnedObject> unknown_450_{};
  std::unique_ptr<OwnedObject> unknown_458_{};
};

class MenuItemLegion : public ui::control::MenuItem {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  MenuItemLegion(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  MenuItemLegion(const MenuItemLegion& source, nn::ui2d::Layout* layout);

  void Initialize();

private:
  uint8_t unknown_428_[0x8];
  uint32_t unknown_430_ = 0;
  uint8_t unknown_434_ = 0;
  uint8_t unknown_435_[0x3];
  std::unique_ptr<OwnedObject> unknown_438_{};
  std::unique_ptr<OwnedObject> unknown_440_{};
  uint8_t unknown_448_ = 0;
  uint8_t unknown_449_[0x7];
};

class HPStock : public ui::ILayoutControl {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  ~HPStock() override;

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;
  void Update() override;
  bool IsVisible() const override;
  void SetVisible(bool visible) override;
  nn::ui2d::Size GetSize() const override;
  void SetSize(const nn::ui2d::Size& size) override;

protected:
  HPStock(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  HPStock(const HPStock& source, nn::ui2d::Layout* layout);

private:
  uint8_t unknown_48_[0x68];
};

class BattlePopupBlaze : public BattlePopup {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  ~BattlePopupBlaze() override;

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  BattlePopupBlaze(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  BattlePopupBlaze(const BattlePopupBlaze& source, nn::ui2d::Layout* layout);

private:
  uint8_t unknown_120_[0x40];
};

class BattlePopupDamage : public BattlePopup {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  ~BattlePopupDamage() override;

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  BattlePopupDamage(const nn::ui2d::ControlSrc& source,
    nn::ui2d::Layout* layout, ui::Layout* owner);
  BattlePopupDamage(const BattlePopupDamage& source, nn::ui2d::Layout* layout);
};

class AsyncLoadThumbImage : public ui::control::AsyncLoadImage {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  ~AsyncLoadThumbImage() override;

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

protected:
  AsyncLoadThumbImage(const nn::ui2d::ControlSrc& source,
    nn::ui2d::Layout* layout, ui::Layout* owner);
  AsyncLoadThumbImage(const AsyncLoadThumbImage& source,
    nn::ui2d::Layout* layout);

private:
  int64_t unknown_f8_ = -1;
  bool unknown_100_ = true;
  uint8_t unknown_101_[0x7];
};

class MenuItemItem : public ui::control::GenericMenuItem, public IHelpable {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

  void Unknown0() override;
  void Unknown1() override;

protected:
  MenuItemItem(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  MenuItemItem(const MenuItemItem& source, nn::ui2d::Layout* layout);

private:
  uint8_t unknown_430_[0x18];
};

class MenuItemSkill : public ui::control::GenericMenuItem, public IHelpable {
public:
  static std::shared_ptr<ui::ILayoutControl> CreateControl(
    const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);

  std::shared_ptr<ui::ILayoutControl> Clone(
    nn::ui2d::Layout* layout) const override;

  void Unknown0() override;
  void Unknown1() override;

protected:
  MenuItemSkill(const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
    ui::Layout* owner);
  MenuItemSkill(const MenuItemSkill& source, nn::ui2d::Layout* layout);

private:
  uint8_t unknown_430_[0x28];
  std::weak_ptr<OwnedObject> unknown_458_;
  uint8_t unknown_468_[0x8];
};

#pragma GCC visibility pop

}
