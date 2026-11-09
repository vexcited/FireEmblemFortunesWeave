#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _QWORD GameData_1b330c8[9];

extern __int64 (*GameData_1f8c1d0[])();

extern __int64 (*GameData_1f8ddc0[])();

extern __int64 (*GameData_1f90100[])();

extern _UNKNOWN** GameData_2136678[5];

extern _UNKNOWN** GameData_2136750[5];

extern _UNKNOWN** GameData_21369f0;

extern __int64 GameData_2137ba8;

extern __int64 GameData_2137bb0;

extern __int64 GameData_2137bb8;

extern __int64 GameData_2137bc0;

extern __int64 GameData_2137bc8;

extern __int64 GameData_2137bd0;

extern __int64 GameData_2137bd8;

extern __int64 GameData_2137be0;

extern __int64 GameData_21a39c8;

extern __int64 GameData_21a39d0;

extern __int64 GameData_21a39d8;

extern __int64 GameData_21a3cb0;

extern __int64 GameData_21ca308;

extern __int64 GameData_21caa2c;

extern __int64 GameData_21ee260;

extern __int64 GameData_21f1ee0;

extern int GameData_21fa820;

extern int GameData_21fa870;

extern int GameData_21fa8c0;

extern __int64 GameData_2265ae0;

__int64 GameRoutine_14877f0(_QWORD, _QWORD);

__int64 GameRoutine_1562680(_QWORD, _QWORD, float);

__int64 GameRoutine_1a09b90(_QWORD);

__int64 GameRoutine_28fcd0(_QWORD);

__int64 GameRoutine_2ad6d0(_QWORD);

__int64 GameRoutine_5877b0(void);

__int64 GameRoutine_795fc0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_8089c0(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_80a2a0(float);

__int64 GameRoutine_84d140(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_8b7e00(_QWORD, _QWORD);

__int64 GameRoutine_961c00(_QWORD, _QWORD, _QWORD);

__int64 GameRoutine_96de20(void);

__int64 GameRoutine_a61180(_QWORD, float);

__int64 GameRoutine_c75d80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);

__int64 GameRoutine_cf4c10(_QWORD);

__int64 GameRoutine_d23060(void);

__int64 GameHr_290ff0(__int64 result)
{
  if (*(_DWORD*)(result + 712) == 0) {
    return GameRoutine_28fcd0(result - 224);
  }
  return result;
}

__int64 GameHr_2adf80(__int64 result)
{
  if (*(_DWORD*)(result + 144) == 0) {
    return GameRoutine_2ad6d0(result - 224);
  }
  return result;
}

__int64 GameHr_576bf0(__int64 result)
{
  *(_QWORD*)result = result;
  *(_QWORD*)(result + 8) = result;
  *(_QWORD*)(result + 144) = 0;
  *(_BYTE*)(result + 152) = 0;
  return result;
}

__int64 GameHr_577d40(__int64 a1, unsigned int a2)
{
  return a1 + 40LL * a2 + 624;
}

__int64 GameHr_578940(__int64 a1, int a2)
{
  return *(_QWORD*)(a1 + 608) + 8LL * a2;
}

__int64 GameHr_57d240(__int64 result, __int64 a2)
{
  *(_DWORD*)result = *(_DWORD*)(a2 + 84);
  *(_QWORD*)(result + 8) = a2 + 96;
  *(_QWORD*)(result + 16) = a2;
  return result;
}

__int64 GameHr_57dd20(__int64 result, __int64 a2)
{
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_DWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_QWORD*)(result + 40) = a2;
  return result;
}

__int64 GameHr_57dd50(_QWORD* a1, int a2) { return *(_QWORD*)(*a1 + 8LL * a2); }

__int64 GameHr_57dd60(__int64 a1)
{
  return (unsigned int)(*(_DWORD*)(a1 + 8) - 1);
}

void __attribute__((noreturn)) GameHr_5823d0() { __udf(0x8002u); }

