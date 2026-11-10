#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6c9540(_QWORD, _QWORD);
__int64 GameRoutine_6c9ab0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_84edc0(_QWORD, _QWORD);
__int64 ITarget_776720(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 MapUtil_753570(int, int);
__int64 MapUtil_753bb0(__int64 result);
__int64 MapUtil_756080(__int64, __int64, unsigned int, unsigned int, _BYTE*);
__int64 TargetEnumerator_77d760(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                _QWORD, _QWORD);
__int64 TargetEnumerator_780410_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD) __asm__("TargetEnumerator_780410");
__int64 Unit_6c9cf0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
bool MapUtil_753ce0(__int64, unsigned int, unsigned int, char);
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_1f97200[])();
extern __int64 (*GameData_1f97590[])();
extern __int64 (*GameData_1f97610[])();
extern __int64 (*GameData_1f97690[])();
extern __int64 (*GameData_1f97710[])();
extern __int64 (*GameData_1f97790[])();
extern __int64 (*GameData_1f97890[])();
extern __int64 (*GameData_1f97910[])();
extern __int64 GameData_212d210[7];
extern __int64 GameData_212d218[6];
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21c9bd0;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd158;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212d000[2];
extern __int64* game_g_empty_item_ptr;
extern unsigned __int8 GameData_1b41abf[17];
int* GameRoutine_74db00(unsigned int, __int64);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD, _QWORD,
                                                  _QWORD);
void __attribute__((noreturn)) GameRoutine_77fcf0(void);
__int64 game_map_anonymous_TargetEnumerator_Shoot(__int64 a1, __int64 a2,
                                                  __int64 a3);
__int64 game_map_anonymous_TargetEnumerator_Shoot_closure_Invoke(__int64 a1,
                                                                 int* a2,
                                                                 int* a3,
                                                                 __int64 a4);
__int64 game_map_anonymous_TargetEnumerator_GetShootX_closure_Invoke(
    __int64 result, unsigned __int8* a2, _DWORD* a3);
__int64 game_map_anonymous_TargetEnumerator_GetShootZ_closure_Invoke(
    __int64 result, unsigned __int8* a2, _DWORD* a3);
__int64 TargetEnumerator_77c150(__int64 result, __int64* a2, int a3, int a4);
bool game_map_anonymous_TargetEnumerator_Attack_closure0_Invoke_77c920(
    __int64 a1, _WORD* a2);
__int64 game_map_anonymous_TargetEnumerator_Attack_closure0_Invoke_77cc30(
    __int64 result, _DWORD* a2);
__int64
TargetEnumerator_77cc80_alt1(__int64 a1, int* a2, unsigned int a3,
                             unsigned int a4,
                             __int64 a5) __asm__("TargetEnumerator_77cc80");
__int64 TargetEnumerator_77ebc0(__int64 a1, _DWORD* a2, __int64 a3);
__int64 TargetEnumerator_77ee30(__int16 a1, int a2, int a3);
__int64 TargetEnumerator_77f010(__int64 a1, char* a2);
_QWORD* game_map_anonymous_TargetEnumerator_AssistSkill_closure_CloneInto(
    _QWORD* result, __int64 a2);
__int64 game_map_anonymous_TargetEnumerator_AssistSkill_closure_Invoke(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 TargetEnumerator_77f800(__int64 a1, unsigned __int8 a2, __int64 a3,
                                char a4);
__int64 TargetEnumerator_77fb20(__int64 a1, int a2, __int64 a3);
_QWORD* game_map_anonymous_TargetEnumerator_Cannon_closure_Clone(_QWORD* a1);
__int64
game_map_anonymous_TargetEnumerator_Cannon_closure_CloneInto(_QWORD* a1,
                                                             _QWORD* a2);
__int64 game_map_anonymous_TargetEnumerator_CanEnter_closure_Invoke(
    __int64 result, unsigned int* a2, unsigned int* a3);
bool TargetEnumerator_780410(_BYTE* a1, __int64 a2, __int16 a3, unsigned int a4,
                             unsigned int a5);
__int64 GameRoutine_77e300(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_844d10(_QWORD, _QWORD, _QWORD);
__int64
game_map_anonymous_TargetEnumerator_Attack_closure_Invoke_77c810(__int64 result,
                                                                 _DWORD* a2);
__int64
game_map_anonymous_TargetEnumerator_Skill_closure_Invoke_77e280(__int64 a1);
__int64
game_map_anonymous_TargetEnumerator_Skill_closure_Invoke_77e8e0(__int64 result,
                                                                _DWORD* a2);
__int64
game_map_anonymous_TargetEnumerator_Skill_closure0_Invoke_77ea00(__int64 a1);
__int64
game_map_anonymous_TargetEnumerator_Skill_closure0_Invoke_77edf0(__int64 result,
                                                                 _DWORD* a2);
__int64
game_map_anonymous_TargetEnumerator_CanSubTarget_closure_Invoke(__int64 a1,
                                                                __int64 a2);
__int64
game_map_anonymous_TargetEnumerator_AssistSkill_closure_Clone(__int64 a1);
__int64
game_map_anonymous_TargetEnumerator_SummonTarget_closure_Invoke(__int64 a1,
                                                                __int64 a2);
__attribute__((swiftcall)) void
game_90e4c0(PSEUDO_X8, _DWORD*, __int64, __int64, int, unsigned int, int, int);
__int64* game_UnitPool_Get_alt1(_BYTE*) __asm__("game_UnitPool_Get");
__int64 GameRoutine_6fc510(__int64);
__int64 GameRoutine_757ed0(__int64 result, _DWORD*, unsigned int, unsigned int);
__int64 ITarget_775580(_BYTE*, char*, __int64);
__int64 MapUtil_753920(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_843de0(_DWORD*, __int64, __int64);
__int64 Unit_6c9cf0_alt1(__int64, __int64) __asm__("Unit_6c9cf0");
__int64 game_UnitPool_Get_alt2(_QWORD,
                               long double) __asm__("game_UnitPool_Get");
__int64 game_Unit_GetMaxPollution(_QWORD*);
__int64 game_Unit_GetParam(__int64);
__int64 game_Unit_IsFriend(__int64, __int64);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
bool GameRoutine_6fc7a0(__int64, _QWORD*);
bool game_HasActiveSkill_843420(_DWORD*, __int64);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1f97800[])();
extern __int64* GameData_212c878[6];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern int GameData_21d9740;
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void __attribute__((noreturn))
GameRoutine_60a310_alt2(_QWORD) __asm__("GameRoutine_60a310");
__int64 TargetEnumerator_77e300(__int64 a1, _DWORD* a2, __int64* a3);
__int64 game_map_anonymous_TargetEnumerator_CanSubTarget(__int64 a1, char* a2);
__int64 game_map_anonymous_TargetEnumerator_Cannon_closure_Invoke(
    __int64 result, int* a2, int* a3, long double a4);
__int64
TargetEnumerator_77d760_alt1(__int64, int*, unsigned int, unsigned int, __int64,
                             int, int,
                             __int64) __asm__("TargetEnumerator_77d760");
__int64 Unit_6c9540(__int64, _DWORD*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
bool Unit_6c9ab0(_QWORD*, _DWORD*, unsigned __int16*);
int* game_map_74db00(unsigned int);
__int64 TargetEnumerator_77cc80(__int64 a1, int* a2, int a3, int a4,
                                __int64 a5);

__int64 game_map_anonymous_TargetEnumerator_Shoot(__int64 a1, __int64 a2,
                                                  __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  __int64 v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  unsigned int v14;
  char v15;
  char v16;
  int v17;
  int v18;
  int v19;
  int v20;
  unsigned int v21;
  int v22;
  int v23;
  int v24;
  char v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned int v30;
  __int64 v31;
  unsigned int v32;
  bool v33;
  __int64 result;
  __int64 v35;
  _QWORD v36[4];
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  int v40;

  v7 = (unsigned int)*(char*)(a2 + 1);
  v8 = (unsigned int)*(char*)(a2 + 2);
  v9 = *(_DWORD*)(a1 + 12);
  v10 = *(_DWORD*)(a1 + 16);
  v11 = *(_DWORD*)(a1 + 20);
  if (v11 < 2) {
    v15 = *(_DWORD*)(a1 + 16);
    v16 = *(_DWORD*)(a1 + 12);
  }
  else {
    v12 = v11 + v10;
    v13 = v11 + v9;
    v14 = 10000;
    v15 = 0;
    v16 = 0;
    do {
      v17 = v8 - v10;
      v18 = v7 - v9;
      v19 = *(_DWORD*)(a1 + 12);
      if ((int)v8 - v10 < 0) {
        v17 = v10 - v8;
      }
      do {
        if (v18 >= 0) {
          v20 = v18;
        }
        else {
          v20 = -v18;
        }
        --v18;
        v21 = v20 + v17;
        if (v21 < v14) {
          v15 = v10;
          v16 = v19;
          v14 = v21;
        }
        ++v19;
      } while (v19 < v13);
      ++v10;
    } while (v10 < v12);
  }
  v38 = v3;
  v39 = v4;
  v22 = v7 - v16;
  v23 = v8 - v15;
  if (v23 <= 0) {
    v24 = ((unsigned int)v22 >> 30) & 2 | (v23 < 0);
  }
  else {
    v24 = ((unsigned int)v22 >> 30) & 2 | (v23 < 0) | 4;
  }
  if (v22 <= 0) {
    v25 = v24;
  }
  else {
    v25 = v24 | 8;
  }
  v26 = v25 - 1;
  if ((v26 & 0xF8) != 0) {
    v27 = 0xFFFFFFFFLL;
  }
  else {
    v27 = (unsigned int)(0x3FFFFFF02FF0100uLL >> (8 * v26));
  }
  v28 = *(_DWORD*)(a1 + 40) & 0xFFFLL;
  if ((_DWORD)v28 != 0) {
    v29 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v28);
    if (v29 == 0) {
      goto LABEL_35;
    }
    goto LABEL_25;
  }
  v30 = *(unsigned __int16*)(a1 + 32);
  if (*(_WORD*)(a1 + 32) == 0) {
    v30 = *(unsigned __int16*)game_g_empty_item_ptr;
  }
  v31 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v30);
  v29 = *(_QWORD*)(v31 + 192);
  v32 = *(unsigned __int8*)(v31 + 72);
  v33 = v29 == 0 || v32 > 7;
  if (!v33 && *(_BYTE*)(v29 + 105) != 0 && *(_BYTE*)(v29 + 104) != 2) {
  LABEL_25:
    LODWORD(v29) = *(_WORD*)(v29 + 16) & 0xFFF;
    goto LABEL_35;
  }
  LODWORD(v29) = 0;
LABEL_35:
  v40 = v29;
  v36[0] = GameData_1f97200;
  v36[1] = a3;
  v37 = v36;
  ITarget_776720(a1, v7, v8, v27, &v40, v36);
  result = (__int64)v37;
  if (v37 == v36) {
    v35 = 32;
  }
  else {
    if (v37 == nullptr) {
      return result;
    }
    v35 = 40;
  }
  return (*(__int64 (**)(__int64))(*v37 + v35))((__int64)v37);
}

__int64 game_map_anonymous_TargetEnumerator_Shoot_closure_Invoke(__int64 a1,
                                                                 int* a2,
                                                                 int* a3,
                                                                 __int64 a4)
{
  int v4;
  __int64 v5;
  int v7;
  int v8;

  v4 = *a3;
  v5 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL);
  v8 = *a2;
  v7 = v4;
  if (v5 == 0) {
    GameRoutine_60a310(0, a2, a3, a4);
  }
  return (*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v5 + 48LL))(v5, &v8,
                                                                     &v7);
}

