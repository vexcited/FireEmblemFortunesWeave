#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameHr_16eb610(_QWORD*, unsigned int, const char*, __int64, __int64,
                       unsigned int, int);
__int64 GameRoutine_156d580(__int64);
__int64 LayoutAccessor_1562060(__int64 result, __int64, __int64);
__int64 VolunteerArgs_948220(__int16*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* game_util_Format(const char*, ...);
extern __int64 (*GameData_211cdf8[])();
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 TrainingKindMenuItem_Unknown55(__int64 result);

__int64 TrainingKindMenuItem_Unknown55(__int64 result)
{

#pragma clang fp contract(off)
  __int64* v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int16* v5;
  double v6;
  double v7;
  double v8;
  double v9;
  double v10;
  unsigned int v11;
  char v12;
  __int64 v13;
  __int64 v14;
  int v15;
  char* v16;
  int v17;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  int v20;

  if (*(_QWORD*)(result + 88) != 0) {
    v1 = (__int64*)result;
    result = *(_QWORD*)(result + 56);
    if (result != 0) {
      result = std___1___shared_weak_count_lock(result);
      if (result != 0) {
        v2 = v1[6];
        v3 = result;
        if (v2 == 0) {
        LABEL_23:
          if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
            return std___1___shared_weak_count___release_weak(v3);
          }
          return result;
        }
        LayoutAccessor_1562060(v1[6], (__int64)"T_Txt",
                               *(_QWORD*)(v1[11] + 32));
        if (game_gmap_GmapClock_instance_ != 0) {
          v5 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
        }
        else {
          v5 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
        }
        LOWORD(v4) = *(_WORD*)(v1[11] + 88);
        v6 = (double)v4;
        v7 = (double)(unsigned int)VolunteerArgs_948220(v5);
        v8 = 0x1.0000000000000p+0;
        v9 = v7 / -0x1.9000000000000p+6 + 0x1.0000000000000p+0;
        if (v9 <= 0x1.0000000000000p+0) {
          v8 = v9;
        }
        if (v9 >= 0x1.47ae147ae147bp-7) {
          v10 = v8;
        }
        else {
          v10 = 0x1.47ae147ae147bp-7;
        }
        if ((int)(v10 * v6) <= 1) {
          v11 = 1;
        }
        else {
          v11 = (int)(v10 * v6);
        }
        v12 = (*(__int64 (**)(__int64*))(*v1 + 560))(v1);
        GameHr_16eb610(v1, 0, "L_Gold", (__int64)"Icon", (__int64)"T_Num", v11,
                       (v12 & 0x10) != 0);
        v13 = v1[11];
        v20 = 0;
        v18_.v18[0] = GameData_211cdf8;
        v18_.v18[1] = v2;
        v18_.v19 = v18_.v18;
        v18_.v18[2] = v13 + 90;
        v18_.v18[3] = &v20;
        GameRoutine_156d580((__int64)v18_.v18);
        result = (__int64)v18_.v19;
        if (v18_.v19 == v18_.v18) {
          v14 = 32;
        }
        else {
          if (v18_.v19 == nullptr) {
            goto LABEL_21;
          }
          v14 = 40;
        }
        result = (*(__int64 (**)(__int64))(*v18_.v19 + v14))((__int64)v18_.v19);
      LABEL_21:
        v15 = v20;
        if (v20 <= 3) {
          do {
            v16 = game_util_Format("IconMastery%02d", v15);
            result = ui_LayoutAccessor_SetPaneVisible(v2, (__int64)v16, 0);
            v17 = v20;
            v15 = ++v20;
          } while (v17 < 3);
        }
        goto LABEL_23;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
