#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern unsigned int GameData_1b00670[49];
extern float GameData_1b0f900[128];
extern __int64 (*GameData_1f7f0d8)();
extern __int64 (*GameData_1f7fb90)();
extern __int64 (*GameData_1f82fb8[])();
extern __int64 GameData_2178e90;
extern __int64 GameData_2198f88;
extern __int64 GameData_2199c38;
extern __int64 GameData_219c9b8;
extern char GameData_219d028;
extern _UNKNOWN* GameData_219d0a0;
extern _UNKNOWN GameData_21a3768;
extern _UNKNOWN GameData_21a3788;
__int64 GameRoutine_1050();
__int64 GameRoutine_11c560(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, float, float,
                           float);
__int64 GameRoutine_1a09b90(_QWORD);
__int64 GameRoutine_1a09bd0(_QWORD);
__int64 GameRoutine_1a0a170(_QWORD);
__int64 GameRoutine_1a0b9a0(_QWORD);
__int64 GameRoutine_283b60(void);
__int64 GameRoutine_2a8b00(void);
__int64 GameRoutine_2aaa90(void);
__int64 GameRoutine_2aae00(void);
__int64 GameRoutine_2b51f0(_QWORD, _QWORD);
__int64 GameRoutine_4c20(_QWORD);
__int64 GameRoutine_d5b0(int, int, int, unsigned __int64);
__int64 GameRoutine_d680(_QWORD);
__int64 GameRoutine_db10(_QWORD);
__int64 GameRoutine_f30();
void __attribute__((noreturn)) GameHr_4c20();
void __attribute__((noreturn)) GameHr_d5ac();
__int64 GameHr_f20() { return GameRoutine_1a0b9a0(GameRoutine_f30); }

__int64 GameHr_10c0() { return GameRoutine_1a0b9a0(GameRoutine_1050); }

void __attribute__((noreturn)) GameHr_d5ac() { GameHr_4c20(); }

__int64 GameHr_d67c(__int64 a1)
{
  __int64 v1;

  v1 = GameRoutine_4c20(a1);
  return GameRoutine_d680(v1);
}

__int64 GameHr_db0c(__int64 a1)
{
  __int64 v1;

  v1 = GameRoutine_4c20(a1);
  return GameRoutine_db10(v1);
}

void __attribute__((noreturn)) GameHr_18160() { __udf(0x8002u); }

void __attribute__((noreturn)) GameHr_185c0() { __udf(0x8002u); }

void __attribute__((noreturn)) GameHr_187d0() { __udf(0x8002u); }

void __attribute__((noreturn)) GameHr_19e80() { __udf(0x8002u); }

void __attribute__((noreturn)) GameHr_34220() { __udf(0x8002u); }

void __attribute__((noreturn)) GameHr_4e970() { __udf(0x8002u); }

void __attribute__((noreturn)) GameHr_53010() { __udf(0x8002u); }

__int64 GameHr_5d210(int a1) { return GameData_1b00670[a1]; }

__int64 GameHr_1043f0(__int64 result)
{
  if ((*(_BYTE*)(result + 40) & 1) == 0) {
    *(_BYTE*)(result + 40) = 1;
  }
  return result;
}

__int64 GameHr_10e800() { return GameData_2178e90; }

__int64 GameHr_1130d0(__int64 result)
{
  GameData_2198f88 = result;
  return result;
}

__int64 GameHr_11d8b0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, float* a5,
                      __int64 a6)
{
  return GameRoutine_11c560(a1, a2, a3, a4, a6, a5[2], a5[3], a5[4]);
}

__int64 GameHr_190240(__int64 a1)
{
  if ((*(_BYTE*)a1 & 1) != 0) {
    return *(_QWORD*)(a1 + 16);
  }
  else {
    return a1 + 1;
  }
}

__int64 GameHr_190a10() { return GameData_2199c38; }

__int64 GameHr_1db390(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64 v3;

  v3 = *(_QWORD*)(a1 + 16);
  result = a1 + 16;
  v2 = v3;
  if (*(_DWORD*)(result - 8) >= 0xCu) {
    return v2;
  }
  return result;
}

