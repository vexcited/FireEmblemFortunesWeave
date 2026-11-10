#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_e2fd80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e2ff40(void);
__int64 GameRoutine_e305a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_e30760(void);
__int64 GameRoutine_e4b940(_QWORD);
__int64 GameRoutine_ea1560(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_combat_CombatLegionManager_vtable[])();
extern __int64 GameData_22162a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d448[9];
extern int GameData_22162a4;
__int64 CombatLegionManager_Destructor(__int64 a1);
__int64 CombatLegionManager_e2c300_alt1(_QWORD) __asm__(
    "CombatLegionManager_e2c300");
__int64 CombatLegionManager_e2cfa0_alt1(_QWORD, _QWORD) __asm__(
    "CombatLegionManager_e2cfa0");
__int64 CombatLegionManager_e2f380_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "CombatLegionManager_e2f380");
__int64 CombatLegionManager_e2f570_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD,
    _QWORD) __asm__("CombatLegionManager_e2f570");
__int64 CombatLegionManager_e2f8a0_alt1(_QWORD, _QWORD) __asm__(
    "CombatLegionManager_e2f8a0");
__int64 CombatLegionManager_e302c0_alt1(_QWORD, _QWORD, long double) __asm__(
    "CombatLegionManager_e302c0");
__int64 GameRoutine_17cece0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ce68a0(_QWORD);
__int64 GameRoutine_e2c540(_QWORD);
__int64 GameRoutine_e2ca80(_QWORD);
__int64 GameRoutine_e2d1a0(void);
__int64 GameRoutine_e2e6a0(_QWORD);
__int64 GameRoutine_e3f5f0(_QWORD);
__int64 GameRoutine_e3fad0(_QWORD);
__int64 GameRoutine_e404c0(_QWORD);
__int64 GameRoutine_e42180(_QWORD);
__int64 GameRoutine_e4bbd0(_QWORD);
__int64 GameRoutine_e4bd20(_QWORD);
__int64 GameRoutine_e4bf40(_QWORD);
__int64 GameRoutine_e58720(_QWORD);
__int64 GameRoutine_e5ccc0(void);
__int64 GameRoutine_e5ce20(void);
__int64 GameRoutine_ea3620(_QWORD, _QWORD, _QWORD);
__int64 JostleManager_ea0ec0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_1fe3cd0[])();
extern __int64 GameData_21ec7b0;
extern __int64 GameData_21ed090;
extern __int64 GameData_2235e30;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern int GameData_21d92e0;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_e30420(void);
__int64 CombatLegionManager_e2bfa0(_QWORD* a1);
__int64 CombatLegionManager_e2c0e0(__int64 result);
__int64 CombatLegionManager_e2c300(__int64 result);
__int64 CombatLegionManager_e2c3e0(__int64 result);
__int64 CombatLegionManager_e2cca0();
__int64 CombatLegionManager_e2ce80(__int64 result);
__int64 CombatLegionManager_e2cfa0(__int64 result, __int64 a2);
_QWORD* game_combat_CombatLegionManager_SetAllSoundEnable(_QWORD* a1,
                                                          __int64 a2);
__int64 CombatLegionManager_e2e820(__int64 result, _QWORD* a2, __int64 a3,
                                   char a4);
float* CombatLegionManager_e2f380(float* result, float* a2, float* a3);
float* CombatLegionManager_e2f570(float* a1, float* a2, float* a3, float* a4,
                                  float* a5);
bool CombatLegionManager_e2f8a0(__int64 a1, __int64 a2);
__int64 CombatLegionManager_e2fd80(__int64* a1, __int64 a2, __int64 a3);
__int64 CombatLegionManager_e2ff40(__int64 a1, __int64 a2);
__int64 CombatLegionManager_e30080(__int64* a1, int* a2, __int64* a3,
                                   __int64 a4, __n128 a5);
__int64* CombatLegionManager_e302c0(__int64* result, _QWORD* a2);
__int64 game_combat_CombatLegionManager_CombatLegionManager_lambda0_Invoke(
    __int64 result, __int64 a2);
_QWORD* CombatLegionManager_e305a0(_QWORD* result, __int64 a2, __int64 a3);
__int64 CombatLegionManager_e30760(__int64 a1, __int64 a2);
__int64 game_combat_CombatLegionManager_SetDieCamera_lambda0_Invoke(__int64 a1,
                                                                    __int64 a2);
__int64
game_combat_CombatLegionManager_SetAllSoundEnable_lambda0_Invoke(__int64 result,
                                                                 __int64* a2);

__int64 CombatLegionManager_Destructor(__int64 a1)
{
  __int64* v2;
  int v3;
  __int64 v4;
  char* v5;
  char* v6;
  __int64 v7;
  int v8;
  __int64 v9;
  char* v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 result;
  _QWORD v35[2];

  *(_QWORD*)a1 = game_combat_CombatLegionManager_vtable;
  v2 = GameData_212d448[0];
  v3 = *(_DWORD*)(a1 + 92);
  if (v3 != 0) {
    v4 = *(_QWORD*)(*GameData_212d448[0] + 8);
    v5 = *(char**)(v4 + 80);
    v6 = *(char**)(v4 + 88);
    if (v5 != v6) {
      do {
        if (v3 == *(_DWORD*)v5) {
          *(_DWORD*)v5 = 0;
        }
        v5 += 80;
      } while (v5 != v6);
      v5 = *(char**)(v4 + 80);
      v6 = *(char**)(v4 + 88);
    }
    if (0xCCCCCCCCCCCCCCCDLL * ((v6 - v5) >> 4) >= 0x40) {
      v7 = GameRoutine_e2ff40();
      GameRoutine_e2fd80(v4 + 80, v7, *(_QWORD*)(v4 + 88));
    }
  }
  v8 = *(_DWORD*)(a1 + 96);
  if (v8 != 0) {
    v9 = *(_QWORD*)(*v2 + 128);
    v10 = *(char**)(v9 + 40);
    v11 = *(char**)(v9 + 48);
    if (v10 != v11) {
      do {
        if (v8 == *(_DWORD*)v10) {
          *(_DWORD*)v10 = 0;
        }
        v10 += 80;
      } while (v10 != v11);
      v10 = *(char**)(v9 + 40);
      v11 = *(char**)(v9 + 48);
    }
    if (0xCCCCCCCCCCCCCCCDLL * ((v11 - v10) >> 4) >= 0x40) {
      v12 = GameRoutine_e30760();
      GameRoutine_e305a0(v9 + 40, v12, *(_QWORD*)(v9 + 48));
    }
  }
  v13 = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  if (v13 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 8LL))(v13);
  }
  v14 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (v14 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 8LL))(v14);
  }
  v15 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 32) = 0;
  if (v15 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
  }
  *(_BYTE*)(GameData_22162a8 + 114) = 0;
  v16 = *(_QWORD**)(a1 + 56);
  v17 = *(_QWORD**)(a1 + 64);
  if (v16 != v17) {
    do {
      v18 = GameData_22162a8;
      v19 = v16[1];
      v35[0] = *v16;
      v35[1] = v19;
      if (v19 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                  memory_order_relaxed);
        GameRoutine_ea1560(v18, v35);
        if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
          std___1___shared_weak_count___release_weak(v19);
        }
      }
      else {
        GameRoutine_ea1560(GameData_22162a8, v35);
      }
      v16 += 2;
    } while (v16 != v17);
    v16 = *(_QWORD**)(a1 + 56);
    v17 = *(_QWORD**)(a1 + 64);
  }
  for (; v17 != v16; v17 -= 2) {
    v20 = *(v17 - 1);
    if (v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v20 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
      std___1___shared_weak_count___release_weak(v20);
    }
  }
  v21 = GameData_22162a8;
  *(_QWORD*)(a1 + 64) = v16;
  if (v21 != 0 && GameData_22162a4-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v21 + 24LL))(v21);
    if (GameData_22162a8 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_22162a8 + 8LL))(
          GameData_22162a8);
    }
    GameData_22162a8 = 0;
  }
  v23 = *(_QWORD*)(a1 + 56);
  v24 = fw_memory_g_heap_manager_ptr;
  if (v23 != 0) {
    v25 = *(_QWORD*)(a1 + 64);
    if (v23 == v25) {
      goto LABEL_53;
    }
    do {
      v26 = *(_QWORD*)(v25 - 8);
      if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        std___1___shared_weak_count___release_weak(v26);
      }
      v25 -= 16;
    } while (v25 != v23);
    v27 = *(_QWORD*)(a1 + 56);
    *(_QWORD*)(a1 + 64) = v23;
    if (v27 != 0) {
    LABEL_53:
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v24 + v28);
    }
  }
  v29 = *(_QWORD*)(a1 + 48);
  *(_QWORD*)(a1 + 48) = 0;
  if (v29 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
  }
  v30 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)(a1 + 40) = 0;
  if (v30 != 0) {
    GameRoutine_e4b940(v30);
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v24 + v31);
  }
  v32 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 32) = 0;
  if (v32 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 8LL))(v32);
  }
  v33 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (v33 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 8LL))(v33);
  }
  result = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 CombatLegionManager_e2bfa0(_QWORD* a1)
{
  __int64 v1;
  __int64* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  bool v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;

  v1 = a1[2];
  if (v1 == 0 ||
      (v3 = *(__int64**)(v1 + 88), v4 = *(__int64**)(v1 + 96), v3 == v4)) {
  LABEL_11:
    v11 = a1[3];
    if (v11 == 0 || (v12 = *(__int64**)(v11 + 88), v13 = *(__int64**)(v11 + 96),
                     v12 == v13)) {
    LABEL_21:
      v20 = a1[4];
      if (v20 == 0) {
        return 1;
      }
      v21 = *(__int64**)(v20 + 88);
      v22 = *(__int64**)(v20 + 96);
      if (v21 == v22) {
        return 1;
      }
      while (1) {
        v24 = *v21++;
        v23 = v24;
        v25 = *(_QWORD*)(v24 + 48);
        if (v25 == 0) {
          break;
        }
        v26 = *(_QWORD*)(v25 + 8);
        v27 = *(_QWORD*)(v23 + 56);
        v28 = v26 == -1 || v27 == 0;
        if (v28 || (*(_BYTE*)(v27 + 342) & 1) == 0 ||
            (GameRoutine_e42180(*(_QWORD*)(v23 + 104)) & 1) == 0) {
          break;
        }
        if (v21 == v22) {
          return 1;
        }
      }
    }
    else {
      while (1) {
        v15 = *v12++;
        v14 = v15;
        v16 = *(_QWORD*)(v15 + 48);
        if (v16 == 0) {
          break;
        }
        v17 = *(_QWORD*)(v16 + 8);
        v18 = *(_QWORD*)(v14 + 56);
        v19 = v17 == -1 || v18 == 0;
        if (v19 || (*(_BYTE*)(v18 + 342) & 1) == 0 ||
            (GameRoutine_e42180(*(_QWORD*)(v14 + 104)) & 1) == 0) {
          break;
        }
        if (v12 == v13) {
          goto LABEL_21;
        }
      }
    }
  }
  else {
    while (1) {
      v6 = *v3++;
      v5 = v6;
      v7 = *(_QWORD*)(v6 + 48);
      if (v7 == 0) {
        break;
      }
      v8 = *(_QWORD*)(v7 + 8);
      v9 = *(_QWORD*)(v5 + 56);
      v10 = v8 == -1 || v9 == 0;
      if (v10 || (*(_BYTE*)(v9 + 342) & 1) == 0 ||
          (GameRoutine_e42180(*(_QWORD*)(v5 + 104)) & 1) == 0) {
        break;
      }
      if (v3 == v4) {
        goto LABEL_11;
      }
    }
  }
  return 0;
}

