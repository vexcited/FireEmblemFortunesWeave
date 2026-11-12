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
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
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
_QWORD* game_facility_anonymous_ProcTheaterUI_CreateBindChoice_alt1(
    _QWORD* result, __int64* a2, char a3, __int64* a4,
    __n128
        a5) __asm__("game_facility_anonymous_ProcTheaterUI_CreateBindChoice");
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
_QWORD* ui_LayoutAccessor_Setup_155dda0_alt1(_QWORD*, _QWORD*) __asm__(
    "ui_LayoutAccessor_Setup_155dda0");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__attribute__((swiftcall)) void game_1366bd0(PSEUDO_X8, __int64, __int64,
                                             __int64);
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 LayoutAccessor_155c910_alt1(__int64,
                                    __int64*) __asm__("LayoutAccessor_155c910");
__int64
LayoutAccessor_155cda0_alt2(__int64 result, const char*,
                            const char*) __asm__("LayoutAccessor_155cda0");
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64 LayoutAccessor_155ea30_alt1(__int64*) __asm__("LayoutAccessor_155ea30");
__int64 ProcInst_657850_alt1(__int64, __int64, const char*, char,
                             __int64) __asm__("ProcInst_657850");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt3(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt2(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
float LayoutAccessor_155d940_alt1(__int64*) __asm__("LayoutAccessor_155d940");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void BasicMenuCursor_16e0c00_alt1(_QWORD*,
                                  __int64) __asm__("BasicMenuCursor_16e0c00");
void BasicMenu_16dcd30(__int64, __int64, _QWORD*, __int64);
void __attribute__((noreturn))
GameRoutine_1115ca0_alt1() __asm__("GameRoutine_1115ca0");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_facility_anonymous_ProcTheaterUI_CreateBindChoice(__int64 a1,
                                                            __int64* a2,
                                                            char a3,
                                                            __int64* a4);

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

void game_facility_anonymous_ProcTheaterUI_CreateBindChoice(__int64 a1,
                                                            __int64* a2,
                                                            char a3,
                                                            __int64* a4)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  _BOOL4 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  const char* v57;
  __int64 v58;
  __int64* v59;
  __int64 v60;
  __int64 v61;
  char v62;
  __int64 v63;
  const char* v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64 v68;
  const char* v69;
  __int64 v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  _QWORD* v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  char v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  char v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64* v92;
  __int64 v93;
  __int64* v94;
  __int64 v95;
  struct {
    _QWORD v96[4];
    _QWORD* v97;
  } v96_;
  struct {
    __int64 v98;
    __int64 v99;
    __int64 v100;
    char v101;
  } v98_;

  v4 = (__int64*)GameData_2236778;
  if (GameData_2236778 == 0) {
    return;
  }
  v5 = *a2;
  v6 = a2[1];
  v10 = (__int64*)fw_memory_g_heap_manager_ptr;
  v11 = v6 - *a2;
  if (v11 != 0) {
    if (v11 < 0) {
      goto LABEL_113;
    }
    v12 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v11, 16, 0);
    v13 = 0;
    do {
      v19 = (__int64*)(v5 + v13);
      v20 = (__int64*)(v12 + v13);
      if ((*(_BYTE*)(v5 + v13) & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(v20, v19[2], v19[1]);
      }
      else {
        v14 = *v19;
        v15 = v19[1];
        v16 = v19[2];
        v20[1] = v15;
        v20[2] = v16;
        *v20 = v14;
      }
      v17 = v5 + v13;
      v18 = v12 + v13;
      v13 += 32;
      *(_BYTE*)(v18 + 24) = *(_BYTE*)(v17 + 24);
    } while (v5 + v13 != v6);
    v21 = v12 + v13;
  }
  else {
    v12 = 0;
    v21 = 0;
  }
  v4[105] = -1;
  v23 = *a4;
  v22 = a4[1];
  if (v22 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 8), 1u,
                              memory_order_relaxed);
  }
  v24 = v4[104];
  v4[103] = v23;
  v4[104] = v22;
  if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    std___1___shared_weak_count___release_weak_alt3(v24);
  }
  ui_LayoutAccessor_SetPaneVisible_alt1((__int64)(v4 + 21), (__int64)"L_Choice",
                                        1);
  v25 = LayoutAccessor_155fbe0_alt1(v4 + 21, "L_Choice");
  GameHr_1562680((__int64)v25, "GaugeDown", 0x0.0p+0f);
  v26 = LayoutAccessor_155fbe0_alt1(v4 + 21, "L_Choice");
  v27 = v21 - v12;
  v28 = v26;
  v91 = v21;
  v93 = v12;
  if (v21 == v12) {
    v95 = 0;
    v38 = 0;
    goto LABEL_25;
  }
  if (v27 < 0) {
  LABEL_113:
    GameRoutine_1115ca0_alt1();
  }
  v29 = fw_memory_HeapManager_Allocate_alt1(*v10, v27, 16, 0);
  v30 = 0;
  v95 = v29;
  do {
    v36 = (__int64*)(v12 + v30);
    v37 = (__int64*)(v29 + v30);
    if ((*(_BYTE*)(v12 + v30) & 1) != 0) {
      fw_text_String_CopyTerminated_alt1(v37, v36[2], v36[1]);
      v29 = v95;
    }
    else {
      v31 = *v36;
      v32 = v36[1];
      v33 = v36[2];
      *v37 = v31;
      v37[1] = v32;
      v37[2] = v33;
    }
    v34 = v12 + v30;
    v35 = v29 + v30;
    v30 += 32;
    *(_BYTE*)(v35 + 24) = *(_BYTE*)(v34 + 24);
  } while (v12 + v30 != v21);
  v38 = v29 + v30;
