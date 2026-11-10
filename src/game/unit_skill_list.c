#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6fc650(_QWORD);
__int64 GameRoutine_7fb7c0(_QWORD);
__int64 UnitSkillList_67efe0(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84cc00(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84cc00_alt1(__int64*, _DWORD*,
                                  char) __asm__("UnitSkillList_84cc00");
__int64 UnitSkillList_84d980(__int64*, unsigned int*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_21ee1a8;
extern __int16 GameData_21ee1a0;
extern __int64 (*GameData_1fa0fe8[])();
extern __int64 (*GameData_1fa1068[])();
extern __int64 (*GameData_1fa10e8[])();
extern __int64 (*GameData_1fa1168[])();
extern __int64 (*GameData_1fa11e8[])();
extern __int64 (*GameData_1fa1268[])();
extern __int64 (*GameData_1fa12e8[])();
extern __int64 (*GameData_1fa1368[])();
extern __int64 (*GameData_1fa13e8[])();
extern __int64 (*GameData_1fa1468[])();
extern __int64 (*GameData_1fa14e8[])();
extern __int64 (*GameData_1fa1568[])();
extern __int64 (*GameData_1fa15e8[])();
extern __int64 (*GameData_1fa1668[])();
extern __int64 GameData_21c9868;
extern __int64 GameData_21c9870;
extern __int64 GameData_21c99b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD, _QWORD) __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) GameRoutine_705570(void);
bool game_UnitSkillList_Remove(__int64 a1, _WORD* a2, __int64 a3);
__int64 game_UnitSkillList_GetMaxValue(_QWORD* a1, __int64* a2, __int64 a3);
__int64 game_UnitSkillList_GetTotalValue(_QWORD* a1, __int64* a2, __int64 a3);
float game_UnitSkillList_GetTotalRatio(_QWORD* a1, __int64* a2, __int64 a3);
__int64 game_UnitSkillList_GetWorkSkill(_QWORD* a1, __int64* a2, __int64 a3);
__int64 game_UnitSkillList_IsVanish(__int64 a1, __int64 a2, __int64 a3);
__int64 game_UnitSkillList_EachDirectSkill(__int64 a1, _WORD* a2, __int64 a3);
__int64 game_UnitSkillList_EachIndirectSkill(__int64 a1, _WORD* a2, __int64 a3);
bool game_UnitSkillList_UpdateLearn(__int64* a1, __int64 a2);
__int64 game_UnitSkillList_GetRangeAddImpl_lambda0_Clone(__int64 a1);
__int64 game_UnitSkillList_GetRangeAddImpl_lambda0_CloneInto(__int64 a1,
                                                             __int64 a2);
__int64 game_UnitSkillList_GetUseFactorImpl_lambda0_Clone(__int64 a1);
__int64 game_UnitSkillList_GetUseFactorImpl_lambda0_CloneInto(__int64 a1,
                                                              __int64 a2);
_QWORD* game_UnitSkillList_EachDirectSkill_lambda0_Clone(__int64 a1);
__int64 game_UnitSkillList_EachDirectSkill_lambda0_Invoke(__int64 result,
                                                          _DWORD* a2,
                                                          __int64 a3);
_QWORD* game_UnitSkillList_EachIndirectSkill_lambda0_Clone(__int64 a1);
__int64 game_UnitSkillList_EachIndirectSkill_lambda0_Invoke(__int64 a1,
                                                            _DWORD* a2,
                                                            __int64 a3);
__int64 game_UnitSkillList_UpdateCommand_lambda0_Invoke(__int64 result,
                                                        _DWORD* a2, __int64 a3);
__int64 game_UnitSkillList_UpdateCommand_lambda1_Invoke(__int64 result,
                                                        _DWORD* a2, __int64 a3);
__int64 game_UnitSkillList_UpdateCommand_lambda2_Invoke(__int64 result,
                                                        _DWORD* a2, __int64 a3);
__int64 game_UnitSkillList_UpdateCommand_lambda3_Invoke(__int64 result,
                                                        _DWORD* a2, __int64 a3);
__int64 game_UnitSkillList_UpdateCommand_lambda4_Invoke(__int64 result,
                                                        _DWORD* a2);
__int64 game_UnitSkillList_UpdateCommand_lambda5_Invoke(__int64 result,
                                                        unsigned __int16* a2);

bool game_UnitSkillList_Remove(__int64 a1, _WORD* a2, __int64 a3)
{
  _QWORD* v3;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned int* v13;
  unsigned int* v14;
  unsigned int* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  int v23;
  __int64 v24;
  int v25;
  __int64 v26;
  unsigned int* v27;
  int* v28;
  __int64 v29;
  int v30;
  __int64 v31;
  int v32;
  int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD v39[4];
  _QWORD* v40;
  unsigned int* v41;
  unsigned int* v42;
  __int64 v43;

  v3 = (_QWORD*)(a1 + 80);
  if ((*a2 & *(_WORD*)(a1 + 80)) == 0) {
    return false;
  }
  v5 = v39;
  v42 = nullptr;
  v43 = 0;
  v41 = nullptr;
  v39[0] = GameData_1fa0fe8;
  v39[1] = &v41;
  v6 = *(_QWORD*)(a1 + 32);
  v7 = *(_QWORD*)(a1 + 40);
  v40 = v39;
  if ((int)((unsigned __int64)(v7 - v6) >> 2) < 1) {
    goto LABEL_12;
  }
  v8 = GameData_21c99b0;
  v10 = 0;
  v11 = 0;
  do {
    if ((((unsigned __int16)*a2 >>
          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v8 + 64) +
                               8LL * (*(_DWORD*)(v6 + v10) & 0xFFF)) +
                    104LL)) &
         1) != 0) {
      if (v40 == nullptr) {
        GameRoutine_60a310(0, a2, a3);
      }
      (*(void (**)(_QWORD*, __int64))(*v40 + 48LL))(v40, v6 + v10);
      v8 = GameData_21c99b0;
      v6 = *(_QWORD*)(a1 + 32);
      v7 = *(_QWORD*)(a1 + 40);
    }
    ++v11;
    v10 += 4;
  } while (v11 < (int)((unsigned __int64)(v7 - v6) >> 2));
  v5 = v40;
  if (v40 == v39) {
  LABEL_12:
    v12 = 32;
  }
  else {
    if (v40 == nullptr) {
      goto LABEL_14;
    }
    v12 = 40;
  }
  (*(void (**)(_QWORD*, _WORD*))(*v5 + v12))(v5, a2);