__int64 GameHr_263990(__int64 result)
{
  GameData_219c9b8 = result;
  return result;
}

__int64 GameHr_27db80() { return (unsigned __int8)GameData_219d028; }

void* GameHr_27dfd0(void* result)
{
  GameData_219d0a0 = result;
  return result;
}

__int64 GameHr_27e290(__int64 result)
{
  *(_QWORD*)result = result;
  *(_QWORD*)(result + 8) = result;
  *(_BYTE*)(result + 16) = 0;
  *(_QWORD*)(result + 104) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  return result;
}

__int64 GameHr_27e460(__int64 result)
{
  *(_BYTE*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_BYTE*)(result + 40) = 0;
  return result;
}

__int64 GameHr_27e590(__int64 result, _QWORD* a2)
{
  *(_QWORD*)(result + 104) = *a2;
  return result;
}

char* GameHr_280130(unsigned int* a1) { return (char*)a1 + *a1; }

__int64 GameHr_280160(__int64 a1) { return a1 + *(unsigned int*)(a1 + 4); }

float GameHr_283c40(__int64 a1, int a2, int a3)
{
  return *(float*)(*(_QWORD*)(a1 + 32) + 96LL * a2 + 4LL * a3);
}

__int64 GameHr_283c80(__int64 a1)
{
  return *(unsigned __int8*)(*(_QWORD*)(a1 + 32) + 192LL);
}

__int64 GameHr_283c90(__int64 result, char a2)
{
  *(_BYTE*)(*(_QWORD*)(result + 32) + 192LL) = a2;
  return result;
}

__int64 GameHr_283ca0(__int64 a1, int a2)
{
  return *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 200LL) + a2);
}

__int64 GameHr_283cb0(__int64 result, int a2, char a3)
{
  *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(result + 32) + 200LL) + a2) = a3;
  return result;
}

float GameHr_283d00(__int64 a1)
{
  return *(float*)(*(_QWORD*)(a1 + 40) + 20LL);
}

__int64 GameHr_283d10(__int64 result, float a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(result + 40);
  if (v2 != 0) {
    *(float*)(v2 + 20) = a2;
  }
  return result;
}

__int64 GameHr_283d60(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 40);
  if (v1 != 0) {
    LOBYTE(v1) = *(_BYTE*)(v1 + 16);
  }
  return v1 & 1;
}

__int64 GameHr_283d80(__int64 result, char a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(result + 40);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 16) = a2 & 1;
  }
  return result;
}

