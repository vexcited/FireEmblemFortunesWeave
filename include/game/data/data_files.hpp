#pragma once

#include <cstdint>
#include <memory>
#include <unordered_map>
#include <vector>

#include "game/data/data_types.hpp"
#include "game/singleton_data_file.hpp"

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

}

#pragma GCC visibility pop
