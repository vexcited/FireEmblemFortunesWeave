#pragma once

#include <cstdint>
#include <memory>
#include <vector>

#include "game/menu/belonging_menu.hpp"
#include "game/menu/key_help_entry.hpp"
#include "game/singleton.hpp"
#include "ui/layout_accessor.hpp"

namespace game::map {

// The terrain window of the map, it owns the key help part.
class MapTerrainInfo : public Singleton<MapTerrainInfo> {
public:
  int GetUnknown10() const {
    return unknown_10_;
  }

  ui::LayoutAccessor& GetAccessor() {
    return accessor_;
  }

private:
  uint8_t unknown_08_[0x8];
  int32_t unknown_10_;
  uint8_t unknown_14_[0x14];
  ui::LayoutAccessor accessor_;
};

class MapInfo : public Singleton<MapInfo> {
public:
  bool HasUnknown58() const {
    return !unknown_58_.empty();
  }

private:
  uint8_t unknown_08_[0x50];
  std::vector<void*> unknown_58_;
};

}

namespace game::gameui {

class FloatingHelp : public Singleton<FloatingHelp> {
public:
  bool IsOpen() const {
    return open_;
  }

private:
  uint8_t unknown_08_[0xf8];
  bool open_;
};

// Opens the floating help of the current item of a menu.
bool OpenFloatingHelp(menu::BasicMenu* menu,
  const std::weak_ptr<ui::LayoutAccessor>& part);

}

namespace game::map {

// The item menus of the map unit commands.
class CommandItemMenu_Base : public menu::BelongingMenu {
public:
  void Unknown30(bool enable) override;
  void Unknown95() override;
  int Unknown114() override;

  // Adds the status change key to the key help.
  virtual void Unknown145(std::vector<menu::KeyHelpEntry>& keys);

protected:
  bool detail_;
};

}
