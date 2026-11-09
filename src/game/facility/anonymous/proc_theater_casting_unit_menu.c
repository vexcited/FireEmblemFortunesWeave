#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_15e8430(void);
__int64 GameRoutine_178a2c0(void);
__int64 GameRoutine_18422d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1929960(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
extern char* GameData_1fafca8[4];
void __attribute__((noreturn)) GameRoutine_13eb280(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcTheaterCastingUnitMenu_Unknown84(__int64 a1);
__int64 ProcTheaterCastingUnitMenu_Unknown139(__int64 a1, __int64* a2);
__int64 ProcTheaterCastingUnitMenu_Unknown160(__int64 a1);

__int64 ProcTheaterCastingUnitMenu_Unknown84(__int64 a1)
{
  __int64 v2;
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
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;

  GameRoutine_15e8430();
  v2 = game_util_Format("L_Cast%02d/L_IconNum/Img", 0);
  v3 = ui_LayoutAccessor_FindPane(a1 + 848, v2);
  if (v3 != 0) {
    v3 = __dynamic_cast(v3, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_18422d0(v3, 1, 0);
  v4 = game_util_Format("L_Cast%02d/L_IconNum/Img", 1);
  v5 = ui_LayoutAccessor_FindPane(a1 + 848, v4);
  if (v5 != 0) {
    v5 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_18422d0(v5, 2, 0);
  v6 = game_util_Format("L_Cast%02d/L_IconNum/Img", 2);
  v7 = ui_LayoutAccessor_FindPane(a1 + 848, v6);
  if (v7 != 0) {
    v7 = __dynamic_cast(v7, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_18422d0(v7, 3, 0);
  v8 = game_util_Format("L_Cast%02d/L_IconNum/Img", 3);
  v9 = ui_LayoutAccessor_FindPane(a1 + 848, v8);
  if (v9 != 0) {
    v9 = __dynamic_cast(v9, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_18422d0(v9, 4, 0);
  v10 = game_util_Format("L_Cast%02d/L_IconNum/Img", 4);
  v11 = ui_LayoutAccessor_FindPane(a1 + 848, v10);
  if (v11 != 0) {
    v11 = __dynamic_cast(v11, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_18422d0(v11, 5, 0);
  if (*(_BYTE*)(*(_QWORD*)(a1 + 1216) + 72LL) == 3) {
    v12 = GameRoutine_1562680(a1 + 848, "CastsNum5", 1.0);
    v13 = **(_QWORD**)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL);
    v14 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL) +
                   8LL) -
        v13;
    if ((int)(v14 >> 3) < 4) {
      goto LABEL_17;
    }
    if (v14 <= 0x18) {
      goto LABEL_43;
    }
    v15 = *(_QWORD*)(v13 + 24);
    if (v15 != 0) {
      v16 = *(_QWORD*)(v15 + 56);
    }
    else {
    LABEL_17:
      v16 = 0;
    }
    v12 = GameRoutine_1562060(a1 + 848, "L_Cast03/T_Txt", v16);
    v17 = **(_QWORD**)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL);
    v18 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL) +
                   8LL) -
        v17;
    if ((int)(v18 >> 3) <= 4) {
      goto LABEL_22;
    }
    if (v18 <= 0x20) {
      goto LABEL_43;
    }
    v19 = *(_QWORD*)(v17 + 32);
    if (v19 != 0) {
      v20 = *(_QWORD*)(v19 + 56);
    }
    else {
    LABEL_22:
      v20 = 0;
    }
    v12 = GameRoutine_1562060(a1 + 848, "L_Cast04/T_Txt", v20);
  }
  else {
    v12 = GameRoutine_1562680(a1 + 848, "CastsNum3", 1.0);
  }
  v21 = **(char***)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL);
  v22 = *(char**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL) +
                  8LL);
  if ((int)((unsigned __int64)(v22 - v21) >> 3) < 1) {
    goto LABEL_28;
  }
  if (v22 == v21) {
    goto LABEL_43;
  }
  v23 = *(_QWORD*)v21;
  if (v23 != 0) {
    v24 = *(_QWORD*)(v23 + 56);
  }
  else {
  LABEL_28:
    v24 = 0;
  }
  v12 = GameRoutine_1562060(a1 + 848, "L_Cast00/T_Txt", v24);
  v25 = **(_QWORD**)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL);
  v26 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL) +
                   8LL) -
        v25;
  if ((int)(v26 >> 3) <= 1) {
    goto LABEL_33;
  }
  if (v26 <= 8) {
    goto LABEL_43;
  }
  v27 = *(_QWORD*)(v25 + 8);
  if (v27 != 0) {
    v28 = *(_QWORD*)(v27 + 56);
  }
  else {
  LABEL_33:
    v28 = 0;
  }
  v12 = GameRoutine_1562060(a1 + 848, "L_Cast01/T_Txt", v28);
  v29 = **(_QWORD**)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL);
  v30 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL) +
                   8LL) -
        v29;
  if ((int)(v30 >> 3) >= 3) {
    if (v30 <= 0x10) {
    LABEL_43:
      GameRoutine_13eb280(v12);
    }
    v31 = *(_QWORD*)(v29 + 16);
    if (v31 != 0) {
      v32 = *(_QWORD*)(v31 + 56);
      goto LABEL_39;
    }
  }
  v32 = 0;

