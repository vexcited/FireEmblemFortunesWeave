#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

#include "decomp/pseudo_types.h"

extern __int128 GameData_1a82dc0;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int64* GameData_2136128;
extern __int64* GameData_2136140[2];
extern __int64* GameData_2136148;
extern __int64* GameData_21361c8[3];
extern __int64* GameData_21361d0[2];
extern __int64* GameData_21361d8;
__int64 GameRoutine_1a09c40(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD);
__int64 GameRoutine_1a09d10(_QWORD, _QWORD, const char*, ...);
__int64 GameRoutine_1a09d30(_QWORD, _QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0cd40(_QWORD, _QWORD);
__int64 GameRoutine_1a0cd50(_QWORD, _QWORD);
__int64 GameRoutine_1a0cdb0(_QWORD);
__int64 GameRoutine_1a0ce50(_QWORD, _QWORD);
__int64 GameRoutine_1a0ce60(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0cea0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ceb0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0cec0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a0ced0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_55af80(_QWORD);
__int64 GameRoutine_55b730(__int64);
float GameRoutine_55c280(__int64);
__int64 GameRoutine_55ea10(_QWORD*);
__int64 GameRoutine_55eae0(__int64, __int64, unsigned int*, __int64, __int64,
                           __int64);
__int64 GameRoutine_55f190(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_55f460(__int64, unsigned int);
__int64 GameRoutine_55f820(_QWORD, _QWORD, _QWORD);
bool GameRoutine_5634c0(__int64, unsigned int, unsigned int, __int16, int,
                        unsigned __int8);
__int64 GameRoutine_564ea0(__int64 result, unsigned int, unsigned int);
__int64 GameRoutine_5662e0(_QWORD);
__int64 GameRoutine_5665e0(__int64, float*, unsigned __int64*, int);
__int64 GameRoutine_567cd0(_QWORD);
__int64 GameRoutine_567fe0(__int64, float*, unsigned __int64*, int);
__int64 GameRoutine_570dd0(void);
__int64 GameRoutine_5716e0(_QWORD, _QWORD);
__int64 GameRoutine_571b80(_QWORD, _QWORD);
__int64 GameRoutine_571fd0(_QWORD*);
__int64 GameRoutine_5722a0(__int64 result, __int64);
__int64 GameRoutine_575420(_QWORD);
__int64 GameRoutine_575640(_QWORD);
__int64 GameRoutine_575670(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5756e0(_QWORD, _QWORD);
__int64 GameRoutine_576bf0(void);
__int64 GameRoutine_576c00(_QWORD);
__int64 GameRoutine_576c20(_QWORD);
__int64 GameRoutine_576ec0(_QWORD);
__int64 GameRoutine_576f40(_QWORD);
__int64 GameRoutine_579180(_QWORD);
__int64 GameRoutine_5791a0(_QWORD);
__int64 GameRoutine_597140(void);
__int64 GameRoutine_597ae0(_QWORD, _QWORD);
__int64 GameRoutine_59e100(_QWORD, _QWORD);
__int64 GameRoutine_59e1c0(_QWORD, _QWORD);
__int64 GameRoutine_59e5a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_59e640(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_59ec70(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_59ed50(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 GameRoutine_59ed60(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5a00c0(_QWORD);
__int64 GameRoutine_5fc1f0(_QWORD);
__int64 GameRoutine_5fc3e0(_QWORD);
__int64 GameRoutine_5fc3f0(_QWORD);
__int64 GameRoutine_5fe310(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fe3b0(_QWORD, _QWORD);
__int64 GameRoutine_605ff0(_QWORD);
__int64 GameRoutine_606660(_QWORD);
__int64 GameRoutine_5662e0_alt1(_QWORD,
                                long double) __asm__("GameRoutine_5662e0");
__int64 GameRoutine_567cd0_alt1(_QWORD,
                                long double) __asm__("GameRoutine_567cd0");
__int64 GameRoutine_575670_alt1(__int64, unsigned int*,
                                unsigned int) __asm__("GameRoutine_575670");
__int64 GameRoutine_59ed60_alt1(int*, int, __int64,
                                __int64) __asm__("GameRoutine_59ed60");
__int64 GameRoutine_5fc1f0_alt1(__int64) __asm__("GameRoutine_5fc1f0");
__int64 GameRoutine_5fe310_alt1(__int64, _QWORD*,
                                __int64) __asm__("GameRoutine_5fe310");
__int64 nn_font_5665e0(__int64, float*, unsigned __int64*, int);
__int64 nn_font_567fe0(__int64, float*, unsigned __int64*, int);
__int64 nn_ui2d_5756e0(__int64, const char*);
__int64 nn_util_BinaryBlockHeader_GetBlockSize(_QWORD);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, const char*, ...);
float TextTagProcessor_55c280(__int64);
float GameHr_5677c0(__int64 a1, float* a2, float* a3, unsigned __int64 a4,
                    int a5);
float GameHr_5691c0(__int64 a1, float* a2, float* a3, unsigned __int64 a4,
                    int a5);
__int64 GameHr_5722a0(__int64 result, _QWORD* a2);
__int64 GameHr_573070(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5,
                      __int64 a6);

__int64 GameHr_55b820(__int64** a1)
{
  __int64* v1;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;

  v1 = *a1;
  result = GameRoutine_55b730(**a1);
  v4 = *v1;
  if (v4 != 0) {
    v5 = GameRoutine_55af80(0);
    result = (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v5 + 24LL))(v5, v4);
  }
  v6 = *a1;
  if (*a1 != nullptr) {
    v7 = GameRoutine_55af80(0);
    result = (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v7 + 24LL))(v7, v6);
    *a1 = nullptr;
  }
  return result;
}

__int64 GameHr_55f620(__int64 a1, unsigned int a2)
{
  unsigned __int16 v3;
  char* v4;
  __int64 v5;
  unsigned __int16* v6;
  __int64 v7;

  v3 = GameRoutine_55f460(a1, a2);
  if (v3 == 0xFFFF) {
    v4 = *(char**)(a1 + 32);
    if (*(_BYTE*)(a1 + 260) == 1) {
      v3 = *((_WORD*)v4 + 14);
      v5 = *((unsigned int*)v4 + 4);
      if ((_DWORD)v5 != 0) {
        goto LABEL_10;
      }
    }
    else {
      v3 = *((_WORD*)v4 + 3);
      v5 = *((unsigned int*)v4 + 4);
      if ((_DWORD)v5 != 0) {
        goto LABEL_10;
      }
    }
  }
  else {
    v4 = *(char**)(a1 + 32);
    v5 = *((unsigned int*)v4 + 4);
    if ((_DWORD)v5 != 0) {
    LABEL_10:
      while (1) {
        v6 = (unsigned __int16*)(*(_QWORD*)(a1 + 24) + v5);
        v7 = *v6;
        if ((unsigned int)v7 <= v3 && v6[1] >= (unsigned int)v3) {
          break;
        }
        v5 = *((unsigned int*)v6 + 1);
        if ((_DWORD)v5 == 0) {
          return *((unsigned __int16*)v4 + 4) | ((unsigned __int8)v4[10] << 16);
        }
      }
      v4 = (char*)v6 + 3 * (v3 - v7);
    }
  }
  return *((unsigned __int16*)v4 + 4) | ((unsigned __int8)v4[10] << 16);
}

unsigned __int64 GameHr_55f6e0(__int64 a1, unsigned int a2)
{
  unsigned __int16 v3;
  __int64 v4;
  __int64 v5;
  unsigned __int16* v6;
  unsigned int v7;
  unsigned __int16* v8;

  v3 = GameRoutine_55f460(a1, a2);
  if (v3 == 0xFFFF) {
    v4 = *(_QWORD*)(a1 + 32);
    if (*(_BYTE*)(a1 + 260) == 1) {
      v3 = *(_WORD*)(v4 + 28);
      v5 = *(unsigned int*)(v4 + 20);
      if ((_DWORD)v5 != 0) {
        goto LABEL_10;
      }
    }
    else {
      v3 = *(_WORD*)(v4 + 6);
      v5 = *(unsigned int*)(v4 + 20);
      if ((_DWORD)v5 != 0) {
        goto LABEL_10;
      }
    }
    goto LABEL_13;
  }
  v4 = *(_QWORD*)(a1 + 32);
  v5 = *(unsigned int*)(v4 + 20);
  if ((_DWORD)v5 == 0) {
  LABEL_13:
    v8 = (unsigned __int16*)(v4 + 10);
    return *(unsigned int*)v8 | ((unsigned __int64)v8[2] << 32);
  }
LABEL_10:
  while (1) {
    v6 = (unsigned __int16*)(*(_QWORD*)(a1 + 24) + v5);
    v7 = *v6;
    if (v7 <= v3 && v6[1] >= (unsigned int)v3) {
      break;
    }
    v5 = *((unsigned int*)v6 + 1);
    if ((_DWORD)v5 == 0) {
      goto LABEL_13;
    }
  }
  v8 = &v6[3 * (v3 - v7) + 4];
  return *(unsigned int*)v8 | ((unsigned __int64)v8[2] << 32);
}

__int64 GameHr_55f7a0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5;
  __int64 v6;
  unsigned int v7;
  __int64 v8;

  v5 = GameRoutine_55f460(a1, a3);
  if ((_WORD)v5 == 0xFFFF) {
    v8 = *(_QWORD*)(a1 + 32);
    if (*(_BYTE*)(a1 + 260) == 1) {
      v6 = *(unsigned __int16*)(v8 + 28);
    }
    else {
      v6 = *(unsigned __int16*)(v8 + 6);
    }
    v7 = 2;
  }
  else {
    v6 = v5;
    v7 = 0;
  }
  GameRoutine_55f820(a1, a2, v6);
  return v7;
}

bool GameHr_55fa90(__int64 a1, unsigned int a2)
{
  return (unsigned __int16)GameRoutine_55f460(a1, a2) != 0xFFFF;
}

__int64 GameHr_563780(__int64 a1, unsigned __int16* a2, unsigned int a3,
                      unsigned int a4, __int16 a5, int a6, char a7)
{
  unsigned int v13;
  __int64 i;
  unsigned int v15;
  unsigned int v16;

  if (a3 != 0) {
    v13 = 0;
    for (i = a3; i != 0; --i) {
      v16 = *a2++;
      v15 = v16;
      if (v16 == 0) {
        break;
      }
      v13 += GameRoutine_5634c0(a1, v15, a4, a5, a6, a7 & 1);
    }
  }
  else {
    return 0;
  }
  return v13;
}

__int64 GameHr_563820(__int64 a1, __int64 a2, int a3, unsigned int a4,
                      __int16 a5, int a6, char a7)
{
  int v12;
  unsigned int v14;
  int v16;
  __int64 v17;
  unsigned int v18;

  v17 = a2;
  if (a3 != 0) {
    v12 = a2;
    v14 = 0;
    do {
      v16 = 0;
      GameRoutine_1a0cd40(&v16, &v17);
      if ((_BYTE)v16 == 0) {
        break;
      }
      v18 = 0;
      GameRoutine_1a0cd50(&v18, &v16);
      v14 += GameRoutine_5634c0(a1, v18, a4, a5, a6, a7 & 1);
    } while (a3 != (_DWORD)v17 - v12);
  }
  else {
    return 0;
  }
  return v14;
}

__int64 GameHr_564f80(__int64 a1, unsigned int a2, unsigned int a3,
                      unsigned int a4, unsigned __int16 a5)
{
  __int64 v7;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned int* v15;
  int* v16;
  int v17;
  int v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  unsigned int v22;
  __int64 v24;
  __int64 v25;
  unsigned int v26;
  __int64 v27;
  unsigned int v28;
  __int64 v29;
  unsigned int* v30;
  int* v31;
  int v32;
  int v33;
  __int64 v35;
  unsigned int v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  unsigned int* v40;
  int* v41;
  int v42;
  int v43;
  unsigned int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  unsigned int v48;
  __int64 v49;
  unsigned int v50;
  __int64 v51;
  unsigned int* v52;
  int* v53;
  int v54;
  int v55;
  __int64 v56;
  unsigned int v57;
  __int64 v58;
  unsigned int v59;
  unsigned int v60;
  __int64 v61;
  int v62;
  __int64 v64;
  float v65;
  int EPKNS0_15OtfKerningTableEjj;
  __int64 v67;
  __int64 v69;

  if (a2 == 0) {
    v21 = a5;
    v22 = *(unsigned __int8*)(a1 + 6280 + a5);
    if (*(_BYTE*)(a1 + 6280 + a5) == 0) {
      return 0;
    }
    v24 = 0;
    v25 = *(_QWORD*)(a1 + 8LL * a5 + 6312);
    while (1) {
      v27 = *(unsigned __int8*)(v25 + v24);
      v29 = *(unsigned int*)(*(_QWORD*)(a1 + 7216) + 4 * v27);
      if ((_DWORD)v29 == 0) {
        goto LABEL_31;
      }
      if ((int)v29 >= 1) {
        v30 = (unsigned int*)(*(_QWORD*)(a1 + 7232) + (v27 << 6));
        v31 = (int*)(*(_QWORD*)(a1 + 7224) + (v27 << 6));
        while (1) {
          v33 = *v31++;
          v32 = v33;
          if ((v33 & 0x7FFFFFFFu) <= a3 && a3 <= *v30) {
            break;
          }
          --v29;
          ++v30;
          if (v29 == 0) {
            goto LABEL_23;
          }
        }
        if ((v32 & 0x80000000) == 0) {
        LABEL_31:
          if (*(_BYTE*)(a1 + 7121) == 1) {
            v26 = (*(__int64 (**)(void))(a1 + 7128))();
            LODWORD(v27) = *(unsigned __int8*)(v25 + v24);
            v28 = v26;
          }
          else {
            v28 = 0;
          }
          GameRoutine_564ea0(a1, v27, v28);
          if ((GameRoutine_1a0ce50(*(_QWORD*)(a1 + 16) + 184LL * v28, a3) &
               1) != 0) {
            v56 = *(unsigned __int8*)(v25 + v24);
            if ((*(_BYTE*)(*(_QWORD*)(a1 + 7176) + v56) & 1) != 0 ||
                (*(_BYTE*)(*(_QWORD*)(a1 + 7192) + v56) & 1) != 0) {
              return 0;
            }
            v57 = *(_BYTE*)(a1 + 7121) == 1
                      ? (*(__int64 (**)(void))(a1 + 7128))()
                      : 0;
            GameRoutine_564ea0(a1, v56, v57);
            GameRoutine_1a0ce60(*(_QWORD*)(a1 + 16) + 184LL * v57, a4 << 16, 0,
                                0, a4 << 16);
            GameRoutine_1a0cdb0(*(_QWORD*)(a1 + 16) + 184LL * v57);
            v64 = *(_QWORD*)(*(_QWORD*)(a1 + 7240) + 8 * v56);
            if (v64 == 0) {
              return 0;
            }
            v65 = *(float*)(*(_QWORD*)(a1 + 7152) + 28LL * (unsigned int)v56 +
                            16);
            EPKNS0_15OtfKerningTableEjj = GameRoutine_1a0ceb0(
                *(_QWORD*)(a1 + 16) + 184LL * v57, v64, a3, a4);
            return (
                unsigned int)(int)(float)(v65 *
                                          (float)EPKNS0_15OtfKerningTableEjj);
          }
          v22 = *(unsigned __int8*)(a1 + 6280 + v21);
        }
      }
    LABEL_23:
      if (++v24 >= (unsigned __int64)v22) {
        return 0;
      }
    }
  }
  v7 = a5;
  v9 = a1 + 6280;
  v10 = *(_QWORD*)(a1 + 6312 + 8LL * a5);
  v11 = *(unsigned __int8*)(a1 + 6280 + a5);
  if (a3 == 0) {
    if (*(_BYTE*)(a1 + 6280 + a5) == 0) {
      return 0;
    }
    v35 = 0;
    while (1) {
      v37 = *(unsigned __int8*)(v10 + v35);
      v39 = *(unsigned int*)(*(_QWORD*)(a1 + 7216) + 4 * v37);
      if ((_DWORD)v39 == 0) {
        goto LABEL_46;
      }
      if ((int)v39 >= 1) {
        v40 = (unsigned int*)(*(_QWORD*)(a1 + 7232) + (v37 << 6));
        v41 = (int*)(*(_QWORD*)(a1 + 7224) + (v37 << 6));
        while (1) {
          v43 = *v41++;
          v42 = v43;
          if ((v43 & 0x7FFFFFFFu) <= a2 && a2 <= *v40) {
            break;
          }
          --v39;
          ++v40;
          if (v39 == 0) {
            goto LABEL_38;
          }
        }
        if ((v42 & 0x80000000) == 0) {
        LABEL_46:
          if (*(_BYTE*)(a1 + 7121) == 1) {
            v36 = (*(__int64 (**)(void))(a1 + 7128))();
            LODWORD(v37) = *(unsigned __int8*)(v10 + v35);
            v38 = v36;
          }
          else {
            v38 = 0;
          }
          GameRoutine_564ea0(a1, v37, v38);
          if ((GameRoutine_1a0ce50(*(_QWORD*)(a1 + 16) + 184LL * v38, a2) &
               1) != 0) {
            v58 = *(unsigned __int8*)(v10 + v35);
            if ((*(_BYTE*)(*(_QWORD*)(a1 + 7176) + v58) & 1) != 0 ||
                (*(_BYTE*)(*(_QWORD*)(a1 + 7192) + v58) & 1) != 0) {
              return 0;
            }
            v59 = *(_BYTE*)(a1 + 7121) == 1
                      ? (*(__int64 (**)(void))(a1 + 7128))()
                      : 0;
            GameRoutine_564ea0(a1, v58, v59);
            GameRoutine_1a0ce60(*(_QWORD*)(a1 + 16) + 184LL * v59, a4 << 16, 0,
                                0, a4 << 16);
            GameRoutine_1a0cdb0(*(_QWORD*)(a1 + 16) + 184LL * v59);
            v67 = *(_QWORD*)(*(_QWORD*)(a1 + 7240) + 8 * v58);
            if (v67 == 0) {
              return 0;
            }
            v65 = *(float*)(*(_QWORD*)(a1 + 7152) + 28LL * (unsigned int)v58 +
                            16);
            EPKNS0_15OtfKerningTableEjj = GameRoutine_1a0cec0(
                *(_QWORD*)(a1 + 16) + 184LL * v59, v67, a2, a4);
            return (
                unsigned int)(int)(float)(v65 *
                                          (float)EPKNS0_15OtfKerningTableEjj);
          }
          v11 = *(unsigned __int8*)(v9 + v7);
        }
      }
    LABEL_38:
      if (++v35 >= (unsigned __int64)v11) {
        return 0;
      }
    }
  }
  if (*(_BYTE*)(a1 + 6280 + a5) == 0) {
    return 0;
  }
  v12 = 0;
  while (1) {
    v13 = *(unsigned __int8*)(v10 + v12);
    v14 = *(unsigned int*)(*(_QWORD*)(a1 + 7216) + 4 * v13);
    if ((_DWORD)v14 == 0) {
      break;
    }
    if ((int)v14 >= 1) {
      v15 = (unsigned int*)(*(_QWORD*)(a1 + 7232) + (v13 << 6));
      v16 = (int*)(*(_QWORD*)(a1 + 7224) + (v13 << 6));
      while (1) {
        v18 = *v16++;
        v17 = v18;
        if ((v18 & 0x7FFFFFFFu) <= a2 && a2 <= *v15) {
          break;
        }
        --v14;
        ++v15;
        if (v14 == 0) {
          goto LABEL_5;
        }
      }
      if ((v17 & 0x80000000) == 0) {
        break;
      }
    }
  LABEL_5:
    if (++v12 >= (unsigned __int64)v11) {
      return 0;
    }
  }
  if (*(_BYTE*)(a1 + 7121) == 1) {
    v19 = (*(__int64 (**)(void))(a1 + 7128))();
    LODWORD(v13) = *(unsigned __int8*)(v10 + v12);
    v20 = v19;
  }
  else {
    v20 = 0;
  }
  GameRoutine_564ea0(a1, v13, v20);
  if ((GameRoutine_1a0ce50(*(_QWORD*)(a1 + 16) + 184LL * v20, a2) & 1) == 0) {
    v11 = *(unsigned __int8*)(v9 + v7);
    goto LABEL_5;
  }
  v44 = *(unsigned __int8*)(v9 + v7);
  if (*(_BYTE*)(v9 + v7) == 0) {
    return 0;
  }
  v45 = *(unsigned __int8*)(v10 + v12);
  v46 = *(_QWORD*)(a1 + 6312 + 8 * v7);
  v47 = 0;
  while (2) {
    v49 = *(unsigned __int8*)(v46 + v47);
    v51 = *(unsigned int*)(*(_QWORD*)(a1 + 7216) + 4 * v49);
    if ((_DWORD)v51 != 0) {
      if ((int)v51 < 1) {
        goto LABEL_53;
      }
      v52 = (unsigned int*)(*(_QWORD*)(a1 + 7232) + (v49 << 6));
      v53 = (int*)(*(_QWORD*)(a1 + 7224) + (v49 << 6));
      while (1) {
        v55 = *v53++;
        v54 = v55;
        if ((v55 & 0x7FFFFFFFu) <= a3 && a3 <= *v52) {
          break;
        }
        --v51;
        ++v52;
        if (v51 == 0) {
          goto LABEL_53;
        }
      }
      if (v54 < 0) {
      LABEL_53:
        if (++v47 >= (unsigned __int64)v44) {
          return 0;
        }
        continue;
      }
    }
    break;
  }
  if (*(_BYTE*)(a1 + 7121) == 1) {
    v48 = (*(__int64 (**)(void))(a1 + 7128))();
    LODWORD(v49) = *(unsigned __int8*)(v46 + v47);
    v50 = v48;
  }
  else {
    v50 = 0;
  }
  GameRoutine_564ea0(a1, v49, v50);
  if ((GameRoutine_1a0ce50(*(_QWORD*)(a1 + 16) + 184LL * v50, a3) & 1) == 0) {
    v44 = *(unsigned __int8*)(v9 + v7);
    goto LABEL_53;
  }
  if ((_DWORD)v45 != *(unsigned __int8*)(v46 + v47) ||
      (*(_BYTE*)(*(_QWORD*)(a1 + 7176) + v45) & 1) != 0 ||
      (*(_BYTE*)(*(_QWORD*)(a1 + 7192) + v45) & 1) != 0) {
    return 0;
  }
  v60 = 0;
  v69 = 0;
  if (*(_BYTE*)(a1 + 7121) == 1) {
    v60 = (*(__int64 (**)(void))(a1 + 7128))();
  }
  GameRoutine_564ea0(a1, v45, v60);
  GameRoutine_1a0ce60(*(_QWORD*)(a1 + 16) + 184LL * v60, a4 << 16, 0, 0,
                      a4 << 16);
  GameRoutine_1a0cdb0(*(_QWORD*)(a1 + 16) + 184LL * v60);
  v61 = *(_QWORD*)(*(_QWORD*)(a1 + 7240) + 8 * v45);
  if (v61 != 0) {
    v62 =
        GameRoutine_1a0cea0(*(_QWORD*)(a1 + 16) + 184LL * v60, v61, a2, a3, a4);
    if (v62 != 0) {
      return (unsigned int)(int)(float)(*(float*)(*(_QWORD*)(a1 + 7152) +
                                                  28LL * (unsigned int)v45 +
                                                  16) *
                                        (float)v62);
    }
  }
  if ((unsigned int)GameRoutine_1a0ced0(*(_QWORD*)(a1 + 16) + 184LL * v60,
                                        (char*)&v69 + 4, &v69, a2, a3) != 0) {
    return 0;
  }
  else {
    return (
        unsigned int)((int)(float)(*(float*)(*(_QWORD*)(a1 + 7152) +
                                             28LL * (unsigned int)v45 + 16) *
                                   (float)SHIDWORD(v69)) >>
                      16);
  }
}

float GameHr_5677c0(__int64 a1, float* a2, float* a3, unsigned __int64 a4,
                    int a5)
{

#pragma clang fp contract(off)
  int v5;
  float v6;
  float v7;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int v16;
  float v17;
  float v18;
  float v19;
  __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  long double v29;
  float v30;
  int v31;
  float v32;
  float v33;
  __int64 v34;
  __int64 v35;
  float v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  long double v44;
  float v45;
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
  long double v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  long double v73;
  float v74;
  struct {
    _QWORD v76[2];
    __int128 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
    __int64 v86;
  } v76_;
  struct {
    __int64 v87;
    __int64 v88;
  } v87_;
  unsigned __int64 v89;

  v5 = *(_DWORD*)(a1 + 80);
  v6 = 0x0.0p+0f;
  v7 = 0x0.0p+0f;
  if ((v5 & 0x333) != 0 && (*(_DWORD*)(a1 + 80) & 0x333) != 0x300 && a4 != 0) {
    v13 = *(_QWORD*)(a1 + 80);
    v14 = *(_QWORD*)(a1 + 88);
    v15 = *(_QWORD*)(a1 + 96);
    v16 = a4 + a5;
    v17 = 0x0.0p+0f;
    v18 = 0x0.0p+0f;
    v19 = 0x0.0p+0f;
    v20 = *(_QWORD*)(a1 + 48);
    v21 = *(_QWORD*)(a1 + 56);
    v22 = a5;
    v89 = a4;
    v76_.v84 = v13;
    v76_.v85 = v14;
    v24 = *(_QWORD*)(a1 + 64);
    v23 = *(_QWORD*)(a1 + 72);
    v76_.v86 = v15;
    v76_.v80 = v20;
    v76_.v81 = v21;
    v76_.v82 = v24;
    v76_.v83 = v23;
    v25 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)&v76_.v77 = *(_QWORD*)(a1 + 16);
    *((_QWORD*)&v76_.v77 + 1) = v25;
    v27 = *(_QWORD*)(a1 + 32);
    v26 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)((char*)&v76_.v77 + 4) = 0;
    v76_.v78 = v27;
    v76_.v79 = v26;
    v28 = *(_QWORD*)(a1 + 8);
    v76_.v76[0] = *(_QWORD*)a1;
    v76_.v76[1] = v28;
    do {
      v87_.v87 = 0;
      v87_.v88 = 0;
      nn_font_5665e0((__int64)v76_.v76, (float*)&v87_.v87, &v89, v22);
      v22 = v16 - v89;
      if (*(float*)&v87_.v87 < v7) {
        v7 = *(float*)&v87_.v87;
      }
      if (*((float*)&v87_.v87 + 1) < v17) {
        v17 = *((float*)&v87_.v87 + 1);
      }
      LODWORD(v29) = v87_.v88;
      if (v18 < *(float*)&v87_.v88) {
        v18 = *(float*)&v87_.v88;
      }
      if (v19 < *((float*)&v87_.v88 + 1)) {
        v19 = *((float*)&v87_.v88 + 1);
      }
    } while (v22 > 0);
    GameRoutine_5662e0_alt1(v76_.v76, v29);
    v5 = *(_DWORD*)(a1 + 80);
    v7 = v18 - v7;
    v6 = v19 - v17;
  }
  v30 = v7;
  v31 = v5 & 0x30;
  if (v31 != 32) {
    if (v31 != 16) {
      goto LABEL_20;
    }
    v30 = v7 * 0x1.0000000000000p-1f;
    v32 = ceilf(v7 * 0x1.0000000000000p-1f);
    if (*(_BYTE*)(a1 + 96) != 0) {
      v30 = v32;
    }
  }
  *a2 = *a2 - v30;
LABEL_20:
  if ((*(_DWORD*)(a1 + 80) & 0x300) != 0x200) {
    if ((*(_DWORD*)(a1 + 80) & 0x300) != 0x100) {
      goto LABEL_25;
    }
    v6 = v6 * 0x1.0000000000000p-1f;
    v33 = ceilf(v6);
    if (*(_BYTE*)(a1 + 96) != 0) {
      v6 = v33;
    }
  }
  *a3 = *a3 - v6;
LABEL_25:
  if (*(_BYTE*)(a1 + 98) == 1) {
    v34 = *(_QWORD*)(a1 + 80);
    v35 = *(_QWORD*)(a1 + 88);
    v36 = *a3;
    v37 = *(_QWORD*)(a1 + 96);
    v87_.v88 = 0;
    v89 = a4;
    v87_.v87 = 0;
    v76_.v84 = v34;
    v76_.v85 = v35;
    v76_.v86 = v37;
    v38 = *(_QWORD*)(a1 + 56);
    v76_.v80 = *(_QWORD*)(a1 + 48);
    v76_.v81 = v38;
    v39 = *(_QWORD*)(a1 + 72);
    v76_.v82 = *(_QWORD*)(a1 + 64);
    v76_.v83 = v39;
    v40 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)&v76_.v77 = *(_QWORD*)(a1 + 16);
    *((_QWORD*)&v76_.v77 + 1) = v40;
    v42 = *(_QWORD*)(a1 + 32);
    v41 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)((char*)&v76_.v77 + 4) = 0;
    v76_.v78 = v42;
    v76_.v79 = v41;
    v43 = *(_QWORD*)(a1 + 8);
    v76_.v76[0] = *(_QWORD*)a1;
    v76_.v76[1] = v43;
    nn_font_5665e0((__int64)v76_.v76, (float*)&v87_.v87, &v89, a5);
    LODWORD(v44) = HIDWORD(v87_.v88);
    v45 = *((float*)&v87_.v88 + 1) - *((float*)&v87_.v87 + 1);
    GameRoutine_5662e0_alt1(v76_.v76, v44);
    *a3 = v36 + (float)(v45 - (*(float (**)(_QWORD, __int64))(
                                  **(_QWORD**)(a1 + 88) + 40LL))(
                                  *(_QWORD*)(a1 + 88), a1));
  }
  if ((*(_DWORD*)(a1 + 80) & 3) == 2) {
    v63 = *(_QWORD*)(a1 + 80);
    v64 = *(_QWORD*)(a1 + 88);
    v65 = *(_QWORD*)(a1 + 96);
    v87_.v88 = 0;
    v89 = a4;
    v87_.v87 = 0;
    v76_.v84 = v63;
    v76_.v85 = v64;
    v66 = *(_QWORD*)(a1 + 48);
    v67 = *(_QWORD*)(a1 + 56);
    v76_.v86 = v65;
    v76_.v80 = v66;
    v76_.v81 = v67;
    v68 = *(_QWORD*)(a1 + 72);
    v76_.v82 = *(_QWORD*)(a1 + 64);
    v76_.v83 = v68;
    v69 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)&v76_.v77 = *(_QWORD*)(a1 + 16);
    *((_QWORD*)&v76_.v77 + 1) = v69;
    v71 = *(_QWORD*)(a1 + 32);
    v70 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)((char*)&v76_.v77 + 4) = 0;
    v76_.v78 = v71;
    v76_.v79 = v70;
    v72 = *(_QWORD*)(a1 + 8);
    v76_.v76[0] = *(_QWORD*)a1;
    v76_.v76[1] = v72;
    nn_font_5665e0((__int64)v76_.v76, (float*)&v87_.v87, &v89, a5);
    LODWORD(v73) = v87_.v88;
    v74 = *(float*)&v87_.v88 - *(float*)&v87_.v87;
    GameRoutine_5662e0_alt1(v76_.v76, v73);
    *(float*)(a1 + 20) = (float)(v7 - v74) + *a2;
    v62 = *a3;
    if ((~*(_DWORD*)(a1 + 80) & 0x300) == 0) {
      goto LABEL_37;
    }
    goto LABEL_36;
  }
  if ((*(_DWORD*)(a1 + 80) & 3) != 1) {
    *(float*)(a1 + 20) = *a2;
    v62 = *a3;
    if ((~*(_DWORD*)(a1 + 80) & 0x300) == 0) {
      goto LABEL_37;
    }
    goto LABEL_36;
  }
  v46 = *(_QWORD*)(a1 + 80);
  v47 = *(_QWORD*)(a1 + 88);
  v48 = *(_QWORD*)(a1 + 96);
  v87_.v88 = 0;
  v89 = a4;
  v87_.v87 = 0;
  v76_.v84 = v46;
  v76_.v85 = v47;
  v49 = *(_QWORD*)(a1 + 48);
  v50 = *(_QWORD*)(a1 + 56);
  v76_.v86 = v48;
  v76_.v80 = v49;
  v76_.v81 = v50;
  v51 = *(_QWORD*)(a1 + 72);
  v76_.v82 = *(_QWORD*)(a1 + 64);
  v76_.v83 = v51;
  v52 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)&v76_.v77 = *(_QWORD*)(a1 + 16);
  *((_QWORD*)&v76_.v77 + 1) = v52;
  v54 = *(_QWORD*)(a1 + 32);
  v53 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)((char*)&v76_.v77 + 4) = 0;
  v76_.v78 = v54;
  v76_.v79 = v53;
  v55 = *(_QWORD*)(a1 + 8);
  v76_.v76[0] = *(_QWORD*)a1;
  v76_.v76[1] = v55;
  nn_font_5665e0((__int64)v76_.v76, (float*)&v87_.v87, &v89, a5);
  LODWORD(v56) = v87_.v88;
  v57 = *(float*)&v87_.v88 - *(float*)&v87_.v87;
  GameRoutine_5662e0_alt1(v76_.v76, v56);
  v58 = v7 * 0x1.0000000000000p-1f;
  v59 = v57 * 0x1.0000000000000p-1f;
  v60 = ceilf(v7 * 0x1.0000000000000p-1f);
  if (*(_BYTE*)(a1 + 96) != 0) {
    v58 = v60;
  }
  v61 = ceilf(v59);
  if (*(_BYTE*)(a1 + 96) != 0) {
    v59 = v61;
  }
  *(float*)(a1 + 20) = *a2 + (float)(v58 - v59);
  v62 = *a3;
  if ((~*(_DWORD*)(a1 + 80) & 0x300) != 0) {
  LABEL_36:
    v62 = v62 + TextTagProcessor_55c280(a1);
  }
