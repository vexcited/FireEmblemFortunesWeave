#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_combat_LegionStack_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 LegionStackLose_Destructor(__int64 result);
__int64 GameRoutine_e40f80(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
float LegionStackLose_Unknown2(__int64 a1);
__int64 LegionStackLose_Unknown3(__int64 result);
__int64 GameHr_e40f80(__int64, unsigned int*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");

float LegionStackLose_Unknown2(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float* v8;
  __int64 v9;
  float v10;
  float v11;
  float v12;
  int v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float result;
  struct {
    unsigned int v31;
    char v32;
    char gap5_[3];
    char v33;
    char gap9_[3];
    char v34;
    char gap13_[3];
    char v35;
    char gap17_[3];
    char v36;
    char gap21_[3];
    char v37;
    char gap25_[3];
    char v38;
  } v31_;

  v31_.v32 = 0;
  v31_.v33 = 0;
  v31_.v34 = 0;
  v31_.v35 = 0;
  v31_.v36 = 0;
  v31_.v37 = 0;
  v31_.v38 = 0;
  v31_.v31 = 869686455;
  GameHr_e40f80(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 104LL), &v31_.v31);
  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 120LL);
  *(_DWORD*)(v2 + 116) = 2;
  *(_QWORD*)(v2 + 120) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 88) = 0;
  *(_DWORD*)(v2 + 88) = 1065353216;
  v3 = *(_QWORD*)(a1 + 40);
  v4 = *(_QWORD*)(v3 + 136);
  v5 = *(_QWORD*)(v3 + 144);
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    *(_DWORD*)(v4 + 56) = 0;
    v6 = *(_QWORD*)(v4 + 32);
    *(_QWORD*)(v4 + 24) = 0;
    *(_QWORD*)(v4 + 32) = 0;
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt1(v6);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      goto LABEL_9;
    }
  }
  else {
    v5 = *(_QWORD*)(v4 + 32);
    *(_DWORD*)(v4 + 56) = 0;
    *(_QWORD*)(v4 + 24) = 0;
    *(_QWORD*)(v4 + 32) = 0;
    if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    LABEL_9:
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak_alt1(v5);
    }
  }
  v7 = *(_QWORD*)(a1 + 40);
  v8 = *(float**)(v7 + 80);
  v9 = *(_QWORD*)(v7 + 128);
  v10 = (float)(PSEUDO_UNFUSED((float)((float)(*v8 * 0x1.47ae000000000p-5f) +
                                       0x1.f5c2900000000p-1f) *
                               0x1.921fb60000000p+1f)) +
        (float)(roundf((float)((float)((float)(*v8 * 0x1.47ae000000000p-5f) +
                                       0x1.f5c2900000000p-1f) *
                               0x1.921fb60000000p+1f) *
                       0x1.45f3060000000p-3f) *
                -0x1.921fb60000000p+2f);
  if (v10 > 0x1.921fb60000000p+0f) {
    v11 = 0x1.921fb60000000p+1f;
  LABEL_14:
    v10 = v11 - v10;
    v12 = -0x1.0000000000000p+0f;
    goto LABEL_15;
  }
  v12 = 0x1.0000000000000p+0f;
  if (v10 < -0x1.921fb60000000p+0f) {
    v11 = -0x1.921fb60000000p+1f;
    goto LABEL_14;
  }
LABEL_15:
  v13 = *(unsigned __int8*)(v9 + 116);
  v15 = *(float*)(v9 + 108);
  v14 = *(float*)(v9 + 112);
  v16 = *(float*)GameData_212c190;
  v17 = *((float*)GameData_212c190 + 1);
  v18 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v19 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v20 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v21 = *(float*)GameData_212c188;
  v22 = *((float*)GameData_212c188 + 1);
  v23 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v24 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v25 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  if (*(_DWORD*)(v9 + 84) != 1) {
    *(_DWORD*)(v9 + 32) = 0;
    *(_QWORD*)(v9 + 88) = 0;
    *(_QWORD*)(v9 + 96) = 0;
    *(_DWORD*)(v9 + 84) = 1;
    if (*(_BYTE*)(v9 + 64) == 1) {
      *(_BYTE*)(v9 + 64) = 0;
    }
  }
  v26 = v10 * v10;
  if (v13 == 0) {
    v14 = 0x0.0p+0f;
    v15 = 0x0.0p+0f;
  }
  *(_DWORD*)(v9 + 104) = 1077936128;
  v27 =
      v12 *
      (float)((float)((float)-(
                          float)(v25 -
                                 (float)((float)(v24 +
                                                 (float)((float)-(
                                                             float)(v23 -
                                                                    (float)((float)(v22 -
                                                                                    (float)(v21 *
                                                                                            v26)) *
                                                                            v26)) *
                                                         v26)) *
                                         v26)) *
                      v26) +
              0x1.0000000000000p+0f);
  v28 =
      v10 *
      (float)((float)((float)-(
                          float)(v20 -
                                 (float)((float)(v19 +
                                                 (float)((float)-(
                                                             float)(v18 -
                                                                    (float)((float)(v17 -
                                                                                    (float)(v16 *
                                                                                            v26)) *
                                                                            v26)) *
                                                         v26)) *
                                         v26)) *
                      v26) +
              0x1.0000000000000p+0f);
  v29 = (float)(PSEUDO_UNFUSED(v14 * v27)) - (float)(v15 * v28);
  result = (float)(PSEUDO_UNFUSED(v14 * v28)) + (float)(v15 * v27);
  *(float*)(v9 + 24) = result;
  *(float*)(v9 + 28) = v29;
  return result;
}

