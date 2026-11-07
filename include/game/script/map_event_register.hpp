#pragma once

#include "game/script/script_string.hpp"

namespace game::script::map::event {

enum class Timing {
  kPhaseBefore = 1,
  kPhaseAfter = 2,
  kPhaseEnd = 3,
  kDieBefore = 14,
  kDieAfter = 15,
  kDieTalk = 16,
  kReviveBefore = 17,
  kReviveAfter = 18,
  kBattleBefore = 23,
  kBattleTalk = 24,
  kBattleAfter = 25,
  kBattleComplete = 26,
};

// The registrations of the events, the argument is optional.
void RegisterPhase(Timing timing, const as::string& funcName, int turnMin,
  int turnMax, int force, const as::string& conditionFunc, ScriptAny* arg);
void RegisterBattle(Timing timing, const as::string& funcName,
  const as::string& fromPid, int fromForce, const as::string& toPid,
  int toForce, bool each, const as::string& conditionFunc, ScriptAny* arg);
void RegisterPickup(const as::string& funcName, const as::string& pid,
  const as::string& conditionFunc, ScriptAny* arg, bool silent);
void RegisterFixed(const as::string& funcName, const as::string& pid,
  int force, const as::string& conditionFunc, ScriptAny* arg, bool silent);
void RegisterDie(Timing timing, const as::string& funcName,
  const as::string& pid, int force, const as::string& conditionFunc,
  ScriptAny* arg);
void RegisterRevive(Timing timing, const as::string& funcName,
  const as::string& pid, int force, const as::string& conditionFunc,
  ScriptAny* arg);
void RegisterUseActiveSkill(const as::string& funcName,
  const as::string& pid, int force, const as::string& sid,
  const as::string& conditionFunc, ScriptAny* arg);
void RegisterUnitCommandBefore(const as::string& funcName,
  const as::string& pid, const as::string& conditionFunc, ScriptAny* arg);
void RegisterMindComplete(const as::string& funcName,
  const as::string& pid, int force, const as::string& conditionFunc,
  ScriptAny* arg);
void RegisterTalk(const as::string& funcName, const as::string& fromPid,
  int fromForce, const as::string& toPid, int toForce, bool each,
  const as::string& conditionFunc, ScriptAny* arg);
void RegisterArea(const as::string& funcName, int minX, int minZ, int maxX,
  int maxZ, int force, const as::string& conditionFunc, ScriptAny* arg);
void RegisterTbox(const as::string& funcName, int x, int z, ScriptAny* arg);
void RegisterDoor(const as::string& funcName, int minX, int minZ, int maxX,
  int maxZ, ScriptAny* arg);
void RegisterGimmick(const as::string& funcName, int x, int z,
  ScriptAny* arg);
void RegisterDestroy(const as::string& funcName, int minX, int minZ,
  int maxX, int maxZ, ScriptAny* arg);
void RegisterBreakdown(const as::string& funcName, int x, int z,
  ScriptAny* arg);
void RegisterEscape(const as::string& funcName, int x, int z,
  const as::string& pid, const as::string& conditionFunc, ScriptAny* arg,
  bool before);
void RegisterWarpCommandAfter(const as::string& funcName, int x, int z,
  const as::string& conditionFunc, ScriptAny* arg);

}
