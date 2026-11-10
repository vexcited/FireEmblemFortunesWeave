#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7fb7c0(_QWORD);
__int64 UnitConst_8f8560_alt1(_QWORD, _QWORD) __asm__("UnitConst_8f8560");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fac9e0[])();
extern __int64 (*GameData_1faca60[])();
extern __int64 (*GameData_1facae0[])();
extern __int64 (*GameData_1facb60[])();
extern __int64 (*GameData_1facbe0[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_6e3e20(_QWORD);
_QWORD* game_UnitConst_BattleEnhance_Commit(_QWORD* result, __int64 a2,
                                            __int64 a3);
_QWORD* game_UnitConst_BattleInternal_Commit(_QWORD* result, __int64 a2,
                                             __int64 a3);
_QWORD* game_UnitConst_CapabilityEnhance_Commit(_QWORD* result, __int64 a2,
                                                __int64 a3);
_QWORD* game_UnitConst_TalentList_Commit_lambda0_Destructor(_QWORD* result);
__int64 game_UnitConst_TalentList_Commit_lambda0_DeletingDestructor(_QWORD* a1);
__int64 game_UnitConst_TalentList_Commit_lambda0_Clone(__int64 a1);
__int64 game_UnitConst_TalentList_Commit_lambda0_Destroy(__int64 result);
__int64 game_UnitConst_TalentList_Commit_lambda0_Invoke(__int64 a1, _DWORD* a2);
__int64 UnitConst_8f8560(__int64 a1, __int64* a2);
_QWORD* game_UnitConst_RageTarget_EachTarget_lambda0_Clone(__int64 a1);
__int64 game_UnitConst_RageTarget_EachTarget_lambda0_Invoke(__int64 a1,
                                                            __int64 a2);
float game_UnitConst_BattleEnhance_Commit_lambda0_Invoke(__int64 a1,
                                                         _DWORD* a2);
__int64 game_UnitConst_BattleInternal_Commit_lambda0_Invoke(__int64 result,
                                                            _DWORD* a2);
float game_UnitConst_CapabilityEnhance_Commit_lambda0_Invoke(__int64 a1,
                                                             unsigned int* a2);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
char** GameRoutine_7fb7c0_alt1(char** result, __int64, __int64,
                               unsigned __int64) __asm__("GameRoutine_7fb7c0");
extern __int64 (*game_UnitConst_TalentList_Commit_lambda0_Destructor_ptr[])();
void __attribute__((noreturn))
GameRoutine_6e3e20_alt1() __asm__("GameRoutine_6e3e20");
__int64 UnitConst_8f7920(__int64 a1, __int64 a2);

__int64 UnitConst_8f7920(__int64 a1, __int64 a2)
{
  int v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 result;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  struct {
    char* v46;
    char* v47;
    __int64 v48;
    int v49;
    char gap44_[4];
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
  } v46_;

  v46_.v46 = nullptr;
  v46_.v47 = nullptr;
  v46_.v48 = 0;
  v46_.v49 = 0;
  if (&v46_.v46 != (char**)a2) {
    GameRoutine_7fb7c0_alt1(&v46_.v46, *(_QWORD*)a2, *(_QWORD*)(a2 + 8),
                            (__int64)(*(_QWORD*)(a2 + 8) - *(_QWORD*)a2) >> 2);
  }
  v3 = *(_DWORD*)(a2 + 24);
  v46_.v50 = 0;
  v46_.v51 = 0;
  v46_.v52 = 0;
  v46_.v49 = v3;
  v5 = *(_QWORD*)(a2 + 32);
  v4 = *(_QWORD*)(a2 + 40);
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = v4 - v5;
  if (v4 != v5) {
    if (v7 < 0) {
      goto LABEL_34;
    }
    v8 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v4 - v5, 16, 0);
    v9 = v8 + v7;
    v46_.v50 = v8;
    v46_.v51 = v8;
    v46_.v52 = v8 + v7;
    memcpy(v8, v5, v7);
    v46_.v51 = v9;
  }
  v11 = *(_QWORD*)(a2 + 56);
  v10 = *(_QWORD*)(a2 + 64);
  v46_.v54 = 0;
  v46_.v55 = 0;
  v12 = v10 - v11;
  v46_.v53 = 0;
  if (v10 != v11) {
    if (v12 < 0) {
      goto LABEL_34;
    }
    v13 = fw_memory_HeapManager_Allocate_alt1(*v6, v10 - v11, 16, 0);
    v14 = v13 + v12;
    v46_.v53 = v13;
    v46_.v54 = v13;
    v46_.v55 = v13 + v12;
    memcpy(v13, v11, v12);
    v46_.v54 = v14;
  }
  v15 = *(_QWORD*)(a2 + 88);
  v16 = *v6;
  v46_.v56 = *(_QWORD*)(a2 + 80);
  v46_.v57 = v15;
  v17 = fw_memory_HeapManager_Allocate_alt1(v16, 112, 16, 0);
  v18 = v46_.v46;
  v19 = (__int64)v46_.v47;
  v20 = v17;
  *(_QWORD*)(v17 + 24) = 0;
  *(_QWORD*)(v17 + 32) = 0;
  *(_DWORD*)(v17 + 40) = 0;
  *(_QWORD*)v17 = game_UnitConst_TalentList_Commit_lambda0_Destructor_ptr;
  *(_QWORD*)(v17 + 8) = a1;
  *(_QWORD*)(v17 + 16) = 0;
  GameRoutine_7fb7c0_alt1((char**)(v17 + 16), (__int64)v18, v19,
                          (v19 - (__int64)v18) >> 2);
  v21 = v46_.v49;
  *(_QWORD*)(v20 + 48) = 0;
  *(_QWORD*)(v20 + 56) = 0;
  *(_QWORD*)(v20 + 64) = 0;
  *(_DWORD*)(v20 + 40) = v21;
  v22 = v46_.v50;
  v23 = v46_.v51 - v46_.v50;
  if (v46_.v51 != v46_.v50) {
    if (v23 < 0) {
      goto LABEL_34;
    }
    v24 = fw_memory_HeapManager_Allocate_alt1(*v6, v46_.v51 - v46_.v50, 16, 0);
    v25 = v24 + v23;
    *(_QWORD*)(v20 + 48) = v24;
    *(_QWORD*)(v20 + 56) = v24;
    *(_QWORD*)(v20 + 64) = v24 + v23;
    memcpy(v24, v22, v23);
    *(_QWORD*)(v20 + 56) = v25;
  }
  v27 = v46_.v53;
  v26 = v46_.v54;
  *(_QWORD*)(v20 + 80) = 0;
  *(_QWORD*)(v20 + 88) = 0;
  v28 = v26 - v27;
  *(_QWORD*)(v20 + 72) = 0;
  if (v26 != v27) {
    if ((v28 & 0x8000000000000000LL) == 0) {
      v29 = fw_memory_HeapManager_Allocate_alt1(*v6, v26 - v27, 16, 0);
      v30 = v29 + v28;
      *(_QWORD*)(v20 + 72) = v29;
      *(_QWORD*)(v20 + 80) = v29;
      *(_QWORD*)(v20 + 88) = v29 + v28;
      memcpy(v29, v27, v28);
      *(_QWORD*)(v20 + 80) = v30;
      goto LABEL_15;
    }
  LABEL_34:
    GameRoutine_6e3e20_alt1();
  }
LABEL_15:
  v31 = v46_.v57;
  *(_QWORD*)(v20 + 96) = v46_.v56;
  *(_QWORD*)(v20 + 104) = v31;
  if ((*(_BYTE*)(a2 + 91) & 1) != 0) {
    v32 = *(_QWORD*)(a2 + 32);
    v33 = *(_QWORD*)(a2 + 40);
    if ((int)((unsigned __int64)(v33 - v32) >> 2) >= 1) {
      v34 = 0;
      v35 = 0;
      v36 = GameData_212c880[0];
      v37 = *GameData_212c880[0];
      do {
        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v37 + 64) +
                                 8LL * (*(_DWORD*)(v32 + v34) & 0xFFF)) +
                      250LL) == 24) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v20 + 48LL))(v20,
                                                                 v32 + v34);
          v37 = *v36;
          v32 = *(_QWORD*)(a2 + 32);
          v33 = *(_QWORD*)(a2 + 40);
        }
        ++v35;
        v34 += 4;
      } while (v35 < (int)((unsigned __int64)(v33 - v32) >> 2));
    }
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 40LL))(v20);
  if (v46_.v53 != 0) {
    v39 = *v6;
    v46_.v54 = v46_.v53;
    v40 = 128;
    if (*(_QWORD*)(v39 + 200) == 0) {
      v40 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(v39 + v40, v46_.v53);
  }
  if (v46_.v50 != 0) {
    v41 = *v6;
    v46_.v51 = v46_.v50;
    v42 = 128;
    if (*(_QWORD*)(v41 + 200) == 0) {
      v42 = 56;
    }
    result = nn_mem_StandardAllocator_Free_alt1(v41 + v42, v46_.v50);
  }
  if (v46_.v46 != nullptr) {
    v43 = *v6;
    v46_.v47 = v46_.v46;
    v44 = 128;
    if (*(_QWORD*)(v43 + 200) == 0) {
      v44 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(v43 + v44, v46_.v46);
  }
  return result;
}

_QWORD* game_UnitConst_BattleEnhance_Commit(_QWORD* result, __int64 a2,
                                            __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;

  *result = 0x3F80000000000000LL;
  result[1] = 0x3F80000000000000LL;
  result[2] = 0x3F80000000000000LL;
  result[3] = 0x3F80000000000000LL;
  result[4] = 0x3F80000000000000LL;
  result[5] = 0x3F80000000000000LL;
  result[6] = 0x3F80000000000000LL;
  result[7] = 0x3F80000000000000LL;
  result[8] = 0x3F80000000000000LL;
  if ((*(_BYTE*)(a2 + 84) & 4) != 0) {
    v11[2] = a2;
    v11[0] = GameData_1facae0;
    v11[1] = result;
    v4 = *(_QWORD*)(a2 + 32);
    v5 = *(_QWORD*)(a2 + 40);
    result = v11;
    v12 = v11;
    if ((int)((unsigned __int64)(v5 - v4) >> 2) < 1) {
      goto LABEL_11;
    }
    v6 = 0;
    v7 = 0;
    v8 = GameData_212c880[0];
    v9 = *GameData_212c880[0];
    do {
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) +
                               8LL * (*(_DWORD*)(v4 + v6) & 0xFFF)) +
                    115LL) == 2) {
        if (v12 == nullptr) {
          GameRoutine_60a310(0, a2);
        }
        (*(void (**)(_QWORD*, __int64))(*v12 + 48LL))(v12, v4 + v6);
        v9 = *v8;
        v4 = *(_QWORD*)(a2 + 32);
        v5 = *(_QWORD*)(a2 + 40);
      }
      ++v7;
      v6 += 4;
    } while (v7 < (int)((unsigned __int64)(v5 - v4) >> 2));
    result = v12;
    if (v12 == v11) {
    LABEL_11:
      v10 = 32;
    }
    else {
      if (v12 == nullptr) {
        return result;
      }
      v10 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(*result + v10))(
        result, a2, a3);
  }
  return result;
}

