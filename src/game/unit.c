#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
_QWORD* GameRoutine_936f60(_QWORD* __return_ptr, _QWORD, _QWORD, _QWORD);
_QWORD* GameRoutine_93c6a0(_QWORD* __return_ptr, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_12c0bc0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12c16e0(_QWORD);
__int64 GameRoutine_12c1f80(_QWORD);
__int64 GameRoutine_12c20f0(_QWORD);
__int64 GameRoutine_12c2260(_QWORD);
__int64 GameRoutine_12c2aa0(_QWORD);
__int64 GameRoutine_12c4be0(_QWORD);
__int64 GameRoutine_12c4de0(_QWORD);
__int64 GameRoutine_12c5000(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12c51b0(_QWORD, _QWORD);
__int64 GameRoutine_12c56a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12c5890(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12c59a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12c5be0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_12fdee0(_QWORD);
__int64 GameRoutine_67ed20(_QWORD*);
__int64 GameRoutine_6c3050(_QWORD);
__int64 GameRoutine_6c3050_alt1(__int64, __int64, __int64, __int64, __int64,
                                __int64) __asm__("GameRoutine_6c3050");
__int64 GameRoutine_6c51e0(_QWORD);
__int64 GameRoutine_6c51e0_alt1(__int64 result) __asm__("GameRoutine_6c51e0");
__int64 GameRoutine_6c6da0(__int64);
__int64 GameRoutine_6c6da0_alt1(_QWORD) __asm__("GameRoutine_6c6da0");
__int64 GameRoutine_6c6ec0(__int64);
__int64 GameRoutine_6c6ec0_alt1(_QWORD) __asm__("GameRoutine_6c6ec0");
__int64 GameRoutine_6ca260(__int64);
__int64 GameRoutine_6cab80(__int64);
__int64 GameRoutine_6cb640(void);
__int64 GameRoutine_6cc0a0(_QWORD);
__int64 GameRoutine_6ce1c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6d1740(_QWORD, _QWORD);
__int64 GameRoutine_6d1740_alt1(__int64,
                                __int64*) __asm__("GameRoutine_6d1740");
__int64 GameRoutine_6ddce0(_QWORD);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_6e4de0(_QWORD);
__int64 GameRoutine_6e50e0(_QWORD);
__int64 GameRoutine_6e5480(_QWORD);
__int64 GameRoutine_6fc510(_QWORD);
__int64 GameRoutine_6fc7a0(_QWORD, _QWORD);
__int64 GameRoutine_6fcb20(_QWORD, _QWORD);
__int64 GameRoutine_7152e0(void);
__int64 GameRoutine_7152e0_alt1(_QWORD) __asm__("GameRoutine_7152e0");
__int64 GameRoutine_748f80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_74cd60(_QWORD);
__int64 GameRoutine_820d50(_QWORD);
__int64 GameRoutine_850ce0(_QWORD, _QWORD);
__int64 GameRoutine_851060(_QWORD, _QWORD);
__int64 GameRoutine_8c5700(_QWORD, _QWORD);
__int64 GameRoutine_8c5c60(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 GameRoutine_96de20(void);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 GameRoutine_9a28e0(_QWORD);
__int64 LegionPool_937de0(_QWORD, _QWORD);
__int64 LegionPool_938460(_QWORD);
__int64 RidePool_93d1e0(_QWORD, _QWORD);
__int64 RidePool_93d8e0(_QWORD);
__int64 UnitHeroes_6d2b90(_QWORD, _QWORD);
__int64 UnitHeroes_6d2c90(_QWORD, _QWORD);
__int64 UnitHeroes_6d3800(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 UnitHeroes_6d5120(_QWORD, _QWORD, _QWORD);
__int64 UnitItemList_710ea0(_QWORD);
__int64 UnitSkillList_84cc00(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84cf20(_QWORD, _QWORD, _QWORD);
__int64 UnitSkillList_84d7e0(_QWORD, _QWORD);
__int64 UnitSkillList_84d980(_QWORD, _QWORD);
__int64 UnitSkillList_84dea0(_QWORD, _QWORD, _QWORD);
__int64 UnitVariables_930e20(_QWORD);
__int64 Unit_6c8a80_alt1(_QWORD, _QWORD, _QWORD, _QWORD) __asm__("Unit_6c8a80");
__int64 Unit_6c9ef0_alt1(_QWORD) __asm__("Unit_6c9ef0");
__int64 Unit_6cb490_alt1(_QWORD) __asm__("Unit_6cb490");
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_GetHero(_QWORD);
__int64 game_GetHeroIndex(_QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitActor_TryReload(_QWORD);
__int64 game_UnitAutoGrowSkillUpdater_Update(_QWORD);
__int64 game_UnitItemList_ClearStockUses(_QWORD);
__int64 game_UnitItemList_EachItem(_QWORD, _QWORD);
__int64 game_UnitItemList_HasStockUses(_QWORD);
__int64 game_UnitItemList_Sort(_QWORD, _QWORD, _QWORD);
__int64 game_UnitSkillList_GetMaxValue(_QWORD, _QWORD);
__int64 game_UnitSkillList_Remove(_QWORD);
__int64 game_Unit_CheckEquipment(_QWORD);
__int64 game_Unit_EquipFirstWeapon(_QWORD);
__int64 game_Unit_GetParam(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetUnknown6cba30(_QWORD);
__int64 game_Unit_GetUnknown6cbca0(void);
__int64 game_Unit_SetPollution(_QWORD, _QWORD);
__int64 game_Unit_SkillList_Replace(_QWORD, _QWORD, _QWORD);
__int64 game_Unit_Unknown6c4610(_QWORD);
__int64 game_Unit_Unknown6c8630(_QWORD);
__int64 game_Unit_Unknown6cd010(void);
__int64 game_Unit_Unknown6cd8f0(_QWORD);
__int64 game_Unit_Unknown6d2380(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN GameData_1acaa0c;
extern _UNKNOWN GameData_1ad27ed;
extern _UNKNOWN GameData_1ada150;
extern _UNKNOWN GameData_1ae1c3a;
extern _UNKNOWN GameData_1ae9402;
extern _UNKNOWN GameData_1f920c0;
extern _UNKNOWN GameData_21ca298;
extern _UNKNOWN GameData_21ca2c0;
extern _UNKNOWN GameData_21ca2d0;
extern _UNKNOWN GameData_21ca2e0;
extern _UNKNOWN game_g_random_mutex;
extern _UNKNOWN* GameData_212c8a8;
extern __int16 GameData_21ca2b8;
extern __int16 GameData_21ca2c8;
extern __int16 GameData_21ca2d8;
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_1f914e8[])();
extern __int64 (*GameData_1f915e8[])();
extern __int64 (*GameData_1f91668[])();
extern __int64 (*GameData_1f916e8[])();
extern __int64 (*GameData_1f91ee8[])();
extern __int64 (*GameData_1f91f68[])();
extern __int64 (*GameData_1f91ff8[])();
extern __int64 (*GameData_1f92f88[])();
extern __int64 (*GameData_1f93088[])();
extern __int64 (*GameData_1f94310[])();
extern __int64 GameData_21c99a8;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca060;
extern __int64 GameData_21ca288;
extern __int64 GameData_21ca290;
extern __int64 GameData_21ca300;
extern __int64 GameData_21d9988;
extern __int64 GameData_21d9990;
extern __int64 GameData_21f4280;
extern __int64 GameData_21f42d0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212c8b0[11];
extern __int64* GameData_212ce88[4];
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212ceb0;
extern __int64* GameData_2130cd0[6];
extern __int64* GameData_2130cd8[5];
extern int GameData_21d9860;
extern int game_g_shared_system_skills;
struct PseudoSret GameRoutine_127cec0(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a310_alt1(_QWORD, _QWORD, _QWORD,
                        _QWORD) __asm__("GameRoutine_60a310");
void __attribute__((noreturn)) GameRoutine_6e3e20(void);
__int64 Unit_6c82e0(__int64 a1);
__int64 Unit_6c8300(_QWORD* a1, char a2);
__int64 Unit_6c8a80(__int64 result, int a2, int a3, __int64 a4);
__int64 Unit_6c9cf0(__int64 a1, __int64 a2);
__int64 Unit_6c9ef0(__int64 a1);
__int64 Unit_6ca760(__int64 a1, _WORD* a2);
__int64 Unit_6cb080(__int64 a1, _WORD* a2);
__int64 Unit_6cb490(__int64 a1);
_DWORD* Unit_6cbb60(__int64 a1);
__int64 Unit_6cbdc0(_QWORD* a1, _DWORD* a2, unsigned __int16* a3, int a4);
__int64 Unit_6cc580(__int64 a1, _DWORD* a2);
__int64 Unit_6cc7e0(__int64 a1, __int64 a2);
__int64 Unit_6cc9e0(__int64 a1, _DWORD* a2);
__int64 Unit_6ccca0(__int64 a1, __int64 a2);
__int64 Unit_6cd120(__int64 a1, char a2, _DWORD* a3);
__int64 Unit_6cd9c0(__int64 a1);
__int64 Unit_6cdd40(__int64 a1, char a2);
__int64 Unit_6cdf80(__int64 a1, char a2);
__int64 Unit_6ce660(__int64 a1);
__int64 Unit_6cef00(__int64 a1, __int64 a2);
__int64 Unit_6cf1c0(__int64 a1, __int64 a2);
__int64 Unit_6cf460(__int64 a1);
__int64 Unit_6cf740(__int64 a1);
__int64 Unit_6cfa20(__int64 a1);
__int64 Unit_6cfde0(__int64 a1);
__int64 Unit_6d00c0(__int64 a1);
bool Unit_6d0400(__int64 a1);
__int64 Unit_6d0700(__int64 result, _DWORD* a2, char a3);
__int64 Unit_6d09e0(__int64 a1, __int64 a2, __int64 a3);
_QWORD* Unit_6d0b20(_QWORD* result, _DWORD* a2, char a3);
__int64 game_Unit_EachEducateTargetSkill(__int64 a1, __int64 a2, __int64 a3);
__int64 Unit_6d8180(__int64 a1, __int64 a2, int a3);
__int64 Unit_6d8390(__int64 a1, __int64 a2, int a3);
__int64 Unit_6db740(__int64 a1, char a2, char a3);
__int64 Unit_6de340(__int64 a1);
bool Unit_6de520(__int64 a1, __int64 a2);
__int64 Unit_6df300(__int64 result, _BYTE* a2);
__int64 game_Unit_GetMorphSkill(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 Unit_6e0810(__int64 result);
__int64 Unit_6e09a0(__int64 a1);
__int64 game_Unit_LevelUp(__int64 a1, char a2);

__int64 Unit_6c82e0(__int64 a1)
{
  if (*(_BYTE*)(a1 + 2136) != 0) {
    return GameRoutine_97b2f0(a1 + 2104);
  }
  else {
    return GameRoutine_67ed20(*(_QWORD**)(a1 + 392));
  }
}

__int64 Unit_6c8300(_QWORD* a1, char a2)
{
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v9;
  char v10;
  __int64 v11;
  int v13;

  v2 = a1[49];
  if (v2 == 0) {
    return 0;
  }
  if ((a2 & 1) != 0) {
    goto LABEL_16;
  }
  v3 = a1[55];
  v4 = v3 != 0 ? *(_BYTE*)(v3 + 16) : 9;
  if (((1 << v4) & 0xF1) != 0) {
    if ((v5 = a1[218], v6 = a1[219] - v5,
         v13 = game_g_shared_system_skills & 0xFFF,
         (v7 = ((unsigned __int64)(unsigned int)game_g_shared_system_skills >>
                5) &
               0x7F) +
                 1 >
             v6 >> 2) ||
        ((*(_DWORD*)(v5 + 4LL * (unsigned int)v7) >>
          game_g_shared_system_skills) &
         1) == 0 ||
        (game_HasActiveSkill_843420(&v13, a1 + 218) & 1) == 0 ||
        ((v9 = a1[55]) == 0 ? (v10 = 9) : (v10 = *(_BYTE*)(v9 + 16)),
         ((1 << v10) & 0xF1) == 0)) {
    LABEL_16:
      if (game_GameModeData_instance_ != 0) {
        v11 = *(_QWORD*)(game_GameModeData_instance_ + 96);
        if (v11 != 0 && *(_QWORD*)(v11 + 336) != 0) {
          return GameRoutine_96de20();
        }
      }
    }
  }
  if (*(_QWORD*)(v2 + 336) != 0) {
    return GameRoutine_96de20();
  }
  else {
    return 0;
  }
}

__int64 Unit_6c8a80(__int64 result, int a2, int a3, __int64 a4)
{
  _BYTE* v4;
  char* v8;
  char* v9;
  int v10;
  __int64 v11;
  int v12;
  int v13;

  v4 = (_BYTE*)GameData_21ca300;
  if (GameData_21ca300 != 0) {
    if (*(int*)(result + 592) < 2) {
      if (*(unsigned __int8*)(GameData_21ca300 + 18) >
              (unsigned int)(unsigned __int8)(a2 - *(_BYTE*)(GameData_21ca300 +
                                                             16)) &&
          *(unsigned __int8*)(GameData_21ca300 + 19) >
              (unsigned int)(unsigned __int8)(a3 - *(_BYTE*)(GameData_21ca300 +
                                                             17))) {
        v11 = *(_QWORD*)(a4 + 32);
        v13 = a2;
        v12 = a3;
        if (v11 == 0) {
        LABEL_10:
          GameRoutine_60a310(v11);
        }
        return (*(__int64 (**)(__int64, int*, int*))(*(_QWORD*)v11 + 48LL))(
            v11, &v13, &v12);
      }
    }
    else {
      v8 = *(char**)(result + 600);
      v9 = *(char**)(result + 608);
      while (v8 != v9) {
        if ((unsigned __int8)v4[18] >
            (unsigned int)(unsigned __int8)(a2 + *v8 - v4[16])) {
          v10 = a3 + v8[1];
          if ((unsigned __int8)v4[19] >
              (unsigned int)(unsigned __int8)(a3 + v8[1] - v4[17])) {
            v11 = *(_QWORD*)(a4 + 32);
            v13 = a2 + *v8;
            v12 = v10;
            if (v11 == 0) {
              goto LABEL_10;
            }
            result = (*(__int64 (**)(__int64, int*, int*))(
                *(_QWORD*)v11 + 48LL))(v11, &v13, &v12);
          }
        }
        v8 += 4;
      }
    }
  }
  return result;
}

__int64 Unit_6c9cf0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  char v16;

  if (a2 == 0) {
    return 0;
  }
  v4 = *(_QWORD*)(a2 + 440);
  if (v4 != 0) {
    v5 = *(unsigned __int8*)(v4 + 16);
  }
  else {
    v5 = 9;
  }
  v7 = *(unsigned __int8*)(*(_QWORD*)(a1 + 440) + 16LL);
  if ((_DWORD)v7 == v5) {
    return 1;
  }
  if (*(_BYTE*)(*(_QWORD*)(a1 + 440) + 16LL) != 0) {
    if (v5 == 0 && (_DWORD)v7 == 3) {
      return 1;
    }
  }
  else if (v5 == 3) {
    return 1;
  }
  if (*GameData_212ce90[0] == 0 ||
      (*(_BYTE*)(*GameData_212ce90[0] + 21) & 2) == 0) {
    return 1;
  }
  v14 = v2;
  v15 = v3;
  v8 = (unsigned int)*(char*)(a2 + 585);
  v16 = 0;
  v13 = v12;
  v9 = *(_QWORD*)(*GameData_212ce98[0] + 160) + (v7 << 7) + 8;
  v10 = *(char*)(a2 + 584);
  v12[0] = GameData_1f94310;
  v12[1] = v9;
  v12[2] = &v16;
  Unit_6c8a80_alt1(a2, v10, v8, v12);
  if (v13 == v12) {
    v11 = 32;
    goto LABEL_19;
  }
  if (v13 != nullptr) {
    v11 = 40;
  LABEL_19:
    (*(void (**)(__int64))(*v13 + v11))((__int64)v13);
  }
  return v16 & 1;
}

__int64 Unit_6c9ef0(__int64 a1)
{
  __int64 v1;
  char v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  int v7;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca298,
                            memory_order_acquire) &
       1) == 0) {
    v6 = a1;
    v7 = __cxa_guard_acquire(&GameData_21ca298);
    a1 = v6;
    if (v7 != 0) {
      GameData_21ca290 = (__int64)&GameData_1ada150;
      GameData_21ca288 = game_HashString(&GameData_1ada150);
      __cxa_guard_release(&GameData_21ca298);
      a1 = v6;
    }
  }
  v1 = *(_QWORD*)(a1 + 440);
  if (v1 != 0) {
    v2 = *(_BYTE*)(v1 + 16);
  }
  else {
    v2 = 9;
  }
  if (((1 << v2) & 0xF1) == 0) {
    return 0;
  }
  v3 = GameRoutine_820d50(2);
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  v4 = game_GameVariableTable_Find(*(_QWORD*)(game_GameModeData_instance_ + 48),
                                   v3);
  if (v4 != 0 && *(_DWORD*)(v4 + 32) != 0) {
    return 0;
  }
  if (game_GameModeData_instance_ == 0) {
    return 0;
  }
  result = game_GameVariableTable_Find(
      *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21ca288);
  if (result != 0) {
    return *(unsigned int*)(result + 32);
  }
  return result;
}

__int64 Unit_6ca760(__int64 a1, _WORD* a2)
{
  __int64 v2;
  __int64* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  _BYTE* v10;
  char v11;
  _DWORD* v12;
  __int64 v13;
  _BYTE* v14;
  _BYTE* v15;
  __int64 v16;
  _BYTE* v17;
  _BYTE* v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  _BYTE* v46;
  _DWORD* v47;
  __int64 v48;
  _BYTE* v49;
  _BYTE* v50;
  __int64 v51;
  _BYTE* v52;
  _BYTE* v53;
  _BYTE* v54;

  if ((*a2 & 0xFFF) != 0) {
    v2 = *(_QWORD*)(a1 + 1776);
    v4 = GameData_212c880[0];
    v5 = *(_QWORD*)(a1 + 1784) - v2;
    if ((int)(v5 >> 2) < 1) {
      v8 = 0;
    }
    else {
      v6 = *(_QWORD*)(*GameData_212c880[0] + 64);
      if ((v5 & 0x1FFFFFFFCLL) == 4) {
        v7 = 0;
        v8 = 0;
      }
      else {
        v12 = (_DWORD*)(v2 + 4);
        v7 = 0;
        v8 = 0;
        do {
          v13 = *(_QWORD*)(v6 + 8LL * (*(v12 - 1) & 0xFFF));
          v14 = *(_BYTE**)(v13 + 864);
          if (v14 != nullptr && *v14 != 0) {
            ++v8;
          }
          else {
            v15 = *(_BYTE**)(v13 + 872);
            if (v15 != nullptr && *v15 != 0) {
              ++v8;
            }
          }
          v16 = *(_QWORD*)(v6 + 8LL * (*v12 & 0xFFF));
          v17 = *(_BYTE**)(v16 + 864);
          if (v17 != nullptr && *v17 != 0) {
            ++v8;
          }
          else {
            v18 = *(_BYTE**)(v16 + 872);
            if (v18 != nullptr && *v18 != 0) {
              ++v8;
            }
          }
          v7 += 2;
          v12 += 2;
        } while (((v5 >> 2) & 0x7FFFFFFE) != v7);
      }
      if ((v5 & 4) != 0) {
        v9 = *(_QWORD*)(v6 + 8LL * (*(_DWORD*)(v2 + 4 * v7) & 0xFFF));
        v10 = *(_BYTE**)(v9 + 864);
        if (v10 != nullptr && *v10 != 0) {
          ++v8;
        }
        else {
          v19 = *(_BYTE**)(v9 + 872);
          if (v19 != nullptr && *v19 != 0) {
            ++v8;
          }
        }
      }
    }
    v11 = UnitSkillList_84cc00(a1 + 1360, a2, 1);
    if ((v11 & 1) != 0) {
      v20 = *(_QWORD*)(a1 + 1400);
      v21 = *(_QWORD*)(a1 + 1392);
      *(_QWORD*)(a1 + 1448) = 0;
      v22 = v20 - v21;
      *(_QWORD*)(a1 + 1440) = 0;
      if ((int)((unsigned __int64)(v20 - v21) >> 2) >= 1) {
        v23 = *v4;
        v24 = (int)(v22 >> 2);
        v25 = v24 <= 1 ? 1LL : (int)(v22 >> 2);
        if (v24 >= 2) {
          v31 = (int*)(v21 + 4);
          v26 = 0;
          v27 = 0;
          v28 = 0;
          v29 = 0;
          v30 = 0;
          do {
            v30 += 2;
            v32 = *(_QWORD*)(*(_QWORD*)(v23 + 64) + 8LL * (*(v31 - 1) & 0xFFF));
            v33 = v29 | (1 << *(_BYTE*)(v32 + 104));
            *(_WORD*)(a1 + 1440) = v33;
            v34 = (1LL << *(_BYTE*)(v32 + 250)) | v28;
            *(_QWORD*)(a1 + 1448) = v34;
            v35 = (1 << *(_BYTE*)(v32 + 115)) | v27;
            *(_DWORD*)(a1 + 1444) = v35;
            v36 = *(unsigned __int16*)(*(_QWORD*)(v32 + 24) + 1064LL) | v26;
            *(_WORD*)(a1 + 1442) = v36;
            v37 = *v31;
            v31 += 2;
            v38 = *(_QWORD*)(*(_QWORD*)(v23 + 64) + 8LL * (v37 & 0xFFF));
            v29 = v33 | (1 << *(_BYTE*)(v38 + 104));
            *(_WORD*)(a1 + 1440) = v29;
            v28 = (1LL << *(_BYTE*)(v38 + 250)) | v34;
            *(_QWORD*)(a1 + 1448) = v28;
            v27 = (1 << *(_BYTE*)(v38 + 115)) | v35;
            *(_DWORD*)(a1 + 1444) = v27;
            v26 = *(unsigned __int16*)(*(_QWORD*)(v38 + 24) + 1064LL) | v36;
            *(_WORD*)(a1 + 1442) = v26;
          } while ((v25 & 0x7FFFFFFFFFFFFFFELL) != v30);
        }
        else {
          LOWORD(v26) = 0;
          v27 = 0;
          v28 = 0;
          LOWORD(v29) = 0;
          v30 = 0;
        }
        if ((v25 & 1) != 0) {
          v39 = *(_QWORD*)(*(_QWORD*)(v23 + 64) +
                           8LL * (*(_DWORD*)(v21 + 4 * v30) & 0xFFF));
          *(_WORD*)(a1 + 1440) = v29 | (1 << *(_BYTE*)(v39 + 104));
          *(_QWORD*)(a1 + 1448) = (1LL << *(_BYTE*)(v39 + 250)) | v28;
          *(_DWORD*)(a1 + 1444) = (1 << *(_BYTE*)(v39 + 115)) | v27;
          *(_WORD*)(a1 + 1442) = *(_WORD*)(*(_QWORD*)(v39 + 24) + 1064LL) | v26;
        }
      }
      game_Unit_Unknown6cd8f0(a1);
    }
    v40 = *(_QWORD*)(a1 + 1776);
    v41 = *(_QWORD*)(a1 + 1784) - v40;
    if ((int)(v41 >> 2) < 1) {
      v44 = 0;
    }
    else {
      v42 = *(_QWORD*)(*v4 + 64);
      if ((v41 & 0x1FFFFFFFCLL) == 4) {
        v43 = 0;
        v44 = 0;
      }
      else {
        v47 = (_DWORD*)(v40 + 4);
        v43 = 0;
        v44 = 0;
        do {
          v48 = *(_QWORD*)(v42 + 8LL * (*(v47 - 1) & 0xFFF));
          v49 = *(_BYTE**)(v48 + 864);
          if (v49 != nullptr && *v49 != 0) {
            ++v44;
          }
          else {
            v50 = *(_BYTE**)(v48 + 872);
            if (v50 != nullptr && *v50 != 0) {
              ++v44;
            }
          }
          v51 = *(_QWORD*)(v42 + 8LL * (*v47 & 0xFFF));
          v52 = *(_BYTE**)(v51 + 864);
          if (v52 != nullptr && *v52 != 0) {
            ++v44;
          }
          else {
            v53 = *(_BYTE**)(v51 + 872);
            if (v53 != nullptr && *v53 != 0) {
              ++v44;
            }
          }
          v43 += 2;
          v47 += 2;
        } while (((v41 >> 2) & 0x7FFFFFFE) != v43);
      }
      if ((v41 & 4) != 0) {
        v45 = *(_QWORD*)(v42 + 8LL * (*(_DWORD*)(v40 + 4 * v43) & 0xFFF));
        v46 = *(_BYTE**)(v45 + 864);
        if (v46 != nullptr && *v46 != 0) {
          ++v44;
        }
        else {
          v54 = *(_BYTE**)(v45 + 872);
          if (v54 != nullptr && *v54 != 0) {
            ++v44;
          }
        }
      }
    }
    if (v44 != v8) {
      *(_WORD*)(a1 + 20) |= 0x44u;
    }
  }
  else {
    v11 = 0;
  }
  return v11 & 1;
}

__int64 Unit_6cb080(__int64 a1, _WORD* a2)
{
  __int64 v2;
  __int64* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  _BYTE* v10;
  char v11;
  _DWORD* v12;
  __int64 v13;
  _BYTE* v14;
  _BYTE* v15;
  __int64 v16;
  _BYTE* v17;
  _BYTE* v18;
  _BYTE* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  int v29;
  __int64 v30;
  int* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  int v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  _BYTE* v46;
  _DWORD* v47;
  __int64 v48;
  _BYTE* v49;
  _BYTE* v50;
  __int64 v51;
  _BYTE* v52;
  _BYTE* v53;
  _BYTE* v54;

  if ((*a2 & 0xFFF) != 0) {
    v2 = *(_QWORD*)(a1 + 1776);
    v4 = GameData_212c880[0];
    v5 = *(_QWORD*)(a1 + 1784) - v2;
    if ((int)(v5 >> 2) < 1) {
      v8 = 0;
    }
    else {
      v6 = *(_QWORD*)(*GameData_212c880[0] + 64);
      if ((v5 & 0x1FFFFFFFCLL) == 4) {
        v7 = 0;
        v8 = 0;
      }
      else {
        v12 = (_DWORD*)(v2 + 4);
        v7 = 0;
        v8 = 0;
        do {
          v13 = *(_QWORD*)(v6 + 8LL * (*(v12 - 1) & 0xFFF));
          v14 = *(_BYTE**)(v13 + 864);
          if (v14 != nullptr && *v14 != 0) {
            ++v8;
          }
          else {
            v15 = *(_BYTE**)(v13 + 872);
            if (v15 != nullptr && *v15 != 0) {
              ++v8;
            }
          }
          v16 = *(_QWORD*)(v6 + 8LL * (*v12 & 0xFFF));
          v17 = *(_BYTE**)(v16 + 864);
          if (v17 != nullptr && *v17 != 0) {
            ++v8;
          }
          else {
            v18 = *(_BYTE**)(v16 + 872);
            if (v18 != nullptr && *v18 != 0) {
              ++v8;
            }
          }
          v7 += 2;
          v12 += 2;
        } while (((v5 >> 2) & 0x7FFFFFFE) != v7);
      }
      if ((v5 & 4) != 0) {
        v9 = *(_QWORD*)(v6 + 8LL * (*(_DWORD*)(v2 + 4 * v7) & 0xFFF));
        v10 = *(_BYTE**)(v9 + 864);
        if (v10 != nullptr && *v10 != 0) {
          ++v8;
        }
        else {
          v19 = *(_BYTE**)(v9 + 872);
          if (v19 != nullptr && *v19 != 0) {
            ++v8;
          }
        }
      }
    }
    v11 = UnitSkillList_84d980(a1 + 1360, a2);
    if ((v11 & 1) != 0) {
      v20 = *(_QWORD*)(a1 + 1400);
      v21 = *(_QWORD*)(a1 + 1392);
      *(_QWORD*)(a1 + 1448) = 0;
      v22 = v20 - v21;
      *(_QWORD*)(a1 + 1440) = 0;
      if ((int)((unsigned __int64)(v20 - v21) >> 2) >= 1) {
        v23 = *v4;
        v24 = (int)(v22 >> 2);
        v25 = v24 <= 1 ? 1LL : (int)(v22 >> 2);
        if (v24 >= 2) {
          v31 = (int*)(v21 + 4);
          v26 = 0;
          v27 = 0;
          v28 = 0;
          v29 = 0;
          v30 = 0;
          do {
            v30 += 2;
            v32 = *(_QWORD*)(*(_QWORD*)(v23 + 64) + 8LL * (*(v31 - 1) & 0xFFF));
            v33 = v29 | (1 << *(_BYTE*)(v32 + 104));
            *(_WORD*)(a1 + 1440) = v33;
            v34 = (1LL << *(_BYTE*)(v32 + 250)) | v28;
            *(_QWORD*)(a1 + 1448) = v34;
            v35 = (1 << *(_BYTE*)(v32 + 115)) | v27;
            *(_DWORD*)(a1 + 1444) = v35;
            v36 = *(unsigned __int16*)(*(_QWORD*)(v32 + 24) + 1064LL) | v26;
            *(_WORD*)(a1 + 1442) = v36;
            v37 = *v31;
            v31 += 2;
            v38 = *(_QWORD*)(*(_QWORD*)(v23 + 64) + 8LL * (v37 & 0xFFF));
            v29 = v33 | (1 << *(_BYTE*)(v38 + 104));
            *(_WORD*)(a1 + 1440) = v29;
            v28 = (1LL << *(_BYTE*)(v38 + 250)) | v34;
            *(_QWORD*)(a1 + 1448) = v28;
            v27 = (1 << *(_BYTE*)(v38 + 115)) | v35;
            *(_DWORD*)(a1 + 1444) = v27;
            v26 = *(unsigned __int16*)(*(_QWORD*)(v38 + 24) + 1064LL) | v36;
            *(_WORD*)(a1 + 1442) = v26;
          } while ((v25 & 0x7FFFFFFFFFFFFFFELL) != v30);
        }
        else {
          LOWORD(v26) = 0;
          v27 = 0;
          v28 = 0;
          LOWORD(v29) = 0;
          v30 = 0;
        }
        if ((v25 & 1) != 0) {
          v39 = *(_QWORD*)(*(_QWORD*)(v23 + 64) +
                           8LL * (*(_DWORD*)(v21 + 4 * v30) & 0xFFF));
          *(_WORD*)(a1 + 1440) = v29 | (1 << *(_BYTE*)(v39 + 104));
          *(_QWORD*)(a1 + 1448) = (1LL << *(_BYTE*)(v39 + 250)) | v28;
          *(_DWORD*)(a1 + 1444) = (1 << *(_BYTE*)(v39 + 115)) | v27;
          *(_WORD*)(a1 + 1442) = *(_WORD*)(*(_QWORD*)(v39 + 24) + 1064LL) | v26;
        }
      }
      game_Unit_Unknown6cd8f0(a1);
    }
    v40 = *(_QWORD*)(a1 + 1776);
    v41 = *(_QWORD*)(a1 + 1784) - v40;
    if ((int)(v41 >> 2) < 1) {
      v44 = 0;
    }
    else {
      v42 = *(_QWORD*)(*v4 + 64);
      if ((v41 & 0x1FFFFFFFCLL) == 4) {
        v43 = 0;
        v44 = 0;
      }
      else {
        v47 = (_DWORD*)(v40 + 4);
        v43 = 0;
        v44 = 0;
        do {
          v48 = *(_QWORD*)(v42 + 8LL * (*(v47 - 1) & 0xFFF));
          v49 = *(_BYTE**)(v48 + 864);
          if (v49 != nullptr && *v49 != 0) {
            ++v44;
          }
          else {
            v50 = *(_BYTE**)(v48 + 872);
            if (v50 != nullptr && *v50 != 0) {
              ++v44;
            }
          }
          v51 = *(_QWORD*)(v42 + 8LL * (*v47 & 0xFFF));
          v52 = *(_BYTE**)(v51 + 864);
          if (v52 != nullptr && *v52 != 0) {
            ++v44;
          }
          else {
            v53 = *(_BYTE**)(v51 + 872);
            if (v53 != nullptr && *v53 != 0) {
              ++v44;
            }
          }
          v43 += 2;
          v47 += 2;
        } while (((v41 >> 2) & 0x7FFFFFFE) != v43);
      }
      if ((v41 & 4) != 0) {
        v45 = *(_QWORD*)(v42 + 8LL * (*(_DWORD*)(v40 + 4 * v43) & 0xFFF));
        v46 = *(_BYTE**)(v45 + 864);
        if (v46 != nullptr && *v46 != 0) {
          ++v44;
        }
        else {
          v54 = *(_BYTE**)(v45 + 872);
          if (v54 != nullptr && *v54 != 0) {
            ++v44;
          }
        }
      }
    }
    if (v44 != v8) {
      *(_WORD*)(a1 + 20) |= 0x44u;
    }
  }
  else {
    v11 = 0;
  }
  return v11 & 1;
}

__int64 Unit_6cb490(__int64 a1)
{
  int v2;
  __int64 result;
  int v4;
  int v5;
  unsigned __int8 v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  unsigned __int8 v12;
  int v13;
  int v14;
  int v15;
  __int64 v16;
  _BYTE v17[4];
  _BYTE v18[4];

  v2 = (unsigned __int8)GameRoutine_6cb640();
  result = 0;
  *(_DWORD*)(a1 + 416) &= ~0x8000u;
  if (v2 > 2) {
    switch (v2) {
    case 3:
      v4 = *(unsigned __int8*)(a1 + 500);
      v5 = Unit_6c9ef0(a1);
      if (v5 >= v4 + 1) {
        v6 = v4 + 1;
      }
      else {
        v6 = v5;
      }
      *(_BYTE*)(a1 + 500) = v6;
      if (v4 != v6) {
        v7 = *(unsigned __int16*)(a1 + 492);
        v17[0] = 0;
        v8 = game_Unit_GetParam(a1, v17, 1);
        if (*(_WORD*)(a1 + 494) != 0 && v7 != *(unsigned __int16*)(a1 + 494)) {
          *(_WORD*)(a1 + 494) = 0;
        }
        if (v8 >= (__int16)v7) {
          v9 = (__int16)v7;
        }
        else {
          v9 = v8;
        }
        if ((v7 & 0x8000u) != 0) {
          v9 = 0;
        }
        if (v9 != *(__int16*)(a1 + 492)) {
          *(_WORD*)(a1 + 492) = v9;
        }
      }
      break;
    case 4:
      v10 = *(unsigned __int8*)(a1 + 500);
      v11 = Unit_6c9ef0(a1);
      if (v11 >= v10 + 1) {
        v12 = v10 + 1;
      }
      else {
        v12 = v11;
      }
      *(_BYTE*)(a1 + 500) = v12;
      if (v10 != v12) {
        v13 = *(unsigned __int16*)(a1 + 492);
        v18[0] = 0;
        v14 = game_Unit_GetParam(a1, v18, 1);
        if (*(_WORD*)(a1 + 494) != 0 && v13 != *(unsigned __int16*)(a1 + 494)) {
          *(_WORD*)(a1 + 494) = 0;
        }
        if (v14 >= (__int16)v13) {
          v15 = (__int16)v13;
        }
        else {
          v15 = v14;
        }
        if ((v13 & 0x8000u) != 0) {
          v15 = 0;
        }
        if (v15 != *(__int16*)(a1 + 492)) {
          *(_WORD*)(a1 + 492) = v15;
        }
      }
      if ((unsigned __int8)game_Unit_GetUnknown6cba30(a1) == 3) {
        v16 = 1;
      }
      else {
        v16 = 6;
      }
      game_Unit_SetPollution(a1, v16);
      return 1;
    case 5:
      break;
    default:
      return result;
    }
    game_Unit_SetPollution(a1, 0);
    goto LABEL_24;
  }
  if (v2 == 1) {
    GameRoutine_6ca260(a1);
    return 1;
  }
  if (v2 == 2) {
  LABEL_24:
    GameRoutine_6cab80(a1);
    return 1;
  }
  return result;
}

_DWORD* Unit_6cbb60(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _DWORD* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  _DWORD* v14;

  if ((*(_BYTE*)(a1 + 1837) & 0x40) == 0 ||
      (v2 = *(_QWORD*)(a1 + 1784), v3 = *(_QWORD*)(a1 + 1776), v2 == v3)) {
    v6 = GameData_212c8a8;
  }
  else {
    v4 = (v2 - v3) >> 2;
    v5 = 0;
    v6 = GameData_212c8a8;
    while (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                                8LL * (*(_DWORD*)(v3 + 4 * v5) & 0xFFF)) +
                     250LL) != 46) {
      if (v4 == ++v5) {
        goto LABEL_8;
      }
    }
    v14 = (_DWORD*)(v3 + 4LL * (unsigned int)v5);
    if (v5 > -1) {
      v6 = v14;
    }
  }
LABEL_8:
  if ((*v6 & 0xFFF) == 0) {
    return GameData_212c8a8;
  }
  v7 = GameData_212c880[0];
  v8 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*v6 & 0xFFF));
  if ((GameRoutine_6fc510(v8) & 1) != 0) {
    return GameData_212c8a8;
  }
  if (*(_BYTE*)(v8 + 273) != 0) {
    v9 = *(_QWORD*)(*(_QWORD*)(*v7 + 64) + 8 * (*v6 & 0xFFFLL));
    v10 = *(unsigned __int8*)(v9 + 104);
    v11 = *(unsigned __int8*)(v9 + 273);
    v12 = (unsigned int)(v10 - 5) >= 2 ? 0 : (*v6 >> 19) & 0x1F;
    if (v12 - ((*v6 >> 12) & 0x7F) + v11 < 1) {
      return GameData_212c8a8;
    }
  }
  if ((GameRoutine_6fc7a0(v8, a1 + 1744) & 1) == 0) {
    return GameData_212c8a8;
  }
  return v6;
}

__int64 Unit_6cbdc0(_QWORD* a1, _DWORD* a2, unsigned __int16* a3, int a4)
{
  unsigned int v8;
  __int64 v9;
  unsigned int v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  int v16;
  __int64 v18;
  char v19;
  bool v20;
  bool v22;
  __int64 v24;
  int v25;
  bool v26;
  _BOOL4 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD v32[4];
  _QWORD* v33;
  unsigned int v34;
  _QWORD v35[4];
  _QWORD* v36;
  _QWORD v37[4];
  _QWORD* v38;

  v34 = 0;
  v8 = game_Unit_GetUnknown6cbca0();
  v9 = *a2 & 0xFFFLL;
  if ((*a2 & 0xFFF) != 0) {
    v10 = *(char*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v9) +
                   276LL);
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v9) +
                  276LL) != 0) {
      v11 = a1[218];
      v12 = ((unsigned __int64)(unsigned int)GameData_21d9860 >> 5) & 0x7F;
      if (v12 + 1 <= (a1[219] - v11) >> 2 &&
          ((*(_DWORD*)(v11 + 4LL * (unsigned int)v12) >> GameData_21d9860) &
           1) != 0) {
        v10 = 0;
      }
      else {
        v13 = a1[55];
        if (v13 != 0) {
          v14 = *(_BYTE*)(v13 + 16);
        }
        else {
          v14 = 9;
        }
        if (((1 << v14) & 6) != 0) {
          v10 = 0;
        }
      }
    }
    v34 = v10;
  }
  else {
    v10 = 0;
  }
  if (a4 >= 1) {
    v10 += v8 * a4 *
           *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                          8LL * *a3) +
                               90LL);
    v34 = v10;
  }
  v15 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (unsigned int)v9);
  if ((((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v15 + 104)) & 1) ==
      0) {
    goto LABEL_22;
  }
  v16 = *(unsigned __int8*)(v15 + 106);
  if (*(_BYTE*)(v15 + 106) == 0 || v16 == 6) {
    v18 = *(_QWORD*)(v15 + 576);
    if (v18 != 0) {
      goto LABEL_25;
    }
  LABEL_22:
    v19 = 0;
    v20 = false;
    goto LABEL_38;
  }
  if (v16 != 1) {
    v18 = *(_QWORD*)(v15 + 576);
    v22 = false;
    v19 = 0;
    v20 = false;
    if (v18 == 0) {
      goto LABEL_38;
    }
    goto LABEL_32;
  }
  v18 = *(_QWORD*)(v15 + 576);
  if (v18 == 0) {
    v20 = false;
    v19 = 1;
    goto LABEL_38;
  }
