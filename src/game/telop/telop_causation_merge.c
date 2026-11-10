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
__n128 TelopCausationMerge_1384e90(__int64 a1);

__int64 TelopCausationMerge_Unknown33(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  long double v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _BYTE* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  struct {
    __int64* v20;
    unsigned __int64 v21;
    unsigned __int64 v22;
    unsigned __int64 v23;
    int v24;
    int v25;
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
    __int64 v38;
  } v20_;

  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LayoutAccessor_1562680((__int64*)(a1 + 168), (__int64)"In", 0x0.0p+0f),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LayoutAccessor_1562680((__int64*)(a1 + 168), (__int64)"Title_In", 0x0.0p+0f),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LayoutAccessor_1560070((void*)(&v20_.v20), (__int64*)(a1 + 168),
                         (__int64)"L_Merge"),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v20_.v21 == 0) {
    goto LABEL_31;
  }
  v2 = std___1___shared_weak_count_lock(v20_.v21),
  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = v20_.v20;
  if (v20_.v21 != 0) {
    *(__n128*)&v3 = std___1___shared_weak_count___release_weak_alt1(),
    v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v2 != 0 && v4 != nullptr) {
    v5 = ui_LayoutAccessor_FindPane(v4, (__int64)"Face"),
    v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v5 != 0) {
      v5 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    GameRoutine_1840740(v5, 0, *(_QWORD*)(a1 + 824), 6u, 1),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v6 = ui_LayoutAccessor_FindPane(v4, (__int64)"IconClan"),
    v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v6 != 0) {
      v7 = __dynamic_cast(v6, GameData_212d670[0], GameData_212d678[0], 0),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v7 = 0;
    }
    v8 = GameRoutine_158a7c0(9u),
    v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v7 != 0 && v8 != 0) {
      v9 = *(_BYTE**)(v8 + 48);
      if (v9 != nullptr && *v9 != 0) {
        v10 = v8;
        if ((Manager_136afb0(ui_Manager_instance_ + 1264, 5u, v9) & 1) != 0) {
          Manager_136a920(ui_Manager_instance_ + 1264, v7, 0, 5u,
                          *(_BYTE**)(v10 + 48)),
              v3 = COERCE_AS(__typeof__(v3),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
    }
    v11 = *(_QWORD*)(a1 + 824);
    if (*(_BYTE*)(v11 + 2136) != 0) {
      v12 = (__int64)game_97b2f0(v11 + 2104),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v12 = GameRoutine_67ed20(*(_QWORD**)(v11 + 392)),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v13 = msg_MessageManager_instance__ptr[0];
    if (v12 != 0) {
      v14 = v12;
    }
    else {
      v14 = (__int64)*msg_MessageManager_empty_text__ptr;
    }
    GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v14),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v15 = *v13;
    v20_.v26 = -1;
    v20_.v27 = -1;
    v20_.v28 = -1;
    v20_.v29 = -1;
    v20_.v30 = -1;
    v20_.v31 = -1;
    v20_.v32 = -1;
    v20_.v33 = -1;
    v20_.v34 = -1;
    v20_.v35 = -1;
    v20_.v36 = -1;
    v20_.v37 = -1;
    v20_.v20 = GameData_212e348 + 2;
    v20_.v21 = 0xFFFF0001FFFF0000LL;
    v20_.v22 = 0xFFFF0004FFFF0002LL;
    v20_.v23 = 0xFFFF0006FFFF0005LL;
    v20_.v38 = 8;
    v20_.v24 = -65529;
    v20_.v25 = -65528;
    v16 = GameRoutine_a4dbe0(v15, "MID_Sys_Result_Msg_Causation_Marged", 0),
    v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v16 != nullptr) {
      v17 = (__int64)v16;
      v18 = ui_LayoutAccessor_FindTextBox(v4, (__int64)"T_Title"),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v18 != 0) {
        GameRoutine_156c5d0(v18, v17, 0),
            v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    LayoutAccessor_1562cf0((__int64)v4, (__int64)"UnitMerge"),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  else if (v2 == 0) {
    goto LABEL_31;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v2 + 16LL))(v2, v3),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak_alt1(),
        v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
LABEL_31:
  LayoutAccessor_1562cf0(a1 + 168, (__int64)"UnitMerge"),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  result =
      ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 168), (__int64)"A_Tlp"),
  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (result != 0) {
    return Alignment_56b600(result);
  }
  return result;
}

__n128 TelopCausationMerge_1384e90(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __n128 result;
  __int64 v7;
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

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
  v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
  v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
  v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w"));
  v2 = *(_QWORD*)(a1 + 176);
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v3 != 0) {
      v4 = v3;
      v5 = *(_QWORD*)(a1 + 168);
      if (v5 != 0) {
        ControlCreator_13633c0(v5),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w"));
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w"));
        std___1___shared_weak_count___release_weak_alt1(),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
            v12 =
                COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
            v15 =
                COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
            v16 =
                COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w"));
      }
    }
  }
  LayoutAccessor_1560070((void*)(&v18_.v18), (__int64*)(a1 + 168),
                         (__int64)"L_Merge"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v18_.v19 != 0) {
    v7 = std___1___shared_weak_count_lock(v18_.v19),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
    v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
    v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
    v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w"));
    v8 = (__int64*)v18_.v18;
    if (v18_.v19 != 0) {
      result = std___1___shared_weak_count___release_weak_alt1(),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w"));
    }
    if (v7 != 0 && v8 != nullptr) {
      v9 = ui_LayoutAccessor_GetPaneAlpha((__int64*)(a1 + 168),
                                          (__int64)"N_TlpIO_Contents"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w"));
      v10 = ui_LayoutAccessor_GetPaneTranslate((__int64*)(a1 + 168),
                                               (__int64)"N_TlpIO_Contents"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w"));
      v18_.v18 = __PAIR64__(v11, LODWORD(v10));
      LODWORD(v18_.v19) = v12;
      v13 = ui_LayoutAccessor_GetPaneAlpha((__int64*)(a1 + 168),
                                           (__int64)"N_TlpIO_Overlay"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w"));
      v14 = ui_LayoutAccessor_GetPaneTranslate((__int64*)(a1 + 168),
                                               (__int64)"N_TlpIO_Overlay"),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w"));
      v17[0] = LODWORD(v14);
      v17[1] = v15;
      v17[2] = v16;
      ui_LayoutAccessor_SetPaneAlpha(v8, (__int64)"N_Contents", v9),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w"));
      ui_LayoutAccessor_SetPaneTranslate(v8, (__int64)"N_Contents",
                                         (__int64)&v18_.v18),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w"));
      ui_LayoutAccessor_SetPaneAlpha(v8, (__int64)"N_Overlay", v13),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w"));
      LANES128(result).n128_f32[0] = ui_LayoutAccessor_SetPaneTranslate(
          v8, (__int64)"N_Overlay", (__int64)v17),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
      v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
      v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
      v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w"));
    }
    else if (v7 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v7 + 16LL))(
          v7, *(long double*)&result),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
          v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(float, "s1", "=w")),
          v12 = COERCE_AS(__typeof__(v12), PSEUDO_REGISTER(float, "s2", "=w")),
          v15 = COERCE_AS(__typeof__(v15), PSEUDO_REGISTER(float, "s1", "=w")),
          v16 = COERCE_AS(__typeof__(v16), PSEUDO_REGISTER(float, "s2", "=w"));
      return std___1___shared_weak_count___release_weak_alt1();
    }
  }
  return result;
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