_QWORD* game_UnitConst_BattleInternal_Commit(_QWORD* result, __int64 a2,
                                             __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;

  *((_WORD*)result + 8) = 0;
  *result = 0;
  result[1] = 0;
  if ((*(_BYTE*)(a2 + 84) & 2) != 0) {
    v11[2] = a2;
    v11[0] = GameData_1facb60;
    v11[1] = result;
    v4 = *(_QWORD*)(a2 + 32);
    v5 = *(_QWORD*)(a2 + 40);
    result = v11;
    v12 = v11;
    if ((int)((unsigned __int64)(v5 - v4) >> 2) < 1) {
      goto LABEL_11;
    }
    v6 = 0;
    v7 = 0;
    v8 = GameData_212c880[0];
    v9 = *GameData_212c880[0];
    do {
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) +
                               8LL * (*(_DWORD*)(v4 + v6) & 0xFFF)) +
                    115LL) == 1) {
        if (v12 == nullptr) {
          GameRoutine_60a310(0, a2);
        }
        (*(void (**)(_QWORD*, __int64))(*v12 + 48LL))(v12, v4 + v6);
        v9 = *v8;
        v4 = *(_QWORD*)(a2 + 32);
        v5 = *(_QWORD*)(a2 + 40);
      }
      ++v7;
      v6 += 4;
    } while (v7 < (int)((unsigned __int64)(v5 - v4) >> 2));
    result = v12;
    if (v12 == v11) {
    LABEL_11:
      v10 = 32;
    }
    else {
      if (v12 == nullptr) {
        return result;
      }
      v10 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(*result + v10))(
        result, a2, a3);
  }
  return result;
}

