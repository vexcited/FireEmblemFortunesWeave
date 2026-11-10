#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 MassMeshData_f44c80(__int64 result);
__int64 GameRoutine_64dfe0(_QWORD, _QWORD);
__int64 GameRoutine_f2f3e0(_QWORD);
__int64 GameRoutine_f45440(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_f54fe0(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MassMeshData_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64* GameData_212f8b0[14];
long double GameRoutine_fcc280(_QWORD, _QWORD);
__n128 MassMeshData_Destructor(_QWORD* a1);
void MassMeshData_f44f60(float** a1);
__n128 MassMeshData_f45180(__int64 a1);

__n128 MassMeshData_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __n128 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  void (***v12)(_QWORD);
  void (***v13)(_QWORD);
  void (***v14)(_QWORD);
  void (***v15)(_QWORD);
  void (**v16)(_QWORD);
  bool v17;
  __int64 v18;
  __int64 v19;

  *a1 = game_map_MassMeshData_vtable;
  v2 = a1[43];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v5 = a1[42];
      v6 = v3;
      if (v5 != 0) {
        *(_QWORD*)v5 = 0;
        *(_BYTE*)(v5 + 153) = 1;
        GameRoutine_f2f3e0(v5);
        *(_DWORD*)(v5 + 148) = 0;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
    v7 = a1[43];
    if (v7 != 0) {
      std___1___shared_weak_count___release_weak(v7);
    }
  }
  v8 = a1[15];
  *a1 = GameData_212f8b0[0] + 2;
  v9 = fw_memory_g_heap_manager_ptr;
  if (v8 != 0) {
    v10 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[16] = v8;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v10 + v11);
  }
  v12 = (void (***)(_QWORD))a1[12];
  if (v12 != nullptr) {
    v13 = (void (***)(_QWORD))a1[13];
    if (v12 == v13) {
      goto LABEL_19;
    }
    v14 = v13 - 8;
    v15 = v13 - 8;
    do {
      v16 = *v15;
      v15 -= 8;
      (*v16)(v14);
      v17 = v14 == v12;
      v14 = v15;
    } while (!v17);
    v18 = a1[12];
    a1[13] = v12;
    if (v18 != 0) {
    LABEL_19:
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v19 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v19);
    }
  }
  return result;
}

__int64 MassMeshData_f44c80(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  int v9;
  _QWORD* v10;
  _QWORD* v11;
  bool v12;
  __int64 v13;
  int v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;
  int v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  int v22;
  _QWORD* v23;
  _QWORD* v24;

  v1 = *(_QWORD**)(result + 8);
  v2 = (_QWORD*)(result + 16);
  v3 = (_QWORD*)result;
  if (v1 != (_QWORD*)(result + 16)) {
    do {
      v8 = v1[6];
      *((_BYTE*)v1 + 272) = 0;
      result = (*(__int64 (**)(void))(v8 + 48))();
      if ((result & 1) != 0) {
        v9 = 1036831949;
      }
      else {
        v9 = 0;
        *((_DWORD*)v1 + 69) = 0;
      }
      v10 = (_QWORD*)v1[1];
      *((_DWORD*)v1 + 70) = v9;
      if (v10 != nullptr) {
        do {
          v11 = v10;
          v10 = (_QWORD*)*v10;
        } while (v10 != nullptr);
      }
      else {
        do {
          v11 = (_QWORD*)v1[2];
          v12 = v1 == (_QWORD*)*v11;
          v1 = v11;
        } while (!v12);
      }
      v1 = v11;
    } while (v11 != v2);
  }
  v4 = (_QWORD*)v3[4];
  if (v4 != v3 + 5) {
    do {
      v13 = v4[6];
      *((_BYTE*)v4 + 272) = 0;
      result = (*(__int64 (**)(void))(v13 + 48))();
      if ((result & 1) != 0) {
        v14 = 1036831949;
      }
      else {
        v14 = 0;
        *((_DWORD*)v4 + 69) = 0;
      }
      v15 = (_QWORD*)v4[1];
      *((_DWORD*)v4 + 70) = v14;
      if (v15 != nullptr) {
        do {
          v16 = v15;
          v15 = (_QWORD*)*v15;
        } while (v15 != nullptr);
      }
      else {
        do {
          v16 = (_QWORD*)v4[2];
          v12 = v4 == (_QWORD*)*v16;
          v4 = v16;
        } while (!v12);
      }
      v4 = v16;
    } while (v16 != v3 + 5);
  }
  v5 = (_QWORD*)v3[7];
  if (v5 != v3 + 8) {
    do {
      v17 = v5[6];
      *((_BYTE*)v5 + 272) = 0;
      result = (*(__int64 (**)(void))(v17 + 48))();
      if ((result & 1) != 0) {
        v18 = 1036831949;
      }
      else {
        v18 = 0;
        *((_DWORD*)v5 + 69) = 0;
      }
      v19 = (_QWORD*)v5[1];
      *((_DWORD*)v5 + 70) = v18;
      if (v19 != nullptr) {
        do {
          v20 = v19;
          v19 = (_QWORD*)*v19;
        } while (v19 != nullptr);
      }
      else {
        do {
          v20 = (_QWORD*)v5[2];
          v12 = v5 == (_QWORD*)*v20;
          v5 = v20;
        } while (!v12);
      }
      v5 = v20;
    } while (v20 != v3 + 8);
  }
  v6 = (_QWORD*)v3[10];
  v7 = v3 + 11;
  if (v6 != v7) {
    do {
      v21 = v6[6];
      *((_BYTE*)v6 + 272) = 0;
      result = (*(__int64 (**)(void))(v21 + 48))();
      if ((result & 1) != 0) {
        v22 = 1036831949;
      }
      else {
        v22 = 0;
        *((_DWORD*)v6 + 69) = 0;
      }
      v23 = (_QWORD*)v6[1];
      *((_DWORD*)v6 + 70) = v22;
      if (v23 != nullptr) {
        do {
          v24 = v23;
          v23 = (_QWORD*)*v23;
        } while (v23 != nullptr);
      }
      else {
        do {
          v24 = (_QWORD*)v6[2];
          v12 = v6 == (_QWORD*)*v24;
          v6 = v24;
        } while (!v12);
      }
      v6 = v24;
    } while (v24 != v7);
  }
  return result;
}