LABEL_14:
  v14 = v41;
  v13 = v42;
  if (v42 == v41) {
    v27 = v41;
    if (v41 == nullptr) {
      return v13 != v14;
    }
    goto LABEL_30;
  }
  v15 = v41;
  do {
    UnitSkillList_84d980((__int64*)a1, v15++);
  } while (v15 != v13);
  v16 = *(_QWORD*)(a1 + 32);
  v17 = *(_QWORD*)(a1 + 40);
  *v3 = 0;
  v3[1] = 0;
  v18 = v17 - v16;
  if ((int)((unsigned __int64)(v17 - v16) >> 2) >= 1) {
    v19 = GameData_21c99b0;
    v20 = (int)(v18 >> 2);
    v21 = v20 <= 1 ? 1LL : (int)(v18 >> 2);
    if (v20 >= 2) {
      v28 = (int*)(v16 + 4);
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      do {
        v26 += 2;
        v29 = *(_QWORD*)(*(_QWORD*)(v19 + 64) + 8LL * (*(v28 - 1) & 0xFFF));
        v30 = v25 | (1 << *(_BYTE*)(v29 + 104));
        *(_WORD*)(a1 + 80) = v30;
        v31 = (1LL << *(_BYTE*)(v29 + 250)) | v24;
        *(_QWORD*)(a1 + 88) = v31;
        v32 = (1 << *(_BYTE*)(v29 + 115)) | v23;
        *(_DWORD*)(a1 + 84) = v32;
        v33 = v22 | *(unsigned __int16*)(*(_QWORD*)(v29 + 24) + 1064LL);
        *(_WORD*)(a1 + 82) = v33;
        v34 = *v28;
        v28 += 2;
        v35 = *(_QWORD*)(*(_QWORD*)(v19 + 64) + 8LL * (v34 & 0xFFF));
        v25 = v30 | (1 << *(_BYTE*)(v35 + 104));
        *(_WORD*)(a1 + 80) = v25;
        v24 = (1LL << *(_BYTE*)(v35 + 250)) | v31;
        *(_QWORD*)(a1 + 88) = v24;
        v23 = (1 << *(_BYTE*)(v35 + 115)) | v32;
        *(_DWORD*)(a1 + 84) = v23;
        v22 = v33 | *(unsigned __int16*)(*(_QWORD*)(v35 + 24) + 1064LL);
        *(_WORD*)(a1 + 82) = v22;
      } while ((v21 & 0x7FFFFFFFFFFFFFFELL) != v26);
    }
    else {
      LOWORD(v22) = 0;
      v23 = 0;
      v24 = 0;
      LOWORD(v25) = 0;
      v26 = 0;
    }
    if ((v21 & 1) != 0) {
      v36 = *(_QWORD*)(*(_QWORD*)(v19 + 64) +
                       8LL * (*(_DWORD*)(v16 + 4 * v26) & 0xFFF));
      *(_WORD*)(a1 + 80) = v25 | (1 << *(_BYTE*)(v36 + 104));
      *(_QWORD*)(a1 + 88) = (1LL << *(_BYTE*)(v36 + 250)) | v24;
      *(_DWORD*)(a1 + 84) = (1 << *(_BYTE*)(v36 + 115)) | v23;
      *(_WORD*)(a1 + 82) = v22 | *(_WORD*)(*(_QWORD*)(v36 + 24) + 1064LL);
    }
  }
  v27 = v41;
  if (v41 != nullptr) {
  LABEL_30:
    v42 = v27;
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v37,
                                  v27);
  }
  return v13 != v14;
}

__int64 game_UnitSkillList_GetMaxValue(_QWORD* a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _QWORD v16[4];
  _QWORD* v17;
  unsigned int v18;

  v3 = a1[11];
  v4 = *a2;
  v18 = 0;
  if ((v4 & v3) != 0) {
    v16[0] = GameData_1fa1168;
    v16[1] = a1;
    v6 = v16;
    v16[2] = &v18;
    v7 = a1[4];
    v8 = a1[5];
    v17 = v16;
    if ((int)((unsigned __int64)(v8 - v7) >> 2) < 1) {
      goto LABEL_11;
    }
    v10 = 0;
    v11 = 0;
    v12 = GameData_212c880[0];
    v13 = *GameData_212c880[0];
    do {
      if ((((unsigned __int64)*a2 >>
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v13 + 64) +
                                 8LL * (*(_DWORD*)(v7 + v10) & 0xFFF)) +
                      250LL)) &
           1) != 0) {
        if (v17 == nullptr) {
          GameRoutine_60a310(0, a2, a3);
        }
        (*(void (**)(_QWORD*, __int64))(*v17 + 48LL))(v17, v7 + v10);
        v13 = *v12;
        v7 = a1[4];
        v8 = a1[5];
      }
      ++v11;
      v10 += 4;
    } while (v11 < (int)((unsigned __int64)(v8 - v7) >> 2));
    v6 = v17;
    if (v17 == v16) {
    LABEL_11:
      v14 = 32;
    }
    else {
      if (v17 == nullptr) {
        return v18;
      }
      v14 = 40;
    }
    (*(void (**)(_QWORD*, __int64*, __int64))(*v6 + v14))(v6, a2, a3);
    return v18;
  }
  return 0;
}

__int64 game_UnitSkillList_GetTotalValue(_QWORD* a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _QWORD v16[4];
  _QWORD* v17;
  unsigned int v18;

  v3 = a1[11];
  v4 = *a2;
  v18 = 0;
  if ((v4 & v3) != 0) {
    v16[0] = GameData_1fa11e8;
    v16[1] = a1;
    v6 = v16;
    v16[2] = &v18;
    v7 = a1[4];
    v8 = a1[5];
    v17 = v16;
    if ((int)((unsigned __int64)(v8 - v7) >> 2) < 1) {
      goto LABEL_11;
    }
    v10 = 0;
    v11 = 0;
    v12 = GameData_212c880[0];
    v13 = *GameData_212c880[0];
    do {
      if ((((unsigned __int64)*a2 >>
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v13 + 64) +
                                 8LL * (*(_DWORD*)(v7 + v10) & 0xFFF)) +
                      250LL)) &
           1) != 0) {
        if (v17 == nullptr) {
          GameRoutine_60a310(0, a2, a3);
        }
        (*(void (**)(_QWORD*, __int64))(*v17 + 48LL))(v17, v7 + v10);
        v13 = *v12;
        v7 = a1[4];
        v8 = a1[5];
      }
      ++v11;
      v10 += 4;
    } while (v11 < (int)((unsigned __int64)(v8 - v7) >> 2));
    v6 = v17;
    if (v17 == v16) {
    LABEL_11:
      v14 = 32;
    }
    else {
      if (v17 == nullptr) {
        return v18;
      }
      v14 = 40;
    }
    (*(void (**)(_QWORD*, __int64*, __int64))(*v6 + v14))(v6, a2, a3);
    return v18;
  }
  return 0;
}

float game_UnitSkillList_GetTotalRatio(_QWORD* a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  _QWORD v15[4];
  _QWORD* v16;
  float v17;

  v3 = *a2;
  v17 = 1.0;
  if ((v3 & a1[11]) != 0) {
    v15[0] = GameData_1fa1268;
    v15[1] = a1;
    v5 = v15;
    v15[2] = &v17;
    v6 = a1[4];
    v7 = a1[5];
    v16 = v15;
    if ((int)((unsigned __int64)(v7 - v6) >> 2) < 1) {
      goto LABEL_11;
    }
    v9 = 0;
    v10 = 0;
    v11 = GameData_212c880[0];
    v12 = *GameData_212c880[0];
    do {
      if ((((unsigned __int64)*a2 >>
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v12 + 64) +
                                 8LL * (*(_DWORD*)(v6 + v9) & 0xFFF)) +
                      250LL)) &
           1) != 0) {
        if (v16 == nullptr) {
          GameRoutine_60a310(0, a2, a3);
        }
        (*(void (**)(_QWORD*, __int64))(*v16 + 48LL))(v16, v6 + v9);
        v12 = *v11;
        v6 = a1[4];
        v7 = a1[5];
      }
      ++v10;
      v9 += 4;
    } while (v10 < (int)((unsigned __int64)(v7 - v6) >> 2));
    v5 = v16;
    if (v16 == v15) {
    LABEL_11:
      v13 = 32;
    }
    else {
      if (v16 == nullptr) {
        return v17;
      }
      v13 = 40;
    }
    (*(void (**)(_QWORD*, __int64*, __int64))(*v5 + v13))(v5, a2, a3);
    return v17;
  }
  return 1.0;
}

