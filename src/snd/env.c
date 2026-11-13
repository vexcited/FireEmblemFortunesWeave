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
__attribute__((swiftcall)) void snd_playAt_ff5f0(PSEUDO_X8, __int64, __int64,
                                                 __int64, __int64, unsigned int,
                                                 unsigned int, int, float,
                                                 float);
__attribute__((swiftcall)) void snd_play_ff2d0(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int,
                                               unsigned int, int, float, float);
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
_BYTE* GameRoutine_190120(_BYTE* result, unsigned __int8*);
__int64 GameRoutine_190200(__int64, char*);
__int64 GameRoutine_190240(__int64);
__int64 GameRoutine_a2af20(__int64, __int64, const char*, ...);
__int64 GameRoutine_e0de0(__int64, __int64, __int64, float*, float);
__int64 snd_BGM_getAudibleStartOffset(__int64);
__int64 snd_BGM_isFirstActive(__int64);
__int64 snd_isLoaded(__int64);
__int64 snd_setBusRequest(float);
__int64 strcpy(__int64, const char*);
bool snd_BGM_equals(__int64, const char*);
bool snd_hasSound(__int64);
double snd_Fade_getTime(__int64);
extern __int64 GameData_1fbea38;
extern __int64 snd_g_proxy;
extern __int64 snd_g_proxy_ptr[2];
extern char GameData_1a9f09e;
float Actor_102560(__int64, __int64);
float Actor_102590(__int64, __int64);
float snd_fnd_calcAngleDiff(float, float);
float snd_fnd_calcAngle_fecf0(float, float, float, float);
float snd_fnd_calcAngle_fee00(__int64, __int64);
float snd_fnd_calcDistance_fec10(float, float, float, float);
float snd_fnd_moveByAngle(float*, float*, float, float);
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_651250(__int64);
void Env_de920(__int64 a1, __int64 a2);
__int64 Env_e1c50(__int64 a1, _BYTE* a2, const char* a3, char* a4,
                  const char* a5, __int64 a6, __int64 a7);
bool Env_e2d10(__int64 a1, float* a2, float* a3, float* a4);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 snd_playDirectAt_ffa30(__int64, __int64, __int64, __int64, unsigned int,
                               unsigned int, int, float, float);
__int64 snd_playDirect_ff6f0(__int64, __int64, __int64, unsigned int,
                             unsigned int, int, float, float);
bool snd_hasSound_alt1(unsigned __int8*) __asm__("snd_hasSound");
const char* snd_fnd_calcCrc32Reverse(const char* result, int);
extern __int64* snd_s_target_ptr;
unsigned __int8* snd_fnd_calcCrc32(unsigned __int8* result, int);
void __attribute__((noreturn)) GameRoutine_e30f0();
void Env_e0580(__int64 a1, _QWORD* a2, char* a3, char* a4, char* a5, char a6,
               __int64 a7, __int64 a8, __int64 a9);

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

void Env_de920(__int64 a1, __int64 a2)
{
  _QWORD handle[2];
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  float v8;
  float v9;
  __int64* v10;
  __int64* v11;
  __int64* v12;
  float v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  __int64* v26;
  __int64* i;
  __int64 v28;
  float v29;
  float v30;
  float v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  float v35;
  __int64 v36;
  int v37;
  int v38;
  __int64 v39;
  __int64 v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;
  __int64* v46;
  __int64* j;
  __int64 v48;
  __int64 v49;
  float v50;
  __int64 v51;
  __int64* v52;
  __int64* v53;
  int v54;
  float v55;
  float v56;
  float v57;
  __int64 v58;
  __int64 v59;
  int v60;
  int v61;
  __int64 v62;
  __int64* v63;
  __int64* v64;
  char v65;
  float v66;
  float v67;
  float v68;
  __int64* v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  int v79;
  __int64 v80;
  __int64 v81;
  char v82;
  __int64 v83;
  __int64 v84;
  float v85;
  int v86;
  __int64 v87;
  float v88;
  float v89;
  float v90;
  float v91;
  __int64 v92;
  __int64* v93;
  __int64* v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  _QWORD* v99;
  __int64 v100;
  _QWORD* v101;
  __int64 v102;
  float v103;
  char v104;
  int v105;
  __int64 v106;
  char v107;
  __int64 v108;
  float v109;
  float v110;
  float v111;
  float v112;
  char v113;
  __int64 v114;
  __int64 v115;
  int v116;
  __int64 v117;
  _BYTE* v118;
  float v119;
  __int64 v120;
  __int64 v121;
  char* v122;
  __int64 v123;
  __int64 v124;
  const char* v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  char v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64* v143;
  void* v144[3];
  struct {
    __int64 v145;
    __int64 v146;
    int v147;
  } v145_;
  struct {
    _QWORD v148[2];
    int v149;
  } v148_;
  struct {
    _QWORD v150[2];
    int v151;
  } v150_;
  struct {
    __int64 v152;
    __int64 v153;
    __int64 v154;
  } v152_;
  struct {
    float v155;
    char gap316_[4];
    __int64 v156;
    int v157;
  } v155_;
  struct {
    _QWORD v158[2];
    int v159;
  } v158_;
  __int64 v160[3];

  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
  v4 = Crc32List_1163b0(),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
  Manager_1181f0((void*)((__int64)v160), v4, -1),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
  if ((snd_fnd_WeakHandle_isValid(v160) & 1) == 0) {
    return;
  }
  v5 = snd_fnd_WeakHandle_get((__int64)v160),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
  if (v5 != 0) {
    v6 = v5 - 5592;
  }
  else {
    v6 = 0;
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)(v6 + 40) + 1048LL))((void*)(v158_.v158), v6 + 40),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
  snd_Env_getListenerPosition((void*)((__int64)&v155_.v155)),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
  v7 = snd_BGM_getInstance(),
  v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
  snd_BGM_getAudibleStartOffset(v7),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
  v9 = v8 + v8;
  v10 = *(__int64**)(a2 + 32);
  v11 = *(__int64**)(a2 + 40);
  v12 = (__int64*)GameData_212e2d8;
  if (v9 < 0x1.0000000000000p+0f) {
    v9 = 0x1.0000000000000p+0f;
  }
  if (v9 <= 0x1.0000000000000p+0f) {
    v13 = v9;
  }
  else {
    v13 = 0x1.0000000000000p+0f;
  }
  if (v10 != v11) {
    v14 = GameData_212e2d8 + 16;
    v15 = 0;
    do {
      v18 = *v10;
      if (*(_DWORD*)(*v10 + 32) == 9 && (*(_BYTE*)(a2 + 56) & 1) == 0) {
        v19 = *(_DWORD*)(v18 + 208);
        v20 = *(_QWORD*)(v18 + 200);
        v150_.v150[0] = v14;
        v150_.v150[1] = 0;
        v150_.v151 = 0;
        v148_.v148[0] = v14;
        v148_.v148[1] = 0;
        v148_.v149 = 0;
        v145_.v145 = (__int64)(v12 + 2);
        v145_.v146 = v20;
        v152_.v152 = v14;
        v152_.v153 = v155_.v156;
        v145_.v147 = v19;
        LODWORD(v152_.v154) = v155_.v157;
        Env_e0b20(a1, *v10, (__int64)v150_.v150, (__int64)&v145_.v145),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        Env_e0b20(a1, *v10, (__int64)v148_.v148, (__int64)&v152_.v152),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v21 = snd_fnd_calcDistanceTo((float*)&v152_.v152, (float*)v148_.v148),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v22 = snd_fnd_calcDistanceTo((float*)v148_.v148, (float*)v150_.v150),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v23 =
            snd_fnd_calcAngle_fee00((__int64)&v145_.v145, (__int64)v150_.v150),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v24 =
            snd_fnd_calcAngle_fee00((__int64)&v152_.v152, (__int64)v148_.v148),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v25 = snd_fnd_calcAngleDiff(v24, v23),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v21 < 0x1.869f000000000p+16f && v22 < 0x1.4000000000000p+2f &&
            (v21 < 0x1.0000000000000p+0f ||
             fabsf(v25) > 0x1.6800000000000p+6f)) {
          v15 = *v10;
        }
        v16 = v155_.v157;
        v17 = *v10;
        *(_QWORD*)(v17 + 200) = v155_.v156;
        *(_DWORD*)(v17 + 208) = v16;
      }
      ++v10;
    } while (v10 != v11);
    if (v15 != 0 && *(_BYTE*)(v15 + 148) == 1) {
      v26 = *(__int64**)(a2 + 32);
      for (i = *(__int64**)(a2 + 40); v26 != i; ++v26) {
        v28 = *v26;
        if (*(_DWORD*)(*v26 + 32) == 9 && (*(_BYTE*)(v28 + 148) & 1) == 0) {
          *(_BYTE*)(v28 + 148) = 1;
        }
      }
      v29 = *(float*)(v15 + 168);
      if (v29 <= 0x0.0p+0f) {
        v30 = *(float*)(v15 + 172);
        if (v30 <= 0x0.0p+0f) {
        LABEL_32:
          v31 = *(float*)(v15 + 176);
          if (v31 <= 0x0.0p+0f) {
          LABEL_34:
            *(_BYTE*)(v15 + 148) = 0;
            goto LABEL_35;
          }
        LABEL_33:
          snd_Fade_Fade_10c830((__int64)&v145_.v145, *(float*)(v15 + 164)),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          snd_startBusVolume((__int64)&v145_.v145, 0, 2u, v31),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          snd_Fade_Destroy_Fade(&v145_.v145),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          goto LABEL_34;
        }
      }
      else {
        snd_Fade_Fade_10c830((__int64)&v145_.v145, *(float*)(v15 + 164)),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        snd_startBusVolume((__int64)&v145_.v145, 0, 0, v29),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        snd_Fade_Destroy_Fade(&v145_.v145),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v30 = *(float*)(v15 + 172);
        if (v30 <= 0x0.0p+0f) {
          goto LABEL_32;
        }
      }
      snd_Fade_Fade_10c830((__int64)&v145_.v145, *(float*)(v15 + 164)),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
      snd_startBusVolume((__int64)&v145_.v145, 0, 1u, v30),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
      snd_Fade_Destroy_Fade(&v145_.v145),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
      v31 = *(float*)(v15 + 176);
      if (v31 <= 0x0.0p+0f) {
        goto LABEL_34;
      }
      goto LABEL_33;
    }
  }
