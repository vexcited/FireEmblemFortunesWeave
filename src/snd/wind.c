#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Manager_1181f0(PSEUDO_X8, __int64 result, int);
__attribute__((swiftcall)) void snd_Wind_getListenerPosition(PSEUDO_X8);
__int64 Crc32List_1163b0();
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_190240(__int64);
__int64 GameRoutine_a2af20(__int64, __int64, const char*, ...);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 rand(void);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_fnd_WeakHandle_reset(__int64);
__attribute__((swiftcall)) void snd_playAt_ff5f0(PSEUDO_X8, __int64, __int64,
                                                 __int64, __int64, unsigned int,
                                                 unsigned int, int, float,
                                                 float);
__int64 strcpy(_QWORD, _QWORD);
__int64 strlen(_QWORD);
bool snd_hasSound(__int64);
double snd_Fade_getTime(__int64);
extern __int64* snd_g_memory_ptr[2];
extern __int64* snd_s_target_ptr;
extern __int64 snd_g_proxy_ptr[2];
float snd_fnd_calcAngle_fecf0(float, float, float, float);
float snd_fnd_calcDistanceTo(float*, float*);
float snd_fnd_calcDistance_fec10(float, float, float, float);
float snd_fnd_calcDistance_fec30(float, float, float, float, float, float);
float snd_fnd_moveByAngle(float*, float*, float, float);
void __attribute__((noreturn)) snd_a36650();
void snd_Fade_Fade_10c830(__int64, float);
__int64 Wind_e59d0(__int64 a1, __int64 a2, const char* a3, const char* a4,
                   const char* a5, __int64 a6, __int64 a7);
void Wind_e60d0(__int64 a1, __int64* a2);
__int64 GameRoutine_190200(__int64, char*);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
bool snd_hasSound_alt1(unsigned __int8*) __asm__("snd_hasSound");
void __attribute__((noreturn)) GameRoutine_e66a0();
__int64 Wind_e5340(__int64 result, char* a2, char* a3, char* a4, __int64 a5,
                   __int64 a6);

__int64 Wind_e5340(__int64 result, char* a2, char* a3, char* a4, __int64 a5,
                   __int64 a6)
{
  __int64 v6;
  _QWORD* v12;
  unsigned __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  char* v25;
  char* v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  unsigned __int8 v30[256];

  if (*(_QWORD*)(result + 16) == *(_QWORD*)(result + 8)) {
    return result;
  }
  v6 = result;
  GameRoutine_190200(a5 + 80, a2);
  if (*a3 == 0) {
    goto LABEL_7;
  }
  if (*a4 != 0) {
    GameRoutine_a2af20((__int64)v30, 256, "%s%s%s", a2, a3, a4);
    if (snd_hasSound_alt1(v30)) {
      goto LABEL_10;
    }
    if (*a3 == 0) {
    LABEL_7:
      if (*a4 == 0 || (GameRoutine_a2af20((__int64)v30, 256, "%s%s", a2, a4),
                       !snd_hasSound_alt1(v30))) {
        GameRoutine_a2af20((__int64)v30, 256, "%s", a2);
      }
      goto LABEL_10;
    }
  }
  GameRoutine_a2af20((__int64)v30, 256, "%s%s", a2, a3);
  if (!snd_hasSound_alt1(v30)) {
    goto LABEL_7;
  }
LABEL_10:
  (*(void (**)(__int64, unsigned __int8*))(*(_QWORD*)a5 + 16LL))(a5, v30);
  GameRoutine_112180(a5 + 104, a6);
  *(_DWORD*)(a5 + 120) = 0;
  *(_BYTE*)(a5 + 124) = 0;
  *(_DWORD*)(a5 + 128) = 1;
  nn_os_LockMutex(v6 + 320);
  v12 = *(_QWORD**)(*(_QWORD*)(v6 + 16) - 8LL);
  v14 = (_QWORD*)v12[5];
  v13 = v12[6];
  if ((unsigned __int64)v14 >= v13) {
    v16 = v12[4];
    v17 = (__int64)v14 - v16;
    v18 = (v17 >> 3) + 1;
    if (v18 >> 61 != 0) {
      GameRoutine_e66a0();
    }
    v19 = v13 - v16;
    v20 = snd_g_memory_ptr[0];
    v21 = v19 >> 2;
    if (v19 >> 2 <= v18) {
      v21 = (v17 >> 3) + 1;
    }
    if ((unsigned __int64)v19 >= 0x7FFFFFFFFFFFFFF8LL) {
      v22 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v22 = v21;
    }
    v23 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 8 * v22,
                                                 32);
    v24 = (_QWORD*)(v23 + v17);
    *v24 = a5;
    v15 = v23 + v17 + 8;
    v25 = (char*)v12[4];
    v26 = (char*)v12[5];
    v27 = (_QWORD*)((char*)v24 + ((char*)v25 - (char*)v26));
    if (v26 != v25) {
      v28 = v27;
      do {
        v29 = *(_QWORD*)v25;
        v25 += 8;
        *v28++ = v29;
      } while (v25 != v26);
      v25 = (char*)v12[4];
    }
    v12[4] = v27;
    v12[5] = v15;
    v12[6] = v23 + 8 * v22;
    if (v25 != nullptr) {
      (*(void (**)(__int64))(*(_QWORD*)*v20 + 24LL))(*v20);
    }
  }
  else {
    *v14 = a5;
    v15 = (__int64)(v14 + 1);
  }
  v12[5] = v15;
  return nn_os_UnlockMutex(v6 + 320);
}

