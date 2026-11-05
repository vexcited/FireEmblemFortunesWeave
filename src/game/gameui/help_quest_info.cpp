#pragma GCC visibility push(hidden)
#include "game/game_mode_data.hpp"
#include "game/gameui/help_quest_info.hpp"
#include "msg/message_manager.hpp"
#pragma GCC visibility pop

#include <numeric>

namespace game::gameui::Help {

namespace {

const char16_t* GetMessage(const char* mid) {
  if (mid == nullptr || *mid == '\0') {
    return msg::MessageManager::empty_text_;
  }
  return msg::GetText(mid);
}

// The original returns the narrow empty string for texts too.
const char16_t* GetEmptyText() {
  return reinterpret_cast<const char16_t*>("");
}

template<typename T>
const T* GetEntry(const std::vector<T>& entries, int index) {
  if (index >= static_cast<int>(entries.size())) {
    return nullptr;
  }
  return &entries[index];
}

}

const char16_t* SubQuestInfo::GetName() {
  return GetMessage(quest_->record->mid);
}

const char* SubQuestInfo::GetNameMid() {
  return quest_->record->mid;
}

const char16_t* SubQuestInfo::Unknown03() {
  return quest_->GetUnknown00();
}

const char16_t* SubQuestInfo::Unknown04() {
  return quest_->GetUnknown01();
}

const char16_t* SubQuestInfo::GetHelp() {
  return GetMessage(quest_->record->help_mid);
}

const char* SubQuestInfo::GetKey() {
  return quest_->record->name;
}

int SubQuestInfo::Unknown07() {
  return 2;
}

int SubQuestInfo::Unknown08() {
  return quest_->record->kind;
}

int SubQuestInfo::Unknown09() {
  return quest_->record->unknown_71;
}

int SubQuestInfo::Unknown10() {
  return quest_->record->unknown_a0;
}

bool SubQuestInfo::Unknown11() {
  return quest_->state == 2 || quest_->state == 3;
}

bool SubQuestInfo::Unknown12() {
  return quest_->state == 3;
}

bool SubQuestInfo::Unknown13() {
  return quest_->state == 4;
}

bool SubQuestInfo::Unknown14() {
  return quest_->state == 5;
}

bool SubQuestInfo::Unknown15() {
  return quest_->unknown_0a == 0;
}

bool SubQuestInfo::Unknown16() {
  return quest_->unknown_0a == 1;
}

bool SubQuestInfo::Unknown17() {
  return quest_->state == 4 || quest_->state == 5;
}

bool SubQuestInfo::Unknown18() {
  return false;
}

const char16_t* SubQuestInfo::Unknown19() {
  return GetMessage(quest_->record->unknown_78);
}

int SubQuestInfo::GetItemCount() {
  return quest_->record->item_count;
}

const void* SubQuestInfo::GetItem(int index) {
  return FindQuestItem(quest_->record->items[index].data);
}

const char16_t* SubQuestInfo::GetFirstItemName() {
  const SubquestRecord* record = quest_->record;
  if (record->item_count != 0) {
    if (const void* item = record->items[0].data) {
      return game::GetItemName(item, false);
    }
  }
  return GetEmptyText();
}

const char16_t* SubQuestInfo::GetItemName(int index) {
  if (const void* item = quest_->record->items[index].data) {
    return game::GetItemName(item, false);
  }
  return GetEmptyText();
}

int SubQuestInfo::Unknown24() {
  return quest_->record->unknown_170;
}

const void* SubQuestInfo::Unknown25() {
  const SubquestRecord* record = quest_->record;
  if (record->unknown_140 == 0) {
    return nullptr;
  }
  return record->unknown_148[0].data;
}

const void* SubQuestInfo::Unknown26() {
  return quest_->record->unknown_168;
}

const void* SubQuestInfo::Unknown27() {
  return quest_->record->unknown_158;
}

int SubQuestInfo::Unknown28() {
  const QuestTarget* target = quest_->record->unknown_158;
  if (target == nullptr) {
    return 0;
  }
  return target->count;
}

const void* SubQuestInfo::Unknown29(int index) {
  const QuestTarget* target = quest_->record->unknown_158;
  if (target == nullptr) {
    return nullptr;
  }
  return target->entries[index].data;
}

bool SubQuestInfo::Unknown30() {
  std::vector<int32_t> values;
  quest_->GetUnknown02(&values);
  int total = std::accumulate(values.begin(), values.end(), 0);
  return total >= Unknown24();
}

int SubQuestInfo::Unknown31() {
  return quest_->record->unknown_1a8;
}

int SubQuestInfo::Unknown32() {
  return quest_->record->unknown_1aa;
}

int SubQuestInfo::Unknown33() {
  return quest_->record->unknown_1ac;
}

int SubQuestInfo::Unknown34() {
  return quest_->record->state->unknown_58.size();
}

int SubQuestInfo::Unknown35() {
  return quest_->record->state->unknown_70.size();
}

int SubQuestInfo::Unknown36() {
  return quest_->record->state->unknown_88.size();
}

bool SubQuestInfo::Unknown37() {
  const SubquestRecord* record = quest_->record;
  return record->kind != 5 && record->unknown_220 != nullptr;
}

bool SubQuestInfo::Unknown38() {
  return quest_->record->unknown_1f8 != 0;
}

const void* SubQuestInfo::Unknown39(int index) {
  return GetEntry(quest_->record->state->unknown_58, index);
}

const void* SubQuestInfo::Unknown40(int index) {
  return GetEntry(quest_->record->state->unknown_70, index);
}

const void* SubQuestInfo::Unknown41(int index) {
  return GetEntry(quest_->record->state->unknown_88, index);
}

const void* SubQuestInfo::Unknown42() {
  const SubquestRecord* record = quest_->record;
  if (record->kind == 5) {
    return nullptr;
  }
  return record->unknown_220;
}

const void* SubQuestInfo::Unknown43(int index) {
  return quest_->record->unknown_200[index];
}

const void* SubQuestInfo::Unknown44() {
  const std::vector<QuestEntry>& entries = quest_->record->state->unknown_a0;
  if (entries.empty()) {
    return nullptr;
  }
  return &entries;
}

const void* SubQuestInfo::Unknown45() {
  return quest_->record->state->unknown_b8;
}

// The original inlines the whole growth path of the vectors.
[[gnu::flatten]] SideStoryInfo::SideStoryInfo(const SideStory* story) :
  story_(story) {
  const QuestIconStyle* style = QuestIconStyle::instance_;
  icon_.unknown_00 = (style != nullptr ? style->icon :
    QuestIconStyle::default_).unknown_00;
  icon_.unknown_02 = GetColor().unknown_00;
  icon_.unknown_04 = GetColor().unknown_01;

  for (int i = 0; i < story_->record->unknown_158; ++i) {
    unknown_20_.push_back({story_->record->unknown_160[i].data, 1});
  }
  unknown_38_.push_back({story_->record->unknown_170, 1});
}

// Side stories with differing first and second values use the second table.
const QuestIconColor& SideStoryInfo::GetColor() const {
  const QuestRecordState* state = story_->record->state;
  const QuestIconColor* colors =
    state->unknown_00 != state->unknown_02 ||
    state->unknown_01 != state->unknown_03 ?
    state->unknown_2e : state->unknown_06;
  const GameModeData* mode = GameModeData::GetInstance();
  return colors[mode != nullptr ? mode->GetChapterKind() : 0];
}

const QuestIcon* SideStoryInfo::GetIcon() {
  return &icon_;
}

const char16_t* SideStoryInfo::GetName() {
  return GetMessage(story_->record->mid);
}

const char* SideStoryInfo::GetNameMid() {
  return story_->record->mid;
}

const char16_t* SideStoryInfo::Unknown03() {
  return story_->GetUnknown00();
}

const char16_t* SideStoryInfo::Unknown04() {
  return GetEmptyText();
}

const char16_t* SideStoryInfo::GetHelp() {
  return GetMessage(story_->record->help_mid);
}

const char* SideStoryInfo::GetKey() {
  return "";
}

int SideStoryInfo::Unknown07() {
  return 9;
}

int SideStoryInfo::Unknown08() {
  return 4;
}

int SideStoryInfo::Unknown09() {
  return 0;
}

int SideStoryInfo::Unknown10() {
  return -1;
}

bool SideStoryInfo::Unknown11() {
  return story_->state == 2;
}

bool SideStoryInfo::Unknown12() {
  return false;
}

bool SideStoryInfo::Unknown13() {
  return story_->state == 4;
}

bool SideStoryInfo::Unknown14() {
  return story_->state == 5;
}

bool SideStoryInfo::Unknown15() {
  return story_->state == 5;
}

bool SideStoryInfo::Unknown16() {
  return false;
}

bool SideStoryInfo::Unknown17() {
  return false;
}

bool SideStoryInfo::Unknown18() {
  return story_->state == 3;
}

const char16_t* SideStoryInfo::Unknown19() {
  return GetQuestCondition(story_->record->unknown_b8);
}

const char16_t* SideStoryInfo::GetFirstItemName() {
  if (const void* key = story_->record->unknown_c8) {
    if (const QuestItem* item = FindQuestItem(key)) {
      if (item->item == nullptr) {
        return GetEmptyText();
      }
      return game::GetItemName(item->item, false);
    }
  }
  return msg::GetText("MID_Sys_ValueEmptyLong");
}

int SideStoryInfo::GetItemCount() {
  return 0;
}

const void* SideStoryInfo::GetItem(int) {
  return nullptr;
}

const char16_t* SideStoryInfo::GetItemName(int) {
  return GetEmptyText();
}

int SideStoryInfo::Unknown24() {
  return 0;
}

const void* SideStoryInfo::Unknown25() {
  return nullptr;
}

const void* SideStoryInfo::Unknown26() {
  return nullptr;
}

const void* SideStoryInfo::Unknown27() {
  return nullptr;
}

int SideStoryInfo::Unknown28() {
  return 0;
}

const void* SideStoryInfo::Unknown29(int) {
  return nullptr;
}

bool SideStoryInfo::Unknown30() {
  return false;
}

int SideStoryInfo::Unknown31() {
  return 0;
}

int SideStoryInfo::Unknown32() {
  return story_->record->unknown_150;
}

int SideStoryInfo::Unknown33() {
  return story_->record->unknown_152;
}

int SideStoryInfo::Unknown34() {
  return story_->record->unknown_158;
}

int SideStoryInfo::Unknown35() {
  return 0;
}

int SideStoryInfo::Unknown36() {
  return 0;
}

bool SideStoryInfo::Unknown37() {
  return false;
}

bool SideStoryInfo::Unknown38() {
  return false;
}

const void* SideStoryInfo::Unknown39(int index) {
  if (index >= unknown_20_.size()) {
    return nullptr;
  }
  return &unknown_20_[index];
}

const void* SideStoryInfo::Unknown40(int index) {
  if (index >= unknown_38_.size()) {
    return nullptr;
  }
  return &unknown_38_[index];
}

const void* SideStoryInfo::Unknown41(int) {
  return nullptr;
}

const void* SideStoryInfo::Unknown42() {
  return nullptr;
}

const void* SideStoryInfo::Unknown43(int) {
  return nullptr;
}

const void* SideStoryInfo::Unknown44() {
  return nullptr;
}

const void* SideStoryInfo::Unknown45() {
  return nullptr;
}

}
