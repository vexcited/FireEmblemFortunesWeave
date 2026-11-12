#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetTranslate(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
__n128 ui_LayoutAccessor_SetPaneSize(_QWORD, _QWORD, float, float);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212fc70[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
float ui_LayoutAccessor_GetTranslate(_QWORD);
__int64 game_menu_SubMenu_OnBuild_lambda1_Invoke(__int64 a1, __int64* a2);
__int64 BasicMenu_16dd280(_QWORD*);
__int64 BasicMenu_16dea40(__int64 result, char, unsigned __int8,
                          unsigned __int8);
__int64 GameRoutine_156bee0_alt1(__int64 result, __int64, __int64, __int64,
                                 char, float,
                                 float) __asm__("GameRoutine_156bee0");
__int64 game_IsVibrationEnabled(_BYTE*);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindPane_alt2(__int64*, const char*) __asm__(
    "ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_SetPriority(__int64 result, int);
__n64 GameRoutine_16e54e0(__int64);
const char* GameRoutine_156bee0(const char* result, __int64, __int64, __int64,
                                char, float, float);
const char* Pane_58fac0(__int64, const char*);
extern _UNKNOWN GameData_1ac6c8b;
extern __int64 (*GameData_209ef38[])();
extern __int64 (*GameData_209efb8[])();
extern __int64 game_g_game_setting;
extern __int64 ui_LayoutAccessor_empty_;
void __attribute__((noreturn)) GameRoutine_60a310();
__int64 game_menu_SubMenu_OnBuild(__int64 a1);
__int64 game_menu_SubMenu_OnBuild_lambda0_Invoke(__int64 a1, __int64* a2);

__int64 game_menu_SubMenu_OnBuild(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  const char* v5;
  float v6;
  float v7;
  const char* v8;
  const char* v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  float v14;
  const char* v15;
  const char* v16;
  const char* v17;
  const char* v18;
  __int64 (***v19)();
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 (***v24)();
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  float v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  float v33;
  unsigned __int64 v34;
  char v35;
  float v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  _BOOL4 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  float v47;
  unsigned __int32 v48;
  __int64 v49;
  float v50;
  float v51;
  float v52;
  __int64 v53;
  int v54;
  int v55;
  __int64 v56;
  __int64 v57;
  atomic_ullong* v58;
  __int64* v59;
  __int64* v60;
  __int64 v61;
  float v62;
  float v63;
  int v64;
  float v65;
  float v66;
  bool v67;
  float v68;
  float v69;
  float v70;
  __int64 v71;
  float v72;
  char v73;
  __int64 v74;
  int v75;
  __int64 v76;
  __int64 result;
  int v78;
  struct {
    __int64 (**v79)();
    float* v80;
    char gap16_[16];
    __int64 (***v81)();
  } v79_;
  float v82;
  __int64 v83;

  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
  v2 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848),
                                       (__int64)&GameData_1ac6c8b),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v2 != 0) {
    v4 = v2;
    v5 = Pane_58fac0(v2, "Margin_Height_Bg"),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
    v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
    v6 = 0x0.0p+0f;
    v7 = 0x0.0p+0f;
    if (v5 != nullptr) {
      v7 = (float)*(int*)&v5[*((unsigned int*)v5 + 1)];
    }
    v8 = Pane_58fac0(v4, "Margin_Width_Bg"),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
    v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v8 != nullptr) {
      v6 = (float)*(int*)&v8[*((unsigned int*)v8 + 1)];
    }
    v9 = Pane_58fac0(v4, "Margin_Width_Item"),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
    v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v9 != nullptr) {
      v10 = *(unsigned int*)&v9[*((unsigned int*)v9 + 1)];
    }
    else {
      v10 = 0;
    }
    v15 = Pane_58fac0(v4, "Min_Width_Item"),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
    v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
    v13 = 0x0.0p+0f;
    v14 = 0x0.0p+0f;
    if (v15 != nullptr) {
      v14 = (float)*(int*)&v15[*((unsigned int*)v15 + 1)];
    }
    v16 = Pane_58fac0(v4, "White_Margin"),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
    v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v16 != nullptr) {
      v13 = (float)*(int*)&v16[*((unsigned int*)v16 + 1)];
    }
    v17 = Pane_58fac0(v4, "Offset_X"),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
    v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
    v11 = 0x0.0p+0f;
    v12 = 0x0.0p+0f;
    if (v17 != nullptr) {
      v12 = (float)*(int*)&v17[*((unsigned int*)v17 + 1)];
    }
    v18 = Pane_58fac0(v4, "Offset_Y"),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
    v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v18 != nullptr) {
      v11 = (float)*(int*)&v18[*((unsigned int*)v18 + 1)];
    }
  }
  else {
    v10 = 0;
    v11 = 0x0.0p+0f;
    v12 = 0x0.0p+0f;
    v13 = 0x0.0p+0f;
    v14 = 0x0.0p+0f;
    v6 = 0x0.0p+0f;
    v7 = 0x0.0p+0f;
  }
  v19 = &v79_.v79;
  v82 = 0x0.0p+0f;
  v79_.v79 = GameData_209ef38;
  v79_.v80 = &v82;
  v21 = *(_QWORD*)(a1 + 232);
  v20 = *(_QWORD*)(a1 + 240);
  v79_.v81 = &v79_.v79;
  if (v20 == v21) {
    goto LABEL_28;
  }
  v22 = 0;
  while (*(_QWORD*)(v21 + 8 * v22) == 0) {
  LABEL_20:
    if (++v22 >= (unsigned __int64)((v20 - v21) >> 3)) {
      goto LABEL_25;
    }
  }
  v83 = *(_QWORD*)(v21 + 8 * v22);
  if (v79_.v81 == nullptr) {
  LABEL_104:
    GameRoutine_60a310(),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
  }
  if ((((__int64 (*)(__int64 (***)(void), __int64*))(*v79_.v81)[6])(v79_.v81,
                                                                    &v83) &
       1) == 0) {
    v21 = *(_QWORD*)(a1 + 232);
    v20 = *(_QWORD*)(a1 + 240);
    goto LABEL_20;
  }
