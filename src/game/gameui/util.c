#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_15870e0(_QWORD* __return_ptr, _QWORD, _QWORD);
_QWORD* GameRoutine_15883c0(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 Alignment_56b600(void);
__int64 ControlCreator_13633c0(_QWORD);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1571860(__int64*, __int64, char, char, char, char);
__int64 GameRoutine_1572ac0(__int64*, __int64, char, char);
__int64 GameRoutine_15735c0(__int64*, int, int*);
__int64 GameRoutine_15753b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1586d80(__int64, _DWORD*, _DWORD*, __int64, char, char,
                            char, __int64, char, char, char);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1841190(_QWORD, _QWORD);
__int64 GameRoutine_1841470(_QWORD, _QWORD);
__int64 GameRoutine_1841930(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18b3670(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19ac9e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6e3d00(_QWORD, _QWORD);
__int64 GameRoutine_6fbae0(_QWORD, _QWORD);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HasActiveSkill_843420(_QWORD, _QWORD);
__int64 game_UnitSkillList_GetMaxValue(_QWORD, _QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1b47d74;
extern _UNKNOWN GameData_22594f0;
extern _UNKNOWN* GameData_204f348;
extern _UNKNOWN* GameData_212da30;
extern __int64 (*GameData_204d4f8[])();
extern __int64 (*GameData_204d988[])();
extern __int64 (*GameData_204dd88[])();
extern __int64 (*GameData_204efb8[])();
extern __int64 GameData_21c99b0;
extern __int64 GameData_2259348;
extern __int64 GameData_2259350;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212c8a0;
extern __int64* GameData_212c998[148];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern char GameData_1a9f09e;
extern char* GameData_204f370[8];
extern int GameData_21d992c;
extern int GameData_21d9948;
extern int GameData_22593d4;
extern int GameData_22594e8;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_6e5a20(void);
void __attribute__((noreturn)) GameRoutine_705570(void);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 game_gameui_Util_CountAvailableArtsNum(__int64 a1);
__int64 Util_1575150(__int64 a1, __int64 a2, __int64* a3, __int64 a4, int a5,
                     unsigned int a6, unsigned int a7, int a8, char a9);
__int64 Util_1580a10(__int64 result, unsigned __int8 a2);
__int64 Util_1581060(__int64* a1, __int64 a2, unsigned __int16* a3, char a4,
                     unsigned __int8 a5);
_WORD* game_gameui_Util_GetMorphRage(__int64 a1, __int64 a2, __int64 a3);
__int64 game_gameui_Util_SetBasicStatusForUnitInfo(__int64 result, __int64 a2);
__int64 game_gameui_Util_IsVisibleSpecialPage(__int64 a1, __int64 a2);
__int64 game_gameui_Util_SetUnitInfoDetail_lambda0_Invoke(__int64 a1, int* a2);
__int64 game_gameui_Util_CountAvailableArtsNum_lambda0_Invoke(__int64 result,
                                                              unsigned int* a2);
__int64 game_gameui_Util_SetPartsItemIcon_lambda0_Invoke(__int64 a1,
                                                         __int64* a2);
__int64 game_gameui_Util_GetMorphRage_lambda0_Invoke(__int64 result,
                                                     _DWORD* a2);
__int64 game_gameui_Util_SetEfficacyIcons_lambda0_Invoke(__int64 result,
                                                         _DWORD* a2);
__int64 game_gameui_Util_SetEfficacyIcons_lambda1_Invoke(__int64 result,
                                                         _DWORD* a2);
__int64 game_gameui_Util_SetIconTxtNum_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 game_gameui_Util_SetIconTxtNum_lambda1_Invoke(__int64 a1, __int64* a2);
__int64 game_gameui_Util_SetIconTxtNum_lambda2_Invoke(__int64 a1, __int64* a2);
__int64 game_gameui_Util_SetIconTxtNum_lambda3_Invoke(__int64 a1, __int64* a2);
__int64 game_gameui_Util_SetIconTxtDelivery_lambda0_Invoke(__int64 a1,
                                                           __int64* a2);
__int64 game_gameui_Util_SetStatusForClassChange_lambda1_Invoke(__int64 a1,
                                                                __int64 a2);
__int64 game_gameui_Util_GetNewSkillList_lambda0_Invoke(__int64 result,
                                                        _DWORD* a2);
__int64 game_gameui_Util_GetNewSkillList_lambda2_Invoke(__int64 result,
                                                        int* a2);
__int64 game_gameui_Util_GetNewMagicList_lambda0_Invoke(__int64 a1, _DWORD* a2);
__int64 game_gameui_Util_GetNewMagicList_lambda2_Invoke(__int64 result,
                                                        int* a2);
__int64 game_gameui_Util_GetHealPower_lambda0_Invoke(__int64 a1, __int64 a2);
__int64 game_gameui_Util_CollectArtsInfoList_lambda0_Invoke(__int64 result,
                                                            unsigned int* a2);
__int64 game_gameui_Util_CollectBlazeArtsInfo_lambda2_Invoke(__int64 result,
                                                             _DWORD* a2);
__int64 game_gameui_Util_CollectBlazeArtsInfo_lambda1_Invoke(__int64 result,
                                                             _DWORD* a2);
__int64 game_gameui_Util_IsVisibleSpecialPage_lambda0_Invoke(__int64 result,
                                                             _DWORD* a2);
__int64 game_Unit_GetUnknown6cba30(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e3e20(void);
__int64
game_gameui_Util_IsGrowStatusClearMerge_lambda0_Invoke(__int64 result,
                                                       unsigned __int8* a2);
__int64
game_gameui_Util_CollectBlazeArtsInfo_lambda0_Invoke_15b66a0(__int64 result,
                                                             int* a2);
__int64
game_gameui_Util_CollectBlazeArtsInfo_lambda0_Invoke_15b6a00(__int64 result,
                                                             int* a2);

__int64 game_gameui_Util_CountAvailableArtsNum(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  int v15;
  __int64 v16;

  v16 = a1;
  v2 = 32;
  v3 = v13;
  v13[0] = 32;
  v5 = game_UnitSkillList_GetMaxValue(a1 + 1744, v13);
  v15 = 0;
  v14 = v13;
  v13[0] = GameData_204d4f8;
  v13[1] = &v16;
  v13[2] = &v15;
  if ((*(_BYTE*)(a1 + 1536) & 4) == 0) {
    goto LABEL_13;
  }
  v6 = *(_QWORD*)(a1 + 1496);
  v7 = *(_QWORD*)(a1 + 1488);
  if ((int)((unsigned __int64)(v6 - v7) >> 2) < 1) {
    v3 = v13;
  LABEL_12:
    v2 = 32;
    goto LABEL_13;
  }
  v8 = 0;
  v9 = 0;
  v10 = GameData_212c880[0];
  v11 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v11 + 64) +
                             8LL * (*(_DWORD*)(v7 + v8) & 0xFFF)) +
                  104LL) == 2) {
      if (v14 == nullptr) {
        GameRoutine_60a310(0, v4);
      }
      (*(void (**)(_QWORD*, __int64))(*v14 + 48LL))(v14, v7 + v8);
      v11 = *v10;
      v6 = *(_QWORD*)(a1 + 1496);
      v7 = *(_QWORD*)(a1 + 1488);
    }
    ++v9;
    v8 += 4;
  } while (v9 < (int)((unsigned __int64)(v6 - v7) >> 2));
  v3 = v14;
  if (v14 == v13) {
    goto LABEL_12;
  }
  if (v14 != nullptr) {
    v2 = 40;
  LABEL_13:
    (*(void (**)(_QWORD*))(*v3 + v2))(v3);
  }
  return (unsigned int)(v5 + v15 + 3);
}

