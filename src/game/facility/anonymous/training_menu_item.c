#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ed000(void);
__int64 GameRoutine_16ed430(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ef100(_QWORD, _QWORD);
__int64 GameRoutine_871860(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_94e9c0(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1faf558[])();
extern __int64 (*GameData_1fb4988[])();
extern __int64 (*GameData_1fb4a08[])();
extern __int64 GameData_212c6c0[2];
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 TrainingMenuItem_Unknown25(__int64 a1);
__int64 TrainingMenuItem_Unknown76(__int64 a1, __int64 a2, int a3);
__int64 TrainingMenuItem_Unknown55(__int64 a1);
__int64 TrainingMenuItem_Unknown73_15f65b0(_QWORD* a1);
extern __int64 GameData_2247280;
__int64 game_facility_anonymous_TrainingMenuItem_ACall_closure_Invoke();

__int64 TrainingMenuItem_Unknown25(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;
  _QWORD v11[4];
  _QWORD* v12;
  _QWORD v13[4];
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  const char* v17;

  if (*(_DWORD*)(a1 + 84) != 0) {
    return 1;
  }
  v15 = v1;
  v16 = v2;
  v4 = *(_QWORD*)(a1 + 8);
  v17 = "MID_SortiePlanMenu_Training_Confirm";
  v13[0] = GameData_1fb4988;
  v10 = v9;
  if (*(_QWORD*)(v4 + 152) != 0) {
    v5 = *(_QWORD*)(v4 + 152);
  }
  else {
    v5 = v4;
  }
  v14 = v13;
  v12 = v11;
  v11[0] = GameData_1fb4a08;
  v9[0] = GameData_1fb4a08;
  GameRoutine_871860(v5, &v17, v13, v11, v9);
  if (v10 == v9) {
    v6 = 32;
  }
  else {
    if (v10 == nullptr) {
      goto LABEL_11;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v10 + v6))((__int64)v10);

LABEL_11:
  if (v12 == v11) {
    v7 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_16;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v12 + v7))((__int64)v12);

LABEL_16:
  if (v14 == v13) {
    v8 = 32;
    goto LABEL_20;
  }
  if (v14 != nullptr) {
    v8 = 40;
  LABEL_20:
    (*(void (**)(__int64))(*v14 + v8))((__int64)v14);
  }
  return 12;
}

__int64 TrainingMenuItem_Unknown76(__int64 a1, __int64 a2, int a3)
{
  __int64 result;

  if ((a3 & 0x100000) != 0) {
    return GameRoutine_16ef100(a2, "MID_Menu_Cause_NotPerson_BottomUp");
  }
  return result;
}

__int64 game_facility_anonymous_TrainingMenuItem_ACall_closure_Invoke()
{
  if (GameData_2247280 != 0) {
    *(_DWORD*)(GameData_2247280 + 168) = 3;
  }
  return 4;
}

__int64 TrainingMenuItem_Unknown55(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int16* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  char v11;
  _QWORD v13[4];
  _QWORD* v14;
  __int64 v15;

  GameRoutine_16ed000();
  v2 = v13;
  v13[0] = GameData_1faf558;
  v14 = v13;
  v3 = *(_QWORD*)GameData_212c6c0[0];
  if (*(_QWORD*)GameData_212c6c0[0] == 0) {
    v11 = 0;
    v10 = 32;
    goto LABEL_18;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v4 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v5 = *(_QWORD*)(v3 + 16);
  v6 = *(_QWORD*)(v3 + 24);
  if (v5 != v6) {
    v7 = *v4;
    v8 = v4[1];
    v9 = v4[2];
    v10 = 32;
    while (v7 != *(unsigned __int16*)(v5 + 4) ||
           v8 != *(unsigned __int8*)(v5 + 6) ||
           v9 != *(unsigned __int8*)(v5 + 7)) {
      v5 += 368;
      if (v5 == v6) {
        v11 = 0;
        v2 = v13;
        goto LABEL_18;
      }
    }
  }
  v2 = v13;
  v10 = 32;
  v11 = 0;
  if (v5 == v6 || v5 == 0) {
    goto LABEL_18;
  }
  v15 = v5;
  v11 = GameRoutine_94e9c0(v13, &v15);
  v2 = v14;
  if (v14 == v13) {
    v10 = 32;
    goto LABEL_18;
  }
  if (v14 != nullptr) {
    v10 = 40;
  LABEL_18:
    (*(void (**)(_QWORD*))(*v2 + v10))(v2);
  }
  return GameRoutine_16ed430(a1, v11 & 1, 0);
}

__int64 TrainingMenuItem_Unknown73_15f65b0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v11[4];
  int v12;
  int v13;
  __int64 v14;
  __int64 v15;
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

  (*(void (**)(_QWORD*, __int64))(*a1 + 592LL))(a1, 1);
  v2 = a1[1];
  if (v2 != 0 && (v3 = __dynamic_cast(a1[1], GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v2 + 848;
  }
  v5 = GameRoutine_155fbe0(v4, "L_ReceptionTime");
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v6 = *msg_MessageManager_instance__ptr[0];
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v11[0] = GameData_212e348 + 2;
  v11[1] = 0xFFFF0001FFFF0000LL;
  v11[2] = 0xFFFF0004FFFF0002LL;
  v11[3] = 0xFFFF0006FFFF0005LL;
  v26 = 8;
  v12 = -65529;
  v13 = -65528;
  v7 = GameRoutine_a4dbe0(v6, "MID_Facility_OpeningHour", 0, v11);
  if (v7 != 0) {
    v8 = v7;
    v9 = ui_LayoutAccessor_FindTextBox(v5, "T_Txt");
    if (v9 != 0) {
      GameRoutine_156c5d0(v9, v8, 0);
    }
  }
  return ui_LayoutAccessor_SetPaneVisible(a1[1] + 848LL, "N_HelpDetail", 0);
}

#pragma GCC visibility pop