LABEL_25:
  v19 = v79_.v81;
  if (v79_.v81 != &v79_.v79) {
    if (v79_.v81 != nullptr) {
      v23 = 5;
      goto LABEL_29;
    }
    goto LABEL_30;
  }
LABEL_28:
  v23 = 4;
LABEL_29:
  ((void (*)(__int64 (***)(void), __int64))(*v19)[v23])(v19, v3),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
LABEL_30:
  v24 = &v79_.v79;
  v79_.v81 = &v79_.v79;
  if ((float)(v82 + (float)(int)v10) >= v14) {
    v14 = v82 + (float)(int)v10;
  }
  v79_.v79 = GameData_209efb8;
  v79_.v80 = (float*)(LODWORD(v14) | (unsigned __int64)(v10 << 32));
  v26 = *(_QWORD*)(a1 + 232);
  v25 = *(_QWORD*)(a1 + 240);
  if (v25 == v26) {
    goto LABEL_42;
  }
  v27 = 0;
  while (2) {
    if (*(_QWORD*)(v26 + 8 * v27) == 0) {
    LABEL_34:
      if (++v27 >= (unsigned __int64)((v25 - v26) >> 3)) {
        goto LABEL_39;
      }
      continue;
    }
    break;
  }
  v83 = *(_QWORD*)(v26 + 8 * v27);
  if (v79_.v81 == nullptr) {
    goto LABEL_104;
  }
  if ((((__int64 (*)(__int64 (***)(void), __int64*))(*v79_.v81)[6])(v79_.v81,
                                                                    &v83) &
       1) == 0) {
    v26 = *(_QWORD*)(a1 + 232);
    v25 = *(_QWORD*)(a1 + 240);
    goto LABEL_34;
  }
LABEL_39:
  v24 = v79_.v81;
  if (v79_.v81 != &v79_.v79) {
    if (v79_.v81 != nullptr) {
      v28 = 5;
      goto LABEL_43;
    }
    goto LABEL_44;
  }
LABEL_42:
  v28 = 4;
LABEL_43:
  ((void (*)(__int64 (***)(void), __int64))(*v24)[v28])(v24, v3),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
