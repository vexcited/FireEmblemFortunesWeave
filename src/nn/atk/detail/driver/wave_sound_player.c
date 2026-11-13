#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* BaseNx_2ac830(_QWORD* result, __int64);
__int64 BaseNx_288cb0(_QWORD, _QWORD, _QWORD);
__int64 BaseNx_288da0(_QWORD, _QWORD, _QWORD);
__int64 BaseNx_2a1b90(_QWORD);
__int64 BaseNx_2a7880(__int64 result, char);
__int64 BaseNx_2ac8c0(_QWORD*, __int64, unsigned int);
__int64 BasicSoundPlayer_Unknown2(void);
__int64 GameRoutine_2829c0(_QWORD);
__int64 GameRoutine_2a3450(_QWORD, _QWORD);
__int64 GameRoutine_2a3470(_QWORD, _QWORD);
__int64 GameRoutine_2a3510(_QWORD, _QWORD, float);
__int64 GameRoutine_2a3810(__int64 result);
__int64 GameRoutine_2a64c0(__int64 result);
__int64 GameRoutine_2a6520(__int64, unsigned int*, int, __int64, unsigned int);
__int64 GameRoutine_2a6920(_QWORD, _QWORD, float);
__int64 GameRoutine_2a6930(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a6b30(__int64, unsigned int, __int64, __int64);
__int64 GameRoutine_2a6c20(void);
__int64 GameRoutine_2ad6d0(void);
__int64 GameRoutine_2ad6d0_alt1(_QWORD) __asm__("GameRoutine_2ad6d0");
__int64 GameRoutine_2adad0(_QWORD);
__int64 GameRoutine_2ae090(void);
__int64 GameRoutine_2ae140(_QWORD);
__int64 SequenceSoundPlayer_2910d0(_QWORD);
__int64 SequenceSoundPlayer_291150(_QWORD, _QWORD);
__int64 SequenceSoundPlayer_291170(_QWORD, _QWORD);
__int64 SoundThread_2a1fa0(__int64 result, __int64);
__int64 SoundThread_2a1fd0(__int64 result, __int64);
extern __int64 (*GameData_21354b0)();
float GameRoutine_2a3490(__int64, int);
float GameRoutine_2a3520(__int64, int);
__int64 WaveSoundPlayer_Unknown2_2ad060(__int64 a1);
__int64 WaveSoundPlayer_Unknown3_2ad0f0(_BYTE* a1);
_BYTE* WaveSoundPlayer_2ad260(_BYTE* result);
__int64 WaveSoundPlayer_2ad2d0(__int64 a1, __int64 a2, __int64 a3);
__int64 WaveSoundPlayer_2ad400(__int64 a1, __int64 a2, __int64* a3);
_BYTE* WaveSoundPlayer_Unknown5(_BYTE* result);
__int64 WaveSoundPlayer_Unknown6(__int64 result, char a2);
__int64 WaveSoundPlayer_Unknown8(__int64 result, unsigned __int64 a2,
                                 unsigned __int64 a3);
__int64 WaveSoundPlayer_Unknown2_2ad630(__int64 result, unsigned __int64 a2,
                                        unsigned __int64 a3);
__int64 WaveSoundPlayer_2ad8b0(__int64 a1);
void WaveSoundPlayer_2adf30(__int64 a1, __int64 a2, __int64 a3);
__int64 WaveSoundPlayer_Unknown10(__int64 result);
__int64 WaveSoundPlayer_Unknown3_2adf80(__int64 result);
__int64 WaveSoundPlayer_Unknown4(__int64 a1);
__int64 BaseNx_2a9de0(__int64);
__int64 WaveSoundPlayer_2ad6b0(__int64 a1, char a2);
_DWORD* BaseNx_288cb0_alt1(__int64, __int64, char) __asm__("BaseNx_288cb0");
__int64 BaseNx_288da0_alt1(_QWORD*, __int64) __asm__("BaseNx_288da0");
__int64 GameRoutine_2a3470_alt1(__int64 result,
                                int) __asm__("GameRoutine_2a3470");
__int64 GameRoutine_2a6920_alt1(__int64 result,
                                int) __asm__("GameRoutine_2a6920");
__int64 GameRoutine_2a6930_alt1(__int64) __asm__("GameRoutine_2a6930");
__int64 GameRoutine_2a6b30_alt1(unsigned int, unsigned int, __int64,
                                __int64) __asm__("GameRoutine_2a6b30");
extern __int64 (*WaveSoundPlayer_2adf30_ptr)();
float GameRoutine_2a3450_alt1(__int64, int) __asm__("GameRoutine_2a3450");
__int64 GameRoutine_2adad0_alt1(__int64 result,
                                long double) __asm__("GameRoutine_2adad0");
__int64 GameRoutine_2ae000(__int64, __int64);
__int64 GameRoutine_2ae0d0(__int64);
__int64
SequenceSoundPlayer_291150_alt1(__int64 result,
                                __int64) __asm__("SequenceSoundPlayer_291150");
void* BaseNx_2a1b90_alt1() __asm__("BaseNx_2a1b90");
void* SequenceSoundPlayer_2910d0_alt1() __asm__("SequenceSoundPlayer_2910d0");
__int64 WaveSoundPlayer_2ad6d0(__int64 result, long double a2);
__attribute__((swiftcall)) void game_283950(PSEUDO_X8, __int64 result, int);
__int64 GameRoutine_283930(__int64);
__int64 GameRoutine_283ab0(void);
__int64 GameRoutine_283c30(_QWORD);
__int64 GameRoutine_2a6940(__int64 result, char, float);
__int64 GameRoutine_2a6950(__int64, __int64, _QWORD*);
__int64 GameRoutine_2a69b0(__int64);
__int64 GameRoutine_2a69c0(__int64, __int64);
__int64 rcContext_doStopTimer_283cf0(_QWORD);
float GameHr_2a69d0(__int64, __int64);
void nn_detail_UnexpectedDefaultImpl();
__int64 WaveSoundPlayer_2adad0(__int64 result);

__int64 WaveSoundPlayer_Unknown2_2ad060(__int64 a1)
{
  __int64 result;

  BasicSoundPlayer_Unknown2();
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_DWORD*)(a1 + 288) = 0;
  *(_DWORD*)(a1 + 368) = 0;
  *(_WORD*)(a1 + 348) = 0;
  *(_BYTE*)(a1 + 350) = 0;
  *(_WORD*)(a1 + 249) = 0x4000;
  *(_DWORD*)(a1 + 252) = 1065353216;
  *(_DWORD*)(a1 + 336) = 1065353216;
  *(_DWORD*)(a1 + 272) = -1;
  *(_WORD*)(a1 + 345) = 64;
  *(_BYTE*)(a1 + 347) = 127;
  result = GameRoutine_2a3810(a1 + 320);
  *(_BYTE*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_BYTE*)(a1 + 374) = 0;
  *(_BYTE*)(a1 + 251) = -1;
  *(_WORD*)(a1 + 372) = 256;
  return result;
}

