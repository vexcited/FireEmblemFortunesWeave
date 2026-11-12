#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1920490(_QWORD);
__int64 GameRoutine_1920be0(_QWORD);
__int64 GameRoutine_1921e00(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 FaceTextureGenerator_111a720(__int64 a1);
extern __int64 (*game_UnitEdit_vtable[])();
__int64 FaceTextureGenerator_111a240(__int64 a1);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void DGame_1920490(__int64);
void DGame_1920be0(_QWORD*);
void SpineCaptureProcessor_1921e00(__int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 FaceTextureGenerator_111a240(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(a1 + 144);
  *(_QWORD*)(a1 + 136) = 0;
  *(_QWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 112) = -1;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  v3 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 128) = 0;
  if (v3 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 8LL))(v3);
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    **(_BYTE**)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 8) = 0;
    if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
      goto LABEL_8;
    }
  LABEL_10:
    *(_WORD*)(a1 + 32) = 0;
    goto LABEL_11;
  }
  *(_WORD*)a1 = 0;
  if ((*(_BYTE*)(a1 + 32) & 1) == 0) {
    goto LABEL_10;
  }

LABEL_8:
  **(_BYTE**)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 40) = 0;

LABEL_11:
  v4 = *(_QWORD*)(a1 + 144);
  *(_BYTE*)(a1 + 60) = 0;
  *(_DWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_BYTE*)(a1 + 96) = 0;
  *(_DWORD*)(a1 + 100) = 1;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  result = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 128) = 0;
  if (result != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  *(_QWORD*)(a1 + 24) = game_UnitEdit_vtable;
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 48);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 16);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v8);
    }
  }
  return result;
}

__int64 FaceTextureGenerator_111a720(__int64 a1)
{
  _QWORD* v1;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* i;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 result;
  __int64 v29;

  v1 = (_QWORD*)(a1 + 81920);
  v3 = *(_QWORD**)(a1 + 81968);
  if (v3 != nullptr) {
    v4 = (_QWORD*)v3[6];
    for (i = v3 + 5; v4 != i; v4 = (_QWORD*)v4[1]) {
      DGame_1920be0(v4 + 2);
    }
    if (v3[7] != 0) {
      v6 = (_QWORD*)v3[6];
      v7 = *(_QWORD**)(v3[5] + 8LL);
      *(_QWORD*)(*v6 + 8LL) = v7;
      *v7 = *v6;
      v3[7] = 0;
      if (v6 != i) {
        v8 = fw_memory_g_heap_manager_ptr;
        do {
          v9 = (_QWORD*)v6[1];
          SpineCaptureProcessor_1921e00((__int64)(v6 + 2));
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v10, (__int64)v6);
          v6 = v9;
        } while (v9 != i);
      }
    }
    v11 = v1[6];
    v1[6] = 0;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    }
  }
  if (v1[5] != 0) {
    v12 = (_QWORD*)v1[4];
    v13 = *(_QWORD**)(v1[3] + 8LL);
    *(_QWORD*)(*v12 + 8LL) = v13;
    *v13 = *v12;
    v1[5] = 0;
    if (v12 != v1 + 3) {
      v14 = fw_memory_g_heap_manager_ptr;
      do {
        v15 = (_QWORD*)v12[1];
        DGame_1920490((__int64)(v12 + 2));
        if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) != 0) {
          v16 = 128;
        }
        else {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v14 + v16, (__int64)v12);
        v12 = v15;
      } while (v15 != v1 + 3);
    }
  }
  v17 = 0;
  v1[2] = v1 + 2;
  do {
    v19 = a1 + v17;
    if ((*(_BYTE*)(a1 + v17 + 16) & 1) != 0) {
      **(_BYTE**)(v19 + 32) = 0;
      *(_QWORD*)(v19 + 24) = 0;
    }
    else {
      *(_WORD*)(v19 + 16) = 0;
    }
    v20 = a1 + v17;
    if ((*(_BYTE*)(a1 + v17 + 48) & 1) != 0) {
      **(_BYTE**)(v20 + 64) = 0;
      *(_QWORD*)(v20 + 56) = 0;
    }
    else {
      *(_WORD*)(v20 + 48) = 0;
    }
    v21 = a1 + v17;
    v22 = *(_BYTE*)(a1 + v17 + 176);
    *(_BYTE*)(v21 + 76) = 0;
    *(_DWORD*)(v21 + 72) = 0;
    *(_QWORD*)(v21 + 80) = 0;
    *(_QWORD*)(v21 + 88) = 0;
    *(_QWORD*)(v21 + 96) = 0;
    *(_QWORD*)(v21 + 104) = 0;
    *(_BYTE*)(v21 + 112) = 0;
    *(_DWORD*)(v21 + 116) = 1;
    if ((v22 & 1) != 0) {
      **(_BYTE**)(v21 + 192) = 0;
      *(_QWORD*)(v21 + 184) = 0;
    }
    else {
      *(_WORD*)(v21 + 176) = 0;
    }
    v23 = a1 + v17;
    if ((*(_BYTE*)(a1 + v17 + 208) & 1) != 0) {
      **(_BYTE**)(v23 + 224) = 0;
      *(_QWORD*)(v23 + 216) = 0;
    }
    else {
      *(_WORD*)(v23 + 208) = 0;
    }
    v18 = a1 + v17;
    v17 += 320;
    *(_BYTE*)(v18 + 236) = 0;
    *(_DWORD*)(v18 + 232) = 0;
    *(_QWORD*)(v18 + 240) = 0;
    *(_QWORD*)(v18 + 248) = 0;
    *(_QWORD*)(v18 + 256) = 0;
    *(_QWORD*)(v18 + 264) = 0;
    *(_BYTE*)(v18 + 272) = 0;
    *(_DWORD*)(v18 + 276) = 1;
  } while (v17 != 81920);
  v24 = 0;
  do {
    v26 = a1 + v24;
    v27 = *(_QWORD*)(a1 + v24 + 160);
    *(_QWORD*)(v26 + 128) = -1;
    *(_QWORD*)(v26 + 152) = 0;
    *(_QWORD*)(v26 + 160) = 0;
    if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
      std___1___shared_weak_count___release_weak_alt1(v27);
    }
    result = *(_QWORD*)(v26 + 144);
    *(_QWORD*)(v26 + 144) = 0;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
    if ((*(_BYTE*)(v26 + 16) & 1) != 0) {
      **(_BYTE**)(a1 + v24 + 32) = 0;
      *(_QWORD*)(a1 + v24 + 24) = 0;
    }
    else {
      *(_BYTE*)(v26 + 16) = 0;
      *(_BYTE*)(a1 + v24 + 17) = 0;
    }
    v29 = a1 + v24;
    if ((*(_BYTE*)(a1 + v24 + 48) & 1) != 0) {
      **(_BYTE**)(v29 + 64) = 0;
      *(_QWORD*)(v29 + 56) = 0;
    }
    else {
      *(_WORD*)(v29 + 48) = 0;
    }
    v25 = a1 + v24;
    v24 += 160;
    *(_BYTE*)(v25 + 76) = 0;
    *(_DWORD*)(v25 + 72) = 0;
    *(_QWORD*)(v25 + 80) = 0;
    *(_QWORD*)(v25 + 88) = 0;
    *(_QWORD*)(v25 + 96) = 0;
    *(_QWORD*)(v25 + 104) = 0;
    *(_BYTE*)(v25 + 112) = 0;
    *(_DWORD*)(v25 + 116) = 1;
  } while (v24 != 81920);
  return result;
}

#pragma GCC visibility pop