__int64 game_map_anonymous_TargetEnumerator_GetShootX_closure_Invoke(
    __int64 result, unsigned __int8* a2, _DWORD* a3)
{
  **(_DWORD**)(result + 8) = *a2 | ((unsigned __int8)*a3 << 8);
  return result;
}

__int64 game_map_anonymous_TargetEnumerator_GetShootZ_closure_Invoke(
    __int64 result, unsigned __int8* a2, _DWORD* a3)
{
  **(_DWORD**)(result + 8) = *a2 | ((unsigned __int8)*a3 << 8);
  return result;
}

__int64 TargetEnumerator_77c150(__int64 result, __int64* a2, int a3, int a4)
{
  unsigned int v4;
  char v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v4 = a3 + 32 * a4;
  v5 = a4;
  v6 = a3;
  v7 = result;
  if (v4 >= 0x400) {
    v8 = 0;
  }
  else {
    v8 = v4;
  }
  if (*(_BYTE*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v8 + 8) != 0) {
    v9 = *(_QWORD*)(GameData_21ca310 + 56) +
         2224LL * *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) +
                                      v8 + 8);
    if (*(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v8 + 8) <=
            0xFAu &&
        v9 != 2224 && *(_QWORD*)(v9 - 1832) != 0) {
      result = (__int64)(a2 + 1);
      if (*((_BYTE*)a2 + 8) != 0) {
        result = game_UnitPool_Get(result);
        if (result != 0) {
          v12 = a2;
          v13 = *a2;
          v14 = result;
          result = (*(__int64 (**)(__int64*))(v13 + 16))(v12);
          if ((result & 1) == 0 ||
              ((result = Unit_6c9cf0(v14, v9 - 2224)) & 1) != 0) {
            *(_DWORD*)(v7 + 8) = 0;
            *(_BYTE*)(v7 + 4) = 0;
            *(_WORD*)v7 = -256;
            *(_BYTE*)(v7 + 2) = -1;
            *(_WORD*)(v7 + 6) = -1;
            *(_BYTE*)(v7 + 5) = *(_BYTE*)(v9 - 136);
            v15 = *(_QWORD*)(v9 - 1784);
            if (v15 != 0) {
              *(_BYTE*)(v7 + 3) = *(_BYTE*)(v15 + 16);
            }
            else {
              *(_BYTE*)(v7 + 3) = 9;
            }
          LABEL_29:
            *(_BYTE*)(v7 + 1) = v6;
            *(_BYTE*)(v7 + 2) = v5;
            return result;
          }
        }
      }
    }
  }
  v16 = *(_QWORD*)(GameData_21cd158 + 16);
  v17 = *(_QWORD*)(v16 + 8);
  if ((*(__int16*)(v16 + 2 * v8 + 2152) & 0x8000000000000000LL) == 0 &&
      v17 != 0) {
    v18 = v17 + 144LL * *(__int16*)(v16 + 2 * v8 + 2152);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 272LL))(v18);
    if ((result & 1) != 0) {
      goto LABEL_27;
    }
    v16 = *(_QWORD*)(GameData_21cd158 + 16);
    v17 = *(_QWORD*)(v16 + 8);
  }
  if ((*(__int16*)(v16 + 2 * v8 + 4200) & 0x8000000000000000LL) != 0 ||
      v17 == 0) {
  LABEL_24:
    if ((*(__int16*)(v16 + 104 + 2 * v8) & 0x8000000000000000LL) != 0 ||
        v17 == 0 ||
        (v18 = v17 + 144LL * *(__int16*)(v16 + 104 + 2 * v8),
         ((result = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 288LL))(v18)) &
          1) == 0)) {
      *(_BYTE*)v7 = 0;
      *(_DWORD*)(v7 + 8) = 0;
      *(_BYTE*)(v7 + 5) = 0;
      *(_WORD*)(v7 + 6) = -1;
      *(_WORD*)(v7 + 3) = 9;
      goto LABEL_29;
    }
    goto LABEL_27;
  }
  v18 = v17 + 144LL * *(__int16*)(v16 + 2 * v8 + 4200);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 288LL))(v18);
  if ((result & 1) == 0) {
    v17 = *(_QWORD*)(v16 + 8);
    goto LABEL_24;
  }
LABEL_27:
  *(_DWORD*)(v7 + 8) = 0;
  *(_BYTE*)(v7 + 5) = 0;
  *(_WORD*)v7 = -256;
  *(_BYTE*)(v7 + 2) = -1;
  *(_WORD*)(v7 + 6) = -1;
  *(_WORD*)(v7 + 3) = 9;
  *(_WORD*)(v7 + 6) = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 32LL))(v18);
  (*(void (**)(__int64))(*(_QWORD*)v18 + 56LL))(v18);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 64LL))(v18);
  goto LABEL_29;
}

__int64

game_map_anonymous_TargetEnumerator_Attack_closure_Invoke_77c810(__int64 result,
                                                                 _DWORD* a2)
{
  *(_DWORD*)(*(_QWORD*)(result + 8) + 8LL) = *a2;
  return result;
}

bool game_map_anonymous_TargetEnumerator_Attack_closure0_Invoke_77c920(
    __int64 a1, _WORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  int v17;
  __int64 v18;
  unsigned __int8* v19;
  unsigned __int8* v20;
  __int64 v21;
  unsigned __int8* v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  unsigned int v32;
  int v33;
  int v34;

  v2 = *(_QWORD*)(a1 + 8);
  if ((*(__int16*)(v2 + 6) & 0x8000000000000000LL) != 0) {
    return false;
  }
  v3 = *(_QWORD*)(*(_QWORD*)(GameData_21cd158 + 16) + 8LL);
  if (v3 == 0) {
    return false;
  }
  v4 = *(_QWORD*)(a1 + 16);
  v5 = *(char*)(v2 + 1);
  v6 = *(char*)(v2 + 2);
  v8 = v3 + 144LL * *(__int16*)(v2 + 6);
  if ((MapUtil_753bb0(v8) & 1) == 0) {
    return false;
  }
  if (*(_BYTE*)(v4 + 8) == 0) {
    return false;
  }
  v9 = game_UnitPool_Get(v4 + 8);
  if (v9 == 0) {
    return false;
  }
  v10 = v9;
  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v8 + 280LL))(v8, v9) & 1) ==
      0) {
    return false;
  }
  v12 = *(_DWORD*)(v4 + 12);
  v11 = *(_DWORD*)(v4 + 16);
  v13 = (unsigned __int16)*a2;
  if (*a2 == 0) {
    v17 = 0;
    goto LABEL_32;
  }
  v14 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v13);
  v15 = *(_BYTE**)(v14 + 192);
  if (v15 == nullptr || *(unsigned __int8*)(v14 + 72) > 7u) {
    v17 = *(unsigned __int8*)(v14 + 92);
  }
  else {
    if (v15[105] != 0) {
      if (v15[104] == 2) {
        v18 = 0;
      }
      else {
        v18 = *(_QWORD*)(v14 + 192);
      }
    }
    else {
      v18 = 0;
    }
    if (v18 != 0) {
      v19 = (unsigned __int8*)(v18 + 278);
    }
    else {
      v19 = (unsigned __int8*)(v14 + 92);
    }
    v17 = *v19;
    if (v15[105] != 0) {
      if (v15[104] == 2) {
        v15 = nullptr;
      }
      goto LABEL_28;
    }
  }
  v15 = nullptr;
LABEL_28:
  v20 = (unsigned __int8*)(v14 + 93);
  v21 = *(_QWORD*)(v14 + 24);
  if (v15 != nullptr) {
    v22 = v15 + 279;
  }
  else {
    v22 = v20;
  }
  v23 = *v22;
  LODWORD(v13) = GameRoutine_84edc0(v10 + 1744, v21 + 8) + v23;
LABEL_32:
  v24 = *(_DWORD*)(v10 + 592);
  if ((unsigned int)(v24 * v24) < 2) {
    v33 = v5 - v12;
    if (v5 - v12 < 0) {
      v33 = v12 - v5;
    }
    v34 = v6 - v11;
    if (v6 - v11 < 0) {
      v34 = v11 - v6;
    }
    v27 = v34 + v33;
  }
  else if (v24 < 1) {
    v27 = 10000;
  }
  else {
    v25 = v24 + v11;
    v26 = v24 + v12;
    v27 = 10000;
    do {
      v28 = v6 - v11;
      v29 = v5 - v12;
      v30 = v12;
      if (v6 - v11 < 0) {
        v28 = v11 - v6;
      }
      do {
        ++v30;
        if (v29 >= 0) {
          v31 = v29;
        }
        else {
          v31 = -v29;
        }
        --v29;
        v32 = v31 + v28;
        if (v32 < v27) {
          v27 = v32;
        }
      } while (v30 < v26);
      ++v11;
    } while (v11 < v25);
  }
  return v17 <= v27 && v27 <= (int)v13;
}

__int64 game_map_anonymous_TargetEnumerator_Attack_closure0_Invoke_77cc30(
    __int64 result, _DWORD* a2)
{
  *(_DWORD*)(*(_QWORD*)(result + 8) + 8LL) = *a2;
  return result;
}

