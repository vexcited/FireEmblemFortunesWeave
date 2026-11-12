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
__int64 game_gmap_anonymous_CorpsMenuBase_UpdateCorpsInfo_alt1(
    __int64 a1) __asm__("game_gmap_anonymous_CorpsMenuBase_UpdateCorpsInfo");
__int64
game_gmap_anonymous_CorpsMenuBase_UpdateCorpsInfo_closure_Invoke(__int64 a1,
                                                                 _QWORD* a2);
__int64
game_gmap_anonymous_CorpsMenuBase_GetEmptyItemCount_closure_Invoke(__int64 a1,
                                                                   _QWORD* a2);
__int64 game_gmap_GmapCorpsMenu_IsOppositeEmpty(_QWORD, _QWORD);
extern __int64 (*GameData_20b3448[])();
extern __int64* GameData_212e030[4];
extern __int64 GameData_20b3af0;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD* game_gmap_anonymous_CorpsMenuBase_IsEmpty(__int64 a1);
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64 GameRoutine_1591700_alt1(__int64*, __int64,
                                 char) __asm__("GameRoutine_1591700");
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 UnitItemList_710640_alt1(__int64) __asm__("UnitItemList_710640");
__int64 UnitItemList_710b30_alt1(__int64) __asm__("UnitItemList_710b30");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_Unit_GetParam_alt1(__int64) __asm__("game_Unit_GetParam");
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
bool game_gmap_GmapCorpsMenu_IsOppositeEmpty_alt1(__int64, char) __asm__(
    "game_gmap_GmapCorpsMenu_IsOppositeEmpty");
