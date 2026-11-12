#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1593b00(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 GameData_21cd130;
extern __int64 GameData_2240780;
extern __int64 ui_LayoutAccessor_empty_;
__int64 HistoryMenuItem_Unknown17(__int64 a1);
__int64 HistoryMenuItem_OnSelect(__int64 a1);
__int64 HistoryMenuItem_OnDeselect(__int64 a1);
__int64 HistoryMenuItem_BCall();
__int64 game_map_anonymous_HistoryMenuItem_ACall_closure_Invoke(__int64 a1);
_QWORD* MapSortieMenu_871860(__int64, __int64, __int64, __int64, __int64);
extern __int64 (*GameData_201eca8[])();
extern __int64 (*GameData_201ed28[])();
__int64 game_map_anonymous_HistoryMenuItem_ACall(__int64 a1);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameHr_6c2b50(__int64);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Unit_6dcb40(__int64, __int64, __int64, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_Unit_Destroy_Unit(__int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneSize(__int64 result, __int64, float, float);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
const char* Pane_58fac0(__int64, const char*);
extern _UNKNOWN GameData_1bbe254;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
float ui_LayoutAccessor_GetPaneSize(__int64*, __int64);
void GameRoutine_156c5d0(__int64, __int64, char);
void ui_text_190a0c0(float*, __int64, float*, _QWORD*, __int64);
__int64 HistoryMenuItem_Draw(__int64 a1);

__int64 HistoryMenuItem_Draw(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  atomic_ullong* v10;
  __int64* v11;
  __int64 v12;
  char v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  atomic_ullong* v25;
  __int64* v26;
  const char* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  atomic_ullong* v31;
  __int64* v32;
  __int64 v33;
  char v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  atomic_ullong* v38;
  __int64* v39;
  const char* v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  atomic_ullong* v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  atomic_ullong* v51;
  __int64* v52;
  __int64 v53;
  const char* v54;
  float v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  _QWORD* v61;
  int v62;
  int v63;
  char v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  atomic_ullong* v68;
  __int64* v69;
  __int64 v70;
  float v71;
  float v72;
  __int64 v73;
  __int64 v74;
  atomic_ullong* v75;
  __int64* v76;
  __int64 v77;
  float v78;
  float v79;
  __int64 v80;
  __int64 v81;
  atomic_ullong* v82;
  __int64* v83;
  _QWORD* v84;
  float v85;
  __int64 v86;
  float v87;
  __int64 v88;
  __int64 v89;
  atomic_ullong* v90;
  __int64* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  atomic_ullong* v95;
  __int64* v96;
  __int64* v98;
  __int64* v99;
  __int64* v100;
  __int64 v101;
  __int64* v102;
  __int64* v103;
  __int64* v104;
  __int64* v105;
  __int64* v106;
  __int64* v107;
  __int64* v108;
  __int64* v109;
  __int64* v110;
  float v111[557];
  float v112;
  _DWORD v113[2];

  v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock_alt1(v2),
  v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v98 = v6;
  (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak_alt1(v4),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  v6 = v98;
  if (v98 == nullptr) {
  LABEL_5:
    v6 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  ui_LayoutAccessor_SetPaneVisible(
      (__int64)v6, (__int64)"N_Info",
      (signed __int32)*(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) +
                                            8LL * *(int*)(a1 + 84) + 1784) +
                                 8LL) > 0),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  v7 = *(_QWORD*)(a1 + 56);
  if (v7 == 0) {
    goto LABEL_10;
  }
  v8 = std___1___shared_weak_count_lock_alt1(v7),
  v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v8 == 0) {
    goto LABEL_10;
  }
  v9 = v8;
  v10 = (atomic_ullong*)(v8 + 8);
  v11 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v10, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v99 = v11;
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v9),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
    v11 = v99;
    if (v99 != nullptr) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  if (v11 == nullptr) {
  LABEL_10:
    v11 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_11:
  v12 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL * *(int*)(a1 + 84) + 1784);
  v13 = *(_BYTE*)(v12 + 24);
  v14 = *(_QWORD*)(v12 + 40);
  v15 = v12 + 25;
  if ((v13 & 1) != 0) {
    v16 = v14;
  }
  else {
    v16 = v15;
  }
  if (v16 != 0) {
    v17 = ui_LayoutAccessor_FindTextBox(v11, (__int64)"T_Txt"),
    v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
    v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v17 != 0) {
      GameRoutine_156c5d0(v17, v16, 0),
          v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
    }
  }
  v18 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL * *(int*)(a1 + 84) + 1784);
  v19 = *(_QWORD*)(v18 + 48);
  v20 = *(_QWORD*)(v18 + 56);
  if (v19 != 0 && v20 != 0) {
    GameHr_6c2b50((__int64)v111),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
    Unit_6dcb40((__int64)v111, v19, v20, 1),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
    v28 = *(_QWORD*)(a1 + 56);
    if (v28 != 0) {
      v29 = std___1___shared_weak_count_lock_alt1(v28),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v29 != 0) {
        v30 = v29;
        v31 = (atomic_ullong*)(v29 + 8);
        v32 = *(__int64**)(a1 + 48);
        if (atomic_fetch_add(v31, 0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v32 != nullptr) {
            goto LABEL_33;
          }
        }
        else {
          v108 = v32;
          (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          std___1___shared_weak_count___release_weak_alt1(v30),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          v32 = v108;
          if (v108 != nullptr) {
          LABEL_33:
            v33 = ui_LayoutAccessor_FindPane(v32, (__int64)"Face"),
            v71 =
                COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
            if (v33 != 0) {
              v33 = __dynamic_cast(v33, GameData_212d670[0],
                                   GameData_212d678[0], 0),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(float, "s1", "=w"));
            }
            v34 = GameHr_1840740(v33, 0, (__int64)v111, 6u, 1),
            v71 =
                COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
            v35 = *(_QWORD*)(a1 + 56);
            if (v35 != 0) {
              v36 = std___1___shared_weak_count_lock_alt1(v35),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(float, "s1", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(float, "s1", "=w"));
              if (v36 != 0) {
                v37 = v36;
                v38 = (atomic_ullong*)(v36 + 8);
                v39 = *(__int64**)(a1 + 48);
                if (atomic_fetch_add(v38, 0xFFFFFFFFFFFFFFFFLL) != 0) {
                  if (v39 != nullptr) {
                  LABEL_40:
                    if ((v34 & 1) != 0) {
                      v40 = "FaceOn";
                    }
                    else {
                      v40 = "FaceOff";
                    }
                    if ((v34 & 1) != 0) {
                      v27 = "Margin_Width";
                    }
                    else {
                      v27 = "NoFaceMargin_Width";
                    }
                    LayoutAccessor_1562cf0((__int64)v39, v40),
                        v71 = COERCE_AS(__typeof__(v71),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v78 = COERCE_AS(__typeof__(v78),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                    game_Unit_Destroy_Unit((__int64)v111),
                        v71 = COERCE_AS(__typeof__(v71),
                                        PSEUDO_REGISTER(float, "s1", "=w")),
                        v78 = COERCE_AS(__typeof__(v78),
                                        PSEUDO_REGISTER(float, "s1", "=w"));
                    goto LABEL_47;
                  }
                }
                else {
                  v109 = v39;
                  (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37),
                      v71 = COERCE_AS(__typeof__(v71),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v78 = COERCE_AS(__typeof__(v78),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  std___1___shared_weak_count___release_weak_alt1(v37),
                      v71 = COERCE_AS(__typeof__(v71),
                                      PSEUDO_REGISTER(float, "s1", "=w")),
                      v78 = COERCE_AS(__typeof__(v78),
                                      PSEUDO_REGISTER(float, "s1", "=w"));
                  v39 = v109;
                  if (v109 != nullptr) {
                    goto LABEL_40;
                  }
                }
              }
            }
            v39 = ui_LayoutAccessor_empty__ptr[0];
            goto LABEL_40;
          }
        }
      }
    }
    v32 = ui_LayoutAccessor_empty__ptr[0];
    goto LABEL_33;
  }
  v22 = *(_QWORD*)(a1 + 56);
  if (v22 == 0) {
    goto LABEL_26;
  }
  v23 = std___1___shared_weak_count_lock_alt1(v22),
  v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v23 == 0) {
    goto LABEL_26;
  }
  v24 = v23;
  v25 = (atomic_ullong*)(v23 + 8);
  v26 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v25, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v107 = v26;
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v24),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
    v26 = v107;
    if (v107 != nullptr) {
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  if (v26 == nullptr) {
  LABEL_26:
    v26 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_27:
  LayoutAccessor_1562cf0((__int64)v26, "FaceOff"),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  v27 = "NoFaceMargin_Width";
LABEL_47:
  v41 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) +
                                       8LL * *(int*)(a1 + 84) + 1784) +
                            12LL);
  if (v41 > 3) {
    goto LABEL_54;
  }
  v42 = *(_QWORD*)(a1 + 56);
  v43 = *((int*)&GameData_1bbe254 + v41);
  if (v42 == 0) {
    goto LABEL_52;
  }
  v44 = std___1___shared_weak_count_lock_alt1(v42),
  v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v44 == 0) {
    goto LABEL_52;
  }
  v45 = v44;
  v46 = (atomic_ullong*)(v44 + 8);
  v47 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v46, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v110 = v47;
    (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v45),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
    v47 = v110;
    if (v110 != nullptr) {
      goto LABEL_53;
    }
    goto LABEL_52;
  }
  if (v47 == nullptr) {
  LABEL_52:
    v47 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_53:
  LayoutAccessor_1562cf0((__int64)v47, (const char*)&GameData_1bbe254 + v43),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
LABEL_54:
  v48 = *(_QWORD*)(a1 + 56);
  if (v48 == 0) {
    goto LABEL_58;
  }
  v49 = std___1___shared_weak_count_lock_alt1(v48),
  v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v49 == 0) {
    goto LABEL_58;
  }
  v50 = v49;
  v51 = (atomic_ullong*)(v49 + 8);
  v52 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v51, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v52 != nullptr) {
      goto LABEL_59;
    }
    goto LABEL_58;
  }
  v100 = v52;
  (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak_alt1(v50),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  v52 = v100;
  if (v100 == nullptr) {
  LABEL_58:
    v52 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_59:
  v53 = ui_LayoutAccessor_FindPane(v52, (__int64)"Frame"),
  v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  v54 = Pane_58fac0(v53, v27),
  v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v54 != nullptr) {
    v55 = (float)*(int*)&v54[*((unsigned int*)v54 + 1)];
    v56 = *(_QWORD*)(a1 + 56);
    if (v56 == 0) {
      goto LABEL_66;
    }
  }
  else {
    v55 = 0x1.9000000000000p+7f;
    v56 = *(_QWORD*)(a1 + 56);
    if (v56 == 0) {
      goto LABEL_66;
    }
  }
  v57 = std___1___shared_weak_count_lock_alt1(v56),
  v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v57 == 0) {
    goto LABEL_66;
  }
  v58 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v57 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v101 = v57;
    (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v101),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v58 != nullptr) {
      goto LABEL_67;
    }
    goto LABEL_66;
  }
  if (v58 == nullptr) {
  LABEL_66:
    v58 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_67:
  v59 = ui_LayoutAccessor_FindTextBox(v58, (__int64)"Frame"),
  v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v59 != 0) {
    v60 = v59;
    v61 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v58, (__int64)"Frame"),
    v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
    v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v61 != nullptr) {
      ui_text_190a0c0(v111, (__int64)v113, &v112, v61, v61[27]),
          v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
      v62 = v113[0];
      v63 = v113[1];
    }
    else {
      v62 = 0;
      v63 = 0;
    }
    v64 = *(_BYTE*)(v60 + 88);
    *(_DWORD*)(v60 + 80) = v62;
    *(_DWORD*)(v60 + 84) = v63;
    *(_BYTE*)(v60 + 88) = v64 | 0x10;
  }
  v65 = *(_QWORD*)(a1 + 56);
  if (v65 == 0) {
    goto LABEL_76;
  }
  v66 = std___1___shared_weak_count_lock_alt1(v65),
  v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v66 == 0) {
    goto LABEL_76;
  }
  v67 = v66;
  v68 = (atomic_ullong*)(v66 + 8);
  v69 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v68, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v69 != nullptr) {
      goto LABEL_77;
    }
    goto LABEL_76;
  }
  v102 = v69;
  (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak_alt1(v67),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  v69 = v102;
  if (v102 == nullptr) {
  LABEL_76:
    v69 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_77:
  ui_LayoutAccessor_GetPaneSize(v69, (__int64)"Frame"),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  v70 = *(_QWORD*)(a1 + 56);
  v72 = v71;
  if (v70 == 0) {
    goto LABEL_81;
  }
  v73 = std___1___shared_weak_count_lock_alt1(v70),
  v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v73 == 0) {
    goto LABEL_81;
  }
  v74 = v73;
  v75 = (atomic_ullong*)(v73 + 8);
  v76 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v75, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v76 != nullptr) {
      goto LABEL_82;
    }
    goto LABEL_81;
  }
  v103 = v76;
  (*(void (**)(__int64))(*(_QWORD*)v74 + 16LL))(v74),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak_alt1(v74),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  v76 = v103;
  if (v103 == nullptr) {
  LABEL_81:
    v76 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_82:
  ui_LayoutAccessor_GetPaneSize(v76, (__int64)"FrameSelect"),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  v77 = *(_QWORD*)(a1 + 56);
  v79 = v78;
  if (v77 == 0) {
    goto LABEL_86;
  }
  v80 = std___1___shared_weak_count_lock_alt1(v77),
  v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v80 == 0) {
    goto LABEL_86;
  }
  v81 = v80;
  v82 = (atomic_ullong*)(v80 + 8);
  v83 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v82, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v104 = v83;
    (*(void (**)(__int64))(*(_QWORD*)v81 + 16LL))(v81),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v81),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
    v83 = v104;
    if (v104 != nullptr) {
      goto LABEL_87;
    }
    goto LABEL_86;
  }
  if (v83 == nullptr) {
  LABEL_86:
    v83 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_87:
  v84 = (_QWORD*)ui_LayoutAccessor_FindTextBox(v83, (__int64)"T_Txt"),
  v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v84 != nullptr) {
    ui_text_190a0c0(v111, (__int64)v113, &v112, v84, v84[27]),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
    v85 = *(float*)v113;
  }
  else {
    v85 = 0x0.0p+0f;
  }
  v86 = *(_QWORD*)(a1 + 56);
  v87 = v55 + v85;
  if (v86 == 0) {
    goto LABEL_94;
  }
  v88 = std___1___shared_weak_count_lock_alt1(v86),
  v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v88 == 0) {
    goto LABEL_94;
  }
  v89 = v88;
  v90 = (atomic_ullong*)(v88 + 8);
  v91 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v90, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v91 != nullptr) {
      goto LABEL_95;
    }
    goto LABEL_94;
  }
  v105 = v91;
  (*(void (**)(__int64))(*(_QWORD*)v89 + 16LL))(v89),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  std___1___shared_weak_count___release_weak_alt1(v89),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  v91 = v105;
  if (v105 == nullptr) {
  LABEL_94:
    v91 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_95:
  ui_LayoutAccessor_SetPaneSize((__int64)v91, (__int64)"Frame", v87, v72),
      v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  v92 = *(_QWORD*)(a1 + 56);
  if (v92 == 0) {
    goto LABEL_99;
  }
  v93 = std___1___shared_weak_count_lock_alt1(v92),
  v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
  if (v93 == 0) {
    goto LABEL_99;
  }
  v94 = v93;
  v95 = (atomic_ullong*)(v93 + 8);
  v96 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v95, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v106 = v96;
    (*(void (**)(__int64))(*(_QWORD*)v94 + 16LL))(v94),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
    std___1___shared_weak_count___release_weak_alt1(v94),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s1", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(float, "s1", "=w"));
    v96 = v106;
    if (v106 != nullptr) {
      return ui_LayoutAccessor_SetPaneSize((__int64)v96, (__int64)"FrameSelect",
                                           v87, v79);
    }
    goto LABEL_99;
  }
  if (v96 == nullptr) {
  LABEL_99:
    v96 = ui_LayoutAccessor_empty__ptr[0];
  }
  return ui_LayoutAccessor_SetPaneSize((__int64)v96, (__int64)"FrameSelect",
                                       v87, v79);
}

