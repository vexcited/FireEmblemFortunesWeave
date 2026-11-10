#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_efdf40(_QWORD, _QWORD);
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212cc78[56];
bool WatchingMenuItem_Unknown58();
extern __int64 GameData_225c918;
__int64 game_facility_anonymous_WatchingMenuItem_ACall_closure_Invoke();
_QWORD* GameRoutine_16ef210(_QWORD* result, _QWORD*);
__int64* LayoutAccessor_155fbe0(__int64*, __int64);
__int64 GameRoutine_16ee520(__int64);
__int64 GameRoutine_16ef100(_QWORD*, __int64);
__int64 GameRoutine_17bed50(__int64*, __int16*);
__int64 GameRoutine_efdf40_alt1(__int64,
                                __int16*) __asm__("GameRoutine_efdf40");
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 Pane_58f8a0(__int64);
__int64 WatchingArenaFile_efe560(__int64, __int16*);
__int64 WatchingArenaFile_efeb20(__int64, __int16*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* GameRoutine_a4dbe0(__int64, _BYTE*, char);
extern _UNKNOWN* GameData_212da30;
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
unsigned __int64 GameRoutine_16ee370(__int64, __int64, _BYTE*);
void GameRoutine_156c5d0(__int64, __int64, char);
void LayoutAccessor_1562060(__int64*, __int64, _BYTE*);
__int64 WatchingMenuItem_Unknown73(_QWORD* a1);

bool WatchingMenuItem_Unknown58()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v0 = GameData_212cc78[0];
  v1 = *GameData_212cc78[0];
  if (game_gmap_GmapClock_instance_ != 0) {
    v2 = game_gmap_GmapClock_instance_ + 8;
  }
  else {
    v2 = game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v4 = v1 + 64;
  v3 = *(_QWORD*)(v1 + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(v4 + 8) - v3) >> 3) < 1) {
    return false;
  }
  v5 = 0;
  while ((GameRoutine_efdf40(*(_QWORD*)(v3 + 8 * v5), v2) & 1) == 0) {
    ++v5;
    v3 = *(_QWORD*)(*v0 + 64);
    if (v5 >= (int)((unsigned __int64)(*(_QWORD*)(*v0 + 72) - v3) >> 3)) {
      return false;
    }
  }
  return *(_QWORD*)(*(_QWORD*)(*v0 + 64) + 8 * v5) != 0;
}

__int64 WatchingMenuItem_Unknown73(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int16* v6;
  __int64 v7;
  __int64 v8;
  __int16* v9;
  char v10;
  __int16* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int16* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int16* v21;
  unsigned int v22;
  unsigned int v23;
  char v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  unsigned __int16 v29;
  __int16 v30;
  __int64* v31;
  __int16 v32;
  int v33;
  __int16* v34;
  int v35;
  char* v36;
  int v37;
  __int64 v38;
  __int64 v39;
  const char* v40;
  __int64 v41;
  char* v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int16* v47;
  __int64 v48;
  struct {
    _QWORD v49[19];
    char gap160_[4];
    unsigned int v50;
    unsigned int v51;
    bool v52;
    char v53;
  } v49_;
  struct {
    _QWORD v54[2];
    unsigned __int64 v55;
    unsigned __int64 v56;
    unsigned __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
    __int64 v67;
    __int64 v68;
    __int64 v69;
    __int64 v70;
  } v54_;

  v1 = a1[1];
  v3 = game_gmap_GmapClock_kDefaultTime_ptr;
  v4 = GameData_212cc78[0];
  v5 = *GameData_212cc78[0];
  if (game_gmap_GmapClock_instance_ != 0) {
    v6 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v6 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v7 = *(_QWORD*)(v5 + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(v5 + 72) - v7) >> 3) < 1) {
    goto LABEL_10;
  }
  v8 = 0;
  while ((GameRoutine_efdf40_alt1(*(_QWORD*)(v7 + 8 * v8), v6) & 1) == 0) {
    v5 = *v4;
    ++v8;
    v7 = *(_QWORD*)(*v4 + 64);
    if (v8 >= (int)((unsigned __int64)(*(_QWORD*)(*v4 + 72) - v7) >> 3)) {
      goto LABEL_10;
    }
  }
  v5 = *v4;
  if (*(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8 * v8) == 0) {
  LABEL_10:
    if (game_gmap_GmapClock_instance_ != 0) {
      v9 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v9 = (__int16*)v3;
    }
    if (WatchingArenaFile_efe560(v5, v9) == 0) {
      if (game_gmap_GmapClock_instance_ != 0) {
        v11 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
      }
      else {
        v11 = (__int16*)v3;
      }
      v10 = WatchingArenaFile_efeb20(*v4, v11) != 0;
      goto LABEL_19;
    }
  }
  v10 = 1;
