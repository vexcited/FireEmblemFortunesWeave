#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1603e30(void);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char** msg_MessageManager_empty_text__ptr;
__int64 RetireRouteMenuItem_Unknown77(__int64 a1);

__int64 RetireRouteMenuItem_Unknown77(__int64 a1)
{
  const char* v1;
  __int64 v2;
  _BYTE* v3;
  __int64* v4;
  __int64* v5;
  char** v6;
  _BYTE* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v13[2];
  unsigned __int64 v14;
  unsigned __int64 v15;
  int v16;
  int v17;
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
  __int64 v29;
  __int64 v30;

  v1 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  v2 = game_util_Format("%s_Annotation", v1);
  v3 = (_BYTE*)GameRoutine_1603e30();
  v4 = msg_MessageManager_instance__ptr[0];
  v5 = GameData_212e348;
  v6 = msg_MessageManager_empty_text__ptr;
  if (v3 != nullptr && (v7 = v3, *v3 != 0)) {
    v8 = *msg_MessageManager_instance__ptr[0];
    v18 = -1;
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v23 = -1;
    v24 = -1;
    v25 = -1;
    v26 = -1;
    v27 = -1;
    v28 = -1;
    v29 = -1;
    v13[0] = GameData_212e348 + 2;
    v13[1] = 0xFFFF0001FFFF0000LL;
    v14 = 0xFFFF0004FFFF0002LL;
    v15 = 0xFFFF0006FFFF0005LL;
    v30 = 8;
    v16 = -65529;
    v17 = -65528;
    v9 = GameRoutine_a4dbe0(v8, v7, 0, v13);
  }
  else {
    v9 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  if (v9 != 0) {
    v10 = v9;
  }
  else {
    v10 = (__int64)*v6;
  }
  GameRoutine_60a020(*v4 + 14704, v10);
  v11 = *v4;
  v18 = -1;
  v19 = -1;
  v20 = -1;
  v21 = -1;
  v22 = -1;
  v23 = -1;
  v24 = -1;
  v25 = -1;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v29 = -1;
  v13[0] = v5 + 2;
  v13[1] = 0xFFFF0001FFFF0000LL;
  v14 = 0xFFFF0004FFFF0002LL;
  v15 = 0xFFFF0006FFFF0005LL;
  v30 = 8;
  v16 = -65529;
  v17 = -65528;
  return GameRoutine_a4dbe0(v11, v2, 0, v13);
}

#pragma GCC visibility pop
