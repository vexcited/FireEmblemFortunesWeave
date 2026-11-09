#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_MapIconList_vtable)();
extern __int64 GameData_212dc38[7];
extern __int64 fw_memory_g_heap_manager_ptr;
float fmodf(_QWORD, float, float);
void GameRoutine_1035650(__int64, __int64, __int64, float*);
__int64 CondTalkIconList_Unknown3(__int64 result, __int64 a2);
void CondTalkIconList_Unknown4(__int64 a1, __int64 a2, int* a3, float* a4,
                               __int64 a5);
__int64 CondTalkIconList_DeletingDestructor(_QWORD* a1);

__int64 CondTalkIconList_Unknown3(__int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;

  v2 = *(_QWORD*)(a2 + 136);
  v3 = *(_QWORD*)(a2 + 144);
  if (v2 == v3) {
    v5 = 0;
  }
  else {
    v4 = 0;
    v5 = 0;
    do {
      ++v5;
      v2 += 96;
      v6 = *(_QWORD*)(*(_QWORD*)(result + 24) + v4);
      v4 += 64;
      *(_BYTE*)(v6 + 88) |= 1u;
    } while (v2 != v3);
  }
  v7 = *(_QWORD*)(result + 24);
  if (v5 < (*(_QWORD*)(result + 32) - v7) >> 6) {
    v8 = v5 << 6;
    do {
      v9 = *(_QWORD*)(v7 + v8);
      ++v5;
      v8 += 64LL;
      *(_BYTE*)(v9 + 88) &= ~1u;
      v7 = *(_QWORD*)(result + 24);
    } while (v5 < (*(_QWORD*)(result + 32) - v7) >> 6);
  }
  return result;
}

void CondTalkIconList_Unknown4(__int64 a1, __int64 a2, int* a3, float* a4,
                               __int64 a5)
{
  __int128* v5;
  __int128* v6;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  __int128 v20;
  char v21;

  v5 = *(__int128**)(a2 + 136);
  v6 = *(__int128**)(a2 + 144);
  if (v5 != v6) {
    v11 = 0;
    v12 = GameData_212dc38[0];
    do {
      v13 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + v11);
      v14 = *a3;
      if (*a3 == 1) {
        GameRoutine_1035650(a1, *(_QWORD*)(*(_QWORD*)(a1 + 24) + v11),
                            (__int64)v5, a4);
        v14 = *a3;
      }
      if (v14 == 0 && (*(_BYTE*)(v13 + 88) & 1) != 0) {
        v16 = *(float*)(a5 + 8);
        v15 = *(float*)(a5 + 12);
        v17 = *(float*)a5;
        if (*(_BYTE*)(a5 + 16) == 1) {
          v18 = *(float*)(*(_QWORD*)v12 + 100LL);
          v19 = fmodf(a1, v18, 360.0);
          if (v18 < 0.0) {
            v19 = v19 + 360.0;
          }
        }
        else {
          v19 = *(float*)(a5 + 4);
        }
        v20 = *v5;
        v21 = *(_BYTE*)(v13 + 88);
        *(_DWORD*)(v13 + 56) = 0;
        *(_QWORD*)(v13 + 60) = 0;
        *(float*)(v13 + 68) = v19;
        *(_BYTE*)(v13 + 88) = v21 | 0x10;
        *(float*)(v13 + 48) = v17 * (float)(*(float*)&v20 - v16);
        *(float*)(v13 + 52) =
            -(float)(v17 * (float)(*((float*)&v20 + 2) - v15));
      }
      v5 += 6;
      v11 += 64;
    } while (v5 != v6);
  }
}

__int64 CondTalkIconList_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = a1[3];
  *a1 = &game_hub_MapIconList_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[4];
    if (v1 == v4) {
      goto LABEL_8;
    }
    do {
      v5 = *(_QWORD*)(v4 - 40);
      if (v5 != 0) {
        std___1___shared_weak_count___release_weak(v5);
      }
      v4 -= 64;
    } while (v4 != v1);
    v6 = a1[3];
    a1[4] = v1;
    if (v6 != 0) {
    LABEL_8:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
    }
  }
  v8 = a1[2];
  if (v8 != 0) {
    std___1___shared_weak_count___release_weak(v8);
  }
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9);
}

#pragma GCC visibility pop
