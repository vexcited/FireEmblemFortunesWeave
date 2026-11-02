#pragma once

#include <stddef.h>
#include <stdint.h>

namespace fw::text {

struct String {
  uint64_t words[3];

  String* Assign(const char* source);
  String* Assign(const char* source, size_t size);
  void* CopyTerminated(const char* source, size_t size);
};

[[noreturn]] void StringLengthError();

static_assert(sizeof(String) == 24);

}
