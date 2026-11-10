#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_11912b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* GameData_207a2b8[3];
extern char** msg_MessageManager_empty_text__ptr;
__int64
game_facility_anonymous_DownDifficultyItem_ACall_closure_Invoke(__int64 a1);
__int64

game_facility_anonymous_DownDifficultyItem_ACall_closure_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v11[4];
  _QWORD* v12;
  __int64 v13;
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
  const char* v26;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(unsigned __int8*)(a1 + 16);
  if (game_GameModeData_instance_ != 0) {
    *(_BYTE*)(game_GameModeData_instance_ + 13) = v2;
  }
  v3 = *(_QWORD*)(v1 + 8);
  if (*(_QWORD*)(v3 + 152) != 0) {
    v4 = *(_QWORD*)(v3 + 152);
  }
  else {
    v4 = v3;
  }
  v26 = "MID_DownDifficulty_Result";
  if ((unsigned int)v2 <= 2 && *(v5 = GameData_207a2b8[v2]) != 0) {
    v6 = v4;
    v13 = -1;
    v14 = -1;
    v15 = -1;
    v16 = -1;
    v7 = *msg_MessageManager_instance__ptr[0];
    v17 = -1;
    v18 = -1;
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v11[0] = GameData_212e348 + 2;
    v11[1] = 0xFFFF0001FFFF0000LL;
    v11[2] = 0xFFFF0004FFFF0002LL;
    v11[3] = 0xFFFF0006FFFF0005LL;
    v25 = 8;
    v12 = (_QWORD*)0xFFFF0008FFFF0007LL;
    v8 = GameRoutine_a4dbe0(v7, v5, 0, v11);
    v4 = v6;
  }
  else {
    v8 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  v12 = nullptr;
  GameRoutine_11912b0(v4, &v26, v8, v11);
  if (v12 == v11) {
    v9 = 32;
    goto LABEL_14;
  }
  if (v12 != nullptr) {
    v9 = 40;
  LABEL_14:
    (*(void (**)(void*))(*v12 + v9))(v12);
  }
  return 2;
}

#pragma GCC visibility pop