LABEL_35:
  v32 = *(__int64**)(a2 + 32);
  v33 = *(__int64**)(a2 + 40);
  if (v32 != v33) {
    v34 = 0;
    v35 = 0x1.869f000000000p+16f;
    do {
      v36 = *v32;
      if (*(_DWORD*)(*v32 + 32) == 6 && (*(_BYTE*)(a2 + 56) & 1) == 0) {
        v37 = *(_DWORD*)(v36 + 208);
        v38 = v155_.v157;
        v39 = *(_QWORD*)(v36 + 200);
        v152_.v152 = (__int64)(v12 + 2);
        v145_.v145 = (__int64)(v12 + 2);
        v145_.v146 = v39;
        v145_.v147 = v37;
        LODWORD(v152_.v154) = v155_.v157;
        v152_.v153 = v155_.v156;
        v40 = *v32;
        v150_.v150[0] = v12 + 2;
        v150_.v150[1] = 0;
        v150_.v151 = 0;
        v148_.v148[0] = v12 + 2;
        v148_.v148[1] = 0;
        v148_.v149 = 0;
        *(_QWORD*)(v40 + 200) = v155_.v156;
        *(_DWORD*)(v40 + 208) = v38;
        Env_e0b20(a1, *v32, (__int64)v150_.v150, (__int64)&v145_.v145),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        Env_e0b20(a1, *v32, (__int64)v148_.v148, (__int64)&v152_.v152),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v41 = snd_fnd_calcDistanceTo((float*)&v152_.v152, (float*)v148_.v148),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v42 =
            snd_fnd_calcAngle_fee00((__int64)&v145_.v145, (__int64)v150_.v150),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v43 =
            snd_fnd_calcAngle_fee00((__int64)&v152_.v152, (__int64)v148_.v148),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v44 = snd_fnd_calcAngleDiff(v43, v42),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        if (snd_fnd_calcDistanceTo((float*)&v145_.v145, (float*)&v152_.v152) <
                0x1.4000000000000p+3f &&
            v41 < v35 &&
            (v44 > 0x1.6800000000000p+6f || v41 < 0x1.99999a0000000p-4f ||
             v44 < -0x1.6800000000000p+6f)) {
          if (v44 >= -0x1.6800000000000p+6f && v44 <= 0x1.6800000000000p+6f ||
              (v45 = snd_fnd_calcDistanceTo((float*)&v145_.v145,
                                            (float*)&v152_.v152),
               snd_fnd_calcDistanceTo((float*)v150_.v150, (float*)v148_.v148) <=
                   v45)) {
            v34 = *v32;
            v35 = v41;
          }
        }
      }
      ++v32;
    } while (v32 != v33);
    v12 = &GameData_1fbea38;
    if (v34 != 0 && *(_BYTE*)(v34 + 148) == 1) {
      v46 = *(__int64**)(a2 + 32);
      for (j = *(__int64**)(a2 + 40); v46 != j; ++v46) {
        v48 = *v46;
        if (*(_DWORD*)(*v46 + 32) == 6 && (*(_BYTE*)(v48 + 148) & 1) == 0) {
          *(_BYTE*)(v48 + 148) = 1;
        }
      }
      v49 = snd_BGM_getInstance(),
      v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
      v50 = *(float*)(v34 + 168);
      v51 = v49;
      snd_Fade_Fade_10c830((__int64)&v145_.v145, *(float*)(v34 + 164)),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
      (*(void (**)(__int64, __int64*, _QWORD, float))(*(_QWORD*)v51 + 80LL))(
          v51, &v145_.v145, 0, v50),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
      snd_Fade_Destroy_Fade(&v145_.v145),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
      *(_BYTE*)(v34 + 148) = 0;
    }
  }
  v53 = *(__int64**)(a2 + 32);
  v52 = *(__int64**)(a2 + 40);
  if (v53 != v52) {
    v54 = -1;
    v143 = v12 + 2;
    v55 = 0x0.0p+0f;
    v56 = 0x0.0p+0f;
    if (v13 <= 0x0.0p+0f) {
      v57 = 0x1.0000000000000p+0f;
    }
    else {
      v57 = (float)(v13 * -0x1.0000000000000p-2f) + 0x1.0000000000000p+0f;
    }
    while (1) {
      v59 = *v53;
      v60 = *(_DWORD*)(*v53 + 32);
      if (v60 > 8) {
        if (v60 != 9) {
          if (v60 == 10) {
            if ((*(_BYTE*)(a2 + 56) & 1) == 0) {
              v86 = *(_DWORD*)(v59 + 208);
              v87 = *(_QWORD*)(v59 + 200);
              v150_.v151 = 0;
              v148_.v149 = 0;
              v150_.v150[0] = v12 + 2;
              v150_.v150[1] = 0;
              v148_.v148[0] = v12 + 2;
              v148_.v148[1] = 0;
              v145_.v145 = (__int64)(v12 + 2);
              v145_.v146 = v87;
              v152_.v152 = (__int64)(v12 + 2);
              v152_.v153 = v155_.v156;
              v145_.v147 = v86;
              LODWORD(v152_.v154) = v155_.v157;
              Env_e0b20(a1, *v53, (__int64)v150_.v150, (__int64)&v145_.v145),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
              Env_e0b20(a1, *v53, (__int64)v148_.v148, (__int64)&v152_.v152),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
              v88 = snd_fnd_calcDistanceTo((float*)&v152_.v152,
                                           (float*)v148_.v148),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
              v89 = snd_fnd_calcAngle_fee00((__int64)&v145_.v145,
                                            (__int64)v150_.v150),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
              v90 = snd_fnd_calcAngle_fee00((__int64)&v152_.v152,
                                            (__int64)v148_.v148),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
              v91 = snd_fnd_calcAngleDiff(v90, v89),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
              if (v88 < 0x1.0000000000000p+0f ||
                  fabsf(v91) > 0x1.6800000000000p+6f) {
                v92 = *v53;
                if (*(_BYTE*)(*v53 + 148) == 1) {
                  v93 = *(__int64**)(a2 + 32);
                  v94 = *(__int64**)(a2 + 40);
                  if (v93 != v94) {
                    do {
                      v95 = *v93;
                      if (*(_DWORD*)(*v93 + 32) == 10 &&
                          (*(_BYTE*)(v95 + 148) & 1) == 0) {
                        *(_BYTE*)(v95 + 148) = 1;
                      }
                      ++v93;
                    } while (v93 != v94);
                    v92 = *v53;
                  }
                  snd_setBusRequest(*(float*)(v92 + 168)),
                      v8 = COERCE_AS(__typeof__(v8),
                                     PSEUDO_REGISTER(float, "s0", "=w"));
                  *(_BYTE*)(*v53 + 148) = 0;
                }
              }
            }
            goto LABEL_69;
          }
          if (v60 == 11) {
            v145_.v147 = 0;
            v145_.v145 = (__int64)(v12 + 2);
            v145_.v146 = 0;
            v65 = Env_e0b20(a1, *v53, (__int64)&v145_.v145, a1 + 392),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
            HIDWORD(v145_.v146) = *(_DWORD*)(a1 + 404);
            v66 =
                snd_fnd_calcDistanceTo((float*)(a1 + 392), (float*)&v145_.v145),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
            v58 = *v53;
            v67 = 0x0.0p+0f;
            v68 = *(float*)(*v53 + 180);
            if ((v65 & 1) != 0 || (v67 = v66, v66 <= v68)) {
              v54 = *(_DWORD*)(v58 + 156);
              if ((float)(0x1.0000000000000p+0f - (float)(v67 / v68)) <=
                  0x1.0000000000000p+0f) {
                v56 = 0x1.0000000000000p+0f - (float)(v67 / v68);
              }
              else {
                v56 = 0x1.0000000000000p+0f;
              }
              if (*(_BYTE*)(v58 + 148) == 1) {
                v69 = *(__int64**)(a2 + 32);
                v70 = *(__int64**)(a2 + 40);
                if (v69 != v70) {
                  do {
                    v71 = *v69;
                    if (*(_DWORD*)(*v69 + 32) == 11 &&
                        (*(_BYTE*)(v71 + 148) & 1) == 0) {
                      *(_BYTE*)(v71 + 148) = 1;
                    }
                    ++v69;
                  } while (v69 != v70);
                  v58 = *v53;
                }
                *(_BYTE*)(v58 + 148) = 0;
              }
              v55 = v67;
            }
            goto LABEL_69;
          }
          goto LABEL_101;
        }
      }
      else if (v60 != 6) {
        if (v60 == 7) {
          if ((*(_BYTE*)(v59 + 151) & 1) == 0) {
            v145_.v147 = 0;
            v145_.v145 = (__int64)v143;
            v145_.v146 = 0;
            Env_e0b20(a1, *v53, (__int64)&v145_.v145, (__int64)&v155_.v155),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            v79 = v145_.v147;
            HIDWORD(v145_.v146) = HIDWORD(v155_.v156);
            v80 = *v53;
            *(_QWORD*)(v80 + 128) = v145_.v146;
            *(_DWORD*)(v80 + 136) = v79;
            if (snd_fnd_calcDistanceTo(&v155_.v155, (float*)(*v53 + 120)) <
                0x1.0000000000000p+0f) {
              if (snd_fnd_WeakHandle_get(*v53 + 40) == 0) {
                if ((*(_BYTE*)(*v53 + 150) & 1) != 0) {
                  v81 = snd_BGM_getInstance(),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
                  v82 = snd_BGM_isFirstActive(v81),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
                  v83 = snd_BGM_getInstance(),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
                  if ((v82 & 1) != 0) {
                    snd_Fade_Fade_10c830((__int64)&v145_.v145,
                                         *(float*)(*v53 + 164)),
                        v8 = COERCE_AS(__typeof__(v8),
                                       PSEUDO_REGISTER(float, "s0", "=w"));
                    (*(void (**)(__int64, __int64*, _QWORD))(
                        *(_QWORD*)v83 + 48LL))(v83, &v145_.v145, 0),
                        v8 = COERCE_AS(__typeof__(v8),
                                       PSEUDO_REGISTER(float, "s0", "=w"));
                    snd_Fade_Destroy_Fade(&v145_.v145),
                        v8 = COERCE_AS(__typeof__(v8),
                                       PSEUDO_REGISTER(float, "s0", "=w"));
                    v83 = snd_BGM_getInstance(),
                    v8 = COERCE_AS(__typeof__(v8),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
                    v84 =
                        (*(__int64 (**)(__int64))(*(_QWORD*)*v53 + 24LL))(*v53),
                    v8 = COERCE_AS(__typeof__(v8),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
                    v85 = *(float*)(*v53 + 164);
                  }
                  else {
                    v136 =
                        (*(__int64 (**)(__int64))(*(_QWORD*)*v53 + 24LL))(*v53),
                    v8 = COERCE_AS(__typeof__(v8),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
                    v85 = 0x0.0p+0f;
                    v84 = v136;
                  }
                  snd_Fade_Fade_10c830((__int64)&v145_.v145, v85),
                      v8 = COERCE_AS(__typeof__(v8),
                                     PSEUDO_REGISTER(float, "s0", "=w"));
                  (*(void (**)(__int64, __int64, __int64*, _QWORD, double,
                               float))(*(_QWORD*)v83 + 32LL))(
                      v83, v84, &v145_.v145, 0, 0x0.0p+0,
                      0x1.0000000000000p+0f),
                      v8 = COERCE_AS(__typeof__(v8),
                                     PSEUDO_REGISTER(float, "s0", "=w"));
                  snd_Fade_Destroy_Fade(&v145_.v145),
                      v8 = COERCE_AS(__typeof__(v8),
                                     PSEUDO_REGISTER(float, "s0", "=w"));
                }
                else {
                  v126 =
                      (*(__int64 (**)(__int64))(*(_QWORD*)*v53 + 24LL))(*v53),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
                  snd_Fade_Fade_10c830((__int64)&v145_.v145,
                                       *(float*)(*v53 + 164)),
                      v8 = COERCE_AS(__typeof__(v8),
                                     PSEUDO_REGISTER(float, "s0", "=w"));
                  snd_play_ff2d0((void*)(handle), (__int64)"Env", v126,
                                 (__int64)&v145_.v145, 0, 0x10001u, 0,
                                 0x0.0p+0f, 0x1.0000000000000p+0f),
                      v8 = COERCE_AS(__typeof__(v8),
                                     PSEUDO_REGISTER(float, "s0", "=w"));
                  GameRoutine_112180(*v53 + 40, (__int64)&v152_.v152),
                      v8 = COERCE_AS(__typeof__(v8),
                                     PSEUDO_REGISTER(float, "s0", "=w"));
                  snd_Fade_Destroy_Fade(&v145_.v145),
                      v8 = COERCE_AS(__typeof__(v8),
                                     PSEUDO_REGISTER(float, "s0", "=w"));
                  v127 = snd_fnd_WeakHandle_get(*v53 + 40),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
                  if (v127 != 0) {
                    v128 = v127;
                    (*(void (**)(__int64, __int64))(*(_QWORD*)(v127 - 5592) +
                                                    632LL))(v127 - 5592, 4),
                        v8 = COERCE_AS(__typeof__(v8),
                                       PSEUDO_REGISTER(float, "s0", "=w"));
                    *(float*)(*v53 + 144) = (*(float (**)(__int64))(
                        *(_QWORD*)(v128 - 5592) + 112LL))(v128 - 5592),
                                     v8 = COERCE_AS(
                                         __typeof__(v8),
                                         PSEUDO_REGISTER(float, "s0", "=w"));
                  }
                }
              }
              *(_BYTE*)(*v53 + 151) = 1;
            }
          }
          goto LABEL_69;
        }
        if (v60 == 8) {
          v145_.v147 = 0;
          v145_.v145 = (__int64)(v12 + 2);
          v145_.v146 = 0;
          Env_e0b20(a1, *v53, (__int64)&v145_.v145, (__int64)&v155_.v155),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          v61 = v145_.v147;
          HIDWORD(v145_.v146) = HIDWORD(v155_.v156);
          v62 = *v53;
          *(_QWORD*)(v62 + 128) = v145_.v146;
          *(_DWORD*)(v62 + 136) = v61;
          if (snd_fnd_calcDistanceTo(&v155_.v155, (float*)(*v53 + 120)) >=
              0x1.0000000000000p+0f) {
            goto LABEL_69;
          }
          v63 = *(__int64**)(a2 + 32);
          v64 = *(__int64**)(a2 + 40);
          if (v63 == v64) {
            goto LABEL_69;
          }
          while (2) {
            v74 = *v63;
            if (*(_DWORD*)(*v63 + 32) == 7 &&
                *(_DWORD*)(v74 + 156) == *(_DWORD*)(*v53 + 156)) {
              if ((*(_BYTE*)(v74 + 150) & 1) != 0) {
                v75 = snd_BGM_getInstance(),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
                if ((snd_BGM_isFirstActive(v75) & 1) != 0) {
                  v76 = snd_BGM_getInstance(),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
                  snd_Fade_Fade_10c830((__int64)&v145_.v145,
                                       *(float*)(*v53 + 164)),
                      v8 = COERCE_AS(__typeof__(v8),
                                     PSEUDO_REGISTER(float, "s0", "=w"));
                  (*(void (**)(__int64, __int64*, _QWORD))(
                      *(_QWORD*)v76 + 48LL))(v76, &v145_.v145, 0),
                      v8 = COERCE_AS(__typeof__(v8),
                                     PSEUDO_REGISTER(float, "s0", "=w"));
                LABEL_94:
                  snd_Fade_Destroy_Fade(&v145_.v145),
                      v8 = COERCE_AS(__typeof__(v8),
                                     PSEUDO_REGISTER(float, "s0", "=w"));
                }
              }
              else {
                v72 = snd_fnd_WeakHandle_get(v74 + 40),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
                if (v72 != 0) {
                  v73 = v72;
                  snd_Fade_Fade_10c830((__int64)&v145_.v145,
                                       *(float*)(*v53 + 164)),
                      v8 = COERCE_AS(__typeof__(v8),
                                     PSEUDO_REGISTER(float, "s0", "=w"));
                  (*(void (**)(__int64, __int64*, __int64, double))(
                      *(_QWORD*)(v73 - 5592) + 248LL))(v73 - 5592, &v145_.v145,
                                                       1, 0x0.0p+0),
                      v8 = COERCE_AS(__typeof__(v8),
                                     PSEUDO_REGISTER(float, "s0", "=w"));
                  goto LABEL_94;
                }
              }
            }
            if (++v63 == v64) {
              goto LABEL_69;
            }
            continue;
          }
        }
      LABEL_101:
        if (***(_DWORD***)(v59 + 56) == 1) {
          if (*(_BYTE*)(v59 + 155) != 0) {
            v77 = snd_fnd_WeakHandle_get(v59 + 40),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
            if (v77 != 0) {
              v78 = v77;
              if (((*(__int64 (**)(__int64))(*(_QWORD*)(v77 - 5592) + 184LL))(
                       v77 - 5592) &
                   1) != 0) {
                (*(void (**)(__int64))(*(_QWORD*)(v78 - 5592) + 208LL))(v78 -
                                                                        5592),
                    v8 = COERCE_AS(__typeof__(v8),
                                   PSEUDO_REGISTER(float, "s0", "=w"));
                *(_BYTE*)(*v53 + 155) = 0;
              }
            }
          }
          goto LABEL_69;
        }
        if (*(_BYTE*)(v59 + 155) != 0) {
          v96 = snd_fnd_WeakHandle_get(v59 + 40),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          if (v96 != 0) {
            v97 = v96;
            if (((*(__int64 (**)(__int64))(*(_QWORD*)(v96 - 5592) + 184LL))(
                     v96 - 5592) &
                 1) != 0) {
              (*(void (**)(__int64))(*(_QWORD*)(v97 - 5592) + 208LL))(v97 -
                                                                      5592),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
              *(_BYTE*)(*v53 + 155) = 0;
            }
          }
        }
        v98 = snd_fnd_WeakHandle_get(*v53 + 40),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v99 = (_QWORD*)(v98 - 5592);
        v100 = v98;
        if (v98 != 0) {
          v101 = (_QWORD*)(v98 - 5592);
        }
        else {
          v101 = nullptr;
        }
        if (v98 != 0) {
          (*(void (**)(__int64))(*v99 + 120LL))(v98 - 5592),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          *(float*)(*v53 + 144) = (*(float (**)(_QWORD*))(*v99 + 112LL))(v99),
                           v8 = COERCE_AS(__typeof__(v8),
                                          PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v145_.v147 = 0;
        v145_.v145 = GameData_212e2d8 + 16;
        v145_.v146 = 0;
        v102 = *v53;
        v103 = *(float*)(*v53 + 144);
        if (v103 == 0x0.0p+0f) {
          v104 = Env_e0b20(a1, v102, (__int64)&v145_.v145, (__int64)v158_.v158),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        else {
          v104 = GameRoutine_e0de0(a1, v102, (__int64)&v145_.v145,
                                   (float*)v158_.v158, v103),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v105 = v145_.v147;
        v106 = *v53;
        v107 = v104;
        *(_QWORD*)(v106 + 128) = v145_.v146;
        *(_DWORD*)(v106 + 136) = v105;
        v108 = *v53;
        if ((*(_BYTE*)(*v53 + 149) & 1) != 0) {
          v99 = v101;
          goto LABEL_136;
        }
        v109 = snd_fnd_calcDistanceTo((float*)v158_.v158, (float*)(v108 + 120)),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        if ((*(_BYTE*)(a2 + 56) & 1) != 0) {
        LABEL_139:
          v99 = v101;
          goto LABEL_140;
        }
        v118 = (_BYTE*)*v53;
        v119 = *(float*)(*v53 + 144);
        if ((*(_BYTE*)(*v53 + 148) & 1) != 0) {
          if (v109 <= v119) {
            goto LABEL_139;
          }
          v120 = snd_g_proxy;
          v121 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v118 + 24LL))(v118),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64))(
              *(_QWORD*)v120 + 480LL))((void*)(v144), v120, v121),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          GameRoutine_190120(&v152_.v152, (unsigned __int8*)v144),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          if (((__int64)v144[0] & 1) != 0) {
            GameRoutine_651250((__int64)v144[2]),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            if (!snd_BGM_equals((__int64)&v152_.v152, &GameData_1a9f09e)) {
              goto LABEL_179;
            }
          LABEL_156:
            v122 =
                (char*)(*(__int64 (**)(__int64))(*(_QWORD*)*v53 + 24LL))(*v53),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
            GameRoutine_190200((__int64)&v152_.v152, v122),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            v123 = GameRoutine_190240((__int64)&v152_.v152),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
            if (!snd_hasSound(v123)) {
              goto LABEL_157;
            }
          LABEL_180:
            v138 = GameRoutine_190240((__int64)&v152_.v152),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
            v139 = *v53;
            v140 = v138;
            snd_Fade_Fade_10c830((__int64)&v145_.v145, *(float*)(*v53 + 184)),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            snd_playAt_ff5f0((void*)(handle), (__int64)"Env", v140, v139 + 120,
                             (__int64)&v145_.v145, 0, 0x10001u, 0, 0x0.0p+0f,
                             0x1.0000000000000p+0f),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            GameRoutine_112180(*v53 + 40, (__int64)v150_.v150),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            snd_Fade_Destroy_Fade(&v145_.v145),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            v141 = snd_fnd_WeakHandle_get(*v53 + 40),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
            v142 = v141 - 5592;
            if (v141 != 0) {
              v101 = (_QWORD*)(v141 - 5592);
            }
            else {
              v101 = nullptr;
            }
            if (v141 != 0) {
              (*(void (**)(__int64, __int64))(*(_QWORD*)v142 + 632LL))(
                  v141 - 5592, 4),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
              *(float*)(*v53 +
                        144) =
                  (*(float (**)(__int64))(*(_QWORD*)v142 + 112LL))(v142),
                        v8 = COERCE_AS(__typeof__(v8),
                                       PSEUDO_REGISTER(float, "s0", "=w"));
            }
            *(_BYTE*)(*v53 + 148) = 0;
            *(_DWORD*)(*v53 + 184) = 0;
            if ((v152_.v152 & 1) == 0) {
              goto LABEL_139;
            }
          }
          else {
            if (snd_BGM_equals((__int64)&v152_.v152, &GameData_1a9f09e)) {
              goto LABEL_156;
            }
          LABEL_179:
            v137 = GameRoutine_190240((__int64)&v152_.v152),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
            if (snd_hasSound(v137)) {
              goto LABEL_180;
            }
          LABEL_157:
            if ((v152_.v152 & 1) == 0) {
              goto LABEL_139;
            }
          }
          (*(void (**)(_QWORD, __int64))(**(_QWORD**)snd_g_memory_ptr[0] +
                                         24LL))(*snd_g_memory_ptr[0],
                                                v152_.v154),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          goto LABEL_139;
        }
        if (v109 > v119) {
          v12 = &GameData_1fbea38;
          if (v100 != 0) {
            v124 = *(_QWORD*)snd_g_proxy_ptr[0];
            v125 = (const char*)GameRoutine_190240(v100 + 88),
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
            (*(void (**)(__int64, const char*, ...))(*(_QWORD*)v124 + 384LL))(
                v124, "#Sound warning : Env Voice AutoStop Out of range : %s\n",
                v125),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            (*(void (**)(_QWORD*))(*v99 + 264LL))(v99),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            v118 = (_BYTE*)*v53;
          }
          v118[148] = 1;
          goto LABEL_151;
        }
        if (v100 != 0) {
          goto LABEL_140;
        }
        v129 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v118 + 24LL))(v118),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v130 = snd_isLoaded(v129),
        v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
        v12 = (__int64*)GameData_212e2d8;
        if ((v130 & 1) != 0) {
          v131 = (*(__int64 (**)(__int64))(*(_QWORD*)*v53 + 24LL))(*v53),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          v132 = *v53;
          v133 = v131;
          snd_Fade_Fade_10c830((__int64)&v145_.v145, *(float*)(*v53 + 184)),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          snd_playAt_ff5f0((void*)(handle), (__int64)"Env", v133, v132 + 120,
                           (__int64)&v145_.v145, 0, 0x10001u, 0, 0x0.0p+0f,
                           0x1.0000000000000p+0f),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          GameRoutine_112180(*v53 + 40, (__int64)&v152_.v152),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          snd_Fade_Destroy_Fade(&v145_.v145),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          v134 = snd_fnd_WeakHandle_get(*v53 + 40),
          v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
          v135 = v134 - 5592;
          if (v134 != 0) {
            v99 = (_QWORD*)(v134 - 5592);
          }
          else {
            v99 = nullptr;
          }
          if (v134 != 0) {
            (*(void (**)(__int64, __int64))(*(_QWORD*)v135 + 632LL))(
                v134 - 5592, 4),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            *(float*)(*v53 + 144) =
                (*(float (**)(__int64))(*(_QWORD*)v135 + 112LL))(v135),
                             v8 = COERCE_AS(__typeof__(v8),
                                            PSEUDO_REGISTER(float, "s0", "=w"));
          }
          *(_BYTE*)(*v53 + 148) = 0;
          *(_DWORD*)(*v53 + 184) = 0;
        LABEL_140:
          v108 = *v53;
          if (v99 == nullptr || (*(_BYTE*)(v108 + 148) & 1) != 0) {
          LABEL_136:
            v12 = (__int64*)GameData_212e2d8;
            if (v99 != nullptr) {
              goto LABEL_148;
            }
          }
          else {
            v110 = v57;
            v12 = (__int64*)GameData_212e2d8;
            if (*(float*)(v108 + 180) > 0x0.0p+0f) {
              v111 = snd_fnd_calcDistanceTo((float*)(v108 + 192),
                                            (float*)v158_.v158) /
                     *(float*)(*v53 + 180),
              v8 =
                  COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
              if (v111 <= 0x1.0000000000000p+0f) {
                v112 = v111;
              }
              else {
                v112 = 0x1.0000000000000p+0f;
              }
              snd_Fade_Fade_10c830((__int64)&v145_.v145, 0x0.0p+0f),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
              (*(void (**)(_QWORD*, __int64*, float))(v99[5] + 192LL))(
                  v99 + 5, &v145_.v145, v112),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
              snd_Fade_Destroy_Fade(&v145_.v145),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
              v110 = v57 * v112;
            }
            snd_Fade_Fade_10c830((__int64)&v145_.v145, 0x1.9000000000000p+6f),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            (*(void (**)(_QWORD*, __int64*, float))(v99[5] + 72LL))(
                v99 + 5, &v145_.v145, v110),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            snd_Fade_Destroy_Fade(&v145_.v145),
                v8 = COERCE_AS(__typeof__(v8),
                               PSEUDO_REGISTER(float, "s0", "=w"));
            v108 = *v53;
          LABEL_148:
            v113 = v107 | *(_BYTE*)(v108 + 152);
            v114 = snd_fnd_WeakHandle_get((__int64)(v99 + 731)) - 5592,
            v8 = COERCE_AS(__typeof__(v8), PSEUDO_REGISTER(float, "s0", "=w"));
            v115 = *v53 + 120;
            if ((v113 & 1) != 0) {
              Actor_102590(v114, v115),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
            }
            else {
              Actor_102560(v114, v115),
                  v8 = COERCE_AS(__typeof__(v8),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
            }
          }
        }
      LABEL_151:
        v116 = v158_.v159;
        v117 = *v53;
        *(_QWORD*)(v117 + 200) = v158_.v158[1];
        *(_DWORD*)(v117 + 208) = v116;
      }
    LABEL_69:
      if (++v53 == v52) {
        goto LABEL_188;
      }
    }
  }
  v56 = 0x0.0p+0f;
  v55 = 0x0.0p+0f;
  v54 = -1;
LABEL_188:
  *(_DWORD*)(a1 + 376) = v54;
  *(float*)(a1 + 380) = v55;
  *(float*)(a1 + 384) = v56;
}