__int64 game_UnitSkillList_GetWorkSkill(_QWORD* a1, __int64* a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  _QWORD v16[4];
  _QWORD* v17;
  __int64 v18;

  v3 = a1[11];
  v4 = *a2;
  v18 = 0;
  if ((v4 & v3) != 0) {
    v16[0] = GameData_1fa12e8;
    v16[1] = a1;
    v6 = v16;
    v16[2] = &v18;
    v7 = a1[4];
    v8 = a1[5];
    v17 = v16;
    if ((int)((unsigned __int64)(v8 - v7) >> 2) < 1) {
      goto LABEL_11;
    }
    v10 = 0;
    v11 = 0;
    v12 = GameData_212c880[0];
    v13 = *GameData_212c880[0];
    do {
      if ((((unsigned __int64)*a2 >>
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v13 + 64) +
                                 8LL * (*(_DWORD*)(v7 + v10) & 0xFFF)) +
                      250LL)) &
           1) != 0) {
        if (v17 == nullptr) {
          GameRoutine_60a310(0, a2, a3);
        }
        (*(void (**)(_QWORD*, __int64))(*v17 + 48LL))(v17, v7 + v10);
        v13 = *v12;
        v7 = a1[4];
        v8 = a1[5];
      }
      ++v11;
      v10 += 4;
    } while (v11 < (int)((unsigned __int64)(v8 - v7) >> 2));
    v6 = v17;
    if (v17 == v16) {
    LABEL_11:
      v14 = 32;
    }
    else {
      if (v17 == nullptr) {
        return v18;
      }
      v14 = 40;
    }
    (*(void (**)(_QWORD*, __int64*, __int64))(*v6 + v14))(v6, a2, a3);
    return v18;
  }
  return 0;
}

__int64 game_UnitSkillList_IsVanish(__int64 a1, __int64 a2, __int64 a3)
{
  char v3;
  char v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  _QWORD v15[4];
  _QWORD* v16;
  char v17;

  v3 = *(_BYTE*)(a1 + 93);
  v4 = 0;
  v17 = 0;
  if ((v3 & 0x10) != 0) {
    v15[0] = GameData_1fa1368;
    v15[1] = a1;
    v6 = v15;
    v15[2] = &v17;
    v7 = *(_QWORD*)(a1 + 32);
    v8 = *(_QWORD*)(a1 + 40);
    v16 = v15;
    if ((int)((unsigned __int64)(v8 - v7) >> 2) < 1) {
      goto LABEL_11;
    }
    v9 = 0;
    v10 = 0;
    v11 = GameData_212c880[0];
    v12 = *GameData_212c880[0];
    do {
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v12 + 64) +
                               8LL * (*(_DWORD*)(v7 + v9) & 0xFFF)) +
                    250LL) == 44) {
        if (v16 == nullptr) {
          GameRoutine_60a310(0, a2, a3);
        }
        (*(void (**)(_QWORD*, __int64))(*v16 + 48LL))(v16, v7 + v9);
        v12 = *v11;
        v7 = *(_QWORD*)(a1 + 32);
        v8 = *(_QWORD*)(a1 + 40);
      }
      ++v10;
      v9 += 4;
    } while (v10 < (int)((unsigned __int64)(v8 - v7) >> 2));
    v6 = v16;
    if (v16 == v15) {
    LABEL_11:
      v13 = 32;
    }
    else {
      if (v16 == nullptr) {
      LABEL_13:
        v4 = v17;
        return v4 & 1;
      }
      v13 = 40;
    }
    (*(void (**)(_QWORD*, __int64, __int64))(*v6 + v13))(v6, a2, a3);
    goto LABEL_13;
  }
  return v4 & 1;
}

__int64 game_UnitSkillList_EachDirectSkill(__int64 a1, _WORD* a2, __int64 a3)
{
  __int64 v4;
  _BYTE* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  _BYTE v18[32];
  _BYTE* v19;

  v4 = *(_QWORD*)(a3 + 32);
  if (v4 != 0) {
    if (v4 == a3) {
      v19 = v18;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 24LL))(v4, v18);
      v6 = v19;
    }
    else {
      v6 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      v19 = v6;
    }
    v8 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
    v7 = v8;
    *v8 = GameData_1fa13e8;
    v9 = v8 + 2;
    if (v6 != nullptr) {
      if (v6 == v18) {
        v8[6] = v9;
        (*(void (**)(_BYTE*))(*(_QWORD*)v6 + 24LL))(v6);
      }
      else {
        v8[6] = (*(__int64 (**)(_BYTE*, _QWORD*))(*(_QWORD*)v6 + 16LL))(v6, v9);
      }
    }
    else {
      v8[6] = 0;
    }
  }
  else {
    v19 = nullptr;
    v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
    v7[6] = 0;
    *v7 = GameData_1fa13e8;
  }
  if ((*a2 & *(_WORD*)(a1 + 80)) != 0) {
    v10 = *(_QWORD*)(a1 + 32);
    v11 = *(_QWORD*)(a1 + 40);
    if ((int)((unsigned __int64)(v11 - v10) >> 2) >= 1) {
      v12 = 0;
      v13 = 0;
      v14 = GameData_212c880[0];
      v15 = *GameData_212c880[0];
      do {
        if ((((unsigned __int16)*a2 >>
              *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v15 + 64) +
                                   8LL * (*(_DWORD*)(v10 + v12) & 0xFFF)) +
                        104LL)) &
             1) != 0) {
          (*(void (**)(_QWORD*, __int64))(*v7 + 48LL))(v7, v10 + v12);
          v15 = *v14;
          v10 = *(_QWORD*)(a1 + 32);
          v11 = *(_QWORD*)(a1 + 40);
        }
        ++v13;
        v12 += 4;
      } while (v13 < (int)((unsigned __int64)(v11 - v10) >> 2));
    }
  }
  (*(void (**)(_QWORD*))(*v7 + 40LL))(v7);
  result = (__int64)v19;
  if (v19 == v18) {
    v17 = 32;
  }
  else {
    if (v19 == nullptr) {
      return result;
    }
    v17 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v19 + v17))((__int64)v19);
}