LABEL_37:
  *(float*)(a1 + 24) = v62;
  return v7;
}

float GameHr_5691c0(__int64 a1, float* a2, float* a3, unsigned __int64 a4,
                    int a5)
{

#pragma clang fp contract(off)
  int v5;
  float v6;
  float v7;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  float v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  long double v28;
  float v29;
  int v30;
  float v31;
  float v32;
  __int64 v33;
  __int64 v34;
  float v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  long double v43;
  float v44;
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
  long double v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  long double v72;
  float v73;
  struct {
    _QWORD v75[2];
    __int128 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    __int64 v82;
    __int64 v83;
    __int64 v84;
    __int64 v85;
  } v75_;
  struct {
    __int64 v86;
    __int64 v87;
  } v86_;
  unsigned __int64 v88;

  v5 = *(_DWORD*)(a1 + 80);
  v6 = 0x0.0p+0f;
  v7 = 0x0.0p+0f;
  if ((v5 & 0x333) != 0 && (*(_DWORD*)(a1 + 80) & 0x333) != 0x300 && a4 != 0) {
    v13 = *(_QWORD*)(a1 + 80);
    v14 = *(_QWORD*)(a1 + 88);
    v15 = *(_QWORD*)(a1 + 96);
    v16 = 0x0.0p+0f;
    v17 = 0x0.0p+0f;
    v18 = 0x0.0p+0f;
    v19 = *(_QWORD*)(a1 + 48);
    v20 = *(_QWORD*)(a1 + 56);
    LODWORD(v21) = a5;
    v88 = a4;
    v75_.v83 = v13;
    v75_.v84 = v14;
    v23 = *(_QWORD*)(a1 + 64);
    v22 = *(_QWORD*)(a1 + 72);
    v75_.v85 = v15;
    v75_.v79 = v19;
    v75_.v80 = v20;
    v75_.v81 = v23;
    v75_.v82 = v22;
    v24 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)&v75_.v76 = *(_QWORD*)(a1 + 16);
    *((_QWORD*)&v75_.v76 + 1) = v24;
    v26 = *(_QWORD*)(a1 + 32);
    v25 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)((char*)&v75_.v76 + 4) = 0;
    v75_.v77 = v26;
    v75_.v78 = v25;
    v27 = *(_QWORD*)(a1 + 8);
    v75_.v75[0] = *(_QWORD*)a1;
    v75_.v75[1] = v27;
    do {
      v86_.v86 = 0;
      v86_.v87 = 0;
      nn_font_567fe0((__int64)v75_.v75, (float*)&v86_.v86, &v88, v21);
      v21 = (a4 + 2LL * a5 - v88) >> 1;
      if (*(float*)&v86_.v86 < v7) {
        v7 = *(float*)&v86_.v86;
      }
      if (*((float*)&v86_.v86 + 1) < v16) {
        v16 = *((float*)&v86_.v86 + 1);
      }
      LODWORD(v28) = v86_.v87;
      if (v17 < *(float*)&v86_.v87) {
        v17 = *(float*)&v86_.v87;
      }
      if (v18 < *((float*)&v86_.v87 + 1)) {
        v18 = *((float*)&v86_.v87 + 1);
      }
    } while ((int)v21 > 0);
    GameRoutine_567cd0_alt1(v75_.v75, v28);
    v5 = *(_DWORD*)(a1 + 80);
    v7 = v17 - v7;
    v6 = v18 - v16;
  }
  v29 = v7;
  v30 = v5 & 0x30;
  if (v30 != 32) {
    if (v30 != 16) {
      goto LABEL_20;
    }
    v29 = v7 * 0x1.0000000000000p-1f;
    v31 = ceilf(v7 * 0x1.0000000000000p-1f);
    if (*(_BYTE*)(a1 + 96) != 0) {
      v29 = v31;
    }
  }
  *a2 = *a2 - v29;
