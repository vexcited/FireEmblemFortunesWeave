#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12b3d60(__int64 result);
__int64 game_HashString(_QWORD);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
extern __int64 GameData_212c6c8;
extern __int64 GameData_212c7b8[10];
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 ProcSideStoryWatcher_Unknown3(__int64 result);

__int64 ProcSideStoryWatcher_Unknown3(__int64 result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  unsigned __int16* v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int16* v10;
  __int64 v11;
  __int64 v12;
  char v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[2];

  if (*(_QWORD*)GameData_212c6c8 != 0) {
    v1 = (_QWORD*)GameData_212c7b8[0];
    v2 = *(_QWORD**)GameData_212c7b8[0];
    if ((*(_BYTE*)(*(_QWORD*)GameData_212c7b8[0] + 128LL) & 1) == 0) {
      v3 = game_gmap_GmapClock_instance_;
      v4 = game_gmap_GmapClock_kDefaultTime_ptr;
      if (game_gmap_GmapClock_instance_ != 0) {
        v5 = (unsigned __int16*)(game_gmap_GmapClock_instance_ + 8);
      }
      else {
        v5 = (unsigned __int16*)game_gmap_GmapClock_kDefaultTime_ptr;
      }
      v6 = result + 152;
      if (*(unsigned __int16*)(result + 152) == *v5 &&
          *(unsigned __int16*)(result + 154) == v5[1] &&
          *(unsigned __int16*)(result + 156) == v5[2]) {
        if (*(unsigned __int16*)(result + 158) == v5[3]) {
          return result;
        }
      }
      else {
        v7 = (__int64*)v2[2];
        v8 = (__int64*)v2[3];
        if (v7 != v8) {
          do {
            v9 = *v7++;
            result = GameRoutine_12b3d60(v9);
          } while (v7 != v8);
          v2 = (_QWORD*)*v1;
          v3 = game_gmap_GmapClock_instance_;
        }
      }
      v10 = (__int16*)(v3 + 8);
      if (v3 == 0) {
        v10 = (__int16*)v4;
      }
      v11 = v2[10];
      v12 = v2[11];
      if (v11 != v12) {
        v13 = 0;
        v14 = ((__int64)v10[1] << 24) + ((__int64)*v10 << 32) +
              ((__int64)v10[2] << 18) + ((__int64)v10[3] << 12) +
              ((__int64)v10[4] << 6) + v10[5];
        while (2) {
          v11 += 24;
          while (1) {
            v15 = v11 - 24;
            if (v14 >= ((__int64)*(__int16*)(v11 - 22) << 24) +
                           ((__int64)*(__int16*)(v11 - 24) << 32) +
                           ((__int64)*(__int16*)(v11 - 20) << 18) +
                           ((__int64)*(__int16*)(v11 - 18) << 12) +
                           ((__int64)*(__int16*)(v11 - 16) << 6) +
                           *(__int16*)(v11 - 14)) {
              break;
            }
            v11 += 24;
            if (v15 + 24 == v12) {
              if ((v13 & 1) == 0) {
                goto LABEL_41;
              }
              goto LABEL_28;
            }
          }
          result = *(_QWORD*)(**(_QWORD**)(v11 - 8) + 328LL);
          if (result != 0 && *(_BYTE*)result != 0) {
            v22[1] = *(_QWORD*)(**(_QWORD**)(v11 - 8) + 328LL);
            v22[0] = game_HashString(result);
            result = game_VariableManager_SetFlag(v22, 1);
          }
          v13 = 1;
          *(_QWORD*)(v11 - 8) = 0;
          if (v11 != v12) {
            continue;
          }
          break;
        }
      LABEL_28:
        v16 = (__int64*)v2[10];
        v17 = (__int64*)v2[11];
        if (v16 != v17) {
          while (v16[2] != 0) {
            v16 += 3;
            if (v16 == v17) {
              goto LABEL_41;
            }
          }
        }
        if (v16 != v17) {
          v18 = v16 + 3;
          if (v16 + 3 != v17) {
            do {
              if (v18[2] != 0) {
                v19 = *v18;
                v20 = v18[2];
                v16[1] = v18[1];
                v16[2] = v20;
                *v16 = v19;
                v16 += 3;
              }
              v18 += 3;
            } while (v18 != v17);
            v17 = (__int64*)v2[11];
          }
        }
        if (v16 != v17) {
          v2[11] = v16;
        }
      }
    LABEL_41:
      v21 = *(_QWORD*)v5;
      *(_DWORD*)(v6 + 8) = *((_DWORD*)v5 + 2);
      *(_QWORD*)v6 = v21;
    }
  }
  return result;
}

#pragma GCC visibility pop