_QWORD* game_UnitConst_CapabilityEnhance_Commit(_QWORD* result, __int64 a2,
                                                __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _QWORD v11[4];
  _QWORD* v12;

  *result = 0x3F80000000000000LL;
  result[1] = 0x3F80000000000000LL;
  result[2] = 0x3F80000000000000LL;
  result[3] = 0x3F80000000000000LL;
  result[4] = 0x3F80000000000000LL;
  result[5] = 0x3F80000000000000LL;
  result[6] = 0x3F80000000000000LL;
  result[7] = 0x3F80000000000000LL;
  result[8] = 0x3F80000000000000LL;
  result[9] = 0x3F80000000000000LL;
  result[10] = 0x3F80000000000000LL;
  if ((*(_BYTE*)(a2 + 84) & 4) != 0) {
    v11[2] = a2;
    v11[0] = GameData_1facbe0;
    v11[1] = result;
    v4 = *(_QWORD*)(a2 + 32);
    v5 = *(_QWORD*)(a2 + 40);
    result = v11;
    v12 = v11;
    if ((int)((unsigned __int64)(v5 - v4) >> 2) < 1) {
      goto LABEL_11;
    }
    v6 = 0;
    v7 = 0;
    v8 = GameData_212c880[0];
    v9 = *GameData_212c880[0];
    do {
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) +
                               8LL * (*(_DWORD*)(v4 + v6) & 0xFFF)) +
                    115LL) == 2) {
        if (v12 == nullptr) {
          GameRoutine_60a310(0, a2);
        }
        (*(void (**)(_QWORD*, __int64))(*v12 + 48LL))(v12, v4 + v6);
        v9 = *v8;
        v4 = *(_QWORD*)(a2 + 32);
        v5 = *(_QWORD*)(a2 + 40);
      }
      ++v7;
      v6 += 4;
    } while (v7 < (int)((unsigned __int64)(v5 - v4) >> 2));
    result = v12;
    if (v12 == v11) {
    LABEL_11:
      v10 = 32;
    }
    else {
      if (v12 == nullptr) {
        return result;
      }
      v10 = 40;
    }
    return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(*result + v10))(
        result, a2, a3);
  }
  return result;
}

