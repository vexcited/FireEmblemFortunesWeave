#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;
extern _UNKNOWN GameData_1c17624;
extern _QWORD GameData_1c17778[10];
extern _UNKNOWN* GameData_1f914a8;
extern char* GameData_2104400[11];
extern _UNKNOWN* GameData_2104500;
extern __int64 (*GameData_210a630[])();
extern __int64 GameData_212bf68;
extern __int64* GameData_212c738[2];
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c880[5];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* GameData_212fd50[2];
extern __int64 GameData_21c9f40;
extern __int64 GameData_22416f0;
__int64 GameRoutine_102abb0(_QWORD);
__int64 GameRoutine_13633c0(void);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155f480(_QWORD, _QWORD);
__int64 GameRoutine_1560ec0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15621a0(_QWORD, _QWORD);
__int64 GameRoutine_1562cf0(_QWORD, _QWORD);
__int64 GameRoutine_1563e00(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1573500(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_157e3a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_158ebe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2000(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_15d2830(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e1ce0(_QWORD);
__int64 GameRoutine_1841930(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18a3b90(__int64, int, char, char);
__int64 GameRoutine_18a40e0(__int64*, __int64, int);
__int64 GameRoutine_18a4290(__int64*, int, char);
__int64 GameRoutine_18a4560(__int64, int);
__int64 GameRoutine_18a4810(__int64, int, int, int, __int64, char);
__int64 GameRoutine_18a5bc0(__int64);
void __attribute__((noreturn)) GameRoutine_18abd30(_QWORD);
_BYTE* GameRoutine_18cc630(_BYTE* result);
__int64 GameRoutine_18cdc40(__int64 result);
__int64 GameRoutine_18f4a00(_QWORD);
__int64 GameRoutine_18f9360(__int64);
__int64 GameRoutine_190a0c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a0a0c0(_QWORD);
__int64 GameRoutine_1a0a170(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0a6c0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0b5c0(_QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_56b600(_QWORD);
__int64 GameRoutine_58f8a0(_QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_64dde0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_64df20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6c8530(_QWORD);
__int64 GameRoutine_6d5d00(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6dd190(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_6ed1a0(_QWORD);
__int64 GameRoutine_6fbd80(_QWORD, _QWORD);
__int64 GameRoutine_7a7dc0(const char*, ...);
__int64 GameRoutine_7a86e0(_QWORD);
__int64 GameRoutine_93eed0(_QWORD);
__int64 GameRoutine_93f040(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Alignment_56b600(__int64 result);
__int64 GameRoutine_158ebe0_alt1(__int64, _DWORD*, __int64,
                                 __int64) __asm__("GameRoutine_158ebe0");
__int64 GameRoutine_1841930_alt1(__int64,
                                 __int64) __asm__("GameRoutine_1841930");
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 Pane_58f8a0(__int64);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gameui_anonymous_15d2000(__int64, __int64, __int64);
__int64 game_gameui_anonymous_15d2830(__int64, __int64, __int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameHr_6ed1a0(__int64);
char* GameHr_6fbd80(__int64, int);
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 ui_Manager_instance_;
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_18a5bc0_alt1(__int64) __asm__("GameRoutine_18a5bc0");
void GameRoutine_190a0c0_alt1(float*, __int64, float*, _QWORD*,
                              __int64) __asm__("GameRoutine_190a0c0");
void Util_157e3a0(__int64*, unsigned int*, unsigned int, __int64);
void GameHr_18a6430(__int64 a1, char* a2, char* a3, __int64 a4);
void GameHr_18a7690(__int64 a1, _WORD* a2, __int64 a3, char a4);
void GameHr_18a78d0(__int64 a1, _WORD* a2);
void GameHr_18a80b0(__int64 a1, unsigned int* a2);
void GameHr_18a9f60(__int64 a1);
void GameHr_18aadd0(__int64 a1, _QWORD* a2, char a3);
void GameHr_18ab160(__int64 a1, __int64 a2, char a3);
void GameHr_18ab530(__int64 a1, __int64 a2);
void GameHr_18ab7b0(__int64 a1, unsigned int* a2, __int64 a3, __int64 a4,
                    char a5);

void GameHr_18a6430(__int64 a1, char* a2, char* a3, __int64 a4)
{

#pragma clang fp contract(off)
  char* v7;
  __int64 v8;
  __int64* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  int v20;
  int v21;
  char v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  struct {
    _QWORD v27[2];
    unsigned __int64 v28;
    unsigned __int64 v29;
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
  } v27_;
  float v45;
  _DWORD v46[4];

  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy00", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy01", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  if (a2 != nullptr) {
    v7 = a2;
  }
  else {
    v7 = &GameData_1a9f09e;
  }
  v27_.v32 = -1;
  v27_.v33 = -1;
  v27_.v34 = -1;
  v27_.v35 = -1;
  v8 = *msg_MessageManager_instance__ptr[0];
  v27_.v36 = -1;
  v27_.v37 = -1;
  v27_.v38 = -1;
  v27_.v39 = -1;
  v27_.v40 = -1;
  v27_.v41 = -1;
  v27_.v42 = -1;
  v27_.v43 = -1;
  v27_.v28 = 0xFFFF0004FFFF0002LL;
  v27_.v29 = 0xFFFF0006FFFF0005LL;
  v27_.v30 = -65529;
  v27_.v31 = -65528;
  v9 = GameData_212e348 + 2;
  v27_.v27[0] = GameData_212e348 + 2;
  v27_.v27[1] = 0xFFFF0001FFFF0000LL;
  v27_.v44 = 8;
  v10 = GameRoutine_a4dbe0_alt1(v8, v7, 0);
  if (v10 != nullptr) {
    v11 = (__int64)v10;
    v12 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88), (__int64)"T_Txt");
    if (v12 != 0) {
      GameRoutine_156c5d0_alt1(v12, v11, 0);
    }
  }
  if (a3 == nullptr) {
    a3 = &GameData_1a9f09e;
  }
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_InfoTxt", 1);
  v27_.v32 = -1;
  v27_.v33 = -1;
  v27_.v34 = -1;
  v27_.v35 = -1;
  v27_.v36 = -1;
  v27_.v37 = -1;
  v27_.v38 = -1;
  v27_.v39 = -1;
  v13 = *msg_MessageManager_instance__ptr[0];
  v27_.v40 = -1;
  v27_.v41 = -1;
  v27_.v42 = -1;
  v27_.v43 = -1;
  v27_.v27[0] = v9;
  v27_.v27[1] = 0xFFFF0001FFFF0000LL;
  v27_.v28 = 0xFFFF0004FFFF0002LL;
  v27_.v29 = 0xFFFF0006FFFF0005LL;
  v27_.v30 = -65529;
  v27_.v31 = -65528;
  v27_.v44 = 8;
  v14 = GameRoutine_a4dbe0_alt1(v13, a3, 0);
  if (v14 != nullptr) {
    v15 = (__int64)v14;
    v16 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                        (__int64)"L_InfoTxt/T_Txt");
    if (v16 != 0) {
      GameRoutine_156c5d0_alt1(v16, v15, 0);
    }
  }
  v17 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                      (__int64)"L_InfoTxt/T_Txt");
  if (v17 != 0) {
    v18 = v17;
    v19 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                                 (__int64)"L_InfoTxt/T_Txt");
    if (v19 != nullptr) {
      GameRoutine_190a0c0_alt1((float*)v27_.v27, (__int64)v46, &v45, v19,
                               v19[27]);
      v20 = v46[0];
      v21 = v46[1];
    }
    else {
      v20 = 0;
      v21 = 0;
    }
    v22 = *(_BYTE*)(v18 + 88);
    *(_DWORD*)(v18 + 80) = v20;
    *(_DWORD*)(v18 + 84) = v21;
    *(_BYTE*)(v18 + 88) = v22 | 0x10;
  }
  LayoutAccessor_1562cf0(a1 + 88, "Icon");
  v23 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 88), (__int64)"Icon");
  if (v23 != 0) {
    v24 = __dynamic_cast(v23, GameData_212d670[0], GameData_212d678[0], 0);
    if (v24 != 0) {
      if (a4 != 0) {
        *(_QWORD*)(*(_QWORD*)(Pane_58f8a0(v24) + 24) + 8LL) = a4;
      }
      else {
        Manager_136a920(ui_Manager_instance_ + 1264, v24, 0, 7u, "IconEmpty");
      }
    }
  }
  LayoutAccessor_1562cf0(a1 + 88, "InfoTitleOn");
  LayoutAccessor_1562cf0(a1 + 88, "NumNone");
  LayoutAccessor_1562cf0(a1 + 88, "StatusDetailOff");
  LayoutAccessor_1562cf0(a1 + 88, "StatusOff");
  LayoutAccessor_1562cf0(a1 + 88, "Wdw_TitleOn_Status02");
  v25 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88),
                                        (__int64)"A_InfoDetail");
  if (v25 != 0) {
    Alignment_56b600(v25);
  }
  GameRoutine_18a5bc0_alt1(a1);
}

void GameHr_18a7690(__int64 a1, _WORD* a2, __int64 a3, char a4)
{

#pragma clang fp contract(off)
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  int v15;
  int v16;
  char v17;
  __int64 v18;
  __int64 v19;
  struct {
    _QWORD v20[4];
    int v21;
    int v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
  } v20_;
  float v36;
  _DWORD v37[2];

  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy00", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy01", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  LayoutAccessor_1562cf0(a1 + 88, "InfoTitleOff");
  LayoutAccessor_1562cf0(a1 + 88, "StatusDetailOff");
  LayoutAccessor_1562cf0(a1 + 88, "Wdw_TitleOff_Status08");
  *(_BYTE*)(a1 + 1060) = 1;
  if (*a2 != 0) {
    v8 = GameHr_6ed1a0(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                  8LL * (unsigned __int16)*a2));
    if (v8 == nullptr) {
      goto LABEL_7;
    }
  }
  else {
    ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_InfoTxt", 1);
    v20_.v23 = -1;
    v20_.v24 = -1;
    v20_.v25 = -1;
    v20_.v26 = -1;
    v9 = *msg_MessageManager_instance__ptr[0];
    v20_.v27 = -1;
    v20_.v28 = -1;
    v20_.v29 = -1;
    v20_.v30 = -1;
    v20_.v31 = -1;
    v20_.v32 = -1;
    v20_.v33 = -1;
    v20_.v34 = -1;
    v20_.v20[0] = GameData_212e348 + 2;
    v20_.v20[1] = 0xFFFF0001FFFF0000LL;
    v20_.v20[2] = 0xFFFF0004FFFF0002LL;
    v20_.v20[3] = 0xFFFF0006FFFF0005LL;
    v20_.v35 = 8;
    v20_.v21 = -65529;
    v20_.v22 = -65528;
    v8 = GameRoutine_a4dbe0_alt1(v9, "MID_Sys_ValueEmptyLong", 0);
    if (v8 == nullptr) {
      goto LABEL_7;
    }
  }
  v10 = (__int64)v8;
  v11 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                      (__int64)"L_InfoTxt/T_Txt");
  if (v11 != 0) {
    GameRoutine_156c5d0_alt1(v11, v10, 0);
  }
LABEL_7:
  v12 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                      (__int64)"L_InfoTxt/T_Txt");
  if (v12 != 0) {
    v13 = v12;
    v14 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                                 (__int64)"L_InfoTxt/T_Txt");
    if (v14 != nullptr) {
      GameRoutine_190a0c0_alt1((float*)v20_.v20, (__int64)v37, &v36, v14,
                               v14[27]);
      v15 = v37[0];
      v16 = v37[1];
    }
    else {
      v15 = 0;
      v16 = 0;
    }
    v17 = *(_BYTE*)(v13 + 88);
    *(_DWORD*)(v13 + 80) = v15;
    *(_DWORD*)(v13 + 84) = v16;
    *(_BYTE*)(v13 + 88) = v17 | 0x10;
  }
  v18 = a1 + 88;
  if ((a4 & 1) != 0) {
    game_gameui_anonymous_15d2830(v18, (__int64)a2, a3);
  }
  else {
    game_gameui_anonymous_15d2000(v18, (__int64)a2, a3);
  }
  v19 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88),
                                        (__int64)"A_InfoDetail");
  if (v19 != 0) {
    Alignment_56b600(v19);
  }
  GameRoutine_18a5bc0_alt1(a1);
}

