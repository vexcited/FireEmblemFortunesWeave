#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64 nn_vi_SetLayerNextHdrExtendedContentLuminanceRangeMetadata(
    __int64, unsigned __int16, unsigned __int16);
__int64 nn_vi_SetLayerNextHdrStandardContentLuminanceRangeMetadata(
    __int64, unsigned __int16, unsigned __int16);
__n128 nn_vi_SetLayerNextHdrContentGamutMetadata(_QWORD, _QWORD);
extern __int64 game_g_frame_clock;
extern int GameData_21675c0;
extern int GameData_21675c4;
extern int GameData_21675c8;
extern int GameData_21675cc;
float exp2f(float);
void task_17d8e00(__int64 a1, int a2, char a3, int a4, unsigned __int16 a5,
                  unsigned __int16 a6);

void task_17d8e00(__int64 a1, int a2, char a3, int a4, unsigned __int16 a5,
                  unsigned __int16 a6)
{

#pragma clang fp contract(off)
  int v6;
  bool v9;
  bool v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  int v18;
  unsigned __int16 v19;
  __n128 v20;
  int v21;
  bool v22;
  int v23;

  v6 = *(_DWORD*)(a1 + 28);
  v9 = *(_BYTE*)(a1 + 24) == (a3 & 1) && v6 == a4;
  if (!v9 || *(unsigned __int16*)(a1 + 32) != a5 ||
      *(unsigned __int16*)(a1 + 34) != a6 ||
      (*(_BYTE*)(a1 + 40) == 1 ? (v10 = *(_DWORD*)(a1 + 36) == a2)
                               : (v10 = false),
       !v10)) {
    v11 = *(float*)(a1 + 44);
    v12 = *(float*)(a1 + 48);
    *(_BYTE*)(a1 + 24) = a3 & 1;
    *(_DWORD*)(a1 + 28) = a4;
    *(_WORD*)(a1 + 32) = a5;
    *(_BYTE*)(a1 + 40) = 1;
    v13 = v12 * 0x1.0000000000000p-1f;
    v14 = v11 * 0x1.0000000000000p-1f;
    *(_WORD*)(a1 + 34) = a6;
    *(_DWORD*)(a1 + 36) = a2;
    *(_BYTE*)(a1 + 3) = a4 == 1;
    *(_BYTE*)(a1 + 2) = a4 == 1;
    v15 = a4 == 1 ? v13 : 0x0.0p+0f;
    v16 = a4 == 1 ? (float)a6 : 0x1.2c00000000000p+8f;
    v17 = exp2f(v14) * 0x1.8000000000000p-1f;
    *(float*)&v18 = v16 * exp2f(v15);
    GameData_21675c0 = COERCE_UNSIGNED_INT((float)(ceilf(v16 * v17)));
    GameData_21675cc = v18;
    GameData_21675c4 = v18;
    if (*(_BYTE*)(a1 + 3) == 1) {
      v19 = *(_WORD*)(a1 + 32);
      nn_vi_SetLayerNextHdrStandardContentLuminanceRangeMetadata(
          *(_QWORD*)(a1 + 16), 0, (int)*(float*)&v18);
      nn_vi_SetLayerNextHdrExtendedContentLuminanceRangeMetadata(
          *(_QWORD*)(a1 + 16), 0, v19);
      v20 = nn_vi_SetLayerNextHdrContentGamutMetadata(*(_QWORD*)(a1 + 16), 1);
      PSEUDO_LOW_LANE128(v20, n128_u16, *(_WORD*)(a1 + 32));
      *(float*)&GameData_21675c8 = (float)LANES128(v20).n128_u32[0];
    }
    if (v6 != a4) {
      if (*(_BYTE*)(a1 + 3) == 1) {
        if (*(_BYTE*)(a1 + 1) != 0) {
          v21 = 6;
          v22 = *(_BYTE*)(a1 + 2) == 0;
          v23 = 4;
          goto LABEL_26;
        }
        v23 = 2;
      }
      else {
        if (*(_BYTE*)(a1 + 1) != 0) {
          v21 = 5;
          v22 = *(_BYTE*)(a1 + 2) == 0;
          v23 = 3;
        LABEL_26:
          if (!v22) {
            v23 = v21;
          }
          goto LABEL_31;
        }
        v23 = 1;
      }
    LABEL_31:
      *(_DWORD*)(game_g_frame_clock + 13244) = v23;
    }
  }
}

#pragma GCC visibility pop
