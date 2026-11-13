#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, _QWORD,
                                                       _QWORD);
__int64 Alignment_56b600(_QWORD);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155e830(_QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPriority(_QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak();
__n128 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* ui_LayoutAccessor_empty__ptr[3];
__int64 MotivationGaugeInfo_Unknown28(__int64 a1);
__attribute__((swiftcall)) void
LayoutAccessor_1560070_alt1(PSEUDO_X8, __int64*,
                            const char*) __asm__("LayoutAccessor_1560070");
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64 Alignment_56b600_alt1(__int64 result) __asm__("Alignment_56b600");
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 LayoutAccessor_155e830_alt1(__int64 result,
                                    char) __asm__("LayoutAccessor_155e830");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 ui_LayoutAccessor_FindAlignment_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindAlignment");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
__int64 ui_LayoutAccessor_SetPriority_alt1(__int64 result, int) __asm__(
    "ui_LayoutAccessor_SetPriority");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 LayoutAccessor_15636c0(__int64 result, __int64, char, float);
__int64 LayoutAccessor_1563c50(__int64 result, __int64, char, float);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
__int64 LayoutAccessor_1563380(__int64*, __int64, char);
float LayoutAccessor_15637c0(__int64*, __int64, char);
void snd_Fade_Fade_10c830(__int64, float);
__int64 MotivationGaugeInfo_Unknown29(__int64 result);

__int64 MotivationGaugeInfo_Unknown28(__int64 a1)
{
  char* v1;
  __int64 v2;
  __int64* v4;
  int i;
  char* v6;
  __int64* v7;
  char* v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  int v12;
  __int64* v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  const char* v17;
  char* v18;
  __int64 v19;
  __int64 v20;
  const char* v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  const char* v25;
  __int64 v26;
  char* v27;
  char* v28;
  int v29;
  int v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  struct {
    __int64 v35;
    __int64 v36;
  } v35_;

  v2 = *(_QWORD*)(a1 + 208);
  v1 = *(char**)(a1 + 216);
  v4 = ui_LayoutAccessor_empty__ptr[0];
  if ((char*)v2 != v1) {
    i = 0;
    while (1) {
      if (*(_QWORD*)v2 == 0 || *(_BYTE*)(a1 + 253) == 1 &&
                                   *(_DWORD*)(v2 + 8) == *(_DWORD*)(v2 + 12)) {
        v6 = &v1[-v2 - 24];
        if (v1 != (char*)(v2 + 24)) {
          memmove_alt1(v2, v2 + 24, (unsigned __int64)(v6 - 4));
        }
        v1 = &v6[v2];
        v2 -= 24;
        *(_QWORD*)(a1 + 216) = v1;
        goto LABEL_4;
      }
      if (*(_QWORD*)(a1 + 168) != 0) {
        v7 = *(__int64**)(a1 + 168);
      }
      else {
        v7 = v4;
      }
      v8 = game_util_Format_alt1("L_MotivationGauge%02d", (unsigned int)i);
      v9 = LayoutAccessor_155fbe0_alt1(v7, v8);
      LayoutAccessor_155e830_alt1((__int64)v9, 1);
      v10 = ui_LayoutAccessor_FindPane_alt1(v9, (__int64)"Face");
      if (v10 != 0) {
        v10 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d678[0], 0);
      }
      GameHr_1840740(v10, 0, *(_QWORD*)v2, 6u, 1);
      v11 = LayoutAccessor_155fbe0_alt1(v9, "L_Motivation");
      v12 = *(_DWORD*)(v2 + 8);
      v13 = v11;
      v14 = game_util_Format_alt1("L_Motivation%02d", 0);
      LayoutAccessor_1560070_alt1((void*)(&v35_.v35), v13, v14);
      if (v35_.v36 != 0) {
        v15 = std___1___shared_weak_count_lock_alt1(v35_.v36);
        v16 = v35_.v35;
        if (v35_.v36 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v35_.v36);
        }
        if (v15 != 0 && v16 != 0) {
          if (v12 >= 1) {
            v17 = "GaugeOn";
          }
          else {
            v17 = "GaugeOff";
          }
          LayoutAccessor_1562cf0_alt1(v16, v17);
        }
        else if (v15 == 0) {
          goto LABEL_28;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          std___1___shared_weak_count___release_weak_alt1(v15);
        }
      }
    LABEL_28:
      v18 = game_util_Format_alt1("L_Motivation%02d", 1);
      LayoutAccessor_1560070_alt1((void*)(&v35_.v35), v13, v18);
      if (v35_.v36 == 0) {
        goto LABEL_40;
      }
      v19 = std___1___shared_weak_count_lock_alt1(v35_.v36);
      v20 = v35_.v35;
      if (v35_.v36 != 0) {
        std___1___shared_weak_count___release_weak_alt1(v35_.v36);
      }
      if (v19 != 0 && v20 != 0) {
        if (v12 >= 2) {
          v21 = "GaugeOn";
        }
        else {
          v21 = "GaugeOff";
        }
        LayoutAccessor_1562cf0_alt1(v20, v21);
      }
      else if (v19 == 0) {
        goto LABEL_40;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak_alt1(v19);
      }
    LABEL_40:
      v22 = game_util_Format_alt1("L_Motivation%02d", 2);
      LayoutAccessor_1560070_alt1((void*)(&v35_.v35), v13, v22);
      if (v35_.v36 != 0) {
        v23 = std___1___shared_weak_count_lock_alt1(v35_.v36);
        v24 = v35_.v35;
        if (v35_.v36 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v35_.v36);
        }
        if (v23 != 0 && v24 != 0) {
          if (v12 >= 3) {
            v25 = "GaugeOn";
          }
          else {
            v25 = "GaugeOff";
          }
          LayoutAccessor_1562cf0_alt1(v24, v25);
        LABEL_50:
          if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
            std___1___shared_weak_count___release_weak_alt1(v23);
          }
          goto LABEL_3;
        }
        if (v23 != 0) {
          goto LABEL_50;
        }
      }
    LABEL_3:
      GameHr_1562680((__int64)v9, "In", 0x0.0p+0f);
      v1 = *(char**)(a1 + 216);
      ++i;
    LABEL_4:
      v2 += 24;
      if ((char*)v2 == v1) {
        if (i > 4) {
          goto LABEL_60;
        }
        goto LABEL_55;
      }
    }
  }
  for (i = 0; i != 5; ++i) {
  LABEL_55:
    if (*(_QWORD*)(a1 + 168) != 0) {
      v26 = *(_QWORD*)(a1 + 168);
    }
    else {
      v26 = (__int64)v4;
    }
    v27 = game_util_Format_alt1("L_MotivationGauge%02d", (unsigned int)i);
    ui_LayoutAccessor_SetPaneVisible_alt1(v26, (__int64)v27, 0);
  }
  v1 = *(char**)(a1 + 216);