LABEL_20:
  if ((*(_DWORD*)(a1 + 80) & 0x300) != 0x200) {
    if ((*(_DWORD*)(a1 + 80) & 0x300) != 0x100) {
      goto LABEL_25;
    }
    v6 = v6 * 0x1.0000000000000p-1f;
    v32 = ceilf(v6);
    if (*(_BYTE*)(a1 + 96) != 0) {
      v6 = v32;
    }
  }
  *a3 = *a3 - v6;
LABEL_25:
  if (*(_BYTE*)(a1 + 98) == 1) {
    v33 = *(_QWORD*)(a1 + 80);
    v34 = *(_QWORD*)(a1 + 88);
    v35 = *a3;
    v36 = *(_QWORD*)(a1 + 96);
    v86_.v87 = 0;
    v88 = a4;
    v86_.v86 = 0;
    v75_.v83 = v33;
    v75_.v84 = v34;
    v75_.v85 = v36;
    v37 = *(_QWORD*)(a1 + 56);
    v75_.v79 = *(_QWORD*)(a1 + 48);
    v75_.v80 = v37;
    v38 = *(_QWORD*)(a1 + 72);
    v75_.v81 = *(_QWORD*)(a1 + 64);
    v75_.v82 = v38;
    v39 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)&v75_.v76 = *(_QWORD*)(a1 + 16);
    *((_QWORD*)&v75_.v76 + 1) = v39;
    v41 = *(_QWORD*)(a1 + 32);
    v40 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)((char*)&v75_.v76 + 4) = 0;
    v75_.v77 = v41;
    v75_.v78 = v40;
    v42 = *(_QWORD*)(a1 + 8);
    v75_.v75[0] = *(_QWORD*)a1;
    v75_.v75[1] = v42;
    nn_font_567fe0((__int64)v75_.v75, (float*)&v86_.v86, &v88, a5);
    LODWORD(v43) = HIDWORD(v86_.v87);
    v44 = *((float*)&v86_.v87 + 1) - *((float*)&v86_.v86 + 1);
    GameRoutine_567cd0_alt1(v75_.v75, v43);
    *a3 = v35 + (float)(v44 - (*(float (**)(_QWORD, __int64))(
                                  **(_QWORD**)(a1 + 88) + 40LL))(
                                  *(_QWORD*)(a1 + 88), a1));
  }
  if ((*(_DWORD*)(a1 + 80) & 3) == 2) {
    v62 = *(_QWORD*)(a1 + 80);
    v63 = *(_QWORD*)(a1 + 88);
    v64 = *(_QWORD*)(a1 + 96);
    v86_.v87 = 0;
    v88 = a4;
    v86_.v86 = 0;
    v75_.v83 = v62;
    v75_.v84 = v63;
    v65 = *(_QWORD*)(a1 + 48);
    v66 = *(_QWORD*)(a1 + 56);
    v75_.v85 = v64;
    v75_.v79 = v65;
    v75_.v80 = v66;
    v67 = *(_QWORD*)(a1 + 72);
    v75_.v81 = *(_QWORD*)(a1 + 64);
    v75_.v82 = v67;
    v68 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)&v75_.v76 = *(_QWORD*)(a1 + 16);
    *((_QWORD*)&v75_.v76 + 1) = v68;
    v70 = *(_QWORD*)(a1 + 32);
    v69 = *(_QWORD*)(a1 + 40);
    *(_QWORD*)((char*)&v75_.v76 + 4) = 0;
    v75_.v77 = v70;
    v75_.v78 = v69;
    v71 = *(_QWORD*)(a1 + 8);
    v75_.v75[0] = *(_QWORD*)a1;
    v75_.v75[1] = v71;
    nn_font_567fe0((__int64)v75_.v75, (float*)&v86_.v86, &v88, a5);
    LODWORD(v72) = v86_.v87;
    v73 = *(float*)&v86_.v87 - *(float*)&v86_.v86;
    GameRoutine_567cd0_alt1(v75_.v75, v72);
    *(float*)(a1 + 20) = (float)(v7 - v73) + *a2;
    v61 = *a3;
    if ((~*(_DWORD*)(a1 + 80) & 0x300) == 0) {
      goto LABEL_37;
    }
    goto LABEL_36;
  }
  if ((*(_DWORD*)(a1 + 80) & 3) != 1) {
    *(float*)(a1 + 20) = *a2;
    v61 = *a3;
    if ((~*(_DWORD*)(a1 + 80) & 0x300) == 0) {
      goto LABEL_37;
    }
    goto LABEL_36;
  }
  v45 = *(_QWORD*)(a1 + 80);
  v46 = *(_QWORD*)(a1 + 88);
  v47 = *(_QWORD*)(a1 + 96);
  v86_.v87 = 0;
  v88 = a4;
  v86_.v86 = 0;
  v75_.v83 = v45;
  v75_.v84 = v46;
  v48 = *(_QWORD*)(a1 + 48);
  v49 = *(_QWORD*)(a1 + 56);
  v75_.v85 = v47;
  v75_.v79 = v48;
  v75_.v80 = v49;
  v50 = *(_QWORD*)(a1 + 72);
  v75_.v81 = *(_QWORD*)(a1 + 64);
  v75_.v82 = v50;
  v51 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)&v75_.v76 = *(_QWORD*)(a1 + 16);
  *((_QWORD*)&v75_.v76 + 1) = v51;
  v53 = *(_QWORD*)(a1 + 32);
  v52 = *(_QWORD*)(a1 + 40);
  *(_QWORD*)((char*)&v75_.v76 + 4) = 0;
  v75_.v77 = v53;
  v75_.v78 = v52;
  v54 = *(_QWORD*)(a1 + 8);
  v75_.v75[0] = *(_QWORD*)a1;
  v75_.v75[1] = v54;
  nn_font_567fe0((__int64)v75_.v75, (float*)&v86_.v86, &v88, a5);
  LODWORD(v55) = v86_.v87;
  v56 = *(float*)&v86_.v87 - *(float*)&v86_.v86;
  GameRoutine_567cd0_alt1(v75_.v75, v55);
  v57 = v7 * 0x1.0000000000000p-1f;
  v58 = v56 * 0x1.0000000000000p-1f;
  v59 = ceilf(v7 * 0x1.0000000000000p-1f);
  if (*(_BYTE*)(a1 + 96) != 0) {
    v57 = v59;
  }
  v60 = ceilf(v58);
  if (*(_BYTE*)(a1 + 96) != 0) {
    v58 = v60;
  }
  *(float*)(a1 + 20) = *a2 + (float)(v57 - v58);
  v61 = *a3;
  if ((~*(_DWORD*)(a1 + 80) & 0x300) != 0) {
  LABEL_36:
    v61 = v61 + TextTagProcessor_55c280(a1);
  }
