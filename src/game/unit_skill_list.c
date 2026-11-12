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
bool game_UnitSkillList_Remove_alt1(__int64 a1, _WORD* a2, __int64 a3) __asm__(
    "game_UnitSkillList_Remove");
__int64 game_UnitSkillList_GetMaxValue(_QWORD* a1, __int64* a2, __int64 a3);
__int64 game_UnitSkillList_GetTotalValue(_QWORD* a1, __int64* a2, __int64 a3);
float game_UnitSkillList_GetTotalRatio(_QWORD* a1, __int64* a2, __int64 a3);
__int64 game_UnitSkillList_GetWorkSkill(_QWORD* a1, __int64* a2, __int64 a3);
__int64 game_UnitSkillList_IsVanish(__int64 a1, __int64 a2, __int64 a3);
__int64 game_UnitSkillList_EachDirectSkill(__int64 a1, _WORD* a2, __int64 a3);
__int64 game_UnitSkillList_EachIndirectSkill(__int64 a1, _WORD* a2, __int64 a3);
bool game_UnitSkillList_UpdateLearn_alt1(__int64* a1, __int64 a2) __asm__(
    "game_UnitSkillList_UpdateLearn");
__int64 game_UnitSkillList_GetRangeAddImpl_lambda0_Clone(__int64 a1);
__int64 game_UnitSkillList_GetRangeAddImpl_lambda0_CloneInto_alt1(
    __int64 a1,
    __int64 a2) __asm__("game_UnitSkillList_GetRangeAddImpl_lambda0_CloneInto");
__int64 game_UnitSkillList_GetUseFactorImpl_lambda0_Clone(__int64 a1);
__int64 game_UnitSkillList_GetUseFactorImpl_lambda0_CloneInto_alt1(
    __int64 a1,
    __int64
        a2) __asm__("game_UnitSkillList_GetUseFactorImpl_lambda0_CloneInto");
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
_WORD* game_UnitItemList_EachItem(_WORD* result, __int64);
__int64 GameRoutine_6fc650_alt1(__int64) __asm__("GameRoutine_6fc650");
__int64 GameRoutine_8566e0(__int64 result, __int64*, __int64, char);
__int64 UnitSkillList_84cc00_alt2(__int64*, _DWORD*,
                                  __int64) __asm__("UnitSkillList_84cc00");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_UnitSkillList_GetTotalValue_alt1(_QWORD*, __int64*) __asm__(
    "game_UnitSkillList_GetTotalValue");
__int64 game_Unit_GetJob_alt1(__int64) __asm__("game_Unit_GetJob");
bool game_HasActiveSkill_843420(_DWORD*, __int64);
char** GameRoutine_7fb7c0_alt1(char** result, __int64, __int64,
                               unsigned __int64) __asm__("GameRoutine_7fb7c0");
char** GameRoutine_7fb930(char** result, __int64, __int64, unsigned __int64);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int16* GameData_212cf20[6];
extern __int64 (*GameData_1fa16e8[])();
extern __int64 (*GameData_1fa1768[])();
extern __int64 (*GameData_1fa17e8[])();
extern __int64 (*GameData_1fa1868[])();
extern __int64 (*GameData_1fa18e8[])();
extern __int64 (*GameData_1fa1968[])();
extern __int64* GameData_212ceb0;
extern __int64 GameData_212c998[148];
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn))
GameRoutine_60a310_alt2() __asm__("GameRoutine_60a310");
__int64 game_UnitSkillList_GetRangeAddImpl(__int64 a1, __int64 a2);
bool UnitSkillList_850100(__int64 a1, __int64 a2);
__int64 UnitSkillList_67efe0_alt1(__int64 result, __int64,
                                  __int64) __asm__("UnitSkillList_67efe0");
__int64 UnitSkillList_84cc00_alt3(__int64, _DWORD*,
                                  __int64) __asm__("UnitSkillList_84cc00");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
bool game_UnitSkillList_Remove(__int64 a1, _WORD* a2);
bool game_UnitSkillList_UpdateLearn(__int64 a1, __int64 a2);
__int64*
GameRoutine_7fb7c0_alt2(__int64* result, __int64, __int64,
                        unsigned __int64) __asm__("GameRoutine_7fb7c0");
__int64 game_UnitSkillList_GetUseFactorImpl(__int64 a1, __int64 a2);
__int64* game_UnitSkillList_GetRangeAddImpl_lambda0_CloneInto(__int64 a1,
                                                              __int64 a2);
__int64* game_UnitSkillList_GetUseFactorImpl_lambda0_CloneInto(__int64 a1,
                                                               __int64 a2);

bool game_UnitSkillList_Remove(__int64 a1, _WORD* a2)
{
  _QWORD* v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int* v12;
  unsigned int* v13;
  unsigned int* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int* v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int v31;
  int v32;
  int v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  struct {
    _QWORD v38[4];
    _QWORD* v39;
  } v38_;
  struct {
    unsigned int* v40;
    __int64 v41;
    __int64 v42;
  } v40_;

  v2 = (_QWORD*)(a1 + 80);
  if ((*a2 & *(_WORD*)(a1 + 80)) == 0) {
    return false;
  }
  v4 = v38_.v38;
  v40_.v41 = 0;
  v40_.v42 = 0;
  v40_.v40 = nullptr;
  v38_.v38[0] = GameData_1fa0fe8;
  v38_.v38[1] = &v40_.v40;
  v5 = *(_QWORD*)(a1 + 32);
  v6 = *(_QWORD*)(a1 + 40);
  v38_.v39 = v38_.v38;
  if ((int)((unsigned __int64)(v6 - v5) >> 2) < 1) {
    goto LABEL_12;
  }
  v7 = GameData_21c99b0;
  v9 = 0;
  v10 = 0;
  do {
    if ((((unsigned __int16)*a2 >>
          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v7 + 64) +
                               8LL * (*(_DWORD*)(v5 + v9) & 0xFFF)) +
                    104LL)) &
         1) != 0) {
      if (v38_.v39 == nullptr) {
        GameRoutine_60a310_alt2();
      }
      (*(void (**)(_QWORD*, __int64))(*v38_.v39 + 48LL))(v38_.v39, v5 + v9);
      v7 = GameData_21c99b0;
      v5 = *(_QWORD*)(a1 + 32);
      v6 = *(_QWORD*)(a1 + 40);
    }
    ++v10;
    v9 += 4;
  } while (v10 < (int)((unsigned __int64)(v6 - v5) >> 2));
  v4 = v38_.v39;
  if (v38_.v39 == v38_.v38) {
  LABEL_12:
    v11 = 32;
  }
  else {
    if (v38_.v39 == nullptr) {
      goto LABEL_14;
    }
    v11 = 40;
  }
  (*(void (**)(_QWORD*, _WORD*))(*v4 + v11))(v4, a2);
