#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_162aea0(_QWORD, _QWORD);
__int64 ItemSeq_8af940(__int64, __int64*, __int64, char**, char**, char);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64** GameRoutine_8af240(__int64** result, __int64**);
extern _UNKNOWN GameData_1abbb9c;
extern __int64 (*GameData_1fa9000[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* game_vstring_kEmpty_ptr[2];
unsigned __int64 GameRoutine_887920(_QWORD*, __int64);
void __attribute__((noreturn)) GameRoutine_6e5c60(void);
__int64 ProcGainHonorSeq_8b2d70(__int64 result);
_QWORD* game_anonymous_ProcGainHonorSeq_Lv_closure0_Clone(__int64 a1);
__int64 game_anonymous_ProcGainHonorSeq_Lv_closure0_CloneInto(__int64 result,
                                                              _QWORD* a2);
__int64 game_anonymous_ProcGainHonorSeq_Lv_closure0_Invoke(__int64 a1,
                                                           __int64* a2);
__attribute__((swiftcall)) void game_9c5fd0(PSEUDO_X8, __int64 result, int);
__int64 GameHr_1382760(__int64, int, int);
__int64 GameRoutine_715440();
__int64 ProcList_9bd480(__int64);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_ProcList_Call_9bcfa0(__int64, __int64);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
extern __int64 (*GameData_1fa8f80[])();
extern __int64 GameData_21c9f10;
extern __int64 fw_memory_g_heap_manager;
extern int GameData_21f8110;
extern int GameData_21f8130;
void __attribute__((noreturn))
GameRoutine_6e5c60_alt1() __asm__("GameRoutine_6e5c60");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_anonymous_ProcGainHonorSeq_Lv(__int64 a1);

void game_anonymous_ProcGainHonorSeq_Lv(__int64 a1)
{
  int v2;
  unsigned int v3;
  int* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  struct {
    _QWORD v22[4];
    _QWORD* v23;
  } v22_;
  struct {
    unsigned __int64* v24;
    unsigned __int64* v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
  } v24_;

  v2 = GameRoutine_715440();
  if (v2 <= (signed __int32)*(_DWORD*)(a1 + 152)) {
    return;
  }
  v3 = v2;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
      *(int*)(game_GameModeData_instance_ + 64) > 1) {
    v4 = &GameData_21f8130;
  }
  else {
    v4 = &GameData_21f8110;
  }
  if (v2 < 1 || v2 > (int)((*((_QWORD*)v4 + 2) - *((_QWORD*)v4 + 1)) >> 2) ||
      (v5 = *(_QWORD*)(*(_QWORD*)(GameData_21c9f10 + 64) +
                       8LL * (unsigned int)v2 - 8)) == 0) {
    v24_.v28 = 0;
    v24_.v29 = 0;
    v24_.v26 = 0;
    v24_.v27 = 0;
    v24_.v24 = nullptr;
    v24_.v25 = nullptr;
    goto LABEL_16;
  }
  game_9c5fd0((void*)(&v24_.v24), v5, v3);
  if (v24_.v28 == v24_.v27) {
  LABEL_16:
    GameHr_1382760(a1, *(_DWORD*)(a1 + 152), v3);
    goto LABEL_17;
  }
  v6 = ProcList_9bd480(a1);
  if (v6 != 0) {
    v7 = v6;
    v22_.v22[2] = v3;
    v22_.v22[0] = GameData_1fa8f80;
    v22_.v22[1] = a1;
    v22_.v23 = v22_.v22;
    game_ProcList_Call_9bcfa0(v6, (__int64)v22_.v22);
    if (v22_.v23 == v22_.v22) {
      v8 = 32;
    }
    else {
      if (v22_.v23 == nullptr) {
        goto LABEL_28;
      }
      v8 = 40;
    }
    (*(void (**)(__int64))(*v22_.v23 + v8))((__int64)v22_.v23);
  LABEL_28:
    v11 = v24_.v27;
    v12 = v24_.v28 - v24_.v27;
    if (v24_.v28 == v24_.v27) {
      v13 = 0;
      v14 = 0;
      v15 = 0;
    }
    else {
      if ((v12 & 0x8000000000000000LL) != 0) {
        goto LABEL_43;
      }
      v13 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                v24_.v28 - v24_.v27, 16, 0);
      memcpy_alt1(v13, v11, v12);
      v14 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v12,
                                                16, 0);
      v15 = v14 + v12;
      memcpy_alt1(v14, v11, v12);
    }
    v16 = v15 - v14;
    v17 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                       32, 16, 0);
    v17[2] = 0;
    v17[3] = 0;
    *v17 = GameData_1fa9000;
    v17[1] = 0;
    if (v15 == v14) {
    LABEL_35:
      v22_.v23 = v17;
      game_ProcList_Call_9bcfa0(v7, (__int64)v22_.v22);
      (*(void (**)(_QWORD*))(*v17 + 40LL))(v17);
      if (v14 != 0) {
        v20 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v20, v14);
      }
      if (v13 != 0) {
        v21 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v21 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v21, v13);
      }
      goto LABEL_17;
    }
    if ((v16 & 0x8000000000000000LL) == 0) {
      v18 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                v15 - v14, 16, 0);
      v19 = v18 + v16;
      v17[1] = v18;
      v17[3] = v18 + v16;
      memcpy_alt1(v18, v14, v16);
      v17[2] = v19;
      goto LABEL_35;
    }
  LABEL_43:
    GameRoutine_6e5c60_alt1();
  }
