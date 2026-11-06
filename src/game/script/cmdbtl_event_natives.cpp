#include "as/script_context.hpp"
#include "game/script/cmdbtl_event.hpp"

// The natives of the cmdbtl::event script namespace. Each one opens the
// script block, then registers the event with no argument or with one.
namespace game::script::cmdbtl::event {

namespace {

[[gnu::always_inline]] inline void OpenBlock() {
  as::ScriptContext* context = as::GetCurrentContext();
  context->GetRunner()->SetBlockState(1);
  context->ClearCallback();
}

}

void EntryTurnBeginBefore(const std::string& funcName, int turnMin, int turnMax,
  int playCountMax, const std::string& conditionFunc) {
  OpenBlock();
  EntryTurn(Timing::TurnBeginBefore, funcName, turnMin, turnMax,
    playCountMax, conditionFunc, Arguments());
}

void EntryTurnBeginBefore(const std::string& funcName, int turnMin, int turnMax,
  int playCountMax, const std::string& conditionFunc,
  const std::string& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg.c_str()));
  EntryTurn(Timing::TurnBeginBefore, funcName, turnMin, turnMax,
    playCountMax, conditionFunc, args);
}

void EntryTurnBeginBefore(const std::string& funcName, int turnMin, int turnMax,
  int playCountMax, const std::string& conditionFunc,
  const int& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryTurn(Timing::TurnBeginBefore, funcName, turnMin, turnMax,
    playCountMax, conditionFunc, args);
}

void EntryTurnBeginBefore(const std::string& funcName, int turnMin, int turnMax,
  int playCountMax, const std::string& conditionFunc,
  const float& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryTurn(Timing::TurnBeginBefore, funcName, turnMin, turnMax,
    playCountMax, conditionFunc, args);
}

void EntryTurnBeginAfter(const std::string& funcName, int turnMin, int turnMax,
  int playCountMax, const std::string& conditionFunc) {
  OpenBlock();
  EntryTurn(Timing::TurnBeginAfter, funcName, turnMin, turnMax, playCountMax,
    conditionFunc, Arguments());
}

void EntryTurnBeginAfter(const std::string& funcName, int turnMin, int turnMax,
  int playCountMax, const std::string& conditionFunc,
  const std::string& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg.c_str()));
  EntryTurn(Timing::TurnBeginAfter, funcName, turnMin, turnMax, playCountMax,
    conditionFunc, args);
}

void EntryTurnBeginAfter(const std::string& funcName, int turnMin, int turnMax,
  int playCountMax, const std::string& conditionFunc,
  const int& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryTurn(Timing::TurnBeginAfter, funcName, turnMin, turnMax, playCountMax,
    conditionFunc, args);
}

void EntryTurnBeginAfter(const std::string& funcName, int turnMin, int turnMax,
  int playCountMax, const std::string& conditionFunc,
  const float& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryTurn(Timing::TurnBeginAfter, funcName, turnMin, turnMax, playCountMax,
    conditionFunc, args);
}

void EntryTurnEnd(const std::string& funcName, int turnMin, int turnMax,
  int playCountMax, const std::string& conditionFunc) {
  OpenBlock();
  EntryTurn(Timing::TurnEnd, funcName, turnMin, turnMax, playCountMax,
    conditionFunc, Arguments());
}

void EntryTurnEnd(const std::string& funcName, int turnMin, int turnMax,
  int playCountMax, const std::string& conditionFunc,
  const std::string& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg.c_str()));
  EntryTurn(Timing::TurnEnd, funcName, turnMin, turnMax, playCountMax,
    conditionFunc, args);
}

void EntryTurnEnd(const std::string& funcName, int turnMin, int turnMax,
  int playCountMax, const std::string& conditionFunc,
  const int& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryTurn(Timing::TurnEnd, funcName, turnMin, turnMax, playCountMax,
    conditionFunc, args);
}

void EntryTurnEnd(const std::string& funcName, int turnMin, int turnMax,
  int playCountMax, const std::string& conditionFunc,
  const float& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryTurn(Timing::TurnEnd, funcName, turnMin, turnMax, playCountMax,
    conditionFunc, args);
}

