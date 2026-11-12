#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Pane_58f8a0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 GameData_212d690;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 Dialog_1649290(__int64 result, __int64 a2, __int64 a3,
                       unsigned __int8* a4);
__int64 Pane_58f8a0_alt1(__int64) __asm__("Pane_58f8a0");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
__int64 ui_LayoutAccessor_SetPaneVisible_alt1(
    __int64 result, __int64, char) __asm__("ui_LayoutAccessor_SetPaneVisible");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_190a0c0_alt1(float*, __int64, float*, _QWORD*,
                              __int64) __asm__("GameRoutine_190a0c0");

__int64 Dialog_1649290(__int64 result, __int64 a2, __int64 a3,
                       unsigned __int8* a4)
{
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v9;
  char* v10;
  __int64* v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  int v18;
  int v19;
  char v20;
  float v21;
  float v22;
  float v23;
  int v24;
  __int64 v25;
  int v26;
  int v27;
  int v28;
  struct {
    _QWORD v29[4];
    int v30;
    int v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
  } v29_;
  float v45;
  _DWORD v46[2];

  v4 = *a4;
  v5 = *((_QWORD*)a4 + 1);
  if ((v4 & 1) == 0) {
    v5 = v4 >> 1;
  }
  if (v5 != 0) {
    v9 = result;
    if ((v4 & 1) != 0) {
      v10 = *((char**)a4 + 2);
    }
    else {
      v10 = (char*)(a4 + 1);
    }
    if (a4[25] == 1) {
      if (a2 == 0) {
        goto LABEL_25;
      }
      v11 = (__int64*)(result + 952);
      ui_LayoutAccessor_SetPaneVisible_alt1(result + 952, a2, 0);
      if (v10 == nullptr || *v10 == 0) {
        goto LABEL_25;
      }
    }
    else {
      if (a2 == 0 ||
          (v11 = (__int64*)(result + 952),
           ui_LayoutAccessor_SetPaneVisible_alt1(result + 952, a2, 0),
           v10 == nullptr) ||
          *v10 == 0) {
      LABEL_25:
        result = ui_LayoutAccessor_FindPane_alt1((__int64*)(v9 + 952), a2);
        if (result != 0) {
          result =
              __dynamic_cast(result, GameData_212d670[0], GameData_212d690, 0);
          if (result != 0) {
            v21 = *(float*)(result + 252);
            v22 = *(float*)(result + 84);
            v23 = *(float*)(result + 52);
            v24 = a4[24];
            v25 = Pane_58f8a0_alt1(result);
            if (v25 != 0) {
              if (v24 != 0) {
                v26 = -16378429;
              }
              else {
                v26 = -5907969;
              }
              *(_DWORD*)(v25 + 12) = v26;
            }
            result = ui_LayoutAccessor_FindPane_alt1((__int64*)(v9 + 848), a3);
            if (result != 0) {
              result = __dynamic_cast(result, GameData_212d670[0],
                                      GameData_212d678[0], 0);
              if (result != 0) {
                *(_BYTE*)(result + 88) |= 0x10u;
                *(float*)(result + 52) =
                    v23 +
                    (float)((float)((int)(float)(v22 / v21) - 1) *
                            (float)((float)(v22 /
                                            (float)(int)(float)(v22 / v21)) *
                                    0x1.0000000000000p-1f));
                v27 = a4[24];
                result = Pane_58f8a0_alt1(result);
                if (result != 0) {
                  if (v27 != 0) {
                    v28 = -16378429;
                  }
                  else {
                    v28 = -5907969;
                  }
                  *(_DWORD*)(result + 12) = v28;
                }
              }
            }
          }
        }
        return result;
      }
      v29_.v32 = -1;
      v29_.v33 = -1;
      v29_.v34 = -1;
      v29_.v35 = -1;
      v12 = *msg_MessageManager_instance__ptr[0];
      v29_.v36 = -1;
      v29_.v37 = -1;
      v29_.v38 = -1;
      v29_.v39 = -1;
      v29_.v40 = -1;
      v29_.v41 = -1;
      v29_.v42 = -1;
      v29_.v43 = -1;
      v29_.v29[0] = GameData_212e348 + 2;
      v29_.v29[1] = 0xFFFF0001FFFF0000LL;
      v29_.v29[2] = 0xFFFF0004FFFF0002LL;
      v29_.v29[3] = 0xFFFF0006FFFF0005LL;
      v29_.v44 = 8;
      v29_.v30 = -65529;
      v29_.v31 = -65528;
      v13 = GameRoutine_a4dbe0_alt1(v12, v10, 0);
      if (v13 == nullptr) {
      LABEL_19:
        v15 = ui_LayoutAccessor_FindTextBox_alt1(v11, a2);
        if (v15 != 0) {
          v16 = v15;
          v17 = (_QWORD*)ui_LayoutAccessor_FindTextBox_alt1(v11, a2);
          if (v17 != nullptr) {
            GameRoutine_190a0c0_alt1((float*)v29_.v29, (__int64)v46, &v45, v17,
                                     v17[27]);
            v18 = v46[0];
            v19 = v46[1];
          }
          else {
            v18 = 0;
            v19 = 0;
          }
          v20 = *(_BYTE*)(v16 + 88);
          *(_DWORD*)(v16 + 80) = v18;
          *(_DWORD*)(v16 + 84) = v19;
          *(_BYTE*)(v16 + 88) = v20 | 0x10;
        }
        ui_LayoutAccessor_SetPaneVisible_alt1((__int64)v11, a2, 1);
        goto LABEL_25;
      }
      v10 = v13;
    }
    v14 = ui_LayoutAccessor_FindTextBox_alt1(v11, a2);
    if (v14 != 0) {
      GameRoutine_156c5d0_alt1(v14, (__int64)v10, 0);
    }
    goto LABEL_19;
  }
  return result;
}

#pragma GCC visibility pop