LABEL_25:
  v22 = *(unsigned __int8*)(v18 + 72) < 8u && *(_BYTE*)(v18 + 73) == 1;
LABEL_32:
  v19 = v22;
  v20 = *(unsigned __int8*)(v18 + 72) < 8u && *(_BYTE*)(v18 + 73) == 7;
LABEL_38:
  v24 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * *a3);
  v25 = *(unsigned __int8*)(v24 + 73);
  v26 = *(unsigned __int8*)(v24 + 72) < 8u;
  v27 = v25 == 1 && *(unsigned __int8*)(v24 + 72) < 8u;
  if (v25 != 7) {
    v26 = false;
  }
  if (v26 || (v19 & 1) != 0 || v20 || v27) {
    v32[1] = v8;
    v32[2] = &v34;
    v32[0] = GameData_1f915e8;
    v33 = v32;
    v35[0] = GameData_1f93088;
    v35[1] = v32;
    v36 = v35;
    v37[2] = v35;
    v38 = v37;
    v37[0] = GameData_1f92f88;
    v37[1] = 13;
    game_UnitItemList_EachItem((char*)a1 + 828, v37);
    if (v38 == v37) {
      v28 = 32;
    }
    else {
      if (v38 == nullptr) {
        goto LABEL_52;
      }
      v28 = 40;
    }
    (*(void (**)(__int64))(*v38 + v28))((__int64)v38);
  LABEL_52:
    if (v36 == v35) {
      v29 = 32;
    }
    else {
      if (v36 == nullptr) {
        goto LABEL_57;
      }
      v29 = 40;
    }
    (*(void (**)(__int64))(*v36 + v29))((__int64)v36);
  LABEL_57:
    if (v33 == v32) {
      v30 = 32;
    }
    else {
      if (v33 == nullptr) {
        return v34;
      }
      v30 = 40;
    }
    (*(void (**)(__int64))(*v33 + v30))((__int64)v33);
    return v34;
  }
  return v10;
}

__int64 Unit_6cc580(__int64 a1, _DWORD* a2)
{
  __int64* v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int* v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;

  v2 = GameData_212c880[0];
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                           8LL * (*a2 & 0xFFF)) +
                104LL) != 2) {
    return 0;
  }
  v5 = (*(_QWORD*)(a1 + 1208) - *(_QWORD*)(a1 + 1200)) >> 2;
  v28 = 32;
  if ((int)(game_UnitSkillList_GetMaxValue(a1 + 1744, &v28) + 3) <= (int)v5 ||
      (UnitSkillList_84cc00(a1 + 1168, a2, 1) & 1) == 0) {
    return 0;
  }
  v6 = *(_QWORD*)(a1 + 1208);
  v7 = *(_QWORD*)(a1 + 1200);
  *(_QWORD*)(a1 + 1256) = 0;
  v8 = v6 - v7;
  *(_QWORD*)(a1 + 1248) = 0;
  if ((int)((unsigned __int64)(v6 - v7) >> 2) >= 1) {
    v9 = *v2;
    v10 = (int)(v8 >> 2);
    v11 = v10 <= 1 ? 1LL : (int)(v8 >> 2);
    if (v10 >= 2) {
      v18 = (int*)(v7 + 4);
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      do {
        v16 += 2;
        v19 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (*(v18 - 1) & 0xFFF));
        v20 = v15 | (1 << *(_BYTE*)(v19 + 104));
        *(_WORD*)(a1 + 1248) = v20;
        v21 = (1LL << *(_BYTE*)(v19 + 250)) | v14;
        *(_QWORD*)(a1 + 1256) = v21;
        v22 = (1 << *(_BYTE*)(v19 + 115)) | v13;
        *(_DWORD*)(a1 + 1252) = v22;
        v23 = *(unsigned __int16*)(*(_QWORD*)(v19 + 24) + 1064LL) | v12;
        *(_WORD*)(a1 + 1250) = v23;
        v24 = *v18;
        v18 += 2;
        v25 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (v24 & 0xFFF));
        v15 = v20 | (1 << *(_BYTE*)(v25 + 104));
        *(_WORD*)(a1 + 1248) = v15;
        v14 = (1LL << *(_BYTE*)(v25 + 250)) | v21;
        *(_QWORD*)(a1 + 1256) = v14;
        v13 = (1 << *(_BYTE*)(v25 + 115)) | v22;
        *(_DWORD*)(a1 + 1252) = v13;
        v12 = *(unsigned __int16*)(*(_QWORD*)(v25 + 24) + 1064LL) | v23;
        *(_WORD*)(a1 + 1250) = v12;
      } while ((v11 & 0x7FFFFFFFFFFFFFFELL) != v16);
    }
    else {
      LOWORD(v12) = 0;
      v13 = 0;
      v14 = 0;
      LOWORD(v15) = 0;
      v16 = 0;
    }
    if ((v11 & 1) != 0) {
      v26 = *(_QWORD*)(*(_QWORD*)(v9 + 64) +
                       8LL * (*(_DWORD*)(v7 + 4 * v16) & 0xFFF));
      *(_WORD*)(a1 + 1248) = v15 | (1 << *(_BYTE*)(v26 + 104));
      *(_QWORD*)(a1 + 1256) = (1LL << *(_BYTE*)(v26 + 250)) | v14;
      *(_DWORD*)(a1 + 1252) = (1 << *(_BYTE*)(v26 + 115)) | v13;
      *(_WORD*)(a1 + 1250) = *(_WORD*)(*(_QWORD*)(v26 + 24) + 1064LL) | v12;
    }
  }
  v27 = *(_DWORD*)(a1 + 416);
  if ((v27 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v27 | 0x10000000;
    GameRoutine_6c51e0(a1);
    GameRoutine_6c6da0(a1);
    GameRoutine_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  return 1;
}

__int64 Unit_6cc7e0(__int64 a1, __int64 a2)
{
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  int v13;
  __int64 v14;
  int* v15;
  __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  __int64 v23;
  int v24;
  char v25;

  v3 = UnitSkillList_84d980(a1 + 1168, a2);
  if ((v3 & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 1208);
    v5 = *(_QWORD*)(a1 + 1200);
    *(_QWORD*)(a1 + 1256) = 0;
    v6 = v4 - v5;
    *(_QWORD*)(a1 + 1248) = 0;
    if ((int)((unsigned __int64)(v4 - v5) >> 2) >= 1) {
      v7 = (int)(v6 >> 2);
      v8 = v7 <= 1 ? 1LL : (int)(v6 >> 2);
      v9 = *GameData_212c880[0];
      if (v7 >= 2) {
        v15 = (int*)(v5 + 4);
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = 0;
        v14 = 0;
        do {
          v14 += 2;
          v16 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (*(v15 - 1) & 0xFFF));
          v17 = v13 | (1 << *(_BYTE*)(v16 + 104));
          *(_WORD*)(a1 + 1248) = v17;
          v18 = (1LL << *(_BYTE*)(v16 + 250)) | v12;
          *(_QWORD*)(a1 + 1256) = v18;
          v19 = (1 << *(_BYTE*)(v16 + 115)) | v11;
          *(_DWORD*)(a1 + 1252) = v19;
          v20 = *(unsigned __int16*)(*(_QWORD*)(v16 + 24) + 1064LL) | v10;
          *(_WORD*)(a1 + 1250) = v20;
          v21 = *v15;
          v15 += 2;
          v22 = *(_QWORD*)(*(_QWORD*)(v9 + 64) + 8LL * (v21 & 0xFFF));
          v13 = v17 | (1 << *(_BYTE*)(v22 + 104));
          *(_WORD*)(a1 + 1248) = v13;
          v12 = (1LL << *(_BYTE*)(v22 + 250)) | v18;
          *(_QWORD*)(a1 + 1256) = v12;
          v11 = (1 << *(_BYTE*)(v22 + 115)) | v19;
          *(_DWORD*)(a1 + 1252) = v11;
          v10 = *(unsigned __int16*)(*(_QWORD*)(v22 + 24) + 1064LL) | v20;
          *(_WORD*)(a1 + 1250) = v10;
        } while ((v8 & 0x7FFFFFFFFFFFFFFELL) != v14);
      }
      else {
        LOWORD(v10) = 0;
        v11 = 0;
        v12 = 0;
        LOWORD(v13) = 0;
        v14 = 0;
      }
      if ((v8 & 1) != 0) {
        v23 = *(_QWORD*)(*(_QWORD*)(v9 + 64) +
                         8LL * (*(_DWORD*)(v5 + 4 * v14) & 0xFFF));
        *(_WORD*)(a1 + 1248) = v13 | (1 << *(_BYTE*)(v23 + 104));
        *(_QWORD*)(a1 + 1256) = (1LL << *(_BYTE*)(v23 + 250)) | v12;
        *(_DWORD*)(a1 + 1252) = (1 << *(_BYTE*)(v23 + 115)) | v11;
        *(_WORD*)(a1 + 1250) = *(_WORD*)(*(_QWORD*)(v23 + 24) + 1064LL) | v10;
      }
    }
    v24 = *(_DWORD*)(a1 + 416);
    if ((v24 & 0x10000000) == 0) {
      v25 = v3;
      *(_DWORD*)(a1 + 416) = v24 | 0x10000000;
      GameRoutine_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      GameRoutine_6c6ec0(a1);
      v3 = v25;
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  return v3 & 1;
}

__int64 Unit_6cc9e0(__int64 a1, _DWORD* a2)
{
  __int64* v2;
  char v4;
  int v6;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  int* v20;
  __int64 v21;
  int v22;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  _BYTE v34[4];
  _BYTE v35[4];

  v2 = GameData_212c880[0];
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                           8LL * (*a2 & 0xFFF)) +
                104LL) == 1 &&
      (int)((*(_QWORD*)(a1 + 1304) - *(_QWORD*)(a1 + 1296)) >> 2) <= 4) {
    v6 = *(__int16*)(a1 + 492);
    v34[0] = 0;
    v8 = game_Unit_GetParam(a1, v34, 1);
    v4 = UnitSkillList_84cc00(a1 + 1264, a2, 1);
    if ((v4 & 1) != 0) {
      v9 = *(_QWORD*)(a1 + 1304);
      v10 = *(_QWORD*)(a1 + 1296);
      *(_QWORD*)(a1 + 1352) = 0;
      v11 = v9 - v10;
      *(_QWORD*)(a1 + 1344) = 0;
      if ((int)((unsigned __int64)(v9 - v10) >> 2) >= 1) {
        v12 = *v2;
        v13 = (int)(v11 >> 2);
        v14 = v13 <= 1 ? 1LL : (int)(v11 >> 2);
        if (v13 >= 2) {
          v20 = (int*)(v10 + 4);
          v15 = 0;
          v16 = 0;
          v17 = 0;
          v18 = 0;
          v19 = 0;
          do {
            v19 += 2;
            v21 = *(_QWORD*)(*(_QWORD*)(v12 + 64) + 8LL * (*(v20 - 1) & 0xFFF));
            v22 = v18 | (1 << *(_BYTE*)(v21 + 104));
            *(_WORD*)(a1 + 1344) = v22;
            v23 = (1LL << *(_BYTE*)(v21 + 250)) | v17;
            *(_QWORD*)(a1 + 1352) = v23;
            v24 = (1 << *(_BYTE*)(v21 + 115)) | v16;
            *(_DWORD*)(a1 + 1348) = v24;
            v25 = *(unsigned __int16*)(*(_QWORD*)(v21 + 24) + 1064LL) | v15;
            *(_WORD*)(a1 + 1346) = v25;
            v26 = *v20;
            v20 += 2;
            v27 = *(_QWORD*)(*(_QWORD*)(v12 + 64) + 8LL * (v26 & 0xFFF));
            v18 = v22 | (1 << *(_BYTE*)(v27 + 104));
            *(_WORD*)(a1 + 1344) = v18;
            v17 = (1LL << *(_BYTE*)(v27 + 250)) | v23;
            *(_QWORD*)(a1 + 1352) = v17;
            v16 = (1 << *(_BYTE*)(v27 + 115)) | v24;
            *(_DWORD*)(a1 + 1348) = v16;
            v15 = *(unsigned __int16*)(*(_QWORD*)(v27 + 24) + 1064LL) | v25;
            *(_WORD*)(a1 + 1346) = v15;
          } while ((v14 & 0x7FFFFFFFFFFFFFFELL) != v19);
        }
        else {
          LOWORD(v15) = 0;
          v16 = 0;
          v17 = 0;
          LOWORD(v18) = 0;
          v19 = 0;
        }
        if ((v14 & 1) != 0) {
          v28 = *(_QWORD*)(*(_QWORD*)(v12 + 64) +
                           8LL * (*(_DWORD*)(v10 + 4 * v19) & 0xFFF));
          *(_WORD*)(a1 + 1344) = v18 | (1 << *(_BYTE*)(v28 + 104));
          *(_QWORD*)(a1 + 1352) = (1LL << *(_BYTE*)(v28 + 250)) | v17;
          *(_DWORD*)(a1 + 1348) = (1 << *(_BYTE*)(v28 + 115)) | v16;
          *(_WORD*)(a1 + 1346) = *(_WORD*)(*(_QWORD*)(v28 + 24) + 1064LL) | v15;
        }
      }
      v29 = *(_DWORD*)(a1 + 416);
      if ((v29 & 0x10000000) == 0) {
        *(_DWORD*)(a1 + 416) = v29 | 0x10000000;
        GameRoutine_6c51e0(a1);
        GameRoutine_6c6da0(a1);
        GameRoutine_6c6ec0(a1);
        *(_DWORD*)(a1 + 416) &= ~0x10000000u;
      }
    }
    v35[0] = 0;
    v30 = game_Unit_GetParam(a1, v35, 1);
    if (v30 != v8) {
      v31 = v30 - v8 + v6;
      if (*(_WORD*)(a1 + 494) != 0 && v31 != *(__int16*)(a1 + 494)) {
        *(_WORD*)(a1 + 494) = 0;
      }
      if (v30 >= v31) {
        v32 = v30 - v8 + v6;
      }
      else {
        v32 = v30;
      }
      if (v31 < 1) {
        v33 = 1;
      }
      else {
        v33 = v32;
      }
      if (v33 != *(__int16*)(a1 + 492)) {
        *(_WORD*)(a1 + 492) = v33;
      }
    }
  }
  else {
    v4 = 0;
  }
  return v4 & 1;
}