__int64 Util_1575150(__int64 a1, __int64 a2, __int64* a3, __int64 a4, int a5,
                     unsigned int a6, unsigned int a7, int a8, char a9)
{
  __int64 v10;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 result;
  __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  _QWORD v28[2];

  v10 = *(_QWORD*)(a1 + 8);
  if (v10 == 0 || (v17 = std___1___shared_weak_count_lock(v10)) == 0) {
  LABEL_15:
    result = a3[1];
    if (result == 0) {
      return result;
    }
    goto LABEL_16;
  }
  v18 = *(__int64**)a1;
  v19 = v17;
  if (v18 != nullptr) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                              memory_order_relaxed);
    v20 = std___1___shared_weak_count_lock(v17);
    v21 = v20;
    if ((a9 & 1) != 0) {
      if (v20 != 0) {
        GameRoutine_1571860(v18, a4, 1, 0, 0, 0);
        goto LABEL_9;
      }
    }
    else if (v20 != 0) {
      GameRoutine_1572ac0(v18, a4, 0, 0);
    LABEL_9:
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        std___1___shared_weak_count___release_weak(v21);
      }
    }
    std___1___shared_weak_count___release_weak(v19);
    v22 = ui_LayoutAccessor_FindPane(v18, "Face");
    if (v22 != 0) {
      v22 = __dynamic_cast(v22, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameRoutine_1840740(v22, 0, a4, a7, 1);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    goto LABEL_15;
  }
  (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
  std___1___shared_weak_count___release_weak(v19);
  result = a3[1];
  if (result == 0) {
    return result;
  }
LABEL_16:
  result = std___1___shared_weak_count_lock(result);
  if (result != 0) {
    v24 = result;
    result = *a3;
    if (*a3 != 0) {
      if ((unsigned __int8)a7 == 6) {
        v25 = 0;
      }
      else {
        v25 = (a6 != 2) & ((a5 != 0) | a8);
      }
      result = LayoutAccessor_155e830(result, v25);
      if (v25 != 0) {
        v26 = *a3;
        v27 = a3[1];
        v28[0] = v26;
        v28[1] = v27;
        if (v27 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 16), 1u,
                                    memory_order_relaxed);
          GameRoutine_15753b0(v28, a4, a6, a7);
          result = std___1___shared_weak_count___release_weak(v27);
        }
        else {
          result = GameRoutine_15753b0(v28, a4, a6, a7);
        }
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      return std___1___shared_weak_count___release_weak(v24);
    }
  }
  return result;
}

__int64 Util_1580a10(__int64 result, unsigned __int8 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;

  if (result == 0) {
    return result;
  }
  v3 = result;
  result = game_Unit_GetJob(result);
  if (result == 0) {
    return result;
  }
  v4 = *(_QWORD*)(*(_QWORD*)(result + 24) + 1112LL);
  if (a2 != 12) {
    if (v4 == 0 || a2 == 8 || *(int*)(v3 + 592) < 2) {
    LABEL_21:
      if (a2 == 10 &&
          (v14 = *(_QWORD*)(v3 + 1744), v15 = *(_QWORD*)(v3 + 1752) - v14,
           v21 = GameData_21d992c & 0xFFF,
           (v16 = ((unsigned __int64)(unsigned int)GameData_21d992c >> 5) &
                  0x7F) +
                   1 <=
               v15 >> 2) &&
          ((*(_DWORD*)(v14 + 4LL * (unsigned int)v16) >> GameData_21d992c) &
           1) != 0) {
        v17 = result;
        if ((game_HasActiveSkill_843420(&v21, v3 + 1744) & 1) != 0) {
          return 1;
        }
        v18 = 10;
        result = v17;
      }
      else {
        v18 = a2;
      }
      return *(char*)(result + v18 + 398) > -1;
    }
    if (*(_QWORD*)(result + 88) == 0) {
      v4 = result;
    }
    if (a2 == 10 &&
        (v9 = *(_QWORD*)(v3 + 1744), v10 = *(_QWORD*)(v3 + 1752) - v9,
         v20 = GameData_21d992c & 0xFFF,
         (v11 =
              ((unsigned __int64)(unsigned int)GameData_21d992c >> 5) & 0x7F) +
                 1 <=
             v10 >> 2) &&
        ((*(_DWORD*)(v9 + 4LL * (unsigned int)v11) >> GameData_21d992c) & 1) !=
            0) {
      v12 = result;
      if ((game_HasActiveSkill_843420(&v20, v3 + 1744) & 1) != 0) {
        return 1;
      }
      v13 = 10;
      result = v12;
    }
    else {
      v13 = a2;
    }
    if (*(char*)(v4 + v13 + 398) < 0) {
      goto LABEL_21;
    }
    return 1;
  }
  v5 = *(_QWORD*)(v3 + 1744);
  v6 = *(_QWORD*)(v3 + 1752) - v5;
  v19 = GameData_21d9948 & 0xFFF;
  v7 = ((unsigned __int64)(unsigned int)GameData_21d9948 >> 5) & 0x7F;
  if (v7 + 1 <= v6 >> 2 &&
      ((*(_DWORD*)(v5 + 4LL * (unsigned int)v7) >> GameData_21d9948) & 1) !=
          0) {
    v8 = game_HasActiveSkill_843420(&v19, v3 + 1744);
  }
  else {
    v8 = 0;
  }
  return (v4 == 0) & (v8 ^ 1u);
}