LABEL_14:
  v13 = v40_.v40;
  v12 = (unsigned int*)v40_.v41;
  if ((unsigned int*)v40_.v41 == v40_.v40) {
    v26 = (__int64)v40_.v40;
    if (v40_.v40 == nullptr) {
      return v12 != v13;
    }
    goto LABEL_30;
  }
  v14 = v40_.v40;
  do {
    UnitSkillList_84d980((__int64*)a1, v14++);
  } while (v14 != v12);
  v15 = *(_QWORD*)(a1 + 32);
  v16 = *(_QWORD*)(a1 + 40);
  *v2 = 0;
  v2[1] = 0;
  v17 = v16 - v15;
  if ((int)((unsigned __int64)(v16 - v15) >> 2) >= 1) {
    v18 = GameData_21c99b0;
    v19 = (int)(v17 >> 2);
    v20 = v19 <= 1 ? 1LL : (int)(v17 >> 2);
    if (v19 >= 2) {
      v27 = (int*)(v15 + 4);
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      do {
        v25 += 2;
        v28 = *(_QWORD*)(*(_QWORD*)(v18 + 64) + 8LL * (*(v27 - 1) & 0xFFF));
        v29 = v24 | (1 << *(_BYTE*)(v28 + 104));
        *(_WORD*)(a1 + 80) = v29;
        v30 = (1LL << *(_BYTE*)(v28 + 250)) | v23;
        *(_QWORD*)(a1 + 88) = v30;
        v31 = (1 << *(_BYTE*)(v28 + 115)) | v22;
        *(_DWORD*)(a1 + 84) = v31;
        v32 = v21 | *(unsigned __int16*)(*(_QWORD*)(v28 + 24) + 1064LL);
        *(_WORD*)(a1 + 82) = v32;
        v33 = *v27;
        v27 += 2;
        v34 = *(_QWORD*)(*(_QWORD*)(v18 + 64) + 8LL * (v33 & 0xFFF));
        v24 = v29 | (1 << *(_BYTE*)(v34 + 104));
        *(_WORD*)(a1 + 80) = v24;
        v23 = (1LL << *(_BYTE*)(v34 + 250)) | v30;
        *(_QWORD*)(a1 + 88) = v23;
        v22 = (1 << *(_BYTE*)(v34 + 115)) | v31;
        *(_DWORD*)(a1 + 84) = v22;
        v21 = v32 | *(unsigned __int16*)(*(_QWORD*)(v34 + 24) + 1064LL);
        *(_WORD*)(a1 + 82) = v21;
      } while ((v20 & 0x7FFFFFFFFFFFFFFELL) != v25);
    }
    else {
      LOWORD(v21) = 0;
      v22 = 0;
      v23 = 0;
      LOWORD(v24) = 0;
      v25 = 0;
    }
    if ((v20 & 1) != 0) {
      v35 = *(_QWORD*)(*(_QWORD*)(v18 + 64) +
                       8LL * (*(_DWORD*)(v15 + 4 * v25) & 0xFFF));
      *(_WORD*)(a1 + 80) = v24 | (1 << *(_BYTE*)(v35 + 104));
      *(_QWORD*)(a1 + 88) = (1LL << *(_BYTE*)(v35 + 250)) | v23;
      *(_DWORD*)(a1 + 84) = (1 << *(_BYTE*)(v35 + 115)) | v22;
      *(_WORD*)(a1 + 82) = v21 | *(_WORD*)(*(_QWORD*)(v35 + 24) + 1064LL);
    }
  }
  v26 = (__int64)v40_.v40;
  if (v40_.v40 != nullptr) {
  LABEL_30:
    v40_.v41 = v26;
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, v26);
  }
  return v12 != v13;
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

__int64 game_UnitSkillList_GetRangeAddImpl(__int64 a1, __int64 a2)
{
  char v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    char* v18;
    char* v19;
    __int64 v20;
    int v21;
    char gap28_[4];
    unsigned int* v22;
  } v18_;
  unsigned int v23;

  v3 = *(_BYTE*)(a1 + 88);
  result = 0;
  v23 = 0;
  if ((v3 & 8) != 0) {
    v18_.v21 = 0;
    v18_.v19 = nullptr;
    v18_.v20 = 0;
    v18_.v18 = nullptr;
    if (&v18_.v18 == (char**)a2) {
      v6 = 0;
      v7 = nullptr;
    }
    else {
      v5 = a2;
      GameRoutine_7fb7c0_alt1(&v18_.v18, *(_QWORD*)a2, *(_QWORD*)(a2 + 8),
                              (__int64)(*(_QWORD*)(a2 + 8) - *(_QWORD*)a2) >>
                                  2);
      v7 = v18_.v18;
      v6 = (__int64)v18_.v19;
      a2 = v5;
    }
    v18_.v21 = *(_DWORD*)(a2 + 24);
    v18_.v22 = &v23;
    v8 = (__int64*)fw_memory_g_heap_manager_ptr;
    v9 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    *(_QWORD*)(v9 + 16) = 0;
    *(_QWORD*)(v9 + 24) = 0;
    *(_DWORD*)(v9 + 32) = 0;
    *(_QWORD*)v9 = GameData_1fa1068;
    *(_QWORD*)(v9 + 8) = 0;
    GameRoutine_7fb7c0_alt1((char**)(v9 + 8), (__int64)v7, v6,
                            (v6 - (__int64)v7) >> 2);
    *(_DWORD*)(v9 + 32) = v18_.v21;
    *(_QWORD*)(v9 + 40) = v18_.v22;
    if ((*(_BYTE*)(a1 + 88) & 8) != 0) {
      v10 = *(_QWORD*)(a1 + 32);
      v11 = *(_QWORD*)(a1 + 40);
      if ((int)((unsigned __int64)(v11 - v10) >> 2) >= 1) {
        v12 = 0;
        v13 = 0;
        v14 = GameData_212c880[0];
        v15 = *GameData_212c880[0];
        do {
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v15 + 64) +
                                   8LL * (*(_DWORD*)(v10 + v12) & 0xFFF)) +
                        250LL) == 3) {
            (*(void (**)(__int64, __int64))(*(_QWORD*)v9 + 48LL))(v9,
                                                                  v10 + v12);
            v15 = *v14;
            v10 = *(_QWORD*)(a1 + 32);
            v11 = *(_QWORD*)(a1 + 40);
          }
          ++v13;
          v12 += 4;
        } while (v13 < (int)((unsigned __int64)(v11 - v10) >> 2));
      }
    }
    (*(void (**)(__int64))(*(_QWORD*)v9 + 40LL))(v9);
    if (v18_.v18 != nullptr) {
      v16 = *v8;
      v18_.v19 = v18_.v18;
      v17 = 128;
      if (*(_QWORD*)(v16 + 200) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free(v16 + v17, v18_.v18);
    }
    return v23;
  }
  return result;
}