void Env_e0580(__int64 a1, _QWORD* a2, char* a3, char* a4, char* a5, char a6,
               __int64 a7, __int64 a8, __int64 a9)
{

#pragma clang fp contract(off)
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  unsigned __int64 v21;
  _QWORD* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  char* v33;
  char* v34;
  _QWORD* v35;
  _QWORD* v36;
  __int64 v37;
  void* v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64* v44;
  __int64 v45;
  unsigned __int8* v46;
  float v47;
  float v48;
  __int64 v49;
  unsigned __int8* v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  struct {
    unsigned int v54;
    unsigned int v55;
  } v54_;
  struct {
    __int64 v56;
    __int64 v57;
    float v58;
  } v56_;
  struct {
    void* v59[2];
    void* v60;
  } v59_;
  unsigned __int8 v61[256];
  _QWORD v62[3];
  __int64 v63[2];

  if (a2 == nullptr) {
    return;
  }
  v17 = Crc32List_1163b0();
  Manager_1181f0((void*)((__int64)v63), v17, -1);
  if ((snd_fnd_WeakHandle_isValid(v63) & 1) == 0) {
    return;
  }
  v18 = snd_fnd_WeakHandle_get((__int64)v63);
  if (v18 != 0) {
    v19 = v18 - 5592;
  }
  else {
    v19 = 0;
  }
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
      *(_QWORD*)(v19 + 40) + 1048LL))((void*)(v62), v19 + 40);
  GameRoutine_190200(a7 + 80, a3);
  if ((a6 & 1) != 0 && *(_BYTE*)(a7 + 153) == 1) {
    *(_BYTE*)(a7 + 154) = 1;
    if (*a4 != 0) {
      goto LABEL_12;
    }
    if (*a5 == 0) {
      a5 = &GameData_1a9f09e;
      a4 = "_Hds";
    }
  }
  if (*a4 == 0) {
  LABEL_16:
    if (*a5 == 0 || (GameRoutine_a2af20((__int64)v61, 256, "%s%s", a3, a5),
                     !snd_hasSound_alt1(v61))) {
      GameRoutine_a2af20((__int64)v61, 256, "%s", a3);
    }
    goto LABEL_19;
  }