__int64 Wind_e59d0(__int64 a1, __int64 a2, const char* a3, const char* a4,
                   const char* a5, __int64 a6, __int64 a7)
{

#pragma clang fp contract(off)
  const char* v13;
  const char* v14;
  int v15;
  const char* v16;
  __int64 result;
  char v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  bool v22;
  _BOOL4 v23;
  int v24;
  char v25;
  __int64 v26;
  __int64 v27;
  char* v28;
  bool v29;
  char v30;
  __int64 v31;
  __int64 v32;
  char* v33;
  bool v34;
  char v35;
  __int64 v36;
  __int64 v37;
  char* v38;
  bool v39;
  char v40;
  __int64 v41;
  __int64 v42;
  char* v43;
  bool v44;
  double v45;
  __int64 v46;
  struct {
    __int64 v47;
    __int64 v48;
    char* v49;
  } v47_;
  _QWORD v50[32];

  v13 = (const char*)GameRoutine_190240(a2 + 80);
  v14 = a5;
  v15 = *(unsigned __int8*)a5;
  v16 = v13;
  memset(v50, 0, sizeof(v50));
  if (v15 != 0) {
    GameRoutine_a2af20((__int64)v50, 256, "%s%s", v13, v14);
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)a2 + 32LL))((void*)(&v47_.v47), a2);
    result = strlen(v50);
    v18 = v47_.v47;
    v19 = (unsigned __int8)v47_.v47 >> 1;
    if ((v47_.v47 & 1) != 0) {
      v19 = v47_.v48;
    }
    if (result == v19) {
      v20 = result;
      if (result == -1) {
        goto LABEL_78;
      }
      if ((v47_.v47 & 1) != 0) {
        v21 = v47_.v49;
      }
      else {
        v21 = (char*)&v47_.v47 + 1;
      }
      result = memcmp(v21, v50, v20);
      v22 = (_DWORD)result == 0;
      if ((v18 & 1) == 0) {
      LABEL_15:
        if (v22) {
          return result;
        }
        v23 = snd_hasSound((__int64)v50);
        v24 = *(unsigned __int8*)a3;
        if (*a3 == 0) {
          goto LABEL_27;
        }
        goto LABEL_17;
      }
    }
    else {
      v22 = false;
      if ((v47_.v47 & 1) == 0) {
        goto LABEL_15;
      }
    }
    result =
        (*(__int64 (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                        24LL))(*snd_g_memory_ptr[0], v47_.v49);
    goto LABEL_15;
  }
  v23 = false;
  v24 = *(unsigned __int8*)a3;
  if (*a3 == 0) {
    goto LABEL_27;
  }
