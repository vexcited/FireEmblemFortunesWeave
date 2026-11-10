#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1b00(_QWORD, float);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
_QWORD* DungeonRouteReport_f604e0(_QWORD* result);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_hub_DungeonRouteReport_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 DungeonRouteReport_f60360(_QWORD* a1);
__int64 GameRoutine_14a1390(_QWORD, _QWORD);
__int64 Manager_d55430(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
extern _UNKNOWN GameData_1aa18e9;
extern _UNKNOWN GameData_1aa53fd;
extern _UNKNOWN GameData_1ab0ecf;
extern _UNKNOWN GameData_1ac0a92;
extern _UNKNOWN GameData_1ac3eca;
extern _UNKNOWN GameData_1ad729b;
extern _UNKNOWN GameData_1adb73c;
extern _UNKNOWN GameData_1adef41;
extern _UNKNOWN GameData_1aea6fb;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
extern __int64 GameData_212dbb8[9];
extern __int64 game_GameModeData_instance_;
__int64 DungeonRouteReport_f608a0(__int64 a1);
long double DungeonRouteReport_f60e40(__int64 a1);
__int64* DungeonRouteReport_f62340(__int64* result, __int64* a2, __int64* a3,
                                   __int64* a4, __int64* a5);
__int64 DungeonRouteReport_f62800(__int64 result);

__n128 DungeonRouteReport_f60360(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __n128 result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  *a1 = game_hub_DungeonRouteReport_vtable;
  v3 = a1[1];
  v2 = a1[2];
  if (v2 != v3) {
    v4 = 0;
    do {
      v5 = *(_QWORD*)(v3 + 8 * v4);
      if (v5 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
        *(_QWORD*)(v3 + 8 * v4) = 0;
        v3 = a1[1];
        v2 = a1[2];
      }
      ++v4;
    } while (v4 < (v2 - v3) >> 3);
  }
  a1[2] = v3;
  DungeonRouteReport_f604e0(a1);
  v7 = a1[4];
  v8 = fw_memory_g_heap_manager_ptr;
  if (v7 != 0) {
    v9 = a1[5];
    if (v7 == v9) {
      goto LABEL_14;
    }
    do {
      v10 = *(_QWORD*)(v9 - 8);
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
      v9 -= 16;
    } while (v9 != v7);
    v11 = a1[4];
    a1[5] = v7;
    if (v11 != 0) {
    LABEL_14:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v12 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v12);
    }
  }
  v13 = a1[1];
  if (v13 != 0) {
    v14 = *(_QWORD*)v8;
    a1[2] = v13;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    return nn_mem_StandardAllocator_Free(v14 + v15);
  }
  return result;
}

_QWORD* DungeonRouteReport_f604e0(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  unsigned __int64 i;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = result[1];
  v1 = result[2];
  v3 = result;
  if (v1 != v2) {
    for (i = 0; i < (v1 - v2) >> 3; ++i) {
      v5 = *(_QWORD*)(v2 + 8 * i);
      v6 = *(_QWORD*)(v5 + 80);
      if (v6 == 0) {
        continue;
      }
      result = *(_QWORD**)(v6 + 8);
      *(_BYTE*)v6 = 0;
      v7 = *result;
      if (*result != 0) {
        if (*(_DWORD*)(v7 + 16) == *((_DWORD*)result + 2)) {
          *(_BYTE*)(v7 + 33) = 0;
          if (*(_BYTE*)v6 != 0) {
            goto LABEL_5;
          }
        }
        result = *(_QWORD**)(v6 + 8);
      }
      result = (_QWORD*)GameRoutine_14a1b00(result, 0.0);
    LABEL_5:
      *(_QWORD*)(v5 + 80) = 0;
      v2 = v3[1];
      v1 = v3[2];
    }
  }
  v8 = v3[4];
  v9 = v3[5];
  if (v9 != v8) {
    do {
      v10 = *(_QWORD*)(v9 - 8);
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        result = (_QWORD*)std___1___shared_weak_count___release_weak(v10);
      }
      v9 -= 16;
    } while (v9 != v8);
    v3[5] = v8;
  }
  return result;
}