LABEL_19:
  ui_LayoutAccessor_SetPaneVisible(v1 + 848, (__int64)"N_HelpDetail", v10);
  v12 = a1[1];
  if (v12 != 0 && (v13 = __dynamic_cast(a1[1], GameData_212e030[0],
                                        GameData_212dff0[0], 0)) != 0) {
    v14 = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 1112LL))(v13);
  }
  else {
    v14 = v12 + 848;
  }
  GameRoutine_16ee370((__int64)v49_.v49, v14, "MID_ArenaMenu_Watching_Help");
  v15 = *v4;
  if (game_gmap_GmapClock_instance_ != 0) {
    v16 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v16 = (__int16*)v3;
  }
  v18 = v15 + 64;
  v17 = *(_QWORD*)(v15 + 64);
  if ((int)((unsigned __int64)(*(_QWORD*)(v18 + 8) - v17) >> 3) < 1) {
  LABEL_30:
    v20 = 0;
  }
  else {
    v19 = 0;
    while ((GameRoutine_efdf40_alt1(*(_QWORD*)(v17 + 8 * v19), v16) & 1) == 0) {
      ++v19;
      v17 = *(_QWORD*)(*v4 + 64);
      if (v19 >= (int)((unsigned __int64)(*(_QWORD*)(*v4 + 72) - v17) >> 3)) {
        goto LABEL_30;
      }
    }
    v20 = *(_QWORD*)(*(_QWORD*)(*v4 + 64) + 8 * v19);
  }
  ui_LayoutAccessor_SetPaneVisible(a1[1] + 848LL, (__int64)"N_Reception",
                                   v20 != 0);
  if (v20 != 0 || (game_gmap_GmapClock_instance_ != 0
                       ? (v21 = (__int16*)(game_gmap_GmapClock_instance_ + 8))
                       : (v21 = (__int16*)v3),
                   (v20 = WatchingArenaFile_efe560(*v4, v21)) != 0)) {
    v22 = (unsigned int)(5243 * (*(unsigned __int16*)(v20 + 92) >> 2)) >> 17;
    v23 = (unsigned int)(5243 * (*(unsigned __int16*)(v20 + 94) >> 2)) >> 17;
    v24 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
    v49_.v50 = v22;
    v49_.v51 = v23;
    v49_.v53 = 1;
    v49_.v52 = (v24 & 1) == 0;
  }
  else {
    if (game_gmap_GmapClock_instance_ != 0) {
      v47 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v47 = (__int16*)v3;
    }
    v48 = WatchingArenaFile_efeb20(*v4, v47);
    if (v48 == 0) {
      GameRoutine_16ef100(v49_.v49, (__int64)"MID_Menu_Cause_NotWatching");
      goto LABEL_56;
    }
    v20 = v48;
    GameRoutine_16ef100(v49_.v49, (__int64)"MID_Menu_Cause_FinishedWatching");
  }
  LayoutAccessor_1562060((__int64*)(a1[1] + 848LL), (__int64)"T_Txt",
                         *(_BYTE**)(v20 + 32));
  v25 = a1[1];
  if (v25 != 0 && (v26 = __dynamic_cast(a1[1], GameData_212e030[0],
                                        GameData_212dff0[0], 0)) != 0) {
    v27 = (__int64*)(*(__int64 (**)(__int64))(*(_QWORD*)v26 + 1112LL))(v26);
  }
  else {
    v27 = (__int64*)(v25 + 848);
  }
  v28 = LayoutAccessor_155fbe0(v27, (__int64)"L_ReceptionTime");
  v29 = *(_WORD*)(v20 + 92);
  v30 = *(unsigned __int8*)(v20 + 90);
  v31 = v28;
  v32 = *(unsigned __int8*)(v20 + 91);
  LOWORD(v54_.v54[0]) = *(_WORD*)(v20 + 88);
  WORD1(v54_.v54[0]) = v30;
  WORD2(v54_.v54[0]) = v32;
  HIWORD(v54_.v54[0]) = v29 / 0x64u;
  LODWORD(v54_.v54[1]) = v29 % 0x64u;
  GameRoutine_17bed50(v28, (__int16*)v54_.v54);
  v33 = 10000 * *(__int16*)(v20 + 88) + 100 * *(unsigned __int8*)(v20 + 90) +
        *(unsigned __int8*)(v20 + 91);
  if (game_gmap_GmapClock_instance_ != 0) {
    v34 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v34 = (__int16*)v3;
  }
  v35 = 10000 * *v34 + 100 * v34[1] + v34[2];
  v36 = (char*)GameData_212da30 + 60;
  if (v33 == v35) {
    v36 = (char*)GameData_212da30 + 36;
  }
  v37 = *(_DWORD*)v36;
  v38 = ui_LayoutAccessor_FindTextBox(v31, (__int64)"T_Date");
  if (v38 != 0) {
    v39 = Pane_58f8a0(v38);
    if (v39 != 0) {
      *(_DWORD*)(v39 + 12) = v37;
    }
  }
  if (v33 == v35) {
    v40 = "ReceptionTime_Default";
  }
  else {
    v40 = "ReceptionDate_Red";
  }
  LayoutAccessor_1562cf0((__int64)v31, (__int64)v40);
  v54_.v58 = -1;
  v54_.v59 = -1;
  v54_.v60 = -1;
  v54_.v61 = -1;
  v41 = *msg_MessageManager_instance__ptr[0];
  v54_.v62 = -1;
  v54_.v63 = -1;
  v54_.v64 = -1;
  v54_.v65 = -1;
  v54_.v66 = -1;
  v54_.v67 = -1;
  v54_.v68 = -1;
  v54_.v69 = -1;
  v54_.v54[0] = GameData_212e348 + 2;
  v54_.v54[1] = 0xFFFF0001FFFF0000LL;
  v54_.v55 = 0xFFFF0004FFFF0002LL;
  v54_.v56 = 0xFFFF0006FFFF0005LL;
  v54_.v70 = 8;
  v54_.v57 = 0xFFFF0008FFFF0007LL;
  v42 = GameRoutine_a4dbe0(v41, "MID_ArenaMenu_Watching_Period", 0);
  if (v42 != nullptr) {
    v43 = (__int64)v42;
    v44 = ui_LayoutAccessor_FindTextBox(v31, (__int64)"T_Txt");
    if (v44 != 0) {
      GameRoutine_156c5d0(v44, v43, 0);
    }
  }
LABEL_56:
  v45 = (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[1] + 192LL))(a1[1]);
  BYTE4(v54_.v56) = 0;
  v54_.v57 = 0;
  v54_.v54[0] = "Tutorial";
  v54_.v54[1] = "MID_KeyHelp_Tutorial";
  LOBYTE(v54_.v55) = 1;
  HIDWORD(v54_.v55) = 10;
  LODWORD(v54_.v56) = v45;
  GameRoutine_16ef210(v49_.v49, v54_.v54);
  return GameRoutine_16ee520((__int64)v49_.v49);
}

__int64 game_facility_anonymous_WatchingMenuItem_ACall_closure_Invoke()
{
  if (GameData_225c918 != 0) {
    *(_DWORD*)(GameData_225c918 + 152) = 3;
  }
  return 4;
}

#pragma GCC visibility pop