LABEL_39:
  GameRoutine_1562060(a1 + 848, "L_Cast02/T_Txt", v32);
  GameRoutine_1562060(a1 + 848, "T_Txt",
                      *(_QWORD*)(*(_QWORD*)(a1 + 1216) + 48LL));
  v33 = *(unsigned __int8*)(*(_QWORD*)(a1 + 1216) + 72LL);
  if (v33 == 4) {
    v34 = nullptr;
  }
  else {
    v34 = GameData_1fafca8[v33];
  }
  GameRoutine_1562060(a1 + 848, "T_Genre", v34);
  return GameRoutine_1929960(a1);
}

__int64 ProcTheaterCastingUnitMenu_Unknown139(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;

  GameRoutine_178a2c0();
  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v5 = a2[1];
  v6 = a2[2];
  if (v5 >= v6) {
    v8 = *a2;
    v9 = v5 - *a2;
    v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
    if (v10 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x333333333333333LL) {
      v13 = 0x666666666666666LL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v14 = result;
      v15 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      LODWORD(result) = v14;
    }
    else {
      v15 = 0;
    }
    v16 = v15 + v9;
    *(_QWORD*)v16 = &GameData_1a9f09e;
    *(_QWORD*)(v16 + 8) = "MID_KeyHelp_AutoUnitSelect";
    *(_BYTE*)(v16 + 28) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_BYTE*)(v16 + 16) = 1;
    v17 = v15 + 40 * v13;
    v7 = v15 + v9 + 40;
    *(_DWORD*)(v16 + 20) = 11;
    *(_DWORD*)(v16 + 24) = result;
    result = memcpy(v15, v8, v9);
    *a2 = v15;
    a2[1] = v7;
    a2[2] = v17;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18);
    }
  }
  else {
    *(_BYTE*)(v5 + 28) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)v5 = &GameData_1a9f09e;
    *(_QWORD*)(v5 + 8) = "MID_KeyHelp_AutoUnitSelect";
    v7 = v5 + 40;
    *(_BYTE*)(v5 + 16) = 1;
    *(_DWORD*)(v5 + 20) = 11;
    *(_DWORD*)(v5 + 24) = result;
  }
  a2[1] = v7;
  return result;
}

__int64 ProcTheaterCastingUnitMenu_Unknown160(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  _QWORD v5[4];
  int v6;
  int v7;
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
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = msg_MessageManager_instance__ptr[0];
  if (*(_BYTE*)(*(_QWORD*)(a1 + 1216) + 72LL) == 3) {
    v2 = 5;
  }
  else {
    v2 = 3;
  }
  GameRoutine_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, v2, 0);
  v3 = *v1;
  v8 = -1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v5[0] = GameData_212e348 + 2;
  v5[1] = 0xFFFF0001FFFF0000LL;
  v5[2] = 0xFFFF0004FFFF0002LL;
  v5[3] = 0xFFFF0006FFFF0005LL;
  v20 = 8;
  v6 = -65529;
  v7 = -65528;
  return GameRoutine_a4dbe0(v3, "MID_Menu_PlayerFacility_UnitSelect_Help", 0,
                            v5);
}

#pragma GCC visibility pop