__int64 Unit_6ccca0(__int64 a1, __int64 a2)
{
  int v2;
  int v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int* v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  _BYTE v33[4];
  _BYTE v34[4];

  v2 = *(__int16*)(a1 + 492);
  v33[0] = 0;
  v5 = game_Unit_GetParam(a1, v33, 1);
  v6 = UnitSkillList_84d980(a1 + 1264, a2);
  if ((v6 & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 1304);
    v8 = *(_QWORD*)(a1 + 1296);
    *(_QWORD*)(a1 + 1352) = 0;
    v9 = v7 - v8;
    *(_QWORD*)(a1 + 1344) = 0;
    if ((int)((unsigned __int64)(v7 - v8) >> 2) >= 1) {
      v10 = (int)(v9 >> 2);
      v11 = v10 <= 1 ? 1LL : (int)(v9 >> 2);
      v12 = *GameData_212c880[0];
      if (v10 >= 2) {
        v18 = (int*)(v8 + 4);
        v13 = 0;
        v14 = 0;
        v15 = 0;
        v16 = 0;
        v17 = 0;
        do {
          v17 += 2;
          v19 = *(_QWORD*)(*(_QWORD*)(v12 + 64) + 8LL * (*(v18 - 1) & 0xFFF));
          v20 = v16 | (1 << *(_BYTE*)(v19 + 104));
          *(_WORD*)(a1 + 1344) = v20;
          v21 = (1LL << *(_BYTE*)(v19 + 250)) | v15;
          *(_QWORD*)(a1 + 1352) = v21;
          v22 = (1 << *(_BYTE*)(v19 + 115)) | v14;
          *(_DWORD*)(a1 + 1348) = v22;
          v23 = *(unsigned __int16*)(*(_QWORD*)(v19 + 24) + 1064LL) | v13;
          *(_WORD*)(a1 + 1346) = v23;
          v24 = *v18;
          v18 += 2;
          v25 = *(_QWORD*)(*(_QWORD*)(v12 + 64) + 8LL * (v24 & 0xFFF));
          v16 = v20 | (1 << *(_BYTE*)(v25 + 104));
          *(_WORD*)(a1 + 1344) = v16;
          v15 = (1LL << *(_BYTE*)(v25 + 250)) | v21;
          *(_QWORD*)(a1 + 1352) = v15;
          v14 = (1 << *(_BYTE*)(v25 + 115)) | v22;
          *(_DWORD*)(a1 + 1348) = v14;
          v13 = *(unsigned __int16*)(*(_QWORD*)(v25 + 24) + 1064LL) | v23;
          *(_WORD*)(a1 + 1346) = v13;
        } while ((v11 & 0x7FFFFFFFFFFFFFFELL) != v17);
      }
      else {
        LOWORD(v13) = 0;
        v14 = 0;
        v15 = 0;
        LOWORD(v16) = 0;
        v17 = 0;
      }
      if ((v11 & 1) != 0) {
        v26 = *(_QWORD*)(*(_QWORD*)(v12 + 64) +
                         8LL * (*(_DWORD*)(v8 + 4 * v17) & 0xFFF));
        *(_WORD*)(a1 + 1344) = v16 | (1 << *(_BYTE*)(v26 + 104));
        *(_QWORD*)(a1 + 1352) = (1LL << *(_BYTE*)(v26 + 250)) | v15;
        *(_DWORD*)(a1 + 1348) = (1 << *(_BYTE*)(v26 + 115)) | v14;
        *(_WORD*)(a1 + 1346) = *(_WORD*)(*(_QWORD*)(v26 + 24) + 1064LL) | v13;
      }
    }
    v27 = *(_DWORD*)(a1 + 416);
    if ((v27 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v27 | 0x10000000;
      GameRoutine_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      GameRoutine_6c6ec0(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  v34[0] = 0;
  v28 = game_Unit_GetParam(a1, v34, 1);
  if (v28 != v5) {
    v29 = v28 - v5 + v2;
    if (*(_WORD*)(a1 + 494) != 0 && v29 != *(__int16*)(a1 + 494)) {
      *(_WORD*)(a1 + 494) = 0;
    }
    if (v28 >= v29) {
      v30 = v28 - v5 + v2;
    }
    else {
      v30 = v28;
    }
    if (v29 < 1) {
      v31 = 1;
    }
    else {
      v31 = v30;
    }
    if (v31 != *(__int16*)(a1 + 492)) {
      *(_WORD*)(a1 + 492) = v31;
    }
  }
  return v6 & 1;
}

__int64 Unit_6cd120(__int64 a1, char a2, _DWORD* a3)
{
  int v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  _BYTE* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  char v18;
  _DWORD* v19;
  __int64 v20;
  _BYTE* v21;
  _BYTE* v22;
  __int64 v23;
  _BYTE* v24;
  _BYTE* v25;
  _DWORD* v26;
  __int64 v27;
  _BYTE* v28;
  _BYTE* v29;
  __int64 v30;
  _BYTE* v31;
  _BYTE* v32;
  _BYTE* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  int v43;
  __int64 v44;
  _BYTE* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  int v53;
  __int64 v54;
  int v55;
  __int64 v56;
  int* v57;
  __int64 v58;
  int v59;
  __int64 v60;
  int v61;
  int v62;
  int v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  int v70;
  __int64 v71;
  _BYTE* v72;
  _DWORD* v73;
  __int64 v74;
  _BYTE* v75;
  _BYTE* v76;
  __int64 v77;
  _BYTE* v78;
  _BYTE* v79;
  int* v80;
  __int64 v81;
  int v82;
  __int64 v83;
  int v84;
  int v85;
  int v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  unsigned __int64 v90;
  __int64 v91;
  __int64 v92;
  _BYTE* v93;
  _BYTE* v94;
  _DWORD* v96;
  __int64 v97;
  _BYTE* v98;
  _BYTE* v99;
  __int64 v100;
  _BYTE* v101;
  _BYTE* v102;

  v4 = *a3 & 0xFFF;
  if ((a2 & 1) != 0) {
    if (v4 != 0) {
      v5 = *(_QWORD*)(a1 + 1776);
      v6 = *(_QWORD*)(a1 + 1784) - v5;
      if ((int)(v6 >> 2) < 1) {
        v9 = 0;
      }
      else {
        v7 = *(_QWORD*)(*GameData_212c880[0] + 64);
        if ((v6 & 0x1FFFFFFFCLL) == 4) {
          v8 = 0;
          v9 = 0;
        }
        else {
          v19 = (_DWORD*)(v5 + 4);
          v8 = 0;
          v9 = 0;
          do {
            v20 = *(_QWORD*)(v7 + 8LL * (*(v19 - 1) & 0xFFF));
            v21 = *(_BYTE**)(v20 + 864);
            if (v21 != nullptr && *v21 != 0) {
              ++v9;
            }
            else {
              v22 = *(_BYTE**)(v20 + 872);
              if (v22 != nullptr && *v22 != 0) {
                ++v9;
              }
            }
            v23 = *(_QWORD*)(v7 + 8LL * (*v19 & 0xFFF));
            v24 = *(_BYTE**)(v23 + 864);
            if (v24 != nullptr && *v24 != 0) {
              ++v9;
            }
            else {
              v25 = *(_BYTE**)(v23 + 872);
              if (v25 != nullptr && *v25 != 0) {
                ++v9;
              }
            }
            v8 += 2;
            v19 += 2;
          } while (((v6 >> 2) & 0x7FFFFFFE) != v8);
        }
        if ((v6 & 4) != 0) {
          v10 = *(_QWORD*)(v7 + 8LL * (*(_DWORD*)(v5 + 4 * v8) & 0xFFF));
          v11 = *(_BYTE**)(v10 + 864);
          if (v11 != nullptr && *v11 != 0) {
            ++v9;
          }
          else {
            v33 = *(_BYTE**)(v10 + 872);
            if (v33 != nullptr && *v33 != 0) {
              ++v9;
            }
          }
        }
      }
      v18 = UnitSkillList_84cc00(a1 + 1360, a3, 1);
      if ((v18 & 1) != 0) {
        v34 = *(_QWORD*)(a1 + 1400);
        v35 = *(_QWORD*)(a1 + 1392);
        *(_QWORD*)(a1 + 1448) = 0;
        v36 = v34 - v35;
        *(_QWORD*)(a1 + 1440) = 0;
        if ((int)((unsigned __int64)(v34 - v35) >> 2) >= 1) {
          v37 = (int)(v36 >> 2);
          v38 = v37 <= 1 ? 1LL : (int)(v36 >> 2);
          v39 = *GameData_212c880[0];
          if (v37 >= 2) {
            v57 = (int*)(v35 + 4);
            v40 = 0;
            v41 = 0;
            v42 = 0;
            v43 = 0;
            v44 = 0;
            do {
              v44 += 2;
              v58 =
                  *(_QWORD*)(*(_QWORD*)(v39 + 64) + 8LL * (*(v57 - 1) & 0xFFF));
              v59 = v43 | (1 << *(_BYTE*)(v58 + 104));
              *(_WORD*)(a1 + 1440) = v59;
              v60 = (1LL << *(_BYTE*)(v58 + 250)) | v42;
              *(_QWORD*)(a1 + 1448) = v60;
              v61 = (1 << *(_BYTE*)(v58 + 115)) | v41;
              *(_DWORD*)(a1 + 1444) = v61;
              v62 = *(unsigned __int16*)(*(_QWORD*)(v58 + 24) + 1064LL) | v40;
              *(_WORD*)(a1 + 1442) = v62;
              v63 = *v57;
              v57 += 2;
              v64 = *(_QWORD*)(*(_QWORD*)(v39 + 64) + 8LL * (v63 & 0xFFF));
              v43 = v59 | (1 << *(_BYTE*)(v64 + 104));
              *(_WORD*)(a1 + 1440) = v43;
              v42 = (1LL << *(_BYTE*)(v64 + 250)) | v60;
              *(_QWORD*)(a1 + 1448) = v42;
              v41 = (1 << *(_BYTE*)(v64 + 115)) | v61;
              *(_DWORD*)(a1 + 1444) = v41;
              v40 = *(unsigned __int16*)(*(_QWORD*)(v64 + 24) + 1064LL) | v62;
              *(_WORD*)(a1 + 1442) = v40;
            } while ((v38 & 0x7FFFFFFFFFFFFFFELL) != v44);
          }
          else {
            LOWORD(v40) = 0;
            v41 = 0;
            v42 = 0;
            LOWORD(v43) = 0;
            v44 = 0;
          }
          if ((v38 & 1) != 0) {
            v65 = *(_QWORD*)(*(_QWORD*)(v39 + 64) +
                             8LL * (*(_DWORD*)(v35 + 4 * v44) & 0xFFF));
            *(_WORD*)(a1 + 1440) = v43 | (1 << *(_BYTE*)(v65 + 104));
            *(_QWORD*)(a1 + 1448) = (1LL << *(_BYTE*)(v65 + 250)) | v42;
            *(_DWORD*)(a1 + 1444) = (1 << *(_BYTE*)(v65 + 115)) | v41;
            *(_WORD*)(a1 + 1442) =
                *(_WORD*)(*(_QWORD*)(v65 + 24) + 1064LL) | v40;
          }
        }
        game_Unit_Unknown6cd8f0(a1);
      }
      v66 = *(_QWORD*)(a1 + 1776);
      v67 = *(_QWORD*)(a1 + 1784) - v66;
      if ((int)(v67 >> 2) >= 1) {
        v68 = *(_QWORD*)(GameData_21c99b0 + 64);
        if ((v67 & 0x1FFFFFFFCLL) == 4) {
          v69 = 0;
          v70 = 0;
        }
        else {
          v73 = (_DWORD*)(v66 + 4);
          v69 = 0;
          v70 = 0;
          do {
            v74 = *(_QWORD*)(v68 + 8LL * (*(v73 - 1) & 0xFFF));
            v75 = *(_BYTE**)(v74 + 864);
            if (v75 != nullptr && *v75 != 0) {
              ++v70;
            }
            else {
              v76 = *(_BYTE**)(v74 + 872);
              if (v76 != nullptr && *v76 != 0) {
                ++v70;
              }
            }
            v77 = *(_QWORD*)(v68 + 8LL * (*v73 & 0xFFF));
            v78 = *(_BYTE**)(v77 + 864);
            if (v78 != nullptr && *v78 != 0) {
              ++v70;
            }
            else {
              v79 = *(_BYTE**)(v77 + 872);
              if (v79 != nullptr && *v79 != 0) {
                ++v70;
              }
            }
            v69 += 2;
            v73 += 2;
          } while (((v67 >> 2) & 0x7FFFFFFE) != v69);
        }
        if ((v67 & 4) == 0) {
          goto LABEL_114;
        }
        v71 = *(_QWORD*)(v68 + 8LL * (*(_DWORD*)(v66 + 4 * v69) & 0xFFF));
        v72 = *(_BYTE**)(v71 + 864);
        if (v72 == nullptr || *v72 == 0) {
          goto LABEL_111;
        }
      LABEL_109:
        ++v70;
        goto LABEL_114;
      }
      goto LABEL_110;
    }
  LABEL_18:
    v18 = 0;
    return v18 & 1;
  }
  if (v4 == 0) {
    goto LABEL_18;
  }
  v12 = *(_QWORD*)(a1 + 1776);
  v13 = *(_QWORD*)(a1 + 1784) - v12;
  if ((int)(v13 >> 2) < 1) {
    v9 = 0;
  }
  else {
    v14 = *(_QWORD*)(GameData_21c99b0 + 64);
    if ((v13 & 0x1FFFFFFFCLL) == 4) {
      v15 = 0;
      v9 = 0;
    }
    else {
      v26 = (_DWORD*)(v12 + 4);
      v15 = 0;
      v9 = 0;
      do {
        v27 = *(_QWORD*)(v14 + 8LL * (*(v26 - 1) & 0xFFF));
        v28 = *(_BYTE**)(v27 + 864);
        if (v28 != nullptr && *v28 != 0) {
          ++v9;
        }
        else {
          v29 = *(_BYTE**)(v27 + 872);
          if (v29 != nullptr && *v29 != 0) {
            ++v9;
          }
        }
        v30 = *(_QWORD*)(v14 + 8LL * (*v26 & 0xFFF));
        v31 = *(_BYTE**)(v30 + 864);
        if (v31 != nullptr && *v31 != 0) {
          ++v9;
        }
        else {
          v32 = *(_BYTE**)(v30 + 872);
          if (v32 != nullptr && *v32 != 0) {
            ++v9;
          }
        }
        v15 += 2;
        v26 += 2;
      } while (((v13 >> 2) & 0x7FFFFFFE) != v15);
    }
    if ((v13 & 4) != 0) {
      v16 = *(_QWORD*)(v14 + 8LL * (*(_DWORD*)(v12 + 4 * v15) & 0xFFF));
      v17 = *(_BYTE**)(v16 + 864);
      if (v17 != nullptr && *v17 != 0) {
        ++v9;
      }
      else {
        v45 = *(_BYTE**)(v16 + 872);
        if (v45 != nullptr && *v45 != 0) {
          ++v9;
        }
      }
    }
  }
  v18 = UnitSkillList_84d980(a1 + 1360, a3);
  if ((v18 & 1) != 0) {
    v46 = *(_QWORD*)(a1 + 1400);
    v47 = *(_QWORD*)(a1 + 1392);
    *(_QWORD*)(a1 + 1448) = 0;
    v48 = v46 - v47;
    *(_QWORD*)(a1 + 1440) = 0;
    if ((int)((unsigned __int64)(v46 - v47) >> 2) >= 1) {
      v49 = GameData_21c99b0;
      v50 = (int)(v48 >> 2);
      v51 = v50 <= 1 ? 1LL : (int)(v48 >> 2);
      if (v50 >= 2) {
        v80 = (int*)(v47 + 4);
        v52 = 0;
        v53 = 0;
        v54 = 0;
        v55 = 0;
        v56 = 0;
        do {
          v56 += 2;
          v81 = *(_QWORD*)(*(_QWORD*)(v49 + 64) + 8LL * (*(v80 - 1) & 0xFFF));
          v82 = v55 | (1 << *(_BYTE*)(v81 + 104));
          *(_WORD*)(a1 + 1440) = v82;
          v83 = (1LL << *(_BYTE*)(v81 + 250)) | v54;
          *(_QWORD*)(a1 + 1448) = v83;
          v84 = (1 << *(_BYTE*)(v81 + 115)) | v53;
          *(_DWORD*)(a1 + 1444) = v84;
          v85 = *(unsigned __int16*)(*(_QWORD*)(v81 + 24) + 1064LL) | v52;
          *(_WORD*)(a1 + 1442) = v85;
          v86 = *v80;
          v80 += 2;
          v87 = *(_QWORD*)(*(_QWORD*)(v49 + 64) + 8LL * (v86 & 0xFFF));
          v55 = v82 | (1 << *(_BYTE*)(v87 + 104));
          *(_WORD*)(a1 + 1440) = v55;
          v54 = (1LL << *(_BYTE*)(v87 + 250)) | v83;
          *(_QWORD*)(a1 + 1448) = v54;
          v53 = (1 << *(_BYTE*)(v87 + 115)) | v84;
          *(_DWORD*)(a1 + 1444) = v53;
          v52 = *(unsigned __int16*)(*(_QWORD*)(v87 + 24) + 1064LL) | v85;
          *(_WORD*)(a1 + 1442) = v52;
        } while ((v51 & 0x7FFFFFFFFFFFFFFELL) != v56);
      }
      else {
        LOWORD(v52) = 0;
        v53 = 0;
        v54 = 0;
        LOWORD(v55) = 0;
        v56 = 0;
      }
      if ((v51 & 1) != 0) {
        v88 = *(_QWORD*)(*(_QWORD*)(v49 + 64) +
                         8LL * (*(_DWORD*)(v47 + 4 * v56) & 0xFFF));
        *(_WORD*)(a1 + 1440) = v55 | (1 << *(_BYTE*)(v88 + 104));
        *(_QWORD*)(a1 + 1448) = (1LL << *(_BYTE*)(v88 + 250)) | v54;
        *(_DWORD*)(a1 + 1444) = (1 << *(_BYTE*)(v88 + 115)) | v53;
        *(_WORD*)(a1 + 1442) = *(_WORD*)(*(_QWORD*)(v88 + 24) + 1064LL) | v52;
      }
    }
    game_Unit_Unknown6cd8f0(a1);
  }
  v89 = *(_QWORD*)(a1 + 1776);
  v90 = *(_QWORD*)(a1 + 1784) - v89;
  if ((int)(v90 >> 2) >= 1) {
    v91 = *(_QWORD*)(GameData_21c99b0 + 64);
    if ((v90 & 0x1FFFFFFFCLL) == 4) {
      v92 = 0;
      v70 = 0;
    }
    else {
      v96 = (_DWORD*)(v89 + 4);
      v92 = 0;
      v70 = 0;
      do {
        v97 = *(_QWORD*)(v91 + 8LL * (*(v96 - 1) & 0xFFF));
        v98 = *(_BYTE**)(v97 + 864);
        if (v98 != nullptr && *v98 != 0) {
          ++v70;
        }
        else {
          v99 = *(_BYTE**)(v97 + 872);
          if (v99 != nullptr && *v99 != 0) {
            ++v70;
          }
        }
        v100 = *(_QWORD*)(v91 + 8LL * (*v96 & 0xFFF));
        v101 = *(_BYTE**)(v100 + 864);
        if (v101 != nullptr && *v101 != 0) {
          ++v70;
        }
        else {
          v102 = *(_BYTE**)(v100 + 872);
          if (v102 != nullptr && *v102 != 0) {
            ++v70;
          }
        }
        v92 += 2;
        v96 += 2;
      } while (((v90 >> 2) & 0x7FFFFFFE) != v92);
    }
    if ((v90 & 4) == 0) {
      goto LABEL_114;
    }
    v71 = *(_QWORD*)(v91 + 8LL * (*(_DWORD*)(v89 + 4 * v92) & 0xFFF));
    v93 = *(_BYTE**)(v71 + 864);
    if (v93 == nullptr || *v93 == 0) {
    LABEL_111:
      v94 = *(_BYTE**)(v71 + 872);
      if (v94 != nullptr && *v94 != 0) {
        ++v70;
      }
      goto LABEL_114;
    }
    goto LABEL_109;
  }
LABEL_110:
  v70 = 0;
LABEL_114:
  if (v70 != v9) {
    *(_WORD*)(a1 + 20) |= 0x44u;
  }
  return v18 & 1;
}

__int64 Unit_6cd9c0(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64 v8;
  _BYTE* v9;
  _DWORD* v10;
  __int64 v11;
  _BYTE* v12;
  _BYTE* v13;
  __int64 v14;
  _BYTE* v15;
  _BYTE* v16;
  _BYTE* v17;
  char v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  _BYTE* v25;
  _DWORD* v26;
  __int64 v27;
  _BYTE* v28;
  _BYTE* v29;
  __int64 v30;
  _BYTE* v31;
  _BYTE* v32;
  _BYTE* v33;

  v1 = *(_QWORD*)(a1 + 1776);
  v3 = GameData_212c880[0];
  v4 = *(_QWORD*)(a1 + 1784) - v1;
  if ((int)(v4 >> 2) < 1) {
    v7 = 0;
  }
  else {
    v5 = *(_QWORD*)(*GameData_212c880[0] + 64);
    if ((v4 & 0x1FFFFFFFCLL) == 4) {
      v6 = 0;
      v7 = 0;
    }
    else {
      v10 = (_DWORD*)(v1 + 4);
      v6 = 0;
      v7 = 0;
      do {
        v11 = *(_QWORD*)(v5 + 8LL * (*(v10 - 1) & 0xFFF));
        v12 = *(_BYTE**)(v11 + 864);
        if (v12 != nullptr && *v12 != 0) {
          ++v7;
        }
        else {
          v13 = *(_BYTE**)(v11 + 872);
          if (v13 != nullptr && *v13 != 0) {
            ++v7;
          }
        }
        v14 = *(_QWORD*)(v5 + 8LL * (*v10 & 0xFFF));
        v15 = *(_BYTE**)(v14 + 864);
        if (v15 != nullptr && *v15 != 0) {
          ++v7;
        }
        else {
          v16 = *(_BYTE**)(v14 + 872);
          if (v16 != nullptr && *v16 != 0) {
            ++v7;
          }
        }
        v6 += 2;
        v10 += 2;
      } while (((v4 >> 2) & 0x7FFFFFFE) != v6);
    }
    if ((v4 & 4) != 0) {
      v8 = *(_QWORD*)(v5 + 8LL * (*(_DWORD*)(v1 + 4 * v6) & 0xFFF));
      v9 = *(_BYTE**)(v8 + 864);
      if (v9 != nullptr && *v9 != 0) {
        ++v7;
      }
      else {
        v17 = *(_BYTE**)(v8 + 872);
        if (v17 != nullptr && *v17 != 0) {
          ++v7;
        }
      }
    }
  }
  v18 = game_UnitSkillList_Remove(a1 + 1360);
  if ((v18 & 1) != 0) {
    game_Unit_Unknown6cd8f0(a1);
  }
  v19 = *(_QWORD*)(a1 + 1776);
  v20 = *(_QWORD*)(a1 + 1784) - v19;
  if ((int)(v20 >> 2) < 1) {
    v23 = 0;
  }
  else {
    v21 = *(_QWORD*)(*v3 + 64);
    if ((v20 & 0x1FFFFFFFCLL) == 4) {
      v22 = 0;
      v23 = 0;
    }
    else {
      v26 = (_DWORD*)(v19 + 4);
      v22 = 0;
      v23 = 0;
      do {
        v27 = *(_QWORD*)(v21 + 8LL * (*(v26 - 1) & 0xFFF));
        v28 = *(_BYTE**)(v27 + 864);
        if (v28 != nullptr && *v28 != 0) {
          ++v23;
        }
        else {
          v29 = *(_BYTE**)(v27 + 872);
          if (v29 != nullptr && *v29 != 0) {
            ++v23;
          }
        }
        v30 = *(_QWORD*)(v21 + 8LL * (*v26 & 0xFFF));
        v31 = *(_BYTE**)(v30 + 864);
        if (v31 != nullptr && *v31 != 0) {
          ++v23;
        }
        else {
          v32 = *(_BYTE**)(v30 + 872);
          if (v32 != nullptr && *v32 != 0) {
            ++v23;
          }
        }
        v22 += 2;
        v26 += 2;
      } while (((v20 >> 2) & 0x7FFFFFFE) != v22);
    }
    if ((v20 & 4) != 0) {
      v24 = *(_QWORD*)(v21 + 8LL * (*(_DWORD*)(v19 + 4 * v22) & 0xFFF));
      v25 = *(_BYTE**)(v24 + 864);
      if (v25 != nullptr && *v25 != 0) {
        ++v23;
      }
      else {
        v33 = *(_BYTE**)(v24 + 872);
        if (v33 != nullptr && *v33 != 0) {
          ++v23;
        }
      }
    }
  }
  if (v23 != v7) {
    *(_WORD*)(a1 + 20) |= 0x44u;
  }
  return v18 & 1;
}

__int64 Unit_6cdd40(__int64 a1, char a2)
{
  int v4;
  _QWORD* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 result;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[4];
  _QWORD* v24;

  game_Unit_Unknown6cd010();
  v4 = *(__int16*)(a1 + 492);
  v22 = 0;
  v20 = 0;
  v5 = v23;
  LOBYTE(v23[0]) = 0;
  v6 = game_Unit_GetParam(a1, v23, 1);
  v21 = 0;
  v23[2] = a1;
  v24 = v23;
  v23[0] = GameData_1f914e8;
  v23[1] = &v20;
  if ((*(_BYTE*)(a1 + 1152) & 2) == 0) {
    goto LABEL_12;
  }
  v7 = *(_QWORD*)(a1 + 1112);
  v8 = *(_QWORD*)(a1 + 1104);
  if ((int)((unsigned __int64)(v7 - v8) >> 2) < 1) {
    v5 = v23;
  LABEL_12:
    v13 = 32;
    goto LABEL_13;
  }
  v9 = 0;
  v10 = 0;
  v11 = GameData_212c880[0];
  v12 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v12 + 64) +
                             8LL * (*(_DWORD*)(v8 + v9) & 0xFFF)) +
                  104LL) == 1) {
      if (v24 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_QWORD*, __int64))(*v24 + 48LL))(v24, v8 + v9);
      v12 = *v11;
      v7 = *(_QWORD*)(a1 + 1112);
      v8 = *(_QWORD*)(a1 + 1104);
    }
    ++v10;
    v9 += 4;
  } while (v10 < (int)((unsigned __int64)(v7 - v8) >> 2));
  v5 = v24;
  if (v24 == v23) {
    goto LABEL_12;
  }
  if (v24 != nullptr) {
    v13 = 40;
  LABEL_13:
    (*(void (**)(_QWORD*))(*v5 + v13))(v5);
  }
  if ((GameRoutine_6ce1c0(&v20, a1, a1 + 1264, 5, a2 & 1) & 1) != 0) {
    v14 = *(_DWORD*)(a1 + 416);
    if ((v14 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v14 | 0x10000000;
      GameRoutine_6c51e0(a1);
      GameRoutine_6c6da0(a1);
      GameRoutine_6c6ec0(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  LOBYTE(v23[0]) = 0;
  result = game_Unit_GetParam(a1, v23, 1);
  if ((_DWORD)result != v6) {
    v16 = result - v6 + v4;
    if (*(_WORD*)(a1 + 494) != 0 && v16 != *(__int16*)(a1 + 494)) {
      *(_WORD*)(a1 + 494) = 0;
    }
    if ((int)result >= v16) {
      v17 = result - v6 + v4;
    }
    else {
      v17 = result;
    }
    if (v16 < 1) {
      v18 = 1;
    }
    else {
      v18 = v17;
    }
    if (v18 != *(__int16*)(a1 + 492)) {
      *(_WORD*)(a1 + 492) = v18;
    }
  }
  if (v20 != 0) {
    v21 = v20;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v20);
  }
  return result;
}

__int64 Unit_6cdf80(__int64 a1, char a2)
{
  __int64 v2;
  __int64 v5;
  int v6;
  _QWORD* v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 result;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _QWORD v23[4];
  _QWORD* v24;

  v2 = *(_QWORD*)(a1 + 1200);
  if ((int)((unsigned __int64)(*(_QWORD*)(a1 + 1208) - v2) >> 2) >= 1) {
    v5 = *(_QWORD*)(a1 + 1168);
    *(_QWORD*)(a1 + 1208) = v2;
    v6 = *(_DWORD*)(a1 + 416);
    *(_DWORD*)(a1 + 1192) = 0;
    *(_QWORD*)(a1 + 1248) = 0;
    *(_QWORD*)(a1 + 1256) = 0;
    *(_QWORD*)(a1 + 1176) = v5;
    if ((v6 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v6 | 0x10000000;
      GameRoutine_6c51e0_alt1(a1);
      GameRoutine_6c6da0_alt1(a1);
      GameRoutine_6c6ec0(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  v7 = v23;
  v21 = 0;
  v22 = 0;
  v20 = 0;
  v23[2] = a1;
  v23[0] = GameData_1f914e8;
  v23[1] = &v20;
  v8 = *(_BYTE*)(a1 + 1152);
  v24 = v23;
  if ((v8 & 4) == 0) {
    goto LABEL_15;
  }
  v9 = *(_QWORD*)(a1 + 1112);
  v10 = *(_QWORD*)(a1 + 1104);
  if ((int)((unsigned __int64)(v9 - v10) >> 2) < 1) {
    v7 = v23;
  LABEL_15:
    v15 = 32;
    goto LABEL_16;
  }
  v11 = 0;
  v12 = 0;
  v13 = GameData_212c880[0];
  v14 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v14 + 64) +
                             8LL * (*(_DWORD*)(v10 + v11) & 0xFFF)) +
                  104LL) == 2) {
      if (v24 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_QWORD*, __int64))(*v24 + 48LL))(v24, v10 + v11);
      v14 = *v13;
      v9 = *(_QWORD*)(a1 + 1112);
      v10 = *(_QWORD*)(a1 + 1104);
    }
    ++v12;
    v11 += 4;
  } while (v12 < (int)((unsigned __int64)(v9 - v10) >> 2));
  v7 = v24;
  if (v24 == v23) {
    goto LABEL_15;
  }
  if (v24 != nullptr) {
    v15 = 40;
  LABEL_16:
    (*(void (**)(__int64))(*v7 + v15))((__int64)v7);
  }
  v23[0] = 32;
  v16 = game_UnitSkillList_GetMaxValue(a1 + 1744, v23);
  result =
      GameRoutine_6ce1c0(&v20, a1, a1 + 1168, (unsigned int)(v16 + 3), a2 & 1);
  if ((result & 1) != 0) {
    v18 = *(_DWORD*)(a1 + 416);
    if ((v18 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v18 | 0x10000000;
      GameRoutine_6c51e0_alt1(a1);
      GameRoutine_6c6da0_alt1(a1);
      result = GameRoutine_6c6ec0(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  if (v20 != 0) {
    v21 = v20;
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v20);
  }
  return result;
}

__int64 Unit_6ce660(__int64 a1)
{
  char* v1;
  char* v2;
  __int64 v3;
  char* v4;
  char* v5;
  unsigned __int64 v6;
  int v7;
  char* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  char v15;
  char* v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  _DWORD* v30;
  __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  int v35;
  int v36;
  __int64 v37;
  int v38;
  __int64 v39;
  int v40;
  int v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int v45;
  int v46;
  __int64 v47;
  int* v48;
  int v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  char* v53;
  int v54;
  char* v56;
  char* v57;
  unsigned __int64 v58;
  int v59;
  char* v60;
  __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  char* v64;
  __int64 v65;
  char* v66;
  __int64 v67;
  __int64 v68;
  char v69;
  char* v70;
  char* v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  int v80;
  __int64 v81;
  int v82;
  __int64 v83;
  __int64 v84;
  _DWORD* v85;
  __int64 v86;
  __int64 v87;
  int v88;
  __int64 v89;
  int v90;
  int v91;
  __int64 v92;
  int v93;
  __int64 v94;
  int v95;
  int v96;
  __int64 v97;
  int v98;
  __int64 v99;
  int v100;
  int v101;
  __int64 v102;
  int* v103;
  int v104;
  __int64 v105;
  char v106;
  __int64 v107;
  int v108;
  int v110;
  __int64 v111;

  v1 = *(char**)(a1 + 1304);
  v2 = *(char**)(a1 + 1296);
  v3 = a1;
  if ((int)((unsigned __int64)(v1 - v2) >> 2) < 6 || v2 == v1) {
    v15 = 0;
  }
  else {
    v4 = nullptr;
    v5 = nullptr;
    v6 = 0;
    v7 = 0;
    do {
      if (v7 <= 4) {
        ++v7;
      }
      else if ((unsigned __int64)v5 >= v6) {
        v8 = (char*)(v5 - v4);
        v9 = (v5 - v4) >> 2;
        v10 = v9 + 1;
        if ((unsigned __int64)(v9 + 1) >> 62 != 0) {
        LABEL_102:
          GameRoutine_6e3e20();
        }
        if ((__int64)(v6 - (_QWORD)v4) >> 1 > v10) {
          v10 = (__int64)(v6 - (_QWORD)v4) >> 1;
        }
        if (v6 - (unsigned __int64)v4 >= 0x7FFFFFFFFFFFFFFCLL) {
          v11 = 0x3FFFFFFFFFFFFFFFLL;
        }
        else {
          v11 = v10;
        }
        if (v11 != 0) {
          if (v11 >> 62 != 0) {
          LABEL_103:
            GameRoutine_60a210(a1);
          }
          v12 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v11, 16, 0);
        }
        else {
          v12 = 0;
        }
        v6 = v12 + 4 * v11;
        v13 = (__int64)&v8[v12 + -4 * v9];
        *(_DWORD*)&v8[v12] = *(_DWORD*)v2;
        v5 = &v8[v12 + 4];
        a1 = memcpy(v13, v4, v8);
        if (v4 != nullptr) {
          v14 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v14 = 56;
          }
          a1 = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v4);
        }
        v4 = (char*)v13;
      }
      else {
        *(_DWORD*)v5 = *(_DWORD*)v2;
        v5 += 4;
      }
      v2 += 4;
    } while (v2 != v1);
    if (v5 != v4) {
      v15 = 0;
      v16 = v4;
      v17 = GameData_212c880[0];
      while (1) {
        if ((UnitSkillList_84d980(v3 + 1264, v16) & 1) != 0) {
          v18 = *(_QWORD*)(v3 + 1304);
          v19 = *(_QWORD*)(v3 + 1296);
          *(_QWORD*)(v3 + 1344) = 0;
          *(_QWORD*)(v3 + 1352) = 0;
          v20 = v18 - v19;
          if ((int)((unsigned __int64)(v18 - v19) >> 2) >= 1) {
            v21 = *v17;
            v22 = (int)(v20 >> 2);
            if (v22 <= 1) {
              v23 = 1;
            }
            else {
              v23 = (int)(v20 >> 2);
            }
            if (v22 >= 4) {
              v30 = (_DWORD*)(v19 + 8);
              v31 = 0;
              v24 = 0;
              v25 = 0;
              v26 = 0;
              v27 = 0;
              do {
                v31 -= 4;
                v32 = *(_QWORD*)(*(_QWORD*)(v21 + 64) +
                                 8LL * (*(v30 - 2) & 0xFFF));
                v33 = v27 | (1 << *(_BYTE*)(v32 + 104));
                *(_WORD*)(v3 + 1344) = v33;
                v34 = (1LL << *(_BYTE*)(v32 + 250)) | v26;
                *(_QWORD*)(v3 + 1352) = v34;
                v35 = (1 << *(_BYTE*)(v32 + 115)) | v25;
                *(_DWORD*)(v3 + 1348) = v35;
                v36 = *(unsigned __int16*)(*(_QWORD*)(v32 + 24) + 1064LL) | v24;
                *(_WORD*)(v3 + 1346) = v36;
                v37 = *(_QWORD*)(*(_QWORD*)(v21 + 64) +
                                 8LL * (*(v30 - 1) & 0xFFF));
                v38 = v33 | (1 << *(_BYTE*)(v37 + 104));
                *(_WORD*)(v3 + 1344) = v38;
                v39 = (1LL << *(_BYTE*)(v37 + 250)) | v34;
                *(_QWORD*)(v3 + 1352) = v39;
                v40 = (1 << *(_BYTE*)(v37 + 115)) | v35;
                *(_DWORD*)(v3 + 1348) = v40;
                v41 = *(unsigned __int16*)(*(_QWORD*)(v37 + 24) + 1064LL) | v36;
                *(_WORD*)(v3 + 1346) = v41;
                v42 = *(_QWORD*)(*(_QWORD*)(v21 + 64) + 8LL * (*v30 & 0xFFF));
                v43 = v38 | (1 << *(_BYTE*)(v42 + 104));
                *(_WORD*)(v3 + 1344) = v43;
                v44 = (1LL << *(_BYTE*)(v42 + 250)) | v39;
                *(_QWORD*)(v3 + 1352) = v44;
                v45 = (1 << *(_BYTE*)(v42 + 115)) | v40;
                *(_DWORD*)(v3 + 1348) = v45;
                v46 = *(unsigned __int16*)(*(_QWORD*)(v42 + 24) + 1064LL) | v41;
                *(_WORD*)(v3 + 1346) = v46;
                LOWORD(v42) = v30[1];
                v30 += 4;
                v47 = *(_QWORD*)(*(_QWORD*)(v21 + 64) + 8 * (v42 & 0xFFF));
                v27 = v43 | (1 << *(_BYTE*)(v47 + 104));
                *(_WORD*)(v3 + 1344) = v27;
                v26 = (1LL << *(_BYTE*)(v47 + 250)) | v44;
                *(_QWORD*)(v3 + 1352) = v26;
                v25 = (1 << *(_BYTE*)(v47 + 115)) | v45;
                *(_DWORD*)(v3 + 1348) = v25;
                v24 = *(unsigned __int16*)(*(_QWORD*)(v47 + 24) + 1064LL) | v46;
                *(_WORD*)(v3 + 1346) = v24;
              } while (-(__int64)(v23 & 0xFFFFFFFFFFFFFFFCLL) != v31);
              v28 = -v31;
              v29 = v23 & 3;
              if (v29 != 0) {
              LABEL_40:
                v48 = (int*)(v19 + 4 * v28);
                do {
                  v49 = *v48++;
                  v15 = 1;
                  --v29;
                  v50 = *(_QWORD*)(*(_QWORD*)(v21 + 64) + 8LL * (v49 & 0xFFF));
                  v27 |= 1 << *(_BYTE*)(v50 + 104);
                  *(_WORD*)(v3 + 1344) = v27;
                  v26 |= 1LL << *(_BYTE*)(v50 + 250);
                  *(_QWORD*)(v3 + 1352) = v26;
                  v25 |= 1 << *(_BYTE*)(v50 + 115);
                  *(_DWORD*)(v3 + 1348) = v25;
                  v24 |= *(unsigned __int16*)(*(_QWORD*)(v50 + 24) + 1064LL);
                  *(_WORD*)(v3 + 1346) = v24;
                } while (v29 != 0);
                goto LABEL_28;
              }
            }
            else {
              v24 = 0;
              v25 = 0;
              v26 = 0;
              v27 = 0;
              v28 = 0;
              v29 = v23 & 3;
              if (v29 != 0) {
                goto LABEL_40;
              }
            }
          }
          v15 = 1;
        }
      LABEL_28:
        v16 += 4;
        if (v16 == v5) {
          goto LABEL_44;
        }
      }
    }
    v15 = 0;
  LABEL_44:
    if (v4 != nullptr) {
      v51 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v51 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v51, v4);
    }
  }
  v111 = 32;
  a1 = game_UnitSkillList_GetMaxValue(v3 + 1744, &v111);
  v52 = *(char**)(v3 + 1208);
  v53 = *(char**)(v3 + 1200);
  v54 = a1 + 3;
  if ((int)a1 + 3 >= (int)((unsigned __int64)(v52 - v53) >> 2) || v53 == v52) {
    if ((v15 & 1) == 0) {
      return 1;
    }
    goto LABEL_99;
  }
  v56 = nullptr;
  v57 = nullptr;
  v58 = 0;
  v59 = 0;
  v110 = a1 + 3;
  do {
    if (v59 < v54) {
      ++v59;
    }
    else if ((unsigned __int64)v57 >= v58) {
      v60 = (char*)(v57 - v56);
      v61 = (v57 - v56) >> 2;
      v62 = v61 + 1;
      if ((unsigned __int64)(v61 + 1) >> 62 != 0) {
        goto LABEL_102;
      }
      if ((__int64)(v58 - (_QWORD)v56) >> 1 > v62) {
        v62 = (__int64)(v58 - (_QWORD)v56) >> 1;
      }
      if (v58 - (unsigned __int64)v56 >= 0x7FFFFFFFFFFFFFFCLL) {
        v63 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v63 = v62;
      }
      if (v63 != 0) {
        if (v63 >> 62 != 0) {
          goto LABEL_103;
        }
        v64 = v56;
        v65 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v63, 16, 0);
        v56 = v64;
      }
      else {
        v65 = 0;
      }
      v58 = v65 + 4 * v63;
      v66 = v56;
      v67 = (__int64)&v60[v65 + -4 * v61];
      *(_DWORD*)&v60[v65] = *(_DWORD*)v53;
      v57 = &v60[v65 + 4];
      a1 = memcpy(v67, v56, v60);
      if (v66 != nullptr) {
        v68 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v68 = 56;
        }
        a1 = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v68, v66);
      }
      v54 = v110;
      v56 = (char*)v67;
    }
    else {
      *(_DWORD*)v57 = *(_DWORD*)v53;
      v57 += 4;
    }
    v53 += 4;
  } while (v53 != v52);
  if (v57 != v56) {
    v69 = 0;
    v70 = v56;
    v71 = v56;
    v72 = GameData_212c880[0];
    while (1) {
      if ((UnitSkillList_84d980(v3 + 1168, v71) & 1) != 0) {
        v73 = *(_QWORD*)(v3 + 1208);
        v74 = *(_QWORD*)(v3 + 1200);
        *(_QWORD*)(v3 + 1248) = 0;
        *(_QWORD*)(v3 + 1256) = 0;
        v75 = v73 - v74;
        if ((int)((unsigned __int64)(v73 - v74) >> 2) >= 1) {
          v76 = *v72;
          v77 = (int)(v75 >> 2);
          if (v77 <= 1) {
            v78 = 1;
          }
          else {
            v78 = (int)(v75 >> 2);
          }
          if (v77 >= 4) {
            v85 = (_DWORD*)(v74 + 8);
            v86 = 0;
            v79 = 0;
            v80 = 0;
            v81 = 0;
            v82 = 0;
            do {
              v86 -= 4;
              v87 =
                  *(_QWORD*)(*(_QWORD*)(v76 + 64) + 8LL * (*(v85 - 2) & 0xFFF));
              v88 = v82 | (1 << *(_BYTE*)(v87 + 104));
              *(_WORD*)(v3 + 1248) = v88;
              v89 = (1LL << *(_BYTE*)(v87 + 250)) | v81;
              *(_QWORD*)(v3 + 1256) = v89;
              v90 = (1 << *(_BYTE*)(v87 + 115)) | v80;
              *(_DWORD*)(v3 + 1252) = v90;
              v91 = *(unsigned __int16*)(*(_QWORD*)(v87 + 24) + 1064LL) | v79;
              *(_WORD*)(v3 + 1250) = v91;
              v92 =
                  *(_QWORD*)(*(_QWORD*)(v76 + 64) + 8LL * (*(v85 - 1) & 0xFFF));
              v93 = v88 | (1 << *(_BYTE*)(v92 + 104));
              *(_WORD*)(v3 + 1248) = v93;
              v94 = (1LL << *(_BYTE*)(v92 + 250)) | v89;
              *(_QWORD*)(v3 + 1256) = v94;
              v95 = (1 << *(_BYTE*)(v92 + 115)) | v90;
              *(_DWORD*)(v3 + 1252) = v95;
              v96 = *(unsigned __int16*)(*(_QWORD*)(v92 + 24) + 1064LL) | v91;
              *(_WORD*)(v3 + 1250) = v96;
              v97 = *(_QWORD*)(*(_QWORD*)(v76 + 64) + 8LL * (*v85 & 0xFFF));
              v98 = v93 | (1 << *(_BYTE*)(v97 + 104));
              *(_WORD*)(v3 + 1248) = v98;
              v99 = (1LL << *(_BYTE*)(v97 + 250)) | v94;
              *(_QWORD*)(v3 + 1256) = v99;
              v100 = (1 << *(_BYTE*)(v97 + 115)) | v95;
              *(_DWORD*)(v3 + 1252) = v100;
              v101 = *(unsigned __int16*)(*(_QWORD*)(v97 + 24) + 1064LL) | v96;
              *(_WORD*)(v3 + 1250) = v101;
              LOWORD(v97) = v85[1];
              v85 += 4;
              v102 = *(_QWORD*)(*(_QWORD*)(v76 + 64) + 8 * (v97 & 0xFFF));
              v82 = v98 | (1 << *(_BYTE*)(v102 + 104));
              *(_WORD*)(v3 + 1248) = v82;
              v81 = (1LL << *(_BYTE*)(v102 + 250)) | v99;
              *(_QWORD*)(v3 + 1256) = v81;
              v80 = (1 << *(_BYTE*)(v102 + 115)) | v100;
              *(_DWORD*)(v3 + 1252) = v80;
              v79 = *(unsigned __int16*)(*(_QWORD*)(v102 + 24) + 1064LL) | v101;
              *(_WORD*)(v3 + 1250) = v79;
            } while (-(__int64)(v78 & 0xFFFFFFFFFFFFFFFCLL) != v86);
            v83 = -v86;
            v84 = v78 & 3;
            if (v84 != 0) {
            LABEL_90:
              v103 = (int*)(v74 + 4 * v83);
              do {
                v104 = *v103++;
                v69 = 1;
                --v84;
                v105 = *(_QWORD*)(*(_QWORD*)(v76 + 64) + 8LL * (v104 & 0xFFF));
                v82 |= 1 << *(_BYTE*)(v105 + 104);
                *(_WORD*)(v3 + 1248) = v82;
                v81 |= 1LL << *(_BYTE*)(v105 + 250);
                *(_QWORD*)(v3 + 1256) = v81;
                v80 |= 1 << *(_BYTE*)(v105 + 115);
                *(_DWORD*)(v3 + 1252) = v80;
                v79 |= *(unsigned __int16*)(*(_QWORD*)(v105 + 24) + 1064LL);
                *(_WORD*)(v3 + 1250) = v79;
              } while (v84 != 0);
              goto LABEL_78;
            }
          }
          else {
            v79 = 0;
            v80 = 0;
            v81 = 0;
            v82 = 0;
            v83 = 0;
            v84 = v78 & 3;
            if (v84 != 0) {
              goto LABEL_90;
            }
          }
        }
        v69 = 1;
      }
    LABEL_78:
      v71 += 4;
      if (v71 == v57) {
        goto LABEL_94;
      }
    }
  }
  v70 = v56;
  v69 = 0;
