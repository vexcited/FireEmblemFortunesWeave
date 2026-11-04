#include "ui/game/controls.hpp"

namespace game::gameui::control {

std::shared_ptr<ui::ILayoutControl> KeyIcon::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<KeyIcon>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> KeyIcon::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<KeyIcon>(*this, layout);
}

std::shared_ptr<ui::ILayoutControl> GmapTroopInfo::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<GmapTroopInfo>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> GmapTroopInfo::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<GmapTroopInfo>(*this, layout);
}

KeySort::KeySort(const nn::ui2d::ControlSrc& source,
  nn::ui2d::Layout* layout, ui::Layout* owner)
  : KeyIcon(source, layout, owner) {
  GetRootPane()->SetVisible(false);
}

std::shared_ptr<ui::ILayoutControl> KeySort::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<KeySort>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> KeySort::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<KeySort>(*this, layout);
}

std::shared_ptr<ui::ILayoutControl> KeyArrow::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<KeyArrow>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> KeyArrow::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<KeyArrow>(*this, layout);
}

std::shared_ptr<ui::ILayoutControl> InfoDetails::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<InfoDetails>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> InfoDetailsItem::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<InfoDetailsItem>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> InfoDetailsText::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<InfoDetailsText>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> InfoDetailsAnimal::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<InfoDetailsAnimal>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> InfoDetailsLegion::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<InfoDetailsLegion>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> HelpGroup::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<HelpGroup>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> BattleInfoSkillList::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<BattleInfoSkillList>(source, layout, owner);
}

BlnPopup::BlnPopup(const BlnPopup& source, nn::ui2d::Layout* layout)
  : Element(source, layout) {
  unknown_404_ = source.unknown_404_;
  GetRootPane()->SetVisible(false);
}

std::shared_ptr<ui::ILayoutControl> BlnPopup::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<BlnPopup>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> BlnPopup::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<BlnPopup>(*this, layout);
}

InfoTitle::InfoTitle(const InfoTitle& source, nn::ui2d::Layout* layout)
  : Element(source, layout) {
  Initialize();
}

std::shared_ptr<ui::ILayoutControl> InfoTitle::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<InfoTitle>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> InfoTitle::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<InfoTitle>(*this, layout);
}

StatusNum::StatusNum(const StatusNum& source, nn::ui2d::Layout* layout)
  : Element(source, layout) {
  if (nn::ui2d::Pane* pane = FindPane("IconUpDown")) {
    pane->SetVisible(false);
  }
  if (nn::ui2d::Pane* pane = FindPane("Max")) {
    pane->SetVisible(false);
  }
}

std::shared_ptr<ui::ILayoutControl> StatusNum::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<StatusNum>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> StatusNum::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<StatusNum>(*this, layout);
}

StatusName::StatusName(const StatusName& source, nn::ui2d::Layout* layout)
  : Element(source, layout) {
  if (nn::ui2d::Pane* pane = FindPane("Icon")) {
    pane->SetVisible(false);
  }
  if (nn::ui2d::Pane* pane = FindPane("IconDamage")) {
    pane->SetVisible(false);
  }
}

std::shared_ptr<ui::ILayoutControl> StatusName::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<StatusName>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> StatusName::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<StatusName>(*this, layout);
}

std::shared_ptr<ui::ILayoutControl> FloatingHelp::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<FloatingHelp>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> BlazeGauge::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<BlazeGauge>(source, layout, owner);
}

IconLegion::IconLegion(const IconLegion& source, nn::ui2d::Layout* layout)
  : HelpableElement(source, layout) {}

std::shared_ptr<ui::ILayoutControl> IconLegion::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<IconLegion>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> IconLegion::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<IconLegion>(*this, layout);
}

StatusItem::StatusItem(const StatusItem& source, nn::ui2d::Layout* layout)
  : HelpableElement(source, layout),
    unknown_468_(source.unknown_468_) {
  Initialize();
}

std::shared_ptr<ui::ILayoutControl> StatusItem::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<StatusItem>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> StatusItem::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<StatusItem>(*this, layout);
}

IconGimmick::IconGimmick(const nn::ui2d::ControlSrc& source,
  nn::ui2d::Layout* layout, ui::Layout* owner)
  : HelpableElement(source, layout, owner) {
  unknown_434_ = -1;
  GetRootPane()->SetVisible(false);
}

