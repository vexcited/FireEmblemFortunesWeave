#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__int64* nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
__int64 GameRoutine_59f940(__int64, int);
__int64 GameRoutine_59f9c0(__int64 result, __int64, __int64, int);
__int64 GameRoutine_5fc450(__int64 result);
__int64 GameRoutine_604160(__int64, __int64*, char*);
__int64 GameRoutine_6063a0(__int64, __int64*, __int64, _QWORD*, __int64,
                           __int64);
__int64 GameRoutine_606510(__int64, __int64, unsigned __int8*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 nn_os_GetSystemTick(_QWORD);
__int64 nn_util_ReferSymbol(_QWORD);
__int64 nn_util_SNPrintf(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 strncmp(_QWORD, _QWORD);
__int64 strstr(_QWORD, _QWORD);
bool GameRoutine_59ee50(__int64, float32x2_t*);
extern _UNKNOWN* GameData_2132060;
extern __int64 (**nn_ui2d_LayoutPaneFactory_vtable_ptr)();
extern __int64* GameData_2132058;
extern __int64* GameData_2134fd0[5];
extern __int64* GameData_2136200;
extern int* GameData_2136208[16];
float acosf(float);
float powf(float, float);
float cosf(float);
void* LayoutEx_579130(void* result, void*, __int64);
void GameRoutine_6a48();
void GameRoutine_ea44();
__int64 nn_ui2d_575420(__int64 a1, __int64 a2);
__int64 nn_ui2d_5756e0_alt1(__int64 a1, _BYTE* a2, __int64 a3, __int64 a4,
                            __int64 a5, __int64 a6, __int64 a7,
                            __int64 a8) __asm__("nn_ui2d_5756e0");
__int64 nn_ui2d_575980(__int64 a1, int* a2, __int64 a3, unsigned int a4);
void* nn_ui2d_579080_alt1(void* a1, void* a2,
                          __int64 a3) __asm__("nn_ui2d_579080");
__int64 nn_ui2d_597360(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5,
                       __int64 a6, __int64 a7);
_BYTE* nn_ui2d_59ec90(__int64 a1, __int64* a2, __int64 a3);
_QWORD* nn_ui2d_59f020(__int64 a1, float32x2_t* a2);
float nn_ui2d_59f160(float* a1, int a2, float a3);
__int64 nn_ui2d_59fa50(__int64* a1, __int64 a2);
int* nn_ui2d_5a0280(int* result, int* a2, __int64 a3,
                    __int64 (*a4)(__int64*, char*, __int64, __int64),
                    __int64 a5, unsigned int a6);
int* nn_ui2d_5a0c60(int* result, int* a2, __int64 a3,
                    __int64 (*a4)(__int64*, char*, __int64, __int64),
                    __int64 a5, unsigned int a6);
float nn_ui2d_5a3500(__int64 a1, float a2);
float nn_ui2d_5a3700(unsigned __int16* a1, float a2);
__int64 (*LayoutEx_579130_alt1(__int64 (*result)(_QWORD, _QWORD, _QWORD), void*,
                               __int64))(_QWORD, _QWORD,
                                         _QWORD) __asm__("LayoutEx_579130");
__int64 nn_os_GetSystemTick_alt1() __asm__("nn_os_GetSystemTick");
__int64 nn_util_ReferSymbol_alt1(__int64) __asm__("nn_util_ReferSymbol");
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
int strncmp_alt1(const char*, const char*, unsigned __int64) __asm__("strncmp");
__int64 nn_ui2d_5756e0(__int64 a1, const char* a2);
__int64 (*nn_ui2d_579080(__int64 (*a1)(_QWORD, _QWORD, _QWORD), void* a2,
                         __int64 a3))(_QWORD, _QWORD, _QWORD);

__int64 nn_ui2d_575420(__int64 a1, __int64 a2)
{
  int v4;
  unsigned int v5;
  unsigned int v6;
  unsigned int v7;
  __int16 v8;
  unsigned int v9;
  unsigned int v10;
  unsigned int v11;
  unsigned __int16 v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  unsigned int v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  unsigned int v25;
  unsigned int v26;
  __int64 v27;
  __int64 v28;
  unsigned int v29;
  unsigned int v30;
  signed int v31;
  unsigned int v32;

  if (a2 == 0) {
    return 0;
  }
  *(_QWORD*)a1 = a2;
  if (strncmp_alt1((const char*)a2, "SARC", 4u) != 0) {
    return 0;
  }
  v4 = *(unsigned __int16*)(a2 + 6);
  *(_DWORD*)(a1 + 48) = v4 != 65534;
  v5 = *(unsigned __int16*)(a2 + 16);
  v6 = bswap32(v5) >> 16;
  if (v4 == 65534) {
    LOWORD(v5) = v6;
  }
  if ((unsigned __int16)v5 != 256) {
    return 0;
  }
  v7 = bswap32(*(unsigned __int16*)(a2 + 4)) >> 16;
  v8 = v4 == 65534 ? v7 : *(_WORD*)(a2 + 4);
  if (v8 != 20) {
    return 0;
  }
  *(_QWORD*)(a1 + 8) = a2 + 20;
  if (strncmp_alt1((const char*)(a2 + 20), "SFAT", 4u) != 0) {
    return 0;
  }
  v9 = *(unsigned __int16*)(a2 + 24);
  v10 = bswap32(v9) >> 16;
  if (v4 == 65534) {
    LOWORD(v9) = v10;
  }
  if ((unsigned __int16)v9 != 12) {
    return 0;
  }
  v11 = bswap32(*(unsigned __int16*)(a2 + 26)) >> 16;
  v12 = v4 == 65534 ? v11 : *(_WORD*)(a2 + 26);
  if ((v12 & 0xC000) != 0) {
    return 0;
  }
  *(_DWORD*)(a1 + 32) = v12;
  v13 = *(unsigned __int16*)(a2 + 4);
  v14 = bswap32(v13) >> 16;
  if (v4 == 65534) {
    LOWORD(v13) = v14;
  }
  v15 = *(unsigned __int16*)(a2 + 24);
  v16 = a2 + (__int16)v13;
  v17 = bswap32(v15) >> 16;
  if (v4 == 65534) {
    LOWORD(v15) = v17;
  }
  *(_QWORD*)(a1 + 24) = v16 + (__int16)v15;
  v18 = *(unsigned __int16*)(a2 + 4);
  v19 = bswap32(v18) >> 16;
  if (v4 == 65534) {
    LOWORD(v18) = v19;
  }
  v20 = *(unsigned __int16*)(a2 + 24);
  v21 = (__int16)v18;
  v22 = a2 + (__int16)v18;
  v23 = bswap32(v20) >> 16;
  if (v4 == 65534) {
    LOWORD(v20) = v23;
  }
  v24 = (__int16)v20;
  v25 = *(unsigned __int16*)(a2 + 26);
  v26 = bswap32(v25) >> 16;
  if (v4 == 65534) {
    LOWORD(v25) = v26;
  }
  v27 = 16LL * (__int16)v25;
  v28 = v22 + v24 + v27;
  if (strncmp_alt1((const char*)v28, "SFNT", 4u) != 0) {
    return 0;
  }
  v29 = *(unsigned __int16*)(v28 + 4);
  v30 = bswap32(v29) >> 16;
  if (v4 == 65534) {
    LOWORD(v29) = v30;
  }
  if ((unsigned __int16)v29 != 8) {
    return 0;
  }
  *(_QWORD*)(a1 + 16) = v28 + 8;
  v31 = *(_DWORD*)(a2 + 12);
  v32 = bswap32(v31);
  if (v4 == 65534) {
    v31 = v32;
  }
  if (v24 + v21 + v27 + 8 > v31) {
    return 0;
  }
  *(_QWORD*)(a1 + 40) = a2 + v31;
  return 1;
}

__int64 nn_ui2d_5756e0(__int64 a1, const char* a2)
{
  int v2;
  unsigned int v4;
  unsigned int v5;
  int v6;
  const char* v7;
  unsigned int v8;
  int v9;
  signed int v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  unsigned __int64 v17;
  unsigned int v18;
  unsigned int v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned int v23;
  unsigned __int64 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int* v29;
  int v30;
  __int64 v31;
  int v32;
  int v33;
  bool v34;
  int v35;
  int v36;
  unsigned __int64 v38;
  int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int* v43;
  int v44;
  __int64 v45;

  v2 = *(_DWORD*)(a1 + 48);
  v4 = *(_DWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  v5 = bswap32(v4);
  if (v2 == 0) {
    v4 = v5;
  }
  v6 = *(unsigned __int8*)a2;
  if (*a2 != 0) {
    v7 = a2 + 1;
    v8 = 0;
    do {
      v8 = v6 + v8 * v4;
      v9 = *(unsigned __int8*)v7++;
      v6 = v9;
    } while (v9 != 0);
  }
  else {
    v8 = 0;
  }
  v10 = *(_DWORD*)(a1 + 32);
  v11 = *(_QWORD*)(a1 + 24);
  v12 = v10 / 2;
  v13 = *(_DWORD*)(v11 + 16LL * (v10 / 2));
  v14 = bswap32(v13);
  if (v2 != 0) {
    v15 = *(_DWORD*)(v11 + 16LL * (v10 / 2));
  }
  else {
    v15 = v14;
  }
  if (v15 != v8) {
    if (v2 != 0) {
      v32 = 0;
      v33 = *(_DWORD*)(a1 + 32);
      while (1) {
        if (v13 >= v8) {
          v34 = v33 == v12;
          v33 = v12;
          v12 = v32;
          if (v34) {
            return (unsigned int)-1;
          }
        }
        else if (v32 == v12) {
          return (unsigned int)-1;
        }
        v32 = v12;
        v12 = (v12 + v33) / 2;
        v16 = v12;
        v13 = *(_DWORD*)(v11 + 16LL * v12);
        if (v13 == v8) {
          goto LABEL_13;
        }
      }
    }
    v35 = 0;
    v16 = v10 / 2;
    v36 = *(_DWORD*)(a1 + 32);
    while (1) {
      if (v14 >= v8) {
        v34 = v36 == v16;
        v36 = v16;
        if (v34) {
          return (unsigned int)-1;
        }
      }
      else {
        v34 = v35 == v16;
        v35 = v16;
        if (v34) {
          return (unsigned int)-1;
        }
      }
      v16 = (v35 + v36) / 2;
      v14 = bswap32(*(_DWORD*)(v11 + 16LL * v16));
      if (v14 == v8) {
        goto LABEL_13;
      }
    }
  }
  v16 = v10 / 2;
LABEL_13:
  if (v16 == -1) {
    return (unsigned int)-1;
  }
  else {
    LODWORD(v17) = *(_DWORD*)(v11 + 16LL * v16 + 4);
    v18 = bswap32(v17);
    if (v2 != 0) {
      v17 = (unsigned int)v17;
    }
    else {
      v17 = v18;
    }
    if ((_DWORD)v17 != 0) {
      v19 = v16 - BYTE3(v17);
      v20 = *(_QWORD*)(a1 + 16);
      v21 = *(_QWORD*)(a1 + 40);
      v22 = v10;
      if (v10 <= (int)(v19 + 1)) {
        v23 = v19 + 1;
      }
      else {
        v23 = *(_DWORD*)(a1 + 32);
      }
      if (v2 != 0) {
        v24 = v17 >> 24;
        v25 = v16 - (v17 >> 24);
        v26 = v11 - 16 * (v17 >> 24) + 16LL * v16;
        v27 = v16;
        v16 = v25;
        v28 = v27 - v24 + 1;
        v29 = (int*)(v26 + 20);
        while (v28 < v22) {
          if (*(v29 - 1) != v8) {
            return (unsigned int)-1;
          }
          v30 = *v29;
          v29 += 4;
          v31 = v30 & 0xFFFFFF;
          if (v20 + v31 > v21) {
            return (unsigned int)-1;
          }
          ++v16;
          ++v28;
          if (strcmp_alt1(a2, (const char*)(v20 + (unsigned int)(4 * v31))) ==
              0) {
            return (unsigned int)v16;
          }
        }
      }
      else {
        v38 = v17 >> 24;
        v39 = v16 - (v17 >> 24);
        v40 = v11 - 16 * (v17 >> 24) + 16LL * v16;
        v41 = v16;
        v16 = v39;
        v42 = v41 - v38 + 1;
        v43 = (int*)(v40 + 20);
        while (v42 < v22) {
          if (bswap32(*(v43 - 1)) != v8) {
            return (unsigned int)-1;
          }
          v44 = *v43;
          v43 += 4;
          v45 = bswap32(v44 & 0xFFFFFF00);
          if (v20 + v45 > v21) {
            return (unsigned int)-1;
          }
          ++v16;
          ++v42;
          if (strcmp_alt1(a2, (const char*)(v20 + (unsigned int)(4 * v45))) ==
              0) {
            return (unsigned int)v16;
          }
        }
      }
      return v23;
    }
  }
  return (unsigned int)v16;
}

__int64 nn_ui2d_575980(__int64 a1, int* a2, __int64 a3, unsigned int a4)
{
  int v4;
  unsigned __int64 v6;
  unsigned int v7;
  bool v8;
  unsigned int v9;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  _BYTE* v15;
  unsigned int v16;
  unsigned int v17;
  __int64 v18;
  __int64 v19;
  unsigned int v20;
  unsigned int v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _BYTE* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  _BYTE* v35;
  unsigned int v36;
  unsigned int v37;

  v4 = *a2;
  LODWORD(v6) = 0;
  v7 = *(unsigned __int16*)(*(_QWORD*)(a1 + 8) + 6LL);
  v8 = *(_DWORD*)(a1 + 48) == 0;
  v9 = bswap32(v7) >> 16;
  if (*(_DWORD*)(a1 + 48) == 0) {
    LOWORD(v7) = v9;
  }
  if ((int)a4 >= 1 && v4 < (__int16)v7) {
    v6 = 0;
    v12 = a4;
    v13 = a3;
    do {
      v14 = *(_QWORD*)(a1 + 24);
      v15 = (_BYTE*)(a3 + (v6 << 8));
      v16 = *(_DWORD*)(v14 + 16LL * v4 + 4);
      v17 = bswap32(v16);
      if (v8) {
        v16 = v17;
      }
      if (v16 != 0) {
        v18 = *(_QWORD*)(a1 + 16);
        v19 = v16 & 0xFFFFFF;
        if ((unsigned __int64)(v18 + v19) <= *(_QWORD*)(a1 + 40)) {
          v23 = 0;
          v24 = v18 + (unsigned int)(4 * v19);
          while (1) {
            v25 = (_BYTE*)(v24 + v23);
            if (*(_BYTE*)(v24 + v23) == 0) {
            LABEL_34:
              v35 = (_BYTE*)(v13 + v23);
              goto LABEL_51;
            }
            v26 = v13 + v23;
            *(_BYTE*)(v13 + v23) = *(_BYTE*)(v24 + v23);
            if (v25[1] == 0) {
              v35 = (_BYTE*)(v26 + 1);
              goto LABEL_51;
            }
            *(_BYTE*)(v26 + 1) = v25[1];
            if (v25[2] == 0) {
              v35 = (_BYTE*)(v13 + v23 + 2);
              goto LABEL_51;
            }
            *(_BYTE*)(v26 + 2) = v25[2];
            v27 = v13 + v23;
            if (v25[3] == 0) {
              v35 = (_BYTE*)(v27 + 3);
              goto LABEL_51;
            }
            *(_BYTE*)(v27 + 3) = v25[3];
            if (v25[4] == 0) {
              v35 = (_BYTE*)(v13 + v23 + 4);
              goto LABEL_51;
            }
            *(_BYTE*)(v27 + 4) = v25[4];
            v28 = v13 + v23;
            if (v25[5] == 0) {
              v35 = (_BYTE*)(v28 + 5);
              goto LABEL_51;
            }
            *(_BYTE*)(v28 + 5) = v25[5];
            if (v25[6] == 0) {
              v35 = (_BYTE*)(v13 + v23 + 6);
              goto LABEL_51;
            }
            *(_BYTE*)(v28 + 6) = v25[6];
            v29 = v13 + v23;
            if (v25[7] == 0) {
              v35 = (_BYTE*)(v29 + 7);
              goto LABEL_51;
            }
            *(_BYTE*)(v29 + 7) = v25[7];
            if (v25[8] == 0) {
              v35 = (_BYTE*)(v13 + v23 + 8);
              goto LABEL_51;
            }
            *(_BYTE*)(v29 + 8) = v25[8];
            v30 = v13 + v23;
            if (v25[9] == 0) {
              v35 = (_BYTE*)(v30 + 9);
              goto LABEL_51;
            }
            *(_BYTE*)(v30 + 9) = v25[9];
            if (v25[10] == 0) {
              v35 = (_BYTE*)(v13 + v23 + 10);
              goto LABEL_51;
            }
            *(_BYTE*)(v30 + 10) = v25[10];
            v31 = v13 + v23;
            if (v25[11] == 0) {
              v35 = (_BYTE*)(v31 + 11);
              goto LABEL_51;
            }
            *(_BYTE*)(v31 + 11) = v25[11];
            if (v25[12] == 0) {
              v35 = (_BYTE*)(v13 + v23 + 12);
              goto LABEL_51;
            }
            *(_BYTE*)(v31 + 12) = v25[12];
            v32 = v13 + v23;
            if (v25[13] == 0) {
              v35 = (_BYTE*)(v32 + 13);
              goto LABEL_51;
            }
            *(_BYTE*)(v32 + 13) = v25[13];
            if (v25[14] == 0) {
              v35 = (_BYTE*)(v13 + v23 + 14);
              goto LABEL_51;
            }
            *(_BYTE*)(v32 + 14) = v25[14];
            v33 = v13 + v23;
            if (v25[15] == 0) {
              v35 = (_BYTE*)(v33 + 15);
              goto LABEL_51;
            }
            *(_BYTE*)(v33 + 15) = v25[15];
            v34 = (unsigned __int8)v25[16];
            if (v34 == 0) {
              break;
            }
            v23 += 17;
            *(_BYTE*)(v33 + 16) = v34;
            if ((_DWORD)v23 == 255) {
              goto LABEL_34;
            }
          }
          v35 = (_BYTE*)(v13 + v23 + 16);
        LABEL_51:
          *v35 = 0;
        }
        else {
          *v15 = 0;
        }
      }
      else {
        v20 = *(_DWORD*)(v14 + 16LL * v4);
        v21 = bswap32(v20);
        if (v8) {
          v22 = v21;
        }
        else {
          v22 = v20;
        }
        nn_util_SNPrintf(v15, 256, "%08x", v22);
      }
      ++v6;
      v36 = *(unsigned __int16*)(*(_QWORD*)(a1 + 8) + 6LL);
      v4 = *a2 + v6;
      v8 = *(_DWORD*)(a1 + 48) == 0;
      v37 = bswap32(v36) >> 16;
      if (*(_DWORD*)(a1 + 48) == 0) {
        LOWORD(v36) = v37;
      }
      if (v6 >= v12) {
        break;
      }
      v13 += 256;
    } while (v4 < (__int16)v36);
  }
  *a2 = v4;
  return (unsigned int)v6;
}

__int64 (*nn_ui2d_579080(__int64 (*a1)(_QWORD, _QWORD, _QWORD), void* a2,
                         __int64 a3))(_QWORD, _QWORD, _QWORD)
{
  unsigned int SystemTickEv;
  __int64 (*result)(_QWORD, _QWORD, _QWORD);
  unsigned int v8;
  unsigned int v9;
  unsigned int v10;
  int* v11;

  SystemTickEv = nn_os_GetSystemTick_alt1();
  nn_util_ReferSymbol_alt1(
      (__int64)"SDK MW+Nintendo+NintendoWare_Ui2d-22_2_0-Release");
  result = LayoutEx_579130_alt1(a1, a2, a3);
  *GameData_2136200 = (__int64)&nn_ui2d_LayoutPaneFactory_vtable_ptr;
  v8 = 1812433253 * (SystemTickEv ^ (SystemTickEv >> 30)) + 1;
  v9 = 1812433253 * (v8 ^ (v8 >> 30)) + 2;
  v10 = 1812433253 * (v9 ^ (v9 >> 30)) + 3;
  v11 = GameData_2136208[0];
  *GameData_2136208[0] = v8;
  v11[1] = v9;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11) = v10;
  *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11 + 4) =
      1812433253 * (v10 ^ (v10 >> 30)) + 4;
  return result;
}

__int64 nn_ui2d_597360(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5,
                       __int64 a6, __int64 a7)
{
  int v9;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v14;
  char* v15;
  __int64 v20;

  if ((a5 & 1) != 0) {
    v9 = *(_DWORD*)(a4 + 148) & ~(*(int*)(a4 + 148) >> 31);
  }
  else {
    v9 = *(_DWORD*)(a4 + 144);
  }
  if (v9 < 1) {
    v15 = nullptr;
  }
  else {
    v10 = a1;
    v11 = a2;
    v12 = a3;
    v14 = GameRoutine_59f940(a4, v9);
    v15 = (char*)__builtin_alloca((v14 + 15) & 0xFFFFFFFFFFFFFFF0LL);
    memset(v15, 0, v14);
    GameRoutine_59f9c0((__int64)v15, v14, a4, v9);
    a1 = v10;
    a2 = v11;
    a3 = v12;
  }
  return (*(__int64 (**)(__int64, __int64, __int64, __int64, char*, __int64))(
      *(_QWORD*)a1 + 128LL))(a1, a2, a3, a6, v15, a7);
}

_BYTE* nn_ui2d_59ec90(__int64 a1, __int64* a2, __int64 a3)
{
  _BYTE* result;
  int v8;
  int v9;
  __int64 v10;
  struct {
    _QWORD v11[2];
    __int64 v12;
    __int64 v13;
    __int64 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
  } v11_;

  *(_QWORD*)(a1 + 16) = a3;
  result = *(_BYTE**)(a3 + 128);
  if (result == nullptr || *result == 0) {
    GameRoutine_6063a0((__int64)result, a2, a3 + 16,
                       *(_QWORD**)(*(_QWORD*)(a3 + 104) + 40LL),
                       *(_QWORD*)(*(_QWORD*)(a3 + 104) + 48LL) -
                           *(_QWORD*)(*(_QWORD*)(a3 + 104) + 16LL) +
                           **(_QWORD**)(a3 + 112) - 16LL,
                       *(unsigned int*)(a3 + 80));
    v11_.v16 = 0;
    v11_.v17 = 0;
    v11_.v14 = 0;
    v11_.v15 = 0;
    v11_.v12 = 0;
    v11_.v13 = 0;
    v11_.v11[0] = 0;
    v11_.v11[1] = 0;
    GameRoutine_5fc450((__int64)v11_.v11);
    v8 = *(_DWORD*)(a3 + 28);
    LOBYTE(v11_.v11[0]) = *(_BYTE*)(a3 + 92);
    v9 = *(_DWORD*)(a3 + 88);
    HIDWORD(v11_.v11[0]) = v8;
    LODWORD(v11_.v11[1]) = v9;
    v10 = *(_QWORD*)(a3 + 136);
    v11_.v16 = *(_QWORD*)(a3 + 128);
    HIDWORD(v11_.v14) = *(_DWORD*)(a3 + 48);
    WORD1(v11_.v12) = *(_WORD*)(a3 + 22);
    return (_BYTE*)GameRoutine_606510(v10, (__int64)a2,
                                      (unsigned __int8*)v11_.v11);
  }
  return result;
}

_QWORD* nn_ui2d_59f020(__int64 a1, float32x2_t* a2)
{

#pragma clang fp contract(off)
  _QWORD* v2;
  _QWORD* v4;
  _QWORD* result;
  unsigned __int8 explicit;
  __int64* v7;
  __int64* v8;

  if ((*(_BYTE*)(a1 + 88) & 1) == 0) {
    return nullptr;
  }
  v2 = (_QWORD*)(a1 + 32);
  v4 = (_QWORD*)a1;
  if (a1 + 32 == *(_QWORD*)(a1 + 40)) {
  LABEL_5:
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_2132060,
                                    memory_order_acquire);
    v7 = GameData_2132058;
    if ((explicit & 1) == 0 &&
        (unsigned int)__cxa_guard_acquire(GameData_2132060) != 0) {
      *v7 = (__int64)nn_ui2d_Pane_GetRuntimeTypeInfoStatic();
      __cxa_guard_release(GameData_2132060);
    }
    v8 = (__int64*)(*(__int64 (**)(_QWORD*))(*v4 + 16LL))(v4);
    if (v8 == v7) {
      goto LABEL_13;
    }
    do {
      v8 = (__int64*)*v8;
    } while (v8 != v7 && v8 != nullptr);
    if (v8 != nullptr) {
    LABEL_13:
      if (GameRoutine_59ee50((__int64)v4, a2)) {
        return v4;
      }
    }
    return nullptr;
  }
  while (1) {
    result = (_QWORD*)nn_ui2d_59f020(*v2 - 8LL, a2);
    if (result != nullptr) {
      return result;
    }
    v2 = (_QWORD*)*v2;
    if (v2 == (_QWORD*)v4[5]) {
      goto LABEL_5;
    }
  }
}