LABEL_25:
  v39 = *v10;
  v96_.v96[0] = GameData_200fff8;
  v96_.v96[1] = v4;
  v96_.v97 = v96_.v96;
  v40 = fw_memory_HeapManager_Allocate_alt1(v39, 1136, 16, 0);
  v41 = v28[1];
  v98_.v98 = 0;
  v98_.v99 = 0;
  if (v41 != 0) {
    v98_.v99 = std___1___shared_weak_count_lock_alt2(v41);
    if (v98_.v99 != 0) {
      v98_.v98 = *v28;
    }
  }
  if (v28[2] != 0) {
    v42 = v28[1];
    if (v42 != 0) {
      v43 = a3;
      v44 = a1;
      v45 = v40;
      v46 = std___1___shared_weak_count_lock_alt2(v42);
      if (v46 == 0) {
        goto LABEL_39;
      }
      v47 = *v28;
      if (*v28 != 0) {
        LODWORD(v12) = *(unsigned __int8*)(v47 + 24);
        v48 = v47 + 152;
        if ((_DWORD)v12 == 0) {
          v48 = 0;
        }
        v49 = v48 != v28[2];
      }
      else {
        v49 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v49) {
          goto LABEL_39;
        }
      }
      else {
        v52 = v46;
        (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
        v53 = v52;
        v10 = (__int64*)fw_memory_g_heap_manager_ptr;
        std___1___shared_weak_count___release_weak_alt3(v53);
        if (v49) {
        LABEL_39:
          v51 = v28[1];
          if (v51 == 0) {
            v50 = 0;
            v40 = v45;
            goto LABEL_46;
          }
          v40 = v45;
          if (*(_QWORD*)(v51 + 8) != -1) {
          LABEL_41:
            v50 = v28[2];
          LABEL_46:
            a1 = v44;
            a3 = v43;
            goto LABEL_47;
          }
        LABEL_45:
          v50 = 0;
          goto LABEL_46;
        }
      }
      v40 = v45;
      if ((v12 & 1) != 0) {
        goto LABEL_41;
      }
      goto LABEL_45;
    }
  }
  v50 = 0;
