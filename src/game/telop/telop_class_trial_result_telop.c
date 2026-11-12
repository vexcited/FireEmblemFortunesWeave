#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_bc6460(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64* eft_g_effectSystem_ptr[3];
extern char GameData_1a9f09e;
__int64 TelopClassTrialResultTelop_Unknown35_alt1(__int64 result) __asm__(
    "TelopClassTrialResultTelop_Unknown35");
_QWORD* GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);
__int64* Manager_bc6460(_QWORD*, __int64, char);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
_QWORD* TelopClassTrialResultTelop_Unknown35(_QWORD* result);

_QWORD* TelopClassTrialResultTelop_Unknown35(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64* v4;
  unsigned int v5;
  __int64 v6;
  struct {
    __int64 v7;
    __int64 v8;
  } v7_;
  struct {
    _QWORD v9[3];
    int v10;
    char gap44_[4];
    __int64 v11;
    __int64 v12;
    __int64 v13;
    __int64 v14;
    __int64 v15;
    __int64 v16;
  } v9_;

  v5 = COERCE_AS(__typeof__(v5),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*((_BYTE*)result + 824) == 1) {
    v9_.v9[0] = 0;
    v9_.v9[1] = 0;
    v1 = *((_QWORD*)GameData_212c540 + 1);
    v3 = *(_QWORD*)GameData_212c548;
    v2 = *((_QWORD*)GameData_212c548 + 1);
    v9_.v11 = *(_QWORD*)GameData_212c540;
    v9_.v12 = v1;
    v9_.v15 = v9_.v11;
    v9_.v16 = v1;
    v9_.v13 = v3;
    v9_.v14 = v2;
    v9_.v10 = 9;
    v9_.v9[2] = "UI_Deco_ClassChange";
    v4 = Manager_bc6460(*(_QWORD**)eft_g_effectSystem_ptr[0], (__int64)v9_.v9,
                        0),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    result =
        GameHr_14a10d0(&v7_.v7, (__int64)v4, v5, (__int64)&GameData_1a9f09e),
    v5 = COERCE_AS(__typeof__(v5),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v6 = v7_.v8;
    if (v7_.v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7_.v8 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6),
          v5 = COERCE_AS(__typeof__(v5),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v6);
    }
  }
  return result;
}

#pragma GCC visibility pop