__int64 Util_1581060(__int64* a1, __int64 a2, unsigned __int16* a3, char a4,
                     unsigned __int8 a5)
{
  __int64 v6;
  unsigned __int8* v7;
  unsigned __int8* v8;
  int v9;
  char* v10;
  char* v11;
  int v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  char v22;
  char* v23;
  char* v24;
  char* v25;
  char* v26;
  __int64 v27;
  int* v28;
  unsigned __int64 v29;
  unsigned int v30;
  char* v31;
  __int64 v32;
  unsigned int v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  int v42;
  __int64 v43;
  const char* v44;
  __int64* v45;
  __int64 v46;
  __int64 result;
  __int64 v48;
  __int64 v49;
  int* v50;
  int v51;
  int* v52;
  _QWORD v53[2];
  char* v54;
  _QWORD v55[2];
  char* v56;

  v6 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a3) +
                 24LL);
  v7 = *(unsigned __int8**)(v6 + 488);
  v8 = *(unsigned __int8**)(v6 + 496);
  if (v7 == v8) {
    ui_LayoutAccessor_SetPaneVisible(a1, "A_Mastery", 0);
    v39 = 0;
    goto LABEL_67;
  }
  v9 = 0;
  v51 = (a2 != 0) & a5;
  v10 = (char*)GameData_212da30 + 64;
  v11 = (char*)GameData_212da30 + 36;
  if ((a4 & 1) != 0) {
    v10 = (char*)GameData_212da30 + 60;
  }
  else {
    v11 = (char*)GameData_212da30 + 72;
  }
  v52 = (int*)v11;
  v49 = a2 + 540;
  v50 = (int*)v10;
  do {
    while (v9 > 1) {
      v7 += 2;
      v9 = 2;
      if (v7 == v8) {
        v44 = "A_Mastery";
        v45 = a1;
        v46 = 1;
        goto LABEL_70;
      }
    }
    v12 = v9;
    v13 = game_util_Format("IconMastery%02d", v9);
    v14 = strlen(v13);
    if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_79;
    }
    v15 = v14;
    if (v14 >= 0x17) {
      if ((v14 | 7) == 0x17) {
        v17 = 26;
      }
      else {
        v17 = (v14 | 7) + 1;
      }
      v16 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v17, 16, 0);
      v55[1] = v15;
      v56 = v16;
      v55[0] = v17 | 1;
    LABEL_16:
      memmove(v16, v13, v15);
      goto LABEL_17;
    }
    v16 = (char*)v55 + 1;
    LOBYTE(v55[0]) = 2 * v14;
    if (v14 != 0) {
      goto LABEL_16;
    }
  LABEL_17:
    v16[v15] = 0;
    v18 = game_util_Format("IconMasteryLevel%02d", v12);
    v14 = strlen(v18);
    if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_79:
      String_60a1d0(v14);
    }
    v19 = v14;
    if (v14 >= 0x17) {
      if ((v14 | 7) == 0x17) {
        v21 = 26;
      }
      else {
        v21 = (v14 | 7) + 1;
      }
      v20 = (char*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v21, 16, 0);
      v53[1] = v19;
      v54 = v20;
      v53[0] = v21 | 1;
    LABEL_25:
      memmove(v20, v18, v19);
      goto LABEL_26;
    }
    v20 = (char*)v53 + 1;
    LOBYTE(v53[0]) = 2 * v14;
    if (v14 != 0) {
      goto LABEL_25;
    }
  LABEL_26:
    v22 = v55[0];
    v23 = v56;
    v20[v19] = 0;
    if ((v22 & 1) != 0) {
      v24 = v23;
    }
    else {
      v24 = (char*)v55 + 1;
    }
    ui_LayoutAccessor_SetPaneVisible(a1, v24, 1);
    if ((v53[0] & 1) != 0) {
      v25 = v54;
    }
    else {
      v25 = (char*)v53 + 1;
    }
    ui_LayoutAccessor_SetPaneVisible(a1, v25, 1);
    if ((v55[0] & 1) != 0) {
      v26 = v56;
    }
    else {
      v26 = (char*)v55 + 1;
    }
    v27 = ui_LayoutAccessor_FindPane(a1, v26);
    if (v27 != 0) {
      v27 = __dynamic_cast(v27, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameRoutine_1841190(v27, *v7);
    v28 = v52;
    if (v51 != 0) {
      v29 = *v7;
      if (v29 > 0xC) {
        v30 = 0;
      }
      else {
        v30 = *(unsigned __int8*)(v49 + v29);
      }
      if (v30 >= v7[1]) {
        v28 = v52;
      }
      else {
        v28 = v50;
      }
    }
    if ((v53[0] & 1) != 0) {
      v31 = v54;
    }
    else {
      v31 = (char*)v53 + 1;
    }
    v32 = ui_LayoutAccessor_FindPane(a1, v31);
    if (v32 != 0) {
      v32 = __dynamic_cast(v32, GameData_212d670[0], GameData_212d678[0], 0);
      v33 = v7[1];
      if (v32 != 0) {
        v34 = *v28;
        v35 = v32;
        v36 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v32 + 88LL))(v32, 0);
        if (v36 != 0) {
          *(_DWORD*)(v36 + 12) = v34;
        }
        v32 = v35;
      }
    }
    else {
      v33 = v7[1];
    }
    GameRoutine_1841470(v32, v33);
    if ((v53[0] & 1) != 0 && v54 != nullptr) {
      v37 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v37 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v54);
    }
    if ((v55[0] & 1) != 0 && v56 != nullptr) {
      v38 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v38 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v56);
    }
    v9 = v12 + 1;
    v7 += 2;
  } while (v7 != v8);
  v39 = 1;
  ui_LayoutAccessor_SetPaneVisible(a1, "A_Mastery", 1);
  if (v12 != 0) {
    goto LABEL_71;
  }
LABEL_67:
  v40 = game_util_Format("IconMastery%02d", v39);
  ui_LayoutAccessor_SetPaneVisible(a1, v40, 0);
  v41 = game_util_Format("IconMasteryLevel%02d", v39);
  ui_LayoutAccessor_SetPaneVisible(a1, v41, 0);
  v42 = v39 + 1;
  if (v42 != 2) {
    v43 = game_util_Format("IconMastery%02d", v42);
    ui_LayoutAccessor_SetPaneVisible(a1, v43, 0);
    v44 = (const char*)game_util_Format("IconMasteryLevel%02d", v42);
    v45 = a1;
    v46 = 0;
  LABEL_70:
    ui_LayoutAccessor_SetPaneVisible(v45, v44, v46);
  }