_QWORD* game_UnitConst_TalentList_Commit_lambda0_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = result[9];
  v2 = result;
  *result = GameData_1fac9e0;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    result[10] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = v2[6];
  if (v6 != 0) {
    v7 = *v3;
    v2[7] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = v2[2];
  if (v9 != 0) {
    v10 = *v3;
    v2[3] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v10 + v11);
  }
  return result;
}

__int64 game_UnitConst_TalentList_Commit_lambda0_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v1 = a1[9];
  *a1 = GameData_1fac9e0;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[10] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = a1[6];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[7] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = a1[2];
  if (v9 != 0) {
    v10 = *(_QWORD*)v3;
    a1[3] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11);
  }
  v12 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v12 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v12);
}

__int64 game_UnitConst_TalentList_Commit_lambda0_Clone(__int64 a1)
{
  __int64 v2;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      112, 16, 0);
  UnitConst_8f8560_alt1(v2, a1 + 8);
  return v2;
}

__int64 game_UnitConst_TalentList_Commit_lambda0_Destroy(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = *(_QWORD*)(result + 72);
  v2 = (_QWORD*)result;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(result + 80) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = v2[6];
  if (v6 != 0) {
    v7 = *v3;
    v2[7] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = v2[2];
  if (v9 != 0) {
    v10 = *v3;
    v2[3] = v9;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    return nn_mem_StandardAllocator_Free(v10 + v11);
  }
  return result;
}

__int64 game_UnitConst_TalentList_Commit_lambda0_Invoke(__int64 a1, _DWORD* a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;

  v2 = *(_QWORD*)(a1 + 8);
  result = game_HasActiveSkill_843420(a2, a1 + 16);
  if ((result & 1) != 0) {
    v5 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    if (*(_WORD*)(v5 + 256) != 0) {
      v6 = **(unsigned __int8**)(v5 + 264);
    }
    else {
      v6 = 0;
    }
    *(_BYTE*)(v2 + v6) = -1;
  }
  return result;
}

__int64 UnitConst_8f8560(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 result;
  int v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  *(_QWORD*)a1 = GameData_1fac9e0;
  v4 = *a2;
  *(_QWORD*)(a1 + 16) = 0;
  result = a1 + 16;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_DWORD*)(result + 24) = 0;
  *(_QWORD*)(result - 8) = v4;
  if ((__int64*)result != a2 + 1) {
    result = GameRoutine_7fb7c0(result);
  }
  v6 = *((_DWORD*)a2 + 8);
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_DWORD*)(a1 + 40) = v6;
  v8 = a2[5];
  v7 = a2[6];
  v9 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v10 = v7 - v8;
  if (v7 != v8) {
    if (v10 < 0) {
      goto LABEL_10;
    }
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v7 - v8, 16, 0);
    v12 = v11 + v10;
    *(_QWORD*)(a1 + 48) = v11;
    *(_QWORD*)(a1 + 56) = v11;
    *(_QWORD*)(a1 + 64) = v11 + v10;
    result = memcpy(v11, v8, v10);
    *(_QWORD*)(a1 + 56) = v12;
  }
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  v14 = a2[8];
  v13 = a2[9];
  v15 = v13 - v14;
  if (v13 != v14) {
    if ((v15 & 0x8000000000000000LL) == 0) {
      v16 = fw_memory_HeapManager_Allocate(*v9, v13 - v14, 16, 0);
      v17 = v16 + v15;
      *(_QWORD*)(a1 + 72) = v16;
      *(_QWORD*)(a1 + 80) = v16;
      *(_QWORD*)(a1 + 88) = v16 + v15;
      result = memcpy(v16, v14, v15);
      *(_QWORD*)(a1 + 80) = v17;
      goto LABEL_9;
    }
  LABEL_10:
    GameRoutine_6e3e20(result);
  }
LABEL_9:
  v18 = a2[12];
  *(_QWORD*)(a1 + 96) = a2[11];
  *(_QWORD*)(a1 + 104) = v18;
  return result;
}

_QWORD* game_UnitConst_RageTarget_EachTarget_lambda0_Clone(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *result = GameData_1faca60;
  v3 = result + 2;
  v4 = *(_QWORD**)(a1 + 48);
  if (v4 != nullptr) {
    if (v4 == (_QWORD*)(a1 + 16)) {
      result[6] = v3;
      v5 = result;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v4 + 24LL))(
          (void*)v4, v4);
    }
    else {
      v5 = result;
      result[6] = X8CALL_X0(
          _QWORD*,
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*, _QWORD*))(
              *v4 + 16LL))((void*)v4, v4, v3));
    }
    return v5;
  }
  else {
    result[6] = 0;
  }
  return result;
}

