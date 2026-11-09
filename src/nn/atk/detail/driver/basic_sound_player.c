#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_FinalizeEvent(_QWORD);
extern __int64 (*nn_atk_detail_driver_BasicSoundPlayer_vtable)();
__int64 BasicSoundPlayer_Unknown2(__int64 result, __int64 a2, __int64 a3);
__int64 BasicSoundPlayer_Destructor(_QWORD* a1);
float GameHr_283c40(__int64 a1, int a2, int a3);

void __attribute__((noreturn)) BasicSoundPlayer_DeletingDestructor()
{
  __udf(0x8002u);
}

__int64 BasicSoundPlayer_Unknown2(__int64 result, __int64 a2, __int64 a3)
{
  *(_BYTE*)(result + 68) = 0;
  *(_DWORD*)(result + 64) = 0;
  *(_QWORD*)(result + 48) = a2;
  *(_QWORD*)(result + 56) = a3;
  *(_QWORD*)(result + 92) = 0;
  *(_DWORD*)(result + 108) = 0;
  *(_QWORD*)(result + 160) = 0;
  *(_QWORD*)(result + 168) = 0;
  *(_QWORD*)(result + 176) = 0;
  *(_QWORD*)(result + 192) = 0;
  *(_QWORD*)(result + 72) = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 80) = 0;
  *(_BYTE*)(result + 88) = -1;
  *(_QWORD*)(result + 100) = 0x3F80000000000001LL;
  return result;
}

__int64 BasicSoundPlayer_Destructor(_QWORD* a1)
{
  *a1 = &nn_atk_detail_driver_BasicSoundPlayer_vtable;
  return nn_os_FinalizeEvent(a1 + 1);
}

float GameHr_283c40(__int64 a1, int a2, int a3)
{
  return *(float*)(*(_QWORD*)(a1 + 32) + 96LL * a2 + 4LL * a3);
}

#pragma GCC visibility pop