LABEL_71:
  result = ui_LayoutAccessor_FindAlignment(a1, "A_Mastery");
  if (result != 0) {
    Alignment_56b600();
    result = a1[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v48 = result;
        result = *a1;
        if (*a1 != 0) {
          result = ControlCreator_13633c0(result);
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
          return std___1___shared_weak_count___release_weak(v48);
        }
      }
    }
  }
  return result;
}

_WORD* game_gameui_Util_GetMorphRage(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD* result;
  __int64 v5;
  bool v6;
  __int64 v7;
  void* v8;
  void** v9;
  _WORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  _QWORD v19[4];
  _QWORD* v20;
  __int64 v21;

  result = &GameData_1b47d74;
  if (a1 != 0 && a2 != 0) {
    v5 = *(_QWORD*)(a1 + 440);
    v21 = 0;
    if (v5 != 0) {
      v6 = (unsigned int)*(unsigned __int8*)(v5 + 16) - 1 >= 2;
      v7 = 288;
      if (!v6) {
        v7 = 384;
      }
    }
    else {
      v7 = 288;
    }
    v9 = (void**)(*(_QWORD*)(a2 + 24) + v7 + 32);
    v8 = *v9;
    v10 = (int)((unsigned __int64)((_BYTE*)v9[1] - (_BYTE*)*v9) >> 2) <= 0
              ? &GameData_1b47d74
              : v8;
    if ((*v10 & 0xFFF) != 0) {
      v11 = v19;
      v19[0] = GameData_204d988;
      v19[1] = v10;
      v20 = v19;
      v19[2] = &v21;
      if ((*(_BYTE*)(a1 + 1536) & 0x40) != 0) {
        v12 = *(_QWORD*)(a1 + 1496);
        v13 = *(_QWORD*)(a1 + 1488);
        if ((int)((unsigned __int64)(v12 - v13) >> 2) < 1) {
          v11 = v19;
        }
        else {
          v14 = 0;
          v15 = 0;
          v16 = GameData_212c880[0];
          v17 = *GameData_212c880[0];
          do {
            if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v17 + 64) +
                                     8LL * (*(_DWORD*)(v13 + v14) & 0xFFF)) +
                          104LL) == 6) {
              if (v20 == nullptr) {
                GameRoutine_60a310(0, a2);
              }
              (*(void (**)(_QWORD*, __int64))(*v20 + 48LL))(v20, v13 + v14);
              v17 = *v16;
              v12 = *(_QWORD*)(a1 + 1496);
              v13 = *(_QWORD*)(a1 + 1488);
            }
            ++v15;
            v14 += 4;
          } while (v15 < (int)((unsigned __int64)(v12 - v13) >> 2));
          v11 = v20;
          if (v20 != v19) {
            if (v20 != nullptr) {
              v18 = 40;
            LABEL_24:
              (*(void (**)(_QWORD*, __int64, __int64))(*v11 + v18))(v11, a2,
                                                                    a3);
            }
            if (v21 != 0) {
              return (_WORD*)v21;
            }
            else {
              return v10;
            }
          }
        }
      }
      v18 = 32;
      goto LABEL_24;
    }
  }
  return result;
}

__int64 game_gameui_Util_SetBasicStatusForUnitInfo(__int64 result, __int64 a2)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD v7[2];
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;
  __int64 v12;
  __int64 v13;

  v13 = a2;
  if (a2 == 0) {
    return result;
  }
  v2 = result;
  v12 = 0;
  v10[0] = GameData_204dd88;
  v10[1] = &v13;
  v11 = v10;
  v10[2] = (char*)&v12 + 4;
  v10[3] = &v12;
  v3 = GameRoutine_1586d80(result, (_DWORD*)GameData_2259348,
                           (_DWORD*)GameData_2259350, (__int64)v10, 1, 0, 1, a2,
                           0, 0, 0);
  if (v11 == v10) {
    v4 = 32;
    goto LABEL_6;
  }
  if (v11 != nullptr) {
    v4 = 40;
  LABEL_6:
    (*(void (**)(void))(*v11 + v4))();
  }
  v7[0] = "L_TotalNum";
  v7[1] = 10;
  GameRoutine_15870e0(&v8, v2, v7);
  result = v9;
  if (v9 == 0) {
    return result;
  }
  v5 = std___1___shared_weak_count_lock(v9);
  v6 = v8;
  result = v9;
  if (v9 != 0) {
    result = std___1___shared_weak_count___release_weak(v9);
  }
  if (v5 != 0 && v6 != 0) {
    result = GameRoutine_19ac9e0(v6, v3, HIDWORD(v12), (unsigned int)v12, 1,
                                 0xFFFFFFFFLL);
  }
  else if (v5 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    return std___1___shared_weak_count___release_weak(v5);
  }
  return result;
}

__int64 game_gameui_Util_IsVisibleSpecialPage(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[4];
  _QWORD* v14;
  unsigned __int8 v15;

  v3 = v13;
  v15 = 0;
  v13[0] = GameData_204efb8;
  v13[1] = &v15;
  v4 = *(_BYTE*)(a1 + 1536);
  v14 = v13;
  if ((v4 & 8) == 0) {
    goto LABEL_12;
  }
  v5 = *(_QWORD*)(a1 + 1496);
  v6 = *(_QWORD*)(a1 + 1488);
  if ((int)((unsigned __int64)(v5 - v6) >> 2) < 1) {
    v3 = v13;
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
                  104LL) == 3) {
      if (v14 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*, __int64))(*v14 + 48LL))(v14, v6 + v7);
      v10 = *v9;
      v5 = *(_QWORD*)(a1 + 1496);
      v6 = *(_QWORD*)(a1 + 1488);
    }
    ++v8;
    v7 += 4;
  } while (v8 < (int)((unsigned __int64)(v5 - v6) >> 2));
  v3 = v14;
  if (v14 == v13) {
    goto LABEL_12;
  }
  if (v14 != nullptr) {
    v11 = 40;
  LABEL_13:
    (*(void (**)(_QWORD*, __int64))(*v3 + v11))(v3, a2);
  }
  return v15;
}

__int64 game_gameui_Util_SetUnitInfoDetail_lambda0_Invoke(__int64 a1, int* a2)
{
  int* v2;
  int v4;
  __int64* v5;

  v2 = *(int**)(a1 + 16);
  v4 = *v2;
  v5 = *(__int64**)(a1 + 8);
  ++*v2;
  return GameRoutine_15735c0(v5, v4, a2);
}