__int64 WaveSoundPlayer_Unknown3_2ad0f0(_BYTE* a1)
{
  _BYTE* v1;
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = a1;
  a1[67] = 1;
  if (a1[374] == 1) {
    v3 = BaseNx_2a1b90(a1);
    a1 = (_BYTE*)SoundThread_2a1fd0(v3, (__int64)(v1 + 224));
    v1[374] = 0;
    if (v1[65] != 1) {
    LABEL_3:
      if (v1[64] != 1) {
        goto LABEL_4;
      }
      goto LABEL_9;
    }
  }
  else if (a1[65] != 1) {
    goto LABEL_3;
  }
  v1[65] = 0;
  if (v1[64] != 1) {
  LABEL_4:
    if (v1[373] != 1) {
      goto LABEL_5;
    }
  LABEL_14:
    GameRoutine_2829c0(v1);
    v1[373] = 0;
    result = *((_QWORD*)v1 + 48);
    if (result == 0) {
      return result;
    }
    goto LABEL_15;
  }
LABEL_9:
  v4 = SequenceSoundPlayer_2910d0(a1);
  SequenceSoundPlayer_291170(v4, v1 + 200);
  v5 = *((_QWORD*)v1 + 45);
  if (v5 != 0) {
    if (*(_BYTE*)(v5 + 193) == 0 ||
        (GameRoutine_2adad0(v1), GameRoutine_2a64c0(*((_QWORD*)v1 + 45)),
         *((_QWORD*)v1 + 45) != 0)) {
      GameRoutine_2a6c20();
      *((_QWORD*)v1 + 45) = 0;
    }
  }
  (*(void (**)(_BYTE*, _QWORD))(*(_QWORD*)v1 + 56LL))(v1, 0);
  if (v1[373] == 1) {
    goto LABEL_14;
  }
LABEL_5:
  result = *((_QWORD*)v1 + 48);
  if (result == 0) {
    return result;
  }
LABEL_15:
  result = GameRoutine_2ae090();
  v6 = *((_QWORD*)v1 + 48);
  if (v6 != 0) {
    v7 = *((_QWORD*)v1 + 47);
    result = GameRoutine_2ae140(*((_QWORD*)v1 + 48));
    v8 = 40;
    v9 = *(_QWORD*)(v6 + 1008);
    if ((result & 1) != 0) {
      v8 = 56;
    }
    *(_QWORD*)(v6 + 1008) = *(_QWORD*)(v7 + v8);
    *(_QWORD*)(v9 + 8) = v7 + v8;
    *(_QWORD*)(*(_QWORD*)(v7 + v8) + 8LL) = v6 + 1008;
    *(_QWORD*)(v7 + v8) = v9;
    *((_QWORD*)v1 + 48) = 0;
  }
  return result;
}

