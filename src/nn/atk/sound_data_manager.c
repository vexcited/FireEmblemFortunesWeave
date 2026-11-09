#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_278670(_QWORD);
__int64 GameRoutine_278680(_QWORD);
__int64 GameRoutine_278e00(__int64, unsigned int, __int64);
__int64 GameRoutine_286260(_QWORD, _QWORD);
__int64 GameRoutine_287ff0(_QWORD, _QWORD);
__int64 GameRoutine_2888d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_288b50(_QWORD, _QWORD);
__int64 GameRoutine_288c50(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a0820(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a0de0(_QWORD, _QWORD);
__int64 GameRoutine_2a0e80(_QWORD, _QWORD);
__int64 GameRoutine_2a0eb0(_QWORD, _QWORD);
__int64 GameRoutine_2a1860(_QWORD, _QWORD);
__int64 SoundDataManager_27b710(__int64 a1, __int64 a2);
bool SoundDataManager_27b740(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 SoundDataManager_27b820(__int64 a1, __int64 a2);
unsigned __int64 SoundDataManager_Unknown2(unsigned __int64 result,
                                           unsigned __int64 a2,
                                           unsigned __int64 a3);
__int64 SoundDataManager_Unknown5(_QWORD* a1, unsigned int a2);
__int64 SoundDataManager_27baa0(__int64 a1, unsigned int a2);
__int64 SoundDataManager_Unknown3(__int64 a1, unsigned int a2, __int64 a3);
__int64 SoundDataManager_27bb30(__int64 a1, unsigned int a2, __int64 a3);
__int64 SoundDataManager_Unknown4(__int64 a1, unsigned int a2);

__int64 SoundDataManager_27b710(__int64 a1, __int64 a2)
{
  return (8LL * (unsigned int)GameRoutine_278680(a2) + 11) & 0xFFFFFFFF8LL;
}

bool SoundDataManager_27b740(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v7;
  _DWORD* v8;
  unsigned __int64 v9;
  _DWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v7 = ((a3 + 8LL * (unsigned int)GameRoutine_278680(a2) + 11) &
        0xFFFFFFFFFFFFFFF8LL) -
       (a3 + a4);
  if (v7 <= 0) {
    *(_QWORD*)(a1 + 560) = a3;
    **(_DWORD**)(a1 + 560) = GameRoutine_278680(a2);
    v8 = *(_DWORD**)(a1 + 560);
    if (*v8 != 0) {
      v9 = 0;
      do {
        v10 = &v8[2 * v9++];
        *((_QWORD*)v10 + 1) = 0;
        v8 = *(_DWORD**)(a1 + 560);
      } while (v9 < (unsigned int)*v8);
    }
    v11 = GameRoutine_286260(a1 + 24, a2);
    v13 = GameRoutine_2a1860(v11, v12);
    v14 = GameRoutine_2a0820(v13, 32, 8, 1);
    *(_QWORD*)(v14 + 24) = a1;
    *(_DWORD*)(v14 + 8) = 68;
    GameRoutine_2a0e80(v13, v14);
  }
  return v7 < 1;
}

__int64 SoundDataManager_27b820(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 result;

  v3 = GameRoutine_2a1860(a1, a2);
  v4 = GameRoutine_2a0820(v3, 32, 8, 1);
  *(_QWORD*)(v4 + 24) = a1;
  *(_DWORD*)(v4 + 8) = 69;
  GameRoutine_2a0e80(v3, v4);
  v5 = GameRoutine_2a0eb0(v3, 1);
  result = GameRoutine_2a0de0(v3, v5);
  *(_QWORD*)(a1 + 568) = 0;
  *(_QWORD*)(a1 + 560) = 0;
  return result;
}

unsigned __int64 SoundDataManager_Unknown2(unsigned __int64 result,
                                           unsigned __int64 a2,
                                           unsigned __int64 a3)
{
  unsigned int* v3;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 i;
  unsigned int* v9;
  unsigned __int64 v10;
  __int64 v12;
  int v13;
  int j;
  unsigned int v15;
  _QWORD v18[4];
  unsigned int v19;
  __int64 v20;

  v3 = *(unsigned int**)(result + 560);
  v6 = result;
  if (v3 != nullptr) {
    v7 = *v3;
    if ((_DWORD)v7 != 0) {
      for (i = 0; i < v7; ++i) {
        v9 = &v3[2 * i];
        v10 = *((_QWORD*)v9 + 1);
        if (a2 <= v10 && v10 <= a3) {
          *((_QWORD*)v9 + 1) = 0;
          v3 = *(unsigned int**)(result + 560);
          v7 = *v3;
        }
      }
    }
  }
  v12 = *(_QWORD*)(result + 32);
  if (v12 != 0) {
    result = GameRoutine_278670(*(_QWORD*)(result + 32));
    if ((_DWORD)result != 0) {
      v13 = result;
      for (j = 0; j != v13; ++j) {
        v20 = 0;
        v19 = -1;
        result = GameRoutine_278e00(v12, j | 0x5000000u, (__int64)&v19);
        if ((result & 1) != 0 && (v20 & 0x100000000LL) != 0) {
          result = (*(__int64 (**)(unsigned __int64, _QWORD))(*(_QWORD*)v6 +
                                                              32LL))(v6, v19);
          if (result != 0) {
            memset(v18, 0, sizeof(v18));
            result = GameRoutine_2888d0(v18, result, 1);
            if ((_DWORD)v20 != 0) {
              v15 = 0;
              do {
                result = GameRoutine_288b50(v18, v15);
                if (result <= a3 && result != 0 && a2 <= result) {
                  result = GameRoutine_288c50(v18, v15, 0);
                }
                ++v15;
              } while (v15 < (unsigned int)v20);
            }
          }
        }
      }
    }
  }
  return result;
}

__int64 SoundDataManager_Unknown5(_QWORD* a1, unsigned int a2)
{
  __int64 v3;
  __int64 result;

  v3 = a1[71];
  if (v3 == 0 || (result = (*(__int64 (**)(__int64, _QWORD))(
                      *(_QWORD*)v3 + 16LL))(v3, a2)) == 0) {
    result = GameRoutine_287ff0(a1 + 3, a2);
    if (result == 0) {
      return (*(__int64 (**)(_QWORD*, _QWORD))(*a1 + 32LL))(a1, a2);
    }
  }
  return result;
}

__int64 SoundDataManager_27baa0(__int64 a1, unsigned int a2)
{
  __int64 v3;
  __int64 result;

  v3 = *(_QWORD*)(a1 + 544);
  if (v3 == 0 || (result = (*(__int64 (**)(__int64, _QWORD))(
                      *(_QWORD*)v3 + 16LL))(v3, a2)) == 0) {
    result = GameRoutine_287ff0(a1, a2);
    if (result == 0) {
      return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)(a1 - 24) + 32LL))(
          a1 - 24, a2);
    }
  }
  return result;
}

__int64 SoundDataManager_Unknown3(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;

  v3 = *(_QWORD*)(a1 + 560);
  if (v3 == 0) {
    return 0;
  }
  v4 = v3 + 8LL * a2;
  result = *(_QWORD*)(v4 + 8);
  *(_QWORD*)(v4 + 8) = a3;
  return result;
}

__int64 SoundDataManager_27bb30(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 result;

  v3 = *(_QWORD*)(a1 + 536);
  if (v3 == 0) {
    return 0;
  }
  v4 = v3 + 8LL * a2;
  result = *(_QWORD*)(v4 + 8);
  *(_QWORD*)(v4 + 8) = a3;
  return result;
}

__int64 SoundDataManager_Unknown4(__int64 a1, unsigned int a2)
{
  unsigned int* v2;

  v2 = *(unsigned int**)(a1 + 560);
  if (v2 != nullptr && a2 < *v2) {
    return *(_QWORD*)&v2[2 * a2 + 2];
  }
  else {
    return 0;
  }
}

#pragma GCC visibility pop
