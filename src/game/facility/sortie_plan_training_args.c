#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_93f620(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_2246cb0;
extern __int64 fw_memory_g_heap_manager;
extern __int64* GameData_212ddc0[3];
_QWORD* SortiePlanTrainingArgs_Destructor(_QWORD* result);
_QWORD* SortiePlanTrainingArgs_1426ca0(_QWORD* result);
__int64 SortiePlanTrainingArgs_DeletingDestructor(_QWORD* a1);
__int64 SortiePlanTrainingArgs_1426ea0(_QWORD* a1);
__int64 SortiePlanTrainingArgs_Unknown4(__int64 a1);
__int64 SortiePlanTrainingArgs_14272f0(__int64 a1);
__attribute__((swiftcall)) void
game_12dd620(PSEUDO_X8, unsigned __int16* result, int, int, int);
__attribute__((swiftcall)) void game_93fa20(PSEUDO_X8, __int64, char);
__int64 GameRoutine_940640(_QWORD*, __int64**);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 std___1___shared_weak_count___release_weak();
extern __int64 GameData_212c6c0[2];
extern __int64 GameData_212dde0[2];
extern __int64 GameData_22492a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_UnitListSet_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
void __attribute__((noreturn)) GameRoutine_60a310();
__n128 SortiePlanTrainingArgs_1427120(__int64 a1);
__int64 SortiePlanTrainingArgs_Unknown5_1427330();
__int64 SortiePlanTrainingArgs_Unknown4_14273c0();
void SortiePlanTrainingArgs_Unknown6(__int64 a1, __int64 a2, __int64 a3);
void SortiePlanTrainingArgs_Unknown5_14274c0(__int64 a1, __int64 a2,
                                             __int64 a3);

_QWORD* SortiePlanTrainingArgs_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD** v2;
  _QWORD** v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  v2 = (_QWORD**)result[5];
  v3 = (_QWORD**)result[6];
  result[1] = GameData_212ddc0[0] + 2;
  result[3] = result[2];
  if (v2 != v3) {
    do {
      result = *v2;
      if (*v2 != nullptr) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
      ++v2;
    } while (v2 != v3);
    v2 = (_QWORD**)v1[5];
  }
  v1[6] = v2;
  if (v2 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v4 = 56;
    }
    result =
        (_QWORD*)nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v4);
  }
  v5 = v1[2];
  if (v5 != 0) {
    v6 = fw_memory_g_heap_manager;
    v1[3] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v6 + v7);
  }
  return result;
}

_QWORD* SortiePlanTrainingArgs_1426ca0(_QWORD* result)
{
  _QWORD* v1;
  _QWORD** v2;
  _QWORD** v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = result;
  v2 = (_QWORD**)result[4];
  v3 = (_QWORD**)result[5];
  *result = GameData_212ddc0[0] + 2;
  result[2] = result[1];
  if (v2 != v3) {
    do {
      result = *v2;
      if (*v2 != nullptr) {
        result = (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + 8LL))(result);
      }
      ++v2;
    } while (v2 != v3);
    v2 = (_QWORD**)v1[4];
  }
  v1[5] = v2;
  if (v2 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v4 = 56;
    }
    result =
        (_QWORD*)nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v4);
  }
  v5 = v1[1];
  if (v5 != 0) {
    v6 = fw_memory_g_heap_manager;
    v1[2] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v6 + v7);
  }
  return result;
}

__int64 SortiePlanTrainingArgs_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = (_QWORD*)a1[5];
  v3 = (_QWORD*)a1[6];
  a1[1] = GameData_212ddc0[0] + 2;
  a1[3] = a1[2];
  if (v2 != v3) {
    do {
      if (*v2 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v2 + 8LL))(*v2);
      }
      ++v2;
    } while (v2 != v3);
    v2 = (_QWORD*)a1[5];
  }
  a1[6] = v2;
  if (v2 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v4);
  }
  v5 = a1[2];
  if (v5 != 0) {
    v6 = fw_memory_g_heap_manager;
    a1[3] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7);
  }
  v8 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v8);
}