LABEL_37:
  *(float*)(a1 + 24) = v61;
  return v7;
}

unsigned int** GameHr_570de0(unsigned int** result, unsigned int* a2)
{
  unsigned int** v3;
  unsigned int v4;
  unsigned int v5;
  int* v6;
  int v7;
  _QWORD v8[32];

  result[2] = nullptr;
  result[3] = nullptr;
  *result = nullptr;
  result[1] = nullptr;
  v3 = result;
  v4 = *a2;
  if (*a2 != 1312902214) {
    memset(v8, 0, sizeof(v8));
    result = (unsigned int**)GameRoutine_1a09d10(
        v8, 256, "Signature check failed ('%c%c%c%c' must be '%c%c%c%c').",
        HIBYTE(v4), BYTE2(v4), BYTE1(v4), (unsigned __int8)v4, 78, 65, 76, 70);
  }
  *v3 = a2;
  if (*((_WORD*)a2 + 8) != 0) {
    v5 = 0;
    v6 = (int*)((char*)a2 + *((unsigned __int16*)a2 + 3));
    do {
      v7 = *v6;
      if (*v6 == 828924272) {
        v3[3] = (unsigned int*)v6;
      }
      else if (v7 == 828989808) {
        v3[1] = (unsigned int*)v6;
      }
      else if (v7 == 829710704) {
        v3[2] = (unsigned int*)v6;
      }
      ++v5;
      v6 = (int*)((char*)v6 + (unsigned int)v6[1]);
    } while (v5 < *((unsigned __int16*)a2 + 8));
  }
  return result;
}

__int64 GameHr_5710f0(__int64 a1, __int64 a2, __int64* a3)
{
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  __int64 v20;
  __int64 v21;
  __int16 v22;
  __int64 v23;
  unsigned __int16 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int8 v36;
  __int64* v37;
  __int64 v38;
  _QWORD v39[19];
  __int64 vars0;
  __int64 vars8;

  GameRoutine_570dd0();
  *(_DWORD*)(a1 + 111) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  v6 = a1;
  v7 = a2;
  v8 = a3;
  v10 = vars0;
  v9 = vars8;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  v39[9] = v39[15];
  v39[10] = v39[16];
  v39[18] = v39[17];
  vars0 = v10;
  vars8 = v9;
  v11 = v8[1];
  v12 = v8;
  v13 = v7;
  v14 = v6;
  v15 = *(unsigned __int16*)(v11 + 14);
  if (*(_WORD*)(v11 + 14) != 0) {
    v16 = 0;
    v17 = v11 + *(unsigned int*)(v11 + 16);
    do {
      v18 = v11 + *(unsigned int*)(v17 + 4 * v16);
      if (*(_BYTE*)(v18 + 29) == 0) {
        if ((GameRoutine_5716e0(v11 + *(unsigned int*)(v17 + 4 * v16),
                                v13 + 176) &
             1) != 0) {
          goto LABEL_9;
        }
        v15 = *(unsigned __int16*)(v11 + 14);
      }
      ++v16;
    } while (v16 < v15);
  }
  v18 = 0;
LABEL_9:
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 80LL))(v13);
  memset(v39, 0, 72);
  if ((_BYTE)result == 0) {
    if (v18 == 0) {
      return result;
    }
    v32 = *v12;
    v33 = v12[1];
    v34 = v12[2];
    v35 = v12[3];
    v22 = 1;
    *(_QWORD*)(v14 + 32) = v18;
    *(_BYTE*)(v14 + 114) = result;
    *(_QWORD*)(v14 + 16) = v34;
    *(_QWORD*)(v14 + 24) = v35;
    *(_QWORD*)v14 = v32;
    *(_QWORD*)(v14 + 8) = v33;
    goto LABEL_25;
  }
  v20 = (unsigned __int8)result;
  v37 = v12;
  v38 = v14;
  v21 = 0;
  v36 = result;
  v22 = v18 != 0;
  do {
    result = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v13 + 88LL))(
        v13, (unsigned int)v21);
    v24 = *(_WORD*)(v11 + 14);
    if (v24 != 0) {
      v25 = *(_QWORD*)(result + 40);
      v26 = 0;
      v27 = v11 + *(unsigned int*)(v11 + 16);
      do {
        v23 = v11 + *(unsigned int*)(v27 + 4 * v26);
        if (*(_BYTE*)(v23 + 29) == 1) {
          result =
              GameRoutine_5716e0(v11 + *(unsigned int*)(v27 + 4 * v26), v25);
          if ((result & 1) != 0) {
            goto LABEL_12;
          }
          v24 = *(_WORD*)(v11 + 14);
        }
        ++v26;
      } while (v26 < v24);
    }
    v23 = 0;
  LABEL_12:
    v39[v21] = v23;
    if (v23 != 0) {
      ++v22;
    }
    ++v21;
  } while (v21 != v20);
  v14 = v38;
  if (v22 != 0) {
    v28 = *v37;
    v29 = v37[1];
    v30 = v37[2];
    v31 = v37[3];
    *(_QWORD*)(v38 + 32) = v18;
    *(_BYTE*)(v38 + 114) = v36;
    *(_QWORD*)v38 = v28;
    *(_QWORD*)(v38 + 8) = v29;
    *(_QWORD*)(v38 + 16) = v30;
    *(_QWORD*)(v38 + 24) = v31;
    result = GameRoutine_1a0b950(v38 + 40, v39, 8LL * v36);
  LABEL_25:
    *(_WORD*)(v14 + 112) = v22;
  }
  return result;
}

