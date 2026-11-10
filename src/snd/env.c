#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void Manager_1181f0(PSEUDO_X8, __int64 result, int);
__attribute__((swiftcall)) void snd_Env_getListenerPosition(PSEUDO_X8);
__int64 Crc32List_1163b0();
__int64 GameRoutine_112180(__int64, __int64);
__int64 GameRoutine_119010(_QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_BGM_getInstance();
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_fnd_WeakHandle_get(__int64);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 snd_playAt_ff5f0(__int64, __int64, __int64, __int64, unsigned int,
                         unsigned int, int, float, float);
__int64 snd_play_ff2d0(__int64, __int64, __int64, unsigned int, unsigned int,
                       int, float, float);
__int64 snd_startBusVolume(__int64, unsigned int, unsigned int, float);
__int64 strlen(_QWORD);
bool GameAlloc_e2d10(__int64, float*, float*, float*);
extern __int64* snd_g_memory_ptr[2];
extern __int64 GameData_212e2d8;
float snd_fnd_calcDistanceTo(float*, float*);
float snd_fnd_calcDistance_fec30(float, float, float, float, float, float);
void GameRoutine_de920(__int64, __int64);
void __attribute__((noreturn)) snd_a36650();
void snd_Fade_Fade_10c830(__int64, float);
void Env_de340(__int64 a1, __int64 a2);
__int64 Env_e0b20(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
__int64 Env_e25a0(__int64 a1, __int64 a2);
bool Env_e2b90(__int64 a1, float* a2, float* a3, float* a4);

void Env_de340(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float v17;
  bool v18;
  __int64 v19;
  int v20;
  __int64* v21;
  __int64* v22;
  char v23;
  __int64 v24;
  float v25;
  float v26;
  float v27;
  __int64* v28;
  __int64* v29;
  __int64 v30;
  float v31;
  float v32;
  bool v33;
  __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  char v38;
  __int64 v39;
  __int64 v40;
  float v41;
  float v42;
  bool v43;
  __int64 v44;
  int v45;
  __int64 v46;
  float v47;
  __int64 v48;
  char v49;
  float v50;
  int v51;
  __int64 v52;
  float v53;
  __int64 v54;
  __int64 v55;
  char v56;
  float v57;
  float v58;
  float v59;
  bool v60;
  __int64* v61;
  __int64* v62;
  __int64 v63;
  struct {
    _QWORD v64[2];
    int v65;
  } v64_;
  struct {
    __int64 v66;
    __int64 v67;
    int v68;
  } v66_;
  _QWORD v69[3];
  float v70[6];
  __int64 v71[7];

  if (*(_BYTE*)(a2 + 57) == 1) {
    v71[2] = v6;
    v71[3] = v5;
    v71[4] = v4;
    v71[5] = v2;
    v71[6] = v3;
    v9 = Crc32List_1163b0();
    Manager_1181f0((void*)((__int64)v71), v9, -1);
    if ((snd_fnd_WeakHandle_isValid(v71) & 1) != 0) {
      v10 = snd_fnd_WeakHandle_get((__int64)v71);
      v11 = v10 != 0 ? v10 - 5592 : 0LL;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
          *(_QWORD*)(v11 + 40) + 1048LL))((void*)(v70), v11 + 40);
      snd_Env_getListenerPosition((void*)((__int64)v69));
      if (v70[3] > -0x1.86a0000000000p+16f) {
        v12 = *(__int64**)(a2 + 32);
        v13 = *(__int64**)(a2 + 40);
        v14 = GameData_212e2d8;
        if (v12 != v13) {
          v15 = 0;
          v16 = 0x1.869f000000000p+16f;
          do {
            if (*(_DWORD*)(*v12 + 32) == 9) {
              v66_.v66 = v14 + 16;
              v66_.v67 = 0;
              v66_.v68 = 0;
              Env_e0b20(a1, *v12, (__int64)&v66_.v66, (__int64)v69);
              v17 = snd_fnd_calcDistanceTo((float*)v69, (float*)&v66_.v66);
              v18 = v17 < v16;
              v19 = *v12;
              if (v17 < v16) {
                v16 = v17;
              }
              v20 = v69[2];
              if (v18) {
                v15 = *v12;
              }
              *(_QWORD*)(v19 + 200) = v69[1];
              *(_DWORD*)(v19 + 208) = v20;
            }
            ++v12;
          } while (v12 != v13);
          if (v15 != 0) {
            v21 = *(__int64**)(a2 + 32);
            v22 = *(__int64**)(a2 + 40);
            if (v21 != v22) {
              while (1) {
                v24 = *v21;
                if (*(_DWORD*)(*v21 + 32) == 9) {
                  if (v24 == v15) {
                    break;
                  }
                  v23 = 1;
                LABEL_20:
                  *(_BYTE*)(v24 + 148) = v23;
                }
                if (++v21 == v22) {
                  goto LABEL_32;
                }
              }
              v25 = *(float*)(v24 + 168);
              if (v25 <= 0x0.0p+0f) {
                v26 = *(float*)(v24 + 172);
                if (v26 <= 0x0.0p+0f) {
                LABEL_26:
                  v27 = *(float*)(v24 + 176);
                  if (v27 <= 0x0.0p+0f) {
                  LABEL_28:
                    v23 = 0;
                    goto LABEL_20;
                  }
                LABEL_27:
                  snd_Fade_Fade_10c830((__int64)&v66_.v66,
                                       0x1.f400000000000p+7f);
                  snd_startBusVolume((__int64)&v66_.v66, 0, 2u, v27);
                  snd_Fade_Destroy_Fade(&v66_.v66);
                  v24 = *v21;
                  goto LABEL_28;
                }
              }
              else {
                snd_Fade_Fade_10c830((__int64)&v66_.v66, 0x1.f400000000000p+7f);
                snd_startBusVolume((__int64)&v66_.v66, 0, 0, v25);
                snd_Fade_Destroy_Fade(&v66_.v66);
                v24 = *v21;
                v26 = *(float*)(*v21 + 172);
                if (v26 <= 0x0.0p+0f) {
                  goto LABEL_26;
                }
              }
              snd_Fade_Fade_10c830((__int64)&v66_.v66, 0x1.f400000000000p+7f);
              snd_startBusVolume((__int64)&v66_.v66, 0, 1u, v26);
              snd_Fade_Destroy_Fade(&v66_.v66);
              v24 = *v21;
              v27 = *(float*)(*v21 + 176);
              if (v27 <= 0x0.0p+0f) {
                goto LABEL_28;
              }
              goto LABEL_27;
            }
          }
        }
      LABEL_32:
        snd_Env_getListenerPosition((void*)((__int64)&v66_.v66));
        v28 = *(__int64**)(a2 + 32);
        v29 = *(__int64**)(a2 + 40);
        if (v28 != v29) {
          v30 = 0;
          v31 = 0x1.869f000000000p+16f;
          do {
            if (*(_DWORD*)(*v28 + 32) == 10) {
              v64_.v64[0] = v14 + 16;
              v64_.v64[1] = 0;
              v64_.v65 = 0;
              Env_e0b20(a1, *v28, (__int64)v64_.v64, (__int64)&v66_.v66);
              v32 = snd_fnd_calcDistanceTo((float*)&v66_.v66, (float*)v64_.v64);
              v33 = v32 < v31;
              v34 = *v28;
              if (v32 < v31) {
                v31 = v32;
              }
              v35 = v66_.v68;
              if (v33) {
                v30 = *v28;
              }
              *(_QWORD*)(v34 + 200) = v66_.v67;
              *(_DWORD*)(v34 + 208) = v35;
            }
            ++v28;
          } while (v28 != v29);
          v28 = *(__int64**)(a2 + 32);
          v29 = *(__int64**)(a2 + 40);
          if (v30 != 0 && v28 != v29) {
            do {
              v39 = *v28;
              if (*(_DWORD*)(*v28 + 32) == 10) {
                if (v39 == v30) {
                  v36 = Crc32List_1163b0();
                  v37 = GameRoutine_119010(v36);
                  v38 = 0;
                  *(_DWORD*)(v37 + 1456) = *(_DWORD*)(*v28 + 168);
                  v39 = *v28;
                }
                else {
                  v38 = 1;
                }
                *(_BYTE*)(v39 + 148) = v38;
              }
              ++v28;
            } while (v28 != v29);
            v28 = *(__int64**)(a2 + 32);
            v29 = *(__int64**)(a2 + 40);
          }
        }
        if (v28 != v29) {
          v40 = 0;
          v41 = 0x1.869f000000000p+16f;
          do {
            if (*(_DWORD*)(*v28 + 32) == 6) {
              v66_.v66 = v14 + 16;
              v66_.v67 = 0;
              v66_.v68 = 0;
              Env_e0b20(a1, *v28, (__int64)&v66_.v66, (__int64)v69);
              v42 = snd_fnd_calcDistanceTo((float*)v69, (float*)&v66_.v66);
              v43 = v42 < v41;
              v44 = *v28;
              if (v42 < v41) {
                v41 = v42;
              }
              v45 = v69[2];
              if (v43) {
                v40 = *v28;
              }
              *(_QWORD*)(v44 + 200) = v69[1];
              *(_DWORD*)(v44 + 208) = v45;
            }
            ++v28;
          } while (v28 != v29);
          v28 = *(__int64**)(a2 + 32);
          v29 = *(__int64**)(a2 + 40);
          if (v40 != 0 && v28 != v29) {
            do {
              v48 = *v28;
              if (*(_DWORD*)(*v28 + 32) == 6) {
                if (v48 == v40) {
                  v46 = snd_BGM_getInstance();
                  v47 = *(float*)(*v28 + 168);
                  snd_Fade_Fade_10c830((__int64)&v66_.v66, 0x0.0p+0f);
                  (*(void (**)(__int64, __int64*, _QWORD, float))(
                      *(_QWORD*)v46 + 80LL))(v46, &v66_.v66, 0, v47);
                  snd_Fade_Destroy_Fade(&v66_.v66);
                  v48 = *v28;
                  v49 = 0;
                }
                else {
                  v49 = 1;
                }
                *(_BYTE*)(v48 + 148) = v49;
              }
              ++v28;
            } while (v28 != v29);
            v28 = *(__int64**)(a2 + 32);
            v29 = *(__int64**)(a2 + 40);
          }
        }
        if (v28 == v29) {
          v50 = 0x0.0p+0f;
          v51 = -1;
          v53 = 0x1.3878000000000p+13f;
        }
        else {
          v50 = 0x0.0p+0f;
          v51 = -1;
          v52 = v14 + 16;
          v53 = 0x1.3878000000000p+13f;
          do {
            v55 = *v28;
            if (*(_DWORD*)(*v28 + 32) == 11) {
              v66_.v66 = v52;
              v66_.v67 = 0;
              v66_.v68 = 0;
              v56 = Env_e0b20(a1, v55, (__int64)&v66_.v66, a1 + 392);
              HIDWORD(v66_.v67) = *(_DWORD*)(a1 + 404);
              v57 =
                  snd_fnd_calcDistanceTo((float*)(a1 + 392), (float*)&v66_.v66);
              v54 = *v28;
              v58 = 0x0.0p+0f;
              v59 = *(float*)(*v28 + 180);
              if ((v56 & 1) != 0 ||
                  ((v58 = v57, v57 <= v59) ? (v60 = v57 < v53) : (v60 = false),
                   v60)) {
                v51 = *(_DWORD*)(v54 + 156);
                if ((float)(0x1.0000000000000p+0f - (float)(v58 / v59)) <=
                    0x1.0000000000000p+0f) {
                  v50 = 0x1.0000000000000p+0f - (float)(v58 / v59);
                }
                else {
                  v50 = 0x1.0000000000000p+0f;
                }
                if (*(_BYTE*)(v54 + 148) == 1) {
                  v61 = *(__int64**)(a2 + 32);
                  v62 = *(__int64**)(a2 + 40);
                  if (v61 != v62) {
                    do {
                      v63 = *v61;
                      if (*(_DWORD*)(*v61 + 32) == 11 &&
                          (*(_BYTE*)(v63 + 148) & 1) == 0) {
                        *(_BYTE*)(v63 + 148) = 1;
                      }
                      ++v61;
                    } while (v61 != v62);
                    v54 = *v28;
                  }
                  *(_BYTE*)(v54 + 148) = 0;
                }
                v53 = v58;
              }
            }
            ++v28;
          } while (v28 != v29);
        }
        *(_DWORD*)(a1 + 376) = v51;
        *(float*)(a1 + 380) = v53;
        *(float*)(a1 + 384) = v50;
        *(_BYTE*)(a2 + 57) = 0;
        GameRoutine_de920(a1, a2);
      }
    }
  }
}