__int64 game_UnitSkillList_EachIndirectSkill(__int64 a1, _WORD* a2, __int64 a3)
{
  __int64 v4;
  _BYTE* v6;
  _QWORD* v7;
  _QWORD* v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 result;
  __int64 v17;
  _BYTE v18[32];
  _BYTE* v19;

  v4 = *(_QWORD*)(a3 + 32);
  if (v4 != 0) {
    if (v4 == a3) {
      v19 = v18;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v4 + 24LL))(v4, v18);
      v6 = v19;
    }
    else {
      v6 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      v19 = v6;
    }
    v8 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
    v7 = v8;
    *v8 = GameData_1fa1468;
    v9 = v8 + 2;
    if (v6 != nullptr) {
      if (v6 == v18) {
        v8[6] = v9;
        (*(void (**)(_BYTE*))(*(_QWORD*)v6 + 24LL))(v6);
      }
      else {
        v8[6] = (*(__int64 (**)(_BYTE*, _QWORD*))(*(_QWORD*)v6 + 16LL))(v6, v9);
      }
    }
    else {
      v8[6] = 0;
    }
  }
  else {
    v19 = nullptr;
    v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
    v7[6] = 0;
    *v7 = GameData_1fa1468;
  }
  if ((*a2 & *(_WORD*)(a1 + 80)) != 0) {
    v10 = *(_QWORD*)(a1 + 32);
    v11 = *(_QWORD*)(a1 + 40);
    if ((int)((unsigned __int64)(v11 - v10) >> 2) >= 1) {
      v12 = 0;
      v13 = 0;
      v14 = GameData_212c880[0];
      v15 = *GameData_212c880[0];
      do {
        if ((((unsigned __int16)*a2 >>
              *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v15 + 64) +
                                   8LL * (*(_DWORD*)(v10 + v12) & 0xFFF)) +
                        104LL)) &
             1) != 0) {
          (*(void (**)(_QWORD*, __int64))(*v7 + 48LL))(v7, v10 + v12);
          v15 = *v14;
          v10 = *(_QWORD*)(a1 + 32);
          v11 = *(_QWORD*)(a1 + 40);
        }
        ++v13;
        v12 += 4;
      } while (v13 < (int)((unsigned __int64)(v11 - v10) >> 2));
    }
  }
  (*(void (**)(_QWORD*))(*v7 + 40LL))(v7);
  result = (__int64)v19;
  if (v19 == v18) {
    v17 = 32;
  }
  else {
    if (v19 == nullptr) {
      return result;
    }
    v17 = 40;
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)v19 + v17))((__int64)v19);
}

bool game_UnitSkillList_UpdateLearn(__int64* a1, __int64 a2)
{
  __int64 v3;
  _QWORD* v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _BOOL8 result;
  __int64 v15;
  bool v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned int* v21;
  unsigned int* v22;
  unsigned __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int16 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned int* v43;
  unsigned int* v44;
  unsigned __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  int v59;
  int v60;
  __int64 v61;
  int v62;
  __int64 v63;
  int* v64;
  __int64 v65;
  int v66;
  __int64 v67;
  int v68;
  int v69;
  int v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned int* v74;
  unsigned int* v75;
  unsigned __int64 v76;
  __int64 v77;
  _QWORD v78[2];
  __int64 v79;
  _QWORD* v80;

  if (a2 == 0) {
    return (int)((unsigned __int64)(a1[5] - a1[4]) >> 2) > 0;
  }
  v3 = *a1;
  *((_DWORD*)a1 + 6) = 0;
  a1[10] = 0;
  v4 = a1 + 10;
  a1[11] = 0;
  a1[1] = v3;
  a1[5] = a1[4];
  v6 = *(_QWORD*)(a2 + 392);
  v7 = game_Unit_GetJob(a2);
  v8 = *(_QWORD*)(v6 + 24);
  v9 = *(_QWORD*)(a2 + 400);
  v10 = v7;
  v78[0] = GameData_1fa1568;
  v78[1] = a1;
  v80 = v78;
  v79 = v8 + 96;
  UnitSkillList_67efe0(v6, a2, v78);
  if (v80 == v78) {
    v13 = 32;
  }
  else {
    if (v80 == nullptr) {
      goto LABEL_8;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v80 + v13))((__int64)v80);
LABEL_8:
  if (((*(_QWORD*)(*(_QWORD*)(v6 + 24) + 328LL) -
        *(_QWORD*)(*(_QWORD*)(v6 + 24) + 320LL)) &
       0x3FFFFFFFCLL) == 0) {
    v18 = *(_QWORD*)(a2 + 440);
    if (v18 != 0) {
      v16 = (unsigned int)*(unsigned __int8*)(v18 + 16) - 1 >= 2;
      v19 = 288;
      if (!v16) {
        v19 = 384;
      }
    }
    else {
      v19 = 288;
    }
    v73 = *(_QWORD*)(v10 + 24) + v19;
    v74 = *(unsigned int**)(v73 + 32);
    v75 = *(unsigned int**)(v73 + 40);
    while (v74 != v75) {
      v76 = *v74;
      v77 = *(_QWORD*)(v8 + 96);
      if (((v76 >> 5) & 0x7F) + 1 > (*(_QWORD*)(v8 + 104) - v77) >> 2 ||
          ((*(_DWORD*)(v77 + 4 * ((v76 >> 5) & 0x7F)) >> v76) & 1) == 0) {
        UnitSkillList_84cc00(a1, v74, 1);
      }
      ++v74;
    }
  }
  if (v10 != v9) {
    v15 = *(_QWORD*)(a2 + 440);
    if (v15 != 0) {
      v16 = (unsigned int)*(unsigned __int8*)(v15 + 16) - 1 >= 2;
      v17 = 288;
      if (!v16) {
        v17 = 384;
      }
    }
    else {
      v17 = 288;
    }
    v20 = *(_QWORD*)(v9 + 24) + v17;
    v21 = *(unsigned int**)(v20 + 32);
    v22 = *(unsigned int**)(v20 + 40);
    while (v21 != v22) {
      v23 = *v21;
      v24 = *(_QWORD*)(v8 + 96);
      if (((v23 >> 5) & 0x7F) + 1 > (*(_QWORD*)(v8 + 104) - v24) >> 2 ||
          ((*(_DWORD*)(v24 + 4 * ((v23 >> 5) & 0x7F)) >> v23) & 1) == 0) {
        UnitSkillList_84cc00(a1, v21, 1);
      }
      ++v21;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ee1a8,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21ee1a8) != 0) {
    GameData_21ee1a0 = 78;
    __cxa_guard_release(&GameData_21ee1a8);
  }
  v25 = v78;
  v79 = v8 + 96;
  v26 = GameData_21ee1a0;
  v78[0] = GameData_1fa15e8;
  v78[1] = a1;
  v80 = v78;
  v27 = GameData_212c880[0];
  if (((unsigned __int16)GameData_21ee1a0 & *(_WORD*)(a2 + 1440)) == 0) {
    goto LABEL_38;
  }
  v28 = *(_QWORD*)(a2 + 1400);
  v29 = *(_QWORD*)(a2 + 1392);
  if ((int)((unsigned __int64)(v28 - v29) >> 2) < 1) {
    v25 = v78;
  LABEL_38:
    v34 = 32;
    goto LABEL_39;
  }
  v30 = *GameData_212c880[0];
  v31 = 0;
  v32 = 0;
  do {
    if (((unsigned __int16)(1 << *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v30 + 64) +
                                                      8LL * (*(_DWORD*)(v29 +
                                                                        v31) &
                                                             0xFFF)) +
                                           104LL)) &
         (unsigned __int16)v26) != 0) {
      v33 = v80;
      if (v80 == nullptr) {
      LABEL_88:
        GameRoutine_60a310_alt1(v33, v11);
      }
      (*(void (**)(_QWORD*, __int64))(*v80 + 48LL))(v80, v29 + v31);
      v30 = *v27;
      v28 = *(_QWORD*)(a2 + 1400);
      v29 = *(_QWORD*)(a2 + 1392);
      v26 = GameData_21ee1a0;
    }
    ++v32;
    v31 += 4;
  } while (v32 < (int)((unsigned __int64)(v28 - v29) >> 2));
  v25 = v80;
  if (v80 == v78) {
    goto LABEL_38;
  }
  if (v80 != nullptr) {
    v34 = 40;
  LABEL_39:
    (*(void (**)(_QWORD*, __int64, __int64))(*v25 + v34))(v25, v11, v12);
  }
  v35 = GameData_21c9868;
  v36 = GameData_21c9870;
  while (v35 != v36) {
    if (*(_QWORD*)v35 != 0) {
      v37 = *(_QWORD**)(*(_QWORD*)v35 + 24LL);
      v38 = v37[138];
      if (v38 != 0) {
        v39 = *(_QWORD*)(*(_QWORD*)(v38 + 24) + 1104LL);
        if (v39 != 0) {
          v40 = *(unsigned __int16*)(v39 + 412);
          if (*(_WORD*)(v39 + 412) != 0) {
            v41 = *(_QWORD*)(a2 + 560);
            v42 = *(unsigned __int16*)(v39 + 16);
            if (v42 >= (*(_QWORD*)(a2 + 568) - v41) >> 1) {
              if (v40 != 0) {
                goto LABEL_41;
              }
            }
            else if ((*(_WORD*)(v41 + 2 * v42) & 0x3FFu) < v40) {
              goto LABEL_41;
            }
            v43 = (unsigned int*)v37[100];
            v44 = (unsigned int*)v37[101];
            while (v43 != v44) {
              v45 = *v43;
              v46 = *(_QWORD*)(v8 + 96);
              if (((v45 >> 5) & 0x7F) + 1 > (*(_QWORD*)(v8 + 104) - v46) >> 2 ||
                  ((*(_DWORD*)(v46 + 4 * ((v45 >> 5) & 0x7F)) >> v45) & 1) ==
                      0) {
                UnitSkillList_84cc00(a1, v43, 1);
              }
              ++v43;
            }
          }
        }
      }
    }
  LABEL_41:
    v35 += 8;
  }
  v47 = *(_QWORD*)(a2 + 1584);
  v48 = *(_QWORD*)(a2 + 1592);
  if (v47 != v48) {
    v49 = v78;
    v79 = v8 + 96;
    v78[0] = GameData_1fa1668;
    v78[1] = a1;
    v80 = v78;
    if ((int)((unsigned __int64)(v48 - v47) >> 2) < 1) {
      goto LABEL_66;
    }
    v50 = 0;
    v51 = 0;
    do {
      v33 = v80;
      if (v80 == nullptr) {
        goto LABEL_88;
      }
      (*(void (**)(_QWORD*, __int64))(*v80 + 48LL))(v80, v47 + v50);
      v47 = *(_QWORD*)(a2 + 1584);
      ++v51;
      v50 += 4;
    } while (v51 < (int)((unsigned __int64)(*(_QWORD*)(a2 + 1592) - v47) >> 2));
    v49 = v80;
    if (v80 == v78) {
    LABEL_66:
      v52 = 32;
    LABEL_67:
      (*(void (**)(_QWORD*, __int64, __int64))(*v49 + v52))(v49, v11, v12);
    }
    else if (v80 != nullptr) {
      v52 = 40;
      goto LABEL_67;
    }
  }
  v53 = a1[4];
  v54 = a1[5];
  *v4 = 0;
  a1[11] = 0;
  v55 = v54 - v53;
  if ((int)((unsigned __int64)(v54 - v53) >> 2) < 1) {
    return false;
  }
  v56 = *v27;
  v57 = (int)(v55 >> 2);
  if (v57 <= 1) {
    v58 = 1;
  }
  else {
    v58 = (int)(v55 >> 2);
  }
  if (v57 >= 2) {
    v64 = (int*)(v53 + 4);
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    do {
      v63 += 2;
      v65 = *(_QWORD*)(*(_QWORD*)(v56 + 64) + 8LL * (*(v64 - 1) & 0xFFF));
      v66 = v62 | (1 << *(_BYTE*)(v65 + 104));
      *((_WORD*)a1 + 40) = v66;
      v67 = (1LL << *(_BYTE*)(v65 + 250)) | v61;
      a1[11] = v67;
      v68 = (1 << *(_BYTE*)(v65 + 115)) | v60;
      *((_DWORD*)a1 + 21) = v68;
      v69 = v59 | *(unsigned __int16*)(*(_QWORD*)(v65 + 24) + 1064LL);
      *((_WORD*)a1 + 41) = v69;
      v70 = *v64;
      v64 += 2;
      v71 = *(_QWORD*)(*(_QWORD*)(v56 + 64) + 8LL * (v70 & 0xFFF));
      v62 = v66 | (1 << *(_BYTE*)(v71 + 104));
      *((_WORD*)a1 + 40) = v62;
      v61 = (1LL << *(_BYTE*)(v71 + 250)) | v67;
      a1[11] = v61;
      v60 = (1 << *(_BYTE*)(v71 + 115)) | v68;
      *((_DWORD*)a1 + 21) = v60;
      v59 = v69 | *(unsigned __int16*)(*(_QWORD*)(v71 + 24) + 1064LL);
      *((_WORD*)a1 + 41) = v59;
    } while ((v58 & 0x7FFFFFFFFFFFFFFELL) != v63);
  }
  else {
    LOWORD(v59) = 0;
    v60 = 0;
    v61 = 0;
    LOWORD(v62) = 0;
    v63 = 0;
  }
  result = true;
  if ((v58 & 1) != 0) {
    v72 = *(_QWORD*)(*(_QWORD*)(v56 + 64) +
                     8LL * (*(_DWORD*)(v53 + 4 * v63) & 0xFFF));
    *((_WORD*)a1 + 40) = v62 | (1 << *(_BYTE*)(v72 + 104));
    a1[11] = (1LL << *(_BYTE*)(v72 + 250)) | v61;
    *((_DWORD*)a1 + 21) = (1 << *(_BYTE*)(v72 + 115)) | v60;
    *((_WORD*)a1 + 41) = v59 | *(_WORD*)(*(_QWORD*)(v72 + 24) + 1064LL);
  }
  return result;
}

