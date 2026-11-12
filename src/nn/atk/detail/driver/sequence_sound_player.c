#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicSoundPlayer_Unknown2(__int64 result, __int64, __int64);
__int64 GameRoutine_28bc60(__int64 result);
__int64 GameRoutine_28ea10(float);
__int64 GameRoutine_28eaf0(float);
__int64 GameRoutine_28ebd0(float);
__int64 GameRoutine_28f1f0(float);
__int64 GameRoutine_28f690(float);
__int64 GameRoutine_28f770(float);
__int64 GameRoutine_28f850(float);
__int64 GameRoutine_28fcd0(void);
__int64 GameRoutine_293dd0(void);
__int64 GameRoutine_294020(void);
__int64 GameRoutine_294a00(_QWORD, _QWORD);
__int64 GameRoutine_2a1b90(_QWORD);
__int64 SoundThread_2a1fd0(_QWORD, _QWORD);
__int64 nn_os_AcquireWriteLock(_QWORD);
__int64 nn_os_ReleaseWriteLock(_QWORD);
extern _UNKNOWN* GameData_2135338;
extern __int64 (*GameData_2135300)();
extern __int64 (*GameData_2135340[7])();
extern __int64 (*GameData_2135348[6])();
extern __int64 (*GameData_2135350[5])();
extern __int64 (*GameData_2135358[4])();
extern __int64 (*GameData_2135360[3])();
extern __int64 (*GameData_2135368[2])();
extern __int64 (*GameData_2135370)();
extern __int64* GameData_2135328[2];
__int64 SequenceSoundPlayer_Unknown2(__int64 a1, __int64 a2, __int64 a3);
__int64 SequenceSoundPlayer_28dff0(__int64 a1);
__int64 SequenceSoundPlayer_28e2a0(_QWORD* a1, _QWORD* a2);
__int64 SequenceSoundPlayer_28e3c0(__int64 a1, int a2);
__int64 SequenceSoundPlayer_Unknown6(__int64 a1, char a2);
float SequenceSoundPlayer_28e540(__int64 a1, int a2, int a3);
__int64 SequenceSoundPlayer_28e5b0(__int64 result, __int64 a2, __int64 a3);
__int64 SequenceSoundPlayer_28e6e0(__int64 a1, int a2, __int16 a3);
__int64 SequenceSoundPlayer_28e730(int a1, __int16 a2);
__int64 SequenceSoundPlayer_28e780(__int64 result, unsigned int a2,
                                   unsigned int a3);
__int64 SequenceSoundPlayer_28e860(__int64 result, unsigned int a2, char a3,
                                   unsigned int a4);
__int64 SequenceSoundPlayer_28e940(__int64 result, unsigned int a2, float a3);
__int64 SequenceSoundPlayer_28ea20(__int64 result, unsigned int a2, float a3);
__int64 SequenceSoundPlayer_28eb00(__int64 result, unsigned int a2, float a3);
__int64 SequenceSoundPlayer_28ebe0(__int64 result, unsigned int a2,
                                   unsigned int a3, float a4);
__int64 SequenceSoundPlayer_28ecc0(__int64 a1, unsigned int a2,
                                   unsigned int a3);
__int64 SequenceSoundPlayer_28eda0(__int64 result, unsigned int a2,
                                   unsigned int a3);
__int64 SequenceSoundPlayer_28ee80(__int64 result, unsigned int a2,
                                   unsigned int a3);
__int64 SequenceSoundPlayer_28ef60(__int64 result, unsigned int a2,
                                   unsigned int a3);
__int64 SequenceSoundPlayer_28f040(__int64 result, unsigned int a2);
__int64 SequenceSoundPlayer_28f120(__int64 result, unsigned int a2, float a3);
__int64 SequenceSoundPlayer_28f200(__int64 result, unsigned int a2,
                                   unsigned int a3, float* a4);
__int64 SequenceSoundPlayer_28f5c0(__int64 result, unsigned int a2, float a3);
__int64 SequenceSoundPlayer_28f6a0(__int64 result, unsigned int a2, float a3);
__int64 SequenceSoundPlayer_28f780(__int64 result, unsigned int a2, float a3);
__int64 SequenceSoundPlayer_28f940(__int64 result, int a2, float a3);
__int64 SequenceSoundPlayer_Unknown8(__int64 result, unsigned __int64 a2,
                                     unsigned __int64 a3);
__int64 SequenceSoundPlayer_Unknown11(__int64 result);
__int64 GameRoutine_28fcd0_alt1(_QWORD) __asm__("GameRoutine_28fcd0");
__int64
SequenceSoundPlayer_28f940_alt1(_QWORD, _QWORD,
                                float) __asm__("SequenceSoundPlayer_28f940");
__int64 SequenceSoundPlayer_28f860(__int64 result, unsigned int a2,
                                   unsigned int a3, float a4);
__int64 SequenceSoundPlayer_Unknown3_290ff0(__int64 result);
__int64 SequenceSoundPlayer_Unknown4(__int64 a1);
__attribute__((swiftcall)) void nn_atk_detail_294f30(PSEUDO_X8, __int64 result,
                                                     int);
__int64 nn_detail_UnexpectedDefaultImpl(_QWORD, _QWORD);
extern _UNKNOWN GameData_219d0d0;
float SequenceSoundPlayer_2906c0(__int64, float*, _QWORD*);
__int64 SequenceSoundPlayer_28e5c0(__int64 result, unsigned int a2, __int64 a3);
__attribute__((swiftcall)) void
SequenceSoundPlayer_28e690(PSEUDO_X8 x8_, __int64 result, int a2);
float SequenceSoundPlayer_290500_alt1(__int64 a1, __int64 a2) __asm__(
    "SequenceSoundPlayer_290500");
__int64* GameRoutine_27cab0(__int64);
__int64 GameRoutine_28fbe0(_QWORD*);
__int64 GameRoutine_2a2c60(__int64, __int64, unsigned int);
__int64 SequenceSoundPlayer_290000(__int64, __int64*);
__int64 SequenceSoundPlayer_290180(__int64 result);
__int64 nn_os_WaitEvent(_QWORD);
void* TaskThread_2a2ae0();
__int64 SequenceSoundPlayer_28fcd0(__int64 result, unsigned int a2);
void nn_detail_UnexpectedDefaultImpl_alt1() __asm__(
    "nn_detail_UnexpectedDefaultImpl");
float SequenceSoundPlayer_290500(__int64 a1, int a2);