__int64 GameHr_5714e0(unsigned __int8* a1, unsigned __int8* a2)
{
  int v2;
  _BOOL4 v3;

  v2 = *a1;
  if (v2 != *a2) {
    return 0;
  }
  if (*a1 == 0) {
    return v2 | 1u;
  }
  v2 = a1[1];
  if (v2 != a2[1]) {
    return 0;
  }
  if (a1[1] == 0) {
    return v2 | 1u;
  }
  v2 = a1[2];
  if (v2 != a2[2]) {
    return 0;
  }
  if (a1[2] == 0) {
    return v2 | 1u;
  }
  v2 = a1[3];
  if (v2 != a2[3]) {
    return 0;
  }
  if (a1[3] == 0) {
    return v2 | 1u;
  }
  v2 = a1[4];
  if (v2 != a2[4]) {
    return 0;
  }
  if (a1[4] == 0) {
    return v2 | 1u;
  }
  v2 = a1[5];
  if (v2 != a2[5]) {
    return 0;
  }
  if (a1[5] == 0) {
    return v2 | 1u;
  }
  v2 = a1[6];
  if (v2 != a2[6]) {
    return 0;
  }
  if (a1[6] == 0) {
    return v2 | 1u;
  }
  v2 = a1[7];
  if (v2 != a2[7]) {
    return 0;
  }
  if (a1[7] == 0) {
    return v2 | 1u;
  }
  v2 = a1[8];
  if (v2 != a2[8]) {
    return 0;
  }
  if (a1[8] == 0) {
    return v2 | 1u;
  }
  v2 = a1[9];
  if (v2 != a2[9]) {
    return 0;
  }
  if (a1[9] == 0) {
    return v2 | 1u;
  }
  v2 = a1[10];
  if (v2 != a2[10]) {
    return 0;
  }
  if (a1[10] == 0) {
    return v2 | 1u;
  }
  v2 = a1[11];
  if (v2 != a2[11]) {
    return 0;
  }
  if (a1[11] == 0) {
    return v2 | 1u;
  }
  v2 = a1[12];
  if (v2 != a2[12]) {
    return 0;
  }
  if (a1[12] == 0) {
    return v2 | 1u;
  }
  v2 = a1[13];
  if (v2 != a2[13]) {
    return 0;
  }
  if (a1[13] == 0) {
    return v2 | 1u;
  }
  v2 = a1[14];
  if (v2 != a2[14]) {
    return 0;
  }
  if (a1[14] == 0) {
    return v2 | 1u;
  }
  v2 = a1[15];
  if (v2 != a2[15]) {
    return 0;
  }
  if (a1[15] == 0) {
    return v2 | 1u;
  }
  v2 = a1[16];
  if (v2 != a2[16]) {
    return 0;
  }
  if (a1[16] == 0) {
    return v2 | 1u;
  }
  v2 = a1[17];
  if (v2 != a2[17]) {
    return 0;
  }
  if (a1[17] == 0) {
    return v2 | 1u;
  }
  v2 = a1[18];
  if (v2 != a2[18]) {
    return 0;
  }
  if (a1[18] == 0) {
    return v2 | 1u;
  }
  v2 = a1[19];
  if (v2 != a2[19]) {
    return 0;
  }
  if (a1[19] == 0) {
    return v2 | 1u;
  }
  v2 = a1[20];
  if (v2 != a2[20]) {
    return 0;
  }
  if (a1[20] == 0) {
    return v2 | 1u;
  }
  v2 = a1[21];
  if (v2 != a2[21]) {
    return 0;
  }
  if (a1[21] == 0) {
    return v2 | 1u;
  }
  v2 = a1[22];
  if (v2 != a2[22]) {
    return 0;
  }
  if (a1[22] == 0) {
    return v2 | 1u;
  }
  v3 = a1[23] != 0 && a1[23] == a2[23];
  return v3 | (unsigned int)(a1[23] == a2[23]);
}

__int64 GameHr_5716e0(unsigned __int8* a1, unsigned __int8* a2)
{
  int v2;
  _BOOL4 v3;

  v2 = *a1;
  if (v2 != *a2) {
    return 0;
  }
  if (*a1 == 0) {
    return v2 | 1u;
  }
  v2 = a1[1];
  if (v2 != a2[1]) {
    return 0;
  }
  if (a1[1] == 0) {
    return v2 | 1u;
  }
  v2 = a1[2];
  if (v2 != a2[2]) {
    return 0;
  }
  if (a1[2] == 0) {
    return v2 | 1u;
  }
  v2 = a1[3];
  if (v2 != a2[3]) {
    return 0;
  }
  if (a1[3] == 0) {
    return v2 | 1u;
  }
  v2 = a1[4];
  if (v2 != a2[4]) {
    return 0;
  }
  if (a1[4] == 0) {
    return v2 | 1u;
  }
  v2 = a1[5];
  if (v2 != a2[5]) {
    return 0;
  }
  if (a1[5] == 0) {
    return v2 | 1u;
  }
  v2 = a1[6];
  if (v2 != a2[6]) {
    return 0;
  }
  if (a1[6] == 0) {
    return v2 | 1u;
  }
  v2 = a1[7];
  if (v2 != a2[7]) {
    return 0;
  }
  if (a1[7] == 0) {
    return v2 | 1u;
  }
  v2 = a1[8];
  if (v2 != a2[8]) {
    return 0;
  }
  if (a1[8] == 0) {
    return v2 | 1u;
  }
  v2 = a1[9];
  if (v2 != a2[9]) {
    return 0;
  }
  if (a1[9] == 0) {
    return v2 | 1u;
  }
  v2 = a1[10];
  if (v2 != a2[10]) {
    return 0;
  }
  if (a1[10] == 0) {
    return v2 | 1u;
  }
  v2 = a1[11];
  if (v2 != a2[11]) {
    return 0;
  }
  if (a1[11] == 0) {
    return v2 | 1u;
  }
  v2 = a1[12];
  if (v2 != a2[12]) {
    return 0;
  }
  if (a1[12] == 0) {
    return v2 | 1u;
  }
  v2 = a1[13];
  if (v2 != a2[13]) {
    return 0;
  }
  if (a1[13] == 0) {
    return v2 | 1u;
  }
  v2 = a1[14];
  if (v2 != a2[14]) {
    return 0;
  }
  if (a1[14] == 0) {
    return v2 | 1u;
  }
  v2 = a1[15];
  if (v2 != a2[15]) {
    return 0;
  }
  if (a1[15] == 0) {
    return v2 | 1u;
  }
  v2 = a1[16];
  if (v2 != a2[16]) {
    return 0;
  }
  if (a1[16] == 0) {
    return v2 | 1u;
  }
  v2 = a1[17];
  if (v2 != a2[17]) {
    return 0;
  }
  if (a1[17] == 0) {
    return v2 | 1u;
  }
  v2 = a1[18];
  if (v2 != a2[18]) {
    return 0;
  }
  if (a1[18] == 0) {
    return v2 | 1u;
  }
  v2 = a1[19];
  if (v2 != a2[19]) {
    return 0;
  }
  if (a1[19] == 0) {
    return v2 | 1u;
  }
  v2 = a1[20];
  if (v2 != a2[20]) {
    return 0;
  }
  if (a1[20] == 0) {
    return v2 | 1u;
  }
  v2 = a1[21];
  if (v2 != a2[21]) {
    return 0;
  }
  if (a1[21] == 0) {
    return v2 | 1u;
  }
  v2 = a1[22];
  if (v2 != a2[22]) {
    return 0;
  }
  if (a1[22] == 0) {
    return v2 | 1u;
  }
  v2 = a1[23];
  if (v2 != a2[23]) {
    return 0;
  }
  if (a1[23] == 0) {
    return v2 | 1u;
  }
  v2 = a1[24];
  if (v2 != a2[24]) {
    return 0;
  }
  if (a1[24] == 0) {
    return v2 | 1u;
  }
  v2 = a1[25];
  if (v2 != a2[25]) {
    return 0;
  }
  if (a1[25] == 0) {
    return v2 | 1u;
  }
  v2 = a1[26];
  if (v2 != a2[26]) {
    return 0;
  }
  if (a1[26] == 0) {
    return v2 | 1u;
  }
  v3 = a1[27] != 0 && a1[27] == a2[27];
  return v3 | (unsigned int)(a1[27] == a2[27]);
}

__int64 GameHr_571930(__int64 a1, int a2)
{
  unsigned int v2;
  __int64 result;
  int v5;
  unsigned int v6;
  unsigned int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned int v13;

  if (a2 <= 27) {
    v2 = a2 / 4;
    if ((unsigned int)(a2 / 4) <= 1) {
      result = 0;
      if (a2 <= 0) {
        v5 = -(-a2 & 3);
      }
      else {
        v5 = a2 & 3;
      }
      if (v5 > 1) {
        if (v5 == 2) {
          return *(unsigned __int8*)(a1 + 4 * v2 + 10);
        }
        else if (v5 == 3) {
          return *(unsigned __int8*)(a1 + 4 * v2 + 11);
        }
      }
      else if (v5 != 0) {
        if (v5 == 1) {
          return *(unsigned __int8*)(a1 + 4 * v2 + 9);
        }
      }
      else {
        return *(unsigned __int8*)(a1 + 4LL * v2 + 8);
      }
      return result;
    }
    if (v2 <= 6) {
      v6 = *(_DWORD*)(a1 + 16);
      if ((v6 & 0x10000) != 0) {
        v8 = GameRoutine_571b80(a1, v2 - 2);
        result = 0;
        if (a2 <= 0) {
          v9 = -(-a2 & 3);
        }
        else {
          v9 = a2 & 3;
        }
        if (v9 > 1) {
          if (v9 == 2) {
            return BYTE2(v8);
          }
          else if (v9 == 3) {
            return HIBYTE(v8);
          }
        }
        else if (v9 != 0) {
          if (v9 == 1) {
            return BYTE1(v8);
          }
        }
        else {
          return (unsigned __int8)v8;
        }
      }
      else if ((v6 & 0x20000) != 0) {
        v10 = *(_QWORD*)(a1 + 24);
        result = 0;
        v11 = v10 + ((16 * (v6 & 3) + (v6 & 0x30)) | (v6 >> 6) & 8) +
              ((v6 >> 8) & 0xC) + ((v6 >> 4) & 0x1C) + ((v6 >> 12) & 8) +
              (((int)(v6 << 19) >> 31) & 0xC) +
              20 * (((v6 >> 13) & 3) + ((v6 >> 2) & 3));
        LODWORD(v10) = v2 - 2;
        v12 = a2 % 4;
        v13 = *(_DWORD*)(v11 + 4LL * ((unsigned int)v10 % 5) + 96);
        if (a2 % 4 > 1) {
          if (v12 == 2) {
            return BYTE2(v13);
          }
          else if (v12 == 3) {
            return HIBYTE(v13);
          }
        }
        else if (v12 != 0) {
          if (v12 == 1) {
            return BYTE1(v13);
          }
        }
        else {
          return (unsigned __int8)v13;
        }
      }
      else {
        return 255;
      }
      return result;
    }
  }
  return 255;
}

__int64 GameHr_571b80(__int64 a1, int a2)
{
  unsigned int v2;
  __int64 result;

  v2 = *(_DWORD*)(a1 + 16);
  if (a2 <= 4 && (v2 & 0x10000) != 0) {
    return *(unsigned int*)(*(_QWORD*)(a1 + 24) +
                            ((16 * (v2 & 3) + (v2 & 0x30)) | (v2 >> 6) & 8) +
                            ((v2 >> 8) & 0xC) + ((v2 >> 4) & 0x1C) +
                            ((v2 >> 12) & 8) + (((int)(v2 << 19) >> 31) & 0xC) +
                            20 * (((v2 >> 13) & 3) + ((v2 >> 2) & 3)) +
                            4LL * (a2 % 5u) + 4);
  }
  result = 0xFFFFFFFFLL;
  if (a2 <= 4 && (v2 & 0x20000) != 0) {
    return *(unsigned int*)(*(_QWORD*)(a1 + 24) +
                            ((16 * (v2 & 3) + (v2 & 0x30)) | (v2 >> 6) & 8) +
                            ((v2 >> 8) & 0xC) + ((v2 >> 4) & 0x1C) +
                            ((v2 >> 12) & 8) + (((int)(v2 << 19) >> 31) & 0xC) +
                            (((int)(v2 << 15) >> 31) & 0x1C) +
                            ((v2 >> 12) & 0x10) * ((v2 >> 6) & 7) +
                            20 * (((v2 >> 13) & 3) + ((v2 >> 2) & 3)) +
                            4LL * (a2 % 5u) + 96);
  }
  return result;
}

