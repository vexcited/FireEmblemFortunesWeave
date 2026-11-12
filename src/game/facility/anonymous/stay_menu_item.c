#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_947cc0(_QWORD);
bool StayMenuItem_Unknown58(__int64 a1);
_QWORD* GameRoutine_15e7650(_QWORD* result, int, __int64);
__int64 GameRoutine_16ee520(__int64);
__int64 VolunteerArgs_947cc0(int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_2061d18[])();
extern __int64* GameData_212dff0[12];
extern __int64* GameData_212e030[4];
unsigned __int64 GameRoutine_16ee370(__int64, __int64, _BYTE*);
__int64 game_facility_anonymous_StayMenuItem_UpdateHelp(__int64 a1);
_QWORD* GameRoutine_13fa790(__int64, __int64, __int64, __int64, __int64);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
__attribute__((swiftcall)) void Dir_70ea50(PSEUDO_X8, __int16* result,
                                           __int16*);
__int64 CorpsManager_971ee0(__int64);
__int64 Dialog_1649e50(__int64 result, const char*, char, char);
__int64 GameRoutine_17b9400(__int64 result, __int64);
__int64 GameRoutine_60a020(__int64, const char*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern __int64 (*GameData_2061c18[])();
extern __int64 (*GameData_2061c98[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64* GameData_212c790;
extern __int64* GameData_212d2b8;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char** msg_MessageManager_empty_text__ptr;
void* GameHr_67ed20(_QWORD*);
void* Unit_6c82e0(__int64);
void* game_97b2f0(__int64);
__int64 game_facility_anonymous_StayMenuItem_ACall(unsigned __int64 a1);

__int64 game_facility_anonymous_StayMenuItem_ACall(unsigned __int64 a1)
{
  __int64 v2;
  __int16* v3;
  __int64 v4;
  int v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64* v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  const char* v24;
  __int64 v25;
  const char* v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  char v30;
  const char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  struct {
    _QWORD v36[4];
    _QWORD* v37;
  } v36_;
  struct {
    _QWORD v38[4];
    _QWORD* v39;
  } v38_;
  const char* v40;
  struct {
    __int64 v41;
    int v42;
  } v41_;
  struct {
    __int64* v43;
    __int64 (*v44)();
    unsigned __int64 v45;
    unsigned __int64 v46;
    __int64** v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
    __int64 v59;
    __int64 v60;
  } v43_;

  if (((*(__int64 (**)(unsigned __int64))(*(_QWORD*)a1 + 464LL))(a1) & 1) ==
      0) {
    return 1;
  }
  if (*(_BYTE*)(a1 + 83) == 1) {
    v2 = game_gmap_GmapClock_instance_ + 8;
    if (game_gmap_GmapClock_instance_ != 0) {
      v3 = (__int16*)(game_gmap_GmapClock_instance_ + 20);
    }
    else {
      v2 = game_gmap_GmapClock_kDefaultTime_ptr;
      v3 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v4 = *(_QWORD*)v2;
    v5 = *(_DWORD*)(v2 + 8);
    v38_.v38[0] = v4;
    LODWORD(v38_.v38[1]) = v5;
    Dir_70ea50((void*)((__int64)&v43_.v43), (__int16*)v38_.v38, v3);
    v41_.v41 = 0;
    v41_.v42 = 0;
    v38_.v38[0] = v43_.v43;
    LODWORD(v38_.v38[1]) = (_DWORD)v43_.v44;
    GameRoutine_17b9400((__int64)v38_.v38, (__int64)&v41_.v41);
  }
  v6 = *(_QWORD*)(a1 + 8);
  v43_.v45 = a1;
  v40 = "MID_HotelMenu_Stay_Confirm";
  v38_.v39 = v38_.v38;
  v36_.v37 = v36_.v36;
  v43_.v43 = (__int64*)GameData_2061c18;
  v43_.v44 = (__int64 (*)())a1;
  v43_.v47 = &v43_.v43;
  v38_.v38[0] = GameData_2061c98;
  v38_.v38[1] = a1;
  v36_.v36[0] = GameData_2061c98;
  v36_.v36[1] = a1;
  v7 = GameRoutine_13fa790(v6, (__int64)&v40, (__int64)&v43_.v43,
                           (__int64)v38_.v38, (__int64)v36_.v36);
  if (v36_.v37 == v36_.v36) {
    v8 = 32;
  }
  else {
    if (v36_.v37 == nullptr) {
      goto LABEL_13;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v36_.v37 + v8))((__int64)v36_.v37);
LABEL_13:
  if (v38_.v39 == v38_.v38) {
    v10 = 32;
  }
  else {
    if (v38_.v39 == nullptr) {
      goto LABEL_18;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v38_.v39 + v10))((__int64)v38_.v39);
LABEL_18:
  if (v43_.v47 == &v43_.v43) {
    v11 = 4;
    goto LABEL_22;
  }
  if (v43_.v47 != nullptr) {
    v11 = 5;
  LABEL_22:
    ((void (*)(void*))(*v43_.v47)[v11])(v43_.v47);
  }
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
      (*(_BYTE*)(a1 + 84) & 1) != 0) {
    v12 = *(_QWORD*)(*GameData_212c790 + 8);
    v13 = *(_DWORD*)(v12 + 56);
    v14 = *(__int64**)(v12 + 8);
    v15 = *(__int64**)(v12 + 16);
    if (v13 < 0) {
      if (v14 != v15) {
        v19 = v14;
        while (1) {
          v17 = *v19;
          if (*(_QWORD*)(*v19 + 96) == 0 && *(_QWORD*)(v17 + 552) == 0) {
            break;
          }
          if (++v19 == v15) {
            goto LABEL_38;
          }
        }
      LABEL_39:
        if ((*(_QWORD*)(v17 + 96) | *(_QWORD*)(v17 + 552)) == 0 &&
            (*(_DWORD*)(v17 + 84) & 0x80000000) != 0) {
          v31 = "MID_HotelMenu_Stay_Part3Ism_Annotation";
          v32 = (__int64)v7;
          v30 = 0;
          goto LABEL_64;
        }
        if (v13 < 0) {
          if (v14 != v15) {
            while (1) {
              v20 = *v14;
              if (*(_QWORD*)(*v14 + 96) == 0 && *(_QWORD*)(v20 + 552) == 0) {
                break;
              }
              if (++v14 == v15) {
                goto LABEL_47;
              }
            }
          LABEL_48:
            v22 = *(_QWORD*)(v20 + 120);
            v23 = msg_MessageManager_instance__ptr[0];
            if (v22 != 0) {
              if (*(_BYTE*)(v22 + 2136) != 0) {
                v24 = (const char*)game_97b2f0(v22 + 2104);
              }
              else {
                v24 = (const char*)GameHr_67ed20(*(_QWORD**)(v22 + 392));
              }
            }
            else {
              v25 = *(_QWORD*)(v20 + 96);
              if (v25 != 0 || (v25 = *(_QWORD*)(v20 + 88)) != 0 ||
                  (v25 = *(_QWORD*)(v20 + 552)) != 0) {
                v26 = *(const char**)(v25 + 8);
                goto LABEL_61;
              }
              v35 = CorpsManager_971ee0(*(unsigned int*)(v20 + 84));
              if (v35 == 0) {
                v27 = *v23 + 14704;
                goto LABEL_62;
              }
              v24 = (const char*)Unit_6c82e0(v35);
            }
            v26 = v24;
          LABEL_61:
            v27 = *v23 + 14704;
            if (v26 != nullptr) {
            LABEL_63:
              GameRoutine_60a020(v27, v26);
              v28 = *v23;
              v43_.v48 = -1;
              v43_.v49 = -1;
              v43_.v50 = -1;
              v43_.v51 = -1;
              v43_.v52 = -1;
              v43_.v53 = -1;
              v43_.v54 = -1;
              v43_.v55 = -1;
              v43_.v56 = -1;
              v43_.v57 = -1;
              v43_.v58 = -1;
              v43_.v59 = -1;
              v43_.v43 = GameData_212e348 + 2;
              v43_.v44 = (__int64 (*)())0xFFFF0001FFFF0000LL;
              v43_.v45 = 0xFFFF0004FFFF0002LL;
              v43_.v46 = 0xFFFF0006FFFF0005LL;
              v43_.v60 = 8;
              v43_.v47 = (__int64**)0xFFFF0008FFFF0007LL;
              v29 = GameRoutine_a4dbe0(
                  v28, "MID_HotelMenu_Stay_Part3_Annotation", 0);
              v30 = 1;
              v31 = v29;
              v32 = (__int64)v7;
            LABEL_64:
              Dialog_1649e50(v32, v31, 1, v30);
              goto LABEL_65;
            }
          LABEL_62:
            v26 = *msg_MessageManager_empty_text__ptr;
            goto LABEL_63;
          }
        }
        else {
          while (v14 != v15) {
            v21 = *v14++;
            v20 = v21;
            if (*(_DWORD*)(v21 + 84) == v13) {
              goto LABEL_48;
            }
          }
        }
      LABEL_47:
        v20 = 0;
        goto LABEL_48;
      }
    }
    else if (v14 != v15) {
      v16 = v14;
      do {
        v18 = *v16++;
        v17 = v18;
        if (*(_DWORD*)(v18 + 84) == v13) {
          goto LABEL_39;
        }
      } while (v16 != v15);
    }
  LABEL_38:
    v17 = 0;
    goto LABEL_39;
  }
LABEL_65:
  v38_.v39 = v38_.v38;
  v43_.v47 = &v43_.v43;
  v38_.v38[0] = GameData_212d2b8 + 2;
  v38_.v38[1] = game_sound_PlayDecideLightSe_ptr[0];
  v43_.v43 = GameData_212d2b8 + 2;
  v43_.v44 = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(&v43_.v43, v7 + 144);
  if (v43_.v47 == &v43_.v43) {
    v33 = 4;
  }
  else {
    if (v43_.v47 == nullptr) {
      goto LABEL_70;
    }
    v33 = 5;
  }
  ((void (*)(void*))(*v43_.v47)[v33])(v43_.v47);
LABEL_70:
  if (v38_.v39 == v38_.v38) {
    v34 = 32;
    goto LABEL_74;
  }
  if (v38_.v39 != nullptr) {
    v34 = 40;
  LABEL_74:
    (*(void (**)(__int64))(*v38_.v39 + v34))((__int64)v38_.v39);
  }
  *((_DWORD*)v7 + 392) = *(_DWORD*)(a1 + 88);
  if (*(_BYTE*)(a1 + 83) == 1) {
    *((_DWORD*)v7 + 393) =
        (*(__int64 (**)(unsigned __int64))(*(_QWORD*)a1 + 568LL))(a1);
  }
  return 12;
}

bool StayMenuItem_Unknown58(__int64 a1)
{
  return (unsigned int)GameRoutine_947cc0(*(unsigned int*)(a1 + 88)) == 0;
}

__int64 game_facility_anonymous_StayMenuItem_UpdateHelp(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  struct {
    _QWORD v12[10];
    int v13;
    int v14;
    bool v15;
    char v16;
    char gap146_[2];
    int v17;
    int v18;
    bool v19;
  } v12_;

  v1 = *(_QWORD*)(a1 + 8);
  if (v1 != 0 && (v3 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                                      GameData_212dff0[0], 0)) != 0) {
    v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 1112LL))(v3);
  }
  else {
    v4 = v1 + 848;
  }
  GameRoutine_16ee370((__int64)v12_.v12, v4, "MID_HotelMenu_Stay_Help");
  v5 = VolunteerArgs_947cc0(*(_DWORD*)(a1 + 88));
  if ((*(_BYTE*)(a1 + 83) & 1) != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 568LL))(a1);
    v12_.v16 = 0;
    v12_.v13 = 5;
    v12_.v14 = v6;
    v12_.v15 = (v5 & 4) != 0;
  }
  v7 = *(_DWORD*)(a1 + 88);
  v12_.v19 = (v5 & 0x10) != 0;
  v10_.v11 = v10_.v10;
  v12_.v17 = 0;
  v12_.v18 = v7;
  v10_.v10[0] = GameData_2061d18;
  GameRoutine_15e7650(v12_.v12, v5, (__int64)v10_.v10);
  if (v10_.v11 == v10_.v10) {
    v8 = 32;
    goto LABEL_11;
  }
  if (v10_.v11 != nullptr) {
    v8 = 40;
  LABEL_11:
    (*(void (**)(__int64))(*v10_.v11 + v8))((__int64)v10_.v11);
  }
  return GameRoutine_16ee520((__int64)v12_.v12);
}

#pragma GCC visibility pop