__int64 HistoryMenuItem_Unknown17(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  atomic_ullong* v5;
  __int64* v6;
  __int64 result;
  __int64* v8;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = v3;
  v5 = (atomic_ullong*)(v3 + 8);
  v6 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v5, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = v6;
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
    v6 = v8;
    if (v8 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }

LABEL_6:
  result = GameRoutine_1562cf0(v6, "TypeNone");
  *(_BYTE*)(a1 + 78) = 1;
  return result;
}

__int64 HistoryMenuItem_OnSelect(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  atomic_ullong* v11;
  __int64* v12;
  __int64 result;
  __int64* v14;
  __int64* v15;

  v2 = 512;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  v3 = *(_QWORD*)(a1 + 56);
  if (v3 == 0) {
    goto LABEL_7;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
    goto LABEL_7;
  }
  v5 = v4;
  v6 = (atomic_ullong*)(v4 + 8);
  v7 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v7 != nullptr) {
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  v14 = v7;
  (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
  std___1___shared_weak_count___release_weak(v5);
  v7 = v14;
  if (v14 == nullptr) {
  LABEL_7:
    v7 = &ui_LayoutAccessor_empty_;
  }

LABEL_8:
  GameRoutine_1593b00(
      v7, *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) +
                                         8LL * *(int*)(a1 + 84) + 1784) +
                              12LL));
  v8 = *(_QWORD*)(a1 + 56);
  if (v8 == 0) {
    goto LABEL_12;
  }
  v9 = std___1___shared_weak_count_lock(v8);
  if (v9 == 0) {
    goto LABEL_12;
  }
  v10 = v9;
  v11 = (atomic_ullong*)(v9 + 8);
  v12 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v11, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v15 = v12;
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    std___1___shared_weak_count___release_weak(v10);
    v12 = v15;
    if (v15 != nullptr) {
      goto LABEL_13;
    }
    goto LABEL_12;
  }
  if (v12 == nullptr) {
  LABEL_12:
    v12 = &ui_LayoutAccessor_empty_;
  }