__int64 game_gameui_Util_CountAvailableArtsNum_lambda0_Invoke(__int64 result,
                                                              unsigned int* a2)
{
  unsigned __int64 v2;
  __int64 v3;
  __int64 v4;

  v2 = *a2;
  v3 = **(_QWORD**)(result + 8);
  v4 = *(_QWORD*)(v3 + 1072);
  if (((v2 >> 5) & 0x7F) + 1 > (*(_QWORD*)(v3 + 1080) - v4) >> 2 ||
      ((*(_DWORD*)(v4 + 4 * ((v2 >> 5) & 0x7F)) >> v2) & 1) == 0) {
    ++**(_DWORD**)(result + 16);
  }
  return result;
}

__int64 game_gameui_Util_SetPartsItemIcon_lambda0_Invoke(__int64 a1,
                                                         __int64* a2)
{
  __int64 v2;

  v2 = *a2;
  if (v2 != 0) {
    return GameRoutine_136a920(ui_Manager_instance_ + 1264, v2, 0, 7,
                               "IconEmpty");
  }
  else {
    return 0;
  }
}

__int64 game_gameui_Util_GetMorphRage_lambda0_Invoke(__int64 result, _DWORD* a2)
{
  if (((*a2 ^ **(_DWORD**)(result + 8)) & 0xFFF) == 0) {
    **(_QWORD**)(result + 16) = a2;
  }
  return result;
}

__int64 game_gameui_Util_SetEfficacyIcons_lambda0_Invoke(__int64 result,
                                                         _DWORD* a2)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v4;
  int* v5;
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

  v2 = *a2 & 0xFFF;
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v2) +
                250LL) == 2) {
    v3 = *(__int64**)(result + 8);
    v5 = (int*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (__int64)v5 - *v3;
      v9 = (v8 >> 2) + 1;
      if (v9 >> 62 != 0) {
        GameRoutine_6e5a20();
      }
      v10 = v4 - v7;
      v11 = fw_memory_g_heap_manager_ptr;
      if (v10 >> 1 > v9) {
        v9 = v10 >> 1;
      }
      if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFFCLL) {
        v12 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v12 = v9;
      }
      if (v12 != 0) {
        if (v12 >> 62 != 0) {
          GameRoutine_60a210(result);
        }
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v12, 16, 0);
      }
      else {
        v13 = 0;
      }
      v14 = v13 + 4 * v12;
      v15 = v13 + v8 - 4 * (v8 >> 2);
      *(_DWORD*)(v13 + v8) = v2;
      v6 = v13 + v8 + 4;
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
      *v5 = *a2 & 0xFFF;
      v6 = (__int64)(v5 + 1);
    }
    v3[1] = v6;
  }
  return result;
}

__int64 game_gameui_Util_SetEfficacyIcons_lambda1_Invoke(__int64 result,
                                                         _DWORD* a2)
{
  __int64 v2;
  __int64* v3;
  unsigned __int64 v4;
  int* v5;
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

  v2 = *a2 & 0xFFF;
  if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8 * v2) +
                250LL) == 1) {
    v3 = *(__int64**)(result + 8);
    v5 = (int*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (__int64)v5 - *v3;
      v9 = (v8 >> 2) + 1;
      if (v9 >> 62 != 0) {
        GameRoutine_6e5a20();
      }
      v10 = v4 - v7;
      v11 = fw_memory_g_heap_manager_ptr;
      if (v10 >> 1 > v9) {
        v9 = v10 >> 1;
      }
      if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFFCLL) {
        v12 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v12 = v9;
      }
      if (v12 != 0) {
        if (v12 >> 62 != 0) {
          GameRoutine_60a210(result);
        }
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v12, 16, 0);
      }
      else {
        v13 = 0;
      }
      v14 = v13 + 4 * v12;
      v15 = v13 + v8 - 4 * (v8 >> 2);
      *(_DWORD*)(v13 + v8) = v2;
      v6 = v13 + v8 + 4;
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
      *v5 = *a2 & 0xFFF;
      v6 = (__int64)(v5 + 1);
    }
    v3[1] = v6;
  }
  return result;
}

__int64 game_gameui_Util_SetIconTxtNum_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  int v4;
  __int64 v5;

  v2 = *a2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22594f0) != 0) {
    GameData_22594e8 = -1;
    __cxa_guard_release(&GameData_22594f0);
  }
  if (v2 != 0) {
    v4 = GameData_22594e8;
    v5 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 88LL))(v2, 0);
    if (v5 != 0) {
      *(_DWORD*)(v5 + 12) = v4;
    }
  }
  return GameRoutine_1841930(
      v2,
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c998[0] + 64) +
                            8LL * *(unsigned __int8*)(*(_QWORD*)(a1 + 8) +
                                                      12LL)) +
                 64LL),
      0);
}

__int64 game_gameui_Util_SetIconTxtNum_lambda1_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  int v4;
  __int64 v5;
  __int64 v6;
  char* v7;

  v2 = *a2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22594f0) != 0) {
    GameData_22594e8 = -1;
    __cxa_guard_release(&GameData_22594f0);
  }
  if (v2 != 0) {
    v4 = GameData_22594e8;
    v5 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 88LL))(v2, 0);
    if (v5 != 0) {
      *(_DWORD*)(v5 + 12) = v4;
    }
  }
  if (v2 == 0) {
    return 0;
  }
  v6 = *(_QWORD*)(*(_QWORD*)(*GameData_212c8a0 + 64) +
                  8LL * *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 24LL));
  if (v6 == 0) {
    return 0;
  }
  if ((unsigned int)*(unsigned __int8*)(v6 + 32) - 1 > 4) {
    v7 = &GameData_1a9f09e;
  }
  else {
    v7 =
        (char*)*(&GameData_204f348 + (unsigned __int8)(*(_BYTE*)(v6 + 32) - 1));
  }
  return GameRoutine_136a920(ui_Manager_instance_ + 1264, v2, 0, 2, v7);
}

__int64 game_gameui_Util_SetIconTxtNum_lambda2_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  int v4;
  __int64 v5;

  v2 = *a2;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_22594f0) != 0) {
    GameData_22594e8 = -1;
    __cxa_guard_release(&GameData_22594f0);
  }
  if (v2 != 0) {
    v4 = GameData_22594e8;
    v5 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 88LL))(v2, 0);
    if (v5 != 0) {
      *(_DWORD*)(v5 + 12) = v4;
    }
  }
  return GameRoutine_1841930(
      v2,
      *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                 8LL * (*(_DWORD*)(*(_QWORD*)(a1 + 8) + 88LL) & 0xFFF)),
      0);
}

