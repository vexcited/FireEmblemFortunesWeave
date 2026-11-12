#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_1760e40(__int64, unsigned int);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 ui_LayoutAccessor_FindPane(__int64*, const char*);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, const char*);
char* GameRoutine_a4dbe0(__int64, const char*, char);
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
void* GameHr_67ed20(_QWORD*);
void* game_97b2f0(__int64);
void GameRoutine_156c5d0(__int64, __int64, char);
__int64 TelopSpeechResult_Unknown57(__int64* a1);

__int64 TelopSpeechResult_Unknown57(__int64* a1)
{
  __int64* v2;
  const char* v3;
  __int64 v4;
  const char* v5;
  __int64* v6;
  const char* v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = GameRoutine_1760e40((__int64)a1, 0xBu);
  if ((*(unsigned int (**)(__int64*))(*a1 + 464))(a1) != 0) {
    v3 = "MID_Sys_Result_Msg_Recruit_Boost";
  }
  else {
    v3 = "MID_Sys_Result_Msg_Recruit_Boost_Bad";
  }
  v4 = a1[146];
  if (*(_BYTE*)(v4 + 2136) != 0) {
    v5 = (const char*)game_97b2f0(v4 + 2104);
  }
  else {
    v5 = (const char*)GameHr_67ed20(*(_QWORD**)(v4 + 392));
  }
  v6 = msg_MessageManager_instance__ptr[0];
  if (v5 != nullptr) {
    v7 = v5;
  }
  else {
    v7 = *msg_MessageManager_empty_text__ptr;
  }
  GameRoutine_60a020(*msg_MessageManager_instance__ptr[0] + 14704, v7);
  v8 = GameRoutine_a4dbe0(*v6, v3, 0);
  if (v8 != nullptr) {
    v9 = (__int64)v8;
    v10 = ui_LayoutAccessor_FindTextBox(v2, "T_Txt");
    if (v10 != 0) {
      GameRoutine_156c5d0(v10, v9, 0);
    }
  }
  v11 = ui_LayoutAccessor_FindPane(v2, "Face");
  if (v11 != 0) {
    v11 = __dynamic_cast(v11, GameData_212d670[0], GameData_212d678[0], 0);
  }
  return GameHr_1840740(v11, 0, a1[146], 6u, 1);
}

#pragma GCC visibility pop
