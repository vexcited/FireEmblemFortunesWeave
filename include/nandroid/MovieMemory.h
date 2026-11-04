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

#include <nandroid/MovieHeap.h>
