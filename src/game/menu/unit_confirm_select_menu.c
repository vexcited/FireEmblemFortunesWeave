#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Alignment_56b600(_QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_97b2f0(_QWORD);
__int64 ui_LayoutAccessor_FindAlignment(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 GameData_225d4e8;
__int64 UnitConfirmSelectMenu_Unknown84(__int64 result);
__int64 UnitConfirmSelectMenu_Unknown100(__int64 a1);
void GameRoutine_19edd80();
void GameRoutine_19ee0c0();
__int64 UnitConfirmSelectMenu_Unknown144(__int64 a1, unsigned int a2, char a3,
                                         char a4);
__int64 UnitConfirmSelectMenu_Unknown11(__int64 a1, unsigned int a2, char a3,
                                        char a4);

__int64 UnitConfirmSelectMenu_Unknown84(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if (GameData_225d4e8 != 0) {
    v1 = result;
    v2 = 880;
    if (*(_BYTE*)(GameData_225d4e8 + 276) == 1) {
      v2 = 712;
    }
    v3 = GameRoutine_97b2f0(*(_QWORD*)(GameData_225d4e8 + v2));
    if (v3 != 0) {
      v4 = v3;
      v5 = ui_LayoutAccessor_FindTextBox(v1 + 952, "T_Check00_UnitName");
      if (v5 != 0) {
        GameRoutine_156c5d0(v5, v4, 0);
      }
    }
    result = ui_LayoutAccessor_FindAlignment(v1 + 952, "A_Name");
    if (result != 0) {
      return Alignment_56b600(result);
    }
  }
  return result;
}

__int64 UnitConfirmSelectMenu_Unknown144(__int64 a1, unsigned int a2, char a3,
                                         char a4)
{
  __int64 v4;
  int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  _QWORD* v15;
  int v16;
  _QWORD* v17;
  _QWORD* v18;
  int v19;
  __int64 v20;

  v4 = a1 + 176;
  v9 = (**(__int64 (***)(__int64))(a1 + 176))(a1 + 176);
  v10 = a3 & 1;
  v11 = a4 & 1;
  if (v9 != 0) {
    v12 = ((__int64 (*)(__int64, _QWORD, __int64, __int64))GameRoutine_19ee0c0)(
        v4, a2, v10, v11);
  }
  else {
    v12 = ((__int64 (*)(__int64, _QWORD, __int64, __int64))GameRoutine_19edd80)(
        v4, a2, v10, v11);
  }
  v13 = v12;
  v14 = (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 176) + 16LL))(v4);
  v15 = *(_QWORD**)(a1 + 184);
  v16 = v14;
  v17 = (_QWORD*)v15[29];
  v18 = (_QWORD*)v15[30];
  if (v17 != v18) {
    v19 = 0;
    do {
      v20 = *v17;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v17 + 48LL))(*v17) & 1) != 0) {
        if (v20 == v15[42]) {
          goto LABEL_11;
        }
        ++v19;
      }
      ++v17;
    } while (v17 != v18);
  }
  v19 = -1;
LABEL_11:
  *(_DWORD*)(a1 + 192) = v19 % v16;
  return v13;
}

__int64 UnitConfirmSelectMenu_Unknown11(__int64 a1, unsigned int a2, char a3,
                                        char a4)
{
  int v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  int v13;
  _QWORD* v14;
  int v15;
  _QWORD* v16;
  _QWORD* v17;
  int v18;
  __int64 v19;

  v8 = (**(__int64 (***)(__int64))a1)(a1);
  v9 = a3 & 1;
  v10 = a4 & 1;
  if (v8 != 0) {
    v11 = ((__int64 (*)(__int64, _QWORD, __int64, __int64))GameRoutine_19ee0c0)(
        a1, a2, v9, v10);
  }
  else {
    v11 = ((__int64 (*)(__int64, _QWORD, __int64, __int64))GameRoutine_19edd80)(
        a1, a2, v9, v10);
  }
  v12 = v11;
  v13 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 16LL))(a1);
  v14 = *(_QWORD**)(a1 + 8);
  v15 = v13;
  v16 = (_QWORD*)v14[29];
  v17 = (_QWORD*)v14[30];
  if (v16 != v17) {
    v18 = 0;
    do {
      v19 = *v16;
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v16 + 48LL))(*v16) & 1) != 0) {
        if (v19 == v14[42]) {
          goto LABEL_11;
        }
        ++v18;
      }
      ++v16;
    } while (v16 != v17);
  }
  v18 = -1;
LABEL_11:
  *(_DWORD*)(a1 + 16) = v18 % v15;
  return v12;
}

__int64 UnitConfirmSelectMenu_Unknown100(__int64 a1)
{
  __int64 v1;
  int v2;
  __int64 result;
  int v4;
  int v5;

  if (GameData_225d4e8 == 0) {
    return 0;
  }
  v1 = *(_QWORD*)(a1 + 336);
  if (v1 == 0) {
    return 0;
  }
  v2 = *(_DWORD*)(v1 + 40);
  result = 2;
  if (v2 == 1) {
    v4 = 0;
  }
  else {
    v4 = 7;
  }
  if (v2 == 2) {
    v5 = 5;
  }
  else {
    v5 = v4;
  }
  *(_DWORD*)(GameData_225d4e8 + 152) = v5;
  return result;
}

#pragma GCC visibility pop