__int64 GameHr_571cd0(__int64 result, int a2, unsigned __int8 a3)
{
  unsigned int v3;
  int v4;
  unsigned int v5;
  unsigned int v6;
  __int64 v7;
  unsigned int v8;
  int v9;
  __int64 v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  bool v17;
  unsigned __int8 v18;
  unsigned __int8 v19;
  unsigned __int8 v20;
  unsigned int v21;
  unsigned int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;
  __int64 v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  unsigned int v31;
  unsigned int v32;
  unsigned int v33;
  int v34;

  if (a2 <= 27) {
    v3 = a2 / 4;
    if ((unsigned int)(a2 / 4) > 1) {
      if (v3 <= 6) {
        v5 = *(_DWORD*)(result + 16);
        if ((v5 & 0x10000) != 0) {
          v22 = v3 - 2;
          v23 = ((v5 >> 13) & 3) + ((v5 >> 2) & 3);
          v24 = ((16 * (v5 & 3) + (v5 & 0x30)) | (v5 >> 6) & 8) +
                ((v5 >> 8) & 0xC) + ((v5 >> 4) & 0x1C) + ((v5 >> 12) & 8) +
                (((int)(v5 << 19) >> 31) & 0xC);
          if (a2 <= 0) {
            v25 = -(-a2 & 3);
          }
          else {
            v25 = a2 & 3;
          }
          v26 = a3;
          v27 = *(_QWORD*)(result + 24) + (unsigned int)(v24 + 20 * v23) + 4LL;
          v28 = *(_DWORD*)(v27 + 4LL * (v22 % 5));
          v29 = HIBYTE(v28);
          v30 = HIWORD(v28);
          v31 = v28 >> 8;
          if (v25 != 3) {
            v26 = HIBYTE(v28);
          }
          if (v25 == 2) {
            LOBYTE(v32) = a3;
          }
          else {
            v32 = HIWORD(v28);
          }
          if (v25 == 2) {
            v26 = HIBYTE(v28);
          }
          if (v25 == 1) {
            LOBYTE(v33) = a3;
          }
          else {
            v33 = v28 >> 8;
          }
          if (v25 != 0) {
            v34 = *(_DWORD*)(v27 + 4LL * (v22 % 5));
          }
          else {
            v33 = v28 >> 8;
            LOBYTE(v34) = a3;
          }
          if (v25 <= 1) {
            LOBYTE(v31) = v33;
            LOBYTE(v28) = v34;
          }
          else {
            LOBYTE(v30) = v32;
            v29 = v26;
          }
          if (v22 <= 4) {
            *(_DWORD*)(v27 + 4LL * v22) =
                ((unsigned __int8)v30 << 16) | (v29 << 24) |
                ((unsigned __int8)v31 << 8) | (unsigned __int8)v28;
          }
        }
        else if ((v5 & 0x20000) != 0) {
          v6 = a3;
          v7 = *(_QWORD*)(result + 24) +
               ((16 * (v5 & 3) + (v5 & 0x30)) | (v5 >> 6) & 8) +
               ((v5 >> 8) & 0xC) + ((v5 >> 4) & 0x1C) + ((v5 >> 12) & 8) +
               (((int)(v5 << 19) >> 31) & 0xC) +
               20 * (((v5 >> 13) & 3) + ((v5 >> 2) & 3));
          v8 = v3 - 2;
          v9 = a2 % 4;
          v10 = v7 + 96;
          v11 = *(_DWORD*)(v10 + 4LL * (v8 % 5));
          v12 = HIBYTE(v11);
          v13 = HIWORD(v11);
          if (a2 % 4 != 3) {
            v6 = HIBYTE(v11);
          }
          if (v9 == 2) {
            LOBYTE(v14) = a3;
          }
          else {
            v14 = HIWORD(v11);
          }
          if (v9 == 2) {
            v6 = HIBYTE(v11);
          }
          if (v9 == 1) {
            LOBYTE(v15) = a3;
          }
          else {
            v15 = v11 >> 8;
          }
          if (v9 != 0) {
            v16 = *(_DWORD*)(v10 + 4LL * (v8 % 5));
          }
          else {
            LOBYTE(v16) = a3;
          }
          if (v9 == 0) {
            v15 = v11 >> 8;
          }
          v17 = v9 <= 1;
          if (v9 <= 1) {
            v18 = v16;
          }
          else {
            v18 = *(_DWORD*)(v10 + 4LL * (v8 % 5));
          }
          if (v17) {
            v19 = v15;
          }
          else {
            v19 = BYTE1(*(_DWORD*)(v10 + 4LL * (v8 % 5)));
          }
          if (v17) {
            v20 = v13;
          }
          else {
            v20 = v14;
          }
          if (v17) {
            v21 = v12;
          }
          else {
            v21 = v6;
          }
          if (v8 <= 4) {
            *(_DWORD*)(v10 + 4LL * v8) =
                (v20 << 16) | (v21 << 24) | (v19 << 8) | v18;
          }
        }
      }
    }
    else {
      if (a2 <= 0) {
        v4 = -(-a2 & 3);
      }
      else {
        v4 = a2 & 3;
      }
      if (v4 > 1) {
        if (v4 == 2) {
          *(_BYTE*)(result + 4 * v3 + 10) = a3;
        }
        else if (v4 == 3) {
          *(_BYTE*)(result + 4 * v3 + 11) = a3;
        }
      }
      else if (v4 != 0) {
        if (v4 == 1) {
          *(_BYTE*)(result + 4 * v3 + 9) = a3;
        }
      }
      else {
        *(_BYTE*)(result + 4LL * v3 + 8) = a3;
      }
    }
  }
  return result;
}

__int64 GameHr_571fd0(_QWORD* a1)
{
  __int64 result;

  *a1 = GameData_2136128 + 2;
  result = GameRoutine_575640(a1 + 1);
  a1[22] = 0;
  a1[23] = 0;
  a1[24] = 0;
  a1[25] = 0;
  a1[26] = 0;
  a1[27] = 0;
  a1[28] = 0;
  a1[16] = a1 + 16;
  a1[17] = a1 + 16;
  a1[18] = a1 + 18;
  a1[19] = a1 + 18;
  a1[20] = a1 + 20;
  a1[21] = a1 + 20;
  return result;
}

__int64 GameHr_5720c0(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                      __int64 a5, __int64 a6)
{
  char v12;
  __int64 v13;
  _BYTE* v14;
  char* v15;
  char* v16;
  char* v17;
  char* v18;
  char* v19;
  int v20;
  _BYTE* v21;

  v12 = GameRoutine_575420(a1 + 1);
  if ((v12 & 1) != 0) {
    v13 = 0;
    while (1) {
      v14 = (_BYTE*)(a3 + v13);
      v15 = (char*)a1 + v13;
      if (*(_BYTE*)(a3 + v13) == 0) {
        v21 = v15 + 64;
        goto LABEL_23;
      }
      v15[64] = *(_BYTE*)(a3 + v13);
      if (v14[1] == 0) {
        v21 = (char*)a1 + v13 + 65;
        goto LABEL_23;
      }
      v15[65] = v14[1];
      v16 = (char*)a1 + v13;
      if (v14[2] == 0) {
        v21 = v16 + 66;
        goto LABEL_23;
      }
      v16[66] = v14[2];
      if (v14[3] == 0) {
        v21 = (char*)a1 + v13 + 67;
        goto LABEL_23;
      }
      v16[67] = v14[3];
      v17 = (char*)a1 + v13;
      if (v14[4] == 0) {
        v21 = v17 + 68;
        goto LABEL_23;
      }
      v17[68] = v14[4];
      if (v14[5] == 0) {
        v21 = (char*)a1 + v13 + 69;
        goto LABEL_23;
      }
      v17[69] = v14[5];
      v18 = (char*)a1 + v13;
      if (v14[6] == 0) {
        v21 = v18 + 70;
        goto LABEL_23;
      }
      v18[70] = v14[6];
      if (v14[7] == 0) {
        v21 = (char*)a1 + v13 + 71;
        goto LABEL_23;
      }
      v18[71] = v14[7];
      v19 = (char*)a1 + v13;
      v20 = (unsigned __int8)v14[8];
      if (v20 == 0) {
        break;
      }
      v13 += 9;
      v19[72] = v20;
      if ((_DWORD)v13 == 63) {
        v21 = (char*)a1 + v13 + 64;
        goto LABEL_23;
      }
    }
    v21 = v19 + 72;
  LABEL_23:
    *v21 = 0;
    a1[25] = a2;
    a1[26] = a4;
    a1[27] = a5;
    a1[28] = a6;
  }
  return v12 & 1;
}

__int64 GameHr_572220(_QWORD* a1, __int64 a2)
{
  __int64 result;
  __int64 v5;

  a1[23] = 0;
  a1[24] = 0;
  GameRoutine_576c20(a1 + 16);
  GameRoutine_59e100(a1 + 18, a2);
  result = GameRoutine_597ae0(a1 + 20, a2);
  v5 = a1[22];
  if (v5 != 0) {
    result = *(_QWORD*)(v5 + 64);
    if (*(_QWORD*)(v5 + 72) == result) {
      result = GameRoutine_5fe3b0(result, a2);
    }
    *(_QWORD*)(v5 + 72) = 0;
    a1[22] = 0;
  }
  return result;
}

__int64 GameHr_5722a0(__int64 result, _QWORD* a2)
{
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v13;
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
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
  } v13_;
  char v45[8];

  if (*(_QWORD*)(result + 176) == 0) {
    v5 = (_QWORD*)result;
    v13_.v43 = 0;
    v13_.v44 = 0;
    v13_.v41 = 0;
    v13_.v42 = 0;
    v13_.v39 = 0;
    v13_.v40 = 0;
    v13_.v37 = 0;
    v13_.v38 = 0;
    v13_.v35 = 0;
    v13_.v36 = 0;
    v13_.v33 = 0;
    v13_.v34 = 0;
    v13_.v31 = 0;
    v13_.v32 = 0;
    v13_.v29 = 0;
    v13_.v30 = 0;
    v13_.v27 = 0;
    v13_.v28 = 0;
    v13_.v25 = 0;
    v13_.v26 = 0;
    v13_.v23 = 0;
    v13_.v24 = 0;
    v13_.v21 = 0;
    v13_.v22 = 0;
    v13_.v19 = 0;
    v13_.v20 = 0;
    v13_.v17 = 0;
    v13_.v18 = 0;
    v13_.v15 = 0;
    v13_.v16 = 0;
    v13_.v13 = 0;
    v13_.v14 = 0;
    strcpy(v45, "timg");
    if (*(_BYTE*)(result + 64) != 46 || *(_BYTE*)(result + 65) != 0) {
      nn_util_SNPrintf(&v13_.v13, 255, "%s/%s/%s", (const char*)(result + 64),
                       v45, "__Combined.bntx");
      result = nn_ui2d_5756e0((__int64)(v5 + 1), (const char*)&v13_.v13);
      if ((_DWORD)result == -1) {
        return result;
      }
    }
    else {
      nn_util_SNPrintf(&v13_.v13, 255, "%s/%s", v45, "__Combined.bntx");
      result = nn_ui2d_5756e0((__int64)(v5 + 1), (const char*)&v13_.v13);
      if ((_DWORD)result == -1) {
        return result;
      }
    }
    v13_.v13 = 0;
    result = GameRoutine_575670_alt1((__int64)(v5 + 1),
                                     (unsigned int*)&v13_.v13, result);
    if (result != 0) {
      result = GameRoutine_5fc1f0_alt1(result);
      v5[22] = result;
      if (result == 0 || (v6 = *(_QWORD*)(result + 64)) == 0 ||
          *(_BYTE*)(v6 + 272) == 0) {
        v7 = v5[26];
        if (v7 != 0) {
          v8 = *(_QWORD*)(result + 48) + v5[27] - v5[25] + 16LL;
        }
        else {
          v13_.v16 = 0;
          v9 = result;
          LODWORD(v13_.v13) = 33;
          v10 = *(_QWORD*)(result + 48) + 16LL;
          v11 =
              nn_util_BinaryBlockHeader_GetBlockSize(*(_QWORD*)(result + 48)) -
              16;
          v12 = *(_QWORD*)(v9 + 64);
          HIDWORD(v13_.v13) = v11;
          v13_.v14 = v10;
          v13_.v15 = v11;
          GameRoutine_5fe310_alt1(v12, a2, (__int64)&v13_.v13);
          v7 = *(_QWORD*)(v9 + 64);
          result = v9;
          v8 = 0;
        }
        *(_QWORD*)(result + 72) = v7;
        *(_QWORD*)(result + 80) = v8;
      }
    }
  }
  return result;
}

__int64 GameHr_572470(__int64 a1, __int64 a2, int a3, const char* a4,
                      _QWORD* a5)
{
  unsigned int v7;
  __int64 result;
  _QWORD v9[32];
  char v10[8];

  v10[3] = a3;
  v10[4] = 0;
  v10[0] = HIBYTE(a3);
  v10[1] = BYTE2(a3);
  memset(v9, 0, sizeof(v9));
  v10[2] = BYTE1(a3);
  if (*(_BYTE*)a2 != 46 || *(_BYTE*)(a2 + 1) != 0) {
    GameRoutine_1a09d10(v9, 255, "%s/%s/%s", (const char*)a2, v10, a4);
    v7 = GameRoutine_5756e0(a1 + 8, v9);
    if (v7 != -1) {
      goto LABEL_4;
    }
    return 0;
  }
  GameRoutine_1a09d10(v9, 255, "%s/%s", v10, a4);
  v7 = GameRoutine_5756e0(a1 + 8, v9);
  if (v7 == -1) {
    return 0;
  }
LABEL_4:
  v9[0] = 0;
  result = GameRoutine_575670(a1 + 8, v9, v7);
  if (a5 != nullptr) {
    *a5 = SHIDWORD(v9[0]);
  }
  return result;
}

