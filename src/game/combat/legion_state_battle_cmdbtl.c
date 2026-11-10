#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 LegionStateBattleCmdbtl_Unknown2(__int64 result);
__int64 GameRoutine_e3b8e0(__int64 result, char*, char*, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_combat_e43d60(void);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212d448[9];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
void GameRoutine_e9f200(__int64);
__int64 LegionStateBattleCmdbtl_Unknown3(__int64 a1);
__attribute__((swiftcall)) void LegionStateBattleCmdbtl_Unknown6(PSEUDO_X8 x8_,
                                                                 __int64 a1);

__int64 LegionStateBattleCmdbtl_Unknown3(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  signed int v10;
  signed int v11;
  unsigned int* v12;
  signed int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  float v18;

  v2 = fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      24, 16, 0);
  *(_QWORD*)v3 = 0x6400000003LL;
  *(_QWORD*)(v3 + 8) = 0xA00000009LL;
  *(_QWORD*)(v3 + 16) = 0xA0000000ALL;
  nn_os_LockMutex(&game_g_random_mutex);
  v4 = game_map_MapRandom_instance__ptr[0];
  v5 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL));
  v6 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                  (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
  v7 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
       (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
  *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
      *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
  *((_DWORD*)v4 + 1) = v5;
  v8 = (v7 >> 8) ^ (v6 >> 19) ^ v7 ^ v6;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4) = v6;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v4 + 4) = v8;
  v9 = v8 & 0x7FFFFFFF;
  nn_os_UnlockMutex(&game_g_random_mutex);
  v10 = *(_DWORD*)(v3 + 4);
  v11 = v9 % 0x78;
  v12 = (unsigned int*)v3;
  if ((int)(v9 % 0x78) >= v10) {
    v13 = *(_DWORD*)(v3 + 12) + v10;
    v12 = (unsigned int*)(v3 + 8);
    if (v11 >= v13) {
      if (v11 >= *(_DWORD*)(v3 + 20) + v13) {
        v12 = (unsigned int*)v3;
      }
      else {
        v12 = (unsigned int*)(v3 + 16);
      }
    }
  }
  v14 = *v12;
  v15 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v15 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v15);
  if (*(_BYTE*)(a1 + 32) == 1) {
    *(_WORD*)(a1 + 28) = 0;
    *(_DWORD*)(a1 + 24) = v14;
  }
  else {
    *(_QWORD*)(a1 + 24) = v14;
    *(_BYTE*)(a1 + 32) = 1;
  }
  v16 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 176LL);
  v17 = *(_QWORD*)(v16 + 128);
  v18 = *(float*)(*(_QWORD*)(v16 + 80) + 4LL);
  *(_BYTE*)(v17 + 140) = 1;
  *(float*)(v17 + 136) = fminf(
      fmaxf((float)((float)(v18 + -0.5f) * 0x1.99999a0000000p-3f) + 0.5f, 0.0f),
      1.0f);
  return game_combat_e43d60();
}

__attribute__((swiftcall)) void LegionStateBattleCmdbtl_Unknown6(PSEUDO_X8 x8_,
                                                                 __int64 a1)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v4;
  float v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  float v9;
  __int64 v10;
  __int64 v11;
  float v12;
  float v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  int v22;
  __int64* v23;
  int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v31;
  bool v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  bool v36;
  __int64 v37;
  bool v38;
  __int64 v39;
  float v40;
  __int64 v41;
  __int64 v42;
  float v43;
  float v44;
  float v45;
  __int64 v46;
  unsigned __int64 v47;
  char* v48;
  __int64 v50;
  _QWORD v51[2];
  __int64 v52;

  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
  v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
  v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w"));
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 176LL);
  v5 = **(float**)(v4 + 80);
  v6 = *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8LL);
  v7 = *(__int64**)(v6 + 56);
  v8 = *(__int64**)(v6 + 64);
  if (v7 == v8) {
    v9 = 0x1.3333340000000p-1f;
    v14 = *(_QWORD*)(v4 + 72);
    if (v14 != 0) {
    LABEL_9:
      v15 = *(_QWORD*)(v14 + 120);
      v16 = *(_QWORD*)(v14 + 136);
      v17 = *(float*)(v15 + 16);
      v18 = *(float*)(v15 + 20);
      GameRoutine_e9f200(v16),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w"));
      v20 = fmaxf(v19, 0x1.3333340000000p-1f);
      if ((*(_BYTE*)(v16 + 92) & (*(float*)(v16 + 88) < v20)) != 0) {
        v9 = *(float*)(v16 + 88);
      }
      else {
        v9 = v20;
      }
      goto LABEL_47;
    }
  }
  else {
    v9 = 0x1.3333340000000p-1f;
    do {
      v11 = *v7;
      v7 += 2;
      v10 = v11;
      GameRoutine_e9f200(v11),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w"));
      v13 = fmaxf(v12, 0x1.3333340000000p-1f);
      if ((*(_BYTE*)(v11 + 92) & (*(float*)(v11 + 88) < v13)) != 0) {
        v13 = *(float*)(v10 + 88);
      }
      if (v13 >= v9) {
        v9 = v13;
      }
    } while (v7 != v8);
    v4 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 176LL);
    v14 = *(_QWORD*)(v4 + 72);
    if (v14 != 0) {
      goto LABEL_9;
    }
  }
  v21 = *(_QWORD*)(v4 + 64);
  v22 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v21 + 8) + 40LL) + 8LL);
  v23 = GameData_212d448[0];
  if (v22 == 6 || v22 == 0) {
    v25 = *(_DWORD*)(v21 + 112);
    if (v25 != 0) {
      if (v25 != 1) {
        goto LABEL_35;
      }
      v26 = 0;
    }
    else {
      v26 = 1;
    }
    v27 = *GameData_212d448[0] + 24LL * v26;
    v28 = *(_QWORD*)(v27 + 32);
    if (v28 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 16), 1u,
                                memory_order_relaxed);
      v29 = *(_QWORD*)(v27 + 40);
      if (*(_QWORD*)(v28 + 8) != -1 && v29 != 0) {
        v31 = *(_QWORD*)(v29 + 80);
        if (v31 != 0) {
          v32 = *(_QWORD*)(v31 + 8) == -1 || *(_QWORD*)(v29 + 88) == 0;
          if (!v32 && *(_QWORD*)(v28 + 8) != -1) {
            std___1___shared_weak_count___release_weak(v28),
                v12 = COERCE_AS(__typeof__(v12),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v19 = COERCE_AS(__typeof__(v19),
                                PSEUDO_REGISTER(float, "s0", "=w")),
                v44 = COERCE_AS(__typeof__(v44),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            v17 = *(float*)(v29 + 40);
            v18 = *(float*)(v29 + 44);
            goto LABEL_47;
          }
        }
      }
      std___1___shared_weak_count___release_weak(v28),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
          v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
          v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w"));
      v21 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 176LL) + 64LL);
    }
  }
