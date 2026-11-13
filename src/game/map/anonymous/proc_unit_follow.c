#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterBuilder_1084780(void);
__int64 Cursor_734a80(__int64, __int64*);
__int64 GameRoutine_658c00(_QWORD);
__int64 IRoute_751080(_QWORD, _QWORD, long double);
__int64 IRoute_751300(_QWORD, _QWORD);
__int64 Image_72a260(_QWORD);
__int64 Image_72b4a0(_QWORD);
__int64 Image_72b6c0(_QWORD);
__int64 UnitActor_81ba20(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_stop_ffc40(_QWORD, _QWORD, long double);
__n128 snd_Fade_Fade_10c830(_QWORD, float);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitAction_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitFollow_vtable[])();
extern __int64 GameData_21ca300;
extern __int64 GameData_21cd100;
float Unit_6c7fa0(__int64, __int64);
void GameRoutine_6c7cb0(__int64, __int64, __int64);
__int64 ProcUnitFollow_Destructor(__int64 a1, long double a2);
__int64 GameRoutine_7435e0(_QWORD, long double);
__int64 Height_7c4d10(_QWORD, long double, float);
__int64 ProcInst_657a50(_QWORD, _QWORD);
__int64 snd_setPosition_100510(_QWORD, _QWORD);
extern _UNKNOWN* GameData_212cf50;
extern __int64 (*snd_Vec3_vtable[])();
extern __int64* GameData_212ce80[5];
extern __int64* GameData_212cfc0[10];
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
void Cursor_730ff0(__int64, float*);
void ProcUnitFollow_Unknown2(__int64 a1, long double a2);

