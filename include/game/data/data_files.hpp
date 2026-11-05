#pragma once

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
GAME_INDEXED_DATA_FILE(ExteriorFile, ExteriorData)
GAME_INDEXED_DATA_FILE(GmapSpotFile, GmapSpotData)
GAME_INDEXED_DATA_FILE(SideStoryFile, SideStoryData)
GAME_INDEXED_DATA_FILE(RecommendFile, RecommendData)
#undef GAME_INDEXED_DATA_FILE

class ReplacementFile : public SingletonDataFile<
  ReplacementFile, ReplacementData, ReplacementData
> {
protected:
  void OnBuild() override;
  void OnUnbuild() override {}
};

}

#pragma GCC visibility pop