LABEL_60:
  v28 = *(char**)(a1 + 208);
  if (v28 == v1) {
    *(_BYTE*)(a1 + 252) = 0;
  }
  else {
    *(_BYTE*)(a1 + 252) = (signed __int32)*((_DWORD*)v28 + 3) <
                          (signed __int32)*((_DWORD*)v28 + 2);
    v29 = *(_DWORD*)(a1 + 248);
    do {
      v30 = *((_DWORD*)v28 + 4);
      if (v30 > v29) {
        *(_DWORD*)(a1 + 248) = v30;
        v29 = v30;
      }
      v28 += 24;
    } while (v28 != v1);
  }
  if (*(_QWORD*)(a1 + 168) != 0) {
    v31 = *(__int64**)(a1 + 168);
  }
  else {
    v31 = v4;
  }
  v32 = ui_LayoutAccessor_FindAlignment_alt1(v31, (__int64)"A_Motivation");
  if (v32 != 0) {
    Alignment_56b600_alt1(v32);
  }
  if (*(_QWORD*)(a1 + 168) != 0) {
    v33 = *(_QWORD*)(a1 + 168);
  }
  else {
    v33 = (__int64)v4;
  }
  return ui_LayoutAccessor_SetPriority_alt1(v33, 1090);
}

__int64 MotivationGaugeInfo_Unknown29(__int64 result)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
  int v1;
  char v2;
  int v3;
  __int64 v4;
  __int64* v5;
  char* v6;
  __int64* v7;
  __int64* v8;
  char* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  int v15;
  __int64 v16;
  __int64* v17;
  char* v18;
  __int64* v19;
  int v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  __int64 v27;
  _BOOL4 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64* v32;
  char* v33;
  __int64* v34;
  int v35;
  char* v36;
  __int64 v37;
  __int64 v38;
  char v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64* v43;
  char* v44;
  __int64* v45;
  char* v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  unsigned __int64 v50;
  __int64 v51;
  __int64* v52;
  char* v53;
  __int64* v54;
  char* v55;
  __int64 v56;
  __int64* v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64* v61;
  char* v62;
  int v63;
  int v64;
  __int64 v65;
  float v66;
  __int64* v67;
  char* v68;
  __int64 v69;
  __int64* v70;
  const char* v71;
  char* v72;
  __int64 v73;
  __int64 v74;
  unsigned __int64 v75;
  __int64* v76;
  char* v77;
  __int64* v78;
  struct {
    __int64* v79;
    __int64 v80;
  } v79_;

  v3 = *(_DWORD*)(result + 232);
  v4 = result;
  if (v3 > 1) {
    if ((unsigned int)(v3 - 2) >= 2) {
      if (v3 != 4) {
        if (v3 == 6) {
          if (*(_QWORD*)(result + 168) != 0) {
            v5 = *(__int64**)(result + 168);
          }
          else {
            v5 = ui_LayoutAccessor_empty__ptr[0];
          }
          v6 = game_util_Format_alt1("L_MotivationGauge%02d", 0);
          v7 = LayoutAccessor_155fbe0_alt1(v5, v6);
          result = LayoutAccessor_1563380(v7, (__int64)"Out", 0);
          if ((result & 1) != 0) {
            *(_DWORD*)(v4 + 232) = 7;
          }
        }
        return result;
      }
      if ((signed __int32)*(_DWORD*)(result + 244) <
          (signed __int32)*(_DWORD*)(result + 248)) {
      LABEL_68:
        *(_DWORD*)(v4 + 232) = 2;
        return result;
      }
      *(_DWORD*)(result + 232) = 5;
      v58 = *(_QWORD*)(result + 208);
      if (*(_QWORD*)(result + 216) == v58) {
        return result;
      }
      v59 = 0;
      while (1) {
        v60 = v58 + 24 * v59;
        v61 = *(_QWORD*)(v4 + 168) != 0 ? *(__int64**)(v4 + 168)
                                        : ui_LayoutAccessor_empty__ptr[0];
        v62 = game_util_Format_alt1("L_MotivationGauge%02d/L_Motivation",
                                    (unsigned int)v59);
        result = (__int64)LayoutAccessor_155fbe0_alt1(v61, v62);
        v65 = v60 + 8;
        v63 = *(_DWORD*)(v60 + 8);
        v64 = *(_DWORD*)(v65 + 4);
        if (v64 > v63) {
          break;
        }
      LABEL_118:
        v58 = *(_QWORD*)(v4 + 208);
        if (0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v4 + 216) - v58) >> 3) <=
            ++v59) {
          return result;
        }
      }
      v66 = -0x1.0000000000000p+0f;
      v67 = (__int64*)result;
      while (1) {
        v68 = game_util_Format_alt1("L_Motivation%02d", --v64);
        LayoutAccessor_1560070_alt1((void*)(&v79_.v79), v67, v68);
        result = v79_.v80;
        if (v79_.v80 != 0) {
          v69 = std___1___shared_weak_count_lock_alt1(v79_.v80);
          v70 = v79_.v79;
          result = v79_.v80;
          if (v79_.v80 != 0) {
            result = std___1___shared_weak_count___release_weak_alt1(v79_.v80);
          }
          if (v69 != 0 && v70 != nullptr) {
            result = LayoutAccessor_1563280(v70, (__int64)"GaugeWait", 0);
            if ((result & 1) != 0) {
              if (v66 < 0x0.0p+0f) {
                v66 = LayoutAccessor_15637c0(v70, (__int64)"GaugeWait", 0);
              }
              result = LayoutAccessor_15636c0((__int64)v70,
                                              (__int64)"GaugeWait", 0, v66);
            }
          LABEL_135:
            if (atomic_fetch_add((atomic_ullong* volatile)(v69 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v69 + 16LL))(v69);
              result = std___1___shared_weak_count___release_weak_alt1(v69);
            }
            goto LABEL_124;
          }
          if (v69 != 0) {
            goto LABEL_135;
          }
        }
      LABEL_124:
        if (v64 <= v63) {
          goto LABEL_118;
        }
      }
    }
    v12 = *(_QWORD*)(result + 208);
    v11 = *(_QWORD*)(result + 216);
    if (*(_BYTE*)(result + 252) == 1) {
      if (v3 == 2) {
        if (v11 != v12) {
          v13 = 0;
          v14 = 0;
          v15 = 0;
          while (1) {
            v16 = v12 + v13;
            if ((signed __int32)*(_DWORD*)(v12 + v13 + 16) >
                (signed __int32)*(_DWORD*)(v4 + 244)) {
              break;
            }
          LABEL_23:
            ++v14;
            v13 += 24;
            if (0xAAAAAAAAAAAAAAABLL * ((v11 - v12) >> 3) <= v14) {
              goto LABEL_138;
            }
          }
          if (*(_QWORD*)(v4 + 168) != 0) {
            v17 = *(__int64**)(v4 + 168);
          }
          else {
            v17 = ui_LayoutAccessor_empty__ptr[0];
          }
          v18 = game_util_Format_alt1("L_MotivationGauge%02d/L_Motivation",
                                      (unsigned int)v14);
          v19 = LayoutAccessor_155fbe0_alt1(v17, v18);
          v20 = *(_DWORD*)(v16 + 8) - *(_DWORD*)(v4 + 244);
          v21 = game_util_Format_alt1("L_Motivation%02d", v20 - 1);
          LayoutAccessor_1560070_alt1((void*)(&v79_.v79), v19, v21);
          if (v79_.v80 != 0) {
            v22 = std___1___shared_weak_count_lock_alt1(v79_.v80);
            v23 = (__int64)v79_.v79;
            if (v79_.v80 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v79_.v80);
            }
            if (v22 != 0 && v23 != 0) {
              GameHr_1562680(v23, "GaugeDown", 0x1.0000000000000p+0f);
              goto LABEL_35;
            }
            if (v22 != 0) {
            LABEL_35:
              if (atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
                std___1___shared_weak_count___release_weak_alt1(v22);
              }
            }
          }
          v12 = *(_QWORD*)(v4 + 208);
          v11 = *(_QWORD*)(v4 + 216);
          if (v15 <= v20) {
            v15 = v20;
          }
          goto LABEL_23;
        }
        v15 = 0;
      LABEL_138:
        v71 = "SE_SYS_Motivation_Down%d";
      LABEL_141:
        *(_DWORD*)(v4 + 232) = 3;
        v72 = game_util_Format_alt1(v71, (unsigned int)v15);
        snd_Fade_Fade_10c830((__int64)&v79_.v79, 0x0.0p+0f);
        snd_play_ff2d0((void*)(handle), (__int64)v72, (__int64)v72,
                       (__int64)&v79_.v79, 0, 0x10001u, 0, 0x0.0p+0f,
                       0x1.0000000000000p+0f);
        return snd_Fade_Destroy_Fade(&v79_.v79);
      }
      if (v11 == v12) {
        goto LABEL_115;
      }
      v39 = 1;
      v40 = 0;
      v41 = 0;
      while (1) {
        v42 = v12 + v40;
        if ((signed __int32)*(_DWORD*)(v12 + v40 + 16) <=
            (signed __int32)*(_DWORD*)(v4 + 244)) {
          goto LABEL_73;
        }
        if (*(_QWORD*)(v4 + 168) != 0) {
          v43 = *(__int64**)(v4 + 168);
        }
        else {
          v43 = ui_LayoutAccessor_empty__ptr[0];
        }
        v44 = game_util_Format_alt1("L_MotivationGauge%02d/L_Motivation",
                                    (unsigned int)v41);
        v45 = LayoutAccessor_155fbe0_alt1(v43, v44);
        v46 = game_util_Format_alt1(
            "L_Motivation%02d", *(_DWORD*)(v42 + 8) + ~*(_DWORD*)(v4 + 244));
        LayoutAccessor_1560070_alt1((void*)(&v79_.v79), v45, v46);
        result = v79_.v80;
        if (v79_.v80 == 0) {
          goto LABEL_71;
        }
        v47 = std___1___shared_weak_count_lock_alt1(v79_.v80);
        v48 = v79_.v79;
        result = v79_.v80;
        if (v79_.v80 != 0) {
          result = std___1___shared_weak_count___release_weak_alt1(v79_.v80);
        }
        if (v47 != 0 && v48 != nullptr) {
          result = LayoutAccessor_1563380(v48, (__int64)"GaugeDown", 0);
          v2 = result;
        }
        else if (v47 == 0) {
          goto LABEL_71;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v47 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v48 != nullptr) {
            goto LABEL_72;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v47 + 16LL))(v47);
          result = std___1___shared_weak_count___release_weak_alt1(v47);
          if (v48 != nullptr) {
            goto LABEL_72;
          }
        }
      LABEL_71:
        v2 = 0;
      LABEL_72:
        v12 = *(_QWORD*)(v4 + 208);
        v11 = *(_QWORD*)(v4 + 216);
        v39 &= v2;
      LABEL_73:
        ++v41;
        v40 += 24;
        if (0xAAAAAAAAAAAAAAABLL * ((v11 - v12) >> 3) <= v41) {
          goto LABEL_114;
        }
      }
    }
    if (v3 == 2) {
      if (v11 == v12) {
        v15 = 0;
      LABEL_140:
        v71 = "SE_SYS_Motivation_Up%d";
        goto LABEL_141;
      }
      v29 = 0;
      v30 = 0;
      v15 = 0;
      while (1) {
        v31 = v12 + v29;
        if ((signed __int32)*(_DWORD*)(v12 + v29 + 16) >
            (signed __int32)*(_DWORD*)(v4 + 244)) {
          break;
        }
      LABEL_53:
        ++v30;
        v29 += 24;
        if (0xAAAAAAAAAAAAAAABLL * ((v11 - v12) >> 3) <= v30) {
          goto LABEL_140;
        }
      }
      if (*(_QWORD*)(v4 + 168) != 0) {
        v32 = *(__int64**)(v4 + 168);
      }
      else {
        v32 = ui_LayoutAccessor_empty__ptr[0];
      }
      v33 = game_util_Format_alt1("L_MotivationGauge%02d/L_Motivation",
                                  (unsigned int)v30);
      v34 = LayoutAccessor_155fbe0_alt1(v32, v33);
      v35 = *(_DWORD*)(v4 + 244) + *(_DWORD*)(v31 + 8);
      v36 = game_util_Format_alt1("L_Motivation%02d", v35);
      LayoutAccessor_1560070_alt1((void*)(&v79_.v79), v34, v36);
      if (v79_.v80 != 0) {
        v37 = std___1___shared_weak_count_lock_alt1(v79_.v80);
        v38 = (__int64)v79_.v79;
        if (v79_.v80 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v79_.v80);
        }
        if (v37 != 0 && v38 != 0) {
          GameHr_1562680(v38, "GaugeUp", 0x1.0000000000000p+0f);
          goto LABEL_65;
        }
        if (v37 != 0) {
        LABEL_65:
          if (atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
            std___1___shared_weak_count___release_weak_alt1(v37);
          }
        }
      }
      if (v15 <= v35 + 1) {
        v15 = v35 + 1;
      }
      v12 = *(_QWORD*)(v4 + 208);
      v11 = *(_QWORD*)(v4 + 216);
      goto LABEL_53;
    }
    if (v11 == v12) {
      goto LABEL_115;
    }
    v39 = 1;
    v49 = 0;
    v50 = 0;
    while (1) {
      v51 = v12 + v49;
      if ((signed __int32)*(_DWORD*)(v12 + v49 + 16) <=
          (signed __int32)*(_DWORD*)(v4 + 244)) {
        goto LABEL_94;
      }
      if (*(_QWORD*)(v4 + 168) != 0) {
        v52 = *(__int64**)(v4 + 168);
      }
      else {
        v52 = ui_LayoutAccessor_empty__ptr[0];
      }
      v53 = game_util_Format_alt1("L_MotivationGauge%02d/L_Motivation",
                                  (unsigned int)v50);
      v54 = LayoutAccessor_155fbe0_alt1(v52, v53);
      v55 = game_util_Format_alt1("L_Motivation%02d",
                                  *(_DWORD*)(v4 + 244) + *(_DWORD*)(v51 + 8));
      LayoutAccessor_1560070_alt1((void*)(&v79_.v79), v54, v55);
      result = v79_.v80;
      if (v79_.v80 == 0) {
        goto LABEL_92;
      }
      v56 = std___1___shared_weak_count_lock_alt1(v79_.v80);
      v57 = v79_.v79;
      result = v79_.v80;
      if (v79_.v80 != 0) {
        result = std___1___shared_weak_count___release_weak_alt1(v79_.v80);
      }
      if (v56 != 0 && v57 != nullptr) {
        result = LayoutAccessor_1563380(v57, (__int64)"GaugeUp", 0);
        LOBYTE(v51) = 0;
        if ((result & 1) != 0) {
          result = LayoutAccessor_1563280(v57, (__int64)"GaugeWait", 0);
          if ((result & 1) == 0) {
            result = GameHr_1562680((__int64)v57, "GaugeWait",
                                    0x1.0000000000000p+0f);
          }
          LOBYTE(v51) = 1;
        }
      }
      else if (v56 == 0) {
        goto LABEL_92;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v56 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v57 != nullptr) {
          goto LABEL_93;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v56 + 16LL))(v56);
        result = std___1___shared_weak_count___release_weak_alt1(v56);
        if (v57 != nullptr) {
          goto LABEL_93;
        }
      }
    LABEL_92:
      LOBYTE(v51) = 0;
    LABEL_93:
      v12 = *(_QWORD*)(v4 + 208);
      v11 = *(_QWORD*)(v4 + 216);
      v39 &= v51;
    LABEL_94:
      ++v50;
      v49 += 24;
      if (0xAAAAAAAAAAAAAAABLL * ((v11 - v12) >> 3) <= v50) {
      LABEL_114:
        if ((v39 & 1) != 0) {
        LABEL_115:
          *(_DWORD*)(v4 + 232) = 4;
          ++*(_DWORD*)(v4 + 244);
        }
        return result;
      }
    }
  }
  if (v3 != 0) {
    if (v3 != 1) {
      return result;
    }
    v8 = *(_QWORD*)(result + 168) != 0 ? *(__int64**)(result + 168)
                                       : ui_LayoutAccessor_empty__ptr[0];
    v9 = game_util_Format_alt1("L_MotivationGauge%02d", 0);
    v10 = LayoutAccessor_155fbe0_alt1(v8, v9);
    result = LayoutAccessor_1563380(v10, (__int64)"In", 0);
    if ((result & 1) == 0) {
      return result;
    }
    goto LABEL_68;
  }
  v24 = ui_LayoutAccessor_empty__ptr[0];
  if (*(_QWORD*)(result + 168) != 0) {
    v25 = *(__int64**)(result + 168);
  }
  else {
    v25 = ui_LayoutAccessor_empty__ptr[0];
  }
  if (v25[2] != 0) {
    result = v25[1];
    if (result != 0) {
      result = std___1___shared_weak_count_lock_alt1(result);
      if (result == 0) {
        goto LABEL_147;
      }
      v26 = *v25;
      if (*v25 != 0) {
        v1 = *(unsigned __int8*)(v26 + 24);
        v27 = v26 + 152;
        if (v1 == 0) {
          v27 = 0;
        }
        v28 = v27 != v25[2];
      }
      else {
        v28 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v73 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        result = std___1___shared_weak_count___release_weak_alt1(v73);
      }
      if (v28) {
      LABEL_147:
        v74 = v25[1];
        if (v74 == 0) {
          return result;
        }
        LOBYTE(v1) = *(_QWORD*)(v74 + 8) != -1;
      }
      if ((v1 & 1) != 0 && (*(_BYTE*)(v4 + 236) & 1) != 0) {
        if (*(_QWORD*)(v4 + 216) != *(_QWORD*)(v4 + 208)) {
          v75 = 0;
          do {
            if (*(_QWORD*)(v4 + 168) != 0) {
              v76 = *(__int64**)(v4 + 168);
            }
            else {
              v76 = v24;
            }
            v77 = game_util_Format_alt1("L_MotivationGauge%02d",
                                        (unsigned int)v75);
            v78 = LayoutAccessor_155fbe0_alt1(v76, v77);
            result = LayoutAccessor_1563c50((__int64)v78, (__int64)"In", 0,
                                            0x1.0000000000000p+0f);
            ++v75;
          } while (0xAAAAAAAAAAAAAAABLL * ((__int64)(*(_QWORD*)(v4 + 216) -
                                                     *(_QWORD*)(v4 + 208)) >>
                                           3) >
                   v75);
        }
        *(_DWORD*)(v4 + 232) = 1;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
