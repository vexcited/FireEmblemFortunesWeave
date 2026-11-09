#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_212c6c0[2];
extern __int64 GameData_212c6c8;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
__int64 ProcCalendarWatcher_Unknown3(__int64 result);

__int64 ProcCalendarWatcher_Unknown3(__int64 result)
{
  unsigned __int16* v1;
  int v2;
  int v3;
  __int64 v4;
  unsigned int v5;
  unsigned __int16* v6;
  int v7;
  int v8;
  unsigned int v10;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  if (*(_QWORD*)GameData_212c6c8 != 0) {
    if (game_gmap_GmapClock_instance_ != 0) {
      v1 = (unsigned __int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v1 = (unsigned __int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v2 = *v1;
    if (*(unsigned __int16*)(result + 152) == v2) {
      v3 = v1[1];
      if (*(unsigned __int16*)(result + 154) == v3) {
        LOBYTE(v3) = *(_WORD*)(result + 154);
        if (*(unsigned __int16*)(result + 156) == v1[2]) {
          return result;
        }
      }
    }
    else {
      LOWORD(v3) = v1[1];
    }
    v4 = *(_QWORD*)GameData_212c6c0[0];
    v5 = ((unsigned __int8)v3 << 8) | (v2 << 16) | *((unsigned __int8*)v1 + 4);
    v6 = (unsigned __int16*)(*(_QWORD*)GameData_212c6c0[0] + 88LL);
    v7 = *v6;
    v8 = *(unsigned __int8*)(*(_QWORD*)GameData_212c6c0[0] + 90LL);
    if (*v6 != 0 && v8 != 0) {
      v10 = *(unsigned __int8*)(v4 + 91);
      if (*(_BYTE*)(v4 + 91) != 0 && ((v7 << 16) | (v8 << 8) | v10) < v5) {
        v12 = *(_QWORD*)(v4 + 16);
        v13 = *(_QWORD*)(v4 + 24);
        if (v12 != v13) {
          while (v7 != *(unsigned __int16*)(v12 + 4) ||
                 v8 != *(unsigned __int8*)(v12 + 6) ||
                 v10 != *(unsigned __int8*)(v12 + 7)) {
            v12 += 368;
            if (v12 == v13) {
              goto LABEL_27;
            }
          }
        }
        if (v12 != v13 && v12 != 0) {
          *(_BYTE*)v12 &= ~1u;
        }
      LABEL_27:
        *((_BYTE*)v6 + 4) = 0;
        *(_DWORD*)v6 = 0;
      }
    }
    v14 = *(unsigned __int16*)(v4 + 94);
    v15 = *(unsigned __int8*)(v4 + 96);
    if (*(_WORD*)(v4 + 94) != 0 && v15 != 0) {
      v17 = *(unsigned __int8*)(v4 + 97);
      if (*(_BYTE*)(v4 + 97) != 0 && ((v14 << 16) | (v15 << 8) | v17) < v5) {
        v18 = *(_QWORD*)(v4 + 16);
        v19 = *(_QWORD*)(v4 + 24);
        if (v18 != v19) {
          while (v14 != *(unsigned __int16*)(v18 + 4) ||
                 v15 != *(unsigned __int8*)(v18 + 6) ||
                 v17 != *(unsigned __int8*)(v18 + 7)) {
            v18 += 368;
            if (v18 == v19) {
              goto LABEL_43;
            }
          }
        }
        if (v18 != v19 && v18 != 0) {
          *(_BYTE*)v18 &= ~1u;
        }
      LABEL_43:
        *(_BYTE*)(v4 + 98) = 0;
        *(_DWORD*)(v4 + 94) = 0;
      }
    }
    v20 = v4 + 100;
    v21 = *(unsigned __int16*)(v4 + 100);
    v22 = *(unsigned __int8*)(v4 + 102);
    if (*(_WORD*)(v4 + 100) != 0 && v22 != 0) {
      v24 = *(unsigned __int8*)(v4 + 103);
      if (*(_BYTE*)(v4 + 103) != 0 && ((v21 << 16) | (v22 << 8) | v24) < v5) {
        v26 = *(_QWORD*)(v4 + 16);
        v25 = *(_QWORD*)(v4 + 24);
        if (v26 != v25) {
          while (v21 != *(unsigned __int16*)(v26 + 4) ||
                 v22 != *(unsigned __int8*)(v26 + 6) ||
                 v24 != *(unsigned __int8*)(v26 + 7)) {
            v26 += 368;
            if (v26 == v25) {
              goto LABEL_59;
            }
          }
        }
        if (v26 != v25 && v26 != 0) {
          *(_BYTE*)v26 &= ~1u;
        }
      LABEL_59:
        *(_BYTE*)(v20 + 4) = 0;
        *(_DWORD*)v20 = 0;
      }
    }
    v27 = *(_QWORD*)v1;
    *(_DWORD*)(result + 160) = *((_DWORD*)v1 + 2);
    *(_QWORD*)(result + 152) = v27;
  }
  return result;
}

#pragma GCC visibility pop
