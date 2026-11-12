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
__int64 game_11912b0(__int64, _BYTE**, const char*, __int64);
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
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
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
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
  } v14_;
  const char* v29;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
  v9 = COERCE_AS(__typeof__(v9),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
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
  v29 = "MID_DownDifficulty_Result";
  if ((unsigned int)v2 <= 2 && *(v5 = GameData_207a2b8[v2]) != 0) {
    v6 = v4;
    v14_.v16 = -1;
    v14_.v17 = -1;
    v14_.v18 = -1;
    v14_.v19 = -1;
    v7 = *msg_MessageManager_instance__ptr[0];
    v14_.v20 = -1;
    v14_.v21 = -1;
    v14_.v22 = -1;
    v14_.v23 = -1;
    v14_.v24 = -1;
    v14_.v25 = -1;
    v14_.v26 = -1;
    v14_.v27 = -1;
    v14_.v14[0] = GameData_212e348 + 2;
    v14_.v14[1] = 0xFFFF0001FFFF0000LL;
    v14_.v14[2] = 0xFFFF0004FFFF0002LL;
    v14_.v14[3] = 0xFFFF0006FFFF0005LL;
    v14_.v28 = 8;
    v14_.v15 = (_QWORD*)0xFFFF0008FFFF0007LL;
    v8 = GameRoutine_a4dbe0_alt1(v7, v5, 0),
    v10 = COERCE_AS(__typeof__(v10),
                    PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
    v11 = COERCE_AS(__typeof__(v11),
                    PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
    v9 = COERCE_AS(__typeof__(v9),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v4 = v6;
  }
  else {
    v8 = *msg_MessageManager_empty_text__ptr;
  }
  v14_.v15 = nullptr;
  game_11912b0(v4, (_BYTE**)&v29, v8, (__int64)v14_.v14),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
      v9 = COERCE_AS(__typeof__(v9),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (v14_.v15 == v14_.v14) {
    v12 = 32;
    goto LABEL_14;
  }
  if (v14_.v15 != nullptr) {
    v12 = 40;
  LABEL_14:
    (*(void (**)(_QWORD*, __int64, __int64, __int64))(*v14_.v15 + v12))(
        v14_.v15, v9, v10, v11),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r")),
        v9 = COERCE_AS(__typeof__(v9),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  return 2;
}

#pragma GCC visibility pop
