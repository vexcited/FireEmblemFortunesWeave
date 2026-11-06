#include <memory>
#include <string_view>

#include "ui/control/element.hpp"
#include "ui/control/embedded_image.hpp"
#include "ui/control/menu_item.hpp"
#include "ui/control/text_box_ex.hpp"
#include "ui/game/controls.hpp"
#include "ui/layout.hpp"
#include "ui/layout_accessor.hpp"

namespace ui {

using namespace control;
using namespace game::gameui::control;
using Name = const std::string_view&;

// Every unit looking a control up instantiates these, the original keeps
// one copy of each next to its first user.

template std::weak_ptr<TextBoxEx> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<StatusNum> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<StatusClass> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<BlnPopup> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<InfoTitle> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<UnitName> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<StatusHP> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<StatusLV> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<UnitInfoClan> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<BlazeGauge> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<StatusItem> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<IconSkill> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<IconLegion> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<JobIcon> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<InfoItemSkill> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<StatusTotal> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<KeyArrow> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<KeyIcon> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<MenuItemSkill> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<MenuItemItem> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<MenuItem> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<MenuItemLegion> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<MenuItemAnimal> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<MenuItemMorph> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<Element> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<MenuItemRage> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<BattleInfoEquip> Layout::GetControl(nn::ui2d::Pane*);
template std::weak_ptr<EmbeddedImage> Layout::GetControl(nn::ui2d::Pane*);

template std::weak_ptr<TextBoxEx> Layout::GetControl(Name);
template std::weak_ptr<JobIcon> Layout::GetControl(Name);
template std::weak_ptr<Element> Layout::GetControl(Name);
template std::weak_ptr<MenuItemSkill> Layout::GetControl(Name);
template std::weak_ptr<AsyncLoadThumbImage> Layout::GetControl(Name);
template std::weak_ptr<GmapTroopInfo> Layout::GetControl(Name);
template std::weak_ptr<HelpGroup> Layout::GetControl(Name);
template std::weak_ptr<KeySort> Layout::GetControl(Name);
template std::weak_ptr<HelpableElement> Layout::GetControl(Name);
template std::weak_ptr<StatusClass> Layout::GetControl(Name);
template std::weak_ptr<BattlePopupBlaze> Layout::GetControl(Name);

template std::weak_ptr<TextBoxEx> LayoutAccessor::GetControl(Name);
template std::weak_ptr<StatusNum> LayoutAccessor::GetControl(Name);
template std::weak_ptr<StatusClass> LayoutAccessor::GetControl(Name);
template std::weak_ptr<BlnPopup> LayoutAccessor::GetControl(Name);
template std::weak_ptr<InfoTitle> LayoutAccessor::GetControl(Name);
template std::weak_ptr<UnitName> LayoutAccessor::GetControl(Name);
template std::weak_ptr<StatusHP> LayoutAccessor::GetControl(Name);
template std::weak_ptr<StatusLV> LayoutAccessor::GetControl(Name);
template std::weak_ptr<UnitInfoClan> LayoutAccessor::GetControl(Name);
template std::weak_ptr<BlazeGauge> LayoutAccessor::GetControl(Name);
template std::weak_ptr<StatusItem> LayoutAccessor::GetControl(Name);
template std::weak_ptr<IconLegion> LayoutAccessor::GetControl(Name);
template std::weak_ptr<IconSkill> LayoutAccessor::GetControl(Name);
template std::weak_ptr<StatusTotal> LayoutAccessor::GetControl(Name);
template std::weak_ptr<JobIcon> LayoutAccessor::GetControl(Name);
template std::weak_ptr<InfoItemSkill> LayoutAccessor::GetControl(Name);
template std::weak_ptr<KeyArrow> LayoutAccessor::GetControl(Name);
template std::weak_ptr<MenuItemSkill> LayoutAccessor::GetControl(Name);
template std::weak_ptr<MenuItemItem> LayoutAccessor::GetControl(Name);
template std::weak_ptr<MenuItem> LayoutAccessor::GetControl(Name);
template std::weak_ptr<MenuItemLegion> LayoutAccessor::GetControl(Name);
template std::weak_ptr<MenuItemAnimal> LayoutAccessor::GetControl(Name);
template std::weak_ptr<BattleInfoEquip> LayoutAccessor::GetControl(Name);
template std::weak_ptr<Element> LayoutAccessor::GetControl(Name);

}
