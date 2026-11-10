#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(void);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_156c910(_QWORD, const char*, ...);
__int64 GameRoutine_1591700(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 UnitItemList_710640(_QWORD);
__int64 UnitItemList_710b30(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_GetParam(void);
__int64 game_util_Format(const char*, ...);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_20b4608[])();
extern __int64 GameData_20b33d8;
extern __int64 GameData_212d690;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
extern char* GameData_20b6940[7];
bool game_gmap_anonymous_CorpsMenuBase_IsEmpty_closure_Invoke(__int64 a1,
                                                              _QWORD* a2);
__int64 game_gmap_anonymous_CorpsMenuBase_UpdateCorpsInfo(__int64 a1);
__int64
game_gmap_anonymous_CorpsMenuBase_UpdateCorpsInfo_closure_Invoke(__int64 a1,
                                                                 _QWORD* a2);
__int64
game_gmap_anonymous_CorpsMenuBase_GetEmptyItemCount_closure_Invoke(__int64 a1,
                                                                   _QWORD* a2);

bool game_gmap_anonymous_CorpsMenuBase_IsEmpty_closure_Invoke(__int64 a1,
                                                              _QWORD* a2)
{
  **(_BYTE**)(a1 + 8) =
      (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2) == 0;
  return (**(_BYTE**)(a1 + 8) & 1) == 0;
}

void __attribute__((noreturn)) CorpsMenuBase_DeletingDestructor()
{
  __udf(0x8002u);
}

__int64 game_gmap_anonymous_CorpsMenuBase_UpdateCorpsInfo(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64* v5;
  __int64 (***v6)();
  __int64 (**v7)();
  __int64 v8;
  __int64 v9;
  __int64 (***v10)();
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 (**v15)();
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 result;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  __int64* v49;
  __int64* v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  char* v55;
  unsigned __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  _QWORD v66[2];
  unsigned __int64 v67;
  unsigned __int64 v68;
  int v69;
  int v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;

  v64 = 0;
  v65 = 0;
  v63 = 0;
  v2 = ui_LayoutAccessor_FindPane(a1 + 952, "A_Icon");
  if (v2 == 0 || (v3 = *(_QWORD*)(v2 + 40)) == v2 + 32) {
    v4 = 0;
  }
  else {
    v4 = 0;
    do {
      v3 = *(_QWORD*)(v3 + 8);
      ++v4;
    } while (v3 != v2 + 32);
  }
  v61 = 0;
  v62 = 0;
  v60 = 0;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = (__int64 (***)())fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v7 = GameData_20b4608;
  v9 = *(_QWORD*)(a1 + 232);
  v8 = *(_QWORD*)(a1 + 240);
  v10 = v6;
  *v6 = GameData_20b4608;
  v6[1] = (__int64 (**)())((char*)&v65 + 4);
  v6[2] = (__int64 (**)())&v65;
  v6[3] = (__int64 (**)())((char*)&v64 + 4);
  v6[4] = (__int64 (**)())&v64;
  v6[5] = (__int64 (**)())((char*)&v63 + 4);
  v6[6] = (__int64 (**)())&v60;
  v6[7] = (__int64 (**)())&v63;
  if (v8 != v9) {
    v11 = 0;
    v12 = GameData_212e008[0];
    while (1) {
      v13 = *(_QWORD*)(v9 + 8 * v11);
      if (v13 != 0) {
        v14 = __dynamic_cast(v13, v12, &GameData_20b33d8, 0);
        if (v14 != 0) {
          v15 = *v10;
          v66[0] = v14;
          if ((((__int64 (*)(__int64 (***)(), _QWORD*))v15[6])(v10, v66) & 1) !=
              0) {
          LABEL_14:
            v7 = *v10;
            break;
          }
          v9 = *(_QWORD*)(a1 + 232);
          v8 = *(_QWORD*)(a1 + 240);
        }
      }
      if (++v11 >= (unsigned __int64)((v8 - v9) >> 3)) {
        goto LABEL_14;
      }
    }
  }
  ((void (*)(__int64 (***)()))v7[5])(v10);
  if ((int)v63 >= 1) {
    v16 = ui_LayoutAccessor_FindPane(a1 + 952, "T_LvNum");
    if (v16 != 0) {
      v17 = __dynamic_cast(v16, GameData_212d670[0], GameData_212d690, 0);
      if (v17 != 0) {
        GameRoutine_156c910(v17, "%d", 1);
      }
    }
    v18 = ui_LayoutAccessor_FindPane(a1 + 952, "T_HpNum");
    if (v18 != 0) {
      v19 = __dynamic_cast(v18, GameData_212d670[0], GameData_212d690, 0);
      if (v19 != 0) {
        GameRoutine_156c910(v19, "%d", 1);
      }
    }
    v20 = ui_LayoutAccessor_FindPane(a1 + 952, "T_HpMaxNum");
    if (v20 != 0) {
      v21 = __dynamic_cast(v20, GameData_212d670[0], GameData_212d690, 0);
      if (v21 != 0) {
        GameRoutine_156c910(v21, "%d", 1);
      }
    }
    if (SHIDWORD(v63) < 1) {
      v71 = -1;
      v72 = -1;
      v73 = -1;
      v74 = -1;
      v44 = *msg_MessageManager_instance__ptr[0];
      v75 = -1;
      v76 = -1;
      v77 = -1;
      v78 = -1;
      v79 = -1;
      v80 = -1;
      v81 = -1;
      v82 = -1;
      v66[0] = GameData_212e348 + 2;
      v66[1] = 0xFFFF0001FFFF0000LL;
      v67 = 0xFFFF0004FFFF0002LL;
      v68 = 0xFFFF0006FFFF0005LL;
      v83 = 8;
      v69 = -65529;
      v70 = -65528;
      v45 = GameRoutine_a4dbe0(v44, "MID_Sys_ValueEmpty", 0, v66);
      if (v45 != 0) {
        v46 = v45;
        v47 = ui_LayoutAccessor_FindTextBox(a1 + 952, "T_MagicEndureNum");
        if (v47 != 0) {
          GameRoutine_156c5d0(v47, v46, 0);
        }
      }
    }
    else {
      v22 = ui_LayoutAccessor_FindPane(a1 + 952, "T_MagicEndureNum");
      if (v22 != 0) {
        v23 = __dynamic_cast(v22, GameData_212d670[0], GameData_212d690, 0);
        if (v23 != 0) {
          GameRoutine_156c910(v23, "%d", 1);
        }
      }
    }
    ui_LayoutAccessor_SetPaneVisible(a1 + 952, "A_Icon", 1);
    if (v61 == v60) {
      v51 = 0;
      if (v4 == 0) {
        goto LABEL_57;
      }
    }
    else {
      v48 = 0;
      v49 = GameData_212d670[0];
      v50 = GameData_212d678[0];
      do {
        v52 = game_util_Format("Icon%02d", v48);
        ui_LayoutAccessor_SetPaneVisible(a1 + 952, v52, 1);
        v53 = ui_LayoutAccessor_FindPane(a1 + 952, v52);
        if (v53 != 0) {
          v54 = __dynamic_cast(v53, v49, v50, 0);
          if (v54 != 0) {
            v55 = &GameData_1a9f09e;
            v56 = *(unsigned __int8*)(v60 + v48);
            if (v56 <= 6) {
              v55 = GameData_20b6940[v56];
            }
            GameRoutine_136a920(ui_Manager_instance_ + 1264, v54, 0, 7, v55);
          }
        }
        ++v48;
        v51 = v61 - v60;
      } while (v61 - v60 > v48);
      v5 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v51 >= v4) {
        goto LABEL_57;
      }
    }
    do {
      v57 = game_util_Format("Icon%02d", v51);
      ui_LayoutAccessor_SetPaneVisible(a1 + 952, v57, 0);
      ++v51;
    } while (v4 != v51);
  LABEL_57:
    result = ui_LayoutAccessor_FindAlignment(a1 + 952, "A_Icon");
    if (result != 0) {
      result = Alignment_56b600();
    }
    goto LABEL_59;
  }
  v24 = msg_MessageManager_instance__ptr[0];
  v71 = -1;
  v72 = -1;
  v73 = -1;
  v74 = -1;
  v25 = *msg_MessageManager_instance__ptr[0];
  v75 = -1;
  v76 = -1;
  v77 = -1;
  v78 = -1;
  v79 = -1;
  v80 = -1;
  v81 = -1;
  v82 = -1;
  v67 = 0xFFFF0004FFFF0002LL;
  v68 = 0xFFFF0006FFFF0005LL;
  v69 = -65529;
  v70 = -65528;
  v26 = GameData_212e348 + 2;
  v66[0] = GameData_212e348 + 2;
  v66[1] = 0xFFFF0001FFFF0000LL;
  v83 = 8;
  v27 = GameRoutine_a4dbe0(v25, "MID_Sys_ValueEmpty", 0, v66);
  if (v27 != 0) {
    v28 = v27;
    v29 = ui_LayoutAccessor_FindTextBox(a1 + 952, "T_LvNum");
    if (v29 != 0) {
      GameRoutine_156c5d0(v29, v28, 0);
    }
  }
  v30 = *v24;
  v71 = -1;
  v72 = -1;
  v73 = -1;
  v74 = -1;
  v75 = -1;
  v76 = -1;
  v77 = -1;
  v78 = -1;
  v79 = -1;
  v80 = -1;
  v81 = -1;
  v82 = -1;
  v66[0] = v26;
  v66[1] = 0xFFFF0001FFFF0000LL;
  v67 = 0xFFFF0004FFFF0002LL;
  v68 = 0xFFFF0006FFFF0005LL;
  v83 = 8;
  v69 = -65529;
  v70 = -65528;
  v31 = GameRoutine_a4dbe0(v30, "MID_Sys_ValueEmpty", 0, v66);
  if (v31 != 0) {
    v32 = v31;
    v33 = ui_LayoutAccessor_FindTextBox(a1 + 952, "T_HpNum");
    if (v33 != 0) {
      GameRoutine_156c5d0(v33, v32, 0);
    }
  }
  v34 = *v24;
  v71 = -1;
  v72 = -1;
  v73 = -1;
  v74 = -1;
  v75 = -1;
  v76 = -1;
  v77 = -1;
  v78 = -1;
  v79 = -1;
  v80 = -1;
  v81 = -1;
  v82 = -1;
  v35 = GameData_212e348 + 2;
  v67 = 0xFFFF0004FFFF0002LL;
  v68 = 0xFFFF0006FFFF0005LL;
  v69 = -65529;
  v70 = -65528;
  v66[0] = GameData_212e348 + 2;
  v66[1] = 0xFFFF0001FFFF0000LL;
  v83 = 8;
  v36 = GameRoutine_a4dbe0(v34, "MID_Sys_ValueEmpty", 0, v66);
  if (v36 != 0) {
    v37 = v36;
    v38 = ui_LayoutAccessor_FindTextBox(a1 + 952, "T_HpMaxNum");
    if (v38 != 0) {
      GameRoutine_156c5d0(v38, v37, 0);
    }
  }
  ui_LayoutAccessor_SetPaneVisible(a1 + 952, "N_MagicEndure", 1);
  v39 = *v24;
  v71 = -1;
  v72 = -1;
  v73 = -1;
  v74 = -1;
  v75 = -1;
  v76 = -1;
  v77 = -1;
  v78 = -1;
  v79 = -1;
  v80 = -1;
  v81 = -1;
  v82 = -1;
  v66[0] = v35;
  v66[1] = 0xFFFF0001FFFF0000LL;
  v67 = 0xFFFF0004FFFF0002LL;
  v68 = 0xFFFF0006FFFF0005LL;
  v83 = 8;
  v69 = -65529;
  v70 = -65528;
  v40 = GameRoutine_a4dbe0(v39, "MID_Sys_ValueEmpty", 0, v66);
  if (v40 != 0) {
    v41 = v40;
    v42 = ui_LayoutAccessor_FindTextBox(a1 + 952, "T_MagicEndureNum");
    if (v42 != 0) {
      GameRoutine_156c5d0(v42, v41, 0);
    }
  }
  result = ui_LayoutAccessor_SetPaneVisible(a1 + 952, "A_Icon", 0);
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
LABEL_59:
  if (v60 != 0) {
    v58 = *v5;
    v61 = v60;
    v59 = 128;
    if (*(_QWORD*)(v58 + 200) == 0) {
      v59 = 56;
    }
    return nn_mem_StandardAllocator_Free(v58 + v59, v60);
  }
  return result;
}

