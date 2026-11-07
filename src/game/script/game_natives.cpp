#include "game/data/data_files.hpp"
#include "game/game_mode_data.hpp"
#include "game/map/history_data.hpp"
#include "game/map/situation.hpp"
#include "game/map/unit_flags.hpp"
#include "game/unit.hpp"
#include "game/unit_item.hpp"
#include "game/script/script_string.hpp"
#include "msg/message_manager.hpp"

namespace game {

#pragma GCC visibility push(hidden)

const char* GetPersonName(const PersonData* person);
const char* GetItemName(const ItemData* item);
const char* GetPidByKey(uint32_t key);

namespace config {

// The variables of the game options, battle animations first.
const HashedString& GetVariable(uint8_t index);

}

namespace map {

extern const HashedString kVariablePlayerScore;
extern const HashedString kVariableEnemyScore;

}

#pragma GCC visibility pop

}

// The situation natives read these through the global offset table. The
// visibility is explicit, the hidden classes would hide them.
[[gnu::visibility("default")]] extern game::map::Situation* g_situation;
[[gnu::visibility("default")]] extern game::map::SituationObserver*
  g_situation_observer;
[[gnu::visibility("default")]] extern game::map::history::Impl*
  g_map_history;

// The natives of the game script namespaces, registered by 0x11c2370.
namespace game::script {

#pragma GCC visibility push(hidden)

namespace {

// The names fall back to the empty message text, read as bytes.
[[gnu::always_inline]] inline const char* GetEmptyText() {
  return reinterpret_cast<const char*>(msg::MessageManager::empty_text_);
}

// The system skills turning a magic weapon physical and a physical one
// magic.
constexpr int kSkillPhysicalAttack = 26;
constexpr int kSkillMagicAttack = 28;

// The skills of an item as a bit set.
struct ItemSkills {
  bool Contains(SkillKey key) const {
    const uint32_t word = key.index >> 5;
    return word + 1 <= words.size() && (words[word] >> key.index & 1);
  }

