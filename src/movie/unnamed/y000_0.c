#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN MovieData_b4090;

__int64 MovieRoutine_84660(void);

void MovieHr_20() { ; }

const char* MovieHr_400() { return "sample-rate"; }

void* MovieHr_410() { return &MovieData_b4090; }

__int64 MovieHr_7a3b0(__int64 a1) { return *(__int64*)(a1 + 16) >> 63; }

__int64 MovieHr_7b9d0(__int64 a1) { return *(unsigned int*)(a1 + 52); }

__int64 MovieHr_82440(__int64 result)
{
  if (result != 0) {
    return MovieRoutine_84660();
  }
  return result;
}

__int64 MovieHr_82590(_DWORD* a1) { return (unsigned int)(*a1 + 1); }

#pragma GCC visibility pop