float nn_ui2d_59f160(float* a1, int a2, float a3)
{
  unsigned int v3;
  float* v4;
  int v5;
  unsigned int v6;
  int v8;
  int v10;
  float* v12;
  float v13;
  float* v14;
  float* v15;
  float v16;
  float v17;
  float v18;
  float v19;

  v3 = a2 - 1;
  if (a2 == 1 || a3 <= *a1) {
    return a1[1];
  }
  v4 = &a1[3 * (int)v3];
  if (a3 >= *v4) {
    return v4[1];
  }
  if ((unsigned int)(a2 - 3) > 0xFFFFFFFD) {
    v10 = 0;
    v6 = a2 - 1;
  }
  else {
    v5 = 0;
    v6 = a2 - 1;
    do {
      while (1) {
        v8 = (int)(v5 + v6) / 2;
        if (a3 <= a1[3 * v8]) {
          break;
        }
        v5 = (int)(v5 + v6) / 2;
        if (v8 == v6 - 1 || v8 == v6) {
          goto LABEL_16;
        }
      }
      v6 = (int)(v5 + v6) / 2;
    } while (v5 != v8 - 1 && v5 != v8);
  LABEL_16:
    v10 = v5;
  }
  v12 = &a1[3 * v6];
  v13 = *v12;
  if (!(vabds_f32(a3, *v12) < 0x1.0624de0000000p-10f)) {
    v15 = &a1[3 * v10];
    v16 = a3 - *v15;
    v17 = 0x1.0000000000000p+0f / (float)(v13 - *v15);
    v18 = (float)(v16 * v16) * v17;
    v19 = v16 * (float)(v17 * v18);
    return (float)((float)((float)(PSEUDO_UNFUSED(
                               v12[1] *
                               (float)((float)(PSEUDO_UNFUSED(
                                           (float)(v17 * v18) *
                                           0x1.8000000000000p+1f)) +
                                       (float)((float)(v17 * v19) *
                                               -0x1.0000000000000p+1f)))) +
                           (float)(v15[1] *
                                   (float)(0x1.0000000000000p+0f -
                                           (float)((float)(PSEUDO_UNFUSED(
                                                       (float)(v17 * v18) *
                                                       0x1.8000000000000p+1f)) -
                                                   (float)((float)(v17 * v19) *
                                                           0x1.0000000000000p+1f))))) +
                   (float)(v15[2] *
                           (float)(v16 +
                                   (float)(v19 +
                                           (float)(v18 *
                                                   -0x1.0000000000000p+1f))))) +
           (float)(v12[2] * (float)(v19 - v18));
  }
  else if (v6 < v3 && (v14 = &a1[3 * v6 + 3], v13 == *v14)) {
    return v14[1];
  }
  else {
    return v12[1];
  }
}

