#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14e360(_QWORD);
__int64 GameRoutine_28b580(_QWORD);
__int64 GameRoutine_2a7b20(__int64 result);
__int64 GameRoutine_2abf10(_QWORD, _QWORD);
__int64 GameRoutine_2abfb0(_QWORD);
__int64 GameRoutine_576aa0(_QWORD, _QWORD);
__int64 GameRoutine_577d40(_QWORD, _QWORD);
__int64 GameRoutine_578920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_578940(_QWORD, _QWORD);
__int64 GameRoutine_58c820(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5987a0(_QWORD);
__int64 GameRoutine_5a0010(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fcd30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fd650(_QWORD, _QWORD);
__int64 GameRoutine_5fd970(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fdcb0(_QWORD, _QWORD);
__int64 GameRoutine_5fdce0(_QWORD, _QWORD);
__int64 GameRoutine_5fe0a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fe120(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
_QWORD* BaseNx_2abfb0(_QWORD* result);
__int64 BaseNx_2abf10(__int64 result, int);
__int64 nn_atk_detail_2a7b20(__int64 result);
float BaseNx_28b580(__int64);
void* SoundVoiceNX_14e360();
void GameHr_2a7e40(__int64 a1);
__int64 GameRoutine_577d40_alt1(__int64,
                                unsigned int) __asm__("GameRoutine_577d40");
__int64 GameRoutine_578920_alt1(__int64, int, int, int,
                                int) __asm__("GameRoutine_578920");
__int64 GameRoutine_5a0010_alt1(__int64, __int64, __int64,
                                unsigned int) __asm__("GameRoutine_5a0010");
__int64 GameRoutine_5fcd30_alt1(__int64, unsigned int, unsigned int, _QWORD*,
                                unsigned int,
                                unsigned int) __asm__("GameRoutine_5fcd30");
__int64 GameRoutine_5fe0a0_alt1(__int64, unsigned int, unsigned int,
                                unsigned int*,
                                unsigned int*) __asm__("GameRoutine_5fe0a0");
__int64 GameRoutine_5fe120_alt1(__int64, unsigned int, unsigned int, _QWORD*,
                                __int64) __asm__("GameRoutine_5fe120");
__int64 VectorGraphicsTexture_5987a0(__int64);
__int64 GameHr_5926a0(__int64 result, __int64 a2, __int64 a3);

void GameHr_2a7e40(__int64 a1)
{

#pragma clang fp contract(off)
  __int16 v1;
  int v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _DWORD* v9;
  __int64 v10;
  _DWORD* v11;
  float v12;
  void* v13;
  float v14;
  int v15;
  float v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float* v20;
  __int64 v21;
  float* v22;
  __int16 v23;
  int v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  _BOOL4 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  if (*(_BYTE*)(a1 + 216) != 1) {
    return;
  }
  v1 = *(_WORD*)(a1 + 232);
  if ((v1 & 1) == 0 || (*(_BYTE*)(a1 + 217) & 1) == 0) {
    v3 = 0;
    if (*(_BYTE*)(a1 + 218) == 0 || (v1 & 2) == 0) {
      goto LABEL_33;
    }
    goto LABEL_29;
  }
  if ((*(_BYTE*)(a1 + 218) & 1) != 0) {
    v3 = 0;
    if ((v1 & 2) == 0) {
      goto LABEL_33;
    }
    goto LABEL_29;
  }
  v4 = *(_DWORD*)(a1 + 196);
  if (v4 >= 1) {
    v5 = *(_DWORD*)(a1 + 240);
    v6 = v4 & 7;
    if ((unsigned int)v4 >= 8) {
      v8 = 0;
      v9 = (_DWORD*)a1;
      v10 = -(__int64)(v4 & 0x7FFFFFF8);
      do {
        v9[3] = v5;
        v9[27] = v5;
        v8 -= 8;
        v9[51] = v5;
        v9[75] = v5;
        v9[99] = v5;
        v9[123] = v5;
        v9[147] = v5;
        v9[171] = v5;
        v9 += 192;
      } while (v10 != v8);
      v7 = -v8;
    }
    else {
      v7 = 0;
    }
    if (v6 != 0) {
      v11 = (_DWORD*)(a1 + 96 * v7 + 12);
      do {
        *v11 = v5;
        v11 += 24;
        --v6;
      } while (v6 != 0);
    }
  }
  nn_atk_detail_2a7b20(a1);
  v12 = *(float*)(a1 + 236);
  v13 = SoundVoiceNX_14e360();
  v14 = BaseNx_28b580((__int64)v13);
  v15 = *(_DWORD*)(a1 + 196);
  if (v15 >= 1) {
    v16 = v12 * v14;
    v17 = v15 & 7;
    if ((unsigned int)v15 >= 8) {
      v19 = 0;
      v20 = (float*)a1;
      v21 = -(__int64)(v15 & 0x7FFFFFF8);
      do {
        v20[2] = v16;
        v20[26] = v16;
        v19 -= 8;
        v20[50] = v16;
        v20[74] = v16;
        v20[98] = v16;
        v20[122] = v16;
        v20[146] = v16;
        v20[170] = v16;
        v20 += 192;
      } while (v21 != v19);
      v18 = -v19;
    }
    else {
      v18 = 0;
    }
    if (v17 != 0) {
      v22 = (float*)(a1 + 96 * v18 + 8);
      do {
        *v22 = v16;
        v22 += 24;
        --v17;
      } while (v17 != 0);
    }
  }
  v23 = *(_WORD*)(a1 + 232);
  v3 = 1;
  *(_BYTE*)(a1 + 218) = 1;
  v1 = v23 & 0xFFF2;
  *(_WORD*)(a1 + 232) = v1;
  if ((v1 & 2) != 0) {
  LABEL_29:
    if ((*(_BYTE*)(a1 + 217) & 1) != 0) {
      v24 = *(unsigned __int8*)(a1 + 219);
      *(_WORD*)(a1 + 232) = v1 & 0xFFFD;
      *(_BYTE*)(a1 + 220) = v24;
      if (v24 != 0) {
        v3 = 2;
      }
      else {
        v3 = 1;
      }
    }
  }
LABEL_33:
  if (*(int*)(a1 + 196) < 1) {
    v28 = false;
    if (v3 != 1) {
      goto LABEL_37;
    }
  }
  else {
    v25 = 0;
    v26 = (_QWORD*)a1;
    do {
      BaseNx_2abfb0(v26);
      v27 = *(int*)(a1 + 196);
      ++v25;
      v26 += 12;
    } while (v25 < v27);
    v28 = (int)v27 > 0;
    if (v3 != 1) {
    LABEL_37:
      if (v3 == 2 && v28) {
        v29 = 0;
        v30 = a1;
        do {
          BaseNx_2abf10(v30, 2);
          ++v29;
          v30 += 96;
        } while (v29 < *(int*)(a1 + 196));
      }
      return;
    }
  }
  if (v28) {
    v31 = 0;
    v32 = a1;
    do {
      BaseNx_2abf10(v32, 0);
      ++v31;
      v32 += 96;
    } while (v31 < *(int*)(a1 + 196));
  }
}

__int64 GameHr_5926a0(__int64 result, __int64 a2, __int64 a3)
{
  _BYTE* v3;
  unsigned int* v4;
  unsigned int* v5;
  __int64 v8;
  char v9;
  int v10;
  unsigned int v11;
  unsigned int* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  int v24;
  unsigned int v25;
  unsigned int* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD v53[2];

  v3 = *(_BYTE**)(result + 88);
  v4 = (unsigned int*)(result + 380);
  v5 = (unsigned int*)(result + 376);
  v8 = result;
  v9 = v3[8];
  if ((v9 & 4) != 0 && (*(_DWORD*)(result + 212) & 0x80000000) == 0) {
    v10 = (unsigned __int8)v3[15];
    v11 = 6;
    if (v10 > 2) {
      if (v10 == 3) {
        v11 = 3;
        goto LABEL_12;
      }
      v12 = (unsigned int*)(result + 376);
      if (v10 == 4) {
        v11 = 5;
        goto LABEL_12;
      }
    }
    else if (v10 == 1) {
      v11 = 8;
      v12 = (unsigned int*)(result + 380);
    }
    else {
      v12 = (unsigned int*)(result + 376);
      if (v10 == 2) {
        v11 = 7;
      LABEL_12:
        v12 = (unsigned int*)(result + 376);
      }
    }
    v13 = (int)*v12;
    v14 = *(_QWORD*)(result + 224);
    GameRoutine_5a0010_alt1(a2, a3, v14, *v12);
    v15 = *(_QWORD*)(a2 + 184);
    v52 = 0;
    v16 = (__int64*)GameRoutine_578920_alt1(v15, 0, 0, 1, 1);
    v17 = *(_QWORD*)(v14 + 48);
    v52 = *v16;
    v18 = VectorGraphicsTexture_5987a0(v14);
    GameRoutine_5fe0a0_alt1(
        a3, *(_DWORD*)(v17 + 4LL * v18 * (unsigned __int8)v13), 4u,
        (unsigned int*)(*(_QWORD*)(v8 + 144) + 8LL), (unsigned int*)&v52);
    v19 = GameRoutine_577d40_alt1(*(_QWORD*)(a2 + 184), v11);
    GameRoutine_58c820(a3, a2, v19);
    v20 = *(_QWORD*)(a2 + 184);
    v21 = (__int64*)(*(_QWORD*)(*(_QWORD*)(a2 + 200) + 16LL) +
                     16LL * *(int*)(*(_QWORD*)(a2 + 200) + 48LL));
    v23 = *v21;
    v22 = v21[1];
    v53[0] = v23 + *(int*)(v8 + 188);
    v53[1] = v22;
    GameRoutine_5fe120_alt1(a3, *(_DWORD*)(*(_QWORD*)(v14 + 24) + 4 * v13), 0,
                            v53, 560);
    result = GameRoutine_5fcd30_alt1(a3, 3u, 1u, (_QWORD*)(v20 + 584), 6u, 0);
    v3 = *(_BYTE**)(v8 + 88);
    v9 = v3[8];
  }
  if ((v9 & 2) != 0 && (*(_DWORD*)(v8 + 208) & 0x80000000) == 0) {
    v24 = (unsigned __int8)v3[14];
    v25 = 6;
    if (v24 > 2) {
      if (v24 == 3) {
        v25 = 3;
        goto LABEL_25;
      }
      v26 = v5;
      if (v24 == 4) {
        v25 = 5;
        goto LABEL_25;
      }
    }
    else if (v24 == 1) {
      v25 = 8;
      v26 = v4;
    }
    else {
      v26 = v5;
      if (v24 == 2) {
        v25 = 7;
      LABEL_25:
        v26 = v5;
      }
    }
    v27 = (int)*v26;
    v28 = *(_QWORD*)(v8 + 224);
    GameRoutine_5a0010_alt1(a2, a3, v28, *v26);
    v29 = *(_QWORD*)(a2 + 184);
    v52 = 0;
    v30 = (__int64*)GameRoutine_578920_alt1(v29, 0, 0, 1, 1);
    v31 = *(_QWORD*)(v28 + 48);
    v52 = *v30;
    v32 = VectorGraphicsTexture_5987a0(v28);
    GameRoutine_5fe0a0_alt1(
        a3, *(_DWORD*)(v31 + 4LL * v32 * (unsigned __int8)v27), 4u,
        (unsigned int*)(*(_QWORD*)(v8 + 136) + 8LL), (unsigned int*)&v52);
    v33 = GameRoutine_577d40_alt1(*(_QWORD*)(a2 + 184), v25);
    GameRoutine_58c820(a3, a2, v33);
    v34 = *(_QWORD*)(a2 + 184);
    v35 = (__int64*)(*(_QWORD*)(*(_QWORD*)(a2 + 200) + 16LL) +
                     16LL * *(int*)(*(_QWORD*)(a2 + 200) + 48LL));
    v37 = *v35;
    v36 = v35[1];
    v53[0] = v37 + *(int*)(v8 + 184);
    v53[1] = v36;
    GameRoutine_5fe120_alt1(a3, *(_DWORD*)(*(_QWORD*)(v28 + 24) + 4 * v27), 0,
                            v53, 560);
    result = GameRoutine_5fcd30_alt1(a3, 3u, 1u, (_QWORD*)(v34 + 584), 6u, 0);
    v3 = *(_BYTE**)(v8 + 88);
    v9 = v3[8];
  }
  if ((v9 & 1) != 0 && (*(_DWORD*)(v8 + 204) & 0x80000000) == 0) {
    v38 = (unsigned __int8)v3[13];
    v39 = 6;
    if (v38 > 2) {
      if (v38 == 3) {
        v39 = 3;
      }
      else if (v38 == 4) {
        v39 = 5;
      }
    }
    else if (v38 == 1) {
      v39 = 8;
      v5 = v4;
    }
    else if (v38 == 2) {
      v39 = 7;
    }
    v40 = (int)*v5;
    v41 = *(_QWORD*)(v8 + 224);
    GameRoutine_5a0010_alt1(a2, a3, v41, *v5);
    v42 = *(_QWORD*)(a2 + 184);
    v52 = 0;
    v43 = (__int64*)GameRoutine_578920_alt1(v42, 0, 0, 1, 1);
    v44 = *(_QWORD*)(v41 + 48);
    v52 = *v43;
    v45 = VectorGraphicsTexture_5987a0(v41);
    GameRoutine_5fe0a0_alt1(
        a3, *(_DWORD*)(v44 + 4LL * v45 * (unsigned __int8)v40), 4u,
        (unsigned int*)(*(_QWORD*)(v8 + 128) + 8LL), (unsigned int*)&v52);
    v46 = GameRoutine_577d40_alt1(*(_QWORD*)(a2 + 184), v39);
    GameRoutine_58c820(a3, a2, v46);
    v47 = *(_QWORD*)(a2 + 200);
    v48 = *(_QWORD*)(a2 + 184);
    v49 = (__int64*)(*(_QWORD*)(v47 + 16) + 16LL * *(int*)(v47 + 48));
    v51 = *v49;
    v50 = v49[1];
    v53[0] = v51 + *(int*)(v8 + 180);
    v53[1] = v50;
    GameRoutine_5fe120_alt1(a3, *(_DWORD*)(*(_QWORD*)(v41 + 24) + 4 * v40), 0,
                            v53, 560);
    return GameRoutine_5fcd30_alt1(a3, 3u, 1u, (_QWORD*)(v48 + 584), 6u, 0);
  }
  return result;
}

__int64 GameHr_593100(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  char v12;
  int v13;
  bool v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v25;
  __int64 v26;

  GameRoutine_5a0010(a2, a3, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 64));
  v6 =
      *(_QWORD*)GameRoutine_578920(*(_QWORD*)(a2 + 184), *(_WORD*)(a1 + 16) & 3,
                                   (*(unsigned __int16*)(a1 + 16) >> 2) & 3,
                                   (*(unsigned __int16*)(a1 + 16) >> 4) & 7,
                                   (*(_WORD*)(a1 + 16) & 0x80) != 0);
  v7 = *(_QWORD*)(a2 + 184);
  v26 = v6;
  v8 = *(_QWORD*)GameRoutine_578920(v7, *(_WORD*)(a1 + 32) & 3,
                                    (*(unsigned __int16*)(a1 + 32) >> 2) & 3,
                                    (*(unsigned __int16*)(a1 + 32) >> 4) & 7,
                                    (*(_WORD*)(a1 + 32) & 0x80) != 0);
  v9 = *(_QWORD*)(a1 + 56);
  v10 = *(_DWORD*)(a1 + 64);
  v25 = v8;
  v11 = *(_QWORD*)(v9 + 48);
  v12 = *(_BYTE*)(*(_QWORD*)(a1 + 8) + 4LL);
  v13 = GameRoutine_5987a0(v9) * v10;
  v14 = (v12 & 1) == 0;
  if ((v12 & 1) != 0) {
    v15 = &v26;
  }
  else {
    v15 = &v25;
  }
  if ((v12 & 1) != 0) {
    v16 = &v25;
  }
  else {
    v16 = &v26;
  }
  if (v14) {
    v17 = 40;
  }
  else {
    v17 = 24;
  }
  if (v14) {
    v18 = 24;
  }
  else {
    v18 = 40;
  }
  GameRoutine_5fe0a0(a3, *(unsigned int*)(v11 + 4LL * v13), 4,
                     *(_QWORD*)(a1 + v17) + 8LL, v15);
  v19 = *(_QWORD*)(a1 + 56);
  v20 = *(_DWORD*)(a1 + 64);
  v21 = *(_QWORD*)(v19 + 48);
  v22 = GameRoutine_5987a0(v19);
  GameRoutine_5fe0a0(a3, *(unsigned int*)(v21 + 4LL * v22 * v20 + 4), 4,
                     *(_QWORD*)(a1 + v18) + 8LL, v16);
  v23 = GameRoutine_577d40(*(_QWORD*)(a2 + 184), 1);
  return GameRoutine_58c820(a3, a2, v23);
}

__int64 GameHr_5941d0(_QWORD* a1, _QWORD* a2, __int64 a3, unsigned int a4,
                      unsigned int a5, char a6)
{
  int* v6;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64* v20;
  __int64 v21;
  int v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  int v32;
  bool v33;
  int v34;
  int v35;
  unsigned int v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v55;
  _QWORD v57[2];
  __int64 v58;
  _QWORD v59[2];
  _QWORD v60[2];

  v6 = (int*)a1 + a4;
  v10 = v6[51];
  v11 = v6[48];
  v51 = v6[39];
  v55 = v6[42];
  (*(void (**)(_QWORD*, __int64))(*a2 + 32LL))(a2, a3);
  v12 = a2[31];
  v13 = a2[42];
  v14 = a1[9];
  v15 = a1[28];
  v59[0] = 0;
  v59[1] = 0;
  v52 = v13;
  v53 = v12;
  if (a1[1] != 0) {
    v16 = v14;
  }
  else {
    v16 = a1[13];
  }
  v17 = a1[15] + 64LL;
  GameRoutine_5fd970(a3, v17, v59, 0);
  v18 = *a2;
  a2[31] = v17;
  a2[42] = 0;
  (*(void (**)(_QWORD*, __int64))(v18 + 24))(a2, a3);
  GameRoutine_5fd650(a3, a1[15] + 136LL);
  v19 = *((_DWORD*)a1 + v10 + 58);
  GameRoutine_5a0010(a2, a3, v15, v19);
  v20 = (__int64*)GameRoutine_578940(a2[23], 36);
  v21 = *(_QWORD*)(v15 + 48);
  v58 = *v20;
  v22 = GameRoutine_5987a0(v15);
  GameRoutine_5fe0a0(a3,
                     *(unsigned int*)(v21 + 4LL * v22 * (unsigned __int8)v19),
                     4, v16 + 8, &v58);
  v23 = (__int64*)(*(_QWORD*)(a2[25] + 16LL) + 16LL * *(int*)(a2[25] + 48LL));
  v25 = *v23;
  v24 = v23[1];
  v26 = *((unsigned int*)a1 + v10 + 96);
  v57[0] = v25 + v11;
  v57[1] = v24;
  if ((v26 & 0x80000000) == 0) {
    GameRoutine_5fe120(a3, v26, 4, v57, 224);
  }
  v27 = GameRoutine_577d40(a2[23], 1);
  GameRoutine_58c820(a3, a2, v27);
  v28 = a2[23];
  v29 = (__int64*)(*(_QWORD*)(a2[25] + 16LL) + 16LL * *(int*)(a2[25] + 48LL));
  v31 = *v29;
  v30 = v29[1];
  v60[0] = v31 + v51;
  v60[1] = v30;
  GameRoutine_5fe120(
      a3, *(unsigned int*)(*(_QWORD*)(v15 + 24) + 4LL * (int)v19), 0, v60, 560);
  GameRoutine_5fcd30(a3, 3, 1, v28 + 584, 6, 0);
  (*(void (**)(_QWORD*, __int64))(*a2 + 32LL))(a2, a3);
  GameRoutine_5fdcb0(a3, 128);
  GameRoutine_5fdce0(a3, 32);
  a2[31] = v53;
  a2[42] = v52;
  GameRoutine_576aa0(a2, a3);
  (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, a3);
  if (a5 == 8 || a5 == 4) {
    v32 = 16;
    v33 = (a6 & 1) == 0;
    v34 = 8;
  }
  else {
    v32 = 12;
    v33 = (a6 & 1) == 0;
    v34 = 4;
  }
  if (!v33) {
    v34 = v32;
  }
  v35 = v10 + v34 + ((*(unsigned __int8*)(a1[11] + 8LL) >> 2) & 0x10);
  v36 = *((_DWORD*)a1 + v35 + 58);
  GameRoutine_5a0010(a2, a3, v15, v36);
  v37 = *(_QWORD*)(v15 + 48);
  v38 = GameRoutine_5987a0(v15);
  GameRoutine_5fe0a0(a3,
                     *(unsigned int*)(v37 + 4LL * v38 * (unsigned __int8)v36),
                     4, a1[15] + 8LL, &v58);
  if ((*(_BYTE*)(a1[11] + 8LL) & 8) != 0) {
    v39 = a1[1];
    v40 = *(_QWORD*)(v15 + 48);
    v41 = *(unsigned int*)(v40 +
                           4LL * (int)(GameRoutine_5987a0(v15) *
                                       (unsigned __int8)v36) +
                           4);
    v42 = a1 + 9;
    if (v39 == 0) {
      v42 = a1 + 13;
    }
    GameRoutine_5fe0a0(a3, v41, 4, *v42 + 8LL, &v58);
  }
  v43 = *((unsigned int*)a1 + v35 + 96);
  if ((v43 & 0x80000000) == 0) {
    GameRoutine_5fe120(a3, v43, 4, v57, 224);
  }
  v44 = GameRoutine_577d40(a2[23], a5);
  GameRoutine_58c820(a3, a2, v44);
  v45 = a2[25];
  v46 = a2[23];
  v47 = (__int64*)(*(_QWORD*)(v45 + 16) + 16LL * *(int*)(v45 + 48));
  v49 = *v47;
  v48 = v47[1];
  v60[0] = v49 + v55;
  v60[1] = v48;
  GameRoutine_5fe120(
      a3, *(unsigned int*)(*(_QWORD*)(v15 + 24) + 4LL * (int)v36), 0, v60, 560);
  return GameRoutine_5fcd30(a3, 3, 1, v46 + 584, 6, 0);
}

#pragma GCC visibility pop
