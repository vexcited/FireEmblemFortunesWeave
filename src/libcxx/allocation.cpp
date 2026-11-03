/*
  Adapted from libc++abi 8.0.1 under the MIT license.
  https://github.com/llvm/llvm-project/blob/llvmorg-8.0.1/libcxxabi/LICENSE.TXT

  Copyright (c) 2009-2014 by the contributors listed in CREDITS.TXT
  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:
  The above copyright notice and this permission notice shall be included in
  all copies or substantial portions of the Software.
  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
  THE SOFTWARE.
*/

#include "libcxx/allocation.hpp"

#include <stdint.h>

extern "C" void* malloc(size_t size);
extern "C" void* aligned_alloc(size_t alignment, size_t size);
extern "C" void free(void* pointer);
extern "C" void* __cxa_allocate_exception(size_t size);
extern "C" [[noreturn]] void __cxa_throw(
  void* object, const void* type, void (*destroy)(void*));

namespace fw::libcxx {

extern const unsigned char BadAllocationType[] asm("_ZTISt9bad_alloc");
void ConstructBadAllocation(void*) asm("_ZNSt9bad_allocC1Ev");
void DestroyBadAllocation(void*) asm("_ZNSt9bad_allocD1Ev");

namespace {

[[noreturn]] void ThrowBadAllocation() {
  void* exception = __cxa_allocate_exception(sizeof(uintptr_t));
  ConstructBadAllocation(exception);
  __cxa_throw(exception, BadAllocationType, DestroyBadAllocation);
}

}

__attribute__((weak)) void* Allocate(size_t size) {
  if (!size) {
    size = 1;
  }

  void* pointer;

  while (!(pointer = malloc(size))) {
    NewHandler handler = GetNewHandler();

    if (handler) {
      handler();
    }
    else {
      ThrowBadAllocation();
    }
  }

  return pointer;
}

__attribute__((weak)) void* AllocateArray(size_t size) {
  return Allocate(size);
}

__attribute__((weak)) void* AllocateAligned(size_t size, size_t alignment) {
  if (!size) {
    size = 1;
  }

  if (alignment < sizeof(void*)) {
    alignment = sizeof(void*);
  }

  size_t rounded = (size + alignment - 1) & -alignment;
  size_t allocation_size = size > rounded ? size : rounded;
  void* pointer;

  while (!(pointer = aligned_alloc(alignment, allocation_size))) {
    NewHandler handler = GetNewHandler();

    if (handler) {
      handler();
    }
    else {
      ThrowBadAllocation();
    }
  }

  return pointer;
}

__attribute__((weak)) void* AllocateAlignedArray(size_t size, size_t alignment) {
  return AllocateAligned(size, alignment);
}

__attribute__((weak)) void Release(void* pointer) {
  free(pointer);
}

__attribute__((weak)) void ReleaseNothrow(void* pointer, const void*) {
  Release(pointer);
}

__attribute__((weak)) void ReleaseSized(void* pointer, size_t) {
  Release(pointer);
}

__attribute__((weak)) void ReleaseArray(void* pointer) {
  Release(pointer);
}

__attribute__((weak)) void ReleaseArrayNothrow(void* pointer, const void*) {
  ReleaseArray(pointer);
}

__attribute__((weak)) void ReleaseArraySized(void* pointer, size_t) {
  ReleaseArray(pointer);
}

__attribute__((weak)) void ReleaseAligned(void* pointer, size_t) {
  free(pointer);
}

__attribute__((weak)) void ReleaseAlignedNothrow(
  void* pointer, size_t alignment, const void*) {
  ReleaseAligned(pointer, alignment);
}

__attribute__((weak)) void ReleaseAlignedSized(
  void* pointer, size_t, size_t alignment) {
  ReleaseAligned(pointer, alignment);
}

__attribute__((weak)) void ReleaseAlignedArray(void* pointer, size_t alignment) {
  ReleaseAligned(pointer, alignment);
}

__attribute__((weak)) void ReleaseAlignedArrayNothrow(
  void* pointer, size_t alignment, const void*) {
  ReleaseAlignedArray(pointer, alignment);
}

__attribute__((weak)) void ReleaseAlignedArraySized(
  void* pointer, size_t, size_t alignment) {
  ReleaseAlignedArray(pointer, alignment);
}

}