void GameHr_18a78d0(__int64 a1, _WORD* a2)
{

#pragma clang fp contract(off)
  char* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  int v11;
  int v12;
  char v13;
  __int64 v14;
  struct {
    _QWORD v15[4];
    int v16;
    int v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
  } v15_;
  float v31;
  _DWORD v32[2];

  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy00", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy01", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  if (*a2 != 0) {
    v4 = GameHr_6ed1a0(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                  8LL * (unsigned __int16)*a2));
    if (v4 == nullptr) {
      goto LABEL_7;
    }
  }
  else {
    ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_InfoTxt", 1);
    v15_.v18 = -1;
    v15_.v19 = -1;
    v15_.v20 = -1;
    v15_.v21 = -1;
    v5 = *msg_MessageManager_instance__ptr[0];
    v15_.v22 = -1;
    v15_.v23 = -1;
    v15_.v24 = -1;
    v15_.v25 = -1;
    v15_.v26 = -1;
    v15_.v27 = -1;
    v15_.v28 = -1;
    v15_.v29 = -1;
    v15_.v15[0] = GameData_212e348 + 2;
    v15_.v15[1] = 0xFFFF0001FFFF0000LL;
    v15_.v15[2] = 0xFFFF0004FFFF0002LL;
    v15_.v15[3] = 0xFFFF0006FFFF0005LL;
    v15_.v30 = 8;
    v15_.v16 = -65529;
    v15_.v17 = -65528;
    v4 = GameRoutine_a4dbe0_alt1(v5, "MID_Sys_ValueEmptyLong", 0);
    if (v4 == nullptr) {
      goto LABEL_7;
    }
  }
  v6 = (__int64)v4;
  v7 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                     (__int64)"L_InfoTxt/T_Txt");
  if (v7 != 0) {
    GameRoutine_156c5d0_alt1(v7, v6, 0);
  }
LABEL_7:
  v8 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                     (__int64)"L_InfoTxt/T_Txt");
  if (v8 != 0) {
    v9 = v8;
    v10 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                                 (__int64)"L_InfoTxt/T_Txt");
    if (v10 != nullptr) {
      GameRoutine_190a0c0_alt1((float*)v15_.v15, (__int64)v32, &v31, v10,
                               v10[27]);
      v11 = v32[0];
      v12 = v32[1];
    }
    else {
      v11 = 0;
      v12 = 0;
    }
    v13 = *(_BYTE*)(v9 + 88);
    *(_DWORD*)(v9 + 80) = v11;
    *(_DWORD*)(v9 + 84) = v12;
    *(_BYTE*)(v9 + 88) = v13 | 0x10;
  }
  LayoutAccessor_1562cf0(a1 + 88, "InfoTitleOff");
  LayoutAccessor_1562cf0(a1 + 88, "StatusDetailOff");
  LayoutAccessor_1562cf0(a1 + 88, "StatusOff");
  LayoutAccessor_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  v14 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88),
                                        (__int64)"A_InfoDetail");
  if (v14 != 0) {
    Alignment_56b600(v14);
  }
  GameRoutine_18a5bc0_alt1(a1);
}

void GameHr_18a80b0(__int64 a1, unsigned int* a2)
{

#pragma clang fp contract(off)
  unsigned int v4;
  __int64 v5;
  char* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  int v13;
  int v14;
  char v15;
  __int64 v16;
  struct {
    _QWORD v17[4];
    int v18;
    int v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v17_;
  float v33;
  _DWORD v34[2];

  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy00", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy01", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  v4 = *a2;
  if ((*a2 & 0xFFF) != 0) {
    v5 = *(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) + 8LL * (v4 & 0xFFF));
    if (v5 == 0) {
      goto LABEL_8;
    }
    v6 = GameHr_6fbd80(v5, *(unsigned __int8*)(v5 + 304) - (HIBYTE(v4) & 0x1F));
    if (v6 == nullptr) {
      goto LABEL_8;
    }
  }
  else {
    ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_InfoTxt", 1);
    v17_.v20 = -1;
    v17_.v21 = -1;
    v17_.v22 = -1;
    v17_.v23 = -1;
    v7 = *msg_MessageManager_instance__ptr[0];
    v17_.v24 = -1;
    v17_.v25 = -1;
    v17_.v26 = -1;
    v17_.v27 = -1;
    v17_.v28 = -1;
    v17_.v29 = -1;
    v17_.v30 = -1;
    v17_.v31 = -1;
    v17_.v17[0] = GameData_212e348 + 2;
    v17_.v17[1] = 0xFFFF0001FFFF0000LL;
    v17_.v17[2] = 0xFFFF0004FFFF0002LL;
    v17_.v17[3] = 0xFFFF0006FFFF0005LL;
    v17_.v32 = 8;
    v17_.v18 = -65529;
    v17_.v19 = -65528;
    v6 = GameRoutine_a4dbe0_alt1(v7, "MID_Sys_ValueEmptyLong", 0);
    if (v6 == nullptr) {
      goto LABEL_8;
    }
  }
  v8 = (__int64)v6;
  v9 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                     (__int64)"L_InfoTxt/T_Txt");
  if (v9 != 0) {
    GameRoutine_156c5d0_alt1(v9, v8, 0);
  }
LABEL_8:
  v10 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                      (__int64)"L_InfoTxt/T_Txt");
  if (v10 != 0) {
    v11 = v10;
    v12 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                                 (__int64)"L_InfoTxt/T_Txt");
    if (v12 != nullptr) {
      GameRoutine_190a0c0_alt1((float*)v17_.v17, (__int64)v34, &v33, v12,
                               v12[27]);
      v13 = v34[0];
      v14 = v34[1];
    }
    else {
      v13 = 0;
      v14 = 0;
    }
    v15 = *(_BYTE*)(v11 + 88);
    *(_DWORD*)(v11 + 80) = v13;
    *(_DWORD*)(v11 + 84) = v14;
    *(_BYTE*)(v11 + 88) = v15 | 0x10;
  }
  LayoutAccessor_1562cf0(a1 + 88, "InfoTitleOff");
  LayoutAccessor_1562cf0(a1 + 88, "StatusDetailOff");
  LayoutAccessor_1562cf0(a1 + 88, "StatusOff");
  LayoutAccessor_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  v16 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88),
                                        (__int64)"A_InfoDetail");
  if (v16 != 0) {
    Alignment_56b600(v16);
  }
  GameRoutine_18a5bc0_alt1(a1);
}

