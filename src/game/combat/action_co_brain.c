#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1079580(_QWORD, _QWORD, float, float, float);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_combat_ActionCoBrain_vtable[])();
extern __int64 fw_memory_g_heap_manager;
extern int GameData_1bb1d5c[];
__int64 ActionCoBrain_Unknown7(__int64 a1);
char* ActionCoBrain_Destructor(__int64 a1);
_QWORD* ActionCoBrain_DeletingDestructor(_QWORD* result);
__int64 ActionCoBrain_Unknown2(_QWORD* a1);
__attribute__((swiftcall)) void GameRoutine_10690a0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_10692c0(PSEUDO_X8, int32x2_t*);
__int64 CharacterModel_106cdd0(_QWORD*);
__n128 GameRoutine_1109640(__int64*, __n128 result);
__n128 std___1___shared_weak_count___release_weak();
extern _QWORD GameData_1bb1d80[3];
extern __int64 GameData_21ec7b0;
void ActionCoBrain_Unknown6(__int64 a1);

void ActionCoBrain_Unknown6(__int64 a1)
{

#pragma clang fp contract(off)
  _QWORD* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int32x2_t* v10;
  bool v11;
  unsigned __int64 v12;
  bool v13;
  __n128 v14;
  int v15;
  float v16;
  int32x2_t v18;
  __int64 v19;

  v1 = *(_QWORD**)(a1 + 8);
  if (v1[34] != 0 &&
      (v3 = *(_QWORD*)(*(_QWORD*)(v1[30] + 8LL * (v1[33] >> 9)) +
                       8 * (v1[33] & 0x1FFLL))) != 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3) & 1) == 0) {
    v16 = fabsf(*(float*)(a1 + 44));
    if (fabsf(*(float*)(a1 + 40)) >= 0x1.0000000000000p-23f ||
        v16 >= 0x1.0000000000000p-23f) {
      if (*(_DWORD*)(a1 + 92) != 0) {
        *(_WORD*)(a1 + 100) = 0;
        *(_QWORD*)(a1 + 92) = 0;
      }
      *(_QWORD*)(a1 + 40) = 0;
      *(_DWORD*)(a1 + 48) = 0;
    }
  }
  else if (GameData_21ec7b0 != 0 &&
           (CharacterModel_106cdd0((_QWORD*)GameData_21ec7b0) & 1) == 0) {
    v15 = *(_DWORD*)(a1 + 16);
    if (v15 != 1 && v15 != 3) {
      if (v15 == 2) {
        *(_DWORD*)(a1 + 16) = 3;
      }
      else {
        *(_DWORD*)(a1 + 16) = 1;
      }
    }
  }
  else {
    GameRoutine_10690a0((void*)((__int64)&v19), *(_QWORD*)(a1 + 8));
    v4 = *(_QWORD*)(a1 + 8);
    v5 = GameData_21ec7b0;
    *(_QWORD*)(a1 + 32) = v19;
    v6 = *(_DWORD*)(v4 + 96) - 1;
    if (v6 > 2) {
      v7 = 2;
    }
    else {
      v7 = GameData_1bb1d80[v6];
    }
    v8 = v5 + 24 * v7;
    v9 = *(_QWORD*)(v8 + 32);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                              memory_order_relaxed);
    v10 = *(int32x2_t**)(v8 + 40);
    v11 = *(_QWORD*)(v9 + 8) == -1 || v10 == nullptr;
    if (v11 || (v12 = LANES64(v10[10]).n64_u64[0]) == 0 ||
        (*(_QWORD*)(v12 + 8) != -1 ? (v13 = LANES64(v10[11]).n64_u64[0] == 0)
                                   : (v13 = true),
         v13)) {
      v10 = nullptr;
    }
    std___1___shared_weak_count___release_weak();
    GameRoutine_10692c0((void*)(&v18), v10);
    PSEUDO_LOW_LANE128(v14, n128_u32, LANES64(v18).n64_u32[0]);
    *(int32x2_t*)(a1 + 40) = v18;
    GameRoutine_1109640((__int64*)(a1 + 24), v14);
  }
}

__int64 ActionCoBrain_Unknown7(__int64 a1)
{
  __int64 v1;
  __int64 result;
  int v3;

  if (*(_DWORD*)(a1 + 92) != 0) {
    *(_WORD*)(a1 + 100) = 0;
    *(_QWORD*)(a1 + 92) = 0;
  }
  v1 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(a1 + 40) = 0;
  *(_DWORD*)(a1 + 48) = 0;
  result = *(_QWORD*)(v1 + 368);
  v3 = *(_DWORD*)(result + 120);
  if (v3 > 119788727) {
    if (v3 <= 1131178863) {
      if (v3 != 119788728 && v3 != 501870813) {
        return GameRoutine_1079580(result, 3720050894LL, -1.0, -1.0, 1.0);
      }
    }
    else if (v3 != 1131178864 && v3 != 1188437166 && v3 != 1817091785) {
      return GameRoutine_1079580(result, 3720050894LL, -1.0, -1.0, 1.0);
    }
  }
  else if (v3 <= -1070254889) {
    if (v3 != -1101902990 && v3 != -1072101930) {
      return GameRoutine_1079580(result, 3720050894LL, -1.0, -1.0, 1.0);
    }
  }
  else if (v3 != -1070254888 && v3 != -589947500 && v3 != -574916402) {
    return GameRoutine_1079580(result, 3720050894LL, -1.0, -1.0, 1.0);
  }
  return result;
}

char* ActionCoBrain_Destructor(__int64 a1)
{
  return (char*)GameData_1bb1d5c + GameData_1bb1d5c[*(int*)(a1 + 92)];
}

_QWORD* ActionCoBrain_DeletingDestructor(_QWORD* result)
{
  *result = game_combat_ActionCoBrain_vtable;
  return result;
}

__int64 ActionCoBrain_Unknown2(_QWORD* a1)
{
  __int64 v1;

  *a1 = game_combat_ActionCoBrain_vtable;
  v1 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v1 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v1, a1);
}

#pragma GCC visibility pop