LABEL_94:
  v106 = v15 | v69;
  if (v70 != nullptr) {
    v107 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v107 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v107,
                                  v70);
  }
  if ((v106 & 1) != 0) {
  LABEL_99:
    v108 = *(_DWORD*)(v3 + 416);
    if ((v108 & 0x10000000) == 0) {
      *(_DWORD*)(v3 + 416) = v108 | 0x10000000;
      GameRoutine_6c51e0(v3);
      GameRoutine_6c6da0(v3);
      GameRoutine_6c6ec0(v3);
      *(_DWORD*)(v3 + 416) &= ~0x10000000u;
    }
  }
  return 1;
}

__int64 Unit_6cef00(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  _BYTE* v11;
  _DWORD* v12;
  __int64 v13;
  _BYTE* v14;
  _BYTE* v15;
  __int64 v16;
  _BYTE* v17;
  _BYTE* v18;
  _BYTE* v19;
  char v20;
  char v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  _BYTE* v28;
  _DWORD* v29;
  __int64 v30;
  _BYTE* v31;
  _BYTE* v32;
  __int64 v33;
  _BYTE* v34;
  _BYTE* v35;
  _BYTE* v36;

  v2 = *(_QWORD*)(a1 + 1776);
  v5 = GameData_212c880[0];
  v6 = *(_QWORD*)(a1 + 1784) - v2;
  if ((int)(v6 >> 2) < 1) {
    v9 = 0;
  }
  else {
    v7 = *(_QWORD*)(*GameData_212c880[0] + 64);
    if ((v6 & 0x1FFFFFFFCLL) == 4) {
      v8 = 0;
      v9 = 0;
    }
    else {
      v12 = (_DWORD*)(v2 + 4);
      v8 = 0;
      v9 = 0;
      do {
        v13 = *(_QWORD*)(v7 + 8LL * (*(v12 - 1) & 0xFFF));
        v14 = *(_BYTE**)(v13 + 864);
        if (v14 != nullptr && *v14 != 0) {
          ++v9;
        }
        else {
          v15 = *(_BYTE**)(v13 + 872);
          if (v15 != nullptr && *v15 != 0) {
            ++v9;
          }
        }
        v16 = *(_QWORD*)(v7 + 8LL * (*v12 & 0xFFF));
        v17 = *(_BYTE**)(v16 + 864);
        if (v17 != nullptr && *v17 != 0) {
          ++v9;
        }
        else {
          v18 = *(_BYTE**)(v16 + 872);
          if (v18 != nullptr && *v18 != 0) {
            ++v9;
          }
        }
        v8 += 2;
        v12 += 2;
      } while (((v6 >> 2) & 0x7FFFFFFE) != v8);
    }
    if ((v6 & 4) != 0) {
      v10 = *(_QWORD*)(v7 + 8LL * (*(_DWORD*)(v2 + 4 * v8) & 0xFFF));
      v11 = *(_BYTE**)(v10 + 864);
      if (v11 != nullptr && *v11 != 0) {
        ++v9;
      }
      else {
        v19 = *(_BYTE**)(v10 + 872);
        if (v19 != nullptr && *v19 != 0) {
          ++v9;
        }
      }
    }
  }
  v20 = GameRoutine_850ce0(a1 + 1360, a2);
  v21 = v20 | GameRoutine_850ce0(a1 + 1456, a2);
  if ((v21 & 1) != 0) {
    game_Unit_Unknown6cd8f0(a1);
  }
  v22 = *(_QWORD*)(a1 + 1776);
  v23 = *(_QWORD*)(a1 + 1784) - v22;
  if ((int)(v23 >> 2) < 1) {
    v26 = 0;
  }
  else {
    v24 = *(_QWORD*)(*v5 + 64);
    if ((v23 & 0x1FFFFFFFCLL) == 4) {
      v25 = 0;
      v26 = 0;
    }
    else {
      v29 = (_DWORD*)(v22 + 4);
      v25 = 0;
      v26 = 0;
      do {
        v30 = *(_QWORD*)(v24 + 8LL * (*(v29 - 1) & 0xFFF));
        v31 = *(_BYTE**)(v30 + 864);
        if (v31 != nullptr && *v31 != 0) {
          ++v26;
        }
        else {
          v32 = *(_BYTE**)(v30 + 872);
          if (v32 != nullptr && *v32 != 0) {
            ++v26;
          }
        }
        v33 = *(_QWORD*)(v24 + 8LL * (*v29 & 0xFFF));
        v34 = *(_BYTE**)(v33 + 864);
        if (v34 != nullptr && *v34 != 0) {
          ++v26;
        }
        else {
          v35 = *(_BYTE**)(v33 + 872);
          if (v35 != nullptr && *v35 != 0) {
            ++v26;
          }
        }
        v25 += 2;
        v29 += 2;
      } while (((v23 >> 2) & 0x7FFFFFFE) != v25);
    }
    if ((v23 & 4) != 0) {
      v27 = *(_QWORD*)(v24 + 8LL * (*(_DWORD*)(v22 + 4 * v25) & 0xFFF));
      v28 = *(_BYTE**)(v27 + 864);
      if (v28 != nullptr && *v28 != 0) {
        ++v26;
      }
      else {
        v36 = *(_BYTE**)(v27 + 872);
        if (v36 != nullptr && *v36 != 0) {
          ++v26;
        }
      }
    }
  }
  if (v26 != v9) {
    *(_WORD*)(a1 + 20) |= 0x44u;
  }
  return v21 & 1;
}

__int64 Unit_6cf1c0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  _BYTE* v10;
  _DWORD* v11;
  __int64 v12;
  _BYTE* v13;
  _BYTE* v14;
  __int64 v15;
  _BYTE* v16;
  _BYTE* v17;
  _BYTE* v18;
  char v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  _BYTE* v26;
  _DWORD* v27;
  __int64 v28;
  _BYTE* v29;
  _BYTE* v30;
  __int64 v31;
  _BYTE* v32;
  _BYTE* v33;
  _BYTE* v34;

  v2 = *(_QWORD*)(a1 + 1776);
  v4 = GameData_212c880[0];
  v5 = *(_QWORD*)(a1 + 1784) - v2;
  if ((int)(v5 >> 2) < 1) {
    v8 = 0;
  }
  else {
    v6 = *(_QWORD*)(*GameData_212c880[0] + 64);
    if ((v5 & 0x1FFFFFFFCLL) == 4) {
      v7 = 0;
      v8 = 0;
    }
    else {
      v11 = (_DWORD*)(v2 + 4);
      v7 = 0;
      v8 = 0;
      do {
        v12 = *(_QWORD*)(v6 + 8LL * (*(v11 - 1) & 0xFFF));
        v13 = *(_BYTE**)(v12 + 864);
        if (v13 != nullptr && *v13 != 0) {
          ++v8;
        }
        else {
          v14 = *(_BYTE**)(v12 + 872);
          if (v14 != nullptr && *v14 != 0) {
            ++v8;
          }
        }
        v15 = *(_QWORD*)(v6 + 8LL * (*v11 & 0xFFF));
        v16 = *(_BYTE**)(v15 + 864);
        if (v16 != nullptr && *v16 != 0) {
          ++v8;
        }
        else {
          v17 = *(_BYTE**)(v15 + 872);
          if (v17 != nullptr && *v17 != 0) {
            ++v8;
          }
        }
        v7 += 2;
        v11 += 2;
      } while (((v5 >> 2) & 0x7FFFFFFE) != v7);
    }
    if ((v5 & 4) != 0) {
      v9 = *(_QWORD*)(v6 + 8LL * (*(_DWORD*)(v2 + 4 * v7) & 0xFFF));
      v10 = *(_BYTE**)(v9 + 864);
      if (v10 != nullptr && *v10 != 0) {
        ++v8;
      }
      else {
        v18 = *(_BYTE**)(v9 + 872);
        if (v18 != nullptr && *v18 != 0) {
          ++v8;
        }
      }
    }
  }
  v19 = GameRoutine_851060(a1 + 1360, a2);
  if ((v19 & 1) != 0) {
    game_Unit_Unknown6cd8f0(a1);
  }
  v20 = *(_QWORD*)(a1 + 1776);
  v21 = *(_QWORD*)(a1 + 1784) - v20;
  if ((int)(v21 >> 2) < 1) {
    v24 = 0;
  }
  else {
    v22 = *(_QWORD*)(*v4 + 64);
    if ((v21 & 0x1FFFFFFFCLL) == 4) {
      v23 = 0;
      v24 = 0;
    }
    else {
      v27 = (_DWORD*)(v20 + 4);
      v23 = 0;
      v24 = 0;
      do {
        v28 = *(_QWORD*)(v22 + 8LL * (*(v27 - 1) & 0xFFF));
        v29 = *(_BYTE**)(v28 + 864);
        if (v29 != nullptr && *v29 != 0) {
          ++v24;
        }
        else {
          v30 = *(_BYTE**)(v28 + 872);
          if (v30 != nullptr && *v30 != 0) {
            ++v24;
          }
        }
        v31 = *(_QWORD*)(v22 + 8LL * (*v27 & 0xFFF));
        v32 = *(_BYTE**)(v31 + 864);
        if (v32 != nullptr && *v32 != 0) {
          ++v24;
        }
        else {
          v33 = *(_BYTE**)(v31 + 872);
          if (v33 != nullptr && *v33 != 0) {
            ++v24;
          }
        }
        v23 += 2;
        v27 += 2;
      } while (((v21 >> 2) & 0x7FFFFFFE) != v23);
    }
    if ((v21 & 4) != 0) {
      v25 = *(_QWORD*)(v22 + 8LL * (*(_DWORD*)(v20 + 4 * v23) & 0xFFF));
      v26 = *(_BYTE**)(v25 + 864);
      if (v26 != nullptr && *v26 != 0) {
        ++v24;
      }
      else {
        v34 = *(_BYTE**)(v25 + 872);
        if (v34 != nullptr && *v34 != 0) {
          ++v24;
        }
      }
    }
  }
  if (v24 != v8) {
    *(_WORD*)(a1 + 20) |= 0x44u;
  }
  return v19 & 1;
}

__int64 Unit_6cf460(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  _BYTE* v8;
  _DWORD* v9;
  __int64 v10;
  _BYTE* v11;
  _BYTE* v12;
  __int64 v13;
  _BYTE* v14;
  _BYTE* v15;
  _BYTE* v16;
  __int64 result;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  _BYTE* v24;
  _DWORD* v25;
  __int64 v26;
  _BYTE* v27;
  _BYTE* v28;
  __int64 v29;
  _BYTE* v30;
  _BYTE* v31;
  _BYTE* v32;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca2d0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21ca2d0) != 0) {
    GameData_21ca2c8 = 1022;
    __cxa_guard_release(&GameData_21ca2d0);
  }
  v2 = *(_QWORD*)(a1 + 1776);
  v3 = *(_QWORD*)(a1 + 1784) - v2;
  if ((int)(v3 >> 2) < 1) {
    v6 = 0;
  }
  else {
    v4 = *(_QWORD*)(GameData_21c99b0 + 64);
    if ((v3 & 0x1FFFFFFFCLL) == 4) {
      v5 = 0;
      v6 = 0;
    }
    else {
      v9 = (_DWORD*)(v2 + 4);
      v5 = 0;
      v6 = 0;
      do {
        v10 = *(_QWORD*)(v4 + 8LL * (*(v9 - 1) & 0xFFF));
        v11 = *(_BYTE**)(v10 + 864);
        if (v11 != nullptr && *v11 != 0) {
          ++v6;
        }
        else {
          v12 = *(_BYTE**)(v10 + 872);
          if (v12 != nullptr && *v12 != 0) {
            ++v6;
          }
        }
        v13 = *(_QWORD*)(v4 + 8LL * (*v9 & 0xFFF));
        v14 = *(_BYTE**)(v13 + 864);
        if (v14 != nullptr && *v14 != 0) {
          ++v6;
        }
        else {
          v15 = *(_BYTE**)(v13 + 872);
          if (v15 != nullptr && *v15 != 0) {
            ++v6;
          }
        }
        v5 += 2;
        v9 += 2;
      } while (((v3 >> 2) & 0x7FFFFFFE) != v5);
    }
    if ((v3 & 4) != 0) {
      v7 = *(_QWORD*)(v4 + 8LL * (*(_DWORD*)(v2 + 4 * v5) & 0xFFF));
      v8 = *(_BYTE**)(v7 + 864);
      if (v8 != nullptr && *v8 != 0) {
        ++v6;
      }
      else {
        v16 = *(_BYTE**)(v7 + 872);
        if (v16 != nullptr && *v16 != 0) {
          ++v6;
        }
      }
    }
  }
  result = GameRoutine_851060(a1 + 1360, &GameData_21ca2c8);
  if ((result & 1) != 0) {
    result = game_Unit_Unknown6cd8f0(a1);
  }
  v18 = *(_QWORD*)(a1 + 1776);
  v19 = *(_QWORD*)(a1 + 1784) - v18;
  if ((int)(v19 >> 2) < 1) {
    v22 = 0;
  }
  else {
    v20 = *(_QWORD*)(GameData_21c99b0 + 64);
    if ((v19 & 0x1FFFFFFFCLL) == 4) {
      v21 = 0;
      v22 = 0;
    }
    else {
      v25 = (_DWORD*)(v18 + 4);
      v21 = 0;
      v22 = 0;
      do {
        v26 = *(_QWORD*)(v20 + 8LL * (*(v25 - 1) & 0xFFF));
        v27 = *(_BYTE**)(v26 + 864);
        if (v27 != nullptr && *v27 != 0) {
          ++v22;
        }
        else {
          v28 = *(_BYTE**)(v26 + 872);
          if (v28 != nullptr && *v28 != 0) {
            ++v22;
          }
        }
        v29 = *(_QWORD*)(v20 + 8LL * (*v25 & 0xFFF));
        v30 = *(_BYTE**)(v29 + 864);
        if (v30 != nullptr && *v30 != 0) {
          ++v22;
        }
        else {
          v31 = *(_BYTE**)(v29 + 872);
          if (v31 != nullptr && *v31 != 0) {
            ++v22;
          }
        }
        v21 += 2;
        v25 += 2;
      } while (((v19 >> 2) & 0x7FFFFFFE) != v21);
    }
    if ((v19 & 4) != 0) {
      v23 = *(_QWORD*)(v20 + 8LL * (*(_DWORD*)(v18 + 4 * v21) & 0xFFF));
      v24 = *(_BYTE**)(v23 + 864);
      if (v24 != nullptr && *v24 != 0) {
        ++v22;
      }
      else {
        v32 = *(_BYTE**)(v23 + 872);
        if (v32 != nullptr && *v32 != 0) {
          ++v22;
        }
      }
    }
  }
  if (v22 != v6) {
    *(_WORD*)(a1 + 20) |= 0x44u;
  }
  return result;
}