unsigned __int64 GameHr_283db0(int a1)
{
  return (a1 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
}

__int64 GameHr_285200(__int64 result)
{
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  return result;
}

__int64 GameHr_285270(__int64 result)
{
  *(_QWORD*)(result + 56) = 0;
  *(_QWORD*)(result + 64) = 0;
  return result;
}

__int64 GameHr_285280(__int64 result, __int64 a2)
{
  *(_QWORD*)(result + 56) = a2 + 8;
  return result;
}

__int64 GameHr_285290(__int64 result, __int64 a2)
{
  *(_QWORD*)(result + 64) = a2 + 8;
  return result;
}

_QWORD* GameHr_286210(_QWORD* result)
{
  *result = &GameData_1f7f0d8;
  result[1] = 0;
  return result;
}

unsigned __int64 GameHr_288600(int a1)
{
  return (a1 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
}

__int64 GameHr_2888c0(__int64 result)
{
  *(_BYTE*)(result + 24) = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)result = 0;
  return result;
}

__int64 GameHr_289060(__int64 a1, unsigned int a2)
{
  return a1 + *(int*)(a1 + 8LL * a2 + 28) + 20;
}

__int64 GameHr_289080(__int64 a1, __int64 a2) { return a2 + *(int*)(a1 + 4); }

__int64 GameHr_289c60(__int64 a1)
{
  if (*(_BYTE*)a1 != 0) {
    return *(unsigned int*)(a1 + 1708);
  }
  else {
    return 0;
  }
}

__int64 GameHr_28bb30(__int64 result)
{
  *(_BYTE*)(result + 16) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

__int64 GameHr_28c2c0(__int64 a1)
{
  if (*(_DWORD*)(a1 + 4) == 543) {
    return a1 + 8;
  }
  else {
    return 0;
  }
}

_QWORD* GameHr_291140(_QWORD* result)
{
  *result = result;
  result[1] = result;
  return result;
}

__int64 GameHr_2940a0(__int64 result, __int64 a2, int a3)
{
  *(_QWORD*)(result + 184) = a2;
  *(_QWORD*)(result + 192) = a2 + a3;
  return result;
}

__int64 GameHr_294e70(__int64 result, char a2, float a3)
{
  *(_BYTE*)(result + 502) = a2;
  *(float*)(result + 512) = a3;
  return result;
}

__int64 GameHr_294ec0(__int64 result, unsigned int a2, int a3, float a4)
{
  *(float*)(result + 24LL * a2 + 4LL * a3 + 32) = a4;
  return result;
}

_QWORD* GameHr_296ea0(_QWORD* result)
{
  *result = 0;
  result[1] = 0;
  return result;
}

bool GameHr_296f90(__int64 a1)
{
  return *(_DWORD*)(*(_QWORD*)a1 + 8LL) <= 0x20000u;
}

bool GameHr_296fb0(__int64 a1)
{
  return *(unsigned __int16*)(*(_QWORD*)a1 + 10LL) > 4u;
}

__int64 GameHr_29e5a0(__int64 result, __int64 a2)
{
  *(_QWORD*)(result + 40) += a2;
  return result;
}

__int64 GameHr_29e630(__int64 result)
{
  *(_DWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)result = 0;
  return result;
}

__int64 GameHr_2a2ab0(_QWORD* a1)
{
  *a1 = &GameData_1f7fb90;
  return GameRoutine_1a0a170(a1 + 3);
}

float GameHr_2a3450(__int64 a1, int a2)
{
  float result;

  result = GameData_1b0f900[a2];
  *(float*)(a1 + 16) = result;
  return result;
}

__int64 GameHr_2a3470(__int64 result, int a2)
{
  *(_WORD*)(result + 20) = (unsigned int)((a2 + 1) * (a2 + 1)) >> 2;
  return result;
}

float GameHr_2a35a0(__int64 a1, float a2)
{
  float result;

  *(_DWORD*)a1 = 0;
  result = a2 * 10.0;
  *(float*)(a1 + 4) = result;
  return result;
}

__int64 GameHr_2a3830(__int64 result)
{
  *(_QWORD*)(result + 16) = 0;
  *(_WORD*)(result + 28) = 0;
  *(_DWORD*)(result + 24) = 1065353216;
  return result;
}

_QWORD* GameHr_2a4170(_QWORD* result)
{
  *result = 0;
  result[1] = result + 1;
  result[2] = result + 1;
  return result;
}

__int64 GameHr_2a49f0(__int64 a1)
{
  return *(_QWORD*)(*(_QWORD*)a1 + 24LL) - *(_QWORD*)a1;
}

_QWORD* GameHr_2a4dc0(_QWORD* result, _QWORD* a2)
{
  *a2 = *result;
  *result = a2;
  return result;
}

__int64 GameHr_2a6900(__int64 result, int a2, char a3, float a4)
{
  *(float*)(result + 316) = a4;
  *(_DWORD*)(result + 324) = a2;
  *(_BYTE*)(result + 195) = a3;
  *(_DWORD*)(result + 320) = 0;
  return result;
}

__int64 GameHr_2a6920(__int64 result, int a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(result + 400);
  if (v2 != 0) {
    *(_DWORD*)(v2 + 376) = a2;
  }
  return result;
}

__int64 GameHr_2a6930(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 400);
  if (result != 0) {
    return GameRoutine_2a8b00();
  }
  return result;
}

__int64 GameHr_2a6940(__int64 result, char a2, float a3)
{
  *(_BYTE*)(result + 198) = a2;
  *(float*)(result + 212) = a3;
  return result;
}

__int64 GameHr_2a69b0(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 304);
  if (result != 0) {
    return GameRoutine_283b60();
  }
  return result;
}