__int64 game_UnitConst_RageTarget_EachTarget_lambda0_Invoke(__int64 a1,
                                                            __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 48);
  if (v2 == 0) {
    GameRoutine_60a310((unsigned __int8)v2, a2);
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v2 + 48LL))(v2);
}

float game_UnitConst_BattleEnhance_Commit_lambda0_Invoke(__int64 a1, _DWORD* a2)
{
  __int64* v2;
  __int64 v4;
  float result;
  float v6;
  __int16 v7;
  float v8;
  float v9;
  __int64 v10;
  __int16 v11;
  float v12;
  float v13;
  __int16 v14;
  float v15;
  float v16;
  __int16 v17;
  float v18;
  float v19;
  __int16 v20;
  float v21;
  float v22;
  __int16 v23;
  float v24;
  float v25;
  __int16 v26;
  float v27;
  float v28;
  __int16 v29;
  float v30;
  float v31;
  __int16 v32;

  v2 = GameData_212c880[0];
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                      8LL * (*a2 & 0xFFF)) +
                           24LL) +
                1113LL) == 1) {
    v4 = *(_QWORD*)(a1 + 8);
    if ((game_HasActiveSkill_843420(a2, *(_QWORD*)(a1 + 16)) & 1) != 0) {
      v6 = *(float*)(v4 + 4);
      v7 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * (*a2 & 0xFFFLL)) +
                     330LL);
      *(_WORD*)v4 += v7 + v7 * ((*a2 >> 19) & 0x1F);
      v8 = *(float*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8LL * (*a2 & 0xFFF)) +
                     348LL) *
           v6;
      v9 = *(float*)(v4 + 12);
      *(float*)(v4 + 4) = v8;
      v10 = *v2;
      v11 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * (*a2 & 0xFFFLL)) +
                      332LL);
      *(_WORD*)(v4 + 8) += v11 + v11 * ((*a2 >> 19) & 0x1F);
      v12 = *(float*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 8LL * (*a2 & 0xFFF)) +
                      352LL) *
            v9;
      v13 = *(float*)(v4 + 20);
      *(float*)(v4 + 12) = v12;
      v14 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 8 * (*a2 & 0xFFFLL)) +
                      334LL);
      *(_WORD*)(v4 + 16) += v14 + v14 * ((*a2 >> 19) & 0x1F);
      v15 = *(float*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 8LL * (*a2 & 0xFFF)) +
                      356LL) *
            v13;
      v16 = *(float*)(v4 + 28);
      *(float*)(v4 + 20) = v15;
      v17 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 8 * (*a2 & 0xFFFLL)) +
                      336LL);
      *(_WORD*)(v4 + 24) += v17 + v17 * ((*a2 >> 19) & 0x1F);
      v18 = *(float*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 8LL * (*a2 & 0xFFF)) +
                      360LL) *
            v16;
      v19 = *(float*)(v4 + 36);
      *(float*)(v4 + 28) = v18;
      v20 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 8 * (*a2 & 0xFFFLL)) +
                      338LL);
      *(_WORD*)(v4 + 32) += v20 + v20 * ((*a2 >> 19) & 0x1F);
      v21 = *(float*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 8LL * (*a2 & 0xFFF)) +
                      364LL) *
            v19;
      v22 = *(float*)(v4 + 44);
      *(float*)(v4 + 36) = v21;
      v23 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 8 * (*a2 & 0xFFFLL)) +
                      340LL);
      *(_WORD*)(v4 + 40) += v23 + v23 * ((*a2 >> 19) & 0x1F);
      v24 = *(float*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 8LL * (*a2 & 0xFFF)) +
                      368LL) *
            v22;
      v25 = *(float*)(v4 + 52);
      *(float*)(v4 + 44) = v24;
      v26 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 8 * (*a2 & 0xFFFLL)) +
                      342LL);
      *(_WORD*)(v4 + 48) += v26 + v26 * ((*a2 >> 19) & 0x1F);
      v27 = *(float*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 8LL * (*a2 & 0xFFF)) +
                      372LL) *
            v25;
      v28 = *(float*)(v4 + 60);
      *(float*)(v4 + 52) = v27;
      v29 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 8 * (*a2 & 0xFFFLL)) +
                      344LL);
      *(_WORD*)(v4 + 56) += v29 + v29 * ((*a2 >> 19) & 0x1F);
      v30 = *(float*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 8LL * (*a2 & 0xFFF)) +
                      376LL) *
            v28;
      v31 = *(float*)(v4 + 68);
      *(float*)(v4 + 60) = v30;
      v32 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 8 * (*a2 & 0xFFFLL)) +
                      346LL);
      *(_WORD*)(v4 + 64) += v32 + v32 * ((*a2 >> 19) & 0x1F);
      result =
          *(float*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) + 8LL * (*a2 & 0xFFF)) +
                    380LL) *
          v31;
      *(float*)(v4 + 68) = result;
    }
  }
  return result;
}

