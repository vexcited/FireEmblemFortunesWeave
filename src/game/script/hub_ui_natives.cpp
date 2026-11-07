#include <string>
#include <string_view>

#include "as/script_context.hpp"
#include "game/hub/ui_manager.hpp"
#include "game/script/script_string.hpp"
#include "msg/message_manager.hpp"

namespace game::hub {

#pragma GCC visibility push(hidden)

// The text of a message, with its arguments filled in.
std::string GetMessageText(std::string_view mid, int index);

#pragma GCC visibility pop

}

// The natives of the hub::ui script namespace.
namespace game::script::hub::ui {

using game::hub::UIManager;

// The script manager of as/script_context.hpp, read through the global offset
// table by some of these natives.
extern as::ScriptManager* g_script_manager;

#pragma GCC visibility push(hidden)

// The result of the last talk the hub ran, kept until a script reads it.
extern int g_talk_result;

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

[[gnu::always_inline]] inline void SetBind(game::hub::CountedSwitch& hide,
  bool isBind) {
  if (isBind) {
    hide.Push();
  }
  else {
    hide.Pop();
  }
}

[[gnu::always_inline]] inline int TakeTalkResult() {
  const int result = g_talk_result;
  if (result != 0) {
    g_talk_result = 0;
  }
  return result;
}

}

void HideAllOnPlayable() {
  OpenBlockDirect();
  UIManager::GetInstance()->HideAllOnPlayable();
}

void TryClearOnPlayableSchedule() {
  OpenBlockDirect();
  UIManager::GetInstance()->TryClearOnPlayableSchedule();
}

void SetBindHideAll(bool isBind) {
  OpenBlock();
  UIManager* ui = UIManager::GetInstance();
  SetBind(ui->GetHideCommon(), isBind);
  ui->Refresh();
  SetBind(ui->GetHideSchedule(), isBind);
  ui->Refresh();
}

void SetBindHideCommon(bool isBind) {
  OpenBlock();
  UIManager* ui = UIManager::GetInstance();
  SetBind(ui->GetHideCommon(), isBind);
  ui->Refresh();
}

void SetBindHideSchedule(bool isBind) {
  OpenBlock();
  UIManager* ui = UIManager::GetInstance();
  SetBind(ui->GetHideSchedule(), isBind);
  ui->Refresh();
}

int GetTalkMainQuestResultWithReset() {
  OpenBlockDirect();
  return TakeTalkResult();
}

int GetTalkSideStoryResultWithReset() {
  OpenBlockDirect();
  return TakeTalkResult();
}

void SetMsgArg(int index, int count) {
  OpenBlock();
  msg::MessageManager::GetInstance()->GetArguments().Set(index, count, 0);
}

void SetMsgArg(int index, const as::string& arg) {
  OpenBlock();
  msg::MessageManager::GetInstance()->GetArguments().Set(index,
    static_cast<const as::base_string&>(arg).c_str());
}

as::string GetMessageDirect(const as::string& label) {
  const std::string text = game::hub::GetMessageText(label, 0);
  return as::string(text.c_str());
}

#pragma GCC visibility pop

}
