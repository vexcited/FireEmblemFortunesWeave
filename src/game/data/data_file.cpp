#include "game/data/data_types.hpp"

namespace game {

std::deque<const void*> g_resource_stack;
std::deque<const void*> g_sheet_stack;
std::deque<const Data*> g_data_stack;

IDataFile::~IDataFile() {
  ReleaseResources();
}

#define GAME_DATA(T, size) \
  template class DataFile<T, T>;
#define GAME_DATA_ARRAY(T, U, size) \
  template class DataFile<T, U>;
#include "game/data/data_types.inc"
#undef GAME_DATA_ARRAY
#undef GAME_DATA

}