__int64 game_gameui_Util_SetIconTxtNum_lambda3_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int* v4;
  int v5;
  __int64 v6;
  char* v7;
  int v9;

  v2 = *a2;
  v3 = **(unsigned int**)(a1 + 8);
  if ((unsigned int)v3 >= 8) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                              memory_order_acquire) &
         1) != 0) {
      v4 = &GameData_22594e8;
    }
    else {
      v9 = __cxa_guard_acquire(&GameData_22594f0);
      v4 = &GameData_22594e8;
      if (v9 != 0) {
        GameData_22594e8 = -1;
        __cxa_guard_release(&GameData_22594f0);
        v4 = &GameData_22594e8;
      }
    }
  }
  else {
    v4 = &GameData_22593d4;
  }
  if (v2 == 0) {
    return 0;
  }
  v5 = *v4;
  v6 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 88LL))(v2, 0);
  if (v6 != 0) {
    *(_DWORD*)(v6 + 12) = v5;
  }
  if ((unsigned int)v3 > 7) {
    v7 = &GameData_1a9f09e;
  }
  else {
    v7 = GameData_204f370[v3];
  }
  return GameRoutine_136a920(ui_Manager_instance_ + 1264, v2, 0, 7, v7);
}

__int64 game_gameui_Util_SetIconTxtDelivery_lambda0_Invoke(__int64 a1,
                                                           __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int* v4;
  int v5;
  __int64 v6;
  char* v7;
  int v9;

  v2 = *a2;
  v3 = **(unsigned int**)(a1 + 8);
  if ((unsigned int)v3 >= 8) {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                              memory_order_acquire) &
         1) != 0) {
      v4 = &GameData_22594e8;
    }
    else {
      v9 = __cxa_guard_acquire(&GameData_22594f0);
      v4 = &GameData_22594e8;
      if (v9 != 0) {
        GameData_22594e8 = -1;
        __cxa_guard_release(&GameData_22594f0);
        v4 = &GameData_22594e8;
      }
    }
  }
  else {
    v4 = &GameData_22593d4;
  }
  if (v2 == 0) {
    return 0;
  }
  v5 = *v4;
  v6 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v2 + 88LL))(v2, 0);
  if (v6 != 0) {
    *(_DWORD*)(v6 + 12) = v5;
  }
  if ((unsigned int)v3 > 7) {
    v7 = &GameData_1a9f09e;
  }
  else {
    v7 = GameData_204f370[v3];
  }
  return GameRoutine_136a920(ui_Manager_instance_ + 1264, v2, 0, 7, v7);
}

__int64 game_gameui_Util_SetStatusForClassChange_lambda1_Invoke(__int64 a1,
                                                                __int64 a2)
{
  int* v2;
  int v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  _QWORD v10[2];
  __int64 v11;
  __int64 v12;

  v2 = *(int**)(a1 + 16);
  v5 = *v2;
  v6 = **(_QWORD**)(a1 + 8);
  ++*v2;
  v10[0] = game_util_Format("L_ClassSkillItem%02d", v5);
  v10[1] = strlen(v10[0]);
  GameRoutine_15883c0(&v11, v6, v10);
  result = v12;
  if (v12 != 0) {
    v8 = std___1___shared_weak_count_lock(v12);
    v9 = v11;
    result = v12;
    if (v12 != 0) {
      result = std___1___shared_weak_count___release_weak(v12);
    }
    if (v8 != 0 && v9 != 0) {
      result = GameRoutine_18b3670(v9, a2, **(_QWORD**)(a1 + 24), 1);
    }
    else if (v8 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      return std___1___shared_weak_count___release_weak(v8);
    }
  }
  return result;
}

__int64 game_gameui_Util_GetNewSkillList_lambda0_Invoke(__int64 result,
                                                        _DWORD* a2)
{
  __int64* v2;
  __int64 v3;
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

  v2 = *(__int64**)(result + 8);
  v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  v5 = (_QWORD*)v2[1];
  v4 = v2[2];
  if ((unsigned __int64)v5 >= v4) {
    v7 = *v2;
    v8 = (__int64)v5 - *v2;
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
    *(_QWORD*)(v13 + v8) = v3;
    v6 = v13 + v8 + 8;
    result = memcpy(v15, v7, v8);
    *v2 = v15;
    v2[1] = v6;
    v2[2] = v14;
    if (v7 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v16 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v16, v7);
    }
  }
  else {
    *v5 = v3;
    v6 = (__int64)(v5 + 1);
  }
  v2[1] = v6;
  return result;
}

__int64 game_gameui_Util_GetNewSkillList_lambda2_Invoke(__int64 result, int* a2)
{
  char** v2;
  char* v3;
  char* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  char* v9;
  int v11;
  __int64 v12;
  char* v13;
  char* v14;
  __int64 v15;

  v2 = *(char***)(result + 8);
  v4 = *v2;
  v3 = v2[1];
  if (*v2 != v3) {
    v5 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    v6 = v3 - v4 - 8;
    if ((~(_BYTE)v6 & 0x18) != 0) {
      v7 = ((unsigned __int8)((unsigned int)v6 >> 3) + 1) & 3;
      while (*(_QWORD*)v4 != v5) {
        v4 += 8;
        if (--v7 == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
    LABEL_6:
      if (v6 < 0x18) {
        return result;
      }
      for (v4 += 16;; v4 += 32) {
        if (*((_QWORD*)v4 - 2) == v5) {
          v4 -= 16;
          goto LABEL_17;
        }
        if (*((_QWORD*)v4 - 1) == v5) {
          v4 -= 8;
          goto LABEL_17;
        }
        if (*(_QWORD*)v4 == v5) {
          goto LABEL_17;
        }
        if (*((_QWORD*)v4 + 1) == v5) {
          break;
        }
        v8 = v4 + 16;
        if (v8 == v3) {
          return result;
        }
      }
      v4 += 8;
    }
  }
LABEL_17:
  v9 = v4 + 8;
  if (v4 != v3 && v9 != v3) {
    v11 = *a2;
    v12 = GameData_21c99b0;
    do {
      if (*(_QWORD*)v9 !=
          *(_QWORD*)(*(_QWORD*)(v12 + 64) + 8LL * (v11 & 0xFFF))) {
        *(_QWORD*)v4 = *(_QWORD*)v9;
        v4 += 8;
        v12 = GameData_21c99b0;
        v11 = *a2;
      }
      v9 += 8;
    } while (v9 != v3);
    v3 = *(char**)(*(_QWORD*)(result + 8) + 8LL);
  }
  if (v4 != v3) {
    v13 = v3;
    v14 = v2[1];
    v15 = v14 - v13;
    if (v14 != v13) {
      result = memmove(v4, v13, v14 - v13);
    }
    v2[1] = &v4[v15];
  }
  return result;
}

__int64 game_gameui_Util_GetNewMagicList_lambda0_Invoke(__int64 a1, _DWORD* a2)
{
  __int64* v4;
  __int64 result;
  __int64* v6;
  __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;

  v4 = GameData_212c880[0];
  result = GameRoutine_6fbae0(
      *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF)),
      **(_QWORD**)(a1 + 16));
  if (result != 0 &&
      (unsigned int)*(unsigned __int8*)(*(_QWORD*)(result + 24) + 584LL) - 1 <=
          1) {
    v6 = *(__int64**)(a1 + 8);
    v7 = *(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8LL * (*a2 & 0xFFF));
    v9 = (_QWORD*)v6[1];
    v8 = v6[2];
    if ((unsigned __int64)v9 >= v8) {
      v11 = *v6;
      v12 = (__int64)v9 - *v6;
      v13 = (v12 >> 3) + 1;
      if (v13 >> 61 != 0) {
        GameRoutine_705570();
      }
      v14 = v8 - v11;
      v15 = fw_memory_g_heap_manager_ptr;
      if (v14 >> 2 > v13) {
        v13 = v14 >> 2;
      }
      if ((unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL) {
        v16 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v16 = v13;
      }
      if (v16 != 0) {
        if (v16 >> 61 != 0) {
          GameRoutine_60a210(result);
        }
        v17 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v16, 16, 0);
      }
      else {
        v17 = 0;
      }
      v18 = v17 + 8 * v16;
      v19 = v17 + v12 - 8 * (v12 >> 3);
      *(_QWORD*)(v17 + v12) = v7;
      v10 = v17 + v12 + 8;
      result = memcpy(v19, v11, v12);
      *v6 = v19;
      v6[1] = v10;
      v6[2] = v18;
      if (v11 != 0) {
        v20 = 128;
        if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) == 0) {
          v20 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v20, v11);
      }
    }
    else {
      *v9 = v7;
      v10 = (__int64)(v9 + 1);
    }
    v6[1] = v10;
  }
  return result;
}