void MassMeshData_f44f60(float** a1)
{
  float* v1;
  float* v2;
  __int64 v4;
  __int64 v5;
  float* v6;
  __int64 v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  __int64 v13;
  float* v14;
  float* v15;
  float* v16;
  bool v17;

  v2 = (float*)(a1 + 1);
  v1 = *a1;
  if (*a1 != (float*)(a1 + 1)) {
    v4 = game_script_hub_g_frame_counter_ptr[0];
    v5 = fw_memory_g_heap_manager_ptr;
    do {
      v8 = v1[70];
      v9 = (float)(*(float*)(*(_QWORD*)v4 + 160LL) * 16.683f) / 1000.0f;
      if (v8 <= 0.0f) {
        if (*((_BYTE*)v1 + 272) != 0) {
          v12 = 1.0f;
        }
        else {
          v12 = 0.0f;
        }
      }
      else {
        v10 = v9 / v8;
        v11 = v1[69];
        if (*((_BYTE*)v1 + 272) != 0) {
          v12 = fminf(fmaxf(v10 + v11, 0.33f), 1.0f);
        }
        else {
          v12 = fminf(fmaxf(v11 - v10, 0.0f), 0.67f);
        }
      }
      v1[69] = v12;
      v13 = *((_QWORD*)v1 + 6);
      v1[60] = v9 + v1[60];
      (*(void (**)(_QWORD*))(v13 + 40))((_QWORD*)v1 + 6);
      GameRoutine_f54fe0(v1 + 12);
      v14 = *((float**)v1 + 1);
      if (((_BYTE)v1[68] & 1) != 0 || v1[69] > 0.0f) {
        if (v14 != nullptr) {
          do {
            v16 = v14;
            v14 = *(float**)v14;
          } while (v14 != nullptr);
        }
        else {
          do {
            v16 = *((float**)v1 + 2);
            v17 = v1 == *(float**)v16;
            v1 = v16;
          } while (!v17);
        }
      }
      else {
        v15 = v1;
        if (v14 != nullptr) {
          do {
            v16 = v14;
            v14 = *(float**)v14;
          } while (v14 != nullptr);
        }
        else {
          do {
            v16 = *((float**)v15 + 2);
            v17 = v15 == *(float**)v16;
            v15 = v16;
          } while (!v17);
        }
        if (*a1 == v1) {
          *a1 = v16;
        }
        v6 = a1[1];
        a1[2] = (float*)((char*)a1[2] - 1);
        GameRoutine_64dfe0(v6, v1);
        MassMeshData_Destructor((_QWORD*)v1 + 6);
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7);
      }
      v1 = v16;
    } while (v16 != v2);
  }
}

__n128 MassMeshData_f45180(__int64 a1)
{
  __int128 v2;
  __int64 v3;
  __int128 v4;
  __int64 v5;
  __int128 v6;
  __int64 v7;
  __int128 v8;
  __n128 result;
  __int64 v10;
  _QWORD v11[2];
  __int64 v12;
  __int64 v13;
  __int64 v14;
  long double v15;
  __int128 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int16 v21;
  char v22;
  char v23;
  int v24;

  v13 = 0;
  v22 = 0;
  v23 = 0;
  v14 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v12 = 0x796F6C7065440CLL;
  v24 = 24;
  v11[0] = &v24;
  v11[1] = 1;
  v15 = GameRoutine_fcc280(a1, v11);
  v16 = v2;
  v18 = 1;
  v17 = 0xB00000000LL;
  GameRoutine_f45440(a1, a1 + 8, &v12);
  if ((v12 & 1) != 0 && v14 != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  v13 = 0;
  v22 = 0;
  v23 = 0;
  v14 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v12 = 0x796F6C7065440CLL;
  v24 = 25;
  v11[0] = &v24;
  v11[1] = 1;
  v15 = GameRoutine_fcc280(a1, v11);
  v16 = v4;
  v18 = 1;
  v17 = 0xA00000000LL;
  GameRoutine_f45440(a1, a1 + 32, &v12);
  if ((v12 & 1) != 0 && v14 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
  }
  v13 = 0;
  v22 = 0;
  v23 = 0;
  v14 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v12 = 0x796F6C7065440CLL;
  v24 = 26;
  v11[0] = &v24;
  v11[1] = 1;
  v15 = GameRoutine_fcc280(a1, v11);
  v16 = v6;
  v17 = 0xA00000000LL;
  v18 = 1;
  GameRoutine_f45440(a1, a1 + 56, &v12);
  if ((v12 & 1) != 0 && v14 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7);
  }
  v13 = 0;
  v22 = 0;
  v23 = 0;
  v14 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v12 = 0x796F6C7065440CLL;
  v24 = 27;
  v11[0] = &v24;
  v11[1] = 1;
  v15 = GameRoutine_fcc280(a1, v11);
  v16 = v8;
  v18 = 1;
  v17 = 0xA00000000LL;
  GameRoutine_f45440(a1, a1 + 80, &v12);
  if ((v12 & 1) != 0 && v14 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  return result;
}

#pragma GCC visibility pop