__int64 TargetEnumerator_77cc80(__int64 a1, int* a2, int a3, int a4, __int64 a5)
{
  __int16 v5;
  _BYTE* v6;
  __int64* v11;
  __int64* v12;
  int v13;
  int v15;
  __int64* v16;
  int v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int16* v22;
  __int64 i;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  int* v27;
  int* v28;
  __int64 v29;
  unsigned int v30;
  int v31;
  int v32;
  unsigned __int8* v33;
  signed int v34;
  signed int v35;
  signed int v36;
  signed int v37;
  int v38;
  signed int v39;
  signed int v40;
  bool j;
  signed int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  unsigned int v53;
  int v54;
  int v55;
  int v57;
  int v58;
  unsigned __int8* v59;
  signed int v60;
  signed int v61;
  signed int v62;
  signed int v63;
  int v64;
  signed int v65;
  signed int v66;
  signed int v67;
  char v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  int v74;
  int v75;
  int v76;
  int v77;
  int v78;
  unsigned int v79;
  int v80;
  int v81;
  __int64 v83;
  int v84;
  char v85;
  __int64 v86;
  __int64* v87;
  __int64 v88;
  int v89;
  _QWORD* v90;
  __int64* v91;
  __int64 v92;
  unsigned __int8* v93;
  int v94;
  int v95;
  char v96;
  int v97;
  __int64 v98;
  __int64 v99;
  int v100;
  _QWORD* v101;
  __int64* v102;
  __int64 v103;
  unsigned __int8* v104;
  int v105;
  int v106;
  char v107;
  int v108;
  __int64 v109;
  __int64 v110;
  int v111;
  int v112;
  unsigned __int8* v113;
  signed int v114;
  signed int v115;
  signed int v116;
  signed int v117;
  int v118;
  signed int v119;
  signed int v120;
  int v121;
  int v122;
  int v123;
  int v124;
  int v125;
  unsigned int v126;
  int v127;
  int v128;
  int v129;
  int v130;
  unsigned int v131;
  int v132;
  int v133;
  _QWORD* v134;
  __int64 v135;
  _BYTE* v136;
  int v137;
  signed int v138;
  signed int v139;
  signed int v140;
  char* v141;
  char* v142;
  signed int v143;
  int* v144;
  signed int v146;
  signed int v147;
  signed int v148;
  struct {
    _BYTE v149[32];
    int v150;
  } v149_;
  char v151;
  struct {
    _QWORD v152[4];
    _QWORD* v153;
  } v152_;
  struct {
    _QWORD v154[2];
    int v155;
    char gap180_[4];
    __int64 v156;
    _QWORD* v157;
  } v154_;
  _BYTE v158[5];
  struct {
    char gap220_[1];
    char v159;
    __int16 v160;
    int v161;
  } v159_;
  _DWORD v162[3];

  v5 = *(_WORD*)a2;
  v151 = 0;
  if ((v5 & 0xFFF) == 0 || (v6 = (_BYTE*)(a1 + 8), *(_BYTE*)(a1 + 8) == 0) ||
      (v11 = game_UnitPool_Get_alt1((_BYTE*)(a1 + 8))) == nullptr ||
      (v12 = v11, (Unit_6c9540((__int64)v11, a2) & 1) == 0) &&
          (*(_BYTE*)(a1 + 48) & 1) == 0) {
  LABEL_6:
    LOBYTE(v13) = 0;
    return v13 & 1;
  }
  v15 = (unsigned __int8)*v6;
  v149_.v150 = 0;
  if (v15 != 0) {
    v16 = game_UnitPool_Get_alt1(v6);
  }
  else {
    v16 = nullptr;
  }
  v17 = 0;
  v18 = GameData_212c880[0];
  v19 = *a2 & 0xFFF;
  v20 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v21 = *(_QWORD*)(v20 + 8 * v19);
  if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v21 + 104)) & 1) !=
          0 &&
      *(_QWORD*)(v21 + 576) == 0) {
    if (*(_WORD*)(v21 + 136) != 0) {
      v22 = (unsigned __int16*)v16 + 414;
      for (i = 0; i != 30; ++i) {
        if (Unit_6c9ab0(v16, a2, v22)) {
          v24 = v149_.v150++;
          v149_.v149[v24] = i;
        }
        v22 += 4;
      }
      v17 = v149_.v150;
      v18 = GameData_212c880[0];
      v19 = *a2 & 0xFFF;
      v20 = *(_QWORD*)(*GameData_212c880[0] + 64);
    }
    else {
      v17 = 0;
    }
  }
  v25 = *(_QWORD*)(v20 + 8 * v19);
  v26 = *(unsigned __int8*)(v25 + 280);
  if (*(_BYTE*)(v25 + 280) == 0) {
    if (*(_BYTE*)(v25 + 105) == 2) {
      v26 = *((_DWORD*)v12 + 148);
    }
    else {
      v26 = 1;
    }
  }
  v27 = game_map_74db00(v26);
  v28 = a2;
  v29 = (__int64)v27;
  LOBYTE(v13) = 0;
  v30 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v18 + 64) +
                                       8LL * (*a2 & 0xFFF)) +
                            105LL);
  if (v30 <= 2) {
    if (v30 != 1) {
      if (v30 == 2) {
        v13 = 0;
        v31 = *(_DWORD*)(a1 + 12);
        v32 = *(_DWORD*)(a1 + 16);
        v33 = (unsigned __int8*)*GameData_212ce98[0];
        if (v31 - a4 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
          v34 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
        }
        else {
          v34 = v31 - a4;
        }
        v146 = v34;
        if (v32 - a4 <= v33[29]) {
          v35 = v33[29];
        }
        else {
          v35 = v32 - a4;
        }
        v36 = v33[30];
        v37 = v33[31];
        v38 = *(_DWORD*)(a1 + 20) + a4;
        v39 = v38 + v31;
        if (v39 >= v36) {
          v40 = v36;
        }
        else {
          v40 = v39;
        }
        if (v38 + v32 < v37) {
          v37 = v38 + v32;
        }
        v140 = v37;
        for (j = v35 <= v37 && v34 <= v40; j; ++v35) {
          v42 = v146;
          do {
            v43 = *(_DWORD*)(a1 + 20);
            v45 = *(_DWORD*)(a1 + 12);
            v44 = *(_DWORD*)(a1 + 16);
            if ((unsigned int)(v43 * v43) < 2) {
              v54 = v42 - v45;
              if (v54 < 0) {
                v54 = -v54;
              }
              v55 = v35 - v44;
              if (v55 < 0) {
                v55 = -v55;
              }
              v48 = v55 + v54;
            }
            else if (v43 < 1) {
              v48 = 10000;
            }
            else {
              v46 = v43 + v44;
              v47 = v43 + v45;
              v48 = 10000;
              do {
                v49 = v35 - v44;
                v50 = v42 - v45;
                v51 = *(_DWORD*)(a1 + 12);
                if (v35 - v44 < 0) {
                  v49 = v44 - v35;
                }
                do {
                  ++v51;
                  if (v50 >= 0) {
                    v52 = v50;
                  }
                  else {
                    v52 = -v50;
                  }
                  --v50;
                  v53 = v52 + v49;
                  if (v53 < v48) {
                    v48 = v53;
                  }
                } while (v51 < v47);
                ++v44;
              } while (v44 < v46);
            }
            if (v48 >= a3 && v48 <= a4) {
              v13 |= TargetEnumerator_77d760_alt1(a1, a2, v42, v35, v29, a3, a4,
                                                  a5);
            }
            j = v42++ < v40;
          } while (j);
          j = v35 < v140;
        }
      }
      return v13 & 1;
    }
    v137 = v17;
    v57 = *(_DWORD*)(a1 + 12);
    v58 = *(_DWORD*)(a1 + 16);
    v59 = (unsigned __int8*)*GameData_212ce98[0];
    if (v57 - a4 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
      v60 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
    }
    else {
      v60 = v57 - a4;
    }
    if (v58 - a4 <= v59[29]) {
      v61 = v59[29];
    }
    else {
      v61 = v58 - a4;
    }
    v62 = v59[30];
    v63 = v59[31];
    v64 = *(_DWORD*)(a1 + 20) + a4;
    v65 = v64 + v57;
    if (v65 >= v62) {
      v66 = v62;
    }
    else {
      v66 = v65;
    }
    if (v64 + v58 < v63) {
      v63 = v64 + v58;
    }
    v139 = v63;
    if (v61 > v63 || v60 > v66) {
      goto LABEL_6;
    }
    v138 = v60;
    LOBYTE(v13) = 0;
    v135 = a5;
    v136 = v6;
    v144 = v27;
    v147 = v66;
  LABEL_92:
    v67 = v138;
    while (1) {
      v69 = *(_DWORD*)(a1 + 20);
      v71 = *(_DWORD*)(a1 + 12);
      v70 = *(_DWORD*)(a1 + 16);
      if ((unsigned int)(v69 * v69) < 2) {
        v80 = v67 - v71;
        if (v80 < 0) {
          v80 = -v80;
        }
        v81 = v61 - v70;
        if (v81 < 0) {
          v81 = -v81;
        }
        v74 = v81 + v80;
      }
      else if (v69 < 1) {
        v74 = 10000;
      }
      else {
        v72 = v69 + v70;
        v73 = v69 + v71;
        v74 = 10000;
        do {
          v75 = v61 - v70;
          v76 = v67 - v71;
          v77 = *(_DWORD*)(a1 + 12);
          if (v61 - v70 < 0) {
            v75 = v70 - v61;
          }
          do {
            ++v77;
            if (v76 >= 0) {
              v78 = v76;
            }
            else {
              v78 = -v76;
            }
            --v76;
            v79 = v78 + v75;
            if (v79 < v74) {
              v74 = v79;
            }
          } while (v77 < v73);
          ++v70;
        } while (v70 < v72);
      }
      if (v74 >= a3 && v74 <= a4) {
        v83 = *(_QWORD*)(*(_QWORD*)(*v18 + 64) + 8LL * (*v28 & 0xFFF));
        if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v83 + 104)) &
             1) != 0 &&
            *(_QWORD*)(v83 + 576) == 0 && *(_WORD*)(v83 + 136) != 0) {
          break;
        }
        v68 = TargetEnumerator_77d760_alt1(a1, v28, v67, v61, v29, a3, a4, a5);
      LABEL_94:
        v66 = v147;
        LOBYTE(v13) = v13 | v68;
      }
      j = v67++ < v66;
      if (!j) {
        j = v61++ < v139;
        if (!j) {
          return v13 & 1;
        }
        goto LABEL_92;
      }
    }
    TargetEnumerator_77c150((__int64)v158, (__int64*)a1, v67, v61);
    v84 = *(unsigned __int8*)(a1 + 24);
    v85 = MapUtil_753570(v158[1], v158[2]);
    if (v84 == 19) {
      v29 = (__int64)v144;
      if ((v85 & 1) != 0) {
        goto LABEL_126;
      }
      goto LABEL_184;
    }
    v29 = (__int64)v144;
    if ((v85 & 1) == 0 ||
        (v159_.v159 == 0 ||
         (v87 = game_UnitPool_Get_alt1(&v159_.v159)) == nullptr ||
         v87[49] == 0) &&
            ((v159_.v160 & 0x8000000000000000LL) != 0 ||
             (v88 = *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL)) ==
                 0 ||
             ((*(__int64 (**)(__int64))(*(_QWORD*)(v88 + 144LL * v159_.v160) +
                                        272LL))(v88 + 144LL * v159_.v160) &
              1) == 0)) {
    LABEL_184:
      v68 = 0;
      goto LABEL_94;
    }
    if (v159_.v159 == 0 || game_UnitPool_Get_alt1(&v159_.v159) == nullptr) {
      goto LABEL_159;
    }
    v89 = *v28;
    v90 = v152_.v152;
    v154_.v154[0] = GameData_1f97590;
    v154_.v154[1] = v158;
    v152_.v153 = v152_.v152;
    v154_.v155 = v89;
    v154_.v156 = a1;
    v154_.v157 = v154_.v154;
    v152_.v152[0] = GameData_1f97610;
    v152_.v152[1] = v158;
    if (*(_BYTE*)(a1 + 8) != 0) {
      v91 = game_UnitPool_Get_alt1(v136);
      if (v91 != nullptr && v137 >= 1) {
        v92 = (unsigned int)v137;
        v93 = v149_.v149;
        v94 = 0;
        v141 = (char*)v91 + 828;
        do {
          if (v154_.v157 == nullptr) {
            goto LABEL_223;
          }
          v95 = *v93++;
          v96 = (*(__int64 (**)(_QWORD*, char*))(*v154_.v157 + 48LL))(
              v154_.v157, &v141[8 * v95]);
          v97 = 1 << v95;
          if ((v96 & 1) == 0) {
            v97 = 0;
          }
          --v92;
          v94 |= v97;
        } while (v92 != 0);
        a5 = v135;
        v29 = (__int64)v144;
        v28 = a2;
        if (v94 != 0) {
          v162[0] = v94;
          if (v152_.v153 == nullptr) {
            goto LABEL_223;
          }
          (*(void (**)(_QWORD*, _DWORD*))(*v152_.v153 + 48LL))(v152_.v153,
                                                               v162);
        }
      }
      v90 = v152_.v153;
      if (v152_.v153 == v152_.v152) {
        v98 = 32;
        v18 = GameData_212c880[0];
      }
      else {
        v18 = GameData_212c880[0];
        if (v152_.v153 == nullptr) {
        LABEL_154:
          if (v154_.v157 == v154_.v154) {
            v99 = 32;
            goto LABEL_158;
          }
          if (v154_.v157 != nullptr) {
            v99 = 40;
          LABEL_158:
            (*(void (**)(__int64))(*v154_.v157 + v99))((__int64)v154_.v157);
          }
        LABEL_159:
          if (v159_.v160 < 0 ||
              *(_QWORD*)(*(_QWORD*)(*GameData_212cfb8[0] + 16) + 8LL) == 0) {
            goto LABEL_183;
          }
          v100 = *v28;
          v101 = v152_.v152;
          v154_.v154[0] = GameData_1f97690;
          v154_.v154[1] = v158;
          v152_.v153 = v152_.v152;
          v154_.v155 = v100;
          v154_.v156 = a1;
          v154_.v157 = v154_.v154;
          v152_.v152[0] = GameData_1f97710;
          v152_.v152[1] = v158;
          if (*(_BYTE*)(a1 + 8) != 0) {
            v102 = game_UnitPool_Get_alt1(v136);
            if (v102 != nullptr && v137 >= 1) {
              v103 = (unsigned int)v137;
              v104 = v149_.v149;
              v105 = 0;
              v142 = (char*)v102 + 828;
              do {
                if (v154_.v157 == nullptr) {
                  goto LABEL_223;
                }
                v106 = *v104++;
                v107 = (*(__int64 (**)(_QWORD*, char*))(*v154_.v157 + 48LL))(
                    v154_.v157, &v142[8 * v106]);
                v108 = 1 << v106;
                if ((v107 & 1) == 0) {
                  v108 = 0;
                }
                --v103;
                v105 |= v108;
              } while (v103 != 0);
              a5 = v135;
              v29 = (__int64)v144;
              v28 = a2;
              if (v105 != 0) {
                v162[0] = v105;
                if (v152_.v153 == nullptr) {
                LABEL_223:
                  GameRoutine_60a310_alt1();
                }
                (*(void (**)(_QWORD*, _DWORD*))(*v152_.v153 + 48LL))(v152_.v153,
                                                                     v162);
              }
            }
            v101 = v152_.v153;
            if (v152_.v153 == v152_.v152) {
              v109 = 32;
              v18 = GameData_212c880[0];
            }
            else {
              v18 = GameData_212c880[0];
              if (v152_.v153 == nullptr) {
              LABEL_178:
                if (v154_.v157 == v154_.v154) {
                  v110 = 32;
                }
                else {
                  if (v154_.v157 == nullptr) {
                    goto LABEL_183;
                  }
                  v110 = 40;
                }
                (*(void (**)(__int64))(*v154_.v157 + v110))(
                    (__int64)v154_.v157);
              LABEL_183:
                if (v159_.v161 != 0) {
                LABEL_126:
                  v86 = *(_QWORD*)(a5 + 32);
                  if (v86 == 0) {
                    goto LABEL_223;
                  }
                  (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v86 + 48LL))(v86,
                                                                        v158);
                  v68 = 1;
                  goto LABEL_94;
                }
                goto LABEL_184;
              }
              v109 = 40;
            }
          }
          else {
            v109 = 32;
          }
          (*(void (**)(__int64))(*v101 + v109))((__int64)v101);
          goto LABEL_178;
        }
        v98 = 40;
      }
    }
    else {
      v98 = 32;
    }
    (*(void (**)(__int64))(*v90 + v98))((__int64)v90);
    goto LABEL_154;
  }
  if (v30 == 3) {
    v111 = *(_DWORD*)(a1 + 12);
    v112 = *(_DWORD*)(a1 + 16);
    v113 = (unsigned __int8*)*GameData_212ce98[0];
    if (v111 - 1 <= *(unsigned __int8*)(*GameData_212ce98[0] + 28)) {
      v114 = *(unsigned __int8*)(*GameData_212ce98[0] + 28);
    }
    else {
      v114 = v111 - 1;
    }
    if (v112 - 1 <= v113[29]) {
      v115 = v113[29];
    }
    else {
      v115 = v112 - 1;
    }
    v116 = v113[30];
    v117 = v113[31];
    v118 = *(_DWORD*)(a1 + 20) + 1;
    v119 = v118 + v111;
    if (v119 >= v116) {
      v120 = v116;
    }
    else {
      v120 = v119;
    }
    if (v118 + v112 < v117) {
      v117 = v118 + v112;
    }
    v148 = v117;
    if (v115 > v117 || v114 > v120) {
      goto LABEL_6;
    }
    v143 = v114;
    while (1) {
      v121 = *(_DWORD*)(a1 + 20);
      v123 = *(_DWORD*)(a1 + 12);
      v122 = *(_DWORD*)(a1 + 16);
      if ((unsigned int)(v121 * v121) < 2) {
        v132 = v114 - v123;
        if (v132 < 0) {
          v132 = -v132;
        }
        v133 = v115 - v122;
        if (v133 < 0) {
          v133 = -v133;
        }
        if (v133 + v132 != 1) {
          goto LABEL_199;
        }
      }
      else {
        if (v121 < 1) {
          goto LABEL_199;
        }
        v124 = v121 + v122;
        v125 = v121 + v123;
        v126 = 10000;
        do {
          v127 = v115 - v122;
          v128 = v114 - v123;
          v129 = *(_DWORD*)(a1 + 12);
          if (v115 - v122 < 0) {
            v127 = v122 - v115;
          }
          do {
            ++v129;
            if (v128 >= 0) {
              v130 = v128;
            }
            else {
              v130 = -v128;
            }
            --v128;
            v131 = v130 + v127;
            if (v131 < v126) {
              v126 = v131;
            }
          } while (v129 < v125);
          ++v122;
        } while (v122 < v124);
        if (v126 != 1) {
          goto LABEL_199;
        }
      }
      v134 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
      v134[4] = a5;
      v154_.v157 = v134;
      *v134 = GameData_1f97790;
      v134[1] = a1;
      v134[2] = &v151;
      v134[3] = a2;
      TargetEnumerator_77d760_alt1(a1, a2, v114, v115, v29, a3, a4,
                                   (__int64)v154_.v154);
      (*(void (**)(_QWORD*))(*v134 + 40LL))(v134);
    LABEL_199:
      j = v114++ < v120;
      if (!j) {
        v114 = v143;
        j = v115++ < v148;
        if (!j) {
          LOBYTE(v13) = v151;
          return v13 & 1;
        }
      }
    }
  }
  if (v30 == 4) {
    LOBYTE(v13) = TargetEnumerator_77d760_alt1(a1, a2, *(_DWORD*)(a1 + 12),
                                               *(_DWORD*)(a1 + 16),
                                               (__int64)v27, a3, a4, a5);
  }
  return v13 & 1;
}