__int64

game_gmap_anonymous_CorpsMenuBase_UpdateCorpsInfo_closure_Invoke(__int64 a1,
                                                                 _QWORD* a2)
{
  __int64 v3;
  _DWORD* v4;
  int v5;
  __int64 v6;
  char v8;

  v3 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (v3 != 0) {
    v4 = *(_DWORD**)(a1 + 8);
    v5 = *(__int16*)(v3 + 492);
    v8 = 0;
    v6 = v3;
    *v4 += v5;
    **(_DWORD**)(a1 + 16) += game_Unit_GetParam();
    **(_DWORD**)(a1 + 24) += *(unsigned __int8*)(v6 + 498);
    **(_DWORD**)(a1 + 32) += UnitItemList_710640(v6 + 828);
    **(_DWORD**)(a1 + 40) += UnitItemList_710b30(v6 + 828);
    GameRoutine_1591700(*(_QWORD*)(a1 + 48), v6, 0);
    ++**(_DWORD**)(a1 + 56);
  }
  return 0;
}

__int64

game_gmap_anonymous_CorpsMenuBase_GetEmptyItemCount_closure_Invoke(__int64 a1,
                                                                   _QWORD* a2)
{
  if ((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2) == 0) {
    ++**(_DWORD**)(a1 + 8);
  }
  return 0;
}

#pragma GCC visibility pop
