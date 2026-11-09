#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_bc6460(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64* eft_g_effectSystem_ptr[3];
extern char GameData_1a9f09e;
__int64 TelopClassTrialResultTelop_Unknown35(__int64 result);

__int64 TelopClassTrialResultTelop_Unknown35(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[3];
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  if (*(_BYTE*)(result + 824) == 1) {
    v9[0] = 0;
    v9[1] = 0;
    v1 = *((_QWORD*)GameData_212c540 + 1);
    v3 = *(_QWORD*)GameData_212c548;
    v2 = *((_QWORD*)GameData_212c548 + 1);
    v11 = *(_QWORD*)GameData_212c540;
    v12 = v1;
    v15 = v11;
    v16 = v1;
    v13 = v3;
    v14 = v2;
    v10 = 9;
    v9[2] = "UI_Deco_ClassChange";
    v4 = GameRoutine_bc6460(*eft_g_effectSystem_ptr[0], v9, 0);
    result = GameRoutine_14a10d0(&v7, v4, v5, &GameData_1a9f09e);
    v6 = v8;
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      return std___1___shared_weak_count___release_weak(v6);
    }
  }
  return result;
}

#pragma GCC visibility pop
