#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_2095a40[])();
extern __int64 (*game_menu_anonymous_EquipInfoItem_MorphInfo_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c880[5];
__int64 game_menu_DeployUnitInfo_OnAddMenuItem_lambda0_Invoke(__int64 result,
                                                              _DWORD* a2);
__int64 game_HasSkill(_QWORD, _QWORD);
__int64
game_menu_DeployUnitInfo_OnAddMenuItem_lambda1_Invoke_16ca240(__int64 a1,
                                                              int* a2);
_QWORD*
BasicMenuCursor_16e0c00_alt1(_QWORD* result,
                             __int64) __asm__("BasicMenuCursor_16e0c00");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
extern __int64 (*GameData_2095a80[])();
extern __int64 (*GameData_2095b00[])();
extern __int64 (*game_menu_anonymous_EquipInfoItem_AnimalInfo_vtable[])();
extern __int64 (*game_menu_anonymous_EquipInfoItem_LegionInfo_vtable[])();
unsigned __int64 EquipUnitSelectMenuItem_16d25e0(__int64, __int64, char*,
                                                 __int64);
void __attribute__((noreturn)) GameRoutine_60a310();
_QWORD* DeployUnitInfo_Unknown137(__int64* a1, unsigned int a2);

_QWORD* DeployUnitInfo_Unknown137(__int64* a1, unsigned int a2)
{
  __int64 v3;
  __int64 v4;
  _QWORD* result;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 (**v18)();
  __int64* v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  int v30;
  struct {
    _QWORD v31[2];
    __int64* v32;
    __int64* v33;
    _QWORD* v34;
  } v31_;
  __int64 v35;
  __int64 v36;

  if ((a2 & 0x10) != 0) {
    v13 = (__int64*)fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
    EquipUnitSelectMenuItem_16d25e0(v14, (__int64)"MID_DeployMenu_Legion",
                                    nullptr, 0);
    BasicMenuCursor_16e0c00_alt1(a1, v14);
    v15 = fw_memory_HeapManager_Allocate_alt1(*v13, 128, 16, 0);
    v16 = a1[133];
    v17 = v15;
    *(_WORD*)(v15 + 16) = 0;
    *(_QWORD*)(v15 + 48) = 0;
    *(_QWORD*)(v15 + 56) = 0;
    *(_QWORD*)(v15 + 64) = 0;
    *(_QWORD*)(v15 + 72) = 0;
    *(_QWORD*)(v15 + 104) = 0;
    *(_QWORD*)(v15 + 112) = 0;
    *(_QWORD*)(v15 + 120) = 0;
    *(_WORD*)(v15 + 80) = 257;
    *(_BYTE*)(v15 + 82) = 1;
    *(_DWORD*)(v15 + 40) = -1;
    v18 = game_menu_anonymous_EquipInfoItem_LegionInfo_vtable;
  LABEL_13:
    *(_QWORD*)v15 = v18;
    *(_QWORD*)(v15 + 8) = 0;
    *(_QWORD*)(v15 + 88) = v18 + 74;
    *(_QWORD*)(v15 + 96) = v16;
    return BasicMenuCursor_16e0c00_alt1(a1, v17);
  }
  if ((a2 & 0x20) != 0) {
    v19 = (__int64*)fw_memory_g_heap_manager_ptr;
    v20 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
    EquipUnitSelectMenuItem_16d25e0(v20, (__int64)"MID_DeployMenu_Ride",
                                    nullptr, 0);
    BasicMenuCursor_16e0c00_alt1(a1, v20);
    v15 = fw_memory_HeapManager_Allocate_alt1(*v19, 128, 16, 0);
    v16 = a1[133];
    v17 = v15;
    *(_WORD*)(v15 + 16) = 0;
    *(_QWORD*)(v15 + 48) = 0;
    *(_QWORD*)(v15 + 56) = 0;
    *(_QWORD*)(v15 + 64) = 0;
    *(_QWORD*)(v15 + 72) = 0;
    *(_QWORD*)(v15 + 104) = 0;
    *(_QWORD*)(v15 + 112) = 0;
    *(_QWORD*)(v15 + 120) = 0;
    *(_WORD*)(v15 + 80) = 257;
    *(_BYTE*)(v15 + 82) = 1;
    *(_DWORD*)(v15 + 40) = -1;
    v18 = game_menu_anonymous_EquipInfoItem_AnimalInfo_vtable;
    goto LABEL_13;
  }
  v3 = a1[133];
  v35 = *(_QWORD*)(v3 + 408);
  v36 = v3;
  if (v35 != 0) {
    v4 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
    EquipUnitSelectMenuItem_16d25e0(v4, (__int64)"MID_BtlMenu_Morph",
                                    "MID_Sys_Remaining", 0);
    BasicMenuCursor_16e0c00_alt1(a1, v4);
    result = v31_.v31;
    v31_.v32 = a1;
    v31_.v31[0] = GameData_2095a80;
    v31_.v31[1] = &v35;
    v6 = *(_BYTE*)(v3 + 1537);
    v31_.v34 = v31_.v31;
    if ((v6 & 2) != 0) {
      v7 = *(_QWORD*)(v3 + 1496);
      v8 = *(_QWORD*)(v3 + 1488);
      if ((int)((unsigned __int64)(v7 - v8) >> 2) >= 1) {
        v9 = 0;
        v10 = 0;
        v11 = GameData_212c880[0];
        v12 = *GameData_212c880[0];
        while (1) {
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v12 + 64) +
                                   8LL * (*(_DWORD*)(v8 + v9) & 0xFFF)) +
                        104LL) == 9) {
            if (v31_.v34 == nullptr) {
              goto LABEL_22;
            }
            (*(void (**)(_QWORD*, __int64))(*v31_.v34 + 48LL))(v31_.v34,
                                                               v8 + v9);
            v12 = *v11;
            v7 = *(_QWORD*)(v3 + 1496);
            v8 = *(_QWORD*)(v3 + 1488);
          }
          ++v10;
          v9 += 4;
          if (v10 >= (int)((unsigned __int64)(v7 - v8) >> 2)) {
            goto LABEL_23;
          }
        }
      }
      result = v31_.v31;
    }
  LABEL_27:
    v29 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v29))((__int64)result);
  }
  if ((*(_WORD*)(v3 + 1536) & 0x200) == 0) {
    v21 = (__int64*)fw_memory_g_heap_manager_ptr;
    v22 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
    EquipUnitSelectMenuItem_16d25e0(v22, (__int64)"MID_BtlMenu_Morph", nullptr,
                                    0);
    BasicMenuCursor_16e0c00_alt1(a1, v22);
    v15 = fw_memory_HeapManager_Allocate_alt1(*v21, 136, 16, 0);
    v16 = a1[133];
    v17 = v15;
    *(_WORD*)(v15 + 16) = 0;
    *(_QWORD*)(v15 + 48) = 0;
    *(_QWORD*)(v15 + 56) = 0;
    *(_QWORD*)(v15 + 64) = 0;
    *(_QWORD*)(v15 + 72) = 0;
    *(_QWORD*)(v15 + 104) = 0;
    *(_QWORD*)(v15 + 112) = 0;
    *(_QWORD*)(v15 + 120) = 0;
    *(_QWORD*)(v15 + 128) = 0;
    *(_WORD*)(v15 + 80) = 257;
    *(_BYTE*)(v15 + 82) = 1;
    *(_DWORD*)(v15 + 40) = -1;
    v18 = game_menu_anonymous_EquipInfoItem_MorphInfo_vtable;
    goto LABEL_13;
  }
  result = v31_.v31;
  v30 = (a2 >> 6) & 7;
  v31_.v34 = v31_.v31;
  v31_.v31[0] = GameData_2095b00;
  v31_.v31[1] = &v30;
  v23 = *(_QWORD*)(v3 + 1496);
  v31_.v32 = &v36;
  v31_.v33 = a1;
  v24 = *(_QWORD*)(v3 + 1488);
  if ((int)((unsigned __int64)(v23 - v24) >> 2) < 1) {
    goto LABEL_27;
  }
  v25 = 0;
  v26 = 0;
  v27 = GameData_212c880[0];
  v28 = *GameData_212c880[0];
  do {
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v28 + 64) +
                             8LL * (*(_DWORD*)(v24 + v25) & 0xFFF)) +
                  104LL) == 9) {
      if (v31_.v34 == nullptr) {
      LABEL_22:
        GameRoutine_60a310();
      }
      (*(void (**)(_QWORD*, __int64))(*v31_.v34 + 48LL))(v31_.v34, v24 + v25);
      v28 = *v27;
      v23 = *(_QWORD*)(v3 + 1496);
      v24 = *(_QWORD*)(v3 + 1488);
    }
    ++v26;
    v25 += 4;
  } while (v26 < (int)((unsigned __int64)(v23 - v24) >> 2));