__int64 Unit_6cf740(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  _BYTE* v8;
  _DWORD* v9;
  __int64 v10;
  _BYTE* v11;
  _BYTE* v12;
  __int64 v13;
  _BYTE* v14;
  _BYTE* v15;
  _BYTE* v16;
  __int64 result;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  _BYTE* v24;
  _DWORD* v25;
  __int64 v26;
  _BYTE* v27;
  _BYTE* v28;
  __int64 v29;
  _BYTE* v30;
  _BYTE* v31;
  _BYTE* v32;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca2e0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21ca2e0) != 0) {
    GameData_21ca2d8 = 2046;
    __cxa_guard_release(&GameData_21ca2e0);
  }
  v2 = *(_QWORD*)(a1 + 1776);
  v3 = *(_QWORD*)(a1 + 1784) - v2;
  if ((int)(v3 >> 2) < 1) {
    v6 = 0;
  }
  else {
    v4 = *(_QWORD*)(GameData_21c99b0 + 64);
    if ((v3 & 0x1FFFFFFFCLL) == 4) {
      v5 = 0;
      v6 = 0;
    }
    else {
      v9 = (_DWORD*)(v2 + 4);
      v5 = 0;
      v6 = 0;
      do {
        v10 = *(_QWORD*)(v4 + 8LL * (*(v9 - 1) & 0xFFF));
        v11 = *(_BYTE**)(v10 + 864);
        if (v11 != nullptr && *v11 != 0) {
          ++v6;
        }
        else {
          v12 = *(_BYTE**)(v10 + 872);
          if (v12 != nullptr && *v12 != 0) {
            ++v6;
          }
        }
        v13 = *(_QWORD*)(v4 + 8LL * (*v9 & 0xFFF));
        v14 = *(_BYTE**)(v13 + 864);
        if (v14 != nullptr && *v14 != 0) {
          ++v6;
        }
        else {
          v15 = *(_BYTE**)(v13 + 872);
          if (v15 != nullptr && *v15 != 0) {
            ++v6;
          }
        }
        v5 += 2;
        v9 += 2;
      } while (((v3 >> 2) & 0x7FFFFFFE) != v5);
    }
    if ((v3 & 4) != 0) {
      v7 = *(_QWORD*)(v4 + 8LL * (*(_DWORD*)(v2 + 4 * v5) & 0xFFF));
      v8 = *(_BYTE**)(v7 + 864);
      if (v8 != nullptr && *v8 != 0) {
        ++v6;
      }
      else {
        v16 = *(_BYTE**)(v7 + 872);
        if (v16 != nullptr && *v16 != 0) {
          ++v6;
        }
      }
    }
  }
  result = GameRoutine_851060(a1 + 1360, &GameData_21ca2d8);
  if ((result & 1) != 0) {
    result = game_Unit_Unknown6cd8f0(a1);
  }
  v18 = *(_QWORD*)(a1 + 1776);
  v19 = *(_QWORD*)(a1 + 1784) - v18;
  if ((int)(v19 >> 2) < 1) {
    v22 = 0;
  }
  else {
    v20 = *(_QWORD*)(GameData_21c99b0 + 64);
    if ((v19 & 0x1FFFFFFFCLL) == 4) {
      v21 = 0;
      v22 = 0;
    }
    else {
      v25 = (_DWORD*)(v18 + 4);
      v21 = 0;
      v22 = 0;
      do {
        v26 = *(_QWORD*)(v20 + 8LL * (*(v25 - 1) & 0xFFF));
        v27 = *(_BYTE**)(v26 + 864);
        if (v27 != nullptr && *v27 != 0) {
          ++v22;
        }
        else {
          v28 = *(_BYTE**)(v26 + 872);
          if (v28 != nullptr && *v28 != 0) {
            ++v22;
          }
        }
        v29 = *(_QWORD*)(v20 + 8LL * (*v25 & 0xFFF));
        v30 = *(_BYTE**)(v29 + 864);
        if (v30 != nullptr && *v30 != 0) {
          ++v22;
        }
        else {
          v31 = *(_BYTE**)(v29 + 872);
          if (v31 != nullptr && *v31 != 0) {
            ++v22;
          }
        }
        v21 += 2;
        v25 += 2;
      } while (((v19 >> 2) & 0x7FFFFFFE) != v21);
    }
    if ((v19 & 4) != 0) {
      v23 = *(_QWORD*)(v20 + 8LL * (*(_DWORD*)(v18 + 4 * v21) & 0xFFF));
      v24 = *(_BYTE**)(v23 + 864);
      if (v24 != nullptr && *v24 != 0) {
        ++v22;
      }
      else {
        v32 = *(_BYTE**)(v23 + 872);
        if (v32 != nullptr && *v32 != 0) {
          ++v22;
        }
      }
    }
  }
  if (v22 != v6) {
    *(_WORD*)(a1 + 20) |= 0x44u;
  }
  return result;
}

__int64 Unit_6cfa20(__int64 a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int* v7;
  unsigned int* v8;
  __int64* v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  char* v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  char* v23;
  int v24;
  int v25;
  int v27;
  __int64 result;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  bool v35;
  int v36;
  __int64 v37;
  int v38;
  char v39[4];
  char v40[4];
  char v41[4];

  game_Unit_SetPollution(a1, 0);
  v2 = *(unsigned __int8*)(a1 + 500);
  if (*(_BYTE*)(a1 + 500) != 0) {
    v3 = Unit_6c9ef0_alt1(a1);
    *(_BYTE*)(a1 + 500) = v3 & (v3 >> 31);
    if (v2 != (unsigned __int8)(v3 & (v3 >> 31))) {
      v4 = *(unsigned __int16*)(a1 + 492);
      v39[0] = 0;
      v5 = game_Unit_GetParam(a1, v39, 1);
      if (*(_WORD*)(a1 + 494) != 0 && v4 != *(unsigned __int16*)(a1 + 494)) {
        *(_WORD*)(a1 + 494) = 0;
      }
      if (v5 >= (__int16)v4) {
        v6 = (__int16)v4;
      }
      else {
        v6 = v5;
      }
      if ((v4 & 0x8000u) != 0) {
        v6 = 0;
      }
      if (v6 != *(__int16*)(a1 + 492)) {
        *(_WORD*)(a1 + 492) = v6;
      }
    }
  }
  Unit_6cb490_alt1(a1);
  v7 = *(unsigned int**)(a1 + 1488);
  v8 = *(unsigned int**)(a1 + 1496);
  v9 = GameData_212c880[0];
  while (v7 != v8) {
    v10 = *v7;
    if ((*v7 & 0x7F000) != 0 &&
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * (v10 & 0xFFF)) +
                  104LL) != 9) {
      *v7 = v10 & 0xFFF80FFF;
    }
    ++v7;
  }
  game_UnitItemList_ClearStockUses(a1 + 828);
  v11 = *(_DWORD*)(a1 + 1872);
  v12 = v11 & 0xFFF;
  if ((v11 & 0xFFF) == 0) {
    goto LABEL_53;
  }
  v13 = *(char**)(a1 + 608);
  v14 = *(char**)(a1 + 600);
  v15 = v13 - v14;
  if ((int)((unsigned __int64)(v13 - v14) >> 2) < 1) {
    v18 = 0;
    goto LABEL_48;
  }
  v16 = (v15 >> 2) & 7;
  if (((v15 >> 2) & 0x7FFFFFFF) - 1 < 7) {
    v17 = 0;
    v18 = 255;
    if (v16 == 0) {
      goto LABEL_48;
    }
    goto LABEL_44;
  }
  v19 = v14 + 18;
  v20 = 0;
  v21 = -8LL * ((v15 >> 5) & 0xFFFFFFF);
  v18 = 255;
  do {
    v20 -= 8;
    if (v18 >= *(v19 - 16)) {
      v18 = *(v19 - 16);
    }
    if (v18 >= *(v19 - 12)) {
      v18 = *(v19 - 12);
    }
    if (v18 >= *(v19 - 8)) {
      v18 = *(v19 - 8);
    }
    if (v18 >= *(v19 - 4)) {
      v18 = *(v19 - 4);
    }
    if (v18 >= *v19) {
      v18 = *v19;
    }
    if (v18 >= v19[4]) {
      v18 = v19[4];
    }
    if (v18 >= v19[8]) {
      v18 = v19[8];
    }
    v22 = v19[12];
    v19 += 32;
    if (v18 >= v22) {
      v18 = v22;
    }
  } while (v21 != v20);
  v17 = -v20;
  if (v16 != 0) {
  LABEL_44:
    v23 = &v14[4 * v17 + 2];
    do {
      v25 = *v23;
      v23 += 4;
      v24 = v25;
      if (v18 >= v25) {
        v18 = v24;
      }
      --v16;
    } while (v16 != 0);
  }
LABEL_48:
  if (v18 < *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8 * v12) +
                                273LL) &&
      v14 != v13) {
    do {
      if ((*(_DWORD*)(a1 + 1872) & 0xFFF) == 0) {
        goto LABEL_70;
      }
      v32 = *v14;
      v33 = v14[1];
      if ((v33 | v32) < 0 ||
          ((v34 = *(_DWORD*)(a1 + 592)) > v32 ? (v35 = v34 <= v33)
                                              : (v35 = true),
           v35)) {
        LOBYTE(v36) =
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                 8LL * (*(_DWORD*)(a1 + 1872) & 0xFFF)) +
                      273LL);
        if ((_BYTE)v36 == 0) {
          goto LABEL_69;
        }
        v37 = -1;
      }
      else {
        LODWORD(v37) = v32 + v34 * v33;
        if ((v37 & 0x80000000) != 0) {
          v38 = 0;
        }
        else {
          v38 = *(char*)(*(_QWORD*)(a1 + 600) + 4LL * (unsigned int)v37 + 2);
        }
        v36 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                             8LL * (*(_DWORD*)(a1 + 1872) &
                                                    0xFFF)) +
                                  273LL);
        if (v38 >= v36) {
          goto LABEL_69;
        }
        v37 = (int)v37;
      }
      *(_BYTE*)(*(_QWORD*)(a1 + 600) + 4 * v37 + 2) = v36;
    LABEL_69:
      *(_BYTE*)(a1 + 805) = 0;
    LABEL_70:
      v14 += 4;
    } while (v14 != v13);
  }
LABEL_53:
  v40[0] = 0;
  v27 = game_Unit_GetParam(a1, v40, 1);
  v41[0] = 0;
  result = game_Unit_GetParam(a1, v41, 1);
  v29 = *(unsigned __int16*)(a1 + 494);
  if (*(_WORD*)(a1 + 494) != 0 && v27 != *(__int16*)(a1 + 494)) {
    v29 = 0;
    *(_WORD*)(a1 + 494) = 0;
  }
  if ((int)result >= v27) {
    v30 = v27;
  }
  else {
    v30 = result;
  }
  if (v27 < 0) {
    v30 = 0;
  }
  if (v30 != *(__int16*)(a1 + 492)) {
    *(_WORD*)(a1 + 492) = v30;
  }
  if (v29 != 0) {
    *(_WORD*)(a1 + 494) = 0;
  }
  v31 = *(_DWORD*)(a1 + 416);
  *(_BYTE*)(a1 + 2093) = 0;
  if ((v31 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v31 | 0x10000000;
    GameRoutine_6c51e0_alt1(a1);
    GameRoutine_6c6da0_alt1(a1);
    result = GameRoutine_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  return result;
}

__int64 Unit_6cfde0(__int64 a1)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  _BYTE* v8;
  _DWORD* v9;
  __int64 v10;
  _BYTE* v11;
  _BYTE* v12;
  __int64 v13;
  _BYTE* v14;
  _BYTE* v15;
  _BYTE* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  _BYTE* v23;
  _DWORD* v24;
  __int64 v25;
  _BYTE* v26;
  _BYTE* v27;
  __int64 v28;
  _BYTE* v29;
  _BYTE* v30;
  _BYTE* v31;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21ca2c0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21ca2c0) != 0) {
    GameData_21ca2b8 = 1020;
    __cxa_guard_release(&GameData_21ca2c0);
  }
  v2 = *(_QWORD*)(a1 + 1776);
  v3 = *(_QWORD*)(a1 + 1784) - v2;
  if ((int)(v3 >> 2) < 1) {
    v6 = 0;
  }
  else {
    v4 = *(_QWORD*)(GameData_21c99b0 + 64);
    if ((v3 & 0x1FFFFFFFCLL) == 4) {
      v5 = 0;
      v6 = 0;
    }
    else {
      v9 = (_DWORD*)(v2 + 4);
      v5 = 0;
      v6 = 0;
      do {
        v10 = *(_QWORD*)(v4 + 8LL * (*(v9 - 1) & 0xFFF));
        v11 = *(_BYTE**)(v10 + 864);
        if (v11 != nullptr && *v11 != 0) {
          ++v6;
        }
        else {
          v12 = *(_BYTE**)(v10 + 872);
          if (v12 != nullptr && *v12 != 0) {
            ++v6;
          }
        }
        v13 = *(_QWORD*)(v4 + 8LL * (*v9 & 0xFFF));
        v14 = *(_BYTE**)(v13 + 864);
        if (v14 != nullptr && *v14 != 0) {
          ++v6;
        }
        else {
          v15 = *(_BYTE**)(v13 + 872);
          if (v15 != nullptr && *v15 != 0) {
            ++v6;
          }
        }
        v5 += 2;
        v9 += 2;
      } while (((v3 >> 2) & 0x7FFFFFFE) != v5);
    }
    if ((v3 & 4) != 0) {
      v7 = *(_QWORD*)(v4 + 8LL * (*(_DWORD*)(v2 + 4 * v5) & 0xFFF));
      v8 = *(_BYTE**)(v7 + 864);
      if (v8 != nullptr && *v8 != 0) {
        ++v6;
      }
      else {
        v16 = *(_BYTE**)(v7 + 872);
        if (v16 != nullptr && *v16 != 0) {
          ++v6;
        }
      }
    }
  }
  if ((GameRoutine_851060(a1 + 1360, &GameData_21ca2b8) & 1) != 0) {
    game_Unit_Unknown6cd8f0(a1);
  }
  v17 = *(_QWORD*)(a1 + 1776);
  v18 = *(_QWORD*)(a1 + 1784) - v17;
  if ((int)(v18 >> 2) < 1) {
    v21 = 0;
  }
  else {
    v19 = *(_QWORD*)(GameData_21c99b0 + 64);
    if ((v18 & 0x1FFFFFFFCLL) == 4) {
      v20 = 0;
      v21 = 0;
    }
    else {
      v24 = (_DWORD*)(v17 + 4);
      v20 = 0;
      v21 = 0;
      do {
        v25 = *(_QWORD*)(v19 + 8LL * (*(v24 - 1) & 0xFFF));
        v26 = *(_BYTE**)(v25 + 864);
        if (v26 != nullptr && *v26 != 0) {
          ++v21;
        }
        else {
          v27 = *(_BYTE**)(v25 + 872);
          if (v27 != nullptr && *v27 != 0) {
            ++v21;
          }
        }
        v28 = *(_QWORD*)(v19 + 8LL * (*v24 & 0xFFF));
        v29 = *(_BYTE**)(v28 + 864);
        if (v29 != nullptr && *v29 != 0) {
          ++v21;
        }
        else {
          v30 = *(_BYTE**)(v28 + 872);
          if (v30 != nullptr && *v30 != 0) {
            ++v21;
          }
        }
        v20 += 2;
        v24 += 2;
      } while (((v18 >> 2) & 0x7FFFFFFE) != v20);
    }
    if ((v18 & 4) != 0) {
      v22 = *(_QWORD*)(v19 + 8LL * (*(_DWORD*)(v17 + 4 * v20) & 0xFFF));
      v23 = *(_BYTE**)(v22 + 864);
      if (v23 != nullptr && *v23 != 0) {
        ++v21;
      }
      else {
        v31 = *(_BYTE**)(v22 + 872);
        if (v31 != nullptr && *v31 != 0) {
          ++v21;
        }
      }
    }
  }
  if (v21 != v6) {
    *(_WORD*)(a1 + 20) |= 0x44u;
  }
  return Unit_6cfa20(a1);
}

__int64 Unit_6d00c0(__int64 a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int* v7;
  unsigned int* v8;
  __int64* v9;
  unsigned int v10;
  int v11;
  __int64 v12;
  char* v13;
  char* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  int v22;
  char* v23;
  int v24;
  int v25;
  int v27;
  int v28;
  __int64 result;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  bool v35;
  int v36;
  __int64 v37;
  int v38;
  char v39[4];
  char v40[4];

  game_Unit_SetPollution(a1, 0);
  v2 = *(unsigned __int8*)(a1 + 500);
  if (*(_BYTE*)(a1 + 500) != 0) {
    v3 = Unit_6c9ef0_alt1(a1);
    *(_BYTE*)(a1 + 500) = v3 & (v3 >> 31);
    if (v2 != (unsigned __int8)(v3 & (v3 >> 31))) {
      v4 = *(unsigned __int16*)(a1 + 492);
      v39[0] = 0;
      v5 = game_Unit_GetParam(a1, v39, 1);
      if (*(_WORD*)(a1 + 494) != 0 && v4 != *(unsigned __int16*)(a1 + 494)) {
        *(_WORD*)(a1 + 494) = 0;
      }
      if (v5 >= (__int16)v4) {
        v6 = (__int16)v4;
      }
      else {
        v6 = v5;
      }
      if ((v4 & 0x8000u) != 0) {
        v6 = 0;
      }
      if (v6 != *(__int16*)(a1 + 492)) {
        *(_WORD*)(a1 + 492) = v6;
      }
    }
  }
  Unit_6cb490_alt1(a1);
  v7 = *(unsigned int**)(a1 + 1488);
  v8 = *(unsigned int**)(a1 + 1496);
  v9 = GameData_212c880[0];
  while (v7 != v8) {
    v10 = *v7;
    if ((*v7 & 0x7F000) != 0 &&
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8LL * (v10 & 0xFFF)) +
                  104LL) != 9) {
      *v7 = v10 & 0xFFF80FFF;
    }
    ++v7;
  }
  UnitItemList_710ea0(a1 + 828);
  v11 = *(_DWORD*)(a1 + 1872);
  v12 = v11 & 0xFFF;
  if ((v11 & 0xFFF) == 0) {
    goto LABEL_53;
  }
  v13 = *(char**)(a1 + 608);
  v14 = *(char**)(a1 + 600);
  v15 = v13 - v14;
  if ((int)((unsigned __int64)(v13 - v14) >> 2) < 1) {
    v18 = 0;
    goto LABEL_48;
  }
  v16 = (v15 >> 2) & 7;
  if (((v15 >> 2) & 0x7FFFFFFF) - 1 < 7) {
    v17 = 0;
    v18 = 255;
    if (v16 == 0) {
      goto LABEL_48;
    }
    goto LABEL_44;
  }
  v19 = v14 + 18;
  v20 = 0;
  v21 = -8LL * ((v15 >> 5) & 0xFFFFFFF);
  v18 = 255;
  do {
    v20 -= 8;
    if (v18 >= *(v19 - 16)) {
      v18 = *(v19 - 16);
    }
    if (v18 >= *(v19 - 12)) {
      v18 = *(v19 - 12);
    }
    if (v18 >= *(v19 - 8)) {
      v18 = *(v19 - 8);
    }
    if (v18 >= *(v19 - 4)) {
      v18 = *(v19 - 4);
    }
    if (v18 >= *v19) {
      v18 = *v19;
    }
    if (v18 >= v19[4]) {
      v18 = v19[4];
    }
    if (v18 >= v19[8]) {
      v18 = v19[8];
    }
    v22 = v19[12];
    v19 += 32;
    if (v18 >= v22) {
      v18 = v22;
    }
  } while (v21 != v20);
  v17 = -v20;
  if (v16 != 0) {
  LABEL_44:
    v23 = &v14[4 * v17 + 2];
    do {
      v25 = *v23;
      v23 += 4;
      v24 = v25;
      if (v18 >= v25) {
        v18 = v24;
      }
      --v16;
    } while (v16 != 0);
  }
LABEL_48:
  if (v18 < *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) + 8 * v12) +
                                273LL) &&
      v14 != v13) {
    do {
      if ((*(_DWORD*)(a1 + 1872) & 0xFFF) == 0) {
        goto LABEL_69;
      }
      v32 = *v14;
      v33 = v14[1];
      if ((v33 | v32) < 0 ||
          ((v34 = *(_DWORD*)(a1 + 592)) > v32 ? (v35 = v34 <= v33)
                                              : (v35 = true),
           v35)) {
        LOBYTE(v36) =
            *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                 8LL * (*(_DWORD*)(a1 + 1872) & 0xFFF)) +
                      273LL);
        if ((_BYTE)v36 == 0) {
          goto LABEL_68;
        }
        v37 = -1;
      }
      else {
        LODWORD(v37) = v32 + v34 * v33;
        if ((v37 & 0x80000000) != 0) {
          v38 = 0;
        }
        else {
          v38 = *(char*)(*(_QWORD*)(a1 + 600) + 4LL * (unsigned int)v37 + 2);
        }
        v36 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v9 + 64) +
                                             8LL * (*(_DWORD*)(a1 + 1872) &
                                                    0xFFF)) +
                                  273LL);
        if (v38 >= v36) {
          goto LABEL_68;
        }
        v37 = (int)v37;
      }
      *(_BYTE*)(*(_QWORD*)(a1 + 600) + 4 * v37 + 2) = v36;
    LABEL_68:
      *(_BYTE*)(a1 + 805) = 0;
    LABEL_69:
      v14 += 4;
    } while (v14 != v13);
  }
LABEL_53:
  v27 = *(__int16*)(a1 + 492);
  v40[0] = 0;
  if (v27 <= 1) {
    v28 = 1;
  }
  else {
    v28 = v27;
  }
  result = game_Unit_GetParam(a1, v40, 1);
  if (*(_WORD*)(a1 + 494) != 0 &&
      *(unsigned __int16*)(a1 + 494) != (unsigned __int16)v28) {
    *(_WORD*)(a1 + 494) = 0;
  }
  if ((int)result >= v28) {
    v30 = v28;
  }
  else {
    v30 = result;
  }
  if (v30 != *(__int16*)(a1 + 492)) {
    *(_WORD*)(a1 + 492) = v30;
  }
  v31 = *(_DWORD*)(a1 + 416);
  if ((v31 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v31 | 0x10000000;
    GameRoutine_6c51e0_alt1(a1);
    GameRoutine_6c6da0_alt1(a1);
    result = GameRoutine_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  return result;
}

bool Unit_6d0400(__int64 a1)
{
  _DWORD* v1;
  _DWORD* v2;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  char* v15;
  int v16;
  int v17;
  int v18;
  char v19;

  if ((*(unsigned __int8*)(a1 + 499) | *(unsigned __int8*)(a1 + 500)) != 0) {
    return true;
  }
  v1 = *(_DWORD**)(a1 + 1488);
  v2 = *(_DWORD**)(a1 + 1496);
  if (v1 != v2) {
    while ((*v1 & 0x7F000) == 0 ||
           *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                8 * (*v1 & 0xFFFLL)) +
                     104LL) == 9) {
      if (++v1 == v2) {
        goto LABEL_9;
      }
    }
    return true;
  }
LABEL_9:
  if ((game_UnitItemList_HasStockUses(a1 + 828) & 1) != 0) {
    return true;
  }
  v5 = a1;
  if ((*(_DWORD*)(a1 + 1872) & 0xFFF) != 0) {
    v6 = *(_QWORD*)(a1 + 600);
    v7 = *(_QWORD*)(a1 + 608) - v6;
    if ((int)(v7 >> 2) < 1) {
      v10 = 0;
    }
    else {
      v8 = (v7 >> 2) & 7;
      if (((v7 >> 2) & 0x7FFFFFFF) - 1 >= 7) {
        v11 = (char*)(v6 + 18);
        v12 = 0;
        v13 = -8LL * ((v7 >> 5) & 0xFFFFFFF);
        v10 = 255;
        do {
          v12 -= 8;
          if (v10 >= *(v11 - 16)) {
            v10 = *(v11 - 16);
          }
          if (v10 >= *(v11 - 12)) {
            v10 = *(v11 - 12);
          }
          if (v10 >= *(v11 - 8)) {
            v10 = *(v11 - 8);
          }
          if (v10 >= *(v11 - 4)) {
            v10 = *(v11 - 4);
          }
          if (v10 >= *v11) {
            v10 = *v11;
          }
          if (v10 >= v11[4]) {
            v10 = v11[4];
          }
          if (v10 >= v11[8]) {
            v10 = v11[8];
          }
          v14 = v11[12];
          v11 += 32;
          if (v10 >= v14) {
            v10 = v14;
          }
        } while (v13 != v12);
        v9 = -v12;
      }
      else {
        v9 = 0;
        v10 = 255;
      }
      if (v8 != 0) {
        v15 = (char*)(v6 + 4 * v9 + 2);
        do {
          v17 = *v15;
          v15 += 4;
          v16 = v17;
          if (v10 >= v17) {
            v10 = v16;
          }
          --v8;
        } while (v8 != 0);
      }
    }
    if (v10 <
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                                       8LL * (*(_DWORD*)(a1 + 1872) & 0xFFF)) +
                            273LL)) {
      return true;
    }
  }
  v18 = *(__int16*)(a1 + 492);
  v19 = 0;
  return (int)game_Unit_GetParam(v5, &v19, 1) > v18;
}