__int64 SortiePlanTrainingArgs_1426ea0(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = (_QWORD*)a1[4];
  v3 = (_QWORD*)a1[5];
  *a1 = GameData_212ddc0[0] + 2;
  a1[2] = a1[1];
  if (v2 != v3) {
    do {
      if (*v2 != 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)*v2 + 8LL))(*v2);
      }
      ++v2;
    } while (v2 != v3);
    v2 = (_QWORD*)a1[4];
  }
  a1[5] = v2;
  if (v2 != nullptr) {
    v4 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v4);
  }
  v5 = a1[1];
  if (v5 != 0) {
    v6 = fw_memory_g_heap_manager;
    a1[2] = v5;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7);
  }
  v8 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v8);
}

__n128 SortiePlanTrainingArgs_1427120(__int64 a1)
{
  _QWORD* v2;
  __int64*** v3;
  __int64** v4;
  __int64** v5;
  __int64* v6;
  __int64* v7;
  _BOOL4 v8;
  __int64 v9;
  __n128 result;
  __int64 v11;
  struct {
    __int64* v12;
    __int64* v13;
    __int64 v14;
  } v12_;
  struct {
    _QWORD v15[4];
    _QWORD* v16;
  } v15_;
  __int64 v17;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = v15_.v15;
  v3 = *(__int64****)(game_UnitListSet_instance_ + 8);
  v12_.v12 = nullptr;
  v12_.v13 = nullptr;
  v12_.v14 = 0;
  v15_.v16 = v15_.v15;
  v15_.v15[0] = GameData_212dde0[0] + 16;
  v15_.v15[1] = &v12_.v12;
  v4 = *v3;
  v5 = v3[1];
  if (*v3 == v5) {
    goto LABEL_19;
  }
  do {
    v6 = *v4;
    v7 = v4[1];
    if (v7 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 1), 1u,
                                memory_order_relaxed);
    }
    if (v6 != nullptr) {
      v8 = (v6[6] & 0x3F) == 0;
      if (v7 == nullptr) {
        goto LABEL_11;
      }
    }
    else {
      v8 = false;
      if (v7 == nullptr) {
        goto LABEL_11;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v7 + 16))(v7),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      std___1___shared_weak_count___release_weak(),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (!v8) {
        goto LABEL_3;
      }
      goto LABEL_12;
    }
  LABEL_11:
    if (v8) {
    LABEL_12:
      v17 = **v4;
      if (v15_.v16 == nullptr) {
        GameRoutine_60a310(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      (*(void (**)(_QWORD*, __int64*))(*v15_.v16 + 48LL))(v15_.v16, &v17),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  LABEL_3:
    v4 += 2;
  } while (v4 != v5);
  v2 = v15_.v16;
  if (v15_.v16 != v15_.v15) {
    if (v15_.v16 != nullptr) {
      v9 = 40;
      goto LABEL_20;
    }
    goto LABEL_21;
  }
LABEL_19:
  v9 = 32;
LABEL_20:
  (*(void (**)(__int64))(*v2 + v9))((__int64)v2),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_21:
  GameRoutine_940640((_QWORD*)(a1 + 8), &v12_.v12),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v12_.v12 != nullptr) {
    v12_.v13 = v12_.v12;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
  return result;
}

__int64 SortiePlanTrainingArgs_Unknown4(__int64 a1)
{
  __int64 result;

  if (GameData_2246cb0 != 0) {
    *(_QWORD*)(GameData_2246cb0 + 160) = *(_QWORD*)(GameData_2246cb0 + 152);
  }
  result = GameRoutine_93f620();
  *(_BYTE*)(a1 + 64) = result;
  return result;
}

__int64 SortiePlanTrainingArgs_14272f0(__int64 a1)
{
  __int64 result;

  if (GameData_2246cb0 != 0) {
    *(_QWORD*)(GameData_2246cb0 + 160) = *(_QWORD*)(GameData_2246cb0 + 152);
  }
  result = GameRoutine_93f620();
  *(_BYTE*)(a1 + 56) = result;
  return result;
}

__int64 SortiePlanTrainingArgs_Unknown5_1427330()
{
  __int16* v0;
  _WORD v2[6];

  if (game_gmap_GmapClock_instance_ != 0) {
    v0 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v0 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  game_12dd620((void*)((__int64)v2), *(unsigned __int16**)GameData_212c6c0[0],
               *v0, v0[1], v0[2]);
  return game_VariableManager_SetFlag((__int64)&GameData_22492a8,
                                      10000 * v2[0] + 100 * v2[1] + v2[2]);
}

__int64 SortiePlanTrainingArgs_Unknown4_14273c0()
{
  __int16* v0;
  _WORD v2[6];

  if (game_gmap_GmapClock_instance_ != 0) {
    v0 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v0 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  game_12dd620((void*)((__int64)v2), *(unsigned __int16**)GameData_212c6c0[0],
               *v0, v0[1], v0[2]);
  return game_VariableManager_SetFlag((__int64)&GameData_22492a8,
                                      10000 * v2[0] + 100 * v2[1] + v2[2]);
}

void SortiePlanTrainingArgs_Unknown6(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v11[10];
    _QWORD v12[2];
  } v11_;

  game_93fa20((void*)((__int64)v11_.v11), a3, *(_BYTE*)(a1 + 64));
  v4 = v11_.v11[9];
  v5 = v11_.v12[0];
  *(_QWORD*)(a2 + 64) = v11_.v11[8];
  *(_QWORD*)(a2 + 72) = v4;
  v6 = *(_DWORD*)((char*)v11_.v12 + 7);
  *(_QWORD*)(a2 + 80) = v5;
  *(_DWORD*)(a2 + 87) = v6;
  v7 = v11_.v11[5];
  *(_QWORD*)(a2 + 32) = v11_.v11[4];
  *(_QWORD*)(a2 + 40) = v7;
  v8 = v11_.v11[7];
  *(_QWORD*)(a2 + 48) = v11_.v11[6];
  *(_QWORD*)(a2 + 56) = v8;
  v9 = v11_.v11[1];
  *(_QWORD*)a2 = v11_.v11[0];
  *(_QWORD*)(a2 + 8) = v9;
  v10 = v11_.v11[3];
  *(_QWORD*)(a2 + 16) = v11_.v11[2];
  *(_QWORD*)(a2 + 24) = v10;
}

void SortiePlanTrainingArgs_Unknown5_14274c0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v11[10];
    _QWORD v12[2];
  } v11_;

  game_93fa20((void*)((__int64)v11_.v11), a3, *(_BYTE*)(a1 + 56));
  v4 = v11_.v11[9];
  v5 = v11_.v12[0];
  *(_QWORD*)(a2 + 64) = v11_.v11[8];
  *(_QWORD*)(a2 + 72) = v4;
  v6 = *(_DWORD*)((char*)v11_.v12 + 7);
  *(_QWORD*)(a2 + 80) = v5;
  *(_DWORD*)(a2 + 87) = v6;
  v7 = v11_.v11[5];
  *(_QWORD*)(a2 + 32) = v11_.v11[4];
  *(_QWORD*)(a2 + 40) = v7;
  v8 = v11_.v11[7];
  *(_QWORD*)(a2 + 48) = v11_.v11[6];
  *(_QWORD*)(a2 + 56) = v8;
  v9 = v11_.v11[1];
  *(_QWORD*)a2 = v11_.v11[0];
  *(_QWORD*)(a2 + 8) = v9;
  v10 = v11_.v11[3];
  *(_QWORD*)(a2 + 16) = v11_.v11[2];
  *(_QWORD*)(a2 + 24) = v10;
}

#pragma GCC visibility pop