__int64 CombatLegionManager_e2c0e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int16 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  bool v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* i;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* j;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64* k;
  __int64 v22;

  v1 = result;
  if (*(_DWORD*)(result + 80) == 1 && (*(_BYTE*)(result + 108) & 1) != 0 &&
      (*(_BYTE*)(result + 109) & 1) != 0) {
    if (GameData_22162a8 == 0 ||
        (*(_BYTE*)(GameData_22162a8 + 114) = 1, *(_DWORD*)(result + 80) != 2)) {
      *(_DWORD*)(result + 80) = 2;
      if (*(_BYTE*)(result + 104) == 1) {
        *(_BYTE*)(result + 104) = 0;
      }
      CombatLegionManager_e2cfa0_alt1(result, *(_QWORD*)(result + 16));
      CombatLegionManager_e2cfa0_alt1(v1, *(_QWORD*)(v1 + 24));
      result = CombatLegionManager_e2cfa0_alt1(v1, *(_QWORD*)(v1 + 32));
    }
    v2 = *(_QWORD*)(*(_QWORD*)(GameData_21ec7b0 + 8) + 728LL);
    if (v2 != 0) {
      v3 = *(_QWORD*)(v2 + 8);
      if (*(_BYTE*)(v3 + 104) == 5) {
        v4 = *(_WORD*)(v3 + 754);
        if ((v4 & 1) != 0 && (v4 & 2) != 0 && GameData_21ed090 != 0) {
          v8 = *(_DWORD*)v2 == 1;
          v5 = 144;
          if (v8) {
            v5 = 152;
            v6 = 1;
          }
          else {
            v6 = 0;
          }
          result = GameRoutine_17cece0(*(_QWORD*)(GameData_21ed090 + v5), v3,
                                       v6, 1, 0);
        }
      }
    }
  }
  v7 = *(_DWORD*)(v1 + 80);
  v8 = v7 == 0 || v7 == 4;
  if (!v8) {
    if (v7 == 1) {
      JostleManager_ea0ec0(GameData_22162a8);
      return GameRoutine_e2e6a0(v1);
    }
    else {
      CombatLegionManager_e2c300_alt1(v1);
      v9 = *(_QWORD*)(v1 + 40);
      v10 = *(_QWORD*)(v9 + 128);
      if (v10 != 0) {
        if ((*(_BYTE*)(v9 + 144) & 1) == 0) {
          *(_BYTE*)(v9 + 144) = 1;
          *(_BYTE*)(v10 + 112) = 1;
          v10 = *(_QWORD*)(v9 + 128);
        }
        GameRoutine_ce68a0(v10);
      }
      GameRoutine_e4bbd0(v9);
      GameRoutine_e4bd20(v9);
      if (*(_QWORD*)(v9 + 112) != 0) {
        GameRoutine_e5ce20();
      }
      JostleManager_ea0ec0(GameData_22162a8);
      result = GameRoutine_e2e6a0(v1);
      v11 = *(_QWORD*)(v1 + 16);
      v12 = *(__int64**)(v11 + 88);
      for (i = *(__int64**)(v11 + 96); v12 != i;
           result = GameRoutine_e3fad0(v14)) {
        v14 = *v12++;
      }
      v15 = *(_QWORD*)(v1 + 24);
      v16 = *(__int64**)(v15 + 88);
      for (j = *(__int64**)(v15 + 96); v16 != j;
           result = GameRoutine_e3fad0(v18)) {
        v18 = *v16++;
      }
      v19 = *(_QWORD*)(v1 + 32);
      v20 = *(__int64**)(v19 + 88);
      for (k = *(__int64**)(v19 + 96); v20 != k;
           result = GameRoutine_e3fad0(v22)) {
        v22 = *v20++;
      }
    }
  }
  return result;
}

__int64 CombatLegionManager_e2c300(__int64 result)
{
  float v1;
  float v2;
  int v3;
  __int64 v4;
  __int64 v5;

  if (*(_BYTE*)(result + 104) == 1) {
    v1 = *(float*)(result + 100);
    v2 = fabsf(
        (float)(*(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] +
                          160LL) *
                16.683f) /
        1000.0f);
    if (v1 <= 0.0f) {
      if (v1 >= 0.0f || (v1 = v1 + v2) <= 0.0f) {
      LABEL_8:
        *(float*)(result + 100) = v1;
        if (v1 != 0.0f) {
          return result;
        }
        goto LABEL_9;
      }
    }
    else {
      v1 = v1 - v2;
      if (v1 >= 0.0f) {
        goto LABEL_8;
      }
    }
    *(_DWORD*)(result + 100) = 0;
  LABEL_9:
    v3 = *(_DWORD*)(result + 80);
    *(_BYTE*)(result + 104) = 0;
    if (v3 != 3) {
      v4 = *(_QWORD*)(result + 16);
      v5 = result;
      *(_DWORD*)(result + 80) = 3;
      CombatLegionManager_e2cfa0_alt1(result, v4);
      CombatLegionManager_e2cfa0_alt1(v5, *(_QWORD*)(v5 + 24));
      return CombatLegionManager_e2cfa0_alt1(v5, *(_QWORD*)(v5 + 32));
    }
  }
  return result;
}

__int64 CombatLegionManager_e2c3e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* i;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* j;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* k;
  __int64 v16;

  if ((*(_BYTE*)(result + 108) & 1) == 0) {
    v1 = result;
    v2 = *(_QWORD*)(result + 16);
    if (*(_DWORD*)(v2 + 112) == 2) {
      GameRoutine_e2c540(v1);
      v2 = *(_QWORD*)(v1 + 16);
    }
    GameRoutine_e58720(v2);
    v3 = *(_QWORD*)(v1 + 24);
    if (*(_DWORD*)(v3 + 112) == 2) {
      GameRoutine_e2c540(v1);
      v3 = *(_QWORD*)(v1 + 24);
    }
    GameRoutine_e58720(v3);
    v4 = *(_QWORD*)(v1 + 32);
    if (*(_DWORD*)(v4 + 112) == 2) {
      GameRoutine_e2c540(v1);
      v4 = *(_QWORD*)(v1 + 32);
    }
    GameRoutine_e58720(v4);
    result = GameRoutine_e2ca80(v1);
    if (*(_DWORD*)(v1 + 80) != 1) {
      *(_DWORD*)(v1 + 80) = 1;
      if (*(_BYTE*)(v1 + 104) == 1) {
        *(_BYTE*)(v1 + 104) = 0;
      }
      CombatLegionManager_e2cfa0_alt1(v1, *(_QWORD*)(v1 + 16));
      CombatLegionManager_e2cfa0_alt1(v1, *(_QWORD*)(v1 + 24));
      result = CombatLegionManager_e2cfa0_alt1(v1, *(_QWORD*)(v1 + 32));
    }
    v5 = *(_QWORD*)(v1 + 16);
    v6 = *(__int64**)(v5 + 88);
    for (i = *(__int64**)(v5 + 96); v6 != i; result = GameRoutine_e3f5f0(v8)) {
      v8 = *v6++;
    }
    v9 = *(_QWORD*)(v1 + 24);
    v10 = *(__int64**)(v9 + 88);
    for (j = *(__int64**)(v9 + 96); v10 != j;
         result = GameRoutine_e3f5f0(v12)) {
      v12 = *v10++;
    }
    v13 = *(_QWORD*)(v1 + 32);
    v14 = *(__int64**)(v13 + 88);
    for (k = *(__int64**)(v13 + 96); v14 != k;
         result = GameRoutine_e3f5f0(v16)) {
      v16 = *v14++;
    }
    *(_BYTE*)(v1 + 108) = 1;
  }
  return result;
}

__int64 CombatLegionManager_e2cca0()
{
  __int64 v0;
  int v1;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;

  if (GameData_21ec7b0 != 0) {
    v0 = *(_QWORD*)(GameData_21ec7b0 + 120);
    if (v0 != 0) {
      v1 = GameData_21d92e0;
      if (*(_BYTE*)(v0 + 12) != 1 || *(_DWORD*)(v0 + 8) != GameData_21d92e0) {
        *(_DWORD*)(v0 + 8) = GameData_21d92e0;
        *(_BYTE*)(v0 + 12) = 1;
        if (v1 == 3) {
          result = CombatLegionManager_e2c3e0(v0);
        }
        if (*(_BYTE*)(v0 + 108) == 1) {
          if ((GameData_21d92e0 & 0xFFFFFFFE) != 2) {
            result = *(_QWORD*)(*(_QWORD*)(v0 + 40) + 112LL);
            if (result != 0) {
              result = GameRoutine_e5ccc0();
            }
          }
          v4 = *(_QWORD*)(v0 + 16);
          v5 = *(_QWORD*)(v4 + 88);
          v6 = *(_QWORD*)(v4 + 96);
          if (v5 != v6) {
            v7 = (GameData_21d92e0 & 0xFFFFFFFE) == 2;
            do {
              if (*(_BYTE*)(*(_QWORD*)v5 + 176LL) == 1) {
                v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v5 + 56LL) + 8LL);
                if (*(unsigned __int8*)(v8 + 288) != v7) {
                  *(_BYTE*)(v8 + 288) = v7;
                }
              }
              v5 += 8;
            } while (v5 != v6);
          }
          v9 = *(_QWORD*)(v0 + 24);
          v10 = *(_QWORD*)(v9 + 88);
          v11 = *(_QWORD*)(v9 + 96);
          if (v10 != v11) {
            v12 = (GameData_21d92e0 & 0xFFFFFFFE) == 2;
            do {
              if (*(_BYTE*)(*(_QWORD*)v10 + 176LL) == 1) {
                v13 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v10 + 56LL) + 8LL);
                if (*(unsigned __int8*)(v13 + 288) != v12) {
                  *(_BYTE*)(v13 + 288) = v12;
                }
              }
              v10 += 8;
            } while (v10 != v11);
          }
          v14 = *(_QWORD*)(v0 + 32);
          v15 = *(_QWORD*)(v14 + 88);
          v16 = *(_QWORD*)(v14 + 96);
          if (v15 != v16) {
            v17 = (GameData_21d92e0 & 0xFFFFFFFE) == 2;
            do {
              if (*(_BYTE*)(*(_QWORD*)v15 + 176LL) == 1) {
                v18 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v15 + 56LL) + 8LL);
                if (*(unsigned __int8*)(v18 + 288) != v17) {
                  *(_BYTE*)(v18 + 288) = v17;
                }
              }
              v15 += 8;
            } while (v15 != v16);
          }
        }
      }
    }
  }
  return result;
}

__int64 CombatLegionManager_e2ce80(__int64 result)
{
  _QWORD* v1;
  int v2;
  int v3;
  bool v4;
  __int64 v5;
  __int64* v6;
  __int64* i;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* j;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64* k;
  __int64 v16;

  v1 = (_QWORD*)result;
  v2 = *(_DWORD*)(*(_QWORD*)(*GameData_212d448[0] + 8) + 112LL);
  if ((v2 & 0x10000) != 0 && (*(_BYTE*)(result + 110) & 1) == 0) {
    *(_BYTE*)(result + 110) = 1;
  }
  v3 = *(_DWORD*)(*(_QWORD*)(result + 40) + 8LL);
  v4 = v3 == 6 || v3 == 0;
  if (v4 && *(_DWORD*)(result + 80) != 3) {
    *(_DWORD*)(result + 80) = 3;
    if (*(_BYTE*)(result + 104) == 1) {
      *(_BYTE*)(result + 104) = 0;
    }
    CombatLegionManager_e2cfa0_alt1(result, *(_QWORD*)(result + 16));
    CombatLegionManager_e2cfa0_alt1(v1, v1[3]);
    result = CombatLegionManager_e2cfa0_alt1(v1, v1[4]);
  }
  if ((v2 & 0x10000) != 0) {
    result = GameRoutine_e4bf40(v1[5]);
    v5 = v1[2];
    v6 = *(__int64**)(v5 + 88);
    for (i = *(__int64**)(v5 + 96); v6 != i; result = GameRoutine_e3f5f0(v8)) {
      v8 = *v6++;
    }
    v9 = v1[3];
    v10 = *(__int64**)(v9 + 88);
    for (j = *(__int64**)(v9 + 96); v10 != j;
         result = GameRoutine_e3f5f0(v12)) {
      v12 = *v10++;
    }
    v13 = v1[4];
    v14 = *(__int64**)(v13 + 88);
    for (k = *(__int64**)(v13 + 96); v14 != k;
         result = GameRoutine_e3f5f0(v16)) {
      v16 = *v14++;
    }
  }
  return result;
}

