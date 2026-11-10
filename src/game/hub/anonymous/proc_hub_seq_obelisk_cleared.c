#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_anonymous_ProcHubSeqObeliskCleared_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcHubSeqObeliskCleared_Destructor(__int64 a1);
__int64 ProcHubSeqObeliskCleared_DeletingDestructor(__int64 a1);
__int64 GameRoutine_162aea0(_QWORD, _QWORD);
__int64 GameRoutine_887920(_QWORD, _QWORD);
__int64 GameRoutine_cdeee0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64* game_Tutorial_CreateBind(__int64, __int64*);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_1abccc0;
extern __int64 GameData_212dc60[2];
extern __int64 GameData_21f3ca8;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_fba420(void);
__int64*
game_hub_anonymous_ProcHubSeqObeliskCleared_CallAchievementDialog(__int64 a1);
__int64 ProcHubSeqObeliskCleared_fba1c0(__int64 a1);
__int64 ProcHubSeqObeliskCleared_fba200();
__int64 ProcHubSeqObeliskCleared_fba250();
__int64* ProcHubSeqObeliskCleared_fba300(__int64* result, int a2);
__int64
game_hub_anonymous_ProcHubSeqObeliskCleared_CallAchievementDialog_closure0_Invoke(
    __int64 a1, __int64* a2);
extern __int64 GameData_21f3ca0;
extern __int64 game_script_hub_g_frame_counter;
float ProcHubSeqObeliskCleared_Unknown3(__int64 a1, float result);
__int64*

game_hub_anonymous_ProcHubSeqObeliskCleared_CallAchievementDialog(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64* result;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;

  v1 = *(unsigned __int8*)(a1 + 160);
  v13 = nullptr;
  v14 = nullptr;
  v12 = nullptr;
  if (v1 != 0 && *(int*)(*(_QWORD*)(*(_QWORD*)(a1 + 176) + 8LL) +
                         216LL * (unsigned int)v1 + 428) >= 2) {
    v2 = a1;
    v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 24, 16, 0);
    a1 = v2;
    v3[2] = 0;
    v12 = v3;
    v13 = v3 + 3;
    v14 = v3 + 3;
    *v3 = 0xE596B0E5B996E61ELL;
    v3[1] = 0xABBAE58980E594A1LL;
  }
  result = game_Tutorial_CreateBind(a1, (__int64*)&v12);
  v5 = (__int64)v12;
  if (v12 != nullptr) {
    v6 = v13;
    if (v12 == v13) {
      goto LABEL_15;
    }
    v7 = v13;
    v8 = fw_memory_g_heap_manager_ptr;
    do {
      v9 = *((_BYTE*)v7 - 24);
      v7 -= 3;
      if ((v9 & 1) != 0 && *(v6 - 1) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v10);
      }
      v6 = v7;
    } while (v7 != (_QWORD*)v5);
    v13 = (_QWORD*)v5;
    if (v12 != nullptr) {
    LABEL_15:
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      return (__int64*)nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
    }
  }
  return result;
}

__int64 ProcHubSeqObeliskCleared_fba1c0(__int64 a1)
{
  __int64 v2;
  __int64 v3;

  v3 = *(_QWORD*)(a1 + 152);
  v2 = game_HashString(v3);
  return game_VariableManager_SetFlag(&v2, 1);
}

__int64 ProcHubSeqObeliskCleared_fba200()
{
  __int64 v0;
  int v2;
  __int16 v3;
  int v4;

  v3 = 0;
  v0 = *(_QWORD*)GameData_212dc60[0];
  v4 = 1065353216;
  v2 = 1069547520;
  return GameRoutine_cdeee0(v0, &v2);
}

