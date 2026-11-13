#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_20f3a48[])();
extern __int64 GameData_20f20a0;
extern __int64* GameData_212e008[9];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
_QWORD* EmptyShopMenuItem_Buy_186b2c0(__int64* a1);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               float, float, __int64,
                                               unsigned int, unsigned int, int);
extern __int64* GameData_212e000[10];
extern __int64* GameData_212e030[4];
extern __int64 GameData_2131c68[45];
void snd_Fade_Fade_10c830(__int64, float);
__int64 EmptyShopMenuItem_Buy_BCall(__int64 a1);

__int64 EmptyShopMenuItem_Buy_BCall(__int64 a1)
{
  _QWORD handle[2];
  __int64 v2;
  __int64* v3;
  __int64 v4;
  _QWORD v6[25];

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 == 0) {
    return 3;
  }
  v3 = (__int64*)__dynamic_cast(v2, GameData_212e030[0], GameData_2131c68[0],
                                -2);
  if (v3 == nullptr || (int)((unsigned __int64)(v3[2] - v3[1]) >> 3) < 1) {
    return 3;
  }
  EmptyShopMenuItem_Buy_186b2c0(v3);
  v4 = __dynamic_cast(*(_QWORD*)(a1 + 8), GameData_212e030[0],
                      GameData_212e000[0], 0);
  (*(void (**)(__int64))(*(_QWORD*)v4 + 1128LL))(v4);
  (*(void (**)(__int64))(*(_QWORD*)v4 + 1136LL))(v4);
  (*(void (**)(__int64))(*(_QWORD*)v4 + 1120LL))(v4);
  snd_Fade_Fade_10c830((__int64)v6, 0x0.0p+0f);
  snd_play_ff2d0((void*)(handle), (__int64)"SE_SYS_Multiple_CancelAll",
                 (__int64)"SE_SYS_Multiple_CancelAll", 0x0.0p+0f,
                 0x1.0000000000000p+0f, (__int64)v6, 0, 0x10001u, 0);
  snd_Fade_Destroy_Fade(v6);
  return 13;
}

_QWORD* EmptyShopMenuItem_Buy_186b2c0(__int64* a1)
{
  __int64 v1;
  _QWORD* result;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;
  __int64 v12;

  v1 = *a1;
  a1[2] = a1[1];
  result = v10;
  v4 = *(_QWORD*)(v1 + 256);
  v3 = *(_QWORD*)(v1 + 264);
  v10[0] = GameData_20f3a48;
  v11 = v10;
  if (v3 == v4) {
    goto LABEL_12;
  }
  v5 = 0;
  v6 = GameData_212e008[0];
  do {
    v7 = *(_QWORD*)(v4 + 8 * v5);
    if (v7 != 0) {
      v8 = __dynamic_cast(v7, v6, &GameData_20f20a0, 0);
      if (v8 == 0) {
        goto LABEL_3;
      }
      v12 = v8;
      if (v11 == nullptr) {
        GameRoutine_60a310(0);
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v11 + 48LL))(v11, &v12) & 1) !=
          0) {
        break;
      }
      v4 = *(_QWORD*)(v1 + 256);
      v3 = *(_QWORD*)(v1 + 264);
    }
  LABEL_3:
    ++v5;
  } while (v5 < (v3 - v4) >> 3);
  result = v11;
  if (v11 != v10) {
    if (v11 != nullptr) {
      v9 = 40;
      return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v9))(result);
    }
    return result;
  }

LABEL_12:
  v9 = 32;
  return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v9))(result);
}

#pragma GCC visibility pop