__int64 nn_ui2d_59fa50(__int64* a1, __int64 a2)
{
  __int64* v3;
  __int64 v4;
  _BYTE* v5;
  __int64 result;
  __int64 v7;
  __int64 v8;
  _BYTE* v9;
  __int64 v10;
  int v11;
  __int64 v12;
  _BYTE* v13;

  v3 = GameData_2134fd0[0];
  v4 = *(_QWORD*)(a2 + *GameData_2134fd0[0]);
  if (v4 == 0) {
    goto LABEL_6;
  }
  v5 = *(_BYTE**)(v4 + 104);
  if (*v5 != 0) {
    return 0;
  }
  v7 = a2;
  result = GameRoutine_604160((__int64)v5, a1, (char*)v4);
  a2 = v7;
  if ((_DWORD)result != 0) {
  LABEL_6:
    v8 = *(_QWORD*)(*(char**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v3) + a2);
    if (v8 != 0) {
      v9 = *(_BYTE**)(v8 + 104);
      if (*v9 != 0) {
        return 1;
      }
      v10 = a2;
      v11 = GameRoutine_604160((__int64)v9, a1, (char*)v8);
      a2 = v10;
      if (v11 == 0) {
        return 1;
      }
    }
    v12 = *(_QWORD*)(a2 + *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v3));
    if (v12 != 0) {
      v13 = *(_BYTE**)(v12 + 104);
      if (*v13 != 0) {
        return 2;
      }
    }
    else {
      v13 = (_BYTE*)(*(_QWORD*)0x68LL);
    }
    GameRoutine_604160((__int64)v13, a1, (char*)v12);
    return 2;
  }
  return result;
}

