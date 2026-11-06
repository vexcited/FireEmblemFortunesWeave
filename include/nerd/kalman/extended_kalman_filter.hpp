#pragma once

#include <stddef.h>

#include "math/matrix_vector.hpp"

namespace nerd::linear_algebra {

// Empty dimensions still keep one element of storage.
template<typename T, long Rows>
struct LMatrix<T, Rows, 0, LMatrixType::Dense<true>> {
  T elements[1];
};

template<typename T>
struct LVector<T, 0, false, LVectorType::Dense> {
  T elements[1];
};

}

namespace nerd::numerical2 {

// Robin Hood hash map, a slot distance of zero marks an empty slot and the
// slot past the capacity is a sentinel.
template<typename Key, typename Value, size_t Slots>
class HashMap {
public:
  struct Slot {
    size_t distance;
    Key key;
    Value value;
  };

  ~HashMap() {
    Clear();
  }

  void Clear() {
    if (m_size == 0) {
      return;
    }

    Slot* slot = First(m_slots);
    Slot* end = First(m_slots + m_capacity);

    while (slot != end) {
      slot->distance = 0;
      slot = First(slot + 1);
    }

    m_size = 0;
  }

private:
  static Slot* First(Slot* slot) {
    while (slot->distance == 0) {
      ++slot;
    }

    return slot;
  }

  Slot m_slots[Slots];
  size_t m_capacity;
  size_t m_size;
};

template<typename T, size_t Capacity>
class StaticVector {
public:
  ~StaticVector() {
    m_size = 0;
  }

private:
  T m_data[Capacity];
  size_t m_size;
};

}

namespace nerd::kalman {

template<long Size>
using Indices = linear_algebra::LVector<
  size_t, Size, false, linear_algebra::LVectorType::Dense
>;

template<typename T, typename Model, long Dimension, bool Flag>
class ExtendedKalmanFilter {
public:
  template<long Inputs, long States, typename Storage>
  void TransitionUpdate(
    const linear_algebra::LMatrix<T, States, Inputs, Storage>& transition,
    const Indices<Inputs>& inputs, const Indices<States>& states,
    const linear_algebra::LMatrix<
      T, States, States, linear_algebra::LMatrixType::Dense<true>
    >& noise
  );

  // Copies the covariance entries at the given state indices.
  template<long Rows, long Columns>
  linear_algebra::LMatrix<
    T, Rows, Columns, linear_algebra::LMatrixType::Dense<true>
  > GetCovarianceBlock(
    const Indices<Rows>& rows, const Indices<Columns>& columns
  ) const;

  size_t m_rows;
  size_t m_columns;
  float m_covariance[33][33];
  unsigned char m_unknown1114[12];
  numerical2::HashMap<size_t, size_t, 129> m_indices;
  numerical2::StaticVector<size_t, 33> m_freeIndices;
};

using IndexMap = numerical2::HashMap<size_t, size_t, 129>;

// Replaces each variable key by its state index.
template<long Size>
Indices<Size> MapIndices(const IndexMap& map, Indices<Size>& keys);

// A filter variable and the state indices of its error components.
template<typename T, long Size>
struct Variable {
  T value;
  Indices<Size> indices;
};

}