__int64 Env_e0b20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{

#pragma clang fp contract(off)
  char v4;
  float** v8;
  float** v9;
  __int64 v10;
  float* v11;
  char v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  float v29;
  float v30;
  bool v31;
  float v32;
  float v33;
  char v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;
  bool v41;
  char v42;
  float v43;
  float v44;
  float v45;
  float v46;
  float v47;
  struct {
    __int64 v49;
    unsigned __int64 v50;
    float v51;
  } v49_;

  v4 = 1;
  *(_QWORD*)(a3 + 8) = 0x47C34F8047C34F80LL;
  *(_DWORD*)(a3 + 16) = 1203982208;
  v8 = *(float***)(a2 + 56);
  v9 = *(float***)(a2 + 64);
  if (v8 != v9) {
    v10 = GameData_212e2d8 + 16;
    do {
      v11 = *v8;
      v49_.v49 = v10;
      v49_.v50 = 0;
      v49_.v51 = 0x0.0p+0f;
      v12 = 0;
      v13 = *v11;
      if (*(int*)v11 <= 2) {
        if (LODWORD(v13) == 1) {
          v44 = *(float*)(a4 + 16);
          v12 = 1;
          v49_.v50 = *(_QWORD*)(a4 + 8);
          v49_.v51 = v44;
        }
        else if (LODWORD(v13) == 2) {
          v14 = v11[5];
          v15 = v11[11];
          v16 = v11[6];
          v12 = 1;
          *(float*)&v49_.v50 = v11[4];
          if (v14 <= v15) {
            v17 = v15;
          }
          else {
            v17 = v14;
          }
          if (v14 > v15) {
            v14 = v15;
          }
          v18 = *(float*)(a4 + 12);
          if (v17 >= v18) {
            v17 = *(float*)(a4 + 12);
          }
          if (v14 <= v18) {
            v14 = v17;
          }
          *((float*)&v49_.v50 + 1) = v14;
          v49_.v51 = v16;
        }
      }
      else {
        switch (LODWORD(v13)) {
        case 3:
          v12 = Env_e2b90(a1, v11, (float*)a4, (float*)&v49_.v49);
          break;
        case 4:
          v19 = v11[12];
          v20 = *(float*)(a4 + 16);
          v49_.v51 = v11[6];
          v21 = *(float*)(a4 + 8);
          v22 = *(float*)(a4 + 12);
          if (v49_.v51 <= v19) {
            v23 = v19;
          }
          else {
            v23 = v49_.v51;
          }
          if (v49_.v51 <= v19) {
            v19 = v49_.v51;
          }
          v24 = (float)(v23 - v19) * 0x1.0000000000000p-1f;
          v25 = v19 + v24;
          v26 = v25 - v24;
          v27 = v24 + v25;
          v28 = v11[4];
          v29 = v11[5];
          if (v20 < v26) {
            v30 = v26;
          }
          else {
            v30 = v20;
          }
          if (v30 > v27) {
            v31 = true;
          }
          else {
            v27 = v30;
            v31 = v20 < v26;
          }
          v32 = v11[10];
          v33 = v11[11];
          v34 = !v31;
          v49_.v51 = v27;
          if (v28 <= v32) {
            v35 = v32;
          }
          else {
            v35 = v28;
          }
          if (v28 > v32) {
            v28 = v32;
          }
          v36 = (float)(v35 - v28) * 0x1.0000000000000p-1f;
          v37 = v28 + v36;
          v38 = v37 - v36;
          v39 = v36 + v37;
          if (v21 < v38) {
            v40 = v38;
          }
          else {
            v40 = v21;
          }
          if (v40 > v39) {
            v41 = true;
          }
          else {
            v39 = v40;
            v41 = v21 < v38;
          }
          v42 = !v41;
          v12 = v34 & v42;
          if (v29 <= v33) {
            v43 = v33;
          }
          else {
            v43 = v29;
          }
          if (v29 > v33) {
            v29 = v33;
          }
          if (v43 >= v22) {
            v43 = v22;
          }
          if (v29 > v22) {
            v43 = v29;
          }
          v49_.v50 = __PAIR64__(LODWORD(v43), LODWORD(v39));
          break;
        case 5:
          v12 = GameAlloc_e2d10(a1, v11, (float*)a4, (float*)&v49_.v49);
          break;
        default:
          break;
        }
      }
      v45 = snd_fnd_calcDistanceTo((float*)a3, (float*)a4);
      if (snd_fnd_calcDistanceTo((float*)&v49_.v49, (float*)a4) < v45) {
        v46 = v49_.v51;
        v4 = v12;
        *(_QWORD*)(a3 + 8) = v49_.v50;
        *(float*)(a3 + 16) = v46;
      }
      ++v8;
    } while (v8 != v9);
  }
  if (*(_DWORD*)(a2 + 32) == 1) {
    v47 = snd_fnd_calcDistanceTo((float*)a4, (float*)a3);
    v4 = 1;
    *(_DWORD*)(a3 + 8) = *(_DWORD*)(a4 + 8);
    *(float*)(a3 + 12) = v47 + *(float*)(a4 + 12);
    *(_DWORD*)(a3 + 16) = *(_DWORD*)(a4 + 16);
  }
  return v4 & 1;
}