int* nn_ui2d_5a0280(int* result, int* a2, __int64 a3,
                    __int64 (*a4)(__int64*, char*, __int64, __int64),
                    __int64 a5, unsigned int a6)
{
  int* v11;
  int i;
  unsigned __int64 v13;
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
  unsigned int* v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int* v42;
  __int64 v43;
  int v44;
  int v47;
  __int64 v48;
  int v49;
  __int64 v52;
  _DWORD* v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  __int64 v61;
  __int64 (*v62)(__int64*, char*, __int64, __int64);
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
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int* v78;
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
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;

  v11 = result;
  for (i = *result; *v11 == 2; i = *v11) {
    result = nn_ui2d_5a0280((int*)((char*)v11 + (unsigned int)v11[1]), a2, a3,
                            a4, a5, a6);
    v11 = (int*)((char*)v11 + (unsigned int)v11[2]);
  }
  if (i == 1) {
    LODWORD(v13) = v11[2];
    if ((_DWORD)v13 != 0) {
      v61 = a5;
      v62 = a4;
      v14 = 59988;
      v15 = 27220;
      v16 = 59984;
      v17 = 27216;
      v18 = 0;
      v19 = 0;
      v20 = 59980;
      v21 = 27212;
      v22 = 59976;
      result = (_DWORD*)&GameRoutine_6a48;
      v23 = 59972;
      v24 = 27204;
      v25 = 59968;
      v26 = 27200;
      v27 = 59964;
      v28 = 27196;
      v29 = 59960;
      v30 = 27192;
      v31 = 59956;
      v32 = 27188;
      v33 = 59952;
      v34 = 27184;
      v35 = 4120;
      v36 = 10264;
      v37 = (unsigned int*)((char*)v11 + (unsigned int)v11[3] + 20);
      v98 = 59948;
      v97 = 27180;
      v96 = 59944;
      v95 = 27176;
      v94 = 59940;
      v93 = 27172;
      v92 = 59936;
      v91 = 27168;
      v90 = 59932;
      v89 = 27164;
      v88 = 59928;
      v87 = 27160;
      v85 = 92856;
      v86 = 25112;
      while (1) {
        v70 = v30;
        v71 = v29;
        v39 = *(v37 - 3);
        v74 = v26;
        v75 = v25;
        v76 = v24;
        v77 = v23;
        v78 = result;
        v66 = v34;
        v67 = v33;
        v68 = v32;
        v69 = v31;
        v72 = v28;
        v73 = v27;
        v79 = v21;
        v80 = v20;
        v81 = v17;
        v82 = v16;
        v83 = v14;
        v84 = v15;
        v40 = v35;
        v41 = v36;
        v99 = 0;
        v42 = (int*)v62(&v99, (char*)v11 + v39, 1935894132, v61);
        v64 = v19;
        v65 = v40;
        v63 = v41;
        *(_QWORD*)(a3 + ((__int64)*a2 << 7) + 8 * v19 + 24) = v42;
        *(_QWORD*)(a3 + ((__int64)*a2 << 7) + v40) = v99;
        *(_DWORD*)(a3 + v18 + ((__int64)*a2 << 6) + 8216) = *(v37 - 5);
        *(_BYTE*)(a3 + 16LL * *a2 + v41) = *((_BYTE*)v37 - 8);
        *(_DWORD*)(a3 + ((__int64)*a2 << 6) + v85) = *(v37 - 4);
        v43 = strstr((char*)v11 + v39, ".bfttf");
        if (v43 != 0 && strlen(v43) == 6) {
          break;
        }
        v48 = strstr((char*)v11 + v39, ".bfotf");
        if (v48 == 0 || strlen(v48) != 6) {
          v52 = strstr((char*)v11 + v39, ".otf");
          if (v52 != 0) {
            v47 = strlen(v52) == 4;
            goto LABEL_32;
          }
          goto LABEL_31;
        }
        v49 = *v42;
        if (*v42 == 256 || v49 == 1717793908 || v49 == 1330926671) {
          v47 = 1;
        }
        else {
          v47 = 3;
        }
      LABEL_32:
        *(_DWORD*)(a3 + v18 + ((__int64)*a2 << 6) + 14872) = v47;
        *(_DWORD*)(a3 + ((__int64)*a2 << 6) + v86) = *(v37 - 1);
        v53 = (int*)((char*)v11 + *v37);
        if ((int)*(v37 - 1) < 1) {
          v54 = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v87) = 0;
        }
        else {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v87) = *v53;
          v54 = v53[1];
        }
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v88) = v54;
        if ((int)*(v37 - 1) <= 1) {
          v55 = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v89) = 0;
        }
        else {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v89) = v53[2];
          v55 = v53[3];
        }
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v90) = v55;
        if ((int)*(v37 - 1) <= 2) {
          v56 = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v91) = 0;
        }
        else {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v91) = v53[4];
          v56 = v53[5];
        }
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v92) = v56;
        if ((int)*(v37 - 1) <= 3) {
          v57 = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v93) = 0;
        }
        else {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v93) = v53[6];
          v57 = v53[7];
        }
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v94) = v57;
        if ((int)*(v37 - 1) <= 4) {
          v58 = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v95) = 0;
        }
        else {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v95) = v53[8];
          v58 = v53[9];
        }
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v96) = v58;
        if ((int)*(v37 - 1) <= 5) {
          v59 = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v97) = 0;
        }
        else {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v97) = v53[10];
          v59 = v53[11];
        }
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v98) = v59;
        if ((int)*(v37 - 1) <= 6) {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v66) = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v67) = 0;
          if ((int)*(v37 - 1) <= 7) {
          LABEL_52:
            v60 = 0;
            *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v68) = 0;
            goto LABEL_55;
          }
        }
        else {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v66) = v53[12];
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v67) = v53[13];
          if ((int)*(v37 - 1) <= 7) {
            goto LABEL_52;
          }
        }
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v68) = v53[14];
        v60 = v53[15];
      LABEL_55:
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v69) = v60;
        if ((int)*(v37 - 1) <= 8) {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v70) = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v71) = 0;
          if ((int)*(v37 - 1) <= 9) {
          LABEL_57:
            *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v72) = 0;
            *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v73) = 0;
            if ((int)*(v37 - 1) <= 10) {
              goto LABEL_58;
            }
            goto LABEL_66;
          }
        }
        else {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v70) = v53[16];
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v71) = v53[17];
          if ((int)*(v37 - 1) <= 9) {
            goto LABEL_57;
          }
        }
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v72) = v53[18];
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v73) = v53[19];
        if ((int)*(v37 - 1) <= 10) {
        LABEL_58:
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v74) = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v75) = 0;
          if ((int)*(v37 - 1) <= 11) {
            goto LABEL_59;
          }
          goto LABEL_67;
        }
      LABEL_66:
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v74) = v53[20];
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v75) = v53[21];
        if ((int)*(v37 - 1) <= 11) {
        LABEL_59:
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v76) = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v77) = 0;
          if ((int)*(v37 - 1) <= 12) {
            goto LABEL_60;
          }
          goto LABEL_68;
        }
      LABEL_67:
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v76) = v53[22];
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v77) = v53[23];
        if ((int)*(v37 - 1) <= 12) {
        LABEL_60:
          *(int*)((char*)&v78[256 * (__int64)*a2] + a3) = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v22) = 0;
          if ((int)*(v37 - 1) <= 13) {
            goto LABEL_61;
          }
          goto LABEL_69;
        }
      LABEL_68:
        *(int*)((char*)&v78[256 * (__int64)*a2] + a3) = v53[24];
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v22) = v53[25];
        if ((int)*(v37 - 1) <= 13) {
        LABEL_61:
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v79) = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v80) = 0;
          if ((int)*(v37 - 1) <= 14) {
            goto LABEL_62;
          }
          goto LABEL_70;
        }
      LABEL_69:
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v79) = v53[26];
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v80) = v53[27];
        if ((int)*(v37 - 1) <= 14) {
        LABEL_62:
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v81) = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v82) = 0;
          if ((int)*(v37 - 1) <= 15) {
            goto LABEL_71;
          }
          goto LABEL_6;
        }
      LABEL_70:
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v81) = v53[28];
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v82) = v53[29];
        if ((int)*(v37 - 1) <= 15) {
        LABEL_71:
          v38 = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v84) = 0;
          goto LABEL_7;
        }
      LABEL_6:
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v84) = v53[30];
        v38 = v53[31];
      LABEL_7:
        v14 = v83 + 64;
        v15 = v84 + 64;
        v16 = v82 + 64;
        v17 = v81 + 64;
        v20 = v80 + 64;
        v21 = v79 + 64;
        v22 += 64;
        result = v78 + 16;
        v23 = v77 + 64;
        v24 = v76 + 64;
        v25 = v75 + 64;
        v26 = v74 + 64;
        v27 = v73 + 64;
        v28 = v72 + 64;
        v29 = v71 + 64;
        v30 = v70 + 64;
        v31 = v69 + 64;
        v32 = v68 + 64;
        v33 = v67 + 64;
        v34 = v66 + 64;
        v37 += 6;
        v36 = v63 + 1;
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v83) = v38;
        ++v19;
        v35 = v65 + 8;
        v13 = (unsigned int)v11[2];
        v18 += 4;
        v98 += 64;
        v97 += 64;
        v96 += 64;
        v95 += 64;
        v94 += 64;
        v93 += 64;
        v92 += 64;
        v91 += 64;
        v90 += 64;
        v89 += 64;
        v88 += 64;
        v87 += 64;
        v85 += 4;
        v86 += 4;
        if (v64 + 1 >= v13) {
          goto LABEL_72;
        }
      }
      v44 = *v42;
      if (*v42 != 256 && v44 != 1717793908 && v44 != 1330926671) {
        v47 = 2;
        goto LABEL_32;
      }
    LABEL_31:
      v47 = 0;
      goto LABEL_32;
    }
  LABEL_72:
    *(_DWORD*)(a3 + 4LL * (*a2)++ + 92700) = v13;
  }
  return result;
}