LABEL_44:
  v29 = v6 + v14;
  v30 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848),
                                        (__int64)&GameData_1ac6c8b),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
  if (v30 == 0) {
    v36 = 0x0.0p+0f;
    if (*(_QWORD*)(a1 + 968) == 0) {
      goto LABEL_93;
    }
  LABEL_51:
    v37 = *(_QWORD*)(a1 + 960);
    if (v37 == 0) {
      goto LABEL_93;
    }
    v38 = std___1___shared_weak_count_lock_alt1(v37),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
    v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
    if (v38 != 0) {
      v39 = *(_QWORD*)(a1 + 952);
      if (v39 != 0) {
        LODWORD(v10) = *(unsigned __int8*)(v39 + 24);
        v40 = v39 + 152;
        if ((_DWORD)v10 == 0) {
          v40 = 0;
        }
        v41 = v40 != *(_QWORD*)(a1 + 968);
      }
      else {
        v41 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v38 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v41) {
          goto LABEL_60;
        }
      }
      else {
        v43 = v38;
        (*(void (**)(__int64))(*(_QWORD*)v38 + 16LL))(v38),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v51 =
                COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
            v54 =
                COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v43),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v51 =
                COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
            v54 =
                COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v41) {
          goto LABEL_60;
        }
      }
      if ((v10 & 1) == 0) {
        goto LABEL_93;
      }
      goto LABEL_65;
    }
  LABEL_60:
    v42 = *(_QWORD*)(a1 + 960);
    if (v42 == 0 || *(_QWORD*)(v42 + 8) == -1) {
      goto LABEL_93;
    }
  LABEL_65:
    v44 = *(_QWORD*)(a1 + 968);
    if (v44 == 0) {
      goto LABEL_93;
    }
    v45 = *(_QWORD*)(v44 + 24);
    if (v45 == 0) {
      goto LABEL_93;
    }
    v46 = *(_QWORD*)(a1 + 1064);
    v47 = 0x1.0000000000000p-1f;
    if (v46 != 0) {
      v48 = LANES64_OF(GameRoutine_16e54e0(v46)).n64_u32[0],
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
      v49 = *(_QWORD*)(a1 + 1064);
      v50 = *(float*)&v48;
      v52 = v51;
      v53 = *(_QWORD*)(v49 + 56);
      v55 = v54;
      if (v53 == 0) {
        goto LABEL_73;
      }
      v56 = std___1___shared_weak_count_lock_alt1(v53),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
      if (v56 == 0) {
        goto LABEL_73;
      }
      v57 = v56;
      v58 = (atomic_ullong*)(v56 + 8);
      v59 = *(__int64**)(v49 + 48);
      if (atomic_fetch_add(v58, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v60 = v59;
        (*(void (**)(__int64))(*(_QWORD*)v57 + 16LL))(v57),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v51 =
                COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
            v54 =
                COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
        std___1___shared_weak_count___release_weak_alt1(v57),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v51 =
                COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
            v54 =
                COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
        v59 = v60;
      }
      if (v59 == nullptr) {
      LABEL_73:
        v59 = &ui_LayoutAccessor_empty_;
      }
      v61 = ui_LayoutAccessor_FindPane_alt1(v59, (__int64)"Frm"),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
      if (v61 != 0) {
        v62 = *(float*)(v61 + 80);
      }
      else {
        v62 = (*(float (**)(_QWORD))(**(_QWORD**)(a1 + 1064) + 80LL))(
                  *(_QWORD*)(a1 + 1064)) *
              0x1.0000000000000p-1f,
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
      }
      v47 = 0x1.0000000000000p-1f;
    }
    else {
      v50 = 0x0.0p+0f;
      v52 = 0x0.0p+0f;
      v55 = 0;
      v62 = 0x0.0p+0f;
    }
    v63 = -(float)(v13 - (float)(v29 * v47));
    v64 = *(_DWORD*)(a1 + 1072);
    if (v64 != 0) {
      if (v64 != 1) {
      LABEL_84:
        v66 = 0x1.dd00000000000p+9f - v63;
        v67 = (float)(0x1.dd00000000000p+9f - v63) < v50;
        v68 = v63 + -0x1.dd00000000000p+9f;
        if (!v67) {
          v66 = v50;
        }
        if (v66 >= v68) {
          v69 = v66;
        }
        else {
          v69 = v68;
        }
        v70 = v52 + (float)(v11 + *(float*)(a1 + 1080));
        v71 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848),
                                              (__int64)&GameData_1ac6c8b),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
        if (v71 != 0) {
          v72 = (float)(v70 + *(float*)(v71 + 52)) - v36;
          if (v72 < -0x1.0900000000000p+9f) {
            v70 = v70 + (float)(-0x1.0900000000000p+9f - v72);
          }
        }
        v73 = *(_BYTE*)(v45 + 88);
        *(float*)(v45 + 48) = v69;
        *(float*)(v45 + 52) = v70;
        *(_DWORD*)(v45 + 56) = v55;
        *(_BYTE*)(v45 + 88) = v73 | 0x10;
        goto LABEL_93;
      }
      v65 = v63 + (float)(v50 + v62);
    }
    else {
      v65 = v50 - v63;
    }
    v50 = v12 + (float)(v65 + *(float*)(a1 + 1076));
    goto LABEL_84;
  }
  v31 = v30;
  v32 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 952),
                                        (__int64)"MenuItemList"),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
  v33 = 0x0.0p+0f;
  LOBYTE(v82) = 0;
  v79_.v79 = (__int64 (**)(void))0xFF7FFFFF7F7FFFFFLL,
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
  v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
  v83 = 0x7F7FFFFFFF7FFFFFLL;
  if (v32 != 0) {
    v34 = LANES128_OF(
              vmulq_f32(*(float32x4_t*)(v32 + 128), *(float32x4_t*)(v32 + 128)))
              .n128_u64[0];
    GameRoutine_156bee0(
        (const char*)v32, (__int64)&v79_.v79, (__int64)&v83, (__int64)&v82, 0,
        sqrtf((float)(*(float*)&v34 +
                      (float)(COERCE_FLOAT(*(_OWORD*)(v32 + 112)) *
                              COERCE_FLOAT(*(_OWORD*)(v32 + 112)))) +
              (float)(COERCE_FLOAT(*(_OWORD*)(v32 + 144)) *
                      COERCE_FLOAT(*(_OWORD*)(v32 + 144)))) /
            *(float*)(v32 + 72),
        sqrtf((float)(*((float*)&v34 + 1) +
                      (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v32 + 112))) *
                              COERCE_FLOAT(HIDWORD(*(_QWORD*)(v32 + 112))))) +
              (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v32 + 144))) *
                      COERCE_FLOAT(HIDWORD(*(_QWORD*)(v32 + 144))))) /
            *(float*)(v32 + 76)),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
    if (LOBYTE(v82) == 1) {
      v33 = vabds_f32(*((float*)&v83 + 1), *((float*)&v79_.v79 + 1));
    }
  }
  v35 = *(_BYTE*)(v31 + 88);
  v36 = v7 + v33;
  *(float*)(v31 + 80) = v29;
  *(float*)(v31 + 84) = v7 + v33;
  *(_BYTE*)(v31 + 88) = v35 | 0x10;
  if (*(_QWORD*)(a1 + 968) != 0) {
    goto LABEL_51;
  }