void EntryBattleBefore(const std::string& funcName, int playCountMax,
  const std::string& conditionFunc) {
  OpenBlock();
  EntryBattle(Timing::BattleBefore, funcName, playCountMax, conditionFunc,
    Arguments());
}

void EntryBattleBefore(const std::string& funcName, int playCountMax,
  const std::string& conditionFunc,
  const std::string& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg.c_str()));
  EntryBattle(Timing::BattleBefore, funcName, playCountMax, conditionFunc,
    args);
}

void EntryBattleBefore(const std::string& funcName, int playCountMax,
  const std::string& conditionFunc,
  const int& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryBattle(Timing::BattleBefore, funcName, playCountMax, conditionFunc,
    args);
}

void EntryBattleBefore(const std::string& funcName, int playCountMax,
  const std::string& conditionFunc,
  const float& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryBattle(Timing::BattleBefore, funcName, playCountMax, conditionFunc,
    args);
}

void EntryBattleTalk(const std::string& funcName, int playCountMax,
  const std::string& conditionFunc) {
  OpenBlock();
  EntryBattle(Timing::BattleTalk, funcName, playCountMax, conditionFunc,
    Arguments());
}

void EntryBattleTalk(const std::string& funcName, int playCountMax,
  const std::string& conditionFunc,
  const std::string& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg.c_str()));
  EntryBattle(Timing::BattleTalk, funcName, playCountMax, conditionFunc, args);
}

void EntryBattleTalk(const std::string& funcName, int playCountMax,
  const std::string& conditionFunc,
  const int& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryBattle(Timing::BattleTalk, funcName, playCountMax, conditionFunc, args);
}

void EntryBattleTalk(const std::string& funcName, int playCountMax,
  const std::string& conditionFunc,
  const float& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryBattle(Timing::BattleTalk, funcName, playCountMax, conditionFunc, args);
}

void EntryBattleAfter(const std::string& funcName, int playCountMax,
  const std::string& conditionFunc) {
  OpenBlock();
  EntryBattle(Timing::BattleAfter, funcName, playCountMax, conditionFunc,
    Arguments());
}

void EntryBattleAfter(const std::string& funcName, int playCountMax,
  const std::string& conditionFunc,
  const std::string& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg.c_str()));
  EntryBattle(Timing::BattleAfter, funcName, playCountMax, conditionFunc, args);
}

void EntryBattleAfter(const std::string& funcName, int playCountMax,
  const std::string& conditionFunc,
  const int& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryBattle(Timing::BattleAfter, funcName, playCountMax, conditionFunc, args);
}

void EntryBattleAfter(const std::string& funcName, int playCountMax,
  const std::string& conditionFunc,
  const float& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryBattle(Timing::BattleAfter, funcName, playCountMax, conditionFunc, args);
}

void EntryDieBefore(const std::string& funcName, int partyType,
  const std::string& conditionFunc) {
  OpenBlock();
  EntryDie(Timing::DieBefore, funcName, partyType, conditionFunc, Arguments());
}

void EntryDieBefore(const std::string& funcName, int partyType,
  const std::string& conditionFunc,
  const std::string& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg.c_str()));
  EntryDie(Timing::DieBefore, funcName, partyType, conditionFunc, args);
}

void EntryDieBefore(const std::string& funcName, int partyType,
  const std::string& conditionFunc,
  const int& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryDie(Timing::DieBefore, funcName, partyType, conditionFunc, args);
}

void EntryDieBefore(const std::string& funcName, int partyType,
  const std::string& conditionFunc,
  const float& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryDie(Timing::DieBefore, funcName, partyType, conditionFunc, args);
}

void EntryDieAfter(const std::string& funcName, int partyType,
  const std::string& conditionFunc) {
  OpenBlock();
  EntryDie(Timing::DieAfter, funcName, partyType, conditionFunc, Arguments());
}

void EntryDieAfter(const std::string& funcName, int partyType,
  const std::string& conditionFunc,
  const std::string& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg.c_str()));
  EntryDie(Timing::DieAfter, funcName, partyType, conditionFunc, args);
}