_BYTE* WaveSoundPlayer_2ad260(_BYTE* result)
{
  _BYTE* v1;
  __int64 v2;

  v1 = result;
  result[67] = 1;
  if (result[374] != 1) {
    if (result[65] != 1) {
      return result;
    }
  LABEL_5:
    v1[65] = 0;
    return result;
  }
  v2 = BaseNx_2a1b90(result);
  result = (_BYTE*)SoundThread_2a1fd0(v2, (__int64)(v1 + 224));
  v1[374] = 0;
  if (v1[65] == 1) {
    goto LABEL_5;
  }
  return result;
}

__int64 WaveSoundPlayer_2ad2d0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned int v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 result;

  if (*(_BYTE*)(a1 + 64) == 1) {
    *(_BYTE*)(a1 + 67) = 1;
    if (*(_BYTE*)(a1 + 374) == 1) {
      v4 = a3;
      v5 = a2;
      v6 = BaseNx_2a1b90(a1);
      SoundThread_2a1fd0(v6, a1 + 224);
      a2 = v5;
      a3 = v4;
      *(_BYTE*)(a1 + 374) = 0;
    }
    if (*(_BYTE*)(a1 + 65) == 1) {
      *(_BYTE*)(a1 + 65) = 0;
    }
  }
  *(_DWORD*)(a1 + 272) = *(_DWORD*)a2;
  *(_DWORD*)(a1 + 276) = *(_DWORD*)(a2 + 4);
  *(_QWORD*)(a1 + 280) = *(int*)(a2 + 8);
  v7 = *(_DWORD*)(a2 + 16);
  if (v7 == 0) {
    v7 = *(_DWORD*)(a2 + 12) / 5u;
  }
  *(_DWORD*)(a1 + 288) = v7;
  v8 = *(_DWORD*)(a2 + 20);
  *(_DWORD*)(a1 + 296) = v8;
  *(_DWORD*)(a1 + 292) = *(_DWORD*)(a2 + 24);
  *(_BYTE*)(a1 + 300) = *(_BYTE*)(a2 + 28) & (v8 << 30 >> 31);
  v9 = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(a1 + 304) = *(_QWORD*)(a2 + 32);
  *(_QWORD*)(a1 + 312) = v9;
  *(_DWORD*)(a1 + 368) = *(_DWORD*)(a2 + 48);
  *(_QWORD*)(a1 + 256) = *(_QWORD*)a3;
  *(_QWORD*)(a1 + 264) = *(_QWORD*)(a3 + 8);
  *(_BYTE*)(a1 + 251) = *(_BYTE*)(a3 + 16);
  *(_BYTE*)(a1 + 372) = 3;
  v10 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 56LL))(a1, 1);
  v11 = SequenceSoundPlayer_2910d0(v10);
  v12 = SequenceSoundPlayer_291150(v11, a1 + 200);
  v13 = BaseNx_2a1b90(v12);
  result = SoundThread_2a1fa0(v13, a1 + 224);
  *(_BYTE*)(a1 + 374) = 1;
  return result;
}

__int64 WaveSoundPlayer_2ad400(__int64 a1, __int64 a2, __int64* a3)
{
  unsigned int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 result;

  *(_DWORD*)(a1 + 272) = *(_DWORD*)a2;
  *(_DWORD*)(a1 + 276) = *(_DWORD*)(a2 + 4);
  *(_QWORD*)(a1 + 280) = *(int*)(a2 + 8);
  v4 = *(_DWORD*)(a2 + 16);
  if (v4 == 0) {
    v4 = *(_DWORD*)(a2 + 12) / 5u;
  }
  *(_DWORD*)(a1 + 288) = v4;
  *(_DWORD*)(a1 + 292) = *(_DWORD*)(a2 + 24);
  *(_BYTE*)(a1 + 300) =
      *(_BYTE*)(a2 + 28) & ((int)(*(_DWORD*)(a1 + 296) << 30) >> 31);
  v5 = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(a1 + 304) = *(_QWORD*)(a2 + 32);
  *(_QWORD*)(a1 + 312) = v5;
  *(_DWORD*)(a1 + 368) = *(_DWORD*)(a2 + 48);
  v6 = *((_DWORD*)a3 + 10);
  v8 = a3[3];
  v7 = a3[4];
  *(_QWORD*)(a1 + 408) = a3[2];
  *(_QWORD*)(a1 + 416) = v8;
  *(_QWORD*)(a1 + 424) = v7;
  *(_DWORD*)(a1 + 432) = v6;
  v10 = *a3;
  v9 = a3[1];
  *(_BYTE*)(a1 + 372) = 1;
  *(_QWORD*)(a1 + 392) = v10;
  *(_QWORD*)(a1 + 400) = v9;
  v11 = BaseNx_2a1b90(a1);
  result = SoundThread_2a1fa0(v11, a1 + 224);
  *(_BYTE*)(a1 + 374) = 1;
  return result;
}