__int64 game_UnitSkillList_GetRangeAddImpl_lambda0_Clone(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_DWORD*)(result + 32) = 0;
  *(_QWORD*)result = GameData_1fa1068;
  *(_QWORD*)(result + 8) = 0;
  if (result != a1) {
    v3 = result;
    GameRoutine_7fb7c0(result + 8);
    result = v3;
  }
  *(_DWORD*)(result + 32) = *(_DWORD*)(a1 + 32);
  *(_QWORD*)(result + 40) = *(_QWORD*)(a1 + 40);
  return result;
}

__int64 game_UnitSkillList_GetRangeAddImpl_lambda0_CloneInto(__int64 a1,
                                                             __int64 a2)
{
  __int64 result;

  *(_QWORD*)(a2 + 8) = 0;
  result = a2 + 8;
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)(a2 + 24) = 0;
  *(_DWORD*)(a2 + 32) = 0;
  *(_QWORD*)a2 = GameData_1fa1068;
  if (a2 != a1) {
    result = GameRoutine_7fb7c0(result);
  }
  *(_DWORD*)(a2 + 32) = *(_DWORD*)(a1 + 32);
  *(_QWORD*)(a2 + 40) = *(_QWORD*)(a1 + 40);
  return result;
}

__int64 game_UnitSkillList_GetUseFactorImpl_lambda0_Clone(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_DWORD*)(result + 32) = 0;
  *(_QWORD*)result = GameData_1fa10e8;
  *(_QWORD*)(result + 8) = 0;
  if (result != a1) {
    v3 = result;
    GameRoutine_7fb7c0(result + 8);
    result = v3;
  }
  *(_DWORD*)(result + 32) = *(_DWORD*)(a1 + 32);
  *(_QWORD*)(result + 40) = *(_QWORD*)(a1 + 40);
  return result;
}

