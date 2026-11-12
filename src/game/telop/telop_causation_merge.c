#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1384e90(__int64);
__int64 GameRoutine_173fe30(void);
__int64 LayoutAccessor_1563280(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 TelopCausationMerge_1385040(_QWORD* a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 Alignment_56b600(__int64 result);
__int64 ControlCreator_13633c0(__int64 result);
__int64 GameRoutine_158a7c0(unsigned __int8);
__int64 GameRoutine_1840740(__int64, unsigned int, __int64, unsigned __int8,
                            char);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_67ed20(_QWORD*);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Manager_136afb0(__int64, unsigned int, _BYTE*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_GetPaneAlpha(__int64*, __int64);
__n128 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
double ui_LayoutAccessor_GetPaneTranslate(__int64*, __int64);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 ui_Manager_instance_;
extern char** msg_MessageManager_empty_text__ptr;
float ui_LayoutAccessor_SetPaneTranslate(__int64*, __int64, __int64);
void* game_97b2f0(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void LayoutAccessor_1562680(__int64*, __int64, float);
void ui_LayoutAccessor_SetPaneAlpha(__int64*, __int64, char);
__int64 TelopCausationMerge_Unknown33(__int64 a1);
__n128 TelopCausationMerge_1384e90_alt1(__int64 a1) __asm__(
    "TelopCausationMerge_1384e90");
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 Manager_136a920_alt1(__int64, __int64, int, unsigned int,
                             const char*) __asm__("Manager_136a920");
__int64 Manager_136afb0_alt1(__int64, unsigned int,
                             const char*) __asm__("Manager_136afb0");
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_SetPaneAlpha_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneAlpha");
char* GameHr_67ed20(_QWORD*);
void TelopCausationMerge_1384e90(__int64 a1);

__int64 TelopCausationMerge_Unknown33(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  const char* v8;
  __int64 v9;
  __int64 v10;
  const char* v11;
  __int64* v12;
  const char* v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 result;
  struct {
    __int64* v19;
    __int64 v20;
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

  GameHr_1562680(a1 + 168, "In", 0x0.0p+0f);
  GameHr_1562680(a1 + 168, "Title_In", 0x0.0p+0f);
  LayoutAccessor_1560070_alt1((void*)(&v19_.v19), (__int64*)(a1 + 168),
                              "L_Merge");
  if (v19_.v20 == 0) {
    goto LABEL_31;
  }
  v2 = std___1___shared_weak_count_lock_alt1(v19_.v20);
  v3 = v19_.v19;
  if (v19_.v20 != 0) {
    std___1___shared_weak_count___release_weak_alt2(v19_.v20);
  }
  if (v2 != 0 && v3 != nullptr) {
    v4 = ui_LayoutAccessor_FindPane(v3, (__int64)"Face");
    if (v4 != 0) {
      v4 = __dynamic_cast(v4, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameHr_1840740(v4, 0, *(_QWORD*)(a1 + 824), 6u, 1);
    v5 = ui_LayoutAccessor_FindPane(v3, (__int64)"IconClan");
    if (v5 != 0) {
      v6 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0);
    }
    else {
      v6 = 0;
    }
    v7 = GameRoutine_158a7c0(9u);
    if (v6 != 0 && v7 != 0) {
      v8 = *(const char**)(v7 + 48);
      if (v8 != nullptr && *v8 != 0) {
        v9 = v7;
        if ((Manager_136afb0_alt1(ui_Manager_instance_ + 1264, 5u, v8) & 1) !=
            0) {
          Manager_136a920_alt1(ui_Manager_instance_ + 1264, v6, 0, 5u,
                               *(const char**)(v9 + 48));
        }
      }
    }
    v10 = *(_QWORD*)(a1 + 824);
    if (*(_BYTE*)(v10 + 2136) != 0) {
      v11 = (const char*)game_97b2f0(v10 + 2104);
    }
    else {
      v11 = GameHr_67ed20(*(_QWORD**)(v10 + 392));
    }
    v12 = msg_MessageManager_instance__ptr[0];
    if (v11 != nullptr) {
      v13 = v11;
    }
    else {
      v13 = *msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020_alt1(*msg_MessageManager_instance__ptr[0] + 14704, v13);
    v14 = *v12;
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
    v15 = GameRoutine_a4dbe0(v14, "MID_Sys_Result_Msg_Causation_Marged", 0);
    if (v15 != nullptr) {
      v16 = (__int64)v15;
      v17 = ui_LayoutAccessor_FindTextBox(v3, (__int64)"T_Title");
      if (v17 != 0) {
        GameRoutine_156c5d0(v17, v16, 0);
      }
    }
    LayoutAccessor_1562cf0_alt1((__int64)v3, "UnitMerge");
  }
  else if (v2 == 0) {
    goto LABEL_31;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak_alt2(v2);
  }
LABEL_31:
  LayoutAccessor_1562cf0_alt1(a1 + 168, "UnitMerge");
  result =
      ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 168), (__int64)"A_Tlp");
  if (result != 0) {
    return Alignment_56b600(result);
  }
  return result;
}

void TelopCausationMerge_1384e90(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  long double v7;
  __int64* v8;
  char v9;
  double v10;
  unsigned int v11;
  int v12;
  char v13;
  double v14;
  int v15;
  int v16;
  _DWORD v17[3];
  struct {
    unsigned __int64 v18;
    __int64 v19;
  } v18_;

  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *(_QWORD*)(a1 + 176);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock_alt1(v2),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v3 != 0) {
      v4 = v3;
      v5 = *(_QWORD*)(a1 + 168);
      if (v5 != 0) {
        ControlCreator_13633c0(v5),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
        std___1___shared_weak_count___release_weak_alt2(v4),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
  }
  LayoutAccessor_1560070_alt1((void*)(&v18_.v18), (__int64*)(a1 + 168),
                              "L_Merge"),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v18_.v19 != 0) {
    v6 = std___1___shared_weak_count_lock_alt1(v18_.v19),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
    v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v8 = (__int64*)v18_.v18;
    if (v18_.v19 != 0) {
      std___1___shared_weak_count___release_weak_alt2(v18_.v19),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (v6 != 0 && v8 != nullptr) {
      v9 = ui_LayoutAccessor_GetPaneAlpha((__int64*)(a1 + 168),
                                          (__int64)"N_TlpIO_Contents"),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v10 = ui_LayoutAccessor_GetPaneTranslate((__int64*)(a1 + 168),
                                               (__int64)"N_TlpIO_Contents"),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v18_.v18 = __PAIR64__(v11, LODWORD(v10));
      LODWORD(v18_.v19) = v12;
      v13 = ui_LayoutAccessor_GetPaneAlpha((__int64*)(a1 + 168),
                                           (__int64)"N_TlpIO_Overlay"),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v14 = ui_LayoutAccessor_GetPaneTranslate((__int64*)(a1 + 168),
                                               (__int64)"N_TlpIO_Overlay"),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v17[0] = LODWORD(v14);
      v17[1] = v15;
      v17[2] = v16;
      ui_LayoutAccessor_SetPaneAlpha_alt1((__int64)v8, (__int64)"N_Contents",
                                          v9),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      ui_LayoutAccessor_SetPaneTranslate(v8, (__int64)"N_Contents",
                                         (__int64)&v18_.v18),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      ui_LayoutAccessor_SetPaneAlpha_alt1((__int64)v8, (__int64)"N_Overlay",
                                          v13),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(float*)&v7 = ui_LayoutAccessor_SetPaneTranslate(
          v8, (__int64)"N_Overlay", (__int64)v17),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else if (v6 == 0) {
      return;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v6 + 16LL))(v6, v7),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
      std___1___shared_weak_count___release_weak_alt2(v6),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
}

__int64 TelopCausationMerge_1385040(_QWORD* a1)
{
  int v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BOOL4 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;

  GameRoutine_1384e90((__int64)a1);
  if (a1[57] == 0) {
    goto LABEL_18;
  }
  v3 = a1[56];
  if (v3 == 0) {
    goto LABEL_18;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
  LABEL_11:
    v8 = a1[56];
    if (v8 == 0 || *(_QWORD*)(v8 + 8) == -1) {
      goto LABEL_18;
    }
  LABEL_16:
    v10 = a1[68];
    if (v10 != 0 && *(float*)(v10 + 60) != 0.0) {
      goto LABEL_21;
    }
    goto LABEL_18;
  }
  v5 = a1[55];
  if (v5 != 0) {
    v1 = *(unsigned __int8*)(v5 + 24);
    v6 = v5 + 152;
    if (v1 == 0) {
      v6 = 0;
    }
    v7 = v6 != a1[57];
  }
  else {
    v7 = true;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7) {
      goto LABEL_11;
    }
  }
  else {
    v9 = v4;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v9);
    if (v7) {
      goto LABEL_11;
    }
  }
  if ((v1 & 1) != 0) {
    goto LABEL_16;
  }
LABEL_18:
  v11 = (*(__int64 (**)(_QWORD*))(*a1 + 216LL))(a1);
  if ((a1[99] == 0 || (GameRoutine_173fe30() & 1) == 0) &&
      (LayoutAccessor_1563280(a1 + 21, v11, 0) & 1) == 0) {
    v12 = LayoutAccessor_1563280(a1 + 21, "Title_Out", 0) ^ 1;
    return v12 & 1;
  }
LABEL_21:
  v12 = 0;
  return v12 & 1;
}

#pragma GCC visibility pop
