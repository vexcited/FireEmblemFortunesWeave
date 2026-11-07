#pragma once

#include <stddef.h>

#include <iterator>

#include "nn/span.hpp"

namespace nn::audio::server {

// Iterates a span through its address and an index, as the SDK span does.
template<class T>
class SpanIterator {
public:
  using iterator_category = std::random_access_iterator_tag;
  using value_type = T;
  using difference_type = ptrdiff_t;
  using pointer = T*;
  using reference = T&;

  SpanIterator() = default;

  SpanIterator(Span<T>* span, difference_type index)
    : m_Span(span), m_Index(index) {
  }

  reference operator*() const {
    return m_Span->data[m_Index];
  }

  reference operator[](difference_type offset) const {
    return m_Span->data[m_Index + offset];
  }

  SpanIterator& operator++() {
    ++m_Index;
    return *this;
  }

  SpanIterator operator++(int) {
    SpanIterator previous = *this;
    ++m_Index;
    return previous;
  }

  SpanIterator& operator--() {
    --m_Index;
    return *this;
  }

  SpanIterator operator--(int) {
    SpanIterator previous = *this;
    --m_Index;
    return previous;
  }

  SpanIterator& operator+=(difference_type offset) {
    m_Index += offset;
    return *this;
  }

  SpanIterator& operator-=(difference_type offset) {
    m_Index -= offset;
    return *this;
  }

  SpanIterator operator+(difference_type offset) const {
    return SpanIterator(m_Span, m_Index + offset);
  }

  SpanIterator operator-(difference_type offset) const {
    return SpanIterator(m_Span, m_Index - offset);
  }

  difference_type operator-(const SpanIterator& other) const {
    return m_Index - other.m_Index;
  }

  bool operator==(const SpanIterator& other) const {
    return m_Span == other.m_Span && m_Index == other.m_Index;
  }

  bool operator!=(const SpanIterator& other) const {
    return !(*this == other);
  }

  bool operator<(const SpanIterator& other) const {
    return m_Index < other.m_Index;
  }

  bool operator>(const SpanIterator& other) const {
    return m_Index > other.m_Index;
  }

  bool operator<=(const SpanIterator& other) const {
    return m_Index <= other.m_Index;
  }

  bool operator>=(const SpanIterator& other) const {
    return m_Index >= other.m_Index;
  }

private:
  Span<T>* m_Span;
  difference_type m_Index;
};

}