__int64 GameHr_5825c0(__int64 result)
{
  int v1;

  v1 = *(_DWORD*)(result + 68);
  *(_DWORD*)(result + 60) = 0;
  *(_DWORD*)(result + 68) = v1 & 0xFFFFFFF0;
  return result;
}

__int64 GameHr_587a80(_QWORD* a1)
{
  *a1 = GameData_1f8c1d0;
  return GameRoutine_5877b0();
}

__int64 GameHr_58dbb0(__int64 result, _QWORD* a2)
{
  *(_QWORD*)(result + 201) = *a2;
  return result;
}

void __attribute__((noreturn)) GameHr_597130() { __udf(0x8002u); }

__int64 GameHr_598120(__int64 result, int a2)
{
  *(_DWORD*)(result + 8) = *(_DWORD*)(result + 8) & 0xFFFFFF0F | (16 * a2);
  return result;
}

__int64 GameHr_598140(__int64 result, int a2)
{
  *(_DWORD*)(result + 8) = *(_DWORD*)(result + 8) & 0xFFFFFFF8 | a2;
  return result;
}

__int64 GameHr_5987a0(__int64 a1)
{
  return (unsigned __int8)*(_DWORD*)(a1 + 8) >> 4;
}

void GameHr_599b40(float a1, float a2, __int64 a3, __int64 a4)
{
  *(float*)(a4 + 36) = a1;
  *(float*)(a4 + 40) = a2;
  *(_DWORD*)(a4 + 48) = 0;
  *(_BYTE*)(a4 + 52) = 1;
}

__int64 GameHr_599ef0(__int64 result, __int64 a2)
{
  if (a2 != 0) {
    *(_QWORD*)(result + 8) = a2;
    *(_BYTE*)result = -112;
  }
  return result;
}

__int64 GameHr_59e0c0(__int64 result, __int64 a2, char a3)
{
  *(_QWORD*)result = result;
  *(_QWORD*)(result + 8) = result;
  *(_QWORD*)(result + 144) = a2;
  *(_BYTE*)(result + 152) = a3;
  *(_BYTE*)(result + 16) = 0;
  return result;
}

_QWORD* GameHr_5a3c00(_QWORD* result)
{
  result[1] = 0;
  result[2] = 0;
  *result = 0;
  return result;
}

__int64 GameHr_5c01d0() { return GameData_21a39c8; }

__int64 GameHr_5c0250() { return GameData_21a39d0; }

__int64 GameHr_5c0260(__int64 result)
{
  GameData_21a39d8 = result;
  return result;
}

__int64 GameHr_5c0270() { return GameData_21a39d8; }

__int64 GameHr_5c7b30(__int64 result, _QWORD* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(result + 64);
  *a2 = *(_QWORD*)(result + 56);
  a2[1] = v2;
  return result;
}

_BYTE* GameHr_5c8c90(_BYTE* result)
{
  *result = 0;
  return result;
}

__int64 GameHr_5c9920(__int64 result)
{
  *(_BYTE*)result = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  *(_DWORD*)(result + 40) = 0;
  return result;
}

__int64 GameHr_5d2520(__int64 result, __int64 a2)
{
  *(_QWORD*)(a2 + 152) = *(_QWORD*)(result + 2240);
  return result;
}

__int64 GameHr_5de4d0(__int64 result)
{
  *(_DWORD*)result = 0;
  *(_BYTE*)(result + 48) = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 32) = 0;
  return result;
}

_QWORD* GameHr_5def40(_QWORD* result)
{
  result[10] = 0;
  result[11] = 0;
  result[8] = 0;
  result[9] = 0;
  result[6] = 0;
  result[7] = 0;
  result[4] = 0;
  result[5] = 0;
  return result;
}

__int64 GameHr_5df100(__int64 a1, unsigned int a2)
{
  return *(_QWORD*)(a1 + 8LL * a2 + 80);
}

