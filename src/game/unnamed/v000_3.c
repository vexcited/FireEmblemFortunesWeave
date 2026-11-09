#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern char* GameData_21762b8;

extern __int64 GameData_21c9650;

__int64 GameRoutine_1375be0(void);

__int64 GameRoutine_14874a0(void);

__int64 GameRoutine_1487670(void);

__int64 GameRoutine_14877f0(_QWORD, _QWORD);

__int64 GameRoutine_1562680(_QWORD, _QWORD, float);

__int64 GameRoutine_15e5fa0(void);

__int64 GameRoutine_165f3c0(_QWORD);

__int64 GameRoutine_1767f90(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1874560(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_1883490(_QWORD, _QWORD);

__int64 GameRoutine_196abd0(void);

__int64 GameRoutine_1a0b8a0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_809fd0(_QWORD, float);

__int64 GameHr_1744ec0(__int64 result)
{
  *(_DWORD*)(result + 1352) = 0;
  return result;
}

bool GameHr_174d9f0(__int64 a1) { return *(float*)(a1 + 16) != 0.0; }

char* GameHr_1769a60() { return GameData_21762b8; }

__int64 GameHr_1780390(__int64 a1, _QWORD* a2)
{
  return GameRoutine_1767f90(*a2, *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16));
}

__int64 GameHr_1780c10(__int64 a1, _QWORD* a2)
{
  return GameRoutine_1767f90(*a2, *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16));
}

void __attribute__((noreturn)) GameHr_178ed00() { __udf(0x8002u); }

__int64 GameHr_1795e30(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 881) & 1) != 0) {
    return 1;
  }
  else {
    return GameRoutine_1375be0();
  }
}

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

__int64 GameHr_17c7b80(__int64 a1)
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 248) + 32LL))(a1 - 248);
}

__int64 GameHr_1824460(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 1064) = 1;
  return 2;
}

__int64 GameHr_1824650(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 1065) = 1;
  return 2;
}

__int64 GameHr_1829450(__int64 result)
{
  *(_DWORD*)(result + 360) = 2;
  return result;
}

__int64 GameHr_1839860(__int64 result)
{
  *(_BYTE*)(result + 204) = 0;
  *(_WORD*)(result + 193) = 0;
  *(_WORD*)(result + 224) = 0;
  *(_BYTE*)(result + 226) = 0;
  return result;
}

__int64 GameHr_1846690(__int64 a1)
{
  return *(_QWORD*)(*(_QWORD*)(a1 + 152) + 24LL) + 96LL;
}

__int64 GameHr_18466d0(__int64 a1)
{
  return *(_QWORD*)(*(_QWORD*)(a1 + 8) + 24LL) + 96LL;
}

bool GameHr_1846770(__int64 a1) { return (*(_BYTE*)(a1 + 16) & 1) == 0; }

__int64 GameHr_184acf0(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 160) = 1;
  return 2;
}

__int64 GameHr_185d070(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 1152LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 GameHr_185d180(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 1152LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 GameHr_1865360(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 1152LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

bool GameHr_186d840(__int64 a1)
{
  return *(_QWORD*)(a1 + 1096) != *(_QWORD*)(a1 + 1104);
}

__int64 GameHr_1874b80(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 GameHr_1874d50(__int64 a1, __int64 a2)
{
  *(_DWORD*)(*(_QWORD*)a2 + 84LL) = 1;
  return 0;
}

__int64 GameHr_1874e60(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 1168LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 GameHr_1874f70(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 1168LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 GameHr_1876a80(__int64 a1, __int64 a2)
{
  return GameRoutine_1874560(a1 - 1056, a2, 1);
}

__int64 GameHr_18798a0(__int64 a1, __int64 a2)
{
  return GameRoutine_1874560(a1 - 1056, a2, 1);
}

__int64 GameHr_187b600(__int64 a1, __int64 a2)
{
  return GameRoutine_1874560(a1 - 1056, a2, 1);
}

__int64 GameHr_1883a80(__int64 a1) { return GameRoutine_1883490(a1 - 88, 0); }

__int64 GameHr_18b4030(__int64 a1)
{
  return *(_BYTE*)(a1 + 288) & *(_BYTE*)(a1 + 1032) & 1;
}

void GameHr_18cf330(__int64 a1, _WORD* a2)
{
  a2[3] = 42;
  *a2 = 514;
}

void GameHr_18cff40(__int64 a1, _WORD* a2)
{
  a2[3] = 42;
  *a2 = 514;
}

void GameHr_18e0900(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void GameHr_18e09f0(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 21;
}

void GameHr_18e40b0(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void GameHr_18e41a0(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 21;
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

void GameHr_1919330(__int64 a1, __int64 a2)
{
  *(_WORD*)a2 = 0;
  *(_BYTE*)(a2 + 2) = 0;
  *(_WORD*)(a2 + 6) = 42;
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

__int64 GameHr_1937000(__int64 a1, __int64 a2)
{
  *(_BYTE*)(*(_QWORD*)a2 + 83LL) = 1;
  return 0;
}

__int64 GameHr_194a230(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3;
  __int64 v4;

  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(a1 + 176);
  if (a3 <= v3) {
    a3 = v3;
  }
  return GameRoutine_1a0b8a0(v4, a2, a3);
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

void __attribute__((noreturn)) GameHr_1956990() { __udf(0x8002u); }

__int64 GameHr_19584b0(__int64 a1)
{
  if (*(_BYTE*)(a1 + 208) == 1) {
    return GameRoutine_1487670();
  }
  else {
    return GameRoutine_14874a0();
  }
}

__int64 GameHr_1959ff0(__int64 a1, unsigned __int8* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 48LL))(
      *(_QWORD*)(a1 + 8), *a2);
}

__int64 GameHr_195a3d0(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 8) + 32LL))(
      *(_QWORD*)(a1 + 8));
}

__int64 GameHr_19678b0() { return GameRoutine_196abd0(); }

void __attribute__((noreturn)) GameHr_1968780() { __udf(0x8002u); }

void GameHr_197fab0() { *(_QWORD*)(GameData_21c9650 + 212) = 0; }

__int64 GameHr_199b870(__int64 a1, __int64 a2)
{
  *(_DWORD*)(*(_QWORD*)a2 + 84LL) = 1;
  return 0;
}

__int64 GameHr_19a0080(__int64 a1, __int64 a2)
{
  __int64 result;

  if ((*(_BYTE*)(a2 + 105) & 1) == 0) {
    return GameRoutine_165f3c0(a2);
  }
  return result;
}

void GameHr_19a4200(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 22;
}

__int64 GameHr_19a9e30(__int64 a1)
{
  if (*(_QWORD*)(a1 + 1096) != 0) {
    return *(unsigned __int8*)(a1 + 1108);
  }
  else {
    return 0;
  }
}

__int64 GameHr_19a9e50(__int64 a1)
{
  if (*(_QWORD*)(a1 + 64) != 0) {
    return *(unsigned __int8*)(a1 + 76);
  }
  else {
    return 0;
  }
}

__int64 GameHr_19b9200(__int64 a1)
{
  return GameRoutine_1562680(a1 + 256, "Out", 1.0);
}

__int64 GameHr_19e6930(__int64 a1, __int64 a2)
{
  *(_DWORD*)(*(_QWORD*)a2 + 136LL) = 0;
  return 0;
}

bool GameHr_19ed860(__int64 a1) { return (*(_BYTE*)(a1 + 96) & 1) == 0; }

const char* GameHr_1a05230() { return "Layout/CommonMenu.arc"; }

#pragma GCC visibility pop