__int64 game_UnitSkillList_GetUseFactorImpl(__int64 a1, __int64 a2)
{
  char v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    __int64 v19;
    __int64 v20;
    int v21;
    char gap28_[4];
    unsigned int* v22;
  } v18_;
  unsigned int v23;

  v3 = *(_BYTE*)(a1 + 88);
  result = 1;
  v23 = 1;
  if ((v3 & 0x10) != 0) {
    v18_.v21 = 0;
    v18_.v19 = 0;
    v18_.v20 = 0;
    v18_.v18 = 0;
    if (&v18_.v18 == (__int64*)a2) {
      v6 = 0;
      v7 = 0;
    }
    else {
      v5 = a2;
      GameRoutine_7fb7c0_alt2(&v18_.v18, *(_QWORD*)a2, *(_QWORD*)(a2 + 8),
                              (__int64)(*(_QWORD*)(a2 + 8) - *(_QWORD*)a2) >>
                                  2);
      v7 = v18_.v18;
      v6 = v18_.v19;
      a2 = v5;
    }
    v18_.v21 = *(_DWORD*)(a2 + 24);
    v18_.v22 = &v23;
    v8 = (__int64*)fw_memory_g_heap_manager_ptr;
    v9 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    *(_QWORD*)(v9 + 16) = 0;
    *(_QWORD*)(v9 + 24) = 0;
    *(_DWORD*)(v9 + 32) = 0;
    *(_QWORD*)v9 = GameData_1fa10e8;
    *(_QWORD*)(v9 + 8) = 0;
    GameRoutine_7fb7c0_alt2((__int64*)(v9 + 8), v7, v6, (v6 - v7) >> 2);
    *(_DWORD*)(v9 + 32) = v18_.v21;
    *(_QWORD*)(v9 + 40) = v18_.v22;
    if ((*(_BYTE*)(a1 + 88) & 0x10) != 0) {
      v10 = *(_QWORD*)(a1 + 32);
      v11 = *(_QWORD*)(a1 + 40);
      if ((int)((unsigned __int64)(v11 - v10) >> 2) >= 1) {
        v12 = 0;
        v13 = 0;
        v14 = GameData_212c880[0];
        v15 = *GameData_212c880[0];
        do {
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v15 + 64) +
                                   8LL * (*(_DWORD*)(v10 + v12) & 0xFFF)) +
                        250LL) == 4) {
            (*(void (**)(__int64, __int64))(*(_QWORD*)v9 + 48LL))(v9,
                                                                  v10 + v12);
            v15 = *v14;
            v10 = *(_QWORD*)(a1 + 32);
            v11 = *(_QWORD*)(a1 + 40);
          }
          ++v13;
          v12 += 4;
        } while (v13 < (int)((unsigned __int64)(v11 - v10) >> 2));
      }
    }
    (*(void (**)(__int64))(*(_QWORD*)v9 + 40LL))(v9);
    if (v18_.v18 != 0) {
      v16 = *v8;
      v18_.v19 = v18_.v18;
      v17 = 128;
      if (*(_QWORD*)(v16 + 200) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v16 + v17, v18_.v18);
    }
    return v23;
  }
  return result;
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