__int64 game_gameui_Util_GetNewMagicList_lambda2_Invoke(__int64 result, int* a2)
{
  char** v2;
  char* v3;
  char* v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  char* v8;
  char* v9;
  int v11;
  __int64 v12;
  char* v13;
  char* v14;
  __int64 v15;

  v2 = *(char***)(result + 8);
  v4 = *v2;
  v3 = v2[1];
  if (*v2 != v3) {
    v5 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
    v6 = v3 - v4 - 8;
    if ((~(_BYTE)v6 & 0x18) != 0) {
      v7 = ((unsigned __int8)((unsigned int)v6 >> 3) + 1) & 3;
      while (*(_QWORD*)v4 != v5) {
        v4 += 8;
        if (--v7 == 0) {
          goto LABEL_6;
        }
      }
    }
    else {
    LABEL_6:
      if (v6 < 0x18) {
        return result;
      }
      for (v4 += 16;; v4 += 32) {
        if (*((_QWORD*)v4 - 2) == v5) {
          v4 -= 16;
          goto LABEL_17;
        }
        if (*((_QWORD*)v4 - 1) == v5) {
          v4 -= 8;
          goto LABEL_17;
        }
        if (*(_QWORD*)v4 == v5) {
          goto LABEL_17;
        }
        if (*((_QWORD*)v4 + 1) == v5) {
          break;
        }
        v8 = v4 + 16;
        if (v8 == v3) {
          return result;
        }
      }
      v4 += 8;
    }
  }
LABEL_17:
  v9 = v4 + 8;
  if (v4 != v3 && v9 != v3) {
    v11 = *a2;
    v12 = GameData_21c99b0;
    do {
      if (*(_QWORD*)v9 !=
          *(_QWORD*)(*(_QWORD*)(v12 + 64) + 8LL * (v11 & 0xFFF))) {
        *(_QWORD*)v4 = *(_QWORD*)v9;
        v4 += 8;
        v12 = GameData_21c99b0;
        v11 = *a2;
      }
      v9 += 8;
    } while (v9 != v3);
    v3 = *(char**)(*(_QWORD*)(result + 8) + 8LL);
  }
  if (v4 != v3) {
    v13 = v3;
    v14 = v2[1];
    v15 = v14 - v13;
    if (v14 != v13) {
      result = memmove(v4, v13, v14 - v13);
    }
    v2[1] = &v4[v15];
  }
  return result;
}

__int64

game_gameui_Util_IsGrowStatusClearMerge_lambda0_Invoke(__int64 result,
                                                       unsigned __int8* a2)
{
  if (*(unsigned __int16*)(**(_QWORD**)(result + 8) + 2LL * *a2 + 514) !=
      *(unsigned __int16*)(**(_QWORD**)(result + 16) + 2LL * *a2 + 514)) {
    **(_BYTE**)(result + 24) = 1;
  }
  return result;
}

__int64 game_gameui_Util_GetHealPower_lambda0_Invoke(__int64 a1, __int64 a2)
{
  return game_HasActiveSkill_843420(
      a2, *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                8LL * **(unsigned __int16**)(a1 + 8)) +
                     24LL) +
              8LL);
}

__int64 game_gameui_Util_CollectArtsInfoList_lambda0_Invoke(__int64 result,
                                                            unsigned int* a2)
{
  unsigned __int64 v2;
  _BYTE* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v2 = *a2;
  v3 = *(_BYTE**)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                             8 * (v2 & 0xFFF)) +
                  80LL);
  if (v3 == nullptr || *v3 == 0) {
    v4 = **(_QWORD**)(result + 8);
    v5 = *(_QWORD*)(v4 + 1080);
    v6 = *(_QWORD*)(v4 + 1072);
    if (((v2 >> 5) & 0x7F) + 1 <= (v5 - v6) >> 2 &&
        ((*(_DWORD*)(v6 + 4 * ((v2 >> 5) & 0x7F)) >> v2) & 1) != 0) {
      v7 = *(_QWORD*)(result + 16);
    }
    else {
      v7 = *(_QWORD*)(result + 24);
    }
    return GameRoutine_6e3d00(v7, a2);
  }
  return result;
}

__int64