__int64 game_UnitSkillList_GetUseFactorImpl_lambda0_CloneInto(__int64 a1,
                                                              __int64 a2)
{
  __int64 result;

  *(_QWORD*)(a2 + 8) = 0;
  result = a2 + 8;
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)(a2 + 24) = 0;
  *(_DWORD*)(a2 + 32) = 0;
  *(_QWORD*)a2 = GameData_1fa10e8;
  if (a2 != a1) {
    result = GameRoutine_7fb7c0(result);
  }
  *(_DWORD*)(a2 + 32) = *(_DWORD*)(a1 + 32);
  *(_QWORD*)(a2 + 40) = *(_QWORD*)(a1 + 40);
  return result;
}

_QWORD* game_UnitSkillList_EachDirectSkill_lambda0_Clone(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *result = GameData_1fa13e8;
  v3 = result + 2;
  v4 = *(_QWORD**)(a1 + 48);
  if (v4 != nullptr) {
    if (v4 == (_QWORD*)(a1 + 16)) {
      result[6] = v3;
      v5 = result;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
    }
    else {
      v5 = result;
      result[6] = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*, _QWORD*))(
          *v4 + 16LL))(v4, v4, v3);
    }
    return v5;
  }
  else {
    result[6] = 0;
  }
  return result;
}

__int64 game_UnitSkillList_EachDirectSkill_lambda0_Invoke(__int64 result,
                                                          _DWORD* a2,
                                                          __int64 a3)
{
  _BYTE* v3;
  __int64 v4;

  v3 = *(_BYTE**)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                             8LL * (*a2 & 0xFFF)) +
                  80LL);
  if (v3 != nullptr && *v3 != 0) {
    v4 = *(_QWORD*)(result + 48);
    if (v4 == 0) {
      GameRoutine_60a310((unsigned __int8)v4, a2, a3);
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
  }
  return result;
}

_QWORD* game_UnitSkillList_EachIndirectSkill_lambda0_Clone(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *result = GameData_1fa1468;
  v3 = result + 2;
  v4 = *(_QWORD**)(a1 + 48);
  if (v4 != nullptr) {
    if (v4 == (_QWORD*)(a1 + 16)) {
      result[6] = v3;
      v5 = result;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
    }
    else {
      v5 = result;
      result[6] = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*, _QWORD*))(
          *v4 + 16LL))(v4, v4, v3);
    }
    return v5;
  }
  else {
    result[6] = 0;
  }
  return result;
}

__int64 game_UnitSkillList_EachIndirectSkill_lambda0_Invoke(__int64 a1,
                                                            _DWORD* a2,
                                                            __int64 a3)
{
  __int64 result;
  _BYTE* v4;

  result = *(_QWORD*)(a1 + 48);
  v4 = *(_BYTE**)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                             8LL * (*a2 & 0xFFF)) +
                  80LL);
  if (v4 == nullptr || *v4 == 0) {
    if (result == 0) {
      GameRoutine_60a310((unsigned __int8)result, a2, a3);
    }
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 48LL))(result);
  }
  return result;
}

__int64 game_UnitSkillList_UpdateCommand_lambda0_Invoke(__int64 result,
                                                        _DWORD* a2, __int64 a3)
{
  unsigned __int8* v3;
  __int64* v4;
  int v6;
  int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int* v12;
  int* v13;
  int v14;
  char v16;
  __int64 v17;
  _DWORD* v18;
  int v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;

  v4 = *(__int64**)(result + 8);
  v3 = *(unsigned __int8**)(result + 16);
  v6 = *v3;
  v7 = *((_DWORD*)v3 + 1);
  v8 = GameData_212c880[0];
  v9 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v10 = *(_QWORD*)(v9 + 8LL * (*a2 & 0xFFF));
  v22[0] = GameData_1fa14e8;
  v22[1] = v4;
  v23 = v22;
  if (*(_QWORD*)(v10 + 552) != 0) {
    if (*(_BYTE*)(v10 + 560) != 0) {
      v11 = *(_QWORD*)(v10 + 24);
      v12 = *(int**)(v11 + 64);
      v13 = *(int**)(v11 + 72);
      if (v12 != v13) {
        do {
          if (v23 == nullptr) {
            GameRoutine_60a310(0, a2, a3);
          }
          (*(void (**)(_QWORD*, int*))(*v23 + 48LL))(v23, v12);
          v14 = *v12++;
        } while (v7 >= *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                      8LL * (v14 & 0xFFF)) +
                                           560LL) &&
                 v12 != v13);
      }
      goto LABEL_10;
    }
    if (v6 != 0) {
      v17 = *(_QWORD*)(v10 + 24);
      v19 = *(_DWORD*)(v17 + 4);
      v18 = (_DWORD*)(v17 + 4);
      v20 = v19 & 0xFFF;
      if ((v19 & 0xFFF) == 0) {
      LABEL_10:
        v16 = 1;
        goto LABEL_16;
      }
      v16 = 1;
      if ((GameRoutine_6fc650(*(_QWORD*)(v9 + 8 * v20)) & 1) != 0) {
        UnitSkillList_84cc00_alt1(v4, v18, 1);
      }
    }
    else {
      v16 = 0;
    }
  LABEL_16:
    result = (__int64)v23;
    if (v23 == v22) {
      v21 = 32;
    }
    else {
      if (v23 == nullptr) {
        goto LABEL_21;
      }
      v21 = 40;
    }
    result = (*(__int64 (**)(_QWORD*, _DWORD*))(*v23 + v21))(v23, a2);
  LABEL_21:
    if ((v16 & 1) != 0) {
      return result;
    }
  }
  if ((*a2 & 0xFFF) != 0) {
    result = GameRoutine_6fc650(
        *(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * (*a2 & 0xFFF)));
    if ((result & 1) != 0) {
      return UnitSkillList_84cc00_alt1(v4, a2, 1);
    }
  }
  return result;
}

__int64 game_UnitSkillList_UpdateCommand_lambda1_Invoke(__int64 result,
                                                        _DWORD* a2, __int64 a3)
{
  unsigned __int8* v3;
  __int64* v4;
  int v6;
  int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int* v12;
  int* v13;
  int v14;
  char v16;
  __int64 v17;
  _DWORD* v18;
  int v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;

  v4 = *(__int64**)(result + 8);
  v3 = *(unsigned __int8**)(result + 16);
  v6 = *v3;
  v7 = *((_DWORD*)v3 + 1);
  v8 = GameData_212c880[0];
  v9 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v10 = *(_QWORD*)(v9 + 8LL * (*a2 & 0xFFF));
  v22[0] = GameData_1fa14e8;
  v22[1] = v4;
  v23 = v22;
  if (*(_QWORD*)(v10 + 552) != 0) {
    if (*(_BYTE*)(v10 + 560) != 0) {
      v11 = *(_QWORD*)(v10 + 24);
      v12 = *(int**)(v11 + 64);
      v13 = *(int**)(v11 + 72);
      if (v12 != v13) {
        do {
          if (v23 == nullptr) {
            GameRoutine_60a310(0, a2, a3);
          }
          (*(void (**)(_QWORD*, int*))(*v23 + 48LL))(v23, v12);
          v14 = *v12++;
        } while (v7 >= *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                      8LL * (v14 & 0xFFF)) +
                                           560LL) &&
                 v12 != v13);
      }
      goto LABEL_10;
    }
    if (v6 != 0) {
      v17 = *(_QWORD*)(v10 + 24);
      v19 = *(_DWORD*)(v17 + 4);
      v18 = (_DWORD*)(v17 + 4);
      v20 = v19 & 0xFFF;
      if ((v19 & 0xFFF) == 0) {
      LABEL_10:
        v16 = 1;
        goto LABEL_16;
      }
      v16 = 1;
      if ((GameRoutine_6fc650(*(_QWORD*)(v9 + 8 * v20)) & 1) != 0) {
        UnitSkillList_84cc00_alt1(v4, v18, 1);
      }
    }
    else {
      v16 = 0;
    }
  LABEL_16:
    result = (__int64)v23;
    if (v23 == v22) {
      v21 = 32;
    }
    else {
      if (v23 == nullptr) {
        goto LABEL_21;
      }
      v21 = 40;
    }
    result = (*(__int64 (**)(_QWORD*, _DWORD*))(*v23 + v21))(v23, a2);
  LABEL_21:
    if ((v16 & 1) != 0) {
      return result;
    }
  }
  if ((*a2 & 0xFFF) != 0) {
    result = GameRoutine_6fc650(
        *(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * (*a2 & 0xFFF)));
    if ((result & 1) != 0) {
      return UnitSkillList_84cc00_alt1(v4, a2, 1);
    }
  }
  return result;
}

