#pragma once

#include "game/data/data_file.hpp"

namespace game {

template<size_t Size>
struct DataBody : Data {
  unsigned char unknown_18[Size - sizeof(Data)];
};

// The element size of a few arrays is unknown.
template<>
struct DataBody<0> : Data {};

#define GAME_DATA(T, size) \
  struct T : DataBody<size> {}; \
  static_assert(size == 0 || sizeof(T) == size);
#define GAME_DATA_ARRAY(T, U, size) \
  GAME_DATA(U, size) \
  struct T : DataArray<U> {};
#include "game/data/data_types.inc"
#undef GAME_DATA_ARRAY
#undef GAME_DATA

}