__int64 GameHr_18a82e0(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  unsigned int v8;
  const char* v9;
  const char* v10;
  const char* v11;
  const char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  bool v21;
  __int64 v22;
  char* v23;
  char* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  char v30;
  int v31;
  int v32;
  __int64 v33;
  int* v34;
  int v35;
  int v36;
  int* v37;
  int v38;
  int v39;
  int v40;
  char v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int* v46;
  int v47;
  int* v48;
  __int64 v49;
  const char* v50;
  __int64 v51;
  bool v52;
  __int64 v53;
  const char* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 result;
  __int64 v61;
  int v62;
  _QWORD v63[3];
  char v64[4];
  _DWORD v65[2];
  int* v66;
  int* v67;
  __int64 v68;

  GameRoutine_1560ec0(a1 + 88, "L_Efficacy00", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy01", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  GameRoutine_1562cf0(a1 + 88, "InfoTitleOff");
  GameRoutine_1562cf0(a1 + 88, "StatusOff");
  GameRoutine_1562cf0(a1 + 88, "StatusOff");
  GameRoutine_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  v8 = 0;
  memset(v63, 0, sizeof(v63));
  switch (a2) {
  case 0u:
    v8 = 32;
    v9 = "MID_H_Sys_Attack";
    goto LABEL_23;
  case 1u:
    GameRoutine_60a020(v63, "MID_H_Sys_Physicalattack");
    v8 = LOBYTE(v63[0]);
    break;
  case 2u:
    v8 = 42;
    v11 = "MID_H_Sys_Magicattack";
    goto LABEL_18;
  case 3u:
    v8 = 42;
    v11 = "MID_H_Sys_Otherattack";
    goto LABEL_18;
  case 0xAu:
    v8 = 26;
    v10 = "MID_H_Sys_Hit";
    goto LABEL_28;
  case 0xBu:
    v8 = 42;
    v11 = "MID_H_Sys_Attackspeed";
    goto LABEL_18;
  case 0xCu:
    v8 = 30;
    LOBYTE(v63[0]) = 30;
    strcpy((char*)v63 + 1, "MID_H_Sys_Avoid");
    break;
  case 0xDu:
    v8 = 36;
    BYTE3(v63[2]) = 0;
    *(_WORD*)((char*)&v63[2] + 1) = 27745;
    v12 = "MID_H_Sys_Critical";
    LOBYTE(v63[0]) = 36;
    goto LABEL_21;
  case 0xEu:
    v8 = 32;
    v9 = "MID_H_Sys_Secure";
  LABEL_23:
    LOBYTE(v63[0]) = 32;
    v17 = *(_QWORD*)v9;
    v16 = *((_QWORD*)v9 + 1);
    BYTE1(v63[2]) = 0;
    goto LABEL_24;
  case 0xFu:
    v8 = 40;
    BYTE5(v63[2]) = 0;
    LOBYTE(v63[0]) = 40;
    *(_DWORD*)((char*)&v63[2] + 1) = 1852795252;
    v12 = "MID_H_Sys_Protection";
  LABEL_21:
    v17 = *(_QWORD*)v12;
    v16 = *((_QWORD*)v12 + 1);
  LABEL_24:
    *(_QWORD*)((char*)v63 + 1) = v17;
    *(_QWORD*)((char*)&v63[1] + 1) = v16;
    break;
  case 0x10u:
    v8 = 42;
    v11 = "MID_H_Sys_Enduremagic";
  LABEL_18:
    LOBYTE(v63[0]) = 42;
    v13 = *(_QWORD*)v11;
    v14 = *((_QWORD*)v11 + 1);
    v15 = *(_QWORD*)(v11 + 13);
    BYTE6(v63[2]) = 0;
    *(_QWORD*)((char*)v63 + 1) = v13;
    *(_QWORD*)((char*)&v63[1] + 1) = v14;
    *(_QWORD*)((char*)&v63[1] + 6) = v15;
    break;
  case 0x11u:
    v8 = 26;
    v10 = "MID_H_Sys_Rng";
    goto LABEL_28;
  case 0x1Cu:
    v8 = 24;
    LOBYTE(v63[0]) = 24;
    strcpy((char*)v63 + 1, "MID_H_Sys_Hp");
    break;
  case 0x1Du:
    v8 = 26;
    v10 = "MID_H_Sys_Str";
    goto LABEL_28;
  case 0x1Eu:
    v8 = 26;
    v10 = "MID_H_Sys_Mag";
    goto LABEL_28;
  case 0x1Fu:
    v8 = 26;
    v10 = "MID_H_Sys_Tec";
    goto LABEL_28;
  case 0x20u:
    v8 = 26;
    v10 = "MID_H_Sys_Spd";
    goto LABEL_28;
  case 0x21u:
    v8 = 26;
    v10 = "MID_H_Sys_Lck";
    goto LABEL_28;
  case 0x22u:
    v8 = 26;
    v10 = "MID_H_Sys_Def";
    goto LABEL_28;
  case 0x23u:
    v8 = 26;
    v10 = "MID_H_Sys_Res";
    goto LABEL_28;
  case 0x24u:
    v8 = 26;
    v10 = "MID_H_Sys_Cha";
    goto LABEL_28;
  case 0x25u:
    v8 = 26;
    v10 = "MID_H_Sys_Mov";
  LABEL_28:
    LOBYTE(v63[0]) = 26;
    v18 = *(_QWORD*)v10;
    v19 = *(_QWORD*)(v10 + 5);
    BYTE6(v63[1]) = 0;
    *(_QWORD*)((char*)v63 + 1) = v18;
    *(_QWORD*)((char*)v63 + 6) = v19;
    break;
  default:
    break;
  }
  v20 = v8 >> 1;
  v21 = (v8 & 1) == 0;
  v22 = v63[1];
  if (v21) {
    v22 = v20;
    v23 = (char*)v63 + 1;
  }
  else {
    v23 = (char*)v63[2];
  }
  if (v22 != 0) {
    v24 = v23;
  }
  else {
    v24 = &GameData_1a9f09e;
  }
  GameRoutine_1560ec0(a1 + 88, "L_InfoTxt", 1);
  GameRoutine_1562060(a1 + 88, "L_InfoTxt/T_Txt", v24);
  v25 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v25 != 0) {
    v26 = v25;
    v27 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v27 != 0) {
      GameRoutine_190a0c0(&v66, v65, v64, v27, *(_QWORD*)(v27 + 216));
      v28 = v65[0];
      v29 = v65[1];
    }
    else {
      v28 = 0;
      v29 = 0;
    }
    v30 = *(_BYTE*)(v26 + 88);
    *(_DWORD*)(v26 + 80) = v28;
    *(_DWORD*)(v26 + 84) = v29;
    *(_BYTE*)(v26 + 88) = v30 | 0x10;
  }
  if (a2 <= 0x25) {
    if (((1LL << a2) & 0x3FC07) != 0) {
      GameRoutine_1562cf0(a1 + 88, "StatusDetail01");
      v31 = GameRoutine_18a3b90(a3, a2, 0, 0);
      v32 = GameRoutine_18a3b90(a3, a2, 1, 0);
      GameRoutine_18a4290((__int64*)(a1 + 88), v31, 1);
      if ((a4 & 1) != 0 || v31 < 0) {
        goto LABEL_93;
      }
      v67 = nullptr;
      v68 = 0;
      v66 = nullptr;
      GameRoutine_18a40e0((__int64*)&v66, a3, a2);
      v33 = (__int64)v66;
      v34 = v67;
      if (v66 == v67) {
        v35 = 1;
        v36 = 0;
      }
      else {
        v35 = 1;
        v36 = 0;
        v37 = v66;
        do {
          if ((unsigned int)*v37 >= 3) {
            GameRoutine_18a4810(a1 + 88, v35++, *v37, v37[1], a3, 1);
            v36 += v37[1];
          }
          v37 += 2;
        } while (v37 != v34);
      }
      if (v32 != v36 + v31) {
        GameRoutine_18a4810(a1 + 88, v35++, 0, v32 - (v36 + v31), a3, 1);
      }
      v49 = GameRoutine_7a7dc0("StatusDetail%02d", v35);
      GameRoutine_1562cf0(a1 + 88, v49);
      v50 = "Wdw_TitleOff_Status04";
      v51 = a1 + 88;
      if (v35 <= 2) {
        v50 = "Wdw_TitleOff_Status02";
      }
      v52 = v35 <= 4;
      goto LABEL_79;
    }
    if (((1LL << a2) & 0x3FF0000000LL) != 0) {
      GameRoutine_1562cf0(a1 + 88, "StatusDetail01");
      v38 = GameRoutine_18a3b90(a3, a2, 0, 1);
      v39 = GameRoutine_18a3b90(a3, a2, 0, 0);
      v40 = GameRoutine_18a3b90(a3, a2, 1, 0);
      if (a2 == 37) {
        v41 = *((_BYTE*)*(&GameData_1f914a8 + *(unsigned __int8*)(a3 + 804)) +
                10);
        v38 = GameRoutine_1573500(a3, 1, 1);
        LOBYTE(v66) = v41;
        v62 = GameRoutine_6dd190(a3, &v66, 1);
      }
      else {
        v62 = v40;
      }
      v42 = GameRoutine_6c8530(a3);
      if (v38 == 0 && v39 != 0 && v42 != 0) {
        v38 = *(__int16*)(v42 + 2LL * GameData_1c17778[a2 - 28] + 288);
      }
      v43 = 1;
      GameRoutine_18a4290((__int64*)(a1 + 88), v38, 1);
      v44 = GameRoutine_6c8530(a3);
      if (v44 != 0) {
        v45 = v44 + 2LL * *((unsigned __int8*)*(&GameData_1f914a8 +
                                                *(unsigned __int8*)(a3 + 804)) +
                            GameData_1c17778[a2 - 28]);
        if (*(_WORD*)(v45 + 310) != 0) {
          GameRoutine_18a4560(a1 + 88, *(__int16*)(v45 + 310));
          v43 = 2;
        }
      }
      if ((a4 & 1) == 0 && (v39 & 0x80000000) == 0) {
        v67 = nullptr;
        v68 = 0;
        v66 = nullptr;
        GameRoutine_18a40e0((__int64*)&v66, a3, a2);
        v33 = (__int64)v66;
        v46 = v67;
        if (v66 == v67) {
          v47 = 0;
        }
        else {
          v47 = 0;
          v48 = v66;
          do {
            if ((unsigned int)*v48 >= 3) {
              GameRoutine_18a4810(a1 + 88, v43++, *v48, v48[1], a3, 0);
              v47 += v48[1];
            }
            v48 += 2;
          } while (v48 != v46);
        }
        if (v62 != v47 + v39) {
          GameRoutine_18a4810(a1 + 88, v43++, 0, v62 - (v47 + v39), a3, 0);
        }
        v53 = GameRoutine_7a7dc0("StatusDetail%02d", v43);
        GameRoutine_1562cf0(a1 + 88, v53);
        v50 = "Wdw_TitleOff_Status04";
        v51 = a1 + 88;
        if (v43 <= 2) {
          v50 = "Wdw_TitleOff_Status02";
        }
        v52 = v43 <= 4;
      LABEL_79:
        if (v52) {
          v54 = v50;
        }
        else {
          v54 = "Wdw_TitleOff_Status08";
        }
        GameRoutine_1562cf0(v51, v54);
        v55 = GameRoutine_1563e00(a1 + 88, "A_StatusDetail");
        if (v55 != 0) {
          GameRoutine_56b600(v55);
          v56 = *(_QWORD*)(a1 + 96);
          if (v56 != 0) {
            v57 = GameRoutine_1a0a0c0(v56);
            if (v57 != 0) {
              v58 = v57;
              if (*(_QWORD*)(a1 + 88) != 0) {
                GameRoutine_13633c0();
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
                GameRoutine_1a09c50(v58);
              }
            }
          }
        }
        if (v33 != 0) {
          v59 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v59 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v59);
        }
      }
    LABEL_93:
      result = GameRoutine_18a5bc0(a1);
      if ((v63[0] & 1) != 0 && v63[2] != 0) {
        v61 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v61 = 56;
        }
        return GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v61);
      }
      return result;
    }
  }
  GameRoutine_18a4290((__int64*)(a1 + 88), 0, 0);
  GameRoutine_1562cf0(a1 + 88, "StatusDetailOff");
  goto LABEL_93;
}

