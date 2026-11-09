#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN GameData_22110b8;
extern __int64 GameData_22110ac;
float StateJump_Unknown2(__int64 a1);

float StateJump_Unknown2(__int64 a1)
{
  float result;
  __int64 v2;
  int v3;
  __int64 v4;

  *(_WORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_DWORD*)(a1 + 176) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22110b8,
                            memory_order_acquire) &
       1) == 0) {
    v4 = a1;
    v3 = __cxa_guard_acquire(&GameData_22110b8);
    a1 = v4;
    if (v3 != 0) {
      GameData_22110ac = 0;
      __cxa_guard_release(&GameData_22110b8);
      a1 = v4;
    }
  }
  v2 = GameData_22110ac;
  result = *(float*)&GameData_22110ac;
  *(_BYTE*)(a1 + 188) = 0;
  *(_DWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 180) = v2;
  return result;
}

#pragma GCC visibility pop
