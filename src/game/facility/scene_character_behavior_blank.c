#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1952360(__int64 result);
extern __int64 game_script_hub_g_frame_counter;
float Cursor_734120(int, int, float, float, float, float);
void SceneCharacterBehaviorBlank_Unknown4(__int64 a1);
__int64 SceneCharacterBehaviorBlank_Unknown7(__int64 result);

void SceneCharacterBehaviorBlank_Unknown4(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  float v2;
  float v3;
  float v4;
  int v5;
  int v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;

  v1 = *(_QWORD*)(a1 + 32);
  if ((*(_BYTE*)(v1 + 136) & 1) == 0) {
    v3 = *(float*)(v1 + 32);
    v2 = *(float*)(v1 + 36);
    v4 = *(float*)(v1 + 48);
    if (v2 >= v3) {
      v11 = *(float*)(v1 + 44);
    }
    else {
      v5 = *(_DWORD*)(v1 + 52);
      v6 = *(_DWORD*)(v1 + 56);
      v7 = v2 +
           (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                           0x1.0aef000000000p+4f) /
                   0x1.f400000000000p+9f);
      if (v3 >= v7) {
        v8 = v7;
      }
      else {
        v8 = *(float*)(v1 + 32);
      }
      v9 = *(float*)(v1 + 40);
      v10 = *(float*)(v1 + 44);
      *(float*)(v1 + 36) = v8;
      v11 = Cursor_734120(v5, v6, v9, v10, v8, v3);
    }
    *(float*)(v1 + 48) = v11;
    if (v11 != v4) {
      GameRoutine_1952360(v1);
    }
  }
}

__int64 SceneCharacterBehaviorBlank_Unknown7(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(result + 32);
  *(_BYTE*)(result + 24) = 0;
  if ((*(_BYTE*)(v1 + 136) & 1) == 0) {
    result = *(_QWORD*)(v1 + 96);
    *(_QWORD*)(v1 + 96) = 0;
    *(_BYTE*)(v1 + 136) = 1;
    if (result == v1 + 64) {
      v2 = 32;
    }
    else {
      if (result == 0) {
        goto LABEL_7;
      }
      v2 = 40;
    }
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v2))((__int64)result);
  LABEL_7:
    v3 = *(_QWORD*)(v1 + 112);
    v4 = *(_QWORD*)(v1 + 120);
    if (v3 == v4) {
    LABEL_8:
      *(_QWORD*)(v1 + 120) = v3;
      return result;
    }
    while (1) {
      result = *(_QWORD*)(v4 - 16);
      *(_QWORD*)(v4 - 16) = 0;
      if (v4 - 48 == result) {
        v6 = 32;
      }
      else {
        if (result == 0) {
          goto LABEL_12;
        }
        v6 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)result + v6))((__int64)result);
      result = *(_QWORD*)(v4 - 16);
      if (v4 - 48 == result) {
        v5 = 32;
      }
      else {
        if (result == 0) {
          goto LABEL_12;
        }
        v5 = 40;
      }
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)result + v5))((__int64)result);
    LABEL_12:
      v4 -= 64;
      if (v4 == v3) {
        goto LABEL_8;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
