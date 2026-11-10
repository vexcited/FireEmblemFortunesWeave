#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_BYTE* ProcInst_657a50(__int64, char);
__int64* GameRoutine_112f900(__int64* result, __int64, char);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__n128 GameRoutine_112f550(_QWORD*, __int64*, __n128 result);
extern __int64* GameData_212d460[6];
extern __int64* game_talk_g_window_layout_ptr[5];
extern __int64 GameData_21ca070;
extern __int64 game_ProcGameSkipView_instance_;
void LayoutAccessor_1562680(__int64*, __int64, float);
__int64 game_talk_1130300(__int64 result);
void game_talk_1130560(__int64 a1, __n128 a2);
__int64 game_talk_1130630(__int64 result);
__int64 game_talk_1138950(__int64 result);

__int64 game_talk_1130300(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  unsigned __int8* v4;
  unsigned int v5;

  v1 = result;
  if (*GameData_212d460[0] != 0 && *(_BYTE*)(*GameData_212d460[0] + 206) == 1 ||
      game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v3 = 2)
           : (v3 = 3),
       (v3 & v2) != 0)) {
    result = LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                                    (__int64)"In", 1);
    if ((result & 1) == 0) {
      result = LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                                      (__int64)"FaceIn", 1);
      if ((result & 1) == 0) {
        result = LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                                        (__int64)"Out", 1);
        if ((result & 1) == 0) {
          result = LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                                          (__int64)"FaceOut", 1);
          if ((result & 1) == 0) {
            v4 = *(unsigned __int8**)(v1 + 16);
            if (v4 != nullptr) {
              v5 = *v4;
              if (v5 <= 0x10 && ((1 << v5) & 0x1CE00) != 0) {
                *(_WORD*)(v1 + 136) |= 0x80u;
              }
            }
          }
        }
      }
    }
  }
  else if ((*(_WORD*)(result + 136) & 1) == 0) {
    return (__int64)ProcInst_657a50(result, 1);
  }
  return result;
}

void game_talk_1130560(__int64 a1, __n128 a2)
{
  __int64* v3;
  __int64 v4;
  __int64 v5;
  const char* v6;
  __int64 v7;
  __int64 v8;

  v3 = game_talk_g_window_layout_ptr[0];
  GameRoutine_112f550((_QWORD*)(*(_QWORD*)(a1 + 152) + 96LL),
                      game_talk_g_window_layout_ptr[0], a2);
  v4 = *(_QWORD*)(a1 + 152);
  LayoutAccessor_1562680(v3, (__int64)"FaceIn", 0x1.0000000000000p+0f);
  v5 = *(_QWORD*)(v4 + 176);
  if (v5 != 0 && (*(_BYTE*)(v5 + 76) & 1) != 0) {
    v6 = "FaceNoise";
  }
  else {
    v6 = "FaceDefault";
  }
  LayoutAccessor_1562680(game_talk_g_window_layout_ptr[0], (__int64)v6,
                         0x1.0000000000000p+0f);
  v7 = *(unsigned int*)(a1 + 168);
  if ((v7 & 0x80000000) == 0) {
    v8 = *(_QWORD*)(*(_QWORD*)(GameData_21ca070 + 64) + 8 * v7);
    if (v8 != 0) {
      GameRoutine_112f900((__int64*)(*(_QWORD*)(a1 + 152) + 96LL), v8, 0);
    }
  }
}

__int64 game_talk_1130630(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  unsigned __int8* v4;
  unsigned int v5;

  v1 = result;
  if (*GameData_212d460[0] != 0 && *(_BYTE*)(*GameData_212d460[0] + 206) == 1 ||
      game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v3 = 2)
           : (v3 = 3),
       (v3 & v2) != 0)) {
    result = LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                                    (__int64)"In", 1);
    if ((result & 1) == 0) {
      result = LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                                      (__int64)"FaceIn", 1);
      if ((result & 1) == 0) {
        result = LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                                        (__int64)"Out", 1);
        if ((result & 1) == 0) {
          result = LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                                          (__int64)"FaceOut", 1);
          if ((result & 1) == 0) {
            v4 = *(unsigned __int8**)(v1 + 16);
            if (v4 != nullptr) {
              v5 = *v4;
              if (v5 <= 0x10 && ((1 << v5) & 0x1CE00) != 0) {
                *(_WORD*)(v1 + 136) |= 0x80u;
              }
            }
          }
        }
      }
    }
  }
  else if ((*(_WORD*)(result + 136) & 1) == 0) {
    return (__int64)ProcInst_657a50(result, 1);
  }
  return result;
}

__int64 game_talk_1138950(__int64 result)
{
  __int64 v1;
  unsigned __int8* v2;
  unsigned int v3;
  bool v4;
  int v5;

  v1 = result;
  if (*GameData_212d460[0] == 0 ||
      ((result = LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                                        (__int64)"In", 1)) &
       1) == 0 &&
          ((result = LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                                            (__int64)"FaceIn", 1)) &
           1) == 0 &&
          ((result = LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                                            (__int64)"Out", 1)) &
           1) == 0 &&
          ((result = LayoutAccessor_1563280(game_talk_g_window_layout_ptr[0],
                                            (__int64)"FaceOut", 1)) &
           1) == 0) {
    v2 = *(unsigned __int8**)(v1 + 16);
    if (v2 != nullptr) {
      v3 = *v2;
      v4 = v3 > 0x10;
      v5 = (1 << v3) & 0x1CE00;
      if (!v4 && v5 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