__int64

game_map_anonymous_TargetEnumerator_Skill_closure_Invoke_77e280(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;

  v2 = *(_QWORD*)(a1 + 24);
  v3 = *(_QWORD*)(a1 + 8);
  v5 = *(unsigned __int8*)(v3 + 5);
  v4 = v3 + 5;
  if (v5 != 0) {
    v6 = game_UnitPool_Get(v4);
  }
  else {
    v6 = 0;
  }
  return GameRoutine_77e300(v2, a1 + 16, v6);
}

__int64 TargetEnumerator_77e300(__int64 a1, _DWORD* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  bool v6;
  _BYTE* v7;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _DWORD* v16;
  _DWORD* v17;
  unsigned int v18;
  bool v19;
  unsigned int v20;
  __int64* v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  __int64 v29;
  char v30;
  __int64 v31;
  unsigned int* v32;
  unsigned int* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned int v40;
  int v41;
  int v42;
  unsigned int v43;
  __int64* v44;
  __int64 v45;
  __int64* v46;
  __int64* v47;
  __int64* v48;
  __int64 v49;
  _DWORD* v50;
  _DWORD* v51;
  unsigned __int64 v53;
  __int64 v54;
  int v55;
  bool v56;
  __int64 v57;
  struct {
    _BYTE v58[16];
    __int64 vars0;
    __int64 vars8;
    char gap48_[48];
    __int64 vars40;
    __int64 vars48;
    __int64 vars50;
  } v58_;
  __int64 _78;

  if ((*(_WORD*)a2 & 0xFFF) == 0 ||
      ((v7 = (_BYTE*)(a1 + 8), *(_BYTE*)(a1 + 8) == 0)
           ? (v11 = nullptr)
           : (v11 = game_UnitPool_Get_alt1((_BYTE*)(a1 + 8))),
       (UnitSkillList_843de0(a2, (__int64)v11, (__int64)a3) & 1) == 0)) {
  LABEL_62:
    v30 = 0;
    return v30 & 1;
  }
  v12 = GameData_212c880[0];
  v13 = *a2 & 0xFFF;
  v14 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v15 = *(_QWORD*)(*(_QWORD*)(v14 + 8 * v13) + 24LL);
  v16 = *(_DWORD**)(v15 + 544);
  v17 = *(_DWORD**)(v15 + 552);
  if (v16 != v17) {
    v57 = (__int64)a3;
    do {
      v18 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v12 + 64) +
                                           8LL * (*v16 & 0xFFF)) +
                                250LL);
      v19 = v18 > 0x1F;
      v20 = (1 << v18) & 0x80000600;
      if (!v19 && v20 != 0 && *v7 != 0) {
        v22 = game_UnitPool_Get_alt1(v7);
        if (v22 != nullptr && (*v16 & 0xFFF) != 0) {
          v23 = v22;
          v24 = *(_QWORD*)(*(_QWORD*)(*v12 + 64) + 8LL * (*v16 & 0xFFF));
          if ((GameRoutine_6fc510(v24) & 1) == 0) {
            if (*(_BYTE*)(v24 + 273) == 0 ||
                ((v25 =
                      *(_QWORD*)(*(_QWORD*)(*v12 + 64) + 8 * (*v16 & 0xFFFLL)),
                  v26 = *(unsigned __int8*)(v25 + 104),
                  v27 = *(unsigned __int8*)(v25 + 273),
                  (unsigned int)(v26 - 5) >= 2)
                     ? (v28 = 0)
                     : (v28 = (*v16 >> 19) & 0x1F),
                 v28 - ((*v16 >> 12) & 0x7F) + v27 >= 1)) {
              if (GameRoutine_6fc7a0(v24, v23 + 218) &&
                  (TargetEnumerator_77e300(a1, v16, v57) & 1) != 0) {
                goto LABEL_68;
              }
            }
          }
        }
      }
      ++v16;
    } while (v16 != v17);
    a3 = (__int64*)v57;
    v13 = *a2 & 0xFFF;
    v14 = *(_QWORD*)(*v12 + 64);
  }
  v29 = *(_QWORD*)(v14 + 8 * v13);
  if (v29 == 0) {
  LABEL_68:
    v30 = 1;
    return v30 & 1;
  }
  v30 = 1;
  switch (*(_BYTE*)(v29 + 250)) {
  case 9:
  case 0xA:
    v31 = *(_QWORD*)(v29 + 24);
    v32 = *(unsigned int**)(v31 + 448);
    v33 = *(unsigned int**)(v31 + 456);
    while (2) {
      if (v32 == v33) {
        v42 = *((__int16*)a3 + 246);
        v58_.v58[0] = 0;
        v30 = (int)game_Unit_GetParam((__int64)a3) > v42;
        return v30 & 1;
      }
      v34 = *v32;
      if ((v34 & 0xFFF) == 0) {
        goto LABEL_29;
      }
      v35 = a3[170];
      if (((v34 >> 5) & 0x7F) + 1 > (a3[171] - v35) >> 2 ||
          ((*(_DWORD*)(v35 + 4 * ((v34 >> 5) & 0x7F)) >> v34) & 1) == 0) {
        goto LABEL_68;
      }
      v36 = a3[175];
      v37 = a3[174];
      if (v36 == v37) {
        goto LABEL_29;
      }
      v38 = (v36 - v37) >> 2;
      v39 = 0;
      while (((*(_DWORD*)(v37 + 4 * v39) ^ (unsigned int)v34) & 0xFFF) != 0) {
        if (v38 == ++v39) {
          goto LABEL_29;
        }
      }
      if (v39 < 0 ||
          ((v40 = *(_DWORD*)(v37 + 4LL * (unsigned int)v39),
            *(unsigned __int8*)(*(_QWORD*)(v14 + 8LL * (v40 & 0xFFF)) +
                                281LL) <= 1u)
               ? (v41 = 1)
               : (v41 = *(
                      unsigned __int8*)(*(_QWORD*)(v14 + 8LL * (v40 & 0xFFF)) +
                                        281LL)),
           (v30 = 1, (v40 & 0x1F000000) == 0) &&
               ((v40 >> 19) & 0x1F) >= v41 - 1)) {
      LABEL_29:
        ++v32;
        continue;
      }
      return v30 & 1;
    }
  case 0xC:
    v30 = a3[52] & 1;
    return v30 & 1;
  case 0xF:
    if (*v7 != 0) {
      v46 = game_UnitPool_Get_alt1(v7);
    }
    else {
      v46 = nullptr;
    }
    v56 = a3 == v46;
    goto LABEL_80;
  case 0x10:
    if (*v7 != 0) {
      v47 = game_UnitPool_Get_alt1(v7);
    }
    else {
      v47 = nullptr;
    }
    v30 = game_Unit_IsFriend((__int64)a3, (__int64)v47) ^ 1;
    return v30 & 1;
  case 0x1C:
    if (*v7 != 0) {
      v48 = game_UnitPool_Get_alt1(v7);
    }
    else {
      v48 = nullptr;
    }
    return GameRoutine_757ed0((__int64)v48, a2, *(_DWORD*)(a1 + 12),
                              *(_DWORD*)(a1 + 16));
  case 0x1E:
    if (*v7 != 0) {
      v44 = game_UnitPool_Get_alt1(v7);
    }
    else {
      v44 = nullptr;
    }
    game_90e4c0((void*)((__int64)v58_.v58), a2, (__int64)v44, (__int64)a3,
                *(_DWORD*)(a1 + 12), *(_DWORD*)(a1 + 16), -1, -1);
    v30 = 1;
    if (v58_.v58[0] != v58_.v58[4] || v58_.v58[1] != v58_.v58[5]) {
      return v30 & 1;
    }
    v56 = v58_.v58[8] == v58_.v58[12] && v58_.v58[9] == v58_.v58[13];
    goto LABEL_80;
  case 0x1F:
    v49 = *(_QWORD*)(v29 + 24);
    v51 = *(_DWORD**)(v49 + 448);
    v50 = *(_DWORD**)(v49 + 456);
    if (v51 == v50) {
      goto LABEL_62;
    }
    while (1) {
      v53 = (unsigned int)*v51;
      v54 = a3[170];
      if (((v53 >> 5) & 0x7F) + 1 <= (a3[171] - v54) >> 2 &&
          ((*(_DWORD*)(v54 + 4 * ((v53 >> 5) & 0x7F)) >> v53) & 1) != 0 &&
          game_HasActiveSkill_843420(v51, (__int64)(a3 + 170))) {
        break;
      }
      ++v51;
      v30 = 0;
      if (v51 == v50) {
        return v30 & 1;
      }
    }
    goto LABEL_68;
  case 0x21:
    if (*(_WORD*)(v29 + 256) == 0) {
      return v30 & 1;
    }
    if (**(__int16**)(v29 + 264) < 0) {
      v56 = *((_BYTE*)a3 + 499) == 0;
    LABEL_80:
      v30 = !v56;
    }
    else if (**(_WORD**)(v29 + 264) != 0) {
      v43 = *((unsigned __int8*)a3 + 499);
      v30 = (unsigned int)game_Unit_GetMaxPollution(a3) > v43;
    }
    return v30 & 1;
  case 0x22:
    v55 = *(unsigned __int16*)(v29 + 256);
    if (*(_WORD*)(v29 + 256) != 0) {
      v55 = **(__int16**)(v29 + 264);
    }
    v56 = v55 == *((unsigned __int8*)a3 + 499);
    goto LABEL_80;
  case 0x26:
    v45 = (__int64)a3;
    if ((a3[52] & 4) != 0) {
      return 1;
    }
    v58_.vars40 = v58_.vars0;
    v58_.vars48 = v58_.vars8;
    v58_.vars50 = _78;
    v3 = a3[218];
    v4 = a3[219] - v3;
    HIDWORD(_78) = GameData_21d9740 & 0xFFF;
    v5 = ((unsigned __int64)(unsigned int)GameData_21d9740 >> 5) & 0x7F;
    if (v5 + 1 <= v4 >> 2 &&
        ((*(_DWORD*)(v3 + 4LL * (unsigned int)v5) >> GameData_21d9740) & 1) !=
            0 &&
        (v6 =
             game_HasActiveSkill_843420((_DWORD*)&_78 + 1, (__int64)(a3 + 218)),
         v45 = (__int64)a3, v6)) {
      return 1;
    }
    else {
      return *(_DWORD*)(v45 + 592) < 2;
    }
  default:
    return v30 & 1;
  }
}

