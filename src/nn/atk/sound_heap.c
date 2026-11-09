#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_27db90(_QWORD, _QWORD);
__int64 GameRoutine_27dbe0(_QWORD);
__int64 GameRoutine_2a0820(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a0de0(_QWORD, _QWORD);
__int64 GameRoutine_2a0e80(_QWORD, _QWORD);
__int64 GameRoutine_2a0eb0(_QWORD, _QWORD);
__int64 GameRoutine_2a1860(_QWORD, _QWORD);
__int64 GameRoutine_2a41d0(_QWORD);
__int64 GameRoutine_2a4220(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a44e0(_QWORD);
__int64 GameRoutine_2a4560(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a5790(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern __int64 (*GameData_2135098)();
__int64 SoundHeap_27bef0(__int64 a1);
__int64 SoundHeap_27bfd0(__int64 a1, __int64 a2, unsigned __int64 a3);
__int64 SoundHeap_Unknown2(__int64 a1, __int64 a2);
_BYTE* SoundHeap_27c0d0(__int64 a1, __int64 a2);
__int64 SoundHeap_Unknown3(__int64 a1, __int64 a2, __int64 a3, __int64 a4);

__int64 SoundHeap_27bef0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _BYTE* v4;
  _BYTE* v5;
  unsigned int v6;

  nn_os_LockMutex(a1 + 8);
  if (*(_QWORD*)(a1 + 40) != 0) {
    nn_os_LockMutex(a1 + 8);
    GameRoutine_2a44e0(a1 + 40);
    v2 = nn_os_UnlockMutex(a1 + 8);
    v4 = (_BYTE*)GameRoutine_2a1860(v2, v3);
    if (*v4 == 1) {
      v5 = v4;
      v6 = GameRoutine_2a0eb0(v4, 1);
      GameRoutine_2a0de0(v5, v6);
    }
    if (*(_BYTE*)(a1 + 72) == 1) {
      GameRoutine_27dbe0(a1 + 64);
      *(_BYTE*)(a1 + 72) = 0;
    }
    GameRoutine_2a41d0(a1 + 40);
  }
  return nn_os_UnlockMutex(a1 + 8);
}

__int64 SoundHeap_27bfd0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6;
  bool v7;
  unsigned __int64 v8;
  unsigned int v9;

  GameRoutine_2a5790(a2, a3);
  nn_os_LockMutex(a1 + 8);
  v6 = ((a2 + 4095) & 0xFFFFFFFFFFFFF000LL) - a2;
  v7 = a3 >= v6;
  v8 = a3 - v6;
  if (v7 && (GameRoutine_2a4220(a1 + 40, (a2 + 4095) & 0xFFFFFFFFFFFFF000LL,
                                v8 & 0xFFFFFFFFFFFFF000LL) &
             1) != 0) {
    GameRoutine_27db90(a1 + 64, (a2 + 4095) & 0xFFFFFFFFFFFFF000LL);
    v9 = 1;
    *(_BYTE*)(a1 + 72) = 1;
  }
  else {
    v9 = 0;
  }
  nn_os_UnlockMutex(a1 + 8);
  return v9;
}

__int64 SoundHeap_Unknown2(__int64 a1, __int64 a2)
{
  __int64 v4;

  nn_os_LockMutex(a1 + 8);
  v4 = GameRoutine_2a4560(a1 + 40, a2, GameData_2135098, 0, 0, 0);
  nn_os_UnlockMutex(a1 + 8);
  return v4;
}

_BYTE* SoundHeap_27c0d0(__int64 a1, __int64 a2)
{
  _BYTE* result;
  _BYTE* v5;
  __int64 v6;

  result = (_BYTE*)GameRoutine_2a1860(a1, a2);
  if (*result == 1) {
    v5 = result;
    v6 = GameRoutine_2a0820(result, 40, 8, 1);
    *(_QWORD*)(v6 + 24) = a1;
    *(_QWORD*)(v6 + 32) = a2;
    *(_DWORD*)(v6 + 8) = 67;
    return (_BYTE*)GameRoutine_2a0e80(v5, v6);
  }
  return result;
}

__int64 SoundHeap_Unknown3(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8;

  nn_os_LockMutex(a1 + 8);
  v8 = GameRoutine_2a4560(a1 + 40, a2, GameData_2135098, 0, a3, a4);
  nn_os_UnlockMutex(a1 + 8);
  return v8;
}

#pragma GCC visibility pop