bool game_UnitSkillList_UpdateLearn(__int64 a1, __int64 a2)
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
  _DWORD* v21;
  _DWORD* v22;
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
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  unsigned __int64 v41;
  _DWORD* v42;
  _DWORD* v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  _QWORD* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  int v58;
  int v59;
  __int64 v60;
  int v61;
  __int64 v62;
  int* v63;
  __int64 v64;
  int v65;
  __int64 v66;
  int v67;
  int v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  _DWORD* v73;
  _DWORD* v74;
  unsigned __int64 v75;
  __int64 v76;
  struct {
    _QWORD v77[2];
    __int64 v78;
    char gap24_[8];
    _QWORD* v79;
  } v77_;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (a2 == 0) {
    return (int)((*(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 32)) >> 2) > 0;
  }
  v3 = *(_QWORD*)a1;
  *(_DWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  v4 = (_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 8) = v3;
  *(_QWORD*)(a1 + 40) = *(_QWORD*)(a1 + 32);
  v6 = *(_QWORD*)(a2 + 392);
  v7 = game_Unit_GetJob_alt1(a2),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v12 = COERCE_AS(__typeof__(v12),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v8 = *(_QWORD*)(v6 + 24);
  v9 = *(_QWORD*)(a2 + 400);
  v10 = v7;
  v77_.v77[0] = GameData_1fa1568;
  v77_.v77[1] = a1;
  v77_.v79 = v77_.v77;
  v77_.v78 = v8 + 96;
  UnitSkillList_67efe0_alt1(v6, a2, (__int64)v77_.v77),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  if (v77_.v79 == v77_.v77) {
    v13 = 32;
  }
  else {
    if (v77_.v79 == nullptr) {
      goto LABEL_8;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v77_.v79 + v13))((__int64)v77_.v79),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v12 = COERCE_AS(__typeof__(v12),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
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
    v72 = *(_QWORD*)(v10 + 24) + v19;
    v73 = *(_DWORD**)(v72 + 32);
    v74 = *(_DWORD**)(v72 + 40);
    while (v73 != v74) {
      v75 = (unsigned int)*v73;
      v76 = *(_QWORD*)(v8 + 96);
      if (((v75 >> 5) & 0x7F) + 1 > (*(_QWORD*)(v8 + 104) - v76) >> 2 ||
          ((*(_DWORD*)(v76 + 4 * ((v75 >> 5) & 0x7F)) >> v75) & 1) == 0) {
        UnitSkillList_84cc00_alt3(a1, v73, 1),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      ++v73;
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
    v21 = *(_DWORD**)(v20 + 32);
    v22 = *(_DWORD**)(v20 + 40);
    while (v21 != v22) {
      v23 = (unsigned int)*v21;
      v24 = *(_QWORD*)(v8 + 96);
      if (((v23 >> 5) & 0x7F) + 1 > (*(_QWORD*)(v8 + 104) - v24) >> 2 ||
          ((*(_DWORD*)(v24 + 4 * ((v23 >> 5) & 0x7F)) >> v23) & 1) == 0) {
        UnitSkillList_84cc00_alt3(a1, v21, 1),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      ++v21;
    }
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ee1a8,
                            memory_order_acquire) &
       1) == 0 &&
      __cxa_guard_acquire_alt1((__int64)&GameData_21ee1a8) != 0) {
    GameData_21ee1a0 = 78;
    __cxa_guard_release_alt1((__int64)&GameData_21ee1a8),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v25 = v77_.v77;
  v77_.v78 = v8 + 96;
  v26 = GameData_21ee1a0;
  v77_.v77[0] = GameData_1fa15e8;
  v77_.v77[1] = a1;
  v77_.v79 = v77_.v77;
  v27 = GameData_212c880[0];
  if (((unsigned __int16)GameData_21ee1a0 & *(_WORD*)(a2 + 1440)) == 0) {
    goto LABEL_38;
  }
  v28 = *(_QWORD*)(a2 + 1400);
  v29 = *(_QWORD*)(a2 + 1392);
  if ((int)((unsigned __int64)(v28 - v29) >> 2) < 1) {
    v25 = v77_.v77;
  LABEL_38:
    v33 = 32;
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
      if (v77_.v79 == nullptr) {
      LABEL_88:
        GameRoutine_60a310_alt2(),
            v11 = COERCE_AS(__typeof__(v11),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v12 = COERCE_AS(__typeof__(v12),
                            PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      (*(void (**)(_QWORD*, __int64))(*v77_.v79 + 48LL))(v77_.v79, v29 + v31),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v30 = *v27;
      v28 = *(_QWORD*)(a2 + 1400);
      v29 = *(_QWORD*)(a2 + 1392);
      v26 = GameData_21ee1a0;
    }
    ++v32;
    v31 += 4;
  } while (v32 < (int)((unsigned __int64)(v28 - v29) >> 2));
  v25 = v77_.v79;
  if (v77_.v79 == v77_.v77) {
    goto LABEL_38;
  }
  if (v77_.v79 != nullptr) {
    v33 = 40;
  LABEL_39:
    (*(void (**)(_QWORD*, __int64, __int64))(*v25 + v33))(v25, v11, v12),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v12 = COERCE_AS(__typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v34 = GameData_21c9868;
  v35 = GameData_21c9870;
  while (v34 != v35) {
    if (*(_QWORD*)v34 != 0) {
      v36 = *(_QWORD**)(*(_QWORD*)v34 + 24LL);
      v37 = v36[138];
      if (v37 != 0) {
        v38 = *(_QWORD*)(*(_QWORD*)(v37 + 24) + 1104LL);
        if (v38 != 0) {
          v39 = *(unsigned __int16*)(v38 + 412);
          if (*(_WORD*)(v38 + 412) != 0) {
            v40 = *(_QWORD*)(a2 + 560);
            v41 = *(unsigned __int16*)(v38 + 16);
            if (v41 >= (*(_QWORD*)(a2 + 568) - v40) >> 1) {
              if (v39 != 0) {
                goto LABEL_41;
              }
            }
            else if ((*(_WORD*)(v40 + 2 * v41) & 0x3FFu) < v39) {
              goto LABEL_41;
            }
            v42 = (_DWORD*)v36[100];
            v43 = (_DWORD*)v36[101];
            while (v42 != v43) {
              v44 = (unsigned int)*v42;
              v45 = *(_QWORD*)(v8 + 96);
              if (((v44 >> 5) & 0x7F) + 1 > (*(_QWORD*)(v8 + 104) - v45) >> 2 ||
                  ((*(_DWORD*)(v45 + 4 * ((v44 >> 5) & 0x7F)) >> v44) & 1) ==
                      0) {
                UnitSkillList_84cc00_alt3(a1, v42, 1),
                    v11 = COERCE_AS(
                        __typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v12 = COERCE_AS(
                        __typeof__(v12),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
              }
              ++v42;
            }
          }
        }
      }
    }
  LABEL_41:
    v34 += 8;
  }
  v46 = *(_QWORD*)(a2 + 1584);
  v47 = *(_QWORD*)(a2 + 1592);
  if (v46 != v47) {
    v48 = v77_.v77;
    v77_.v78 = v8 + 96;
    v77_.v77[0] = GameData_1fa1668;
    v77_.v77[1] = a1;
    v77_.v79 = v77_.v77;
    if ((int)((unsigned __int64)(v47 - v46) >> 2) < 1) {
      goto LABEL_66;
    }
    v49 = 0;
    v50 = 0;
    do {
      if (v77_.v79 == nullptr) {
        goto LABEL_88;
      }
      (*(void (**)(_QWORD*, __int64))(*v77_.v79 + 48LL))(v77_.v79, v46 + v49),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      v46 = *(_QWORD*)(a2 + 1584);
      ++v50;
      v49 += 4;
    } while (v50 < (int)((unsigned __int64)(*(_QWORD*)(a2 + 1592) - v46) >> 2));
    v48 = v77_.v79;
    if (v77_.v79 == v77_.v77) {
    LABEL_66:
      v51 = 32;
    LABEL_67:
      (*(void (**)(_QWORD*, __int64, __int64))(*v48 + v51))(v48, v11, v12),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v12 = COERCE_AS(__typeof__(v12),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    else if (v77_.v79 != nullptr) {
      v51 = 40;
      goto LABEL_67;
    }
  }
  v52 = *(_QWORD*)(a1 + 32);
  v53 = *(_QWORD*)(a1 + 40);
  *v4 = 0;
  *(_QWORD*)(a1 + 88) = 0;
  v54 = v53 - v52;
  if ((int)((unsigned __int64)(v53 - v52) >> 2) < 1) {
    return false;
  }
  v55 = *v27;
  v56 = (int)(v54 >> 2);
  if (v56 <= 1) {
    v57 = 1;
  }
  else {
    v57 = (int)(v54 >> 2);
  }
  if (v56 >= 2) {
    v63 = (int*)(v52 + 4);
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    do {
      v62 += 2;
      v64 = *(_QWORD*)(*(_QWORD*)(v55 + 64) + 8LL * (*(v63 - 1) & 0xFFF));
      v65 = v61 | (1 << *(_BYTE*)(v64 + 104));
      *(_WORD*)(a1 + 80) = v65;
      v66 = (1LL << *(_BYTE*)(v64 + 250)) | v60;
      *(_QWORD*)(a1 + 88) = v66;
      v67 = (1 << *(_BYTE*)(v64 + 115)) | v59;
      *(_DWORD*)(a1 + 84) = v67;
      v68 = v58 | *(unsigned __int16*)(*(_QWORD*)(v64 + 24) + 1064LL);
      *(_WORD*)(a1 + 82) = v68;
      v69 = *v63;
      v63 += 2;
      v70 = *(_QWORD*)(*(_QWORD*)(v55 + 64) + 8LL * (v69 & 0xFFF));
      v61 = v65 | (1 << *(_BYTE*)(v70 + 104));
      *(_WORD*)(a1 + 80) = v61;
      v60 = (1LL << *(_BYTE*)(v70 + 250)) | v66;
      *(_QWORD*)(a1 + 88) = v60;
      v59 = (1 << *(_BYTE*)(v70 + 115)) | v67;
      *(_DWORD*)(a1 + 84) = v59;
      v58 = v68 | *(unsigned __int16*)(*(_QWORD*)(v70 + 24) + 1064LL);
      *(_WORD*)(a1 + 82) = v58;
    } while ((v57 & 0x7FFFFFFFFFFFFFFELL) != v62);
  }
  else {
    LOWORD(v58) = 0;
    v59 = 0;
    v60 = 0;
    LOWORD(v61) = 0;
    v62 = 0;
  }
  result = true;
  if ((v57 & 1) != 0) {
    v71 = *(_QWORD*)(*(_QWORD*)(v55 + 64) +
                     8LL * (*(_DWORD*)(v52 + 4 * v62) & 0xFFF));
    *(_WORD*)(a1 + 80) = v61 | (1 << *(_BYTE*)(v71 + 104));
    *(_QWORD*)(a1 + 88) = (1LL << *(_BYTE*)(v71 + 250)) | v60;
    *(_DWORD*)(a1 + 84) = (1 << *(_BYTE*)(v71 + 115)) | v59;
    *(_WORD*)(a1 + 82) = v58 | *(_WORD*)(*(_QWORD*)(v71 + 24) + 1064LL);
  }
  return result;
}

bool UnitSkillList_850100(__int64 a1, __int64 a2)
{
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  _QWORD* v12;
  __int16* v13;
  __int16 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  unsigned int v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int* v56;
  int* v57;
  int v58;
  char v60;
  __int64 v61;
  _DWORD* v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v67;
  __int64* v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  int v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  int* v76;
  int* v77;
  int v78;
  char v80;
  __int64 v81;
  _DWORD* v82;
  int v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  int v92;
  int v93;
  int v94;
  int v95;
  __int64 v96;
  __int64 v97;
  int* v98;
  __int64 v99;
  int v100;
  __int64 v101;
  int v102;
  int v103;
  int v104;
  __int64 v105;
  __int64 v106;
  unsigned int* v107;
  unsigned int* v108;
  unsigned __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  int v114;
  unsigned int* v115;
  unsigned int* v116;
  __int64 v117;
  char v118;
  int v119;
  int v120;
  unsigned int* v121;
  unsigned int* v122;
  __int64 v123;
  char v124;
  int v125;
  int v127;
  struct {
    __int64 v128;
    __int64* v129;
    __int64 v130;
  } v128_;
  struct {
    _BYTE v131[4];
    int v132;
  } v131_;
  struct {
    __int64 v133[2];
    _BYTE* v134;
    char gap72_[8];
    __int64* v135;
  } v133_;

  if (a2 == 0) {
    return (int)((*(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 32)) >> 2) > 0;
  }
  v4 = *(_QWORD*)(a2 + 1744);
  v5 = *(unsigned int*)((char*)((_UNKNOWN*)0xE0LL) +
                        game_g_shared_system_skills_ptr);
  v6 = *(_QWORD*)(a2 + 1752) - v4;
  LODWORD(v133_.v133[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0xE0LL) +
                                      game_g_shared_system_skills_ptr) &
                           0xFFF;
  v7 = ((v5 >> 5) & 0x7F) + 1 <= v6 >> 2 &&
       ((*(_DWORD*)(v4 + 4 * ((v5 >> 5) & 0x7F)) >> v5) & 1) != 0 &&
       game_HasActiveSkill_843420(v133_.v133, a2 + 1744);
  v8 = *(_QWORD*)(a1 + 32);
  v9 = *(_QWORD*)(a1 + 40);
  v131_.v131[0] = v7;
  v131_.v132 = *(unsigned __int8*)(a2 + 499);
  GameRoutine_7fb930((char**)(a1 + 56), v8, v9, (v9 - v8) >> 2);
  v10 = *(_QWORD*)a1;
  v11 = v133_.v133;
  *(_DWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  v12 = (_QWORD*)(a1 + 80);
  *(_QWORD*)(a1 + 88) = 0;
  v133_.v135 = v133_.v133;
  *(_QWORD*)(a1 + 8) = v10;
  *(_QWORD*)(a1 + 40) = *(_QWORD*)(a1 + 32);
  v133_.v133[0] = (__int64)GameData_1fa16e8;
  v133_.v133[1] = a1;
  v133_.v134 = v131_.v131;
  v13 = GameData_212cf20[0];
  v14 = *GameData_212cf20[0];
  v15 = GameData_212c880[0];
  if ((*GameData_212cf20[0] & *(_WORD*)(a2 + 1152)) == 0) {
    goto LABEL_18;
  }
  v16 = *(_QWORD*)(a2 + 1112);
  v17 = *(_QWORD*)(a2 + 1104);
  if ((int)((unsigned __int64)(v16 - v17) >> 2) < 1) {
    v11 = v133_.v133;
  LABEL_18:
    v21 = 32;
    goto LABEL_19;
  }
  v18 = *GameData_212c880[0];
  v19 = 0;
  v20 = 0;
  do {
    if (((unsigned __int16)(1 << *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v18 + 64) +
                                                      8LL * (*(_DWORD*)(v17 +
                                                                        v19) &
                                                             0xFFF)) +
                                           104LL)) &
         (unsigned __int16)v14) != 0) {
      if (v133_.v135 == nullptr) {
        goto LABEL_13;
      }
      (*(void (**)(__int64*, __int64))(*v133_.v135 + 48))(v133_.v135,
                                                          v17 + v19);
      v18 = *v15;
      v16 = *(_QWORD*)(a2 + 1112);
      v17 = *(_QWORD*)(a2 + 1104);
      v14 = *v13;
    }
    ++v20;
    v19 += 4;
  } while (v20 < (int)((unsigned __int64)(v16 - v17) >> 2));
  v11 = v133_.v135;
  if (v133_.v135 == v133_.v133) {
    goto LABEL_18;
  }
  if (v133_.v135 != nullptr) {
    v21 = 40;
  LABEL_19:
    (*(void (**)(__int64))(*v11 + v21))((__int64)v11);
  }
  v22 = *(_QWORD*)(a2 + 392);
  v23 = v133_.v133;
  v133_.v133[0] = (__int64)GameData_1fa1768;
  v133_.v133[1] = a1;
  v24 = *(_QWORD*)(v22 + 24);
  v133_.v135 = v133_.v133;
  v133_.v134 = v131_.v131;
  v25 = *(_QWORD*)(v24 + 608);
  if ((int)((unsigned __int64)(*(_QWORD*)(v24 + 616) - v25) >> 2) >= 1) {
    v26 = 0;
    v27 = 0;
    do {
      if (v133_.v135 == nullptr) {
        goto LABEL_13;
      }
      (*(void (**)(__int64*, __int64))(*v133_.v135 + 48))(v133_.v135,
                                                          v25 + v26);
      v25 = *(_QWORD*)(v24 + 608);
      ++v27;
      v26 += 4;
    } while (v27 < (int)((unsigned __int64)(*(_QWORD*)(v24 + 616) - v25) >> 2));
    v23 = v133_.v135;
    if (v133_.v135 != v133_.v133) {
      if (v133_.v135 != nullptr) {
        v28 = 40;
      LABEL_28:
        (*(void (**)(__int64))(*v23 + v28))((__int64)v23);
      }
      v29 = *(_QWORD*)(game_Unit_GetJob_alt1(a2) + 24);
      v30 = v133_.v133;
      v133_.v133[0] = (__int64)GameData_1fa17e8;
      v133_.v133[1] = a1;
      v133_.v135 = v133_.v133;
      v133_.v134 = v131_.v131;
      v31 = *(_QWORD*)(v29 + 512);
      if ((int)((unsigned __int64)(*(_QWORD*)(v29 + 520) - v31) >> 2) >= 1) {
        v32 = 0;
        v33 = 0;
        do {
          if (v133_.v135 == nullptr) {
            goto LABEL_13;
          }
          (*(void (**)(__int64*, __int64))(*v133_.v135 + 48))(v133_.v135,
                                                              v31 + v32);
          v31 = *(_QWORD*)(v29 + 512);
          ++v33;
          v32 += 4;
        } while (v33 <
                 (int)((unsigned __int64)(*(_QWORD*)(v29 + 520) - v31) >> 2));
        v30 = v133_.v135;
        if (v133_.v135 != v133_.v133) {
          if (v133_.v135 != nullptr) {
            v34 = 40;
          LABEL_37:
            (*(void (**)(__int64))(*v30 + v34))((__int64)v30);
          }
          v35 = *(_QWORD*)(a2 + 1208);
          v36 = v133_.v133;
          v133_.v133[0] = (__int64)GameData_1fa1868;
          v133_.v133[1] = a1;
          v133_.v135 = v133_.v133;
          v133_.v134 = v131_.v131;
          v37 = *(_QWORD*)(a2 + 1200);
          if ((int)((unsigned __int64)(v35 - v37) >> 2) >= 1) {
            v38 = 0;
            v39 = 0;
            do {
              if (v133_.v135 == nullptr) {
                goto LABEL_13;
              }
              (*(void (**)(__int64*, __int64))(*v133_.v135 + 48))(v133_.v135,
                                                                  v37 + v38);
              v37 = *(_QWORD*)(a2 + 1200);
              ++v39;
              v38 += 4;
            } while (
                v39 <
                (int)((unsigned __int64)(*(_QWORD*)(a2 + 1208) - v37) >> 2));
            v36 = v133_.v135;
            if (v133_.v135 != v133_.v133) {
              if (v133_.v135 != nullptr) {
                v40 = 40;
              LABEL_46:
                (*(void (**)(__int64))(*v36 + v40))((__int64)v36);
              }
              v41 = *(_QWORD*)(a2 + 1400);
              v42 = v133_.v133;
              v133_.v133[0] = (__int64)GameData_1fa18e8;
              v133_.v133[1] = a1;
              v133_.v135 = v133_.v133;
              v133_.v134 = v131_.v131;
              v43 = *(_QWORD*)(a2 + 1392);
              if ((int)((unsigned __int64)(v41 - v43) >> 2) >= 1) {
                v44 = 0;
                v45 = 0;
                do {
                  if (v133_.v135 == nullptr) {
                    goto LABEL_13;
                  }
                  (*(void (**)(__int64*, __int64))(*v133_.v135 + 48))(
                      v133_.v135, v43 + v44);
                  v43 = *(_QWORD*)(a2 + 1392);
                  ++v45;
                  v44 += 4;
                } while (v45 < (int)((unsigned __int64)(*(_QWORD*)(a2 + 1400) -
                                                        v43) >>
                                     2));
                v42 = v133_.v135;
                if (v133_.v135 != v133_.v133) {
                  if (v133_.v135 != nullptr) {
                    v46 = 40;
                  LABEL_55:
                    (*(void (**)(__int64))(*v42 + v46))((__int64)v42);
                  }
                  if (*(_BYTE*)(a2 + 1944) != 0 &&
                      *(_BYTE*)(*(_QWORD*)(a2 + 400) + 96LL) == 1) {
                    v47 = GameData_212ceb0;
                    if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                                      GameData_212c998
                                                                          [0] +
                                                                  64LL) +
                                                       8LL *
                                                           *(unsigned __int8*)(a2 +
                                                                               1944)) +
                                            50LL) <=
                            (unsigned int)*(unsigned __int8*)(a2 + 552) &&
                        (game_GameModeData_instance_ == 0 ||
                         (*(_BYTE*)(game_GameModeData_instance_ + 56) & 0xFE) !=
                             6) &&
                        *(_QWORD*)(a2 + 408) == 0) {
                      v47 = (__int64*)(a2 + 1944);
                    }
                  }
                  else {
                    v47 = GameData_212ceb0;
                  }
                  v48 = *(unsigned __int8*)v47;
                  if (v48 != 0) {
                    v49 = *(
                        _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                           GameData_212c998[0] +
                                                       64LL) +
                                            8 * v48) +
                                 64LL);
                    if (v49 != 0) {
                      v50 = *(_WORD*)(v49 + 16) & 0xFFF;
                    }
                    else {
                      v50 = 0;
                    }
                    v51 = *v15;
                    LODWORD(v128_.v128) = v50;
                    v52 = v131_.v132;
                    v53 = *(_QWORD*)(v51 + 64);
                    v54 = *(_QWORD*)(v53 + 8LL * v50);
                    v133_.v135 = v133_.v133;
                    v133_.v133[0] = (__int64)GameData_1fa14e8;
                    v133_.v133[1] = a1;
                    if (*(_QWORD*)(v54 + 552) == 0) {
                    LABEL_90:
                      if ((v128_.v128 & 0xFFF) != 0 &&
                          (GameRoutine_6fc650_alt1(
                               *(_QWORD*)(*(_QWORD*)(*v15 + 64) +
                                          8 * (v128_.v128 & 0xFFF))) &
                           1) != 0) {
                        UnitSkillList_84cc00_alt2((__int64*)a1, &v128_.v128, 1);
                      }
                      goto LABEL_93;
                    }
                    if (*(_BYTE*)(v54 + 560) != 0) {
                      v55 = *(_QWORD*)(v54 + 24);
                      v56 = *(int**)(v55 + 64);
                      v57 = *(int**)(v55 + 72);
                      if (v56 != v57) {
                        do {
                          if (v133_.v135 == nullptr) {
                            goto LABEL_13;
                          }
                          (*(void (**)(__int64*, int*))(*v133_.v135 + 48))(
                              v133_.v135, v56);
                          v58 = *v56++;
                        } while (
                            v52 >=
                                *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v15 +
                                                                          64) +
                                                               8LL * (v58 &
                                                                      0xFFF)) +
                                                    560LL) &&
                            v56 != v57);
                      }
                      goto LABEL_78;
                    }
                    if (v131_.v131[0] != 0) {
                      v61 = *(_QWORD*)(v54 + 24);
                      v63 = *(_DWORD*)(v61 + 4);
                      v62 = (_DWORD*)(v61 + 4);
                      v64 = v63 & 0xFFF;
                      if ((v63 & 0xFFF) == 0) {
                      LABEL_78:
                        v60 = 1;
                        goto LABEL_84;
                      }
                      v60 = 1;
                      if ((GameRoutine_6fc650_alt1(*(_QWORD*)(v53 + 8 * v64)) &
                           1) != 0) {
                        UnitSkillList_84cc00_alt2((__int64*)a1, v62, 1);
                      }
                    }
                    else {
                      v60 = 0;
                    }
                  LABEL_84:
                    if (v133_.v135 == v133_.v133) {
                      v65 = 32;
                    }
                    else {
                      if (v133_.v135 == nullptr) {
                        goto LABEL_89;
                      }
                      v65 = 40;
                    }
                    (*(void (**)(__int64))(*v133_.v135 + v65))(
                        (__int64)v133_.v135);
                  LABEL_89:
                    if ((v60 & 1) != 0) {
                      goto LABEL_93;
                    }
                    goto LABEL_90;
                  }
                LABEL_93:
                  v128_.v129 = nullptr;
                  v128_.v130 = 0;
                  v128_.v128 = 0;
                  v133_.v133[0] = (__int64)GameData_1fa1968;
                  v133_.v133[1] = (__int64)&v128_.v128;
                  v133_.v135 = v133_.v133;
                  game_UnitItemList_EachItem((_WORD*)(a2 + 828),
                                             (__int64)v133_.v133);
                  if (v133_.v135 == v133_.v133) {
                    v67 = 32;
                    goto LABEL_97;
                  }
                  if (v133_.v135 != nullptr) {
                    v67 = 40;
                  LABEL_97:
                    (*(void (**)(__int64))(*v133_.v135 + v67))(
                        (__int64)v133_.v135);
                  }
                  v68 = (__int64*)v128_.v128;
                  if (v128_.v129 != (__int64*)v128_.v128) {
                    GameRoutine_8566e0(
                        v128_.v128, v128_.v129,
                        (2 * __clz(((__int64)v128_.v129 - v128_.v128) >> 3)) ^
                            0x7E,
                        1);
                    v68 = (__int64*)v128_.v128;
                    v69 = v128_.v129;
                    if ((__int64*)v128_.v128 != v128_.v129) {
                      while (1) {
                        if (*v68 != 0) {
                          v70 = *(_WORD*)(*v68 + 16) & 0xFFF;
                        }
                        else {
                          v70 = 0;
                        }
                        v71 = *v15;
                        v127 = v70;
                        v72 = v131_.v132;
                        v73 = *(_QWORD*)(v71 + 64);
                        v74 = *(_QWORD*)(v73 + 8 * v70);
                        v133_.v133[0] = (__int64)GameData_1fa14e8;
                        v133_.v133[1] = a1;
                        v133_.v135 = v133_.v133;
                        if (*(_QWORD*)(v74 + 552) == 0) {
                        LABEL_126:
                          if ((v127 & 0xFFF) != 0 &&
                              (GameRoutine_6fc650_alt1(
                                   *(_QWORD*)(*(_QWORD*)(*v15 + 64) +
                                              8LL * (v127 & 0xFFF))) &
                               1) != 0) {
                            UnitSkillList_84cc00_alt2((__int64*)a1, &v127, 1);
                          }
                          goto LABEL_101;
                        }
                        if (*(_BYTE*)(v74 + 560) != 0) {
                          break;
                        }
                        if (v131_.v131[0] != 0) {
                          v81 = *(_QWORD*)(v74 + 24);
                          v83 = *(_DWORD*)(v81 + 4);
                          v82 = (_DWORD*)(v81 + 4);
                          v84 = v83 & 0xFFF;
                          if ((v83 & 0xFFF) == 0) {
                            goto LABEL_114;
                          }
                          v80 = 1;
                          if ((GameRoutine_6fc650_alt1(
                                   *(_QWORD*)(v73 + 8 * v84)) &
                               1) != 0) {
                            UnitSkillList_84cc00_alt2((__int64*)a1, v82, 1);
                          }
                        }
                        else {
                          v80 = 0;
                        }
                      LABEL_120:
                        if (v133_.v135 == v133_.v133) {
                          v85 = 32;
                        }
                        else {
                          if (v133_.v135 == nullptr) {
                            goto LABEL_125;
                          }
                          v85 = 40;
                        }
                        (*(void (**)(__int64))(*v133_.v135 + v85))(
                            (__int64)v133_.v135);
                      LABEL_125:
                        if ((v80 & 1) == 0) {
                          goto LABEL_126;
                        }
                      LABEL_101:
                        if (++v68 == v69) {
                          v68 = (__int64*)v128_.v128;
                          v12 = (_QWORD*)(a1 + 80);
                          goto LABEL_130;
                        }
                      }
                      v75 = *(_QWORD*)(v74 + 24);
                      v76 = *(int**)(v75 + 64);
                      v77 = *(int**)(v75 + 72);
                      if (v76 != v77) {
                        while (v133_.v135 != nullptr) {
                          (*(void (**)(__int64*, int*))(*v133_.v135 + 48))(
                              v133_.v135, v76);
                          v78 = *v76++;
                          if (v72 <
                                  *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v15 +
                                                                            64) +
                                                                 8LL *
                                                                     (v78 &
                                                                      0xFFF)) +
                                                      560LL) ||
                              v76 == v77) {
                            goto LABEL_114;
                          }
                        }
                      LABEL_13:
                        GameRoutine_60a310_alt2();
                      }
                    LABEL_114:
                      v80 = 1;
                      goto LABEL_120;
                    }
                  }
                LABEL_130:
                  if (v68 != nullptr) {
                    v128_.v129 = v68;
                    v86 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v86 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v86, v68);
                  }
                  v88 = *(_QWORD*)(a1 + 32);
                  v87 = *(_QWORD*)(a1 + 40);
                  *v12 = 0;
                  v12[1] = 0;
                  v89 = v87 - v88;
                  if ((int)((unsigned __int64)v89 >> 2) < 1) {
                    LOBYTE(v93) = 0;
                  }
                  else {
                    v90 = *v15;
                    v91 = (int)(v89 >> 2);
                    if (v91 <= 1) {
                      v92 = 1;
                    }
                    else {
                      v92 = v91;
                    }
                    if (v91 >= 2) {
                      v98 = (int*)(v88 + 4);
                      v94 = 0;
                      v95 = 0;
                      v96 = 0;
                      v93 = 0;
                      v97 = 0;
                      do {
                        v97 += 2;
                        v99 = *(_QWORD*)(*(_QWORD*)(v90 + 64) +
                                         8LL * (*(v98 - 1) & 0xFFF));
                        v100 =
                            v93 | (unsigned __int16)(1 << *(_BYTE*)(v99 + 104));
                        *(_WORD*)(a1 + 80) = v100;
                        v101 = (1LL << *(_BYTE*)(v99 + 250)) | v96;
                        *(_QWORD*)(a1 + 88) = v101;
                        v102 = (1 << *(_BYTE*)(v99 + 115)) | v95;
                        *(_DWORD*)(a1 + 84) = v102;
                        v103 = *(unsigned __int16*)(*(_QWORD*)(v99 + 24) +
                                                    1064LL) |
                               v94;
                        *(_WORD*)(a1 + 82) = v103;
                        v104 = *v98;
                        v98 += 2;
                        v105 = *(_QWORD*)(*(_QWORD*)(v90 + 64) +
                                          8LL * (v104 & 0xFFF));
                        v93 = v100 |
                              (unsigned __int16)(1 << *(_BYTE*)(v105 + 104));
                        *(_WORD*)(a1 + 80) = v93;
                        v96 = (1LL << *(_BYTE*)(v105 + 250)) | v101;
                        *(_QWORD*)(a1 + 88) = v96;
                        v95 = (1 << *(_BYTE*)(v105 + 115)) | v102;
                        *(_DWORD*)(a1 + 84) = v95;
                        v94 = *(unsigned __int16*)(*(_QWORD*)(v105 + 24) +
                                                   1064LL) |
                              v103;
                        *(_WORD*)(a1 + 82) = v94;
                      } while ((v92 & 0x7FFFFFFE) != v97);
                    }
                    else {
                      LOWORD(v93) = 0;
                      LOWORD(v94) = 0;
                      v95 = 0;
                      v96 = 0;
                      v97 = 0;
                    }
                    if ((v92 & 1) != 0) {
                      v106 =
                          *(_QWORD*)(*(_QWORD*)(v90 + 64) +
                                     8LL * (*(_DWORD*)(v88 + 4 * v97) & 0xFFF));
                      LOWORD(v93) = v93 | (1 << *(_BYTE*)(v106 + 104));
                      *(_WORD*)(a1 + 80) = v93;
                      *(_QWORD*)(a1 + 88) =
                          (1LL << *(_BYTE*)(v106 + 250)) | v96;
                      *(_DWORD*)(a1 + 84) = (1 << *(_BYTE*)(v106 + 115)) | v95;
                      *(_WORD*)(a1 + 82) =
                          *(_WORD*)(*(_QWORD*)(v106 + 24) + 1064LL) | v94;
                    }
                  }
                  v107 = *(unsigned int**)(a1 + 56);
                  v108 = *(unsigned int**)(a1 + 64);
                  if (v107 == v108) {
                    *(_QWORD*)(a1 + 64) = v107;
                    if ((v93 & 0x20) == 0) {
                      goto LABEL_147;
                    }
                  }
                  else {
                    do {
                      v109 = *v107;
                      if (((v109 >> 5) & 0x7F) + 1 <=
                              (__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >>
                              2 &&
                          ((*(_DWORD*)(*(_QWORD*)a1 +
                                       4 * ((v109 >> 5) & 0x7F)) >>
                            v109) &
                           1) != 0) {
                        v110 = *(_QWORD*)(a1 + 32);
                        v111 = *(_QWORD*)(a1 + 40);
                        if (v111 != v110) {
                          v112 = (v111 - v110) >> 2;
                          v113 = 0;
                          while (((*(_DWORD*)(v110 + 4 * v113) ^
                                   (unsigned int)v109) &
                                  0xFFF) != 0) {
                            if (v112 == ++v113) {
                              goto LABEL_149;
                            }
                          }
                          if ((v113 & 0x8000000000000000LL) == 0) {
                            *(_DWORD*)(v110 + 4LL * (unsigned int)v113) = v109;
                          }
                        }
                      }
                    LABEL_149:
                      ++v107;
                    } while (v107 != v108);
                    LOWORD(v93) = *(_WORD*)v12;
                    *(_QWORD*)(a1 + 64) = *(_QWORD*)(a1 + 56);
                    if ((v93 & 0x20) == 0) {
                    LABEL_147:
                      if ((v93 & 0x40) == 0) {
                        return (int)((*(_QWORD*)(a1 + 40) -
                                      *(_QWORD*)(a1 + 32)) >>
                                     2) > 0;
                      }
                      goto LABEL_169;
                    }
                  }
                  v133_.v133[0] = 0x8000000000LL;
                  v114 = game_UnitSkillList_GetTotalValue_alt1(
                      (_QWORD*)(a2 + 1744), v133_.v133);
                  v115 = *(unsigned int**)(a1 + 32);
                  v116 = *(unsigned int**)(a1 + 40);
                  if (v115 != v116) {
                    v117 = *v15;
                    if (v114 >= 9) {
                      v118 = 9;
                    }
                    else {
                      v118 = v114;
                    }
                    v119 = (v118 & 0x1F) << 19;
                    do {
                      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v117 + 64) +
                                               8 * (*v115 & 0xFFFLL)) +
                                    104LL) == 5) {
                        *v115 = *v115 & 0xFF07FFFF | v119;
                        v117 = *v15;
                      }
                      ++v115;
                    } while (v115 != v116);
                  }
                  if ((*(_WORD*)v12 & 0x40) != 0) {
                  LABEL_169:
                    v133_.v133[0] = 0x10000000000LL;
                    v120 = game_UnitSkillList_GetTotalValue_alt1(
                        (_QWORD*)(a2 + 1744), v133_.v133);
                    v121 = *(unsigned int**)(a1 + 32);
                    v122 = *(unsigned int**)(a1 + 40);
                    if (v121 != v122) {
                      v123 = *v15;
                      if (v120 >= 9) {
                        v124 = 9;
                      }
                      else {
                        v124 = v120;
                      }
                      v125 = (v124 & 0x1F) << 19;
                      do {
                        if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v123 + 64) +
                                                 8 * (*v121 & 0xFFFLL)) +
                                      104LL) == 6) {
                          *v121 = *v121 & 0xFF07FFFF | v125;
                          v123 = *v15;
                        }
                        ++v121;
                      } while (v121 != v122);
                    }
                  }
                  return (int)((*(_QWORD*)(a1 + 40) - *(_QWORD*)(a1 + 32)) >>
                               2) > 0;
                }
              }
              v46 = 32;
              goto LABEL_55;
            }
          }
          v40 = 32;
          goto LABEL_46;
        }
      }
      v34 = 32;
      goto LABEL_37;
    }
  }
  v28 = 32;
  goto LABEL_28;
}