_BYTE* WaveSoundPlayer_Unknown5(_BYTE* result)
{
  _BYTE* v1;
  __int64 v2;

  v1 = result;
  result[67] = 1;
  if (result[374] != 1) {
    if (result[65] != 1) {
      return result;
    }
  LABEL_5:
    v1[65] = 0;
    return result;
  }
  v2 = BaseNx_2a1b90(result);
  result = (_BYTE*)SoundThread_2a1fd0(v2, (__int64)(v1 + 224));
  v1[374] = 0;
  if (v1[65] == 1) {
    goto LABEL_5;
  }
  return result;
}

__int64 WaveSoundPlayer_Unknown6(__int64 result, char a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(result + 360);
  *(_BYTE*)(result + 66) = a2;
  if (v2 != 0 && *(_BYTE*)(v2 + 193) != 0 &&
      (a2 & 1) != (*(_BYTE*)(v2 + 192) != 0)) {
    v3 = *(_QWORD*)(v2 + 400);
    *(_BYTE*)(v2 + 192) = a2 & 1;
    return BaseNx_2a7880(v3, a2 & 1);
  }
  return result;
}

__int64 WaveSoundPlayer_Unknown8(__int64 result, unsigned __int64 a2,
                                 unsigned __int64 a3)
{
  unsigned __int64 v3;
  __int64 v5;
  __int64 v6;

  if (*(_BYTE*)(result + 64) == 1) {
    v3 = *(_QWORD*)(result + 256);
    if (a2 <= v3 && v3 <= a3) {
      *(_BYTE*)(result + 67) = 1;
      if (*(_BYTE*)(result + 374) == 1) {
        v5 = result;
        v6 = BaseNx_2a1b90(result);
        SoundThread_2a1fd0(v6, v5 + 224);
        result = v5;
        *(_BYTE*)(v5 + 374) = 0;
      }
      if (*(_BYTE*)(result + 65) == 1) {
        *(_BYTE*)(result + 65) = 0;
      }
    }
  }
  return result;
}

__int64 WaveSoundPlayer_Unknown2_2ad630(__int64 result, unsigned __int64 a2,
                                        unsigned __int64 a3)
{
  unsigned __int64 v3;
  __int64 v5;
  __int64 v6;

  if (*(_BYTE*)(result - 136) == 1) {
    v3 = *(_QWORD*)(result + 56);
    if (a2 <= v3 && v3 <= a3) {
      *(_BYTE*)(result - 133) = 1;
      if (*(_BYTE*)(result + 174) == 1) {
        v5 = result;
        v6 = BaseNx_2a1b90(result);
        SoundThread_2a1fd0(v6, v5 + 24);
        result = v5;
        *(_BYTE*)(v5 + 174) = 0;
      }
      if (*(_BYTE*)(result - 135) == 1) {
        *(_BYTE*)(result - 135) = 0;
      }
    }
  }
  return result;
}

__int64 WaveSoundPlayer_2ad6b0(__int64 a1, char a2)
{
  __int64 v2;
  char v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  char v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  char v11;

  result = *(_QWORD*)(a1 + 360);
  if (result != 0) {
    v11 = a2 & 1;
    if (*(_BYTE*)(result + 193) != 0) {
      v2 = result;
      v3 = v11;
      result = BaseNx_2a9de0(*(_QWORD*)(result + 400));
      if ((v3 & 1) != 0 && (*(_BYTE*)(v2 + 976) & 1) != 0) {
        v4 = *(_QWORD*)(v2 + 968);
        v5 = v4 - *(_QWORD*)(v2 + 960) + *(_QWORD*)(v2 + 432);
        v6 = __OFSUB__(result, v5);
        v8 = result - v5;
        v7 = (v8 < 0) ^ v6 | (v8 == 0);
        v9 = v8 + v4;
        if (!v7) {
          return v9;
        }
      }
    }
    else {
      return 0;
    }
  }
  return result;
}

