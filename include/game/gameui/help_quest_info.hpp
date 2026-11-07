#pragma once

#include <cstdint>
#include <vector>

namespace game {

// A 16 byte entry of the quest lists, such as a reward or a condition.
struct QuestEntry {
  uint64_t unknown_00;
  const void* data;
};

static_assert(sizeof(QuestEntry) == 0x10);

struct QuestIconColor {
  uint8_t unknown_00;
  uint8_t unknown_01;
  uint8_t unknown_02[0x2];
};

struct QuestRecordState {
  uint8_t unknown_00;
  uint8_t unknown_01;
  uint8_t unknown_02;
  uint8_t unknown_03;
  uint8_t unknown_04[0x2];
  QuestIconColor unknown_06[0xa];
  QuestIconColor unknown_2e[0xa];
  uint8_t unknown_56[0x2];
  std::vector<QuestEntry> unknown_58;
  std::vector<QuestEntry> unknown_70;
  std::vector<QuestEntry> unknown_88;
  std::vector<QuestEntry> unknown_a0;
  const void* unknown_b8;
};

struct QuestTarget {
  uint8_t unknown_00[0x28];
  uint16_t count;
  const QuestEntry* entries;
};

// The quest row of the sub quest data, with the members the help reads.
struct SubquestRecord {
  uint32_t hash;
  const char* name;
  uint8_t unknown_10[0x8];
  const QuestRecordState* state;
  const char* mid;
  uint8_t unknown_28[0x40];
  const char* help_mid;
  uint8_t kind;
  uint8_t unknown_71;
  uint8_t unknown_72[0x6];
  const char* unknown_78;
  uint16_t item_count;
  const QuestEntry* items;
  uint8_t unknown_90[0x10];
  uint8_t unknown_a0;
  uint8_t unknown_a1[0x9f];
  uint16_t unknown_140;
  const QuestEntry* unknown_148;
  uint8_t unknown_150[0x8];
  const QuestTarget* unknown_158;
  uint8_t unknown_160[0x8];
  const void* unknown_168;
  uint8_t unknown_170;
  uint8_t unknown_171[0x37];
  uint8_t unknown_1a8;
  uint16_t unknown_1aa;
  uint16_t unknown_1ac;
  uint8_t unknown_1ae[0x4a];
  uint16_t unknown_1f8;
  const void* const* unknown_200;
  uint8_t unknown_208[0x18];
  const void* unknown_220;
};

static_assert(sizeof(SubquestRecord) == 0x228);

struct SideStoryRecord {
  uint32_t hash;
  const char* name;
  uint8_t unknown_10[0x8];
  const QuestRecordState* state;
  uint8_t unknown_20[0x20];
  const char* mid;
  uint8_t unknown_48[0x40];
  const char* help_mid;
  uint8_t unknown_90[0x28];
  const void* unknown_b8;
  uint8_t unknown_c0[0x8];
  const void* unknown_c8;
  uint8_t unknown_d0[0x80];
  uint16_t unknown_150;
  uint8_t unknown_152;
  uint8_t unknown_153[0x5];
  uint16_t unknown_158;
  const QuestEntry* unknown_160;
  uint8_t unknown_168[0x8];
  const void* unknown_170;
};

// The progress of a sub quest.
struct Subquest {
  const char16_t* GetUnknown00() const;
  const char16_t* GetUnknown01() const;
  void GetUnknown02(std::vector<int32_t>* values) const;

  const SubquestRecord* record;
  uint8_t unknown_08;
  uint8_t state;
  uint8_t unknown_0a;
};

struct SideStory {
  const char16_t* GetUnknown00() const;

  const SideStoryRecord* record;
  uint8_t state;
};

// The item name text of a row.
const char16_t* GetItemName(const void* item, bool unknown);

struct QuestItem {
  uint8_t unknown_00[0x78];
  const void* item;
};

const QuestItem* FindQuestItem(const void* key);


const char16_t* GetQuestCondition(const void* condition);

}

namespace game::gameui::Help {

struct QuestIcon {
  QuestIcon() : unknown_00(0), unknown_02(0), unknown_04(0), unknown_06(0),
    unknown_08(0) {}

  uint16_t unknown_00;
  uint16_t unknown_02;
  uint16_t unknown_04;
  uint16_t unknown_06;
  uint32_t unknown_08;
};

// The icon of the quests shown by the help, its owner is unknown.
struct QuestIconStyle {
  static QuestIconStyle* instance_;
  [[gnu::visibility("default")]] static QuestIcon default_;

