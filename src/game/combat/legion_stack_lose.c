#include "decomp/pseudo_helpers.h"

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

float LegionStackLose_Unknown2(__int64 a1)
{
  long double v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float* v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  int v14;
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
  float v30;
  float result;
  int v32;
  char v33;
  char v34;
  char v35;
  char v36;
  char v37;
  char v38;
  char v39;

  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v32 = 869686455;
  GameRoutine_e40f80(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 104LL), &v32);
  v3 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 120LL);
  *(_DWORD*)(v3 + 116) = 2;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_DWORD*)(v3 + 88) = 1065353216;
  v4 = *(_QWORD*)(a1 + 40);
  v5 = *(_QWORD*)(v4 + 136);
  v6 = *(_QWORD*)(v4 + 144);
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    *(_DWORD*)(v5 + 56) = 0;
    v7 = *(_QWORD*)(v5 + 32);
    *(_QWORD*)(v5 + 24) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      *(__n128*)&v2 = std___1___shared_weak_count___release_weak(v7);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      goto LABEL_9;
    }
  }
  else {
    v6 = *(_QWORD*)(v5 + 32);
    *(_DWORD*)(v5 + 56) = 0;
    *(_QWORD*)(v5 + 24) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    LABEL_9:
      (*(void (**)(__int64, long double))(*(_QWORD*)v6 + 16LL))(v6, v2);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  v8 = *(_QWORD*)(a1 + 40);
  v9 = *(float**)(v8 + 80);
  v10 = *(_QWORD*)(v8 + 128);
  v11 = (float)((float)((float)(*v9 * 0x1.47ae000000000p-5) +
                        0x1.f5c2900000000p-1) *
                0x1.921fb60000000p+1) +
        (float)(roundf((float)((float)((float)(*v9 * 0x1.47ae000000000p-5) +
                                       0x1.f5c2900000000p-1) *
                               0x1.921fb60000000p+1) *
                       0x1.45f3060000000p-3) *
                -0x1.921fb60000000p+2);
  if (v11 > 0x1.921fb60000000p+0) {
    v12 = 0x1.921fb60000000p+1;
  LABEL_14:
    v11 = v12 - v11;
    v13 = -0x1.0000000000000p+0;
    goto LABEL_15;
  }
  v13 = 0x1.0000000000000p+0;
  if (v11 < -0x1.921fb60000000p+0) {
    v12 = -0x1.921fb60000000p+1;
    goto LABEL_14;
  }
LABEL_15:
  v14 = *(unsigned __int8*)(v10 + 116);
  v16 = *(float*)(v10 + 108);
  v15 = *(float*)(v10 + 112);
  v17 = *(float*)GameData_212c190;
  v18 = *((float*)GameData_212c190 + 1);
  v19 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190);
  v20 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c190 + 4);
  v21 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c190);
  v22 = *(float*)GameData_212c188;
  v23 = *((float*)GameData_212c188 + 1);
  v24 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188);
  v25 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)GameData_212c188 + 4);
  v26 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)GameData_212c188);
  if (*(_DWORD*)(v10 + 84) != 1) {
    *(_DWORD*)(v10 + 32) = 0;
    *(_QWORD*)(v10 + 88) = 0;
    *(_QWORD*)(v10 + 96) = 0;
    *(_DWORD*)(v10 + 84) = 1;
    if (*(_BYTE*)(v10 + 64) == 1) {
      *(_BYTE*)(v10 + 64) = 0;
    }
  }
  v27 = v11 * v11;
  if (v14 == 0) {
    v15 = 0.0;
    v16 = 0.0;
  }
  *(_DWORD*)(v10 + 104) = 1077936128;
  v28 =
      v13 *
      (float)((float)((float)-(
                          float)(v26 -
                                 (float)((float)(v25 +
                                                 (float)((float)-(
                                                             float)(v24 -
                                                                    (float)((float)(v23 -
                                                                                    (float)(v22 *
                                                                                            v27)) *
                                                                            v27)) *
                                                         v27)) *
                                         v27)) *
                      v27) +
              0x1.0000000000000p+0);
  v29 =
      v11 *
      (float)((float)((float)-(
                          float)(v21 -
                                 (float)((float)(v20 +
                                                 (float)((float)-(
                                                             float)(v19 -
                                                                    (float)((float)(v18 -
                                                                                    (float)(v17 *
                                                                                            v27)) *
                                                                            v27)) *
                                                         v27)) *
                                         v27)) *
                      v27) +
              0x1.0000000000000p+0);
  v30 = (float)(v15 * v28) - (float)(v16 * v29);
  result = (float)(v15 * v29) + (float)(v16 * v28);
  *(float*)(v10 + 24) = result;
  *(float*)(v10 + 28) = v30;
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
