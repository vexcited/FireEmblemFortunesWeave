#include <functional>

#pragma GCC visibility push(hidden)
#include "game/menu/basic_menu.hpp"
#include "game/proc/proc_game_skip_view.hpp"
#include "game/sound/se.hpp"
#include "game/telop/telop_sequence.hpp"

namespace game::telop {

class ListResultMenuBase : public menu::BasicMenu {
public:
  [[gnu::noinline]] ~ListResultMenuBase() override;

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
  int InputUnknown01() override { return 10; }
  void InputUnknown19() override;
  void InputUnknown20() override { InputUnknown19(); }
  virtual void Unknown138(int unknown);
  virtual int Unknown139() { return 0; }

private:
  uint8_t unknown_420_[0x8];
  TitleSystem* title_;
};

class ExpListResultMenu : public ListResultMenuBase {
public:
  ~ExpListResultMenu() override;

  const char* Unknown33() override { return "Common_TlpResultStatus_Exp"; }
  void Unknown82() override;
  void Unknown96() override;
  int Unknown139() override { return 1; }

private:
  std::function<void()> unknown_430_;
};

class RestListResultMenu : public ListResultMenuBase {
public:
  ~RestListResultMenu() override;

  const char* Unknown33() override { return "Common_TlpResultStatus_Hp"; }
  int Unknown139() override { return 1; }
};

class TrainingListResult : public ListResultMenuBase {
public:
  ~TrainingListResult() override;

  const char* Unknown32() override { return "Layout/Hub.arc"; }
  const char* Unknown33() override { return "Hub_TlpResultStatus_AllTraining"; }
  int InputUnknown01() override { return 6; }
  int Unknown139() override { return 1; }
};

class IndividualResultMenu : public ListResultMenuBase {
public:
  ~IndividualResultMenu() override;

  const char* Unknown32() override { return "Layout/Hub.arc"; }
  const char* Unknown33() override { return "Hub_TlpResultStatus_Individual"; }
  int InputUnknown01() override { return 6; }
  void Unknown138(int unknown) override;
  int Unknown139() override { return 1; }
};

ListResultMenuBase::~ListResultMenuBase() {
  ProcGameSkipView::PopState();
}

ExpListResultMenu::~ExpListResultMenu() = default;
RestListResultMenu::~RestListResultMenu() = default;
TrainingListResult::~TrainingListResult() = default;
IndividualResultMenu::~IndividualResultMenu() = default;

void ListResultMenuBase::Unknown58(std::vector<int64_t>& handles) {
  BasicMenu::Unknown58(handles);
  if (title_ != nullptr) {
    title_->Close(false);
  }
}

void ListResultMenuBase::Unknown82() {
  sound::PlaySe("SE_SYS_Telop_Result");
}

void ListResultMenuBase::Unknown96() {
  Unknown138(0);
}

void ExpListResultMenu::Unknown82() {
  sound::PlaySe("SE_SYS_Telop_ExpGet");
}

}

#pragma GCC visibility pop