game_gameui_Util_CollectBlazeArtsInfo_lambda0_Invoke_15b66a0(__int64 result,
                                                             int* a2)
{
  int v2;
  __int64* v3;
  unsigned __int64 v4;
  _DWORD* v5;
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

  v2 = *a2;
  if ((*a2 & 0xFFF) != 0) {
    v3 = *(__int64**)(result + 8);
    v5 = (_DWORD*)v3[1];
    v4 = v3[2];
    if ((unsigned __int64)v5 >= v4) {
      v7 = *v3;
      v8 = (__int64)v5 - *v3;
      v9 = (v8 >> 2) + 1;
      if (v9 >> 62 != 0) {
        GameRoutine_6e3e20();
      }
      v10 = v4 - v7;
      v11 = fw_memory_g_heap_manager_ptr;
      if (v10 >> 1 > v9) {
        v9 = v10 >> 1;
      }
      if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFFCLL) {
        v12 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v12 = v9;
      }
      if (v12 != 0) {
        if (v12 >> 62 != 0) {
          GameRoutine_60a210(result);
        }
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v12, 16, 0);
      }
      else {
        v13 = 0;
      }
      v14 = v13 + 4 * v12;
      v15 = v13 + v8 - 4 * (v8 >> 2);
      *(_DWORD*)(v13 + v8) = v2;
      v6 = v13 + v8 + 4;
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

__int64 game_gameui_Util_CollectBlazeArtsInfo_lambda2_Invoke(__int64 result,
                                                             _DWORD* a2)
{
  __int64 v2;

  if ((*a2 & 0xFFF) != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (*a2 & 0xFFF));
    if (v2 != 0 && *(_BYTE*)(v2 + 104) == 3 &&
        (unsigned int)*(unsigned __int8*)(v2 + 250) - 33 <= 1) {
      return GameRoutine_6e3d00(*(_QWORD*)(result + 8) + 48LL, a2);
    }
  }
  return result;
}

__int64

game_gameui_Util_CollectBlazeArtsInfo_lambda0_Invoke_15b6a00(__int64 result,
                                                             int* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  int* v11;
  _QWORD* v12;
  unsigned __int64 v13;
  int* v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  int v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;

  if ((*a2 & 0xFFF) == 0) {
    return result;
  }
  v3 = result;
  v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (v4 != 0 && *(_BYTE*)(v4 + 104) == 3 &&
      (unsigned int)*(unsigned __int8*)(v4 + 250) - 33 < 2) {
    return result;
  }
  result = game_Unit_GetUnknown6cba30(**(_QWORD**)(result + 8));
  v6 = *a2;
  if ((unsigned __int8)result == 2) {
    **(_DWORD**)(v3 + 16) = v6;
  }
  if ((v6 & 0xFFF) != 0) {
    v7 = *(_QWORD*)(v3 + 24);
    v39 = v6;
    v8 = *(_QWORD*)(v7 + 32);
    if (v8 == 0) {
      GameRoutine_60a310(0, v5);
    }
    result = (*(__int64 (**)(__int64, int*))(*(_QWORD*)v8 + 48LL))(v8, &v39);
    if ((result & 1) != 0) {
      v9 = *(__int64**)(v3 + 32);
      v11 = (int*)v9[1];
      v10 = v9[2];
      if ((unsigned __int64)v11 < v10) {
        *v11 = *a2;
        v9[1] = (__int64)(v11 + 1);
        return result;
      }
      v23 = *v9;
      v24 = (__int64)v11 - *v9;
      v25 = (v24 >> 2) + 1;
      if (v25 >> 62 != 0) {
      LABEL_46:
        GameRoutine_6e3e20();
      }
      v26 = v10 - v23;
      v27 = fw_memory_g_heap_manager_ptr;
      if (v26 >> 1 > v25) {
        v25 = v26 >> 1;
      }
      if ((unsigned __int64)v26 >= 0x7FFFFFFFFFFFFFFCLL) {
        v28 = 0x3FFFFFFFFFFFFFFFLL;
      }
      else {
        v28 = v25;
      }
      if (v28 == 0) {
        v29 = 0;
        goto LABEL_40;
      }
      if (v28 >> 62 != 0) {
      LABEL_47:
        GameRoutine_60a210(result);
      }
      v29 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v28, 16, 0);
    LABEL_40:
      v34 = *a2;
      v35 = v29 + 4 * v28;
      v36 = v29 + v24 - 4 * (v24 >> 2);
      *(_DWORD*)(v29 + v24) = v34;
      v37 = v29 + v24 + 4;
      result = memcpy(v36, v23, v24);
      *v9 = v36;
      v9[1] = v37;
      v9[2] = v35;
      if (v23 != 0) {
        v38 = 128;
        if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) == 0) {
          v38 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v38, v23);
      }
      v9[1] = v37;
      return result;
    }
  }
  v12 = *(_QWORD**)(v3 + 32);
  v14 = (int*)v12[4];
  v13 = v12[5];
  if ((unsigned __int64)v14 >= v13) {
    v16 = v12[3];
    v17 = (char*)v14 - v16;
    v18 = ((__int64)v14 - v16) >> 2;
    v19 = v18 + 1;
    if ((unsigned __int64)(v18 + 1) >> 62 != 0) {
      goto LABEL_46;
    }
    v20 = v13 - v16;
    if (v20 >> 1 > v19) {
      v19 = v20 >> 1;
    }
    if ((unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFFCLL) {
      v21 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v21 = v19;
    }
    if (v21 != 0) {
      if (v21 >> 62 != 0) {
        goto LABEL_47;
      }
      v22 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v21, 16, 0);
    }
    else {
      v22 = 0;
    }
    v30 = *a2;
    v31 = v22 + 4 * v21;
    v32 = (__int64)&v17[v22 + -4 * v18];
    *(_DWORD*)&v17[v22] = v30;
    v15 = (__int64)&v17[v22 + 4];
    result = memcpy(v32, v16, v17);
    v12[3] = v32;
    v12[4] = v15;
    v12[5] = v31;
    if (v16 != 0) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v33, v16);
    }
  }
  else {
    *v14 = *a2;
    v15 = (__int64)(v14 + 1);
  }
  v12[4] = v15;
  return result;
}

__int64 game_gameui_Util_CollectBlazeArtsInfo_lambda1_Invoke(__int64 result,
                                                             _DWORD* a2)
{
  __int64 v2;

  if ((*a2 & 0xFFF) != 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (*a2 & 0xFFF));
    if (v2 != 0 && *(_BYTE*)(v2 + 104) == 3 &&
        (unsigned int)*(unsigned __int8*)(v2 + 250) - 33 <= 1) {
      return GameRoutine_6e3d00(*(_QWORD*)(result + 8) + 48LL, a2);
    }
  }
  return result;
}

__int64 game_gameui_Util_IsVisibleSpecialPage_lambda0_Invoke(__int64 result,
                                                             _DWORD* a2)
{
  **(_BYTE**)(result + 8) |=
      (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                            8LL * (*a2 & 0xFFF)) +
                 754LL) &
       0x400) == 0;
  return result;
}

#pragma GCC visibility pop