std::shared_ptr<ui::ILayoutControl> IconGimmick::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<IconGimmick>(source, layout, owner);
}

MasteryInfo::MasteryInfo(const nn::ui2d::ControlSrc& source,
  nn::ui2d::Layout* layout, ui::Layout* owner)
  : HelpableElement(source, layout, owner) {
  unknown_431_ = 15;
}

std::shared_ptr<ui::ILayoutControl> MasteryInfo::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<MasteryInfo>(source, layout, owner);
}

StatusClass::StatusClass(const StatusClass& source, nn::ui2d::Layout* layout)
  : HelpableElement(source, layout) {
  Initialize();
}

std::shared_ptr<ui::ILayoutControl> StatusClass::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<StatusClass>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> StatusClass::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<StatusClass>(*this, layout);
}

StatusTotal::StatusTotal(const StatusTotal& source, nn::ui2d::Layout* layout)
  : HelpableElement(source, layout) {
  unknown_434_ = 0;
}

std::shared_ptr<ui::ILayoutControl> StatusTotal::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<StatusTotal>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> StatusTotal::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<StatusTotal>(*this, layout);
}

UnitInfoClan::UnitInfoClan(const nn::ui2d::ControlSrc& source,
  nn::ui2d::Layout* layout, ui::Layout* owner)
  : HelpableElement(source, layout, owner) {}

std::shared_ptr<ui::ILayoutControl> UnitInfoClan::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<UnitInfoClan>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> InfoItemSkill::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<InfoItemSkill>(source, layout, owner);
}

BattleInfoEquip::BattleInfoEquip(const nn::ui2d::ControlSrc& source,
  nn::ui2d::Layout* layout, ui::Layout* owner)
  : HelpableElement(source, layout, owner) {}

std::shared_ptr<ui::ILayoutControl> BattleInfoEquip::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<BattleInfoEquip>(source, layout, owner);
}

BattleInfoStatus::BattleInfoStatus(const BattleInfoStatus& source,
  nn::ui2d::Layout* layout)
  : HelpableElement(source, layout) {}

std::shared_ptr<ui::ILayoutControl> BattleInfoStatus::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<BattleInfoStatus>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> BattleInfoStatus::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<BattleInfoStatus>(*this, layout);
}

BattleInfoReliance::BattleInfoReliance(const nn::ui2d::ControlSrc& source,
  nn::ui2d::Layout* layout, ui::Layout* owner)
  : HelpableElement(source, layout, owner) {}

std::shared_ptr<ui::ILayoutControl> BattleInfoReliance::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<BattleInfoReliance>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> JobIcon::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<JobIcon>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> JobIcon::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<JobIcon>(*this, layout);
}

StatusHP::StatusHP(const StatusHP& source, nn::ui2d::Layout* layout)
  : HelpableElement(source, layout) {
  Initialize();
}

std::shared_ptr<ui::ILayoutControl> StatusHP::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<StatusHP>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> StatusHP::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<StatusHP>(*this, layout);
}

StatusLV::StatusLV(const StatusLV& source, nn::ui2d::Layout* layout)
  : HelpableElement(source, layout) {
  Initialize();
}

std::shared_ptr<ui::ILayoutControl> StatusLV::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<StatusLV>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> StatusLV::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<StatusLV>(*this, layout);
}

UnitName::UnitName(const UnitName& source, nn::ui2d::Layout* layout)
  : HelpableElement(source, layout) {}

std::shared_ptr<ui::ILayoutControl> UnitName::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<UnitName>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> UnitName::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<UnitName>(*this, layout);
}

std::shared_ptr<ui::ILayoutControl> IconSkill::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<IconSkill>(source, layout, owner);
}

MenuItemInfo::MenuItemInfo(const nn::ui2d::ControlSrc& source,
  nn::ui2d::Layout* layout, ui::Layout* owner)
  : MenuItem(source, layout, owner) {
  SetMessage("MID_Sys_ValueEmptyLong");
}

MenuItemInfo::MenuItemInfo(const MenuItemInfo& source, nn::ui2d::Layout* layout)
  : MenuItem(source, layout) {
  SetMessage("MID_Sys_ValueEmptyLong");
}

std::shared_ptr<ui::ILayoutControl> MenuItemInfo::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<MenuItemInfo>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> MenuItemInfo::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<MenuItemInfo>(*this, layout);
}