LABEL_12:
  if (*a5 != 0) {
    GameRoutine_a2af20((__int64)v61, 256, "%s%s%s", a3, a4, a5);
    if (snd_hasSound_alt1(v61)) {
      goto LABEL_19;
    }
    if (*a4 == 0) {
      goto LABEL_16;
    }
  }
  GameRoutine_a2af20((__int64)v61, 256, "%s%s", a3, a4);
  if (!snd_hasSound_alt1(v61)) {
    goto LABEL_16;
  }
LABEL_19:
  (*(void (**)(__int64, unsigned __int8*))(*(_QWORD*)a7 + 16LL))(a7, v61);
  GameRoutine_112180(a7 + 104, a8);
  v20 = *(_DWORD*)(a7 + 32);
  *(_DWORD*)(a7 + 144) = 0;
  *(_BYTE*)(a7 + 148) = 0;
  if (v20 > 8) {
    if (v20 != 11 && v20 != 10 && v20 != 9) {
      goto LABEL_43;
    }
  LABEL_26:
    *(_BYTE*)(a7 + 148) = 1;
    goto LABEL_27;
  }
  if ((unsigned int)(v20 - 7) < 2) {
    goto LABEL_27;
  }
  if (v20 == 6) {
    goto LABEL_26;
  }
LABEL_43:
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, unsigned __int8*))(
      **(_QWORD**)snd_g_proxy_ptr[0] + 480LL))(
      (void*)(v59_.v59), *(_QWORD*)snd_g_proxy_ptr[0], v61);
  if (((__int64)v59_.v59[0] & 1) != 0) {
    v38 = v59_.v59[1];
  }
  else {
    v38 = (void*)(LOBYTE(v59_.v59[0]) >> 1);
  }
  if (v38 == nullptr) {
    GameRoutine_60a020((__int64)v59_.v59, (const char*)v61);
  }
  if (***(_DWORD***)(a7 + 56) != 1) {
    v56_.v58 = 0x0.0p+0f;
    v56_.v56 = GameData_212e2d8 + 16;
    v56_.v57 = 0;
    v44 = snd_s_target_ptr;
    v45 = *snd_s_target_ptr;
    if (((__int64)v59_.v59[0] & 1) != 0) {
      v46 = (unsigned __int8*)v59_.v60;
    }
    else {
      v46 = (unsigned __int8*)v59_.v59 + 1;
    }
    v54_.v54 = (unsigned int)snd_fnd_calcCrc32(v46, 0);
    v54_.v55 = (unsigned int)snd_fnd_calcCrc32Reverse((const char*)v46, 0);
    v47 = (*(float (**)(__int64, unsigned int*))(*(_QWORD*)v45 + 528LL))(
        v45, &v54_.v54);
    if (v47 == 0x0.0p+0f) {
      Env_e0b20(a1, a7, (__int64)&v56_.v56, (__int64)v62);
    }
    else {
      v48 = v47;
      GameRoutine_e0de0(a1, a7, (__int64)&v56_.v56, (float*)v62, v47);
      v49 = *v44;
      if (((__int64)v59_.v59[0] & 1) != 0) {
        v50 = (unsigned __int8*)v59_.v60;
      }
      else {
        v50 = (unsigned __int8*)v59_.v59 + 1;
      }
      v54_.v54 = (unsigned int)snd_fnd_calcCrc32(v50, 0);
      v54_.v55 = (unsigned int)snd_fnd_calcCrc32Reverse((const char*)v50, 0);
      if ((*(float (**)(__int64, unsigned int*, float, float, float))(
              *(_QWORD*)v49 + 544LL))(v49, &v54_.v54, *(float*)&v56_.v57,
                                      *((float*)&v56_.v57 + 1),
                                      v56_.v58) <= 0x0.0p+0f) {
        *(float*)(a7 + 144) = v48;
        *(_BYTE*)(a7 + 148) = 1;
        if (((__int64)v59_.v59[0] & 1) == 0) {
          goto LABEL_27;
        }
        goto LABEL_70;
      }
    }
    if (((__int64)v59_.v59[0] & 1) != 0) {
      v51 = (char*)v59_.v60;
    }
    else {
      v51 = (char*)v59_.v59 + 1;
    }
    snd_playDirectAt_ffa30((__int64)"Env", (__int64)v51, (__int64)&v56_.v56, a9,
                           0, 0x10001u, 0, 0x1.9000000000000p+6f,
                           0x1.0000000000000p+0f);
    GameRoutine_112180(a7 + 40, (__int64)&v54_.v54);
    v52 = snd_fnd_WeakHandle_get(a7 + 40);
    if (v52 == 0) {
      goto LABEL_69;
    }
    v53 = v52;
    (*(void (**)(__int64, __int64))(*(_QWORD*)(v52 - 5592) + 632LL))(v52 - 5592,
                                                                     4);
    v42 = *(_QWORD*)(v53 - 5592);
    v43 = v53 - 5592;
    goto LABEL_68;
  }
  if (((__int64)v59_.v59[0] & 1) != 0) {
    v39 = (char*)v59_.v60;
  }
  else {
    v39 = (char*)v59_.v59 + 1;
  }
  snd_playDirect_ff6f0((__int64)"Env", (__int64)v39, a9, 0, 0x10001u, 0,
                       0x0.0p+0f, 0x1.0000000000000p+0f);
  GameRoutine_112180(a7 + 40, (__int64)&v56_.v56);
  v40 = snd_fnd_WeakHandle_get(a7 + 40);
  if (v40 != 0) {
    v41 = v40;
    snd_Fade_Fade_10c830((__int64)&v56_.v56, 0x0.0p+0f);
    (*(void (**)(__int64, __int64*, float))(*(_QWORD*)(v41 - 5552) + 240LL))(
        v41 - 5552, &v56_.v56, 0x1.0000000000000p+0f);
    snd_Fade_Destroy_Fade(&v56_.v56);
    (*(void (**)(__int64, __int64))(*(_QWORD*)(v41 - 5592) + 632LL))(v41 - 5592,
                                                                     8);
    v42 = *(_QWORD*)(v41 - 5592);
    v43 = v41 - 5592;
  LABEL_68:
    *(float*)(a7 + 144) = (*(float (**)(__int64))(v42 + 112))(v43);
  }