LABEL_35:
  v33 = *v23 + 24LL * (*(_DWORD*)(v21 + 112) != 0);
  v34 = *(_QWORD*)(v33 + 32);
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v34 + 16), 1u,
                            memory_order_relaxed);
  v35 = *(_QWORD*)(v33 + 40);
  v36 = *(_QWORD*)(v34 + 8) == -1 || v35 == 0;
  if (v36 || (v37 = *(_QWORD*)(v35 + 80)) == 0 ||
      (*(_QWORD*)(v37 + 8) != -1 ? (v38 = *(_QWORD*)(v35 + 88) == 0)
                                 : (v38 = true),
       v38)) {
    v39 = 0;
  }
  else if (*(_QWORD*)(v34 + 8) == -1) {
    v39 = 0;
  }
  else {
    v39 = v35;
  }
  std___1___shared_weak_count___release_weak(v34),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
      v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w"));
  v17 = *(float*)(v39 + 40);
  v18 = *(float*)(v39 + 44);
LABEL_47:
  v40 =
      (float)((float)(v5 * 0x1.0000000000000p+1f) + 0x1.8000000000000p+1f) + v9;
  v41 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 176LL) + 120LL);
  v42 = *(_QWORD*)(*(_QWORD*)(v41 + 8) + 136LL);
  v43 = (float)(PSEUDO_UNFUSED((float)(*(float*)(v41 + 20) - v18) *
                               (float)(*(float*)(v41 + 20) - v18))) +
        (float)((float)(*(float*)(v41 + 16) - v17) *
                (float)(*(float*)(v41 + 16) - v17));
  GameRoutine_e9f200(v42),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
      v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
      v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w"));
  v45 = fmaxf(v44, 0x1.3333340000000p-1f);
  if ((*(_BYTE*)(v42 + 92) & (*(float*)(v42 + 88) < v45)) != 0) {
    v45 = *(float*)(v42 + 88);
  }
  if (v43 >= (float)((float)(v40 + v45) * (float)(v40 + v45))) {
    v47 = 3;
    v46 = (__int64)a2;
    v50 = 0x3200000003LL;
    v51[0] = 0xA00000009LL;
    v51[1] = 0xA0000000ALL;
    v48 = (char*)&v52;
  }
  else {
    v50 = 0x3200000003LL;
    v46 = (__int64)a2;
    v47 = 1;
    v48 = (char*)v51;
  }
  {
    GameRoutine_e3b8e0(v46, (char*)&v50, v48, v47),
        v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s0", "=w")),
        v19 = COERCE_AS(__typeof__(v19), PSEUDO_REGISTER(float, "s0", "=w")),
        v44 = COERCE_AS(__typeof__(v44), PSEUDO_REGISTER(float, "s0", "=w"));
    return;
  }
}

__int64 LegionStateBattleCmdbtl_Unknown2(__int64 result)
{
  if (*(_BYTE*)(result + 20) == 1) {
    *(_BYTE*)(result + 20) = 0;
  }
  if (*(_BYTE*)(result + 32) == 1) {
    *(_BYTE*)(result + 32) = 0;
  }
  *(_BYTE*)(result + 36) = 0;
  *(_DWORD*)(result + 40) = 0;
  return result;
}

#pragma GCC visibility pop
