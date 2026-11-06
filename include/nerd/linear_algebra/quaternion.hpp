#pragma once

#include "math/matrix_vector.hpp"

namespace nerd::linear_algebra {

template<typename T>
struct LQuaternion {
  LVector<T, 3, false, LVectorType::Dense> vector;
  T scalar;
};

template<typename T>
inline T Dot(
  const LVector<T, 3, false, LVectorType::Dense>& left,
  const LVector<T, 3, false, LVectorType::Dense>& right
) {
  T sum = 0;

  for (long i = 0; i < 3; ++i) {
    sum = sum + left.elements[i] * right.elements[i];
  }

  return sum;
}

template<typename T>
inline LQuaternion<T> operator*(
  const LQuaternion<T>& left, const LQuaternion<T>& right
) {
  const auto& a = left.vector.elements;
  const auto& b = right.vector.elements;
  LQuaternion<T> result;

  for (long i = 0; i < 3; ++i) {
    T scaled = a[i] * right.scalar;
    T other = left.scalar * b[i];
    result.vector.elements[i] = scaled + other;
  }

  T cross[3] = {
    a[1] * b[2] - a[2] * b[1],
    a[2] * b[0] - a[0] * b[2],
    a[0] * b[1] - a[1] * b[0],
  };

  for (long i = 0; i < 3; ++i) {
    result.vector.elements[i] = result.vector.elements[i] + cross[i];
  }

  result.scalar = left.scalar * right.scalar - Dot(left.vector, right.vector);
  return result;
}

}
