#pragma once

#include <string>
#include <variant>
#include <vector>

// The battle events a command script registers, run when their timing comes.
namespace game::script::cmdbtl::event {

enum class Timing {
  StockBefore = 1,
  StockAfter,
  TurnBeginBefore,
  TurnBeginAfter,
  TurnEnd,
  DieBefore,
  DieAfter,
  DieTalk,
  BattleBefore,
  BattleTalk,
  BattleAfter,
};

// The arguments handed to the registered function.
using Argument = std::variant<int, float, std::string>;
using Arguments = std::vector<Argument>;

// The push_back of the argument vector, out of line at 0xed5250 where the
// libc++ of the build inlines it.
void PushArgument(Arguments& args, Argument&& arg);

void EntryTurn(Timing timing, const std::string& funcName, int turnMin,
  int turnMax, int playCountMax, const std::string& conditionFunc,
  const Arguments& args);
void EntryBattle(Timing timing, const std::string& funcName,
  int playCountMax, const std::string& conditionFunc, const Arguments& args);
void EntryDie(Timing timing, const std::string& funcName, int partyType,
  const std::string& conditionFunc, const Arguments& args);
void EntryStock(Timing timing, const std::string& funcName, int partyType,
  int stock, const std::string& conditionFunc, const Arguments& args);
void EntryTalk(const std::string& funcName, const std::string& label,
  const std::string& conditionFunc, const Arguments& args);

}
