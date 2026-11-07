#include <functional>
#include <memory>
#include <string>
#include <vector>

#include "game/menu/game_menu.hpp"
#include "game/menu/unit_list.hpp"

namespace game::facility {

// Set while a sound of the memory sound menu plays.
[[gnu::visibility("hidden")]] extern bool g_memory_sound_playing;
[[gnu::visibility("hidden")]] extern int g_obelisk_menu_count;

namespace {

class ProcObeliskMemorySoundMenu : public menu::GameMenu {
public:
  ProcObeliskMemorySoundMenu();

  ~ProcObeliskMemorySoundMenu() override {
    ResetMenuUnits();
    g_memory_sound_playing = false;
  }

  void Unknown02() override;
  const char* Unknown32() override { return "Layout/Obelisk.arc"; }
  const char* Unknown33() override { return "Obelisk_Memory_SoundMenu"; }
  int Unknown40() override { return 200; }
  std::weak_ptr<ui::LayoutAccessor> Unknown46() override;
  std::weak_ptr<ui::LayoutAccessor> Unknown47() override;
  bool Unknown64() override { return true; }
  void Unknown84() override;
  void Unknown88() override;
  void Unknown93() override;
  void Unknown94() override;
  void Unknown96() override;
  int Unknown100() override;
  int Unknown101() override;
  void Unknown128() override;
  void Unknown129() override;
  void Unknown135(std::vector<int64_t>& handles) override;
  int InputUnknown01() override { return 16; }

  const char* ImplUnknown03() override {
    return "MID_ObeliskMenu_Memory_Sound";
  }

  const char* ImplUnknown05() override { return "MID_MemorySoundMenu_Help"; }
  uint8_t ImplUnknown07() override { return 1; }
  int ImplUnknown10() override;
  int InputUnknown07(bool loop) override;
  int InputUnknown08(bool loop) override;
  void InputUnknown18() override;
  void InputUnknown21() override;
  void InputUnknown22() override;

private:
  std::string unknown_428_;
  std::vector<void*> unknown_440_;
  uint8_t unknown_458_[0x18];
  std::vector<void*> unknown_470_;
  std::function<void()> unknown_490_;
  std::weak_ptr<void> unknown_4c0_;
};

[[gnu::used]]
ProcObeliskMemorySoundMenu::ProcObeliskMemorySoundMenu() = default;

void ProcObeliskMemorySoundMenu::Unknown93() {
  g_memory_sound_playing = true;
  ++g_obelisk_menu_count;
}

}

}