__int64 Env_e25a0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  _BOOL4 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  float (*v22)(void);
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  char v28[16];
  struct {
    _QWORD v29[2];
    int v30;
  } v29_;
  struct {
    _QWORD v31[2];
    char* v32;
  } v31_;
  _QWORD v33[3];
  __int64 v34[3];

  v4 = Crc32List_1163b0();
  Manager_1181f0((void*)((__int64)v34), v4, -1);
  result = snd_fnd_WeakHandle_isValid(v34);
  if ((result & 1) != 0) {
    v6 = snd_fnd_WeakHandle_get((__int64)v34);
    if (v6 != 0) {
      v7 = v6 - 5592;
    }
    else {
      v7 = 0;
    }
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
        *(_QWORD*)(v7 + 40) + 1048LL))((void*)(v33), v7 + 40);
    nn_os_LockMutex(a1 + 416);
    v8 = *(_QWORD*)(a1 + 8);
    v26 = *(_QWORD*)(a1 + 16);
    v27 = a1;
    if (v8 != v26) {
      v9 = snd_g_memory_ptr[0];
      v10 = GameData_212e2d8 + 16;
      do {
        v12 = *(__int64**)(*(_QWORD*)v8 + 32LL);
        v11 = *(__int64**)(*(_QWORD*)v8 + 40LL);
        while (v12 != v11) {
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8))(
              *(_QWORD*)*v12 + 32LL))((void*)(v31_.v31));
          v13 = strlen(a2);
          v14 = v31_.v31[0];
          v15 = LOBYTE(v31_.v31[0]) >> 1;
          if ((v31_.v31[0] & 1) != 0) {
            v15 = v31_.v31[1];
          }
          if (v13 == v15) {
            v16 = v13;
            if (v13 == -1) {
              snd_a36650();
            }
            if ((v31_.v31[0] & 1) != 0) {
              v17 = v31_.v32;
            }
            else {
              v17 = (char*)v31_.v31 + 1;
            }
            v18 = memcmp(v17, a2, v16) == 0;
            if ((v14 & 1) == 0) {
            LABEL_23:
              if (!v18) {
                goto LABEL_10;
              }
              goto LABEL_24;
            }
          }
          else {
            v18 = false;
            if ((v31_.v31[0] & 1) == 0) {
              goto LABEL_23;
            }
          }
          (*(void (**)(__int64, char*))(*(_QWORD*)*v9 + 24LL))(*v9, v31_.v32);
          if (!v18) {
            goto LABEL_10;
          }
        LABEL_24:
          *(_BYTE*)(*v12 + 148) = 0;
          *(_BYTE*)(*v12 + 149) = 0;
          if (snd_fnd_WeakHandle_get(*v12 + 40) == 0) {
            if (***(_DWORD***)(*v12 + 56) == 1) {
              v19 = (*(__int64 (**)(__int64))(*(_QWORD*)*v12 + 24LL))(*v12);
              snd_Fade_Fade_10c830((__int64)v31_.v31, 0x0.0p+0f);
              snd_play_ff2d0((__int64)"Env", v19, (__int64)v31_.v31, 0,
                             0x10001u, 0, 0x0.0p+0f, 0x1.0000000000000p+0f);
              GameRoutine_112180(*v12 + 40, (__int64)v29_.v29);
              snd_Fade_Destroy_Fade(v31_.v31);
              v20 = snd_fnd_WeakHandle_get(*v12 + 40);
              if (v20 != 0) {
                v21 = v20;
                snd_Fade_Fade_10c830((__int64)v31_.v31, 0x0.0p+0f);
                (*(void (**)(__int64, _QWORD*, float))(
                    *(_QWORD*)(v21 - 5552) + 240LL))(v21 - 5552, v31_.v31,
                                                     0x1.0000000000000p+0f);
                snd_Fade_Destroy_Fade(v31_.v31);
                (*(void (**)(__int64, __int64))(*(_QWORD*)(v21 - 5592) +
                                                632LL))(v21 - 5592, 8);
                v22 = *(float (**)(void))(*(_QWORD*)(v21 - 5592) + 112LL);
              LABEL_9:
                *(float*)(*v12 + 144) = v22();
              }
            }
            else {
              v29_.v29[0] = v10;
              v29_.v29[1] = 0;
              v29_.v30 = 0;
              Env_e0b20(v27, *v12, (__int64)v29_.v29, (__int64)v33);
              v23 = (*(__int64 (**)(__int64))(*(_QWORD*)*v12 + 24LL))(*v12);
              snd_Fade_Fade_10c830((__int64)v31_.v31, 0x0.0p+0f);
              snd_playAt_ff5f0((__int64)"Env", v23, (__int64)v29_.v29,
                               (__int64)v31_.v31, 0, 0x10001u, 0,
                               0x1.9000000000000p+6f, 0x1.0000000000000p+0f);
              GameRoutine_112180(*v12 + 40, (__int64)v28);
              snd_Fade_Destroy_Fade(v31_.v31);
              v24 = snd_fnd_WeakHandle_get(*v12 + 40);
              if (v24 != 0) {
                v25 = v24;
                (*(void (**)(__int64, __int64))(*(_QWORD*)(v24 - 5592) +
                                                632LL))(v24 - 5592, 4);
                v22 = *(float (**)(void))(*(_QWORD*)(v25 - 5592) + 112LL);
                goto LABEL_9;
              }
            }
          }
        LABEL_10:
          ++v12;
        }
        v8 += 8;
      } while (v8 != v26);
    }
    return nn_os_UnlockMutex(v27 + 416);
  }
  return result;
}

