#include "hub/sort.hpp"

#include <stdint.h>

extern "C" void* memmove(void* target, const void* source, size_t size);

namespace fw::hub {
namespace {

bool Less(const void* left, const void* right) {
  const auto* left_key = reinterpret_cast<const uint16_t*>(
    static_cast<const unsigned char*>(left) + 22
  );
  const auto* right_key = reinterpret_cast<const uint16_t*>(
    static_cast<const unsigned char*>(right) + 22
  );
  return *left_key < *right_key;
}

void Exchange(void*& left, void*& right) {
  void* value = left;
  left = right;
  right = value;
}

void** Rotate(void** first, void** middle, void** last) {
  if (first == middle) {
    return last;
  }

  if (middle == last) {
    return first;
  }

  const ptrdiff_t left = middle - first;
  const ptrdiff_t right = last - middle;

  if (left == 1) {
    void* value = *first;
    memmove(first, middle, right * sizeof(void*));
    last[-1] = value;
    return last - 1;
  }

  if (right == 1) {
    void* value = last[-1];
    memmove(first + 1, first, left * sizeof(void*));
    *first = value;
    return first + 1;
  }

  if (left == right) {
    for (ptrdiff_t i = 0; i < left; ++i) {
      Exchange(first[i], middle[i]);
    }

    return middle;
  }

  ptrdiff_t divisor = left;
  ptrdiff_t remainder = right;

  while (remainder != 0) {
    const ptrdiff_t next = divisor % remainder;
    divisor = remainder;
    remainder = next;
  }

  for (ptrdiff_t start = divisor; start != 0;) {
    --start;
    void* value = first[start];
    ptrdiff_t current = start;
    ptrdiff_t next = start + left;

    while (next != start) {
      first[current] = first[next];
      current = next;
      next = current + left;

      if (next >= left + right) {
        next -= left + right;
      }
    }

    first[current] = value;
  }

  return first + right;
}

void** LowerBound(void** first, void** last, void* value) {
  size_t count = last - first;

  while (count != 0) {
    const size_t half = count / 2;
    void** middle = first + half;

    if (Less(*middle, value)) {
      first = middle + 1;
      count -= half + 1;
    }
    else {
      count = half;
    }
  }

  return first;
}

void** UpperBound(void** first, void** last, void* value) {
  size_t count = last - first;

  while (count != 0) {
    const size_t half = count / 2;
    void** middle = first + half;

    if (Less(value, *middle)) {
      count = half;
    }
    else {
      first = middle + 1;
      count -= half + 1;
    }
  }

  return first;
}

void CopyMerge(
  void** left, void** left_end, void** right, void** right_end,
  void** destination
) {
  while (left != left_end && right != right_end) {
    if (Less(*right, *left)) {
      *destination++ = *right++;
    }
    else {
      *destination++ = *left++;
    }
  }

  while (left != left_end) {
    *destination++ = *left++;
  }

  while (right != right_end) {
    *destination++ = *right++;
  }
}

void MergeBuffered(
  void** first, void** middle, void** last, ptrdiff_t left_count,
  ptrdiff_t right_count, void** buffer
) {
  if (left_count <= right_count) {
    if (first == middle) {
      return;
    }

    void** buffer_end = buffer;

    for (void** item = first; item != middle; ++item) {
      *buffer_end++ = *item;
    }

    while (buffer != buffer_end) {
      if (middle == last) {
        memmove(first, buffer, (buffer_end - buffer) * sizeof(void*));
        return;
      }

      if (Less(*middle, *buffer)) {
        *first++ = *middle++;
      }
      else {
        *first++ = *buffer++;
      }
    }
  }
  else {
    if (middle == last) {
      return;
    }

    void** buffer_end = buffer;

    for (void** item = middle; item != last; ++item) {
      *buffer_end++ = *item;
    }

    while (buffer_end != buffer) {
      if (middle == first) {
        while (buffer_end != buffer) {
          *--last = *--buffer_end;
        }

        return;
      }

      if (Less(buffer_end[-1], middle[-1])) {
        *--last = *--middle;
      }
      else {
        *--last = *--buffer_end;
      }
    }
  }
}

void Merge(
  void** first, void** middle, void** last, ptrdiff_t left_count,
  ptrdiff_t right_count, void** buffer, ptrdiff_t capacity
) {
  while (right_count != 0) {
    if (left_count <= capacity || right_count <= capacity) {
      MergeBuffered(first, middle, last, left_count, right_count, buffer);
      return;
    }

    if (left_count == 0) {
      return;
    }

    while (!Less(*middle, *first)) {
      ++first;

      if (--left_count == 0) {
        return;
      }
    }

    void** left_cut;
    void** right_cut;
    ptrdiff_t left_prefix;
    ptrdiff_t right_prefix;

    if (left_count < right_count) {
      right_prefix = right_count / 2;
      right_cut = middle + right_prefix;
      left_cut = UpperBound(first, middle, *right_cut);
      left_prefix = left_cut - first;
    }
    else {
      if (left_count == 1) {
        Exchange(*first, *middle);
        return;
      }

      left_prefix = left_count / 2;
      left_cut = first + left_prefix;
      right_cut = LowerBound(middle, last, *left_cut);
      right_prefix = right_cut - middle;
    }

    void** new_middle = Rotate(left_cut, middle, right_cut);
    const ptrdiff_t left_suffix = left_count - left_prefix;
    const ptrdiff_t right_suffix = right_count - right_prefix;

    if (left_prefix + right_prefix < left_suffix + right_suffix) {
      Merge(first, left_cut, new_middle, left_prefix, right_prefix,
        buffer, capacity);
      first = new_middle;
      middle = right_cut;
      left_count = left_suffix;
      right_count = right_suffix;
    }
    else {
      Merge(new_middle, right_cut, last, left_suffix, right_suffix,
        buffer, capacity);
      middle = left_cut;
      last = new_middle;
      left_count = left_prefix;
      right_count = right_prefix;
    }
  }
}

void Sort(
  void** first, void** last, size_t count, void** buffer, ptrdiff_t capacity
);

void SortBuffered(void** first, void** last, size_t count, void** buffer) {
  if (count == 0) {
    return;
  }

  if (count == 1) {
    *buffer = *first;
    return;
  }

  if (count == 2) {
    if (Less(last[-1], *first)) {
      buffer[0] = last[-1];
      buffer[1] = *first;
    }
    else {
      buffer[0] = *first;
      buffer[1] = last[-1];
    }

    return;
  }

  if (static_cast<ptrdiff_t>(count) <= 8) {
    if (first == last) {
      return;
    }

    *buffer = *first++;
    void** end = buffer + 1;

    for (; first != last; ++first, ++end) {
      void** destination = end;

      while (destination != buffer && Less(*first, destination[-1])) {
        *destination = destination[-1];
        --destination;
      }

      *destination = *first;
    }

    return;
  }

  const size_t half = count / 2;
  void** middle = first + half;
  Sort(first, middle, half, buffer, half);
  Sort(middle, last, count - half, buffer + half, count - half);
  CopyMerge(first, middle, middle, last, buffer);
}

void Sort(
  void** first, void** last, size_t count, void** buffer, ptrdiff_t capacity
) {
  if (count < 2) {
    return;
  }

  if (count == 2) {
    if (Less(last[-1], *first)) {
      Exchange(*first, last[-1]);
    }

    return;
  }

  if (static_cast<ptrdiff_t>(count) > 128) {
    const size_t half = count / 2;
    void** middle = first + half;

    if (static_cast<ptrdiff_t>(count) <= capacity) {
      SortBuffered(first, middle, half, buffer);
      SortBuffered(middle, last, count - half, buffer + half);
      CopyMerge(buffer, buffer + half, buffer + half, buffer + count, first);
    }
    else {
      Sort(first, middle, half, buffer, capacity);
      Sort(middle, last, count - half, buffer, capacity);
      Merge(first, middle, last, half, count - half, buffer, capacity);
    }

    return;
  }

  if (first == last) {
    return;
  }

  for (void** item = first + 1; item != last; ++item) {
    void* value = *item;
    void** destination = item;

    while (destination != first && Less(value, destination[-1])) {
      *destination = destination[-1];
      --destination;
    }

    *destination = value;
  }
}

}

#define DEFINE_SORT(Name) \
  void Sort##Name( \
    void** first, void** last, size_t count, void** buffer, ptrdiff_t capacity \
  ) { \
    Sort(first, last, count, buffer, capacity); \
  } \
  void Sort##Name##Buffered( \
    void** first, void** last, size_t count, void** buffer \
  ) { \
    SortBuffered(first, last, count, buffer); \
  } \
  void Merge##Name( \
    void** first, void** middle, void** last, ptrdiff_t left_count, \
    ptrdiff_t right_count, void** buffer, ptrdiff_t capacity \
  ) { \
    Merge(first, middle, last, left_count, right_count, buffer, capacity); \
  }

DEFINE_SORT(Placement)
DEFINE_SORT(PlacementElements)
DEFINE_SORT(EventRange)
DEFINE_SORT(EventRangeElements)
DEFINE_SORT(Locator)
DEFINE_SORT(LocatorElements)
DEFINE_SORT(Object)
DEFINE_SORT(ObjectElements)

#undef DEFINE_SORT

}