__int64 DungeonRouteReport_f608a0(__int64 a1)
{
  __int64 v2;
  float v3;
  float v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  __int64 v10;
  __int64 v11;
  float v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float v19;
  __int64 v20;
  __int64 v21;
  float v22;
  __int64 v23;
  __int64 result;
  float v25;
  __int64 v26;
  void* v27;

  v27 = &GameData_1adb73c;
  v2 = game_HashString(&GameData_1adb73c);
  v3 = 0.0;
  v4 = 0.0;
  v26 = v2;
  if (game_GameModeData_instance_ != 0) {
    v5 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    v4 = 0.0;
    if (v5 != 0) {
      v4 = (float)*(int*)(v5 + 32);
    }
  }
  *(float*)(a1 + 68) = v4;
  v27 = &GameData_1ab0ecf;
  v26 = game_HashString(&GameData_1ab0ecf);
  if (game_GameModeData_instance_ != 0) {
    v6 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    if (v6 != 0) {
      v3 = (float)*(int*)(v6 + 32);
    }
  }
  *(float*)(a1 + 76) = v3;
  v27 = &GameData_1adef41;
  v7 = game_HashString(&GameData_1adef41);
  v8 = 0.0;
  v9 = 0.0;
  v26 = v7;
  if (game_GameModeData_instance_ != 0) {
    v10 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    v9 = 0.0;
    if (v10 != 0) {
      v9 = (float)*(int*)(v10 + 32);
    }
  }
  *(float*)(a1 + 80) = v9;
  v27 = &GameData_1ac3eca;
  v26 = game_HashString(&GameData_1ac3eca);
  if (game_GameModeData_instance_ != 0) {
    v11 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    if (v11 != 0) {
      v8 = (float)*(int*)(v11 + 32);
    }
  }
  v27 = &GameData_1ad729b;
  *(float*)(a1 + 84) = v8 / 100.0;
  v12 = 0.0;
  v26 = game_HashString(&GameData_1ad729b);
  if (game_GameModeData_instance_ != 0) {
    v13 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    if (v13 != 0) {
      v12 = (float)*(int*)(v13 + 32);
    }
  }
  v27 = &GameData_1aa53fd;
  *(float*)(a1 + 72) = v12 / 100.0;
  v14 = game_HashString(&GameData_1aa53fd);
  v15 = game_GameModeData_instance_;
  v26 = v14;
  if (game_GameModeData_instance_ != 0) {
    v16 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    if (v16 != 0) {
      v15 = *(_DWORD*)(v16 + 32);
    }
    else {
      v15 = 0;
    }
  }
  *(_DWORD*)(a1 + 88) = v15;
  v27 = &GameData_1aa18e9;
  v17 = game_HashString(&GameData_1aa18e9);
  v18 = 0.0;
  v19 = 0.0;
  v26 = v17;
  if (game_GameModeData_instance_ != 0) {
    v20 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    v19 = 0.0;
    if (v20 != 0) {
      v19 = (float)*(int*)(v20 + 32);
    }
  }
  v27 = &GameData_1ac0a92;
  *(float*)(a1 + 92) = v19 / 100.0;
  v26 = game_HashString(&GameData_1ac0a92);
  if (game_GameModeData_instance_ != 0) {
    v21 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    if (v21 != 0) {
      v18 = (float)*(int*)(v21 + 32);
    }
  }
  v27 = &GameData_1aea6fb;
  *(float*)(a1 + 96) = v18 / 100.0;
  v22 = 0.0;
  v26 = game_HashString(&GameData_1aea6fb);
  if (game_GameModeData_instance_ != 0) {
    v23 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v26);
    if (v23 != 0) {
      v22 = (float)*(int*)(v23 + 32);
    }
  }
  *(float*)(a1 + 100) = v22 / 100.0;
  result = Manager_d55430(*(_QWORD*)GameData_212dbb8[0]);
  if ((result & 1) != 0) {
    v25 = *(float*)(a1 + 68) * 0.25;
    *(int*)(a1 + 88) /= 2;
    *(float*)(a1 + 68) = v25;
  }
  return result;
}