__int64 CombatLegionManager_e2cfa0(__int64 result, __int64 a2)
{
  int v2;
  int v3;
  unsigned int v4;
  __int64 v5;
  __int64* v6;
  int v7;
  int v8;
  __int64** v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  _BOOL4 v15;
  __int64* v16;
  __int64* i;
  __int64 v18;

  v3 = *(_DWORD*)(result + 80);
  if (v3 == 4) {
    v8 = 0;
    LODWORD(v6) = 0;
    goto LABEL_37;
  }
  if (v3 == 3) {
    if (*(_DWORD*)(a2 + 112) <= 1u) {
      v9 = (__int64**)GameData_212d448[0];
      v10 = *GameData_212d448[0];
      if (*GameData_212d448[0] != 0) {
        v11 = *(_QWORD*)(v10 + 8);
        v12 = a2;
        if ((*(_DWORD*)(v11 + 112) & 0x4040) == 0x40) {
          v8 = 5;
          goto LABEL_29;
        }
        v2 = *(unsigned __int8*)(v11 + 116) >> 7;
      }
      else {
        v12 = a2;
      }
      if (((v10 != 0) & (unsigned __int8)v2) != 0) {
        v8 = 5;
      }
      else {
        v8 = 3;
      }
    LABEL_29:
      result = GameRoutine_e2d1a0();
      if ((_DWORD)result == 2) {
        LODWORD(v6) = 0;
        v8 = 4;
        a2 = v12;
      }
      else {
        a2 = v12;
        if ((_DWORD)result == 1) {
          LODWORD(v6) = 0;
        }
        else {
          v6 = *v9;
          if (*v9 != nullptr) {
            if ((*(_DWORD*)(v6[1] + 112) & 0x4040) == 0x40) {
              return result;
            }
            LODWORD(v6) = 0;
          }
          v8 = 5;
        }
      }
      goto LABEL_37;
    }
    LODWORD(v6) = 0;
    v8 = 7;
  LABEL_37:
    if (*(_DWORD*)(a2 + 116) != v8 || *(_DWORD*)(a2 + 120) != (_DWORD)v6) {
      *(_DWORD*)(a2 + 116) = v8;
      *(_DWORD*)(a2 + 120) = (_DWORD)v6;
      v16 = *(__int64**)(a2 + 88);
      for (i = *(__int64**)(a2 + 96); v16 != i;
           result = GameRoutine_e404c0(v18)) {
        v18 = *v16++;
      }
    }
    return result;
  }
  if (v3 != 2) {
    return result;
  }
  v4 = *(_DWORD*)(a2 + 112);
  v5 = *(_QWORD*)(*GameData_212d448[0] + 8);
  v6 = *(__int64**)(v5 + 32);
  if (v6 == *(__int64**)(v5 + 40)) {
    v6 = &GameData_2235e30;
  }
  if (v4 > 1) {
    v7 = 0;
    v8 = 6;
  LABEL_23:
    LODWORD(v6) = (2 * (unsigned __int8)*(_DWORD*)v6) & 4 | v7 |
                  (8 * (*(_DWORD*)v6 & 1)) |
                  (2 * (unsigned __int8)*(_DWORD*)v6) & 0x10;
    goto LABEL_37;
  }
  v13 = *(_DWORD*)(v5 + 112);
  v14 = v13 & 0x3FFFF;
  v15 = (v13 & 8) != 0;
  if ((v14 & 0x20001) == 1) {
    v8 = 2;
  }
  else {
    v8 = v15;
  }
  if ((v14 & 0x20001) == 1) {
    LOBYTE(v15) = 1;
  }
  if (v4 == (((*((_DWORD*)v6 + 2) - 1) & 0xFFFFFFFD) == 0)) {
    v7 = 1;
  }
  else {
    v7 = 2;
  }
  if (v15) {
    goto LABEL_23;
  }
  return result;
}

_QWORD* game_combat_CombatLegionManager_SetAllSoundEnable(_QWORD* a1,
                                                          __int64 a2)
{
  __int64 v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* result;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  _QWORD v25[4];
  _QWORD* v26;
  _BYTE v27[4];
  __int64 v28;

  v2 = a1[2];
  v4 = v25;
  v27[0] = a2;
  v26 = v25;
  v25[0] = GameData_1fe3cd0;
  v25[1] = v27;
  v5 = *(_QWORD*)(v2 + 16);
  v6 = *(_QWORD*)(v2 + 24);
  if (v5 != v6) {
    do {
      v7 = *(__int64**)(*(_QWORD*)v5 + 24LL);
      v8 = *(__int64**)(*(_QWORD*)v5 + 32LL);
      while (v7 != v8) {
        if (*v7 != 0) {
          v9 = v26;
          v28 = *v7;
          if (v26 == nullptr) {
          LABEL_38:
            GameRoutine_60a310(v9, a2);
          }
          (*(void (**)(_QWORD*, __int64*))(*v26 + 48LL))(v26, &v28);
        }
        v7 += 2;
      }
      v5 += 16;
    } while (v5 != v6);
    v4 = v26;
    if (v26 != v25) {
      if (v26 != nullptr) {
        v10 = 40;
      LABEL_14:
        (*(void (**)(_QWORD*, __int64))(*v4 + v10))(v4, a2);
      }
      v11 = a1[3];
      v12 = v25;
      v26 = v25;
      v25[0] = GameData_1fe3cd0;
      v25[1] = v27;
      v13 = *(_QWORD*)(v11 + 16);
      v14 = *(_QWORD*)(v11 + 24);
      if (v13 != v14) {
        do {
          v15 = *(__int64**)(*(_QWORD*)v13 + 24LL);
          v16 = *(__int64**)(*(_QWORD*)v13 + 32LL);
          while (v15 != v16) {
            if (*v15 != 0) {
              v9 = v26;
              v28 = *v15;
              if (v26 == nullptr) {
                goto LABEL_38;
              }
              (*(void (**)(_QWORD*, __int64*))(*v26 + 48LL))(v26, &v28);
            }
            v15 += 2;
          }
          v13 += 16;
        } while (v13 != v14);
        v12 = v26;
        if (v26 != v25) {
          if (v26 != nullptr) {
            v17 = 40;
          LABEL_28:
            (*(void (**)(_QWORD*, __int64))(*v12 + v17))(v12, a2);
          }
          v18 = a1[4];
          result = v25;
          v26 = v25;
          v25[0] = GameData_1fe3cd0;
          v25[1] = v27;
          v20 = *(_QWORD*)(v18 + 16);
          v21 = *(_QWORD*)(v18 + 24);
          if (v20 == v21) {
            goto LABEL_42;
          }
          do {
            v22 = *(__int64**)(*(_QWORD*)v20 + 24LL);
            v23 = *(__int64**)(*(_QWORD*)v20 + 32LL);
            while (v22 != v23) {
              if (*v22 != 0) {
                v9 = v26;
                v28 = *v22;
                if (v26 == nullptr) {
                  goto LABEL_38;
                }
                (*(void (**)(_QWORD*, __int64*))(*v26 + 48LL))(v26, &v28);
              }
              v22 += 2;
            }
            v20 += 16;
          } while (v20 != v21);
          result = v26;
          if (v26 == v25) {
          LABEL_42:
            v24 = 32;
          }
          else {
            if (v26 == nullptr) {
              return result;
            }
            v24 = 40;
          }
          return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v24))(
              result, a2);
        }
      }
      v17 = 32;
      goto LABEL_28;
    }
  }
  v10 = 32;
  goto LABEL_14;
}

