#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 physx_Cm_FlushPool_allocateNotThreadSafe(__int64, int, unsigned int);
__int64 physx_Pxstrnicmp(_QWORD);
__int64 physx_Sc_ArticulationSim_updateForces(__int64 result, float);
__int64 physx_Sc_BodySim_updateForces(__int64, __int64, __int64, _DWORD*,
                                      float*, __int64, unsigned int, float);
__int64 physx_Sc_getArticulationSim(__int64, unsigned int);
__n128 physx_PxGeometryQuery_computeGeomBounds(_QWORD);
extern __int64 (*physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr[])();
float GameRoutine_312a20(__int64);
void physx_Sc_Scene_beforeSolver(__int64 a1, _QWORD* a2);

void physx_Sc_Scene_beforeSolver(__int64 a1, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  unsigned int v10;
  unsigned int v11;
  __int64 v12;
  unsigned int i;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned int v21;
  __int64 v22;
  unsigned int j;
  int v24;
  __int64 v25;
  __int64 v26;
  int v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned int v31;
  int v32;
  unsigned __int64 v33;
  __int64 v34;
  long double v35;
  __int64 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned int v41;
  unsigned int v42;
  __int64* v43;
  int v44;
  __int64 v45;
  int v46;
  __int64 v47;
  unsigned int v48;
  __int64 v49;
  _QWORD* v50;
  _BYTE v52[1024];
  _BYTE v53[2056];
  int v54;

  v2 = *(_QWORD*)(a1 + 344);
  v4 = *(unsigned int*)(v2 + 416);
  *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 352) + 8LL) + 24LL) = 0;
  v5 = *(_QWORD*)(a1 + 312);
  *(_QWORD*)(a1 + 1840) = 0;
  *(_QWORD*)(a1 + 1848) = 0;
  *(_DWORD*)(a1 + 1856) = 0;
  v50 = *(_QWORD**)(v5 + 800);
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(a1 + 368) + 304LL))(
      *(_QWORD*)(a1 + 368), v4);
  v6 = *(_DWORD*)(a1 + 1592) & 0x7FFFFFFF;
  if ((_DWORD)v6 != 0) {
    v7 = *(_QWORD*)(a1 + 1584);
    v8 = 0;
    v9 = 0;
    while (1) {
      v10 = *(_DWORD*)(v7 + 4 * v9);
      if (v10 != 0) {
        break;
      }
      ++v9;
      v8 += 32;
      if (v6 == v9) {
        goto LABEL_5;
      }
    }
    v31 = __clz(__rbit32(v10)) + v8;
    v32 = (v10 - 1) & v10;
    if (v32 == 0) {
      v33 = v9 + 1;
      if ((int)v9 + 1 > (unsigned int)v6) {
        LODWORD(v9) = v9 + 1;
      }
      else {
        LODWORD(v9) = *(_DWORD*)(a1 + 1592) & 0x7FFFFFFF;
      }
      while (v33 < v6) {
        v32 = *(_DWORD*)(v7 + 4 * v33++);
        if (v32 != 0) {
          LODWORD(v9) = v33 - 1;
          goto LABEL_38;
        }
      }
      v32 = 0;
    }
  LABEL_38:
    if (v31 != -1) {
      physx_Pxstrnicmp(*v50);
      v34 = physx_Cm_FlushPool_allocateNotThreadSafe((__int64)v50, 2120, 0x10u);
      *(__n128*)&v35 = physx_PxGeometryQuery_computeGeomBounds(*v50);
      v36 = *(_QWORD*)(a1 + 344);
      v37 = *(_DWORD*)(a1 + 448);
      v38 = *(_QWORD*)(a1 + 368);
      v39 = *(_QWORD*)(a1 + 40);
      v40 = (*(__int64 (**)(_QWORD, long double))(
          **(_QWORD**)(a1 + 352) + 72LL))(*(_QWORD*)(a1 + 352), v35);
      *(_QWORD*)(v34 + 16) = 0;
      *(_QWORD*)(v34 + 24) = 0;
      *(_DWORD*)(v34 + 32) = 0;
      v41 = 0;
      v42 = v32;
      *(_QWORD*)(v34 + 2096) = v36;
      *(_QWORD*)(v34 + 2104) = v38;
      v43 = (__int64*)(v34 + 40);
      *(_QWORD*)v34 = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
      *(_QWORD*)(v34 + 8) = v39;
      v44 = v9;
      *(_DWORD*)(v34 + 2092) = v37;
      *(_QWORD*)(v34 + 2112) = v40;
      while (1) {
        if (*(_DWORD*)(*(_QWORD*)(v2 + 264) + 4LL * v31) == -1 ||
            (v45 = *(_QWORD*)(*(_QWORD*)(v2 + 248) + 40LL * v31 + 32),
             v43[v41] = v45, ++v41,
             (*(_WORD*)(*(_QWORD*)(v45 + 40) + 28LL) & 0x80) == 0)) {
          *(_DWORD*)(*(_QWORD*)(a1 + 1584) + 4LL * (v31 >> 5)) &= ~(1 << v31);
        }
        if (v42 == 0) {
          break;
        }
        v32 = (v42 - 1) & v42;
        if (v32 != 0) {
          LODWORD(v9) = v44;
        }
        else {
          if (v44 + 1 > (*(_DWORD*)(a1 + 1592) & 0x7FFFFFFFu)) {
            LODWORD(v9) = v44 + 1;
          }
          else {
            LODWORD(v9) = *(_DWORD*)(a1 + 1592) & 0x7FFFFFFF;
          }
          v46 = v44;
          while ((_DWORD)v9 - 1 != v46) {
            v32 = *(_DWORD*)(*(_QWORD*)(a1 + 1584) + 4LL * (unsigned int)++v46);
            if (v32 != 0) {
              LODWORD(v9) = v46;
              goto LABEL_54;
            }
          }
          v32 = 0;
        }
      LABEL_54:
        v31 = __clz(__rbit32(v42)) | (32 * v44);
        if (v31 != -1) {
          v44 = v9;
          v42 = v32;
          if (v41 < 0x100) {
            continue;
          }
        }
        *(_DWORD*)(v34 + 2088) = v41;
        if (a2 == nullptr) {
        LABEL_59:
          v47 = *(_QWORD*)(v34 + 2096);
          v54 = 0;
          v48 = *(_DWORD*)(v47 + 256);
          if (v41 != 0) {
            do {
              v49 = *v43++;
              --v41;
              physx_Sc_BodySim_updateForces(
                  v49 - 112, (__int64)v53, (__int64)v52, &v54, nullptr,
                  *(_QWORD*)(v34 + 2112), v48, *(float*)(v34 + 2092));
            } while (v41 != 0);
            if (v54 != 0) {
              (*(void (**)(_QWORD, _BYTE*, _BYTE*))(
                  **(_QWORD**)(v34 + 2104) + 96LL))(*(_QWORD*)(v34 + 2104), v53,
                                                    v52);
            }
          }
          goto LABEL_38;
        }
      LABEL_37:
        *(_DWORD*)(v34 + 32) = 1;
        *(_QWORD*)(v34 + 24) = a2;
        (*(void (**)(_QWORD*))(*a2 + 32LL))(a2);
        *(_QWORD*)(v34 + 16) = a2[2];
        (*(void (**)(__int64))(*(_QWORD*)v34 + 40LL))(v34);
        goto LABEL_38;
      }
      v32 = 0;
      v31 = -1;
      LODWORD(v9) = v44;
      *(_DWORD*)(v34 + 2088) = v41;
      if (a2 == nullptr) {
        goto LABEL_59;
      }
      goto LABEL_37;
    }
  }
