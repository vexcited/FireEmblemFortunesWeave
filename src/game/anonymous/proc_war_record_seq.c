#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_game_setting_ptr;
extern int GameData_2272778;
__int64 ProcWarRecordSeq_Unknown2(__int64 result);

__int64 ProcWarRecordSeq_Unknown2(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  __int64* v4;
  __int64* v5;
  int v6;
  int v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned int v10;
  bool v11;
  int v12;
  float v14;
  float v15;
  int v16;
  int v17;
  __int64 v18;

  v1 = result;
  if (game_ProcGameSkipView_instance_ != 0 &&
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
      (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v3 = 2)
           : (v3 = 3),
       (v3 & v2) == 0)) {
    v18 = *(_QWORD*)(result + 8);
    if (v18 != 0) {
      while (1) {
        if (*(_BYTE*)v18 == 2) {
          if (*(_DWORD*)(v18 + 32) == 1) {
            *(_QWORD*)(result + 16) = v18;
            *(_WORD*)(result + 136) &= ~0x80u;
            return result;
          }
        }
        else if (*(_BYTE*)v18 == 0) {
          return result;
        }
        v18 += 64;
      }
    }
  }
  else {
    v4 = *(__int64**)(result + 176);
    v5 = *(__int64**)(result + 184);
    if ((*(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 9) != 0) {
      v6 = 16;
    }
    else {
      v6 = 1;
    }
    if (v4 == v5) {
      v15 = *(float*)(result + 200);
      v14 = *(float*)(result + 204);
      v16 = v6 & 1;
      if ((*(_DWORD*)(*(_QWORD*)game_g_game_setting_ptr + 944LL) & 9) != 0) {
        v17 = v6 & 0x10;
        do {
          v17 -= 8;
          v15 =
              v14 +
              (float)(v14 +
                      (float)(v14 +
                              (float)(v14 +
                                      (float)(v14 +
                                              (float)(v14 +
                                                      (float)(v14 +
                                                              (float)(v14 +
                                                                      v15)))))));
        } while (v17 != 0);
      }
      if ((v6 & 1) != 0) {
        do {
          v15 = v14 + v15;
          --v16;
        } while (v16 != 0);
      }
      *(float*)(result + 200) = v15;
    }
    else {
      v7 = 0;
      while (1) {
        *(float*)(v1 + 200) = *(float*)(v1 + 204) + *(float*)(v1 + 200);
        if (v4 != v5) {
          do {
            v8 = *v4;
            v4 += 2;
            result = (*(__int64 (**)(__int64, float))(*(_QWORD*)v8 + 32LL))(
                v8, *(float*)(v1 + 200));
          } while (v4 != v5);
          v4 = *(__int64**)(v1 + 176);
          v5 = *(__int64**)(v1 + 184);
        }
        if (v5 != v4 &&
            (float)((float)(*(float*)(*(v5 - 2) + 12) -
                            *(float*)(*(v5 - 2) + 20)) +
                    *(float*)(v1 + 200)) > (float)(GameData_2272778 + 16)) {
          break;
        }
        if (++v7 == v6) {
          return result;
        }
      }
      v9 = *(unsigned __int8**)(v1 + 16);
      if (v9 != nullptr) {
        v10 = *v9;
        v11 = v10 > 0x10;
        v12 = (1 << v10) & 0x1CE00;
        if (!v11 && v12 != 0) {
          *(_WORD*)(v1 + 136) |= 0x80u;
        }
      }
      *(_WORD*)(v1 + 136) |= 8u;
    }
  }
  return result;
}

#pragma GCC visibility pop
