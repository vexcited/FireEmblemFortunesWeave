#include <algorithm>
#include <functional>
#include <vector>

#include "game/data/data_files.hpp"
#include "game/game_mode_data.hpp"
#include "game/map/history_data.hpp"
#include "game/map/situation.hpp"
#include "game/map/unit_flags.hpp"
#include "game/singleton.hpp"
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

namespace history {

// The variables the map history keeps, with the keys entered while it
// records.
class VariableHistory : public Singleton<VariableHistory> {
public:
  static bool IsIgnored(const HashedString& key);
  static void Record(uint8_t kind, const HashedString& key);

  bool HasEntry(const HashedString& key) const {
    return std::find(entries_.begin(), entries_.end(), key.hash) !=
      entries_.end();
  }

  void MarkEntered() {
    flags_ |= 1;
  }

private:
  uint8_t unknown_08_[0x21];
  uint8_t flags_;
  uint8_t unknown_2a_[0x6];
  std::vector<uint64_t> entries_;
};

}

}

namespace UnitUtil {

// Calls the callback on the units the flag of the key concerns.
void EachFlagUnit(const HashedString& key,
  const std::function<void(Unit*)>& callback);

}

// Changes the value of a known variable, true when it changed.
bool SetVariable(const HashedString& key, int value);

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

// Enters the variable while the map history records, once per key.
void Entry(as::string& name, int value) {
  if (name.empty()) {
    return;
  }
  GameModeData::GetInstance()->GetRegistry().Entry(1,
    HashedString(name.c_str()), value, 0, -99999, 99999, false);
  const HashedString key(name.c_str());
  ::game::map::history::Impl* history = g_map_history;
  if (history == nullptr || key.hash == 0 || !history->IsRecording()) {
    return;
  }
  using ::game::map::history::VariableHistory;
  if (VariableHistory::IsIgnored(key)) {
    return;
  }
  VariableHistory* variables = VariableHistory::GetInstance();
  if (variables == nullptr || !variables->HasEntry(key)) {
    VariableHistory::Record(1, key);
    variables = VariableHistory::GetInstance();
  }
  if (variables != nullptr) {
    variables->MarkEntered();
  }
}

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

// The variable of the key names a flag unless it is of kind 1 or 2.
as::string GetFlagByKey(uint32_t key) {
  const GameVariable* found =
    GameModeData::GetInstance()->GetRegistry().FindByKey(key);
  if (found == nullptr || found->type == 1 || found->type == 2) {
    return as::string("");
  }
  return as::string(found->name.c_str());
}

as::string GetPidByKey(uint32_t key) {
  return as::string(game::GetPidByKey(key));
}

}

#pragma GCC visibility pop

}

#pragma GCC visibility push(hidden)

// The closure type of the RTTI names this native at file scope.
[[gnu::used]] static void Set(as::string& name, int value) {
  using namespace game;
  const HashedString key(name.c_str());
  if (!GameModeData::HasVariable(key) || !SetVariable(key, value)) {
    return;
  }
  if (map::history::Impl* history = g_map_history) {
    history->RecordVariable(key);
  }
  UnitUtil::EachFlagUnit(key, [](Unit* unit) {
    unit->Unknown6c4610();
    const map::history::Impl* history = g_map_history;
    if (history != nullptr && history->IsRecording() &&
      unit->GetForce() != nullptr && unit->GetForceType() <= 8 &&
      map::UnitFlags::instance_ != nullptr) {
      map::UnitFlags::instance_->MarkDirty(unit->GetIndex());
    }
  });
}

#pragma GCC visibility pop