__int64 GameHr_5df120(__int64 a1, unsigned int a2)
{
  return a1 + 16LL * a2 + 32;
}

__int64 GameHr_5dfd00() { return GameData_21a3cb0; }

__int64 GameHr_5dfe30(__int64 result, __int64 a2, __int16 a3)
{
  *(_QWORD*)result = a2;
  *(_WORD*)(result + 8) = 0;
  *(_WORD*)(result + 10) = a3;
  *(_DWORD*)(result + 12) = 0;
  return result;
}

__int64 GameHr_5dffd0(__int64 result, __int64 a2, int a3)
{
  int v3;

  *(_QWORD*)result = a2;
  if (a2 != 0) {
    v3 = a3;
  }
  else {
    v3 = 0;
  }
  *(_DWORD*)(result + 8) = v3;
  *(_DWORD*)(result + 12) = 0;
  return result;
}

__int64 GameHr_5e05c0(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 32LL))(a1, *a2);
}

__int64 GameHr_5e9950(__int64 result, char a2)
{
  if ((a2 & 1) == 0) {
    *(_QWORD*)(result + 40) = 0;
  }
  return result;
}

__int64 GameHr_5fc330(__int64 result)
{
  *(_BYTE*)(result + 4) = 0;
  *(_DWORD*)result = 117440512;
  return result;
}

_DWORD* GameHr_5fc380(_DWORD* result)
{
  *result = 0;
  return result;
}

__int64 GameHr_5fc390(__int64 result)
{
  *(_DWORD*)(result + 4) = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_BYTE*)result = 0;
  return result;
}

__int64 GameHr_5fc3a0(__int64 result)
{
  *(_BYTE*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_DWORD*)(result + 2) = 0xFFFF;
  return result;
}

__int64 GameHr_5fc3d0(__int64 result)
{
  *(_DWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  return result;
}

_QWORD* GameHr_5fc3e0(_QWORD* result)
{
  *result = 0;
  result[1] = 0;
  result[2] = 0x3F80000000000000LL;
  return result;
}

_QWORD* GameHr_5fc3f0(_QWORD* result)
{
  *result = 0;
  result[1] = 0;
  return result;
}

__int64 GameHr_5fc4c0(__int64 result)
{
  *(_WORD*)result = 0;
  *(_DWORD*)(result + 4) = 0;
  return result;
}

__int64 GameHr_5fcb50(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))GameData_2136678[0])(*(_QWORD*)(a1 + 8));
}

__int64 GameHr_5fcc40(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))GameData_2136750[0])(*(_QWORD*)(a1 + 208));
}

_QWORD* GameHr_5fe220(_QWORD* result)
{
  result[6] = 0;
  result[7] = 0;
  result[4] = 0;
  result[5] = 0;
  result[2] = 0;
  result[3] = 0;
  *result = 0;
  result[1] = 0;
  return result;
}

__int64 GameHr_5fe3f0(_QWORD* a1)
{
  return ((__int64 (*)(_QWORD))*GameData_21369f0)(*a1);
}

__int64 GameHr_604000(__int64 a1, int a2)
{
  return *(_QWORD*)(a1 + GameData_1b330c8[a2]);
}

_QWORD* GameHr_6054a0(_QWORD* result)
{
  result[4] = 0;
  result[5] = 0;
  result[2] = 0;
  result[3] = 0;
  *result = 0;
  result[1] = 0;
  return result;
}

__int64 GameHr_605680(__int64 result)
{
  *(_BYTE*)(result + 44) = 0;
  return result;
}

__int64 GameHr_605690(unsigned __int8* a1) { return 8LL * *a1; }

_QWORD* GameHr_6056a0(_QWORD* result)
{
  result[3] = 0;
  result[4] = 0;
  result[1] = 0;
  result[2] = 0;
  *result = 0;
  return result;
}

