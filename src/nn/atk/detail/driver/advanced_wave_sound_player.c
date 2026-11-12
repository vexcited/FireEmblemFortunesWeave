#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BasicSoundPlayer_Unknown2(_QWORD);
__int64 GameRoutine_27ff10(_QWORD, _QWORD);
__int64 GameRoutine_280000(_QWORD, _QWORD);
__int64 GameRoutine_2829c0(_QWORD);
__int64 GameRoutine_2888d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_288b50(_QWORD, _QWORD);
__int64 GameRoutine_288cb0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_288da0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a1b90(_QWORD);
__int64 GameRoutine_2a6460(void);
__int64 GameRoutine_2a64c0(void);
__int64 GameRoutine_2a6520(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a6920(_QWORD, _QWORD);
__int64 GameRoutine_2a6930(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2a6b30(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SoundThread_2a1fa0(_QWORD, _QWORD);
__int64 SoundThread_2a1fd0(_QWORD, _QWORD);
__int64 AdvancedWaveSoundPlayer_Unknown2(__int64 result);
_BYTE* AdvancedWaveSoundPlayer_Unknown3(_BYTE* result);
_BYTE* AdvancedWaveSoundPlayer_Unknown5(_BYTE* result);
__int64 AdvancedWaveSoundPlayer_27f6e0(__int64 a1, __int64 a2);
__int64 AdvancedWaveSoundPlayer_27f940(__int64 a1, double a2, float a3);
__int64 AdvancedWaveSoundPlayer_Unknown8(__int64 result, double a2, float a3);
__int64 BaseNx_2a1b90(_QWORD);
__int64 AdvancedWaveSoundPlayer_Unknown9(__int64 result, double a2, float a3);
__int64 AdvancedWaveSoundPlayer_Unknown3_27fe60(__int64 result, double a2,
                                                float a3);
__int64 AdvancedWaveSoundPlayer_Unknown4(__int64 a1);
_DWORD* BaseNx_288cb0(__int64, __int64, char);
__int64 BaseNx_2888d0(__int64 result, __int64, char);
__int64 BaseNx_288b50(__int64, unsigned int);
__int64 BaseNx_288da0(_QWORD*, __int64);
__int64 GameRoutine_2a6460_alt1(__int64) __asm__("GameRoutine_2a6460");
__int64 GameRoutine_2a6520_alt1(__int64, unsigned int*, int, __int64,
                                unsigned int) __asm__("GameRoutine_2a6520");
__int64 GameRoutine_2a6920_alt1(__int64 result,
                                int) __asm__("GameRoutine_2a6920");
__int64 GameRoutine_2a6930_alt1(__int64) __asm__("GameRoutine_2a6930");
__int64 GameRoutine_2a6b30_alt1(unsigned int, unsigned int, __int64,
                                __int64) __asm__("GameRoutine_2a6b30");

__int64 AdvancedWaveSoundPlayer_Unknown2(__int64 result)
{
  __int64 v1;

  v1 = result;
  if ((*(_BYTE*)(result + 1913) & 1) == 0) {
    result = BasicSoundPlayer_Unknown2(result);
    *(_BYTE*)(v1 + 1913) = 1;
  }
  *(_BYTE*)(v1 + 1912) = 0;
  return result;
}

_BYTE* AdvancedWaveSoundPlayer_Unknown3(_BYTE* result)
{
  _BYTE* v1;
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 i;
  int* v6;
  int v7;
  __int64 v8;
  _QWORD* v9;

  v1 = result;
  result[67] = 1;
  if (result[1914] == 1) {
    v2 = GameRoutine_2a1b90(result);
    result = (_BYTE*)SoundThread_2a1fd0(v2, v1 + 200);
    v1[1914] = 0;
    if (v1[65] != 1) {
    LABEL_3:
      if (v1[64] != 1) {
        goto LABEL_17;
      }
      goto LABEL_7;
    }
  }
  else if (result[65] != 1) {
    goto LABEL_3;
  }
  v1[65] = 0;
  if (v1[64] != 1) {
    goto LABEL_17;
  }

LABEL_7:
  result =
      (_BYTE*)(*(__int64 (**)(_BYTE*, _QWORD))(*(_QWORD*)v1 + 56LL))(v1, 0);
  v3 = *((unsigned int*)v1 + 57);
  if ((int)v3 >= 1) {
    v4 = v1 + 1232;
    for (i = 0; i != v3; ++i) {
      v6 = (int*)&v1[244 * i + 232];
      v7 = *v6;
      if (*v6 >= 1) {
        v8 = 0;
        v9 = v4;
        do {
          result = (_BYTE*)*v9;
          if (*v9 != 0) {
            if (result[193] != 0) {
              result = (_BYTE*)GameRoutine_2a64c0();
            }
            *v9 = 0;
            v7 = *v6;
          }
          ++v8;
          v9 += 2;
        } while (v8 < v7);
      }
      v4 += 21;
    }
  }

LABEL_17:
  if (v1[1913] == 1) {
    result = (_BYTE*)GameRoutine_2829c0(v1);
    v1[1913] = 0;
  }
  return result;
}

_BYTE* AdvancedWaveSoundPlayer_Unknown5(_BYTE* result)
{
  _BYTE* v1;
  __int64 v2;

  v1 = result;
  result[67] = 1;
  if (result[1914] != 1) {
    if (result[65] != 1) {
      return result;
    }
  LABEL_5:
    v1[65] = 0;
    return result;
  }
  v2 = GameRoutine_2a1b90(result);
  result = (_BYTE*)SoundThread_2a1fd0(v2, v1 + 200);
  v1[1914] = 0;
  if (v1[65] == 1) {
    goto LABEL_5;
  }
  return result;
}

__int64 AdvancedWaveSoundPlayer_27f6e0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;

  if (*(_BYTE*)(a1 + 64) == 1) {
    *(_BYTE*)(a1 + 67) = 1;
    if (*(_BYTE*)(a1 + 1914) == 1) {
      v3 = a2;
      v4 = GameRoutine_2a1b90(a1);
      SoundThread_2a1fd0(v4, a1 + 200);
      a2 = v3;
      *(_BYTE*)(a1 + 1914) = 0;
    }
    if (*(_BYTE*)(a1 + 65) == 1) {
      *(_BYTE*)(a1 + 65) = 0;
    }
  }
  *(_DWORD*)(a1 + 224) = *(_DWORD*)a2;
  *(_DWORD*)(a1 + 1904) = *(_DWORD*)(a2 + 4);
  *(_QWORD*)(a1 + 1888) = *(_QWORD*)(a2 + 8);
  *(_QWORD*)(a1 + 1896) = *(_QWORD*)(a2 + 16);
  v5 = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)a1 + 56LL))(a1, 1);
  if ((*(_BYTE*)(a1 + 1914) & 1) == 0) {
    v6 = GameRoutine_2a1b90(v5);
    SoundThread_2a1fa0(v6, a1 + 200);
    *(_BYTE*)(a1 + 1914) = 1;
  }
  v7 = *(_QWORD*)(a1 + 1888);
  *(_DWORD*)(a1 + 1908) = 0;
  v20 = 0;
  GameRoutine_27ff10(&v20, v7);
  result = GameRoutine_280000(&v20, a1 + 228);
  if ((result & 1) == 0) {
    *(_BYTE*)(a1 + 67) = 1;
    if ((*(_BYTE*)(a1 + 1914) & 1) != 0) {
      v19 = GameRoutine_2a1b90(result);
      result = SoundThread_2a1fd0(v19, a1 + 200);
      *(_BYTE*)(a1 + 1914) = 0;
      if (*(_BYTE*)(a1 + 65) != 1) {
        return result;
      }
    }
    else if (*(_BYTE*)(a1 + 65) != 1) {
      return result;
    }
    *(_BYTE*)(a1 + 65) = 0;
    return result;
  }
  v9 = *(unsigned int*)(a1 + 228);
  *(_BYTE*)(a1 + 1208) = 0;
  if ((int)v9 >= 1) {
    v10 = (_QWORD*)(a1 + 1344);
    v11 = a1 + 1232;
    v12 = 0;
    v13 = a1 + 1224;
    do {
      *(_BYTE*)(a1 + 1216 + 168 * v12) = 0;
      v14 = *(_DWORD*)(a1 + 232 + 244 * v12);
      if (v14 >= 1) {
        if ((unsigned int)v14 >= 8) {
          v16 = 0;
          v17 = v10;
          do {
            *((_BYTE*)v17 - 120) = 0;
            *(v17 - 14) = 0;
            v16 -= 8;
            *((_BYTE*)v17 - 104) = 0;
            *(v17 - 12) = 0;
            *((_BYTE*)v17 - 88) = 0;
            *(v17 - 10) = 0;
            *((_BYTE*)v17 - 72) = 0;
            *(v17 - 8) = 0;
            *((_BYTE*)v17 - 56) = 0;
            *(v17 - 6) = 0;
            *((_BYTE*)v17 - 40) = 0;
            *(v17 - 4) = 0;
            *((_BYTE*)v17 - 24) = 0;
            *(v17 - 2) = 0;
            *((_BYTE*)v17 - 8) = 0;
            *v17 = 0;
            v17 += 16;
          } while (-(__int64)(v14 & 0x7FFFFFF8) != v16);
          result = -v16;
          v15 = v14 & 7;
          if (v15 == 0) {
            goto LABEL_11;
          }
        LABEL_19:
          v18 = (_QWORD*)(v11 + 16 * result);
          result = v13 + 16 * result;
          do {
            *(_BYTE*)result = 0;
            result += 16;
            *v18 = 0;
            v18 += 2;
            --v15;
          } while (v15 != 0);
          goto LABEL_11;
        }
        result = 0;
        v15 = v14 & 7;
        if (v15 != 0) {
          goto LABEL_19;
        }
      }
    LABEL_11:
      ++v12;
      v10 += 21;
      v11 += 168;
      v13 += 168;
    } while (v12 != v9);
  }
  *(_BYTE*)(a1 + 1912) = 1;
  return result;
}

