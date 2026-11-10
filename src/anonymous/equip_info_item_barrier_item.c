#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_16d4820(_QWORD*, __int64, _QWORD*);
__int64 game_util_Format(const char*, ...);
__int64 strlen(_QWORD);
__int64 EquipInfoItem_BarrierItem_Unknown16(__int64 a1);
__int64 GameRoutine_18a73c0(void);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212c878[6];
extern __int64* game_map_MapRandom_instance__ptr[3];
__n128 EquipInfoItem_BarrierItem_Unknown70(__int64 a1, _QWORD* a2);

__int64 EquipInfoItem_BarrierItem_Unknown16(__int64 a1)
{
  int v1;
  _QWORD v4[2];
  _QWORD v5[2];

  v1 = *(_DWORD*)(a1 + 40);
  v5[0] = "L_MenuItem_Item";
  v5[1] = 15;
  v4[0] = game_util_Format("BarrierItem%02d", v1);
  v4[1] = strlen(v4[0]);
  return GameRoutine_16d4820((_QWORD*)a1, (__int64)v5, v4);
}

__n128 EquipInfoItem_BarrierItem_Unknown70(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v5;
  __n128 result;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  int v10;
  unsigned int v11;
  unsigned int v12;

  v3 = a2[1];
  if (v3 != 0) {
    v5 = std___1___shared_weak_count_lock(v3);
    if (v5 != 0) {
      v7 = v5;
      if (*a2 != 0) {
        v8 = *(_QWORD*)(a1 + 128);
        if (v8 != 0 &&
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                 8LL * *(unsigned __int16*)(v8 + 16)) +
                      73LL) == 17) {
          nn_os_LockMutex(&game_g_random_mutex);
          v9 = game_map_MapRandom_instance__ptr[0];
          v10 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL));
          v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                           (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
          v12 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
          *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
              *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
          *((_DWORD*)v9 + 1) = v10;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9) = v11;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v9 + 4) =
              (v12 >> 8) ^ (v11 >> 19) ^ v12 ^ v11;
          nn_os_UnlockMutex(&game_g_random_mutex);
        }
        GameRoutine_18a73c0();
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        return std___1___shared_weak_count___release_weak(v7);
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