__int64 GameHr_6056c0(__int64 result, __int64 a2, int a3)
{
  *(_QWORD*)result = a2;
  *(_DWORD*)(result + 32) = a3;
  return result;
}

__int64 GameHr_6058e0(__int64 result)
{
  *(_BYTE*)(result + 36) = 0;
  return result;
}

__int64 GameHr_6058f0(__int64 result)
{
  *(_DWORD*)(result + 24) = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)result = 0;
  return result;
}

__int64 GameHr_605ac0(__int64 result)
{
  *(_BYTE*)(result + 24) = 0;
  return result;
}

_QWORD* GameHr_605c70(_QWORD* result)
{
  result[2] = 0;
  result[3] = 0;
  *result = 0;
  result[1] = 0;
  return result;
}

__int64 GameHr_605c90(__int64 result, __int64 a2, int a3)
{
  *(_QWORD*)(result + 16) = a2;
  *(_DWORD*)(result + 12) = a3;
  return result;
}

_BYTE* GameHr_605fe0(_BYTE* result)
{
  *result = 0;
  return result;
}

__int64 GameHr_606190(__int64 result)
{
  *(_BYTE*)(result + 64) = 0;
  return result;
}

__int64 GameHr_606650(__int64 result)
{
  *(_BYTE*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  return result;
}

__int64 GameHr_606770(__int64 result)
{
  *(_BYTE*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  return result;
}

__int64 GameHr_606870(__int64 result)
{
  *(_BYTE*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  return result;
}

__int64 GameHr_606990() { return GameData_2137ba8; }

__int64 GameHr_6069a0() { return GameData_2137bb0; }

__int64 GameHr_6069b0() { return GameData_2137bb8; }

__int64 GameHr_6069c0() { return GameData_2137bc0; }

__int64 GameHr_6069d0() { return GameData_2137bc8; }

__int64 GameHr_6069e0() { return GameData_2137bd0; }

__int64 GameHr_6069f0() { return GameData_2137bd8; }

__int64 GameHr_606a00() { return GameData_2137be0; }

__int64 GameHr_606b10(__int64 a1)
{
  *(_QWORD*)a1 = GameData_1f8ddc0;
  return GameRoutine_1a09b90(*(unsigned int*)(a1 + 16));
}

__int64 GameHr_632cc0(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(a1 + 488))(*(_QWORD*)(a1 + 496));
}

__int64 GameHr_6503b0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(a1 + 8))(*a2, *a3);
}

bool GameHr_656d70(__int64 a1, __int64 a2) { return a1 == a2; }

void GameHr_668020(__int64 a1, _QWORD* a2) { *a2 = GameData_1f90100; }

__int64 GameHr_6685b0(__int64 result)
{
  *(_DWORD*)(result + 152) = 40;
  return result;
}

__int64 GameHr_67f450(__int64 a1)
{
  __int64 result;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    return GameRoutine_96de20();
  }
  return result;
}

__int64 GameHr_6e69b0(__int64 a1, __int64 a2)
{
  return GameRoutine_84d140(*(_QWORD*)(a1 + 8) + 1744LL, a2,
                            *(_QWORD*)(a1 + 16));
}

__int64 GameHr_6e6ab0(__int64 a1, __int64 a2)
{
  return GameRoutine_84d140(*(_QWORD*)(a1 + 8) + 1744LL, a2,
                            *(_QWORD*)(a1 + 16));
}

void GameHr_6e9a20() { GameData_21ca308 = 0; }

__int64 GameHr_6ed540(__int64 a1, unsigned int a2)
{
  unsigned int v2;

  v2 = *(unsigned __int8*)(a1 + 74) - 12;
  if (v2 >= 0xD) {
    return a2;
  }
  else {
    return v2;
  }
}

__int64 GameHr_6ed560(__int64 a1, unsigned int a2)
{
  unsigned int v2;

  v2 = *(unsigned __int8*)(a1 + 74) - 1;
  if (v2 >= 0xB) {
    return a2;
  }
  else {
    return v2;
  }
}

