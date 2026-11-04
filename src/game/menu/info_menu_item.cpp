#include <cstdint>
#include <memory>

#include "game/menu/game_menu_item.hpp"
#include "game/sound/se.hpp"
#include "ui/layout_accessor.hpp"

namespace game::menu {

namespace {

class ConfigMenuItem : public menu::GameMenuItem {
public:
  ConfigMenuItem();

  bool IsDecidable() override { return unknown_60_; }

protected:
  uint8_t unknown_53_[0xd];
  bool unknown_60_;
};

[[gnu::used]] ConfigMenuItem::ConfigMenuItem() = default;

class SettingMenuItem : public ConfigMenuItem {
public:
  SettingMenuItem();

  void Unknown16() override;
  void OnSelect() override;
  void OnDeselect() override;
  int ACall() override;
  int UpCall() override;
  int DownCall() override;
  void DrawText() override;
  virtual void Unknown70() {}

protected:
  std::weak_ptr<ui::LayoutAccessor> cursor_;
  std::weak_ptr<ui::LayoutAccessor> value_;
};

[[gnu::used]] SettingMenuItem::SettingMenuItem() = default;

class ListMenuItem : public SettingMenuItem {
public:
  ListMenuItem();

  void PlayCursorSe() override { sound::PlayListLeftSe(); }
  void PlayPageSe() override { sound::PlayListRightSe(); }
  void Unknown70() override;
};

[[gnu::used]] ListMenuItem::ListMenuItem() = default;

class GaugeMenuItem : public SettingMenuItem {
public:
  GaugeMenuItem();

  void OnSelect() override;
  int ACall() override;
  int UpCall() override;
  int DownCall() override;
  void PlayCursorSe() override { sound::PlayGaugeLeftSe(); }
  void PlayPageSe() override { sound::PlayGaugeRightSe(); }
  void Unknown70() override;
};

[[gnu::used]] GaugeMenuItem::GaugeMenuItem() = default;

class VolumeSeMenuItem : public GaugeMenuItem {
public:
  VolumeSeMenuItem();

  void Unknown19() override;
  void OnDeselect() override;
  void PlayCursorSe() override;
  void PlayPageSe() override;
};

[[gnu::used]] VolumeSeMenuItem::VolumeSeMenuItem() = default;

class VolumeVoiceMenuItem : public GaugeMenuItem {
public:
  VolumeVoiceMenuItem();

  void Unknown19() override;
  void OnDeselect() override;
  void PlayCursorSe() override;
  void PlayPageSe() override;
};

[[gnu::used]] VolumeVoiceMenuItem::VolumeVoiceMenuItem() = default;

class VolumeVibMenuItem : public GaugeMenuItem {
public:
  VolumeVibMenuItem();

  void PlayCursorSe() override;
  void PlayPageSe() override;
};

[[gnu::used]] VolumeVibMenuItem::VolumeVibMenuItem() = default;

class SupInfoMenuItem : public SettingMenuItem {
public:
  SupInfoMenuItem();

  void Unknown70() override;
};

[[gnu::used]] SupInfoMenuItem::SupInfoMenuItem() = default;

class InfoMenuItem : public ConfigMenuItem {
public:
  InfoMenuItem();

  bool IsEnable() override { return false; }
  void Unknown17() override;
  int ACall() override { return 0; }
};

[[gnu::used]] InfoMenuItem::InfoMenuItem() = default;

}

}