LABEL_47:
  BasicMenu_16dcd30(v40, (__int64)"ChoiceMenu", &v98_.v98, v50);
  v54 = v98_.v99;
  if (v98_.v99 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v98_.v99 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
    std___1___shared_weak_count___release_weak_alt3(v54);
  }
  *(_QWORD*)v40 = game_facility_anonymous_ChoiceMenu_vtable;
  *(_QWORD*)(v40 + 176) = GameData_200fcd0;
  v55 = a4[1];
  *(_QWORD*)(v40 + 1056) = *a4;
  *(_QWORD*)(v40 + 1064) = v55;
  if (v55 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v55 + 8), 1u,
                              memory_order_relaxed);
  }
  v56 = v96_.v97;
  v92 = v4;
  if (v96_.v97 != nullptr) {
    if (v96_.v97 == v96_.v96) {
      *(_QWORD*)(v40 + 1104) = v40 + 1072;
      (*(void (**)(_QWORD*))(*v56 + 24LL))(v56);
    }
    else {
      *(_QWORD*)(v40 + 1104) =
          (*(__int64 (**)(__int64))(*v96_.v97 + 16LL))((__int64)v96_.v97);
    }
  }
  else {
    *(_QWORD*)(v40 + 1104) = 0;
  }
  *(_BYTE*)(v40 + 1120) = a3;
  ProcInst_657850_alt1(v40, (__int64)GameData_212c730, "ChoiceMenu", 1, a1);
  if (v95 != v38) {
    v57 = (char*)&v98_.v98 + 1;
    v58 = v95;
    v59 = GameData_212d630[0] + 2;
    v94 = GameData_212d630[0] + 2;
    while (1) {
      v60 = fw_memory_HeapManager_Allocate_alt1(*v10, 88, 16, 0);
      if ((*(_BYTE*)v58 & 1) != 0) {
        fw_text_String_CopyTerminated_alt1(&v98_.v98, *(_QWORD*)(v58 + 16),
                                           *(_QWORD*)(v58 + 8));
      }
      else {
        v61 = *(_QWORD*)(v58 + 8);
        v98_.v98 = *(_QWORD*)v58;
        v98_.v99 = v61;
        v98_.v100 = *(_QWORD*)(v58 + 16);
      }
      v62 = *(_BYTE*)(v58 + 24);
      v63 = v98_.v100;
      *(_QWORD*)v60 = v59;
      *(_QWORD*)(v60 + 8) = 0;
      v98_.v101 = v62;
      if ((v98_.v98 & 1) != 0) {
        v64 = (const char*)v63;
      }
      else {
        v64 = v57;
      }
      v65 = strlen_alt1(v64);
      if (v65 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0_alt1();
      }
      v66 = v65;
      if (v65 >= 0x17) {
        break;
      }
      v67 = v60 + 17;
      *(_BYTE*)(v60 + 16) = 2 * v65;
      if (v65 != 0) {
        goto LABEL_74;
      }
    LABEL_75:
      *(_BYTE*)(v67 + v66) = 0;
      *(_DWORD*)(v60 + 40) = 0;
      *(_QWORD*)(v60 + 48) = 0;
      *(_QWORD*)(v60 + 56) = 0;
      *(_QWORD*)(v60 + 64) = 0;
      *(_QWORD*)(v60 + 72) = 0;
      *(_DWORD*)(v60 + 80) = 16843009;
      *(_QWORD*)v60 = game_facility_anonymous_ChoiceMenuItem_vtable;
      *(_BYTE*)(v60 + 84) = v98_.v101;
      BasicMenuCursor_16e0c00_alt1((_QWORD*)v40, v60);
      if ((v98_.v98 & 1) != 0 && v98_.v100 != 0) {
        v76 = 128;
        if (*(_QWORD*)(*v10 + 200) == 0) {
          v76 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*v10 + v76, v98_.v100);
      }
      v58 += 32;
      if (v58 == v38) {
        goto LABEL_80;
      }
    }
    v68 = v38;
    v69 = v57;
    v70 = v40;
    v71 = v10;
    v72 = *v10;
    if ((v66 | 7) == 0x17) {
      v73 = 26;
    }
    else {
      v73 = (v66 | 7) + 1;
    }
    v74 = fw_memory_HeapManager_Allocate_alt1(v72, v73, 16, 0);
    v75 = v73 | 1;
    v10 = v71;
    v40 = v70;
    v57 = v69;
    v38 = v68;
    v59 = v94;
    v67 = v74;
    *(_QWORD*)(v60 + 24) = v66;
    *(_QWORD*)(v60 + 32) = v74;
    *(_QWORD*)(v60 + 16) = v75;
  LABEL_74:
    memmove_alt1(v67, (__int64)v64, v66);
    goto LABEL_75;
  }
