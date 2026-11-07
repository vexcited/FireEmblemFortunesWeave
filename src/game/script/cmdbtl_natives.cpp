namespace as {

class ScriptManager;

// The natives read the manager through the global offset table, which the
// linker relaxed, so it is declared with default visibility first.
[[gnu::visibility("default")]] extern ScriptManager* g_script_manager;

}

#include "as/script_context.hpp"
#include "game/cmdbtl/manager.hpp"
#include "game/cmdbtl/situation.hpp"
#include "game/data/data_file.hpp"
#include "game/item_seq.hpp"
#include "game/script/script_string.hpp"
#include "game/singleton.hpp"

namespace game::cmdbtl {

#pragma GCC visibility push(hidden)

void ExitGmap();

#pragma GCC visibility pop

}

[[gnu::visibility("default")]] extern game::cmdbtl::CmdBtlSituation*
  g_cmdbtl_situation;

namespace game::script::cmdbtl {

#pragma GCC visibility push(hidden)

namespace {

[[gnu::always_inline]] inline void EndBlock() {
  as::ScriptContext* context = as::GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

}

int GetPhase() {
  EndBlock();
  return g_cmdbtl_manager->GetPhase();
}

int GetTurn() {
  EndBlock();
  return g_cmdbtl_manager->GetTurn();
}

void SituationComplete() {
  EndBlock();
  g_cmdbtl_situation->SetComplete();
}

void SituationGameOver() {
  EndBlock();
  g_cmdbtl_situation->SetGameOver();
}

void SituationEscape() {
  EndBlock();
  g_cmdbtl_situation->SetEscape();
}

void ItemGainSilentTransport(const as::string& iid) {
  EndBlock();
  UnitItem item = UnitItem();
  item.Assign(HashedString(iid.c_str()));
  ItemSeqConst::List list;
  if (item.GetIndex() != 0) {
    list.Add(item);
  }
  ItemSeq::GainSilent(list, nullptr, false);
}

// Runs again next frame while the battle loads.
void WaitLoadComplete() {
  const bool loading = game::cmdbtl::ProcCmdBtlSeqView::instance_ != nullptr &&
    g_cmdbtl_manager->IsLoading();
  as::ScriptContext* context = as::GetCurrentContext();
  if (loading) {
    context->GetRunner()->SetBlockState(0);
    return;
  }
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

void ExitGmap() {
  game::cmdbtl::ExitGmap();
}

#pragma GCC visibility pop

}
