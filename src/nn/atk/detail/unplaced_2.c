#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_283950(PSEUDO_X8, __int64 result,
                                                   __int64);
__int64 BaseNx_2a7620(__int64 result);
__int64 BaseNx_2a76e0(__int64 result);
__int64 BaseNx_2a8220(__int64 result, float);
__int64 BaseNx_2a8250(__int64 result, float);
__int64 BaseNx_2a8270(__int64 result, int);
__int64 BaseNx_2a8290(__int64 result, int);
__int64 BaseNx_2a82b0(__int64 result, float);
__int64 BaseNx_2a82d0(__int64 result, int, float);
__int64 BaseNx_2a8340(__int64, __int64);
__int64 BaseNx_2a83b0(__int64 result, int);
__int64 BaseNx_2a9930(__int64, unsigned int, __int64);
__int64 BaseNx_2a9ba0(__int64, __int64);
__int64 GameRoutine_283930(__int64);
__int64 GameRoutine_283ab0(__int64);
__int64 GameRoutine_283c20(__int64);
__int64 GameRoutine_2a3600(__int64 result, int);
__int64 GameRoutine_2a8ae0(__int64, __int64);
__int64 GameRoutine_2a9ac0(__int64, __int64);
__int64 nn_audio_GetRequiredBufferSizeForCircularBufferSink();
__int64 nn_detail_UnexpectedDefaultImpl();
__int64 rcContext_doStartTimer_283ce0(__int64);
float GameRoutine_2a35c0(__int64);
void GameRoutine_2a3850(__int64, int);
float GameRoutine_2a38f0(__int64);
float GameRoutine_2a52e0(unsigned int);
float GameRoutine_2a5490(float);
void BaseNx_2a99e0(__int64, __int64);
void GameRoutine_2894d0();
unsigned __int64 nn_atk_detail_289910(__int64 a1, __int64 a2);
__int64 nn_atk_detail_2a5b40(__int64 result, int a2, int a3);

unsigned __int64 nn_atk_detail_289910(__int64 a1, __int64 a2)
{
  _QWORD v4[7];

  memset(v4, 0, sizeof(v4));
  ((void (*)(__int64, _QWORD*, __int64))GameRoutine_2894d0)(a1, v4, a2);
  return (((nn_audio_GetRequiredBufferSizeForCircularBufferSink() + 4095) &
           0xFFFFFFFFFFFFF000LL) +
          4096) *
         (*(_DWORD*)(a2 + 24) + *(unsigned __int8*)(a2 + 37) +
          *(_DWORD*)(a2 + 28));
}

