#include <functional>
#include <memory>
#include <vector>

#pragma GCC visibility push(hidden)
#include "game/menu/basic_menu.hpp"

namespace game::menu {

class NoticeInfoDialog : public BasicMenu {
public:
  ~NoticeInfoDialog() override;

  int Unknown26() override { return 110; }
  const char* Unknown32() override { return "Layout/CommonMenu.arc"; }
  const char* Unknown33() override { return "Common_NoticeInfo"; }
  bool Unknown64() override { return true; }
  void Unknown69() override;
  void Unknown82() override;
  void Unknown84() override;
  int Unknown100() override;
  int Unknown101() override;
  int Unknown112() override { return 4; }
  virtual int Unknown135(int count, bool loop);
  virtual void Unknown136();
  virtual void Unknown137();
  virtual void Unknown138();

private:
  uint8_t unknown_420_[0x10];
  std::vector<int> unknown_430_;
  uint64_t unknown_448_;
  std::function<void(int)> unknown_450_;
  std::weak_ptr<ui::LayoutAccessor> unknown_480_;
};

NoticeInfoDialog::~NoticeInfoDialog() = default;

}

#pragma GCC visibility pop
