#include "game/unit.hpp"
#include "game/unit_item.hpp"

namespace game {

#pragma GCC visibility push(hidden)

namespace {

// The link of a skill row lists the skill sets that enable or block it.
struct SkillLink {
  uint8_t unknown_00_[0x320];
  std::vector<Unit::SkillList> required;
  std::vector<Unit::SkillList> blocked;
  // Checked against a second list, such as the skills of a partner.
  std::vector<Unit::SkillList> partner_required;
  std::vector<Unit::SkillList> partner_blocked;
  uint8_t unknown_380_[0xe2];
  uint8_t mode;
};

struct JobRow : RowReader<JobData> {};

struct SkillRowEx : SkillRow {
  static const SkillLink* GetLink(const SkillData* data) {
    return Read<const SkillLink*>(data, 0x18);
  }

  static uint8_t GetCategory(const SkillData* data) {
    return Read<uint8_t>(data, 0xfa);
  }

  static uint8_t GetMaxExtra(const SkillData* data) {
    return Read<uint8_t>(data, 0x119);
  }

  static const void* GetLearnData(const SkillData* data) {
    return Read<const void*>(data, 0x240);
  }
};

const SkillData* GetSkill(const SkillKey& key) {
  return g_skill_file->At(key.index);
}

// Mode 1 links need one fully active required set and no blocked one.
bool IsFullyActive(const Unit::SkillList& set, const Unit::SkillList& list) {
  return set.CountActive(list) == static_cast<int>(set.sources.size());
}

[[gnu::always_inline]] inline bool MatchesSets(
  const std::vector<Unit::SkillList>& required,
  const std::vector<Unit::SkillList>& blocked, const Unit::SkillList& list
) {
  if (!required.empty()) {
    bool found = false;
    for (const Unit::SkillList& set : required) {
      if (IsFullyActive(set, list)) {
        found = true;
        break;
      }
    }
    if (!found) {
      return false;
    }
  }

  for (const Unit::SkillList& set : blocked) {
    if (IsFullyActive(set, list)) {
      return false;
    }
  }
  return true;
}

}

bool IsSkillDisabled(const SkillData* data);

// A bit set of skill rows, its meaning is unknown.
extern std::vector<uint32_t> g_marked_skills;

// The person entry the skill info reads, returned by 0x67f4a0.
struct PersonSkillEntry {
  uint8_t unknown_00_[0x18];
  const uint8_t* unknown_18_;
  uint8_t unknown_20_;
  uint8_t unknown_21_;
  uint8_t unknown_22_;
};

const PersonSkillEntry* FindPersonSkillEntry(const PersonData* person);

// Packs the row index with flags: bit 30 for marked skills, 29 without an
// entry, 27 when the job allows the entry, the entry bytes from bit 12.
uint32_t GetSkillInfo(const SkillKey& key, const Unit* unit) {
  if (unit == nullptr) {
    return 0;
  }

  const PersonData* person = unit->GetPerson();
  if (person == nullptr) {
    return 0;
  }

  const JobData* job = unit->GetJob();
  if (job == nullptr) {
    return 0;
  }

  const SkillData* data = GetSkill(key);
  if (data == nullptr) {
    return 0;
  }

  const uint32_t index = data->index;
  const uint32_t word = index >> 5;
  uint32_t flags = word + 1 <= g_marked_skills.size() &&
    (g_marked_skills[word] & 1u << (index & 31)) != 0 ? 0x40000000 : 0;

  const PersonSkillEntry* entry = FindPersonSkillEntry(person);
  if (entry == nullptr) {
    return (flags | 0x20000000) + index;
  }

  if (entry->unknown_22_ != 0) {
    const uint8_t slot = entry->unknown_21_;
    if (JobRow::Read<int8_t>(job, 0x18e + slot) > 0 || slot == 12) {
      flags |= 0x8000000;
    }
  }

  if (entry->unknown_18_[0x30] == 0) {
    flags |= 0x4000000;
  }

  flags |= entry->unknown_22_ << 20 | entry->unknown_20_ << 12;
  return flags + index;
}

// Unknown keys fall back to the first skill row.
const SkillData* FindSkillOrFirst(const uint64_t& hash) {
  if (hash != 0) {
    if (const SkillData* data = g_skill_file->FindByHash(hash)) {
      return data;
    }
  }

  if (static_cast<int>(g_skill_file->GetItemCount()) < 1) {
    return nullptr;
  }
  return g_skill_file->At(0);
}

int SkillKey::GetRemainingUses() const {
  const SkillData* data = GetSkill(*this);
  const uint8_t kind = SkillRow::GetKind(data);
  const int uses = SkillRow::GetUses(data);
  const int extra = kind - 5u < 2 ? this->extra : 0;
  const int remaining = extra - level + uses;
  return remaining < 0 ? 0 : remaining;
}

bool SkillKey::IsUsable() const {
  if (index == 0) {
    return false;
  }

  const SkillData* data = GetSkill(*this);
  if (IsSkillDisabled(data)) {
    return false;
  }

  if (SkillRow::GetUses(data) == 0) {
    return true;
  }

  const SkillData* row = GetSkill(*this);
  const int extra = SkillRow::GetKind(row) - 5u < 2 ? this->extra : 0;
  return extra - static_cast<int>(level) + SkillRow::GetUses(row) >= 1;
}

bool HasActiveSkill(const SkillKey& key, const Unit::SkillList& list) {
  if (key.index == 0) {
    return false;
  }

  const SkillData* data = GetSkill(key);
  if (IsSkillDisabled(data)) {
    return false;
  }

  if (SkillRow::GetUses(data) != 0) {
    const SkillData* row = GetSkill(key);
    const int extra = SkillRow::GetKind(row) - 5u < 2 ? key.extra : 0;
    if (extra - static_cast<int>(key.level) + SkillRow::GetUses(row) < 1) {
      return false;
    }
  }

  const SkillLink* link = SkillRowEx::GetLink(data);
  if (link->mode != 1) {
    return true;
  }

  return MatchesSets(link->required, link->blocked, list);
}

bool HasActiveSkill(
  const SkillKey& key, const Unit::SkillList& list,
  const Unit::SkillList& partner
) {
  if (key.index == 0) {
    return false;
  }

  const SkillData* data = GetSkill(key);
  if (IsSkillDisabled(data)) {
    return false;
  }

  if (SkillRow::GetUses(data) != 0) {
    const SkillData* row = GetSkill(key);
    const int extra = SkillRow::GetKind(row) - 5u < 2 ? key.extra : 0;
    if (extra - static_cast<int>(key.level) + SkillRow::GetUses(row) < 1) {
      return false;
    }
  }

  const SkillLink* link = SkillRowEx::GetLink(data);
  if (link->mode == 1 && !MatchesSets(link->required, link->blocked, list)) {
    return false;
  }

  link = SkillRowEx::GetLink(data);
  if (link->mode != 1) {
    return true;
  }

  return MatchesSets(link->partner_required, link->partner_blocked, partner);
}

// Learned skills can still grow while their extra levels are below the
// maximum.
bool CanLearnSkill(const SkillKey& key, const Unit* unit) {
  if (unit == nullptr || unit->GetSkillList(0).Contains(key.index) ||
    key.index == 0) {
    return false;
  }

  const Unit::SkillList& learned = unit->GetSkillList(3);
  if (!learned.Contains(key.index)) {
    return SkillRowEx::GetLearnData(SkillFile::GetInstance()->At(key.index)) !=
      nullptr;
  }

  if (learned.sources.empty()) {
    return false;
  }

  int64_t found = -1;
  for (size_t i = 0; i < learned.sources.size(); i++) {
    if (((learned.sources[i] ^ key.index) & 0xfff) == 0) {
      found = i;
      break;
    }
  }
  if (found < 0) {
    return false;
  }

  const SkillKey& source = learned.GetSource(static_cast<uint32_t>(found));
  int max = SkillRowEx::GetMaxExtra(SkillFile::GetInstance()->At(source.index));
  if (max <= 1) {
    max = 1;
  }

  return ((source.unknown_18_ & 0x1f) != 0 ||
    static_cast<int>(source.extra) < max - 1) &&
    SkillRowEx::GetLearnData(SkillFile::GetInstance()->At(key.index)) !=
      nullptr;
}

[[gnu::noinline]] int Unit::SkillList::CountActive(
  const SkillList& owner
) const {
  int count = 0;
  for (size_t i = 0; i < sources.size(); i++) {
    const SkillKey& key = GetSource(i);
    if (owner.Contains(key.index)) {
      count += HasActiveSkill(key, owner);
    }
  }
  return count;
}

bool Unit::SkillList::ContainsAny(const SkillList& other) const {
  for (size_t i = 0; i < other.sources.size(); i++) {
    if (Contains(other.GetSource(i).index)) {
      return true;
    }
  }
  return false;
}

int Unit::SkillList::IndexOf(const SkillKey& key) const {
  if (!Contains(key.index)) {
    return -1;
  }

  for (size_t i = 0; i < sources.size(); i++) {
    if (((sources[i] ^ key.index) & 0xfff) == 0) {
      return i;
    }
  }
  return -1;
}

bool Unit::SkillList::Replace(const SkillKey& from, const SkillKey& to) {
  if (!Contains(from.index) || Contains(to.index)) {
    return false;
  }

  return Unknown84dea0(from, to);
}

// Bit masks of the kinds and categories in the list skip the search.
int Unit::SkillList::FindKind(uint8_t kind) const {
  if ((static_cast<uint16_t>(unknown_50_[0]) >> kind & 1) == 0) {
    return -1;
  }

  for (size_t i = 0; i < sources.size(); i++) {
    if (SkillRow::GetKind(GetSkill(GetSource(i))) == kind) {
      return i;
    }
  }
  return -1;
}

int Unit::SkillList::FindCategory(uint8_t category) const {
  if ((unknown_50_[1] >> category & 1) == 0) {
    return -1;
  }

  for (size_t i = 0; i < sources.size(); i++) {
    if (SkillRowEx::GetCategory(GetSkill(GetSource(i))) == category) {
      return i;
    }
  }
  return -1;
}

void Unit::SkillList::MoveBit(const SkillKey& from, const SkillKey& to) {
  if (Contains(from.index)) {
    skills[from.index >> 5] &= ~(1u << (from.index & 31));
    count--;
  }

  const uint32_t word = to.index >> 5;
  if (word + 1 <= skills.size()) {
    if (skills[word] >> (to.index & 31) & 1) {
      return;
    }
  }
  else {
    skills.resize(word + 1, 0);
  }

  skills[word] |= 1u << (to.index & 31);
  count++;
}

#pragma GCC visibility pop

}