__int64 CombatLegionManager_e2e820(__int64 result, _QWORD* a2, __int64 a3,
                                   char a4)
{
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int128 v13;
  int v14;
  __int128 v15;
  __int128 v16;
  __int128 v17;
  float v18;
  __int64 v19;
  float v20;
  __int128 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  float* v26;
  float v27;
  float* v28;
  float* v29;
  float v30;
  unsigned __int64 v31;
  __int64 v32;
  __int128 v33;
  int v34;
  __int128 v35;
  __int128 v36;
  float v37;
  float v38;
  __int128 v39;
  __int128 v40;
  char v41;
  unsigned __int64 v42;
  float v43;
  float* v44;
  float* v45;
  float v46;
  __int128 v47;
  __int64 v48;
  __int64 v49;
  __int128 v50;
  int v51;
  __int128 v52;
  __int128 v53;
  float v54;
  float v55;
  __int128 v56;
  __int128 v57;
  float v58;
  __int64 v59;
  __int128 v60;
  __int128 v61;
  __int128 v62;
  float v63;
  __int64 v64;
  __int128 v65;
  __int128 v66;
  __int128 v67;
  float v68;
  float v69;
  __int128 v70;
  __int128 v71;
  float v72;
  __int64 v73;
  __int64 v74;
  __int128 v75;
  __int128 v76;
  __int128 v77;
  __int128 v78;
  __int64 v79;
  __int128 v80;
  __int128 v81;
  _QWORD* v82;
  bool v84;
  __int64 v85;
  float* v86;
  __int64 v87;
  __int128 v88;
  float v89;
  _QWORD* v90;
  __int128 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  int v95;
  int v96;
  __int128 v97;
  unsigned __int64 v98;
  unsigned __int64 v99;
  __int128 v100;
  bool v101;
  __int64 v102;
  unsigned __int64 v103;
  unsigned __int64 v104;
  float v105;
  __int128 v106;
  __int64 v107;
  unsigned __int64 v108;
  __int128 v109;
  __int64 v110;
  signed __int64 v111;
  __int128 v112;
  __int128 v113;
  float v114;
  __int64 v115;
  signed __int64 v116;
  unsigned __int64 v117;
  __int128 v118;
  unsigned __int64 v119;
  unsigned __int64 v120;
  __int64 v121;
  __int128 v122;
  __int128 v123;
  __int64 v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  __int64 v127;
  unsigned __int64 v128;
  __int128 v129;
  float* v130;
  float v131;
  _QWORD* v132;
  __int128 v133;
  __int64 v134;
  float* v135;
  int v136;
  int v137;
  float* v138;
  __int128 v139;
  int v140;
  __int128 v141;

  v7 = result;
LABEL_2:
  v8 = v7;
  while (1) {
    v9 = (__int64)a2 - v8;
    v7 = v8;
    v10 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)a2 - v8) >> 4);
    if (v10 > 2) {
      switch (v10) {
      case 3LL:
        return CombatLegionManager_e2f380_alt1(v8, v8 + 48, a2 - 6);
      case 4LL:
        result = CombatLegionManager_e2f380_alt1(v8, v8 + 48, v8 + 96);
        v63 = *(float*)(v8 + 128);
        if (*((float*)a2 - 4) < v63) {
          v64 = *(_QWORD*)(v8 + 96);
          v65 = *(_OWORD*)(v8 + 112);
          *(_QWORD*)(v8 + 96) = *(a2 - 6);
          *(_DWORD*)(v8 + 112) = *((_DWORD*)a2 - 8);
          *(_DWORD*)(v8 + 116) = *((_DWORD*)a2 - 7);
          v66 = *(_OWORD*)(v8 + 112);
          *((_QWORD*)&v66 + 1) = *((unsigned int*)a2 - 6);
          *(_OWORD*)(v8 + 112) = v66;
          *(_DWORD*)(v8 + 128) = *((_DWORD*)a2 - 4);
          *(a2 - 4) = v65;
          *(a2 - 6) = v64;
          *((float*)a2 - 4) = v63;
          v67 = *((_OWORD*)a2 - 2);
          *((_QWORD*)&v67 + 1) = DWORD2(v65);
          *((_OWORD*)a2 - 2) = v67;
          v68 = *(float*)(v8 + 128);
          v69 = *(float*)(v8 + 80);
          if (v68 < v69) {
            v70 = *(_OWORD*)(v8 + 112);
            v71 = *(_OWORD*)(v8 + 64);
            *(float*)(v8 + 128) = v69;
            v72 = *(float*)(v8 + 32);
            *(_QWORD*)(v8 + 64) = v70;
            *(_QWORD*)(v8 + 112) = v71;
            v73 = *(_QWORD*)(v8 + 48);
            v74 = *(_QWORD*)(v8 + 96);
            *(_QWORD*)(v8 + 48) = v74;
            *(float*)(v8 + 80) = v68;
            *(_QWORD*)(v8 + 96) = v73;
            v75 = *(_OWORD*)(v8 + 64);
            *(_QWORD*)&v76 = *(_QWORD*)(v8 + 64);
            *((_QWORD*)&v76 + 1) = DWORD2(v70);
            *(_OWORD*)(v8 + 64) = v76;
            v77 = *(_OWORD*)(v8 + 112);
            *((_QWORD*)&v77 + 1) = DWORD2(v71);
            *(_OWORD*)(v8 + 112) = v77;
            if (v68 < v72) {
              v78 = *(_OWORD*)(v8 + 16);
              *(_QWORD*)(v8 + 16) = v75;
              *(float*)(v8 + 32) = v68;
              v79 = *(_QWORD*)v8;
              *(_QWORD*)v8 = v74;
              *(float*)(v8 + 80) = v72;
              v80 = *(_OWORD*)(v8 + 16);
              *((_QWORD*)&v80 + 1) = DWORD2(v70);
              *(_QWORD*)(v8 + 64) = v78;
              v81 = *(_OWORD*)(v8 + 64);
              *(_QWORD*)(v8 + 48) = v79;
              *((_QWORD*)&v81 + 1) = DWORD2(v78);
              *(_OWORD*)(v8 + 16) = v80;
              *(_OWORD*)(v8 + 64) = v81;
            }
          }
        }
        return result;
      case 5LL:
        return CombatLegionManager_e2f570_alt1(v8, v8 + 48, v8 + 96, v8 + 144,
                                               a2 - 6);
      default:
        break;
      }
    }
    else {
      if ((unsigned __int64)v10 < 2) {
        return result;
      }
      if (v10 == 2) {
        v58 = *(float*)(v8 + 32);
        if (*((float*)a2 - 4) < v58) {
          v59 = *(_QWORD*)v8;
          v60 = *(_OWORD*)(v8 + 16);
          *(_QWORD*)v8 = *(a2 - 6);
          *(_DWORD*)(v8 + 16) = *((_DWORD*)a2 - 8);
          *(_DWORD*)(v8 + 20) = *((_DWORD*)a2 - 7);
          v61 = *(_OWORD*)(v8 + 16);
          *((_QWORD*)&v61 + 1) = *((unsigned int*)a2 - 6);
          *(_OWORD*)(v8 + 16) = v61;
          *(_DWORD*)(v8 + 32) = *((_DWORD*)a2 - 4);
          *(a2 - 4) = v60;
          *(a2 - 6) = v59;
          *((float*)a2 - 4) = v58;
          v62 = *((_OWORD*)a2 - 2);
          *((_QWORD*)&v62 + 1) = DWORD2(v60);
          *((_OWORD*)a2 - 2) = v62;
        }
        return result;
      }
    }
    if (v9 <= 1151) {
      break;
    }
    if (a3 == 0) {
      if ((_QWORD*)v8 == a2) {
        return result;
      }
      v98 = (unsigned __int64)(v10 - 2) >> 1;
      v99 = v98;
      do {
        if (v98 >= v99) {
          v102 = (2 * (v99 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
          v103 = v8 + 48 * v102;
          if ((__int64)(2 * v99 + 2) < v10 &&
              *(float*)(v103 + 32) < *(float*)(v103 + 80)) {
            v103 += 48LL;
            v102 = 2 * v99 + 2;
          }
          v104 = v8 + 48 * v99;
          v105 = *(float*)(v104 + 32);
          if (*(float*)(v103 + 32) >= v105) {
            v106 = *(_OWORD*)(v104 + 16);
            v107 = *(_QWORD*)v104;
            do {
              v108 = v104;
              v104 = v103;
              *(_QWORD*)v108 = *(_QWORD*)v103;
              *(_DWORD*)(v108 + 16) = *(_DWORD*)(v103 + 16);
              *(_DWORD*)(v108 + 20) = *(_DWORD*)(v103 + 20);
              v109 = *(_OWORD*)(v108 + 16);
              *((_QWORD*)&v109 + 1) = *(unsigned int*)(v103 + 24);
              *(_OWORD*)(v108 + 16) = v109;
              *(_DWORD*)(v108 + 32) = *(_DWORD*)(v103 + 32);
              if ((__int64)v98 < v102) {
                break;
              }
              v110 = 2 * v102 + 2;
              v102 = (2 * (v102 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
              v103 = v8 + 48 * v102;
              if (v110 < v10 && *(float*)(v103 + 32) < *(float*)(v103 + 80)) {
                v103 += 48LL;
                v102 = v110;
              }
            } while (*(float*)(v103 + 32) >= v105);
            *(_QWORD*)(v104 + 16) = v106;
            *(_QWORD*)v104 = v107;
            v100 = *(_OWORD*)(v104 + 16);
            *(float*)(v104 + 32) = v105;
            *((_QWORD*)&v100 + 1) = DWORD2(v106);
            *(_OWORD*)(v104 + 16) = v100;
          }
        }
        v101 = (__int64)v99-- <= 0;
      } while (!v101);
      v111 = 0xAAAAAAAAAAAAAAABLL * ((unsigned __int64)v9 >> 4);
      while (1) {
        v113 = *(_OWORD*)(v8 + 16);
        v114 = *(float*)(v8 + 32);
        v115 = *(_QWORD*)v8;
        v116 = 0;
        v117 = v8;
        do {
          v119 = v117 + 48 * v116;
          v120 = v117;
          result = (2 * v116) | 1;
          v121 = 2 * v116 + 2;
          v117 = v119 + 48;
          v116 = result;
          if (v121 < v111 && *(float*)(v119 + 80) < *(float*)(v119 + 128)) {
            v117 = v119 + 96;
            v116 = v121;
          }
          *(_QWORD*)v120 = *(_QWORD*)v117;
          *(_DWORD*)(v120 + 16) = *(_DWORD*)(v117 + 16);
          *(_DWORD*)(v120 + 20) = *(_DWORD*)(v117 + 20);
          v118 = *(_OWORD*)(v120 + 16);
          *((_QWORD*)&v118 + 1) = *(unsigned int*)(v117 + 24);
          *(_OWORD*)(v120 + 16) = v118;
          *(_DWORD*)(v120 + 32) = *(_DWORD*)(v117 + 32);
        } while (v116 <= (__int64)((unsigned __int64)(v111 - 2) >> 1));
        if ((_QWORD*)v117 == a2 - 6) {
          *(_QWORD*)v117 = v115;
        }
        else {
          *(_QWORD*)v117 = *(a2 - 6);
          *(_DWORD*)(v117 + 16) = *((_DWORD*)a2 - 8);
          *(_DWORD*)(v117 + 20) = *((_DWORD*)a2 - 7);
          v122 = *(_OWORD*)(v117 + 16);
          *((_QWORD*)&v122 + 1) = *((unsigned int*)a2 - 6);
          *(_OWORD*)(v117 + 16) = v122;
          *(_DWORD*)(v117 + 32) = *((_DWORD*)a2 - 4);
          *(a2 - 4) = v113;
          *(a2 - 6) = v115;
          *((float*)a2 - 4) = v114;
          v123 = *((_OWORD*)a2 - 2);
          v124 = v117 - v8 + 48;
          *((_QWORD*)&v123 + 1) = DWORD2(v113);
          *((_OWORD*)a2 - 2) = v123;
          if (v124 < 49) {
            goto LABEL_103;
          }
          v114 = *(float*)(v117 + 32);
          v125 =
              (-2LL - 0x5555555555555555LL * ((unsigned __int64)v124 >> 4)) >>
              1;
          v126 = v8 + 48 * v125;
          if (*(float*)(v126 + 32) >= v114) {
            goto LABEL_103;
          }
          v113 = *(_OWORD*)(v117 + 16);
          v127 = *(_QWORD*)v117;
          do {
            v128 = v117;
            v117 = v126;
            *(_QWORD*)v128 = *(_QWORD*)v126;
            *(_DWORD*)(v128 + 16) = *(_DWORD*)(v126 + 16);
            *(_DWORD*)(v128 + 20) = *(_DWORD*)(v126 + 20);
            v129 = *(_OWORD*)(v128 + 16);
            *((_QWORD*)&v129 + 1) = *(unsigned int*)(v126 + 24);
            *(_OWORD*)(v128 + 16) = v129;
            *(_DWORD*)(v128 + 32) = *(_DWORD*)(v126 + 32);
            if (v125 == 0) {
              break;
            }
            v125 = (v125 - 1) >> 1;
            v126 = v8 + 48 * v125;
          } while (*(float*)(v126 + 32) < v114);
          *(_QWORD*)v117 = v127;
        }
        *(_QWORD*)(v117 + 16) = v113;
        *(float*)(v117 + 32) = v114;
        v112 = *(_OWORD*)(v117 + 16);
        *((_QWORD*)&v112 + 1) = DWORD2(v113);
        *(_OWORD*)(v117 + 16) = v112;
      LABEL_103:
        a2 -= 6;
        v101 = v111-- <= 2;
        if (v101) {
          return result;
        }
      }
    }
    v11 = v8 + 48 * ((unsigned __int64)v10 >> 1);
    if ((unsigned __int64)v9 < 0x1801) {
      result = CombatLegionManager_e2f380_alt1(v11, v7, a2 - 6);
      --a3;
      if ((a4 & 1) != 0) {
      LABEL_20:
        v18 = *(float*)(v7 + 32);
        goto LABEL_21;
      }
    }
    else {
      CombatLegionManager_e2f380_alt1(v7, v11, a2 - 6);
      CombatLegionManager_e2f380_alt1(v7 + 48, v11 - 48, a2 - 12);
      CombatLegionManager_e2f380_alt1(v7 + 96, v11 + 48, a2 - 18);
      result = CombatLegionManager_e2f380_alt1(v11 - 48, v11, v11 + 48);
      v12 = *(_QWORD*)v7;
      v13 = *(_OWORD*)(v7 + 16);
      v14 = *(_DWORD*)(v7 + 32);
      *(_QWORD*)v7 = *(_QWORD*)v11;
      v15 = *(_OWORD*)(v11 + 16);
      *(_QWORD*)(v7 + 16) = v15;
      v16 = *(_OWORD*)(v7 + 16);
      *((_QWORD*)&v16 + 1) = DWORD2(v15);
      *(_OWORD*)(v7 + 16) = v16;
      *(_DWORD*)(v11 + 20) = DWORD1(v13);
      *(_DWORD*)(v7 + 32) = *(_DWORD*)(v11 + 32);
      *(_DWORD*)(v11 + 16) = v13;
      *(_QWORD*)v11 = v12;
      *(_DWORD*)(v11 + 32) = v14;
      v17 = *(_OWORD*)(v11 + 16);
      *((_QWORD*)&v17 + 1) = DWORD2(v13);
      *(_OWORD*)(v11 + 16) = v17;
      --a3;
      if ((a4 & 1) != 0) {
        goto LABEL_20;
      }
    }
    v18 = *(float*)(v7 + 32);
    if (*(float*)(v7 - 16) < v18) {
    LABEL_21:
      v21 = *(_OWORD*)(v7 + 16);
      v22 = *(_QWORD*)v7;
      v23 = 0;
      do {
        v24 = v7 + v23;
        v23 += 48;
      } while (*(float*)(v24 + 80) < v18);
      v25 = v7 + v23;
      v26 = (float*)a2;
      if (v23 == 48) {
        v29 = (float*)a2;
        while (v25 < (unsigned __int64)v29) {
          v30 = *(v29 - 4);
          v28 = v29 - 12;
          v29 -= 12;
          if (v30 < v18) {
            goto LABEL_31;
          }
        }
        v28 = v29;
      }
      else {
        do {
          v27 = *(v26 - 4);
          v28 = v26 - 12;
          v26 -= 12;
        } while (v27 >= v18);
      }
    LABEL_31:
      v8 = v25;
      if (v25 < (unsigned __int64)v28) {
        v31 = (unsigned __int64)v28;
        do {
          v32 = *(_QWORD*)v8;
          v33 = *(_OWORD*)(v8 + 16);
          v34 = *(_DWORD*)(v8 + 32);
          *(_QWORD*)v8 = *(_QWORD*)v31;
          *(_DWORD*)(v8 + 16) = *(_DWORD*)(v31 + 16);
          *(_DWORD*)(v8 + 20) = *(_DWORD*)(v31 + 20);
          v35 = *(_OWORD*)(v8 + 16);
          *((_QWORD*)&v35 + 1) = *(unsigned int*)(v31 + 24);
          *(_OWORD*)(v8 + 16) = v35;
          *(_DWORD*)(v8 + 32) = *(_DWORD*)(v31 + 32);
          *(_QWORD*)(v31 + 16) = v33;
          *(_QWORD*)v31 = v32;
          *(_DWORD*)(v31 + 32) = v34;
          v36 = *(_OWORD*)(v31 + 16);
          *((_QWORD*)&v36 + 1) = DWORD2(v33);
          *(_OWORD*)(v31 + 16) = v36;
          do {
            v37 = *(float*)(v8 + 80);
            v8 += 48LL;
          } while (v37 < v18);
          do {
            v38 = *(float*)(v31 - 16);
            v31 -= 48LL;
          } while (v38 >= v18);
        } while (v8 < v31);
      }
      if (v7 != v8 - 48) {
        *(_QWORD*)v7 = *(_QWORD*)(v8 - 48);
        *(_DWORD*)(v7 + 16) = *(_DWORD*)(v8 - 32);
        *(_DWORD*)(v7 + 20) = *(_DWORD*)(v8 - 28);
        v39 = *(_OWORD*)(v7 + 16);
        *((_QWORD*)&v39 + 1) = *(unsigned int*)(v8 - 24);
        *(_OWORD*)(v7 + 16) = v39;
        *(_DWORD*)(v7 + 32) = *(_DWORD*)(v8 - 16);
      }
      *(_QWORD*)(v8 - 32) = v21;
      *(_QWORD*)(v8 - 48) = v22;
      v40 = *(_OWORD*)(v8 - 32);
      *(float*)(v8 - 16) = v18;
      *((_QWORD*)&v40 + 1) = DWORD2(v21);
      *(_OWORD*)(v8 - 32) = v40;
      if (v25 < (unsigned __int64)v28) {
      LABEL_42:
        result = CombatLegionManager_e2e820(v7, v8 - 48, a3, a4 & 1);
        a4 = 0;
      }
      else {
        v41 = CombatLegionManager_e2f8a0_alt1(v7, v8 - 48);
        result = CombatLegionManager_e2f8a0_alt1(v8, a2);
        if ((result & 1) != 0) {
          a2 = (_QWORD*)(v8 - 48);
          if ((v41 & 1) != 0) {
            return result;
          }
          goto LABEL_2;
        }
        if ((v41 & 1) == 0) {
          goto LABEL_42;
        }
      }
    }
    else {
      if (v18 >= *((float*)a2 - 4)) {
        v42 = v7 + 48;
        do {
          v8 = v42;
          if (v42 >= (unsigned __int64)a2) {
            break;
          }
          v43 = *(float*)(v42 + 32);
          v42 += 48LL;
        } while (v18 >= v43);
      }
      else {
        v19 = v7;
        do {
          v20 = *(float*)(v19 + 80);
          v8 = v19 + 48;
          v19 += 48;
        } while (v18 >= v20);
      }
      v44 = (float*)a2;
      if (v8 < (unsigned __int64)a2) {
        v45 = (float*)a2;
        do {
          v46 = *(v45 - 4);
          v44 = v45 - 12;
          v45 -= 12;
        } while (v18 < v46);
      }
      v47 = *(_OWORD*)(v7 + 16);
      v48 = *(_QWORD*)v7;
      while (v8 < (unsigned __int64)v44) {
        v49 = *(_QWORD*)v8;
        v50 = *(_OWORD*)(v8 + 16);
        v51 = *(_DWORD*)(v8 + 32);
        *(_QWORD*)v8 = *(_QWORD*)v44;
        *(float*)(v8 + 16) = v44[4];
        *(float*)(v8 + 20) = v44[5];
        v52 = *(_OWORD*)(v8 + 16);
        *((_QWORD*)&v52 + 1) = *((unsigned int*)v44 + 6);
        *(_OWORD*)(v8 + 16) = v52;
        *(float*)(v8 + 32) = v44[8];
        *((_QWORD*)v44 + 2) = v50;
        *(_QWORD*)v44 = v49;
        *((_DWORD*)v44 + 8) = v51;
        v53 = *((_OWORD*)v44 + 1);
        *((_QWORD*)&v53 + 1) = DWORD2(v50);
        *((_OWORD*)v44 + 1) = v53;
        do {
          v54 = *(float*)(v8 + 80);
          v8 += 48LL;
        } while (v18 >= v54);
        do {
          v55 = *(v44 - 4);
          v44 -= 12;
        } while (v18 < v55);
      }
      if (v7 != v8 - 48) {
        *(_QWORD*)v7 = *(_QWORD*)(v8 - 48);
        *(_DWORD*)(v7 + 16) = *(_DWORD*)(v8 - 32);
        *(_DWORD*)(v7 + 20) = *(_DWORD*)(v8 - 28);
        v56 = *(_OWORD*)(v7 + 16);
        *((_QWORD*)&v56 + 1) = *(unsigned int*)(v8 - 24);
        *(_OWORD*)(v7 + 16) = v56;
        *(_DWORD*)(v7 + 32) = *(_DWORD*)(v8 - 16);
      }
      *(_QWORD*)(v8 - 32) = v47;
      a4 = 0;
      *(_QWORD*)(v8 - 48) = v48;
      v57 = *(_OWORD*)(v8 - 32);
      *(float*)(v8 - 16) = v18;
      *((_QWORD*)&v57 + 1) = DWORD2(v47);
      *(_OWORD*)(v8 - 32) = v57;
    }
  }
  v82 = (_QWORD*)(v8 + 48);
  v84 = (_QWORD*)v8 == a2 || v82 == a2;
  if ((a4 & 1) != 0) {
    if (!v84) {
      v85 = 0;
      v86 = (float*)v8;
      do {
        v89 = v86[20];
        v90 = v82;
        if (v89 < v86[8]) {
          v91 = *((_OWORD*)v86 + 4);
          v92 = *v82;
          v93 = v85;
          do {
            v94 = v8 + v93;
            v95 = *(_DWORD*)(v8 + v93 + 16);
            v96 = *(_DWORD*)(v8 + v93 + 20);
            *(_QWORD*)(v94 + 48) = *(_QWORD*)(v8 + v93);
            *(_DWORD*)(v94 + 64) = v95;
            *(_DWORD*)(v94 + 68) = v96;
            v97 = *(_OWORD*)(v8 + v93 + 64);
            *((_QWORD*)&v97 + 1) = *(unsigned int*)(v8 + v93 + 24);
            *(_OWORD*)(v94 + 64) = v97;
            *(_DWORD*)(v94 + 80) = *(_DWORD*)(v8 + v93 + 32);
            if (v93 == 0) {
              v87 = v8;
              goto LABEL_78;
            }
            v93 -= 48;
          } while (v89 < *(float*)(v94 - 16));
          v87 = v8 + v93 + 48;
        LABEL_78:
          *(_QWORD*)(v87 + 16) = v91;
          *(_QWORD*)v87 = v92;
          v88 = *(_OWORD*)(v87 + 16);
          *(float*)(v87 + 32) = v89;
          *((_QWORD*)&v88 + 1) = DWORD2(v91);
          *(_OWORD*)(v87 + 16) = v88;
        }
        v82 = v90 + 6;
        v85 += 48;
        v86 = (float*)v90;
      } while (v90 + 6 != a2);
    }
  }
  else if (!v84) {
    v130 = (float*)(v8 + 80);
    do {
      v131 = *(float*)(v7 + 80);
      v132 = v82;
      if (v131 < *(float*)(v7 + 32)) {
        v133 = *(_OWORD*)(v7 + 64);
        v134 = *v82;
        v135 = v130;
        do {
          v136 = *((_DWORD*)v135 - 16);
          v137 = *((_DWORD*)v135 - 15);
          v138 = v135;
          *((_QWORD*)v135 - 4) = *((_QWORD*)v135 - 10);
          *((_DWORD*)v135 - 4) = v136;
          *((_DWORD*)v135 - 3) = v137;
          v139 = *((_OWORD*)v135 - 1);
          *((_QWORD*)&v139 + 1) = *((unsigned int*)v135 - 14);
          *((_OWORD*)v135 - 1) = v139;
          v140 = *((_DWORD*)v135 - 12);
          v135 -= 12;
          *(_DWORD*)v138 = v140;
        } while (v131 < *(v138 - 24));
        *((_QWORD*)v135 - 2) = v133;
        *((_QWORD*)v135 - 4) = v134;
        v141 = *((_OWORD*)v135 - 1);
        *v135 = v131;
        *((_QWORD*)&v141 + 1) = DWORD2(v133);
        *((_OWORD*)v135 - 1) = v141;
      }
      v82 = v132 + 6;
      v130 += 12;
      v7 = (__int64)v132;
    } while (v132 + 6 != a2);
  }
  return result;
}

float* CombatLegionManager_e2f380(float* result, float* a2, float* a3)
{
  float v3;
  float v4;
  float v5;
  __int128 v6;
  __int64 v7;
  int v8;
  __int128 v9;
  __int64 v10;
  __int128 v11;
  __int128 v12;
  __int128 v13;
  float v14;
  __int64 v15;
  __int128 v16;
  __int128 v17;
  __int128 v18;
  __int128 v19;
  __int128 v20;
  __int128 v21;
  __int128 v22;
  __int128 v23;

  v3 = a2[8];
  v4 = result[8];
  v5 = a3[8];
  if (v3 >= v4) {
    if (v5 < v3) {
      v10 = *(_QWORD*)a2;
      v11 = *((_OWORD*)a2 + 1);
      *(_QWORD*)a2 = *(_QWORD*)a3;
      a2[4] = a3[4];
      a2[5] = a3[5];
      v12 = *((_OWORD*)a2 + 1);
      *((_QWORD*)&v12 + 1) = *((unsigned int*)a3 + 6);
      *((_OWORD*)a2 + 1) = v12;
      a2[8] = a3[8];
      *((_QWORD*)a3 + 2) = v11;
      *(_QWORD*)a3 = v10;
      a3[8] = v3;
      v13 = *((_OWORD*)a3 + 1);
      *((_QWORD*)&v13 + 1) = DWORD2(v11);
      *((_OWORD*)a3 + 1) = v13;
      v14 = result[8];
      if (a2[8] < v14) {
        v15 = *(_QWORD*)result;
        v16 = *((_OWORD*)result + 1);
        *(_QWORD*)result = *(_QWORD*)a2;
        result[4] = a2[4];
        result[5] = a2[5];
        v17 = *((_OWORD*)result + 1);
        *((_QWORD*)&v17 + 1) = *((unsigned int*)a2 + 6);
        *((_OWORD*)result + 1) = v17;
        result[8] = a2[8];
        *((_QWORD*)a2 + 2) = v16;
        *(_QWORD*)a2 = v15;
        a2[8] = v14;
        v18 = *((_OWORD*)a2 + 1);
        *((_QWORD*)&v18 + 1) = DWORD2(v16);
        *((_OWORD*)a2 + 1) = v18;
      }
    }
  }
  else {
    v6 = *((_OWORD*)result + 1);
    v7 = *(_QWORD*)result;
    v8 = HIDWORD(*((_QWORD*)result + 2));
    if (v5 >= v3) {
      *(_QWORD*)result = *(_QWORD*)a2;
      result[4] = a2[4];
      result[5] = a2[5];
      v19 = *((_OWORD*)result + 1);
      *((_QWORD*)&v19 + 1) = *((unsigned int*)a2 + 6);
      *((_OWORD*)result + 1) = v19;
      result[8] = a2[8];
      *((_DWORD*)a2 + 4) = v6;
      *((_DWORD*)a2 + 5) = v8;
      *(_QWORD*)a2 = v7;
      a2[8] = v4;
      v20 = *((_OWORD*)a2 + 1);
      *(_QWORD*)&v21 = *((_QWORD*)a2 + 2);
      *((_QWORD*)&v21 + 1) = DWORD2(v6);
      *((_OWORD*)a2 + 1) = v21;
      if (a3[8] >= v4) {
        return result;
      }
      *(_QWORD*)a2 = *(_QWORD*)a3;
      a2[4] = a3[4];
      a2[5] = a3[5];
      v22 = *((_OWORD*)a2 + 1);
      *((_QWORD*)&v22 + 1) = *((unsigned int*)a3 + 6);
      *((_OWORD*)a2 + 1) = v22;
      a2[8] = a3[8];
      *(_QWORD*)a3 = v7;
      *((_QWORD*)a3 + 2) = v20;
    }
    else {
      *(_QWORD*)result = *(_QWORD*)a3;
      result[4] = a3[4];
      result[5] = a3[5];
      v9 = *((_OWORD*)result + 1);
      *((_QWORD*)&v9 + 1) = *((unsigned int*)a3 + 6);
      *((_OWORD*)result + 1) = v9;
      result[8] = a3[8];
      *(_QWORD*)a3 = v7;
      *((_DWORD*)a3 + 4) = v6;
      *((_DWORD*)a3 + 5) = v8;
    }
    v23 = *((_OWORD*)a3 + 1);
    a3[8] = v4;
    *((_QWORD*)&v23 + 1) = DWORD2(v6);
    *((_OWORD*)a3 + 1) = v23;
  }
  return result;
}

float* CombatLegionManager_e2f570(float* a1, float* a2, float* a3, float* a4,
                                  float* a5)
{
  float* result;
  float v11;
  __int64 v12;
  __int128 v13;
  __int128 v14;
  __int128 v15;
  float v16;
  __int64 v17;
  __int128 v18;
  __int128 v19;
  __int128 v20;
  float v21;
  __int64 v22;
  __int128 v23;
  __int128 v24;
  __int128 v25;
  float v26;
  __int64 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  float v31;
  __int64 v32;
  __int128 v33;
  __int128 v34;
  __int128 v35;
  float v36;
  __int64 v37;
  __int128 v38;
  __int128 v39;
  __int128 v40;
  float v41;
  __int64 v42;
  __int128 v43;
  __int128 v44;
  __int128 v45;

  result = CombatLegionManager_e2f380(a1, a2, a3);
  v11 = a3[8];
  if (a4[8] < v11) {
    v12 = *(_QWORD*)a3;
    v13 = *((_OWORD*)a3 + 1);
    *(_QWORD*)a3 = *(_QWORD*)a4;
    a3[4] = a4[4];
    a3[5] = a4[5];
    v14 = *((_OWORD*)a3 + 1);
    *((_QWORD*)&v14 + 1) = *((unsigned int*)a4 + 6);
    *((_OWORD*)a3 + 1) = v14;
    a3[8] = a4[8];
    *((_QWORD*)a4 + 2) = v13;
    *(_QWORD*)a4 = v12;
    a4[8] = v11;
    v15 = *((_OWORD*)a4 + 1);
    *((_QWORD*)&v15 + 1) = DWORD2(v13);
    *((_OWORD*)a4 + 1) = v15;
    v16 = a2[8];
    if (a3[8] < v16) {
      v17 = *(_QWORD*)a2;
      v18 = *((_OWORD*)a2 + 1);
      *(_QWORD*)a2 = *(_QWORD*)a3;
      a2[4] = a3[4];
      a2[5] = a3[5];
      v19 = *((_OWORD*)a2 + 1);
      *((_QWORD*)&v19 + 1) = *((unsigned int*)a3 + 6);
      *((_OWORD*)a2 + 1) = v19;
      a2[8] = a3[8];
      *((_QWORD*)a3 + 2) = v18;
      *(_QWORD*)a3 = v17;
      a3[8] = v16;
      v20 = *((_OWORD*)a3 + 1);
      *((_QWORD*)&v20 + 1) = DWORD2(v18);
      *((_OWORD*)a3 + 1) = v20;
      v21 = a1[8];
      if (a2[8] < v21) {
        v22 = *(_QWORD*)a1;
        v23 = *((_OWORD*)a1 + 1);
        *(_QWORD*)a1 = *(_QWORD*)a2;
        a1[4] = a2[4];
        a1[5] = a2[5];
        v24 = *((_OWORD*)a1 + 1);
        *((_QWORD*)&v24 + 1) = *((unsigned int*)a2 + 6);
        *((_OWORD*)a1 + 1) = v24;
        a1[8] = a2[8];
        *((_QWORD*)a2 + 2) = v23;
        *(_QWORD*)a2 = v22;
        a2[8] = v21;
        v25 = *((_OWORD*)a2 + 1);
        *((_QWORD*)&v25 + 1) = DWORD2(v23);
        *((_OWORD*)a2 + 1) = v25;
      }
    }
  }
  v26 = a4[8];
  if (a5[8] < v26) {
    v27 = *(_QWORD*)a4;
    v28 = *((_OWORD*)a4 + 1);
    *(_QWORD*)a4 = *(_QWORD*)a5;
    a4[4] = a5[4];
    a4[5] = a5[5];
    v29 = *((_OWORD*)a4 + 1);
    *((_QWORD*)&v29 + 1) = *((unsigned int*)a5 + 6);
    *((_OWORD*)a4 + 1) = v29;
    a4[8] = a5[8];
    *((_QWORD*)a5 + 2) = v28;
    *(_QWORD*)a5 = v27;
    a5[8] = v26;
    v30 = *((_OWORD*)a5 + 1);
    *((_QWORD*)&v30 + 1) = DWORD2(v28);
    *((_OWORD*)a5 + 1) = v30;
    v31 = a3[8];
    if (a4[8] < v31) {
      v32 = *(_QWORD*)a3;
      v33 = *((_OWORD*)a3 + 1);
      *(_QWORD*)a3 = *(_QWORD*)a4;
      a3[4] = a4[4];
      a3[5] = a4[5];
      v34 = *((_OWORD*)a3 + 1);
      *((_QWORD*)&v34 + 1) = *((unsigned int*)a4 + 6);
      *((_OWORD*)a3 + 1) = v34;
      a3[8] = a4[8];
      *((_QWORD*)a4 + 2) = v33;
      *(_QWORD*)a4 = v32;
      a4[8] = v31;
      v35 = *((_OWORD*)a4 + 1);
      *((_QWORD*)&v35 + 1) = DWORD2(v33);
      *((_OWORD*)a4 + 1) = v35;
      v36 = a2[8];
      if (a3[8] < v36) {
        v37 = *(_QWORD*)a2;
        v38 = *((_OWORD*)a2 + 1);
        *(_QWORD*)a2 = *(_QWORD*)a3;
        a2[4] = a3[4];
        a2[5] = a3[5];
        v39 = *((_OWORD*)a2 + 1);
        *((_QWORD*)&v39 + 1) = *((unsigned int*)a3 + 6);
        *((_OWORD*)a2 + 1) = v39;
        a2[8] = a3[8];
        *((_QWORD*)a3 + 2) = v38;
        *(_QWORD*)a3 = v37;
        a3[8] = v36;
        v40 = *((_OWORD*)a3 + 1);
        *((_QWORD*)&v40 + 1) = DWORD2(v38);
        *((_OWORD*)a3 + 1) = v40;
        v41 = a1[8];
        if (a2[8] < v41) {
          v42 = *(_QWORD*)a1;
          v43 = *((_OWORD*)a1 + 1);
          *(_QWORD*)a1 = *(_QWORD*)a2;
          a1[4] = a2[4];
          a1[5] = a2[5];
          v44 = *((_OWORD*)a1 + 1);
          *((_QWORD*)&v44 + 1) = *((unsigned int*)a2 + 6);
          *((_OWORD*)a1 + 1) = v44;
          a1[8] = a2[8];
          *((_QWORD*)a2 + 2) = v43;
          *(_QWORD*)a2 = v42;
          a2[8] = v41;
          v45 = *((_OWORD*)a2 + 1);
          *((_QWORD*)&v45 + 1) = DWORD2(v43);
          *((_OWORD*)a2 + 1) = v45;
        }
      }
    }
  }
  return result;
}

bool CombatLegionManager_e2f8a0(__int64 a1, __int64 a2)
{
  signed __int64 v2;
  float v3;
  __int64 v4;
  __int128 v5;
  __int128 v6;
  __int128 v7;
  __int64 v8;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  __int128 v15;
  float v16;
  __int128 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  __int128 v23;
  float v26;
  __int64 v27;
  __int128 v28;
  __int128 v29;
  __int128 v30;
  float v31;
  float v32;
  __int128 v33;
  __int128 v34;
  float v35;
  __int64 v36;
  __int64 v37;
  __int128 v38;
  __int128 v39;
  __int128 v40;
  __int128 v41;
  __int64 v42;
  __int128 v43;
  __int128 v44;

  v2 = 0xAAAAAAAAAAAAAAABLL * ((a2 - a1) >> 4);
  if (v2 > 2) {
    switch (v2) {
    case 3LL:
      CombatLegionManager_e2f380((float*)a1, (float*)(a1 + 48),
                                 (float*)(a2 - 48));
      break;
    case 4LL:
      CombatLegionManager_e2f380((float*)a1, (float*)(a1 + 48),
                                 (float*)(a1 + 96));
      v26 = *(float*)(a1 + 128);
      if (*(float*)(a2 - 16) < v26) {
        v27 = *(_QWORD*)(a1 + 96);
        v28 = *(_OWORD*)(a1 + 112);
        *(_QWORD*)(a1 + 96) = *(_QWORD*)(a2 - 48);
        *(_DWORD*)(a1 + 112) = *(_DWORD*)(a2 - 32);
        *(_DWORD*)(a1 + 116) = *(_DWORD*)(a2 - 28);
        v29 = *(_OWORD*)(a1 + 112);
        *((_QWORD*)&v29 + 1) = *(unsigned int*)(a2 - 24);
        *(_OWORD*)(a1 + 112) = v29;
        *(_DWORD*)(a1 + 128) = *(_DWORD*)(a2 - 16);
        *(_QWORD*)(a2 - 32) = v28;
        *(_QWORD*)(a2 - 48) = v27;
        *(float*)(a2 - 16) = v26;
        v30 = *(_OWORD*)(a2 - 32);
        *((_QWORD*)&v30 + 1) = DWORD2(v28);
        *(_OWORD*)(a2 - 32) = v30;
        v31 = *(float*)(a1 + 128);
        v32 = *(float*)(a1 + 80);
        if (v31 < v32) {
          v33 = *(_OWORD*)(a1 + 112);
          v34 = *(_OWORD*)(a1 + 64);
          *(float*)(a1 + 128) = v32;
          v35 = *(float*)(a1 + 32);
          *(_QWORD*)(a1 + 64) = v33;
          *(_QWORD*)(a1 + 112) = v34;
          v36 = *(_QWORD*)(a1 + 48);
          v37 = *(_QWORD*)(a1 + 96);
          *(_QWORD*)(a1 + 48) = v37;
          *(float*)(a1 + 80) = v31;
          *(_QWORD*)(a1 + 96) = v36;
          v38 = *(_OWORD*)(a1 + 64);
          *(_QWORD*)&v39 = *(_QWORD*)(a1 + 64);
          *((_QWORD*)&v39 + 1) = DWORD2(v33);
          *(_OWORD*)(a1 + 64) = v39;
          v40 = *(_OWORD*)(a1 + 112);
          *((_QWORD*)&v40 + 1) = DWORD2(v34);
          *(_OWORD*)(a1 + 112) = v40;
          if (v31 < v35) {
            v41 = *(_OWORD*)(a1 + 16);
            *(_QWORD*)(a1 + 16) = v38;
            *(float*)(a1 + 32) = v31;
            v42 = *(_QWORD*)a1;
            *(_QWORD*)a1 = v37;
            *(float*)(a1 + 80) = v35;
            v43 = *(_OWORD*)(a1 + 16);
            *((_QWORD*)&v43 + 1) = DWORD2(v33);
            *(_QWORD*)(a1 + 64) = v41;
            v44 = *(_OWORD*)(a1 + 64);
            *(_QWORD*)(a1 + 48) = v42;
            *((_QWORD*)&v44 + 1) = DWORD2(v41);
            *(_OWORD*)(a1 + 16) = v43;
            *(_OWORD*)(a1 + 64) = v44;
          }
        }
      }
      return true;
    case 5LL:
      CombatLegionManager_e2f570((float*)a1, (float*)(a1 + 48),
                                 (float*)(a1 + 96), (float*)(a1 + 144),
                                 (float*)(a2 - 48));
      break;
    default:
      goto LABEL_11;
    }
    return true;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    v3 = *(float*)(a1 + 32);
    if (*(float*)(a2 - 16) < v3) {
      v4 = *(_QWORD*)a1;
      v5 = *(_OWORD*)(a1 + 16);
      *(_QWORD*)a1 = *(_QWORD*)(a2 - 48);
      *(_DWORD*)(a1 + 16) = *(_DWORD*)(a2 - 32);
      *(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 - 28);
      v6 = *(_OWORD*)(a1 + 16);
      *((_QWORD*)&v6 + 1) = *(unsigned int*)(a2 - 24);
      *(_OWORD*)(a1 + 16) = v6;
      *(_DWORD*)(a1 + 32) = *(_DWORD*)(a2 - 16);
      *(_QWORD*)(a2 - 32) = v5;
      *(_QWORD*)(a2 - 48) = v4;
      *(float*)(a2 - 16) = v3;
      v7 = *(_OWORD*)(a2 - 32);
      *((_QWORD*)&v7 + 1) = DWORD2(v5);
      *(_OWORD*)(a2 - 32) = v7;
    }
    return true;
  }
LABEL_11:
  v8 = a1 + 96;
  CombatLegionManager_e2f380((float*)a1, (float*)(a1 + 48), (float*)(a1 + 96));
  v11 = a1 + 144;
  if (a1 + 144 == a2) {
    return true;
  }
  v12 = 0;
  v13 = 0;
  while (1) {
    v16 = *(float*)(v11 + 32);
    if (v16 < *(float*)(v8 + 32)) {
      v17 = *(_OWORD*)(v11 + 16);
      v18 = *(_QWORD*)v11;
      v19 = v12;
      do {
        v20 = a1 + v19;
        v21 = *(_DWORD*)(a1 + v19 + 112);
        v22 = *(_DWORD*)(a1 + v19 + 116);
        *(_QWORD*)(v20 + 144) = *(_QWORD*)(a1 + v19 + 96);
        *(_DWORD*)(v20 + 160) = v21;
        *(_DWORD*)(v20 + 164) = v22;
        v23 = *(_OWORD*)(a1 + v19 + 160);
        *((_QWORD*)&v23 + 1) = *(unsigned int*)(a1 + v19 + 120);
        *(_OWORD*)(v20 + 160) = v23;
        *(_DWORD*)(v20 + 176) = *(_DWORD*)(a1 + v19 + 128);
        if (v19 == -96) {
          v14 = a1;
          goto LABEL_14;
        }
        v19 -= 48;
      } while (v16 < *(float*)(v20 + 80));
      v14 = a1 + v19 + 144;
    LABEL_14:
      *(_QWORD*)(v14 + 16) = v17;
      ++v13;
      *(_QWORD*)v14 = v18;
      v15 = *(_OWORD*)(v14 + 16);
      *(float*)(v14 + 32) = v16;
      *((_QWORD*)&v15 + 1) = DWORD2(v17);
      *(_OWORD*)(v14 + 16) = v15;
      if (v13 == 8) {
        return v11 + 48 == a2;
      }
    }
    v8 = v11;
    v11 += 48;
    v12 += 48;
    if (v11 == a2) {
      return true;
    }
  }
}

__int64 CombatLegionManager_e2fd80(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;

  if (a2 == a3) {
    return a2;
  }
  v4 = a1[1];
  if (a3 == v4) {
    v19 = a2;
    if (a2 == v4) {
      goto LABEL_20;
    }
  LABEL_23:
    while (1) {
      v21 = *(_QWORD**)(v4 - 16);
      if ((_QWORD*)(v4 - 48) == v21) {
        break;
      }
      if (v21 != nullptr) {
        v22 = 40;
      LABEL_27:
        (*(void (**)(void))(*v21 + v22))();
      }
      v23 = *(_QWORD*)(v4 - 64);
      if (v23 != 0) {
        std___1___shared_weak_count___release_weak(v23);
      }
      v4 -= 80;
      if (v4 == v19) {
        goto LABEL_20;
      }
    }
    v22 = 32;
    goto LABEL_27;
  }
  v6 = *a1;
  v7 = *a1 + a2;
  v8 = -*a1;
  v9 = *a1 + a3;
  do {
    v10 = v9 + v8;
    v11 = v7 + v8;
    *(_DWORD*)v11 = *(_DWORD*)(v9 + v8);
    v12 = *(_QWORD*)(v9 + v8 + 8);
    v13 = *(_QWORD*)(v9 + v8 + 16);
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    v14 = *(_QWORD*)(v7 + v8 + 16);
    *(_QWORD*)(v11 + 8) = v12;
    *(_QWORD*)(v11 + 16) = v13;
    if (v14 != 0) {
      std___1___shared_weak_count___release_weak(v14);
    }
    v15 = *(_QWORD**)(v11 + 64);
    *(_QWORD*)(v11 + 64) = 0;
    if ((_QWORD*)(v11 + 32) == v15) {
      v16 = 32;
    }
    else {
      if (v15 == nullptr) {
        goto LABEL_13;
      }
      v16 = 40;
    }
    (*(void (**)(void))(*v15 + v16))();
  LABEL_13:
    v17 = v9 + v8;
    v18 = *(_QWORD*)(v9 + v8 + 64);
    if (v18 != 0) {
      if (v10 + 32 == v18) {
        *(_QWORD*)(v11 + 64) = v11 + 32;
        (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v17 + 64) + 24LL))(
            *(_QWORD*)(v17 + 64), v11 + 32);
      }
      else {
        *(_QWORD*)(v11 + 64) = v18;
        *(_QWORD*)(v17 + 64) = 0;
      }
    }
    else {
      *(_QWORD*)(v11 + 64) = 0;
    }
    v9 += 80;
    v7 += 80;
  } while (v9 + v8 != v4);
  v4 = a1[1];
  v19 = v7 - v6;
  if (v7 - v6 != v4) {
    goto LABEL_23;
  }
LABEL_20:
  a1[1] = v19;
  return a2;
}

