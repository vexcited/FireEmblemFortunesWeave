#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GaugeUtil_174e4e0(__int64, int);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 LayoutAccessor_1563c50(__int64 result, __int64, char, float);
bool LayoutAccessor_1563380(__int64*, __int64, char);
extern __int64 game_g_frame_clock;
__int64 game_telop_17ca800(__int64 result);

__int64 game_telop_17ca800(__int64 result)
{
  int v1;
  __int64 v2;
  __int64 v3;
  float v4;
  float v5;
  float v6;
  __int64 v7;

  v1 = *(_DWORD*)(result + 448);
  v2 = result;
  switch (v1) {
  case 3:
    result = LayoutAccessor_1563280(*(__int64**)(result + 8), 0, 0);
    if ((result & 1) == 0) {
      v3 = *(_QWORD*)(v2 + 8);
      *(_BYTE*)(v2 + 102) = 0;
      *(_QWORD*)(v2 + 24) = 0;
      *(_QWORD*)(v2 + 32) = 0;
      *(_QWORD*)(v2 + 48) = 0;
      *(_QWORD*)(v2 + 56) = 0;
      *(_DWORD*)(v2 + 16) = -1;
      LayoutAccessor_1563c50(v3, (__int64)"Out", 0, 0x1.0000000000000p+0f);
      result = LayoutAccessor_155e830(*(_QWORD*)(v2 + 8), 0);
      *(_DWORD*)(v2 + 448) = 0;
    }
    break;
  case 2:
    if ((unsigned int)(*(_DWORD*)(result + 16) - 3) > 1) {
      result = 0;
    }
    else {
      result = GaugeUtil_174e4e0(result + 264, 1);
    }
    v4 = 0x1.e000000000000p+5f / (float)*(int*)(game_g_frame_clock + 476);
    if (v4 <= 0x0.0p+0f) {
      v5 = -0x1.119ce00000000p-6f;
    }
    else {
      v5 = v4 * -0x1.119ce00000000p-6f;
    }
    v6 = *(float*)(v2 + 452) + (float)(v5 * 0x1.f400000000000p+9f);
    *(float*)(v2 + 452) = v6;
    if ((result & 1) == 0 && v6 <= 0x0.0p+0f) {
      v7 = *(_QWORD*)(v2 + 8);
      *(_DWORD*)(v2 + 448) = 3;
      return GameHr_1562680(v7, "Out", 0x1.0000000000000p+0f);
    }
    break;
  case 1:
    result = ((__int64 (*)(__int64*, __int64, char))LayoutAccessor_1563380)(
        *(__int64**)(result + 8), 0, 0);
    if ((result & 1) != 0) {
      *(_DWORD*)(v2 + 448) = 2;
    }
    break;
  default:
    break;
  }
  return result;
}

#pragma GCC visibility pop