int* nn_ui2d_5a0c60(int* result, int* a2, __int64 a3,
                    __int64 (*a4)(__int64*, char*, __int64, __int64),
                    __int64 a5, unsigned int a6)
{

#pragma clang fp contract(off)
  int* v11;
  int i;
  unsigned __int64 v13;
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
  __int16* v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int* v42;
  __int64 v43;
  float v44;
  __int64 v45;
  __int64 v46;
  _WORD* v47;
  __int64 v48;
  int v49;
  int v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  _DWORD* v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  __int64 v65;
  __int64 (*v66)(__int64*, char*, __int64, __int64);
  unsigned int v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  int* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;

  v11 = result;
  for (i = *result; *v11 == 2; i = *v11) {
    result = nn_ui2d_5a0c60((int*)((char*)v11 + (unsigned int)v11[1]), a2, a3,
                            a4, a5, a6);
    v11 = (int*)((char*)v11 + (unsigned int)v11[2]);
  }
  if (i == 1) {
    LODWORD(v13) = v11[3];
    if ((_DWORD)v13 != 0) {
      v65 = a5;
      v66 = a4;
      v67 = a6;
      v14 = 59988;
      v15 = 27220;
      v16 = 59984;
      v17 = 27216;
      v18 = 59980;
      v19 = 0;
      v20 = 0;
      v21 = 27212;
      v22 = 59976;
      v23 = 27208;
      result = (_DWORD*)&GameRoutine_ea44;
      v24 = 27204;
      v25 = 59968;
      v26 = 27200;
      v27 = 59964;
      v28 = 27196;
      v29 = 59960;
      v30 = 27192;
      v31 = 59956;
      v32 = 27188;
      v33 = 59952;
      v34 = 27184;
      v35 = 23214;
      v36 = 10264;
      v37 = (__int16*)((char*)v11 + (unsigned int)v11[4] + 18);
      v106 = 59948;
      v105 = 27180;
      v104 = 59944;
      v103 = 27176;
      v102 = 59940;
      v101 = 27172;
      v100 = 59936;
      v99 = 27168;
      v98 = 59932;
      v97 = 27164;
      v96 = 59928;
      v95 = 16920;
      v94 = 17432;
      v93 = 17944;
      v92 = 18968;
      v91 = 21016;
      v90 = 4120;
      v89 = 25112;
      v88 = 27160;
      while (1) {
        v70 = v34;
        v71 = v33;
        v39 = v20;
        v40 = *(unsigned int*)(v37 - 3);
        v78 = v26;
        v79 = v25;
        v80 = v24;
        v81 = result;
        v107 = v19;
        v108 = 0;
        v72 = v32;
        v73 = v31;
        v74 = v30;
        v75 = v29;
        v76 = v28;
        v77 = v27;
        v82 = v22;
        v83 = v21;
        v84 = v18;
        v85 = v17;
        v86 = v16;
        v41 = v36;
        v87 = v15;
        v42 = (int*)v66(&v108, (char*)v11 + v40, 1935894132, v65);
        v68 = v39;
        v69 = v41;
        *(_QWORD*)(a3 + ((__int64)*a2 << 7) + 8 * v39 + 24) = v42;
        *(_QWORD*)(a3 + ((__int64)*a2 << 7) + v90) = v108;
        *(_DWORD*)(a3 + v107 + ((__int64)*a2 << 6) + 8216) =
            *(_DWORD*)(v37 - 9);
        *(_BYTE*)(a3 + 16LL * *a2 + v41) = *((_BYTE*)v37 - 2);
        *(_DWORD*)(a3 + ((__int64)*a2 << 6) + 4 * v35) = *(_DWORD*)(v37 - 5);
        v43 = *a2;
        *(_DWORD*)(a3 + v107 + (v43 << 6) + 10776) = *(_DWORD*)(v37 - 7);
        v44 = 0x1.0000000000000p+0f;
        if (v67 >= 0x9000001) {
          v44 = *(float*)(v37 + 1);
        }
        v45 = a3 + 16 * v43;
        v46 = a3 + (v43 << 6);
        *(float*)(a3 + v107 + (v43 << 6) + 12824) = v44;
        *(_BYTE*)(v45 + v95) = *((_BYTE*)v37 - 1) & 1;
        *(_BYTE*)(v45 + v94) = (*((_BYTE*)v37 - 1) & 2) != 0;
        v47 = (_WORD*)(a3 + v93 + 32 * v43);
        *v47 = v37[3];
        *(_BYTE*)(v45 + v92) = (*((_BYTE*)v37 - 1) & 4) != 0;
        v47[1024] = v37[4];
        *(_DWORD*)(v46 + v91) = *v37;
        v47[2560] = v37[5];
        v47[3072] = v37[6];
        *(_BYTE*)(v45 + v35 - 3734) = (*((_BYTE*)v37 - 1) & 8) != 0;
        v48 = strstr((char*)v11 + v40, ".bfttf");
        if (v48 != 0 && strlen(v48) == 6) {
          break;
        }
        v51 = strstr((char*)v11 + v40, ".bfotf");
        if (v51 == 0 || strlen(v51) != 6) {
          v54 = strstr((char*)v11 + v40, ".otf");
          if (v54 != 0) {
            v50 = strlen(v54) == 4;
            goto LABEL_25;
          }
        LABEL_24:
          v50 = 0;
          goto LABEL_25;
        }
        v52 = *v42;
        v53 = v72;
        if (*v42 == 256 || v52 == 1717793908 || v52 == 1330926671) {
          v50 = 1;
        }
        else {
          v50 = 3;
        }
        v56 = v86;
        v55 = v87;
      LABEL_28:
        *(_DWORD*)(a3 + v107 + ((__int64)*a2 << 6) + 14872) = v50;
        *(_DWORD*)(a3 + ((__int64)*a2 << 6) + v89) = *(_DWORD*)(v37 + 7);
        v57 = (int*)((char*)v11 + *(unsigned int*)(v37 + 9));
        if (*(int*)(v37 + 7) < 1) {
          v58 = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v88) = 0;
        }
        else {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v88) = *v57;
          v58 = v57[1];
        }
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v96) = v58;
        if (*(int*)(v37 + 7) <= 1) {
          v59 = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v97) = 0;
        }
        else {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v97) = v57[2];
          v59 = v57[3];
        }
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v98) = v59;
        if (*(int*)(v37 + 7) <= 2) {
          v60 = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v99) = 0;
        }
        else {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v99) = v57[4];
          v60 = v57[5];
        }
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v100) = v60;
        if (*(int*)(v37 + 7) <= 3) {
          v61 = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v101) = 0;
        }
        else {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v101) = v57[6];
          v61 = v57[7];
        }
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v102) = v61;
        if (*(int*)(v37 + 7) <= 4) {
          v62 = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v103) = 0;
        }
        else {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v103) = v57[8];
          v62 = v57[9];
        }
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v104) = v62;
        if (*(int*)(v37 + 7) <= 5) {
          v63 = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v105) = 0;
        }
        else {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v105) = v57[10];
          v63 = v57[11];
        }
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v106) = v63;
        if (*(int*)(v37 + 7) <= 6) {
          v64 = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v70) = 0;
        }
        else {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v70) = v57[12];
          v64 = v57[13];
        }
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v71) = v64;
        if (*(int*)(v37 + 7) <= 7) {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v53) = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v73) = 0;
          if (*(int*)(v37 + 7) <= 8) {
          LABEL_51:
            *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v74) = 0;
            *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v75) = 0;
            if (*(int*)(v37 + 7) <= 9) {
              goto LABEL_52;
            }
            goto LABEL_61;
          }
        }
        else {
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v53) = v57[14];
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v73) = v57[15];
          if (*(int*)(v37 + 7) <= 8) {
            goto LABEL_51;
          }
        }
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v74) = v57[16];
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v75) = v57[17];
        if (*(int*)(v37 + 7) <= 9) {
        LABEL_52:
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v76) = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v77) = 0;
          if (*(int*)(v37 + 7) <= 10) {
            goto LABEL_53;
          }
          goto LABEL_62;
        }
      LABEL_61:
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v76) = v57[18];
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v77) = v57[19];
        if (*(int*)(v37 + 7) <= 10) {
        LABEL_53:
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v78) = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v79) = 0;
          if (*(int*)(v37 + 7) <= 11) {
            goto LABEL_54;
          }
          goto LABEL_63;
        }
      LABEL_62:
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v78) = v57[20];
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v79) = v57[21];
        if (*(int*)(v37 + 7) <= 11) {
        LABEL_54:
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v80) = 0;
          *(int*)((char*)&v81[256 * (__int64)*a2] + a3) = 0;
          if (*(int*)(v37 + 7) <= 12) {
            goto LABEL_55;
          }
          goto LABEL_64;
        }
      LABEL_63:
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v80) = v57[22];
        *(int*)((char*)&v81[256 * (__int64)*a2] + a3) = v57[23];
        if (*(int*)(v37 + 7) <= 12) {
        LABEL_55:
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v23) = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v82) = 0;
          if (*(int*)(v37 + 7) <= 13) {
            goto LABEL_56;
          }
          goto LABEL_65;
        }
      LABEL_64:
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v23) = v57[24];
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v82) = v57[25];
        if (*(int*)(v37 + 7) <= 13) {
        LABEL_56:
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v83) = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v84) = 0;
          if (*(int*)(v37 + 7) <= 14) {
            goto LABEL_57;
          }
          goto LABEL_66;
        }
      LABEL_65:
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v83) = v57[26];
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v84) = v57[27];
        if (*(int*)(v37 + 7) <= 14) {
        LABEL_57:
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v85) = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v56) = 0;
          if (*(int*)(v37 + 7) <= 15) {
            goto LABEL_67;
          }
          goto LABEL_6;
        }
      LABEL_66:
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v85) = v57[28];
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v56) = v57[29];
        if (*(int*)(v37 + 7) <= 15) {
        LABEL_67:
          v38 = 0;
          *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v55) = 0;
          goto LABEL_7;
        }
      LABEL_6:
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v55) = v57[30];
        v38 = v57[31];
      LABEL_7:
        v20 = v39 + 1;
        v15 = v55 + 64;
        v16 = v56 + 64;
        v17 = v85 + 64;
        v90 += 8;
        v18 = v84 + 64;
        v21 = v83 + 64;
        v22 = v82 + 64;
        v23 += 64;
        result = v81 + 16;
        v24 = v80 + 64;
        v25 = v79 + 64;
        v26 = v78 + 64;
        v27 = v77 + 64;
        v28 = v76 + 64;
        v29 = v75 + 64;
        v30 = v74 + 64;
        v31 = v73 + 64;
        v32 = v53 + 64;
        v33 = v71 + 64;
        v34 = v70 + 64;
        v37 += 20;
        *(_DWORD*)(a3 + ((__int64)*a2 << 10) + v14) = v38;
        v89 += 4;
        v14 += 64;
        v19 = v107 + 4;
        ++v35;
        v13 = (unsigned int)v11[3];
        v106 += 64;
        v88 += 64;
        v104 += 64;
        v105 += 64;
        v102 += 64;
        v103 += 64;
        v100 += 64;
        v101 += 64;
        v98 += 64;
        v99 += 64;
        v96 += 64;
        v97 += 64;
        ++v94;
        ++v95;
        ++v92;
        v93 += 2;
        v91 += 4;
        v36 = v69 + 1;
        if (v68 + 1 >= v13) {
          goto LABEL_68;
        }
      }
      v49 = *v42;
      if (*v42 != 256 && v49 != 1717793908 && v49 != 1330926671) {
        v50 = 2;
      LABEL_25:
        v56 = v86;
        v55 = v87;
        v53 = v72;
        goto LABEL_28;
      }
      goto LABEL_24;
    }
  LABEL_68:
    *(_DWORD*)(a3 + 4LL * (*a2)++ + 92700) = v13;
  }
  return result;
}

