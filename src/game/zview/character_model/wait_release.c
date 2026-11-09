#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterModel_cf4780(__int64);
__int64 GameRoutine_cf26c0(__int64, __int64);
__int64 GameRoutine_cfa2a0(_QWORD);
extern __int64* GameData_212eba8[8];
__int64 WaitRelease_Unknown4(__int64 a1);
__int64 HubCharacterNatives_cf7940(__int64);
__int64 WaitRelease_cfa2a0(__int64 result, long double);
char* GameRoutine_cf5da0(__int64);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD, long double);
__int64 WaitRelease_cfa2a0(__int64 result, long double a2);
__int64 WaitRelease_cfb010(__int64 a1, __int64* a2);

__int64 WaitRelease_Unknown4(__int64 a1)
{
  __int64 result;
  __int64 v3;

  result = GameRoutine_cf26c0(*GameData_212eba8[0],
                              *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16LL));
  if ((result & 1) != 0) {
    result = CharacterModel_cf4780(*(_QWORD*)(a1 + 8));
    v3 = *(_QWORD*)(a1 + 8);
    if (*(_BYTE*)(v3 + 44) != 1 || *(_DWORD*)(v3 + 40) != 0) {
      *(_DWORD*)(v3 + 48) = 0;
      *(_BYTE*)(v3 + 52) = 1;
    }
    if ((*(_BYTE*)(v3 + 128) & 1) == 0 && (*(_BYTE*)(v3 + 129) & 1) != 0) {
      return GameRoutine_cfa2a0(v3 + 32);
    }
  }
  return result;
}

__int64 WaitRelease_cfa2a0(__int64 result, long double a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if (*(_BYTE*)(result + 20) == 1) {
    v2 = result;
    if (*(_BYTE*)(result + 12) == 1) {
      v3 = *(_QWORD*)(*(_QWORD*)(result + 24) + 8LL * *(int*)(result + 8));
      (*(void (**)(__int64))(*(_QWORD*)v3 + 40LL))(v3);
    }
    v4 = *(_QWORD*)(v2 + 80);
    if (v4 != 0) {
      v4 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 48LL))(v4);
    }
    if ((*(_BYTE*)(v2 + 20) & 1) == 0 ||
        (v5 = *(int*)(v2 + 16), *(_BYTE*)(v2 + 12) = 1,
         v6 = *(_QWORD*)(v2 + 24), *(_DWORD*)(v2 + 8) = v5,
         v4 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v6 + 8 * v5) + 16LL))(
             *(_QWORD*)(v6 + 8 * v5)),
         (*(_BYTE*)(v2 + 12) & 1) == 0)) {
      GameRoutine_8123d0(v4, a2);
    }
    v7 = *(_QWORD*)(*(_QWORD*)(v2 + 24) + 8LL * *(int*)(v2 + 8));
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
    if (*(_BYTE*)(v2 + 20) == 1 && *(_BYTE*)(v2 + 12) == 1 &&
        *(_DWORD*)(v2 + 16) == *(_DWORD*)(v2 + 8)) {
      *(_BYTE*)(v2 + 20) = 0;
    }
  }
  return result;
}

__int64 WaitRelease_cfb010(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  long double v5;
  int v6;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  result = HubCharacterNatives_cf7940(v2);
  if (v3 == result) {
    GameRoutine_cf5da0(v2);
    result = CharacterModel_cf4780(v2);
    v6 = *(_DWORD*)(v2 + 8);
    if (*(_BYTE*)(v2 + 44) != 1 || *(_DWORD*)(v2 + 40) != v6) {
      *(_DWORD*)(v2 + 48) = v6;
      *(_BYTE*)(v2 + 52) = 1;
    }
    if ((*(_BYTE*)(v2 + 128) & 1) == 0 && (*(_BYTE*)(v2 + 129) & 1) != 0) {
      return WaitRelease_cfa2a0(v2 + 32, v5);
    }
  }
  return result;
}

#pragma GCC visibility pop