__int64 Unit_6d0700(__int64 result, _DWORD* a2, char a3)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  int* v21;
  __int64 v22;
  int v23;
  __int64 v24;
  int v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  unsigned int v34;
  unsigned int v35;

  if ((*a2 & 0xFFF) != 0) {
    v3 = *(_QWORD*)(GameData_21c99b0 + 64);
    v4 = *(_QWORD*)(*(_QWORD*)(v3 + 8 * (*a2 & 0xFFFLL)) + 24LL);
    v35 = *(_DWORD*)(v4 + 8);
    if ((v35 & 0xFFF) != 0) {
      v34 = *(_DWORD*)(v4 + 12);
      if ((v34 & 0xFFF) != 0) {
        v5 = *(unsigned int*)(*(_QWORD*)(*(_QWORD*)(v3 + 8LL * (v35 & 0xFFF)) +
                                         24LL) +
                              8LL);
        if ((v5 & 0xFFF) != 0 &&
            (v6 = *(_QWORD*)(result + 1552),
             ((v5 >> 5) & 0x7F) + 1 <= (*(_QWORD*)(result + 1560) - v6) >> 2)) {
          if ((a3 & 1) ==
              ((*(_DWORD*)(v6 + 4 * ((v5 >> 5) & 0x7F)) >> v5) & 1)) {
            return result;
          }
          if ((a3 & 1) == 0) {
            v7 = result;
            UnitSkillList_84d7e0(result + 1552, &v35);
            game_Unit_SkillList_Replace(v7 + 1168, &v34, &v35);
            goto LABEL_26;
          }
        }
        else if ((a3 & 1) == 0) {
          return result;
        }
        v7 = result;
        v8 = UnitSkillList_84cc00(result + 1552, &v35, 1);
        v9 = v7;
        if ((v8 & 1) != 0) {
          v10 = *(_QWORD*)(v7 + 1592);
          v11 = *(_QWORD*)(v7 + 1584);
          *(_QWORD*)(v7 + 1640) = 0;
          v12 = v10 - v11;
          *(_QWORD*)(v7 + 1632) = 0;
          if ((int)((unsigned __int64)(v10 - v11) >> 2) >= 1) {
            v13 = GameData_21c99b0;
            v14 = (int)(v12 >> 2);
            if (v14 <= 1) {
              v15 = 1;
            }
            else {
              v15 = (int)(v12 >> 2);
            }
            if (v14 >= 2) {
              v21 = (int*)(v11 + 4);
              v16 = 0;
              v17 = 0;
              v18 = 0;
              v19 = 0;
              v20 = 0;
              do {
                v20 += 2;
                v22 = *(_QWORD*)(*(_QWORD*)(v13 + 64) +
                                 8LL * (*(v21 - 1) & 0xFFF));
                v23 = v19 | (1 << *(_BYTE*)(v22 + 104));
                *(_WORD*)(v7 + 1632) = v23;
                v24 = (1LL << *(_BYTE*)(v22 + 250)) | v18;
                *(_QWORD*)(v7 + 1640) = v24;
                v25 = (1 << *(_BYTE*)(v22 + 115)) | v17;
                *(_DWORD*)(v7 + 1636) = v25;
                v26 = *(unsigned __int16*)(*(_QWORD*)(v22 + 24) + 1064LL) | v16;
                *(_WORD*)(v7 + 1634) = v26;
                v27 = *v21;
                v21 += 2;
                v28 = *(_QWORD*)(*(_QWORD*)(v13 + 64) + 8LL * (v27 & 0xFFF));
                v19 = v23 | (1 << *(_BYTE*)(v28 + 104));
                *(_WORD*)(v7 + 1632) = v19;
                v18 = (1LL << *(_BYTE*)(v28 + 250)) | v24;
                *(_QWORD*)(v7 + 1640) = v18;
                v17 = (1 << *(_BYTE*)(v28 + 115)) | v25;
                *(_DWORD*)(v7 + 1636) = v17;
                v16 = *(unsigned __int16*)(*(_QWORD*)(v28 + 24) + 1064LL) | v26;
                *(_WORD*)(v7 + 1634) = v16;
              } while ((v15 & 0x7FFFFFFFFFFFFFFELL) != v20);
            }
            else {
              LOWORD(v16) = 0;
              v17 = 0;
              v18 = 0;
              LOWORD(v19) = 0;
              v20 = 0;
            }
            if ((v15 & 1) != 0) {
              v29 = *(_QWORD*)(*(_QWORD*)(v13 + 64) +
                               8LL * (*(_DWORD*)(v11 + 4 * v20) & 0xFFF));
              *(_WORD*)(v7 + 1632) = v19 | (1 << *(_BYTE*)(v29 + 104));
              *(_QWORD*)(v7 + 1640) = (1LL << *(_BYTE*)(v29 + 250)) | v18;
              *(_DWORD*)(v7 + 1636) = (1 << *(_BYTE*)(v29 + 115)) | v17;
              *(_WORD*)(v7 + 1634) =
                  *(_WORD*)(*(_QWORD*)(v29 + 24) + 1064LL) | v16;
            }
          }
        }
        v30 = *(_QWORD*)(v7 + 1168);
        v31 = ((unsigned __int64)v35 >> 5) & 0x7F;
        v32 = (*(_QWORD*)(v7 + 1176) - v30) >> 2;
        if (v32 < v31 + 1) {
          return game_Unit_Unknown6c4610(v9);
        }
        if (((*(_DWORD*)(v30 + 4LL * (unsigned int)v31) >> v35) & 1) == 0) {
          return game_Unit_Unknown6c4610(v9);
        }
        v33 = ((unsigned __int64)v34 >> 5) & 0x7F;
        if (v32 >= v33 + 1 &&
            ((*(_DWORD*)(v30 + 4LL * (unsigned int)v33) >> v34) & 1) != 0) {
          return game_Unit_Unknown6c4610(v9);
        }
        UnitSkillList_84dea0(v7 + 1168, &v35, &v34);
      LABEL_26:
        v9 = v7;
        return game_Unit_Unknown6c4610(v9);
      }
    }
  }
  return result;
}

__int64 Unit_6d09e0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  unsigned int v15;

  v4 = v13;
  v15 = 0;
  v13[0] = GameData_1f91668;
  v13[1] = a2;
  v14 = v13;
  v13[2] = &v15;
  if ((*(_BYTE*)(a1 + 1152) & 4) == 0) {
    goto LABEL_12;
  }
  v5 = *(_QWORD*)(a1 + 1112);
  v6 = *(_QWORD*)(a1 + 1104);
  if ((int)((unsigned __int64)(v5 - v6) >> 2) < 1) {
    v4 = v13;
  LABEL_12:
    v11 = 32;
    goto LABEL_13;
  }
  v7 = 0;
  v8 = 0;
  v9 = GameData_212c880[0];
  v10 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) +
                             8LL * (*(_DWORD*)(v6 + v7) & 0xFFF)) +
                  104LL) == 2) {
      if (v14 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_QWORD*, __int64))(*v14 + 48LL))(v14, v6 + v7);
      v10 = *v9;
      v5 = *(_QWORD*)(a1 + 1112);
      v6 = *(_QWORD*)(a1 + 1104);
    }
    ++v8;
    v7 += 4;
  } while (v8 < (int)((unsigned __int64)(v5 - v6) >> 2));
  v4 = v14;
  if (v14 == v13) {
    goto LABEL_12;
  }
  if (v14 != nullptr) {
    v11 = 40;
  LABEL_13:
    (*(void (**)(_QWORD*, __int64, __int64))(*v4 + v11))(v4, a2, a3);
  }
  return v15;
}

_QWORD* Unit_6d0b20(_QWORD* result, _DWORD* a2, char a3)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  _BYTE* v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  _BYTE* v22;
  _DWORD* v23;
  __int64 v24;
  _BYTE* v25;
  _BYTE* v26;
  __int64 v27;
  _BYTE* v28;
  _BYTE* v29;
  _BYTE* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  int v37;
  int v38;
  __int64 v39;
  int v40;
  __int64 v41;
  int* v42;
  __int64 v43;
  int v44;
  __int64 v45;
  int v46;
  int v47;
  int v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  __int64 v56;
  _BYTE* v57;
  _DWORD* v58;
  __int64 v59;
  _BYTE* v60;
  _BYTE* v61;
  __int64 v62;
  _BYTE* v63;
  _BYTE* v64;
  _BYTE* v65;
  __int16 v66;
  __int64 v67;
  int v68;
  _DWORD* v69;
  __int64 v70;
  _BYTE* v71;
  _BYTE* v72;
  __int64 v73;
  _BYTE* v74;
  _BYTE* v75;
  _BYTE* v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  int v83;
  int v84;
  __int64 v85;
  int v86;
  __int64 v87;
  int* v88;
  __int64 v89;
  int v90;
  __int64 v91;
  int v92;
  int v93;
  int v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  unsigned __int64 v98;
  __int64 v99;
  __int64 v100;
  int v101;
  __int64 v102;
  _BYTE* v103;
  _DWORD* v104;
  __int64 v105;
  _BYTE* v106;
  _BYTE* v107;
  __int64 v108;
  _BYTE* v109;
  _BYTE* v110;
  _BYTE* v111;
  int v112;
  int v113;
  int v114;

  v3 = GameData_212c880[0];
  v4 = *(_QWORD*)(*GameData_212c880[0] + 64);
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 8LL * (*a2 & 0xFFF)) + 24LL) +
                  1088LL);
  if (v5 != 0) {
    v6 = (__int64)result;
    v7 = *(_WORD*)(v5 + 16) & 0xFFF;
    v8 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v4 + 8 * v7) + 24LL) + 1088LL);
    if (v8 == 0) {
    LABEL_16:
      if ((a3 & 1) == 0) {
        return result;
      }
      v113 = *(_WORD*)(v5 + 16) & 0xFFF;
      if ((_DWORD)v7 != 0) {
        v17 = result[222];
        v18 = result[223] - v17;
        if ((int)(v18 >> 2) < 1) {
          v20 = 0;
        }
        else {
          if ((v18 & 0x1FFFFFFFCLL) == 4) {
            v19 = 0;
            v20 = 0;
          }
          else {
            v23 = (_DWORD*)(v17 + 4);
            v19 = 0;
            v20 = 0;
            do {
              v24 = *(_QWORD*)(v4 + 8LL * (*(v23 - 1) & 0xFFF));
              v25 = *(_BYTE**)(v24 + 864);
              if (v25 != nullptr && *v25 != 0) {
                ++v20;
              }
              else {
                v26 = *(_BYTE**)(v24 + 872);
                if (v26 != nullptr && *v26 != 0) {
                  ++v20;
                }
              }
              v27 = *(_QWORD*)(v4 + 8LL * (*v23 & 0xFFF));
              v28 = *(_BYTE**)(v27 + 864);
              if (v28 != nullptr && *v28 != 0) {
                ++v20;
              }
              else {
                v29 = *(_BYTE**)(v27 + 872);
                if (v29 != nullptr && *v29 != 0) {
                  ++v20;
                }
              }
              v19 += 2;
              v23 += 2;
            } while (((v18 >> 2) & 0x7FFFFFFE) != v19);
          }
          if ((v18 & 4) != 0) {
            v21 = *(_QWORD*)(v4 + 8LL * (*(_DWORD*)(v17 + 4 * v19) & 0xFFF));
            v22 = *(_BYTE**)(v21 + 864);
            if (v22 != nullptr && *v22 != 0) {
              ++v20;
            }
            else {
              v30 = *(_BYTE**)(v21 + 872);
              if (v30 != nullptr && *v30 != 0) {
                ++v20;
              }
            }
          }
        }
        if ((UnitSkillList_84cc00(result + 170, &v113, 1) & 1) != 0) {
          v31 = *(_QWORD*)(v6 + 1400);
          v32 = *(_QWORD*)(v6 + 1392);
          *(_QWORD*)(v6 + 1448) = 0;
          v33 = v31 - v32;
          *(_QWORD*)(v6 + 1440) = 0;
          if ((int)((unsigned __int64)(v31 - v32) >> 2) >= 1) {
            v34 = *v3;
            v35 = (int)(v33 >> 2);
            v36 = v35 <= 1 ? 1LL : (int)(v33 >> 2);
            if (v35 >= 2) {
              v42 = (int*)(v32 + 4);
              v37 = 0;
              v38 = 0;
              v39 = 0;
              v40 = 0;
              v41 = 0;
              do {
                v41 += 2;
                v43 = *(_QWORD*)(*(_QWORD*)(v34 + 64) +
                                 8LL * (*(v42 - 1) & 0xFFF));
                v44 = v40 | (1 << *(_BYTE*)(v43 + 104));
                *(_WORD*)(v6 + 1440) = v44;
                v45 = (1LL << *(_BYTE*)(v43 + 250)) | v39;
                *(_QWORD*)(v6 + 1448) = v45;
                v46 = (1 << *(_BYTE*)(v43 + 115)) | v38;
                *(_DWORD*)(v6 + 1444) = v46;
                v47 = *(unsigned __int16*)(*(_QWORD*)(v43 + 24) + 1064LL) | v37;
                *(_WORD*)(v6 + 1442) = v47;
                v48 = *v42;
                v42 += 2;
                v49 = *(_QWORD*)(*(_QWORD*)(v34 + 64) + 8LL * (v48 & 0xFFF));
                v40 = v44 | (1 << *(_BYTE*)(v49 + 104));
                *(_WORD*)(v6 + 1440) = v40;
                v39 = (1LL << *(_BYTE*)(v49 + 250)) | v45;
                *(_QWORD*)(v6 + 1448) = v39;
                v38 = (1 << *(_BYTE*)(v49 + 115)) | v46;
                *(_DWORD*)(v6 + 1444) = v38;
                v37 = *(unsigned __int16*)(*(_QWORD*)(v49 + 24) + 1064LL) | v47;
                *(_WORD*)(v6 + 1442) = v37;
              } while ((v36 & 0x7FFFFFFFFFFFFFFELL) != v41);
            }
            else {
              LOWORD(v37) = 0;
              v38 = 0;
              v39 = 0;
              LOWORD(v40) = 0;
              v41 = 0;
            }
            if ((v36 & 1) != 0) {
              v50 = *(_QWORD*)(*(_QWORD*)(v34 + 64) +
                               8LL * (*(_DWORD*)(v32 + 4 * v41) & 0xFFF));
              *(_WORD*)(v6 + 1440) = v40 | (1 << *(_BYTE*)(v50 + 104));
              *(_QWORD*)(v6 + 1448) = (1LL << *(_BYTE*)(v50 + 250)) | v39;
              *(_DWORD*)(v6 + 1444) = (1 << *(_BYTE*)(v50 + 115)) | v38;
              *(_WORD*)(v6 + 1442) =
                  *(_WORD*)(*(_QWORD*)(v50 + 24) + 1064LL) | v37;
            }
          }
          game_Unit_Unknown6cd8f0(v6);
        }
        v51 = *(_QWORD*)(v6 + 1776);
        v52 = *(_QWORD*)(v6 + 1784) - v51;
        if ((int)(v52 >> 2) < 1) {
          v55 = 0;
        }
        else {
          v53 = *(_QWORD*)(*v3 + 64);
          if ((v52 & 0x1FFFFFFFCLL) == 4) {
            v54 = 0;
            v55 = 0;
          }
          else {
            v58 = (_DWORD*)(v51 + 4);
            v54 = 0;
            v55 = 0;
            do {
              v59 = *(_QWORD*)(v53 + 8LL * (*(v58 - 1) & 0xFFF));
              v60 = *(_BYTE**)(v59 + 864);
              if (v60 != nullptr && *v60 != 0) {
                ++v55;
              }
              else {
                v61 = *(_BYTE**)(v59 + 872);
                if (v61 != nullptr && *v61 != 0) {
                  ++v55;
                }
              }
              v62 = *(_QWORD*)(v53 + 8LL * (*v58 & 0xFFF));
              v63 = *(_BYTE**)(v62 + 864);
              if (v63 != nullptr && *v63 != 0) {
                ++v55;
              }
              else {
                v64 = *(_BYTE**)(v62 + 872);
                if (v64 != nullptr && *v64 != 0) {
                  ++v55;
                }
              }
              v54 += 2;
              v58 += 2;
            } while (((v52 >> 2) & 0x7FFFFFFE) != v54);
          }
          if ((v52 & 4) != 0) {
            v56 = *(_QWORD*)(v53 + 8LL * (*(_DWORD*)(v51 + 4 * v54) & 0xFFF));
            v57 = *(_BYTE**)(v56 + 864);
            if (v57 != nullptr && *v57 != 0) {
              ++v55;
            }
            else {
              v65 = *(_BYTE**)(v56 + 872);
              if (v65 != nullptr && *v65 != 0) {
                ++v55;
              }
            }
          }
        }
        if (v55 != v20) {
          *(_WORD*)(v6 + 20) |= 0x44u;
        }
      }
      v66 = *(_WORD*)(v5 + 16);
      v67 = v66 & 0xFFF;
      v114 = v66 & 0xFFF;
      if ((v66 & 0xFFF) != 0 &&
          (GameRoutine_6fcb20(*(_QWORD*)(*(_QWORD*)(*v3 + 64) + 8 * v67),
                              v6 + 1840) &
           1) != 0) {
        v68 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v3 + 64) +
                                             8LL * (unsigned int)v67) +
                                  104LL);
        if (v68 == 2) {
          Unit_6cc580(v6, &v114);
        }
        else if (v68 == 1) {
          Unit_6cc9e0(v6, &v114);
        }
      }
      return (_QWORD*)game_Unit_Unknown6c4610(v6);
    }
    v9 = result[134];
    while (1) {
      v10 = *(unsigned __int16*)(v8 + 16);
      if ((result[135] - v9) >> 2 >= ((v10 >> 5) & 0x7F) + 1 &&
          ((*(_DWORD*)(v9 + 4 * ((v10 >> 5) & 0x7F)) >> v10) & 1) != 0) {
        break;
      }
      v8 = *(_QWORD*)(*(_QWORD*)(v8 + 24) + 1080LL);
      if (v8 == 0) {
        goto LABEL_16;
      }
    }
    if ((a3 & 1) == 0) {
      v112 = *(_WORD*)(v5 + 16) & 0xFFF;
      if ((_DWORD)v7 != 0) {
        v11 = result[222];
        v12 = result[223] - v11;
        if ((int)(v12 >> 2) < 1) {
          v14 = 0;
        }
        else {
          if ((v12 & 0x1FFFFFFFCLL) == 4) {
            v13 = 0;
            v14 = 0;
          }
          else {
            v69 = (_DWORD*)(v11 + 4);
            v13 = 0;
            v14 = 0;
            do {
              v70 = *(_QWORD*)(v4 + 8LL * (*(v69 - 1) & 0xFFF));
              v71 = *(_BYTE**)(v70 + 864);
              if (v71 != nullptr && *v71 != 0) {
                ++v14;
              }
              else {
                v72 = *(_BYTE**)(v70 + 872);
                if (v72 != nullptr && *v72 != 0) {
                  ++v14;
                }
              }
              v73 = *(_QWORD*)(v4 + 8LL * (*v69 & 0xFFF));
              v74 = *(_BYTE**)(v73 + 864);
              if (v74 != nullptr && *v74 != 0) {
                ++v14;
              }
              else {
                v75 = *(_BYTE**)(v73 + 872);
                if (v75 != nullptr && *v75 != 0) {
                  ++v14;
                }
              }
              v13 += 2;
              v69 += 2;
            } while (((v12 >> 2) & 0x7FFFFFFE) != v13);
          }
          if ((v12 & 4) != 0) {
            v15 = *(_QWORD*)(v4 + 8LL * (*(_DWORD*)(v11 + 4 * v13) & 0xFFF));
            v16 = *(_BYTE**)(v15 + 864);
            if (v16 != nullptr && *v16 != 0) {
              ++v14;
            }
            else {
              v76 = *(_BYTE**)(v15 + 872);
              if (v76 != nullptr && *v76 != 0) {
                ++v14;
              }
            }
          }
        }
        if ((UnitSkillList_84d980(result + 170, &v112) & 1) != 0) {
          v77 = *(_QWORD*)(v6 + 1400);
          v78 = *(_QWORD*)(v6 + 1392);
          *(_QWORD*)(v6 + 1448) = 0;
          v79 = v77 - v78;
          *(_QWORD*)(v6 + 1440) = 0;
          if ((int)((unsigned __int64)(v77 - v78) >> 2) >= 1) {
            v80 = *v3;
            v81 = (int)(v79 >> 2);
            v82 = v81 <= 1 ? 1LL : (int)(v79 >> 2);
            if (v81 >= 2) {
              v88 = (int*)(v78 + 4);
              v83 = 0;
              v84 = 0;
              v85 = 0;
              v86 = 0;
              v87 = 0;
              do {
                v87 += 2;
                v89 = *(_QWORD*)(*(_QWORD*)(v80 + 64) +
                                 8LL * (*(v88 - 1) & 0xFFF));
                v90 = v86 | (1 << *(_BYTE*)(v89 + 104));
                *(_WORD*)(v6 + 1440) = v90;
                v91 = (1LL << *(_BYTE*)(v89 + 250)) | v85;
                *(_QWORD*)(v6 + 1448) = v91;
                v92 = (1 << *(_BYTE*)(v89 + 115)) | v84;
                *(_DWORD*)(v6 + 1444) = v92;
                v93 = *(unsigned __int16*)(*(_QWORD*)(v89 + 24) + 1064LL) | v83;
                *(_WORD*)(v6 + 1442) = v93;
                v94 = *v88;
                v88 += 2;
                v95 = *(_QWORD*)(*(_QWORD*)(v80 + 64) + 8LL * (v94 & 0xFFF));
                v86 = v90 | (1 << *(_BYTE*)(v95 + 104));
                *(_WORD*)(v6 + 1440) = v86;
                v85 = (1LL << *(_BYTE*)(v95 + 250)) | v91;
                *(_QWORD*)(v6 + 1448) = v85;
                v84 = (1 << *(_BYTE*)(v95 + 115)) | v92;
                *(_DWORD*)(v6 + 1444) = v84;
                v83 = *(unsigned __int16*)(*(_QWORD*)(v95 + 24) + 1064LL) | v93;
                *(_WORD*)(v6 + 1442) = v83;
              } while ((v82 & 0x7FFFFFFFFFFFFFFELL) != v87);
            }
            else {
              LOWORD(v83) = 0;
              v84 = 0;
              v85 = 0;
              LOWORD(v86) = 0;
              v87 = 0;
            }
            if ((v82 & 1) != 0) {
              v96 = *(_QWORD*)(*(_QWORD*)(v80 + 64) +
                               8LL * (*(_DWORD*)(v78 + 4 * v87) & 0xFFF));
              *(_WORD*)(v6 + 1440) = v86 | (1 << *(_BYTE*)(v96 + 104));
              *(_QWORD*)(v6 + 1448) = (1LL << *(_BYTE*)(v96 + 250)) | v85;
              *(_DWORD*)(v6 + 1444) = (1 << *(_BYTE*)(v96 + 115)) | v84;
              *(_WORD*)(v6 + 1442) =
                  *(_WORD*)(*(_QWORD*)(v96 + 24) + 1064LL) | v83;
            }
          }
          game_Unit_Unknown6cd8f0(v6);
        }
        v97 = *(_QWORD*)(v6 + 1776);
        v98 = *(_QWORD*)(v6 + 1784) - v97;
        if ((int)(v98 >> 2) < 1) {
          v101 = 0;
        }
        else {
          v99 = *(_QWORD*)(*v3 + 64);
          if ((v98 & 0x1FFFFFFFCLL) == 4) {
            v100 = 0;
            v101 = 0;
          }
          else {
            v104 = (_DWORD*)(v97 + 4);
            v100 = 0;
            v101 = 0;
            do {
              v105 = *(_QWORD*)(v99 + 8LL * (*(v104 - 1) & 0xFFF));
              v106 = *(_BYTE**)(v105 + 864);
              if (v106 != nullptr && *v106 != 0) {
                ++v101;
              }
              else {
                v107 = *(_BYTE**)(v105 + 872);
                if (v107 != nullptr && *v107 != 0) {
                  ++v101;
                }
              }
              v108 = *(_QWORD*)(v99 + 8LL * (*v104 & 0xFFF));
              v109 = *(_BYTE**)(v108 + 864);
              if (v109 != nullptr && *v109 != 0) {
                ++v101;
              }
              else {
                v110 = *(_BYTE**)(v108 + 872);
                if (v110 != nullptr && *v110 != 0) {
                  ++v101;
                }
              }
              v100 += 2;
              v104 += 2;
            } while (((v98 >> 2) & 0x7FFFFFFE) != v100);
          }
          if ((v98 & 4) != 0) {
            v102 = *(_QWORD*)(v99 + 8LL * (*(_DWORD*)(v97 + 4 * v100) & 0xFFF));
            v103 = *(_BYTE**)(v102 + 864);
            if (v103 != nullptr && *v103 != 0) {
              ++v101;
            }
            else {
              v111 = *(_BYTE**)(v102 + 872);
              if (v111 != nullptr && *v111 != 0) {
                ++v101;
              }
            }
          }
        }
        if (v101 != v14) {
          *(_WORD*)(v6 + 20) |= 0x44u;
        }
      }
      return (_QWORD*)game_Unit_Unknown6c4610(v6);
    }
  }
  return result;
}

__int64 game_Unit_EachEducateTargetSkill(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  unsigned int v15;

  v4 = v13;
  v15 = 0;
  v13[0] = GameData_1f916e8;
  v13[1] = a2;
  v14 = v13;
  v13[2] = &v15;
  if ((*(_BYTE*)(a1 + 1152) & 4) == 0) {
    goto LABEL_12;
  }
  v5 = *(_QWORD*)(a1 + 1112);
  v6 = *(_QWORD*)(a1 + 1104);
  if ((int)((unsigned __int64)(v5 - v6) >> 2) < 1) {
    v4 = v13;
  LABEL_12:
    v11 = 32;
    goto LABEL_13;
  }
  v7 = 0;
  v8 = 0;
  v9 = GameData_212c880[0];
  v10 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v10 + 64) +
                             8LL * (*(_DWORD*)(v6 + v7) & 0xFFF)) +
                  104LL) == 2) {
      if (v14 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_QWORD*, __int64))(*v14 + 48LL))(v14, v6 + v7);
      v10 = *v9;
      v5 = *(_QWORD*)(a1 + 1112);
      v6 = *(_QWORD*)(a1 + 1104);
    }
    ++v8;
    v7 += 4;
  } while (v8 < (int)((unsigned __int64)(v5 - v6) >> 2));
  v4 = v14;
  if (v14 == v13) {
    goto LABEL_12;
  }
  if (v14 != nullptr) {
    v11 = 40;
  LABEL_13:
    (*(void (**)(_QWORD*, __int64, __int64))(*v4 + v11))(v4, a2, a3);
  }
  return v15;
}

__int64 Unit_6d8180(__int64 a1, __int64 a2, int a3)
{
  int v4;
  int v5;
  __int64 v6;
  int v7;
  int v8;
  __int64 result;
  int v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD v20[2];
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  int v30;
  __int64 v31;
  int v32;
  char v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  v20[0] = a2;
  v20[1] = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v31 = 0x3F80000000000000LL;
  if (game_GameModeData_instance_ != 0) {
    v4 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  }
  else {
    v4 = 0;
  }
  v32 = v4;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v34 = 262;
  if (a3 != 0) {
    goto LABEL_18;
  }
  if (game_GameModeData_instance_ == 0) {
    v5 = 0;
    a3 = *(unsigned __int8*)(a2 + 442);
    if (*(_BYTE*)(a2 + 442) != 0) {
      goto LABEL_18;
    }
    goto LABEL_11;
  }
  v5 = *(_DWORD*)(game_GameModeData_instance_ + 68);
  v6 = *(_QWORD*)(game_GameModeData_instance_ + 16);
  if (v6 != 0) {
    v5 += *(char*)(v6 + 128);
  }
  a3 = *(unsigned __int8*)(a2 + 442);
  if (*(_BYTE*)(a2 + 442) == 0) {
  LABEL_11:
    if (*(_BYTE*)(a2 + 443) != 0) {
      v7 = v5 + *(char*)(a2 + 443);
      if (v7 <= 1) {
        v7 = 1;
      }
      if (v7 >= 99) {
        a3 = 99;
      }
      else {
        a3 = v7;
      }
    }
    else {
      a3 = v5;
    }
  }
LABEL_18:
  v8 = *(unsigned __int8*)(a2 + 444);
  if (a3 > v8) {
    v8 = a3;
  }
  v30 = v8;
  v33 = 1;
  GameRoutine_6e4de0(v20);
  GameRoutine_6e50e0(v20);
  GameRoutine_6e5480(v20);
  GameRoutine_6c3050(a1);
  GameRoutine_6d1740(a1, v20);
  result = game_Unit_Unknown6d2380(a1);
  v10 = *(_DWORD*)(a1 + 416);
  if ((v10 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v10 | 0x10000000;
    GameRoutine_6c51e0(a1);
    GameRoutine_6c6da0_alt1(a1);
    result = GameRoutine_6c6ec0_alt1(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  v11 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v35 != 0) {
    v12 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v36 = v35;
    v13 = 128;
    if (*(_QWORD*)(v12 + 200) == 0) {
      v13 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v12 + v13, v35);
  }
  if (v27 != 0) {
    v14 = *v11;
    v28 = v27;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v14 + v15, v27);
  }
  if (v24 != 0) {
    v16 = *v11;
    v25 = v24;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v16 + v17, v24);
  }
  if (v21 != 0) {
    v18 = *v11;
    v22 = v21;
    v19 = 128;
    if (*(_QWORD*)(v18 + 200) == 0) {
      v19 = 56;
    }
    return nn_mem_StandardAllocator_Free(v18 + v19, v21);
  }
  return result;
}