LABEL_17:
  if (*a4 != 0) {
    GameRoutine_a2af20((__int64)v50, 256, "%s%s%s", v16, a3, a4);
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)a2 + 32LL))((void*)(&v47_.v47), a2);
    result = strlen(v50);
    v25 = v47_.v47;
    v26 = (unsigned __int8)v47_.v47 >> 1;
    if ((v47_.v47 & 1) != 0) {
      v26 = v47_.v48;
    }
    if (result == v26) {
      v27 = result;
      if (result == -1) {
        goto LABEL_78;
      }
      if ((v47_.v47 & 1) != 0) {
        v28 = v47_.v49;
      }
      else {
        v28 = (char*)&v47_.v47 + 1;
      }
      result = memcmp(v28, v50, v27);
      v29 = (_DWORD)result == 0;
      if ((v25 & 1) == 0) {
      LABEL_40:
        if (v29) {
          return result;
        }
        if (((v23 | snd_hasSound((__int64)v50)) & 1) != 0) {
          goto LABEL_75;
        }
        if (*a3 == 0) {
          goto LABEL_48;
        }
      LABEL_29:
        GameRoutine_a2af20((__int64)v50, 256, "%s%s", v16, a3);
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
            *(_QWORD*)a2 + 32LL))((void*)(&v47_.v47), a2);
        result = strlen(v50);
        v30 = v47_.v47;
        v31 = (unsigned __int8)v47_.v47 >> 1;
        if ((v47_.v47 & 1) != 0) {
          v31 = v47_.v48;
        }
        if (result == v31) {
          v32 = result;
          if (result == -1) {
            goto LABEL_78;
          }
          if ((v47_.v47 & 1) != 0) {
            v33 = v47_.v49;
          }
          else {
            v33 = (char*)&v47_.v47 + 1;
          }
          result = memcmp(v33, v50, v32);
          v34 = (_DWORD)result == 0;
          if ((v30 & 1) == 0) {
            goto LABEL_46;
          }
        }
        else {
          v34 = false;
          if ((v47_.v47 & 1) == 0) {
            goto LABEL_46;
          }
        }
        result = (*(__int64 (**)(_QWORD, char*))(
            **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0],
                                                     v47_.v49);
      LABEL_46:
        if (v34) {
          return result;
        }
        if (snd_hasSound((__int64)v50)) {
          goto LABEL_75;
        }
        goto LABEL_48;
      }
    }
    else {
      v29 = false;
      if ((v47_.v47 & 1) == 0) {
        goto LABEL_40;
      }
    }
    result =
        (*(__int64 (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                        24LL))(*snd_g_memory_ptr[0], v47_.v49);
    goto LABEL_40;
  }
LABEL_27:
  if (v23) {
    goto LABEL_75;
  }
  if (v24 != 0) {
    goto LABEL_29;
  }
LABEL_48:
  if (*a4 == 0) {
    goto LABEL_62;
  }
  GameRoutine_a2af20((__int64)v50, 256, "%s%s", v16, a4);
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)a2 + 32LL))((void*)(&v47_.v47), a2);
  result = strlen(v50);
  v35 = v47_.v47;
  v36 = (unsigned __int8)v47_.v47 >> 1;
  if ((v47_.v47 & 1) != 0) {
    v36 = v47_.v48;
  }
  if (result == v36) {
    v37 = result;
    if (result == -1) {
      goto LABEL_78;
    }
    if ((v47_.v47 & 1) != 0) {
      v38 = v47_.v49;
    }
    else {
      v38 = (char*)&v47_.v47 + 1;
    }
    result = memcmp(v38, v50, v37);
    v39 = (_DWORD)result == 0;
    if ((v35 & 1) == 0) {
      goto LABEL_60;
    }
  }
  else {
    v39 = false;
    if ((v47_.v47 & 1) == 0) {
      goto LABEL_60;
    }
  }
  result = (*(__int64 (**)(_QWORD, char*))(
      **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], v47_.v49);
