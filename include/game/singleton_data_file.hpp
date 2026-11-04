#pragma once

#include "game/data/data_file.hpp"
#include "game/singleton.hpp"

namespace game {

// Link time optimization internalized these so they are addressed directly.
#pragma GCC visibility push(hidden)

template<typename T, typename U, typename V>
class SingletonDataFile : public Singleton<T>, public DataFile<U, V> {
public:
  ~SingletonDataFile() override {
    this->Unload();
  }
};

#pragma GCC visibility pop

}
