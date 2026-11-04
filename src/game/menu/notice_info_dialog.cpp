#pragma GCC visibility push(hidden)
#include "game/menu/basic_menu.hpp"
#pragma GCC visibility pop

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
};

NoticeInfoDialog::~NoticeInfoDialog() = default;

}