LABEL_80:
  v77 = v96_.v97;
  v92[107] = v40;
  if (v77 == v96_.v96) {
    v78 = 32;
    goto LABEL_84;
  }
  if (v77 != nullptr) {
    v78 = 40;
  LABEL_84:
    (*(void (**)(__int64))(*v77 + v78))((__int64)v77);
  }
  v79 = v95;
  if (v95 != 0) {
    if (v95 != v38) {
      v80 = v38;
      do {
        v81 = *(_BYTE*)(v80 - 32);
        v80 -= 32;
        if ((v81 & 1) != 0) {
          v82 = *(_QWORD*)(v38 - 16);
          if (v82 != 0) {
            if (*(_QWORD*)(*v10 + 200) != 0) {
              v83 = 128;
            }
            else {
              v83 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v10 + v83, v82);
            v79 = v95;
          }
        }
        v38 = v80;
      } while (v80 != v79);
    }
    v84 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v84 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v10 + v84, v79);
  }
  *((_DWORD*)v92 + 216) = 0;
  *((_DWORD*)v92 + 212) = 1;
  if (v93 != 0) {
    v85 = v91;
    if (v91 != v93) {
      v86 = v91;
      do {
        v87 = *(_BYTE*)(v86 - 32);
        v86 -= 32;
        if ((v87 & 1) != 0) {
          v88 = *(_QWORD*)(v85 - 16);
          if (v88 != 0) {
            if (*(_QWORD*)(*v10 + 200) != 0) {
              v89 = 128;
            }
            else {
              v89 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*v10 + v89, v88);
          }
        }
        v85 = v86;
      } while (v86 != v93);
    }
    v90 = 128;
    if (*(_QWORD*)(*v10 + 200) == 0) {
      v90 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v10 + v90, v93);
  }
}