__int64

game_map_anonymous_TargetEnumerator_Skill_closure_Invoke_77e8e0(__int64 result,
                                                                _DWORD* a2)
{
  *(_DWORD*)(*(_QWORD*)(result + 8) + 8LL) = *a2;
  return result;
}

__int64

game_map_anonymous_TargetEnumerator_Skill_closure0_Invoke_77ea00(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v14;
  unsigned int v15;
  int v16;

  if ((*(__int16*)(*(_QWORD*)(a1 + 8) + 6LL) & 0x8000000000000000LL) != 0) {
    return 0;
  }
  v1 = *(_QWORD*)(*(_QWORD*)(GameData_21cd158 + 16) + 8LL);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a1 + 24);
  v4 = v1 + 144LL * *(__int16*)(*(_QWORD*)(a1 + 8) + 6LL);
  if ((MapUtil_753bb0(v4) & 1) == 0) {
    return 0;
  }
  v5 = GameData_212c880[0];
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                  8LL * (*(_DWORD*)(a1 + 16) & 0xFFF));
  if (v6 != 0) {
    v7 = *(unsigned __int8*)(v6 + 250);
    if ((unsigned int)v7 > 0x25) {
      return 0;
    }
    if (((1LL << v7) & 0x6018181) == 0) {
      return v7 == 37 &&
             ((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 272LL))(v4) & 1) != 0;
    }
  }
  v9 = *(unsigned __int8*)(v2 + 8);
  v8 = v2 + 8;
  if (v9 != 0) {
    v10 = game_UnitPool_Get(v8);
  }
  else {
    v10 = 0;
  }
  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v4 + 280LL))(v4, v10) &
       1) != 0) {
    v11 =
        *(_QWORD*)(*(_QWORD*)(*v5 + 64) + 8LL * (*(_DWORD*)(a1 + 16) & 0xFFF));
    if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v11 + 104)) &
         1) != 0) {
      v12 = *(unsigned __int8*)(v11 + 106);
      if (*(_BYTE*)(v11 + 106) == 0 || v12 == 6) {
        v14 = *(_QWORD*)(v11 + 576);
        if (v14 == 0) {
          return ((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v4 + 296LL))(
                      v4, a1 + 16) &
                  1) != 0;
        }
      }
      else {
        if (v12 != 1) {
          return ((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v4 + 296LL))(
                      v4, a1 + 16) &
                  1) != 0;
        }
        v14 = *(_QWORD*)(v11 + 576);
        if (v14 == 0) {
          return 1;
        }
      }
      v15 = *(unsigned __int8*)(v14 + 72);
      v16 = *(unsigned __int8*)(v14 + 73);
      if (v15 <= 7 && v16 == 1) {
        return 1;
      }
    }
  }
  return ((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v4 + 296LL))(v4,
                                                                    a1 + 16) &
          1) != 0;
}