__int64 GameHr_2a6c20(__int64 result)
{
  *(_QWORD*)(result + 384) = 0;
  *(_QWORD*)(result + 392) = 0;
  return result;
}

__int64 GameHr_2ab7a0(__int64 result)
{
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_DWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)(result + 48) = 0;
  return result;
}

__int64 GameHr_2abde0(__int64 result)
{
  *(_QWORD*)(result + 72) = 0;
  *(_DWORD*)(result + 80) = 0;
  *(_QWORD*)(result + 88) = 0;
  return result;
}

__int64 GameHr_2abef0(__int64 a1, int a2)
{
  __int64 result;

  *(_DWORD*)a1 = a2;
  result = *(_QWORD*)(a1 + 88);
  if (result != 0) {
    return GameRoutine_2aaa90();
  }
  return result;
}

__int64 GameHr_2ac000(__int64 result, char a2, __int16 a3)
{
  *(_BYTE*)(result + 16) = a2;
  if ((a2 & 1) != 0) {
    *(_WORD*)(result + 28) = a3;
  }
  return result;
}

__int64 GameHr_2ac030(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 88);
  if (result != 0) {
    return GameRoutine_2aae00();
  }
  return result;
}

__int64 GameHr_2af880(__int64 result, __int64 a2, __int64 a3)
{
  *(_QWORD*)(result + 56) = a2;
  *(_QWORD*)(result + 64) = a3;
  return result;
}

__int64 GameHr_2afc40(__int64 result, __int64 a2, __int64 a3)
{
  *(_QWORD*)(result + 56) = a2;
  *(_QWORD*)(result + 64) = a3;
  return result;
}

__int64 GameHr_2afd80(__int64 result, __int64 a2, __int64 a3)
{
  *(_QWORD*)(result + 32) = a2;
  *(_QWORD*)(result + 40) = a3;
  return result;
}

__int64 GameHr_2afde0(__int64 a1, int a2)
{
  int v2;

  v2 = *(unsigned __int8*)(a1 + 24);
  if ((v2 & 1) == 0) {
    *(_DWORD*)(a1 + 28) = a2;
  }
  return v2 ^ 1u;
}

_DWORD* GameHr_2b4a60(_DWORD* result)
{
  *result = 1;
  return result;
}

_DWORD* GameHr_2b4a70(_DWORD* result)
{
  *result = 2;
  return result;
}

__int64 GameHr_2b4c20(int a1, int a2, unsigned int a3)
{
  return GameRoutine_2b51f0((unsigned int)(a2 + a1), a3);
}

__int64 GameHr_2b6590(__int64 result)
{
  *(_BYTE*)(result + 18) = 0;
  *(_WORD*)(result + 16) = 0;
  *(_QWORD*)result = 0x3F8000003F800000LL;
  *(_QWORD*)(result + 8) = 0;
  return result;
}

_QWORD* GameHr_2b97b0(_QWORD* result)
{
  result[5] = 0;
  result[1] = 0;
  result[2] = 0;
  result[3] = 0;
  return result;
}

_QWORD* GameHr_2f32c0(_QWORD* result, __int64 a2)
{
  *result = GameData_1f82fb8;
  result[1] = a2;
  return result;
}

__int64 GameHr_2f7540(__int64 a1, unsigned int a2)
{
  return *(unsigned __int8*)(a1 + a2 + 386);
}

__int64 GameHr_55b6b0(atomic_uint* a1) { return atomic_fetch_add(a1, 1u) + 1; }

__int64 GameHr_55b6c0(atomic_uint* a1)
{
  return atomic_fetch_add(a1, 0xFFFFFFFF) - 1;
}

__int64 GameHr_55b6d0(atomic_uint* a1, unsigned int a2)
{
  return atomic_fetch_add(a1, a2) + a2;
}

__int64 GameHr_55b710(atomic_uint* a1, unsigned int a2)
{
  return atomic_fetch_and(a1, a2) & a2;
}

__int64 GameHr_55be40(__int64 result)
{
  atomic_fetch_add((atomic_uint* volatile)(result + 460), 1u);
  return result;
}

__int64 GameHr_55bfa0(unsigned int a1) { return GameRoutine_1a09b90(a1); }

