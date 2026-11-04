#pragma GCC visibility push(hidden)
#include "game/menu/basic_menu.hpp"
#pragma GCC visibility pop

namespace game::telop {

class ListResultMenuBase : public menu::BasicMenu {
public:
  ~ListResultMenuBase() override;

  void Unknown02() override;
  int Unknown24() override { return 10; }
  const char* Unknown32() override { return "Layout/Common.arc"; }
  int Unknown40() override { return 128; }
  int Unknown56() override { return 7; }
  void Unknown57(std::vector<int64_t>& handles) override;
  void Unknown58(std::vector<int64_t>& handles) override;
  int Unknown61() override { return 0; }
  int Unknown68() override { return 1; }
  void Unknown82() override;
  void Unknown85() override;
  void Unknown96() override;
};

class ExpListResultMenu : public ListResultMenuBase {
public:
  ~ExpListResultMenu() override;

  const char* Unknown33() override { return "Common_TlpResultStatus_Exp"; }
  void Unknown82() override;
  void Unknown96() override;
};

class RestListResultMenu : public ListResultMenuBase {
public:
  ~RestListResultMenu() override;

  const char* Unknown33() override { return "Common_TlpResultStatus_Hp"; }
};

class TrainingListResult : public ListResultMenuBase {
public:
  ~TrainingListResult() override;

  const char* Unknown32() override { return "Layout/Hub.arc"; }
  const char* Unknown33() override { return "Hub_TlpResultStatus_AllTraining"; }
};

class IndividualResultMenu : public ListResultMenuBase {
public:
  ~IndividualResultMenu() override;

  const char* Unknown32() override { return "Layout/Hub.arc"; }
  const char* Unknown33() override { return "Hub_TlpResultStatus_Individual"; }
};

ListResultMenuBase::~ListResultMenuBase() = default;
ExpListResultMenu::~ExpListResultMenu() = default;
RestListResultMenu::~RestListResultMenu() = default;
TrainingListResult::~TrainingListResult() = default;
IndividualResultMenu::~IndividualResultMenu() = default;

}
