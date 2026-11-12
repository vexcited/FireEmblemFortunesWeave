#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_109d5e0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterAim_vtable[])();
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 CharacterAim_Destructor(__int64 a1);
__int64 CharacterAim_DeletingDestructor_alt1(__int64 a1) __asm__(
    "CharacterAim_DeletingDestructor");
extern __int64 (*GameData_2009208[])();
extern __int64 (*GameData_2009288[])();
extern __int64 (*GameData_2009308[])();
void GameRoutine_109d2e0(__int64, __int64, __int64, __int64, int);
float game_character_CharacterAim_Start(__int64 a1, _DWORD* a2, float a3);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
unsigned int* GameHr_109d5e0(unsigned int* result);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CharacterAim_DeletingDestructor(__int64 a1);

__n128 CharacterAim_Destructor(__int64 a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_character_CharacterAim_vtable;
  GameRoutine_109d5e0(a1 + 56);
  *(_DWORD*)(a1 + 160) = -1082130432;
  GameRoutine_109d5e0(a1 + 56);
  v3 = *(_QWORD*)(a1 + 80);
  if (v3 != 0) {
    result = std___1___shared_weak_count___release_weak(v3);
  }
  v4 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)a1 = &game_character_CharacterBaseModule_vtable;
  if (v4 != 0) {
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

void CharacterAim_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *(_QWORD*)a1 = game_character_CharacterAim_vtable;
  GameHr_109d5e0((unsigned int*)(a1 + 56));
  *(_DWORD*)(a1 + 160) = -1082130432;
  GameHr_109d5e0((unsigned int*)(a1 + 56));
  v2 = *(_QWORD*)(a1 + 80);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)a1 = &game_character_CharacterBaseModule_vtable;
  if (v3 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v3);
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

float game_character_CharacterAim_Start(__int64 a1, _DWORD* a2, float a3)
{

#pragma clang fp contract(off)
  __int64 v3;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 (**v10)();
  const char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  float v19;
  __int128 v20;
  float result;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;

  v3 = *(_QWORD*)(a1 + 32);
  if (v3 == 0) {
    v7 = (*(_QWORD*)0x198LL);
    goto LABEL_7;
  }
  if (*(_QWORD*)(v3 + 8) != -1) {
    v6 = *(_QWORD**)(a1 + 40);
    v7 = v6[51];
    if (a3 != -0x1.34a0000000000p+10f) {
      goto LABEL_15;
    }
  LABEL_7:
    v8 = a1 + 56;
    v9 = *(_DWORD*)(a1 + 56);
    *(_DWORD*)(a1 + 152) = 1056964608;
    *(_QWORD*)(a1 + 128) = 0x3F80000000000000LL;
    *(_DWORD*)(a1 + 160) = -1082130432;
    *(_QWORD*)(a1 + 136) = 0xB0000000BLL;
    *(_QWORD*)(a1 + 144) = 0xBF80000000000000LL;
    if (v9 != -1) {
      goto LABEL_31;
    }
    v10 = GameData_2009208;
    v11 = "Jnt_R_Arm1";
    goto LABEL_9;
  }
  v7 = (*(_QWORD*)0x198LL);
  if (a3 == -0x1.34a0000000000p+10f) {
    goto LABEL_7;
  }
  v6 = *(_QWORD**)(a1 + 40);
LABEL_15:
  v14 = v6[49];
  v13 = v6[50];
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v15 = v7;
      v16 = a3;
      (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
      std___1___shared_weak_count___release_weak(v13);
      a3 = v16;
      v7 = v15;
    }
  }
  if (*(_DWORD*)(v14 + 11784) == 33) {
    if (a3 >= 0x0.0p+0f) {
      *(float*)(a1 + 144) = a3;
      *(_QWORD*)(a1 + 148) = 0x3ECCCCCDBF800000LL;
      *(_QWORD*)(a1 + 128) = 0x3F66666600000000LL;
      *(_QWORD*)(a1 + 136) = 0x600000003LL;
      *(_DWORD*)(a1 + 160) = -1082130432;
    }
    v8 = a1 + 56;
    if (*(_DWORD*)(a1 + 56) != -1) {
      goto LABEL_31;
    }
    v10 = GameData_2009288;
    v11 = "Jnt_C_Head";
  }
  else {
    v17 = 0x1.0000000000000p-1f;
    if (a3 <= 0x1.0000000000000p-1f) {
      v17 = a3;
    }
    if (a3 >= 0x1.99999a0000000p-4f) {
      v18 = v17;
    }
    else {
      v18 = 0x1.99999a0000000p-4f;
    }
    if (v18 >= 0x0.0p+0f) {
      *(float*)(a1 + 144) = v18;
      *(_QWORD*)(a1 + 148) = 0x3F000000BF800000LL;
      *(_QWORD*)(a1 + 128) = 0x3F80000000000000LL;
      *(_QWORD*)(a1 + 136) = 0x1000000010LL;
      *(_DWORD*)(a1 + 160) = -1082130432;
    }
    v8 = a1 + 56;
    if (*(_DWORD*)(a1 + 56) != -1) {
      goto LABEL_31;
    }
    v10 = GameData_2009308;
    v11 = "Jnt_C_Spine1";
  }
LABEL_9:
  v22_.v22[0] = v10;
  v22_.v22[1] = a1;
  v22_.v23 = v22_.v22;
  GameRoutine_109d2e0(v8, v7, (__int64)v11, (__int64)v22_.v22, 0);
  if (v22_.v23 == v22_.v22) {
    v12 = 32;
  }
  else {
    if (v22_.v23 == nullptr) {
      goto LABEL_31;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v22_.v23 + v12))((__int64)v22_.v23);
LABEL_31:
  if (*(float*)(a1 + 128) != *(float*)(a1 + 132)) {
    v19 = *(float*)(a1 + 148);
    *(_DWORD*)(a1 + 160) = 0;
    *(_BYTE*)(a1 + 156) = v19 < 0x0.0p+0f;
  }
  *(_DWORD*)(a1 + 96) = *a2;
  *(_DWORD*)(a1 + 100) = a2[1];
  v20 = *(_OWORD*)(a1 + 96);
  *((_QWORD*)&v20 + 1) = (unsigned int)a2[2];
  *(_OWORD*)(a1 + 96) = v20;
  LODWORD(result) = v20;
  return result;
}

#pragma GCC visibility pop