__int64 GameHr_55bfb0(unsigned int a1) { return GameRoutine_1a09bd0(a1); }

__int64 GameHr_55bfe0(__int64 result)
{
  *(_QWORD*)result = 0;
  *(_DWORD*)(result + 8) = 0;
  return result;
}

__int64 GameHr_55c5e0(__int64 result)
{
  *(_DWORD*)(*(_QWORD*)(result + 48) + 156LL) = 0;
  return result;
}

__int64 GameHr_55c6c0(__int64 result)
{
  if (*(int*)(result + 152) >= 1) {
    *(_DWORD*)(result + 152) = 0;
  }
  return result;
}

__int64 GameHr_55c6e0(__int64 a1) { return 57LL * *(int*)(a1 + 16); }

__int64 GameHr_55d900(_QWORD* a1)
{
  unsigned int v1;

  v1 = *(unsigned __int16*)*a1;
  *a1 += 2LL;
  return v1;
}

__int64 GameHr_55d920(_QWORD* a1) { return *(unsigned __int8*)(*a1)++; }

__int64 GameHr_55dd40(__int64 result, __int64 a2, __int64 a3)
{
  *(_QWORD*)(result + 16) = a2;
  *(_QWORD*)(result + 24) = a3;
  return result;
}

bool GameHr_55eeb0(__int64 a1) { return **(_BYTE**)(a1 + 32) == 2; }

_QWORD* GameHr_55f130(_QWORD* result, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7)
{
  result[2] = a2;
  result[4] = a3;
  result[12] = a4;
  result[13] = a5;
  result[14] = a6;
  result[15] = a7;
  return result;
}

_QWORD* GameHr_55f150(_QWORD* result, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6, __int64 a7)
{
  result[2] = a2;
  result[4] = a3;
  result[12] = a4;
  result[13] = a5;
  result[14] = a6;
  result[15] = a7;
  return result;
}

__int64 GameHr_55f190(__int64 a1, __int64 (*a2)(__int64, _QWORD))
{
  return a2(a1 + 72, *(_QWORD*)(*(_QWORD*)(a1 + 80) + 136LL));
}

__int64 GameHr_55f1c0(__int64 a1, __int64 (*a2)(__int64, _QWORD))
{
  return a2(a1 + 72, *(_QWORD*)(*(_QWORD*)(a1 + 80) + 136LL));
}

__int64 GameHr_55f3a0(__int64 a1)
{
  return *(unsigned __int16*)(*(_QWORD*)(a1 + 32) + 8LL) |
         (*(unsigned __int8*)(*(_QWORD*)(a1 + 32) + 10LL) << 16);
}

bool GameHr_55fce0(__int64 a1) { return (*(_BYTE*)(a1 + 88) & 4) != 0; }

bool GameHr_55fcf0(__int64 a1) { return (*(_BYTE*)(a1 + 88) & 2) != 0; }

bool GameHr_55fd30(__int64 a1) { return **(_BYTE**)(a1 + 32) == 2; }

__int64 GameHr_5617b0(__int64 a1, _BYTE* a2, __int64 a3)
{
  *a2 = 1;
  return a3 + 2;
}

__int64 GameHr_565730(char a1) { return (unsigned int)(1 << a1); }

__int64 GameHr_565740(__int64 result)
{
  *(_DWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)result = 0;
  return result;
}

__int64 GameHr_566340(__int64 result)
{
  *(_QWORD*)(result + 88) = &GameData_21a3768;
  return result;
}

__int64 GameHr_567d30(__int64 result)
{
  *(_QWORD*)(result + 88) = &GameData_21a3788;
  return result;
}

__int64 GameHr_56e670(__int64 a1)
{
  return *(unsigned __int16*)(*(_QWORD*)(a1 + 24) + 8LL);
}

__int64 GameHr_575c90(__int64 result)
{
  *(_WORD*)(result + 4) = 0;
  *(_DWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_DWORD*)(result + 16) = 0;
  return result;
}

_QWORD* GameHr_575cb0(_QWORD* result)
{
  *result = 0;
  result[1] = 0;
  return result;
}

#pragma GCC visibility pop
