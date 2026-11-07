#include <functional>
#include <memory>
#include <string>
#include <vector>

#pragma GCC visibility push(hidden)
#include "game/menu/basic_menu.hpp"
#include "game/sound/se.hpp"

namespace game::menu {

class ExDialog : public BasicMenu {
public:
  ~ExDialog() override;

  int Unknown24() override { return 10; }
  int Unknown26() override { return 110; }
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_DialogEx"; }
  bool Unknown39() override { return true; }
  int Unknown56() override { return 7; }
  int Unknown61() override { return 0; }
  int Unknown68() override { return 1; }
  void Unknown72() override;
  void Unknown84() override;
  int Unknown100() override;
  int Unknown101() override { return 3; }
  virtual int Unknown135(int count, bool loop);
  virtual void Unknown136();
  virtual void Unknown137();

private:
  uint8_t unknown_420_[0x10];
  std::vector<int> unknown_430_;
  uint64_t unknown_448_;
  std::function<void(int)> unknown_450_;
  std::weak_ptr<ui::LayoutAccessor> unknown_480_;
  uint8_t unknown_490_[0x10];
  std::string unknown_4a0_;
};

ExDialog::~ExDialog() = default;

void ExDialog::Unknown72() {
  sound::PlaySe("SE_SYS_Cancel_M_EX");
}

}

#pragma GCC visibility pop