__int64 WaveSoundPlayer_2ad6d0(__int64 result, long double a2)
{

#pragma clang fp contract(off)
  int v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  void* v12;
  void* v13;
  int v14;
  bool v15;
  int v16;
  void* v17;
  int v18;

  v2 = *(unsigned __int8*)(result + 372);
  v3 = result;
  if (v2 != 2) {
    if (v2 != 1) {
    LABEL_14:
      v14 = *(_DWORD*)(v3 + 288);
      v15 = __OFSUB__(v14, 1);
      v16 = v14 - 1;
      if (v16 < 0 != v15) {
        if (*(_BYTE*)(v3 + 64) == 1 && (*(_BYTE*)(v3 + 65) & 1) != 0) {
          if ((*(_BYTE*)(v3 + 66) & 1) != 0) {
            return GameRoutine_2adad0_alt1(v3, a2);
          }
          if (((v18 = *(unsigned __int8*)(v3 + 248)) != 1 ||
               *(_QWORD*)(v3 + 360) != 0) &&
              ((v18 & 1) != 0 || (WaveSoundPlayer_2ad8b0(v3) & 1) != 0)) {
            return GameRoutine_2adad0_alt1(v3, a2);
          }
          else {
            return (__int64)WaveSoundPlayer_2ad260((_BYTE*)v3);
          }
        }
      }
      else {
        *(_DWORD*)(v3 + 288) = v16;
      }
      return result;
    }
    v4 = *(_QWORD*)(result + 376);
    if (v4 == 0) {
      return result;
    }
    v5 = (__int64*)(v4 + 40);
    v6 = *(__int64**)(v4 + 48);
    if (v6 == v5) {
      return result;
    }
    v7 = (__int64*)v6[1];
    v8 = *v7;
    *(_QWORD*)(*v6 + 8) = v7;
    *v7 = *v6;
    *(_QWORD*)(v8 + 8) = v6;
    *v6 = v8;
    *(_QWORD*)(result + 384) = v6 - 126;
    *(_BYTE*)(result + 372) = 2;
    GameRoutine_2ae000((__int64)(v6 - 126), result + 392);
  }
  result = GameRoutine_2ae0d0(*(_QWORD*)(v3 + 384));
  if ((result & 1) == 0) {
    return result;
  }
  v9 = *(_QWORD*)(v3 + 384);
  if (*(_BYTE*)(v9 + 152) == 1) {
    v10 = *(_QWORD*)(v9 + 120);
    v11 = *(_QWORD*)(v9 + 128);
    if (*(_BYTE*)(v3 + 64) == 1) {
      *(_BYTE*)(v3 + 67) = 1;
      if (*(_BYTE*)(v3 + 374) == 1) {
        v12 = BaseNx_2a1b90_alt1();
        SoundThread_2a1fd0((__int64)v12, v3 + 224);
        *(_BYTE*)(v3 + 374) = 0;
      }
      if (*(_BYTE*)(v3 + 65) == 1) {
        *(_BYTE*)(v3 + 65) = 0;
      }
    }
    *(_QWORD*)(v3 + 256) = v10;
    *(_QWORD*)(v3 + 264) = v11;
    *(_BYTE*)(v3 + 251) = 0;
    *(_BYTE*)(v3 + 372) = 3;
    (*(void (**)(__int64, __int64))(*(_QWORD*)v3 + 56LL))(v3, 1);
    v13 = SequenceSoundPlayer_2910d0_alt1();
    result = SequenceSoundPlayer_291150_alt1((__int64)v13, v3 + 200);
    goto LABEL_14;
  }
  *(_BYTE*)(v3 + 67) = 1;
  if (*(_BYTE*)(v3 + 374) == 1) {
    v17 = BaseNx_2a1b90_alt1();
    result = SoundThread_2a1fd0((__int64)v17, v3 + 224);
    *(_BYTE*)(v3 + 374) = 0;
  }
  if (*(_BYTE*)(v3 + 65) == 1) {
    *(_BYTE*)(v3 + 65) = 0;
  }
  return result;
}