__int64 GameHr_18a8f40(__int64 a1, __int64 a2, char a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  int v14;
  char v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int* v24;
  char* v25;
  _DWORD* v26;
  int v27;
  int v28;
  __int64 v29;
  int v30;
  int v31;
  int v32;
  int* v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  _DWORD* v40;
  __int64 v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  __int64 v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  __int64 v60;
  int v61;
  int v62;
  int v63;
  int* v64;
  __int64 v65;
  const char* v66;
  const char* v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  char* v74;
  __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  __int64 v78;
  char* v79;
  __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  __int64 v83;
  char* v84;
  __int64 v85;
  unsigned __int64 v86;
  __int64 v87;
  char* v88;
  __int64 v89;
  char* v90;
  __int64 v91;
  char* v92;
  char* v93;
  __int64 v94;
  int v95;
  int v96;
  int v97;
  _QWORD v98[4];
  int v99;
  int v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  char v114[4];
  _DWORD v115[4];

  GameRoutine_1560ec0(a1 + 88, "L_Efficacy00", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy01", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  GameRoutine_1562cf0(a1 + 88, "InfoTitleOff");
  GameRoutine_1562cf0(a1 + 88, "StatusOff");
  GameRoutine_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  GameRoutine_1560ec0(a1 + 88, "L_InfoTxt", 1);
  v101 = -1;
  v102 = -1;
  v103 = -1;
  v104 = -1;
  v6 = *GameData_212c738[0];
  v105 = -1;
  v106 = -1;
  v107 = -1;
  v108 = -1;
  v109 = -1;
  v110 = -1;
  v111 = -1;
  v112 = -1;
  v98[0] = GameData_212e348 + 2;
  v98[1] = 0xFFFF0001FFFF0000LL;
  v98[2] = 0xFFFF0004FFFF0002LL;
  v98[3] = 0xFFFF0006FFFF0005LL;
  v113 = 8;
  v99 = -65529;
  v100 = -65528;
  v7 = GameRoutine_a4dbe0(v6, "MID_H_Sys_Phy", 0, v98);
  if (v7 != 0) {
    v8 = v7;
    v9 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v9 != 0) {
      GameRoutine_156c5d0(v9, v8, 0);
    }
  }
  v10 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v10 != 0) {
    v11 = v10;
    v12 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v12 != 0) {
      GameRoutine_190a0c0(v98, v115, v114, v12, *(_QWORD*)(v12 + 216));
      v13 = v115[0];
      v14 = v115[1];
    }
    else {
      v13 = 0;
      v14 = 0;
    }
    v15 = *(_BYTE*)(v11 + 88);
    *(_DWORD*)(v11 + 80) = v13;
    *(_DWORD*)(v11 + 84) = v14;
    *(_BYTE*)(v11 + 88) = v15 | 0x10;
  }
  GameRoutine_1562cf0(a1 + 88, "StatusDetail01");
  LOBYTE(v98[0]) = 1;
  v16 = GameRoutine_6dd190(a2, v98, 0);
  LOBYTE(v98[0]) = 1;
  v17 = GameRoutine_6dd190(a2, v98, 1);
  v18 = *(char*)(a2 + 807);
  v19 = v17;
  GameRoutine_18a4290((__int64*)(a1 + 88), (v16 / 5) & ~((v16 / 5) >> 31), 0);
  if ((a3 & 1) == 0 && v16 >= 5) {
    v95 = v19;
    v96 = v18;
    v97 = (v16 / 5) & ~((v16 / 5) >> 31);
    LOBYTE(v98[0]) = 1;
    v20 = (int)GameRoutine_6dd190(a2, v98, 1) / 5 + *(char*)(a2 + 807);
    v21 = v20 & ~(v20 >> 31);
    GameRoutine_93f040(v98, a2, 0);
    LOBYTE(v115[0]) = 1;
    v22 = (int)GameRoutine_6dd190(a2, v115, 1) / 5 + *(char*)(a2 + 807);
    v23 = v21 - (v22 & ~(v22 >> 31));
    if (v23 != 0) {
      v26 = (_DWORD*)GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8, 16, 0);
      v24 = v26 + 2;
      v25 = (char*)v26;
      *v26 = 0;
      v26[1] = v23;
    }
    else {
      v24 = nullptr;
      v25 = nullptr;
    }
    GameRoutine_93eed0(v98);
    LOBYTE(v98[0]) = 1;
    v27 = (int)GameRoutine_6dd190(a2, v98, 1) / 5 + *(char*)(a2 + 807);
    v28 = v27 & ~(v27 >> 31);
    GameRoutine_93f040(v98, a2, 2);
    LOBYTE(v115[0]) = 1;
    v29 = GameRoutine_6dd190(a2, v115, 1);
    v30 = (int)v29 / 5 + *(char*)(a2 + 807);
    v31 = v30 & ~(v30 >> 31);
    v32 = v28 - v31;
    if (v28 == v31) {
      v33 = v24;
      v34 = (__int64)v25;
    }
    else {
      v35 = (char*)v24 - v25;
      v36 = ((char*)v24 - v25) >> 3;
      v37 = v36 + 1;
      if ((unsigned __int64)(v36 + 1) >> 61 != 0) {
        goto LABEL_108;
      }
      if (v35 >> 2 > v37) {
        v37 = v35 >> 2;
      }
      if (v35 >= 0x7FFFFFFFFFFFFFF8LL) {
        v38 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v38 = v37;
      }
      if (v38 != 0) {
        if (v38 >> 61 != 0) {
          goto LABEL_109;
        }
        v39 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v38, 16, 0);
      }
      else {
        v39 = 0;
      }
      v40 = (_DWORD*)(v39 + v35);
      v24 = (int*)(v39 + 8 * v38);
      v34 = v39 + v35 - 8 * v36;
      *v40 = 2;
      v40[1] = v32;
      v33 = (int*)(v39 + v35 + 8);
      GameRoutine_1a0b950(v34, v25, v35);
      if (v25 != nullptr) {
        v41 = 128;
        if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
          v41 = 56;
        }
        GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v41);
      }
    }
    GameRoutine_93eed0(v98);
    LOBYTE(v98[0]) = 1;
    v42 = (int)GameRoutine_6dd190(a2, v98, 1) / 5 + *(char*)(a2 + 807);
    v43 = v42 & ~(v42 >> 31);
    GameRoutine_93f040(v98, a2, 1);
    LOBYTE(v115[0]) = 1;
    v29 = GameRoutine_6dd190(a2, v115, 1);
    v44 = (int)v29 / 5 + *(char*)(a2 + 807);
    v45 = v44 & ~(v44 >> 31);
    v46 = v43 - v45;
    if (v43 != v45) {
      if (v33 >= v24) {
        v74 = (char*)v33 - v34;
        v75 = ((__int64)v33 - v34) >> 3;
        v76 = v75 + 1;
        if ((unsigned __int64)(v75 + 1) >> 61 != 0) {
          goto LABEL_108;
        }
        if (((__int64)v24 - v34) >> 2 > v76) {
          v76 = ((__int64)v24 - v34) >> 2;
        }
        if ((unsigned __int64)v24 - v34 >= 0x7FFFFFFFFFFFFFF8LL) {
          v77 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v77 = v76;
        }
        if (v77 != 0) {
          if (v77 >> 61 != 0) {
            goto LABEL_109;
          }
          v78 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v77, 16, 0);
        }
        else {
          v78 = 0;
        }
        v88 = &v74[v78];
        v24 = (int*)(v78 + 8 * v77);
        *(_DWORD*)v88 = 1;
        *((_DWORD*)v88 + 1) = v46;
        v47 = (__int64)&v74[v78 + -8 * v75];
        v33 = (int*)&v74[v78 + 8];
        GameRoutine_1a0b950(v47, v34, v74);
        if (v34 != 0) {
          v89 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v89 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v89);
        }
      LABEL_34:
        GameRoutine_93eed0(v98);
        LOBYTE(v98[0]) = 1;
        v48 = (int)GameRoutine_6dd190(a2, v98, 1) / 5 + *(char*)(a2 + 807);
        v49 = v48 & ~(v48 >> 31);
        GameRoutine_93f040(v98, a2, 3);
        LOBYTE(v115[0]) = 1;
        v29 = GameRoutine_6dd190(a2, v115, 1);
        v50 = (int)v29 / 5 + *(char*)(a2 + 807);
        v51 = v50 & ~(v50 >> 31);
        v52 = v49 - v51;
        if (v49 != v51) {
          if (v33 >= v24) {
            v79 = (char*)v33 - v47;
            v80 = ((__int64)v33 - v47) >> 3;
            v81 = v80 + 1;
            if ((unsigned __int64)(v80 + 1) >> 61 != 0) {
              goto LABEL_108;
            }
            if (((__int64)v24 - v47) >> 2 > v81) {
              v81 = ((__int64)v24 - v47) >> 2;
            }
            if ((unsigned __int64)v24 - v47 >= 0x7FFFFFFFFFFFFFF8LL) {
              v82 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v82 = v81;
            }
            if (v82 != 0) {
              if (v82 >> 61 != 0) {
                goto LABEL_109;
              }
              v83 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v82, 16,
                                       0);
            }
            else {
              v83 = 0;
            }
            v90 = &v79[v83];
            v24 = (int*)(v83 + 8 * v82);
            v53 = (__int64)&v79[v83 + -8 * v80];
            *(_DWORD*)v90 = 3;
            *((_DWORD*)v90 + 1) = v52;
            v33 = (int*)&v79[v83 + 8];
            GameRoutine_1a0b950(v53, v47, v79);
            if (v47 != 0) {
              v91 = 128;
              if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                v91 = 56;
              }
              GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v91);
            }
          LABEL_38:
            GameRoutine_93eed0(v98);
            LOBYTE(v98[0]) = 1;
            v54 = (int)GameRoutine_6dd190(a2, v98, 1) / 5 + *(char*)(a2 + 807);
            v55 = v54 & ~(v54 >> 31);
            GameRoutine_93f040(v98, a2, 4);
            LOBYTE(v115[0]) = 1;
            v29 = GameRoutine_6dd190(a2, v115, 1);
            v56 = (int)v29 / 5 + *(char*)(a2 + 807);
            v57 = v56 & ~(v56 >> 31);
            v58 = v55 - v57;
            if (v55 == v57) {
            LABEL_41:
              v59 = v97;
              v60 = v53;
            LABEL_42:
              v61 = (v95 / 5 + v96) & ~((v95 / 5 + v96) >> 31);
              GameRoutine_93eed0(v98);
              if ((int*)v60 == v33) {
                v62 = 1;
                v63 = 0;
              }
              else {
                v62 = 1;
                v63 = 0;
                v64 = (int*)v60;
                do {
                  if ((unsigned int)*v64 >= 3) {
                    GameRoutine_18a4810(a1 + 88, v62++, *v64, v64[1], a2, 1);
                    v63 += v64[1];
                  }
                  v64 += 2;
                } while (v64 != v33);
              }
              if (v61 != v63 + v59) {
                GameRoutine_18a4810(a1 + 88, v62++, 0, v61 - (v63 + v59), a2,
                                    1);
              }
              v65 = GameRoutine_7a7dc0("StatusDetail%02d", v62);
              GameRoutine_1562cf0(a1 + 88, v65);
              v66 = "Wdw_TitleOff_Status04";
              if (v62 <= 2) {
                v66 = "Wdw_TitleOff_Status02";
              }
              if (v62 <= 4) {
                v67 = v66;
              }
              else {
                v67 = "Wdw_TitleOff_Status08";
              }
              GameRoutine_1562cf0(a1 + 88, v67);
              v68 = GameRoutine_1563e00(a1 + 88, "A_StatusDetail");
              if (v68 != 0) {
                GameRoutine_56b600(v68);
                v69 = *(_QWORD*)(a1 + 96);
                if (v69 != 0) {
                  v70 = GameRoutine_1a0a0c0(v69);
                  if (v70 != 0) {
                    v71 = v70;
                    if (*(_QWORD*)(a1 + 88) != 0) {
                      GameRoutine_13633c0();
                    }
                    if (atomic_fetch_add((atomic_ullong* volatile)(v71 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
                      (*(void (**)(__int64))(*(_QWORD*)v71 + 16LL))(v71);
                      GameRoutine_1a09c50(v71);
                    }
                  }
                }
              }
              if (v60 != 0) {
                v72 = 128;
                if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                  v72 = 56;
                }
                GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v72);
              }
              return GameRoutine_18a5bc0(a1);
            }
            if (v33 < v24) {
              *v33 = 4;
              v33[1] = v58;
              v33 += 2;
              goto LABEL_41;
            }
            v84 = (char*)v33 - v53;
            v85 = ((__int64)v33 - v53) >> 3;
            v86 = v85 + 1;
            if ((unsigned __int64)(v85 + 1) >> 61 == 0) {
              if (((__int64)v24 - v53) >> 2 > v86) {
                v86 = ((__int64)v24 - v53) >> 2;
              }
              if ((unsigned __int64)v24 - v53 >= 0x7FFFFFFFFFFFFFF8LL) {
                v86 = 0x1FFFFFFFFFFFFFFFLL;
              }
              if (v86 == 0) {
                v87 = 0;
              LABEL_104:
                v59 = v97;
                v92 = &v84[v87];
                v93 = (char*)v33 - v53;
                *(_DWORD*)v92 = 4;
                *((_DWORD*)v92 + 1) = v58;
                v60 = (__int64)&v84[v87 + -8 * v85];
                v33 = (int*)&v84[v87 + 8];
                GameRoutine_1a0b950(v60, v53, v93);
                if (v53 != 0) {
                  v94 = 128;
                  if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
                    v94 = 56;
                  }
                  GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v94);
                }
                goto LABEL_42;
              }
              if (v86 >> 61 == 0) {
                v87 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v86,
                                         16, 0);
                goto LABEL_104;
              }
            LABEL_109:
              GameRoutine_60a210(v29);
            }
          LABEL_108:
            GameRoutine_18abd30(v29);
          }
          *v33 = 3;
          v33[1] = v52;
          v33 += 2;
        }
        v53 = v47;
        goto LABEL_38;
      }
      *v33 = 1;
      v33[1] = v46;
      v33 += 2;
    }
    v47 = v34;
    goto LABEL_34;
  }
  return GameRoutine_18a5bc0(a1);
}

