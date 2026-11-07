#pragma once

#include <cstdint>
#include <memory>
#include <unordered_map>
#include <vector>

#include "game/data/data_types.hpp"
#include "game/singleton_data_file.hpp"
#include "game/util/format.hpp"

#pragma GCC visibility push(hidden)

namespace game {

#define GAME_DATA_FILE(T, U, V) \
  class T : public SingletonDataFile<T, U, V> {};
#define GAME_DATA_FILE_CUSTOM(T, U, V)
#include "game/singleton/singleton_data_files.inc"
#undef GAME_DATA_FILE_CUSTOM
#undef GAME_DATA_FILE

// Files indexing their items by the short name and alias hashes.
#define GAME_INDEXED_DATA_FILE(T, U) \
  class T : public SingletonDataFile<T, U, U> { \
  protected: \
    void OnBuild() override; \
    void OnUnbuild() override {} \
  };
GAME_INDEXED_DATA_FILE(LegionFile, LegionData)
GAME_INDEXED_DATA_FILE(BattleFieldFile, BattleFieldData)
GAME_INDEXED_DATA_FILE(GmapSpotFile, GmapSpotData)
GAME_INDEXED_DATA_FILE(SideStoryFile, SideStoryData)
GAME_INDEXED_DATA_FILE(RecommendFile, RecommendData)
#undef GAME_INDEXED_DATA_FILE

class ExteriorFile : public SingletonDataFile<
  ExteriorFile, ExteriorData, ExteriorData
> {
public:
  // The instance is unloaded before the data file base unloads itself.
  ~ExteriorFile() override {
    GetInstance()->Unload();
  }

protected:
  void OnBuild() override;
  void OnUnbuild() override {}
};

class GrowthListFile : public SingletonDataFile<
  GrowthListFile, GrowthListArray, GrowthListData
> {
public:
  ~GrowthListFile() override;

protected:
  void OnBuild() override {}
  void OnUnbuild() override {}
};

class Part2SuppliedLegionFile : public SingletonDataFile<
  Part2SuppliedLegionFile, Part2SuppliedLegionData, Part2SuppliedLegionData
> {
protected:
  void OnBuild() override;
  void OnUnbuild() override {}

private:
  std::vector<Part2SuppliedLegionData*> ordered_;
};

// The instance is unloaded before the data file base unloads itself.
class AutoGrowJobFile : public SingletonDataFile<
  AutoGrowJobFile, AutoGrowJobData, AutoGrowJobData
> {
public:
  ~AutoGrowJobFile() override;

protected:
  void OnBuild() override;
  void OnUnbuild() override {}

private:
  std::unordered_map<uint32_t, const AutoGrowJobData*> unknown_108_;
};

class EntrustEquipFile : public SingletonDataFile<
  EntrustEquipFile, EntrustEquipData, EntrustEquipData
> {
public:
  ~EntrustEquipFile() override;

protected:
  void OnBuild() override;
  void OnUnbuild() override;

private:
  std::unordered_map<uint32_t, const EntrustEquipData*> unknown_108_;
};

class CalendarDetailFile : public SingletonDataFile<
  CalendarDetailFile, CalendarDetailData, CalendarDetailData
> {
public:
  ~CalendarDetailFile() override;

protected:
  void OnBuild() override;
  void OnUnbuild() override;

private:
  // Built by OnBuild, its type is not recovered.
  class Details {
  public:
    ~Details();
  };

  std::unique_ptr<Details> details_;
};

class Part2SuppliedItemFile : public SingletonDataFile<
  Part2SuppliedItemFile, Part2SuppliedItemData, Part2SuppliedItemData
> {
public:
  ~Part2SuppliedItemFile() override;

protected:
  void OnBuild() override;
  void OnUnbuild() override;

private:
  std::vector<const Part2SuppliedItemData*> unknown_108_[15];
};

class ReplacementFile : public SingletonDataFile<
  ReplacementFile, ReplacementData, ReplacementData
> {
protected:
  void OnBuild() override;
  void OnUnbuild() override {}
};

inline int GmapExploreData::GetGroup() const {
  int group = static_cast<int>(key.hash);

  if (group == 0) {
    const GmapExploreFile* file = GmapExploreFile::GetInstance();

    for (int i = index; i >= 0; --i) {
      group = static_cast<int>(file->At(i)->key.hash);

      if (group != 0) {
        break;
      }
    }
  }

  return group;
}

// Link time optimization inlined HashString32 here and dropped its null
// check, the formatted text is never null.
[[gnu::always_inline]] inline uint32_t HashFormatted32(const char* text) {
  uint32_t hash = 0x811c9dc5;
  const uint32_t prime = 0x1000193;
  int length = strlen(text);
  int i = 0;

  for (; i + 7 < length; i += 8) {
    hash = (hash * prime) ^ static_cast<uint8_t>(text[i]);
    hash = (hash * prime) ^ static_cast<uint8_t>(text[i + 1]);
    hash = (hash * prime) ^ static_cast<uint8_t>(text[i + 2]);
    hash = (hash * prime) ^ static_cast<uint8_t>(text[i + 3]);
    hash = (hash * prime) ^ static_cast<uint8_t>(text[i + 4]);
    hash = (hash * prime) ^ static_cast<uint8_t>(text[i + 5]);
    hash = (hash * prime) ^ static_cast<uint8_t>(text[i + 6]);
    hash = (hash * prime) ^ static_cast<uint8_t>(text[i + 7]);
  }

  for (; i < length; ++i) {
    hash = (hash * prime) ^ static_cast<uint8_t>(text[i]);
  }

  return hash != 0 ? hash : ~0u;
}

// The flag is named by the group and the item name without its prefix.
inline void GmapExploreData::Build() {
  item_28.Resolve();

  if (state == nullptr) {
    state = new GmapExploreState();
  }

  uint32_t flag = 0;

  if (const ItemData* item = item_28.data_) {
    const int group = GetGroup();
    const char* name = item->key.text;

    if (name != nullptr) {
      if (const char* suffix = strchr(name, '_')) {
        name = suffix + 1;
      }
    }

    flag = HashFormatted32(util::Format("%d_%s", group, name));
  }

  state->flag = flag;
  state->Set(conditions);
}

}

#pragma GCC visibility pop