__int64 TargetEnumerator_77ebc0(__int64 a1, _DWORD* a2, __int64 a3)
{
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v15;
  unsigned int v16;
  int v17;

  if (a3 == 0 || (MapUtil_753bb0(a3) & 1) == 0) {
    return 0;
  }
  v6 = GameData_212c880[0];
  v7 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (v7 != 0) {
    v8 = *(unsigned __int8*)(v7 + 250);
    if ((unsigned int)v8 > 0x25) {
      return 0;
    }
    if (((1LL << v8) & 0x6018181) == 0) {
      return v8 == 37 &&
             ((*(__int64 (**)(__int64))(*(_QWORD*)a3 + 272LL))(a3) & 1) != 0;
    }
  }
  v10 = *(unsigned __int8*)(a1 + 8);
  v9 = a1 + 8;
  if (v10 != 0) {
    v11 = game_UnitPool_Get(v9);
  }
  else {
    v11 = 0;
  }
  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)a3 + 280LL))(a3, v11) &
       1) != 0) {
    v12 = *(_QWORD*)(*(_QWORD*)(*v6 + 64) + 8LL * (*a2 & 0xFFF));
    if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v12 + 104)) &
         1) != 0) {
      v13 = *(unsigned __int8*)(v12 + 106);
      if (*(_BYTE*)(v12 + 106) == 0 || v13 == 6) {
        v15 = *(_QWORD*)(v12 + 576);
        if (v15 == 0) {
          return ((*(__int64 (**)(__int64, _DWORD*))(*(_QWORD*)a3 + 296LL))(
                      a3, a2) &
                  1) != 0;
        }
      }
      else {
        if (v13 != 1) {
          return ((*(__int64 (**)(__int64, _DWORD*))(*(_QWORD*)a3 + 296LL))(
                      a3, a2) &
                  1) != 0;
        }
        v15 = *(_QWORD*)(v12 + 576);
        if (v15 == 0) {
          return 1;
        }
      }
      v16 = *(unsigned __int8*)(v15 + 72);
      v17 = *(unsigned __int8*)(v15 + 73);
      if (v16 <= 7 && v17 == 1) {
        return 1;
      }
    }
  }
  return ((*(__int64 (**)(__int64, _DWORD*))(*(_QWORD*)a3 + 296LL))(a3, a2) &
          1) != 0;
}

__int64

game_map_anonymous_TargetEnumerator_Skill_closure0_Invoke_77edf0(__int64 result,
                                                                 _DWORD* a2)
{
  *(_DWORD*)(*(_QWORD*)(result + 8) + 8LL) = *a2;
  return result;
}

__int64 TargetEnumerator_77ee30(__int16 a1, int a2, int a3)
{
  __int64 v3;
  int v4;

  v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (a1 & 0xFFF));
  if (v3 == 0) {
    return 0;
  }
  v4 = *(unsigned __int8*)(v3 + 105);
  if (v4 == 2 || v4 == 4) {
    return MapUtil_753570(a2, a3);
  }
  if (v4 != 3) {
    return 0;
  }
  if (*(_BYTE*)(v3 + 279) != 0) {
    return MapUtil_753570(a2, a3);
  }
  return 1;
}

__int64 TargetEnumerator_77f010(__int64 a1, char* a2)
{
  __int64 v4;
  __int64 v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  if (a2[5] != 0) {
    v4 = game_UnitPool_Get(a2 + 5);
    if (v4 != 0) {
      if (*(_BYTE*)(v4 + 2088) != 0) {
        v5 = game_UnitPool_Get(v4 + 2088);
      }
      else {
        v5 = 0;
      }
      if (*(_BYTE*)(a1 + 8) != 0) {
        if (v5 == game_UnitPool_Get(a1 + 8)) {
          goto LABEL_10;
        }
        return 1;
      }
      if (v5 != 0) {
        return 1;
      }
    }
  }
LABEL_10:
  v6 = a2[1];
  v7 = a2[2];
  v8 = *GameData_212cfb8[0];
  v10 = *(unsigned __int8*)(a1 + 8);
  v9 = a1 + 8;
  if (v10 != 0 && (v11 = game_UnitPool_Get(v9)) != 0 &&
      (v12 = *(_QWORD*)(v11 + 440)) != 0) {
    v13 = *(unsigned __int8*)(v12 + 16);
  }
  else {
    v13 = 9;
  }
  v14 = *(_QWORD*)(v8 + 16);
  v15 = v6 + 32 * v7;
  if (v15 >= 0x400) {
    v15 = 0;
  }
  v16 = *(__int16*)(v14 + 2LL * v15 + 12392);
  if ((v16 & 0x8000000000000000LL) == 0 && (v17 = *(_QWORD*)(v14 + 8)) != 0 &&
          (v18 = v17 + 144LL * (unsigned int)v16,
           ((*(__int64 (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18) & 1) != 0) &&
          v13 !=
              (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v18 + 168LL))(v18) &&
          (v19 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 224LL))(v18)) != 0 ||
      (v19 = **(_QWORD**)(GameData_21c9bd0 + 64)) != 0) {
    if (*(_BYTE*)(v19 + 57) == 14) {
      return 1;
    }
  }
  return 0;
}

__int64 game_map_anonymous_TargetEnumerator_CanSubTarget(__int64 a1, char* a2)
{
  _DWORD* v3;
  _BYTE* v4;
  __int64 v6;
  int v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v11[4];
    _QWORD* v12;
  } v11_;
  struct {
    _BYTE v13[8];
    __int64 v14;
  } v13_;

  v3 = *(_DWORD**)(a1 + 24);
  v4 = *(_BYTE**)(a1 + 8);
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*v3 & 0xFFF));
  v7 = (unsigned __int8)v4[24];
  v13_.v13[0] = 0;
  v11_.v11[2] = v4;
  v11_.v12 = v11_.v11;
  v13_.v14 = v6;
  v13_.v13[1] = v7 == 19;
  v11_.v11[0] = GameData_1f97800;
  v11_.v11[1] = v13_.v13;
  ITarget_775580(v4, a2, (__int64)v11_.v11);
  result = (__int64)v11_.v12;
  if (v11_.v12 == v11_.v11) {
    v9 = 32;
  }
  else {
    if (v11_.v12 == nullptr) {
      goto LABEL_6;
    }
    v9 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v11_.v12 + v9))((__int64)v11_.v12);
LABEL_6:
  if (v13_.v13[0] == 1) {
    v10 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 32LL);
    if (v10 == 0) {
      GameRoutine_60a310_alt1();
    }
    result = (*(__int64 (**)(__int64, char*))(*(_QWORD*)v10 + 48LL))(v10, a2);
    **(_BYTE**)(a1 + 16) = 1;
  }
  return result;
}

__int64

game_map_anonymous_TargetEnumerator_CanSubTarget_closure_Invoke(__int64 a1,
                                                                __int64 a2)
{
  __int64 v2;
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = *(_QWORD*)(a1 + 8);
  if (*(_BYTE*)(v2 + 1) == 1) {
    result = MapUtil_753570(*(char*)(a2 + 1), *(char*)(a2 + 2));
  }
  else {
    v5 = *(_QWORD*)(a1 + 16);
    v7 = *(unsigned __int8*)(v5 + 8);
    v6 = v5 + 8;
    if (v7 != 0) {
      v8 = a2;
      v9 = game_UnitPool_Get(v6);
      v2 = *(_QWORD*)(a1 + 8);
      a2 = v8;
      v10 = v9;
    }
    else {
      v10 = 0;
    }
    result = GameRoutine_844d10(a2, v10, *(_QWORD*)(v2 + 8));
  }
  **(_BYTE**)(a1 + 8) |= result & 1;
  return result;
}

__int64

game_map_anonymous_TargetEnumerator_AssistSkill_closure_Clone(__int64 a1)
{
  __int64 result;
  _QWORD* v3;
  __int64 v4;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  *(_QWORD*)result = GameData_1f97890;
  *(_BYTE*)(result + 16) = *(_BYTE*)(a1 + 16);
  v3 = *(_QWORD**)(a1 + 64);
  if (v3 != nullptr) {
    if (v3 == (_QWORD*)(a1 + 32)) {
      v4 = result;
      *(_QWORD*)(result + 64) = result + 32;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v3 + 24LL))(
          (void*)v3, v3);
    }
    else {
      v4 = result;
      *(_QWORD*)(result + 64) = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
                       *v3 + 16LL))((void*)v3, v3));
    }
    return v4;
  }
  else {
    *(_QWORD*)(result + 64) = 0;
  }
  return result;
}

_QWORD* game_map_anonymous_TargetEnumerator_AssistSkill_closure_CloneInto(
    _QWORD* result, __int64 a2)
{
  _QWORD* v3;

  *(_QWORD*)a2 = GameData_1f97890;
  *(_BYTE*)(a2 + 16) = *((_BYTE*)result + 16);
  v3 = (_QWORD*)result[8];
  if (v3 != nullptr) {
    if (v3 == result + 4) {
      *(_QWORD*)(a2 + 64) = a2 + 32;
      return (_QWORD*)(*(__int64 (**)(_QWORD))(*(_QWORD*)result[8] + 24LL))(
          result[8]);
    }
    else {
      result = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                       *v3 + 16LL))((void*)v3, result[8]));
      *(_QWORD*)(a2 + 64) = result;
    }
  }
  else {
    *(_QWORD*)(a2 + 64) = 0;
  }
  return result;
}