__int64 AdvancedWaveSoundPlayer_27f940(__int64 a1, double a2, float a3)
{

#pragma clang fp contract(off)
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int* v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  float v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  __int64 v30;
  __int64 v31;
  __int64 v33;
  __int64 v34;
  int v35;
  _QWORD v36[5];
  struct {
    __int64 v37;
    __int64 v38;
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
  } v37_;
  _QWORD v57[5];

  v34 = *(unsigned int*)(a1 + 228);
  if ((int)v34 >= 1) {
    v4 = 1;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v33 = a1 + 232;
    while (1) {
      v8 = (int*)(v33 + 244 * v7);
      if (*v8 >= 1) {
        break;
      }
    LABEL_4:
      ++v7;
      v6 += 168;
      v5 += 244;
      if (v7 == v34) {
        goto LABEL_27;
      }
    }
    v9 = 1;
    v35 = v4;
    v10 = 0;
    v11 = v5;
    v12 = v6;
    while (1) {
      v13 = a1 + v12;
      if ((*(_BYTE*)(a1 + v12 + 1224) & 1) == 0) {
        if ((unsigned int)(1000 * *(_DWORD*)(a1 + v11 + 240)) >=
            *(_DWORD*)(a1 + 1908)) {
          v9 = 0;
          goto LABEL_8;
        }
        v27 = *(_QWORD*)(a1 + 1896);
        memset(v57, 0, 32);
        BaseNx_2888d0((__int64)v57, v27, 0);
        v28 = BaseNx_288b50((__int64)v57, *(_DWORD*)(a1 + v11 + 236));
        if (v28 != 0) {
          v37_.v55 = 0;
          v37_.v56 = 0;
          v37_.v53 = 0;
          v37_.v54 = 0;
          v37_.v51 = 0;
          v37_.v52 = 0;
          v37_.v49 = 0;
          v37_.v50 = 0;
          v37_.v47 = 0;
          v37_.v48 = 0;
          v37_.v45 = 0;
          v37_.v46 = 0;
          v37_.v43 = 0;
          v37_.v44 = 0;
          v37_.v41 = 0;
          v37_.v42 = 0;
          v37_.v39 = 0;
          v37_.v40 = 0;
          v37_.v37 = 0;
          v37_.v38 = 0;
          memset(v36, 0, sizeof(v36));
          BaseNx_288cb0((__int64)v36, v28, 0);
          if ((BaseNx_288da0(v36, (__int64)&v37_.v37) & 1) != 0) {
            if ((int)v37_.v38 >= 2) {
              v29 = 2;
            }
            else {
              v29 = v37_.v38;
            }
            v30 = GameRoutine_2a6b30_alt1(v29, 0x80u, 0, a1);
            if (v30 != 0) {
              v31 = v30;
              GameRoutine_2a6920_alt1(v30, *(_DWORD*)(a1 + 1904));
              GameRoutine_2a6930_alt1(v31);
              GameRoutine_2a6520_alt1(
                  v31, (unsigned int*)&v37_.v37, *(_DWORD*)(a1 + v11 + 244),
                  (unsigned int)((__int64)(SHIDWORD(v37_.v38) *
                                           (unsigned __int64)*(
                                               unsigned int*)(a1 + v11 + 248)) /
                                 1000),
                  0);
              *(_QWORD*)(a1 + v12 + 1232) = v31;
              *(_BYTE*)(v13 + 1224) = 1;
            }
          }
        }
        v9 = 0;
        if (*(_BYTE*)(v13 + 1224) != 1) {
          goto LABEL_8;
        }
      }
      v14 = *(_QWORD*)(v13 + 1232);
      if (v14 != 0) {
        if (*(_BYTE*)(v14 + 193) == 0) {
          goto LABEL_25;
        }
        v15 = *(_DWORD*)(v14 + 356) - 5;
        if (v15 <= 0) {
          GameRoutine_2a6460_alt1(v14);
          v9 = 0;
        LABEL_25:
          *(_QWORD*)(v13 + 1232) = 0;
          goto LABEL_8;
        }
        *(_DWORD*)(v14 + 356) = v15;
        v9 = 0;
        LOBYTE(a3) = *(_BYTE*)(a1 + v11 + 256);
        *(float*)(v14 + 200) =
            *(float*)(a1 + 72) *
            (float)((float)LODWORD(a3) / 0x1.fe00000000000p+7f);
        *(float*)(v14 + 204) = *(float*)(a1 + 76) * *(float*)(a1 + v11 + 252);
        v16 = *(_QWORD*)(a1 + 172);
        v18 = *(_QWORD*)(a1 + 104);
        v17 = *(_QWORD*)(a1 + 112);
        v19 = *(_QWORD*)(a1 + 136);
        v20 = *(_QWORD*)(a1 + 144);
        a3 = *(float*)(a1 + 160);
        v21 = *(_QWORD*)(a1 + 152);
        v22 =
            a3 + vcvts_n_f32_s32(*(unsigned __int8*)(a1 + v11 + 257) - 64, 6u);
        v37_.v37 = *(_QWORD*)(a1 + 164);
        v37_.v38 = v16;
        LODWORD(v37_.v39) = *(_DWORD*)(a1 + 180);
        v23 = *(_QWORD*)(a1 + 120);
        v24 = *(_QWORD*)(a1 + 128);
        *(_QWORD*)(v14 + 220) = v18;
        v25 = v14 + 220;
        *(_QWORD*)(v25 + 40) = v20;
        *(_QWORD*)(v25 + 48) = v21;
        *(float*)(v25 + 56) = v22;
        *(_QWORD*)(v25 + 24) = v24;
        *(_QWORD*)(v25 + 32) = v19;
        *(_QWORD*)(v25 + 8) = v17;
        *(_QWORD*)(v25 + 16) = v23;
        v26 = v37_.v38;
        *(_QWORD*)(v25 + 60) = v37_.v37;
        LODWORD(v23) = v37_.v39;
        *(_QWORD*)(v25 + 68) = v26;
        *(_DWORD*)(v25 + 76) = v23;
        *(_DWORD*)(v25 + 140) = *(_DWORD*)(a1 + 92);
        *(_DWORD*)(v25 + 144) = *(_DWORD*)(a1 + 96);
      }
    LABEL_8:
      ++v10;
      v12 += 16;
      v11 += 24;
      if (v10 >= *v8) {
        v4 = v9 & v35;
        goto LABEL_4;
      }
    }
  }
  LOBYTE(v4) = 1;
LABEL_27:
  *(_DWORD*)(a1 + 1908) += 5000;
  return v4 & 1;
}