__int64 SequenceSoundPlayer_Unknown2(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 result;

  BasicSoundPlayer_Unknown2(a1, a2, a3);
  v4 = *(_QWORD*)a1;
  *(_WORD*)(a1 + 65) = 0;
  *(_BYTE*)(a1 + 248) = 0;
  result = (*(__int64 (**)(__int64, _QWORD))(v4 + 56))(a1, 0);
  *(_DWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_DWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 252) = 0x3F8000003F800000LL;
  atomic_store(0, (unsigned int*)(a1 + 552));
  *(_DWORD*)(a1 + 936) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_QWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 440) = 0;
  *(_QWORD*)(a1 + 448) = 0;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 464) = 0;
  *(_WORD*)(a1 + 300) = 32639;
  *(_DWORD*)(a1 + 302) = 0;
  *(_DWORD*)(a1 + 296) = 7876672;
  *(_QWORD*)(a1 + 520) = -1;
  *(_QWORD*)(a1 + 528) = -1;
  *(_QWORD*)(a1 + 536) = -1;
  *(_QWORD*)(a1 + 544) = -1;
  *(_WORD*)(a1 + 785) = 1;
  return result;
}

__int64 SequenceSoundPlayer_28dff0(__int64 a1)
{
  __int64 result;
  __int64 v3;

  if (*(_BYTE*)(a1 + 786) == 1) {
    v3 = GameRoutine_2a1b90(a1);
    SoundThread_2a1fd0(v3, a1 + 224);
    *(_BYTE*)(a1 + 786) = 0;
    if (*(_BYTE*)(a1 + 65) != 1) {
    LABEL_3:
      if (*(_QWORD*)(a1 + 344) == 0) {
        goto LABEL_5;
      }
      goto LABEL_4;
    }
  }
  else if (*(_BYTE*)(a1 + 65) != 1) {
    goto LABEL_3;
  }
  *(_BYTE*)(a1 + 65) = 0;
  if (*(_QWORD*)(a1 + 344) != 0) {
  LABEL_4:
    GameRoutine_294020();
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 320) + 24LL))(
        *(_QWORD*)(a1 + 320), *(_QWORD*)(a1 + 344));
    *(_QWORD*)(a1 + 344) = 0;
  }

LABEL_5:
  if (*(_QWORD*)(a1 + 352) != 0) {
    GameRoutine_294020();
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 320) + 24LL))(
        *(_QWORD*)(a1 + 320), *(_QWORD*)(a1 + 352));
    *(_QWORD*)(a1 + 352) = 0;
  }
  if (*(_QWORD*)(a1 + 360) != 0) {
    GameRoutine_294020();
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 320) + 24LL))(
        *(_QWORD*)(a1 + 320), *(_QWORD*)(a1 + 360));
    *(_QWORD*)(a1 + 360) = 0;
  }
  if (*(_QWORD*)(a1 + 368) != 0) {
    GameRoutine_294020();
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 320) + 24LL))(
        *(_QWORD*)(a1 + 320), *(_QWORD*)(a1 + 368));
    *(_QWORD*)(a1 + 368) = 0;
  }
  if (*(_QWORD*)(a1 + 376) != 0) {
    GameRoutine_294020();
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 320) + 24LL))(
        *(_QWORD*)(a1 + 320), *(_QWORD*)(a1 + 376));
    *(_QWORD*)(a1 + 376) = 0;
  }
  if (*(_QWORD*)(a1 + 384) != 0) {
    GameRoutine_294020();
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 320) + 24LL))(
        *(_QWORD*)(a1 + 320), *(_QWORD*)(a1 + 384));
    *(_QWORD*)(a1 + 384) = 0;
  }
  if (*(_QWORD*)(a1 + 392) != 0) {
    GameRoutine_294020();
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 320) + 24LL))(
        *(_QWORD*)(a1 + 320), *(_QWORD*)(a1 + 392));
    *(_QWORD*)(a1 + 392) = 0;
  }
  if (*(_QWORD*)(a1 + 400) != 0) {
    GameRoutine_294020();
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 320) + 24LL))(
        *(_QWORD*)(a1 + 320), *(_QWORD*)(a1 + 400));
    *(_QWORD*)(a1 + 400) = 0;
  }
  if (*(_QWORD*)(a1 + 408) != 0) {
    GameRoutine_294020();
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 320) + 24LL))(
        *(_QWORD*)(a1 + 320), *(_QWORD*)(a1 + 408));
    *(_QWORD*)(a1 + 408) = 0;
  }
  if (*(_QWORD*)(a1 + 416) != 0) {
    GameRoutine_294020();
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 320) + 24LL))(
        *(_QWORD*)(a1 + 320), *(_QWORD*)(a1 + 416));
    *(_QWORD*)(a1 + 416) = 0;
  }
  if (*(_QWORD*)(a1 + 424) != 0) {
    GameRoutine_294020();
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 320) + 24LL))(
        *(_QWORD*)(a1 + 320), *(_QWORD*)(a1 + 424));
    *(_QWORD*)(a1 + 424) = 0;
  }
  if (*(_QWORD*)(a1 + 432) != 0) {
    GameRoutine_294020();
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 320) + 24LL))(
        *(_QWORD*)(a1 + 320), *(_QWORD*)(a1 + 432));
    *(_QWORD*)(a1 + 432) = 0;
  }
  if (*(_QWORD*)(a1 + 440) != 0) {
    GameRoutine_294020();
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 320) + 24LL))(
        *(_QWORD*)(a1 + 320), *(_QWORD*)(a1 + 440));
    *(_QWORD*)(a1 + 440) = 0;
  }
  if (*(_QWORD*)(a1 + 448) != 0) {
    GameRoutine_294020();
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 320) + 24LL))(
        *(_QWORD*)(a1 + 320), *(_QWORD*)(a1 + 448));
    *(_QWORD*)(a1 + 448) = 0;
  }
  if (*(_QWORD*)(a1 + 456) != 0) {
    GameRoutine_294020();
    (*(void (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 320) + 24LL))(
        *(_QWORD*)(a1 + 320), *(_QWORD*)(a1 + 456));
    *(_QWORD*)(a1 + 456) = 0;
  }
  result = *(_QWORD*)(a1 + 464);
  if (result != 0) {
    GameRoutine_294020();
    result = (*(__int64 (**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 320) + 24LL))(
        *(_QWORD*)(a1 + 320), *(_QWORD*)(a1 + 464));
    *(_QWORD*)(a1 + 464) = 0;
  }
  return result;
}