char* GameRoutine_a4dbe0_alt1(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_156c910_alt1(__int64, const char*, int,
                              ...) __asm__("GameRoutine_156c910");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_gmap_anonymous_CorpsMenuBase_UpdateCorpsInfo(_QWORD* a1);

_QWORD* game_gmap_anonymous_CorpsMenuBase_IsEmpty(__int64 a1)
{
  _QWORD* result;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  char* v12;
  char* v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  unsigned __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  struct {
    _QWORD v33[4];
    _QWORD* v34;
  } v33_;
  char v35;
  _QWORD _38[7];

  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 560LL))(a1) != 0) {
    return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
  }
  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(__int64**)(v3 + 232);
  v5 = *(__int64**)(v3 + 240);
  if (v4 == v5) {
  LABEL_8:
    v8 = -1;
  LABEL_11:
    v9 = *(_QWORD*)(a1 + 88);
    if ((*(_BYTE*)(v9 + 356) & 1) != 0) {
      v10 = *(_QWORD**)(v9 + 368);
      if (v10 != nullptr) {
        result = X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                        PSEUDO_X8, _QWORD))(*v10 + 560LL))(
                                        (void*)v10, *(_QWORD*)(v9 + 368))),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        if (result == nullptr) {
          return result;
        }
        v9 = *(_QWORD*)(a1 + 88);
      }
    }
    if ((*(_BYTE*)(a1 + 104) & 1) == 0) {
      if (game_gmap_GmapCorpsMenu_IsOppositeEmpty_alt1(v9, 0)) {
        return nullptr;
      }
      v9 = *(_QWORD*)(a1 + 88);
    }
    if (*(_DWORD*)(v9 + 360) == 1 &&
        game_gmap_GmapCorpsMenu_IsOppositeEmpty_alt1(v9, *(_BYTE*)(a1 + 104))) {
      return nullptr;
    }
    if (v8 < 1) {
      return (_QWORD*)(((_UNKNOWN*)0x0LL) + 1);
    }
    v11 = *(_QWORD*)(a1 + 8);
    v12 = *(char**)(v11 + 232);
    v13 = *(char**)(v11 + 240);
    if (v12 != v13) {
      v14 = v13 - v12 - 8;
      v15 = (v14 >> 3) + 1;
      if (v14 >= 0x18) {
        v22 = 0;
        while (v8 - 1 != (_DWORD)v22) {
          if (v8 == (_DWORD)v22 + 2) {
            v12 += 8;
            goto LABEL_41;
          }
          if (v8 == (_DWORD)v22 + 3) {
            v12 += 16;
            goto LABEL_41;
          }
          if (v8 == (_DWORD)v22 + 4) {
            v12 += 24;
            goto LABEL_41;
          }
          v12 += 32;
          v22 += 4;
          v16 = v22;
          if ((v15 & 0x3FFFFFFFFFFFFFFCLL) == v22) {
            goto LABEL_25;
          }
        }
        goto LABEL_41;
      }
      v16 = 0;
    LABEL_25:
      v17 = v15 & 3;
      if (v17 != 0) {
        v18 = ~v16 + v8;
        while (v18 != 0) {
          v12 += 8;
          --v18;
          if (--v17 == 0) {
            goto LABEL_29;
          }
        }
      LABEL_41:
        v19 = *(_QWORD*)v12;
        goto LABEL_42;
      }
    }
  LABEL_29:
    v19 = 0;
  LABEL_42:
    v23 = __dynamic_cast(v19, GameData_212e008[0], &GameData_20b33d8, 0),
    v21 = COERCE_AS(__typeof__(v21),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return (_QWORD*)((*(__int64 (**)(__int64))(*(_QWORD*)v23 + 560LL))(v23) !=
                     0);
  }
  v6 = 0;
  while (1) {
    v7 = *v4++;
    if (v7 == a1) {
      break;
    }
    --v6;
    if (v4 == v5) {
      goto LABEL_8;
    }
  }
  if (v6 != 0) {
    v8 = -v6;
    goto LABEL_11;
  }
  v20 = __dynamic_cast(v3, GameData_212e030[0], &GameData_20b3af0, 0),
  v21 = COERCE_AS(__typeof__(v21),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  _38[1] = _38[5];
  _38[2] = _38[6];
  v25 = *(_QWORD*)(v20 + 232);
  v24 = *(_QWORD*)(v20 + 240);
  v26 = 1;
  if (v25 == v24) {
    return (_QWORD*)(v26 & 1);
  }
  v35 = 1;
  v27 = v20;
  v28 = 0;
  v33_.v33[0] = GameData_20b3448;
  v33_.v33[1] = &v35;
  v33_.v34 = v33_.v33;
  v29 = GameData_212e008[0];
  do {
    v30 = *(_QWORD*)(v25 + 8 * v28);
    if (v30 != 0) {
      v31 = __dynamic_cast(v30, v29, &GameData_20b33d8, 0),
      v21 = COERCE_AS(__typeof__(v21),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      if (v31 == 0) {
        goto LABEL_45;
      }
      _38[0] = v31;
      if (v33_.v34 == nullptr) {
        GameRoutine_60a310_alt1(),
            v21 = COERCE_AS(__typeof__(v21),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      if (((*(__int64 (**)(_QWORD*, _QWORD*))(*v33_.v34 + 48LL))(v33_.v34,
                                                                 _38) &
           1) != 0) {
        break;
      }
      v25 = *(_QWORD*)(v27 + 232);
      v24 = *(_QWORD*)(v27 + 240);
    }
  LABEL_45:
    ++v28;
  } while (v28 < (v24 - v25) >> 3);
  if (v33_.v34 == v33_.v33) {
    v32 = 32;
  LABEL_55:
    (*(void (**)(_QWORD*, __int64))(*v33_.v34 + v32))(v33_.v34, v21),
        v21 = COERCE_AS(__typeof__(v21),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  else if (v33_.v34 != nullptr) {
    v32 = 40;
    goto LABEL_55;
  }
  v26 = v35;
  return (_QWORD*)(v26 & 1);
}

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

void game_gmap_anonymous_CorpsMenuBase_UpdateCorpsInfo(_QWORD* a1)
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
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  __int64 v25;
  int v26;
  int v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64* v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  char* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64* v54;
  __int64* v55;
  unsigned __int64 v56;
  char* v57;
  __int64 v58;
  __int64 v59;
  char* v60;
  unsigned __int64 v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  struct {
    __int64 v66;
    __int64 v67;
    __int64 v68;
  } v66_;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  struct {
    _QWORD v72[2];
    unsigned __int64 v73;
    unsigned __int64 v74;
    int v75;
    int v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
  } v72_;

  v70 = 0;
  v71 = 0;
  v69 = 0;
  v2 = ui_LayoutAccessor_FindPane_alt1(a1 + 119, (__int64)"A_Icon");
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
  v66_.v67 = 0;
  v66_.v68 = 0;
  v66_.v66 = 0;
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
  v6 = (__int64 (***)(void))fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v7 = GameData_20b4608;
  v9 = a1[29];
  v8 = a1[30];
  v10 = v6;
  *v6 = GameData_20b4608;
  v6[1] = (__int64 (**)(void))((char*)&v71 + 4);
  v6[2] = (__int64 (**)(void))&v71;
  v6[3] = (__int64 (**)(void))((char*)&v70 + 4);
  v6[4] = (__int64 (**)(void))&v70;
  v6[5] = (__int64 (**)(void))((char*)&v69 + 4);
  v6[6] = (__int64 (**)(void))&v66_.v66;
  v6[7] = (__int64 (**)(void))&v69;
  if (v8 != v9) {
    v11 = 0;
    v12 = GameData_212e008[0];
    while (1) {
      v13 = *(_QWORD*)(v9 + 8 * v11);
      if (v13 != 0) {
        v14 = __dynamic_cast(v13, v12, &GameData_20b33d8, 0);
        if (v14 != 0) {
          v15 = *v10;
          v72_.v72[0] = v14;
          if ((((__int64 (*)(__int64 (***)(void), _QWORD*))v15[6])(v10,
                                                                   v72_.v72) &
               1) != 0) {
          LABEL_14:
            v7 = *v10;
            break;
          }
          v9 = a1[29];
          v8 = a1[30];
        }
      }
      if (++v11 >= (unsigned __int64)((v8 - v9) >> 3)) {
        goto LABEL_14;
      }
    }
  }
  ((void (*)(__int64 (***)(void)))v7[5])(v10);
  v16 = v69;
  if ((int)v69 >= 1) {
    v17 = HIDWORD(v70);
    v18 = ui_LayoutAccessor_FindPane_alt1(a1 + 119, (__int64)"T_LvNum");
    if (v18 != 0) {
      v19 = __dynamic_cast(v18, GameData_212d670[0], GameData_212d690, 0);
      if (v19 != 0) {
        GameRoutine_156c910_alt1(v19, "%d", 1, (unsigned int)(v17 / v16));
      }
    }
    v20 = HIDWORD(v71);
    v21 = ui_LayoutAccessor_FindPane_alt1(a1 + 119, (__int64)"T_HpNum");
    if (v21 != 0) {
      v22 = __dynamic_cast(v21, GameData_212d670[0], GameData_212d690, 0);
      if (v22 != 0) {
        GameRoutine_156c910_alt1(v22, "%d", 1, v20);
      }
    }
    v23 = v71;
    v24 = ui_LayoutAccessor_FindPane_alt1(a1 + 119, (__int64)"T_HpMaxNum");
    if (v24 != 0) {
      v25 = __dynamic_cast(v24, GameData_212d670[0], GameData_212d690, 0);
      if (v25 != 0) {
        GameRoutine_156c910_alt1(v25, "%d", 1, v23);
      }
    }
    v26 = HIDWORD(v69);
    if (SHIDWORD(v69) < 1) {
      v72_.v77 = -1;
      v72_.v78 = -1;
      v72_.v79 = -1;
      v72_.v80 = -1;
      v49 = *msg_MessageManager_instance__ptr[0];
      v72_.v81 = -1;
      v72_.v82 = -1;
      v72_.v83 = -1;
      v72_.v84 = -1;
      v72_.v85 = -1;
      v72_.v86 = -1;
      v72_.v87 = -1;
      v72_.v88 = -1;
      v72_.v72[0] = GameData_212e348 + 2;
      v72_.v72[1] = 0xFFFF0001FFFF0000LL;
      v72_.v73 = 0xFFFF0004FFFF0002LL;
      v72_.v74 = 0xFFFF0006FFFF0005LL;
      v72_.v89 = 8;
      v72_.v75 = -65529;
      v72_.v76 = -65528;
      v50 = GameRoutine_a4dbe0_alt1(v49, "MID_Sys_ValueEmpty", 0);
      if (v50 != nullptr) {
        v51 = (__int64)v50;
        v52 = ui_LayoutAccessor_FindTextBox_alt1(a1 + 119,
                                                 (__int64)"T_MagicEndureNum");
        if (v52 != 0) {
          GameRoutine_156c5d0_alt1(v52, v51, 0);
        }
      }
    }
    else {
      v27 = v70;
      v28 = ui_LayoutAccessor_FindPane_alt1(a1 + 119,
                                            (__int64)"T_MagicEndureNum");
      if (v28 != 0) {
        v29 = __dynamic_cast(v28, GameData_212d670[0], GameData_212d690, 0);
        if (v29 != 0) {
          GameRoutine_156c910_alt1(v29, "%d", 1,
                                   (unsigned int)(100 * v27 / v26));
        }
      }
    }
    ui_LayoutAccessor_SetPaneVisible_alt1((__int64)(a1 + 119),
                                          (__int64)"A_Icon", 1);
    if (v66_.v67 == v66_.v66) {
      v56 = 0;
      if (v4 == 0) {
        goto LABEL_57;
      }
    }
    else {
      v53 = 0;
      v54 = GameData_212d670[0];
      v55 = GameData_212d678[0];
      do {
        v57 = game_util_Format_alt1("Icon%02d", v53);
        ui_LayoutAccessor_SetPaneVisible_alt1((__int64)(a1 + 119), (__int64)v57,
                                              1);
        v58 = ui_LayoutAccessor_FindPane_alt1(a1 + 119, (__int64)v57);
        if (v58 != 0) {
          v59 = __dynamic_cast(v58, v54, v55, 0);
          if (v59 != 0) {
            v60 = &GameData_1a9f09e;
            v61 = *(unsigned __int8*)(v66_.v66 + v53);
            if (v61 <= 6) {
              v60 = GameData_20b6940[v61];
            }
            Manager_136a920(ui_Manager_instance_ + 1264, v59, 0, 7u, v60);
          }
        }
        ++v53;
        v56 = v66_.v67 - v66_.v66;
      } while (v66_.v67 - v66_.v66 > v53);
      v5 = (__int64*)fw_memory_g_heap_manager_ptr;
      if (v56 >= v4) {
        goto LABEL_57;
      }
    }
    do {
      v62 = game_util_Format_alt1("Icon%02d", v56);
      ui_LayoutAccessor_SetPaneVisible_alt1((__int64)(a1 + 119), (__int64)v62,
                                            0);
      ++v56;
    } while (v4 != v56);
  LABEL_57:
    v63 = ui_LayoutAccessor_FindAlignment_alt1(a1 + 119, (__int64)"A_Icon");
    if (v63 != 0) {
      Alignment_56b600_alt1(v63);
    }
    goto LABEL_59;
  }
  v30 = msg_MessageManager_instance__ptr[0];
  v72_.v77 = -1;
  v72_.v78 = -1;
  v72_.v79 = -1;
  v72_.v80 = -1;
  v31 = *msg_MessageManager_instance__ptr[0];
  v72_.v81 = -1;
  v72_.v82 = -1;
  v72_.v83 = -1;
  v72_.v84 = -1;
  v72_.v85 = -1;
  v72_.v86 = -1;
  v72_.v87 = -1;
  v72_.v88 = -1;
  v72_.v73 = 0xFFFF0004FFFF0002LL;
  v72_.v74 = 0xFFFF0006FFFF0005LL;
  v72_.v75 = -65529;
  v72_.v76 = -65528;
  v32 = GameData_212e348 + 2;
  v72_.v72[0] = GameData_212e348 + 2;
  v72_.v72[1] = 0xFFFF0001FFFF0000LL;
  v72_.v89 = 8;
  v33 = GameRoutine_a4dbe0_alt1(v31, "MID_Sys_ValueEmpty", 0);
  if (v33 != nullptr) {
    v34 = (__int64)v33;
    v35 = ui_LayoutAccessor_FindTextBox_alt1(a1 + 119, (__int64)"T_LvNum");
    if (v35 != 0) {
      GameRoutine_156c5d0_alt1(v35, v34, 0);
    }
  }
  v36 = *v30;
  v72_.v77 = -1;
  v72_.v78 = -1;
  v72_.v79 = -1;
  v72_.v80 = -1;
  v72_.v81 = -1;
  v72_.v82 = -1;
  v72_.v83 = -1;
  v72_.v84 = -1;
  v72_.v85 = -1;
  v72_.v86 = -1;
  v72_.v87 = -1;
  v72_.v88 = -1;
  v72_.v72[0] = v32;
  v72_.v72[1] = 0xFFFF0001FFFF0000LL;
  v72_.v73 = 0xFFFF0004FFFF0002LL;
  v72_.v74 = 0xFFFF0006FFFF0005LL;
  v72_.v89 = 8;
  v72_.v75 = -65529;
  v72_.v76 = -65528;
  v37 = GameRoutine_a4dbe0_alt1(v36, "MID_Sys_ValueEmpty", 0);
  if (v37 != nullptr) {
    v38 = (__int64)v37;
    v39 = ui_LayoutAccessor_FindTextBox_alt1(a1 + 119, (__int64)"T_HpNum");
    if (v39 != 0) {
      GameRoutine_156c5d0_alt1(v39, v38, 0);
    }
  }
  v40 = *v30;
  v72_.v77 = -1;
  v72_.v78 = -1;
  v72_.v79 = -1;
  v72_.v80 = -1;
  v72_.v81 = -1;
  v72_.v82 = -1;
  v72_.v83 = -1;
  v72_.v84 = -1;
  v72_.v85 = -1;
  v72_.v86 = -1;
  v72_.v87 = -1;
  v72_.v88 = -1;
  v41 = GameData_212e348 + 2;
  v72_.v73 = 0xFFFF0004FFFF0002LL;
  v72_.v74 = 0xFFFF0006FFFF0005LL;
  v72_.v75 = -65529;
  v72_.v76 = -65528;
  v72_.v72[0] = GameData_212e348 + 2;
  v72_.v72[1] = 0xFFFF0001FFFF0000LL;
  v72_.v89 = 8;
  v42 = GameRoutine_a4dbe0_alt1(v40, "MID_Sys_ValueEmpty", 0);
  if (v42 != nullptr) {
    v43 = (__int64)v42;
    v44 = ui_LayoutAccessor_FindTextBox_alt1(a1 + 119, (__int64)"T_HpMaxNum");
    if (v44 != 0) {
      GameRoutine_156c5d0_alt1(v44, v43, 0);
    }
  }
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)(a1 + 119),
                                        (__int64)"N_MagicEndure", 1);
  v45 = *v30;
  v72_.v77 = -1;
  v72_.v78 = -1;
  v72_.v79 = -1;
  v72_.v80 = -1;
  v72_.v81 = -1;
  v72_.v82 = -1;
  v72_.v83 = -1;
  v72_.v84 = -1;
  v72_.v85 = -1;
  v72_.v86 = -1;
  v72_.v87 = -1;
  v72_.v88 = -1;
  v72_.v72[0] = v41;
  v72_.v72[1] = 0xFFFF0001FFFF0000LL;
  v72_.v73 = 0xFFFF0004FFFF0002LL;
  v72_.v74 = 0xFFFF0006FFFF0005LL;
  v72_.v89 = 8;
  v72_.v75 = -65529;
  v72_.v76 = -65528;
  v46 = GameRoutine_a4dbe0_alt1(v45, "MID_Sys_ValueEmpty", 0);
  if (v46 != nullptr) {
    v47 = (__int64)v46;
    v48 = ui_LayoutAccessor_FindTextBox_alt1(a1 + 119,
                                             (__int64)"T_MagicEndureNum");
    if (v48 != 0) {
      GameRoutine_156c5d0_alt1(v48, v47, 0);
    }
  }
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)(a1 + 119), (__int64)"A_Icon",
                                        0);
  v5 = (__int64*)fw_memory_g_heap_manager_ptr;
LABEL_59:
  if (v66_.v66 != 0) {
    v64 = *v5;
    v66_.v67 = v66_.v66;
    v65 = 128;
    if (*(_QWORD*)(v64 + 200) == 0) {
      v65 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v64 + v65, v66_.v66);
  }
}

__int64

game_gmap_anonymous_CorpsMenuBase_UpdateCorpsInfo_closure_Invoke(__int64 a1,
                                                                 _QWORD* a2)
{
  __int64 v3;
  __int64 v4;

  v3 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (v3 != 0) {
    v4 = v3;
    **(_DWORD**)(a1 + 8) += *(__int16*)(v3 + 492);
    **(_DWORD**)(a1 + 16) += game_Unit_GetParam_alt1(v3);
    **(_DWORD**)(a1 + 24) += *(unsigned __int8*)(v4 + 498);
    **(_DWORD**)(a1 + 32) += UnitItemList_710640_alt1(v4 + 828);
    **(_DWORD**)(a1 + 40) += UnitItemList_710b30_alt1(v4 + 828);
    GameRoutine_1591700_alt1(*(__int64**)(a1 + 48), v4, 0);
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