__int64 WaveSoundPlayer_2ad8b0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  char v2;
  int v3;
  int v5;
  __int64 v6;
  __int64 result;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  int v11;
  float v12;
  struct {
    __int64 v13;
    __int64 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
  } v13_;
  struct {
    __int64 v18;
    __int64 v19;
    __int64 v20;
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
    __int64 v31;
    __int64 v32;
    __int64 v33;
    __int64 v34;
    __int64 v35;
    __int64 v36;
    __int64 v37;
  } v18_;

  v1 = *(_QWORD*)(a1 + 264);
  v2 = *(_BYTE*)(a1 + 251);
  v3 = *(unsigned __int8*)(a1 + 250);
  v18_.v36 = 0;
  v18_.v37 = 0;
  v18_.v34 = 0;
  v18_.v35 = 0;
  v18_.v32 = 0;
  v18_.v33 = 0;
  v18_.v30 = 0;
  v18_.v31 = 0;
  v18_.v28 = 0;
  v18_.v29 = 0;
  v18_.v26 = 0;
  v18_.v27 = 0;
  v18_.v24 = 0;
  v18_.v25 = 0;
  v18_.v22 = 0;
  v18_.v23 = 0;
  v18_.v20 = 0;
  v18_.v21 = 0;
  v18_.v18 = 0;
  v18_.v19 = 0;
  v13_.v16 = 0;
  v13_.v17 = 0;
  v13_.v14 = 0;
  v13_.v15 = 0;
  v13_.v13 = 0;
  BaseNx_288cb0_alt1((__int64)&v13_.v13, v1, v2);
  if ((BaseNx_288da0_alt1(&v13_.v13, (__int64)&v18_.v18) & 1) == 0) {
    return 0;
  }
  if ((*(_BYTE*)(a1 + 304) & 1) != 0) {
    BYTE4(v18_.v18) = *(_BYTE*)(a1 + 308);
  }
  v5 = *(_DWORD*)(a1 + 276);
  if (v5 == 1) {
    v6 = (unsigned int)((signed __int64)(*(_QWORD*)(a1 + 280) *
                                         SHIDWORD(v18_.v19)) /
                        1000LL);
    if (v6 > v18_.v21) {
      return 0;
    }
  }
  else if (v5 != 0) {
    v6 = 0;
    if (v18_.v21 < 0) {
      return 0;
    }
  }
  else {
    v6 = *(unsigned int*)(a1 + 280);
    if (v6 > v18_.v21) {
      return 0;
    }
  }
  if ((int)v18_.v19 >= 2) {
    v8 = 2;
  }
  else {
    v8 = v18_.v19;
  }
  result = GameRoutine_2a6b30_alt1(v8, v3 + 64,
                                   (__int64)WaveSoundPlayer_2adf30_ptr, a1);
  if (result != 0) {
    v9 = *(_QWORD*)(a1 + 256);
    v10 = result;
    v13_.v13 = 0;
    v13_.v14 = 0;
    BaseNx_2ac830(&v13_.v13, v9);
    if ((BaseNx_2ac8c0(&v13_.v13, a1 + 336, *(_DWORD*)(a1 + 272)) & 1) != 0) {
      if ((*(_DWORD*)(a1 + 296) & 1) != 0) {
        v11 = *(_DWORD*)(a1 + 292);
      }
      else {
        v11 = *(unsigned __int8*)(a1 + 344);
      }
      GameRoutine_2a3450_alt1(v10 + 32, *(unsigned __int8*)(a1 + 340));
      GameRoutine_2a3470_alt1(v10 + 32, *(unsigned __int8*)(a1 + 343));
      v12 = GameRoutine_2a3490(v10 + 32, *(unsigned __int8*)(a1 + 341));
      GameRoutine_2a3510(v10 + 32, *(unsigned __int8*)(a1 + 342), v12);
      GameRoutine_2a3520(v10 + 32, v11);
      *(_BYTE*)(v10 + 196) = *(_BYTE*)(a1 + 249);
      GameRoutine_2a6920_alt1(v10, *(_DWORD*)(a1 + 368));
      GameRoutine_2a6930_alt1(v10);
      GameRoutine_2a6520(v10, (unsigned int*)&v18_.v18, -1, v6,
                         *(unsigned __int8*)(a1 + 300));
      *(_QWORD*)(a1 + 360) = v10;
      *(_BYTE*)(a1 + 248) = 1;
      return 1;
    }
    return 0;
  }
  return result;
}