__int64 LegionStackLose_Destructor(__int64 result)
{
  __int64 v1;

  *(_QWORD*)result = game_combat_LegionStack_vtable;
  if ((*(_BYTE*)(result + 16) & 1) != 0 && *(_QWORD*)(result + 32) != 0) {
    v1 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v1 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v1);
  }
  return result;
}

__int64 LegionStackLose_Unknown3(__int64 result)
{

#pragma clang fp contract(off)
  _QWORD* v1;
  float v2;
  float v3;
  __int64 v4;
  __int64 v6;
  float v7;
  __int64 v8;
  float v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v13;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v1 = *(_QWORD**)(result + 40);
  v2 = *(float*)(result + 52);
  v3 = 0x0.0p+0f;
  v4 = v1[6];
  if (v4 != 0 && *(_QWORD*)(v4 + 8) != -1 && v1[7] != 0) {
    v6 = v1[1];
    if (v6 != 0) {
      v3 = (float)((float)(*(float*)(*(_QWORD*)(v6 + 496) + 16LL) *
                           0x1.0aef000000000p+4f) /
                   0x1.f400000000000p+9f) +
           (float)((float)(*(float*)(*(_QWORD*)(v6 + 496) + 16LL) *
                           0x1.0aef000000000p+4f) /
                   0x1.f400000000000p+9f);
    }
  }
  v7 = fabsf(v3);
  if (v2 <= 0x1.0000000000000p+0f) {
    if (v2 < 0x1.0000000000000p+0f) {
      v2 = v2 + v7;
      if (v2 > 0x1.0000000000000p+0f) {
        v2 = 0x1.0000000000000p+0f;
      }
    }
  }
  else {
    v2 = v2 - v7;
    if (v2 < 0x1.0000000000000p+0f) {
      v2 = 0x1.0000000000000p+0f;
    }
  }
  *(float*)(result + 52) = v2;
  v8 = v1[15];
  *(_QWORD*)(v8 + 120) = 0;
  *(_QWORD*)(v8 + 40) = 0;
  *(_QWORD*)(v8 + 80) = 0;
  *(_QWORD*)(v8 + 88) = 0;
  *(_DWORD*)(v8 + 116) = 2;
  *(float*)(v8 + 88) = v2;
  v9 = 0x0.0p+0f;
  v10 = *(_QWORD**)(result + 40);
  v11 = v10[6];
  if (v11 != 0 && *(_QWORD*)(v11 + 8) != -1 && v10[7] != 0) {
    v13 = v10[1];
    if (v13 != 0) {
      v9 = (float)(*(float*)(*(_QWORD*)(v13 + 496) + 16LL) *
                   0x1.0aef000000000p+4f) /
           0x1.f400000000000p+9f;
    }
  }
  v14 = v9 + *(float*)(result + 56);
  *(float*)(result + 56) = v14;
  if (v14 > 0x1.99999a0000000p-2f && (*(_BYTE*)(result + 60) & 1) == 0) {
    v15 = v10[17];
    v16 = v10[18];
    if (v16 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v15 != 0) {
      v17 = *(_QWORD*)(v15 + 40);
      *(_QWORD*)(v17 + 28) = 0x3F00000000000000LL;
      *(_QWORD*)(v17 + 36) = 1065353216;
    }
    if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      v18 = result;
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v16);
      result = v18;
    }
    v14 = *(float*)(result + 56);
    *(_BYTE*)(result + 60) = 1;
  }
  if (v14 > 0x1.cccccc0000000p-1f) {
    v19 = *(_QWORD*)(*(_QWORD*)(result + 40) + 120LL);
    *(_QWORD*)(v19 + 120) = 0;
    *(_QWORD*)(v19 + 40) = 0;
    *(_QWORD*)(v19 + 80) = 0;
    *(_QWORD*)(v19 + 88) = 0;
    *(_DWORD*)(v19 + 116) = 0;
    *(_BYTE*)(result + 61) = 1;
  }
  return result;
}

#pragma GCC visibility pop