LABEL_69:
  *(_BYTE*)(a7 + 155) = 1;
  if (((__int64)v59_.v59[0] & 1) != 0) {
  LABEL_70:
    GameRoutine_651250((__int64)v59_.v60);
  }
LABEL_27:
  v22 = (_QWORD*)a2[5];
  v21 = a2[6];
  if ((unsigned __int64)v22 >= v21) {
    v24 = a2[4];
    v25 = (__int64)v22 - v24;
    v26 = (v25 >> 3) + 1;
    if (v26 >> 61 != 0) {
      GameRoutine_e30f0();
    }
    v27 = v21 - v24;
    v28 = snd_g_memory_ptr[0];
    v29 = v27 >> 2;
    if (v27 >> 2 <= v26) {
      v29 = (v25 >> 3) + 1;
    }
    if ((unsigned __int64)v27 >= 0x7FFFFFFFFFFFFFF8LL) {
      v30 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v30 = v29;
    }
    v31 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)snd_g_memory_ptr[0] + 16LL))(*snd_g_memory_ptr[0], 8 * v30,
                                                 32);
    v32 = (_QWORD*)(v31 + v25);
    *v32 = a7;
    v23 = v31 + v25 + 8;
    v33 = (char*)a2[4];
    v34 = (char*)a2[5];
    v35 = (_QWORD*)((char*)v32 + ((char*)v33 - (char*)v34));
    if (v34 != v33) {
      v36 = v35;
      do {
        v37 = *(_QWORD*)v33;
        v33 += 8;
        *v36++ = v37;
      } while (v33 != v34);
      v33 = (char*)a2[4];
    }
    a2[4] = v35;
    a2[5] = v23;
    a2[6] = v31 + 8 * v30;
    if (v33 != nullptr) {
      (*(void (**)(__int64))(*(_QWORD*)*v28 + 24LL))(*v28);
    }
  }
  else {
    *v22 = a7;
    v23 = (__int64)(v22 + 1);
  }
  a2[5] = v23;
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

