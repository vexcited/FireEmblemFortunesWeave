#pragma once

#include <cstddef>
#include <string>
#include <type_traits>

#include "snd/memory.hpp"

namespace snd::fnd {

template <typename T>
class Allocator {
public:
  using value_type = T;

  Allocator() = default;

  template <typename U>
  Allocator(const Allocator<U>&) {}

  T* allocate(size_t count) {
    return static_cast<T*>(g_memory->alloc(count * sizeof(T), 32));
  }

  void deallocate(T* memory, size_t) {
    g_memory->free(memory);
  }

  // Containers only reuse the storage of their own allocator, a move
  // between two containers copies.
  using is_always_equal = std::false_type;

  friend bool operator==(const Allocator& a, const Allocator& b) {
    return &a == &b;
  }
};

class String
  : public std::basic_string<char, std::char_traits<char>, Allocator<char>> {
public:
  String();
  explicit String(const char* string);

  String& operator=(const char* string);

  const char* c_str() const;

  void format(const char* format, ...);
};

}