__int64 GameHr_5725c0(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  result = GameRoutine_5722a0(a1, a2);
  v5 = *(_QWORD*)(a1 + 176);
  if (v5 != 0) {
    v6 = *(unsigned int*)(*(_QWORD*)(v5 + 56) + 4LL);
    if ((int)v6 >= 1) {
      v7 = 8 * v6;
      v8 = 0;
      do {
        v9 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 176) + 40LL) + v8);
        if (v9 != 0) {
          v10 = GameRoutine_59e1c0(a1 + 144, *(_QWORD*)(v9 + 96) + 2LL);
          result = GameRoutine_59ec70(v10, a2, v9);
        }
        v8 += 8;
      } while (v7 != v8);
    }
  }
  return result;
}

__int64 GameHr_572ae0(__int64 a1, __int64 a2, __int64 a3, const char* a4)
{
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  bool v16;
  unsigned __int64 v17;
  unsigned __int16* v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned int v22;
  _QWORD v23[32];
  char v24[8];

  GameRoutine_5722a0(a1, a3);
  v8 = *(_QWORD*)(a1 + 176);
  if (v8 != 0) {
    v9 = *(_QWORD*)(v8 + 56);
    if (a4 != nullptr) {
      v10 = GameRoutine_1a09c70(a4);
    }
    else {
      v10 = 0;
    }
    v11 = v9 + 8;
    v12 = *(unsigned __int16*)(v9 + 12);
    v13 = v9 + 8 + 16 * v12;
    v14 = *(_DWORD*)v13;
    if (*(_DWORD*)(v9 + 8) < *(_DWORD*)v13) {
      do {
        v17 = (__int64)v14 >> 3;
        if (v10 > v17) {
          v15 = ((unsigned __int8)a4[v10 + ~v17] >> (v14 & 7)) & 1;
        }
        else {
          v15 = 0;
        }
        v12 = *(unsigned __int16*)(v9 + 12 + 16 * v12 + 2 * v15);
        v16 = v14 < *(_DWORD*)(v11 + 16 * v12);
        v14 = *(_DWORD*)(v11 + 16 * v12);
      } while (v16);
      v13 = v11 + 16 * v12;
    }
    v18 = *(unsigned __int16**)(v13 + 8);
    if (v10 == *v18 && (unsigned int)GameRoutine_1a09cf0(v18 + 1, a4) == 0) {
      v19 = v13 - v9 - 24;
      if ((~v19 & 0xFFFFFFFF0LL) != 0) {
        v20 = *(_QWORD*)(*(_QWORD*)(v8 + 40) + 8LL * (int)(v19 >> 4));
        if (v20 != 0) {
          return GameRoutine_59ec70(a2, a3, v20);
        }
      }
    }
  }
  memset(v23, 0, sizeof(v23));
  strcpy(v24, "timg");
  if (*(_BYTE*)(a1 + 64) == 46 && *(_BYTE*)(a1 + 65) == 0) {
    GameRoutine_1a09d10(v23, 255, "%s/%s", v24, a4);
    v22 = GameRoutine_5756e0(a1 + 8, v23);
    if (v22 == -1) {
      return 0;
    }
    goto LABEL_22;
  }
  GameRoutine_1a09d10(v23, 255, "%s/%s/%s", (const char*)(a1 + 64), v24, a4);
  v22 = GameRoutine_5756e0(a1 + 8, v23);
  if (v22 != -1) {
  LABEL_22:
    v23[0] = 0;
    GameRoutine_575670(a1 + 8, v23, v22);
  }
  return 0;
}

unsigned int* GameHr_572d30(__int64 a1, __int64 a2, const char* a3)
{
  unsigned int v5;
  unsigned int* result;
  unsigned int* v7;
  __int64 v8;
  _QWORD v9[32];
  char v10[8];

  memset(v9, 0, sizeof(v9));
  strcpy(v10, "font");
  if (*(_BYTE*)(a1 + 64) != 46 || *(_BYTE*)(a1 + 65) != 0) {
    GameRoutine_1a09d10(v9, 255, "%s/%s/%s", (const char*)(a1 + 64), v10, a3);
    v5 = GameRoutine_5756e0(a1 + 8, v9);
    if (v5 == -1) {
      return nullptr;
    }
  }
  else {
    GameRoutine_1a09d10(v9, 255, "%s/%s", v10, a3);
    v5 = GameRoutine_5756e0(a1 + 8, v9);
    if (v5 == -1) {
      return nullptr;
    }
  }
  v9[0] = 0;
  result = (unsigned int*)GameRoutine_575670(a1 + 8, v9, v5);
  if (result != nullptr) {
    v7 = result;
    result = (unsigned int*)GameRoutine_579180(264);
    if (result != nullptr) {
      v8 = (__int64)result;
      GameRoutine_55ea10(result);
      if ((GameRoutine_55eae0(v8, a2, v7, *(_QWORD*)(a1 + 208),
                              (__int64)v7 + *(_QWORD*)(a1 + 216) -
                                  *(_QWORD*)(a1 + 200),
                              *(_QWORD*)(a1 + 224)) &
           1) != 0) {
        return (unsigned int*)v8;
      }
      (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v8);
      GameRoutine_5791a0(v8);
      return nullptr;
    }
  }
  return result;
}

__int64 GameHr_572ec0(__int64 a1, __int64 a2, __int64 a3, const char* a4)
{
  unsigned int v7;
  __int64 result;
  _QWORD v9[32];
  _QWORD v10[32];
  char v11[8];

  memset(v9, 0, sizeof(v9));
  GameRoutine_1a09d10(v9, 256, "ArchiveShader-%s.bnsh", a4);
  memset(v10, 0, sizeof(v10));
  strcpy(v11, "bgsh");
  if (*(_BYTE*)(a1 + 64) != 46 || *(_BYTE*)(a1 + 65) != 0) {
    GameRoutine_1a09d10(v10, 255, "%s/%s/%s", (const char*)(a1 + 64), v11,
                        (const char*)v9);
    v7 = GameRoutine_5756e0(a1 + 8, v10);
    if (v7 == -1) {
      return 0;
    }
  }
  else {
    GameRoutine_1a09d10(v10, 255, "%s/%s", v11, (const char*)v9);
    v7 = GameRoutine_5756e0(a1 + 8, v10);
    if (v7 == -1) {
      return 0;
    }
  }
  v10[0] = 0;
  result = GameRoutine_575670(a1 + 8, v10, v7);
  if (result != 0) {
    GameRoutine_59ed50(a2, a3, result, 0, 0, 0, 0, 3);
    return 1;
  }
  return result;
}

__int64 GameHr_573070(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5,
                      __int64 a6)
{
  __int64 v6;
  int* v13;
  __int64 result;
  unsigned int v15;
  unsigned int v16;
  struct {
    _QWORD v17[2];
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
    __int64 v39;
    __int64 v40;
    __int64 v41;
    __int64 v42;
    __int64 v43;
    __int64 v44;
    __int64 v45;
    __int64 v46;
    __int64 v47;
  } v17_;
  char v48[8];

  v6 = *(_QWORD*)(a1 + 184);
  if (v6 != 0) {
    goto LABEL_2;
  }
  v17_.v46 = 0;
  v17_.v47 = 0;
  v17_.v44 = 0;
  v17_.v45 = 0;
  v17_.v42 = 0;
  v17_.v43 = 0;
  v17_.v40 = 0;
  v17_.v41 = 0;
  v17_.v38 = 0;
  v17_.v39 = 0;
  v17_.v36 = 0;
  v17_.v37 = 0;
  v17_.v34 = 0;
  v17_.v35 = 0;
  v17_.v32 = 0;
  v17_.v33 = 0;
  v17_.v30 = 0;
  v17_.v31 = 0;
  v17_.v28 = 0;
  v17_.v29 = 0;
  v17_.v26 = 0;
  v17_.v27 = 0;
  v17_.v24 = 0;
  v17_.v25 = 0;
  v17_.v22 = 0;
  v17_.v23 = 0;
  v17_.v20 = 0;
  v17_.v21 = 0;
  v17_.v18 = 0;
  v17_.v19 = 0;
  v17_.v17[0] = 0;
  v17_.v17[1] = 0;
  strcpy(v48, "bgsh");
  if (*(_BYTE*)(a1 + 64) != 46 || *(_BYTE*)(a1 + 65) != 0) {
    nn_util_SNPrintf(v17_.v17, 255, "%s/%s/%s", (const char*)(a1 + 64), v48,
                     "__ArchiveShader.bnsh");
    v15 = nn_ui2d_5756e0(a1 + 8, (const char*)v17_.v17);
    if (v15 == -1) {
      goto LABEL_8;
    }
  }
  else {
    nn_util_SNPrintf(v17_.v17, 255, "%s/%s", v48, "__ArchiveShader.bnsh");
    v15 = nn_ui2d_5756e0(a1 + 8, (const char*)v17_.v17);
    if (v15 == -1) {
    LABEL_8:
      *(_QWORD*)(a1 + 184) = 0;
      return 0;
    }
  }
  v17_.v17[0] = 0;
  result = GameRoutine_575670_alt1(a1 + 8, (unsigned int*)v17_.v17, v15);
  v6 = result;
  *(_QWORD*)(a1 + 184) = result;
  if (result == 0) {
    return result;
  }
LABEL_2:
  v13 = *(int**)(a1 + 192);
  if (v13 == nullptr) {
    v17_.v46 = 0;
    v17_.v47 = 0;
    v17_.v44 = 0;
    v17_.v45 = 0;
    v17_.v42 = 0;
    v17_.v43 = 0;
    v17_.v40 = 0;
    v17_.v41 = 0;
    v17_.v38 = 0;
    v17_.v39 = 0;
    v17_.v36 = 0;
    v17_.v37 = 0;
    v17_.v34 = 0;
    v17_.v35 = 0;
    v17_.v32 = 0;
    v17_.v33 = 0;
    v17_.v30 = 0;
    v17_.v31 = 0;
    v17_.v28 = 0;
    v17_.v29 = 0;
    v17_.v26 = 0;
    v17_.v27 = 0;
    v17_.v24 = 0;
    v17_.v25 = 0;
    v17_.v22 = 0;
    v17_.v23 = 0;
    v17_.v20 = 0;
    v17_.v21 = 0;
    v17_.v18 = 0;
    v17_.v19 = 0;
    v17_.v17[0] = 0;
    v17_.v17[1] = 0;
    strcpy(v48, "bgsh");
    if (*(_BYTE*)(a1 + 64) != 46 || *(_BYTE*)(a1 + 65) != 0) {
      nn_util_SNPrintf(v17_.v17, 255, "%s/%s/%s", (const char*)(a1 + 64), v48,
                       "__ArchiveShader.bushvt");
      v16 = nn_ui2d_5756e0(a1 + 8, (const char*)v17_.v17);
      if (v16 == -1) {
        goto LABEL_12;
      }
    }
    else {
      nn_util_SNPrintf(v17_.v17, 255, "%s/%s", v48, "__ArchiveShader.bushvt");
      v16 = nn_ui2d_5756e0(a1 + 8, (const char*)v17_.v17);
      if (v16 == -1) {
      LABEL_12:
        *(_QWORD*)(a1 + 192) = 0;
        return 0;
      }
    }
    v17_.v17[0] = 0;
    result = GameRoutine_575670_alt1(a1 + 8, (unsigned int*)v17_.v17, v16);
    v13 = (int*)result;
    *(_QWORD*)(a1 + 192) = result;
    if (result == 0) {
      return result;
    }
  }
  if ((unsigned int)GameRoutine_59ed60_alt1(v13, a4, a5, a6) == -1) {
    return 0;
  }
  GameRoutine_59ed50(a2, a3, v6, v13, *(_QWORD*)(a1 + 208),
                     v6 - *(_QWORD*)(a1 + 200) + *(_QWORD*)(a1 + 216),
                     *(_QWORD*)(a1 + 224), 3);
  return 1;
}

__int64 GameHr_573340(__int64 a1, __int64 a2, __int64 a3)
{
  GameRoutine_576ec0(a1 + 128);
  return GameRoutine_59e5a0(a1 + 144, a2, a3);
}