LABEL_17:
  if (v24_.v27 != 0) {
    v24_.v28 = v24_.v27;
    v9 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v9, v24_.v27);
  }
  if (v24_.v24 != nullptr) {
    v24_.v25 = v24_.v24;
    v10 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(fw_memory_g_heap_manager + v10,
                                       (__int64)v24_.v24);
  }
}

__int64 ProcGainHonorSeq_8b2d70(__int64 result)
{
  __int64 v1;
  __int64 v2;

  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v1 = result;
    GameRoutine_887920(&v2, (__int64)&GameData_1abbb9c);
    return GameRoutine_162aea0(v1, &v2);
  }
  return result;
}

_QWORD* game_anonymous_ProcGainHonorSeq_Lv_closure0_Clone(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
  v3[2] = 0;
  v3[3] = 0;
  *v3 = GameData_1fa9000;
  v3[1] = 0;
  v5 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(a1 + 16);
  v6 = v4 - v5;
  if (v4 != v5) {
    if (v6 < 0) {
      GameRoutine_6e5c60();
    }
    v7 = fw_memory_HeapManager_Allocate(*v2, v4 - v5, 16, 0);
    v8 = v7 + v6;
    v3[1] = v7;
    v3[3] = v7 + v6;
    memcpy(v7, v5, v6);
    v3[2] = v8;
  }
  return v3;
}

__int64 game_anonymous_ProcGainHonorSeq_Lv_closure0_CloneInto(__int64 result,
                                                              _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;

  a2[2] = 0;
  a2[3] = 0;
  *a2 = GameData_1fa9000;
  a2[1] = 0;
  v3 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  v4 = v2 - v3;
  if (v2 != v3) {
    if (v4 < 0) {
      GameRoutine_6e5c60();
    }
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        v2 - v3, 16, 0);
    v7 = v6 + v4;
    a2[1] = v6;
    a2[2] = v6;
    a2[3] = v6 + v4;
    result = memcpy(v6, v3, v4);
    a2[2] = v7;
  }
  return result;
}

__int64 game_anonymous_ProcGainHonorSeq_Lv_closure0_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v4;
  __int64* v5[3];

  v2 = *a2;
  GameRoutine_8af240(v5, (__int64**)(a1 + 8));
  result =
      ItemSeq_8af940(v2, (__int64*)v5, 0, (char**)game_vstring_kEmpty_ptr[0],
                     (char**)game_vstring_kEmpty_ptr[0], 0);
  if (v5[0] != nullptr) {
    v5[1] = v5[0];
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  return result;
}

#pragma GCC visibility pop
