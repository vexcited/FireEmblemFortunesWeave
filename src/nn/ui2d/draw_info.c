#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_55dc90(__int64 result);
__int64 GameRoutine_5fd120(_QWORD);
__int64 GameRoutine_5fd2e0(_QWORD);
__int64 GameRoutine_5fdd40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fdf40(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
extern _UNKNOWN* GameData_21361e0;
extern __int64* GameData_21361e8;
void GameRoutine_55dc00(__int64, int);
__int64 DrawInfo_5768c0(__int64 result, __int64 a2);
__int64 DrawInfo_5768f0(__int64 result);
void DrawInfo_576900(__int64 a1, int a2);
__int64 DrawInfo_576950(__int64 a1);
__int64 DrawInfo_5769a0(__int64 result, int a2);
__int64 DrawInfo_5769c0(__int64 result, __int64 a2, int a3, int a4);
_QWORD* DrawInfo_5769d0(_QWORD* result, __int64* a2);
__int64 DrawInfo_576a40(__int64 a1, __int64 a2, unsigned __int16 a3);
__int64 DrawInfo_576aa0(__int64 a1, __int64 a2);
long double DrawInfo_576b20(__int64 a1, __int64 a2);
long double DrawInfo_576b40(__int64 a1, __int64 a2);
__int64* DrawInfo_Destructor();

__int64 DrawInfo_5768c0(__int64 result, __int64 a2)
{
  char v2;

  v2 = *(_BYTE*)(result + 404);
  *(_QWORD*)(result + 408) = 0;
  *(_WORD*)(result + 416) = 0;
  *(_QWORD*)(result + 192) = a2;
  *(_BYTE*)(result + 404) = v2 | 0x40;
  return result;
}

__int64 DrawInfo_5768f0(__int64 result)
{
  *(_QWORD*)(result + 408) = 0;
  *(_WORD*)(result + 416) = 0;
  return result;
}

void DrawInfo_576900(__int64 a1, int a2)
{
  __int64 v3;
  __int64 v5;

  v3 = *(_QWORD*)(a1 + 200);
  if (v3 != 0) {
    GameRoutine_55dc00(v3, a2);
  }
  v5 = *(_QWORD*)(a1 + 208);
  if (v5 != 0) {
    GameRoutine_55dc00(v5, a2);
  }
}

__int64 DrawInfo_576950(__int64 a1)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 200);
  if (v2 != 0) {
    GameRoutine_55dc90(v2);
  }
  result = *(_QWORD*)(a1 + 208);
  if (result != 0) {
    return GameRoutine_55dc90(result);
  }
  return result;
}

__int64 DrawInfo_5769a0(__int64 result, int a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(result + 200);
  if (v2 != 0) {
    *(_DWORD*)(v2 + 48) = a2;
  }
  v3 = *(_QWORD*)(result + 208);
  if (v3 != 0) {
    *(_DWORD*)(v3 + 48) = a2;
  }
  return result;
}

__int64 DrawInfo_5769c0(__int64 result, __int64 a2, int a3, int a4)
{
  *(_QWORD*)(result + 216) = a2;
  *(_DWORD*)(result + 224) = a3;
  *(_DWORD*)(result + 228) = a4;
  return result;
}

_QWORD* DrawInfo_5769d0(_QWORD* result, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = a2[7];
  result[7] = a2[5];
  result[9] = v2;
  v3 = a2[3];
  result[3] = a2[1];
  result[5] = v3;
  v4 = *a2;
  result[4] = a2[2];
  result[2] = v4;
  v5 = a2[4];
  result[8] = a2[6];
  result[6] = v5;
  return result;
}

__int64 DrawInfo_576a40(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  bool v3;
  unsigned int v4;

  v3 = *(_QWORD*)(a1 + 408) == a2 && *(unsigned __int16*)(a1 + 416) == a3;
  v4 = !v3;
  if (!v3) {
    *(_QWORD*)(a1 + 408) = a2;
    *(_WORD*)(a1 + 416) = a3;
  }
  return v4;
}

__int64 DrawInfo_576aa0(__int64 a1, __int64 a2)
{
  __int64 result;

  GameRoutine_5fdf40(a2, 0, 1, a1 + 304);
  result = GameRoutine_5fdd40(a2, 0, 1, a1 + 256);
  if (*(_QWORD*)(a1 + 344) != 0) {
    result = GameRoutine_5fd2e0(a2);
  }
  if (*(_QWORD*)(a1 + 352) != 0) {
    return GameRoutine_5fd120(a2);
  }
  return result;
}

long double DrawInfo_576b20(__int64 a1, __int64 a2)
{
  long double result;
  __int128 v3;
  __int128 v4;
  __int128 v5;

  result = *(long double*)(a1 + 16);
  v3 = *(_OWORD*)(a1 + 32);
  v4 = *(_OWORD*)(a1 + 48);
  v5 = *(_OWORD*)(a1 + 64);
  *(long double*)a2 = result;
  *(_OWORD*)(a2 + 16) = v3;
  *(_OWORD*)(a2 + 32) = v4;
  *(_OWORD*)(a2 + 48) = v5;
  return result;
}

long double DrawInfo_576b40(__int64 a1, __int64 a2)
{
  long double result;
  __int128 v3;
  __int128 v4;

  if ((*(_BYTE*)(a1 + 404) & 0x20) == 0) {
    result = *(long double*)(a1 + 128);
    v3 = *(_OWORD*)(a1 + 144);
    v4 = *(_OWORD*)(a1 + 160);
    *(_BYTE*)(a1 + 404) |= 0x20u;
    *(long double*)a2 = result;
    *(_OWORD*)(a2 + 16) = v3;
    *(_OWORD*)(a2 + 32) = v4;
  }
  return result;
}

__int64* DrawInfo_Destructor()
{
  if ((atomic_load_explicit((atomic_uchar* volatile)GameData_21361e0,
                            memory_order_acquire) &
       1) != 0) {
    return GameData_21361e8;
  }
  if ((unsigned int)__cxa_guard_acquire(GameData_21361e0) != 0) {
    *GameData_21361e8 = 0;
    __cxa_guard_release(GameData_21361e0);
  }
  return GameData_21361e8;
}

#pragma GCC visibility pop
