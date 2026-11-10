#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 ProcTempleMiracleMenu_Unknown143(__int64 a1);
__int64 Manager_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcTempleMiracleMenu_Unknown6(__int64 a1);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__n128 GameRoutine_15940f0(__int64, unsigned int, unsigned int);
__n128 std___1___shared_weak_count___release_weak();
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
extern __int64 game_GameModeData_instance_;
void GameRoutine_156c5d0(__int64, __int64, char);
__n128 ProcTempleMiracleMenu_Unknown84(__int64 a1);

__n128 ProcTempleMiracleMenu_Unknown84(__int64 a1)
{
  __int64 v2;
  char* v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  _BYTE* v13;
  __int64 v14;
  __int64 v15;
  char v16;
  int v17;
  char v18;
  char* v19;
  char v20;
  __n128 result;
  struct {
    _QWORD v22[6];
    int v23;
    int v24;
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
    __int64 v36;
    __int64 v37;
  } v22_;

  ui_LayoutAccessor_SetPaneVisible(a1 + 848, (__int64)"L_Num", 1);
  ui_LayoutAccessor_SetPaneVisible(a1 + 952, (__int64)"L_Num/L_KeyHelp", 0);
  v22_.v25 = -1;
  v22_.v26 = -1;
  v22_.v27 = -1;
  v22_.v28 = -1;
  v2 = *msg_MessageManager_instance__ptr[0];
  v22_.v29 = -1;
  v22_.v30 = -1;
  v22_.v31 = -1;
  v22_.v32 = -1;
  v22_.v33 = -1;
  v22_.v34 = -1;
  v22_.v35 = -1;
  v22_.v36 = -1;
  v22_.v22[2] = GameData_212e348 + 2;
  v22_.v22[3] = 0xFFFF0001FFFF0000LL;
  v22_.v22[4] = 0xFFFF0004FFFF0002LL;
  v22_.v22[5] = 0xFFFF0006FFFF0005LL;
  v22_.v37 = 8;
  v22_.v23 = -65529;
  v22_.v24 = -65528;
  v3 = GameRoutine_a4dbe0_alt1(v2, "MID_MiracleEquipMenu_EquippedNum", 0);
  if (v3 != nullptr) {
    v4 = (__int64)v3;
    v5 = ui_LayoutAccessor_FindTextBox((__int64*)(a1 + 848),
                                       (__int64)"L_Num/T_Txt");
    if (v5 != 0) {
      GameRoutine_156c5d0(v5, v4, 0);
    }
  }
  LayoutAccessor_1560070((void*)(v22_.v22), (__int64*)(a1 + 848),
                         (__int64)"L_Num");
  v7 = *(_QWORD*)(game_GameModeData_instance_ + 160);
  v8 = *(_QWORD*)(v7 + 8);
  v9 = *(_QWORD*)(v7 + 16) - v8;
  if ((int)(v9 >> 5) < 1) {
    v12 = 0;
    goto LABEL_14;
  }
  v10 = (unsigned __int8)v9 >> 5;
  if (((v9 >> 5) & 0x7FFFFFFF) - 1 >= 7) {
    v13 = (_BYTE*)(v8 + 136);
    v14 = 0;
    v12 = 0;
    v15 = -8LL * ((v9 >> 8) & 0xFFFFFFF);
    do {
      v14 -= 8;
      v16 = v13[96];
      v17 = v12 + (*(v13 - 128) & 1) + (*(v13 - 96) & 1) + (*(v13 - 64) & 1) +
            (*(v13 - 32) & 1) + (*v13 & 1) + (v13[32] & 1);
      v18 = v13[64];
      v13 += 256;
      v12 = v17 + (v18 & 1) + (v16 & 1);
    } while (v15 != v14);
    v11 = -v14;
    if (v10 == 0) {
      goto LABEL_14;
    }
    goto LABEL_12;
  }
  v11 = 0;
  v12 = 0;
  if ((unsigned __int8)v9 >> 5 != 0) {
  LABEL_12:
    v19 = (char*)(v8 + 32 * v11 + 8);
    do {
      v20 = *v19;
      v19 += 32;
      --v10;
      v12 += v20 & 1;
    } while (v10 != 0);
  }
LABEL_14:
  result = GameRoutine_15940f0((__int64)v22_.v22, v12, 4u);
  if (v22_.v22[1] != 0) {
    return std___1___shared_weak_count___release_weak();
  }
  return result;
}

__int64 ProcTempleMiracleMenu_Unknown143(__int64 a1)
{
  int v1;
  __int64* v2;
  __int64 v3;
  const char* v4;
  _QWORD v6[4];
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v1 = *(unsigned __int8*)(a1 + 1064);
  v2 = msg_MessageManager_instance__ptr[0];
  v3 = *msg_MessageManager_instance__ptr[0];
  if (v1 == 1) {
    v4 = "MID_MiracleEquipMenu_Info_Help";
  }
  else {
    GameRoutine_a51e10(v3 + 14704, 0, 4, 0);
    v3 = *v2;
    v4 = "MID_MiracleEquipMenu_Help";
  }
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v6[0] = GameData_212e348 + 2;
  v6[1] = 0xFFFF0001FFFF0000LL;
  v6[2] = 0xFFFF0004FFFF0002LL;
  v6[3] = 0xFFFF0006FFFF0005LL;
  v21 = 8;
  v7 = -65529;
  v8 = -65528;
  return GameRoutine_a4dbe0(v3, v4, 0, v6);
}

__int64 ProcTempleMiracleMenu_Unknown6(__int64 a1)
{
  int v1;
  __int64* v2;
  __int64 v3;
  const char* v4;
  _QWORD v6[4];
  int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v1 = *(unsigned __int8*)(a1 + 8);
  v2 = msg_MessageManager_instance__ptr[0];
  v3 = *msg_MessageManager_instance__ptr[0];
  if (v1 == 1) {
    v4 = "MID_MiracleEquipMenu_Info_Help";
  }
  else {
    Manager_a51e10(v3 + 14704, 0, 4, 0);
    v3 = *v2;
    v4 = "MID_MiracleEquipMenu_Help";
  }
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v6[0] = GameData_212e348 + 2;
  v6[1] = 0xFFFF0001FFFF0000LL;
  v6[2] = 0xFFFF0004FFFF0002LL;
  v6[3] = 0xFFFF0006FFFF0005LL;
  v21 = 8;
  v7 = -65529;
  v8 = -65528;
  return GameRoutine_a4dbe0(v3, v4, 0, v6);
}

#pragma GCC visibility pop