  uint8_t unknown_00[0x8];
  QuestIcon icon;
};

// The quest rows shown by the help, sub quests or side stories.
class ICommonQuestInfo {
public:
  virtual const QuestIcon* GetIcon() = 0;
  virtual const char16_t* GetName() = 0;
  virtual const char* GetNameMid() = 0;
  virtual const char16_t* Unknown03() = 0;
  virtual const char16_t* Unknown04() = 0;
  virtual const char16_t* GetHelp() = 0;
  virtual const char* GetKey() = 0;
  virtual int Unknown07() = 0;
  virtual int Unknown08() = 0;
  virtual int Unknown09() = 0;
  virtual int Unknown10() = 0;
  virtual bool Unknown11() = 0;
  virtual bool Unknown12() = 0;
  virtual bool Unknown13() = 0;
  virtual bool Unknown14() = 0;
  virtual bool Unknown15() = 0;
  virtual bool Unknown16() = 0;
  virtual bool Unknown17() = 0;
  virtual bool Unknown18() = 0;
  virtual const char16_t* Unknown19() = 0;
  virtual int GetItemCount() = 0;
  virtual const void* GetItem(int index) = 0;
  virtual const char16_t* GetFirstItemName() = 0;
  virtual const char16_t* GetItemName(int index) = 0;
  virtual int Unknown24() = 0;
  virtual const void* Unknown25() = 0;
  virtual const void* Unknown26() = 0;
  virtual const void* Unknown27() = 0;
  virtual int Unknown28() = 0;
  virtual const void* Unknown29(int index) = 0;
  virtual bool Unknown30() = 0;
  virtual int Unknown31() = 0;
  virtual int Unknown32() = 0;
  virtual int Unknown33() = 0;
  virtual int Unknown34() = 0;
  virtual int Unknown35() = 0;
  virtual int Unknown36() = 0;
  virtual bool Unknown37() = 0;
  virtual bool Unknown38() = 0;
  virtual const void* Unknown39(int index) = 0;
  virtual const void* Unknown40(int index) = 0;
  virtual const void* Unknown41(int index) = 0;
  virtual const void* Unknown42() = 0;
  virtual const void* Unknown43(int index) = 0;
  virtual const void* Unknown44() = 0;
  virtual const void* Unknown45() = 0;
};

class SubQuestInfo : public ICommonQuestInfo {
public:
  explicit SubQuestInfo(const Subquest* quest) : quest_(quest) {}

  const Subquest* GetQuest() const { return quest_; }

  const QuestIcon* GetIcon() override;
  const char16_t* GetName() override;
  const char* GetNameMid() override;
  const char16_t* Unknown03() override;
  const char16_t* Unknown04() override;
  const char16_t* GetHelp() override;
  const char* GetKey() override;
  int Unknown07() override;
  int Unknown08() override;
  int Unknown09() override;
  int Unknown10() override;
  bool Unknown11() override;
  bool Unknown12() override;
  bool Unknown13() override;
  bool Unknown14() override;
  bool Unknown15() override;
  bool Unknown16() override;
  bool Unknown17() override;
  bool Unknown18() override;
  const char16_t* Unknown19() override;
  int GetItemCount() override;
  const void* GetItem(int index) override;
  const char16_t* GetFirstItemName() override;
  const char16_t* GetItemName(int index) override;
  int Unknown24() override;
  const void* Unknown25() override;
  const void* Unknown26() override;
  const void* Unknown27() override;
  int Unknown28() override;
  const void* Unknown29(int index) override;
  bool Unknown30() override;
  int Unknown31() override;
  int Unknown32() override;
  int Unknown33() override;
  int Unknown34() override;
  int Unknown35() override;
  int Unknown36() override;
  bool Unknown37() override;
  bool Unknown38() override;
  const void* Unknown39(int index) override;
  const void* Unknown40(int index) override;
  const void* Unknown41(int index) override;
  const void* Unknown42() override;
  const void* Unknown43(int index) override;
  const void* Unknown44() override;
  const void* Unknown45() override;

private:
  const Subquest* quest_;
};

class SideStoryInfo : public ICommonQuestInfo {
public:
  explicit SideStoryInfo(const SideStory* story);

  const QuestIcon* GetIcon() override;
  const char16_t* GetName() override;
  const char* GetNameMid() override;
  const char16_t* Unknown03() override;
  const char16_t* Unknown04() override;
  const char16_t* GetHelp() override;
  const char* GetKey() override;
  int Unknown07() override;
  int Unknown08() override;
  int Unknown09() override;
  int Unknown10() override;
  bool Unknown11() override;
  bool Unknown12() override;
  bool Unknown13() override;
  bool Unknown14() override;
  bool Unknown15() override;
  bool Unknown16() override;
  bool Unknown17() override;
  bool Unknown18() override;
  const char16_t* Unknown19() override;
  int GetItemCount() override;
  const void* GetItem(int index) override;
  const char16_t* GetFirstItemName() override;
  const char16_t* GetItemName(int index) override;
  int Unknown24() override;
  const void* Unknown25() override;
  const void* Unknown26() override;
  const void* Unknown27() override;
  int Unknown28() override;
  const void* Unknown29(int index) override;
  bool Unknown30() override;
  int Unknown31() override;
  int Unknown32() override;
  int Unknown33() override;
  int Unknown34() override;
  int Unknown35() override;
  int Unknown36() override;
  bool Unknown37() override;
  bool Unknown38() override;
  const void* Unknown39(int index) override;
  const void* Unknown40(int index) override;
  const void* Unknown41(int index) override;
  const void* Unknown42() override;
  const void* Unknown43(int index) override;
  const void* Unknown44() override;
  const void* Unknown45() override;

private:
  struct Reward {
    const void* data;
    int32_t count;
  };

  const QuestIconColor& GetColor() const;

  const SideStory* story_;
  QuestIcon icon_;
  std::vector<Reward> unknown_20_;
  std::vector<Reward> unknown_38_;
};

static_assert(sizeof(SideStoryInfo) == 0x50);

}