MenuItemRage::MenuItemRage(const nn::ui2d::ControlSrc& source,
  nn::ui2d::Layout* layout, ui::Layout* owner)
  : MenuItem(source, layout, owner) {
  Initialize();
}

MenuItemRage::MenuItemRage(const MenuItemRage& source, nn::ui2d::Layout* layout)
  : MenuItem(source, layout) {
  Initialize();
}

std::shared_ptr<ui::ILayoutControl> MenuItemRage::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<MenuItemRage>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> MenuItemRage::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<MenuItemRage>(*this, layout);
}

MenuItemMorph::MenuItemMorph(const nn::ui2d::ControlSrc& source,
  nn::ui2d::Layout* layout, ui::Layout* owner)
  : MenuItem(source, layout, owner) {
  Initialize();
}

MenuItemMorph::MenuItemMorph(const MenuItemMorph& source,
  nn::ui2d::Layout* layout)
  : MenuItem(source, layout) {
  Initialize();
}

std::shared_ptr<ui::ILayoutControl> MenuItemMorph::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<MenuItemMorph>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> MenuItemMorph::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<MenuItemMorph>(*this, layout);
}

MenuItemAnimal::MenuItemAnimal(const nn::ui2d::ControlSrc& source,
  nn::ui2d::Layout* layout, ui::Layout* owner)
  : MenuItem(source, layout, owner) {
  Initialize();
}

MenuItemAnimal::MenuItemAnimal(const MenuItemAnimal& source,
  nn::ui2d::Layout* layout)
  : MenuItem(source, layout) {
  Initialize();
}

std::shared_ptr<ui::ILayoutControl> MenuItemAnimal::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<MenuItemAnimal>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> MenuItemAnimal::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<MenuItemAnimal>(*this, layout);
}

MenuItemLegion::MenuItemLegion(const nn::ui2d::ControlSrc& source,
  nn::ui2d::Layout* layout, ui::Layout* owner)
  : MenuItem(source, layout, owner) {
  Initialize();
}

MenuItemLegion::MenuItemLegion(const MenuItemLegion& source,
  nn::ui2d::Layout* layout)
  : MenuItem(source, layout) {
  Initialize();
}

std::shared_ptr<ui::ILayoutControl> MenuItemLegion::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<MenuItemLegion>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> MenuItemLegion::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<MenuItemLegion>(*this, layout);
}

std::shared_ptr<ui::ILayoutControl> HPStock::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<HPStock>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> HPStock::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<HPStock>(*this, layout);
}

std::shared_ptr<ui::ILayoutControl> BattlePopupBlaze::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<BattlePopupBlaze>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> BattlePopupBlaze::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<BattlePopupBlaze>(*this, layout);
}

std::shared_ptr<ui::ILayoutControl> BattlePopupDamage::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<BattlePopupDamage>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> BattlePopupDamage::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<BattlePopupDamage>(*this, layout);
}

AsyncLoadThumbImage::AsyncLoadThumbImage(const nn::ui2d::ControlSrc& source,
  nn::ui2d::Layout* layout, ui::Layout* owner)
  : AsyncLoadImage(source, layout, owner) {}

AsyncLoadThumbImage::AsyncLoadThumbImage(const AsyncLoadThumbImage& source,
  nn::ui2d::Layout* layout)
  : AsyncLoadImage(source, layout) {}

std::shared_ptr<ui::ILayoutControl> AsyncLoadThumbImage::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<AsyncLoadThumbImage>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> AsyncLoadThumbImage::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<AsyncLoadThumbImage>(*this, layout);
}

std::shared_ptr<ui::ILayoutControl> HelpableElement::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<HelpableElement>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> HelpableElement::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<HelpableElement>(*this, layout);
}

std::shared_ptr<ui::ILayoutControl> MenuItemItem::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<MenuItemItem>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> MenuItemItem::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<MenuItemItem>(*this, layout);
}

std::shared_ptr<ui::ILayoutControl> MenuItemSkill::CreateControl(
  const nn::ui2d::ControlSrc& source, nn::ui2d::Layout* layout,
  ui::Layout* owner) {
  return Create<MenuItemSkill>(source, layout, owner);
}

std::shared_ptr<ui::ILayoutControl> MenuItemSkill::Clone(
  nn::ui2d::Layout* layout) const {
  return Create<MenuItemSkill>(*this, layout);
}

}