__int64 game_map_anonymous_TargetEnumerator_AssistSkill_closure_Invoke(
    __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4;
  __int16 v5;
  __int64 v6;
  char v8;
  __int16 v9;
  __int16 v10;
  char v11;
  __int16 v12;
  int v13;

  v4 = *(_BYTE*)(a1 + 16);
  v5 = *(_WORD*)(a2 + 1);
  v6 = *(_QWORD*)(a1 + 64);
  v8 = 0;
  v11 = 0;
  v9 = v5;
  v12 = -1;
  v13 = 1 << v4;
  v10 = 9;
  if (v6 == 0) {
    GameRoutine_60a310(0, a2, a3, a4);
  }
  return (*(__int64 (**)(__int64, char*))(*(_QWORD*)v6 + 48LL))(v6, &v8);
}

__int64 TargetEnumerator_77f800(__int64 a1, unsigned __int8 a2, __int64 a3,
                                char a4)
{
  _BYTE* v4;
  __int64 v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  bool v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  unsigned int v29;
  int v30;
  int v31;
  unsigned int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  char v45;
  __int16 v47;
  char v48;
  __int16 v49;
  char v50;
  __int16 v51;
  int v52;

  v4 = (_BYTE*)(a1 + 8);
  if (*(_BYTE*)(a1 + 8) != 0) {
    v7 = game_UnitPool_Get(a1 + 8);
    if (v7 != 0 && *(int*)(v7 + 592) <= 1) {
      v8 = *(_DWORD*)(a1 + 12);
      v9 = *(_DWORD*)(a1 + 16);
      if (v8 - 1 <= *(unsigned __int8*)(GameData_21ca300 + 28)) {
        v10 = *(unsigned __int8*)(GameData_21ca300 + 28);
      }
      else {
        v10 = v8 - 1;
      }
      if (v9 - 1 <= *(unsigned __int8*)(GameData_21ca300 + 29)) {
        v11 = *(unsigned __int8*)(GameData_21ca300 + 29);
      }
      else {
        v11 = v9 - 1;
      }
      v12 = *(unsigned __int8*)(GameData_21ca300 + 31);
      v13 = *(_DWORD*)(a1 + 20) + 1;
      v14 = v13 + v8;
      if (v14 >= *(unsigned __int8*)(GameData_21ca300 + 30)) {
        v15 = *(unsigned __int8*)(GameData_21ca300 + 30);
      }
      else {
        v15 = v14;
      }
      if (v13 + v9 < v12) {
        v12 = v13 + v9;
      }
      v43 = v12;
      if (v11 <= v12 && v10 <= v15) {
        v45 = 0;
        v42 = v10;
        while (1) {
          v18 = 32 * v11;
          do {
            v19 = *(_DWORD*)(a1 + 20);
            v21 = *(_DWORD*)(a1 + 12);
            v20 = *(_DWORD*)(a1 + 16);
            if ((unsigned int)(v19 * v19) < 2) {
              v30 = v10 - v21;
              if (v30 < 0) {
                v30 = -v30;
              }
              v31 = v11 - v20;
              if (v31 < 0) {
                v31 = -v31;
              }
              if (v31 + v30 == 1) {
              LABEL_45:
                v32 = v10 + v18;
                if ((unsigned int)(v10 + v18) >= 0x400) {
                  v32 = 0;
                }
                v33 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
                v34 =
                    *(__int16*)(v33 +
                                ((unsigned __int64)GameData_1b41abf[a2] << 11) +
                                2LL * v32 + 104);
                if (v34 < 0 || (v35 = *(_QWORD*)(v33 + 8)) == 0 ||
                    (v36 = v35 + 144LL * (int)v34,
                     (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v36 + 40LL))(
                         v36) != a2)) {
                  v36 = 0;
                }
                if (MapUtil_753ce0(v36, *(_DWORD*)(a1 + 12),
                                   *(_DWORD*)(a1 + 16), a4 & 1)) {
                  v37 = *v4 != 0 ? game_UnitPool_Get(v4) : 0LL;
                  if (((*(__int64 (**)(__int64, __int64))(*(_QWORD*)v36 +
                                                          608LL))(v36, v37) &
                       1) != 0) {
                    v52 = 0;
                    v50 = 0;
                    v47 = -256;
                    v48 = -1;
                    v51 = -1;
                    v49 = 9;
                    v51 = (*(__int64 (**)(__int64))(*(_QWORD*)v36 + 32LL))(v36);
                    (*(void (**)(__int64))(*(_QWORD*)v36 + 56LL))(v36);
                    (*(void (**)(__int64))(*(_QWORD*)v36 + 64LL))(v36);
                    HIBYTE(v47) = v10;
                    v48 = v11;
                    v41 = *(_QWORD*)(a3 + 32);
                    if (v41 == 0) {
                      GameRoutine_60a310(0, v38, v39, v40);
                    }
                    (*(void (**)(__int64, __int16*))(*(_QWORD*)v41 + 48LL))(
                        v41, &v47);
                    v45 = 1;
                  }
                }
              }
            }
            else if (v19 >= 1) {
              v22 = v19 + v20;
              v23 = v19 + v21;
              v24 = 10000;
              do {
                v25 = v11 - v20;
                v26 = v10 - v21;
                v27 = *(_DWORD*)(a1 + 12);
                if (v11 - v20 < 0) {
                  v25 = v20 - v11;
                }
                do {
                  ++v27;
                  if (v26 >= 0) {
                    v28 = v26;
                  }
                  else {
                    v28 = -v26;
                  }
                  --v26;
                  v29 = v28 + v25;
                  if (v29 < v24) {
                    v24 = v29;
                  }
                } while (v27 < v23);
                ++v20;
              } while (v20 < v22);
              if (v24 == 1) {
                goto LABEL_45;
              }
            }
            v17 = v10++ < v15;
          } while (v17);
          v10 = v42;
          v17 = v11++ < v43;
          if (!v17) {
            return v45 & 1;
          }
        }
      }
    }
  }
  v45 = 0;
  return v45 & 1;
}

__int64 TargetEnumerator_77fb20(__int64 a1, int a2, __int64 a3)
{
  __int64 v4;
  int v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  _DWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  int v22;
  __int64 v23;
  __int64 v25;
  _BYTE v27[3];
  __int16 v28;
  char v29;
  __int16 v30;
  int v31;

  v5 = *(unsigned __int8*)(a1 + 8);
  v4 = a1 + 8;
  if (v5 != 0 && (v7 = game_UnitPool_Get(v4)) != 0 &&
      (v8 = v7, *(int*)(v7 + 592) <= 1) &&
      (v10 = *(_QWORD*)(*GameData_212d000[0] + 16),
       v9 = *(_QWORD*)(*GameData_212d000[0] + 24), v11 = v9 - v10, v9 != v10)) {
    if (v11 < 0) {
      GameRoutine_77fcf0();
    }
    v12 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v9 - v10, 16, 0);
    memcpy(v12, v10, v11);
    v13 = 0;
    v14 = 0;
    v15 = GameData_212d210[0];
    v16 = GameData_212d218[0];
    do {
      v17 = (_DWORD*)__dynamic_cast(*(_QWORD*)(v12 + v13), v15, v16, 0);
      if ((*(unsigned int (**)(_DWORD*))(*(_QWORD*)v17 + 128LL))(v17) == a2 &&
          ((*(__int64 (**)(_DWORD*, _QWORD, _QWORD, _QWORD, _QWORD))(
               *(_QWORD*)v17 + 56LL))(
               v17, *(unsigned int*)(a1 + 12), *(unsigned int*)(a1 + 16),
               *(unsigned int*)(v8 + 592),
               *(unsigned __int16*)(*(_QWORD*)(v8 + 392) + 16LL)) &
           1) != 0) {
        v21 = v17[22];
        v22 = v17[24];
        v27[0] = 0;
        v31 = 0;
        v29 = 0;
        v30 = -1;
        v28 = 9;
        v27[1] = v21;
        v27[2] = v22;
        v23 = *(_QWORD*)(a3 + 32);
        if (v23 == 0) {
          GameRoutine_60a310(0, v18, v19, v20);
        }
        (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v23 + 48LL))(v23, v27);
        v14 = 1;
      }
      v13 += 8;
    } while (v11 != v13);
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v25,
                                  v12);
  }
  else {
    v14 = 0;
  }
  return v14 & 1;
}

_QWORD* game_map_anonymous_TargetEnumerator_Cannon_closure_Clone(_QWORD* a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  *result = GameData_1f97910;
  result[2] = a1[2];
  v3 = (_QWORD*)a1[8];
  if (v3 != nullptr) {
    v4 = result;
    if (v3 == a1 + 4) {
      result[8] = result + 4;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v3 + 24LL))(
          (void*)v3, v3);
      result = v4;
    }
    else {
      v5 = X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(
                       *v3 + 16LL))((void*)v3, a1[8]));
      result = v4;
      v4[8] = v5;
    }
  }
  else {
    result[8] = 0;
  }
  v6 = a1[11];
  result[10] = a1[10];
  result[11] = v6;
  return result;
}

__int64 game_map_anonymous_TargetEnumerator_Cannon_closure_CloneInto(_QWORD* a1,
                                                                     _QWORD* a2)
{
  __int64 result;

  *a2 = GameData_1f97910;
  a2[2] = a1[2];
  result = a1[8];
  if (result != 0) {
    if ((_QWORD*)result == a1 + 4) {
      a2[8] = a2 + 4;
      result = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[8] + 24LL))(a1[8]);
    }
    else {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      a2[8] = result;
    }
  }
  else {
    a2[8] = 0;
  }
  a2[11] = a1[11];
  a2[10] = a1[10];
  return result;
}