void EntryDieAfter(const std::string& funcName, int partyType,
  const std::string& conditionFunc,
  const int& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryDie(Timing::DieAfter, funcName, partyType, conditionFunc, args);
}

void EntryDieAfter(const std::string& funcName, int partyType,
  const std::string& conditionFunc,
  const float& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryDie(Timing::DieAfter, funcName, partyType, conditionFunc, args);
}

void EntryDieTalk(const std::string& funcName, int partyType,
  const std::string& conditionFunc) {
  OpenBlock();
  EntryDie(Timing::DieTalk, funcName, partyType, conditionFunc, Arguments());
}

void EntryDieTalk(const std::string& funcName, int partyType,
  const std::string& conditionFunc,
  const std::string& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg.c_str()));
  EntryDie(Timing::DieTalk, funcName, partyType, conditionFunc, args);
}

void EntryDieTalk(const std::string& funcName, int partyType,
  const std::string& conditionFunc,
  const int& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryDie(Timing::DieTalk, funcName, partyType, conditionFunc, args);
}

void EntryDieTalk(const std::string& funcName, int partyType,
  const std::string& conditionFunc,
  const float& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryDie(Timing::DieTalk, funcName, partyType, conditionFunc, args);
}

void EntryStockBefore(const std::string& funcName, int partyType, int stock,
  const std::string& conditionFunc) {
  OpenBlock();
  EntryStock(Timing::StockBefore, funcName, partyType, stock, conditionFunc,
    Arguments());
}

void EntryStockBefore(const std::string& funcName, int partyType, int stock,
  const std::string& conditionFunc,
  const std::string& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg.c_str()));
  EntryStock(Timing::StockBefore, funcName, partyType, stock, conditionFunc,
    args);
}

void EntryStockBefore(const std::string& funcName, int partyType, int stock,
  const std::string& conditionFunc,
  const int& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryStock(Timing::StockBefore, funcName, partyType, stock, conditionFunc,
    args);
}

void EntryStockBefore(const std::string& funcName, int partyType, int stock,
  const std::string& conditionFunc,
  const float& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryStock(Timing::StockBefore, funcName, partyType, stock, conditionFunc,
    args);
}

void EntryStockAfter(const std::string& funcName, int partyType, int stock,
  const std::string& conditionFunc) {
  OpenBlock();
  EntryStock(Timing::StockAfter, funcName, partyType, stock, conditionFunc,
    Arguments());
}

void EntryStockAfter(const std::string& funcName, int partyType, int stock,
  const std::string& conditionFunc,
  const std::string& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg.c_str()));
  EntryStock(Timing::StockAfter, funcName, partyType, stock, conditionFunc,
    args);
}

void EntryStockAfter(const std::string& funcName, int partyType, int stock,
  const std::string& conditionFunc,
  const int& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryStock(Timing::StockAfter, funcName, partyType, stock, conditionFunc,
    args);
}

void EntryStockAfter(const std::string& funcName, int partyType, int stock,
  const std::string& conditionFunc,
  const float& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryStock(Timing::StockAfter, funcName, partyType, stock, conditionFunc,
    args);
}

void EntryTalkCallback(const std::string& funcName, const std::string& label,
  const std::string& conditionFunc) {
  OpenBlock();
  EntryTalk(funcName, label, conditionFunc, Arguments());
}

void EntryTalkCallback(const std::string& funcName, const std::string& label,
  const std::string& conditionFunc,
  const std::string& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg.c_str()));
  EntryTalk(funcName, label, conditionFunc, args);
}

void EntryTalkCallback(const std::string& funcName, const std::string& label,
  const std::string& conditionFunc,
  const int& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryTalk(funcName, label, conditionFunc, args);
}

void EntryTalkCallback(const std::string& funcName, const std::string& label,
  const std::string& conditionFunc,
  const float& funcArg) {
  OpenBlock();
  Arguments args;
  PushArgument(args, Argument(funcArg));
  EntryTalk(funcName, label, conditionFunc, args);
}

}
