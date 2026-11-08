#pragma once

#include <new>
#include <optional>
#include <type_traits>
#include <utility>

namespace nn::util {

template<class T>
class optional {
public:
  constexpr optional() : m_HasValue(false), m_Dummy() {}

  // The SDK clears the whole object, padding included, for an empty value.
  optional(std::nullopt_t) {
    __builtin_memset(static_cast<void*>(this), 0, sizeof(*this));
  }

  optional(const T& value) : m_HasValue(true), m_Value(value) {}

  // The SDK optional is not trivially copyable, so it is passed by pointer.
  optional(const optional& other) : m_HasValue(other.m_HasValue), m_Dummy() {
    if (m_HasValue) {
      new (&m_Value) T(other.m_Value);
    }
  }

  // Engages the value through a move function for types that only have an
  // out of line move constructor.
  template<class Mover>
  optional(T* source, Mover mover) : m_HasValue(false) {
    mover(&m_Value, source);
    m_HasValue = true;
  }

  ~optional() {}

  optional& operator=(const T& value) {
    if constexpr (std::is_trivially_copyable_v<T>) {
      new (&m_Value) T(value);
      m_HasValue = true;
    }
    else if (m_HasValue) {
      m_Value = value;
    }
    else {
      new (&m_Value) T(value);
      m_HasValue = true;
    }

    return *this;
  }

  void reset() {
    if constexpr (!std::is_trivially_destructible_v<T>) {
      if (m_HasValue) {
        m_Value.~T();
      }
    }

    m_HasValue = false;
  }

  template <class... Args>
  T& emplace(Args&&... args) {
    reset();
    new (&m_Value) T(std::forward<Args>(args)...);
    m_HasValue = true;
    return m_Value;
  }

  constexpr bool has_value() const { return m_HasValue; }
  constexpr explicit operator bool() const { return m_HasValue; }

  T& operator*() { return m_Value; }
  const T& operator*() const { return m_Value; }
  T* operator->() { return &m_Value; }
  const T* operator->() const { return &m_Value; }

private:
  bool m_HasValue;
  union {
    char m_Dummy[sizeof(T)];
    T m_Value;
  };
};

}
