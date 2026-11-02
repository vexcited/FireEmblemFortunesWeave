#include "graphics/property_readers.hpp"
#include "memory/heap_manager.hpp"

extern "C" void* memcpy(void* target, const void* source, size_t size);
extern "C" void* memmove(void* target, const void* source, size_t size);

namespace fw::graphics {

[[noreturn]] void IntegerKeyframeLengthError();
[[noreturn]] void BooleanKeyframeLengthError();
[[noreturn]] void FloatKeyframeLengthError();
[[noreturn]] void ColorKeyframeLengthError();

namespace {

size_t Bytes(const void* begin, const void* end) {
  return reinterpret_cast<uintptr_t>(end) - reinterpret_cast<uintptr_t>(begin);
}

template<size_t Size, size_t Padding, void (*LengthError)()>
void Assign(KeyframeVector* target, const void* source_begin,
  const void* source_end, size_t count) {
  constexpr size_t limit = ~size_t{0} / Size;
  auto* begin = target->begin;
  uintptr_t capacity_end = reinterpret_cast<uintptr_t>(target->capacity_end);
  const size_t bytes = Bytes(source_begin, source_end);

  if (count > Bytes(begin, target->capacity_end) / Size) {
    if (begin != nullptr) {
      target->end = begin;
      memory::g_heap_manager->GetAllocator(0).Free(begin);
      target->begin = nullptr;
      target->end = nullptr;
      target->capacity_end = nullptr;
      capacity_end = 0;
    }

    if (count > limit) {
      LengthError();
    }

    const size_t old_capacity = capacity_end / Size;
    size_t capacity = old_capacity * 2;

    if (capacity < count) {
      capacity = count;
    }

    if (old_capacity >= limit / 2) {
      capacity = limit;
    }

    if (capacity > limit) {
      LengthError();
    }

    begin = static_cast<unsigned char*>(
      memory::g_heap_manager->Allocate(capacity * Size, 16, 0)
    );
    target->begin = begin;
    target->end = begin;
    target->capacity_end = begin + capacity * Size;

    if (bytes != 0) {
      memcpy(begin, source_begin, bytes - Padding);
    }

    target->end = begin + bytes;
    return;
  }

  auto* old_end = target->end;
  const size_t old_bytes = Bytes(begin, old_end);

  if (count <= old_bytes / Size) {
    if (bytes != 0) {
      memmove(begin, source_begin, bytes - Padding);
    }

    target->end = begin + bytes;
    return;
  }

  const auto* tail = static_cast<const unsigned char*>(source_begin)
    + old_bytes;

  if (old_end != begin) {
    memmove(begin, source_begin, old_bytes - Padding);
    old_end = target->end;
  }

  const size_t remaining = Bytes(tail, source_end);

  if (remaining != 0) {
    memmove(old_end, tail, remaining - Padding);
  }

  target->end = old_end + remaining;
}

}

void AssignIntegerKeyframes(KeyframeVector* target, const void* begin,
  const void* end, size_t count) {
  Assign<12, 0, IntegerKeyframeLengthError>(target, begin, end, count);
}

void AssignBooleanKeyframes(KeyframeVector* target, const void* begin,
  const void* end, size_t count) {
  Assign<8, 2, BooleanKeyframeLengthError>(target, begin, end, count);
}

void AssignFloatKeyframes(KeyframeVector* target, const void* begin,
  const void* end, size_t count) {
  Assign<12, 0, FloatKeyframeLengthError>(target, begin, end, count);
}

void AssignColorKeyframes(KeyframeVector* target, const void* begin,
  const void* end, size_t count) {
  Assign<48, 0, ColorKeyframeLengthError>(target, begin, end, count);
}

}
