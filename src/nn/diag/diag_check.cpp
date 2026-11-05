#include <stddef.h>
#include <stdint.h>

#include "nn/result.hpp"
#include "nn/svc/svc_api.hpp"

namespace nn::diag {

struct SourceInfo;

void OnResultThrow(Result, const SourceInfo&) {}

void OnResultHandle(Result, const SourceInfo&) {}

void OnResultRethrow(Result, const SourceInfo&) {}

void OnResultCatch(Result, const SourceInfo&) {}

void OnResultMiss(Result, const SourceInfo&) {}

namespace detail {

const char* nnText_diag(const char* text) {
  return text;
}

const char* nnText_g3dviewer(const char* text) {
  return text;
}

const char* nnText_init(const char* text) {
  return text;
}

const char* nnText_ldn(const char* text) {
  return text;
}

const char* nnText_os(const char* text) {
  return text;
}

const char* nnText_spy(const char* text) {
  return text;
}

bool NullImpl(uintptr_t pointer) {
  return pointer == 0;
}

bool NotNullImpl(uintptr_t pointer) {
  return pointer != 0;
}

// Pointers must lie in the 39 bit user range starting at 0x8000000.
bool PointerImpl(uintptr_t pointer) {
  return (pointer - 0x8000000) >> 27 < 0xfff;
}

void PrintDebugString(const char* string, size_t length) {
  if (length != 0) {
    svc::OutputDebugString(string, length);
  }
}

}
}