__int64 SequenceSoundPlayer_28e2a0(_QWORD* a1, _QWORD* a2)
{
  unsigned int v4;
  int v5;
  bool v6;
  __int64 result;
  unsigned int v8;
  unsigned __int64 v9;

  a1[39] = a2[2];
  v4 = *((_DWORD*)a2 + 2);
  if (v4 != 0) {
    v5 = 0;
    do {
      v5 += v4 & 1;
      v6 = v4 >= 2;
      v4 >>= 1;
    } while (v6);
    result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 32LL))(*a2);
    if (v5 > (int)result) {
      return (*(__int64 (**)(_QWORD*))(*a1 + 24LL))(a1);
    }
  }
  else {
    result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 32LL))(*a2);
    if ((int)result < 0) {
      return (*(__int64 (**)(_QWORD*))(*a1 + 24LL))(a1);
    }
  }
  v8 = *((_DWORD*)a2 + 2);
  if (v8 != 0) {
    v9 = 0;
    do {
      if ((v8 & 1) != 0) {
        result =
            (*(__int64 (**)(_QWORD, _QWORD*))(*(_QWORD*)*a2 + 16LL))(*a2, a1);
        if (v9 <= 0xF) {
          a1[v9 + 43] = result;
          result = GameRoutine_293dd0();
        }
      }
      ++v9;
      v6 = v8 >= 2;
      v8 >>= 1;
    } while (v6);
  }
  a1[40] = *a2;
  return result;
}

__int64 SequenceSoundPlayer_28e3c0(__int64 a1, int a2)
{
  if (a2 <= 15) {
    return *(_QWORD*)(a1 + 8LL * a2 + 344);
  }
  else {
    return 0;
  }
}

__int64 SequenceSoundPlayer_Unknown6(__int64 a1, char a2)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;

  *(_BYTE*)(a1 + 66) = a2;
  v3 = *(_QWORD*)(a1 + 344);
  if (v3 != 0) {
    GameRoutine_294a00(v3, a2 & 1);
  }
  v5 = *(_QWORD*)(a1 + 352);
  if (v5 != 0) {
    GameRoutine_294a00(v5, a2 & 1);
  }
  v6 = *(_QWORD*)(a1 + 360);
  if (v6 != 0) {
    GameRoutine_294a00(v6, a2 & 1);
  }
  v7 = *(_QWORD*)(a1 + 368);
  if (v7 != 0) {
    GameRoutine_294a00(v7, a2 & 1);
  }
  v8 = *(_QWORD*)(a1 + 376);
  if (v8 != 0) {
    GameRoutine_294a00(v8, a2 & 1);
  }
  v9 = *(_QWORD*)(a1 + 384);
  if (v9 != 0) {
    GameRoutine_294a00(v9, a2 & 1);
  }
  v10 = *(_QWORD*)(a1 + 392);
  if (v10 != 0) {
    GameRoutine_294a00(v10, a2 & 1);
  }
  v11 = *(_QWORD*)(a1 + 400);
  if (v11 != 0) {
    GameRoutine_294a00(v11, a2 & 1);
  }
  v12 = *(_QWORD*)(a1 + 408);
  if (v12 != 0) {
    GameRoutine_294a00(v12, a2 & 1);
  }
  v13 = *(_QWORD*)(a1 + 416);
  if (v13 != 0) {
    GameRoutine_294a00(v13, a2 & 1);
  }
  v14 = *(_QWORD*)(a1 + 424);
  if (v14 != 0) {
    GameRoutine_294a00(v14, a2 & 1);
  }
  v15 = *(_QWORD*)(a1 + 432);
  if (v15 != 0) {
    GameRoutine_294a00(v15, a2 & 1);
  }
  v16 = *(_QWORD*)(a1 + 440);
  if (v16 != 0) {
    GameRoutine_294a00(v16, a2 & 1);
  }
  v17 = *(_QWORD*)(a1 + 448);
  if (v17 != 0) {
    GameRoutine_294a00(v17, a2 & 1);
  }
  v18 = *(_QWORD*)(a1 + 456);
  if (v18 != 0) {
    GameRoutine_294a00(v18, a2 & 1);
  }
  result = *(_QWORD*)(a1 + 464);
  if (result != 0) {
    return GameRoutine_294a00(result, a2 & 1);
  }
  return result;
}

float SequenceSoundPlayer_28e540(__int64 a1, int a2, int a3)
{
  float result;

  if (*(_BYTE*)(a1 + 64) == 1) {
    if (a2 == 1) {
      result = *(float*)(a1 + 284) + (float)a3;
      *(float*)(a1 + 284) = result;
    }
    else if (a2 == 0) {
      *(_DWORD*)(a1 + 280) += a3;
    }
  }
  return result;
}

__int64 SequenceSoundPlayer_28e5b0(__int64 result, __int64 a2, __int64 a3)
{
  *(_QWORD*)(result + 328) = a2;
  *(_QWORD*)(result + 336) = a3;
  return result;
}

__int64 SequenceSoundPlayer_28e5c0(__int64 result, unsigned int a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v7;
  struct {
    _QWORD v8[3];
    __int64 v9;
  } v8_;
  struct {
    __int64 v10;
    __int64 v11;
  } v10_;

  if (*(_QWORD*)(result + 328) != 0) {
    v3 = result;
    v4 = result + 520;
    nn_os_AcquireWriteLock(result + 472);
    nn_os_AcquireWriteLock(&GameData_219d0d0);
    v10_.v10 = 0;
    v10_.v11 = 0;
    nn_atk_detail_294f30((void*)(&v10_.v10), a3, 0);
    v8_.v8[0] = v4;
    v8_.v8[1] = GameData_2135328[0];
    v8_.v8[2] = v10_.v10;
    v8_.v9 = 0;
    LOBYTE(v8_.v9) = *(_BYTE*)(a3 + 200);
    (*(void (**)(_QWORD, _QWORD*, _QWORD))(v3 + 328))(a2, v8_.v8,
                                                      *(_QWORD*)(v3 + 336));
    v7 = v10_.v11;
    *(_BYTE*)(a3 + 200) = v8_.v9;
    if (v7 != 0) {
      nn_os_ReleaseWriteLock(v7);
    }
    nn_os_ReleaseWriteLock(&GameData_219d0d0);
    return nn_os_ReleaseWriteLock(v3 + 472);
  }
  return result;
}

__attribute__((swiftcall)) void