__int64 nn_atk_detail_2a5b40(__int64 result, int a2, int a3)
{

#pragma clang fp contract(off)
  __int64 v5;
  _BOOL4 v6;
  unsigned int v7;
  unsigned int v8;
  bool v9;
  unsigned int v10;
  float v11;
  float v12;
  float v13;
  _DWORD* v14;
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
  int v26;
  float v27;
  float v28;
  float v29;
  float v30;
  int v31;
  int v32;
  bool v33;
  int v34;
  int v35;
  int v36;
  __int64 v37;
  float v38;
  float v39;
  float v40;
  float v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  float v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  int v52;
  float v53;
  float v54;
  float v55;
  float v56;
  unsigned int v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  float v65;
  float v66;
  __int64 v67;
  __int64 v68;
  float v69;
  float v70;
  __int64 v71;
  __int64 v72;
  float v73;
  float v74;
  __int64 v75;
  struct {
    __int128 v76;
    __int64 v77;
    __int64 v78;
    __int64 v79;
    __int64 v80;
    __int64 v81;
    unsigned __int64 v82;
    __int64 v83;
    __int64 v84;
  } v76_;
  struct {
    __int128 v85;
    __int64 v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
    __int64 v90;
    unsigned __int64 v91;
    __int64 v92;
    __int64 v93;
  } v85_;
  struct {
    _QWORD v94[7];
    unsigned __int64 v95;
    __int64 v96;
    __int64 v97;
  } v94_;

  if (*(_BYTE*)(result + 193) != 0) {
    v5 = result;
    v6 = *(_BYTE*)(result + 192) == 0;
    v7 = (unsigned __int16)(*(_WORD*)(result + 344) + a3);
    v8 = *(unsigned __int16*)(result + 342);
    v9 = v7 >= v8;
    if (v7 >= v8) {
      v7 = *(unsigned __int16*)(result + 342);
    }
    *(_WORD*)(result + 344) = v7;
    if (v9) {
      LOBYTE(v10) = *(_BYTE*)(result + 341);
    }
    else {
      v10 = *(unsigned __int8*)(result + 340) +
            (int)((*(unsigned __int8*)(result + 341) -
                   *(unsigned __int8*)(result + 340)) *
                  v7) /
                (int)v8;
    }
    v11 = *(float*)(result + 376);
    v12 = *(float*)(result + 372);
    v13 = *(float*)(result + 200);
    v14 = (_DWORD*)(result + 32);
    if (*(_DWORD*)(result + 32) == 4 &&
        GameRoutine_2a35c0(result + 32) < -0x1.69999a0000000p+6f) {
      result = *(_QWORD*)(v5 + 400);
      if (result != 0) {
        BaseNx_2a76e0(result);
        result = BaseNx_2a7620(*(_QWORD*)(v5 + 400));
        *(_QWORD*)(v5 + 400) = 0;
        *(_WORD*)(v5 + 192) = 0;
      }
      return result;
    }
    v16 = 0x0.0p+0f;
    v17 = *(float*)(v5 + 312) + (float)(*(unsigned __int8*)(v5 + 368) -
                                        *(unsigned __int8*)(v5 + 369));
    v18 = *(float*)(v5 + 316);
    if (v18 == 0x0.0p+0f) {
      v19 = v17 + 0x0.0p+0f;
      if (*(_BYTE*)(v5 + 188) != 0) {
        goto LABEL_13;
      }
    }
    else {
      v31 = *(_DWORD*)(v5 + 320);
      v32 = *(_DWORD*)(v5 + 324);
      v33 = __OFSUB__(v32, v31);
      v34 = v32 - v31;
      v18 = (float)(v18 * (float)v34) / (float)v32;
      if (!((v34 < 0) ^ v33 | (v34 == 0))) {
        v16 = v18;
      }
      v19 = v17 + v16;
      if (*(_BYTE*)(v5 + 188) != 0) {
      LABEL_13:
        v20 = v11 * v11;
        if (*(_BYTE*)(v5 + 189) != 0) {
          goto LABEL_14;
        }
        goto LABEL_23;
      }
    }
    v19 = v19 + GameRoutine_2a38f0(v5 + 60);
    v20 = v11 * v11;
    if (*(_BYTE*)(v5 + 189) != 0) {
    LABEL_14:
      v21 = v20 * v12;
      v10 = (unsigned __int8)v10;
      if (*(_BYTE*)(v5 + 190) != 0) {
        goto LABEL_15;
      }
      goto LABEL_24;
    }
  LABEL_23:
    v19 = v19 + GameRoutine_2a38f0(v5 + 92);
    v21 = v20 * v12;
    v10 = (unsigned __int8)v10;
    if (*(_BYTE*)(v5 + 190) != 0) {
    LABEL_15:
      v22 = v21 * v13;
      v23 = (float)v10;
      if (*(_BYTE*)(v5 + 191) != 0) {
        goto LABEL_16;
      }
      goto LABEL_25;
    }
  LABEL_24:
    v19 = v19 + GameRoutine_2a38f0(v5 + 124);
    v22 = v21 * v13;
    v23 = (float)v10;
    if (*(_BYTE*)(v5 + 191) != 0) {
    LABEL_16:
      v24 = *(float*)(v5 + 348);
      v25 = v22 * v23;
      v26 = a2 & v6;
      if (v19 == v24) {
        goto LABEL_17;
      }
      goto LABEL_26;
    }
  LABEL_25:
    v19 = v19 + GameRoutine_2a38f0(v5 + 156);
    v24 = *(float*)(v5 + 348);
    v25 = v22 * v23;
    v26 = a2 & v6;
    if (v19 == v24) {
    LABEL_17:
      v27 = *(float*)(v5 + 352);
      v28 = v25 * 0x1.0101020000000p-8f;
      v29 = *(float*)(v5 + 336);
      v30 = *(float*)(v5 + 204);
      if (v26 == 0) {
        goto LABEL_46;
      }
      goto LABEL_27;
    }
  LABEL_26:
    v24 = GameRoutine_2a52e0(vcvts_n_s32_f32(v19, 8u));
    v27 = v24;
    *(float*)(v5 + 348) = v19;
    *(float*)(v5 + 352) = v24;
    v28 = v25 * 0x1.0101020000000p-8f;
    v29 = *(float*)(v5 + 336);
    v30 = *(float*)(v5 + 204);
    if (v26 == 0) {
      goto LABEL_46;
    }
  LABEL_27:
    v35 = 5 * a3;
    if (*(_BYTE*)(v5 + 195) != 0) {
      v36 = *(_DWORD*)(v5 + 320) + v35;
      if (v36 >= *(_DWORD*)(v5 + 324)) {
        v36 = *(_DWORD*)(v5 + 324);
      }
      *(_DWORD*)(v5 + 320) = v36;
    }
    if (*(unsigned __int8*)(v5 + 188) != 255) {
      GameRoutine_2a3850(v5 + 60, v35);
    }
    if (*(unsigned __int8*)(v5 + 189) != 255) {
      GameRoutine_2a3850(v5 + 92, v35);
    }
    if (*(unsigned __int8*)(v5 + 190) != 255) {
      GameRoutine_2a3850(v5 + 124, v35);
    }
    if (*(unsigned __int8*)(v5 + 191) != 255) {
      GameRoutine_2a3850(v5 + 156, v35);
    }
    GameRoutine_2a3600(v5 + 32, v35);
    if (*(_BYTE*)(v5 + 977) == 1) {
      if (*v14 != 4) {
        v37 = *(_QWORD*)(v5 + 400);
        if (v37 != 0 && *(_BYTE*)(v5 + 196) == 0) {
          BaseNx_2a8340(v37, 1);
        }
        *v14 = 4;
      }
      *(_BYTE*)(v5 + 192) = 0;
      *(_BYTE*)(v5 + 977) = 0;
    }
  LABEL_46:
    v38 = *(float*)(v5 + 208);
    v39 = GameRoutine_2a35c0(v5 + 32);
    v40 = v28 * GameRoutine_2a5490(v39);
    if (*(_BYTE*)(v5 + 188) == 1) {
      v54 = GameRoutine_2a38f0(v5 + 60);
      v40 = v40 * GameRoutine_2a5490(v54 * 0x1.8000000000000p+2f);
      if (*(_BYTE*)(v5 + 189) != 1) {
      LABEL_48:
        if (*(_BYTE*)(v5 + 190) != 1) {
          goto LABEL_49;
        }
        goto LABEL_59;
      }
    }
    else if (*(_BYTE*)(v5 + 189) != 1) {
      goto LABEL_48;
    }
    v55 = GameRoutine_2a38f0(v5 + 92);
    v40 = v40 * GameRoutine_2a5490(v55 * 0x1.8000000000000p+2f);
    if (*(_BYTE*)(v5 + 190) != 1) {
    LABEL_49:
      if (*(_BYTE*)(v5 + 191) != 1) {
        goto LABEL_51;
      }
      goto LABEL_50;
    }
  LABEL_59:
    v56 = GameRoutine_2a38f0(v5 + 124);
    v40 = v40 * GameRoutine_2a5490(v56 * 0x1.8000000000000p+2f);
    if (*(_BYTE*)(v5 + 191) != 1) {
    LABEL_51:
      v42 = *(_QWORD*)(v5 + 220);
      v43 = *(_QWORD*)(v5 + 276);
      v44 = *(_QWORD*)(v5 + 284);
      v45 = *(_QWORD*)(v5 + 260);
      v46 = *(float*)(v5 + 328);
      v94_.v94[6] = *(_QWORD*)(v5 + 268);
      v94_.v95 = v43;
      v47 = *(_QWORD*)(v5 + 292);
      v49 = *(_QWORD*)(v5 + 228);
      v48 = *(_QWORD*)(v5 + 236);
      v94_.v96 = v44;
      v94_.v97 = v47;
      v50 = *(_QWORD*)(v5 + 244);
      v51 = *(_QWORD*)(v5 + 252);
      v52 = *(unsigned __int8*)(v5 + 188);
      v94_.v94[0] = v42;
      v94_.v94[1] = v49;
      v53 = v46 + *(float*)&v94_.v95;
      v94_.v94[2] = v48;
      v94_.v94[3] = v50;
      v94_.v94[4] = v51;
      v94_.v94[5] = v45;
      if (v52 == 2) {
        v53 = v53 + GameRoutine_2a38f0(v5 + 60);
        if (*(_BYTE*)(v5 + 189) != 2) {
        LABEL_53:
          if (*(_BYTE*)(v5 + 190) != 2) {
            goto LABEL_54;
          }
          goto LABEL_63;
        }
      }
      else if (*(_BYTE*)(v5 + 189) != 2) {
        goto LABEL_53;
      }
      v53 = v53 + GameRoutine_2a38f0(v5 + 92);
      if (*(_BYTE*)(v5 + 190) != 2) {
      LABEL_54:
        if (*(_BYTE*)(v5 + 191) != 2) {
          goto LABEL_55;
        }
        goto LABEL_64;
      }
    LABEL_63:
      v53 = v53 + GameRoutine_2a38f0(v5 + 124);
      if (*(_BYTE*)(v5 + 191) != 2) {
      LABEL_55:
        result = *(_QWORD*)(v5 + 400);
        v94_.v95 = __PAIR64__(
            COERCE_UNSIGNED_INT(*(float*)(v5 + 332) +
                                *((float*)&v94_.v95 + 1)),
            LODWORD(v53));
        if (result == 0) {
          goto LABEL_85;
        }
        goto LABEL_65;
      }
    LABEL_64:
      *(float*)&v57 = v53 + GameRoutine_2a38f0(v5 + 156);
      result = *(_QWORD*)(v5 + 400);
      v94_.v95 = __PAIR64__(
          COERCE_UNSIGNED_INT(*(float*)(v5 + 332) + *((float*)&v94_.v95 + 1)),
          v57);
      if (result == 0) {
        goto LABEL_85;
      }
    LABEL_65:
      BaseNx_2a8220(result, v40);
      BaseNx_2a8250(*(_QWORD*)(v5 + 400), (float)(v27 * v29) * v30);
      BaseNx_2a8270(*(_QWORD*)(v5 + 400), *(_DWORD*)(v5 + 360));
      BaseNx_2a8290(*(_QWORD*)(v5 + 400), *(_DWORD*)(v5 + 364));
      BaseNx_2a82b0(*(_QWORD*)(v5 + 400), v38 + 0x1.0000000000000p+0f);
      BaseNx_2a82d0(*(_QWORD*)(v5 + 400), *(unsigned __int8*)(v5 + 198),
                    *(float*)(v5 + 212));
      BaseNx_2a83b0(*(_QWORD*)(v5 + 400), *(_DWORD*)(v5 + 216));
      GameRoutine_2a8ae0(*(_QWORD*)(v5 + 400), (__int64)v94_.v94);
      result = *(_QWORD*)(v5 + 304);
      if (result == 0) {
        goto LABEL_85;
      }
      v58 = *(_QWORD*)(v5 + 400);
      v59 = GameRoutine_283ab0(result);
      BaseNx_2a99e0(v58, v59);
      v60 = *(_QWORD*)(v5 + 400);
      v61 = GameRoutine_283c20(*(_QWORD*)(v5 + 304));
      GameRoutine_2a9ac0(v60, v61);
      v62 = *(_QWORD*)(v5 + 400);
      v63 = rcContext_doStartTimer_283ce0(*(_QWORD*)(v5 + 304));
      BaseNx_2a9ba0(v62, v63);
      result = GameRoutine_283930(*(_QWORD*)(v5 + 304));
      if ((int)result < 1) {
        goto LABEL_85;
      }
      v64 = *(_QWORD*)(v5 + 304);
      v85_.v92 = 0;
      v85_.v93 = 0;
      v85_.v90 = 0;
      v85_.v91 = 0;
      v85_.v88 = 0;
      v85_.v89 = 0;
      v85_.v86 = 0;
      v85_.v87 = 0;
      v85_.v85 = (__typeof__(v85_.v85)){0};
      GameRoutine_283950((void*)(&v76_.v76), v64, 1);
      v65 = *(float*)(v5 + 328);
      v85_.v90 = v76_.v81;
      v85_.v91 = v76_.v82;
      v85_.v92 = v76_.v83;
      v85_.v93 = v76_.v84;
      v66 = v65 + *(float*)&v76_.v82;
      v85_.v86 = v76_.v77;
      v85_.v87 = v76_.v78;
      v85_.v88 = v76_.v79;
      v85_.v89 = v76_.v80;
      v85_.v85 = v76_.v76;
      if (*(_BYTE*)(v5 + 188) == 2) {
        v66 = v66 + GameRoutine_2a38f0(v5 + 60);
        if (*(_BYTE*)(v5 + 189) != 2) {
        LABEL_69:
          if (*(_BYTE*)(v5 + 190) != 2) {
            goto LABEL_70;
          }
          goto LABEL_89;
        }
      }
      else if (*(_BYTE*)(v5 + 189) != 2) {
        goto LABEL_69;
      }
      v66 = v66 + GameRoutine_2a38f0(v5 + 92);
      if (*(_BYTE*)(v5 + 190) != 2) {
      LABEL_70:
        if (*(_BYTE*)(v5 + 191) != 2) {
          goto LABEL_72;
        }
        goto LABEL_71;
      }
    LABEL_89:
      v66 = v66 + GameRoutine_2a38f0(v5 + 124);
      if (*(_BYTE*)(v5 + 191) != 2) {
      LABEL_72:
        v67 = *(_QWORD*)(v5 + 400);
        v85_.v91 = __PAIR64__(
            COERCE_UNSIGNED_INT(*(float*)(v5 + 332) +
                                *((float*)&v85_.v91 + 1)),
            LODWORD(v66));
        BaseNx_2a9930(v67, 1u, (__int64)&v85_.v85);
        result = GameRoutine_283930(*(_QWORD*)(v5 + 304));
        if ((int)result < 2) {
          goto LABEL_85;
        }
        v68 = *(_QWORD*)(v5 + 304);
        v85_.v92 = 0;
        v85_.v93 = 0;
        v85_.v90 = 0;
        v85_.v91 = 0;
        v85_.v88 = 0;
        v85_.v89 = 0;
        v85_.v86 = 0;
        v85_.v87 = 0;
        v85_.v85 = (__typeof__(v85_.v85)){0};
        GameRoutine_283950((void*)(&v76_.v76), v68, 2);
        v69 = *(float*)(v5 + 328);
        v85_.v90 = v76_.v81;
        v85_.v91 = v76_.v82;
        v85_.v92 = v76_.v83;
        v85_.v93 = v76_.v84;
        v70 = v69 + *(float*)&v76_.v82;
        v85_.v86 = v76_.v77;
        v85_.v87 = v76_.v78;
        v85_.v88 = v76_.v79;
        v85_.v89 = v76_.v80;
        v85_.v85 = v76_.v76;
        if (*(_BYTE*)(v5 + 188) == 2) {
          v70 = v70 + GameRoutine_2a38f0(v5 + 60);
          if (*(_BYTE*)(v5 + 189) != 2) {
          LABEL_75:
            if (*(_BYTE*)(v5 + 190) != 2) {
              goto LABEL_76;
            }
            goto LABEL_93;
          }
        }
        else if (*(_BYTE*)(v5 + 189) != 2) {
          goto LABEL_75;
        }
        v70 = v70 + GameRoutine_2a38f0(v5 + 92);
        if (*(_BYTE*)(v5 + 190) != 2) {
        LABEL_76:
          if (*(_BYTE*)(v5 + 191) != 2) {
            goto LABEL_78;
          }
          goto LABEL_77;
        }
      LABEL_93:
        v70 = v70 + GameRoutine_2a38f0(v5 + 124);
        if (*(_BYTE*)(v5 + 191) != 2) {
        LABEL_78:
          v71 = *(_QWORD*)(v5 + 400);
          v85_.v91 = __PAIR64__(
              COERCE_UNSIGNED_INT(*(float*)(v5 + 332) +
                                  *((float*)&v85_.v91 + 1)),
              LODWORD(v70));
          BaseNx_2a9930(v71, 2u, (__int64)&v85_.v85);
          result = GameRoutine_283930(*(_QWORD*)(v5 + 304));
          if ((int)result >= 3) {
            v72 = *(_QWORD*)(v5 + 304);
            v85_.v92 = 0;
            v85_.v93 = 0;
            v85_.v90 = 0;
            v85_.v91 = 0;
            v85_.v88 = 0;
            v85_.v89 = 0;
            v85_.v86 = 0;
            v85_.v87 = 0;
            v85_.v85 = (__typeof__(v85_.v85)){0};
            GameRoutine_283950((void*)(&v76_.v76), v72, 3);
            v73 = *(float*)(v5 + 328);
            v85_.v90 = v76_.v81;
            v85_.v91 = v76_.v82;
            v85_.v92 = v76_.v83;
            v85_.v93 = v76_.v84;
            v74 = v73 + *(float*)&v76_.v82;
            v85_.v86 = v76_.v77;
            v85_.v87 = v76_.v78;
            v85_.v88 = v76_.v79;
            v85_.v89 = v76_.v80;
            v85_.v85 = v76_.v76;
            if (*(_BYTE*)(v5 + 188) == 2) {
              v74 = v74 + GameRoutine_2a38f0(v5 + 60);
              if (*(_BYTE*)(v5 + 189) != 2) {
              LABEL_81:
                if (*(_BYTE*)(v5 + 190) != 2) {
                  goto LABEL_82;
                }
                goto LABEL_97;
              }
            }
            else if (*(_BYTE*)(v5 + 189) != 2) {
              goto LABEL_81;
            }
            v74 = v74 + GameRoutine_2a38f0(v5 + 92);
            if (*(_BYTE*)(v5 + 190) != 2) {
            LABEL_82:
              if (*(_BYTE*)(v5 + 191) != 2) {
                goto LABEL_84;
              }
              goto LABEL_83;
            }
          LABEL_97:
            v74 = v74 + GameRoutine_2a38f0(v5 + 124);
            if (*(_BYTE*)(v5 + 191) != 2) {
            LABEL_84:
              v75 = *(_QWORD*)(v5 + 400);
              v85_.v91 = __PAIR64__(
                  COERCE_UNSIGNED_INT(*(float*)(v5 + 332) +
                                      *((float*)&v85_.v91 + 1)),
                  LODWORD(v74));
              BaseNx_2a9930(v75, 3u, (__int64)&v85_.v85);
              result = GameRoutine_283930(*(_QWORD*)(v5 + 304));
              if ((int)result >= 4) {
                v85_.v92 = 0;
                v85_.v93 = 0;
                v85_.v90 = 0;
                v85_.v91 = 0;
                v85_.v88 = 0;
                v85_.v89 = 0;
                v85_.v86 = 0;
                v85_.v87 = 0;
                v85_.v85 = (__typeof__(v85_.v85)){0};
                nn_detail_UnexpectedDefaultImpl();
                __udf(0);
              }
              goto LABEL_85;
            }
          LABEL_83:
            v74 = v74 + GameRoutine_2a38f0(v5 + 156);
            goto LABEL_84;
          }
        LABEL_85:
          *(_BYTE*)(v5 + 978) = 1;
          return result;
        }
      LABEL_77:
        v70 = v70 + GameRoutine_2a38f0(v5 + 156);
        goto LABEL_78;
      }
    LABEL_71:
      v66 = v66 + GameRoutine_2a38f0(v5 + 156);
      goto LABEL_72;
    }
  LABEL_50:
    v41 = GameRoutine_2a38f0(v5 + 156);
    v40 = v40 * GameRoutine_2a5490(v41 * 0x1.8000000000000p+2f);
    goto LABEL_51;
  }
  return result;
}

#pragma GCC visibility pop