LABEL_60:
  if (v39) {
    return result;
  }
  if (snd_hasSound((__int64)v50)) {
    goto LABEL_75;
  }
LABEL_62:
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)a2 + 32LL))((void*)(&v47_.v47), a2);
  result = strlen(v16);
  v40 = v47_.v47;
  v41 = (unsigned __int8)v47_.v47 >> 1;
  if ((v47_.v47 & 1) != 0) {
    v41 = v47_.v48;
  }
  if (result == v41) {
    v42 = result;
    if (result != -1) {
      if ((v47_.v47 & 1) != 0) {
        v43 = v47_.v49;
      }
      else {
        v43 = (char*)&v47_.v47 + 1;
      }
      result = memcmp(v43, v16, v42);
      v44 = (_DWORD)result == 0;
      goto LABEL_71;
    }
  LABEL_78:
    snd_a36650();
  }
  v44 = false;
LABEL_71:
  if ((v40 & 1) != 0) {
    result =
        (*(__int64 (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                        24LL))(*snd_g_memory_ptr[0], v47_.v49);
  }
  if (!v44) {
    strcpy(v50, v16);
  LABEL_75:
    (*(void (**)(__int64, _QWORD*))(*(_QWORD*)a2 + 16LL))(a2, v50);
    *(_BYTE*)(a2 + 124) = 1;
    v45 = snd_Fade_getTime(a6);
    *(_DWORD*)(a2 + 172) = LODWORD(v45);
    result = snd_fnd_WeakHandle_isValid((__int64*)(a2 + 40));
    if ((result & 1) != 0) {
      v46 = snd_fnd_WeakHandle_get(a2 + 40);
      return (*(__int64 (**)(__int64, __int64, _QWORD, double))(
          *(_QWORD*)(v46 - 5592) + 248LL))(v46 - 5592, a7, 0, 0x0.0p+0);
    }
  }
  return result;
}