float nn_ui2d_5a3500(__int64 a1, float a2)
{
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;

  v2 = *(float*)(a1 + 12);
  v3 = *(float*)(a1 + 4);
  v12 = v2 * 0x1.8p+1f;
  v4 = v3 * -0x1.8p+1f + v12;
  v4 = v4 + 0x1.0p+0f;
  v5 = v2 * -0x1.8p+2f + 0.0f;
  v5 = v3 * 0x1.8p+1f + v5;
  v5 = v5 / v4;
  v6 = v12 / v4;
  v13 = (0.0f - a2) / v4;
  v7 = v5 / -0x1.8p+1f;
  v14 = v6 * -0x1.8p+1f;
  v8 = (v5 * v5 + v14) / 0x1.2p+3f;
  v14 = v5 * (v5 + v5);
  v15 = v6 * (v5 * 0x1.2p+3f);
  // Keeps the negation out of the constant so a NaN keeps its sign flip.
  __asm__("" : "+w"(v15));
  v15 = -v15;
  v9 = v14 * v5 + v15;
  v9 = v13 * 0x1.bp+4f + v9;
  v9 = v9 / 0x1.bp+5f;
  v10 = v8 * (v8 * v8);
  v11 = v9 * v9;
  v11 = v11 - v10;
  if (v11 > 0.0f) {
    v12 = __builtin_copysignf(0x1.0p+0f, -v9);
    v13 = powf(fabsf(v9) + sqrtf(v11), 0x1.555556p-2f);
    return v12 * (v13 + v8 / v13) + v7;
  }
  v12 = acosf(v9 * (0x1.0p+0f / sqrtf(v10)));
  v13 = sqrtf(v8) * -0x1.0p+1f;
  v14 = v13 * cosf(v12 / 0x1.8p+1f) + v7;
  if (v14 >= 0.0f && v14 <= 0x1.0p+0f) {
    return v14;
  }
  v14 = v13 * cosf((v12 + 0x1.921fb6p+2f) / 0x1.8p+1f) + v7;
  if (v14 >= 0.0f && v14 <= 0x1.0p+0f) {
    return v14;
  }
  v15 = v13 * cosf((v12 + 0x1.921fb6p+3f) / 0x1.8p+1f) + v7;
  if (!(v15 >= 0.0f) || !(v15 <= 0x1.0p+0f)) {
    return a2;
  }
  return v15;
}

