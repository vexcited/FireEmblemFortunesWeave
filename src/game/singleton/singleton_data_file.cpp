#include "game/data/data_types.hpp"
#include "game/singleton_data_file.hpp"

namespace game {

// The concrete files are not reconstructed here, so empty classes stand in
// for them to instantiate the template through the creation path.
#define GAME_DATA_FILE(T, U, V) \
  class T : public SingletonDataFile<T, U, V> {}; \
  template T* Singleton<T>::Create();
#define GAME_DATA_FILE_CUSTOM(T, U, V) GAME_DATA_FILE(T, U, V)
#include "singleton_data_files.inc"
#undef GAME_DATA_FILE_CUSTOM
#undef GAME_DATA_FILE

}
