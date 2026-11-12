#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_cf66e0(_QWORD);
__int64 GameRoutine_d4e240(_QWORD, _QWORD);
__int64 GameRoutine_e18130(_QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD, _QWORD);
__int64 StateRepelled_Unknown3(__int64 result);
__int64 StateRepelled_Unknown4(__int64 result);
__int64 StateRepelled_Unknown5_10c7e40(__int64 result);
__int64 HitboxModule_d4e240(__int64, __int64);
__int64 HubCharacterNatives_cf66e0(__int64);
void __attribute__((noreturn))
GameRoutine_8123d0_alt1() __asm__("GameRoutine_8123d0");

__int64 StateRepelled_Unknown3(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 8);
  if ((*(_BYTE*)(v1 + 244) & 1) == 0) {
    *(_BYTE*)(v1 + 244) = 1;
    if (*(_BYTE*)(v1 + 256) == 1) {
      result = HubCharacterNatives_cf66e0(
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 24LL) + 8LL));
      if (result != 0) {
        if ((*(_BYTE*)(v1 + 256) & 1) == 0) {
          GameRoutine_8123d0_alt1();
        }
        result = HitboxModule_d4e240(result, *(_QWORD*)(v1 + 248));
      }
      if (*(_BYTE*)(v1 + 256) == 1) {
        *(_BYTE*)(v1 + 256) = 0;
      }
    }
  }
  return result;
}

__int64 StateRepelled_Unknown4(__int64 result)
{
  __int64 v1;
  __int64 v2;
  bool v3;
  int v4;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 8) + 24LL) + 16LL) +
                  24LL);
  if ((v2 & 0x100000000LL) != 0) {
    v3 = (unsigned int)v2 > 5;
    v4 = (1 << v2) & 0x23;
    if (!v3 && v4 != 0) {
      if (*(_BYTE*)(v1 + 76) != 1 || *(_DWORD*)(v1 + 72) != 0) {
        *(_DWORD*)(v1 + 80) = 0;
        *(_BYTE*)(v1 + 84) = 1;
      }
      if ((*(_BYTE*)(v1 + 160) & 1) == 0 && (*(_BYTE*)(v1 + 161) & 1) != 0) {
        return GameRoutine_e18130(v1 + 64);
      }
    }
  }
  return result;
}

__int64 StateRepelled_Unknown5_10c7e40(__int64 result)
{
  __int64 v1;

  v1 = *(_QWORD*)(result + 8);
  if (*(_BYTE*)(v1 + 244) != 0) {
    *(_BYTE*)(v1 + 244) = 0;
  }
  return result;
}

#pragma GCC visibility pop
