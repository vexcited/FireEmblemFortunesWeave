#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1603e30(void);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
__int64 RetireRouteMenuItem_Unknown77_alt1(__int64 a1) __asm__(
    "RetireRouteMenuItem_Unknown77");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
char* game_1603e30();
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
char* RetireRouteMenuItem_Unknown77(__int64 a1);

char* RetireRouteMenuItem_Unknown77(__int64 a1)
{
  const char* v1;
  char* v2;
  char* v3;
  __int64* v4;
  const char** v5;
  char* v6;
  const char* v7;

  v1 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  v2 = game_util_Format_alt1("%s_Annotation", v1);
  v3 = game_1603e30();
  v4 = msg_MessageManager_instance__ptr[0];
  v5 = (const char**)msg_MessageManager_empty_text__ptr;
  if (v3 != nullptr && *v3 != 0) {
    v6 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v3, 0);
  }
  else {
    v6 = *msg_MessageManager_empty_text__ptr;
  }
  if (v6 != nullptr) {
    v7 = v6;
  }
  else {
    v7 = *v5;
  }
  GameRoutine_60a020_alt1(*v4 + 14704, v7);
  return GameRoutine_a4dbe0_alt1(*v4, v2, 0);
}

#pragma GCC visibility pop