SequenceSoundPlayer_28e690(PSEUDO_X8 x8_, __int64 result, int a2)
{
  _QWORD* a3 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v3;
  __int64 v4;
  void* v5;

  if (a2 > 15) {
    if ((unsigned int)a2 > 0x1F) {
      *a3 = 0;
      a3[1] = 0;
    }
    else {
      v5 = GameData_2135338;
      *a3 = (char*)GameData_2135328[0] + 2 * (unsigned int)(a2 - 16);
      a3[1] = v5;
      {
        nn_os_AcquireWriteLock(v5);
        return;
      }
    }
  }
  else {
    v3 = result + 2LL * a2;
    v4 = result + 472;
    *a3 = v3 + 520;
    a3[1] = v4;
    {
      nn_os_AcquireWriteLock(v4);
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 SequenceSoundPlayer_28e6e0(__int64 a1, int a2, __int16 a3)
{
  nn_os_AcquireWriteLock(a1 + 472);
  *(_WORD*)(a1 + 2LL * a2 + 520) = a3;
  return nn_os_ReleaseWriteLock(a1 + 472);
}

__int64 SequenceSoundPlayer_28e730(int a1, __int16 a2)
{
  void* v4;

  v4 = GameData_2135338;
  nn_os_AcquireWriteLock(GameData_2135338);
  *((_WORD*)GameData_2135328[0] + a1) = a2;
  return nn_os_ReleaseWriteLock(v4);
}

__int64 SequenceSoundPlayer_28e780(__int64 result, unsigned int a2,
                                   unsigned int a3)
{
  __int64 v3;
  unsigned int v5;
  unsigned __int64 v6;
  __int64 (*v7)();
  bool v8;

  if (a2 != 0) {
    v3 = result + 344;
    v5 = a2;
    v6 = 0;
    v7 = GameData_2135300;
    do {
      if ((v5 & 1) != 0) {
        result = *(_QWORD*)(v3 + 8 * v6);
        if (result != 0) {
          result = ((__int64 (*)(__int64, _QWORD))v7)(result, a3);
        }
      }
      if (v6 > 0xE) {
        break;
      }
      ++v6;
      v8 = v5 > 1;
      v5 >>= 1;
    } while (v8);
  }
  return result;
}

__int64 SequenceSoundPlayer_28e860(__int64 result, unsigned int a2, char a3,
                                   unsigned int a4)
{
  unsigned int v4;
  __int64 v5;
  unsigned __int64 v8;
  __int64 (*v9)();
  bool v10;

  v4 = a2;
  if (a2 != 0) {
    v5 = result + 344;
    v8 = 0;
    v9 = GameData_2135340[0];
    do {
      if ((v4 & 1) != 0) {
        result = *(_QWORD*)(v5 + 8 * v8);
        if (result != 0) {
          result =
              ((__int64 (*)(__int64, _QWORD, _QWORD))v9)(result, a3 & 1, a4);
        }
      }
      if (v8 > 0xE) {
        break;
      }
      ++v8;
      v10 = v4 > 1;
      v4 >>= 1;
    } while (v10);
  }
  return result;
}

__int64 SequenceSoundPlayer_28e940(__int64 result, unsigned int a2, float a3)
{
  __int64 v4;
  unsigned int v5;
  unsigned __int64 v6;
  bool v7;

  if (a2 != 0) {
    v4 = result + 344;
    v5 = a2;
    v6 = 0;
    do {
      if ((v5 & 1) != 0) {
        result = *(_QWORD*)(v4 + 8 * v6);
        if (result != 0) {
          result = GameRoutine_28ea10(a3);
        }
      }
      if (v6 > 0xE) {
        break;
      }
      ++v6;
      v7 = v5 > 1;
      v5 >>= 1;
    } while (v7);
  }
  return result;
}

__int64 SequenceSoundPlayer_28ea20(__int64 result, unsigned int a2, float a3)
{
  __int64 v4;
  unsigned int v5;
  unsigned __int64 v6;
  bool v7;

  if (a2 != 0) {
    v4 = result + 344;
    v5 = a2;
    v6 = 0;
    do {
      if ((v5 & 1) != 0) {
        result = *(_QWORD*)(v4 + 8 * v6);
        if (result != 0) {
          result = GameRoutine_28eaf0(a3);
        }
      }
      if (v6 > 0xE) {
        break;
      }
      ++v6;
      v7 = v5 > 1;
      v5 >>= 1;
    } while (v7);
  }
  return result;
}

__int64 SequenceSoundPlayer_28eb00(__int64 result, unsigned int a2, float a3)
{
  __int64 v4;
  unsigned int v5;
  unsigned __int64 v6;
  bool v7;

  if (a2 != 0) {
    v4 = result + 344;
    v5 = a2;
    v6 = 0;
    do {
      if ((v5 & 1) != 0) {
        result = *(_QWORD*)(v4 + 8 * v6);
        if (result != 0) {
          result = GameRoutine_28ebd0(a3);
        }
      }
      if (v6 > 0xE) {
        break;
      }
      ++v6;
      v7 = v5 > 1;
      v5 >>= 1;
    } while (v7);
  }
  return result;
}

__int64 SequenceSoundPlayer_28ebe0(__int64 result, unsigned int a2,
                                   unsigned int a3, float a4)
{
  __int64 v5;
  unsigned int v7;
  unsigned __int64 v8;
  __int64 (*v9)();
  bool v10;

  if (a2 != 0) {
    v5 = result + 344;
    v7 = a2;
    v8 = 0;
    v9 = GameData_2135348[0];
    do {
      if ((v7 & 1) != 0) {
        result = *(_QWORD*)(v5 + 8 * v8);
        if (result != 0) {
          result = ((__int64 (*)(__int64, _QWORD, float))v9)(result, a3, a4);
        }
      }
      if (v8 > 0xE) {
        break;
      }
      ++v8;
      v10 = v7 > 1;
      v7 >>= 1;
    } while (v10);
  }
  return result;
}

__int64 SequenceSoundPlayer_28ecc0(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3;
  __int64 v6;
  unsigned int v8;
  unsigned __int64 v9;
  __int64 (*v10)();
  __int64 v11;
  bool v12;

  v3 = *(unsigned __int8*)(a1 + 24LL * (int)a3 + 704);
  if (v3 == 1 && a2 != 0) {
    v6 = a1 + 344;
    v8 = a2;
    v9 = 0;
    v10 = GameData_2135350[0];
    do {
      if ((v8 & 1) != 0) {
        v11 = *(_QWORD*)(v6 + 8 * v9);
        if (v11 != 0) {
          ((void (*)(__int64, _QWORD))v10)(v11, a3);
        }
      }
      if (v9 > 0xE) {
        break;
      }
      ++v9;
      v12 = v8 > 1;
      v8 >>= 1;
    } while (v12);
  }
  return v3;
}

__int64 SequenceSoundPlayer_28eda0(__int64 result, unsigned int a2,
                                   unsigned int a3)
{
  __int64 v3;
  unsigned int v5;
  unsigned __int64 v6;
  __int64 (*v7)();
  bool v8;

  if (a2 != 0) {
    v3 = result + 344;
    v5 = a2;
    v6 = 0;
    v7 = GameData_2135358[0];
    do {
      if ((v5 & 1) != 0) {
        result = *(_QWORD*)(v3 + 8 * v6);
        if (result != 0) {
          result = ((__int64 (*)(__int64, _QWORD))v7)(result, a3);
        }
      }
      if (v6 > 0xE) {
        break;
      }
      ++v6;
      v8 = v5 > 1;
      v5 >>= 1;
    } while (v8);
  }
  return result;
}

__int64 SequenceSoundPlayer_28ee80(__int64 result, unsigned int a2,
                                   unsigned int a3)
{
  __int64 v3;
  unsigned int v5;
  unsigned __int64 v6;
  __int64 (*v7)();
  bool v8;

  if (a2 != 0) {
    v3 = result + 344;
    v5 = a2;
    v6 = 0;
    v7 = GameData_2135360[0];
    do {
      if ((v5 & 1) != 0) {
        result = *(_QWORD*)(v3 + 8 * v6);
        if (result != 0) {
          result = ((__int64 (*)(__int64, _QWORD))v7)(result, a3);
        }
      }
      if (v6 > 0xE) {
        break;
      }
      ++v6;
      v8 = v5 > 1;
      v5 >>= 1;
    } while (v8);
  }
  return result;
}

__int64 SequenceSoundPlayer_28ef60(__int64 result, unsigned int a2,
                                   unsigned int a3)
{
  __int64 v3;
  unsigned int v5;
  unsigned __int64 v6;
  __int64 (*v7)();
  bool v8;

  if (a2 != 0) {
    v3 = result + 344;
    v5 = a2;
    v6 = 0;
    v7 = GameData_2135368[0];
    do {
      if ((v5 & 1) != 0) {
        result = *(_QWORD*)(v3 + 8 * v6);
        if (result != 0) {
          result = ((__int64 (*)(__int64, _QWORD))v7)(result, a3);
        }
      }
      if (v6 > 0xE) {
        break;
      }
      ++v6;
      v8 = v5 > 1;
      v5 >>= 1;
    } while (v8);
  }
  return result;
}

__int64 SequenceSoundPlayer_28f040(__int64 result, unsigned int a2)
{
  __int64 v2;
  unsigned int v3;
  unsigned __int64 v4;
  __int64 (*v5)();
  bool v6;

  if (a2 != 0) {
    v2 = result + 344;
    v3 = a2;
    v4 = 0;
    v5 = GameData_2135368[0];
    do {
      if ((v3 & 1) != 0) {
        result = *(_QWORD*)(v2 + 8 * v4);
        if (result != 0) {
          result = ((__int64 (*)(__int64, __int64))v5)(result, 0xFFFFFFFFLL);
        }
      }
      if (v4 > 0xE) {
        break;
      }
      ++v4;
      v6 = v3 > 1;
      v3 >>= 1;
    } while (v6);
  }
  return result;
}

__int64 SequenceSoundPlayer_28f120(__int64 result, unsigned int a2, float a3)
{
  __int64 v4;
  unsigned int v5;
  unsigned __int64 v6;
  bool v7;

  if (a2 != 0) {
    v4 = result + 344;
    v5 = a2;
    v6 = 0;
    do {
      if ((v5 & 1) != 0) {
        result = *(_QWORD*)(v4 + 8 * v6);
        if (result != 0) {
          result = GameRoutine_28f1f0(a3);
        }
      }
      if (v6 > 0xE) {
        break;
      }
      ++v6;
      v7 = v5 > 1;
      v5 >>= 1;
    } while (v7);
  }
  return result;
}

__int64 SequenceSoundPlayer_28f200(__int64 result, unsigned int a2,
                                   unsigned int a3, float* a4)
{
  __int64 v4;
  unsigned int v7;
  unsigned __int64 v8;
  unsigned int v9;
  __int64 (*v10)();
  float v11;
  bool v12;
  float v13;
  unsigned __int64 v14;
  unsigned int v15;
  float v16;
  unsigned __int64 v17;
  unsigned int v18;
  float v19;
  unsigned __int64 v20;
  unsigned int v21;
  float v22;
  unsigned __int64 v23;
  unsigned int v24;
  float v25;
  unsigned __int64 v26;

  if (a2 != 0) {
    v4 = result + 344;
    v7 = a2;
    v8 = 0;
    v9 = a2;
    v10 = GameData_2135370;
    v11 = *a4;
    do {
      if ((v9 & 1) != 0) {
        result = *(_QWORD*)(v4 + 8 * v8);
        if (result != 0) {
          result = ((__int64 (*)(__int64, _QWORD, _QWORD, float))v10)(
              result, a3, 0, v11);
        }
      }
      if (v8 > 0xE) {
        break;
      }
      ++v8;
      v12 = v9 > 1;
      v9 >>= 1;
    } while (v12);
    v13 = a4[1];
    v14 = 0;
    v15 = v7;
    do {
      if ((v15 & 1) != 0) {
        result = *(_QWORD*)(v4 + 8 * v14);
        if (result != 0) {
          result = ((__int64 (*)(__int64, _QWORD, __int64, float))v10)(
              result, a3, 1, v13);
        }
      }
      if (v14 > 0xE) {
        break;
      }
      ++v14;
      v12 = v15 > 1;
      v15 >>= 1;
    } while (v12);
    v16 = a4[2];
    v17 = 0;
    v18 = v7;
    do {
      if ((v18 & 1) != 0) {
        result = *(_QWORD*)(v4 + 8 * v17);
        if (result != 0) {
          result = ((__int64 (*)(__int64, _QWORD, __int64, float))v10)(
              result, a3, 2, v16);
        }
      }
      if (v17 > 0xE) {
        break;
      }
      ++v17;
      v12 = v18 > 1;
      v18 >>= 1;
    } while (v12);
    v19 = a4[3];
    v20 = 0;
    v21 = v7;
    do {
      if ((v21 & 1) != 0) {
        result = *(_QWORD*)(v4 + 8 * v20);
        if (result != 0) {
          result = ((__int64 (*)(__int64, _QWORD, __int64, float))v10)(
              result, a3, 3, v19);
        }
      }
      if (v20 > 0xE) {
        break;
      }
      ++v20;
      v12 = v21 > 1;
      v21 >>= 1;
    } while (v12);
    v22 = a4[4];
    v23 = 0;
    v24 = v7;
    do {
      if ((v24 & 1) != 0) {
        result = *(_QWORD*)(v4 + 8 * v23);
        if (result != 0) {
          result = ((__int64 (*)(__int64, _QWORD, __int64, float))v10)(
              result, a3, 4, v22);
        }
      }
      if (v23 > 0xE) {
        break;
      }
      ++v23;
      v12 = v24 > 1;
      v24 >>= 1;
    } while (v12);
    v25 = a4[5];
    v26 = 0;
    do {
      if ((v7 & 1) != 0) {
        result = *(_QWORD*)(v4 + 8 * v26);
        if (result != 0) {
          result = ((__int64 (*)(__int64, _QWORD, __int64, float))v10)(
              result, a3, 5, v25);
        }
      }
      if (v26 > 0xE) {
        break;
      }
      ++v26;
      v12 = v7 > 1;
      v7 >>= 1;
    } while (v12);
  }
  return result;
}

__int64 SequenceSoundPlayer_28f5c0(__int64 result, unsigned int a2, float a3)
{
  __int64 v4;
  unsigned int v5;
  unsigned __int64 v6;
  bool v7;

  if (a2 != 0) {
    v4 = result + 344;
    v5 = a2;
    v6 = 0;
    do {
      if ((v5 & 1) != 0) {
        result = *(_QWORD*)(v4 + 8 * v6);
        if (result != 0) {
          result = GameRoutine_28f690(a3);
        }
      }
      if (v6 > 0xE) {
        break;
      }
      ++v6;
      v7 = v5 > 1;
      v5 >>= 1;
    } while (v7);
  }
  return result;
}

__int64 SequenceSoundPlayer_28f6a0(__int64 result, unsigned int a2, float a3)
{
  __int64 v4;
  unsigned int v5;
  unsigned __int64 v6;
  bool v7;

  if (a2 != 0) {
    v4 = result + 344;
    v5 = a2;
    v6 = 0;
    do {
      if ((v5 & 1) != 0) {
        result = *(_QWORD*)(v4 + 8 * v6);
        if (result != 0) {
          result = GameRoutine_28f770(a3);
        }
      }
      if (v6 > 0xE) {
        break;
      }
      ++v6;
      v7 = v5 > 1;
      v5 >>= 1;
    } while (v7);
  }
  return result;
}

__int64 SequenceSoundPlayer_28f780(__int64 result, unsigned int a2, float a3)
{
  __int64 v4;
  unsigned int v5;
  unsigned __int64 v6;
  bool v7;

  if (a2 != 0) {
    v4 = result + 344;
    v5 = a2;
    v6 = 0;
    do {
      if ((v5 & 1) != 0) {
        result = *(_QWORD*)(v4 + 8 * v6);
        if (result != 0) {
          result = GameRoutine_28f850(a3);
        }
      }
      if (v6 > 0xE) {
        break;
      }
      ++v6;
      v7 = v5 > 1;
      v5 >>= 1;
    } while (v7);
  }
  return result;
}

__int64 SequenceSoundPlayer_28f860(__int64 result, unsigned int a2,
                                   unsigned int a3, float a4)
{
  __int64 v5;
  unsigned int v7;
  unsigned __int64 v8;
  bool v9;

  if (a2 != 0) {
    v5 = result + 344;
    v7 = a2;
    v8 = 0;
    do {
      if ((v7 & 1) != 0) {
        result = *(_QWORD*)(v5 + 8 * v8);
        if (result != 0) {
          result = SequenceSoundPlayer_28f940_alt1(result, a3, a4);
        }
      }
      if (v8 > 0xE) {
        break;
      }
      ++v8;
      v9 = v7 > 1;
      v7 >>= 1;
    } while (v9);
  }
  return result;
}

__int64 SequenceSoundPlayer_28f940(__int64 result, int a2, float a3)
{
  *(float*)(result + 4LL * a2 + 92) = a3;
  return result;
}

__int64 SequenceSoundPlayer_Unknown8(__int64 result, unsigned __int64 a2,
                                     unsigned __int64 a3)
{
  __int64 v3;
  _QWORD* v6;
  unsigned __int64 v7;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;

  if (*(_BYTE*)(result + 64) == 1) {
    v3 = *(_QWORD*)(result + 344);
    v6 = (_QWORD*)result;
    if (v3 != 0) {
      v7 = *(_QWORD*)(v3 + 184);
      if (a2 <= v7 && v7 <= a3) {
        goto LABEL_68;
      }
    }
    v9 = *(_QWORD*)(result + 352);
    if (v9 != 0) {
      v10 = *(_QWORD*)(v9 + 184);
      if (a2 <= v10 && v10 <= a3) {
        goto LABEL_68;
      }
    }
    v12 = *(_QWORD*)(result + 360);
    if (v12 != 0) {
      v13 = *(_QWORD*)(v12 + 184);
      if (a2 <= v13 && v13 <= a3) {
        goto LABEL_68;
      }
    }
    v15 = *(_QWORD*)(result + 368);
    if (v15 != 0) {
      v16 = *(_QWORD*)(v15 + 184);
      if (a2 <= v16 && v16 <= a3) {
        goto LABEL_68;
      }
    }
    v18 = *(_QWORD*)(result + 376);
    if (v18 != 0) {
      v19 = *(_QWORD*)(v18 + 184);
      if (a2 <= v19 && v19 <= a3) {
        goto LABEL_68;
      }
    }
    v21 = *(_QWORD*)(result + 384);
    if (v21 != 0) {
      v22 = *(_QWORD*)(v21 + 184);
      if (a2 <= v22 && v22 <= a3) {
        goto LABEL_68;
      }
    }
    v24 = *(_QWORD*)(result + 392);
    if (v24 != 0) {
      v25 = *(_QWORD*)(v24 + 184);
      if (a2 <= v25 && v25 <= a3) {
        goto LABEL_68;
      }
    }
    v26 = *(_QWORD*)(result + 400);
    if (v26 != 0) {
      v27 = *(_QWORD*)(v26 + 184);
      if (a2 <= v27 && v27 <= a3) {
        goto LABEL_68;
      }
    }
    v28 = *(_QWORD*)(result + 408);
    if (v28 != 0) {
      v29 = *(_QWORD*)(v28 + 184);
      if (a2 <= v29 && v29 <= a3) {
        goto LABEL_68;
      }
    }
    v30 = *(_QWORD*)(result + 416);
    if (v30 != 0) {
      v31 = *(_QWORD*)(v30 + 184);
      if (a2 <= v31 && v31 <= a3) {
        goto LABEL_68;
      }
    }
    v32 = *(_QWORD*)(result + 424);
    if (v32 != 0) {
      v33 = *(_QWORD*)(v32 + 184);
      if (a2 <= v33 && v33 <= a3) {
        goto LABEL_68;
      }
    }
    v34 = *(_QWORD*)(result + 432);
    if (v34 != 0) {
      v35 = *(_QWORD*)(v34 + 184);
      if (a2 <= v35 && v35 <= a3) {
        goto LABEL_68;
      }
    }
    v36 = *(_QWORD*)(result + 440);
    if (v36 != 0) {
      v37 = *(_QWORD*)(v36 + 184);
      if (a2 <= v37 && v37 <= a3) {
        goto LABEL_68;
      }
    }
    if ((v38 = *(_QWORD*)(result + 448)) != 0 &&
            (v39 = *(_QWORD*)(v38 + 184), a2 <= v39) && v39 <= a3 ||
        (v40 = *(_QWORD*)(result + 456)) != 0 &&
            (v41 = *(_QWORD*)(v40 + 184), a2 <= v41) && v41 <= a3 ||
        (v42 = *(_QWORD*)(result + 464)) != 0 &&
            (v43 = *(_QWORD*)(v42 + 184), a2 <= v43) && v43 <= a3) {
    LABEL_68:
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 24LL))(result);
    }
    v44 = v6[86];
    if (a2 <= v44 && v44 <= a3) {
      result = GameRoutine_28bc60((__int64)(v6 + 86));
    }
    v45 = v6[89];
    if (a2 <= v45 && v45 <= a3) {
      result = GameRoutine_28bc60((__int64)(v6 + 89));
    }
    v46 = v6[92];
    if (a2 <= v46 && v46 <= a3) {
      result = GameRoutine_28bc60((__int64)(v6 + 92));
    }
    v47 = v6[95];
    if (a2 <= v47 && v47 <= a3) {
      return GameRoutine_28bc60((__int64)(v6 + 95));
    }
  }
  return result;
}

__int64 SequenceSoundPlayer_28fcd0(__int64 result, unsigned int a2)
{

#pragma clang fp contract(off)
  int v2;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  int v31;
  __int64 v32;
  int v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  int v44;
  void* v45;
  int v46;
  bool v47;
  int v48;
  struct {
    __int64 v49[9];
    int v50;
    int v51;
    int v52;
    int v53;
    __int64 v54;
  } v49_;

  v2 = *(unsigned __int8*)(result + 784);
  v4 = result;
  if (v2 != 2) {
    if (v2 != 1) {
    LABEL_18:
      v46 = *(_DWORD*)(v4 + 288);
      v47 = __OFSUB__(v46, 1);
      v48 = v46 - 1;
      if (v48 < 0 != v47) {
        if (*(_BYTE*)(v4 + 64) == 1 && (*(_BYTE*)(v4 + 65) & 1) != 0) {
          if (*(_DWORD*)(v4 + 280) != 0 || *(float*)(v4 + 284) > 0x0.0p+0f) {
            SequenceSoundPlayer_290180(v4);
          }
          else if ((*(_BYTE*)(v4 + 66) & 1) == 0) {
            SequenceSoundPlayer_290500_alt1(v4, a2);
          }
          return GameRoutine_28fbe0((_QWORD*)v4);
        }
      }
      else {
        *(_DWORD*)(v4 + 288) = v48;
      }
      return result;
    }
    v5 = *(_QWORD*)(result + 816);
    if (v5 == 0) {
      return result;
    }
    v6 = *(__int64**)(v5 + 48);
    if (v6 == (__int64*)(v5 + 40)) {
      return result;
    }
    v7 = (__int64*)v6[1];
    v8 = *v7;
    *(_QWORD*)(*v6 + 8) = v7;
    *v7 = *v6;
    *(_QWORD*)(v8 + 8) = v6;
    *v6 = v8;
    *(_QWORD*)(result + 824) = v6 - 148;
    *(_BYTE*)(result + 784) = 2;
    nn_os_WaitEvent(v6 - 145);
    result = nn_os_WaitEvent(v6 - 110);
    *((_DWORD*)v6 - 280) = 0;
    v9 = v6 - 126;
    *v9 = 0;
    v9[1] = 0;
    v9[2] = 0;
    v9[3] = 0;
    v9[4] = 0;
    v9[5] = 0;
    v9[6] = 0;
    v9[7] = 0;
    v9[8] = 0;
    *((_DWORD*)v9 + 18) = 0;
    *((_BYTE*)v6 - 912) = 0;
    v10 = v6 - 139;
    *v10 = *(_QWORD*)(v4 + 832);
    v11 = *(_QWORD*)(v4 + 840);
    v12 = *(_QWORD*)(v4 + 848);
    v13 = *(_QWORD*)(v4 + 864);
    v10[3] = *(_QWORD*)(v4 + 856);
    v10[4] = v13;
    v10[1] = v11;
    v10[2] = v12;
    v14 = *(_QWORD*)(v4 + 872);
    v15 = *(_QWORD*)(v4 + 880);
    v16 = *(_QWORD*)(v4 + 896);
    v10[7] = *(_QWORD*)(v4 + 888);
    v10[8] = v16;
    v10[5] = v14;
    v10[6] = v15;
    v17 = *(_QWORD*)(v4 + 904);
    v18 = *(_QWORD*)(v4 + 912);
    v19 = *(_QWORD*)(v4 + 928);
    v10[11] = *(_QWORD*)(v4 + 920);
    v10[12] = v19;
    v10[9] = v17;
    v10[10] = v18;
    *(v6 - 116) = 0;
    *(v6 - 115) = (__int64)(v6 - 89);
    *((_DWORD*)v6 - 210) = 0;
    v20 = v6 - 104;
    *v20 = *(_QWORD*)(v4 + 832);
    v21 = *(_QWORD*)(v4 + 840);
    v22 = *(_QWORD*)(v4 + 848);
    v23 = *(_QWORD*)(v4 + 864);
    v20[3] = *(_QWORD*)(v4 + 856);
    v20[4] = v23;
    v20[1] = v21;
    v20[2] = v22;
    v24 = *(_QWORD*)(v4 + 872);
    v25 = *(_QWORD*)(v4 + 880);
    v26 = *(_QWORD*)(v4 + 896);
    v20[7] = *(_QWORD*)(v4 + 888);
    v20[8] = v26;
    v20[5] = v24;
    v20[6] = v25;
    v27 = *(_QWORD*)(v4 + 904);
    v28 = *(_QWORD*)(v4 + 912);
    v29 = *(_QWORD*)(v4 + 928);
    v20[11] = *(_QWORD*)(v4 + 920);
    v20[12] = v29;
    v20[9] = v27;
    v20[10] = v28;
    *(v6 - 91) = 0;
    *(v6 - 90) = (__int64)(v6 - 89);
  }
  v30 = *(_QWORD*)(v4 + 824);
  if (*(_QWORD*)(v30 + 256) == 0) {
    result = (__int64)GameRoutine_27cab0(*(_QWORD*)(v30 + 88));
    *(_QWORD*)(v30 + 256) = result;
    if (result == 0) {
      return result;
    }
  }
  v31 = *(_DWORD*)(v30 + 64);
  if ((unsigned int)(v31 - 3) < 2) {
    v32 = *(_QWORD*)(v4 + 824);
    if (*(_BYTE*)(v32 + 272) != 1) {
      *(_BYTE*)(v4 + 67) = 1;
      return SequenceSoundPlayer_28dff0(v4);
    }
    v33 = *(_DWORD*)(v4 + 800);
    v34 = *(_DWORD*)(v4 + 804);
    v35 = *(_DWORD*)(v4 + 808);
    v49_.v54 = 0;
    v49_.v52 = v33;
    v49_.v53 = v34;
    v36 = *(_QWORD*)(v32 + 176);
    v37 = *(_QWORD*)(v32 + 184);
    LODWORD(v49_.v54) = v35;
    v49_.v49[0] = v36;
    v49_.v49[1] = v37;
    v38 = *(_QWORD*)(v32 + 200);
    v49_.v49[2] = *(_QWORD*)(v32 + 192);
    v49_.v49[3] = v38;
    v39 = *(_QWORD*)(v32 + 216);
    v49_.v49[4] = *(_QWORD*)(v32 + 208);
    v49_.v49[5] = v39;
    v40 = *(_QWORD*)(v32 + 232);
    v49_.v49[6] = *(_QWORD*)(v32 + 224);
    v49_.v49[7] = v40;
    v41 = *(_QWORD*)(v32 + 240);
    v42 = *(_DWORD*)(v32 + 248);
    v49_.v49[8] = v41;
    LODWORD(v41) = *(_DWORD*)(v4 + 788);
    v49_.v50 = v42;
    v49_.v51 = v41;
    result = SequenceSoundPlayer_290000(v4, v49_.v49);
    if (*(_BYTE*)(v4 + 64) == 1) {
      v43 = *(_DWORD*)(v4 + 796);
      v44 = *(_DWORD*)(v4 + 792);
      if (v44 == 1) {
        *(float*)(v4 + 284) = *(float*)(v4 + 284) + (float)v43;
      }
      else if (v44 == 0) {
        *(_DWORD*)(v4 + 280) += v43;
      }
    }
    goto LABEL_18;
  }
  if (v31 == 0) {
    v45 = TaskThread_2a2ae0();
    return GameRoutine_2a2c60((__int64)v45, v30, 1u);
  }
  return result;
}

float SequenceSoundPlayer_290500(__int64 a1, int a2)
{

#pragma clang fp contract(off)
  int v2;
  float result;
  unsigned __int64 v5;
  char v6;
  __int64 v7;
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  char v11;
  float v12;
  char v13;
  unsigned __int64 v14;
  float v15;

  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v13 = COERCE_AS(__typeof__(v13),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
  v6 = COERCE_AS(__typeof__(v6),
                 PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v2 = *(_DWORD*)(a1 + 260);
  if (v2 == 1) {
    v15 = (float)(*(float*)(a1 + 256) *
                  (float)(*(unsigned __int16*)(a1 + 298) *
                          (unsigned int)*(unsigned __int8*)(a1 + 297))) /
          0x1.d4c0000000000p+15f;
    result = v15;
    if (v15 == 0x0.0p+0f) {
      return result;
    }
    v5 = 327680LL * a2;
    v14 = (unsigned __int64)(float)((float)(*(float*)(a1 + 264) *
                                            0x1.0000000000000p+16f) /
                                    v15);
    while (v14 < v5) {
      v5 -= v14;
      result = SequenceSoundPlayer_2906c0(a1, &v15, &v14),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if ((v6 & 1) == 0) {
        return result;
      }
    }
    v12 = (float)(v14 - v5);
    goto LABEL_20;
  }
  if (v2 != 0) {
    nn_detail_UnexpectedDefaultImpl_alt1(),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v13 = COERCE_AS(__typeof__(v13),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
        v6 = COERCE_AS(__typeof__(v6),
                       PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  v15 = (float)(*(float*)(a1 + 256) *
                (float)(*(unsigned __int16*)(a1 + 298) *
                        (unsigned int)*(unsigned __int8*)(a1 + 297))) /
        0x1.d4c0000000000p+15f;
  result = v15;
  if (v15 != 0x0.0p+0f) {
    v7 = 327680LL * a2;
    v14 = (unsigned __int64)(float)((float)(*(float*)(a1 + 264) *
                                            0x1.0000000000000p+16f) /
                                    v15);
    while (1) {
      v8 = *(_QWORD*)(a1 + 272);
      v10 = v14 - v8;
      v9 = v14 == v8;
      if (v14 >= v8) {
        break;
      }
      *(_QWORD*)(a1 + 272) = v8 - v14;
      result = SequenceSoundPlayer_2906c0(a1, &v15, &v14),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if ((v11 & 1) == 0) {
        return result;
      }
    }
    v14 -= v8;
    if (v9) {
      result = SequenceSoundPlayer_2906c0(a1, &v15, &v14),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v13 = COERCE_AS(__typeof__(v13),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r")),
      v6 = COERCE_AS(__typeof__(v6),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if ((v13 & 1) == 0) {
        return result;
      }
      v10 = v14;
    }
    *(_QWORD*)(a1 + 272) = v7;
    v12 = (float)v10;
  LABEL_20:
    result = (float)(v15 * v12) * 0x1.0000000000000p-16f;
    *(float*)(a1 + 264) = result;
  }
  return result;
}

__int64 SequenceSoundPlayer_Unknown11(__int64 result)
{
  if (*(_DWORD*)(result + 936) == 0) {
    return GameRoutine_28fcd0();
  }
  return result;
}

__int64 SequenceSoundPlayer_Unknown3_290ff0(__int64 result)
{
  if (*(_DWORD*)(result + 712) == 0) {
    return GameRoutine_28fcd0_alt1(result - 224);
  }
  return result;
}

__int64 SequenceSoundPlayer_Unknown4(__int64 a1)
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 224) + 40LL))(a1 - 224);
}

#pragma GCC visibility pop