__int64 Env_e1c50(__int64 a1, _BYTE* a2, const char* a3, char* a4,
                  const char* a5, __int64 a6, __int64 a7)
{

#pragma clang fp contract(off)
  const char* v9;
  char* v10;
  const char* v11;
  const char* v13;
  int v14;
  char* v15;
  __int64 result;
  char v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  char* v20;
  bool v21;
  _BOOL4 v22;
  int v23;
  char v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  char* v27;
  bool v28;
  char v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  char* v32;
  bool v33;
  char v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  char* v37;
  bool v38;
  unsigned __int64 v39;
  __int64 v40;
  const char* v41;
  unsigned __int64 v42;
  char v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  char* v46;
  double v47;
  __int64 v48;
  unsigned __int64 v49;
  char v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  char* v53;
  char* v54;
  bool v55;
  struct {
    _QWORD v56[2];
    char* v57;
  } v56_;
  void* v58[3];
  struct {
    __int64 v59;
    unsigned __int64 v60;
    char* v61;
  } v59_;
  _QWORD v62[32];

  v9 = a5;
  v10 = a4;
  v11 = a3;
  if (a2[153] == 1 && (a2[154] & 1) != 0 && *a3 == 0 && *a4 == 0 && *a5 == 0) {
    v11 = "_Hds";
    v9 = &GameData_1a9f09e;
    v10 = &GameData_1a9f09e;
  }
  v13 = (const char*)GameRoutine_190240((__int64)(a2 + 80));
  v14 = *(unsigned __int8*)v9;
  v15 = (char*)v13;
  memset(v62, 0, sizeof(v62));
  if (v14 != 0) {
    GameRoutine_a2af20((__int64)v62, 256, "%s%s", v13, v9);
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _BYTE*))(
        *(_QWORD*)a2 + 32LL))((void*)(&v59_.v59), a2);
    result = strlen_alt1((const char*)v62);
    v17 = v59_.v59;
    v18 = (unsigned __int8)v59_.v59 >> 1;
    if ((v59_.v59 & 1) != 0) {
      v18 = v59_.v60;
    }
    if (result == v18) {
      v19 = result;
      if (result == -1) {
        goto LABEL_111;
      }
      if ((v59_.v59 & 1) != 0) {
        v20 = v59_.v61;
      }
      else {
        v20 = (char*)&v59_.v59 + 1;
      }
      result = memcmp_alt1((__int64)v20, (__int64)v62, v19);
      v21 = (_DWORD)result == 0;
      if ((v17 & 1) == 0) {
      LABEL_21:
        if (v21) {
          return result;
        }
        v22 = snd_hasSound((__int64)v62);
        v23 = *(unsigned __int8*)v11;
        if (*v11 == 0) {
          goto LABEL_33;
        }
        goto LABEL_23;
      }
    }
    else {
      v21 = false;
      if ((v59_.v59 & 1) == 0) {
        goto LABEL_21;
      }
    }
    result =
        (*(__int64 (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                        24LL))(*snd_g_memory_ptr[0], v59_.v61);
    goto LABEL_21;
  }
  v22 = false;
  v23 = *(unsigned __int8*)v11;
  if (*v11 == 0) {
    goto LABEL_33;
  }