LABEL_93:
  v74 = *(_QWORD*)(a1 + 1064);
  if (v74 != 0) {
    v75 = BasicMenu_16dd280(*(_QWORD**)(v74 + 8)),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
    v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
    ui_LayoutAccessor_SetPriority(a1 + 848, v75),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
  }
  v76 = *(_QWORD*)(a1 + 336);
  if (v76 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)v76 + 168LL))(*(_QWORD*)(a1 + 336)),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
  }
  *(_QWORD*)(a1 + 336) = v76;
  BasicMenu_16dea40(a1, 1, 0, 0),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 160LL))(result),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
    game_IsVibrationEnabled((_BYTE*)(game_g_game_setting + 712)),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
        v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
    result = *(_QWORD*)(a1 + 336);
    v78 = 4;
    if (result != 0) {
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 120LL))(result),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v51 = COERCE_AS(__typeof__(v51), PSEUDO_REGISTER(float, "s1", "=w")),
      v54 = COERCE_AS(__typeof__(v54), PSEUDO_REGISTER(float, "s2", "=w"));
      if ((result & 1) != 0) {
        v78 = 4;
      }
      else {
        v78 = 0;
      }
    }
  }
  else {
    v78 = 4;
  }
  *(_DWORD*)(a1 + 356) = *(_DWORD*)(a1 + 356) & 0xFFFFFFFB | v78;
  return result;
}

