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

__int64 MotivationGaugeInfo_Unknown28(__int64 a1)
{
  char* v1;
  char* v2;
  __int64* v4;
  int i;
  char* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  const char* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  const char* v21;
  __int64 v22;
  long double v23;
  __int64 v24;
  __int64 v25;
  const char* v26;
  __int64* v27;
  __int64 v28;
  char* v29;
  int v30;
  int v31;
  __int64* v32;
  __int64 v33;
  __int64* v34;
  __int64 v36;
  __int64 v37;

  v2 = *(char**)(a1 + 208);
  v1 = *(char**)(a1 + 216);
  v4 = ui_LayoutAccessor_empty__ptr[0];
  if (v2 != v1) {
    i = 0;
    while (1) {
      if (*(_QWORD*)v2 == 0 || *(_BYTE*)(a1 + 253) == 1 &&
                                   *((_DWORD*)v2 + 2) == *((_DWORD*)v2 + 3)) {
        v6 = (char*)(v1 - (v2 + 24));
        if (v1 != v2 + 24) {
          memmove(v2, v2 + 24, v6 - 4);
        }
        v1 = &v6[(_QWORD)v2];
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
      v8 = game_util_Format("L_MotivationGauge%02d", (unsigned int)i);
      v9 = LayoutAccessor_155fbe0(v7, v8);
      LayoutAccessor_155e830(v9, 1);
      v10 = ui_LayoutAccessor_FindPane(v9, "Face");
      if (v10 != 0) {
        v10 = __dynamic_cast(v10, GameData_212d670[0], GameData_212d678[0], 0);
      }
      GameRoutine_1840740(v10, 0, *(_QWORD*)v2, 6, 1);
      v11 = LayoutAccessor_155fbe0(v9, "L_Motivation");
      v12 = *((_DWORD*)v2 + 2);
      v13 = v11;
      v14 = game_util_Format("L_Motivation%02d", 0);
      LayoutAccessor_1560070((void*)(&v36), v13, v14);
      if (v37 != 0) {
        v15 = std___1___shared_weak_count_lock(v37);
        v16 = v36;
        if (v37 != 0) {
          std___1___shared_weak_count___release_weak();
        }
        if (v15 != 0 && v16 != 0) {
          if (v12 >= 1) {
            v17 = "GaugeOn";
          }
          else {
            v17 = "GaugeOff";
          }
          LayoutAccessor_1562cf0(v16, v17);
        }
        else if (v15 == 0) {
          goto LABEL_28;
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
          std___1___shared_weak_count___release_weak();
        }
      }
    LABEL_28:
      v18 = game_util_Format("L_Motivation%02d", 1);
      LayoutAccessor_1560070((void*)(&v36), v13, v18);
      if (v37 == 0) {
        goto LABEL_40;
      }
      v19 = std___1___shared_weak_count_lock(v37);
      v20 = v36;
      if (v37 != 0) {
        std___1___shared_weak_count___release_weak();
      }
      if (v19 != 0 && v20 != 0) {
        if (v12 >= 2) {
          v21 = "GaugeOn";
        }
        else {
          v21 = "GaugeOff";
        }
        LayoutAccessor_1562cf0(v20, v21);
      }
      else if (v19 == 0) {
        goto LABEL_40;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
        std___1___shared_weak_count___release_weak();
      }
    LABEL_40:
      v22 = game_util_Format("L_Motivation%02d", 2);
      LayoutAccessor_1560070((void*)(&v36), v13, v22);
      if (v37 != 0) {
        v24 = std___1___shared_weak_count_lock(v37);
        v25 = v36;
        if (v37 != 0) {
          *((_QWORD*)&v23 + 1) =
              LANES128_OF(std___1___shared_weak_count___release_weak())
                  .n128_u64[1];
        }
        if (v24 != 0 && v25 != 0) {
          if (v12 >= 3) {
            v26 = "GaugeOn";
          }
          else {
            v26 = "GaugeOff";
          }
          LayoutAccessor_1562cf0(v25, v26);
        LABEL_50:
          if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
            *((_QWORD*)&v23 + 1) =
                LANES128_OF(std___1___shared_weak_count___release_weak())
                    .n128_u64[1];
          }
          goto LABEL_3;
        }
        if (v24 != 0) {
          goto LABEL_50;
        }
      }
    LABEL_3:
      *(_QWORD*)&v23 = 0;
      LayoutAccessor_1562680(v9, "In", v23);
      v1 = *(char**)(a1 + 216);
      ++i;
    LABEL_4:
      v2 += 24;
      if (v2 == v1) {
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
      v27 = *(__int64**)(a1 + 168);
    }
    else {
      v27 = v4;
    }
    v28 = game_util_Format("L_MotivationGauge%02d", (unsigned int)i);
    ui_LayoutAccessor_SetPaneVisible(v27, v28, 0);
  }
  v1 = *(char**)(a1 + 216);
LABEL_60:
  v29 = *(char**)(a1 + 208);
  if (v29 == v1) {
    *(_BYTE*)(a1 + 252) = 0;
  }
  else {
    *(_BYTE*)(a1 + 252) = *((_DWORD*)v29 + 3) < *((_DWORD*)v29 + 2);
    v30 = *(_DWORD*)(a1 + 248);
    do {
      v31 = *((_DWORD*)v29 + 4);
      if (v31 > v30) {
        *(_DWORD*)(a1 + 248) = v31;
        v30 = v31;
      }
      v29 += 24;
    } while (v29 != v1);
  }
  if (*(_QWORD*)(a1 + 168) != 0) {
    v32 = *(__int64**)(a1 + 168);
  }
  else {
    v32 = v4;
  }
  v33 = ui_LayoutAccessor_FindAlignment(v32, "A_Motivation");
  if (v33 != 0) {
    Alignment_56b600(v33);
  }
  if (*(_QWORD*)(a1 + 168) != 0) {
    v34 = *(__int64**)(a1 + 168);
  }
  else {
    v34 = v4;
  }
  return ui_LayoutAccessor_SetPriority(v34, 1090);
}

#pragma GCC visibility pop