__int64 GameHr_573390(__int64 a1, __int64 a2, __int64 a3)
{
  GameRoutine_576f40(a1 + 128);
  return GameRoutine_59e640(a1 + 144, a2, a3);
}

__int64 GameHr_5733e0(__int64 a1)
{
  __int64 result;

  GameRoutine_597140();
  *(_QWORD*)a1 = GameData_2136140[0] + 2;
  result = GameRoutine_571fd0((_QWORD*)(a1 + 8));
  *(_BYTE*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = a1 + 248;
  *(_QWORD*)(a1 + 256) = a1 + 248;
  *(_QWORD*)(a1 + 264) = a1 + 264;
  *(_QWORD*)(a1 + 272) = a1 + 264;
  *(_QWORD*)(a1 + 280) = a1 + 280;
  *(_QWORD*)(a1 + 288) = a1 + 280;
  return result;
}

__int64 GameHr_573e50(_QWORD* a1)
{
  __int64 result;

  result = GameRoutine_597140();
  *a1 = GameData_2136148 + 2;
  a1[1] = a1 + 1;
  a1[2] = a1 + 1;
  a1[3] = a1 + 3;
  a1[4] = a1 + 3;
  a1[5] = a1 + 5;
  a1[6] = a1 + 5;
  a1[7] = a1 + 7;
  a1[8] = a1 + 7;
  return result;
}

__int64 GameHr_575640(__int64 result)
{
  *(_QWORD*)(result + 40) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  *(_QWORD*)(result + 16) = 0;
  *(_QWORD*)(result + 24) = 0;
  *(_DWORD*)(result + 32) = 0;
  *(_DWORD*)(result + 48) = 1;
  return result;
}

__int64 GameHr_575cc0(__int64 a1, __int64 a2)
{
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 result;

  v4 = GameData_21361c8[0];
  *(_QWORD*)(a1 + 16) = 0;
  *(_BYTE*)(a1 + 24) = 0;
  *(_QWORD*)a1 = v4 + 2;
  *(_QWORD*)(a1 + 8) = 0;
  v5 = GameRoutine_579180(216);
  v6 = v5;
  if (v5 != 0) {
    *(_DWORD*)(v5 + 16) = 0;
    v7 = GameData_21361d0[0];
    *(_QWORD*)(v5 + 24) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)(v5 + 40) = 0;
    *(_QWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_QWORD*)v5 = v7 + 2;
    *(_QWORD*)(v5 + 8) = -1;
    GameRoutine_606660(v5 + 64);
    GameRoutine_605ff0(v6 + 136);
    *(_QWORD*)(v6 + 208) = 0xFFFFFFFF00000000LL;
  }
  *(_QWORD*)(a1 + 8) = v6;
  *(_QWORD*)(v6 + 56) = a1;
  result = GameRoutine_5a00c0(a2);
  *(_QWORD*)(a1 + 16) = result;
  return result;
}

__int64 GameHr_576590(__int64 result, __int64 a2, __int64 a3)
{
  int v3;

  *(_QWORD*)result = a2 + 28;
  *(_QWORD*)(result + 8) = a2 + *(unsigned int*)(a2 + 8);
  v3 = *(unsigned __int16*)(a2 + 16);
  *(_WORD*)(result + 16) = v3;
  *(_WORD*)(result + 18) = *(_WORD*)(a2 + 18);
  *(_QWORD*)(result + 24) = a2 + *(unsigned int*)(a2 + 12);
  *(_QWORD*)(result + 32) = a2 + (unsigned int)(*(_DWORD*)(a2 + 12) + 24 * v3);
  *(_QWORD*)(result + 40) = a2 + *(unsigned int*)(a2 + 20);
  *(_QWORD*)(result + 48) = a2 + *(unsigned int*)(a2 + 24);
  *(_QWORD*)(result + 56) = a3;
  return result;
}

__int64 GameHr_576600(__int64 a1, __int64 a2)
{
  unsigned int* v2;
  __int64 v5;
  __int64 v6;
  unsigned int* v7;
  unsigned int v8;

  if (*(_WORD*)(a1 + 16) == 0) {
    return 0;
  }
  v2 = *(unsigned int**)(a1 + 40);
  v5 = 0;
  v6 = 24LL * *(unsigned __int16*)(a1 + 16);
  v7 = v2;
  while (1) {
    v8 = *v7++;
    if ((unsigned int)GameRoutine_1a09d30((char*)v2 + v8, a2) == 0) {
      break;
    }
    v5 -= 24;
    if (v6 + v5 == 0) {
      return 0;
    }
  }
  return *(_QWORD*)(a1 + 24) - v5;
}

__int64 GameHr_5766a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v6;

  if (*(_WORD*)(a1 + 18) == 0) {
    return 0;
  }
  v2 = *(_QWORD*)(a1 + 48);
  v3 = 4LL * *(unsigned __int16*)(a1 + 18);
  v6 = 0;
  while ((unsigned int)GameRoutine_1a09d30(v2 + *(unsigned int*)(v2 + v6),
                                           a2) != 0) {
    v6 += 4;
    if (v3 == v6) {
      return 0;
    }
  }
  return *(_QWORD*)(a1 + 32) + *(unsigned int*)(*(_QWORD*)(a1 + 32) + v6);
}

unsigned int* GameHr_576740(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v3;
  unsigned int* i;

  v2 = *(_QWORD*)(a1 + 56);
  if (v2 == 0) {
    return nullptr;
  }
  v3 = *(unsigned __int16*)(v2 + 8);
  if (*(_WORD*)(v2 + 8) == 0) {
    return nullptr;
  }
  for (i = (unsigned int*)(v2 + 12);
       (unsigned int)GameRoutine_1a09d30(a2, (char*)i + *i) != 0; i += 3) {
    if (--v3 == 0) {
      return nullptr;
    }
  }
  return i;
}

long double GameHr_5767c0(__int64 a1)
{
  __int64* v2;

  *(_BYTE*)(a1 + 403) = 0;
  v2 = GameData_21361d8;
  *(_QWORD*)(a1 + 408) = 0;
  *(_WORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  *(_QWORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 224) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_QWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 248) = 0;
  *(_QWORD*)(a1 + 256) = 0;
  *(_QWORD*)(a1 + 264) = 0;
  *(_QWORD*)(a1 + 272) = 0;
  *(_QWORD*)(a1 + 280) = 0;
  *(_QWORD*)(a1 + 288) = 0;
  *(_QWORD*)(a1 + 296) = 0;
  *(_QWORD*)(a1 + 304) = 0;
  *(_QWORD*)(a1 + 312) = 0;
  *(_QWORD*)(a1 + 320) = 0;
  *(_QWORD*)(a1 + 328) = 0;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)a1 = v2 + 2;
  *(_QWORD*)(a1 + 176) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 184) = 0;
  GameRoutine_5fc3e0(a1 + 256);
  GameRoutine_5fc3f0(a1 + 304);
  *(_BYTE*)(a1 + 404) = 0;
  *(_OWORD*)(a1 + 16) = GameData_1a82dd0;
  *(_OWORD*)(a1 + 32) = GameData_1a83610;
  *(_OWORD*)(a1 + 48) = GameData_1a83090;
  *(_OWORD*)(a1 + 64) = GameData_1a82dc0;
  *(_OWORD*)(a1 + 80) = GameData_1a82dd0;
  *(_OWORD*)(a1 + 96) = GameData_1a83610;
  *(_OWORD*)(a1 + 112) = GameData_1a83090;
  *(_OWORD*)(a1 + 128) = GameData_1a82dd0;
  *(_OWORD*)(a1 + 144) = GameData_1a83610;
  *(_OWORD*)(a1 + 160) = GameData_1a83090;
  return *(long double*)&GameData_1a82dd0;
}

__int64 GameHr_576c20(__int64 result, __int64 a2)
{
  __int64* v2;
  __int64 v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = *(__int64**)(result + 8);
  if (v2 != (__int64*)result) {
    v4 = result;
    do {
      if (*((_BYTE*)v2 + 152) == 1) {
        v7 = v2[18];
        if (v7 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 24LL))(v7, a2);
          v8 = v2[18];
          if (v8 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v8 + 8LL))(v2[18]);
            GameRoutine_5791a0(v8);
          }
          v2[18] = 0;
        }
      }
      v5 = (__int64*)v2[1];
      v6 = *v5;
      *(_QWORD*)(*v2 + 8) = v5;
      *v5 = *v2;
      *(_QWORD*)(v6 + 8) = v2;
      *v2 = v6;
      GameRoutine_576c00(v2);
      result = GameRoutine_5791a0(v2);
      v2 = *(__int64**)(v4 + 8);
    } while (v2 != (__int64*)v4);
  }
  return result;
}

__int64 GameHr_576ce0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;

  v2 = *(_QWORD*)(a1 + 8);
  if (v2 != a1) {
    while (2) {
      v3 = 0;
      while (*(unsigned __int8*)(a2 + v3) ==
             *(unsigned __int8*)(v2 + 16 + v3)) {
        if (*(_BYTE*)(a2 + v3) != 0 && v3++ != 127) {
          continue;
        }
        return *(_QWORD*)(v2 + 144);
      }
      v2 = *(_QWORD*)(v2 + 8);
      if (v2 != a1) {
        continue;
      }
      break;
    }
  }
  return 0;
}

__int64 GameHr_576d40(__int64 a1, _BYTE* a2, __int64 a3, char a4)
{
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BYTE* v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  _BYTE* v19;
  __int64 v20;

  result = GameRoutine_579180(160);
  if (result != 0) {
    v9 = result;
    GameRoutine_576bf0();
    v10 = v9 + 16;
    result = v9;
    v11 = 0;
    v12 = a2;
    v13 = v9;
    v14 = *a2;
    if (*a2 != 0) {
      while (1) {
        *(_BYTE*)(v13 + 16) = v14;
        if (v12[1] == 0) {
          v19 = (_BYTE*)(v9 + v11 + 17);
          goto LABEL_21;
        }
        *(_BYTE*)(v13 + 17) = v12[1];
        v15 = v9 + v11;
        if (v12[2] == 0) {
          v19 = (_BYTE*)(v15 + 18);
          goto LABEL_21;
        }
        *(_BYTE*)(v15 + 18) = v12[2];
        if (v12[3] == 0) {
          v19 = (_BYTE*)(v9 + v11 + 19);
          goto LABEL_21;
        }
        *(_BYTE*)(v15 + 19) = v12[3];
        v16 = v9 + v11;
        if (v12[4] == 0) {
          v19 = (_BYTE*)(v16 + 20);
          goto LABEL_21;
        }
        *(_BYTE*)(v16 + 20) = v12[4];
        if (v12[5] == 0) {
          v19 = (_BYTE*)(v9 + v11 + 21);
          goto LABEL_21;
        }
        *(_BYTE*)(v16 + 21) = v12[5];
        v17 = v9 + v11;
        if (v12[6] == 0) {
          v19 = (_BYTE*)(v17 + 22);
          goto LABEL_21;
        }
        *(_BYTE*)(v17 + 22) = v12[6];
        if ((_DWORD)v11 == 120) {
          v19 = (_BYTE*)(v9 + v11 + 23);
          goto LABEL_21;
        }
        v18 = (unsigned __int8)v12[7];
        if (v18 == 0) {
          break;
        }
        v10 += 8;
        *(_BYTE*)(v17 + 23) = v18;
        v11 += 8;
        v12 = &a2[v11];
        v13 = v9 + v11;
        v14 = a2[v11];
        if (v14 == 0) {
          goto LABEL_12;
        }
      }
      v19 = (_BYTE*)(v10 + 7);
    }
    else {
    LABEL_12:
      v19 = (_BYTE*)(v13 + 16);
    }
  LABEL_21:
    *v19 = 0;
    *(_QWORD*)(v9 + 144) = a3;
    v20 = *(_QWORD*)v9;
    *(_BYTE*)(v9 + 152) = a4 & 1;
    *(_QWORD*)v9 = *(_QWORD*)a1;
    *(_QWORD*)(v20 + 8) = a1;
    *(_QWORD*)(*(_QWORD*)a1 + 8LL) = v9;
    *(_QWORD*)a1 = v20;
  }
  return result;
}

__int64 GameHr_576ec0(__int64 result, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v6;

  v3 = *(_QWORD*)(result + 8);
  if (v3 != result) {
    v6 = result;
    do {
      if (*(_BYTE*)(v3 + 152) == 1) {
        result = GameRoutine_55f190(*(_QWORD*)(v3 + 144), a2, a3);
      }
      v3 = *(_QWORD*)(v3 + 8);
    } while (v3 != v6);
  }
  return result;
}

#pragma GCC visibility pop
