#pragma once

#include "game/data/data_file.hpp"

namespace game {

#define GAME_DATA(T, size) \
  struct T : Data { \
    unsigned char unknown_18[size - sizeof(Data)]; \
  }; \
  static_assert(sizeof(T) == size);
#define GAME_DATA_GROUP(T, U) \
  struct U : Data {}; \
  struct T : DataGroup<U> {};
#include "game/data/data_types.inc"
#undef GAME_DATA_GROUP
#undef GAME_DATA

}
