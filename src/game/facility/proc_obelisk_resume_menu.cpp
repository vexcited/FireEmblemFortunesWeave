#include <functional>
#include <memory>
#include <vector>

#include "game/menu/game_menu.hpp"
#include "game/sound/se.hpp"

namespace game::facility {

namespace {

class ProcObeliskResumeMenu : public menu::GameMenu {
public:
  ProcObeliskResumeMenu();

  void Unknown02() override;
  int Unknown26() override { return 10; }
  const char* Unknown32() override { return "Layout/Obelisk.arc"; }
  const char* Unknown33() override { return "Obelisk_Resume"; }
  bool Unknown39() override { return true; }
  int Unknown61() override { return 3; }
  void Unknown70() override {}
  void Unknown75() override;
  void Unknown84() override;
  void Unknown85() override;
  void Unknown89() override;
  void Unknown93() override;
  int Unknown100() override;
  int Unknown101() override { return 3; }
  int Unknown102() override;

  const char* ImplUnknown03() override {
    return part_ == 3 ? "MID_HeroMenu_Restart_Part3" : "MID_HeroMenu_Restart";
  }

  const char* ImplUnknown05() override {
    return part_ == 3 ? "MID_ResumeMenu_Part3_Help" : "MID_ResumeMenu_Help";
  }

  uint8_t ImplUnknown07() override { return 1; }
  int InputUnknown12(int direction, bool loop) override;

private:
  // Owns a buffer it releases with delete[].
  struct Buffer {
    ~Buffer() { delete[] data; }

    uint8_t* data;
  };

  uint8_t unknown_428_[0x18];
  std::vector<void*> unknown_440_;
  uint64_t unknown_458_;
  std::function<void()> unknown_460_;
  std::weak_ptr<void> unknown_490_;
  uint8_t unknown_4a0_[0x14];
  int32_t part_;
  uint64_t unknown_4b8_;
  std::vector<void*> unknown_4c0_;
  uint8_t unknown_4d8_[0x70];
  Buffer unknown_548_;
  uint8_t unknown_550_[0x10];
  std::weak_ptr<void> unknown_560_;
  std::weak_ptr<void> unknown_570_;
  std::weak_ptr<void> unknown_580_;
};

[[gnu::used]] ProcObeliskResumeMenu::ProcObeliskResumeMenu() = default;

void ProcObeliskResumeMenu::Unknown75() {
  sound::PlaySe("SE_SYS_Status_Open");
}

}

}