__int64 CombatLegionManager_e2ff40(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;

  v3 = a1;
  if (a1 == a2) {
  LABEL_7:
    if (v3 == a2) {
      return v3;
    }
    for (i = v3 + 80;; i += 80) {
      if (i == a2) {
        return v3;
      }
      if (*(_DWORD*)i != 0) {
        v6 = *(_QWORD*)(i + 16);
        if (v6 != 0 && *(_QWORD*)(v6 + 8) != -1) {
          break;
        }
      }
    LABEL_11:;
    }
    *(_DWORD*)v3 = *(_DWORD*)i;
    v7 = *(_QWORD*)(i + 8);
    v8 = *(_QWORD*)(i + 16);
    *(_QWORD*)(i + 8) = 0;
    *(_QWORD*)(i + 16) = 0;
    v9 = *(_QWORD*)(v3 + 16);
    *(_QWORD*)(v3 + 8) = v7;
    *(_QWORD*)(v3 + 16) = v8;
    if (v9 != 0) {
      std___1___shared_weak_count___release_weak(v9);
    }
    v10 = *(_QWORD**)(v3 + 64);
    *(_QWORD*)(v3 + 64) = 0;
    if (v10 == (_QWORD*)(v3 + 32)) {
      v11 = 32;
    }
    else {
      if (v10 == nullptr) {
      LABEL_23:
        v12 = *(_QWORD*)(i + 64);
        if (v12 != 0) {
          if (i + 32 == v12) {
            *(_QWORD*)(v3 + 64) = v3 + 32;
            (*(void (**)(_QWORD, __int64))(**(_QWORD**)(i + 64) + 24LL))(
                *(_QWORD*)(i + 64), v3 + 32);
          }
          else {
            *(_QWORD*)(v3 + 64) = v12;
            *(_QWORD*)(i + 64) = 0;
          }
        }
        else {
          *(_QWORD*)(v3 + 64) = 0;
        }
        v3 += 80;
        goto LABEL_11;
      }
      v11 = 40;
    }
    (*(void (**)(void))(*v10 + v11))();
    goto LABEL_23;
  }
  do {
    if (*(_DWORD*)v3 == 0) {
      goto LABEL_7;
    }
    v4 = *(_QWORD*)(v3 + 16);
    if (v4 == 0 || *(_QWORD*)(v4 + 8) == -1) {
      goto LABEL_7;
    }
    v3 += 80;
  } while (v3 != a2);
  return a2;
}