__int64 GameHr_18a9940(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned int v5;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;
  char v22;
  __int64 v23;
  __int16 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  int* v30;
  unsigned __int64 v31;
  __int64 i;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  int v36;
  __int64 v37;
  __int64 v38;
  int v39;
  __int64 v40;
  int v41;
  char* v42;
  __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  char* v47;
  __int64 v48;
  __int64 v49;
  int v50;
  int* v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  __int64 v57;
  const char* v58;
  const char* v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v66;
  int v67;
  int v68;
  __int64 v69;
  int* v70;
  _QWORD v71[2];
  unsigned __int64 v72;
  unsigned __int64 v73;
  int v74;
  int v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  char v89[4];
  _DWORD v90[4];

  v5 = a2;
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy00", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy01", 0);
  GameRoutine_1560ec0(a1 + 88, "L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  GameRoutine_1562cf0(a1 + 88, "InfoTitleOff");
  GameRoutine_1562cf0(a1 + 88, "StatusOff");
  GameRoutine_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  v7 = GameData_212c738[0];
  v8 = GameData_212e348;
  if (v5 > 0xA) {
    GameRoutine_1560ec0(a1 + 88, "L_InfoTxt", 1);
    v12 = &GameData_1a9f09e;
  }
  else {
    v9 = *GameData_212c738[0];
    v76 = -1;
    v77 = -1;
    v78 = -1;
    v79 = -1;
    v80 = -1;
    v81 = -1;
    v82 = -1;
    v83 = -1;
    v10 = GameData_2104400[a2];
    v84 = -1;
    v85 = -1;
    v86 = -1;
    v87 = -1;
    v71[0] = GameData_212e348 + 2;
    v71[1] = 0xFFFF0001FFFF0000LL;
    v72 = 0xFFFF0004FFFF0002LL;
    v73 = 0xFFFF0006FFFF0005LL;
    v88 = 8;
    v74 = -65529;
    v75 = -65528;
    v11 = GameRoutine_a4dbe0(v9, v10, 0, v71);
    GameRoutine_1560ec0(a1 + 88, "L_InfoTxt", 1);
    if (v11 != 0) {
      GameRoutine_60a020(*v7 + 14704, v11);
    }
    v12 = "MID_H_Sys_GrowthRate";
  }
  v13 = *v7;
  v76 = -1;
  v77 = -1;
  v78 = -1;
  v79 = -1;
  v80 = -1;
  v81 = -1;
  v82 = -1;
  v83 = -1;
  v84 = -1;
  v85 = -1;
  v86 = -1;
  v87 = -1;
  v71[0] = v8 + 2;
  v71[1] = 0xFFFF0001FFFF0000LL;
  v72 = 0xFFFF0004FFFF0002LL;
  v73 = 0xFFFF0006FFFF0005LL;
  v88 = 8;
  v74 = -65529;
  v75 = -65528;
  v14 = GameRoutine_a4dbe0(v13, v12, 0, v71);
  if (v14 != 0) {
    v15 = v14;
    v16 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v16 != 0) {
      GameRoutine_156c5d0(v16, v15, 0);
    }
  }
  v17 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
  if (v17 != 0) {
    v18 = v17;
    v19 = GameRoutine_15621a0(a1 + 88, "L_InfoTxt/T_Txt");
    if (v19 != 0) {
      GameRoutine_190a0c0(v71, v90, v89, v19, *(_QWORD*)(v19 + 216));
      v20 = v90[0];
      v21 = v90[1];
    }
    else {
      v20 = 0;
      v21 = 0;
    }
    v22 = *(_BYTE*)(v18 + 88);
    *(_DWORD*)(v18 + 80) = v20;
    *(_DWORD*)(v18 + 84) = v21;
    *(_BYTE*)(v18 + 88) = v22 | 0x10;
  }
  GameRoutine_1562cf0(a1 + 88, "StatusDetail01");
  v23 = *(_QWORD*)(a3 + 392);
  v24 = *(_WORD*)(v23 + 2LL * a2 + 540);
  if (v24 == 0) {
    v25 = GameRoutine_6c8530(a3);
    v23 = *(_QWORD*)(a3 + 392);
    v24 = *(_WORD*)(v25 + 2LL * a2 + 354);
  }
  v26 = *(_QWORD*)(a3 + 400);
  LOBYTE(v71[0]) = a2;
  v27 = GameRoutine_6d5d00(a3, v71, v23, v26, 0);
  v28 = *(_QWORD*)(a3 + 392);
  v29 = *(_QWORD*)(a3 + 400);
  v68 = v27;
  LOBYTE(v71[0]) = a2;
  v67 = GameRoutine_6d5d00(a3, v71, v28, v29, 1);
  v69 = a1;
  v66 = v24;
  GameRoutine_18a4290((__int64*)(a1 + 88), v24, 0);
  v70 = nullptr;
  v30 = nullptr;
  v31 = 0;
  for (i = 0; i != 20; i += 4) {
    v33 = *(_QWORD*)(a3 + 392);
    v34 = *(_QWORD*)(a3 + 400);
    v35 = *(_DWORD*)((char*)&GameData_1c17624 + i);
    LOBYTE(v71[0]) = a2;
    v36 = GameRoutine_6d5d00(a3, v71, v33, v34, 1);
    GameRoutine_93f040(v71, a3, v35);
    v37 = *(_QWORD*)(a3 + 392);
    v38 = *(_QWORD*)(a3 + 400);
    LOBYTE(v90[0]) = a2;
    v39 = GameRoutine_6d5d00(a3, v90, v37, v38, 1);
    v40 = GameRoutine_93eed0(v71);
    v41 = v36 - v39;
    if (v41 != 0) {
      if ((unsigned __int64)v30 < v31) {
        *v30 = v35;
        v30[1] = v41;
        v30 += 2;
      }
      else {
        v42 = (char*)((char*)v30 - (char*)v70);
        v43 = ((char*)v30 - (char*)v70) >> 3;
        v44 = v43 + 1;
        if ((unsigned __int64)(v43 + 1) >> 61 != 0) {
          GameRoutine_18abd30(v40);
        }
        if ((__int64)(v31 - (_QWORD)v70) >> 2 > v44) {
          v44 = (__int64)(v31 - (_QWORD)v70) >> 2;
        }
        if (v31 - (unsigned __int64)v70 >= 0x7FFFFFFFFFFFFFF8LL) {
          v45 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v45 = v44;
        }
        if (v45 != 0) {
          if (v45 >> 61 != 0) {
            GameRoutine_60a210(v40);
          }
          v46 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 8 * v45, 16, 0);
        }
        else {
          v46 = 0;
        }
        v47 = &v42[v46];
        v31 = v46 + 8 * v45;
        *(_DWORD*)v47 = v35;
        *((_DWORD*)v47 + 1) = v41;
        v48 = (__int64)&v42[v46 + -8 * v43];
        v30 = (int*)&v42[v46 + 8];
        GameRoutine_1a0b950(v48, v70, v42);
        if (v70 != nullptr) {
          v49 = 128;
          if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
            v49 = 56;
          }
          GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v49);
        }
        v70 = (int*)v48;
      }
    }
  }
  if (v68 == v66) {
    v50 = 1;
  }
  else {
    GameRoutine_18a4560(v69 + 88, v68 - v66);
    v50 = 2;
  }
  v51 = v70;
  if (v70 == v30) {
    v52 = 0;
  }
  else {
    v52 = 0;
    do {
      if ((unsigned int)*v51 >= 3) {
        v53 = v50 + 1;
        GameRoutine_18a4810(v69 + 88, v50, *v51, v51[1], 0, 0);
        v50 = v53;
        v52 += v51[1];
      }
      v51 += 2;
    } while (v51 != v30);
  }
  v54 = v67 - (v52 + v68);
  if (v67 != v52 + v68) {
    v55 = v50 + 1;
    GameRoutine_18a4810(v69 + 88, v50, 0, v54, 0, 0);
    v50 = v55;
  }
  v56 = v50;
  v57 = GameRoutine_7a7dc0("StatusDetail%02d", v50);
  GameRoutine_1562cf0(v69 + 88, v57);
  v58 = "Wdw_TitleOff_Status04";
  if (v56 <= 2) {
    v58 = "Wdw_TitleOff_Status02";
  }
  if (v56 <= 4) {
    v59 = v58;
  }
  else {
    v59 = "Wdw_TitleOff_Status08";
  }
  GameRoutine_1562cf0(v69 + 88, v59);
  v60 = GameRoutine_1563e00(v69 + 88, "A_StatusDetail");
  if (v60 != 0) {
    GameRoutine_56b600(v60);
    v61 = *(_QWORD*)(v69 + 96);
    if (v61 != 0) {
      v62 = GameRoutine_1a0a0c0(v61);
      if (v62 != 0) {
        v63 = v62;
        if (*(_QWORD*)(v69 + 88) != 0) {
          GameRoutine_13633c0();
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
          GameRoutine_1a09c50(v63);
        }
      }
    }
  }
  if (v70 != nullptr) {
    v64 = 128;
    if (*(_QWORD*)(*(_QWORD*)GameData_212bf68 + 200LL) == 0) {
      v64 = 56;
    }
    GameRoutine_1a0a4e0(*(_QWORD*)GameData_212bf68 + v64);
  }
  return GameRoutine_18a5bc0(v69);
}

void GameHr_18a9f60(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  int v9;
  int v10;
  char v11;
  __int64 v12;
  struct {
    _QWORD v13[4];
    int v14;
    int v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
    __int64 v20;
    __int64 v21;
    __int64 v22;
    __int64 v23;
    __int64 v24;
    __int64 v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
  } v13_;
  float v29;
  _DWORD v30[2];

  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy00", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy01", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  LayoutAccessor_1562cf0(a1 + 88, "InfoTitleOff");
  LayoutAccessor_1562cf0(a1 + 88, "StatusOff");
  LayoutAccessor_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_InfoTxt", 1);
  v13_.v16 = -1;
  v13_.v17 = -1;
  v13_.v18 = -1;
  v13_.v19 = -1;
  v2 = *msg_MessageManager_instance__ptr[0];
  v13_.v20 = -1;
  v13_.v21 = -1;
  v13_.v22 = -1;
  v13_.v23 = -1;
  v13_.v24 = -1;
  v13_.v25 = -1;
  v13_.v26 = -1;
  v13_.v27 = -1;
  v13_.v13[0] = GameData_212e348 + 2;
  v13_.v13[1] = 0xFFFF0001FFFF0000LL;
  v13_.v13[2] = 0xFFFF0004FFFF0002LL;
  v13_.v13[3] = 0xFFFF0006FFFF0005LL;
  v13_.v28 = 8;
  v13_.v14 = -65529;
  v13_.v15 = -65528;
  v3 = GameRoutine_a4dbe0_alt1(v2, "MID_H_Sys_StatusTotal", 0);
  if (v3 != nullptr) {
    v4 = (__int64)v3;
    v5 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                       (__int64)"L_InfoTxt/T_Txt");
    if (v5 != 0) {
      GameRoutine_156c5d0_alt1(v5, v4, 0);
    }
  }
  v6 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                     (__int64)"L_InfoTxt/T_Txt");
  if (v6 != 0) {
    v7 = v6;
    v8 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                                (__int64)"L_InfoTxt/T_Txt");
    if (v8 != nullptr) {
      GameRoutine_190a0c0_alt1((float*)v13_.v13, (__int64)v30, &v29, v8,
                               v8[27]);
      v9 = v30[0];
      v10 = v30[1];
    }
    else {
      v9 = 0;
      v10 = 0;
    }
    v11 = *(_BYTE*)(v7 + 88);
    *(_DWORD*)(v7 + 80) = v9;
    *(_DWORD*)(v7 + 84) = v10;
    *(_BYTE*)(v7 + 88) = v11 | 0x10;
  }
  v12 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88),
                                        (__int64)"A_InfoDetail");
  if (v12 != 0) {
    Alignment_56b600(v12);
  }
  GameRoutine_18a5bc0_alt1(a1);
}