__int64 Unit_6d8390(__int64 a1, __int64 a2, int a3)
{
  int v5;
  int v6;
  __int64 v7;
  int v8;
  unsigned int v9;
  char v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64 v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 result;
  int v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33[2];
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned int v43;
  int v44;
  int v45;
  int v46;
  char v47;
  char v48;
  __int16 v49;
  char v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  void* v57;
  __int64 v58;
  __int64 v59;

  if (a3 == 0) {
    a3 = GameRoutine_7152e0();
  }
  v33[0] = a2;
  v33[1] = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v45 = 1065353216;
  if (game_GameModeData_instance_ != 0) {
    v5 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  }
  else {
    v5 = 0;
  }
  v46 = v5;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v49 = 1;
  if (a3 == 0) {
    if (game_GameModeData_instance_ == 0) {
      v6 = 0;
      a3 = *(unsigned __int8*)(a2 + 442);
      if (*(_BYTE*)(a2 + 442) != 0) {
        goto LABEL_20;
      }
      goto LABEL_13;
    }
    v6 = *(_DWORD*)(game_GameModeData_instance_ + 68);
    v7 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    if (v7 != 0) {
      v6 += *(char*)(v7 + 128);
    }
    a3 = *(unsigned __int8*)(a2 + 442);
    if (*(_BYTE*)(a2 + 442) == 0) {
    LABEL_13:
      if (*(_BYTE*)(a2 + 443) != 0) {
        v8 = v6 + *(char*)(a2 + 443);
        if (v8 <= 1) {
          v8 = 1;
        }
        if (v8 >= 99) {
          a3 = 99;
        }
        else {
          a3 = v8;
        }
      }
      else {
        a3 = v6;
      }
    }
  }
LABEL_20:
  if (a3 <= *(unsigned __int8*)(a2 + 444)) {
    v9 = *(unsigned __int8*)(a2 + 444);
  }
  else {
    v9 = a3;
  }
  v43 = v9;
  if (game_GameModeData_instance_ != 0) {
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 1) {
      v10 = 2;
    }
    else {
      v10 = 3;
    }
  }
  else {
    v10 = 3;
  }
  v11 = *(_QWORD*)(a2 + 304);
  v48 = v10;
  v47 = 2;
  v57 = &GameData_1ad27ed;
  v12 = game_HashString(&GameData_1ad27ed);
  v13 = game_GameModeData_instance_;
  v56 = v12;
  if (game_GameModeData_instance_ != 0) {
    v14 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v56);
    if (v14 != 0) {
      v13 = *(_DWORD*)(v14 + 32);
    }
    else {
      v13 = 0;
    }
  }
  v44 = v13;
  v57 = &GameData_1ae1c3a;
  v15 = 0.0f;
  v56 = game_HashString(&GameData_1ae1c3a);
  if (game_GameModeData_instance_ != 0) {
    v16 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &v56);
    if (v16 != 0) {
      v15 = (float)*(int*)(v16 + 32) * 0.01f;
    }
  }
  v45 = LODWORD(v15);
  v59 = v11;
  *(struct PseudoSret*)(&v56) = GameRoutine_127cec0(&v59, v9);
  v53 = v58;
  v51 = v56;
  v52 = (__int64)v57;
  HIBYTE(v49) = 1;
  GameRoutine_6e4de0(v33);
  GameRoutine_6e50e0(v33);
  GameRoutine_6e5480(v33);
  GameRoutine_6c3050_alt1(a1, v17, v18, v19, v20, v21);
  GameRoutine_6d1740_alt1(a1, v33);
  result = game_Unit_Unknown6d2380(a1);
  v23 = *(_DWORD*)(a1 + 416);
  if ((v23 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v23 | 0x10000000;
    GameRoutine_6c51e0_alt1(a1);
    GameRoutine_6c6da0_alt1(a1);
    result = GameRoutine_6c6ec0(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  v24 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v51 != 0) {
    v25 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v52 = v51;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v25 + v26, v51);
  }
  if (v40 != 0) {
    v27 = *v24;
    v41 = v40;
    v28 = 128;
    if (*(_QWORD*)(v27 + 200) == 0) {
      v28 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v27 + v28, v40);
  }
  if (v37 != 0) {
    v29 = *v24;
    v38 = v37;
    v30 = 128;
    if (*(_QWORD*)(v29 + 200) == 0) {
      v30 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v29 + v30, v37);
  }
  if (v34 != 0) {
    v31 = *v24;
    v35 = v34;
    v32 = 128;
    if (*(_QWORD*)(v31 + 200) == 0) {
      v32 = 56;
    }
    return nn_mem_StandardAllocator_Free(v31 + v32, v34);
  }
  return result;
}

__int64 Unit_6db740(__int64 a1, char a2, char a3)
{
  __int64 v6;
  int v7;
  _BYTE* v8;
  __int64 v9;
  int v10;
  _BYTE* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  int v17;
  __int64 v18;
  int v19;
  __int64 v20;
  unsigned int v21;
  unsigned int v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  _QWORD* v26;
  __int64 v27;
  unsigned __int64 v28;
  _QWORD* v29;
  unsigned __int64 v30;
  unsigned __int64 i;
  __int64 v32;
  __int64 v33;
  _QWORD* v34;
  unsigned __int64 v35;
  _QWORD* j;
  __int64 v37;
  int v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  _DWORD* v42;
  __int64 v43;
  __int64 v44;
  unsigned int v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  int v51;
  __int64 v52;
  __int64 v53;
  char v54;
  __int64 v55;
  int v56;
  __int64 v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64** v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64* v78;
  unsigned __int64 v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  int v83;
  int v84;
  unsigned int v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned int v89;
  __int64 v90;
  unsigned int v91;
  bool v92;
  __int64 v93;
  int v94;
  unsigned __int64 v95;
  int v96;
  int v97;
  int v98;
  unsigned int v99;
  int v100;
  __int64 v101;
  _QWORD* v102;
  __int64 v103;
  unsigned __int64 v104;
  _QWORD* v105;
  unsigned __int64 v106;
  unsigned __int64 k;
  _QWORD* v108;
  unsigned __int64 v109;
  _QWORD* m;
  __int64 v111;
  unsigned __int64 v112;
  __int64 v113;
  int* v114;
  __int64 v115;
  __int64 v116;
  unsigned int v117;
  __int64 v118;
  int v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  char v129;
  char v130;
  int v131;
  int v132;
  __int64 result;
  int v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  void* v139;
  _QWORD* v140;
  _QWORD* v141;
  _QWORD* v142;
  __int64* v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  _QWORD* v147;
  _QWORD* v148;
  _QWORD* v149;
  _QWORD* v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  int v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64* v166;
  _QWORD* v167;
  __int64** v168;
  __int64* v169;
  _QWORD* v170;
  __int64* v171;
  __int64* v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  _BYTE v179[13];
  __int16 v180;

  v6 = a1 + 828;
  v153 = a1;
  v154 = 0;
  v155 = 0;
  v156 = 0;
  v157 = 0;
  v158 = 0;
  v159 = 0;
  v160 = 0;
  v161 = 0;
  v162 = 0;
  v163 = 0;
  v164 = 0;
  v165 = 0;
  UnitSkillList_84cf20(&v154, a1 + 1072, 1);
  if ((a2 & 1) != 0) {
    if (*(_WORD*)v6 != 0) {
      *(_QWORD*)v6 = 0;
    }
    if (*(_WORD*)(v6 + 8) != 0) {
      *(_QWORD*)(v6 + 8) = 0;
    }
    if (*(_WORD*)(v6 + 16) != 0) {
      *(_QWORD*)(v6 + 16) = 0;
    }
    if (*(_WORD*)(v6 + 24) != 0) {
      *(_QWORD*)(v6 + 24) = 0;
    }
    if (*(_WORD*)(v6 + 32) != 0) {
      *(_QWORD*)(v6 + 32) = 0;
    }
    if (*(_WORD*)(v6 + 40) != 0) {
      *(_QWORD*)(v6 + 40) = 0;
    }
    v7 = *(_DWORD*)(a1 + 416);
    if ((v7 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v7 | 0x10000000;
      GameRoutine_6c51e0_alt1(a1);
      GameRoutine_6c6da0_alt1(a1);
      GameRoutine_6c6ec0_alt1(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
    game_UnitActor_TryReload(a1);
    v8 = (_BYTE*)(a1 + 847);
    v9 = 2;
    while (1) {
      if (*(_WORD*)(v8 - 19) != 0 && (*(v8 - 16) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL * *(unsigned __int16*)(v8 - 19)) +
                              72LL) < 8u) {
        LODWORD(v9) = v9 - 2;
        goto LABEL_64;
      }
      if (*(_WORD*)(v8 - 11) != 0 && (*(v8 - 8) & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL * *(unsigned __int16*)(v8 - 11)) +
                              72LL) < 8u) {
        break;
      }
      if (*(_WORD*)(v8 - 3) != 0 && (*v8 & 1) != 0 &&
          *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                         8LL * *(unsigned __int16*)(v8 - 3)) +
                              72LL) < 8u) {
        goto LABEL_64;
      }
      v9 += 3;
      v8 += 24;
      if (v9 == 32) {
        goto LABEL_68;
      }
    }
    LODWORD(v9) = v9 - 1;
  LABEL_64:
    v18 = v6 + 8LL * (unsigned int)v9;
    if ((*(_BYTE*)(v18 + 3) & 1) != 0) {
      *(_BYTE*)(v18 + 3) &= ~1u;
      v19 = *(_DWORD*)(a1 + 416);
      if ((v19 & 0x10000000) == 0) {
        *(_DWORD*)(a1 + 416) = v19 | 0x10000000;
        GameRoutine_6c51e0_alt1(a1);
        GameRoutine_6c6da0_alt1(a1);
        GameRoutine_6c6ec0_alt1(a1);
        *(_DWORD*)(a1 + 416) &= ~0x10000000u;
      }
      game_UnitActor_TryReload(a1);
    }
  LABEL_68:
    if ((unsigned __int8)game_GetHeroIndex(*(_QWORD*)(a1 + 392)) != 0) {
      v168 = nullptr;
      v169 = nullptr;
      v170 = nullptr;
      v171 = nullptr;
      v172 = nullptr;
      v173 = 0;
      v174 = 0;
      v175 = 0;
      v176 = 0;
      v177 = 0;
      v180 = 0;
      v178 = 0;
      memset(v179, 0, sizeof(v179));
      v166 = GameData_2130cd8[0] + 2;
      v167 = (_QWORD*)a1;
      GameRoutine_12c4de0(&v166);
      if (*(_QWORD*)(a1 + 400) != v178) {
        *(_QWORD*)(a1 + 400) = v178;
        game_Unit_Unknown6c8630(a1);
      }
      v20 = GameRoutine_12c5000(a1, &v166, a3 & 1);
      v21 = GameRoutine_7152e0_alt1(v20);
      if ((int)v21 <= *(unsigned __int8*)(a1 + 498)) {
        goto LABEL_143;
      }
      v22 = v21;
      v23 = v21;
      v24 = 8LL * v21;
      v25 = (__int64*)fw_memory_g_heap_manager_ptr;
      v26 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v24, 16, 0);
      v27 = *(_QWORD*)(a1 + 400);
      v28 = v24 - 8;
      v29 = &v26[(unsigned __int64)v24 / 8];
      v150 = v26;
      v152 = (__int64)&v26[(unsigned __int64)v24 / 8];
      v30 = ((unsigned __int64)(v24 - 8) >> 3) + 1;
      for (i = v30 & 7; i != 0; --i) {
        *v26++ = v27;
      }
      if (v28 >= 0x38) {
        do {
          *v26 = v27;
          v26[1] = v27;
          v26[2] = v27;
          v26[3] = v27;
          v26[4] = v27;
          v26[5] = v27;
          v26[6] = v27;
          v26[7] = v27;
          v26 += 8;
        } while (v26 != v29);
      }
      v32 = *v25;
      v33 = *(_QWORD*)v179;
      v151 = (__int64)v29;
      v34 = (_QWORD*)fw_memory_HeapManager_Allocate(v32, v24, 16, 0);
      v35 = v30 & 7;
      v147 = v34;
      v149 = &v34[v23];
      for (j = &v34[(unsigned __int64)v24 / 8]; v35 != 0; --v35) {
        *v34++ = v33;
      }
      if (v28 >= 0x38) {
        do {
          *v34 = v33;
          v34[1] = v33;
          v34[2] = v33;
          v34[3] = v33;
          v34[4] = v33;
          v34[5] = v33;
          v34[6] = v33;
          v34[7] = v33;
          v34 += 8;
        } while (v34 != j);
      }
      v37 = *v25;
      v38 = *(_DWORD*)&v179[8];
      v148 = j;
      v39 = fw_memory_HeapManager_Allocate(v37, 4 * v23, 16, 0);
      v40 = 4 * v23 - 4;
      v41 = v39;
      v144 = v39;
      v42 = (_DWORD*)v39;
      v146 = v39 + 4 * v23;
      if ((~(4 * (_BYTE)v23 - 4) & 0x1C) != 0) {
        v43 = ((unsigned __int8)((unsigned int)v40 >> 2) + 1) & 7;
        v42 = (_DWORD*)v39;
        do {
          *v42++ = v38;
          --v43;
        } while (v43 != 0);
      }
      if (v40 >= 0x1C) {
        do {
          *v42 = v38;
          v42[1] = v38;
          v42[2] = v38;
          v42[3] = v38;
          v42[4] = v38;
          v42[5] = v38;
          v42[6] = v38;
          v42[7] = v38;
          v42 += 8;
        } while (v42 != (_DWORD*)(v39 + 4 * v23));
      }
      v145 = v39 + 4 * v23;
      v139 = &GameData_1acaa0c;
      v138 = game_HashString(&GameData_1acaa0c);
      if (game_GameModeData_instance_ != 0 &&
          (v44 = game_GameVariableTable_Find(
               *(_QWORD*)(game_GameModeData_instance_ + 48), &v138)) != 0) {
        v45 = *(_DWORD*)(v44 + 32);
      }
      else {
        v45 = 0;
      }
      v139 = &GameData_1ae9402;
      v50 = game_HashString(&GameData_1ae9402);
      v51 = game_GameModeData_instance_;
      v138 = v50;
      if (game_GameModeData_instance_ == 0) {
        LODWORD(v53) = 0;
        goto LABEL_128;
      }
      v52 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &v138);
      if (v52 != 0) {
        v51 = *(_DWORD*)(v52 + 32);
        v53 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
        LABEL_128:
          v65 = *(unsigned __int8*)(a1 + 498);
          HIDWORD(v139) = v53;
          v138 = __PAIR64__(v45, v22);
          BYTE2(v140) = 0;
          LOWORD(v140) = 256;
          v141 = &v150;
          v142 = &v147;
          v143 = &v144;
          *(float*)&v139 = (float)v51 * 0.01;
          if (v22 <= (unsigned int)v65) {
            goto LABEL_132;
          }
          if (v22 >= 0x63) {
            v22 = 99;
          }
          UnitHeroes_6d3800(a1, v65, v22, 0);
          UnitHeroes_6d5120(a1, v22 - *(unsigned __int8*)(a1 + 498), &v138);
          v41 = v144;
          if (v144 != 0) {
          LABEL_132:
            v66 = *v25;
            v145 = v41;
            v67 = 128;
            if (*(_QWORD*)(v66 + 200) == 0) {
              v67 = 56;
            }
            nn_mem_StandardAllocator_Free(v66 + v67, v41);
          }
          if (v147 != nullptr) {
            v68 = *v25;
            v148 = v147;
            v69 = 128;
            if (*(_QWORD*)(v68 + 200) == 0) {
              v69 = 56;
            }
            nn_mem_StandardAllocator_Free(v68 + v69, v147);
          }
          if (v150 != nullptr) {
            v70 = *v25;
            v151 = (__int64)v150;
            v71 = 128;
            if (*(_QWORD*)(v70 + 200) == 0) {
              v71 = 56;
            }
            nn_mem_StandardAllocator_Free(v70 + v71, v150);
          }
        LABEL_143:
          GameRoutine_12c2aa0(&v166);
          v72 = v167[49];
          if (v72 == game_GetHero(3) && *(_BYTE*)(v167[50] + 96LL) == 1) {
            v177 = GameRoutine_12fdee0(*((unsigned __int8*)v167 + 552));
          }
          GameRoutine_12c59a0(a1, &v166, a3 & 1);
          v73 = v177;
          GameRoutine_12c56a0(a1, &v166, a3 & 1);
          if (v73 != 0) {
            GameRoutine_12c5890(a1, &v166, a3 & 1);
          }
          v166 = (__int64*)&GameData_1f920c0;
          if (v174 != 0) {
            v74 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v74 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v74, v174);
          }
          if (v171 != nullptr) {
            v172 = v171;
            v75 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v75 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v75, v171);
          }
          v63 = v168;
          if (v168 == nullptr) {
            goto LABEL_251;
          }
          v169 = (__int64*)v168;
          v64 = fw_memory_g_heap_manager;
          goto LABEL_158;
        }
      }
      else {
        v51 = 0;
        v53 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_128;
        }
      }
      LODWORD(v53) = *(_DWORD*)(v53 + 60);
      goto LABEL_128;
    }
    v150 = (_QWORD*)a1;
    v152 = 0;
    v139 = nullptr;
    v140 = nullptr;
    v138 = 0;
    GameRoutine_12c0bc0(&v166, a1, &v138);
    GameRoutine_12c16e0(&v166);
    v46 = GameRoutine_12c1f80(&v166);
    v151 = v46;
    GameRoutine_12c20f0(&v166);
    if (*(_QWORD*)(a1 + 400) != v46) {
      *(_QWORD*)(a1 + 400) = v46;
      game_Unit_Unknown6c8630(a1);
    }
    v47 = (_QWORD*)(a1 + 1880);
    if (*(_BYTE*)(a1 + 1880) == 0 ||
        *(_BYTE*)((v48 = *(_QWORD*)(a1 + 400)) + 96) == 2 &&
            *(unsigned __int8*)(*(_QWORD*)(v48 + 112) + 32LL) ==
                *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 +
                                                          64) +
                                               8LL *
                                                   *(unsigned __int8*)(a1 +
                                                                       1880)) +
                                    32LL)) {
      v49 = (_QWORD*)GameRoutine_12c51b0(a1, a3 & 1);
    }
    else {
      if ((a3 & 1) != 0) {
        v54 = *(_BYTE*)(a1 + 1920);
        *(_DWORD*)(a1 + 1888) = 0;
        *v47 = 0;
        if ((v54 & 1) != 0) {
          **(_BYTE**)(a1 + 1936) = 0;
          *(_QWORD*)(a1 + 1928) = 0;
        }
        else {
          *(_WORD*)(a1 + 1920) = 0;
        }
        v49 = (_QWORD*)GameRoutine_6e3b50(a1 + 1896, *(_QWORD*)(a1 + 1904));
        v77 = *(unsigned __int8*)(a1 + 1944);
        *(_QWORD*)(a1 + 1912) = 0;
        *(_QWORD*)(a1 + 1896) = a1 + 1904;
        *(_QWORD*)(a1 + 1904) = 0;
        if (v77 != 0) {
          v78 = (unsigned __int64*)(a1 + 1944);
          if (*(_BYTE*)(*(_QWORD*)(a1 + 400) + 96LL) != 1 ||
              *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21ca060 + 64) +
                                             8 * v77) +
                                  50LL) >
                  (unsigned int)*(unsigned __int8*)(a1 + 552)) {
            goto LABEL_171;
          }
        }
        goto LABEL_181;
      }
      if ((RidePool_93d8e0(a1) & 0x80000000) != 0) {
        WORD1(v166) = 0;
        HIDWORD(v166) = 0;
        v170 = nullptr;
        v171 = nullptr;
        v172 = nullptr;
        v173 = 0;
        v168 = &v169;
        v169 = nullptr;
        GameRoutine_930b90(&v166, a1 + 1880);
        BYTE3(v166) = 0;
        UnitHeroes_6d2b90(a1, GameData_212c8b0[0]);
        GameRoutine_93c6a0(&v138, *(_QWORD*)(GameData_21f42d0 + 8), &v166, 0,
                           1);
        v49 = (_QWORD*)UnitVariables_930e20(&v166);
      }
      else {
        v49 = (_QWORD*)RidePool_93d1e0(*(_QWORD*)(GameData_21f42d0 + 8), a1);
      }
    }
    if (*(_BYTE*)(a1 + 1944) == 0) {
      goto LABEL_181;
    }
    v78 = (unsigned __int64*)(a1 + 1944);
    if (*(_BYTE*)(*(_QWORD*)(a1 + 400) + 96LL) == 1 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21ca060 + 64) +
                                       8LL * *(unsigned __int8*)(a1 + 1944)) +
                            50LL) <=
            (unsigned int)*(unsigned __int8*)(a1 + 552)) {
      if ((a3 & 1) == 0 &&
          *(unsigned __int8*)(a1 + 1945) != *(unsigned __int8*)(a1 + 2088)) {
        v79 = *v78;
        v80 = v79 & 0xFFFFFFFFFFFF00FFLL |
              ((unsigned __int64)*(unsigned __int8*)(a1 + 2088) << 8);
        if (v79 != v80) {
          v81 = v79 >> 16;
          v82 = v79 >> 24;
          *(_WORD*)(a1 + 1944) = v80;
          *(_BYTE*)(v6 + 1123) = HIBYTE(v79);
          v83 = *(_DWORD*)(a1 + 416);
          *(_BYTE*)(a1 + 1946) = v81;
          *(_DWORD*)(v6 + 1119) = v82;
          if ((v83 & 0x10000000) == 0) {
            *(_DWORD*)(a1 + 416) = v83 | 0x10000000;
            GameRoutine_6c51e0_alt1(a1);
            GameRoutine_6c6da0_alt1(a1);
            v49 = (_QWORD*)GameRoutine_6c6ec0_alt1(a1);
            *(_DWORD*)(a1 + 416) &= ~0x10000000u;
          }
          *(_WORD*)(a1 + 20) |= 1u;
        }
      }
    }
    else {
      if ((a3 & 1) != 0) {
      LABEL_171:
        *v78 = 0;
        goto LABEL_181;
      }
      if ((LegionPool_938460(a1) & 0x80000000) != 0) {
        v166 = *(__int64**)(a1 + 1944);
        BYTE1(v166) = 0;
        UnitHeroes_6d2c90(a1, GameData_212ceb0);
        v49 = GameRoutine_936f60(&v138, *(_QWORD*)(GameData_21f4280 + 8), &v166,
                                 0);
      }
      else {
        v49 = (_QWORD*)LegionPool_937de0(*(_QWORD*)(GameData_21f4280 + 8), a1);
      }
    }
  LABEL_181:
    v84 = GameRoutine_7152e0_alt1(v49);
    if (v84 <= *(unsigned __int8*)(a1 + 498)) {
    LABEL_250:
      v152 = GameRoutine_12c2260(a1);
      GameRoutine_12c5be0(a1, &v150, a3 & 1);
      goto LABEL_251;
    }
    v85 = v84;
    if (*(_BYTE*)v47 != 0) {
      v86 = *(_QWORD*)(*(_QWORD*)(GameData_21c99a8 + 64) +
                       8LL * *(unsigned __int8*)v47);
      v87 = *(_QWORD*)(a1 + 392);
      if (v87 == 0) {
        goto LABEL_195;
      }
      v88 = *(_QWORD*)(a1 + 1904);
      if (v88 == 0) {
        goto LABEL_195;
      }
      v89 = *(unsigned __int8*)(v87 + 48);
      v90 = a1 + 1904;
      do {
        v91 = *(unsigned __int8*)(v88 + 26);
        v92 = v91 >= v89;
        if (v91 >= v89) {
          v93 = 0;
        }
        else {
          v93 = 8;
        }
        if (v92) {
          v90 = v88;
        }
        v88 = *(_QWORD*)(v88 + v93);
      } while (v88 != 0);
      if (v90 != a1 + 1904 && v89 >= *(unsigned __int8*)(v90 + 26)) {
        v94 = *(_WORD*)(v90 + 28) & 0xFFF;
      }
      else {
      LABEL_195:
        v94 = 0;
      }
      v95 = (unsigned __int64)(GameData_21d9990 - GameData_21d9988) >> 2;
      if ((int)v95 >= 1) {
        v96 = 0;
        v97 = *(_DWORD*)(GameData_21d9988 + 4LL * (unsigned int)(v95 - 1));
        if (v97 >= v94) {
          v97 = v94;
        }
        if (v94 >= *(_DWORD*)GameData_21d9988) {
          v98 = v97;
        }
        else {
          v98 = *(_DWORD*)GameData_21d9988;
        }
        while (1) {
          v99 = (unsigned int)(v96 + v95) >> 1;
          v100 = *(_DWORD*)(GameData_21d9988 + 4LL * v99);
          if (v98 == v100) {
            break;
          }
          if (v98 < v100) {
            LODWORD(v95) = (unsigned int)(v96 + v95) >> 1;
          }
          else {
            v96 = v99 + 1;
          }
          if (v96 >= (int)v95) {
            goto LABEL_211;
          }
        }
        v96 = v99 + 1;
      LABEL_211:
        v101 = (unsigned int)v84;
        v102 = (_QWORD*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v101 * 8, 16, 0);
        v103 = *(_QWORD*)(a1 + 400);
        v104 = v101 * 8 - 8;
        v105 = &v102[v101];
        v138 = (__int64)v102;
        v140 = &v102[v101];
        v106 = ((unsigned __int64)(v101 * 8 - 8) >> 3) + 1;
        for (k = v106 & 7; k != 0; --k) {
          *v102++ = v103;
        }
        if (v104 >= 0x38) {
          do {
            *v102 = v103;
            v102[1] = v103;
            v102[2] = v103;
            v102[3] = v103;
            v102[4] = v103;
            v102[5] = v103;
            v102[6] = v103;
            v102[7] = v103;
            v102 += 8;
          } while (v102 != v105);
        }
        v139 = v105;
        v108 = (_QWORD*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8LL * v85, 16, 0);
        v109 = v106 & 7;
        v147 = v108;
        v149 = &v108[v85];
        for (m = &v108[v101]; v109 != 0; --v109) {
          *v108++ = v86;
        }
        if (v104 >= 0x38) {
          do {
            *v108 = v86;
            v108[1] = v86;
            v108[2] = v86;
            v108[3] = v86;
            v108[4] = v86;
            v108[5] = v86;
            v108[6] = v86;
            v108[7] = v86;
            v108 += 8;
          } while (v108 != m);
        }
        v148 = m;
        v111 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4LL * v85, 16, 0);
        v112 = 4LL * v85 - 4;
        v113 = v111;
        v144 = v111;
        v114 = (int*)v111;
        v146 = v111 + 4LL * v85;
        if ((~(4 * (_BYTE)v85 - 4) & 0x1C) != 0) {
          v115 = ((unsigned __int8)((unsigned int)v112 >> 2) + 1) & 7;
          v114 = (int*)v111;
          do {
            *v114++ = v96;
            --v115;
          } while (v115 != 0);
        }
        if (v112 >= 0x1C) {
          do {
            *v114 = v96;
            v114[1] = v96;
            v114[2] = v96;
            v114[3] = v96;
            v114[4] = v96;
            v114[5] = v96;
            v114[6] = v96;
            v114[7] = v96;
            v114 += 8;
          } while (v114 != (int*)(v111 + 4LL * v85));
        }
        v145 = v111 + 4LL * v85;
        v167 = &GameData_1acaa0c;
        v166 = (__int64*)game_HashString(&GameData_1acaa0c);
        if (game_GameModeData_instance_ != 0 &&
            (v116 = game_GameVariableTable_Find(
                 *(_QWORD*)(game_GameModeData_instance_ + 48), &v166)) != 0) {
          v117 = *(_DWORD*)(v116 + 32);
        }
        else {
          v117 = 0;
        }
        v167 = &GameData_1ae9402;
        v118 = game_HashString(&GameData_1ae9402);
        v119 = game_GameModeData_instance_;
        v166 = (__int64*)v118;
        if (game_GameModeData_instance_ == 0) {
          LODWORD(v121) = 0;
          goto LABEL_235;
        }
        v120 = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &v166);
        if (v120 != 0) {
          v119 = *(_DWORD*)(v120 + 32);
          v121 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ == 0) {
          LABEL_235:
            v122 = *(unsigned __int8*)(a1 + 498);
            HIDWORD(v167) = v121;
            v166 = (__int64*)__PAIR64__(v117, v85);
            BYTE2(v168) = 0;
            LOWORD(v168) = 256;
            v169 = &v138;
            v170 = &v147;
            v171 = &v144;
            *(float*)&v167 = (float)v119 * 0.01;
            if (v85 <= (unsigned int)v122) {
              goto LABEL_239;
            }
            if (v85 >= 0x63) {
              v85 = 99;
            }
            UnitHeroes_6d3800(a1, v122, v85, 0);
            UnitHeroes_6d5120(a1, v85 - *(unsigned __int8*)(a1 + 498), &v166);
            v113 = v144;
            if (v144 != 0) {
            LABEL_239:
              v145 = v113;
              v123 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v123 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v123, v113);
            }
            if (v147 != nullptr) {
              v148 = v147;
              v124 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v124 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v124, v147);
            }
            if (v138 != 0) {
              v139 = (void*)v138;
              v125 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v125 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v125, v138);
            }
            goto LABEL_250;
          }
        }
        else {
          v119 = 0;
          v121 = game_GameModeData_instance_;
          if (game_GameModeData_instance_ == 0) {
            goto LABEL_235;
          }
        }
        LODWORD(v121) = *(_DWORD*)(v121 + 60);
        goto LABEL_235;
      }
    }
    else {
      v86 = 0;
    }
    v96 = 0;
    goto LABEL_211;
  }
  if ((unsigned __int8)game_GetHeroIndex(*(_QWORD*)(a1 + 392)) == 0) {
    GameRoutine_12c51b0(a1, a3 & 1);
    if ((a3 & 1) == 0 && *(_BYTE*)(a1 + 1944) != 0 &&
        *(unsigned __int8*)(a1 + 1945) != *(unsigned __int8*)(a1 + 2088)) {
      v13 = *(_QWORD*)(a1 + 1944);
      v14 = v13 & 0xFFFFFFFFFFFF00FFLL |
            ((unsigned __int64)*(unsigned __int8*)(a1 + 2088) << 8);
      if (v13 != v14) {
        v15 = v13 >> 16;
        v16 = v13 >> 24;
        *(_WORD*)(a1 + 1944) = v14;
        *(_BYTE*)(v6 + 1123) = HIBYTE(v13);
        v17 = *(_DWORD*)(a1 + 416);
        *(_BYTE*)(a1 + 1946) = v15;
        *(_DWORD*)(v6 + 1119) = v16;
        if ((v17 & 0x10000000) == 0) {
          *(_DWORD*)(a1 + 416) = v17 | 0x10000000;
          GameRoutine_6c51e0_alt1(a1);
          GameRoutine_6c6da0_alt1(a1);
          GameRoutine_6c6ec0_alt1(a1);
          *(_DWORD*)(a1 + 416) &= ~0x10000000u;
        }
        *(_WORD*)(a1 + 20) |= 1u;
      }
    }
    goto LABEL_251;
  }
  if (*(_WORD*)v6 != 0) {
    *(_QWORD*)v6 = 0;
  }
  if (*(_WORD*)(v6 + 8) != 0) {
    *(_QWORD*)(v6 + 8) = 0;
  }
  if (*(_WORD*)(v6 + 16) != 0) {
    *(_QWORD*)(v6 + 16) = 0;
  }
  if (*(_WORD*)(v6 + 24) != 0) {
    *(_QWORD*)(v6 + 24) = 0;
  }
  if (*(_WORD*)(v6 + 32) != 0) {
    *(_QWORD*)(v6 + 32) = 0;
  }
  if (*(_WORD*)(v6 + 40) != 0) {
    *(_QWORD*)(v6 + 40) = 0;
  }
  v10 = *(_DWORD*)(a1 + 416);
  if ((v10 & 0x10000000) == 0) {
    *(_DWORD*)(a1 + 416) = v10 | 0x10000000;
    GameRoutine_6c51e0_alt1(a1);
    GameRoutine_6c6da0_alt1(a1);
    GameRoutine_6c6ec0_alt1(a1);
    *(_DWORD*)(a1 + 416) &= ~0x10000000u;
  }
  game_UnitActor_TryReload(a1);
  v11 = (_BYTE*)(a1 + 847);
  v12 = 2;
  while (1) {
    if (*(_WORD*)(v11 - 19) != 0 && (*(v11 - 16) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8LL * *(unsigned __int16*)(v11 - 19)) +
                            72LL) < 8u) {
      LODWORD(v12) = v12 - 2;
      goto LABEL_105;
    }
    if (*(_WORD*)(v11 - 11) != 0 && (*(v11 - 8) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8LL * *(unsigned __int16*)(v11 - 11)) +
                            72LL) < 8u) {
      break;
    }
    if (*(_WORD*)(v11 - 3) != 0 && (*v11 & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8LL * *(unsigned __int16*)(v11 - 3)) +
                            72LL) < 8u) {
      goto LABEL_105;
    }
    v12 += 3;
    v11 += 24;
    if (v12 == 32) {
      goto LABEL_109;
    }
  }
  LODWORD(v12) = v12 - 1;