__int64 game_UnitSkillList_UpdateCommand_lambda2_Invoke(__int64 result,
                                                        _DWORD* a2, __int64 a3)
{
  unsigned __int8* v3;
  __int64* v4;
  int v6;
  int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int* v12;
  int* v13;
  int v14;
  char v16;
  __int64 v17;
  _DWORD* v18;
  int v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;

  v4 = *(__int64**)(result + 8);
  v3 = *(unsigned __int8**)(result + 16);
  v6 = *v3;
  v7 = *((_DWORD*)v3 + 1);
  v8 = GameData_212c880[0];
  v9 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v10 = *(_QWORD*)(v9 + 8LL * (*a2 & 0xFFF));
  v22[0] = GameData_1fa14e8;
  v22[1] = v4;
  v23 = v22;
  if (*(_QWORD*)(v10 + 552) != 0) {
    if (*(_BYTE*)(v10 + 560) != 0) {
      v11 = *(_QWORD*)(v10 + 24);
      v12 = *(int**)(v11 + 64);
      v13 = *(int**)(v11 + 72);
      if (v12 != v13) {
        do {
          if (v23 == nullptr) {
            GameRoutine_60a310(0, a2, a3);
          }
          (*(void (**)(_QWORD*, int*))(*v23 + 48LL))(v23, v12);
          v14 = *v12++;
        } while (v7 >= *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                      8LL * (v14 & 0xFFF)) +
                                           560LL) &&
                 v12 != v13);
      }
      goto LABEL_10;
    }
    if (v6 != 0) {
      v17 = *(_QWORD*)(v10 + 24);
      v19 = *(_DWORD*)(v17 + 4);
      v18 = (_DWORD*)(v17 + 4);
      v20 = v19 & 0xFFF;
      if ((v19 & 0xFFF) == 0) {
      LABEL_10:
        v16 = 1;
        goto LABEL_16;
      }
      v16 = 1;
      if ((GameRoutine_6fc650(*(_QWORD*)(v9 + 8 * v20)) & 1) != 0) {
        UnitSkillList_84cc00_alt1(v4, v18, 1);
      }
    }
    else {
      v16 = 0;
    }
  LABEL_16:
    result = (__int64)v23;
    if (v23 == v22) {
      v21 = 32;
    }
    else {
      if (v23 == nullptr) {
        goto LABEL_21;
      }
      v21 = 40;
    }
    result = (*(__int64 (**)(_QWORD*, _DWORD*))(*v23 + v21))(v23, a2);
  LABEL_21:
    if ((v16 & 1) != 0) {
      return result;
    }
  }
  if ((*a2 & 0xFFF) != 0) {
    result = GameRoutine_6fc650(
        *(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * (*a2 & 0xFFF)));
    if ((result & 1) != 0) {
      return UnitSkillList_84cc00_alt1(v4, a2, 1);
    }
  }
  return result;
}

__int64 game_UnitSkillList_UpdateCommand_lambda3_Invoke(__int64 result,
                                                        _DWORD* a2, __int64 a3)
{
  unsigned __int8* v3;
  __int64* v4;
  int v6;
  int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int* v12;
  int* v13;
  int v14;
  char v16;
  __int64 v17;
  _DWORD* v18;
  int v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;

  v4 = *(__int64**)(result + 8);
  v3 = *(unsigned __int8**)(result + 16);
  v6 = *v3;
  v7 = *((_DWORD*)v3 + 1);
  v8 = GameData_212c880[0];
  v9 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v10 = *(_QWORD*)(v9 + 8LL * (*a2 & 0xFFF));
  v22[0] = GameData_1fa14e8;
  v22[1] = v4;
  v23 = v22;
  if (*(_QWORD*)(v10 + 552) != 0) {
    if (*(_BYTE*)(v10 + 560) != 0) {
      v11 = *(_QWORD*)(v10 + 24);
      v12 = *(int**)(v11 + 64);
      v13 = *(int**)(v11 + 72);
      if (v12 != v13) {
        do {
          if (v23 == nullptr) {
            GameRoutine_60a310(0, a2, a3);
          }
          (*(void (**)(_QWORD*, int*))(*v23 + 48LL))(v23, v12);
          v14 = *v12++;
        } while (v7 >= *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v8 + 64) +
                                                      8LL * (v14 & 0xFFF)) +
                                           560LL) &&
                 v12 != v13);
      }
      goto LABEL_10;
    }
    if (v6 != 0) {
      v17 = *(_QWORD*)(v10 + 24);
      v19 = *(_DWORD*)(v17 + 4);
      v18 = (_DWORD*)(v17 + 4);
      v20 = v19 & 0xFFF;
      if ((v19 & 0xFFF) == 0) {
      LABEL_10:
        v16 = 1;
        goto LABEL_16;
      }
      v16 = 1;
      if ((GameRoutine_6fc650(*(_QWORD*)(v9 + 8 * v20)) & 1) != 0) {
        UnitSkillList_84cc00_alt1(v4, v18, 1);
      }
    }
    else {
      v16 = 0;
    }
  LABEL_16:
    result = (__int64)v23;
    if (v23 == v22) {
      v21 = 32;
    }
    else {
      if (v23 == nullptr) {
        goto LABEL_21;
      }
      v21 = 40;
    }
    result = (*(__int64 (**)(_QWORD*, _DWORD*))(*v23 + v21))(v23, a2);
  LABEL_21:
    if ((v16 & 1) != 0) {
      return result;
    }
  }
  if ((*a2 & 0xFFF) != 0) {
    result = GameRoutine_6fc650(
        *(_QWORD*)(*(_QWORD*)(*v8 + 64) + 8LL * (*a2 & 0xFFF)));
    if ((result & 1) != 0) {
      return UnitSkillList_84cc00_alt1(v4, a2, 1);
    }
  }
  return result;
}