void GameHr_18aadd0(__int64 a1, _QWORD* a2, char a3)
{

#pragma clang fp contract(off)
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  _BYTE* v14;
  __int64 v15;
  char* v16;
  __int64* v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  int v25;
  int v26;
  char v27;
  __int64 v28;
  struct {
    _QWORD v29[2];
    unsigned __int64 v30;
    unsigned __int64 v31;
    int v32;
    int v33;
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
    __int64 v45;
    __int64 v46;
  } v29_;
  float v47;
  _DWORD v48[2];

  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy00", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy01", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  v6 = msg_MessageManager_instance__ptr[0];
  v7 = GameData_212e348;
  if ((a3 & 1) != 0) {
    LayoutAccessor_1562cf0(a1 + 88, "InfoTitleOn");
    LayoutAccessor_1562cf0(a1 + 88, "NumNone");
    LayoutAccessor_1562cf0(a1 + 88, "Icon");
    v8 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 88), (__int64)"Icon");
    if (v8 != 0) {
      v8 = __dynamic_cast(v8, GameData_212d670[0], GameData_212d678[0], 0);
    }
    GameRoutine_1841930_alt1(v8, a2[8]);
    v9 = *v6;
    v10 = (_BYTE*)a2[4];
    v29_.v34 = -1;
    v29_.v35 = -1;
    v29_.v36 = -1;
    v29_.v37 = -1;
    v29_.v38 = -1;
    v29_.v39 = -1;
    v29_.v40 = -1;
    v29_.v41 = -1;
    v29_.v42 = -1;
    v29_.v43 = -1;
    v29_.v44 = -1;
    v29_.v45 = -1;
    v29_.v29[0] = v7 + 2;
    v29_.v29[1] = 0xFFFF0001FFFF0000LL;
    v29_.v30 = 0xFFFF0004FFFF0002LL;
    v29_.v31 = 0xFFFF0006FFFF0005LL;
    v29_.v46 = 8;
    v29_.v32 = -65529;
    v29_.v33 = -65528;
    v11 = GameRoutine_a4dbe0_alt1(v9, v10, 0);
    if (v11 != nullptr) {
      v12 = (__int64)v11;
      v13 =
          ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88), (__int64)"T_Txt");
      if (v13 != 0) {
        GameRoutine_156c5d0_alt1(v13, v12, 0);
      }
    }
    v14 = (_BYTE*)a2[5];
    if (v14 == nullptr) {
      goto LABEL_13;
    }
  }
  else {
    LayoutAccessor_1562cf0(a1 + 88, "InfoTitleOff");
    v14 = (_BYTE*)a2[5];
    if (v14 == nullptr) {
    LABEL_13:
      ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_InfoTxt", 1);
      v17 = v7 + 2;
      v18 = *v6;
      v16 = "MID_Sys_ValueEmptyLong";
      goto LABEL_14;
    }
  }
  v15 = *v6;
  v29_.v34 = -1;
  v29_.v35 = -1;
  v29_.v36 = -1;
  v29_.v37 = -1;
  v29_.v38 = -1;
  v29_.v39 = -1;
  v29_.v40 = -1;
  v29_.v41 = -1;
  v29_.v42 = -1;
  v29_.v43 = -1;
  v29_.v44 = -1;
  v29_.v45 = -1;
  v29_.v29[0] = v7 + 2;
  v29_.v29[1] = 0xFFFF0001FFFF0000LL;
  v29_.v30 = 0xFFFF0004FFFF0002LL;
  v29_.v31 = 0xFFFF0006FFFF0005LL;
  v29_.v46 = 8;
  v29_.v32 = -65529;
  v29_.v33 = -65528;
  if (GameRoutine_a4dbe0_alt1(v15, v14, 0) == nullptr) {
    goto LABEL_13;
  }
  v16 = (char*)a2[5];
  if (v16 == nullptr) {
    goto LABEL_17;
  }
  v17 = v7 + 2;
  v18 = *v6;
LABEL_14:
  v29_.v34 = -1;
  v29_.v35 = -1;
  v29_.v36 = -1;
  v29_.v37 = -1;
  v29_.v38 = -1;
  v29_.v39 = -1;
  v29_.v40 = -1;
  v29_.v41 = -1;
  v29_.v42 = -1;
  v29_.v43 = -1;
  v29_.v44 = -1;
  v29_.v45 = -1;
  v29_.v29[0] = v17;
  v29_.v29[1] = 0xFFFF0001FFFF0000LL;
  v29_.v30 = 0xFFFF0004FFFF0002LL;
  v29_.v31 = 0xFFFF0006FFFF0005LL;
  v29_.v46 = 8;
  v29_.v32 = -65529;
  v29_.v33 = -65528;
  v19 = GameRoutine_a4dbe0_alt1(v18, v16, 0);
  if (v19 != nullptr) {
    v20 = (__int64)v19;
    v21 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                        (__int64)"L_InfoTxt/T_Txt");
    if (v21 != 0) {
      GameRoutine_156c5d0_alt1(v21, v20, 0);
    }
  }
LABEL_17:
  v22 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                      (__int64)"L_InfoTxt/T_Txt");
  if (v22 != 0) {
    v23 = v22;
    v24 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                                 (__int64)"L_InfoTxt/T_Txt");
    if (v24 != nullptr) {
      GameRoutine_190a0c0_alt1((float*)v29_.v29, (__int64)v48, &v47, v24,
                               v24[27]);
      v25 = v48[0];
      v26 = v48[1];
    }
    else {
      v25 = 0;
      v26 = 0;
    }
    v27 = *(_BYTE*)(v23 + 88);
    *(_DWORD*)(v23 + 80) = v25;
    *(_DWORD*)(v23 + 84) = v26;
    *(_BYTE*)(v23 + 88) = v27 | 0x10;
  }
  LayoutAccessor_1562cf0(a1 + 88, "StatusDetailOff");
  LayoutAccessor_1562cf0(a1 + 88, "StatusOff");
  LayoutAccessor_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  v28 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88),
                                        (__int64)"A_InfoDetail");
  if (v28 != 0) {
    Alignment_56b600(v28);
  }
  GameRoutine_18a5bc0_alt1(a1);
}

void GameHr_18ab160(__int64 a1, __int64 a2, char a3)
{

#pragma clang fp contract(off)
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  char* v10;
  __int64 v11;
  _BYTE* v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  _BYTE* v16;
  __int64 v17;
  char* v18;
  __int64* v19;
  __int64 v20;
  char* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  int v27;
  int v28;
  char v29;
  __int64 v30;
  struct {
    _QWORD v31[2];
    unsigned __int64 v32;
    unsigned __int64 v33;
    int v34;
    int v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
  } v31_;
  float v49;
  _DWORD v50[2];

  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy00", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy01", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  v6 = msg_MessageManager_instance__ptr[0];
  v7 = GameData_212e348;
  if ((a3 & 1) != 0) {
    LayoutAccessor_1562cf0(a1 + 88, "InfoTitleOn");
    LayoutAccessor_1562cf0(a1 + 88, "NumNone");
    LayoutAccessor_1562cf0(a1 + 88, "Icon");
    v8 = ui_LayoutAccessor_FindPane((__int64*)(a1 + 88), (__int64)"Icon");
    if (v8 != 0) {
      v9 = __dynamic_cast(v8, GameData_212d670[0], GameData_212d678[0], 0);
      if (a2 != 0 && v9 != 0) {
        if ((unsigned int)*(unsigned __int8*)(a2 + 32) - 1 > 4) {
          v10 = &GameData_1a9f09e;
        }
        else {
          v10 = (char*)*(&GameData_2104500 +
                         (unsigned __int8)(*(_BYTE*)(a2 + 32) - 1));
        }
        Manager_136a920(ui_Manager_instance_ + 1264, v9, 0, 2u, v10);
      }
    }
    v11 = *v6;
    v12 = *(_BYTE**)(a2 + 40);
    v31_.v36 = -1;
    v31_.v37 = -1;
    v31_.v38 = -1;
    v31_.v39 = -1;
    v31_.v40 = -1;
    v31_.v41 = -1;
    v31_.v42 = -1;
    v31_.v43 = -1;
    v31_.v44 = -1;
    v31_.v45 = -1;
    v31_.v46 = -1;
    v31_.v47 = -1;
    v31_.v31[0] = v7 + 2;
    v31_.v31[1] = 0xFFFF0001FFFF0000LL;
    v31_.v32 = 0xFFFF0004FFFF0002LL;
    v31_.v33 = 0xFFFF0006FFFF0005LL;
    v31_.v48 = 8;
    v31_.v34 = -65529;
    v31_.v35 = -65528;
    v13 = GameRoutine_a4dbe0_alt1(v11, v12, 0);
    if (v13 != nullptr) {
      v14 = (__int64)v13;
      v15 =
          ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88), (__int64)"T_Txt");
      if (v15 != 0) {
        GameRoutine_156c5d0_alt1(v15, v14, 0);
      }
    }
  }
  else {
    LayoutAccessor_1562cf0(a1 + 88, "InfoTitleOff");
  }
  v16 = *(_BYTE**)(a2 + 48);
  if (v16 == nullptr) {
    goto LABEL_17;
  }
  v17 = *v6;
  v31_.v36 = -1;
  v31_.v37 = -1;
  v31_.v38 = -1;
  v31_.v39 = -1;
  v31_.v40 = -1;
  v31_.v41 = -1;
  v31_.v42 = -1;
  v31_.v43 = -1;
  v31_.v44 = -1;
  v31_.v45 = -1;
  v31_.v46 = -1;
  v31_.v47 = -1;
  v31_.v31[0] = v7 + 2;
  v31_.v31[1] = 0xFFFF0001FFFF0000LL;
  v31_.v32 = 0xFFFF0004FFFF0002LL;
  v31_.v33 = 0xFFFF0006FFFF0005LL;
  v31_.v48 = 8;
  v31_.v34 = -65529;
  v31_.v35 = -65528;
  if (GameRoutine_a4dbe0_alt1(v17, v16, 0) != nullptr) {
    v18 = *(char**)(a2 + 48);
    if (v18 == nullptr) {
      goto LABEL_21;
    }
    v19 = v7 + 2;
    v20 = *v6;
  }
  else {
  LABEL_17:
    ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_InfoTxt", 1);
    v19 = v7 + 2;
    v20 = *v6;
    v18 = "MID_Sys_ValueEmptyLong";
  }
  v31_.v36 = -1;
  v31_.v37 = -1;
  v31_.v38 = -1;
  v31_.v39 = -1;
  v31_.v40 = -1;
  v31_.v41 = -1;
  v31_.v42 = -1;
  v31_.v43 = -1;
  v31_.v44 = -1;
  v31_.v45 = -1;
  v31_.v46 = -1;
  v31_.v47 = -1;
  v31_.v31[0] = v19;
  v31_.v31[1] = 0xFFFF0001FFFF0000LL;
  v31_.v32 = 0xFFFF0004FFFF0002LL;
  v31_.v33 = 0xFFFF0006FFFF0005LL;
  v31_.v48 = 8;
  v31_.v34 = -65529;
  v31_.v35 = -65528;
  v21 = GameRoutine_a4dbe0_alt1(v20, v18, 0);
  if (v21 != nullptr) {
    v22 = (__int64)v21;
    v23 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                        (__int64)"L_InfoTxt/T_Txt");
    if (v23 != 0) {
      GameRoutine_156c5d0_alt1(v23, v22, 0);
    }
  }