__int64 game_UnitSkillList_GetRangeAddImpl_lambda0_Clone(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_DWORD*)(result + 32) = 0;
  *(_QWORD*)result = GameData_1fa1068;
  *(_QWORD*)(result + 8) = 0;
  if (result != a1) {
    v3 = result;
    GameRoutine_7fb7c0_alt2(
        (__int64*)(result + 8), *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16),
        (__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 8)) >> 2);
    result = v3;
  }
  *(_DWORD*)(result + 32) = *(_DWORD*)(a1 + 32);
  *(_QWORD*)(result + 40) = *(_QWORD*)(a1 + 40);
  return result;
}

__int64* game_UnitSkillList_GetRangeAddImpl_lambda0_CloneInto(__int64 a1,
                                                              __int64 a2)
{
  __int64* result;

  *(_QWORD*)(a2 + 8) = 0;
  result = (__int64*)(a2 + 8);
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)(a2 + 24) = 0;
  *(_DWORD*)(a2 + 32) = 0;
  *(_QWORD*)a2 = GameData_1fa1068;
  if (a2 != a1) {
    result = GameRoutine_7fb7c0_alt2(
        result, *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16),
        (__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 8)) >> 2);
  }
  *(_DWORD*)(a2 + 32) = *(_DWORD*)(a1 + 32);
  *(_QWORD*)(a2 + 40) = *(_QWORD*)(a1 + 40);
  return result;
}

