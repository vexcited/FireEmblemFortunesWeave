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

#pragma GCC visibility pop