LABEL_23:
  if (*v10 != 0) {
    GameRoutine_a2af20((__int64)v62, 256, v15, v11, v10);
    (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _BYTE*))(
        *(_QWORD*)a2 + 32LL))((void*)(&v59_.v59), a2);
    result = strlen_alt1((const char*)v62);
    v24 = v59_.v59;
    v25 = (unsigned __int8)v59_.v59 >> 1;
    if ((v59_.v59 & 1) != 0) {
      v25 = v59_.v60;
    }
    if (result == v25) {
      v26 = result;
      if (result == -1) {
        goto LABEL_111;
      }
      if ((v59_.v59 & 1) != 0) {
        v27 = v59_.v61;
      }
      else {
        v27 = (char*)&v59_.v59 + 1;
      }
      result = memcmp_alt1((__int64)v27, (__int64)v62, v26);
      v28 = (_DWORD)result == 0;
      if ((v24 & 1) == 0) {
      LABEL_46:
        if (v28) {
          return result;
        }
        if (((v22 | snd_hasSound((__int64)v62)) & 1) != 0) {
          goto LABEL_84;
        }
        if (*v11 == 0) {
          goto LABEL_54;
        }
      LABEL_35:
        GameRoutine_a2af20((__int64)v62, 256, "%s%s", v15, v11);
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _BYTE*))(
            *(_QWORD*)a2 + 32LL))((void*)(&v59_.v59), a2);
        result = strlen_alt1((const char*)v62);
        v29 = v59_.v59;
        v30 = (unsigned __int8)v59_.v59 >> 1;
        if ((v59_.v59 & 1) != 0) {
          v30 = v59_.v60;
        }
        if (result == v30) {
          v31 = result;
          if (result == -1) {
            goto LABEL_111;
          }
          if ((v59_.v59 & 1) != 0) {
            v32 = v59_.v61;
          }
          else {
            v32 = (char*)&v59_.v59 + 1;
          }
          result = memcmp_alt1((__int64)v32, (__int64)v62, v31);
          v33 = (_DWORD)result == 0;
          if ((v29 & 1) == 0) {
            goto LABEL_52;
          }
        }
        else {
          v33 = false;
          if ((v59_.v59 & 1) == 0) {
            goto LABEL_52;
          }
        }
        result = (*(__int64 (**)(_QWORD, char*))(
            **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0],
                                                     v59_.v61);
      LABEL_52:
        if (v33) {
          return result;
        }
        if (snd_hasSound((__int64)v62)) {
          goto LABEL_84;
        }
        goto LABEL_54;
      }
    }
    else {
      v28 = false;
      if ((v59_.v59 & 1) == 0) {
        goto LABEL_46;
      }
    }
    result =
        (*(__int64 (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                        24LL))(*snd_g_memory_ptr[0], v59_.v61);
    goto LABEL_46;
  }
LABEL_33:
  if (v22) {
  LABEL_84:
    (*(void (**)(_BYTE*, _QWORD*))(*(_QWORD*)a2 + 16LL))(a2, v62);
    a2[148] = 1;
    v47 = snd_Fade_getTime(a6);
    *((_DWORD*)a2 + 46) = LODWORD(v47);
    result = snd_fnd_WeakHandle_isValid((__int64*)a2 + 5);
    if ((result & 1) != 0) {
      v48 = snd_fnd_WeakHandle_get((__int64)(a2 + 40));
      return (*(__int64 (**)(__int64, __int64, _QWORD, double))(
          *(_QWORD*)(v48 - 5592) + 248LL))(v48 - 5592, a7, 0, 0x0.0p+0);
    }
    return result;
  }
  if (v23 != 0) {
    goto LABEL_35;
  }
LABEL_54:
  if (*v10 == 0) {
    goto LABEL_68;
  }
  GameRoutine_a2af20((__int64)v62, 256, "%s%s", v15, v10);
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _BYTE*))(
      *(_QWORD*)a2 + 32LL))((void*)(&v59_.v59), a2);
  result = strlen_alt1((const char*)v62);
  v34 = v59_.v59;
  v35 = (unsigned __int8)v59_.v59 >> 1;
  if ((v59_.v59 & 1) != 0) {
    v35 = v59_.v60;
  }
  if (result == v35) {
    v36 = result;
    if (result == -1) {
      goto LABEL_111;
    }
    if ((v59_.v59 & 1) != 0) {
      v37 = v59_.v61;
    }
    else {
      v37 = (char*)&v59_.v59 + 1;
    }
    result = memcmp_alt1((__int64)v37, (__int64)v62, v36);
    v38 = (_DWORD)result == 0;
    if ((v34 & 1) == 0) {
      goto LABEL_66;
    }
  }
  else {
    v38 = false;
    if ((v59_.v59 & 1) == 0) {
      goto LABEL_66;
    }
  }
  result = (*(__int64 (**)(_QWORD, char*))(
      **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0], v59_.v61);