LABEL_105:
  v55 = v6 + 8LL * (unsigned int)v12;
  if ((*(_BYTE*)(v55 + 3) & 1) != 0) {
    *(_BYTE*)(v55 + 3) &= ~1u;
    v56 = *(_DWORD*)(a1 + 416);
    if ((v56 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v56 | 0x10000000;
      GameRoutine_6c51e0_alt1(a1);
      GameRoutine_6c6da0_alt1(a1);
      GameRoutine_6c6ec0_alt1(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
    game_UnitActor_TryReload(a1);
  }
LABEL_109:
  v168 = nullptr;
  v169 = nullptr;
  v170 = nullptr;
  v171 = nullptr;
  v172 = nullptr;
  v173 = 0;
  v174 = 0;
  v175 = 0;
  v176 = 0;
  v177 = 0;
  v178 = 0;
  *(_DWORD*)v179 = 0;
  v179[4] = 0;
  *(_WORD*)&v179[6] = 0;
  v166 = GameData_2130cd0[0] + 2;
  v167 = (_QWORD*)a1;
  GameRoutine_12c4be0(&v166);
  GameRoutine_12c2aa0(&v166);
  v57 = v167[49];
  if (v57 == game_GetHero(3) && *(_BYTE*)(v167[50] + 96LL) == 1) {
    v177 = GameRoutine_12fdee0(*((unsigned __int8*)v167 + 552));
  }
  GameRoutine_12c59a0(a1, &v166, a3 & 1);
  GameRoutine_12c5000(a1, &v166, a3 & 1);
  v58 = v177;
  GameRoutine_12c56a0(a1, &v166, a3 & 1);
  if (v58 != 0) {
    GameRoutine_12c5890(a1, &v166, a3 & 1);
  }
  v166 = (__int64*)&GameData_1f920c0;
  v59 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v174 != 0) {
    v60 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v60 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v60,
                                  v174);
  }
  if (v171 != nullptr) {
    v61 = *v59;
    v172 = v171;
    v62 = 128;
    if (*(_QWORD*)(v61 + 200) == 0) {
      v62 = 56;
    }
    nn_mem_StandardAllocator_Free(v61 + v62, v171);
  }
  v63 = v168;
  if (v168 != nullptr) {
    v64 = *v59;
    v169 = (__int64*)v168;
  LABEL_158:
    v76 = 128;
    if (*(_QWORD*)(v64 + 200) == 0) {
      v76 = 56;
    }
    nn_mem_StandardAllocator_Free(v64 + v76, v63);
  }
LABEL_251:
  game_Unit_Unknown6c4610(a1);
  game_UnitAutoGrowSkillUpdater_Update(&v153);
  v126 = 0;
  while (1) {
    v127 = a1 + v126;
    if (*(_WORD*)(a1 + v126 + 828) != 0 && (*(_BYTE*)(v127 + 831) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8LL * *(unsigned __int16*)(a1 + v126 +
                                                                  828)) +
                            72LL) < 8u) {
      break;
    }
    v128 = *(unsigned __int16*)(v127 + 836);
    if (v128 != 0 && (*(_BYTE*)(a1 + v126 + 839) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8 * v128) +
                            72LL) < 8u) {
      break;
    }
    if (*(_WORD*)(a1 + v126 + 844) != 0 &&
        (*(_BYTE*)(a1 + v126 + 847) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                       8LL * *(unsigned __int16*)(a1 + v126 +
                                                                  844)) +
                            72LL) < 8u) {
      break;
    }
    v126 += 24;
    if (v126 == 240) {
      game_Unit_CheckEquipment(a1);
      game_Unit_EquipFirstWeapon(a1);
      GameRoutine_6ddce0(a1);
      break;
    }
  }
  v129 = game_UnitItemList_Sort(a1 + 828, 0, 6);
  v130 = game_UnitItemList_Sort(a1 + 828, 6, 24);
  if ((v129 & 1) != 0 || (v130 & 1) != 0) {
    v131 = *(_DWORD*)(a1 + 416);
    if ((v131 & 0x10000000) == 0) {
      *(_DWORD*)(a1 + 416) = v131 | 0x10000000;
      GameRoutine_6c51e0_alt1(a1);
      GameRoutine_6c6da0_alt1(a1);
      GameRoutine_6c6ec0_alt1(a1);
      *(_DWORD*)(a1 + 416) &= ~0x10000000u;
    }
  }
  LOBYTE(v166) = 0;
  v132 = game_Unit_GetParam(a1, &v166, 1);
  LOBYTE(v166) = 0;
  result = game_Unit_GetParam(a1, &v166, 1);
  if (*(_WORD*)(a1 + 494) != 0 && v132 != *(__int16*)(a1 + 494)) {
    *(_WORD*)(a1 + 494) = 0;
  }
  if ((int)result >= v132) {
    v134 = v132;
  }
  else {
    v134 = result;
  }
  if (v132 < 0) {
    v134 = 0;
  }
  if (v134 != *(__int16*)(a1 + 492)) {
    *(_WORD*)(a1 + 492) = v134;
  }
  if (v161 != 0) {
    v162 = v161;
    v135 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v135 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v135, v161);
  }
  if (v158 != 0) {
    v159 = v158;
    v136 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v136 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v136, v158);
  }
  if (v154 != 0) {
    v155 = v154;
    v137 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v137 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v137, v154);
  }
  return result;
}

__int64 Unit_6de340(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 (*v7)(_QWORD);
  __int64 v8;
  _QWORD* v9;

  v1 = *(_QWORD*)(a1 + 392);
  if (v1 == 0) {
    return 0;
  }
  if (*(_WORD*)(v1 + 408) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(v1 + 24);
  v3 = *(_QWORD*)(v2 + 1792);
  v4 = *(_QWORD*)(v2 + 1800);
  if (v3 == v4) {
    return 0;
  }
  while (*(_QWORD*)(v3 + 8) != 0) {
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v6 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v3 + 8);
      if (v6 != 0) {
        v7 = *(__int64 (**)(_QWORD))(v6 + 72);
        v8 = *(_QWORD*)(v6 + 80);
        v9 = (_QWORD*)(v6 + (v8 >> 1));
        if ((v8 & 1) != 0) {
          v7 = *(__int64 (**)(_QWORD))((char*)v7 + *v9);
        }
        LOBYTE(a1) = v7(v9);
      }
      else {
        LOBYTE(a1) = 1;
      }
    }
    if (*(_BYTE*)(v3 + 24) == ((v5 == 0) | a1 & 1)) {
      break;
    }
    v3 += 32;
    if (v3 == v4) {
      return 0;
    }
  }
  return *(_QWORD*)v3;
}

bool Unit_6de520(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  _BOOL8 result;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  int v20;

  v2 = *(_QWORD*)(a1 + 400);
  v3 = *(_QWORD*)(a1 + 408);
  if (v3 != 0) {
    goto LABEL_2;
  }
  if (v2 == 0) {
    return false;
  }
  v3 = *(_QWORD*)(a1 + 400);
  if (*(_QWORD*)(v2 + 88) == 0) {
    goto LABEL_2;
  }
  v13 = (__int64*)(a1 + 400);
  v14 = a2;
  v15 = GameRoutine_9a28e0(1);
  if (game_GameModeData_instance_ == 0 ||
      (v16 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v15)) == 0 ||
      (v17 = v13, *(_DWORD*)(v16 + 32) == 0)) {
    v18 = GameRoutine_9a28e0(2);
    v17 = v13;
    if (game_GameModeData_instance_ != 0) {
      v19 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), v18);
      if (v19 != 0 && *(_DWORD*)(v19 + 32) != 0) {
        goto LABEL_25;
      }
      v17 = v13;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_26;
      }
      v20 = *(unsigned __int8*)(game_GameModeData_instance_ + 56);
      if ((unsigned int)(v20 - 6) < 2) {
      LABEL_25:
        v17 = (__int64*)(*v13 + 88);
      }
      else {
        v17 = v13;
        if (v20 == 2) {
          v17 = (__int64*)(*(_QWORD*)(a1 + 400) + 88LL);
          if ((*(_BYTE*)(a1 + 418) & 4) == 0) {
            v17 = v13;
          }
        }
      }
    }
  }
LABEL_26:
  v3 = *v17;
  v2 = *v13;
  a2 = v14;
  if (v3 == 0) {
    goto LABEL_6;
  }
LABEL_2:
  v4 = *(unsigned __int16*)(v3 + 128);
  if (*(_WORD*)(v3 + 128) == 0) {
  LABEL_6:
    if (v2 != 0 && *(_WORD*)(v2 + 128) != 0) {
      v7 = *(unsigned __int16*)(v2 + 128) - 1LL;
      v8 = (__int64*)(*(_QWORD*)(v2 + 136) + 8LL);
      do {
        v9 = *v8;
        v8 += 2;
        result = v9 == a2;
      } while (v9 != a2 && v7-- != 0);
      return result;
    }
    return false;
  }
  v5 = (__int64*)(*(_QWORD*)(v3 + 136) + 8LL);
  while (1) {
    v6 = *v5;
    v5 += 2;
    if (v6 == a2) {
      return true;
    }
    if (--v4 == 0) {
      goto LABEL_6;
    }
  }
}

__int64 Unit_6df300(__int64 result, _BYTE* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int16 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  _BYTE* v14;
  _DWORD* v15;
  __int64 v16;
  _BYTE* v17;
  _BYTE* v18;
  __int64 v19;
  _BYTE* v20;
  _BYTE* v21;
  _BYTE* v22;
  char v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  __int64 v29;
  _BYTE* v30;
  _DWORD* v31;
  __int64 v32;
  _BYTE* v33;
  _BYTE* v34;
  __int64 v35;
  _BYTE* v36;
  _BYTE* v37;
  _BYTE* v38;
  _WORD v39[2];

  v2 = (unsigned __int8)*a2;
  v3 = *(_QWORD*)(result + 440);
  v4 = result;
  if (v3 != 0) {
    v5 = *(unsigned __int8*)(v3 + 16);
    if (v2 == v5) {
      goto LABEL_3;
    }
  }
  else {
    v5 = 9;
    if (v2 == 9) {
    LABEL_3:
      if (*a2 != 0) {
        v6 = 8;
      }
      else {
        v6 = 520;
      }
      goto LABEL_9;
    }
  }
  if (*a2 != 0) {
    return result;
  }
  v6 = 512;
LABEL_9:
  v39[0] = v6;
  v7 = *(_QWORD*)(result + 1776);
  v8 = *(_QWORD*)(result + 1784) - v7;
  v9 = GameData_212c880[0];
  if ((int)(v8 >> 2) < 1) {
    v12 = 0;
  }
  else {
    v10 = *(_QWORD*)(*GameData_212c880[0] + 64);
    if ((v8 & 0x1FFFFFFFCLL) == 4) {
      v11 = 0;
      v12 = 0;
    }
    else {
      v15 = (_DWORD*)(v7 + 4);
      v11 = 0;
      v12 = 0;
      do {
        v16 = *(_QWORD*)(v10 + 8LL * (*(v15 - 1) & 0xFFF));
        v17 = *(_BYTE**)(v16 + 864);
        if (v17 != nullptr && *v17 != 0) {
          ++v12;
        }
        else {
          v18 = *(_BYTE**)(v16 + 872);
          if (v18 != nullptr && *v18 != 0) {
            ++v12;
          }
        }
        v19 = *(_QWORD*)(v10 + 8LL * (*v15 & 0xFFF));
        v20 = *(_BYTE**)(v19 + 864);
        if (v20 != nullptr && *v20 != 0) {
          ++v12;
        }
        else {
          v21 = *(_BYTE**)(v19 + 872);
          if (v21 != nullptr && *v21 != 0) {
            ++v12;
          }
        }
        v11 += 2;
        v15 += 2;
      } while (((v8 >> 2) & 0x7FFFFFFE) != v11);
    }
    if ((v8 & 4) != 0) {
      v13 = *(_QWORD*)(v10 + 8LL * (*(_DWORD*)(v7 + 4 * v11) & 0xFFF));
      v14 = *(_BYTE**)(v13 + 864);
      if (v14 != nullptr && *v14 != 0) {
        ++v12;
      }
      else {
        v22 = *(_BYTE**)(v13 + 872);
        if (v22 != nullptr && *v22 != 0) {
          ++v12;
        }
      }
    }
  }
  v23 = GameRoutine_850ce0(result + 1360, v39);
  result = GameRoutine_850ce0(v4 + 1456, v39);
  if ((v23 & 1) != 0 || (result & 1) != 0) {
    result = game_Unit_Unknown6cd8f0(v4);
  }
  v24 = *(_QWORD*)(v4 + 1776);
  v25 = *(_QWORD*)(v4 + 1784) - v24;
  if ((int)(v25 >> 2) < 1) {
    v28 = 0;
  }
  else {
    v26 = *(_QWORD*)(*v9 + 64);
    if ((v25 & 0x1FFFFFFFCLL) == 4) {
      v27 = 0;
      v28 = 0;
    }
    else {
      v31 = (_DWORD*)(v24 + 4);
      v27 = 0;
      v28 = 0;
      do {
        v32 = *(_QWORD*)(v26 + 8LL * (*(v31 - 1) & 0xFFF));
        v33 = *(_BYTE**)(v32 + 864);
        if (v33 != nullptr && *v33 != 0) {
          ++v28;
        }
        else {
          v34 = *(_BYTE**)(v32 + 872);
          if (v34 != nullptr && *v34 != 0) {
            ++v28;
          }
        }
        v35 = *(_QWORD*)(v26 + 8LL * (*v31 & 0xFFF));
        v36 = *(_BYTE**)(v35 + 864);
        if (v36 != nullptr && *v36 != 0) {
          ++v28;
        }
        else {
          v37 = *(_BYTE**)(v35 + 872);
          if (v37 != nullptr && *v37 != 0) {
            ++v28;
          }
        }
        v27 += 2;
        v31 += 2;
      } while (((v25 >> 2) & 0x7FFFFFFE) != v27);
    }
    if ((v25 & 4) != 0) {
      v29 = *(_QWORD*)(v26 + 8LL * (*(_DWORD*)(v24 + 4 * v27) & 0xFFF));
      v30 = *(_BYTE**)(v29 + 864);
      if (v30 != nullptr && *v30 != 0) {
        ++v28;
      }
      else {
        v38 = *(_BYTE**)(v29 + 872);
        if (v38 != nullptr && *v38 != 0) {
          ++v28;
        }
      }
    }
  }
  if (v28 != v12) {
    *(_WORD*)(v4 + 20) |= 0x44u;
  }
  if (v2 == v5 && *(_WORD*)(v4 + 494) != 0) {
    *(_WORD*)(v4 + 494) = 0;
  }
  return result;
}

__int64 game_Unit_GetMorphSkill(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;
  __int64 v17;

  v4 = *(_QWORD*)(a1 + 408);
  if (v4 == 0) {
    return 0;
  }
  v6 = v15;
  v17 = 0;
  v15[0] = GameData_1f91ee8;
  v15[1] = v4;
  v16 = v15;
  v15[2] = &v17;
  if ((*(_BYTE*)(a1 + 1537) & 2) == 0) {
    goto LABEL_15;
  }
  v7 = *(_QWORD*)(a1 + 1496);
  v8 = *(_QWORD*)(a1 + 1488);
  if ((int)((unsigned __int64)(v7 - v8) >> 2) < 1) {
    v6 = v15;
  LABEL_15:
    v14 = 32;
    goto LABEL_16;
  }
  v9 = 0;
  v10 = 0;
  v11 = GameData_212c880[0];
  v12 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v12 + 64) +
                             8LL * (*(_DWORD*)(v8 + v9) & 0xFFF)) +
                  104LL) == 9) {
      if (v16 == nullptr) {
        GameRoutine_60a310_alt1(0, a2, a3, a4);
      }
      (*(void (**)(_QWORD*, __int64))(*v16 + 48LL))(v16, v8 + v9);
      v12 = *v11;
      v7 = *(_QWORD*)(a1 + 1496);
      v8 = *(_QWORD*)(a1 + 1488);
    }
    ++v10;
    v9 += 4;
  } while (v10 < (int)((unsigned __int64)(v7 - v8) >> 2));
  v6 = v16;
  if (v16 == v15) {
    goto LABEL_15;
  }
  if (v16 != nullptr) {
    v14 = 40;
  LABEL_16:
    (*(void (**)(_QWORD*, __int64, __int64))(*v6 + v14))(v6, a2, a3);
  }
  return v17;
}

__int64 Unit_6e0810(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;

  v1 = *(_QWORD*)(result + 2200);
  if (v1 != 0) {
    v2 = result;
    v3 = GameData_212ce88[0];
    v4 = (_QWORD*)*GameData_212ce88[0];
    v5 = *(_QWORD*)(*GameData_212ce88[0] + 10752);
    v6 = *(_QWORD*)(*GameData_212ce88[0] + 10744);
    v7 = ((v5 - v6) << 6) - 1;
    if (v5 == v6) {
      v7 = 0;
    }
    v8 = *(_QWORD*)(*GameData_212ce88[0] + 10776) +
         *(_QWORD*)(*GameData_212ce88[0] + 10768);
    if (v7 == v8) {
      GameRoutine_74cd60(v4 + 1342);
      v6 = v4[1343];
      v8 = v4[1347] + v4[1346];
    }
    *(_QWORD*)(*(_QWORD*)(v6 + 8 * (v8 >> 9)) + 8 * (v8 & 0x1FF)) = v4[1];
    v4[1] = v1;
    v9 = *v3;
    ++v4[1347];
    v10 = (unsigned int)*(char*)(v2 + 584);
    v11 = (unsigned int)*(char*)(v2 + 585);
    v26 = 370413570;
    result = GameRoutine_748f80(v9, v2, v10, v11, 0xFFFFFFFFLL, &v26);
    v12 = (_QWORD*)*v3;
    v13 = *(_QWORD*)(*v3 + 10776);
    v14 = *(_QWORD*)(*v3 + 10768);
    v15 = *(_QWORD*)(*v3 + 10744);
    v16 = *(_QWORD*)(*v3 + 10752);
    v17 = v16 == v15;
    v18 = v13 - 1 + v14;
    v19 = v18 >> 9;
    v20 = v18 & 0x1FF;
    v21 = ((v16 - v15) << 6) - 1;
    v22 = *(_QWORD*)(v15 + 8 * v19);
    if (v17) {
      v21 = 0;
    }
    v23 = *(_QWORD*)(v22 + 8 * v20);
    v12[1347] = v13 - 1;
    v12[1] = v23;
    if ((unsigned __int64)(v21 - (v13 + v14) + 1) >= 0x400) {
      v24 = *(_QWORD*)(v16 - 8);
      if (v24 != 0) {
        v25 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v25 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v24);
        v16 = v12[1344];
      }
      v12[1344] = v16 - 8;
    }
  }
  return result;
}

__int64 Unit_6e09a0(__int64 a1)
{
  _BYTE* v1;
  __int64 v2;
  __int64* v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  _BYTE* v8;
  __int64 v9;
  char v10;
  int v11;

  v1 = (_BYTE*)(a1 + 847);
  v2 = 2;
  v4 = GameData_212c878[0];
  v5 = *GameData_212c878[0];
  while (1) {
    if (*(_WORD*)(v1 - 19) != 0 && (*(v1 - 16) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v5 + 64) +
                                       8LL * *(unsigned __int16*)(v1 - 19)) +
                            72LL) < 8u) {
      LODWORD(v2) = v2 - 2;
      goto LABEL_16;
    }
    if (*(_WORD*)(v1 - 11) != 0 && (*(v1 - 8) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v5 + 64) +
                                       8LL * *(unsigned __int16*)(v1 - 11)) +
                            72LL) < 8u) {
      break;
    }
    if (*(_WORD*)(v1 - 3) != 0 && (*v1 & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v5 + 64) +
                                       8LL * *(unsigned __int16*)(v1 - 3)) +
                            72LL) < 8u) {
      goto LABEL_16;
    }
    v2 += 3;
    v1 += 24;
    if (v2 == 32) {
      LODWORD(v2) = -1;
      goto LABEL_16;
    }
  }
  LODWORD(v2) = v2 - 1;
LABEL_16:
  result = GameRoutine_6cc0a0(a1);
  v7 = *v4;
  v8 = (_BYTE*)(a1 + 847);
  v9 = 2;
  while (1) {
    if (*(_WORD*)(v8 - 19) != 0 && (*(v8 - 16) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v7 + 64) +
                                       8LL * *(unsigned __int16*)(v8 - 19)) +
                            72LL) < 8u) {
      LODWORD(v9) = v9 - 2;
    LABEL_31:
      if ((_DWORD)v2 == (_DWORD)v9) {
        return result;
      }
      goto LABEL_32;
    }
    if (*(_WORD*)(v8 - 11) != 0 && (*(v8 - 8) & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v7 + 64) +
                                       8LL * *(unsigned __int16*)(v8 - 11)) +
                            72LL) < 8u) {
      break;
    }
    if (*(_WORD*)(v8 - 3) != 0 && (*v8 & 1) != 0 &&
        *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v7 + 64) +
                                       8LL * *(unsigned __int16*)(v8 - 3)) +
                            72LL) < 8u) {
      goto LABEL_31;
    }
    v9 += 3;
    v8 += 24;
    if (v9 == 32) {
      if ((_DWORD)v2 == -1) {
        return result;
      }
      goto LABEL_32;
    }
  }
  if ((_DWORD)v2 == (_DWORD)v9 - 1) {
    return result;
  }
LABEL_32:
  result = game_Unit_EquipFirstWeapon(a1);
  if ((result & 1) != 0) {
    v10 = game_UnitItemList_Sort(a1 + 828, 0, 6);
    result = game_UnitItemList_Sort(a1 + 828, 6, 24);
    if ((v10 & 1) != 0 || (result & 1) != 0) {
      v11 = *(_DWORD*)(a1 + 416);
      if ((v11 & 0x10000000) == 0) {
        *(_DWORD*)(a1 + 416) = v11 | 0x10000000;
        GameRoutine_6c51e0(a1);
        GameRoutine_6c6da0_alt1(a1);
        result = GameRoutine_6c6ec0_alt1(a1);
        *(_DWORD*)(a1 + 416) &= ~0x10000000u;
      }
    }
  }
  return result;
}

__int64 game_Unit_LevelUp(__int64 a1, char a2)
{
  int v4;
  char v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  unsigned int v15;
  int v16;
  unsigned int v17;
  unsigned int v18;
  __int64 result;
  _QWORD v20[4];
  _QWORD* v21;

  LOBYTE(v20[0]) = 0;
  v4 = game_Unit_GetParam(a1, v20, 1);
  v5 = *(_BYTE*)(a1 + 498);
  v6 = v4;
  *(_BYTE*)(a1 + 498) = a2;
  v7 = GameRoutine_9a28e0(47);
  if (game_GameModeData_instance_ != 0 &&
      (v8 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), v7)) != 0 &&
      *(_DWORD*)(v8 + 32) != 0) {
    v20[0] = GameData_1f91f68;
    v20[1] = a1;
    v21 = v20;
    GameRoutine_8c5700(a1, v20);
  }
  else {
    v20[0] = GameData_1f91ff8;
    v20[1] = a1;
    v21 = v20;
    GameRoutine_8c5c60(a1, v20);
  }
  if (v21 == v20) {
    v9 = 32;
  }
  else {
    if (v21 == nullptr) {
      goto LABEL_11;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))(*v21 + v9))((__int64)v21);
LABEL_11:
  *(_BYTE*)(a1 + 498) = v5;
  LOBYTE(v20[0]) = 0;
  v10 = game_Unit_GetParam(a1, v20, 1);
  if (v10 > v6) {
    v11 = *(__int16*)(a1 + 492);
    LOBYTE(v20[0]) = 0;
    v12 = v10 - v6 + v11;
    v13 = game_Unit_GetParam(a1, v20, 1);
    if (*(_WORD*)(a1 + 494) != 0 && v12 != *(__int16*)(a1 + 494)) {
      *(_WORD*)(a1 + 494) = 0;
    }
    if (v13 >= v12) {
      v14 = v12;
    }
    else {
      v14 = v13;
    }
    if (v12 < 0) {
      v14 = 0;
    }
    if (v14 != *(__int16*)(a1 + 492)) {
      *(_WORD*)(a1 + 492) = v14;
    }
  }
  v15 = *(_DWORD*)(a1 + 448);
  nn_os_LockMutex(&game_g_random_mutex);
  v16 = v15 ^ (v15 >> 30);
  v17 =
      1812433253 * ((1812433253 * ((1812433253 * v16) ^
                                   ((unsigned int)(1812433253 * v16) >> 30)) +
                     1) ^
                    ((1812433253 * ((1812433253 * v16) ^
                                    ((unsigned int)(1812433253 * v16) >> 30)) +
                      1) >>
                     30)) +
      2;
  v18 = 1812433253 * (v17 ^ (v17 >> 30)) + 3;
  nn_os_UnlockMutex(&game_g_random_mutex);
  nn_os_LockMutex(&game_g_random_mutex);
  result = nn_os_UnlockMutex(&game_g_random_mutex);
  *(_DWORD*)(a1 + 448) =
      ((((1011558400 * v16) ^ (unsigned int)(1812433253 * v16)) >> 8) ^
       (v18 >> 19) ^ (1011558400 * v16) ^ (1812433253 * v16) ^ v18) &
      0x7FFFFFFF;
  return result;
}

#pragma GCC visibility pop
