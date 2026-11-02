#include "text/string.hpp"
#include "memory/heap_manager.hpp"

extern "C" size_t strlen(const char* text);
extern "C" void* memcpy(void* target, const void* source, size_t size);
extern "C" void* memmove(void* target, const void* source, size_t size);

namespace fw::text {
namespace {

size_t AllocationSize(size_t size) {
  return (size | 7) == 23 ? 26 : (size | 7) + 1;
}

}

String* String::Assign(const char* source) {
  return Assign(source, strlen(source));
}

String* String::Assign(const char* source, size_t size) {
  auto* bytes = reinterpret_cast<unsigned char*>(this);
  const uint8_t tag = bytes[0];
  size_t capacity = (tag & 1) == 0 ? 22 : (words[0] & ~uint64_t{1}) - 1;
  char* target = (tag & 1) == 0
    ? reinterpret_cast<char*>(bytes + 1) : reinterpret_cast<char*>(words[2]);

  if (size > capacity) {
    if (size - capacity > size_t{0} - 10 - capacity) {
      StringLengthError();
    }

    size_t grown = size > capacity * 2 ? size : capacity * 2;
    size_t allocation = grown < 23 ? 23 : AllocationSize(grown);

    if (capacity > 0x7ffffffffffffff2) {
      allocation = size_t{0} - 9;
    }

    char* replacement = static_cast<char*>(
      memory::g_heap_manager->Allocate(allocation, 16, 0)
    );
    memcpy(replacement, source, size);

    if ((tag & 1) != 0 && target != nullptr) {
      memory::g_heap_manager->GetAllocator(0).Free(target);
    }

    target = replacement;
    words[2] = reinterpret_cast<uintptr_t>(replacement);
    words[0] = allocation | 1;
    words[1] = size;
  }
  else {
    if (size != 0) {
      memmove(target, source, size);
    }

    if ((bytes[0] & 1) != 0) {
      words[1] = size;
    }
    else {
      bytes[0] = static_cast<uint8_t>(size * 2);
    }
  }

  target[size] = 0;
  return this;
}

void* String::CopyTerminated(const char* source, size_t size) {
  auto* bytes = reinterpret_cast<unsigned char*>(this);
  char* target;

  if (size > 22) {
    if (size >= size_t{0} - 9) {
      StringLengthError();
    }

    size_t allocation = AllocationSize(size);
    target = static_cast<char*>(
      memory::g_heap_manager->Allocate(allocation, 16, 0)
    );
    words[1] = size;
    words[2] = reinterpret_cast<uintptr_t>(target);
    words[0] = allocation | 1;
  }
  else {
    bytes[0] = static_cast<uint8_t>(size * 2);
    target = reinterpret_cast<char*>(bytes + 1);
  }

  return memmove(target, source, size + 1);
}

}
