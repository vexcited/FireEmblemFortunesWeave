#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1567590(_QWORD, _QWORD);
__int64 GameRoutine_1842ee0(_QWORD, _QWORD);
__int64 ItemShopSelectMenu_1873d80(_QWORD*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 GameData_20f7088;
extern __int64 GameData_21c99b8;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212e008[9];
__int64 ItemShopSelectMenu_1874060(__int64 a1);
__int64
game_facility_ItemShopSelectMenu_OnInit_lambda0_Invoke(__int64 a1, __int64* a2,
                                                       unsigned int* a3);
__int64 game_facility_ItemShopSelectMenu_SortAndFilter_lambda0_Invoke(
    __int64 a1, _QWORD* a2, _QWORD* a3);
bool game_facility_ItemShopSelectMenu_SortAndFilter_lambda1_Invoke(__int64 a1,
                                                                   __int64* a2);
__int64
game_facility_ItemShopSelectMenu_IsEnableSwitchItemInfoDetail_lambda0_Invoke(
    __int64 a1, _QWORD* a2);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, _QWORD, _QWORD,
                                               _QWORD, _QWORD, _QWORD, _QWORD,
                                               double, float);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__int64 ItemShopSelectMenu_1874440(__int64 a1, int a2);

__int64 ItemShopSelectMenu_1874060(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  _BOOL8 v5;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20f7088, 0);
    if (result != 0) {
      v3 = (*(__int64 (**)(__int64))(*(_QWORD*)result + 560LL))(result);
      result =
          (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 1256LL))(a1, v3);
    }
  }
  if (*(_BYTE*)(a1 + 1081) == 1) {
    v5 = true;
    if (*(_QWORD*)(a1 + 1064) != 0 &&
        (ItemShopSelectMenu_1873d80((_QWORD*)a1) & 1) != 0) {
      v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                      8LL * *(unsigned __int16*)(a1 + 1072));
      if (*(unsigned __int8*)(v4 + 72) < 8u || *(_BYTE*)(v4 + 73) == 16) {
        v5 = false;
      }
    }
    return GameRoutine_1567590("StatusChange", v5);
  }
  return result;
}

__int64 ItemShopSelectMenu_1874440(__int64 a1, int a2)
{
  __int64 v2;
  const char* v4;
  __int64 v5;
  _BYTE v6[200];

  if (a2 == 13) {
    v2 = *(_QWORD*)(a1 + 336);
    if (v2 != 0) {
      return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v2 + 368LL))(v2, 13);
    }
    snd_Fade_Fade_10c830(v6, 0.0f);
    v4 = "SE_SYS_List_Change";
  }
  else {
    snd_Fade_Fade_10c830(v6, 0.0f);
    v4 = "SE_SYS_NG";
  }
  snd_play_ff2d0((void*)(&v5), v4, v4, v6, 0, 65537, 0, 0.0f, 1.0f);
  return snd_Fade_Destroy_Fade(v6);
}

__int64 game_facility_ItemShopSelectMenu_OnInit_lambda0_Invoke(__int64 a1,
                                                               __int64* a2,
                                                               unsigned int* a3)
{
  __int64 v3;
  unsigned int v4;

  v3 = *a2;
  v4 = (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 8) + 1240LL))(
      *(_QWORD*)(a1 + 8), *a3);
  return GameRoutine_1842ee0(v3, v4);
}

__int64 game_facility_ItemShopSelectMenu_SortAndFilter_lambda0_Invoke(
    __int64 a1, _QWORD* a2, _QWORD* a3)
{
  return (*(__int64 (**)(_QWORD, _QWORD, _QWORD))(
      **(_QWORD**)(a1 + 8) + 1224LL))(*(_QWORD*)(a1 + 8), *a2, *a3);
}

bool game_facility_ItemShopSelectMenu_SortAndFilter_lambda1_Invoke(__int64 a1,
                                                                   __int64* a2)
{
  char v3;
  __int64 v4;
  int v5;
  __int64 v6;

  v3 = *(_BYTE*)(a1 + 9);
  v4 = *a2;
  if ((v3 & 1) == 0) {
    return *(_WORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4) != 0;
  }
  v5 = *(unsigned __int8*)(a1 + 8);
  v6 = *(unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4);
  if (v5 == 16) {
    return (_DWORD)v6 != 0;
  }
  else {
    return v5 ==
           *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) +
                                          8 * v6) +
                               72LL);
  }
}

__int64

game_facility_ItemShopSelectMenu_IsEnableSwitchItemInfoDetail_lambda0_Invoke(
    __int64 a1, _QWORD* a2)
{
  __int64 v3;
  bool v4;

  v3 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)(*(__int64 (**)(_QWORD))(
                            *(_QWORD*)*a2 + 560LL))(*a2));
  v4 = *(unsigned __int8*)(v3 + 72) < 8u || *(_BYTE*)(v3 + 73) == 16;
  **(_BYTE**)(a1 + 8) = v4;
  return **(unsigned __int8**)(a1 + 8);
}

#pragma GCC visibility pop