LABEL_21:
  v24 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                      (__int64)"L_InfoTxt/T_Txt");
  if (v24 != 0) {
    v25 = v24;
    v26 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                                 (__int64)"L_InfoTxt/T_Txt");
    if (v26 != nullptr) {
      GameRoutine_190a0c0_alt1((float*)v31_.v31, (__int64)v50, &v49, v26,
                               v26[27]);
      v27 = v50[0];
      v28 = v50[1];
    }
    else {
      v27 = 0;
      v28 = 0;
    }
    v29 = *(_BYTE*)(v25 + 88);
    *(_DWORD*)(v25 + 80) = v27;
    *(_DWORD*)(v25 + 84) = v28;
    *(_BYTE*)(v25 + 88) = v29 | 0x10;
  }
  LayoutAccessor_1562cf0(a1 + 88, "StatusDetailOff");
  LayoutAccessor_1562cf0(a1 + 88, "StatusOff");
  LayoutAccessor_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  v30 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88),
                                        (__int64)"A_InfoDetail");
  if (v30 != 0) {
    Alignment_56b600(v30);
  }
  GameRoutine_18a5bc0_alt1(a1);
}

void GameHr_18ab530(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  _BYTE* v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  char* v8;
  __int64* v9;
  __int64 v10;
  char* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  int v17;
  int v18;
  char v19;
  __int64 v20;
  struct {
    _QWORD v21[2];
    unsigned __int64 v22;
    unsigned __int64 v23;
    int v24;
    int v25;
    __int64 v26;
    __int64 v27;
    __int64 v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
    __int64 v38;
  } v21_;
  float v39;
  _DWORD v40[2];

  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy00", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy01", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  v4 = *(_BYTE**)(a2 + 40);
  v5 = msg_MessageManager_instance__ptr[0];
  v6 = GameData_212e348;
  if (v4 == nullptr) {
    goto LABEL_5;
  }
  v7 = *msg_MessageManager_instance__ptr[0];
  v21_.v26 = -1;
  v21_.v27 = -1;
  v21_.v28 = -1;
  v21_.v29 = -1;
  v21_.v30 = -1;
  v21_.v31 = -1;
  v21_.v32 = -1;
  v21_.v33 = -1;
  v21_.v34 = -1;
  v21_.v35 = -1;
  v21_.v36 = -1;
  v21_.v37 = -1;
  v21_.v21[0] = GameData_212e348 + 2;
  v21_.v21[1] = 0xFFFF0001FFFF0000LL;
  v21_.v22 = 0xFFFF0004FFFF0002LL;
  v21_.v23 = 0xFFFF0006FFFF0005LL;
  v21_.v38 = 8;
  v21_.v24 = -65529;
  v21_.v25 = -65528;
  if (GameRoutine_a4dbe0_alt1(v7, v4, 0) != nullptr) {
    v8 = *(char**)(a2 + 40);
    if (v8 == nullptr) {
      goto LABEL_9;
    }
    v9 = v6 + 2;
    v10 = *v5;
  }
  else {
  LABEL_5:
    ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_InfoTxt", 1);
    v9 = v6 + 2;
    v10 = *v5;
    v8 = "MID_Sys_ValueEmptyLong";
  }
  v21_.v26 = -1;
  v21_.v27 = -1;
  v21_.v28 = -1;
  v21_.v29 = -1;
  v21_.v30 = -1;
  v21_.v31 = -1;
  v21_.v32 = -1;
  v21_.v33 = -1;
  v21_.v34 = -1;
  v21_.v35 = -1;
  v21_.v36 = -1;
  v21_.v37 = -1;
  v21_.v21[0] = v9;
  v21_.v21[1] = 0xFFFF0001FFFF0000LL;
  v21_.v22 = 0xFFFF0004FFFF0002LL;
  v21_.v23 = 0xFFFF0006FFFF0005LL;
  v21_.v38 = 8;
  v21_.v24 = -65529;
  v21_.v25 = -65528;
  v11 = GameRoutine_a4dbe0_alt1(v10, v8, 0);
  if (v11 != nullptr) {
    v12 = (__int64)v11;
    v13 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                        (__int64)"L_InfoTxt/T_Txt");
    if (v13 != 0) {
      GameRoutine_156c5d0_alt1(v13, v12, 0);
    }
  }
LABEL_9:
  v14 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                      (__int64)"L_InfoTxt/T_Txt");
  if (v14 != 0) {
    v15 = v14;
    v16 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                                 (__int64)"L_InfoTxt/T_Txt");
    if (v16 != nullptr) {
      GameRoutine_190a0c0_alt1((float*)v21_.v21, (__int64)v40, &v39, v16,
                               v16[27]);
      v17 = v40[0];
      v18 = v40[1];
    }
    else {
      v17 = 0;
      v18 = 0;
    }
    v19 = *(_BYTE*)(v15 + 88);
    *(_DWORD*)(v15 + 80) = v17;
    *(_DWORD*)(v15 + 84) = v18;
    *(_BYTE*)(v15 + 88) = v19 | 0x10;
  }
  LayoutAccessor_1562cf0(a1 + 88, "InfoTitleOff");
  LayoutAccessor_1562cf0(a1 + 88, "StatusDetailOff");
  LayoutAccessor_1562cf0(a1 + 88, "StatusOff");
  LayoutAccessor_1562cf0(a1 + 88, "Wdw_TitleOff_Status02");
  v20 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88),
                                        (__int64)"A_InfoDetail");
  if (v20 != 0) {
    Alignment_56b600(v20);
  }
  GameRoutine_18a5bc0_alt1(a1);
}

void GameHr_18ab7b0(__int64 a1, unsigned int* a2, __int64 a3, __int64 a4,
                    char a5)
{

#pragma clang fp contract(off)
  __int64* v10;
  unsigned int v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  int v20;
  int v21;
  char v22;
  const char* v23;
  const char* v24;
  __int64 v25;
  struct {
    _QWORD v26[4];
    int v27;
    int v28;
    __int64 v29;
    __int64 v30;
    __int64 v31;
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
  } v26_;
  float v42;
  _DWORD v43[2];

  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy00", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy01", 0);
  ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_Efficacy02", 0);
  *(_BYTE*)(a1 + 1060) = 0;
  v10 = GameData_212c880[0];
  if ((a5 & 1) != 0) {
    LayoutAccessor_1562cf0(a1 + 88, "L_Icon");
    Util_157e3a0((__int64*)(a1 + 88), a2,
                 *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v10 + 64) +
                                                8LL * (*a2 & 0xFFF)) +
                                     104LL),
                 a3);
  }
  v11 = *a2;
  if ((*a2 & 0xFFF) != 0 && *(_QWORD*)((v12 = *(_QWORD*)(*(_QWORD*)(*v10 + 64) +
                                                         8LL * (v11 & 0xFFF))) +
                                       48) != 0) {
    v13 = GameHr_6fbd80(v12,
                        *(unsigned __int8*)(v12 + 304) - (HIBYTE(v11) & 0x1F));
    if (v13 == nullptr) {
      goto LABEL_10;
    }
  }
  else {
    ui_LayoutAccessor_SetPaneVisible(a1 + 88, (__int64)"L_InfoTxt", 1);
    v26_.v29 = -1;
    v26_.v30 = -1;
    v26_.v31 = -1;
    v26_.v32 = -1;
    v14 = *msg_MessageManager_instance__ptr[0];
    v26_.v33 = -1;
    v26_.v34 = -1;
    v26_.v35 = -1;
    v26_.v36 = -1;
    v26_.v37 = -1;
    v26_.v38 = -1;
    v26_.v39 = -1;
    v26_.v40 = -1;
    v26_.v26[0] = GameData_212e348 + 2;
    v26_.v26[1] = 0xFFFF0001FFFF0000LL;
    v26_.v26[2] = 0xFFFF0004FFFF0002LL;
    v26_.v26[3] = 0xFFFF0006FFFF0005LL;
    v26_.v41 = 8;
    v26_.v27 = -65529;
    v26_.v28 = -65528;
    v13 = GameRoutine_a4dbe0_alt1(v14, "MID_Sys_ValueEmptyLong", 0);
    if (v13 == nullptr) {
      goto LABEL_10;
    }
  }
  v15 = (__int64)v13;
  v16 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                      (__int64)"L_InfoTxt/T_Txt");
  if (v16 != 0) {
    GameRoutine_156c5d0_alt1(v16, v15, 0);
  }
LABEL_10:
  v17 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                      (__int64)"L_InfoTxt/T_Txt");
  if (v17 != 0) {
    v18 = v17;
    v19 = (_QWORD*)ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 88),
                                                 (__int64)"L_InfoTxt/T_Txt");
    if (v19 != nullptr) {
      GameRoutine_190a0c0_alt1((float*)v26_.v26, (__int64)v43, &v42, v19,
                               v19[27]);
      v20 = v43[0];
      v21 = v43[1];
    }
    else {
      v20 = 0;
      v21 = 0;
    }
    v22 = *(_BYTE*)(v18 + 88);
    *(_DWORD*)(v18 + 80) = v20;
    *(_DWORD*)(v18 + 84) = v21;
    *(_BYTE*)(v18 + 88) = v22 | 0x10;
  }
  if ((a5 & 1) != 0) {
    v23 = "InfoTitleOn";
  }
  else {
    v23 = "InfoTitleOff";
  }
  if ((a5 & 1) != 0) {
    v24 = "Wdw_TitleOn_Status02";
  }
  else {
    v24 = "Wdw_TitleOff_Status02";
  }
  LayoutAccessor_1562cf0(a1 + 88, v23);
  LayoutAccessor_1562cf0(a1 + 88, "StatusDetailOff");
  LayoutAccessor_1562cf0(a1 + 88, "Status02");
  LayoutAccessor_1562cf0(a1 + 88, v24);
  GameRoutine_158ebe0_alt1(a1 + 88, a2, a3, a4);
  v25 = ui_LayoutAccessor_FindAlignment((__int64*)(a1 + 88),
                                        (__int64)"A_InfoDetail");
  if (v25 != 0) {
    Alignment_56b600(v25);
  }
  GameRoutine_18a5bc0_alt1(a1);
}

__int64 GameHr_18d17a0(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  int v5;

  if (*(_BYTE*)(a1 + 680) == 1) {
    GameRoutine_18cc630((_BYTE*)(a1 + 3096));
    GameRoutine_18cdc40(a1 + 4048);
    GameRoutine_1a0b5c0(a1 + 2400);
    v2 = a1 + 696;
    GameRoutine_1a09b70(a1 + 736);
    if (*(_QWORD*)(a1 + 768) == a1 + 696) {
      v4 = 0;
    }
    else if (*(_QWORD*)(a1 + 776) == v2) {
      v4 = 1;
    }
    else if (*(_QWORD*)(a1 + 784) == v2) {
      v4 = 2;
    }
    else {
      if (*(_QWORD*)(a1 + 792) != v2) {
        v3 = 23;
      LABEL_13:
        GameRoutine_1a09b80(a1 + 736);
        return v3;
      }
      v4 = 3;
    }
    GameRoutine_1a0a170(a1 + 696);
    v5 = *(_DWORD*)(a1 + 800);
    v3 = 0;
    *(_QWORD*)(a1 + 768 + 8 * v4) = 0;
    *(_DWORD*)(a1 + 800) = v5 - 1;
    goto LABEL_13;
  }
  return 0;
}