LABEL_13:
  result = GameRoutine_1562680(v12, "In", 1.0);
  *(_BYTE*)(a1 + 88) = 1;
  return result;
}

__int64 HistoryMenuItem_OnDeselect(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  atomic_ullong* v6;
  __int64* v7;
  __int64* v9;

  v2 = 504;
  if (*(_BYTE*)(a1 + 79) != 0) {
    v2 = 520;
  }
  (*(void (**)(void*))(*(_QWORD*)a1 + v2))((void*)a1);
  v3 = *(_QWORD*)(a1 + 56);
  if (v3 == 0) {
    goto LABEL_7;
  }
  v4 = std___1___shared_weak_count_lock(v3);
  if (v4 == 0) {
    goto LABEL_7;
  }
  v5 = v4;
  v6 = (atomic_ullong*)(v4 + 8);
  v7 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add(v6, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v9 = v7;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
    v7 = v9;
    if (v9 != nullptr) {
      return GameRoutine_1562cf0(v7, "TypeNone");
    }
    goto LABEL_7;
  }
  if (v7 == nullptr) {
  LABEL_7:
    v7 = &ui_LayoutAccessor_empty_;
  }
  return GameRoutine_1562cf0(v7, "TypeNone");
}

__int64 game_map_anonymous_HistoryMenuItem_ACall(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int16 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;
  struct {
    __int64 (**v16)();
    __int16 v17;
    char gap106_[22];
    __int64 (***v18)();
  } v16_;
  const char* v19;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v2 + 8LL * *(int*)(a1 + 84) + 1784);
  if (*(int*)(v3 + 8) < 1 || *(_DWORD*)v3 == 0) {
    return 0;
  }
  v4 = *(_BYTE*)(v3 + 13) & 1;
  v5 = *(_BYTE*)(v3 + 13) & 2;
  if (*(_BYTE*)(v3 + 12) != 0) {
    v19 = "MID_RewindMenu_NotPlayerPhase_Confirm";
    v12_.v13 = v12_.v12;
    v16_.v16 = GameData_201eca8;
    v16_.v17 = v4 | ((_WORD)v5 << 7);
    v14_.v15 = v14_.v14;
    v16_.v18 = &v16_.v16;
    v14_.v14[0] = GameData_201ed28;
    v12_.v12[0] = GameData_201ed28;
    MapSortieMenu_871860(v2, (__int64)&v19, (__int64)&v16_.v16,
                         (__int64)v14_.v14, (__int64)v12_.v12);
    if (v12_.v13 == v12_.v12) {
      v6 = 32;
    }
    else {
      if (v12_.v13 == nullptr) {
        goto LABEL_18;
      }
      v6 = 40;
    }
    (*(void (**)(__int64))(*v12_.v13 + v6))((__int64)v12_.v13);
  LABEL_18:
    if (v14_.v15 == v14_.v14) {
      v10 = 32;
    }
    else {
      if (v14_.v15 == nullptr) {
        goto LABEL_23;
      }
      v10 = 40;
    }
    (*(void (**)(__int64))(*v14_.v15 + v10))((__int64)v14_.v15);
  LABEL_23:
    if (v16_.v18 == &v16_.v16) {
      v11 = 4;
    }
    else {
      if (v16_.v18 == nullptr) {
        return 12;
      }
      v11 = 5;
    }
    ((__int64 (*)(__int64))(*v16_.v18)[v11])((__int64)v16_.v18);
    return 12;
  }
  v8 = GameData_2240780;
  if (GameData_2240780 != 0) {
    *(_BYTE*)(GameData_2240780 + 164) = v4;
    v9 = *(_QWORD*)(v8 + 8);
    *(_BYTE*)(v8 + 165) = v5 >> 1;
    if (v9 != 0) {
      while (1) {
        if (*(_BYTE*)v9 == 2) {
          if (*(_DWORD*)(v9 + 32) == 0) {
            *(_QWORD*)(v8 + 16) = v9;
            *(_WORD*)(v8 + 136) &= ~0x80u;
            return 2;
          }
        }
        else if (*(_BYTE*)v9 == 0) {
          return 2;
        }
        v9 += 64;
      }
    }
  }
  return 2;
}