long double DungeonRouteReport_f60e40(__int64 a1)
{
  __int64 v1;
  unsigned __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  long double result;
  __int128 v10;
  __int64 v11;

  v1 = *(_QWORD*)(a1 + 8);
  if (*(_QWORD*)(a1 + 16) != v1) {
    v3 = 0;
    v4 = GameData_212c540;
    while (1) {
      v5 = *(_QWORD*)(v1 + 8 * v3);
      v6 = *(_QWORD*)(v5 + 80);
      if (v6 != 0) {
        break;
      }
    LABEL_10:
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                memory_order_acquire) &
           1) == 0 &&
          (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
        v11 = v4[1];
        *(_QWORD*)&GameData_21a6120 = *v4;
        *((_QWORD*)&GameData_21a6120 + 1) = v11;
        __cxa_guard_release(&GameData_21a6130);
      }
      result = *(long double*)&GameData_21a6120;
      *(_DWORD*)(v5 + 56) = 0;
      *(_QWORD*)(v5 + 64) = -1;
      ++v3;
      *(_BYTE*)(v5 + 72) = 0;
      *(_QWORD*)(v5 + 32) = *(_QWORD*)&result;
      v10 = *(_OWORD*)(v5 + 32);
      *((_QWORD*)&v10 + 1) = DWORD2(result);
      *(_OWORD*)(v5 + 32) = v10;
      v1 = *(_QWORD*)(a1 + 8);
      if (v3 >= (*(_QWORD*)(a1 + 16) - v1) >> 3) {
        return result;
      }
    }
    v7 = *(__int64**)(v6 + 8);
    *(_BYTE*)v6 = 0;
    v8 = *v7;
    if (*v7 != 0) {
      if (*(_DWORD*)(v8 + 16) == *((_DWORD*)v7 + 2)) {
        *(_BYTE*)(v8 + 33) = 0;
        if (*(_BYTE*)v6 != 0) {
          goto LABEL_9;
        }
      }
      v7 = *(__int64**)(v6 + 8);
    }
    GameRoutine_14a1b00(v7, 0.0);
  LABEL_9:
    *(_QWORD*)(v5 + 80) = 0;
    goto LABEL_10;
  }
  return result;
}

__int64* DungeonRouteReport_f62340(__int64* result, __int64* a2, __int64* a3,
                                   __int64* a4, __int64* a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v5 = *a2;
  v6 = *result;
  v7 = *a3;
  v8 = *(_QWORD*)(*a2 + 64);
  v9 = *(_QWORD*)(*a3 + 64);
  if (v8 >= *(_QWORD*)(*result + 64)) {
    if (v9 >= v8) {
      v5 = *a3;
    }
    else {
      *a2 = v7;
      *a3 = v5;
      v10 = *result;
      if (*(_QWORD*)(*a2 + 64) < *(_QWORD*)(*result + 64)) {
        *result = *a2;
        *a2 = v10;
        v5 = *a3;
      }
    }
  }
  else {
    if (v9 < v8) {
      *result = v7;
    LABEL_9:
      *a3 = v6;
      v5 = v6;
      goto LABEL_11;
    }
    *result = v5;
    *a2 = v6;
    v5 = *a3;
    if (*(_QWORD*)(*a3 + 64) < *(_QWORD*)(v6 + 64)) {
      *a2 = v5;
      goto LABEL_9;
    }
  }
LABEL_11:
  if (*(_QWORD*)(*a4 + 64) < *(_QWORD*)(v5 + 64)) {
    *a3 = *a4;
    *a4 = v5;
    v11 = *a2;
    if (*(_QWORD*)(*a3 + 64) < *(_QWORD*)(*a2 + 64)) {
      *a2 = *a3;
      *a3 = v11;
      v12 = *result;
      if (*(_QWORD*)(*a2 + 64) < *(_QWORD*)(*result + 64)) {
        *result = *a2;
        *a2 = v12;
      }
    }
  }
  v13 = *a4;
  if (*(_QWORD*)(*a5 + 64) < *(_QWORD*)(*a4 + 64)) {
    *a4 = *a5;
    *a5 = v13;
    v14 = *a3;
    if (*(_QWORD*)(*a4 + 64) < *(_QWORD*)(*a3 + 64)) {
      *a3 = *a4;
      *a4 = v14;
      v15 = *a2;
      if (*(_QWORD*)(*a3 + 64) < *(_QWORD*)(*a2 + 64)) {
        *a2 = *a3;
        *a3 = v15;
        v16 = *result;
        if (*(_QWORD*)(*a2 + 64) < *(_QWORD*)(*result + 64)) {
          *result = *a2;
          *a2 = v16;
        }
      }
    }
  }
  return result;
}

__int64 DungeonRouteReport_f62800(__int64 result)
{
  _DWORD* v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_DWORD**)(result + 32);
  if (*(_QWORD*)v1 != 0 && *(_DWORD*)(*(_QWORD*)v1 + 16LL) == v1[2]) {
    v2 = result;
    GameRoutine_14a1390(result + 32, 1);
    result = v2;
  }
  v3 = *(_QWORD*)(result + 40);
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

#pragma GCC visibility pop