__int64 game_UnitConst_BattleInternal_Commit_lambda0_Invoke(__int64 result,
                                                            _DWORD* a2)
{
  __int64* v2;
  _WORD* v4;
  __int16 v5;
  __int16 v6;
  __int16 v7;
  __int16 v8;
  __int64 v9;
  __int16 v10;
  __int16 v11;
  __int16 v12;
  __int16 v13;
  __int64 v14;

  v2 = GameData_212c880[0];
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                      8LL * (*a2 & 0xFFF)) +
                           24LL) +
                1115LL) == 1) {
    v4 = *(_WORD**)(result + 8);
    result = game_HasActiveSkill_843420(a2, *(_QWORD*)(result + 16));
    if ((result & 1) != 0) {
      v5 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * (*a2 & 0xFFFLL)) +
                     330LL);
      *v4 += v5 + v5 * ((*a2 >> 19) & 0x1F);
      v6 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * (*a2 & 0xFFFLL)) +
                     332LL);
      v4[1] += v6 + v6 * ((*a2 >> 19) & 0x1F);
      v7 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * (*a2 & 0xFFFLL)) +
                     334LL);
      v4[2] += v7 + v7 * ((*a2 >> 19) & 0x1F);
      v8 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * (*a2 & 0xFFFLL)) +
                     336LL);
      v4[3] += v8 + v8 * ((*a2 >> 19) & 0x1F);
      v9 = *v2;
      v10 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * (*a2 & 0xFFFLL)) +
                      338LL);
      v4[4] += v10 + v10 * ((*a2 >> 19) & 0x1F);
      v11 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) + 8 * (*a2 & 0xFFFLL)) +
                      340LL);
      v4[5] += v11 + v11 * ((*a2 >> 19) & 0x1F);
      v12 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) + 8 * (*a2 & 0xFFFLL)) +
                      342LL);
      v4[6] += v12 + v12 * ((*a2 >> 19) & 0x1F);
      v13 = *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) + 8 * (*a2 & 0xFFFLL)) +
                      344LL);
      v4[7] += v13 + v13 * ((*a2 >> 19) & 0x1F);
      v14 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8 * (*a2 & 0xFFFLL));
      v4[8] +=
          *(_WORD*)(v14 + 346) + *(_WORD*)(v14 + 346) * ((*a2 >> 19) & 0x1F);
    }
  }
  return result;
}