bool Env_e2b90(__int64 a1, float* a2, float* a3, float* a4)
{
  float v4;
  float v5;
  float v6;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  _BOOL4 v15;
  float v16;
  float v17;
  float v18;
  float v19;

  v4 = a2[6];
  v5 = a2[12];
  v6 = a3[4];
  v10 = a2[4];
  v9 = a2[5];
  v11 = a2[10];
  v12 = a2[11];
  v13 = a3[2];
  v14 = (float)((float)(PSEUDO_UNFUSED((float)(v5 - v4) * (float)(v6 - v4))) +
                (float)((float)(v13 - v10) * (float)(v11 - v10))) /
        (float)((float)(PSEUDO_UNFUSED((float)(v5 - v4) * (float)(v5 - v4))) +
                (float)((float)(v11 - v10) * (float)(v11 - v10)));
  v15 = v14 <= 0x1.0000000000000p+0f && v14 >= 0x0.0p+0f;
  if (v15) {
    a4[2] =
        (float)(PSEUDO_UNFUSED(v10 * (float)(0x1.0000000000000p+0f - v14))) +
        (float)(v14 * v11);
    a4[4] = (float)(PSEUDO_UNFUSED(v4 * (float)(0x1.0000000000000p+0f - v14))) +
            (float)(v14 * v5);
    v16 = a3[3];
    if (v9 <= v12) {
      v17 = v9;
    }
    else {
      v17 = v12;
    }
    if (v9 <= v12) {
      v18 = v12;
    }
    else {
      v18 = v9;
    }
    if (v17 > v16) {
    LABEL_30:
      a4[3] = v17;
      return v15;
    }
  }
  else {
    v19 = snd_fnd_calcDistance_fec30(v13, a3[3], v6, a2[4], a2[5], a2[6]);
    if (v19 >= snd_fnd_calcDistance_fec30(a3[2], a3[3], a3[4], v11, v9, v5)) {
      a4[2] = v11;
      a4[4] = v5;
      v16 = a3[3];
      if (v9 <= v12) {
        v17 = v9;
      }
      else {
        v17 = v12;
      }
      if (v9 <= v12) {
        v18 = v12;
      }
      else {
        v18 = v9;
      }
      if (v17 > v16) {
        goto LABEL_30;
      }
    }
    else {
      a4[2] = v10;
      a4[4] = v4;
      v16 = a3[3];
      if (v9 <= v12) {
        v17 = v9;
      }
      else {
        v17 = v12;
      }
      if (v9 <= v12) {
        v18 = v12;
      }
      else {
        v18 = v9;
      }
      if (v17 > v16) {
        goto LABEL_30;
      }
    }
  }
  if (v18 >= v16) {
    a4[3] = v16;
  }
  else {
    a4[3] = v18;
  }
  return v15;
}

#pragma GCC visibility pop