LABEL_66:
  if (v38) {
    return result;
  }
  if (snd_hasSound((__int64)v62)) {
    goto LABEL_84;
  }
LABEL_68:
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, char*))(
      **(_QWORD**)snd_g_proxy_ptr[0] + 480LL))(
      (void*)(v58), *(_QWORD*)snd_g_proxy_ptr[0], v15);
  GameRoutine_190120(&v59_.v59, (unsigned __int8*)v58);
  if (((__int64)v58[0] & 1) != 0) {
    GameRoutine_651250((__int64)v58[2]);
    if ((v59_.v59 & 1) != 0) {
      v49 = v59_.v60;
    }
    else {
      v49 = (unsigned __int8)v59_.v59 >> 1;
    }
    if (v49 != 0) {
    LABEL_73:
      if ((snd_fnd_WeakHandle_isValid((__int64*)a2 + 5) & 1) != 0) {
        goto LABEL_74;
      }
    LABEL_92:
      result = (__int64)X8CALL_X0(
          _QWORD*, (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _BYTE*))(
                       *(_QWORD*)a2 + 32LL))((void*)v56_.v56, a2));
      v43 = v59_.v59;
      v50 = v56_.v56[0];
      if ((v59_.v59 & 1) != 0) {
        v51 = v59_.v60;
      }
      else {
        v51 = (unsigned __int64)(unsigned __int8)v59_.v59 >> 1;
      }
      v52 = v56_.v56[1];
      if ((v56_.v56[0] & 1) == 0) {
        v52 = (unsigned __int64)LOBYTE(v56_.v56[0]) >> 1;
      }
      if (v51 == v52) {
        if ((v59_.v59 & 1) != 0) {
          v53 = v59_.v61;
        }
        else {
          v53 = (char*)&v59_.v59 + 1;
        }
        if ((v56_.v56[0] & 1) != 0) {
          v54 = v56_.v57;
        }
        else {
          v54 = (char*)v56_.v56 + 1;
        }
        result = memcmp_alt1((__int64)v53, (__int64)v54, v51);
        v55 = (_DWORD)result == 0;
      }
      else {
        v55 = false;
      }
      if ((v50 & 1) != 0) {
        result = (*(__int64 (**)(_QWORD, char*))(
            **(_QWORD**)snd_g_memory_ptr[0] + 24LL))(*snd_g_memory_ptr[0],
                                                     v56_.v57);
        v43 = v59_.v59;
      }
      if (!v55) {
        goto LABEL_82;
      }
      goto LABEL_109;
    }
  }
  else {
    if ((v59_.v59 & 1) != 0) {
      v39 = v59_.v60;
    }
    else {
      v39 = (unsigned __int8)v59_.v59 >> 1;
    }
    if (v39 != 0) {
      goto LABEL_73;
    }
  }
  GameRoutine_190200((__int64)&v59_.v59, v15);
  if ((snd_fnd_WeakHandle_isValid((__int64*)a2 + 5) & 1) == 0) {
    goto LABEL_92;
  }
LABEL_74:
  v40 = snd_fnd_WeakHandle_get((__int64)(a2 + 40));
  v41 = (const char*)GameRoutine_190240(v40 + 144);
  v42 = strlen_alt1(v41);
  v43 = v59_.v59;
  v44 = (unsigned __int8)v59_.v59 >> 1;
  if ((v59_.v59 & 1) != 0) {
    v44 = v59_.v60;
  }
  if (v42 != v44) {
    goto LABEL_82;
  }
  v45 = v42;
  if (v42 == -1) {
  LABEL_111:
    snd_a36650();
  }
  if ((v59_.v59 & 1) != 0) {
    v46 = v59_.v61;
  }
  else {
    v46 = (char*)&v59_.v59 + 1;
  }
  result = memcmp_alt1((__int64)v46, (__int64)v41, v45);
  if ((_DWORD)result != 0) {
  LABEL_82:
    strcpy((__int64)v62, v15);
    if ((v43 & 1) != 0) {
      (*(void (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] + 24LL))(
          *snd_g_memory_ptr[0], v59_.v61);
    }
    goto LABEL_84;
  }
LABEL_109:
  if ((v43 & 1) != 0) {
    return (*(__int64 (**)(_QWORD, char*))(**(_QWORD**)snd_g_memory_ptr[0] +
                                           24LL))(*snd_g_memory_ptr[0],
                                                  v59_.v61);
  }
  return result;
}

__int64 Env_e25a0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  _QWORD handle[2];
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
              snd_play_ff2d0((void*)(handle), (__int64)"Env", v19,
                             (__int64)v31_.v31, 0, 0x10001u, 0, 0x0.0p+0f,
                             0x1.0000000000000p+0f);
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
                *(float*)(*v12 + 144) =
                    ((float (*)(__int64))v22)(v21 - 5592);
              }
            }
            else {
              v29_.v29[0] = v10;
              v29_.v29[1] = 0;
              v29_.v30 = 0;
              Env_e0b20(v27, *v12, (__int64)v29_.v29, (__int64)v33);
              v23 = (*(__int64 (**)(__int64))(*(_QWORD*)*v12 + 24LL))(*v12);
              snd_Fade_Fade_10c830((__int64)v31_.v31, 0x0.0p+0f);
              snd_playAt_ff5f0((void*)(handle), (__int64)"Env", v23,
                               (__int64)v29_.v29, (__int64)v31_.v31, 0,
                               0x10001u, 0, 0x1.9000000000000p+6f,
                               0x1.0000000000000p+0f);
              GameRoutine_112180(*v12 + 40, (__int64)v28);
              snd_Fade_Destroy_Fade(v31_.v31);
              v24 = snd_fnd_WeakHandle_get(*v12 + 40);
              if (v24 != 0) {
                v25 = v24;
                (*(void (**)(__int64, __int64))(*(_QWORD*)(v24 - 5592) +
                                                632LL))(v24 - 5592, 4);
                v22 = *(float (**)(void))(*(_QWORD*)(v25 - 5592) + 112LL);
                v21 = v25;
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

bool Env_e2d10(__int64 a1, float* a2, float* a3, float* a4)
{

#pragma clang fp contract(off)
  float v4;
  float v5;
  float v6;
  float v9;
  float v10;
  float v11;
  float v12;
  float v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;

  v4 = a2[4];
  v5 = a2[5];
  v6 = a2[6];
  v9 = a2[10];
  v10 = a2[11];
  v11 = a2[12];
  v12 = snd_fnd_calcDistance_fec10(v4, v6, a3[2], a3[4]);
  v13 = snd_fnd_calcDistance_fec10(v4, v6, v9, v11);
  v14 = a3[2];
  v15 = v13;
  if (v12 >= v13) {
    v19 = snd_fnd_calcAngle_fecf0(v4, v6, v14, a3[4]);
    a4[2] = v4;
    a4[4] = v6;
    snd_fnd_moveByAngle(a4 + 2, a4 + 4, v15, v19);
    v16 = a3[3];
    if (v5 <= v10) {
      v17 = v5;
    }
    else {
      v17 = v10;
    }
    if (v5 <= v10) {
      v18 = v10;
    }
    else {
      v18 = v5;
    }
    if (v17 <= v16) {
      goto LABEL_9;
    }
  LABEL_18:
    a4[3] = v17;
    return v12 < v15;
  }
  a4[2] = v14;
  a4[4] = a3[4];
  v16 = a3[3];
  if (v5 <= v10) {
    v17 = v5;
  }
  else {
    v17 = v10;
  }
  if (v5 <= v10) {
    v18 = v10;
  }
  else {
    v18 = v5;
  }
  if (v17 > v16) {
    goto LABEL_18;
  }
LABEL_9:
  if (v18 >= v16) {
    a4[3] = v16;
  }
  else {
    a4[3] = v18;
  }
  return v12 < v15;
}

#pragma GCC visibility pop