__int64 ProcUnitFollow_Destructor(__int64 a1, long double a2)
{
  __int64 v2;
  char v4;
  char v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  unsigned int v11;
  float v12;
  __int128 v13;
  __int128 v14;
  __int64 v15;
  __int64 v16;
  long double v17;
  __int64 v18;
  int v19;
  __int64 v21;
  unsigned int v22;
  __int64 v23[26];

  v2 = *(_QWORD*)(a1 + 152);
  *(_QWORD*)a1 = game_map_anonymous_ProcUnitFollow_vtable;
  v4 = IRoute_751080(a1 + 160, v2, a2);
  v5 = IRoute_751300(a1 + 160, v2);
  if (v2 != 0) {
    *(_BYTE*)(v2 + 584) = v4;
    *(_BYTE*)(v2 + 585) = v5;
    GameRoutine_6c7cb0(v2, (unsigned int)v4, (unsigned int)v5);
    v6 = *(_QWORD*)(v2 + 8);
    if (v6 != 0) {
      v7 = *(char*)(v6 + 584);
      if ((v7 & 0x80000000) == 0) {
        v8 = *(char*)(v6 + 585);
        if ((v8 & 0x80000000) == 0) {
          v9 = *(_DWORD*)(v6 + 592);
          v10 = v7 | 0x100;
          v11 = v8 | 0x100;
          v12 = (float)(unsigned int)(v9 - 1) * 2.5;
          if (v9 <= 0) {
            v12 = 0.0;
          }
          *(_QWORD*)&v13 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)v10 * 5.0) + 2.5) +
                      -0x1.4000000000000p+10) +
              v12);
          v21 = COERCE_UNSIGNED_INT(
              (float)((float)((float)((float)v11 * 5.0) + 2.5) +
                      -0x1.4000000000000p+10) +
              v12);
          *(float*)&v22 = (float)((float)((float)((float)v10 * 5.0) + 2.5) +
                                  -0x1.4000000000000p+10) +
                          v12;
          *((_QWORD*)&v13 + 1) = v21;
          *(_OWORD*)v23 = v13;
          *(_QWORD*)&v14 = __PAIR64__(
              COERCE_UNSIGNED_INT(Unit_6c7fa0(v6, (__int64)v23)), v22);
          *((_QWORD*)&v14 + 1) = v21;
          *(_OWORD*)v23 = v14;
          Cursor_734a80(v2 + 48, v23);
          UnitActor_81ba20(v2);
        }
      }
      if (*(_QWORD*)(v2 + 264) != 0) {
        CharacterBuilder_1084780();
      }
    }
    v15 = GameData_21ca300;
    v16 = *(_QWORD*)(GameData_21ca300 + 96);
    Image_72b4a0(v16);
    Image_72b6c0(v16);
    Image_72a260(*(_QWORD*)(v15 + 152));
  }
  *(__n128*)&v17 = snd_Fade_Fade_10c830(v23, 0.0);
  snd_stop_ffc40(a1 + 368, v23, v17);
  snd_Fade_Destroy_Fade(v23);
  *(_QWORD*)a1 = game_map_anonymous_ProcUnitAction_vtable;
  v18 = GameData_21cd100;
  v19 = *(_DWORD*)(GameData_21cd100 + 16) - 1;
  *(_DWORD*)(GameData_21cd100 + 16) = v19;
  if (v19 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v18 + 8) + 8LL))(v18 + 8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

void ProcUnitFollow_Unknown2(__int64 a1, long double a2)
{
  __int64 v2;
  int v3;
  int v4;
  unsigned __int64 v5;
  float v6;
  char v7;
  float32x4_t v8;
  long double v9;
  float v10;
  float v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  __int64 v18;
  __int64 v19;
  unsigned __int8* v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  unsigned int v25;
  unsigned __int8* v26;
  unsigned int v27;
  int v28;
  int v29;
  __int64 v30;
  __int64 v31;
  unsigned __int8* v32;
  __int64 v33;
  __int64 v34;
  char* v35;
  int v36;
  __int64 v37;
  int v38;
  unsigned __int8* v39;
  unsigned int v40;
  __int64* v41;
  float v42;
  int v43;
  float32x4_t v44;
  int v45;
  __int64 v46;
  __int64 v47;
  unsigned __int8* v48;
  __int64 v49;
  __int64 v50;
  int v51;
  __int64 v52;
  unsigned int v53;
  unsigned __int8* v54;
  unsigned int v55;
  int v56;
  int v57;
  __int64 v58;
  __int64 v59;
  unsigned __int8* v60;
  char* v61;
  __int64 v62;
  __int64 v63;
  int v64;
  __int64 v65;
  int v66;
  unsigned __int8* v67;
  unsigned int v68;
  float v69;
  unsigned __int32 v70;
  __int64 v71;
  float32x4_t v72;
  float32x4_t v73;
  float32x4_t v74;
  float32x4_t v75;
  float v76;
  float v77;
  float32x4_t v78;
  __int64 v79[4];
  float32x4_t v80;

  v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  v2 = a1;
  if (game_ProcGameSkipView_instance_ == 0 ||
      *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
      (((v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
           ? (v4 = 2)
           : (v4 = 3),
       (v4 & v3) != 0)) {
    if (game_ProcFadeView_instance_ == 0 ||
        (*(float*)((v5 = game_ProcFadeView_instance_ +
                         ((unsigned __int64)*(
                              unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
                          << 6)) +
                   172) != *(float*)(v5 + 168)
             ? (a2 = *(long double*)(v5 + 208))
             : (a1 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)(v5 + 160) +
                                                        16LL))(v5 + 160)),
         *((float*)&a2 + 3) != 0x1.0000000000000p+0 ||
             (*(__n128*)& a2 = ((__n128 (*)(unsigned __int64, float)) *
                                (_QWORD*)(*(_QWORD*)(v5 + 160) + 16LL))(
                  v5 + 160, *((float*)&a2 + 3)),
              *((float*)&a2 + 3) != 0x1.0000000000000p+0))) {
      *(float*)&a2 = 0x1.e000000000000p+5 /
                     (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
      if (*(float*)&a2 <= 0.0) {
        v6 = 0x1.0000000000000p+0;
      }
      else {
        v6 = 0x1.e000000000000p+5 /
             (float)*(int*)(*game_g_frame_clock_ptr[0] + 476);
      }
      v7 = GameRoutine_7435e0(a1, a2),
      v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
      LODWORD(v9) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+1));
      if ((v7 & 1) == 0) {
        *(float*)&v9 = 0x1.0000000000000p+0;
      }
      v10 = *(float*)(v2 + 360) +
            (float)((float)(*(float*)&v9 * v6) * 0x1.4000000000000p-1);
      v11 = *(float*)(v2 + 356);
      *(float*)(v2 + 360) = v10;
      if (v10 <= v11) {
        v13 = *(_DWORD*)(v2 + 352);
      }
      else {
        v12 = *(_DWORD*)(v2 + 352);
        *(float*)(v2 + 360) = v10 - v11;
        v13 = v12 + 1;
        *(_DWORD*)(v2 + 352) = v12 + 1;
      }
      v14 = *(_DWORD*)(v2 + 296);
      if (v14 > v13) {
        v15 = *(_DWORD*)(v2 + 308);
        v16 = v15;
        if ((v15 & 0x80000000) == 0) {
          v16 = *(_DWORD*)(v2 + 308);
          v17 = v14 >= v13 ? v13 : *(_DWORD*)(v2 + 296);
          if (v17 >= 1) {
            v18 = v17 & 7;
            if ((unsigned int)v17 >= 8) {
              v20 = (unsigned __int8*)(v2 + 175);
              v21 = 0;
              v22 = -(__int64)(v17 & 0x7FFFFFF8);
              v16 = *(_DWORD*)(v2 + 308);
              do {
                v21 -= 8;
                v23 = v16 + *((char*)GameData_212cf50 + *(v20 - 7)) +
                      *((char*)GameData_212cf50 + *(v20 - 6)) +
                      *((char*)GameData_212cf50 + *(v20 - 5)) +
                      *((char*)GameData_212cf50 + *(v20 - 4)) +
                      *((char*)GameData_212cf50 + *(v20 - 3)) +
                      *((char*)GameData_212cf50 + *(v20 - 2));
                v24 = *(v20 - 1);
                v25 = *v20;
                v20 += 8;
                v16 = v23 + *((char*)GameData_212cf50 + v24) +
                      *((char*)GameData_212cf50 + v25);
              } while (v22 != v21);
              v19 = -v21;
              if (v18 == 0) {
                goto LABEL_37;
              }
            }
            else {
              v19 = 0;
              v16 = *(_DWORD*)(v2 + 308);
              if ((v17 & 7) == 0) {
                goto LABEL_37;
              }
            }
            v26 = (unsigned __int8*)(v19 + v2 + 168);
            do {
              v27 = *v26++;
              --v18;
              v16 += *((char*)GameData_212cf50 + v27);
            } while (v18 != 0);
          }
        }
      LABEL_37:
        v28 = *(_DWORD*)(v2 + 312);
        if ((v28 & 0x80000000) == 0) {
          v29 = v14 >= v13 ? v13 : *(_DWORD*)(v2 + 296);
          if (v29 >= 1) {
            v30 = v29 & 7;
            if ((unsigned int)v29 >= 8) {
              v32 = (unsigned __int8*)(v2 + 175);
              v33 = 0;
              v34 = -(__int64)(v29 & 0x7FFFFFF8);
              v35 = (char*)GameData_212cf50 + 256;
              do {
                v33 -= 8;
                v36 = v28 + v35[*(v32 - 7)] + v35[*(v32 - 6)] +
                      v35[*(v32 - 5)] + v35[*(v32 - 4)] + v35[*(v32 - 3)] +
                      v35[*(v32 - 2)];
                v37 = *(v32 - 1);
                v38 = *v32;
                v32 += 8;
                v28 = v36 + v35[v37] + v35[v38];
              } while (v34 != v33);
              v31 = -v33;
              if (v30 == 0) {
                goto LABEL_50;
              }
            }
            else {
              v31 = 0;
              if ((v29 & 7) == 0) {
                goto LABEL_50;
              }
            }
            v39 = (unsigned __int8*)(v31 + v2 + 168);
            do {
              v40 = *v39++;
              --v30;
              v28 += *((char*)GameData_212cf50 + v40 + 256);
            } while (v30 != 0);
          }
        }
      LABEL_50:
        v41 = GameData_212ce80[0];
        LANES128(v8).n128_f32[0] =
            (float)((float)((float)(v16 + 256) * 0x1.4000000000000p+2) +
                    0x1.4000000000000p+1) +
            -0x1.4000000000000p+10;
        v42 = (float)((float)((float)(v28 + 256) * 0x1.4000000000000p+2) +
                      0x1.4000000000000p+1) +
              -0x1.4000000000000p+10;
        if (*GameData_212ce80[0] != 0) {
          *(float*)&v9 =
              (float)((float)((float)(v16 + 256) * 0x1.4000000000000p+2) +
                      0x1.4000000000000p+1) +
              -0x1.4000000000000p+10;
          v74 = v8;
          v76 = (float)((float)((float)(v28 + 256) * 0x1.4000000000000p+2) +
                        0x1.4000000000000p+1) +
                -0x1.4000000000000p+10;
          Height_7c4d10(*(_QWORD*)(*GameData_212ce80[0] + 61456), v9, v42),
              v70 = COERCE_AS(__typeof__(v70),
                              PSEUDO_REGISTER(float, "s0", "=w"));
          v8 = v74;
          v42 = v76;
          v13 = *(_DWORD*)(v2 + 352);
          v15 = *(_DWORD*)(v2 + 308);
        }
        else {
          *(_QWORD*)&v9 = 0;
        }
        LANES128(v44).n128_u32[3] = 0;
        v43 = v13 + 1;
        LANES128(v44).n128_u32[0] = LANES128(v8).n128_u32[0];
        if ((v15 & 0x80000000) == 0) {
          v45 = *(_DWORD*)(v2 + 296) >= v43 ? v43 : *(_DWORD*)(v2 + 296);
          if (v45 >= 1) {
            v46 = v45 & 7;
            if ((unsigned int)v45 >= 8) {
              v48 = (unsigned __int8*)(v2 + 175);
              v49 = 0;
              v50 = -(__int64)(v45 & 0x7FFFFFF8);
              do {
                v49 -= 8;
                v51 = v15 + *((char*)GameData_212cf50 + *(v48 - 7)) +
                      *((char*)GameData_212cf50 + *(v48 - 6)) +
                      *((char*)GameData_212cf50 + *(v48 - 5)) +
                      *((char*)GameData_212cf50 + *(v48 - 4)) +
                      *((char*)GameData_212cf50 + *(v48 - 3)) +
                      *((char*)GameData_212cf50 + *(v48 - 2));
                v52 = *(v48 - 1);
                v53 = *v48;
                v48 += 8;
                v15 = v51 + *((char*)GameData_212cf50 + v52) +
                      *((char*)GameData_212cf50 + v53);
              } while (v50 != v49);
              v47 = -v49;
              if (v46 == 0) {
                goto LABEL_66;
              }
            }
            else {
              v47 = 0;
              if ((v45 & 7) == 0) {
                goto LABEL_66;
              }
            }
            v54 = (unsigned __int8*)(v47 + v2 + 168);
            do {
              v55 = *v54++;
              --v46;
              v15 += *((char*)GameData_212cf50 + v55);
            } while (v46 != 0);
          }
        }
      LABEL_66:
        LANES128(v44).n128_u32[1] = LODWORD(v9);
        v56 = *(_DWORD*)(v2 + 312);
        if (v56 < 0) {
          goto LABEL_79;
        }
        v57 = *(_DWORD*)(v2 + 296) >= v43 ? v43 : *(_DWORD*)(v2 + 296);
        if (v57 < 1) {
          goto LABEL_79;
        }
        v58 = v57 & 7;
        if ((unsigned int)v57 >= 8) {
          v60 = (unsigned __int8*)(v2 + 175);
          v61 = (char*)GameData_212cf50 + 256;
          v62 = 0;
          v63 = -(__int64)(v57 & 0x7FFFFFF8);
          do {
            v62 -= 8;
            v64 = v56 + v61[*(v60 - 7)] + v61[*(v60 - 6)] + v61[*(v60 - 5)] +
                  v61[*(v60 - 4)] + v61[*(v60 - 3)] + v61[*(v60 - 2)];
            v65 = *(v60 - 1);
            v66 = *v60;
            v60 += 8;
            v56 = v64 + v61[v65] + v61[v66];
          } while (v63 != v62);
          v59 = -v62;
          if (v58 == 0) {
          LABEL_79:
            LANES128(v44).n128_f32[2] = v42;
            LANES128(v8).n128_f32[0] =
                (float)((float)((float)(v15 + 256) * 0x1.4000000000000p+2) +
                        0x1.4000000000000p+1) +
                -0x1.4000000000000p+10;
            v69 = (float)((float)((float)(v56 + 256) * 0x1.4000000000000p+2) +
                          0x1.4000000000000p+1) +
                  -0x1.4000000000000p+10;
            if (*v41 != 0) {
              *(float*)&v9 =
                  (float)((float)((float)(v15 + 256) * 0x1.4000000000000p+2) +
                          0x1.4000000000000p+1) +
                  -0x1.4000000000000p+10;
              v75 = v44;
              v77 = (float)((float)((float)(v56 + 256) * 0x1.4000000000000p+2) +
                            0x1.4000000000000p+1) +
                    -0x1.4000000000000p+10;
              v73 = v8;
              Height_7c4d10(*(_QWORD*)(*v41 + 61456), v9, v69),
                  v70 = COERCE_AS(__typeof__(v70),
                                  PSEUDO_REGISTER(float, "s0", "=w"));
              v44 = v75;
              v69 = v77;
              v8 = v73;
            }
            else {
              v70 = 0;
            }
            LANES128(v8).n128_u32[1] = v70;
            v71 = *(_QWORD*)(v2 + 152) + 48LL;
            LANES128(v8).n128_f32[2] = v69;
            v72 = vmulq_n_f32(vmulq_n_f32(vsubq_f32(v8, v44),
                                          COERCE_FLOAT(*(_OWORD*)(v2 + 360))),
                              0x1.0000000000000p+0 / *(float*)(v2 + 356));
            LANES128(v72).n128_u32[3] = 0;
            v80 = vaddq_f32(v44, v72);
            v78 = v80;
            *(float32x4_t*)v79 = v80;
            Cursor_734a80(v71, v79),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            Cursor_730ff0(*GameData_212cfc0[0], (float*)&v80),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            LODWORD(v79[2]) = LANES128(v78).n128_u32[2];
            v79[1] = LANES128(v78).n128_u64[0];
            v79[0] = (__int64)snd_Vec3_vtable;
            snd_setPosition_100510(v2 + 368, v79),
                v70 = COERCE_AS(__typeof__(v70),
                                PSEUDO_REGISTER(float, "s0", "=w"));
            return;
          }
        }
        else {
          v59 = 0;
          if ((v57 & 7) == 0) {
            goto LABEL_79;
          }
        }
        v67 = (unsigned __int8*)(v59 + v2 + 168);
        do {
          v68 = *v67++;
          --v58;
          v56 += *((char*)GameData_212cf50 + v68 + 256);
        } while (v58 != 0);
        goto LABEL_79;
      }
    }
  }
  if ((*(_WORD*)(v2 + 136) & 1) == 0) {
    ProcInst_657a50(v2, 1),
        v70 = COERCE_AS(__typeof__(v70), PSEUDO_REGISTER(float, "s0", "=w"));
  }
}

#pragma GCC visibility pop