__int64 CombatLegionManager_e30080(__int64* a1, int* a2, __int64* a3,
                                   __int64 a4, __n128 a5)
{
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  _QWORD* v34;

  v5 = *a1;
  v6 = a1[1] - *a1;
  v7 = 1 - 0x3333333333333333LL * (v6 >> 4);
  if (v7 > 0x333333333333333LL) {
    GameRoutine_e30420();
  }
  v8 = a1[2];
  v34 = a1 + 2;
  v13 = fw_memory_g_heap_manager_ptr;
  v14 = 0xCCCCCCCCCCCCCCCDLL * ((v8 - v5) >> 4);
  if (2 * v14 > v7) {
    v7 = 2 * v14;
  }
  if (v14 >= 0x199999999999999LL) {
    v15 = 0x333333333333333LL;
  }
  else {
    v15 = v7;
  }
  if (v15 != 0) {
    if (v15 > 0x333333333333333LL) {
      GameRoutine_60a210(a1);
    }
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         80 * v15, 16, 0);
  }
  else {
    v16 = 0;
  }
  v17 = *a2;
  v18 = v16 + v6;
  v30 = v16;
  v31 = v18;
  v33 = v16 + 80 * v15;
  v19 = *a3;
  v20 = a3[1];
  if (v20 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                              memory_order_relaxed);
    *(_DWORD*)v18 = v17;
    *(_QWORD*)(v18 + 8) = v19;
    *(_QWORD*)(v18 + 16) = v20;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                              memory_order_relaxed);
    v21 = *(_QWORD*)(a4 + 32);
    if (v21 != 0) {
      goto LABEL_13;
    }
  }
  else {
    *(_DWORD*)v18 = v17;
    *(_QWORD*)(v18 + 8) = v19;
    *(_QWORD*)(v18 + 16) = 0;
    v21 = *(_QWORD*)(a4 + 32);
    if (v21 != 0) {
    LABEL_13:
      if (v21 == a4) {
        *(_QWORD*)(v18 + 64) = v18 + 32;
        (*(void (**)(__int64))(*(_QWORD*)v21 + 24LL))(v21);
        if (v20 == 0) {
          goto LABEL_19;
        }
      }
      else {
        *(_QWORD*)(v18 + 64) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        if (v20 == 0) {
          goto LABEL_19;
        }
      }
      goto LABEL_18;
    }
  }
  *(_QWORD*)(v18 + 64) = 0;
  if (v20 != 0) {
  LABEL_18:
    a5 = std___1___shared_weak_count___release_weak_alt1(v20);
  }