__int64 game_UnitSkillList_GetUseFactorImpl_lambda0_Clone(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_DWORD*)(result + 32) = 0;
  *(_QWORD*)result = GameData_1fa10e8;
  *(_QWORD*)(result + 8) = 0;
  if (result != a1) {
    v3 = result;
    GameRoutine_7fb7c0_alt2(
        (__int64*)(result + 8), *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16),
        (__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 8)) >> 2);
    result = v3;
  }
  *(_DWORD*)(result + 32) = *(_DWORD*)(a1 + 32);
  *(_QWORD*)(result + 40) = *(_QWORD*)(a1 + 40);
  return result;
}

__int64* game_UnitSkillList_GetUseFactorImpl_lambda0_CloneInto(__int64 a1,
                                                               __int64 a2)
{
  __int64* result;

  *(_QWORD*)(a2 + 8) = 0;
  result = (__int64*)(a2 + 8);
  *(_QWORD*)(a2 + 16) = 0;
  *(_QWORD*)(a2 + 24) = 0;
  *(_DWORD*)(a2 + 32) = 0;
  *(_QWORD*)a2 = GameData_1fa10e8;
  if (a2 != a1) {
    result = GameRoutine_7fb7c0_alt2(
        result, *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16),
        (__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 8)) >> 2);
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
