#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char* GameData_21762b8;

extern __int64 GameData_21c9650;

__int64 GameRoutine_14874a0(void);

__int64 GameRoutine_1487670(void);

__int64 GameRoutine_14877f0(_QWORD, _QWORD);

__int64 GameRoutine_1562680(_QWORD, _QWORD, float);

__int64 GameRoutine_15e5fa0(void);

__int64 GameRoutine_809fd0(_QWORD, float);

bool GameHr_174d9f0(__int64 a1) { return *(float*)(a1 + 16) != 0.0; }

char* GameHr_1769a60() { return GameData_21762b8; }

__int64 GameHr_17992c0(__int64 result)
{
  *(_DWORD*)(result + 184) = 1126170624;
  return result;
}

__int64 GameHr_17b7410(__int64 a1)
{
  return *(_BYTE*)(a1 + 82) & (unsigned __int8)~*(_BYTE*)(a1 + 100) & 1;
}

__int64 GameHr_17b8910(__int64 a1)
{
  return GameRoutine_1562680(a1 + 168, "Out", 1.0);
}

__int64 GameHr_17bb840() { return GameRoutine_809fd0(1, 0.25); }

__int64 GameHr_1839860(__int64 result)
{
  *(_BYTE*)(result + 204) = 0;
  *(_WORD*)(result + 193) = 0;
  *(_WORD*)(result + 224) = 0;
  *(_BYTE*)(result + 226) = 0;
  return result;
}

__int64 GameHr_18b4030(__int64 a1)
{
  return *(_BYTE*)(a1 + 288) & *(_BYTE*)(a1 + 1032) & 1;
}

__int64 GameHr_190b030(__int64 a1) { return (*(__int64 (**)(void))(a1 + 8))(); }

__int64 GameHr_190b130(__int64 a1, unsigned int* a2, __int64 a3)
{
  return (*(__int64 (**)(_QWORD, __int64))(a1 + 8))(*a2, a3);
}

__int64 GameHr_190b230(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD))(a1 + 8))(*a2);
}

__int64 GameHr_190b340(__int64 a1, __int64 a2, unsigned int* a3)
{
  return (*(__int64 (**)(__int64, _QWORD))(a1 + 8))(a2, *a3);
}

__int64 GameHr_191afe0(__int64 result, __int64 a2)
{
  if (a2 != 0) {
    *(_QWORD*)(result + 88) = a2;
  }
  return result;
}

__int64 GameHr_191c240(__int64 result, __int64* a2)
{
  __int64 v2;

  v2 = *a2;
  *(_QWORD*)(result + 17) = a2[1];
  *(_QWORD*)(result + 9) = v2;
  return result;
}

__int64 GameHr_191d1e0(__int64 a1, __int64 a2, __int64 a3)
{
  return (*(__int64 (**)(__int64, __int64))(a1 + 8))(a2, a3);
}

__int64 GameHr_194f3c0() { return GameRoutine_14877f0(0, 0x13F000000LL); }

__int64 GameHr_194f5c0() { return GameRoutine_14877f0(0, 0x13F000000LL); }

__int64 GameHr_1955080(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 296);
  if (result != 0) {
    return GameRoutine_15e5fa0();
  }
  return result;
}

__int64 GameHr_19584b0(__int64 a1)
{
  if (*(_BYTE*)(a1 + 208) == 1) {
    return GameRoutine_1487670();
  }
  else {
    return GameRoutine_14874a0();
  }
}

void GameHr_197fab0() { *(_QWORD*)(GameData_21c9650 + 212) = 0; }

__int64 GameHr_19b9200(__int64 a1)
{
  return GameRoutine_1562680(a1 + 256, "Out", 1.0);
}

#pragma GCC visibility pop