__int64 AdvancedWaveSoundPlayer_Unknown8(__int64 result, double a2, float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if (*(_BYTE*)(result + 64) == 1 && *(_BYTE*)(result + 65) == 1 &&
      (*(_BYTE*)(result + 66) & 1) == 0) {
    v3 = result;
    result = AdvancedWaveSoundPlayer_27f940(result, a2, a3);
    if ((result & 1) != 0) {
      v4 = v3;
      *(_BYTE*)(v3 + 67) = 1;
      if (*(_BYTE*)(v3 + 1914) == 1) {
        v5 = GameRoutine_2a1b90(result);
        result = SoundThread_2a1fd0(v5, v3 + 200);
        v4 = v3;
        *(_BYTE*)(v3 + 1914) = 0;
      }
      if (*(_BYTE*)(v4 + 65) == 1) {
        *(_BYTE*)(v4 + 65) = 0;
      }
    }
  }
  return result;
}

__int64 AdvancedWaveSoundPlayer_Unknown9(__int64 result, double a2, float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if (*(_DWORD*)(result + 1904) == 0 && (*(_BYTE*)(result + 64) & 1) != 0 &&
      *(_BYTE*)(result + 65) == 1 && (*(_BYTE*)(result + 66) & 1) == 0) {
    v3 = result;
    result = AdvancedWaveSoundPlayer_27f940(result, a2, a3);
    if ((result & 1) != 0) {
      v4 = v3;
      *(_BYTE*)(v3 + 67) = 1;
      if (*(_BYTE*)(v3 + 1914) == 1) {
        v5 = BaseNx_2a1b90(result);
        result = SoundThread_2a1fd0(v5, v3 + 200);
        v4 = v3;
        *(_BYTE*)(v3 + 1914) = 0;
      }
      if (*(_BYTE*)(v4 + 65) == 1) {
        *(_BYTE*)(v4 + 65) = 0;
      }
    }
  }
  return result;
}

__int64 AdvancedWaveSoundPlayer_Unknown3_27fe60(__int64 result, double a2,
                                                float a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if (*(_DWORD*)(result + 1704) == 0 && (*(_BYTE*)(result - 136) & 1) != 0 &&
      *(_BYTE*)(result - 135) == 1 && (*(_BYTE*)(result - 134) & 1) == 0) {
    v3 = result;
    result = AdvancedWaveSoundPlayer_27f940(result - 200, a2, a3);
    if ((result & 1) != 0) {
      v4 = v3;
      *(_BYTE*)(v3 - 133) = 1;
      if (*(_BYTE*)(v3 + 1714) == 1) {
        v5 = BaseNx_2a1b90(result);
        result = SoundThread_2a1fd0(v5, v3);
        v4 = v3;
        *(_BYTE*)(v3 + 1714) = 0;
      }
      if (*(_BYTE*)(v4 - 135) == 1) {
        *(_BYTE*)(v4 - 135) = 0;
      }
    }
  }
  return result;
}

__int64 AdvancedWaveSoundPlayer_Unknown4(__int64 a1)
{
  return (*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 200) + 40LL))(a1 - 200);
}

#pragma GCC visibility pop