unsigned __int64 GameHr_18f34a0(__int64 a1, unsigned __int8* a2)
{
  unsigned __int8* v4;
  unsigned __int64 result;
  unsigned __int64 v6;
  unsigned __int64 v8;
  unsigned __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v21;
  unsigned __int64 v22;
  bool v23;
  unsigned __int64 v24;
  unsigned __int8* v25;
  unsigned __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  _BYTE* v33;
  unsigned __int64 v34;
  unsigned __int64 v36;
  unsigned __int64 v37;
  _QWORD* v38;
  _QWORD* v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;

  if ((*a2 & 1) != 0) {
    v4 = *((unsigned __int8**)a2 + 2);
  }
  else {
    v4 = a2 + 1;
  }
  result = GameRoutine_7a86e0(v4);
  if (result == 0) {
    goto LABEL_78;
  }
  v6 = *(_QWORD*)(GameData_21c9f40 + 96);
  if (v6 == 0 || *(_QWORD*)(GameData_21c9f40 + 112) == 0) {
    goto LABEL_78;
  }
  v8 = v6 - 1;
  if ((v6 & (v6 - 1)) != 0) {
    v9 = result;
    if (result >= v6) {
      v9 = result % v6;
    }
  }
  else {
    v9 = v8 & result;
  }
  v10 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f40 + 88) + 8 * v9);
  if (v10 == nullptr) {
    goto LABEL_78;
  }
  v11 = (_QWORD*)*v10;
  if (v11 == nullptr) {
    goto LABEL_78;
  }
  if ((v6 & v8) == 0) {
    while (1) {
      v13 = v11[1];
      if (v13 == result) {
        if (v11[2] == result) {
          goto LABEL_29;
        }
      }
      else if ((v13 & v8) != v9) {
        goto LABEL_78;
      }
      v11 = (_QWORD*)*v11;
      if (v11 == nullptr) {
        goto LABEL_78;
      }
    }
  }
  while (1) {
    v12 = v11[1];
    if (v12 == result) {
      break;
    }
    if (v12 >= v6) {
      v12 %= v6;
    }
    if (v12 != v9) {
      goto LABEL_78;
    }
  LABEL_18:
    v11 = (_QWORD*)*v11;
    if (v11 == nullptr) {
      goto LABEL_78;
    }
  }
  if (v11[2] != result) {
    goto LABEL_18;
  }
LABEL_29:
  v14 = v11[3];
  if (v14 == 0) {
    goto LABEL_78;
  }
  v15 = (_BYTE*)GameRoutine_18f4a00(v11[3]);
  if (v15 != nullptr && *v15 != 0) {
    result = a1 + 624;
    if ((unsigned __int8*)(a1 + 624) != a2) {
      v16 = *a2;
      if ((*(_BYTE*)result & 1) != 0) {
        v23 = (v16 & 1) == 0;
        v24 = v16 >> 1;
        if (v23) {
          v25 = a2 + 1;
        }
        else {
          v25 = *((unsigned __int8**)a2 + 2);
        }
        if (v23) {
          v26 = v24;
        }
        else {
          v26 = *((_QWORD*)a2 + 1);
        }
        result = GameRoutine_64dde0(result, v25, v26);
      }
      else if ((v16 & 1) != 0) {
        result =
            GameRoutine_64df20(result, *((_QWORD*)a2 + 2), *((_QWORD*)a2 + 1));
      }
      else {
        v17 = *(_QWORD*)a2;
        v18 = *((_QWORD*)a2 + 2);
        *(_QWORD*)(a1 + 632) = *((_QWORD*)a2 + 1);
        *(_QWORD*)(a1 + 640) = v18;
        *(_QWORD*)result = v17;
      }
    }
    v31 = *(_DWORD*)(v14 + 124);
    *(_QWORD*)(a1 + 672) = v14;
    *(_BYTE*)(a1 + 778) = v31 != 0;
    goto LABEL_78;
  }
  result = GameRoutine_7a86e0(*(_QWORD*)(v14 + 32));
  if (result == 0) {
    goto LABEL_74;
  }
  v19 = *(_QWORD*)(GameData_21c9f40 + 96);
  if (v19 == 0 || *(_QWORD*)(GameData_21c9f40 + 112) == 0) {
    goto LABEL_74;
  }
  v21 = v19 - 1;
  if ((v19 & (v19 - 1)) != 0) {
    v22 = result;
    if (result >= v19) {
      v22 = result % v19;
    }
  }
  else {
    v22 = v21 & result;
  }
  v27 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f40 + 88) + 8 * v22);
  if (v27 == nullptr) {
    goto LABEL_74;
  }
  v28 = (_QWORD*)*v27;
  if (v28 == nullptr) {
    goto LABEL_74;
  }
  if ((v19 & v21) == 0) {
    while (1) {
      v30 = v28[1];
      if (v30 == result) {
        if (v28[2] == result) {
          goto LABEL_70;
        }
      }
      else if ((v30 & v21) != v22) {
        goto LABEL_74;
      }
      v28 = (_QWORD*)*v28;
      if (v28 == nullptr) {
        goto LABEL_74;
      }
    }
  }
  while (2) {
    v29 = v28[1];
    if (v29 != result) {
      if (v29 >= v19) {
        v29 %= v19;
      }
      if (v29 != v22) {
        goto LABEL_74;
      }
    }
    else if (v28[2] == result) {
    LABEL_70:
      v32 = v28[3];
      if (v32 != 0) {
        result = GameRoutine_18f4a00(v28[3]);
        if (result != 0 && *(_BYTE*)result != 0) {
          *(_BYTE*)(a1 + 778) = *(_DWORD*)(v14 + 124) != 0;
          result = GameRoutine_60a020(a1 + 624, *(_QWORD*)(v32 + 32));
          *(_QWORD*)(a1 + 672) = v32;
          goto LABEL_78;
        }
      }
    LABEL_74:
      if ((*(_BYTE*)(a1 + 624) & 1) != 0) {
        v33 = *(_BYTE**)(a1 + 640);
        *(_QWORD*)(a1 + 632) = 0;
      }
      else {
        *(_BYTE*)(a1 + 624) = 0;
        v33 = (_BYTE*)(a1 + 625);
      }
      *v33 = 0;
      *(_QWORD*)(a1 + 672) = 0;
      *(_BYTE*)(a1 + 778) = 0;
    LABEL_78:
      if (*(_QWORD*)(a1 + 672) != 0) {
        return result;
      }
      result = GameRoutine_7a86e0("NoMap");
      if (result == 0) {
        goto LABEL_103;
      }
      v34 = *(_QWORD*)(GameData_21c9f40 + 96);
      if (v34 == 0 || *(_QWORD*)(GameData_21c9f40 + 112) == 0) {
        goto LABEL_103;
      }
      v36 = v34 - 1;
      if ((v34 & (v34 - 1)) != 0) {
        v37 = result;
        if (result >= v34) {
          v37 = result % v34;
        }
      }
      else {
        v37 = v36 & result;
      }
      v38 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f40 + 88) + 8 * v37);
      if (v38 == nullptr || (v39 = (_QWORD*)*v38) == nullptr) {
      LABEL_103:
        v41 = 0;
        goto LABEL_104;
      }
      if ((v34 & v36) == 0) {
        while (1) {
          v42 = v39[1];
          if (v42 == result) {
            if (v39[2] == result) {
              goto LABEL_106;
            }
          }
          else if ((v42 & v36) != v37) {
            goto LABEL_103;
          }
          v39 = (_QWORD*)*v39;
          v41 = 0;
          if (v39 == nullptr) {
            goto LABEL_104;
          }
        }
      }
      while (2) {
        v40 = v39[1];
        if (v40 != result) {
          if (v40 >= v34) {
            v40 %= v34;
          }
          if (v40 != v37) {
            goto LABEL_103;
          }
        }
        else if (v39[2] == result) {
        LABEL_106:
          v41 = v39[3];
        LABEL_104:
          *(_QWORD*)(a1 + 672) = v41;
          return result;
        }
        v39 = (_QWORD*)*v39;
        if (v39 == nullptr) {
          goto LABEL_103;
        }
        continue;
      }
    }
    v28 = (_QWORD*)*v28;
    if (v28 == nullptr) {
      goto LABEL_74;
    }
    continue;
  }
}

__int64 GameHr_18f3b60(__int64 a1, char a2, __int64* a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19;

  v17 = 0;
  v18 = 0;
  v16 = 0;
  v19 = a2;
  if (&v16 != a3) {
    if ((*(_BYTE*)a3 & 1) != 0) {
      GameRoutine_64df20(&v16, a3[2], a3[1]);
    }
    else {
      v4 = a3[1];
      v16 = *a3;
      v17 = v4;
      v18 = a3[2];
    }
  }
  v5 = GameData_212bf68;
  v6 = GameRoutine_651b90(*(_QWORD*)GameData_212bf68, 280, 16, 0);
  *(_QWORD*)(v6 + 16) = 0;
  v7 = v6;
  v8 = v6;
  v9 = GameData_212fd50[0];
  *(_QWORD*)v6 = GameData_210a630;
  *(_QWORD*)(v6 + 8) = 0;
  *(_QWORD*)(v6 + 40) = 0;
  *(_QWORD*)(v6 + 48) = 0;
  *(_BYTE*)(v6 + 56) = 0;
  *(_QWORD*)(v6 + 64) = 0;
  *(_QWORD*)(v6 + 72) = 0;
  *(_QWORD*)(v6 + 80) = 0;
  *(_QWORD*)(v6 + 88) = 0;
  *(_QWORD*)(v6 + 32) = 0;
  v10 = (_QWORD*)(v6 + 32);
  *(_QWORD*)(v8 + 96) = 0;
  *(_QWORD*)(v8 + 104) = 0;
  *(_QWORD*)(v8 + 112) = 0;
  *(_QWORD*)(v8 + 120) = 0;
  *(_QWORD*)(v8 + 128) = 0;
  *(_QWORD*)(v8 + 136) = 0;
  *(_QWORD*)(v8 + 144) = 0;
  *(_QWORD*)(v8 + 152) = 0;
  *(_QWORD*)(v8 + 160) = 0;
  *(_QWORD*)(v8 + 168) = 0;
  *(_QWORD*)(v8 + 176) = 0;
  *(_QWORD*)(v8 + 184) = 0;
  *(_QWORD*)(v8 + 192) = 0;
  *(_QWORD*)(v8 + 200) = 0;
  *(_QWORD*)(v8 + 208) = 0;
  *(_QWORD*)(v8 + 216) = 0;
  *(_QWORD*)(v8 + 224) = 0;
  *(_QWORD*)(v8 + 232) = 0;
  *(_QWORD*)(v8 + 240) = 0;
  *(_QWORD*)(v8 + 248) = 0;
  *(_QWORD*)(v8 + 256) = 0;
  *(_QWORD*)(v8 + 264) = 0;
  *(_QWORD*)(v8 + 272) = 0;
  *(_QWORD*)(v7 + 24) = v9 + 2;
  v11 = v7 + 24;
  if ((v16 & 1) != 0) {
    GameRoutine_64df20(v10, v18, v17);
  }
  else {
    v12 = v17;
    *v10 = v16;
    v10[1] = v12;
    v10[2] = v18;
  }
  *(_BYTE*)(v8 + 56) = v19;
  result = GameRoutine_102abb0(v11);
  *(_QWORD*)(a1 + 608) = v11;
  v14 = *(_QWORD*)(a1 + 616);
  *(_QWORD*)(a1 + 616) = v8;
  if (v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v14 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v14 + 16LL))(v14);
    result = GameRoutine_1a09c50(v14);
    if ((v16 & 1) == 0) {
      return result;
    }
  }
  else if ((v16 & 1) == 0) {
    return result;
  }
  if (v18 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v15 = 56;
    }
    return GameRoutine_1a0a4e0(*(_QWORD*)v5 + v15);
  }
  return result;
}

__int64 GameHr_18f9e80(_QWORD* a1)
{
  __int64 result;

  GameRoutine_18f9360((__int64)a1);
  GameRoutine_16e1ce0(a1);
  result = (*(__int64 (**)(_QWORD*))(*a1 + 168LL))(a1);
  if ((unsigned int)(result - 8) <= 0xFFFFFFF9) {
    return (*(__int64 (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  return result;
}

#pragma GCC visibility pop