void Wind_e60d0(__int64 a1, __int64* a2)
{
  _QWORD handle[2];
  __int64 v4;
  __int64 v5;
  __int64 v6;
  long double v7;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float* v19;
  float v20;
  float v22;
  float v23;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  float v32;
  float v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  _DWORD* v37;
  float v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  const char* v46;
  _QWORD v47[25];
  _BYTE v48[16];
  struct {
    float v49[3];
    float v50;
  } v49_;
  _BYTE v51[24];
  __int64 v52[2];

  v4 = Crc32List_1163b0();
  Manager_1181f0((void*)((__int64)v52), v4, -1);
  if ((snd_fnd_WeakHandle_isValid(v52) & 1) == 0) {
    return;
  }
  snd_Wind_getListenerPosition((void*)((__int64)v51));
  v5 = snd_fnd_WeakHandle_get((__int64)v52);
  v6 = v5 != 0 ? v5 - 5592 : 0LL;
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)(v6 + 40) + 1048LL))((void*)(v49_.v49), v6 + 40);
  *(float*)&v7 = v49_.v50;
  if (v49_.v50 <= -0x1.86a0000000000p+16f || *((_DWORD*)a2 + 8) == 13) {
    return;
  }
  v9 = *((_DWORD*)a2 + 32);
  if (v9 != 2) {
    if (v9 == 1) {
      a2[16] = 2;
      v10 = *(_QWORD*)a2[7];
      v11 = *a2;
      *((_DWORD*)a2 + 36) = *(_DWORD*)(v10 + 16);
      *((_DWORD*)a2 + 37) = *(_DWORD*)(v10 + 20);
      *((_DWORD*)a2 + 38) = *(_DWORD*)(v10 + 24);
      v12 = (*(__int64 (**)(__int64*))(v11 + 24))(a2);
      snd_Fade_Fade_10c830((__int64)v47, 0x0.0p+0f);
      snd_playAt_ff5f0((void*)(handle), (__int64)"wind", v12,
                       (__int64)(a2 + 17), (__int64)v47, 0, 0x10001u, 0,
                       0x0.0p+0f, 0x1.0000000000000p+0f);
      GameRoutine_112180((__int64)(a2 + 5), (__int64)v48);
      snd_Fade_Destroy_Fade(v47);
      v13 = snd_fnd_WeakHandle_get((__int64)(a2 + 5));
      if (v13 != 0) {
        v14 = v13;
        (*(void (**)(__int64, __int64))(*(_QWORD*)(v13 - 5592) + 632LL))(
            v13 - 5592, 4);
        *((float*)a2 + 30) = (*(float (**)(__int64))(*(_QWORD*)(v14 - 5592) +
                                                     112LL))(v14 - 5592);
        if (*(float*)(v10 + 20) <= -0x1.9000000000000p+6f &&
            *(float*)(v10 + 44) >= 0x1.9000000000000p+6f) {
          (*(void (**)(__int64, float, float, float))(
              *(_QWORD*)(v14 - 5552) + 1024LL))(v14 - 5552, *((float*)a2 + 36),
                                                v49_.v50, *((float*)a2 + 38));
        }
        else {
          (*(void (**)(__int64, __int64*))(*(_QWORD*)(v14 - 5552) + 1040LL))(
              v14 - 5552, a2 + 17);
        }
      }
    }
    return;
  }
  v15 = *((float*)a2 + 40);
  v16 = (*(float (**)(_QWORD, long double))(*(_QWORD*)*snd_s_target_ptr +
                                            80LL))(*snd_s_target_ptr, v7);
  v17 = *(float*)(a1 + 312);
  v18 = *((float*)a2 + 36);
  v19 = *(float**)(a2[7] + 8LL * *((int*)a2 + 33));
  v20 = v19[11];
  if (v19[5] <= -0x1.9000000000000p+6f && v20 >= 0x1.9000000000000p+6f) {
    v33 = snd_fnd_calcDistance_fec10(v18, *((float*)a2 + 38), v19[10], v19[12]);
    if (v33 == 0x0.0p+0f) {
      goto LABEL_31;
    }
  LABEL_21:
    v22 = (float)(v15 * v16) * v17;
    if (v33 <= v22) {
      *((float*)a2 + 36) = v19[10];
      *((float*)a2 + 37) = v19[11];
      *((float*)a2 + 38) = v19[12];
    }
    else {
      v23 = v19[11];
      if (v19[5] > -0x1.9000000000000p+6f || v23 < 0x1.9000000000000p+6f) {
        v25 = *((float*)a2 + 36);
        v26 = *((float*)a2 + 37);
        v27 = v23 - v26;
        v28 = *((float*)a2 + 38);
        v29 = v19[10] - v25;
        v30 = v19[12] - v28;
        v31 = (float)((float)(PSEUDO_UNFUSED(v27 * v27)) + (float)(v29 * v29)) +
              (float)(v30 * v30);
        if (v31 != 0x0.0p+0f) {
          v32 = sqrtf(v31);
          v29 = v29 / v32;
          v27 = v27 / v32;
          v30 = v30 / v32;
        }
        *((float*)a2 + 36) = v25 + (float)(PSEUDO_UNFUSED(v22 * v29));
        *((float*)a2 + 37) = v26 + (float)(PSEUDO_UNFUSED(v22 * v27));
        *((float*)a2 + 38) = v28 + (float)(PSEUDO_UNFUSED(v22 * v30));
      }
      else {
        v38 = snd_fnd_calcAngle_fecf0(*((float*)a2 + 36), *((float*)a2 + 38),
                                      v19[10], v19[12]);
        snd_fnd_moveByAngle((float*)a2 + 36, (float*)a2 + 38, v22, v38);
        *((float*)a2 + 37) = v49_.v50;
      }
    }
    goto LABEL_36;
  }
  v33 = snd_fnd_calcDistance_fec30(v18, *((float*)a2 + 37), *((float*)a2 + 38),
                                   v19[10], v20, v19[12]);
  if (v33 != 0x0.0p+0f) {
    goto LABEL_21;
  }
