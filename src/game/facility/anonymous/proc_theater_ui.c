#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_155ca60(_QWORD);
__int64 GameRoutine_155e140(_QWORD);
__int64 GameRoutine_1563f90(_QWORD, _QWORD);
__int64 GameRoutine_1564060(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_anonymous_ProcTheaterUI_vtable[])();
extern __int64 GameData_2236778;
__int64 ProcTheaterUI_Destructor(__int64 a1);
__int64 LayoutAccessor_155e140(_QWORD);
__int64 ProcTheaterUI_1114230(__int64 a1);
__int64 game_facility_anonymous_ProcTheaterUI_CreateBindChoice_closure_Invoke(
    __int64 result, _DWORD* a2);
_QWORD* GameRoutine_1560070(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_16dcd30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155c910(_QWORD, _QWORD);
__int64 LayoutAccessor_155cda0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155d940(_QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155ea30(_QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, float);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 std___1___shared_weak_count_lock_alt1(void) __asm__(
    "std___1___shared_weak_count_lock");
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD, long double);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_200fcd0[])();
extern __int64 (*GameData_200fff8[])();
extern __int64 (*game_facility_anonymous_ChoiceMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_ChoiceMenu_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d630[11];
long double ui_LayoutAccessor_Setup_155dda0(_QWORD, _QWORD);
struct PseudoSret GameRoutine_1366bd0(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_1115ca0(void);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
_QWORD* game_facility_anonymous_ProcTheaterUI_CreateBindChoice(
    _QWORD* result, __int64* a2, char a3, __int64* a4, __n128 a5);
__int64 ProcTheaterUI_1113db0();
void ProcTheaterUI_1113ee0(__int64 a1);
__int64 ProcTheaterUI_1114070(__int64 result);
__attribute__((swiftcall)) void GameRoutine_1114920(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 GameRoutine_1840740(__int64, unsigned int, __int64, unsigned __int8,
                            char);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_67ed20(_QWORD*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__n128 std___1___shared_weak_count___release_weak_alt2() __asm__(
    "std___1___shared_weak_count___release_weak");
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
void* game_97b2f0(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void LayoutAccessor_155cda0_alt1(__int64*, __int64,
                                 char*) __asm__("LayoutAccessor_155cda0");
void ProcTheaterUI_1113400(char a1, __int64 a2);

void ProcTheaterUI_1113400(char a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v4;
  long double v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  long double v16;
  __int64* v17;
  _QWORD v18[2];
  struct {
    __int64* v19;
    unsigned __int64 v20;
    unsigned __int64 v21;
    unsigned __int64 v22;
    int v23;
    int v24;
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
    __int64 v36;
    __int64 v37;
  } v19_;

  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if ((a1 & 1) != 0) {
    v2 = GameData_2236778;
    if (GameData_2236778 != 0) {
      LayoutAccessor_1560070((void*)(&v19_.v19),
                             (__int64*)(GameData_2236778 + 168),
                             (__int64)"L_Tlp"),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v19_.v20 == 0) {
        goto LABEL_24;
      }
      v4 = std___1___shared_weak_count_lock(v19_.v20),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v6 = v19_.v19;
      if (v19_.v20 != 0) {
        *(__n128*)&v5 = std___1___shared_weak_count___release_weak_alt2(),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if (v4 != 0 && v6 != nullptr) {
        if (*(_BYTE*)(a2 + 2136) != 0) {
          v7 = (__int64)game_97b2f0(a2 + 2104),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          v7 = GameRoutine_67ed20(*(_QWORD**)(a2 + 392)),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v8 = msg_MessageManager_instance__ptr[0];
        if (v7 != 0) {
          v9 = v7;
        }
        else {
          v9 = (__int64)*msg_MessageManager_empty_text__ptr;
        }
        GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v9),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v10 = *v8;
        v19_.v25 = -1;
        v19_.v26 = -1;
        v19_.v27 = -1;
        v19_.v28 = -1;
        v19_.v29 = -1;
        v19_.v30 = -1;
        v19_.v31 = -1;
        v19_.v32 = -1;
        v19_.v33 = -1;
        v19_.v34 = -1;
        v19_.v35 = -1;
        v19_.v36 = -1;
        v19_.v19 = GameData_212e348 + 2;
        v19_.v20 = 0xFFFF0001FFFF0000LL;
        v19_.v21 = 0xFFFF0004FFFF0002LL;
        v19_.v22 = 0xFFFF0006FFFF0005LL;
        v19_.v37 = 8;
        v19_.v23 = -65529;
        v19_.v24 = -65528;
        v11 = GameRoutine_a4dbe0(v10, "MID_TheaterAct_Recovery_Message", 0),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v11 != nullptr) {
          v12 = (__int64)v11;
          v13 = ui_LayoutAccessor_FindTextBox(v6, (__int64)"T_Txt"),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (v13 != 0) {
            GameRoutine_156c5d0(v13, v12, 0),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v5 = COERCE_AS(__typeof__(v5),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
        v14 = ui_LayoutAccessor_FindPane(v6, (__int64)"Face"),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (v14 != 0) {
          v14 =
              __dynamic_cast(v14, GameData_212d670[0], GameData_212d678[0], 0),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        GameRoutine_1840740(v14, 0, a2, 6u, 1),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      else if (v4 == 0) {
        goto LABEL_24;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 16LL))(v4, v5),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt2(),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    LABEL_24:
      LayoutAccessor_155cda0_alt1((__int64*)(v2 + 624), (__int64)"In", nullptr),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v18[0] = "L_Tlp/L_PopUp";
      v18[1] = 13;
      GameRoutine_1114920((void*)(&v19_.v19), (__int64*)(v2 + 168), v18),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v19_.v20 != 0) {
        v15 = std___1___shared_weak_count_lock(v19_.v20),
        v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v17 = v19_.v19;
        if (v19_.v20 != 0) {
          *(__n128*)&v16 = std___1___shared_weak_count___release_weak_alt2(),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        if (v15 != 0 && v17 != nullptr) {
          (*(void (**)(__int64*, _QWORD, long double))(*v17 + 40))(v17, 0, v16),
              v16 = COERCE_AS(__typeof__(v16),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          goto LABEL_31;
        }
        if (v15 != 0) {
        LABEL_31:
          if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v5 = COERCE_AS(__typeof__(v5),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
            std___1___shared_weak_count___release_weak_alt2(),
                v16 = COERCE_AS(__typeof__(v16),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v5 = COERCE_AS(__typeof__(v5),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
      }
      *(_DWORD*)(v2 + 816) = 1;
    }
  }
}

_QWORD* game_facility_anonymous_ProcTheaterUI_CreateBindChoice(
    _QWORD* result, __int64* a2, char a3, __int64* a4, __n128 a5)
{
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64* v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char v44;
  _QWORD* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _BOOL4 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  long double v55;
  __int64 v56;
  __int64 v57;
  _QWORD* v58;
  char* v59;
  __int64 v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  char v64;
  char* v65;
  char* v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  char* v71;
  __int64 v72;
  _QWORD* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  char v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  char v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  _QWORD* v91;
  __int64 v92;
  __int64* v93;
  __int64 v94;
  _QWORD v95[4];
  _QWORD* v96;
  __int64 v97;
  __int64 v98;
  char* v99;
  char v100;

  v5 = (_QWORD*)GameData_2236778;
  if (GameData_2236778 == 0) {
    return result;
  }
  v6 = *a2;
  v7 = a2[1];
  v10 = result;
  v11 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v12 = v7 - *a2;
  if (v12 != 0) {
    if (v12 < 0) {
      goto LABEL_113;
    }
    v13 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v12, 16, 0);
    v14 = 0;
    do {
      v20 = (__int64*)(v6 + v14);
      v21 = (_QWORD*)(v13 + v14);
      if ((*(_BYTE*)(v6 + v14) & 1) != 0) {
        fw_text_String_CopyTerminated(v21, v20[2], v20[1]);
      }
      else {
        v15 = *v20;
        v16 = v20[1];
        v17 = v20[2];
        v21[1] = v16;
        v21[2] = v17;
        *v21 = v15;
      }
      v18 = v6 + v14;
      v19 = v13 + v14;
      v14 += 32;
      *(_BYTE*)(v19 + 24) = *(_BYTE*)(v18 + 24);
    } while (v6 + v14 != v7);
    v22 = v13 + v14;
  }
  else {
    v13 = 0;
    v22 = 0;
  }
  v5[105] = -1;
  v24 = *a4;
  v23 = a4[1];
  if (v23 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                              memory_order_relaxed);
  }
  v25 = v5[104];
  v5[103] = v24;
  v5[104] = v23;
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    a5 = std___1___shared_weak_count___release_weak_alt1(v25);
  }
  ui_LayoutAccessor_SetPaneVisible(v5 + 21, "L_Choice", 1, *(long double*)&a5);
  v26 = LayoutAccessor_155fbe0(v5 + 21, "L_Choice");
  LayoutAccessor_1562680(v26, "GaugeDown", 0.0);
  v27 = LayoutAccessor_155fbe0(v5 + 21, "L_Choice");
  v28 = v22 - v13;
  v29 = (__int64*)v27;
  v90 = v22;
  v92 = v13;
  if (v22 == v13) {
    v94 = 0;
    v39 = 0;
    goto LABEL_25;
  }
  if (v28 < 0) {
  LABEL_113:
    GameRoutine_1115ca0();
  }
  v30 = fw_memory_HeapManager_Allocate(*v11, v28, 16, 0);
  v31 = 0;
  v94 = v30;
  do {
    v37 = (__int64*)(v13 + v31);
    v38 = (_QWORD*)(v30 + v31);
    if ((*(_BYTE*)(v13 + v31) & 1) != 0) {
      fw_text_String_CopyTerminated(v38, v37[2], v37[1]);
      v30 = v94;
    }
    else {
      v32 = *v37;
      v33 = v37[1];
      v34 = v37[2];
      *v38 = v32;
      v38[1] = v33;
      v38[2] = v34;
    }
    v35 = v13 + v31;
    v36 = v30 + v31;
    v31 += 32;
    *(_BYTE*)(v36 + 24) = *(_BYTE*)(v35 + 24);
  } while (v13 + v31 != v22);
  v39 = v30 + v31;
LABEL_25:
  v40 = *v11;
  v95[0] = GameData_200fff8;
  v95[1] = v5;
  v96 = v95;
  v41 = fw_memory_HeapManager_Allocate(v40, 1136, 16, 0);
  v42 = v29[1];
  v97 = 0;
  v98 = 0;
  if (v42 != 0) {
    v98 = std___1___shared_weak_count_lock(v42);
    if (v98 != 0) {
      v97 = *v29;
    }
  }
  if (v29[2] != 0) {
    v43 = v29[1];
    if (v43 != 0) {
      v44 = a3;
      v45 = v10;
      v46 = v41;
      v47 = std___1___shared_weak_count_lock(v43);
      if (v47 == 0) {
        goto LABEL_39;
      }
      v48 = *v29;
      if (*v29 != 0) {
        LODWORD(v13) = *(unsigned __int8*)(v48 + 24);
        v49 = v48 + 152;
        if ((_DWORD)v13 == 0) {
          v49 = 0;
        }
        v50 = v49 != v29[2];
      }
      else {
        v50 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v50) {
          goto LABEL_39;
        }
      }
      else {
        v53 = v47;
        (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
        v54 = v53;
        v11 = (_QWORD*)fw_memory_g_heap_manager_ptr;
        std___1___shared_weak_count___release_weak_alt1(v54);
        if (v50) {
        LABEL_39:
          v52 = v29[1];
          if (v52 == 0) {
            v51 = 0;
            v41 = v46;
            goto LABEL_46;
          }
          v41 = v46;
          if (*(_QWORD*)(v52 + 8) != -1) {
          LABEL_41:
            v51 = v29[2];
          LABEL_46:
            v10 = v45;
            a3 = v44;
            goto LABEL_47;
          }
        LABEL_45:
          v51 = 0;
          goto LABEL_46;
        }
      }
      v41 = v46;
      if ((v13 & 1) != 0) {
        goto LABEL_41;
      }
      goto LABEL_45;
    }
  }
  v51 = 0;
LABEL_47:
  GameRoutine_16dcd30(v41, "ChoiceMenu", &v97, v51);
  v56 = v98;
  if (v98 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v98 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56);
    *(__n128*)&v55 = std___1___shared_weak_count___release_weak_alt1(v56);
  }
  *(_QWORD*)v41 = game_facility_anonymous_ChoiceMenu_vtable;
  *(_QWORD*)(v41 + 176) = GameData_200fcd0;
  v57 = a4[1];
  *(_QWORD*)(v41 + 1056) = *a4;
  *(_QWORD*)(v41 + 1064) = v57;
  if (v57 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v57 + 8), 1u,
                              memory_order_relaxed);
  }
  v58 = v96;
  v91 = v5;
  if (v96 != nullptr) {
    if (v96 == v95) {
      *(_QWORD*)(v41 + 1104) = v41 + 1072;
      (*(void (**)(_QWORD*, long double))(*v58 + 24LL))(v58, v55);
    }
    else {
      *(_QWORD*)(v41 + 1104) = (*(__int64 (**)(long double))(*v96 + 16LL))(v55);
    }
  }
  else {
    *(_QWORD*)(v41 + 1104) = 0;
  }
  *(_BYTE*)(v41 + 1120) = a3;
  ProcInst_657850(v41, GameData_212c730, "ChoiceMenu", 1, v10);
  if (v94 != v39) {
    v59 = (char*)&v97 + 1;
    v60 = v94;
    v61 = GameData_212d630[0] + 2;
    v93 = GameData_212d630[0] + 2;
    while (1) {
      v62 = fw_memory_HeapManager_Allocate(*v11, 88, 16, 0);
      if ((*(_BYTE*)v60 & 1) != 0) {
        fw_text_String_CopyTerminated(&v97, *(_QWORD*)(v60 + 16),
                                      *(_QWORD*)(v60 + 8));
      }
      else {
        v63 = *(_QWORD*)(v60 + 8);
        v97 = *(_QWORD*)v60;
        v98 = v63;
        v99 = *(char**)(v60 + 16);
      }
      v64 = *(_BYTE*)(v60 + 24);
      v65 = v99;
      *(_QWORD*)v62 = v61;
      *(_QWORD*)(v62 + 8) = 0;
      v100 = v64;
      if ((v97 & 1) != 0) {
        v66 = v65;
      }
      else {
        v66 = v59;
      }
      v67 = strlen(v66);
      if (v67 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0(v67);
      }
      v68 = v67;
      if (v67 >= 0x17) {
        break;
      }
      v69 = v62 + 17;
      *(_BYTE*)(v62 + 16) = 2 * v67;
      if (v67 != 0) {
        goto LABEL_74;
      }
    LABEL_75:
      *(_BYTE*)(v69 + v68) = 0;
      *(_DWORD*)(v62 + 40) = 0;
      *(_QWORD*)(v62 + 48) = 0;
      *(_QWORD*)(v62 + 56) = 0;
      *(_QWORD*)(v62 + 64) = 0;
      *(_QWORD*)(v62 + 72) = 0;
      *(_DWORD*)(v62 + 80) = 16843009;
      *(_QWORD*)v62 = game_facility_anonymous_ChoiceMenuItem_vtable;
      *(_BYTE*)(v62 + 84) = v100;
      BasicMenuCursor_16e0c00(v41, v62);
      if ((v97 & 1) != 0 && v99 != nullptr) {
        v78 = 128;
        if (*(_QWORD*)(*v11 + 200LL) == 0) {
          v78 = 56;
        }
        nn_mem_StandardAllocator_Free(*v11 + v78);
      }
      v60 += 32;
      if (v60 == v39) {
        goto LABEL_80;
      }
    }
    v70 = v39;
    v71 = v59;
    v72 = v41;
    v73 = v11;
    v74 = *v11;
    if ((v68 | 7) == 0x17) {
      v75 = 26;
    }
    else {
      v75 = (v68 | 7) + 1;
    }
    v76 = fw_memory_HeapManager_Allocate(v74, v75, 16, 0);
    v77 = v75 | 1;
    v11 = v73;
    v41 = v72;
    v59 = v71;
    v39 = v70;
    v61 = v93;
    v69 = v76;
    *(_QWORD*)(v62 + 24) = v68;
    *(_QWORD*)(v62 + 32) = v76;
    *(_QWORD*)(v62 + 16) = v77;
  LABEL_74:
    memmove(v69, v66, v68);
    goto LABEL_75;
  }
LABEL_80:
  result = v96;
  v91[107] = v41;
  if (result == v95) {
    v79 = 32;
    goto LABEL_84;
  }
  if (result != nullptr) {
    v79 = 40;
  LABEL_84:
    result =
        (_QWORD*)(*(__int64 (**)(__int64))(*result + v79))((__int64)result);
  }
  v80 = v94;
  if (v94 != 0) {
    if (v94 != v39) {
      v81 = v39;
      do {
        v82 = *(_BYTE*)(v81 - 32);
        v81 -= 32;
        if ((v82 & 1) != 0 && *(_QWORD*)(v39 - 16) != 0) {
          if (*(_QWORD*)(*v11 + 200LL) != 0) {
            v83 = 128;
          }
          else {
            v83 = 56;
          }
          nn_mem_StandardAllocator_Free(*v11 + v83);
          v80 = v94;
        }
        v39 = v81;
      } while (v81 != v80);
    }
    v84 = 128;
    if (*(_QWORD*)(*v11 + 200LL) == 0) {
      v84 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*v11 + v84);
  }
  *((_DWORD*)v91 + 216) = 0;
  *((_DWORD*)v91 + 212) = 1;
  if (v92 != 0) {
    v85 = v90;
    if (v90 != v92) {
      v86 = v90;
      do {
        v87 = *(_BYTE*)(v86 - 32);
        v86 -= 32;
        if ((v87 & 1) != 0 && *(_QWORD*)(v85 - 16) != 0) {
          if (*(_QWORD*)(*v11 + 200LL) != 0) {
            v88 = 128;
          }
          else {
            v88 = 56;
          }
          nn_mem_StandardAllocator_Free(*v11 + v88);
        }
        v85 = v86;
      } while (v86 != v92);
    }
    v89 = 128;
    if (*(_QWORD*)(*v11 + 200LL) == 0) {
      v89 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*v11 + v89);
  }
  return result;
}

__int64 ProcTheaterUI_1113db0()
{
  __int64 v0;
  __int64 result;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  unsigned int v6;
  __int64* v7;
  __int64 v8;

  if (GameData_2236778 == 0) {
    return 0;
  }
  GameRoutine_1560070(&v7, GameData_2236778 + 168, "L_Tlp");
  if (v8 == 0) {
    return 0;
  }
  v0 = std___1___shared_weak_count_lock_alt1();
  v2 = v7;
  result = v8;
  if (v8 != 0) {
    result = std___1___shared_weak_count___release_weak(v8);
  }
  if (v0 != 0 && v2 != nullptr) {
    if (v2[1] == 0) {
      goto LABEL_17;
    }
    result = std___1___shared_weak_count_lock_alt1();
    if (result == 0) {
      goto LABEL_17;
    }
    v3 = *v2;
    v4 = result;
    if (*v2 != 0) {
      result = *(unsigned int*)(v3 + 2372);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v5 = result;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak(v4);
      result = v5;
    }
    if (v3 == 0) {
    LABEL_17:
      result = 0;
    }
  }
  else if (v0 == 0) {
    return 0;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v0 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v2 != nullptr) {
      return result;
    }
    return 0;
  }
  v6 = result;
  (*(void (**)(__int64))(*(_QWORD*)v0 + 16LL))(v0);
  std___1___shared_weak_count___release_weak(v0);
  result = v6;
  if (v2 == nullptr) {
    return 0;
  }
  return result;
}

void ProcTheaterUI_1113ee0(__int64 a1)
{
  long double v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  char v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[6];
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v18 = 0;
  v19 = 0;
  v20 = 0;
  v17 = 0;
  v16[0] = 0x800000018LL;
  v16[1] = 0x500000050LL;
  v16[2] = 0x10000000100000LL;
  memset(&v16[3], 0, 24);
  *(struct PseudoSret*)(&v14) =
      GameRoutine_1366bd0("Layout/Hub.arc", "Hub_Theater_Act", v16);
  v3 = v14;
  v4 = v15;
  v5 = *(_QWORD*)(a1 + 160);
  v14 = 0;
  v15 = 0;
  *(_QWORD*)(a1 + 152) = v3;
  *(_QWORD*)(a1 + 160) = v4;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    *(__n128*)&v2 = std___1___shared_weak_count___release_weak_alt1(v5);
  }
  v6 = v15;
  if (v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v6 + 16LL))(v6, v2);
    std___1___shared_weak_count___release_weak_alt1(v6);
  }
  v7 = v18;
  if (v18 != 0) {
    v8 = v19;
    v9 = fw_memory_g_heap_manager_ptr;
    if (v18 == v19) {
      goto LABEL_18;
    }
    v10 = v19;
    do {
      v11 = *(_BYTE*)(v10 - 24);
      v10 -= 24;
      if ((v11 & 1) != 0 && *(_QWORD*)(v8 - 8) != 0) {
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v12);
      }
      v8 = v10;
    } while (v10 != v7);
    v19 = v7;
    if (v18 != 0) {
    LABEL_18:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v13);
    }
  }
}

__int64 ProcTheaterUI_1114070(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  long double v6;
  long double v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned int v10;
  _QWORD v11[4];

  v3 = *(_QWORD*)(result + 152);
  if (*(_BYTE*)(v3 + 24) == 1) {
    v11[2] = v1;
    v11[3] = v2;
    v4 = *(_QWORD*)(result + 160);
    v5 = result;
    v11[0] = v3;
    v11[1] = v4;
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
      v6 = ui_LayoutAccessor_Setup_155dda0(result + 168, v11);
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v4 + 16LL))(v4, v6);
        *(__n128*)&v6 = std___1___shared_weak_count___release_weak_alt1(v4);
      }
    }
    else {
      v6 = ui_LayoutAccessor_Setup_155dda0(result + 168, v11);
    }
    ui_LayoutAccessor_SetPaneVisible(v5 + 168, "L_Choice", 0, v6);
    ui_LayoutAccessor_SetPaneVisible(v5 + 168, "L_Scene", 0, v7);
    LayoutAccessor_155c910(v5 + 272, v5 + 168);
    LayoutAccessor_155cda0(v5 + 272, "StoryOut", 0);
    LayoutAccessor_155d940(v5 + 272);
    LayoutAccessor_155c910(v5 + 448, v5 + 168);
    LayoutAccessor_155cda0(v5 + 448, "CinemaOut", 0);
    LayoutAccessor_155d940(v5 + 448);
    LayoutAccessor_1562680(v5 + 168, "CinemaWait", 1.0);
    v8 = LayoutAccessor_155fbe0(v5 + 168, "L_Tlp");
    LayoutAccessor_155c910(v5 + 624, v8);
    LayoutAccessor_155cda0(v5 + 624, "Out", 0);
    LayoutAccessor_155d940(v5 + 624);
    *(_DWORD*)(v5 + 816) = 0;
    result = LayoutAccessor_155ea30(v5 + 168);
    if ((result & 1) == 0) {
      result = LayoutAccessor_155e830(v5 + 168, 0);
    }
    v9 = *(unsigned __int8**)(v5 + 16);
    if (v9 != nullptr) {
      v10 = *v9;
      if (v10 <= 0x10 && ((1 << v10) & 0x1CE00) != 0) {
        *(_WORD*)(v5 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(v5 + 136) |= 8u;
  }
  return result;
}

__int64 ProcTheaterUI_1114230(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 152);
  if (v1 != 0) {
    *(_BYTE*)(v1 + 2376) = 1;
  }
  v2 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v3 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
    a1 = v3;
  }
  return LayoutAccessor_155e140(a1 + 168);
}