void GameHr_70f540() { GameData_21caa2c = 0; }

void GameHr_726f80()
{
  if (GameData_21ee260 != 0) {
    *(_DWORD*)(GameData_21ee260 + 48) = 0;
  }
}

bool GameHr_734f70(__int64 a1, float* a2, float* a3) { return *a2 != *a3; }

__int64 GameHr_767c00(__int64 result, float a2, float a3)
{
  *(float*)(result + 28) = a2;
  *(float*)(result + 32) = a3;
  return result;
}

__int64 GameHr_77c810(__int64 result, _DWORD* a2)
{
  *(_DWORD*)(*(_QWORD*)(result + 8) + 8LL) = *a2;
  return result;
}

__int64 GameHr_77cc30(__int64 result, _DWORD* a2)
{
  *(_DWORD*)(*(_QWORD*)(result + 8) + 8LL) = *a2;
  return result;
}

__int64 GameHr_77e8e0(__int64 result, _DWORD* a2)
{
  *(_DWORD*)(*(_QWORD*)(result + 8) + 8LL) = *a2;
  return result;
}

__int64 GameHr_77edf0(__int64 result, _DWORD* a2)
{
  *(_DWORD*)(*(_QWORD*)(result + 8) + 8LL) = *a2;
  return result;
}

__int64 GameHr_7988a0(__int64 a1, __int64 a2)
{
  return GameRoutine_795fc0(*(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16), a2);
}

__int64 GameHr_7b11a0(__int64 result)
{
  *(_DWORD*)(result + 22980) = 0;
  return result;
}

__int64 GameHr_7b1f30(__int64 a1)
{
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 184LL))(a1, a1);
}

__int64 GameHr_7b2860(__int64 a1)
{
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 200LL))(a1, a1);
}

__int64 GameHr_7b4390(__int64 result)
{
  ++*(_DWORD*)(result + 22920);
  return result;
}

__int64 GameHr_7b4a20(__int64 a1)
{
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 192LL))(a1, a1);
}

__int64 GameHr_7b5e20(__int64 result)
{
  *(_DWORD*)(result + 22976) = 0;
  return result;
}

__int64 GameHr_7b7050(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(*(_QWORD*)*a2 + 400LL))(*a2, 0);
}

__int64 GameHr_7b7540(__int64 a1, _QWORD* a2)
{
  return (*(__int64 (**)(_QWORD, __int64))(*(_QWORD*)*a2 + 400LL))(*a2, 1);
}

__int64 GameHr_7fb140(__int64 result)
{
  *(_BYTE*)(*(_QWORD*)(result + 8) + 474LL) = 1;
  return result;
}

double GameHr_816290() { return 0.0; }

__int64 GameHr_817060(__int64 a1)
{
  return (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 152) + 208LL))(
      *(_QWORD*)(a1 + 152));
}

bool GameHr_827050(__int64 a1)
{
  return *(_DWORD*)(a1 + 32) != *(_DWORD*)(a1 + 28);
}

bool GameHr_827280(__int64 a1)
{
  return *(_DWORD*)(a1 + 32) == *(_DWORD*)(a1 + 24);
}

__int64 GameHr_84b2f0(__int64 a1)
{
  return (*(__int64 (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 8) + 200LL))(
      *(_QWORD*)(a1 + 8), 1);
}

__int64 GameHr_84b650(__int64 a1)
{
  return (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 200LL))(
      *(_QWORD*)(a1 + 8), 0);
}

__int64 GameHr_84bd50(__int64 a1, _QWORD* a2)
{
  return GameRoutine_961c00(*a2, *(_QWORD*)(a1 + 8) + 8LL,
                            **(_QWORD**)(a1 + 16));
}

