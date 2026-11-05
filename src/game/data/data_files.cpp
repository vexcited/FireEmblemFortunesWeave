#include "game/data/data_files.hpp"

namespace game {

#define GAME_INDEXED_DATA_FILE(T) \
  void T::OnBuild() { \
    IndexShortHashesWithAliases(); \
  }
GAME_INDEXED_DATA_FILE(LegionFile)
GAME_INDEXED_DATA_FILE(BattleFieldFile)
GAME_INDEXED_DATA_FILE(ExteriorFile)
GAME_INDEXED_DATA_FILE(GmapSpotFile)
GAME_INDEXED_DATA_FILE(SideStoryFile)
GAME_INDEXED_DATA_FILE(RecommendFile)
#undef GAME_INDEXED_DATA_FILE

void ReplacementFile::OnBuild() {
  IndexShortHashes();
}

}