LABEL_19:
  v32 = v18 + 80;
  CombatLegionManager_e302c0_alt1(a1, &v30, *(long double*)&a5);
  v22 = a1[1];
  v23 = v31;
  while (1) {
    v24 = v32;
    if (v23 == v32) {
      break;
    }
    v32 -= 80;
    v25 = *(_QWORD**)(v24 - 16);
    if (v25 == (_QWORD*)(v24 - 48)) {
      v26 = 32;
      goto LABEL_25;
    }
    if (v25 != nullptr) {
      v26 = 40;
    LABEL_25:
      (*(void (**)(__int64))(*v25 + v26))((__int64)v25);
    }
    v27 = *(_QWORD*)(v24 - 64);
    if (v27 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v27);
    }
  }
  if (v30 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v13 + v28, v30);
  }
  return v22;
}

__int64* CombatLegionManager_e302c0(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = *result;
  v2 = (_QWORD*)result[1];
  v5 = result;
  v6 = a2[1] + *result - (_QWORD)v2;
  if (v2 != (_QWORD*)*result) {
    v7 = 0;
    do {
      v8 = v3 + v7;
      v9 = v6 + v7;
      *(_DWORD*)v9 = *(_DWORD*)(v3 + v7);
      *(_QWORD*)(v9 + 8) = *(_QWORD*)(v3 + v7 + 8);
      *(_QWORD*)(v9 + 16) = *(_QWORD*)(v3 + v7 + 16);
      *(_QWORD*)(v8 + 8) = 0;
      *(_QWORD*)(v8 + 16) = 0;
      v10 = *(_QWORD*)(v3 + v7 + 64);
      if (v10 != 0) {
        if (v8 + 32 == v10) {
          *(_QWORD*)(v9 + 64) = v9 + 32;
          (*(void (**)(_QWORD))(**(_QWORD**)(v8 + 64) + 24LL))(
              *(_QWORD*)(v8 + 64));
        }
        else {
          *(_QWORD*)(v9 + 64) = v10;
          *(_QWORD*)(v8 + 64) = 0;
        }
      }
      else {
        *(_QWORD*)(v9 + 64) = 0;
      }
      v7 += 80;
    } while ((_QWORD*)(v3 + v7) != v2);
    v11 = (_QWORD*)(v3 + 32);
    while (1) {
      v13 = (_QWORD*)v11[4];
      if (v11 == v13) {
        break;
      }
      if (v13 != nullptr) {
        v14 = 40;
      LABEL_15:
        (*(void (**)(void))(*v13 + v14))();
      }
      result = (__int64*)*(v11 - 2);
      if (result != nullptr) {
        result = (__int64*)std___1___shared_weak_count___release_weak(result);
      }
      v12 = v11 + 6;
      v11 += 10;
      if (v12 == v2) {
        goto LABEL_18;
      }
    }
    v14 = 32;
    goto LABEL_15;
  }
LABEL_18:
  a2[1] = v6;
  v15 = *v5;
  v5[1] = *v5;
  *v5 = a2[1];
  a2[1] = v15;
  v16 = v5[1];
  v5[1] = a2[2];
  a2[2] = v16;
  v17 = v5[2];
  v5[2] = a2[3];
  a2[3] = v17;
  *a2 = a2[1];
  return result;
}