__int64 GameHr_84be60(__int64 a1, _QWORD* a2)
{
  return GameRoutine_8089c0(*a2, **(_QWORD**)(a1 + 8),
                            **(unsigned int**)(a1 + 16));
}

__int64 GameHr_8b7610(__int64 a1)
{
  return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 40LL))(a1, 1);
}

__int64 GameHr_8b7620(__int64 a1)
{
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a1 + 40LL))(a1, 0);
}

bool GameHr_8b76b0(__int64 a1) { return (*(_BYTE*)(a1 + 256) & 1) == 0; }

bool GameHr_8b80b0() { return GameData_21f1ee0 != 0; }

__int64 GameHr_8b9540(__int64 result)
{
  if (*(_QWORD*)(result + 168) != 0) {
    return GameRoutine_8b7e00(result, *(_QWORD*)(result + 152));
  }
  return result;
}

void __attribute__((noreturn)) GameHr_8e0510() { __udf(0x8002u); }

__int64 GameHr_900f90(__int64 result)
{
  *(_WORD*)(result + 16) = 0;
  *(_DWORD*)(result + 64) = 0;
  return result;
}

_QWORD** GameHr_918fa0(_QWORD** result, _QWORD* a2)
{
  **result = *a2;
  return result;
}

float GameHr_918fc0(_DWORD** a1, float* a2)
{
  float result;

  result = *a2;
  **a1 = *(_DWORD*)a2;
  return result;
}

_BYTE** GameHr_919010(_BYTE** result, _BYTE* a2)
{
  **result = *a2;
  return result;
}

__int64 GameHr_97be30(__int64 result)
{
  *(_BYTE*)(result + 184) = 1;
  *(_BYTE*)(result + 224) = 2;
  return result;
}

__int64 GameHr_9abd80(__int64 a1)
{
  return GameRoutine_1562680(a1 + 224, "In", 1.0);
}

__int64 GameHr_9ac480(__int64 result)
{
  *(_DWORD*)(*(_QWORD*)(result + 8) + 152LL) = 4;
  return result;
}

__int64 GameHr_9bbae0(__int64 a1, __int64 a2, unsigned int* a3)
{
  return (*(__int64 (**)(_QWORD, __int64, _QWORD))(
      **(_QWORD**)(a1 + 8) + 608LL))(*(_QWORD*)(a1 + 8), a2, *a3);
}

__int64 GameHr_a0b420(__int64 result, _BYTE* a2)
{
  *(_BYTE*)(*(_QWORD*)(result + 8) + 152LL) = *a2;
  return result;
}

__int64 GameHr_a0d8e0(__int64 result)
{
  ++*(_DWORD*)(result + 200);
  return result;
}

__int64 GameHr_a0f5c0() { return GameRoutine_14877f0(0, 0x13F000000LL); }

__int64 GameHr_a0f7c0() { return GameRoutine_14877f0(0, 0x13F000000LL); }

void __attribute__((noreturn)) GameHr_a0f9a0() { __udf(0x8002u); }

__int64 GameHr_a14560() { return GameRoutine_80a2a0(0.25); }

__int64 GameHr_a1c2e0() { return (unsigned __int16)GameData_21fa820; }

__int64 GameHr_a1c2f0() { return (unsigned __int16)GameData_21fa870; }

__int64 GameHr_a1c300() { return (unsigned __int16)GameData_21fa8c0; }

float GameHr_a22b60() { return *(float*)(GameData_2265ae0 + 104); }

__int64 GameHr_a3aa20(__int64 result)
{
  *(_BYTE*)(result + 64) = 0;
  return result;
}

__int64 GameHr_a3b5f0(__int64 result)
{
  *(_QWORD*)result = 0;
  *(_DWORD*)(result + 8) = 0x2000;
  return result;
}

__int64 GameHr_a3b6b0(__int64 result)
{
  *(_QWORD*)result = 0;
  *(_DWORD*)(result + 8) = 0x2000;
  return result;
}

