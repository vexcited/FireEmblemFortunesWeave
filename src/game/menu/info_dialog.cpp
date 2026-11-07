#include <functional>
#include <string>
#include <vector>

#pragma GCC visibility push(hidden)
#include "game/menu/dialog.hpp"

namespace game::menu {

class InfoDialog : public Dialog {
public:
  ~InfoDialog() override;

  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_DialogInfo"; }
  void Unknown84() override;
  void Unknown135() override;

private:
  uint8_t unknown_5c8_[0x10];
  std::string unknown_5d8_;
  std::function<void()> unknown_5f0_;
  uint8_t unknown_620_[0x18];
  std::string unknown_638_;
  std::vector<std::string> unknown_650_;
};

InfoDialog::~InfoDialog() = default;

}

#pragma GCC visibility pop