  uint8_t unknown_00_[0x8];
  std::vector<uint32_t> words;
};

[[gnu::always_inline]] inline const ItemSkills* GetItemSkills(
  const ItemData* data) {
  return ItemRow::Read<const ItemSkills*>(data, 0x18);
}

[[gnu::always_inline]] inline void MarkSituationChanged() {
  ::game::map::history::Impl* history = g_map_history;
  if (history != nullptr && history->IsRecording()) {
    history->MarkChanged(0x200);
  }
}

// A record of the win or lose message and its arguments.
[[gnu::always_inline]] inline void SetRuleMessage(int index,
  const as::string& mid, int arg0, int arg1, int arg2) {
  ::game::map::Situation* situation = g_situation;
  if (situation == nullptr) {
    return;
  }
  ::game::map::SituationRecord& record = situation->GetRecord(index);
  record.Clear();
  record.values[0] = arg0;
  record.values[1] = arg1;
  record.values[2] = arg2;
  record.values[3] = 0xffff;
  const char* text = mid.c_str();
  record.name = text != nullptr && *text != '\0' ? text : "";
  MarkSituationChanged();
}

[[gnu::always_inline]] inline int GetScore(const HashedString& key) {
  GameModeData* mode = GameModeData::GetInstance();
  if (g_situation == nullptr || mode == nullptr) {
    return 0;
  }
  const GameVariable* found = mode->GetVariables()->Find(key);
  return found != nullptr ? found->value : 0;
}

// Only the player score shows when the observer shows it alone.
[[gnu::always_inline]] inline void SetScores(
  ::game::map::SituationObserver* observer, int player, int enemy) {
  if (player < 0 || g_situation == nullptr) {
    return;
  }
  VariableManager::SetFlag(::game::map::kVariablePlayerScore, player);
  if (!observer->IsPlayerOnly()) {
    VariableManager::SetFlag(::game::map::kVariableEnemyScore, enemy);
  }
  observer->Refresh();
}

[[gnu::always_inline]] inline int GetConfig(uint8_t index) {
  const HashedString& key = ::game::config::GetVariable(index);
  GameModeData* mode = GameModeData::GetInstance();
  if (mode == nullptr) {
    return 0;
  }
  const GameVariable* found = mode->GetVariables()->Find(key);
  return found != nullptr ? static_cast<uint8_t>(found->value) : 0;
}

}

int GetGameVersion() {
  return 0;
}

namespace difficulty {

int GetDifficulty() {
  GameModeData* mode = GameModeData::GetInstance();
  return mode != nullptr ? mode->GetDifficulty() : 0;
}

}

namespace gamemode {

int GetMode() {
  GameModeData* mode = GameModeData::GetInstance();
  return mode != nullptr ? mode->GetGameMode() : 0;
}

}

namespace gameroute {

int GetRoute() {
  GameModeData* mode = GameModeData::GetInstance();
  return mode != nullptr ? mode->GetChapterKind() : 0;
}

}

namespace situation {

int GetTurn() {
  ::game::map::Situation* situation = g_situation;
  return situation != nullptr ? situation->GetTurn() : -1;
}

int GetPhase() {
  ::game::map::Situation* situation = g_situation;
  return situation != nullptr ? situation->GetCurrentForce() : -1;
}

void ShowScoreInfo(bool isPlayerOnly) {
  if (::game::map::SituationObserver* observer = g_situation_observer) {
    observer->ShowScoreInfo(isPlayerOnly);
  }
}

int GetPlayerScore() {
  return GetScore(::game::map::kVariablePlayerScore);
}

int GetEnemyScore() {
  return GetScore(::game::map::kVariableEnemyScore);
}

void SetPlayerScore(int score) {
  ::game::map::SituationObserver* observer = g_situation_observer;
  if (observer == nullptr || g_situation == nullptr) {
    return;
  }
  SetScores(observer, score, GetEnemyScore());
}

void SetEnemyScore(int score) {
  ::game::map::SituationObserver* observer = g_situation_observer;
  if (observer == nullptr || g_situation == nullptr) {
    return;
  }
  SetScores(observer, GetPlayerScore(), score);
}

namespace rule {

void SetWinDestroyBoss(bool isEnable) {
  if (::game::map::Situation* situation = g_situation) {
    situation->SetFlag(0x4, isEnable);
    MarkSituationChanged();
  }
}

void SetWinEnemyNumLessThanOrEqualTo(int enemyNum) {
  if (::game::map::Situation* situation = g_situation) {
    situation->SetUnknown26(enemyNum);
    MarkSituationChanged();
  }
}

void SetWinLimitTurn(int turn) {
  if (::game::map::Situation* situation = g_situation) {
    situation->SetUnknown27(turn);
    MarkSituationChanged();
  }
}

void SetWinMID(const as::string& mid, int arg0, int arg1, int arg2) {
  SetRuleMessage(0, mid, arg0, arg1, arg2);
}

void SetLoseMID(const as::string& mid, int arg0, int arg1, int arg2) {
  SetRuleMessage(1, mid, arg0, arg1, arg2);
}

}

}

namespace force {

// The player and its allies are on the same side.
bool IsAllied(uint8_t force1, uint8_t force2) {
  if (force1 == force2) {
    return true;
  }
  if (force1 == 0) {
    return force2 == 3;
  }
  return force1 == 3 && force2 == 0;
}

}

namespace config {

int GetBattleAnimeType() {
  return GetConfig(0);
}

int GetAssistAnimeType() {
  return GetConfig(1);
}

}

namespace variable {

int Get(as::string& name) {
  if (!GameModeData::HasVariable(HashedString(name.c_str()))) {
    return 0;
  }
  const GameVariable* found =
    GameModeData::FindVariable(HashedString(name.c_str()));
  return found != nullptr ? found->value : 0;
}

}

namespace person {

as::string GetName(const as::string& pid) {
  if (!pid.empty()) {
    if (const PersonData* person =
      PersonFile::GetInstance()->Find(pid.c_str())) {
      return as::string(GetPersonName(person));
    }
  }
  return as::string(GetEmptyText());
}

}

namespace item {

as::string GetIID(int itemIndex) {
  const ItemData* item = ItemFile::GetInstance()->At(itemIndex);
  return as::string(item != nullptr ? item->key.text : "");
}

as::string GetItemName(const as::string& iid) {
  if (const ItemData* item = ItemFile::GetInstance()->Find(iid.c_str())) {
    return as::string(game::GetItemName(item));
  }
  return as::string(GetEmptyText());
}

bool HasEquipSkill(const as::string& iid, const as::string& sid) {
  const ItemData* item = ItemFile::GetInstance()->Find(iid.c_str());
  if (item == nullptr) {
    return false;
  }
  const SkillData* skill = SkillFile::GetInstance()->Find(sid.c_str());
  if (skill == nullptr) {
    return false;
  }
  return GetItemSkills(item)->Contains(SkillKey{skill->index});
}

// Tomes and staves attack with magic unless a skill makes them physical,
// the other weapons only with a skill.
bool IsMagicAttack(const as::string& iid) {
  const ItemData* item = ItemFile::GetInstance()->Find(iid.c_str());
  if (item == nullptr) {
    return false;
  }
  const ItemSkills* skills = GetItemSkills(item);
  const uint8_t kind = ItemRow::GetKind(item);
  if (kind == 5 || kind == 6) {
    return !skills->Contains(g_system_skills[kSkillPhysicalAttack]);
  }
  return skills->Contains(g_system_skills[kSkillMagicAttack]);
}

}

namespace hero {

as::string GetPID() {
  GameModeData* mode = GameModeData::GetInstance();
  const PersonData* leader = mode != nullptr ? mode->GetLeader() : nullptr;
  return as::string(leader != nullptr ? leader->key.text : "");
}

}

namespace data {

as::string GetPidByKey(uint32_t key) {
  return as::string(game::GetPidByKey(key));
}

}

#pragma GCC visibility pop

}
