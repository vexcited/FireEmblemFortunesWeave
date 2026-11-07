#pragma once

#include <stddef.h>

#include <nandroid/Platform.h>

// The SDK routes the allocations of its AOSP code to the movie heap.
extern "C" {
void *MovieMalloc(size_t size);
void *MovieCalloc(size_t count, size_t size);
void *MovieRealloc(void *pointer, size_t size);
void MovieFree(void *pointer);
char *MovieStrdup(const char *string);
}

namespace nandroid {

// A few AOSP classes keep the global allocation functions of the SDK, which
// the inline movie heap versions hide in units that include MovieHeap.h.
void *GlobalOperatorNew(size_t size);
void GlobalOperatorDelete(void *pointer, size_t size) noexcept;

}

#include <nandroid/MovieHeap.h>
