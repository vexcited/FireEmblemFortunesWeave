#include "math/kalman_reset.hpp"

namespace fw::math {

size_t* LookupStateIndex(IndexMap* map, const size_t* key) {
  IndexSlot* end = map->slots + map->capacity;

  while (end->distance == 0) {
    ++end;
  }

  IndexSlot* found = end;

  if (map->size != 0) {
    IndexSlot* slot = map->slots + ((map->capacity - 1) & *key);

    if (slot->distance != 0) {
      size_t distance = 1;

      while (true) {
        if (slot->key == *key) {
          found = slot;
          break;
        }

        ++slot;
        ++distance;

        if (slot == map->slots + map->capacity) {
          slot = map->slots;
        }

        if (slot->distance < distance) {
          break;
        }
      }
    }
  }

  if (found == end) {
    IndexLookupFailure(
      "D:\\home\\teamcity\\work\\sdk\\Externals\\nerd-lib\\pool\\"
      "NerdLibNumerical\\source\\numerical2\\include\\"
      "nerd/numerical2/containers/HashMap.h",
      477, "it != end()", nullptr
    );
    __builtin_trap();
  }

  return &found->value;
}

template<size_t Count>
StateIndices<Count> MapIndices(IndexMap* map, StateIndices<Count>* indices) {
  for (size_t i = 0; i < Count; ++i) {
    indices->values[i] = *LookupStateIndex(map, &indices->values[i]);
  }

  return *indices;
}

StateIndices<9> MapStateIndices9(IndexMap* map, StateIndices<9>* indices) {
  return MapIndices(map, indices);
}

StateIndices<21> MapStateIndices21(IndexMap* map, StateIndices<21>* indices) {
  return MapIndices(map, indices);
}

template<size_t Count>
void Reset(KalmanCovariance* state, const size_t* keys, const float* noise) {
  size_t indices[Count];
  bool selected[33] = {};
  float block[Count][Count];

  for (size_t i = 0; i < Count; ++i) {
    indices[i] = *LookupStateIndex(&state->indices, keys + i);
    selected[indices[i]] = true;
  }

  for (size_t row = 0; row < Count; ++row) {
    for (size_t column = 0; column < Count; ++column) {
      block[row][column] = noise[row * Count + column] + 0.0f;
    }
  }

  for (size_t row = 0; row < Count; ++row) {
    for (size_t column = 0; column < Count; ++column) {
      state->elements[indices[row]][indices[column]] = block[row][column];
    }
  }

  for (size_t row = 0; row < Count; ++row) {
    for (size_t column = 0; column < state->rows; ++column) {
      if (!selected[column]) {
        state->elements[indices[row]][column] = 0.0f;
        state->elements[column][indices[row]] = 0.0f;
      }
    }
  }

  for (size_t row = 1; row < Count; ++row) {
    for (size_t column = 0; column < row; ++column) {
      float& lower = state->elements[indices[row]][indices[column]];
      float& upper = state->elements[indices[column]][indices[row]];
      const float mean = (lower + upper) * 0.5f;
      lower = mean;
      upper = mean;
    }
  }
}

void ResetCovariance3(KalmanCovariance* state, const void*, const void*,
  const size_t* keys, const float* noise) {
  Reset<3>(state, keys, noise);
}

void ResetCovariance6(KalmanCovariance* state, const void*, const void*,
  const size_t* keys, const float* noise) {
  Reset<6>(state, keys, noise);
}

void ResetCovariance9(KalmanCovariance* state, const void*, const void*,
  const size_t* keys, const float* noise) {
  Reset<9>(state, keys, noise);
}

void ResetCovariance21(KalmanCovariance* state, const void*, const void*,
  const size_t* keys, const float* noise) {
  Reset<21>(state, keys, noise);
}

}