LABEL_23:
  result = v31_.v34;
  if (v31_.v34 == v31_.v31) {
    goto LABEL_27;
  }
  if (v31_.v34 == nullptr) {
    return result;
  }
  v29 = 40;
  return (_QWORD*)(*(__int64 (**)(__int64))(*result + v29))((__int64)result);
}

__int64 game_menu_DeployUnitInfo_OnAddMenuItem_lambda0_Invoke(__int64 result,
                                                              _DWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (*a2 & 0xFFF));
  if (*(_QWORD*)(v2 + 592) == **(_QWORD**)(result + 8)) {
    v3 = *(_QWORD*)(result + 16);
    v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        136, 16, 0);
    v5 = *(_QWORD*)(v3 + 1064);
    *(_WORD*)(v4 + 16) = 0;
    *(_QWORD*)(v4 + 64) = 0;
    *(_QWORD*)(v4 + 72) = 0;
    *(_QWORD*)(v4 + 48) = 0;
    *(_QWORD*)(v4 + 56) = 0;
    *(_QWORD*)(v4 + 104) = 0;
    *(_QWORD*)(v4 + 112) = 0;
    *(_QWORD*)(v4 + 120) = 0;
    *(_QWORD*)(v4 + 128) = v2;
    *(_WORD*)(v4 + 80) = 257;
    *(_BYTE*)(v4 + 82) = 1;
    *(_DWORD*)(v4 + 40) = -1;
    *(_QWORD*)v4 = game_menu_anonymous_EquipInfoItem_MorphInfo_vtable;
    *(_QWORD*)(v4 + 8) = 0;
    *(_QWORD*)(v4 + 88) = GameData_2095a40;
    *(_QWORD*)(v4 + 96) = v5;
    return BasicMenuCursor_16e0c00(v3, v4);
  }
  return result;
}

__int64

game_menu_DeployUnitInfo_OnAddMenuItem_lambda1_Invoke_16ca240(__int64 a1,
                                                              int* a2)
{
  __int64 result;
  int v4;

  v4 = *a2;
  result = game_HasSkill(**(_QWORD**)(a1 + 8) + 1744LL, &v4);
  if ((result & 1) != 0) {
    **(_BYTE**)(a1 + 16) = 1;
  }
  return result;
}

#pragma GCC visibility pop
