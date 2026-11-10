#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_176d060(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_adf970(_QWORD, _QWORD);
__int64 Manager_d540c0(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1ff0198[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_hub_ProcRunFacility_vtable[])();
extern __int64 GameData_212dbb8[9];
extern __int64 GameData_21c9dc8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_hub_ProcRunFacility_SetupPreEvent_closure_Invoke(__int64 result);
__int64 ProcRunFacility_Destructor(__int64 a1);
_QWORD* GameRoutine_efb8b0(__int64, __int64, __int64*);
__attribute__((swiftcall)) void game_db1620(PSEUDO_X8, unsigned __int64 result,
                                            __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN GameData_1aad280;
extern __int64 GameData_21f3d08;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn)) String_60a1d0();
__n128 game_hub_ProcRunFacility_SetupPreEvent_closure0_Invoke(__int64 a1);

__int64 game_hub_ProcRunFacility_SetupPreEvent_closure_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(GameData_21c9dc8 + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(GameData_21c9dc8 + 72) - v1) >> 3) >=
      1) {
    v2 = *(_QWORD*)(result + 8);
    v3 = 0;
    v4 = 0;
    v5 = (_QWORD*)GameData_212dbb8[0];
    do {
      v6 = *(_QWORD*)(*(_QWORD*)(v1 + 8 * v3) + 40LL);
      result = Manager_d540c0(*v5);
      v1 = *(_QWORD*)(GameData_21c9dc8 + 64);
      if (v6 == result) {
        v4 = *(_QWORD*)(v1 + 8 * v3);
      }
      ++v3;
    } while (
        v3 <
        (int)((unsigned __int64)(*(_QWORD*)(GameData_21c9dc8 + 72) - v1) >> 3));
    if (v4 != 0) {
      v7 = *(_QWORD*)(v4 + 24);
      if ((*(_BYTE*)v7 & 1) != 0) {
        v8 = *(_QWORD*)(v7 + 16);
      }
      else {
        v8 = v7 + 1;
      }
      v9 = GameRoutine_adf970(*(_QWORD*)(v4 + 40), 0);
      return GameRoutine_176d060(v2, v8, "MID_NewAction_ExWarp", v9);
    }
  }
  return result;
}

__n128 game_hub_ProcRunFacility_SetupPreEvent_closure0_Invoke(__int64 a1)
{
  __int64 v1;
  __n128 result;
  __int64 v3;
  __int64 v4;
  char* v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    __int64 v12[2];
    char* v13;
  } v12_;
  struct {
    unsigned __int64 v14[2];
    char* v15;
  } v14_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = *(_QWORD*)(a1 + 8);
  v14_.v14[1] = (unsigned __int64)&GameData_1aad280;
  v14_.v14[0] = game_HashString((__int64)&GameData_1aad280),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (game_GameModeData_instance_ == 0) {
    return result;
  }
  v3 = game_GameVariableTable_Find(
      *(_QWORD**)(game_GameModeData_instance_ + 48), v14_.v14),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v3 == 0 || *(_DWORD*)(v3 + 32) == 0) {
    return result;
  }
  game_db1620((void*)((__int64)v14_.v14),
              (unsigned __int64)"MID_LGV_1ANH_c07_DN18_005_m02", 29),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = GameData_21f3d08;
  if ((v14_.v14[0] & 1) != 0) {
    v5 = v14_.v15;
  }
  else {
    v5 = (char*)v14_.v14 + 1;
  }
  v6 = strlen(v5),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v6 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(), result = COERCE_AS(__typeof__(result),
                                        PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v7 = v6;
  if (v6 >= 0x17) {
    if ((v6 | 7) == 0x17) {
      v9 = 26;
    }
    else {
      v9 = (v6 | 7) + 1;
    }
    v8 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v9, 16,
                                               0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v12_.v12[1] = v7;
    v12_.v13 = v8;
    v12_.v12[0] = v9 | 1;
    goto LABEL_15;
  }
  LOBYTE(v12_.v12[0]) = 2 * v6;
  v8 = (char*)v12_.v12 + 1;
  if (v6 != 0) {
  LABEL_15:
    memmove(v8, v5, v7),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v8[v7] = 0;
  GameRoutine_efb8b0(v4, v1, v12_.v12),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((v12_.v12[0] & 1) != 0 && v12_.v13 != nullptr) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10);
  }
  *(_DWORD*)(v1 + 152) = 3;
  if ((v14_.v14[0] & 1) != 0 && v14_.v15 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11);
  }
  return result;
}

__int64 ProcRunFacility_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;

  v1 = *(_QWORD*)(a1 + 240);
  *(_QWORD*)a1 = game_hub_ProcRunFacility_vtable;
  if (v1 == 0) {
    goto LABEL_14;
  }
  v3 = *(_QWORD*)(a1 + 248);
  if (v1 == v3) {
  LABEL_11:
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
    goto LABEL_14;
  }
  do {
    v5 = *(_QWORD**)(v3 - 16);
    v6 = v3 - 48;
    if ((_QWORD*)(v3 - 48) == v5) {
      v4 = 32;
    LABEL_5:
      (*(void (**)(__int64))(*v5 + v4))((__int64)v5);
      goto LABEL_6;
    }
    if (v5 != nullptr) {
      v4 = 40;
      goto LABEL_5;
    }
  LABEL_6:
    v3 = v6;
  } while (v6 != v1);
  v7 = *(_QWORD*)(a1 + 240);
  *(_QWORD*)(a1 + 248) = v1;
  if (v7 != 0) {
    goto LABEL_11;
  }
LABEL_14:
  if ((*(_BYTE*)(a1 + 216) & 1) != 0 && *(_QWORD*)(a1 + 232) != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  v10 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1ff0198;
  if (v10 == (_QWORD*)(a1 + 160)) {
    v11 = 32;
  LABEL_23:
    (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
  }
  else if (v10 != nullptr) {
    v11 = 40;
    goto LABEL_23;
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
