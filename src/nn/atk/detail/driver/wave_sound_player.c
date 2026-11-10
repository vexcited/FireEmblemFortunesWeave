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

__int64 WaveSoundPlayer_2ad8b0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  int v3;
  int v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  float v12;
  float v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
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
  __int64 v38;

  v1 = *(_QWORD*)(a1 + 264);
  v2 = *(unsigned __int8*)(a1 + 251);
  v3 = *(unsigned __int8*)(a1 + 250);
  v37 = 0;
  v38 = 0;
  v35 = 0;
  v36 = 0;
  v33 = 0;
  v34 = 0;
  v31 = 0;
  v32 = 0;
  v29 = 0;
  v30 = 0;
  v27 = 0;
  v28 = 0;
  v25 = 0;
  v26 = 0;
  v23 = 0;
  v24 = 0;
  v21 = 0;
  v22 = 0;
  v19 = 0;
  v20 = 0;
  v17 = 0;
  v18 = 0;
  v15 = 0;
  v16 = 0;
  v14 = 0;
  BaseNx_288cb0(&v14, v1, v2);
  if ((BaseNx_288da0(&v14, &v19, 0) & 1) == 0) {
    return 0;
  }
  if ((*(_BYTE*)(a1 + 304) & 1) != 0) {
    BYTE4(v19) = *(_BYTE*)(a1 + 308);
  }
  v5 = *(_DWORD*)(a1 + 276);
  if (v5 == 1) {
    v6 = (unsigned int)(*(_QWORD*)(a1 + 280) * SHIDWORD(v20) / 1000LL);
    if (v6 > v22) {
      return 0;
    }
  }
  else if (v5 != 0) {
    v6 = 0;
    if (v22 < 0) {
      return 0;
    }
  }
  else {
    v6 = *(unsigned int*)(a1 + 280);
    if (v6 > v22) {
      return 0;
    }
  }
  if ((int)v20 >= 2) {
    v8 = 2;
  }
  else {
    v8 = (unsigned int)v20;
  }
  result = GameRoutine_2a6b30(v8, v3 + 64, (__int64)GameData_21354b0, a1);
  if (result != 0) {
    v9 = *(_QWORD*)(a1 + 256);
    v10 = result;
    v14 = 0;
    v15 = 0;
    BaseNx_2ac830(&v14, v9);
    if ((BaseNx_2ac8c0(&v14, a1 + 336, *(_DWORD*)(a1 + 272)) & 1) != 0) {
      if ((*(_DWORD*)(a1 + 296) & 1) != 0) {
        v11 = *(_DWORD*)(a1 + 292);
      }
      else {
        v11 = *(unsigned __int8*)(a1 + 344);
      }
      GameRoutine_2a3450(v10 + 32, *(unsigned __int8*)(a1 + 340));
      GameRoutine_2a3470(v10 + 32, *(unsigned __int8*)(a1 + 343));
      v12 = GameRoutine_2a3490(v10 + 32, *(unsigned __int8*)(a1 + 341));
      GameRoutine_2a3510(v10 + 32, *(unsigned __int8*)(a1 + 342), v12);
      v13 = GameRoutine_2a3520(v10 + 32, v11);
      *(_BYTE*)(v10 + 196) = *(_BYTE*)(a1 + 249);
      GameRoutine_2a6920(v10, *(unsigned int*)(a1 + 368), v13);
      GameRoutine_2a6930(v10, *(_QWORD*)(a1 + 48), *(_QWORD*)(a1 + 56));
      GameRoutine_2a6520(v10, (unsigned int*)&v19, -1, v6,
                         *(unsigned __int8*)(a1 + 300));
      *(_QWORD*)(a1 + 360) = v10;
      *(_BYTE*)(a1 + 248) = 1;
      return 1;
    }
    return 0;
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
