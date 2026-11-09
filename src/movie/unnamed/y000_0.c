#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern _UNKNOWN MovieData_b4090;
__int64 MovieRoutine_82ce0(_QWORD, _QWORD, _QWORD);
__int64 MovieRoutine_83d70(void);
__int64 MovieRoutine_83d80(void);
__int64 MovieRoutine_83db0(void);
__int64 MovieRoutine_83dc0(void);
__int64 MovieRoutine_83eb0(void);
__int64 MovieRoutine_83ec0(void);
__int64 MovieRoutine_83f70(void);
__int64 MovieRoutine_83f80(void);
__int64 MovieRoutine_83fb0(void);
__int64 MovieRoutine_83fc0(void);
__int64 MovieRoutine_84660(void);

void MovieHr_20() { ; }

const char* MovieHr_400() { return "sample-rate"; }

void* MovieHr_410() { return &MovieData_b4090; }

__int64 MovieHr_fad0() { return MovieRoutine_83d70(); }

__int64 MovieHr_fad4() { return MovieRoutine_83d80(); }

__int64 MovieHr_fb20() { return MovieRoutine_83db0(); }

__int64 MovieHr_fb24() { return MovieRoutine_83dc0(); }

__int64 MovieHr_fd00() { return MovieRoutine_83eb0(); }

__int64 MovieHr_fd04() { return MovieRoutine_83ec0(); }

__int64 MovieHr_fef0() { return MovieRoutine_83f70(); }

__int64 MovieHr_fef4() { return MovieRoutine_83f80(); }

__int64 MovieHr_ff40() { return MovieRoutine_83fb0(); }

__int64 MovieHr_ff44() { return MovieRoutine_83fc0(); }

void MovieHr_12020() { ; }

__int64 MovieHr_12030() { return 23; }

__int64 MovieHr_6fad0(__int64 a1)
{
  return MovieRoutine_82ce0(a1 + 12, 0, 13992);
}

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
