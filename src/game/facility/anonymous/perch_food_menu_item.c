#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern __int64 GameData_225b938;
__int64 game_facility_anonymous_PerchFoodMenuItem_ACall_closure_Invoke();
_QWORD* GameRoutine_13fa790(__int64, __int64, __int64, __int64, __int64);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
char* GameHr_67ed20(_QWORD*);
extern __int64 (*GameData_2115048[])();
extern __int64 (*GameData_21150c8[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64* GameData_212d2b8;
extern __int64* GameData_212dcd0;
extern __int64 game_TransporterConst_List_instance__ptr[6];
void* game_97b2f0(__int64);
void game_16ad210(__int64, __int64, char, __int64);
__int64 game_facility_anonymous_PerchFoodMenuItem_ACall(__int64 a1);

__int64 game_facility_anonymous_PerchFoodMenuItem_ACall(__int64 a1)
{
  __int64* v1;
  int v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  void* v17;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;
  struct {
    __int64 (*v21[4])();
    __int64 (**v22)();
  } v21_;
  struct {
    __int64 (*v23[4])();
    __int64 (**v24)();
  } v23_;
  const char* v25;

  v1 = GameData_212dcd0;
  v2 = *(_DWORD*)(a1 + 40);
  v23_.v23[0] = (__int64 (*)())GameData_2115048;
  *(_DWORD*)(*GameData_212dcd0 + 16) = v2;
  v19_.v20 = v19_.v19;
  v3 = *(_QWORD*)(a1 + 8);
  v25 = "MID_PerchMenu_Confirm";
  if (*(_QWORD*)(v3 + 152) != 0) {
    v4 = *(_QWORD*)(v3 + 152);
  }
  else {
    v4 = v3;
  }
  v23_.v24 = v23_.v23;
  v21_.v22 = v21_.v21;
  v21_.v21[0] = (__int64 (*)())GameData_21150c8;
  v19_.v19[0] = GameData_21150c8;
  v5 = GameRoutine_13fa790(v4, (__int64)&v25, (__int64)v23_.v23,
                           (__int64)v21_.v21, (__int64)v19_.v19);
  if (v19_.v20 == v19_.v19) {
    v6 = 32;
  }
  else {
    if (v19_.v20 == nullptr) {
      goto LABEL_9;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v19_.v20 + v6))((__int64)v19_.v20);
LABEL_9:
  if (v21_.v22 == v21_.v21) {
    v7 = 32;
  }
  else {
    if (v21_.v22 == nullptr) {
      goto LABEL_14;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))((char*)*v21_.v22 + v7))((__int64)v21_.v22);
LABEL_14:
  if (v23_.v24 == v23_.v23) {
    v8 = 32;
  }
  else {
    if (v23_.v24 == nullptr) {
      goto LABEL_19;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))((char*)*v23_.v24 + v8))((__int64)v23_.v24);
LABEL_19:
  v21_.v22 = v21_.v21;
  v23_.v24 = v23_.v23;
  v21_.v21[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v21_.v21[1] = game_sound_PlayDecideLightSe_ptr[0];
  v23_.v23[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v23_.v23[1] = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(v23_.v23, v5 + 144);
  if (v23_.v24 == v23_.v23) {
    v9 = 32;
  }
  else {
    if (v23_.v24 == nullptr) {
      goto LABEL_24;
    }
    v9 = 40;
  }
  (*(void (**)(__int64))((char*)*v23_.v24 + v9))((__int64)v23_.v24);
LABEL_24:
  if (v21_.v22 == v21_.v21) {
    v10 = 32;
    goto LABEL_28;
  }
  if (v21_.v22 != nullptr) {
    v10 = 40;
  LABEL_28:
    (*(void (**)(__int64))((char*)*v21_.v22 + v10))((__int64)v21_.v22);
  }
  v11 = *v1;
  v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                  game_TransporterConst_List_instance__ptr[0] +
                              8LL) +
                   8LL) +
        12LL * *(int*)(*v1 + 16);
  v13 = *(_BYTE*)(v12 + 6);
  *((_WORD*)v5 + 790) = *(_WORD*)(v12 + 4);
  *((_BYTE*)v5 + 1582) = v13;
  *((_BYTE*)v5 + 1583) = *(_BYTE*)(v12 + 7);
  *((_DWORD*)v5 + 396) = *(_DWORD*)(v12 + 8);
  v15 = v11 + 48;
  v14 = *(__int64**)(v11 + 48);
  if (*(__int64**)(v15 + 8) != v14) {
    v16 = *v14;
    if (*v14 != 0) {
      if (*(_BYTE*)(v16 + 2136) != 0) {
        v17 = game_97b2f0(v16 + 2104);
      }
      else {
        v17 = GameHr_67ed20(*(_QWORD**)(v16 + 392));
      }
      game_16ad210((__int64)v5, *(_QWORD*)(v16 + 392), 6, (__int64)v17);
    }
  }
  return 12;
}

__int64 game_facility_anonymous_PerchFoodMenuItem_ACall_closure_Invoke()
{
  if (GameData_225b938 != 0) {
    *(_DWORD*)(GameData_225b938 + 152) = 2;
  }
  return 4;
}

#pragma GCC visibility pop
