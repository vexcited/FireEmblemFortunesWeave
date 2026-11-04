#pragma once

#include "game/data/data_types.hpp"
#include "game/singleton_data_file.hpp"

namespace game {

#define GAME_DATA_FILE(T, U, V) \
  class T : public SingletonDataFile<T, U, V> {};
#include "game/singleton/singleton_data_files.inc"
#undef GAME_DATA_FILE

}