__int64 WaveSoundPlayer_2adad0(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  int v2;
  __int64 v3;
  int v4;
  float v5;
  float v6;
  float v7;
  char v8;
  unsigned int v9;
  float v10;
  int v11;
  float v12;
  unsigned int v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  unsigned int v22;
  float v23;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  float v27;
  float v28;
  unsigned int v29;
  float v30;
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  float v59;
  float v60;
  __int128 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  __int128 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  float v89;
  float v90;

  v1 = *(_QWORD*)(result + 360);
  if (v1 != 0) {
    v2 = *(_DWORD*)(result + 72);
    v3 = result;
    v4 = *(char*)(result + 88);
    v5 = *(float*)(result + 76) * *(float*)(result + 336);
    v6 = vcvts_n_f32_s32(*(unsigned __int8*)(result + 351) - 64, 6u);
    v7 = *(float*)(result + 80) + v6;
    if (v4 == -1) {
      v8 = *(_BYTE*)(result + 352);
    }
    else {
      v8 = *(_BYTE*)(result + 88);
    }
    v9 = *(unsigned __int8*)(result + 345);
    {
      __typeof__(v6) z_ = (__typeof__(v6)){0};
      LOBYTE(z_) = *(_BYTE*)(result + 353);
      v6 = z_;
    }
    v10 = (float)LODWORD(v6) / 0x1.fc00000000000p+6f;
    if (v4 != -1) {
      v10 = *(float*)(result + 84);
    }
    if (v9 >= 2) {
      v11 = -64;
    }
    else {
      v11 = -63;
    }
    v12 = (float)(int)(v11 + v9);
    v13 = *(unsigned __int8*)(result + 346);
    v14 = v12 / 0x1.f800000000000p+5f;
    v15 = *(float*)(result + 252) * v14;
    if (v13 > 0x3F) {
      v16 = vcvts_n_f32_u32(v13 + 1, 6u);
    }
    else {
      v14 = (float)v13;
      v16 = (float)v13 / 0x1.f800000000000p+5f;
    }
    {
      __typeof__(v14) z_ = (__typeof__(v14)){0};
      LOBYTE(z_) = *(_BYTE*)(result + 348);
      v14 = z_;
    }
    v17 = *(float*)(result + 168);
    v18 = *(float*)(result + 172);
    v19 = *(float*)(result + 176);
    v20 = *(float*)(result + 180);
    v21 = *(_QWORD*)(result + 144);
    *(float*)&v22 = (float)LODWORD(v14);
    v86 = *(_QWORD*)(result + 136);
    v87 = v21;
    v23 = *(float*)&v22 / 0x1.fc00000000000p+6f;
    {
      __typeof__(v22) z_ = (__typeof__(v22)){0};
      LOBYTE(z_) = *(_BYTE*)(result + 349);
      v22 = z_;
    }
    v88 = *(_QWORD*)(result + 152);
    v24 = *(_QWORD*)(result + 112);
    v82 = *(_QWORD*)(result + 104);
    v83 = v24;
    v25 = *(_QWORD*)(result + 128);
    *(float*)&v26 = (float)v22;
    v84 = *(_QWORD*)(result + 120);
    v85 = v25;
    LODWORD(v25) = *(_DWORD*)(result + 92);
    v27 = v23 + v18;
    v28 = *(float*)&v26 / 0x1.fc00000000000p+6f;
    {
      __typeof__(v26) z_ = (__typeof__(v26)){0};
      LOBYTE(z_) = *(_BYTE*)(result + 350);
      v26 = z_;
    }
    *(float*)&v29 = (float)v26;
    v89 = v23;
    v90 = v28;
    v30 = v28 + v19;
    v31 = *(float*)&v29 / 0x1.fc00000000000p+6f;
    {
      __typeof__(v29) z_ = (__typeof__(v29)){0};
      LOBYTE(z_) = *(_BYTE*)(result + 347);
      v29 = z_;
    }
    v32 = v31 + v20;
    v33 = (float)((float)v29 / 0x1.fc00000000000p+6f) + -0x1.0000000000000p+0f;
    v34 = *(float*)(result + 160);
    v35 = *(float*)(result + 164);
    *(_DWORD*)(v1 + 360) = v25;
    v59 = v33;
    v60 = v31;
    v36 = v33 + v17;
    *(_DWORD*)(*(_QWORD*)(result + 360) + 364LL) = *(_DWORD*)(result + 96);
    v37 = v15 + v34;
    v38 = v16 + v35;
    *(_DWORD*)(*(_QWORD*)(result + 360) + 200LL) = v2;
    *(float*)(*(_QWORD*)(result + 360) + 204LL) = v5;
    v39 = *(_QWORD*)(result + 360);
    v40 = *(_QWORD*)(result + 328);
    *(_QWORD*)(v39 + 60) = *(_QWORD*)(result + 320);
    *(_QWORD*)(v39 + 68) = v40;
    *(float*)(*(_QWORD*)(result + 360) + 208LL) = v7;
    GameRoutine_2a6940(*(_QWORD*)(result + 360), v8, v10);
    v41 = v86;
    *(_DWORD*)(*(_QWORD*)(v3 + 360) + 216LL) = *(_DWORD*)(v3 + 100);
    v42 = v83;
    v43 = *(_QWORD*)(v3 + 360);
    *(_QWORD*)(v43 + 220) = v82;
    v43 += 220;
    v44 = v84;
    v45 = v85;
    *(float*)(v43 + 56) = v37;
    *(float*)(v43 + 60) = v38;
    *(float*)(v43 + 64) = v36;
    *(float*)(v43 + 68) = v27;
    *(float*)(v43 + 72) = v30;
    *(float*)(v43 + 76) = v32;
    *(_QWORD*)(v43 + 8) = v42;
    *(_QWORD*)(v43 + 16) = v44;
    v47 = v87;
    v46 = v88;
    *(_QWORD*)(v43 + 24) = v45;
    *(_QWORD*)(v43 + 32) = v41;
    *(_QWORD*)(v43 + 40) = v47;
    *(_QWORD*)(v43 + 48) = v46;
    result = *(_QWORD*)(v3 + 184);
    if (result != 0) {
      v48 = *(_QWORD*)(v3 + 360);
      GameRoutine_283ab0();
      GameRoutine_2a69b0(v48);
      v49 = *(_QWORD*)(v3 + 360);
      v50 = GameRoutine_283c30(*(_QWORD*)(v3 + 184));
      GameRoutine_2a69c0(v49, v50);
      v51 = *(_QWORD*)(v3 + 360);
      v52 = rcContext_doStopTimer_283cf0(*(_QWORD*)(v3 + 184));
      GameHr_2a69d0(v51, v52);
      result = GameRoutine_283930(*(_QWORD*)(v3 + 184));
      if ((int)result >= 1) {
        v53 = *(_QWORD*)(v3 + 184);
        v80 = 0;
        v81 = 0;
        v78 = 0;
        v79 = 0;
        v76 = 0;
        v77 = 0;
        v74 = 0;
        v75 = 0;
        v73 = (__typeof__(v73)){0};
        game_283950((void*)(&v61), v53, 1);
        v54 = *(_QWORD*)(v3 + 360);
        v78 = v66;
        *(float*)&v79 = v15 + v67;
        *((float*)&v79 + 1) = v16 + v68;
        v74 = v62;
        v75 = v63;
        v76 = v64;
        v77 = v65;
        v73 = v61;
        *(float*)&v80 = v59 + v69;
        *((float*)&v80 + 1) = v89 + v70;
        *(float*)&v81 = v90 + v71;
        *((float*)&v81 + 1) = v60 + v72;
        GameRoutine_2a6950(v54, 1, &v73);
        result = GameRoutine_283930(*(_QWORD*)(v3 + 184));
        if ((int)result >= 2) {
          v55 = *(_QWORD*)(v3 + 184);
          v80 = 0;
          v81 = 0;
          v78 = 0;
          v79 = 0;
          v76 = 0;
          v77 = 0;
          v74 = 0;
          v75 = 0;
          v73 = (__typeof__(v73)){0};
          game_283950((void*)(&v61), v55, 2);
          v56 = *(_QWORD*)(v3 + 360);
          v78 = v66;
          *(float*)&v79 = v15 + v67;
          *((float*)&v79 + 1) = v16 + v68;
          v74 = v62;
          v75 = v63;
          v76 = v64;
          v77 = v65;
          v73 = v61;
          *(float*)&v80 = v59 + v69;
          *((float*)&v80 + 1) = v89 + v70;
          *(float*)&v81 = v90 + v71;
          *((float*)&v81 + 1) = v60 + v72;
          GameRoutine_2a6950(v56, 2, &v73);
          result = GameRoutine_283930(*(_QWORD*)(v3 + 184));
          if ((int)result >= 3) {
            v57 = *(_QWORD*)(v3 + 184);
            v80 = 0;
            v81 = 0;
            v78 = 0;
            v79 = 0;
            v76 = 0;
            v77 = 0;
            v74 = 0;
            v75 = 0;
            v73 = (__typeof__(v73)){0};
            game_283950((void*)(&v61), v57, 3);
            v58 = *(_QWORD*)(v3 + 360);
            v78 = v66;
            *(float*)&v79 = v15 + v67;
            *((float*)&v79 + 1) = v16 + v68;
            v74 = v62;
            v75 = v63;
            v76 = v64;
            v77 = v65;
            v73 = v61;
            *(float*)&v80 = v59 + v69;
            *((float*)&v80 + 1) = v89 + v70;
            *(float*)&v81 = v90 + v71;
            *((float*)&v81 + 1) = v60 + v72;
            GameRoutine_2a6950(v58, 3, &v73);
            result = GameRoutine_283930(*(_QWORD*)(v3 + 184));
            if ((int)result >= 4) {
              nn_detail_UnexpectedDefaultImpl();
            }
          }
        }
      }
    }
  }
  return result;
}

void WaveSoundPlayer_2adf30(__int64 a1, __int64 a2, __int64 a3)
{
  *(_QWORD*)(a3 + 360) = 0;
}

__int64 WaveSoundPlayer_Unknown10(__int64 result)
{
  if (*(_DWORD*)(result + 368) == 0) {
    return GameRoutine_2ad6d0();
  }
  return result;
}

__int64 WaveSoundPlayer_Unknown3_2adf80(__int64 result)
{
  if (*(_DWORD*)(result + 144) == 0) {
    return GameRoutine_2ad6d0_alt1(result - 224);
  }
  return result;
}

__int64 WaveSoundPlayer_Unknown4(__int64 a1)
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 224) + 40LL))(a1 - 224);
}

#pragma GCC visibility pop