__int64 game_combat_CombatLegionManager_CombatLegionManager_lambda0_Invoke(
    __int64 result, __int64 a2)
{
  __int64 v2;
  int v3;

  v2 = *(_QWORD*)(result + 8);
  if (*(_DWORD*)(v2 + 80) == 2) {
    v3 = *(_DWORD*)(*(_QWORD*)(v2 + 40) + 8LL);
    if ((v3 == 6 || v3 == 0) && *(_QWORD*)(a2 + 56) == 0 &&
        (*(_BYTE*)(v2 + 104) & 1) == 0) {
      *(_DWORD*)(v2 + 100) = 1065353216;
      *(_BYTE*)(v2 + 104) = 1;
    }
  }
  return result;
}

_QWORD* CombatLegionManager_e305a0(_QWORD* result, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;

  if (a2 != a3) {
    v3 = result[1];
    v4 = a2;
    v5 = result;
    if (a3 == v3) {
      goto LABEL_18;
    }
    v6 = *result;
    v7 = *result + a2;
    v8 = -*result;
    v9 = *result + a3;
    while (1) {
      v10 = v9 + v8;
      v11 = v7 + v8;
      *(_DWORD*)v11 = *(_DWORD*)(v9 + v8);
      v12 = *(_QWORD*)(v9 + v8 + 8);
      v13 = *(_QWORD*)(v9 + v8 + 16);
      *(_QWORD*)(v10 + 8) = 0;
      *(_QWORD*)(v10 + 16) = 0;
      v14 = *(_QWORD*)(v7 + v8 + 16);
      *(_QWORD*)(v11 + 8) = v12;
      *(_QWORD*)(v11 + 16) = v13;
      if (v14 != 0) {
        std___1___shared_weak_count___release_weak(v14);
      }
      result = *(_QWORD**)(v11 + 64);
      *(_QWORD*)(v11 + 64) = 0;
      if ((_QWORD*)(v11 + 32) == result) {
        break;
      }
      if (result != nullptr) {
        v15 = 40;
      LABEL_12:
        result = (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v15))(
            result, a2);
      }
      v16 = v9 + v8;
      v17 = *(_QWORD*)(v9 + v8 + 64);
      if (v17 != 0) {
        if (v10 + 32 == v17) {
          *(_QWORD*)(v11 + 64) = v11 + 32;
          result = (_QWORD*)(*(__int64 (**)(_QWORD, __int64))(
              **(_QWORD**)(v16 + 64) + 24LL))(*(_QWORD*)(v16 + 64), v11 + 32);
        }
        else {
          *(_QWORD*)(v11 + 64) = v17;
          *(_QWORD*)(v16 + 64) = 0;
        }
      }
      else {
        *(_QWORD*)(v11 + 64) = 0;
      }
      v9 += 80;
      v7 += 80;
      if (v9 + v8 == v3) {
        v3 = v5[1];
        v4 = v7 - v6;
      LABEL_18:
        if (v4 == v3) {
        LABEL_19:
          v5[1] = v4;
          return result;
        }
        while (2) {
          v18 = *(_QWORD**)(v3 - 16);
          if ((_QWORD*)(v3 - 48) == v18) {
            v19 = 32;
          LABEL_26:
            (*(void (**)(_QWORD*, __int64))(*v18 + v19))(v18, a2);
          }
          else if (v18 != nullptr) {
            v19 = 40;
            goto LABEL_26;
          }
          result = *(_QWORD**)(v3 - 64);
          if (result != nullptr) {
            result =
                (_QWORD*)std___1___shared_weak_count___release_weak(result);
          }
          v3 -= 80;
          if (v3 == v4) {
            goto LABEL_19;
          }
          continue;
        }
      }
    }
    v15 = 32;
    goto LABEL_12;
  }
  return result;
}

__int64 CombatLegionManager_e30760(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;

  v3 = a1;
  if (a1 == a2) {
  LABEL_7:
    if (v3 == a2) {
      return v3;
    }
    for (i = v3 + 80;; i += 80) {
      if (i == a2) {
        return v3;
      }
      if (*(_DWORD*)i != 0) {
        v6 = *(_QWORD*)(i + 16);
        if (v6 != 0 && *(_QWORD*)(v6 + 8) != -1) {
          break;
        }
      }
    LABEL_11:;
    }
    *(_DWORD*)v3 = *(_DWORD*)i;
    v7 = *(_QWORD*)(i + 8);
    v8 = *(_QWORD*)(i + 16);
    *(_QWORD*)(i + 8) = 0;
    *(_QWORD*)(i + 16) = 0;
    v9 = *(_QWORD*)(v3 + 16);
    *(_QWORD*)(v3 + 8) = v7;
    *(_QWORD*)(v3 + 16) = v8;
    if (v9 != 0) {
      std___1___shared_weak_count___release_weak(v9);
    }
    v10 = *(_QWORD**)(v3 + 64);
    *(_QWORD*)(v3 + 64) = 0;
    if (v10 == (_QWORD*)(v3 + 32)) {
      v11 = 32;
    }
    else {
      if (v10 == nullptr) {
      LABEL_23:
        v12 = *(_QWORD*)(i + 64);
        if (v12 != 0) {
          if (i + 32 == v12) {
            *(_QWORD*)(v3 + 64) = v3 + 32;
            (*(void (**)(_QWORD, __int64))(**(_QWORD**)(i + 64) + 24LL))(
                *(_QWORD*)(i + 64), v3 + 32);
          }
          else {
            *(_QWORD*)(v3 + 64) = v12;
            *(_QWORD*)(i + 64) = 0;
          }
        }
        else {
          *(_QWORD*)(v3 + 64) = 0;
        }
        v3 += 80;
        goto LABEL_11;
      }
      v11 = 40;
    }
    (*(void (**)(void))(*v10 + v11))();
    goto LABEL_23;
  }
  do {
    if (*(_DWORD*)v3 == 0) {
      goto LABEL_7;
    }
    v4 = *(_QWORD*)(v3 + 16);
    if (v4 == 0 || *(_QWORD*)(v4 + 8) == -1) {
      goto LABEL_7;
    }
    v3 += 80;
  } while (v3 != a2);
  return a2;
}

__int64 game_combat_CombatLegionManager_SetDieCamera_lambda0_Invoke(__int64 a1,
                                                                    __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 136LL);
  v3 = *(_QWORD*)(*(_QWORD*)a2 + 144LL);
  if (v3 == 0) {
    return GameRoutine_ea3620(*(_QWORD*)(v2 + 40), (*(_BYTE*)(a1 + 8) & 1) == 0,
                              64);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 8), 1u,
                            memory_order_relaxed);
  result =
      GameRoutine_ea3620(*(_QWORD*)(v2 + 40), (*(_BYTE*)(a1 + 8) & 1) == 0, 64);
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64

game_combat_CombatLegionManager_SetAllSoundEnable_lambda0_Invoke(__int64 result,
                                                                 __int64* a2)
{
  __int64 v2;
  int v3;
  unsigned int v4;
  __int64 v5;
  __int64 v6;
  __int64 v8;
  float v9;

  v2 = *a2;
  if (**(_BYTE**)(result + 8) != 0) {
    v3 = 0;
  }
  else {
    v3 = 2;
  }
  v4 = *(_DWORD*)(*a2 + 180) & 0xFFFFFFFD | v3;
  v5 = *(_QWORD*)(v2 + 48);
  *(_DWORD*)(v2 + 180) = v4;
  if (v5 != 0) {
    v6 = *(_QWORD*)(v2 + 56);
    if (*(_QWORD*)(v5 + 8) != -1 && v6 != 0) {
      v8 = *(_QWORD*)(v6 + 136);
      v9 = 0.0;
      if (v4 == 0) {
        v9 = 1.0;
      }
      *(float*)(v8 + 60) = v9;
    }
  }
  return result;
}

#pragma GCC visibility pop