__int64 GameHr_a3b750(__int64 result)
{
  *(_QWORD*)result = 0;
  *(_DWORD*)(result + 8) = 0x2000;
  return result;
}

__int64 GameHr_a49f20(__int64 a1, _QWORD* a2, unsigned int* a3, __int64 a4)
{
  return (*(__int64 (**)(_QWORD, _QWORD, __int64))(a1 + 8))(*a2, *a3, a4);
}

__int64 GameHr_a5eee0(__int64 a1)
{
  return GameRoutine_a61180(
      a1 + 32, *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 496LL) + 16LL));
}

bool GameHr_a73c70(__int64 a1, __int64 a2)
{
  return *(float*)(a1 + 52) < *(float*)(a2 + 52);
}

bool GameHr_a73c90(__int64 a1, __int64 a2)
{
  return *(float*)(a1 + 52) > *(float*)(a2 + 52);
}

void GameHr_a91810(__int64 a1, _WORD* a2)
{
  *a2 = 0;
  a2[3] = 42;
}

void GameHr_aa1260(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void GameHr_aa1350(__int64 a1, _WORD* a2)
{
  *a2 = 0;
  a2[3] = 42;
}

void GameHr_b494a0(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void GameHr_b4a3a0(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void GameHr_b53be0(__int64 a1, _WORD* a2)
{
  *a2 = 0;
  a2[3] = 42;
}

void GameHr_b592a0(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

bool GameHr_b67200(__int64 a1, __int64 a2)
{
  return *(_DWORD*)(a2 + 12) == *(_DWORD*)(a1 + 8);
}

void GameHr_b7d290(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void GameHr_b7d380(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 21;
}

bool GameHr_b7d490(__int64 a1, __int64 a2)
{
  return *(_DWORD*)(a2 + 12) == *(_DWORD*)(a1 + 8);
}

void GameHr_b7e860(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void GameHr_bfe390(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void GameHr_bfe480(__int64 a1, _WORD* a2)
{
  *a2 = 0;
  a2[3] = 42;
}

__int64 GameHr_c0bb90(__int64 result, _BYTE* a2)
{
  *(_BYTE*)(*(_QWORD*)(result + 8) + 22LL) = *a2;
  return result;
}

void GameHr_c0c740(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

void GameHr_c4d160(__int64 a1, _WORD* a2)
{
  *a2 = 514;
  a2[3] = 42;
}

__int64 GameHr_c77010(__int64 a1, __int64 a2)
{
  return GameRoutine_c75d80(*(_QWORD*)(a1 + 8), a2, *(unsigned int*)(a1 + 16),
                            *(unsigned int*)(a1 + 20), 1);
}

void GameHr_c77490(__int64 a1, _WORD* a2)
{
  *a2 = 0;
  a2[3] = 42;
}

float GameHr_c8c210(_DWORD** a1, float* a2)
{
  float result;

  result = *a2;
  **a1 = *(_DWORD*)a2;
  return result;
}

_QWORD** GameHr_cb2ed0(_QWORD** result, _QWORD* a2)
{
  **result = *a2;
  return result;
}

float GameHr_cb2ef0(_DWORD** a1, float* a2)
{
  float result;

  result = *a2;
  **a1 = *(_DWORD*)a2;
  return result;
}

_BYTE** GameHr_cb2f60(_BYTE** result, _BYTE* a2)
{
  **result = *a2;
  return result;
}

__int64 GameHr_cfa440(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  *(_BYTE*)(v1 + 225) = 0;
  return GameRoutine_cf4c10(v1 + 32);
}

__int64 GameHr_d0b9f0(__int64 a1, unsigned int* a2)
{
  return (*(__int64 (**)(_QWORD))(a1 + 8))(*a2);
}

__int64 GameHr_d23050(__int64 a1)
{
  *(_BYTE*)(a1 + 876) = 0;
  return GameRoutine_d23060();
}

#pragma GCC visibility pop
