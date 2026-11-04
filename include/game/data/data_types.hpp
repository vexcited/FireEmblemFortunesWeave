#pragma once

#include "game/data/data_file.hpp"

namespace game {

#define GAME_DATA(T, size) struct T;
#define GAME_DATA_ROW(T) struct T;
#define GAME_DATA_ARRAY(T, U, size) struct T; struct U;
#define GAME_DATA_ARRAY_ROW(T, U) struct T; struct U;
#include "game/data/data_types.inc"
#undef GAME_DATA_ARRAY_ROW
#undef GAME_DATA_ARRAY
#undef GAME_DATA_ROW
#undef GAME_DATA

}

#include "game/data/data_rows.hpp"

namespace game {

template<size_t Size>
struct DataBody : Data {
  unsigned char unknown_18[Size - sizeof(Data)];
};

// The element size of a few arrays is unknown.
template<>
struct DataBody<0> : Data {};

// Rows with their own build code are defined in data_rows.hpp.
#define GAME_DATA(T, size) \
  struct T : DataBody<size> {}; \
  static_assert(size == 0 || sizeof(T) == size);
#define GAME_DATA_ROW(T)
#define GAME_DATA_ARRAY(T, U, size) \
  GAME_DATA(U, size) \
  struct T : DataArray<U> {};
#define GAME_DATA_ARRAY_ROW(T, U) \
  struct T : DataArray<U> {};
#include "game/data/data_types.inc"
#undef GAME_DATA_ARRAY_ROW
#undef GAME_DATA_ARRAY
#undef GAME_DATA_ROW
#undef GAME_DATA

}