__int64 game_map_anonymous_TargetEnumerator_Cannon_closure_Invoke(
    __int64 result, int* a2, int* a3, long double a4)
{
  int v4;
  int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v11;
  _BYTE* v12;
  __int64 v13;
  long double v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  long double v18;
  __int64 v19;
  __int64* v20;
  int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  char v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;

  v4 = *a2;
  v5 = *a3;
  v6 = result;
  v7 = *a2 + 32 * *a3;
  if (v7 >= 0x400) {
    v8 = 0;
  }
  else {
    v8 = v7;
  }
  if (*(_BYTE*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v8 + 8) != 0) {
    v9 = *(_QWORD*)(GameData_21ca310 + 56) +
         2224LL * *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) +
                                      v8 + 8);
    if (*(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v8 + 8) <=
            0xFAu &&
        v9 != 2224 && *(_QWORD*)(v9 - 1832) != 0) {
      v11 = *(_BYTE**)(result + 16);
      v12 = v11 + 8;
      if (v11[8] != 0) {
        result = game_UnitPool_Get_alt2(v12, a4);
        if (result != 0) {
          v13 = result;
          if (((*(__int64 (**)(_BYTE*))(*(_QWORD*)v11 + 16LL))(v11) & 1) == 0 ||
              ((result = Unit_6c9cf0_alt1(v13, v9 - 2224)) & 1) != 0) {
            v15 = *(_QWORD*)(v6 + 80);
            if (*v12 != 0) {
              v16 = game_UnitPool_Get_alt2(v12, v14);
            }
            else {
              v16 = 0;
            }
            v17 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v15 + 584LL))(
                v15, v16);
            v33 = 0;
            if (v17 != 0) {
              v19 = *(unsigned __int16*)(v17 + 16);
              HIDWORD(v33) = 1;
              LOWORD(v33) = v19;
              if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8 * v19) +
                            73LL) == 17) {
                nn_os_LockMutex(&game_g_random_mutex);
                v20 = game_map_MapRandom_instance__ptr[0];
                v21 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((_UNKNOWN**)0x8LL));
                v22 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                                 (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
                v23 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                      (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
                *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                    *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
                *((_DWORD*)v20 + 1) = v21;
                v24 = (v23 >> 8) ^ (v22 >> 19) ^ v23 ^ v22;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v20) = v22;
                *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v20 + 4) = v24;
                nn_os_UnlockMutex(&game_g_random_mutex);
                HIDWORD(v33) =
                    (16 * ((_WORD)v24 -
                           1000 * (unsigned __int16)((v24 & 0x7FFFFFFFu) /
                                                     0x3E8)) +
                     16) &
                        0x3FF0 |
                    1;
              }
            }
            v25 = *v12 != 0 ? game_UnitPool_Get_alt2(v12, v18) : 0LL;
            result = MapUtil_753920(v25, &v33, v9 - 2224);
            if ((result & 1) != 0) {
              LOBYTE(v33) = 0;
              v34 = 0;
              BYTE4(v33) = 0;
              HIWORD(v33) = -1;
              BYTE5(v33) = *(_BYTE*)(v9 - 136);
              v26 = *(_QWORD*)(v9 - 1784);
              if (v26 != 0) {
                v27 = *(_BYTE*)(v26 + 16);
              }
              else {
                v27 = 9;
              }
              v28 = *(_QWORD*)(v6 + 64);
              BYTE3(v33) = v27;
              BYTE1(v33) = v4;
              BYTE2(v33) = v5;
              if (v28 == 0) {
                goto LABEL_35;
              }
              result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v28 +
                                                           48LL))(v28, &v33);
              **(_BYTE**)(v6 + 88) = 1;
            }
          }
        }
      }
    }
  }
  v29 = *(_QWORD*)(GameData_21cd158 + 16);
  v30 = *(__int16*)(v29 + 2 * v8 + 2152);
  if ((v30 & 0x8000000000000000LL) == 0) {
    v31 = *(_QWORD*)(v29 + 8);
    if (v31 != 0) {
      v32 = v31 + 144LL * (int)v30;
      result = (*(__int64 (**)(__int64))(*(_QWORD*)v32 + 272LL))(v32);
      if ((result & 1) != 0) {
        LOBYTE(v33) = 0;
        v34 = 0;
        BYTE5(v33) = 0;
        *(_WORD*)((char*)&v33 + 3) = 9;
        HIWORD(v33) = (*(__int64 (**)(__int64))(*(_QWORD*)v32 + 32LL))(v32);
        (*(void (**)(__int64))(*(_QWORD*)v32 + 56LL))(v32);
        (*(void (**)(__int64))(*(_QWORD*)v32 + 64LL))(v32);
        v28 = *(_QWORD*)(v6 + 64);
        BYTE1(v33) = v4;
        BYTE2(v33) = v5;
        if (v28 != 0) {
          result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v28 + 48LL))(
              v28, &v33);
          **(_BYTE**)(v6 + 88) = 1;
          return result;
        }
      LABEL_35:
        GameRoutine_60a310_alt2(v28);
      }
    }
  }
  return result;
}

__int64 game_map_anonymous_TargetEnumerator_CanEnter_closure_Invoke(
    __int64 result, unsigned int* a2, unsigned int* a3)
{
  __int64 v3;

  if (**(_BYTE**)(result + 32) == 1) {
    v3 = result;
    result = TargetEnumerator_780410_alt1(*(_QWORD*)(result + 8),
                                          *(_QWORD*)(v3 + 16),
                                          *(unsigned int*)(v3 + 24), *a2, *a3);
    if ((result & 1) == 0) {
      **(_BYTE**)(v3 + 32) = 0;
    }
  }
  return result;
}

bool TargetEnumerator_780410(_BYTE* a1, __int64 a2, __int16 a3, unsigned int a4,
                             unsigned int a5)
{
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v23;
  __int64 v24;
  char v25;
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
  _BOOL8 result;
  char v37[4];
  char v38[4];

  v9 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (a3 & 0xFFF));
  if (v9 != 0 && *(_BYTE*)(v9 + 104) == 6 && *(_BYTE*)(v9 + 250) == 15) {
    if ((MapUtil_753570(a4, a5) & 1) != 0) {
      v10 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
      v11 = a4 + 32 * a5;
      if (v11 >= 0x400) {
        v12 = 0;
      }
      else {
        v12 = v11;
      }
      v13 = *(__int16*)(v10 + 2LL * (unsigned int)v12 + 2152);
      if ((v13 & 0x8000000000000000LL) == 0 &&
          (v14 = *(_QWORD*)(v10 + 8)) != 0 &&
          ((*(__int64 (**)(__int64))(*(_QWORD*)(v14 + 144LL * (int)v13) +
                                     272LL))(v14 + 144LL * (int)v13) &
           1) != 0 &&
          (v15 = *(
               _QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                        8LL * *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98
                                                                  [0] +
                                                              32) +
                                                   2 * v12 + 8))) != 0) {
        if (a2 != 0) {
          v16 = game_Unit_GetJob(a2);
          if (v16 != 0 && *(_BYTE*)(v16 + 48) != 0 &&
              *(unsigned __int8*)(*(_QWORD*)(v15 + 48) +
                                  *(unsigned __int8*)(v16 + 48) + 32LL) !=
                  255) {
            return true;
          }
          v38[0] = 1;
        LABEL_34:
          v26 = game_Unit_GetJob(a2);
          if ((MapUtil_756080(a2, v26, a4, a5, v38) & 1) != 0) {
            return true;
          }
        }
      }
      else {
        v38[0] = 1;
        if (a2 != 0) {
          goto LABEL_34;
        }
      }
    }
    return false;
  }
  if ((MapUtil_753570(a4, a5) & 1) == 0) {
    return false;
  }
  v17 = a4 + 32 * a5;
  v18 = GameData_212ce98[0];
  if ((unsigned int)v17 >= 0x400) {
    v19 = 0;
  }
  else {
    v19 = (unsigned int)v17;
  }
  if (*(_BYTE*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v19 + 8) != 0) {
    v20 = *(_QWORD*)(GameData_21ca310 + 56) +
          2224LL * *(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) +
                                       v19 + 8);
    v21 = v20 - 2224;
    if (*(unsigned __int8*)(*(_QWORD*)(*GameData_212ce98[0] + 96) + v19 + 8) <=
            0xFAu &&
        v20 != 2224 && *(_QWORD*)(v20 - 1832) != 0 && a1[8] != 0) {
      v23 = game_UnitPool_Get(a1 + 8);
      if (v23 != 0) {
        v24 = v23;
        if (((*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 16LL))(a1) & 1) != 0) {
          v25 = Unit_6c9cf0(v24, v21);
          if (v21 != a2 && (v25 & 1) != 0) {
            return false;
          }
        }
        else if (v21 != a2) {
          return false;
        }
      }
    }
  }
  v27 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
  v28 = *(__int16*)(v27 + 2 * v19 + 2152);
  if ((v28 & 0x8000000000000000LL) == 0 && (v29 = *(_QWORD*)(v27 + 8)) != 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)(v29 + 144LL * (int)v28) + 272LL))(
           v29 + 144LL * (int)v28) &
       1) != 0 &&
      (v30 = *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                        8LL * *(unsigned __int16*)(*(_QWORD*)(*v18 + 32) +
                                                   2 * v19 + 8))) != 0) {
    if (a2 == 0) {
      return false;
    }
    v31 = game_Unit_GetJob(a2);
    if (v31 != 0 && *(_BYTE*)(v31 + 48) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(v30 + 48) +
                            *(unsigned __int8*)(v31 + 48) + 32LL) != 255) {
      return false;
    }
    v37[0] = 1;
  }
  else {
    v37[0] = 1;
    if (a2 == 0) {
      return false;
    }
  }
  v32 = game_Unit_GetJob(a2);
  if ((MapUtil_756080(a2, v32, a4, a5, v37) & 1) == 0) {
    return false;
  }
  if (*GameData_212ce90[0] == 0 ||
      (*(_BYTE*)(*GameData_212ce90[0] + 21) & 2) == 0) {
    return true;
  }
  v33 = *v18;
  v34 = *(_QWORD*)(a2 + 440);
  if (v34 != 0) {
    v35 = *(unsigned __int8*)(v34 + 16);
  }
  else {
    v35 = 9;
  }
  result = false;
  if (*(unsigned __int8*)(v33 + 18) >
          (unsigned int)(unsigned __int8)(a4 - *(_BYTE*)(v33 + 16)) &&
      *(unsigned __int8*)(v33 + 19) >
          (unsigned int)(unsigned __int8)(a5 - *(_BYTE*)(v33 + 17))) {
    return ((*(_DWORD*)(*(_QWORD*)(v33 + 160) + (v35 << 7) + 4LL * (v17 >> 5) +
                        8) >>
             a4) &
            1) != 0;
  }
  return result;
}

__int64

game_map_anonymous_TargetEnumerator_SummonTarget_closure_Invoke(__int64 a1,
                                                                __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  _BYTE v9[12];

  v3 = *(_QWORD*)(a1 + 24);
  TargetEnumerator_77c150((__int64)v9, *(__int64**)(a1 + 8),
                          *(_DWORD*)(a2 + 32), *(_DWORD*)(a2 + 36));
  v7 = *(_QWORD*)(v3 + 32);
  if (v7 == 0) {
    GameRoutine_60a310(0, v4, v5, v6);
  }
  result = (*(__int64 (**)(__int64, _BYTE*))(*(_QWORD*)v7 + 48LL))(v7, v9);
  **(_BYTE**)(a1 + 16) = 1;
  return result;
}

#pragma GCC visibility pop