__int64 ProcHubSeqObeliskCleared_fba250()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  float* v4;
  _BOOL4 v5;
  __int64 v6;

  v0 = GameData_21f3ca8;
  v1 = *(_QWORD*)(GameData_21f3ca8 + 16);
  v2 = *(_QWORD*)(v1 + 24);
  if (v2 != 0 && (v3 = std___1___shared_weak_count_lock(v2)) != 0) {
    v4 = *(float**)(v1 + 16);
    v5 = v4 != nullptr && ((*(_BYTE*)(*(_QWORD*)v4 + 12LL) & 1) != 0 ||
                           v4[8] < *(float*)(*(_QWORD*)v4 + 8LL));
    if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v6 = v3;
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  else {
    v5 = false;
  }
  return *(float*)(v0 + 8) > 0.0f || v5;
}

__int64* ProcHubSeqObeliskCleared_fba300(__int64* result, int a2)
{
  unsigned __int64 v2;
  _DWORD* v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v3 = (_DWORD*)result[1];
  v2 = result[2];
  v4 = result;
  if ((unsigned __int64)v3 >= v2) {
    v6 = *result;
    v7 = (__int64)v3 - *result;
    v8 = (v7 >> 2) + 1;
    if (v8 >> 62 != 0) {
      GameRoutine_fba420();
    }
    v9 = v2 - v6;
    v10 = fw_memory_g_heap_manager_ptr;
    if (v9 >> 1 > v8) {
      v8 = v9 >> 1;
    }
    if ((unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFFCLL) {
      v11 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v11 = v8;
    }
    if (v11 != 0) {
      if (v11 >> 62 != 0) {
        GameRoutine_60a210(result);
      }
      v12 = a2;
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v11, 16, 0);
      a2 = v12;
    }
    else {
      v13 = 0;
    }
    v14 = v13 + 4 * v11;
    v15 = v13 + v7 - 4 * (v7 >> 2);
    *(_DWORD*)(v13 + v7) = a2;
    v5 = v13 + v7 + 4;
    result = (__int64*)memcpy(v15, v6, v7);
    *v4 = v15;
    v4[1] = v5;
    v4[2] = v14;
    if (v6 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v16 = 56;
      }
      result = (__int64*)nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v16);
    }
  }
  else {
    *v3 = a2;
    v5 = (__int64)(v3 + 1);
  }
  v4[1] = v5;
  return result;
}

__int64

game_hub_anonymous_ProcHubSeqObeliskCleared_CallAchievementDialog_closure0_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  char v4;

  v2 = *a2;
  GameRoutine_887920(&v4, &GameData_1abccc0);
  return GameRoutine_162aea0(v2, &v4);
}

__int64 ProcHubSeqObeliskCleared_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 192);
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqObeliskCleared_vtable;
  if (v1 != 0) {
    *(_QWORD*)(a1 + 200) = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcHubSeqObeliskCleared_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(a1 + 192);
  *(_QWORD*)a1 = game_hub_anonymous_ProcHubSeqObeliskCleared_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 200) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
}

float ProcHubSeqObeliskCleared_Unknown3(__int64 a1, float result)
{

#pragma clang fp contract(off)
  float v2;
  __int64 v3;

  if (*(_BYTE*)(a1 + 188) == 1) {
    result = *(float*)(a1 + 184);
    v2 = fabsf((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                       0x1.0aef000000000p+4f) /
               0x1.f400000000000p+9f);
    if (result <= 0x1.0000000000000p+0f) {
      if (result >= 0x1.0000000000000p+0f) {
        goto LABEL_8;
      }
      result = result + v2;
      if (result <= 0x1.0000000000000p+0f) {
        goto LABEL_8;
      }
    }
    else {
      result = result - v2;
      if (result >= 0x1.0000000000000p+0f) {
        goto LABEL_8;
      }
    }
    result = 0x1.0000000000000p+0f;
  LABEL_8:
    *(float*)(a1 + 184) = result;
  }
  v3 = *(_QWORD*)(GameData_21f3ca0 + 8LL * *(int*)(a1 + 168) + 8);
  if (v3 != 0) {
    result = *(float*)(a1 + 184);
    *(float*)(v3 + 56) = result;
  }
  return result;
}

#pragma GCC visibility pop
