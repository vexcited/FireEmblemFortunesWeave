#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* physx_PxTempAllocator_allocate(__int64, __int64, __int64, unsigned int);
extern _UNKNOWN* GameData_2135580;
extern __int64 (**computeStaticWorldAABB_ptr_ptr)();
float getSQGlobalPose(__int64, int32x4_t*, __int64, float32x4_t, double, double,
                      float32x4_t, double, double, float32x4_t);
void physx_Gu_computeBounds(__int64, __int64, int32x4_t*, long double,
                            long double, double, long double);
void physx_PxTempAllocator_deallocate(__int64, __int64);
void physx_source_physx_src_2ed6a0(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5, __int64 a6,
                                   double a7, long double a8, double a9,
                                   long double a10, double a11, double a12,
                                   float32x4_t a13);

void physx_source_physx_src_2ed6a0(__int64 a1, __int64 a2, __int64 a3,
                                   __int64 a4, __int64 a5, __int64 a6,
                                   double a7, long double a8, double a9,
                                   long double a10, double a11, double a12,
                                   float32x4_t a13)
{

#pragma clang fp contract(off)
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v21;
  __int64 v22;
  long double v23;
  int v24;
  int v25;
  __int64 v26;
  int v27;
  __int64 v28;
  __int64 v29;
  float32x4_t v30;
  float32x4_t v31;
  float32x4_t v32;
  int32x4_t v33;
  float32x4_t v34;
  double v35;
  int8x16_t v36;
  __int64 v37;
  _DWORD* v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _DWORD* v62;
  int v63;
  __int64 v64;
  _QWORD* v65;
  _DWORD* v66;
  __int64 v67;
  __int64 v68;
  _DWORD* v69;
  __int64 v70;
  _DWORD* v71;
  _BOOL4 v72;
  float32x4_t v73;
  int v74;
  _QWORD v75[3];
  struct {
    _BYTE v76[12];
    _DWORD var14[11];
  } v76_;
  __int64 _78;

  v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v3", "=w")),
  v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d2", "=w"));
  if (a6 != 0) {
    *(_QWORD*)&v76_.var14[9] = _78;
    v37 = *(unsigned __int16*)(a1 + 8);
    LOBYTE(v76_.var14[3]) = (unsigned int)v37 > 0x200;
    if ((unsigned int)v37 < 0x201) {
      v42 = &v76_.v76[-((8 * (int)v37 + 15) & 0xFFFF0)];
      *(_QWORD*)&v76_.var14[1] = v42;
      if ((_DWORD)v37 == 0) {
        LODWORD(v61) = 0;
        v46 = 0;
        v76_.v76[8] = 0;
        goto LABEL_66;
      }
    }
    else {
      v42 = physx_PxTempAllocator_allocate(
          (__int64)v76_.v76, 8LL * (unsigned int)v37,
          (__int64)"/Inside/Lib/PhysX/O/physx/source/physx/src/"
                   "NpShapeManager.cpp",
          0x1BBu),
      v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v3", "=w")),
      v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d2", "=w"));
      *(_QWORD*)&v76_.var14[1] = v42;
    }
    v43 = v37 - 1;
    v44 = v37 & 3;
    if (*(_WORD*)(a1 + 8) == 1) {
      if (v43 < 3) {
        v45 = 0;
        v46 = 0;
        if ((v37 & 3) != 0) {
        LABEL_58:
          v60 = a1 + 8 * v45;
          do {
            if ((*(_BYTE*)(*(_QWORD*)v60 + 96LL) & 2) != 0) {
              *(_QWORD*)&v42[2 * v46++] = *(_QWORD*)v60;
            }
            v60 += 8;
            --v44;
          } while (v44 != 0);
        }
      LABEL_62:
        v61 = (unsigned int)(28 * v46);
        v76_.v76[8] = (unsigned int)v61 > 0x1000;
        if ((unsigned int)v61 > 0x1000) {
          v62 = physx_PxTempAllocator_allocate(
              (__int64)&_78 + 7, v61,
              (__int64)"/Inside/Lib/PhysX/O/physx/source/physx/src/"
                       "NpShapeManager.cpp",
              0x1C7u),
          v31 = COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v3", "=w")),
          v35 = COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d2", "=w"));
          v63 = 1;
          *(_QWORD*)v76_.v76 = v62;
          if (v46 == 0) {
            goto LABEL_73;
          }
        LABEL_67:
          if (v46 == 1) {
            v64 = 0;
          }
          else {
            v65 = v42 + 2;
            v66 = v62 + 7;
            v67 = 0;
            do {
              v68 = *(v65 - 1);
              v67 -= 2;
              *(v66 - 2) = *(_DWORD*)(v68 + 84);
              *(v66 - 1) = *(_DWORD*)(v68 + 88);
              *(v66 - 7) = *(_DWORD*)(v68 + 64);
              *((_QWORD*)v66 - 3) = *(_QWORD*)(v68 + 68);
              *((_QWORD*)v66 - 2) = *(_QWORD*)(v68 + 76);
              v69 = (_DWORD*)*v65;
              v65 += 2;
              v66[4] = v69[20];
              v66[5] = v69[21];
              v66[6] = v69[22];
              *(_DWORD*)v66 = v69[16];
              v66[1] = v69[17];
              v66[2] = v69[18];
              v66[3] = v69[19];
              v66 += 14;
            } while (-(__int64)(v46 & 0xFFFFFFFE) != v67);
            v64 = -v67;
            if ((v46 & 1) == 0) {
              goto LABEL_73;
            }
          }
          v70 = *(_QWORD*)&v42[2 * v64];
          v71 = &v62[7 * v64];
          v71[5] = *(_DWORD*)(v70 + 84);
          v71[6] = *(_DWORD*)(v70 + 88);
          *(_DWORD*)v71 = *(_DWORD*)(v70 + 64);
          *(_QWORD*)(v71 + 1) = *(_QWORD*)(v70 + 68);
          *(_QWORD*)(v71 + 3) = *(_QWORD*)(v70 + 76);
        LABEL_73:
          *(_DWORD*)(a1 + 12) =
              (*(__int64 (**)(__int64, __int64, _DWORD*, __int64, _DWORD*))(
                  *(_QWORD*)a2 + 152LL))(a2, a3, v42, a6, v62),
                          v31 = COERCE_AS(__typeof__(v31),
                                          PSEUDO_REGISTER(__n128, "v3", "=w")),
                          v35 = COERCE_AS(__typeof__(v35),
                                          PSEUDO_REGISTER(double, "d2", "=w"));
          if (v63 != 0) {
            physx_PxTempAllocator_deallocate((__int64)v76_.v76, (__int64)v62),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(double, "d2", "=w"));
          }
          if ((unsigned int)v37 >= 0x201) {
            physx_PxTempAllocator_deallocate((__int64)&v76_.var14[1],
                                             (__int64)v42),
                v31 = COERCE_AS(__typeof__(v31),
                                PSEUDO_REGISTER(__n128, "v3", "=w")),
                v35 = COERCE_AS(__typeof__(v35),
                                PSEUDO_REGISTER(double, "d2", "=w"));
          }
          return;
        }
      LABEL_66:
        v62 = &v76_.v76[-(((unsigned int)v61 + 15LL) & 0x1FFFFFFF0LL)];
        v63 = 0;
        *(_QWORD*)v76_.v76 = v62;
        if (v46 == 0) {
          goto LABEL_73;
        }
        goto LABEL_67;
      }
      v50 = (_QWORD*)(a1 + 16);
      v51 = 0;
      v46 = 0;
      while (1) {
        v52 = *(v50 - 2);
        if ((*(_BYTE*)(v52 + 96) & 2) != 0) {
          *(_QWORD*)&v42[2 * v46++] = v52;
          v53 = *(v50 - 1);
          if ((*(_BYTE*)(v53 + 96) & 2) == 0) {
          LABEL_39:
            v54 = *v50;
            if ((*(_BYTE*)(*v50 + 96LL) & 2) == 0) {
              goto LABEL_40;
            }
            goto LABEL_44;
          }
        }
        else {
          v53 = *(v50 - 1);
          if ((*(_BYTE*)(v53 + 96) & 2) == 0) {
            goto LABEL_39;
          }
        }
        *(_QWORD*)&v42[2 * v46++] = v53;
        v54 = *v50;
        if ((*(_BYTE*)(*v50 + 96LL) & 2) == 0) {
        LABEL_40:
          v55 = v50[1];
          if ((*(_BYTE*)(v55 + 96) & 2) != 0) {
            goto LABEL_45;
          }
          goto LABEL_36;
        }
      LABEL_44:
        *(_QWORD*)&v42[2 * v46++] = v54;
        v55 = v50[1];
        if ((*(_BYTE*)(v55 + 96) & 2) != 0) {
        LABEL_45:
          *(_QWORD*)&v42[2 * v46++] = v55;
        }
      LABEL_36:
        v51 -= 4;
        v50 += 4;
        if (-(__int64)((unsigned __int16)v37 & 0xFFFC) == v51) {
          v45 = -v51;
          if ((v37 & 3) != 0) {
            goto LABEL_58;
          }
          goto LABEL_62;
        }
      }
    }
    if (v43 < 3) {
      v47 = 0;
      v46 = 0;
    LABEL_30:
      if ((v37 & 3) != 0) {
        v48 = 8 * v47;
        do {
          v49 = *(_QWORD*)(*(_QWORD*)a1 + v48);
          if ((*(_BYTE*)(v49 + 96) & 2) != 0) {
            *(_QWORD*)&v42[2 * v46++] = v49;
          }
          v48 += 8;
          --v44;
        } while (v44 != 0);
      }
      goto LABEL_62;
    }
    v47 = 0;
    v46 = 0;
    while (1) {
      v56 = *(_QWORD*)(*(_QWORD*)a1 + 8 * v47);
      if ((*(_BYTE*)(v56 + 96) & 2) != 0) {
        *(_QWORD*)&v42[2 * v46++] = v56;
        v57 = *(_QWORD*)(*(_QWORD*)a1 + 8 * v47 + 8);
        if ((*(_BYTE*)(v57 + 96) & 2) == 0) {
        LABEL_50:
          v58 = *(_QWORD*)(*(_QWORD*)a1 + 8 * v47 + 16);
          if ((*(_BYTE*)(v58 + 96) & 2) == 0) {
            goto LABEL_51;
          }
          goto LABEL_55;
        }
      }
      else {
        v57 = *(_QWORD*)(*(_QWORD*)a1 + 8 * v47 + 8);
        if ((*(_BYTE*)(v57 + 96) & 2) == 0) {
          goto LABEL_50;
        }
      }
      *(_QWORD*)&v42[2 * v46++] = v57;
      v58 = *(_QWORD*)(*(_QWORD*)a1 + 8 * v47 + 16);
      if ((*(_BYTE*)(v58 + 96) & 2) == 0) {
      LABEL_51:
        v59 = *(_QWORD*)(*(_QWORD*)a1 + 8 * v47 + 24);
        if ((*(_BYTE*)(v59 + 96) & 2) != 0) {
          goto LABEL_56;
        }
        goto LABEL_47;
      }
    LABEL_55:
      *(_QWORD*)&v42[2 * v46++] = v58;
      v59 = *(_QWORD*)(*(_QWORD*)a1 + 8 * v47 + 24);
      if ((*(_BYTE*)(v59 + 96) & 2) != 0) {
      LABEL_56:
        *(_QWORD*)&v42[2 * v46++] = v59;
      }
    LABEL_47:
      v47 += 4;
      if ((v37 & 0xFFFC) == v47) {
        goto LABEL_30;
      }
    }
  }
  v16 = *(unsigned __int16*)(a1 + 8);
  if ((_DWORD)v16 == 1) {
    v17 = (_QWORD*)a1;
  }
  else {
    v17 = *(_QWORD**)a1;
  }
  if (*(_WORD*)(a1 + 8) != 0) {
    v18 = *(unsigned __int16*)(a3 + 8);
    v21 = a5;
    v22 = *((_QWORD*)GameData_2135580 + v18);
    v72 = v18 != 8;
    v23 = COERCE_LONG_DOUBLE(vdupq_n_s32(0x3B23D70Au));
    v73 = *(float32x4_t*)&v23;
    do {
      v28 = *v17;
      if ((*(_BYTE*)(*v17 + 96LL) & 2) != 0) {
        if (a5 != 0) {
          v29 = v21;
        }
        else {
          v29 = 0;
        }
        if (*(_DWORD*)(a1 + 12) == -1) {
          if (v29 != 0) {
            v30 = *(float32x4_t*)(v29 + 12);
            v31 = v73;
            v32 = vmulq_f32(vsubq_f32(v30, *(float32x4_t*)v29), v73);
            v33 = vsubq_f32(*(float32x4_t*)v29, v32);
            v34 = vaddq_f32(v30, v32);
            *(_QWORD*)&v35 =
                LANES128_OF(vzip2q_s32(v33, vuzp1q_s32(v33, v34))).n128_u64[0];
            v75[0] = LANES128(v33).n128_u64[0];
            *(double*)&v75[1] = v35;
            v36 = vextq_s8(v34, v34, 4u);
            v75[2] = LANES128(v36).n128_u64[0];
          }
          else {
            *(long double*)&v36 = ((long double (*)(
                _QWORD*, _QWORD, __int64))computeStaticWorldAABB_ptr_ptr[v72])(
                v75, *v17, a3 + v22),
                   v31 = COERCE_AS(__typeof__(v31),
                                   PSEUDO_REGISTER(__n128, "v3", "=w")),
                   v35 = COERCE_AS(__typeof__(v35),
                                   PSEUDO_REGISTER(double, "d2", "=w"));
          }
          getSQGlobalPose((__int64)v76_.v76, (int32x4_t*)v28, a3 + v22, v36,
                          LANES128(v34).n128_f64[0], v35, v31, a11, a12, a13),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(double, "d2", "=w"));
        }
        else {
          *(_QWORD*)&v23 = 0;
          {
            __typeof__(a8) z_ = (__typeof__(a8)){0};
            LODWORD(z_) = 1065395159;
            a8 = z_;
          }
          physx_Gu_computeBounds((__int64)v75, v28 + 104,
                                 (int32x4_t*)(v28 + 64), v23, a8, a9, a10),
              v31 = COERCE_AS(__typeof__(v31),
                              PSEUDO_REGISTER(__n128, "v3", "=w")),
              v35 = COERCE_AS(__typeof__(v35),
                              PSEUDO_REGISTER(double, "d2", "=w"));
          v24 = *(_DWORD*)(v28 + 84);
          v25 = *(_DWORD*)(v28 + 88);
          *(_QWORD*)&v76_.v76[4] = *(_QWORD*)(v28 + 68);
          v26 = *(_QWORD*)(v28 + 76);
          v76_.var14[2] = v24;
          v76_.var14[3] = v25;
          v27 = *(_DWORD*)(v28 + 64);
          *(_QWORD*)v76_.var14 = v26;
          *(_DWORD*)v76_.v76 = v27;
        }
        v74 = *(_DWORD*)(a1 + 12);
        (*(void (**)(__int64, __int64, __int64, _QWORD*, _BYTE*, int*, bool))(
            *(_QWORD*)a2 + 128LL))(a2, a3, v28, v75, v76_.v76, &v74, a4 != 0),
            v31 =
                COERCE_AS(__typeof__(v31), PSEUDO_REGISTER(__n128, "v3", "=w")),
            v35 =
                COERCE_AS(__typeof__(v35), PSEUDO_REGISTER(double, "d2", "=w"));
      }
      --v16;
      v21 += 24;
      ++v17;
    } while (v16 != 0);
  }
}

#pragma GCC visibility pop
