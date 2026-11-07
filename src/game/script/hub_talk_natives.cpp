#include <memory>
#include <string>

#include "as/script_context.hpp"
#include "game/hub/character.hpp"
#include "game/hub/manager.hpp"
#include "game/hub/ui_manager.hpp"
#include "game/script/script_string.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

// The select menu shown by the events, while one is open.
class SelectMenu {
public:
  static constexpr int kRequestExit = 12;

  void RequestExit() {
    request_ = kRequestExit;
  }

private:
  uint8_t unknown_00_[0x98];
  int request_;
};

#pragma GCC visibility pop

}

// The natives of the hub::talk script namespace.
namespace game::script::hub::talk {

using game::hub::Character;
using game::hub::TalkSupport;

// The script manager of as/script_context.hpp, read through the global offset
// table by some of these natives.
extern as::ScriptManager* g_script_manager;

// Some natives read the instances through the global offset table.
template<typename T>
extern T* g_instance;

#pragma GCC visibility push(hidden)

extern game::hub::SelectMenu* g_select_menu;
extern int g_choice_menu_result;

struct YesNoDialogParam {
  std::string title;
  std::string yes_label = "MID_Sys_Yes";
  std::string no_label = "MID_Sys_No";
  std::string decide_se;
  std::string arg1;
  std::string arg2;

  ~YesNoDialogParam();
};

void ShowYesNoDialog(const YesNoDialogParam& param);

namespace {

[[gnu::always_inline]] inline as::ScriptContext* GetCurrentContext() {
  as::ScriptThread* thread =
    g_script_manager->GetThread(as::g_thread_info->GetIndex());
  return thread != nullptr ? thread->GetContext() : nullptr;
}

[[gnu::always_inline]] inline void OpenBlock() {
  as::ScriptContext* context = GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

// The natives reading the manager directly.
[[gnu::always_inline]] inline void OpenBlockDirect() {
  as::ScriptContext* context = as::GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

}

void StorePosure() {
  OpenBlockDirect();
  g_instance<TalkSupport>->StorePosure({}, true);
}

void StorePosureCharaHash(uint64_t charaGlobalHash) {
  OpenBlock();
  std::weak_ptr<Character> character =
    game::hub::CharacterManager::GetInstance()->FindGlobalHash(
      charaGlobalHash);
  TalkSupport::GetInstance()->StorePosure(character, true);
}

void RestorePosure() {
  OpenBlockDirect();
  TalkSupport* support = TalkSupport::GetInstance();
  support->GetPosure().Pop();
  if (support->GetPosure().GetCount() <= 0 && support->TakeHideUi()) {
    game::hub::UIManager* ui = game::hub::UIManager::GetInstance();
    ui->GetHideCommon().Pop();
    ui->Refresh();
  }
}

void CommitRestore(float endCameraSec) {
  OpenBlock();
  TalkSupport* support = TalkSupport::GetInstance();
  if (support->GetPosure().GetCount() <= 0) {
    support->CommitRestore(endCameraSec);
  }
}

void OnTalkCameraStateGroup() {
  OpenBlockDirect();
  g_instance<TalkSupport>->SetCameraStateGroup(3);
}

bool IsActiveSelectMenu() {
  OpenBlockDirect();
  return g_select_menu != nullptr;
}

void ExitSelectMenu() {
  OpenBlockDirect();
  if (game::hub::SelectMenu* menu = g_select_menu) {
    menu->RequestExit();
  }
}

bool IsYesNoDialogResult() {
  OpenBlockDirect();
  return TalkSupport::GetInstance()->IsYesNoDialogResult();
}

int GetChoiceMenuResult() {
  OpenBlockDirect();
  return g_choice_menu_result;
}

void ShowYesNoDialog(const as::string& title, const as::string& decide_se) {
  YesNoDialogParam param;
  param.title = title;
  param.decide_se = decide_se;
  ShowYesNoDialog(param);
}

void ShowYesNoDialogArg(const as::string& title, const as::string& arg1) {
  YesNoDialogParam param;
  param.title = title;
  param.arg1 = arg1;
  ShowYesNoDialog(param);
}

void ShowYesNoDialogArg2(const as::string& title, const as::string& arg1,
  const as::string& arg2) {
  YesNoDialogParam param;
  param.title = title;
  param.arg1 = arg1;
  param.arg2 = arg2;
  ShowYesNoDialog(param);
}

void ShowYesNoDialogWithYesNoLabel(const as::string& title,
  const as::string& yesLabel, const as::string& noLabel) {
  YesNoDialogParam param;
  param.title = title;
  param.yes_label = yesLabel;
  param.no_label = noLabel;
  ShowYesNoDialog(param);
}

#pragma GCC visibility pop

}
