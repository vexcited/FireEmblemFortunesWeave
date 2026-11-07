#include <bit>
#include <functional>

#include "game/data/data_files.hpp"
#include "game/map/unit_flags.hpp"
#include "game/unit_item.hpp"
#include "msg/message_manager.hpp"
#include "nn/util/string_util.hpp"

namespace game {

#pragma GCC visibility push(hidden)

const char* GetPersonName(const PersonData* person);
const char* GetTerrainName(const TerrainData* terrain);
const char* GetItemName(const ItemData* item);
const char* GetSkillName(const SkillData* skill);
const char* GetSkillTitle(const SkillData* skill);
const char* GetMiracleName(const MiracleData* miracle);

#pragma GCC visibility pop

}

namespace game::map::history {

#pragma GCC visibility push(hidden)

namespace {

using TextGetter = std::function<const char*()>;
using ValueGetter = std::function<int()>;

// The action of an attack, the amount in the low byte.
struct ActionValue {
  uint8_t amount;
  uint8_t unknown_01;
  uint8_t target;
  uint8_t action;
};

template<typename File>
[[gnu::always_inline]] inline auto* FindRow(uint64_t hash) {
  return hash != 0 ? File::GetInstance()->FindByHash(hash) : nullptr;
}

// The lambdas share the lookups by hash.
[[gnu::noinline]] const char* GetPersonName(uint64_t hash) {
  const PersonData* person = FindRow<PersonFile>(hash);
  return person != nullptr ? game::GetPersonName(person) : "";
}

[[gnu::noinline]] const char* GetTerrainName(uint64_t hash) {
  const TerrainData* terrain = FindRow<TerrainFile>(hash);
  return terrain != nullptr ? game::GetTerrainName(terrain) : "";
}

[[gnu::noinline]] const char* GetItemName(uint64_t hash) {
  const ItemData* item = FindRow<ItemFile>(hash);
  return item != nullptr ? game::GetItemName(item) : "";
}

[[gnu::noinline]] const char* GetSkillName(uint64_t hash) {
  const SkillData* skill = FindRow<SkillFile>(hash);
  return skill != nullptr ? game::GetSkillName(skill) : "";
}

// Skills without a title text give no name.
[[gnu::always_inline]] inline const char* GetSkillTitle(uint64_t hash) {
  const SkillData* skill = FindRow<SkillFile>(hash);
  if (skill == nullptr) {
    return "";
  }
  const char* title = SkillRow::Read<const char*>(skill, 0x50);
  return title != nullptr && title[0] != '\0' ? game::GetSkillTitle(skill) :
    "";
}

[[gnu::always_inline]] inline const char* GetMiracleName(uint64_t hash) {
  const MiracleData* miracle = FindRow<MiracleFile>(hash);
  return miracle != nullptr ? game::GetMiracleName(miracle) : "";
}

[[gnu::always_inline]] inline msg::MessageArguments& GetArguments() {
  return msg::MessageManager::GetInstance()->GetArguments();
}

// The log keeps the bytes of the message.
[[gnu::always_inline]] inline const char* GetMessage(const char* mid) {
  return reinterpret_cast<const char*>(msg::GetText(mid));
}

// The tags take copies of the names, cut to 127 characters.
[[gnu::always_inline]] inline const char* Format(const char* mid,
  const TextGetter& first) {
  char text[128];
  nn::util::Strlcpy(text, first(), sizeof(text));
  GetArguments().Set(0, text);
  return GetMessage(mid);
}

const char* Format(const char* mid, const TextGetter& first,
  const TextGetter& second) {
  char first_text[128];
  nn::util::Strlcpy(first_text, first(), sizeof(first_text));
  char second_text[128];
  nn::util::Strlcpy(second_text, second(), sizeof(second_text));
  GetArguments().Set(0, first_text);
  GetArguments().Set(1, second_text);
  return GetMessage(mid);
}

const char* Format(const char* mid, const TextGetter& first,
  const TextGetter& second, const ValueGetter& value) {
  char first_text[128];
  nn::util::Strlcpy(first_text, first(), sizeof(first_text));
  char second_text[128];
  nn::util::Strlcpy(second_text, second(), sizeof(second_text));
  GetArguments().Set(0, first_text);
  GetArguments().Set(1, second_text);
  GetArguments().Set(2, value(), 0);
  return GetMessage(mid);
}

}

std::string LogInfo::CreateTextFixed() const {
  if (value_ != 0) {
    return Format("MID_RewindMsg_Mov",
      [this] { return GetPersonName(names_[0].hash); });
  }
  return Format("MID_RewindMsg_Wait",
    [this] { return GetPersonName(names_[0].hash); });
}

// The target 0 is a unit, 1 an object of the map.
std::string LogInfo::CreateTextAttack() const {
  const auto value = std::bit_cast<ActionValue>(value_);
  if (value.action == 0) {
    return Format("MID_RewindMsg_Defeat", [] { return ""; },
      [this] { return GetPersonName(names_[0].hash); });
  }
  if (value.target == 0) {
    if (value.action == 1) {
      return Format("MID_RewindMsg_Defeat",
        [this] { return GetPersonName(names_[0].hash); },
        [this] { return GetPersonName(names_[1].hash); });
    }
    if (value.action == 2) {
      return Format("MID_RewindMsg_Person_Attack",
        [this] { return GetPersonName(names_[0].hash); },
        [this] { return GetPersonName(names_[1].hash); },
        [&value] { return static_cast<int>(value.amount); });
    }
  }
  else if (value.target == 1) {
    if (value.action == 1) {
      return Format("MID_RewindMsg_Destroy",
        [this] { return GetPersonName(names_[0].hash); },
        [this] { return GetTerrainName(names_[1].hash); });
    }
    if (value.action == 2) {
      return Format("MID_RewindMsg_Attack",
        [this] { return GetPersonName(names_[0].hash); },
        [this] { return GetTerrainName(names_[1].hash); },
        [&value] { return static_cast<int>(value.amount); });
    }
  }
  if (value.action == 3) {
    return Format("MID_RewindMsg_Magic",
      [this] { return GetPersonName(names_[0].hash); },
      [this] { return GetItemName(names_[1].hash); });
  }
  if (value.action == 4) {
    return Format("MID_RewindMsg_Skill",
      [this] { return GetPersonName(names_[0].hash); },
      [this] { return GetSkillName(names_[1].hash); });
  }
  return CreateTextGeneral();
}

// The top bit marks a recovery by a staff without an amount.
std::string LogInfo::CreateTextHeal() const {
  const auto value = std::bit_cast<ActionValue>(value_);
  if ((value.action & 0x80) == 0) {
    return Format("MID_RewindMsg_HPRecovery_Magic",
      [this] { return GetPersonName(names_[0].hash); },
      [this] { return GetPersonName(names_[1].hash); },
      [&value] { return static_cast<int>(value.amount); });
  }
  return Format("MID_RewindMsg_Recovery_Magic",
    [this] { return GetPersonName(names_[0].hash); },
    [this] { return GetItemName(names_[1].hash); });
}

std::string LogInfo::CreateTextAssist() const {
  return Format("MID_RewindMsg_Assist_Magic",
    [this] { return GetPersonName(names_[0].hash); },
    [this] { return GetItemName(names_[1].hash); });
}

std::string LogInfo::CreateTextArts() const {
  return Format("MID_RewindMsg_Assist_Arts",
    [this] { return GetPersonName(names_[0].hash); },
    [this] { return GetSkillName(names_[1].hash); });
}

std::string LogInfo::CreateTextSpecial() const {
  return Format("MID_RewindMsg_Special",
    [this] { return GetPersonName(names_[0].hash); },
    [this] { return GetSkillName(names_[1].hash); });
}

std::string LogInfo::CreateTextGambit() const {
  return Format("MID_RewindMsg_Gambit",
    [this] { return GetPersonName(names_[0].hash); },
    [this] { return GetSkillName(names_[1].hash); });
}

std::string LogInfo::CreateTextRage() const {
  return Format("MID_RewindMsg_Rage",
    [this] { return GetPersonName(names_[0].hash); },
    [this] { return GetSkillName(names_[1].hash); });
}

std::string LogInfo::CreateTextItemUse() const {
  return Format("MID_RewindMsg_Used_Item",
    [this] { return GetPersonName(names_[0].hash); },
    [this] { return GetItemName(names_[1].hash); });
}

std::string LogInfo::CreateTextEscape() const {
  return Format("MID_RewindMsg_Secede",
    [this] { return GetPersonName(names_[0].hash); });
}

// A box without an item only names the unit that opened it.
std::string LogInfo::CreateTextTreasureBox() const {
  if (names_[1].hash != 0) {
    return Format("MID_RewindMsg_Get_Item",
      [this] { return GetPersonName(names_[0].hash); },
      [this] { return GetItemName(names_[1].hash); });
  }
  return Format("MID_RewindMsg_Open_Treasurebox",
    [this] { return GetPersonName(names_[0].hash); });
}

std::string LogInfo::CreateTextMiracle() const {
  return Format("MID_RewindMsg_Miracle",
    [this] { return GetMiracleName(names_[1].hash); });
}

std::string LogInfo::CreateTextSkill() const {
  return Format("MID_RewindMsg_UnitSkill",
    [this] { return GetPersonName(names_[0].hash); },
    [this] { return GetSkillTitle(names_[1].hash); });
}

std::string LogInfo::CreateTextKilledByRevenge() const {
  return Format("MID_RewindMsg_Defeat2",
    [this] { return GetPersonName(names_[0].hash); },
    [this] { return GetPersonName(names_[1].hash); });
}

std::string LogInfo::CreateTextGeneral() const {
  return Format("MID_RewindMsg_Fixed",
    [this] { return GetPersonName(names_[0].hash); });
}

// Kind 1 starts a phase, the low byte of the value is the phase.
std::string LogInfo::CreateText() const {
  switch (kind_) {
    case 1:
      if (value_ == 0) {
        return GetMessage("MID_RewindMsg_BattleStart");
      }
      switch (static_cast<uint8_t>(value_)) {
        case 1:
          return GetMessage("MID_RewindMsg_EnemyPhase");
        case 2:
          return GetMessage("MID_RewindMsg_ThirdPhase");
        case 3:
          return GetMessage("MID_RewindMsg_AllyPhase");
        default:
          return GetMessage("MID_RewindMsg_PlayerPhase");
      }
    case 2:
      return CreateTextFixed();
    case 3:
      return CreateTextAttack();
    case 4:
      return CreateTextHeal();
    case 5:
      return CreateTextAssist();
    case 6:
      return CreateTextArts();
    case 7:
      return CreateTextSpecial();
    case 8:
      return CreateTextGambit();
    case 9:
      return CreateTextRage();
    case 10:
      return CreateTextItemUse();
    case 11:
      return CreateTextEscape();
    case 12:
      return CreateTextTreasureBox();
    case 13:
      return CreateTextMiracle();
    case 14:
      return CreateTextSkill();
    case 15:
      return CreateTextKilledByRevenge();
    case 255:
      return CreateTextGeneral();
    default:
      return std::string();
  }
}

#pragma GCC visibility pop

}
