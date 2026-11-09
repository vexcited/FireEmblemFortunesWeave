#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

const char* EventMemoryMenuItem_Unknown3(_QWORD* a1);

const char* EventMemoryMenuItem_Unknown3(_QWORD* a1)
{
  if (((*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1) & 1) != 0) {
    return *(const char**)(*(_QWORD*)(a1[11] + 8LL) + 72LL);
  }
  else {
    return "MID_Sys_Unknown";
  }
}

#pragma GCC visibility pop
