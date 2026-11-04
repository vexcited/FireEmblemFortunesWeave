#pragma once

#include <stddef.h>
#include <string>

namespace nn::util {

template <typename CharT, typename Traits = std::char_traits<CharT>>
class basic_string_view {
public:
  using size_type = size_t;

  constexpr basic_string_view() : m_Str(nullptr), m_Length(0) {}

  basic_string_view(const CharT* str)
    : m_Str(str), m_Length(Traits::length(str)) {}

  constexpr basic_string_view(const CharT* str, size_type length)
    : m_Str(str), m_Length(length) {}

  constexpr const CharT* data() const {
    return m_Str;
  }

  constexpr size_type size() const {
    return m_Length;
  }

  constexpr size_type length() const {
    return m_Length;
  }

  constexpr bool empty() const {
    return m_Length == 0;
  }

  constexpr const CharT& operator[](size_type index) const {
    return m_Str[index];
  }

private:
  const CharT* m_Str;
  size_type m_Length;
};

using string_view = basic_string_view<char>;

}