__int64 ProcTheaterUI_1113db0()
{
  __int64 v0;
  __int64 result;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  unsigned int v7;
  struct {
    __int64* v8;
    __int64 v9;
  } v8_;

  if (GameData_2236778 == 0) {
    return 0;
  }
  LayoutAccessor_1560070_alt1((void*)(&v8_.v8),
                              (__int64*)(GameData_2236778 + 168), "L_Tlp");
  if (v8_.v9 == 0) {
    return 0;
  }
  v0 = std___1___shared_weak_count_lock_alt2(v8_.v9);
  v2 = v8_.v8;
  result = v8_.v9;
  if (v8_.v9 != 0) {
    result = std___1___shared_weak_count___release_weak_alt3(v8_.v9);
  }
  if (v0 != 0 && v2 != nullptr) {
    v3 = v2[1];
    if (v3 == 0) {
      goto LABEL_17;
    }
    result = std___1___shared_weak_count_lock_alt2(v3);
    if (result == 0) {
      goto LABEL_17;
    }
    v4 = *v2;
    v5 = result;
    if (*v2 != 0) {
      result = *(unsigned int*)(v4 + 2372);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v6 = result;
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak_alt3(v5);
      result = v6;
    }
    if (v4 == 0) {
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
  v7 = result;
  (*(void (**)(__int64))(*(_QWORD*)v0 + 16LL))(v0);
  std___1___shared_weak_count___release_weak_alt3(v0);
  result = v7;
  if (v2 == nullptr) {
    return 0;
  }
  return result;
}

void ProcTheaterUI_1113ee0(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  struct {
    __int64 v14;
    __int64 v15;
  } v14_;
  struct {
    _QWORD v16[6];
    int v17;
    char gap68_[4];
    __int64 v18;
    __int64 v19;
    __int64 v20;
  } v16_;

  v16_.v18 = 0;
  v16_.v19 = 0;
  v16_.v20 = 0;
  v16_.v17 = 0;
  v16_.v16[0] = 0x800000018LL;
  v16_.v16[1] = 0x500000050LL;
  v16_.v16[2] = 0x10000000100000LL;
  memset(&v16_.v16[3], 0, 24);
  game_1366bd0((void*)(&v14_.v14), (__int64)"Layout/Hub.arc",
               (__int64)"Hub_Theater_Act", (__int64)v16_.v16);
  v2 = v14_.v14;
  v3 = v14_.v15;
  v4 = *(_QWORD*)(a1 + 160);
  v14_.v14 = 0;
  v14_.v15 = 0;
  *(_QWORD*)(a1 + 152) = v2;
  *(_QWORD*)(a1 + 160) = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak_alt3(v4);
  }
  v5 = v14_.v15;
  if (v14_.v15 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14_.v15 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt3(v5);
  }
  v6 = v16_.v18;
  if (v16_.v18 != 0) {
    v7 = v16_.v19;
    v8 = fw_memory_g_heap_manager_ptr;
    if (v16_.v18 == v16_.v19) {
      goto LABEL_18;
    }
    v9 = v16_.v19;
    do {
      v10 = *(_BYTE*)(v9 - 24);
      v9 -= 24;
      if ((v10 & 1) != 0) {
        v11 = *(_QWORD*)(v7 - 8);
        if (v11 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v12, v11);
        }
      }
      v7 = v9;
    } while (v9 != v6);
    v16_.v19 = v6;
    v6 = v16_.v18;
    if (v16_.v18 != 0) {
    LABEL_18:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v8 + v13, v6);
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
  __int64* v6;
  unsigned __int8* v7;
  unsigned int v8;
  _QWORD v9[4];

  v3 = *(_QWORD*)(result + 152);
  if (*(_BYTE*)(v3 + 24) == 1) {
    v9[2] = v1;
    v9[3] = v2;
    v4 = *(_QWORD*)(result + 160);
    v5 = result;
    v9[0] = v3;
    v9[1] = v4;
    if (v4 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                memory_order_relaxed);
      ui_LayoutAccessor_Setup_155dda0_alt1((_QWORD*)(result + 168), v9);
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak_alt3(v4);
      }
    }
    else {
      ui_LayoutAccessor_Setup_155dda0_alt1((_QWORD*)(result + 168), v9);
    }
    ui_LayoutAccessor_SetPaneVisible_alt1(v5 + 168, (__int64)"L_Choice", 0);
    ui_LayoutAccessor_SetPaneVisible_alt1(v5 + 168, (__int64)"L_Scene", 0);
    LayoutAccessor_155c910_alt1(v5 + 272, (__int64*)(v5 + 168));
    LayoutAccessor_155cda0_alt2(v5 + 272, "StoryOut", nullptr);
    LayoutAccessor_155d940_alt1((__int64*)(v5 + 272));
    LayoutAccessor_155c910_alt1(v5 + 448, (__int64*)(v5 + 168));
    LayoutAccessor_155cda0_alt2(v5 + 448, "CinemaOut", nullptr);
    LayoutAccessor_155d940_alt1((__int64*)(v5 + 448));
    GameHr_1562680(v5 + 168, "CinemaWait", 0x1.0000000000000p+0f);
    v6 = LayoutAccessor_155fbe0_alt1((__int64*)(v5 + 168), "L_Tlp");
    LayoutAccessor_155c910_alt1(v5 + 624, v6);
    LayoutAccessor_155cda0_alt2(v5 + 624, "Out", nullptr);
    LayoutAccessor_155d940_alt1((__int64*)(v5 + 624));
    *(_DWORD*)(v5 + 816) = 0;
    result = LayoutAccessor_155ea30_alt1((__int64*)(v5 + 168));
    if ((result & 1) == 0) {
      result = LayoutAccessor_155e830_alt1(v5 + 168, 0);
    }
    v7 = *(unsigned __int8**)(v5 + 16);
    if (v7 != nullptr) {
      v8 = *v7;
      if (v8 <= 0x10 && ((1 << v8) & 0x1CE00) != 0) {
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