__int64 game_UnitSkillList_UpdateCommand_lambda4_Invoke(__int64 result,
                                                        _DWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int8* v7;
  int v9;
  int v10;
  __int64 v11;
  int* v12;
  int* v13;
  _QWORD* v14;
  int v15;
  char v17;
  __int64 v18;
  __int64 (**v19)();
  __int64 v20;
  __int64 v21;
  unsigned __int8* v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 (**v30)();
  int* v31;
  int* v32;
  int v33;
  char v35;
  __int64 v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  _QWORD v47[4];
  _QWORD* v48;

  v2 = *(_QWORD*)(result + 8);
  v3 = result;
  v4 = GameData_212c880[0];
  v5 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v6 = *(_QWORD*)(v5 + 8LL * (*a2 & 0xFFF));
  if (*(_QWORD*)(v6 + 80) == 0) {
    v18 = *(unsigned __int16*)(v6 + 496);
    if (*(_WORD*)(v6 + 496) == 0) {
      return result;
    }
    v19 = GameData_1fa14e8;
    v20 = 0;
    while (1) {
      v21 = *(_QWORD*)(*(_QWORD*)(v6 + 504) + 16 * v20 + 8);
      if (*(_QWORD*)(v21 + 80) == 0) {
        goto LABEL_14;
      }
      v22 = *(unsigned __int8**)(v3 + 16);
      v23 = *(_WORD*)(v21 + 16) & 0xFFF;
      v24 = *v4;
      v25 = *((_DWORD*)v22 + 1);
      v46 = v23;
      v26 = *v22;
      v27 = *(_QWORD*)(v24 + 64);
      v28 = *(_QWORD*)(v27 + 8 * v23);
      v47[0] = v19;
      v47[1] = v2;
      v48 = v47;
      if (*(_QWORD*)(v28 + 552) == 0) {
        goto LABEL_38;
      }
      if (*(_BYTE*)(v28 + 560) != 0) {
        v29 = *(_QWORD*)(v28 + 24);
        v30 = v19;
        v31 = *(int**)(v29 + 64);
        v32 = *(int**)(v29 + 72);
        if (v31 != v32) {
          while (1) {
            v14 = v48;
            if (v48 == nullptr) {
              break;
            }
            (*(void (**)(_QWORD*, int*))(*v48 + 48LL))(v48, v31);
            v33 = *v31++;
            if (v25 < *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v4 + 64) +
                                                     8LL * (v33 & 0xFFF)) +
                                          560LL) ||
                v31 == v32) {
              goto LABEL_25;
            }
          }
        LABEL_56:
          GameRoutine_60a310_alt1(v14, a2);
        }
      LABEL_25:
        v35 = 1;
        v19 = v30;
      }
      else if (v26 != 0) {
        v36 = *(_QWORD*)(v28 + 24);
        v38 = *(_DWORD*)(v36 + 4);
        v37 = v36 + 4;
        v39 = v38 & 0xFFF;
        if ((v38 & 0xFFF) != 0) {
          v35 = 1;
          if ((GameRoutine_6fc650(*(_QWORD*)(v27 + 8 * v39)) & 1) != 0) {
            UnitSkillList_84cc00(v2, v37, 1);
          }
        }
        else {
          v35 = 1;
        }
      }
      else {
        v35 = 0;
      }
      result = (__int64)v48;
      if (v48 == v47) {
        v40 = 32;
      }
      else {
        if (v48 == nullptr) {
          goto LABEL_37;
        }
        v40 = 40;
      }
      result = (*(__int64 (**)(__int64))(*v48 + v40))((__int64)v48);
    LABEL_37:
      if ((v35 & 1) == 0) {
      LABEL_38:
        if ((v46 & 0xFFF) != 0) {
          result = GameRoutine_6fc650(
              *(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * (v46 & 0xFFF)));
          if ((result & 1) != 0) {
            result = UnitSkillList_84cc00(v2, &v46, 1);
          }
        }
      }
    LABEL_14:
      if (++v20 == v18) {
        return result;
      }
    }
  }
  v7 = *(unsigned __int8**)(result + 16);
  v9 = *v7;
  v10 = *((_DWORD*)v7 + 1);
  v47[0] = GameData_1fa14e8;
  v47[1] = v2;
  v48 = v47;
  if (*(_QWORD*)(v6 + 552) != 0) {
    if (*(_BYTE*)(v6 + 560) != 0) {
      v11 = *(_QWORD*)(v6 + 24);
      v12 = *(int**)(v11 + 64);
      v13 = *(int**)(v11 + 72);
      if (v12 != v13) {
        while (1) {
          v14 = v48;
          if (v48 == nullptr) {
            goto LABEL_56;
          }
          (*(void (**)(_QWORD*, int*))(*v48 + 48LL))(v48, v12);
          v15 = *v12++;
          if (v10 < *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v4 + 64) +
                                                   8LL * (v15 & 0xFFF)) +
                                        560LL) ||
              v12 == v13) {
            goto LABEL_11;
          }
        }
      }
      goto LABEL_11;
    }
    if (v9 != 0) {
      v41 = *(_QWORD*)(v6 + 24);
      v43 = *(_DWORD*)(v41 + 4);
      v42 = v41 + 4;
      v44 = v43 & 0xFFF;
      if ((v43 & 0xFFF) == 0) {
      LABEL_11:
        v17 = 1;
        goto LABEL_46;
      }
      v17 = 1;
      if ((GameRoutine_6fc650(*(_QWORD*)(v5 + 8 * v44)) & 1) != 0) {
        UnitSkillList_84cc00(v2, v42, 1);
      }
    }
    else {
      v17 = 0;
    }
  LABEL_46:
    result = (__int64)v48;
    if (v48 == v47) {
      v45 = 32;
    }
    else {
      if (v48 == nullptr) {
        goto LABEL_51;
      }
      v45 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v48 + v45))((__int64)v48);
  LABEL_51:
    if ((v17 & 1) != 0) {
      return result;
    }
  }
  if ((*a2 & 0xFFF) != 0) {
    result = GameRoutine_6fc650(
        *(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * (*a2 & 0xFFF)));
    if ((result & 1) != 0) {
      return UnitSkillList_84cc00(v2, a2, 1);
    }
  }
  return result;
}

__int64 game_UnitSkillList_UpdateCommand_lambda5_Invoke(__int64 result,
                                                        unsigned __int16* a2)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;

  v2 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2) +
                 192LL);
  if (v2 != 0 && *(_BYTE*)(v2 + 104) == 2) {
    v3 = *(__int64**)(result + 8);
    v5 = (_QWORD*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (__int64)v5 - *v3;
      v9 = (v8 >> 3) + 1;
      if (v9 >> 61 != 0) {
        GameRoutine_705570();
      }
      v10 = v4 - v7;
      v11 = fw_memory_g_heap_manager_ptr;
      if (v10 >> 2 > v9) {
        v9 = v10 >> 2;
      }
      if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF8LL) {
        v12 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v12 = v9;
      }
      if (v12 != 0) {
        if (v12 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v12, 16, 0);
      }
      else {
        v13 = 0;
      }
      v14 = v13 + 8 * v12;
      v15 = v13 + v8 - 8 * (v8 >> 3);
      *(_QWORD*)(v13 + v8) = v2;
      v6 = v13 + v8 + 8;
      result = memcpy(v15, v7, v8);
      *v3 = v15;
      v3[1] = v6;
      v3[2] = v14;
      if (v7 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
          v16 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16, v7);
      }
    }
    else {
      *v5 = v2;
      v6 = (__int64)(v5 + 1);
    }
    v3[1] = v6;
  }
  return result;
}

#pragma GCC visibility pop
