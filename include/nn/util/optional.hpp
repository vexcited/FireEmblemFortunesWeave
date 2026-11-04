#pragma once

#include <new>
#include <utility>

namespace nn::util {

template<class T>
class optional {
public:
  constexpr optional() : m_HasValue(false), m_Dummy() {}

  optional(const T& value) : m_HasValue(true), m_Value(value) {}

  constexpr bool has_value() const { return m_HasValue; }
  constexpr explicit operator bool() const { return m_HasValue; }

  T& operator*() { return m_Value; }
  const T& operator*() const { return m_Value; }
  T* operator->() { return &m_Value; }
  const T* operator->() const { return &m_Value; }

private:
  bool m_HasValue;
  union {
    char m_Dummy;
    T m_Value;
  };
};

}
