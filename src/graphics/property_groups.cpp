#include "graphics/groups.hpp"
#include "memory/heap_manager.hpp"

extern "C" void* memcpy(void* target, const void* source, size_t size);

namespace fw::graphics {

[[noreturn]] void PropertyVectorLengthError();
[[noreturn]] void AllocationSizeError();

void RegisterProperty(PropertyGroup* group, Property* property) {
  Property** next;
  const uintptr_t begin = reinterpret_cast<uintptr_t>(group->properties_begin);
  const uintptr_t end = reinterpret_cast<uintptr_t>(group->properties_end);
  const uintptr_t capacity_end = reinterpret_cast<uintptr_t>(
    group->properties_capacity_end
  );

  if (end < capacity_end) {
    *group->properties_end = property;
    next = group->properties_end + 1;
  }
  else {
    const size_t bytes = end - begin;
    const size_t size = static_cast<int64_t>(bytes) >> 3;
    size_t capacity = size + 1;

    if ((capacity >> 61) != 0) {
      PropertyVectorLengthError();
    }

    const size_t old_bytes = capacity_end - begin;

    const size_t doubled = static_cast<int64_t>(old_bytes) >> 2;

    if (doubled > capacity) {
      capacity = doubled;
    }

    if (old_bytes >= 0x7ffffffffffffff8) {
      capacity = 0x1fffffffffffffff;
    }

    Property** replacement = nullptr;

    if (capacity != 0) {
      if ((capacity >> 61) != 0) {
        AllocationSizeError();
      }

      replacement = static_cast<Property**>(
        memory::g_heap_manager->Allocate(capacity * 8, 16, 0)
      );
    }

    replacement[size] = property;
    next = replacement + size + 1;
    memcpy(replacement, group->properties_begin, bytes);
    Property** previous = group->properties_begin;
    group->properties_begin = replacement;
    group->properties_end = next;
    group->properties_capacity_end = replacement + capacity;

    if (previous != nullptr) {
      memory::g_heap_manager->GetAllocator(0).Free(previous);
    }
  }

  group->properties_end = next;
}

}
