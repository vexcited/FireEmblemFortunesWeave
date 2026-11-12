#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_19089c0(PSEUDO_X8, __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_1908c60(PSEUDO_X8, __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_1908f00(PSEUDO_X8, __int64,
                                                    __int64);
__attribute__((swiftcall)) void GameRoutine_19091a0(PSEUDO_X8, __int64,
                                                    __int64);
__int64 GameRoutine_1905b00();
__int64 GameRoutine_1905b10();
__int64 GameRoutine_1905b70();
__int64 GameRoutine_1905b80();
__int64 GameRoutine_19083e0(__int64, unsigned __int64, unsigned __int64,
                            __int64, __int64, __int64);
__int64 GameRoutine_55c190(_QWORD, float, float);
__int64 GameRoutine_5662e0(_QWORD);
__int64 GameRoutine_59d3b0(_QWORD);
__int64 TextBox_566290(_QWORD);
__n128 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_210fb78[])();
extern __int64 (*GameData_210fc28[])();
extern __int64 (*GameData_210fcc8[])();
extern __int64 (*GameData_210fd68[])();
extern __int64 GameData_2265ec0;
extern int GameData_2175a00;
__int64 ui_text_190a4b0(_QWORD** a1, unsigned int a2, unsigned int a3);
__int64 ui_text_190a640(__int64 a1);
__int64 TextBox_566290_alt1(__int64) __asm__("TextBox_566290");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
float GameRoutine_55c190_alt1(__int64, float,
                              float) __asm__("GameRoutine_55c190");
void GameRoutine_19083e0_alt1(__int64, unsigned __int64, unsigned __int64,
                              __int64) __asm__("GameRoutine_19083e0");

__int64 ui_text_190a4b0(_QWORD** a1, unsigned int a2, unsigned int a3)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64 v7;
  float v8;
  __int64 v9;
  unsigned __int64* v10;
  float* v11;
  float v12;
  float v13;
  _QWORD v14[13];
  float v15[70];
  _QWORD v16[13];

  result = GameRoutine_59d3b0(**a1);
  v7 = *(_QWORD*)(GameData_2265ec0 + 8LL * a3);
  if (v7 != 0) {
    v7 = *(_QWORD*)(v7 + 16);
  }
  if (result == v7) {
    v8 = *(float*)a1[1];
    TextBox_566290_alt1((__int64)v16);
    (*(void (**)(_QWORD, _QWORD*))(*(_QWORD*)**a1 + 376LL))(**a1, v16);
    v9 = *(_QWORD*)(GameData_2265ec0 + 8LL * a2);
    if (v9 != 0) {
      v9 = *(_QWORD*)(v9 + 16);
    }
    v16[5] = v9;
    qmemcpy(v14, v16, sizeof(v14));
    memset_alt1((__int64)v15, 0, 0x114u);
    GameRoutine_55c190_alt1((__int64)v14, *(float*)a1[2], *((float*)a1[2] + 1));
    v10 = a1[4];
    LODWORD(v14[8]) = *(_DWORD*)a1[3];
    GameRoutine_19083e0_alt1((__int64)v14, *v10, v10[1], (__int64)v14);
    v11 = (float*)a1[1];
    v12 = v15[3] - v15[1];
    *v11 = v15[2] - v15[0];
    v11[1] = v12;
    v13 = 0x1.0000000000000p+0f;
    if (v8 != 0x0.0p+0f) {
      v13 = *(float*)a1[1] / v8;
    }
    *(float*)a1[5] = v13 * *(float*)a1[5];
    *(float*)a1[6] = v13 * *(float*)a1[6];
    GameRoutine_5662e0(v14);
    return GameRoutine_5662e0(v16);
  }
  return result;
}

__int64 ui_text_190a640(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  _BYTE v11[32];
  _BYTE* v12;
  _BYTE v13[32];
  _BYTE* v14;
  _BYTE v15[32];
  _BYTE* v16;
  _QWORD v17[4];
  _QWORD* v18;
  _BYTE v19[32];
  _BYTE* v20;

  v17[0] = GameData_210fb78;
  v17[1] = GameRoutine_1905b00;
  v18 = v17;
  GameRoutine_19089c0((void*)((__int64)v19), a1, (__int64)v17);
  if (v20 == v19) {
    v2 = 32;
  }
  else {
    if (v20 == nullptr) {
      goto LABEL_6;
    }
    v2 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v20 + v2))((__int64)v20);
LABEL_6:
  if (v18 == v17) {
    v3 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_11;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v18 + v3))((__int64)v18);
LABEL_11:
  v17[0] = GameData_210fc28;
  v17[1] = GameRoutine_1905b10;
  v18 = v17;
  GameRoutine_1908c60((void*)((__int64)v15), a1, (__int64)v17);
  if (v16 == v15) {
    v4 = 32;
  }
  else {
    if (v16 == nullptr) {
      goto LABEL_16;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v16 + v4))((__int64)v16);
LABEL_16:
  if (v18 == v17) {
    v5 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_21;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v18 + v5))((__int64)v18);
LABEL_21:
  v17[0] = GameData_210fcc8;
  v17[1] = GameRoutine_1905b70;
  v18 = v17;
  GameRoutine_1908f00((void*)((__int64)v13), a1, (__int64)v17);
  if (v14 == v13) {
    v6 = 32;
  }
  else {
    if (v14 == nullptr) {
      goto LABEL_26;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v14 + v6))((__int64)v14);
LABEL_26:
  if (v18 == v17) {
    v7 = 32;
  }
  else {
    if (v18 == nullptr) {
      goto LABEL_31;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v18 + v7))((__int64)v18);
LABEL_31:
  v17[0] = GameData_210fd68;
  v17[1] = GameRoutine_1905b80;
  v18 = v17;
  GameRoutine_19091a0((void*)((__int64)v11), a1, (__int64)v17);
  if (v12 == v11) {
    v8 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_36;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v12 + v8))((__int64)v12);
LABEL_36:
  result = (__int64)v18;
  if (v18 == v17) {
    v10 = 32;
    goto LABEL_40;
  }
  if (v18 != nullptr) {
    v10 = 40;
  LABEL_40:
    result = (*(__int64 (**)(__int64))(*v18 + v10))((__int64)v18);
  }
  GameData_2175a00 = 1061075026;
  return result;
}

#pragma GCC visibility pop