__int64 HistoryMenuItem_BCall()
{
  __int64 v0;
  __int64 v1;

  *(_BYTE*)(GameData_21cd130 + 24) = 0;
  v0 = GameData_2240780;
  if (GameData_2240780 == 0) {
    return 3;
  }
  v1 = *(_QWORD*)(GameData_2240780 + 8);
  if (v1 == 0) {
    return 3;
  }
  while (*(_BYTE*)v1 != 2) {
    if (*(_BYTE*)v1 == 0) {
      return 3;
    }
  LABEL_5:
    v1 += 64;
  }
  if (*(_DWORD*)(v1 + 32) != 1) {
    goto LABEL_5;
  }
  *(_QWORD*)(GameData_2240780 + 16) = v1;
  *(_WORD*)(v0 + 136) &= ~0x80u;
  return 3;
}

__int64 game_map_anonymous_HistoryMenuItem_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  *(_BYTE*)(GameData_21cd130 + 24) = 0;
  v1 = GameData_2240780;
  if (GameData_2240780 == 0) {
    return 4;
  }
  *(_WORD*)(GameData_2240780 + 164) = *(_WORD*)(a1 + 8);
  v2 = *(_QWORD*)(v1 + 8);
  if (v2 == 0) {
    return 4;
  }
  while (*(_BYTE*)v2 != 2) {
    if (*(_BYTE*)v2 == 0) {
      return 4;
    }
  LABEL_5:
    v2 += 64;
  }
  if (*(_DWORD*)(v2 + 32) != 0) {
    goto LABEL_5;
  }
  *(_QWORD*)(v1 + 16) = v2;
  *(_WORD*)(v1 + 136) &= ~0x80u;
  return 4;
}

#pragma GCC visibility pop