LABEL_5:
  v11 = *(_DWORD*)(a1 + 700);
  if (v11 != 0) {
    v12 = *(_QWORD*)(a1 + 656);
    for (i = 0; i < v11; i += 32) {
      if (v11 - i >= 0x20) {
        v14 = 32;
      }
      else {
        v14 = v11 - i;
      }
      physx_Pxstrnicmp(*v50);
      v15 = physx_Cm_FlushPool_allocateNotThreadSafe((__int64)v50, 56, 0x10u);
      physx_PxGeometryQuery_computeGeomBounds(*v50);
      v16 = *(_DWORD*)(a1 + 448);
      *(_QWORD*)(v15 + 16) = 0;
      *(_QWORD*)(v15 + 24) = 0;
      v17 = *(_QWORD*)(a1 + 40);
      *(_DWORD*)(v15 + 32) = 0;
      *(_DWORD*)(v15 + 48) = v14;
      *(_QWORD*)(v15 + 40) = v12 + 8LL * i;
      *(_QWORD*)v15 = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
      *(_QWORD*)(v15 + 8) = v17;
      *(_DWORD*)(v15 + 52) = v16;
      if (a2 != nullptr) {
        *(_DWORD*)(v15 + 32) = 1;
        *(_QWORD*)(v15 + 24) = a2;
        (*(void (**)(_QWORD*))(*a2 + 32LL))(a2);
        *(_QWORD*)(v15 + 16) = a2[2];
        (*(void (**)(__int64))(*(_QWORD*)v15 + 40LL))(v15);
      }
      else {
        v18 = 0;
        do {
          v19 = *(_QWORD*)(*(_QWORD*)(v15 + 40) + 8 * v18);
          physx_Sc_ArticulationSim_updateForces(v19, *(float*)(v15 + 52));
          v20 = *(unsigned int*)(v15 + 48);
          ++v18;
          *(_DWORD*)(v19 + 152) = 0;
        } while (v18 < v20);
      }
    }
  }
  if ((*(_BYTE*)(a1 + 1220) & 2) != 0) {
    v21 = *(_DWORD*)(v2 + 432);
    if (v21 != 0) {
      v22 = *(_QWORD*)(v2 + 424);
      for (j = 0; j < v21; j += 32) {
        if (v21 - j >= 0x20) {
          v24 = 32;
        }
        else {
          v24 = v21 - j;
        }
        physx_Pxstrnicmp(*v50);
        v25 = physx_Cm_FlushPool_allocateNotThreadSafe((__int64)v50, 64, 0x10u);
        physx_PxGeometryQuery_computeGeomBounds(*v50);
        v26 = *(_QWORD*)(a1 + 40);
        v27 = *(_DWORD*)(a1 + 448);
        v28 = *(_QWORD*)(a1 + 344);
        *(_QWORD*)(v25 + 16) = 0;
        *(_QWORD*)(v25 + 24) = 0;
        *(_DWORD*)(v25 + 32) = 0;
        *(_DWORD*)(v25 + 48) = v24;
        *(_QWORD*)v25 = physx_PxLightCpuTask_Destroy_PxLightCpuTask_ptr;
        *(_QWORD*)(v25 + 8) = v26;
        *(_QWORD*)(v25 + 56) = v28;
        *(_DWORD*)(v25 + 52) = v27;
        *(_QWORD*)(v25 + 40) = v22 + 8LL * j;
        if (a2 != nullptr) {
          *(_DWORD*)(v25 + 32) = 1;
          *(_QWORD*)(v25 + 24) = a2;
          (*(void (**)(_QWORD*))(*a2 + 32LL))(a2);
          *(_QWORD*)(v25 + 16) = a2[2];
          (*(void (**)(__int64))(*(_QWORD*)v25 + 40LL))(v25);
        }
        else {
          v29 = 0;
          do {
            v30 = physx_Sc_getArticulationSim(
                v28 + 224, *(_QWORD*)(*(_QWORD*)(v25 + 40) + 8 * v29));
            GameRoutine_312a20(v30);
            ++v29;
          } while (v29 < *(unsigned int*)(v25 + 48));
        }
      }
    }
  }
}

#pragma GCC visibility pop
