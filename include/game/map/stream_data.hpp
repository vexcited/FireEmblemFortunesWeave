#pragma once

#include "game/data/data_files.hpp"
#include "game/map/stream.hpp"

namespace game {

#pragma GCC visibility push(hidden)

template<typename T>
const T* Stream::ReadData() {
  const uint64_t hash = ReadU64();

  if (hash == 0) {
    return nullptr;
  }

  return DataFileOf<T>::type::GetInstance()->FindByHash(hash);
}

template<typename T>
const T* Stream::ReadShortData() {
  const uint32_t hash = ReadU32();

  if (hash == 0) {
    return nullptr;
  }

  return DataFileOf<T>::type::GetInstance()->FindByShortHash(hash);
}

#pragma GCC visibility pop

}