float game_UnitConst_CapabilityEnhance_Commit_lambda0_Invoke(__int64 a1,
                                                             unsigned int* a2)
{
  __int64* v2;
  __int64 v4;
  float result;
  unsigned int v6;
  __int64 v7;
  int v8;
  int v9;
  float v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  int v14;
  int v15;
  float v16;
  unsigned int v17;
  __int64 v18;
  int v19;
  int v20;
  float v21;
  unsigned int v22;
  __int64 v23;
  int v24;
  int v25;
  float v26;
  unsigned int v27;
  __int64 v28;
  int v29;
  int v30;
  float v31;
  unsigned int v32;
  __int64 v33;
  int v34;
  int v35;
  float v36;
  unsigned int v37;
  __int64 v38;
  int v39;
  int v40;
  float v41;
  unsigned int v42;
  __int64 v43;
  int v44;
  int v45;
  float v46;
  unsigned int v47;
  __int64 v48;
  int v49;
  int v50;
  float v51;
  unsigned int v52;
  __int64 v53;
  int v54;
  int v55;
  float v56;
  unsigned int v57;
  __int64 v58;
  int v59;
  int v60;
  float v61;

  v2 = GameData_212c880[0];
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                      8LL * (*a2 & 0xFFF)) +
                           24LL) +
                1116LL) == 1) {
    v4 = *(_QWORD*)(a1 + 8);
    if ((game_HasActiveSkill_843420(a2, *(_QWORD*)(a1 + 16)) & 1) != 0) {
      v6 = *a2;
      v7 = *(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * (*a2 & 0xFFFLL));
      v8 = *(__int16*)(v7 + 384);
      if (*(_WORD*)(v7 + 384) != 0) {
        if ((unsigned int)*(unsigned __int8*)(v7 + 104) - 5 < 2 ||
            *(unsigned __int8*)(v7 + 281) >= 2u) {
          v8 += v8 * ((v6 >> 19) & 0x1F);
        }
        else {
          v9 = *(unsigned __int8*)(v7 + 304);
          if (v9 != 0) {
            v8 = (int)((v9 - (HIBYTE(v6) & 0x1F)) * v8) / v9;
          }
        }
      }
      v10 = *(float*)(v4 + 4);
      *(_WORD*)v4 += v8;
      *(_WORD*)(v4 + 2) +=
          *(_WORD*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8LL * (*a2 & 0xFFF)) +
                    452LL);
      *(float*)(v4 + 4) =
          *(float*)(*(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8LL * (*a2 & 0xFFF)) +
                    408LL) *
          v10;
      v11 = *v2;
      v12 = *a2;
      v13 = *(_QWORD*)(*(_QWORD*)(*v2 + 64) + 8 * (*a2 & 0xFFFLL));
      v14 = *(__int16*)(v13 + 386);
      if (*(_WORD*)(v13 + 386) != 0) {
        if ((unsigned int)*(unsigned __int8*)(v13 + 104) - 5 < 2 ||
            *(unsigned __int8*)(v13 + 281) >= 2u) {
          v14 += v14 * ((v12 >> 19) & 0x1F);
        }
        else {
          v15 = *(unsigned __int8*)(v13 + 304);
          if (v15 != 0) {
            v14 = (int)((v15 - (HIBYTE(v12) & 0x1F)) * v14) / v15;
          }
        }
      }
      v16 = *(float*)(v4 + 12);
      *(_WORD*)(v4 + 8) += v14;
      *(_WORD*)(v4 + 10) +=
          *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    454LL);
      *(float*)(v4 + 12) =
          *(float*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    412LL) *
          v16;
      v17 = *a2;
      v18 = *(_QWORD*)(*(_QWORD*)(v11 + 64) + 8 * (*a2 & 0xFFFLL));
      v19 = *(__int16*)(v18 + 388);
      if (*(_WORD*)(v18 + 388) != 0) {
        if ((unsigned int)*(unsigned __int8*)(v18 + 104) - 5 < 2 ||
            *(unsigned __int8*)(v18 + 281) >= 2u) {
          v19 += v19 * ((v17 >> 19) & 0x1F);
        }
        else {
          v20 = *(unsigned __int8*)(v18 + 304);
          if (v20 != 0) {
            v19 = (int)((v20 - (HIBYTE(v17) & 0x1F)) * v19) / v20;
          }
        }
      }
      v21 = *(float*)(v4 + 20);
      *(_WORD*)(v4 + 16) += v19;
      *(_WORD*)(v4 + 18) +=
          *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    456LL);
      *(float*)(v4 + 20) =
          *(float*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    416LL) *
          v21;
      v22 = *a2;
      v23 = *(_QWORD*)(*(_QWORD*)(v11 + 64) + 8 * (*a2 & 0xFFFLL));
      v24 = *(__int16*)(v23 + 390);
      if (*(_WORD*)(v23 + 390) != 0) {
        if ((unsigned int)*(unsigned __int8*)(v23 + 104) - 5 < 2 ||
            *(unsigned __int8*)(v23 + 281) >= 2u) {
          v24 += v24 * ((v22 >> 19) & 0x1F);
        }
        else {
          v25 = *(unsigned __int8*)(v23 + 304);
          if (v25 != 0) {
            v24 = (int)((v25 - (HIBYTE(v22) & 0x1F)) * v24) / v25;
          }
        }
      }
      v26 = *(float*)(v4 + 28);
      *(_WORD*)(v4 + 24) += v24;
      *(_WORD*)(v4 + 26) +=
          *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    458LL);
      *(float*)(v4 + 28) =
          *(float*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    420LL) *
          v26;
      v27 = *a2;
      v28 = *(_QWORD*)(*(_QWORD*)(v11 + 64) + 8 * (*a2 & 0xFFFLL));
      v29 = *(__int16*)(v28 + 392);
      if (*(_WORD*)(v28 + 392) != 0) {
        if ((unsigned int)*(unsigned __int8*)(v28 + 104) - 5 < 2 ||
            *(unsigned __int8*)(v28 + 281) >= 2u) {
          v29 += v29 * ((v27 >> 19) & 0x1F);
        }
        else {
          v30 = *(unsigned __int8*)(v28 + 304);
          if (v30 != 0) {
            v29 = (int)((v30 - (HIBYTE(v27) & 0x1F)) * v29) / v30;
          }
        }
      }
      v31 = *(float*)(v4 + 36);
      *(_WORD*)(v4 + 32) += v29;
      *(_WORD*)(v4 + 34) +=
          *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    460LL);
      *(float*)(v4 + 36) =
          *(float*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    424LL) *
          v31;
      v32 = *a2;
      v33 = *(_QWORD*)(*(_QWORD*)(v11 + 64) + 8 * (*a2 & 0xFFFLL));
      v34 = *(__int16*)(v33 + 394);
      if (*(_WORD*)(v33 + 394) != 0) {
        if ((unsigned int)*(unsigned __int8*)(v33 + 104) - 5 < 2 ||
            *(unsigned __int8*)(v33 + 281) >= 2u) {
          v34 += v34 * ((v32 >> 19) & 0x1F);
        }
        else {
          v35 = *(unsigned __int8*)(v33 + 304);
          if (v35 != 0) {
            v34 = (int)((v35 - (HIBYTE(v32) & 0x1F)) * v34) / v35;
          }
        }
      }
      v36 = *(float*)(v4 + 44);
      *(_WORD*)(v4 + 40) += v34;
      *(_WORD*)(v4 + 42) +=
          *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    462LL);
      *(float*)(v4 + 44) =
          *(float*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    428LL) *
          v36;
      v37 = *a2;
      v38 = *(_QWORD*)(*(_QWORD*)(v11 + 64) + 8 * (*a2 & 0xFFFLL));
      v39 = *(__int16*)(v38 + 396);
      if (*(_WORD*)(v38 + 396) != 0) {
        if ((unsigned int)*(unsigned __int8*)(v38 + 104) - 5 < 2 ||
            *(unsigned __int8*)(v38 + 281) >= 2u) {
          v39 += v39 * ((v37 >> 19) & 0x1F);
        }
        else {
          v40 = *(unsigned __int8*)(v38 + 304);
          if (v40 != 0) {
            v39 = (int)((v40 - (HIBYTE(v37) & 0x1F)) * v39) / v40;
          }
        }
      }
      v41 = *(float*)(v4 + 52);
      *(_WORD*)(v4 + 48) += v39;
      *(_WORD*)(v4 + 50) +=
          *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    464LL);
      *(float*)(v4 + 52) =
          *(float*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    432LL) *
          v41;
      v42 = *a2;
      v43 = *(_QWORD*)(*(_QWORD*)(v11 + 64) + 8 * (*a2 & 0xFFFLL));
      v44 = *(__int16*)(v43 + 398);
      if (*(_WORD*)(v43 + 398) != 0) {
        if ((unsigned int)*(unsigned __int8*)(v43 + 104) - 5 < 2 ||
            *(unsigned __int8*)(v43 + 281) >= 2u) {
          v44 += v44 * ((v42 >> 19) & 0x1F);
        }
        else {
          v45 = *(unsigned __int8*)(v43 + 304);
          if (v45 != 0) {
            v44 = (int)((v45 - (HIBYTE(v42) & 0x1F)) * v44) / v45;
          }
        }
      }
      v46 = *(float*)(v4 + 60);
      *(_WORD*)(v4 + 56) += v44;
      *(_WORD*)(v4 + 58) +=
          *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    466LL);
      *(float*)(v4 + 60) =
          *(float*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    436LL) *
          v46;
      v47 = *a2;
      v48 = *(_QWORD*)(*(_QWORD*)(v11 + 64) + 8 * (*a2 & 0xFFFLL));
      v49 = *(__int16*)(v48 + 400);
      if (*(_WORD*)(v48 + 400) != 0) {
        if ((unsigned int)*(unsigned __int8*)(v48 + 104) - 5 < 2 ||
            *(unsigned __int8*)(v48 + 281) >= 2u) {
          v49 += v49 * ((v47 >> 19) & 0x1F);
        }
        else {
          v50 = *(unsigned __int8*)(v48 + 304);
          if (v50 != 0) {
            v49 = (int)((v50 - (HIBYTE(v47) & 0x1F)) * v49) / v50;
          }
        }
      }
      v51 = *(float*)(v4 + 68);
      *(_WORD*)(v4 + 64) += v49;
      *(_WORD*)(v4 + 66) +=
          *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    468LL);
      *(float*)(v4 + 68) =
          *(float*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    440LL) *
          v51;
      v52 = *a2;
      v53 = *(_QWORD*)(*(_QWORD*)(v11 + 64) + 8 * (*a2 & 0xFFFLL));
      v54 = *(__int16*)(v53 + 402);
      if (*(_WORD*)(v53 + 402) != 0) {
        if ((unsigned int)*(unsigned __int8*)(v53 + 104) - 5 < 2 ||
            *(unsigned __int8*)(v53 + 281) >= 2u) {
          v54 += v54 * ((v52 >> 19) & 0x1F);
        }
        else {
          v55 = *(unsigned __int8*)(v53 + 304);
          if (v55 != 0) {
            v54 = (int)((v55 - (HIBYTE(v52) & 0x1F)) * v54) / v55;
          }
        }
      }
      v56 = *(float*)(v4 + 76);
      *(_WORD*)(v4 + 72) += v54;
      *(_WORD*)(v4 + 74) +=
          *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    470LL);
      *(float*)(v4 + 76) =
          *(float*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    444LL) *
          v56;
      v57 = *a2;
      v58 = *(_QWORD*)(*(_QWORD*)(v11 + 64) + 8 * (*a2 & 0xFFFLL));
      v59 = *(__int16*)(v58 + 404);
      if (*(_WORD*)(v58 + 404) != 0) {
        if ((unsigned int)*(unsigned __int8*)(v58 + 104) - 5 < 2 ||
            *(unsigned __int8*)(v58 + 281) >= 2u) {
          v59 += v59 * ((v57 >> 19) & 0x1F);
        }
        else {
          v60 = *(unsigned __int8*)(v58 + 304);
          if (v60 != 0) {
            v59 = (int)((v60 - (HIBYTE(v57) & 0x1F)) * v59) / v60;
          }
        }
      }
      v61 = *(float*)(v4 + 84);
      *(_WORD*)(v4 + 80) += v59;
      *(_WORD*)(v4 + 82) +=
          *(_WORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    472LL);
      result =
          *(float*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) + 8LL * (*a2 & 0xFFF)) +
                    448LL) *
          v61;
      *(float*)(v4 + 84) = result;
    }
  }
  return result;
}

#pragma GCC visibility pop
