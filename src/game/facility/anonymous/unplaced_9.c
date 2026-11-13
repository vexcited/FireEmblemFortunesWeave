#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int16* game_8697c0(__int16* result, char, float);
__int64 FacilitySceneBase_1958ea0();
__int64 GameRoutine_1553130(__int64 result);
__int64 ProcGameUIFade_15e1e60(__int64, __int64, __int64);
__int64 ProcRegistry_65a2e0(_QWORD*, _QWORD*);
__int64 game_GameView_Update();
extern _DWORD* GameData_212d168;
extern _DWORD GameData_21d925c[32];
extern __int64 (*GameData_21198a0[])();
extern __int64 (*GameData_2119920[])();
extern __int64 (*GameData_21199c0[])();
extern __int64 GameData_212c638;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern int GameData_21d92dc;
void GameHr_8679c0();
__int64 game_facility_anonymous_15edd80(_QWORD* a1);

__int64 game_facility_anonymous_15edd80(_QWORD* a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 result;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  int v8;
  float v9;
  _DWORD* v10;
  __int64 v11;
  int v12;
  __int16* v13;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD v18[4];
  _QWORD* v19;
  _QWORD v20[4];
  _QWORD* v21;
  _QWORD v22[4];
  _QWORD* v23;
  __int64 v24;
  __int64 v25;

  result = (__int64)(a1 + 26);
  if (a1 == nullptr) {
    return result;
  }
  v24 = v1;
  v25 = v2;
  v5 = result;
  if ((*(_BYTE*)(result + 12) & 1) != 0) {
    return result;
  }
  v6 = a1;
  GameHr_8679c0();
  v7 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v8 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v8 & 0x10) == 0) {
      v9 = *(float*)(game_ProcGameSkipView_instance_ + 224);
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v8 & 0xFFFFFFE2 | 1;
      if (v9 > 0x0.0p+0f) {
        *(_DWORD*)(v7 + 224) = 0;
      }
    }
  }
  v10 = (_DWORD*)GameData_212d168;
  v11 = GameData_21d92dc;
  v12 = *GameData_212d168;
  ++GameData_21d92dc;
  GameData_21d925c[v11] = v12;
  *(_DWORD*)v10 = 2;
  game_GameView_Update();
  v22[0] = "Facility";
  v22[1] = 8;
  ProcRegistry_65a2e0(v6, v22);
  *(_DWORD*)(v5 + 8) = ((*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) -
                         *(_QWORD*)(*(_QWORD*)GameData_212c638 + 24LL)) >>
                        3) -
                       1;
  *(_BYTE*)(v5 + 12) = 1;
  game_GameView_Update();
  if (game_gmap_GmapClock_instance_ != 0) {
    v13 = (__int16*)(game_gmap_GmapClock_instance_ + 32);
  }
  else {
    v13 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  if (v13[1] * *v13 * v13[2] != 0 ||
      (game_gmap_GmapClock_instance_ != 0
           ? (v13 = (__int16*)(game_gmap_GmapClock_instance_ + 8))
           : (v13 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr),
       game_gmap_GmapClock_instance_ == 0)) {
    v14 = 0x0.0p+0f;
  }
  else {
    v14 = *(float*)(game_gmap_GmapClock_instance_ + 44);
  }
  game_8697c0(v13, 0, v14);
  if ((*(_BYTE*)(v5 + 28) & 1) == 0) {
    GameRoutine_1553130(17);
    *(_DWORD*)(v5 + 24) = 17;
    *(_BYTE*)(v5 + 28) = 1;
  }
  v22[0] = GameData_21198a0;
  v22[1] = v5;
  v23 = v22;
  v20[0] = GameData_2119920;
  v20[1] = FacilitySceneBase_1958ea0;
  v19 = v18;
  v21 = v20;
  v18[0] = GameData_21199c0;
  ProcGameUIFade_15e1e60((__int64)v22, (__int64)v20, (__int64)v18);
  if (v19 == v18) {
    v15 = 32;
  }
  else {
    if (v19 == nullptr) {
      goto LABEL_24;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))(*v19 + v15))((__int64)v19);
LABEL_24:
  if (v21 == v20) {
    v16 = 32;
    goto LABEL_28;
  }
  if (v21 != nullptr) {
    v16 = 40;
  LABEL_28:
    (*(void (**)(__int64))(*v21 + v16))((__int64)v21);
  }
  result = (__int64)v23;
  if (v23 == v22) {
    v17 = 32;
  }
  else {
    if (v23 == nullptr) {
      return result;
    }
    v17 = 40;
  }
  return (*(__int64 (**)(__int64))(*v23 + v17))((__int64)v23);
}

#pragma GCC visibility pop