LABEL_31:
  v34 = a2[7];
  v35 = *((int*)a2 + 33) + 1LL;
  v36 = a2[8] - v34;
  *((_DWORD*)a2 + 33) = v35;
  if (v35 >= v36 >> 3) {
    LODWORD(v35) = 0;
    *((_DWORD*)a2 + 33) = 0;
  }
  v37 = *(_DWORD**)(v34 + 8LL * (int)v35);
  *((_DWORD*)a2 + 36) = v37[4];
  *((_DWORD*)a2 + 37) = v37[5];
  *((_DWORD*)a2 + 38) = v37[6];
  *((float*)a2 + 40) =
      *((float*)a2 + 41) +
      (float)(PSEUDO_UNFUSED((float)(*((float*)a2 + 42) - *((float*)a2 + 41)) *
                             vcvts_n_f32_s32(rand(), 0x1Fu)));
LABEL_36:
  v39 = snd_fnd_WeakHandle_get((__int64)(a2 + 5));
  v40 = v39;
  if (v39 != 0) {
    if (v19[5] <= -0x1.9000000000000p+6f && v19[11] >= 0x1.9000000000000p+6f) {
      (*(void (**)(__int64, float, float, float))(
          *(_QWORD*)(v39 - 5552) + 1024LL))(v39 - 5552, *((float*)a2 + 36),
                                            v49_.v50, *((float*)a2 + 38));
    }
    else {
      (*(void (**)(__int64, __int64*))(*(_QWORD*)(v39 - 5552) + 1040LL))(
          v39 - 5552, a2 + 17);
    }
  }
  if (snd_fnd_calcDistanceTo(v49_.v49, (float*)a2 + 34) >= *((float*)a2 + 30)) {
    if ((*((_BYTE*)a2 + 124) & 1) == 0) {
      *((_BYTE*)a2 + 124) = 1;
      if (v40 != 0) {
        v45 = *(_QWORD*)snd_g_proxy_ptr[0];
        v46 = (const char*)GameRoutine_190240(v40 + 88);
        (*(void (**)(__int64, const char*, ...))(*(_QWORD*)v45 + 384LL))(
            v45, "#Sound warning : Wind Voice AutoStop Out of range : %s\n",
            v46);
        snd_Fade_Fade_10c830((__int64)v47, 0x0.0p+0f);
        (*(void (**)(__int64, _QWORD*, __int64, double))(
            *(_QWORD*)(v40 - 5592) + 248LL))(v40 - 5592, v47, 1, 0x0.0p+0);
        snd_Fade_Destroy_Fade(v47);
        snd_fnd_WeakHandle_reset((__int64)(a2 + 5));
      }
    }
  }
  else if (*((_BYTE*)a2 + 124) != 0) {
    v41 = *a2;
    *((_BYTE*)a2 + 124) = 0;
    v42 = (*(__int64 (**)(__int64*))(v41 + 24))(a2);
    snd_Fade_Fade_10c830((__int64)v47, *((float*)a2 + 43));
    snd_playAt_ff5f0((void*)(handle), (__int64)"wind", v42, (__int64)(a2 + 17),
                     (__int64)v47, 0, 0x10001u, 0, 0x0.0p+0f,
                     0x1.0000000000000p+0f);
    GameRoutine_112180((__int64)(a2 + 5), (__int64)v48);
    snd_Fade_Destroy_Fade(v47);
    v43 = snd_fnd_WeakHandle_get((__int64)(a2 + 5));
    if (v43 != 0) {
      v44 = v43;
      (*(void (**)(__int64, __int64))(*(_QWORD*)(v43 - 5592) + 632LL))(
          v43 - 5592, 4);
      *((float*)a2 + 30) =
          (*(float (**)(__int64))(*(_QWORD*)(v44 - 5592) + 112LL))(v44 - 5592);
    }
    *((_DWORD*)a2 + 43) = 0;
  }
}

#pragma GCC visibility pop