__int64 ProcTheaterUI_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  *(_QWORD*)a1 = game_facility_anonymous_ProcTheaterUI_vtable;
  v2 = *(_QWORD*)(a1 + 152);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 2376) = 1;
  }
  v3 = *(_QWORD*)(a1 + 160);
  *(_QWORD*)(a1 + 152) = 0;
  *(_QWORD*)(a1 + 160) = 0;
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    std___1___shared_weak_count___release_weak(v3);
  }
  GameRoutine_155e140(a1 + 168);
  v4 = *(_QWORD*)(a1 + 832);
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(a1 + 808);
  if (v5 != 0) {
    std___1___shared_weak_count___release_weak(v5);
  }
  GameRoutine_155ca60(a1 + 624);
  GameRoutine_155ca60(a1 + 448);
  GameRoutine_155ca60(a1 + 272);
  GameRoutine_155e140(a1 + 168);
  v6 = *(_QWORD*)(a1 + 264);
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
  }
  GameRoutine_1564060(a1 + 216);
  GameRoutine_1563f90(a1 + 192, *(_QWORD*)(a1 + 200));
  v7 = *(_QWORD*)(a1 + 176);
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak(v7);
  }
  v8 = *(_QWORD*)(a1 + 160);
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    std___1___shared_weak_count___release_weak(v8);
  }
  GameData_2236778 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 game_facility_anonymous_ProcTheaterUI_CreateBindChoice_closure_Invoke(
    __int64 result, _DWORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(result + 8);
  *(_DWORD*)(v2 + 840) = *a2;
  *(_DWORD*)(v2 + 848) = 0;
  return result;
}

#pragma GCC visibility pop