__int64 game_menu_SubMenu_OnBuild_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  atomic_ullong* v7;
  __int64* v8;
  __int64 v9;
  __int128 v10;
  float32x4_t v11;
  __int128 v12;
  float* v13;
  float v14;
  __int64* v16;
  __int64 v17;
  unsigned __int64 v18;
  _BYTE v19[4];

  v2 = *a2;
  v4 = *(_QWORD*)(*a2 + 56);
  if (v4 == 0) {
    goto LABEL_5;
  }
  v5 = std___1___shared_weak_count_lock_alt1(v4);
  if (v5 == 0) {
    goto LABEL_5;
  }
  v6 = v5;
  v7 = (atomic_ullong*)(v5 + 8);
  v8 = *(__int64**)(v2 + 48);
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v8 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v16 = v8;
  (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
  std___1___shared_weak_count___release_weak_alt1(v6);
  v8 = v16;
  if (v16 == nullptr) {
  LABEL_5:
    v8 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  v9 = ui_LayoutAccessor_FindPane_alt2(v8, "A_Contents");
  if (v9 != 0) {
    v10 = *(_OWORD*)(v9 + 112);
    v11 = *(float32x4_t*)(v9 + 128);
    v12 = *(_OWORD*)(v9 + 144);
    v19[0] = 0;
    v18 = 0xFF7FFFFF7F7FFFFFLL;
    v17 = 0x7F7FFFFFFF7FFFFFLL;
    LANES128(v11).n128_u64[0] = LANES128_OF(vmulq_f32(v11, v11)).n128_u64[0];
    GameRoutine_156bee0_alt1(
        v9, (__int64)&v18, (__int64)&v17, (__int64)v19, 0,
        sqrtf((float)(LANES128(v11).n128_f32[0] +
                      (float)(*(float*)&v10 * *(float*)&v10)) +
              (float)(*(float*)&v12 * *(float*)&v12)) /
            *(float*)(v9 + 72),
        sqrtf((float)(LANES128(v11).n128_f32[1] +
                      (float)(*((float*)&v10 + 1) * *((float*)&v10 + 1))) +
              (float)(*((float*)&v12 + 1) * *((float*)&v12 + 1))) /
            *(float*)(v9 + 76));
    v13 = *(float**)(a1 + 8);
    v14 = vabds_f32(*(float*)&v17, *(float*)&v18);
    if (v19[0] == 0) {
      v14 = 0x0.0p+0f;
    }
    if (*v13 >= v14) {
      v14 = *v13;
    }
    *v13 = v14;
  }
  return 0;
}

__int64 game_menu_SubMenu_OnBuild_lambda1_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  atomic_ullong* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  float v11;
  float v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  atomic_ullong* v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  atomic_ullong* v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  atomic_ullong* v28;
  __int64* v29;
  __int64* v30;
  __int64 v31;
  float v32;
  float v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  atomic_ullong* v37;
  __int64* v38;
  __int64* v39;
  float v40;
  float v41;
  float v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  atomic_ullong* v46;
  __int64* v47;
  __int64* v48;
  __int64* v50;
  float v51[3];

  v2 = *a2;
  v4 = *(_QWORD*)(*a2 + 56);
  if (v4 == 0) {
    goto LABEL_5;
  }
  v5 = std___1___shared_weak_count_lock(v4);
  if (v5 == 0) {
    goto LABEL_5;
  }
  v6 = v5;
  v7 = (atomic_ullong*)(v5 + 8);
  v8 = *(__int64**)(v2 + 48);
  if (atomic_fetch_add(v7, 0xFFFFFFFFFFFFFFFFLL) == 0) {
    v50 = v8;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak(v6);
    v8 = v50;
    if (v50 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v8 == nullptr) {
  LABEL_5:
    v8 = ui_LayoutAccessor_empty__ptr[0];
  }
LABEL_6:
  v9 = ui_LayoutAccessor_FindPane(v8, "Frm");
  if (v9 != 0) {
    v10 = __dynamic_cast(v9, GameData_212d670[0], GameData_212fc70[0], 0);
    if (v10 != 0) {
      v11 = *(float*)(a1 + 8);
      v12 = *(float*)(v10 + 84);
      v13 = *(_QWORD*)(v2 + 56);
      if (v13 == 0) {
        goto LABEL_13;
      }
      v14 = std___1___shared_weak_count_lock(v13);
      if (v14 == 0) {
        goto LABEL_13;
      }
      v15 = v14;
      v16 = (atomic_ullong*)(v14 + 8);
      v17 = *(__int64**)(v2 + 48);
      if (atomic_fetch_add(v16, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v18 = v17;
        (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
        std___1___shared_weak_count___release_weak(v15);
        v17 = v18;
      }
      if (v17 == nullptr) {
      LABEL_13:
        v17 = ui_LayoutAccessor_empty__ptr[0];
      }
      ui_LayoutAccessor_SetPaneSize(v17, "Frm", v11, v12);
      v19 = *(_QWORD*)(v2 + 56);
      if (v19 == 0) {
        goto LABEL_19;
      }
      v20 = std___1___shared_weak_count_lock(v19);
      if (v20 == 0) {
        goto LABEL_19;
      }
      v21 = v20;
      v22 = (atomic_ullong*)(v20 + 8);
      v23 = *(__int64**)(v2 + 48);
      if (atomic_fetch_add(v22, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v24 = v23;
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        std___1___shared_weak_count___release_weak(v21);
        v23 = v24;
      }
      if (v23 == nullptr) {
      LABEL_19:
        v23 = ui_LayoutAccessor_empty__ptr[0];
      }
      ui_LayoutAccessor_SetPaneSize(v23, "Overlay", v11, v12);
      v25 = *(_QWORD*)(v2 + 56);
      if (v25 == 0) {
        goto LABEL_25;
      }
      v26 = std___1___shared_weak_count_lock(v25);
      if (v26 == 0) {
        goto LABEL_25;
      }
      v27 = v26;
      v28 = (atomic_ullong*)(v26 + 8);
      v29 = *(__int64**)(v2 + 48);
      if (atomic_fetch_add(v28, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v30 = v29;
        (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
        std___1___shared_weak_count___release_weak(v27);
        v29 = v30;
      }
      if (v29 == nullptr) {
      LABEL_25:
        v29 = ui_LayoutAccessor_empty__ptr[0];
      }
      v31 = ui_LayoutAccessor_FindPane(v29, "A_Contents");
      if (v31 != 0) {
        v32 = (float)*(int*)(a1 + 12);
        v33 = *(float*)(v31 + 80) * 0.5f;
        *(_BYTE*)(v31 + 88) |= 0x10u;
        *(float*)(v31 + 48) = v33 + (float)(v32 * 0.5f);
      }
      v34 = *(_QWORD*)(v2 + 56);
      if (v34 == 0) {
        goto LABEL_33;
      }
      v35 = std___1___shared_weak_count_lock(v34);
      if (v35 == 0) {
        goto LABEL_33;
      }
      v36 = v35;
      v37 = (atomic_ullong*)(v35 + 8);
      v38 = *(__int64**)(v2 + 48);
      if (atomic_fetch_add(v37, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v39 = v38;
        (*(void (**)(__int64))(*(_QWORD*)v36 + 16LL))(v36);
        std___1___shared_weak_count___release_weak(v36);
        v38 = v39;
      }
      if (v38 == nullptr) {
      LABEL_33:
        v38 = ui_LayoutAccessor_empty__ptr[0];
      }
      ui_LayoutAccessor_GetTranslate(v38);
      v40 = *(float*)(a1 + 8);
      v51[1] = v41;
      v51[2] = v42;
      v43 = *(_QWORD*)(v2 + 56);
      v51[0] = v40 * -0.5f;
      if (v43 == 0) {
        goto LABEL_39;
      }
      v44 = std___1___shared_weak_count_lock(v43);
      if (v44 == 0) {
        goto LABEL_39;
      }
      v45 = v44;
      v46 = (atomic_ullong*)(v44 + 8);
      v47 = *(__int64**)(v2 + 48);
      if (atomic_fetch_add(v46, 0xFFFFFFFFFFFFFFFFLL) == 0) {
        v48 = v47;
        (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
        std___1___shared_weak_count___release_weak(v45);
        v47 = v48;
      }
      if (v47 == nullptr) {
      LABEL_39:
        v47 = ui_LayoutAccessor_empty__ptr[0];
      }
      ui_LayoutAccessor_SetTranslate(v47, v51);
    }
  }
  return 0;
}

#pragma GCC visibility pop