float nn_ui2d_5a3700(unsigned __int16* a1, float a2)
{
  unsigned __int64 v2;
  float* v4;
  float v5;
  float v6;
  float* v7;
  float* v8;
  __int64 v9;
  float* v10;
  float v11;
  char v13;
  float* v14;
  float* v15;
  float v16;
  float v17;

  v17 = COERCE_AS(__typeof__(v17), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = *a1;
  if (v2 <= 1) {
    return *((float*)a1 + 2);
  }
  v4 = *((float**)a1 + 1);
  v5 = 0x0.0p+0f;
  v6 = *v4;
  if (!(a2 <= *v4)) {
    v7 = &v4[8 * v2];
    v8 = v7 - 8;
    if (!(a2 >= *(v7 - 8))) {
      v9 = (unsigned int)(v2 - 1);
      v10 = &v4[8 * (unsigned int)(v2 - 2)];
      do {
        v11 = v4[8];
        if (a2 >= v6 && a2 < v11) {
          v16 = (float)(a2 - v6) / (float)(v11 - v6);
          if (v16 < 0x0.0p+0f) {
            v16 = 0x0.0p+0f;
          }
          if (v16 > 0x1.0000000000000p+0f) {
            v16 = 0x1.0000000000000p+0f;
          }
          v17 = nn_ui2d_5a3500((__int64)v4, v16);
          v5 = (float)(PSEUDO_UNFUSED(v17 * (float)(v17 * v17))) +
               (float)((float)(PSEUDO_UNFUSED(
                           v4[2] *
                           (float)((float)(0x1.0000000000000p+0f - v17) *
                                   (float)(v17 *
                                           (float)(v17 *
                                                   0x1.8000000000000p+1f))))) +
                       (float)(v4[4] *
                               (float)((float)(0x1.0000000000000p+0f - v17) *
                                       (float)((float)(v17 *
                                                       0x1.8000000000000p+1f) *
                                               (float)(0x1.0000000000000p+0f -
                                                       v17)))));
          return v4[5] + (float)((float)(v4[6] - v4[5]) * v5);
        }
        v6 = v4[8];
        v4 += 8;
        --v9;
      } while (v9 != 0);
      v5 = 0x0.0p+0f;
      v4 = v10;
      if (v10 != nullptr) {
        return v4[5] + (float)((float)(v4[6] - v4[5]) * v5);
      }
      return 0x0.0p+0f;
    }
    v13 = *((_BYTE*)v7 - 4);
    v14 = v7 - 16;
    v5 = 0x1.0000000000000p+0f;
    if ((v13 & 1) != 0) {
      v15 = v8;
    }
    else {
      v15 = v14;
    }
    v4 = v15;
    if (v15 == nullptr) {
      return 0x0.0p+0f;
    }
  }
  return v4[5] + (float)((float)(v4[6] - v4[5]) * v5);
}

#pragma GCC visibility pop
