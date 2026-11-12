#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_DWORD* nn_vfx_5d5fa0_alt1(float*, unsigned __int64) __asm__("nn_vfx_5d5fa0");
__attribute__((swiftcall)) void GameRoutine_a6e580(PSEUDO_X8, _QWORD*,
                                                   const char*);
__int64* GameRoutine_5d7520(__int64* result, __int64*, __int64*, __int64*);
__int64* nn_vfx_5d6100(__int64, unsigned __int64);
__int64 BufferAllocator_5b57b0(__int64);
__int64 CalculateAllocatedSizeHeap_5c7a60(__int64, const char*);
__int64 GameRoutine_5c02c0(const char*, ...);
__int64 GameRoutine_5d6960(__int64 result, __int64, __int64, __int64);
__int64 GameRoutine_5d80a0(__int64 result, __int64, __int64, __int64);
__int64 GameRoutine_5d98e0(__int64 result, __int64, __int64, __int64);
__int64 Manager_bcd5c0(__int64, const char*);
__int64 ResFile_5e5f00(__int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 nn_vfx_detail_5b4f80(__int64, int, int, int, int, int, __int64);
bool GameRoutine_5d93c0(__int64*, __int64*, __int64);
bool GameRoutine_ad7390(_QWORD*);
extern __int64 fw_memory_g_heap_manager_ptr;
float* GameRoutine_5d8fc0(float*, float*);
float* GameRoutine_5d9ac0(float* result, __int64, __int64, __int64);
float* nn_vfx_5d8dd0(float* result, float*, float*, float*);
int strcmp(const char*, const char*);
unsigned __int64 GameRoutine_5d91c0(float*, float*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 nn_vfx_5d2580(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6,
                      __int64 a7, char a8);
__int64* nn_vfx_5d5380(__int64* result, float* a2, __int64 a3, __int64 a4,
                       char a5);
__int64* nn_vfx_5d5de0(__int64* result, __int64* a2, __int64* a3, __int64* a4);
float* nn_vfx_5d5fa0(float* a1, unsigned __int64 a2);
bool nn_vfx_5d6260(_QWORD* a1, float* a2, __int64 a3);
__int64* nn_vfx_5d66c0(__int64* a1, __int64* a2, __int64* a3, __int64 a4);
__int64* nn_vfx_5d7840(__int64 a1, unsigned __int64 a2);
bool nn_vfx_5d79a0(_QWORD* a1, float* a2);
_QWORD* nn_vfx_5d7e00(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4);
float* nn_vfx_5d8200(float* result, float* a2, __int64 a3, __int64 a4, char a5);
__int64 nn_vfx_bc5ea0(_QWORD* a1, const char* a2);

__int64 nn_vfx_5d2580(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6,
                      __int64 a7, char a8)
{
  __int64 v8;
  _DWORD* v10;
  __int64 v11;
  int v13;
  __int64 v14;
  int v15;
  int v16;
  __int64 v17;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  v8 = *(_QWORD*)(*(_QWORD*)(a1 + 152) + 8LL * a4);
  if (v8 == 0 || *(_BYTE*)(v8 + 9) != 1) {
    return 0;
  }
  if (a3 < (signed __int32)*(_DWORD*)(v8 + 76)) {
    v10 = *(_DWORD**)(*(_QWORD*)(v8 + 96) + 8LL * a3);
    if (v10 == nullptr) {
      v11 = *(_QWORD*)(v8 + 88);
      if (v11 == 0) {
        goto LABEL_8;
      }
      v10 = (_DWORD*)(v11 + 56LL * a3);
    }
    LODWORD(v11) = *v10;
  LABEL_8:
    if ((int)v11 > (signed __int32)*(_DWORD*)(a1 + 128)) {
      goto LABEL_9;
    }
    goto LABEL_12;
  }
  if (*(int*)(a1 + 128) < 0) {
  LABEL_9:
    *(_QWORD*)a2 = 0;
    *(_DWORD*)(a2 + 8) = -1;
    GameRoutine_5c02c0("There is no available Emitter instance.\n");
    return 0;
  }
LABEL_12:
  v13 = *(_DWORD*)(a1 + 108);
  v14 = *(_QWORD*)(a1 + 160);
  v15 = *(_DWORD*)(a1 + 116);
  if (v13 <= 1) {
    v16 = 1;
  }
  else {
    v16 = *(_DWORD*)(a1 + 108);
  }
  while (1) {
    if (v15 + 1 < v13) {
      ++v15;
    }
    else {
      v15 = 0;
    }
    v17 = v14 + 624LL * v15;
    *(_DWORD*)(a1 + 116) = v15;
    if (*(_BYTE*)(v17 + 12) == 0) {
      break;
    }
    if (--v16 == 0) {
      GameRoutine_5c02c0("There is no available EmitterSet instance.\n");
      return 0;
    }
  }
  *(_QWORD*)a2 = v17;
  v20 = *(_DWORD*)(a1 + 124);
  *(_DWORD*)(a1 + 124) = v20 + 1;
  *(_DWORD*)(a2 + 8) = v20;
  if ((nn_vfx_detail_5b4f80(v17, a3, v20, a4, a5, a6, a7) & 1) != 0) {
    if ((a8 & 1) != 0) {
      nn_os_LockMutex(a1 + 5856);
      nn_os_LockMutex(a1 + 5856);
      v21 = *(_QWORD*)(a1 + 1200 + 8LL * a5);
      if (v21 != 0) {
        v22 = a1 + 8LL * a5;
        *(_QWORD*)(*(_QWORD*)(v22 + 1712) + 464LL) = v17;
        v21 = *(_QWORD*)(v22 + 1712);
      }
      else {
        *(_QWORD*)(a1 + 1200 + 8LL * a5) = v17;
      }
      *(_QWORD*)(v17 + 464) = 0;
      *(_QWORD*)(v17 + 472) = v21;
      *(_QWORD*)(a1 + 8LL * a5 + 1712) = v17;
      nn_os_UnlockMutex(a1 + 5856);
      nn_os_UnlockMutex(a1 + 5856);
      *(_BYTE*)(v17 + 15) = 1;
      return 1;
    }
    else {
      v23 = *(_QWORD*)(a1 + 176 + 8LL * a5);
      if (v23 != 0) {
        v24 = a1 + 8LL * a5;
        *(_QWORD*)(*(_QWORD*)(v24 + 688) + 464LL) = v17;
        v23 = *(_QWORD*)(v24 + 688);
      }
      else {
        *(_QWORD*)(a1 + 176 + 8LL * a5) = v17;
      }
      *(_QWORD*)(v17 + 464) = 0;
      *(_QWORD*)(v17 + 472) = v23;
      *(_QWORD*)(a1 + 8LL * a5 + 688) = v17;
      return 1;
    }
  }
  else {
    BufferAllocator_5b57b0(v17);
    return 0;
  }
}

__int64* nn_vfx_5d5380(__int64* result, float* a2, __int64 a3, __int64 a4,
                       char a5)
{

#pragma clang fp contract(off)
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  float v14;
  float v15;
  __int64 v16;
  __int64 v17;
  float v18;
  float v19;
  __int64 v20;
  __int64 v21;
  float v22;
  __int64 v23;
  float v24;
  float v25;
  __int64 v26;
  float v27;
  float v28;
  float v29;
  float v30;
  __int64 v31;
  float v32;
  float v33;
  __int64 v34;
  float v35;
  __int64 v36;
  float v37;
  float v38;
  float v39;
  float v40;
  __int64 v41;
  float v42;
  float v43;
  __int64 v44;
  float v45;
  __int64 v46;
  float v47;
  float v48;
  float v49;
  float v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  float v54;
  __int64 v55;
  __int64 v56;
  float v57;
  __int64* v58;
  char v59;
  bool v60;
  bool v61;
  float v62;
  __int64* v63;
  __int64* v64;
  float v65;
  float v66;
  __int64 v67;
  __int64 v68;
  float v69;
  __int64 v70;
  float v71;
  float v72;
  __int64 v73;
  __int64 v74;
  float v75;
  float v76;
  __int64 v77;
  float v78;
  __int64 v79;
  __int64* v80;
  bool v82;
  __int64 v83;
  float* v84;
  __int64* v85;
  float* v86;
  float v87;
  float v88;
  int v89;
  __int64 v90;
  _QWORD* v91;
  float v92;
  float v93;
  __int64 v94;
  float v95;
  float v96;
  int v97;
  __int64* v98;
  float v99;
  __int64* v100;

  v59 = COERCE_AS(__typeof__(v59),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = result;
LABEL_2:
  v9 = v8;
LABEL_3:
  v10 = 1 - a4;
  while (1) {
    v11 = v10;
    v8 = v9;
    v12 = ((char*)a2 - (char*)v9) >> 3;
    if (v12 > 2) {
      break;
    }
    if ((unsigned __int64)v12 < 2) {
      return result;
    }
    if (v12 == 2) {
      v62 = *(a2 - 2);
      if (v62 > *(float*)v9 ||
          v62 >= *(float*)v9 && (signed __int32)*((_DWORD*)a2 - 1) >=
                                    (signed __int32)*((_DWORD*)v9 + 1)) {
        return result;
      }
    LABEL_197:
      v94 = *v9;
      *v9 = *((_QWORD*)a2 - 1);
      goto LABEL_198;
    }
  LABEL_11:
    if (v12 <= 23) {
      v80 = v9 + 1;
      v82 = v9 == (__int64*)a2 || v80 == (__int64*)a2;
      if ((a5 & 1) != 0) {
        if (!v82) {
          v83 = 0;
          v84 = (float*)v9;
          do {
            v86 = v84;
            v87 = v84[2];
            v88 = *v84;
            v84 = (float*)v80;
            if (v87 <= v88) {
              v89 = *((_DWORD*)v86 + 3);
              if (v87 < v88 || v89 < (signed __int32)*((_DWORD*)v86 + 1)) {
                *((_QWORD*)v86 + 1) = *(_QWORD*)v86;
                v85 = v9;
                if (v86 != (float*)v9) {
                  v90 = v83;
                  v85 = (__int64*)v86;
                  do {
                    v91 = (__int64*)((char*)v9 + v90);
                    v92 = *(float*)((char*)v9 + v90 - 8);
                    if (v92 < v87) {
                      v85 = (__int64*)((char*)v9 + v90);
                      goto LABEL_162;
                    }
                    if (v92 <= v87 &&
                        v89 >=
                            (signed __int32)*(_DWORD*)((char*)v9 + v90 - 4)) {
                      goto LABEL_162;
                    }
                    v90 -= 8;
                    *v91 = *(v91 - 1);
                    --v85;
                  } while (v90 != 0);
                  v85 = v9;
                }
              LABEL_162:
                *(float*)v85 = v87;
                *((_DWORD*)v85 + 1) = v89;
              }
            }
            v80 = (__int64*)(v84 + 2);
            v83 += 8;
          } while (v84 + 2 != a2);
        }
      }
      else if (!v82) {
        do {
          v96 = *(float*)v80;
          if (*(float*)v80 <= *(float*)v8) {
            v97 = *((_DWORD*)v8 + 3);
            if (*(float*)v80 < *(float*)v8 ||
                v97 < (signed __int32)*((_DWORD*)v8 + 1)) {
              v98 = v8;
              *v80 = *v8;
              v99 = *((float*)v8 - 2);
              if (v99 >= v96) {
                v100 = v8;
                while (v99 > v96 ||
                       v97 < (signed __int32)*((_DWORD*)v100 - 1)) {
                  v99 = *((float*)v100 - 4);
                  v98 = v100 - 1;
                  *v100 = *(v100 - 1);
                  --v100;
                  if (v99 < v96) {
                    goto LABEL_184;
                  }
                }
                v98 = v100;
              }
            LABEL_184:
              *(float*)v98 = v96;
              *((_DWORD*)v98 + 1) = v97;
            }
          }
          ++v80;
          ++v8;
        } while (v80 != (__int64*)a2);
      }
      return result;
    }
    if (v10 == 1) {
      if (v9 != (__int64*)a2) {
        return nn_vfx_5d66c0(v9, (__int64*)a2, (__int64*)a2, a3);
      }
      return result;
    }
    v13 = &v9[(unsigned __int64)v12 >> 1];
    if ((unsigned __int64)v12 >= 0x81) {
      v14 = *(float*)v13;
      if (*(float*)v13 > *(float*)v9 ||
          *(float*)v13 >= *(float*)v9 &&
              (signed __int32)*((_DWORD*)v13 + 1) >=
                  (signed __int32)*((_DWORD*)v9 + 1)) {
        v15 = *(a2 - 2);
        if (v15 <= v14 &&
            (v15 < v14 || (signed __int32)*((_DWORD*)a2 - 1) <
                              (signed __int32)*((_DWORD*)v13 + 1))) {
          v16 = *v13;
          *v13 = *((_QWORD*)a2 - 1);
          *((_QWORD*)a2 - 1) = v16;
          if (*(float*)v13 <= *(float*)v9 &&
              (*(float*)v13 < *(float*)v9 ||
               (signed __int32)*((_DWORD*)v13 + 1) <
                   (signed __int32)*((_DWORD*)v9 + 1))) {
            v17 = *v9;
            *v9 = *v13;
            *v13 = v17;
          }
        }
      }
      else {
        v22 = *(a2 - 2);
        if (v22 > v14 ||
            v22 >= v14 && (signed __int32)*((_DWORD*)a2 - 1) >=
                              (signed __int32)*((_DWORD*)v13 + 1)) {
          v23 = *v9;
          *v9 = *v13;
          *v13 = v23;
          v24 = *(a2 - 2);
          if (v24 <= *(float*)&v23 &&
              (v24 < *(float*)&v23 ||
               (signed __int32)*((_DWORD*)a2 - 1) < SHIDWORD(v23))) {
            *v13 = *((_QWORD*)a2 - 1);
            goto LABEL_48;
          }
        }
        else {
          v23 = *v9;
          *v9 = *((_QWORD*)a2 - 1);
        LABEL_48:
          *((_QWORD*)a2 - 1) = v23;
        }
      }
      v28 = *((float*)v13 - 2);
      v29 = *((float*)v9 + 2);
      if (v28 > v29 || v28 >= v29 && (signed __int32)*((_DWORD*)v13 - 1) >=
                                         (signed __int32)*((_DWORD*)v9 + 3)) {
        v30 = *(a2 - 4);
        if (v30 <= v28 &&
            (v30 < v28 || (signed __int32)*((_DWORD*)a2 - 3) <
                              (signed __int32)*((_DWORD*)v13 - 1))) {
          v31 = *(v13 - 1);
          *(v13 - 1) = *((_QWORD*)a2 - 2);
          *((_QWORD*)a2 - 2) = v31;
          v32 = *((float*)v13 - 2);
          v33 = *((float*)v9 + 2);
          if (v32 <= v33 &&
              (v32 < v33 || (signed __int32)*((_DWORD*)v13 - 1) <
                                (signed __int32)*((_DWORD*)v9 + 3))) {
            v34 = v9[1];
            v9[1] = *(v13 - 1);
            *(v13 - 1) = v34;
          }
        }
      }
      else {
        v35 = *(a2 - 4);
        if (v35 > v28 ||
            v35 >= v28 && (signed __int32)*((_DWORD*)a2 - 3) >=
                              (signed __int32)*((_DWORD*)v13 - 1)) {
          v36 = v9[1];
          v9[1] = *(v13 - 1);
          *(v13 - 1) = v36;
          v37 = *(a2 - 4);
          if (v37 <= *(float*)&v36 &&
              (v37 < *(float*)&v36 ||
               (signed __int32)*((_DWORD*)a2 - 3) < SHIDWORD(v36))) {
            *(v13 - 1) = *((_QWORD*)a2 - 2);
            goto LABEL_73;
          }
        }
        else {
          v36 = v9[1];
          v9[1] = *((_QWORD*)a2 - 2);
        LABEL_73:
          *((_QWORD*)a2 - 2) = v36;
        }
      }
      v38 = *((float*)v13 + 2);
      v39 = *((float*)v9 + 4);
      if (v38 > v39 || v38 >= v39 && (signed __int32)*((_DWORD*)v13 + 3) >=
                                         (signed __int32)*((_DWORD*)v9 + 5)) {
        v40 = *(a2 - 6);
        if (v40 <= v38 &&
            (v40 < v38 || (signed __int32)*((_DWORD*)a2 - 5) <
                              (signed __int32)*((_DWORD*)v13 + 3))) {
          v41 = v13[1];
          v13[1] = *((_QWORD*)a2 - 3);
          *((_QWORD*)a2 - 3) = v41;
          v42 = *((float*)v13 + 2);
          v43 = *((float*)v9 + 4);
          if (v42 <= v43 &&
              (v42 < v43 || (signed __int32)*((_DWORD*)v13 + 3) <
                                (signed __int32)*((_DWORD*)v9 + 5))) {
            v44 = v9[2];
            v9[2] = v13[1];
            v13[1] = v44;
          }
        }
      }
      else {
        v45 = *(a2 - 6);
        if (v45 > v38 ||
            v45 >= v38 && (signed __int32)*((_DWORD*)a2 - 5) >=
                              (signed __int32)*((_DWORD*)v13 + 3)) {
          v46 = v9[2];
          v9[2] = v13[1];
          v13[1] = v46;
          v47 = *(a2 - 6);
          if (v47 <= *(float*)&v46 &&
              (v47 < *(float*)&v46 ||
               (signed __int32)*((_DWORD*)a2 - 5) < SHIDWORD(v46))) {
            v13[1] = *((_QWORD*)a2 - 3);
            goto LABEL_92;
          }
        }
        else {
          v46 = v9[2];
          v9[2] = *((_QWORD*)a2 - 3);
        LABEL_92:
          *((_QWORD*)a2 - 3) = v46;
        }
      }
      v48 = *(float*)v13;
      v49 = *((float*)v13 - 2);
      if (*(float*)v13 > v49 ||
          *(float*)v13 >= v49 && (signed __int32)*((_DWORD*)v13 + 1) >=
                                     (signed __int32)*((_DWORD*)v13 - 1)) {
        v50 = *((float*)v13 + 2);
        if (v50 <= v48 &&
            (v50 < v48 || (signed __int32)*((_DWORD*)v13 + 3) <
                              (signed __int32)*((_DWORD*)v13 + 1))) {
          v52 = *v13;
          v51 = v13[1];
          *v13 = v51;
          v13[1] = v52;
          if (v49 >= *(float*)&v51 &&
              (v49 > *(float*)&v51 ||
               (signed __int32)*((_DWORD*)v13 - 1) > SHIDWORD(v51))) {
            v53 = *(v13 - 1);
            *(v13 - 1) = v51;
            *v13 = v53;
          }
        }
      }
      else {
        v54 = *((float*)v13 + 2);
        if (v54 > v48 ||
            v54 >= v48 && (signed __int32)*((_DWORD*)v13 + 3) >=
                              (signed __int32)*((_DWORD*)v13 + 1)) {
          v55 = *(v13 - 1);
          *(v13 - 1) = *v13;
          *v13 = v55;
          if (v54 <= *(float*)&v55 &&
              (v54 < *(float*)&v55 ||
               (signed __int32)*((_DWORD*)v13 + 3) < SHIDWORD(v55))) {
            *v13 = v13[1];
            goto LABEL_111;
          }
        }
        else {
          v55 = *(v13 - 1);
          *(v13 - 1) = v13[1];
        LABEL_111:
          v13[1] = v55;
        }
      }
      v56 = *v9;
      *v9 = *v13;
      *v13 = v56;
      if ((a5 & 1) != 0) {
        goto LABEL_116;
      }
      goto LABEL_113;
    }
    v18 = *(float*)v9;
    if (*(float*)v9 <= *(float*)v13 &&
        (*(float*)v9 < *(float*)v13 ||
         (signed __int32)*((_DWORD*)v9 + 1) <
             (signed __int32)*((_DWORD*)v13 + 1))) {
      v25 = *(a2 - 2);
      if (v25 > v18 || v25 >= v18 && (signed __int32)*((_DWORD*)a2 - 1) >=
                                         (signed __int32)*((_DWORD*)v9 + 1)) {
        v26 = *v13;
        *v13 = *v9;
        *v9 = v26;
        v27 = *(a2 - 2);
        if (v27 <= *(float*)&v26 &&
            (v27 < *(float*)&v26 ||
             (signed __int32)*((_DWORD*)a2 - 1) < SHIDWORD(v26))) {
          *v9 = *((_QWORD*)a2 - 1);
          goto LABEL_67;
        }
      }
      else {
        v26 = *v13;
        *v13 = *((_QWORD*)a2 - 1);
      LABEL_67:
        *((_QWORD*)a2 - 1) = v26;
      }
    LABEL_68:
      if ((a5 & 1) != 0) {
        goto LABEL_116;
      }
      goto LABEL_113;
    }
    v19 = *(a2 - 2);
    if (v19 > v18 || v19 >= v18 && (signed __int32)*((_DWORD*)a2 - 1) >=
                                       (signed __int32)*((_DWORD*)v9 + 1)) {
      goto LABEL_68;
    }
    v20 = *v9;
    *v9 = *((_QWORD*)a2 - 1);
    *((_QWORD*)a2 - 1) = v20;
    if (*(float*)v9 > *(float*)v13 ||
        *(float*)v9 >= *(float*)v13 &&
            (signed __int32)*((_DWORD*)v9 + 1) >=
                (signed __int32)*((_DWORD*)v13 + 1)) {
      goto LABEL_68;
    }
    v21 = *v13;
    *v13 = *v9;
    *v9 = v21;
    if ((a5 & 1) == 0) {
    LABEL_113:
      v57 = *((float*)v9 - 2);
      if (v57 > *(float*)v9 ||
          v57 >= *(float*)v9 && (signed __int32)*((_DWORD*)v9 - 1) >=
                                    (signed __int32)*((_DWORD*)v9 + 1)) {
        result = (__int64*)nn_vfx_5d5fa0_alt1((float*)v9, (unsigned __int64)a2),
        v59 = COERCE_AS(__typeof__(v59),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v9 = result;
        goto LABEL_121;
      }
    }
  LABEL_116:
    v58 = nn_vfx_5d6100((__int64)v9, (unsigned __int64)a2),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v59 & 1) == 0) {
      goto LABEL_119;
    }
    v60 = nn_vfx_5d6260(v9, (float*)v58, a3),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v9 = v58 + 1;
    v61 = v60;
    result = (__int64*)nn_vfx_5d6260(v58 + 1, a2, a3),
    v59 = COERCE_AS(__typeof__(v59),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (((unsigned __int8)result & 1) != 0) {
      a4 = -v11;
      a2 = (float*)v58;
      if (v61) {
        return result;
      }
      goto LABEL_2;
    }
    v10 = v11 + 1;
    if (!v61) {
    LABEL_119:
      result = nn_vfx_5d5380(v8, v58, a3, -v11, a5 & 1),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v9 = v58 + 1;
    LABEL_121:
      a5 = 0;
      a4 = -v11;
      goto LABEL_3;
    }
  }
  if (v12 != 3) {
    if (v12 == 4) {
      return nn_vfx_5d5de0(v9, v9 + 1, v9 + 2, (__int64*)a2 - 1);
    }
    if (v12 == 5) {
      v63 = v9 + 2;
      v64 = v9 + 3;
      result = nn_vfx_5d5de0(v8, v8 + 1, v8 + 2, v8 + 3),
      v59 = COERCE_AS(__typeof__(v59),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v65 = *(a2 - 2);
      v66 = *((float*)v8 + 6);
      if (v65 <= v66 && (v65 < v66 || (signed __int32)*((_DWORD*)a2 - 1) <
                                          (signed __int32)*((_DWORD*)v8 + 7))) {
        v67 = *v64;
        *v64 = *((_QWORD*)a2 - 1);
        *((_QWORD*)a2 - 1) = v67;
        if (*(float*)v64 <= *(float*)v63 &&
            (*(float*)v64 < *(float*)v63 ||
             (signed __int32)*((_DWORD*)v8 + 7) <
                 (signed __int32)*((_DWORD*)v8 + 5))) {
          v68 = *v64;
          v69 = *((float*)v8 + 2);
          v70 = *v63;
          v71 = COERCE_FLOAT(*v64);
          *v63 = *v64;
          *v64 = v70;
          if (v69 >= v71 && (v69 > v71 || (signed __int32)*((_DWORD*)v8 + 3) >
                                              SHIDWORD(v68))) {
            v72 = *(float*)v8;
            v73 = v8[1];
            v8[1] = v68;
            v8[2] = v73;
            if (v72 >= v71 && (v72 > v71 || (signed __int32)*((_DWORD*)v8 + 1) >
                                                SHIDWORD(v68))) {
              v74 = *v8;
              *v8 = v68;
              v8[1] = v74;
            }
          }
        }
      }
      return result;
    }
    goto LABEL_11;
  }
  v75 = *((float*)v9 + 2);
  if (v75 <= *(float*)v9 &&
      (v75 < *(float*)v9 || (signed __int32)*((_DWORD*)v9 + 3) <
                                (signed __int32)*((_DWORD*)v9 + 1))) {
    v93 = *(a2 - 2);
    if (v93 <= v75 && (v93 < v75 || (signed __int32)*((_DWORD*)a2 - 1) <
                                        (signed __int32)*((_DWORD*)v9 + 3))) {
      goto LABEL_197;
    }
    v94 = *v9;
    *v9 = v9[1];
    v9[1] = v94;
    v95 = *(a2 - 2);
    if (v95 > *(float*)&v94 ||
        v95 >= *(float*)&v94 &&
            (signed __int32)*((_DWORD*)a2 - 1) >= SHIDWORD(v94)) {
      return result;
    }
    v9[1] = *((_QWORD*)a2 - 1);
  LABEL_198:
    *((_QWORD*)a2 - 1) = v94;
    return result;
  }
  v76 = *(a2 - 2);
  if (v76 <= v75 && (v76 < v75 || (signed __int32)*((_DWORD*)a2 - 1) <
                                      (signed __int32)*((_DWORD*)v9 + 3))) {
    v77 = v9[1];
    v9[1] = *((_QWORD*)a2 - 1);
    *((_QWORD*)a2 - 1) = v77;
    v78 = *((float*)v9 + 2);
    if (v78 <= *(float*)v9 &&
        (v78 < *(float*)v9 || (signed __int32)*((_DWORD*)v9 + 3) <
                                  (signed __int32)*((_DWORD*)v9 + 1))) {
      v79 = *v9;
      *v9 = v9[1];
      v9[1] = v79;
    }
  }
  return result;
}

__int64* nn_vfx_5d5de0(__int64* result, __int64* a2, __int64* a3, __int64* a4)
{

#pragma clang fp contract(off)
  float v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v4 = *(float*)a2;
  if (*(float*)a2 > *(float*)result ||
      *(float*)a2 >= *(float*)result &&
          (signed __int32)*((_DWORD*)a2 + 1) >=
              (signed __int32)*((_DWORD*)result + 1)) {
    v5 = *(float*)a3;
    if (*(float*)a3 <= v4 &&
        (*(float*)a3 < v4 || (signed __int32)*((_DWORD*)a3 + 1) <
                                 (signed __int32)*((_DWORD*)a2 + 1))) {
      v6 = *a2;
      *a2 = *a3;
      *a3 = v6;
      v5 = *(float*)&v6;
      if (*(float*)a2 <= *(float*)result &&
          (*(float*)a2 < *(float*)result ||
           (signed __int32)*((_DWORD*)a2 + 1) <
               (signed __int32)*((_DWORD*)result + 1))) {
        v7 = *result;
        *result = *a2;
        *a2 = v7;
        v5 = *(float*)a3;
      }
    }
  }
  else if (*(float*)a3 > v4 ||
           *(float*)a3 >= v4 && (signed __int32)*((_DWORD*)a3 + 1) >=
                                    (signed __int32)*((_DWORD*)a2 + 1)) {
    v8 = *result;
    *result = *a2;
    *a2 = v8;
    v5 = *(float*)a3;
    if (*(float*)a3 <= *(float*)&v8 &&
        (*(float*)a3 < *(float*)&v8 ||
         (signed __int32)*((_DWORD*)a3 + 1) < SHIDWORD(v8))) {
      v5 = *(float*)&v8;
      *a2 = *a3;
      *a3 = v8;
    }
  }
  else {
    v9 = *result;
    *result = *a3;
    *a3 = v9;
    v5 = *(float*)&v9;
  }
  if (*(float*)a4 <= v5 &&
      (*(float*)a4 < v5 || (signed __int32)*((_DWORD*)a4 + 1) <
                               (signed __int32)*((_DWORD*)a3 + 1))) {
    v10 = *a3;
    *a3 = *a4;
    *a4 = v10;
    if (*(float*)a3 <= *(float*)a2 &&
        (*(float*)a3 < *(float*)a2 || (signed __int32)*((_DWORD*)a3 + 1) <
                                          (signed __int32)*((_DWORD*)a2 + 1))) {
      v11 = *a2;
      *a2 = *a3;
      *a3 = v11;
      if (*(float*)a2 <= *(float*)result &&
          (*(float*)a2 < *(float*)result ||
           (signed __int32)*((_DWORD*)a2 + 1) <
               (signed __int32)*((_DWORD*)result + 1))) {
        v12 = *result;
        *result = *a2;
        *a2 = v12;
      }
    }
  }
  return result;
}

float* nn_vfx_5d5fa0(float* a1, unsigned __int64 a2)
{

#pragma clang fp contract(off)
  int v2;
  int v3;
  float v4;
  float v5;
  float* i;
  unsigned __int64 v7;
  float v8;
  __int64 v9;
  float v10;
  float v11;

  v2 = *(_DWORD*)a1;
  v3 = *((_DWORD*)a1 + 1);
  v4 = *(float*)(a2 - 8);
  v5 = *a1;
  if (v4 < *a1 || v4 <= *a1 && v3 >= (signed __int32)*(_DWORD*)(a2 - 4)) {
    for (i = a1 + 2;
         (unsigned __int64)i < a2 &&
         (*i < v5 || *i <= v5 && v3 >= (signed __int32)*((_DWORD*)i + 1));
         i += 2)
      ;
  }
  else {
    for (i = a1 + 2;
         *i < v5 || *i <= v5 && v3 >= (signed __int32)*((_DWORD*)i + 1); i += 2)
      ;
  }
  if ((unsigned __int64)i < a2) {
    v7 = a2 - 8;
  }
  else {
    v7 = a2;
  }
  if ((unsigned __int64)i < a2 && v4 >= v5) {
    v7 = a2 - 8;
    do {
      if (v4 <= v5 && v3 >= (signed __int32)*(_DWORD*)(v7 + 4)) {
        break;
      }
      v8 = *(float*)(v7 - 8);
      v7 -= 8LL;
      v4 = v8;
    } while (v8 >= v5);
  }
  while ((unsigned __int64)i < v7) {
    v9 = *(_QWORD*)i;
    *(_QWORD*)i = *(_QWORD*)v7;
    i += 2;
    *(_QWORD*)v7 = v9;
    while (*i < v5 || *i <= v5 && v3 >= (signed __int32)*((_DWORD*)i + 1)) {
      i += 2;
    }
    do {
      v10 = *(float*)(v7 - 8);
      v7 -= 8LL;
      v11 = v10;
    } while (v10 >= v5 &&
             (v11 > v5 || v3 < (signed __int32)*(_DWORD*)(v7 + 4)));
  }
  if (a1 != i - 2) {
    *(_QWORD*)a1 = *((_QWORD*)i - 1);
  }
  *((_DWORD*)i - 2) = v2;
  *((_DWORD*)i - 1) = v3;
  return i;
}

bool nn_vfx_5d6260(_QWORD* a1, float* a2, __int64 a3)
{

#pragma clang fp contract(off)
  signed __int64 v3;
  float v4;
  float* v5;
  float* v6;
  _QWORD* v7;
  float v10;
  float v11;
  __int64 v12;
  __int64 v13;
  float v14;
  __int64 v15;
  float v16;
  float v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  __int64 v22;
  float v23;
  __int64 v24;
  float v25;
  float v26;
  float* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  __int64 v32;
  float v33;
  float v34;
  __int64 v35;
  float v36;
  __int64 v37;
  float* v38;
  __int64 v39;
  int v40;
  float v41;
  int v42;
  __int64 v43;
  char* v44;
  float v45;

  v3 = ((char*)a2 - (char*)a1) >> 3;
  if (v3 > 2) {
    if (v3 == 3) {
      v20 = *((float*)a1 + 2);
      if (v20 > *(float*)a1 ||
          v20 >= *(float*)a1 && (signed __int32)*((_DWORD*)a1 + 3) >=
                                    (signed __int32)*((_DWORD*)a1 + 1)) {
        v21 = *(a2 - 2);
        if (v21 <= v20 &&
            (v21 < v20 || (signed __int32)*((_DWORD*)a2 - 1) <
                              (signed __int32)*((_DWORD*)a1 + 3))) {
          v22 = a1[1];
          a1[1] = *((_QWORD*)a2 - 1);
          *((_QWORD*)a2 - 1) = v22;
          v23 = *((float*)a1 + 2);
          if (v23 <= *(float*)a1 &&
              (v23 < *(float*)a1 || (signed __int32)*((_DWORD*)a1 + 3) <
                                        (signed __int32)*((_DWORD*)a1 + 1))) {
            v24 = *a1;
            *a1 = a1[1];
            a1[1] = v24;
          }
        }
        return true;
      }
      v31 = *(a2 - 2);
      if (v31 > v20 || v31 >= v20 && (signed __int32)*((_DWORD*)a2 - 1) >=
                                         (signed __int32)*((_DWORD*)a1 + 3)) {
        v32 = *a1;
        *a1 = a1[1];
        a1[1] = v32;
        v33 = *(a2 - 2);
        if (v33 <= *(float*)&v32 &&
            (v33 < *(float*)&v32 ||
             (signed __int32)*((_DWORD*)a2 - 1) < SHIDWORD(v32))) {
          a1[1] = *((_QWORD*)a2 - 1);
          *((_QWORD*)a2 - 1) = v32;
        }
        return true;
      }
    LABEL_57:
      v37 = *a1;
      *a1 = *((_QWORD*)a2 - 1);
      *((_QWORD*)a2 - 1) = v37;
      return true;
    }
    if (v3 != 4) {
      if (v3 == 5) {
        v5 = (float*)(a1 + 1);
        v6 = (float*)(a1 + 2);
        v7 = a1 + 3;
        nn_vfx_5d5de0(a1, a1 + 1, a1 + 2, a1 + 3);
        v10 = *(a2 - 2);
        v11 = *((float*)a1 + 6);
        if (v10 <= v11 &&
            (v10 < v11 || (signed __int32)*((_DWORD*)a2 - 1) <
                              (signed __int32)*((_DWORD*)a1 + 7))) {
          v12 = *v7;
          *v7 = *((_QWORD*)a2 - 1);
          *((_QWORD*)a2 - 1) = v12;
          if (*(float*)v7 <= *v6 &&
              (*(float*)v7 < *v6 || (signed __int32)*((_DWORD*)a1 + 7) <
                                        (signed __int32)*((_DWORD*)a1 + 5))) {
            v13 = *v7;
            v14 = *v5;
            v15 = *(_QWORD*)v6;
            v16 = COERCE_FLOAT(*v7);
            *(_QWORD*)v6 = *v7;
            *v7 = v15;
            if (v14 >= v16 && (v14 > v16 || (signed __int32)*((_DWORD*)a1 + 3) >
                                                SHIDWORD(v13))) {
              v17 = *(float*)a1;
              v18 = a1[1];
              a1[1] = v13;
              a1[2] = v18;
              if (v17 >= v16 &&
                  (v17 > v16 ||
                   (signed __int32)*((_DWORD*)a1 + 1) > SHIDWORD(v13))) {
                v19 = *a1;
                *a1 = v13;
                a1[1] = v19;
              }
            }
          }
        }
        return true;
      }
      goto LABEL_32;
    }
    nn_vfx_5d5de0(a1, a1 + 1, a1 + 2, (__int64*)a2 - 1);
    return true;
  }
  if ((unsigned __int64)v3 < 2) {
    return true;
  }
  if (v3 == 2) {
    v4 = *(a2 - 2);
    if (v4 > *(float*)a1 ||
        v4 >= *(float*)a1 && (signed __int32)*((_DWORD*)a2 - 1) >=
                                 (signed __int32)*((_DWORD*)a1 + 1)) {
      return true;
    }
    goto LABEL_57;
  }
LABEL_32:
  v25 = *((float*)a1 + 2);
  v26 = *(float*)a1;
  v27 = (float*)(a1 + 2);
  if (v25 > *(float*)a1 ||
      v25 >= *(float*)a1 && (signed __int32)*((_DWORD*)a1 + 3) >=
                                (signed __int32)*((_DWORD*)a1 + 1)) {
    if (*v27 <= v25 && (*v27 < v25 || (signed __int32)*((_DWORD*)a1 + 5) <
                                          (signed __int32)*((_DWORD*)a1 + 3))) {
      v29 = a1[1];
      v28 = a1[2];
      a1[1] = v28;
      a1[2] = v29;
      if (v26 >= *(float*)&v28 &&
          (v26 > *(float*)&v28 ||
           (signed __int32)*((_DWORD*)a1 + 1) > SHIDWORD(v28))) {
        v30 = *a1;
        *a1 = v28;
        a1[1] = v30;
      }
    }
  }
  else {
    v34 = *v27;
    if (*v27 <= v25 && (*v27 < v25 || (signed __int32)*((_DWORD*)a1 + 5) <
                                          (signed __int32)*((_DWORD*)a1 + 3))) {
      v35 = *a1;
      *a1 = a1[2];
      goto LABEL_61;
    }
    v35 = *a1;
    v36 = COERCE_FLOAT(*a1);
    *a1 = a1[1];
    a1[1] = v35;
    if (v34 <= v36 &&
        (v34 < v36 || (signed __int32)*((_DWORD*)a1 + 5) < SHIDWORD(v35))) {
      a1[1] = a1[2];
    LABEL_61:
      a1[2] = v35;
    }
  }
  v38 = (float*)(a1 + 3);
  if (a1 + 3 == (_QWORD*)a2) {
    return true;
  }
  v39 = 0;
  v40 = 0;
  while (1) {
    v41 = *v38;
    if (*v38 <= *v27) {
      v42 = *((_DWORD*)v38 + 1);
      if (*v38 < *v27 || v42 < (signed __int32)*((_DWORD*)v27 + 1)) {
        *(_QWORD*)v38 = *(_QWORD*)v27;
        v43 = v39;
        do {
          v44 = (char*)a1 + v43;
          v45 = *(float*)((char*)a1 + v43 + 8);
          if (v45 < v41) {
            v27 = (float*)(v44 + 16);
            goto LABEL_65;
          }
          if (v45 <= v41 &&
              v42 >= (signed __int32)*(_DWORD*)((char*)a1 + v43 + 12)) {
            goto LABEL_65;
          }
          v43 -= 8;
          *((_QWORD*)v44 + 2) = *((_QWORD*)v44 + 1);
          v27 -= 2;
        } while (v43 != -16);
        v27 = (float*)a1;
      LABEL_65:
        ++v40;
        *v27 = v41;
        *((_DWORD*)v27 + 1) = v42;
        if (v40 == 8) {
          return v38 + 2 == a2;
        }
      }
    }
    v27 = v38;
    v38 += 2;
    v39 += 8;
    if (v38 == a2) {
      return true;
    }
  }
}

__int64* nn_vfx_5d66c0(__int64* a1, __int64* a2, __int64* a3, __int64 a4)
{

#pragma clang fp contract(off)
  __int64* v6;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  float v22;
  float v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  float v27;
  __int64* v28;
  int v29;
  __int64* v30;
  unsigned __int64 v31;

  if (a1 != a2) {
    v6 = a2;
    v8 = a2 - a1;
    if (v8 >= 2) {
      v9 = (unsigned __int64)(v8 - 2) >> 1;
      v10 = v9 + 1;
      v11 = &a1[v9];
      do {
        GameRoutine_5d6960((__int64)a1, a4, v8, (__int64)v11);
        --v10;
        --v11;
      } while (v10 != 0);
    }
    v12 = v6;
    if (v6 != a3) {
      v12 = v6;
      do {
        if (*(float*)v12 <= *(float*)a1 &&
            (*(float*)v12 < *(float*)a1 ||
             (signed __int32)*((_DWORD*)v12 + 1) <
                 (signed __int32)*((_DWORD*)a1 + 1))) {
          v13 = *v12;
          *v12 = *a1;
          *a1 = v13;
          GameRoutine_5d6960((__int64)a1, a4, v8, (__int64)a1);
        }
        ++v12;
      } while (v12 != a3);
    }
    if (v8 < 2) {
      return v12;
    }
    while (1) {
      v16 = *a1;
      v17 = 0;
      v18 = a1;
      do {
        v19 = &v18[v17];
        v20 = v18;
        v18 = v19 + 1;
        v21 = 2 * v17 + 2;
        v17 = (2 * v17) | 1;
        if (v21 < v8) {
          v22 = *((float*)v19 + 4);
          v23 = *((float*)v19 + 2);
          if (v23 <= v22 &&
              (v23 < v22 || (signed __int32)*((_DWORD*)v19 + 3) <
                                (signed __int32)*((_DWORD*)v19 + 5))) {
            v18 = v19 + 2;
            v17 = v21;
          }
        }
        *v20 = *v18;
      } while (v17 <= (__int64)((unsigned __int64)(v8 - 2) >> 1));
      if (v18 == --v6) {
        *v18 = v16;
      }
      else {
        *v18 = *v6;
        *v6 = v16;
        v24 = ((char*)v18 - (char*)a1 + 8) >> 3;
        v25 = v24 - 2;
        if (v24 >= 2) {
          v26 = v25 >> 1;
          v27 = *(float*)v18;
          v28 = &a1[v25 >> 1];
          if (*(float*)v28 <= *(float*)v18) {
            if (*(float*)v28 < *(float*)v18) {
              v29 = *((_DWORD*)v18 + 1);
            LABEL_32:
              *v18 = *v28;
              if (v25 >= 2) {
                while (1) {
                  v31 = v26 - 1;
                  v26 = (v26 - 1) >> 1;
                  v30 = &a1[v26];
                  if (*(float*)v30 > v27 ||
                      *(float*)v30 >= v27 &&
                          (signed __int32)*((_DWORD*)v30 + 1) >= v29) {
                    break;
                  }
                  *v28 = *v30;
                  v28 = &a1[v26];
                  if (v31 <= 1) {
                    goto LABEL_34;
                  }
                }
              }
              v30 = v28;
            LABEL_34:
              *(float*)v30 = v27;
              *((_DWORD*)v30 + 1) = v29;
              goto LABEL_17;
            }
            v29 = *((_DWORD*)v18 + 1);
            if ((signed __int32)*((_DWORD*)v28 + 1) < v29) {
              goto LABEL_32;
            }
          }
        }
      }
    LABEL_17:
      if (v8-- <= 2) {
        return v12;
      }
    }
  }
  return a3;
}

__int64* nn_vfx_5d7840(__int64 a1, unsigned __int64 a2)
{

#pragma clang fp contract(off)
  float v2;
  int v3;
  float* v4;
  float v5;
  float v6;
  float v7;
  bool v8;
  __int64 v10;
  float v11;
  float v12;
  bool v13;
  float* v14;
  unsigned __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  bool v20;

  v2 = *(float*)a1;
  v3 = *(_DWORD*)(a1 + 4);
  v4 = (float*)(a1 + 8);
  v5 = *(float*)(a1 + 8);
  v6 = *(float*)a1;
  if (v5 >= *(float*)a1) {
    v10 = 0;
    while (v5 > v6 || (signed __int32)*((_DWORD*)v4 + 1) < v3) {
      v11 = v4[2];
      v4 += 2;
      v5 = v11;
      v10 -= 8;
      if (v11 < v6) {
        goto LABEL_17;
      }
    }
    if (v10 == 0) {
      goto LABEL_2;
    }
    do {
      do {
      LABEL_17:
        v12 = *(float*)(a2 - 8);
        a2 -= 8LL;
        v13 = v12 <= v6;
      } while (v12 < v6);
    } while (v13 && (signed __int32)*(_DWORD*)(a2 + 4) >= v3);
  }
  else {
  LABEL_2:
    while ((unsigned __int64)v4 < a2) {
      while (1) {
        v7 = *(float*)(a2 - 8);
        a2 -= 8LL;
        v8 = v7 <= v6;
        if (v7 < v6) {
          break;
        }
        if (v8 && (signed __int32)*(_DWORD*)(a2 + 4) >= v3 &&
            (unsigned __int64)v4 < a2) {
          continue;
        }
        goto LABEL_21;
      }
    }
  }
LABEL_21:
  v14 = v4;
  if ((unsigned __int64)v4 < a2) {
    v14 = v4;
    v15 = a2;
    do {
      v16 = *(_QWORD*)v14;
      *(_QWORD*)v14 = *(_QWORD*)v15;
      *(_QWORD*)v15 = v16;
      do {
        v17 = v14[2];
        v14 += 2;
        v18 = v17;
      } while (v17 >= v6 &&
               (v18 > v6 || (signed __int32)*((_DWORD*)v14 + 1) < v3));
      do {
        do {
          v19 = *(float*)(v15 - 8);
          v15 -= 8LL;
          v20 = v19 <= v6;
        } while (v19 < v6);
      } while (v20 && (signed __int32)*(_DWORD*)(v15 + 4) >= v3);
    } while ((unsigned __int64)v14 < v15);
  }
  if ((float*)a1 != v14 - 2) {
    *(_QWORD*)a1 = *((_QWORD*)v14 - 1);
  }
  *(v14 - 2) = v2;
  *((_DWORD*)v14 - 1) = v3;
  return (__int64*)(v14 - 2);
}

bool nn_vfx_5d79a0(_QWORD* a1, float* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  float v3;
  float* v4;
  float* v5;
  _QWORD* v6;
  float v9;
  float v10;
  __int64 v11;
  __int64 v12;
  float v13;
  __int64 v14;
  float v15;
  float v16;
  __int64 v17;
  __int64 v18;
  float v19;
  float v20;
  __int64 v21;
  float v22;
  __int64 v23;
  float v24;
  float v25;
  float* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  float v30;
  __int64 v31;
  float v32;
  float v33;
  __int64 v34;
  float v35;
  __int64 v36;
  float* v37;
  __int64 v38;
  int v39;
  float v40;
  int v41;
  __int64 v42;
  char* v43;
  float v44;

  v2 = ((char*)a2 - (char*)a1) >> 3;
  if (v2 > 2) {
    if (v2 == 3) {
      v19 = *((float*)a1 + 2);
      if (v19 < *(float*)a1 ||
          v19 <= *(float*)a1 && (signed __int32)*((_DWORD*)a1 + 3) >=
                                    (signed __int32)*((_DWORD*)a1 + 1)) {
        v20 = *(a2 - 2);
        if (v20 >= v19 &&
            (v20 > v19 || (signed __int32)*((_DWORD*)a2 - 1) <
                              (signed __int32)*((_DWORD*)a1 + 3))) {
          v21 = a1[1];
          a1[1] = *((_QWORD*)a2 - 1);
          *((_QWORD*)a2 - 1) = v21;
          v22 = *((float*)a1 + 2);
          if (v22 >= *(float*)a1 &&
              (v22 > *(float*)a1 || (signed __int32)*((_DWORD*)a1 + 3) <
                                        (signed __int32)*((_DWORD*)a1 + 1))) {
            v23 = *a1;
            *a1 = a1[1];
            a1[1] = v23;
          }
        }
        return true;
      }
      v30 = *(a2 - 2);
      if (v30 < v19 || v30 <= v19 && (signed __int32)*((_DWORD*)a2 - 1) >=
                                         (signed __int32)*((_DWORD*)a1 + 3)) {
        v31 = *a1;
        *a1 = a1[1];
        a1[1] = v31;
        v32 = *(a2 - 2);
        if (v32 >= *(float*)&v31 &&
            (v32 > *(float*)&v31 ||
             (signed __int32)*((_DWORD*)a2 - 1) < SHIDWORD(v31))) {
          a1[1] = *((_QWORD*)a2 - 1);
          *((_QWORD*)a2 - 1) = v31;
        }
        return true;
      }
    LABEL_57:
      v36 = *a1;
      *a1 = *((_QWORD*)a2 - 1);
      *((_QWORD*)a2 - 1) = v36;
      return true;
    }
    if (v2 != 4) {
      if (v2 == 5) {
        v4 = (float*)(a1 + 1);
        v5 = (float*)(a1 + 2);
        v6 = a1 + 3;
        GameRoutine_5d7520(a1, a1 + 1, a1 + 2, a1 + 3);
        v9 = *(a2 - 2);
        v10 = *((float*)a1 + 6);
        if (v9 >= v10 && (v9 > v10 || (signed __int32)*((_DWORD*)a2 - 1) <
                                          (signed __int32)*((_DWORD*)a1 + 7))) {
          v11 = *v6;
          *v6 = *((_QWORD*)a2 - 1);
          *((_QWORD*)a2 - 1) = v11;
          if (*(float*)v6 >= *v5 &&
              (*(float*)v6 > *v5 || (signed __int32)*((_DWORD*)a1 + 7) <
                                        (signed __int32)*((_DWORD*)a1 + 5))) {
            v12 = *v6;
            v13 = *v4;
            v14 = *(_QWORD*)v5;
            v15 = COERCE_FLOAT(*v6);
            *(_QWORD*)v5 = *v6;
            *v6 = v14;
            if (v13 <= v15 && (v13 < v15 || (signed __int32)*((_DWORD*)a1 + 3) >
                                                SHIDWORD(v12))) {
              v16 = *(float*)a1;
              v17 = a1[1];
              a1[1] = v12;
              a1[2] = v17;
              if (v16 <= v15 &&
                  (v16 < v15 ||
                   (signed __int32)*((_DWORD*)a1 + 1) > SHIDWORD(v12))) {
                v18 = *a1;
                *a1 = v12;
                a1[1] = v18;
              }
            }
          }
        }
        return true;
      }
      goto LABEL_32;
    }
    GameRoutine_5d7520(a1, a1 + 1, a1 + 2, (__int64*)a2 - 1);
    return true;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    v3 = *(a2 - 2);
    if (v3 < *(float*)a1 ||
        v3 <= *(float*)a1 && (signed __int32)*((_DWORD*)a2 - 1) >=
                                 (signed __int32)*((_DWORD*)a1 + 1)) {
      return true;
    }
    goto LABEL_57;
  }
LABEL_32:
  v24 = *((float*)a1 + 2);
  v25 = *(float*)a1;
  v26 = (float*)(a1 + 2);
  if (v24 < *(float*)a1 ||
      v24 <= *(float*)a1 && (signed __int32)*((_DWORD*)a1 + 3) >=
                                (signed __int32)*((_DWORD*)a1 + 1)) {
    if (*v26 >= v24 && (*v26 > v24 || (signed __int32)*((_DWORD*)a1 + 5) <
                                          (signed __int32)*((_DWORD*)a1 + 3))) {
      v28 = a1[1];
      v27 = a1[2];
      a1[1] = v27;
      a1[2] = v28;
      if (v25 <= *(float*)&v27 &&
          (v25 < *(float*)&v27 ||
           (signed __int32)*((_DWORD*)a1 + 1) > SHIDWORD(v27))) {
        v29 = *a1;
        *a1 = v27;
        a1[1] = v29;
      }
    }
  }
  else {
    v33 = *v26;
    if (*v26 >= v24 && (*v26 > v24 || (signed __int32)*((_DWORD*)a1 + 5) <
                                          (signed __int32)*((_DWORD*)a1 + 3))) {
      v34 = *a1;
      *a1 = a1[2];
      goto LABEL_61;
    }
    v34 = *a1;
    v35 = COERCE_FLOAT(*a1);
    *a1 = a1[1];
    a1[1] = v34;
    if (v33 >= v35 &&
        (v33 > v35 || (signed __int32)*((_DWORD*)a1 + 5) < SHIDWORD(v34))) {
      a1[1] = a1[2];
    LABEL_61:
      a1[2] = v34;
    }
  }
  v37 = (float*)(a1 + 3);
  if (a1 + 3 == (_QWORD*)a2) {
    return true;
  }
  v38 = 0;
  v39 = 0;
  while (1) {
    v40 = *v37;
    if (*v37 >= *v26) {
      v41 = *((_DWORD*)v37 + 1);
      if (*v37 > *v26 || v41 < (signed __int32)*((_DWORD*)v26 + 1)) {
        *(_QWORD*)v37 = *(_QWORD*)v26;
        v42 = v38;
        do {
          v43 = (char*)a1 + v42;
          v44 = *(float*)((char*)a1 + v42 + 8);
          if (v44 > v40) {
            v26 = (float*)(v43 + 16);
            goto LABEL_65;
          }
          if (v44 >= v40 &&
              v41 >= (signed __int32)*(_DWORD*)((char*)a1 + v42 + 12)) {
            goto LABEL_65;
          }
          v42 -= 8;
          *((_QWORD*)v43 + 2) = *((_QWORD*)v43 + 1);
          v26 -= 2;
        } while (v42 != -16);
        v26 = (float*)a1;
      LABEL_65:
        ++v39;
        *v26 = v40;
        *((_DWORD*)v26 + 1) = v41;
        if (v39 == 8) {
          return v37 + 2 == a2;
        }
      }
    }
    v26 = v37;
    v37 += 2;
    v38 += 8;
    if (v37 == a2) {
      return true;
    }
  }
}

_QWORD* nn_vfx_5d7e00(__int64 a1, _QWORD* a2, _QWORD* a3, __int64 a4)
{

#pragma clang fp contract(off)
  _QWORD* v6;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  float v22;
  float v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  float v27;
  __int64 v28;
  int v29;
  __int64 v30;
  unsigned __int64 v31;

  if ((_QWORD*)a1 != a2) {
    v6 = a2;
    v8 = ((__int64)a2 - a1) >> 3;
    if (v8 >= 2) {
      v9 = (unsigned __int64)(v8 - 2) >> 1;
      v10 = v9 + 1;
      v11 = a1 + 8 * v9;
      do {
        GameRoutine_5d80a0(a1, a4, v8, v11);
        --v10;
        v11 -= 8;
      } while (v10 != 0);
    }
    v12 = v6;
    if (v6 != a3) {
      v12 = v6;
      do {
        if (*(float*)v12 >= *(float*)a1 &&
            (*(float*)v12 > *(float*)a1 ||
             (signed __int32)*((_DWORD*)v12 + 1) <
                 (signed __int32)*(_DWORD*)(a1 + 4))) {
          v13 = *v12;
          *v12 = *(_QWORD*)a1;
          *(_QWORD*)a1 = v13;
          GameRoutine_5d80a0(a1, a4, v8, a1);
        }
        ++v12;
      } while (v12 != a3);
    }
    if (v8 < 2) {
      return v12;
    }
    while (1) {
      v16 = *(_QWORD*)a1;
      v17 = 0;
      v18 = a1;
      do {
        v19 = v18 + 8 * v17;
        v20 = (_QWORD*)v18;
        v18 = v19 + 8;
        v21 = 2 * v17 + 2;
        v17 = (2 * v17) | 1;
        if (v21 < v8) {
          v22 = *(float*)(v19 + 16);
          v23 = *(float*)(v19 + 8);
          if (v23 >= v22 &&
              (v23 > v22 || (signed __int32)*(_DWORD*)(v19 + 12) <
                                (signed __int32)*(_DWORD*)(v19 + 20))) {
            v18 = v19 + 16;
            v17 = v21;
          }
        }
        *v20 = *(_QWORD*)v18;
      } while (v17 <= (__int64)((unsigned __int64)(v8 - 2) >> 1));
      if ((_QWORD*)v18 == --v6) {
        *(_QWORD*)v18 = v16;
      }
      else {
        *(_QWORD*)v18 = *v6;
        *v6 = v16;
        v24 = (v18 - a1 + 8) >> 3;
        v25 = v24 - 2;
        if (v24 >= 2) {
          v26 = v25 >> 1;
          v27 = *(float*)v18;
          v28 = a1 + 8 * (v25 >> 1);
          if (*(float*)v28 >= *(float*)v18) {
            if (*(float*)v28 > *(float*)v18) {
              v29 = *(_DWORD*)(v18 + 4);
            LABEL_32:
              *(_QWORD*)v18 = *(_QWORD*)v28;
              if (v25 >= 2) {
                while (1) {
                  v31 = v26 - 1;
                  v26 = (v26 - 1) >> 1;
                  v30 = a1 + 8 * v26;
                  if (*(float*)v30 < v27 ||
                      *(float*)v30 <= v27 &&
                          (signed __int32)*(_DWORD*)(v30 + 4) >= v29) {
                    break;
                  }
                  *(_QWORD*)v28 = *(_QWORD*)v30;
                  v28 = a1 + 8 * v26;
                  if (v31 <= 1) {
                    goto LABEL_34;
                  }
                }
              }
              v30 = v28;
            LABEL_34:
              *(float*)v30 = v27;
              *(_DWORD*)(v30 + 4) = v29;
              goto LABEL_17;
            }
            v29 = *(_DWORD*)(v18 + 4);
            if ((signed __int32)*(_DWORD*)(v28 + 4) < v29) {
              goto LABEL_32;
            }
          }
        }
      }
    LABEL_17:
      if (v8-- <= 2) {
        return v12;
      }
    }
  }
  return a3;
}

float* nn_vfx_5d8200(float* result, float* a2, __int64 a3, __int64 a4, char a5)
{

#pragma clang fp contract(off)
  float* v8;
  float* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float* v13;
  float v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  float v20;
  __int64 v21;
  float v22;
  float v23;
  __int64 v24;
  float v25;
  __int64 v26;
  float v27;
  float v28;
  __int64 v29;
  float v30;
  float v31;
  __int64 v32;
  __int64 v33;
  float v34;
  float v35;
  float v36;
  float v37;
  __int64 v38;
  float v39;
  __int64 v40;
  float v41;
  float v42;
  __int64 v43;
  __int64 v44;
  float v45;
  float v46;
  float v47;
  float v48;
  __int64 v49;
  float v50;
  __int64 v51;
  float v52;
  float v53;
  __int64 v54;
  float v55;
  float v56;
  float v57;
  float v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  float v64;
  float v65;
  __int64* v66;
  char v67;
  bool v68;
  bool v69;
  float v70;
  float v71;
  float v72;
  float* v73;
  _QWORD* v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float* v79;
  bool v81;
  __int64 v82;
  float* v83;
  float* v84;
  float* v85;
  float v86;
  float v87;
  int v88;
  __int64 v89;
  __int64 v90;
  _QWORD* v91;
  float v92;
  unsigned __int64 v93;
  unsigned __int64 v94;
  __int64 v95;
  float v97;
  __int64 v98;
  float v99;
  float v100;
  float* v101;
  float v102;
  float v103;
  int v104;
  float* v105;
  float v106;
  float* v107;
  float v108;
  float v109;
  __int64 v110;
  float v111;
  float v112;
  __int64 v113;
  float v114;
  __int64 v115;
  float v116;
  __int64 v117;
  float v118;
  __int64 v119;
  float v120;
  __int64 v121;
  __int64 v122;

  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v8 = result;
LABEL_2:
  v9 = v8;
LABEL_3:
  v10 = 1 - a4;
  while (1) {
    v11 = v10;
    v8 = v9;
    v12 = ((char*)a2 - (char*)v9) >> 3;
    if (v12 > 2) {
      break;
    }
    if ((unsigned __int64)v12 < 2) {
      return result;
    }
    if (v12 == 2) {
      v77 = *(a2 - 2);
      v78 = *v9;
      if (v77 >= 0x0.0p+0f || v78 >= 0x0.0p+0f) {
        if (v77 >= v78) {
          return result;
        }
      }
      else if (v77 <= v78) {
        return result;
      }
      goto LABEL_249;
    }
  LABEL_11:
    if (v12 <= 23) {
      v79 = v9 + 2;
      v81 = v9 == a2 || v79 == a2;
      if ((a5 & 1) != 0) {
        if (v81) {
          return result;
        }
        v82 = 0;
        v83 = v9;
        while (1) {
          v85 = v83;
          v86 = v83[2];
          v87 = *v83;
          v83 = v79;
          if (v86 >= 0x0.0p+0f || v87 >= 0x0.0p+0f) {
            if (v86 < v87) {
            LABEL_199:
              v88 = *((_DWORD*)v85 + 3);
              *((_QWORD*)v85 + 1) = *(_QWORD*)v85;
              v84 = v9;
              if (v85 == v9) {
                goto LABEL_192;
              }
              v89 = v82;
              v90 = v82;
              if (v86 < 0x0.0p+0f) {
                while (1) {
                  v91 = (_QWORD*)((char*)v9 + v90);
                  v92 = *(float*)((char*)v9 + v90 - 8);
                  if (v92 < 0x0.0p+0f) {
                    if (v92 >= v86) {
                      v84 = (float*)((char*)v9 + v90);
                      goto LABEL_192;
                    }
                  }
                  else if (v92 <= v86) {
                    v84 = v85;
                    goto LABEL_192;
                  }
                  v85 -= 2;
                  v90 -= 8;
                  *v91 = *(v91 - 1);
                  if (v90 == 0) {
                  LABEL_191:
                    v84 = v9;
                    goto LABEL_192;
                  }
                }
              }
              while (1) {
                v84 = (float*)((char*)v9 + v89);
                if (*(float*)((char*)v9 + v89 - 8) <= v86) {
                  break;
                }
                v89 -= 8;
                *(_QWORD*)v84 = *((_QWORD*)v84 - 1);
                if (v89 == 0) {
                  goto LABEL_191;
                }
              }
            LABEL_192:
              *v84 = v86;
              *((_DWORD*)v84 + 1) = v88;
            }
          }
          else if (v86 > v87) {
            goto LABEL_199;
          }
          v79 = v83 + 2;
          v82 += 8;
          if (v83 + 2 == a2) {
            return result;
          }
        }
      }
      if (v81) {
        return result;
      }
      while (1) {
        v101 = v8;
        v102 = v8[2];
        v103 = *v8;
        v8 = v79;
        if (v102 >= 0x0.0p+0f || v103 >= 0x0.0p+0f) {
          if (v102 < v103) {
          LABEL_236:
            v104 = *((_DWORD*)v101 + 3);
            v105 = v79;
            if (v102 < 0x0.0p+0f) {
              do {
                while (1) {
                  v107 = v101;
                  *((_QWORD*)v101 + 1) = *(_QWORD*)v101;
                  v108 = *(v101 - 2);
                  v101 -= 2;
                  v109 = v108;
                  if (v108 < 0x0.0p+0f) {
                    break;
                  }
                  if (v109 <= v102) {
                    goto LABEL_229;
                  }
                }
              } while (v109 < v102);
            }
            else {
              do {
                v106 = *(v105 - 4);
                v107 = v105 - 2;
                *(_QWORD*)v105 = *((_QWORD*)v105 - 1);
                v105 -= 2;
              } while (v106 > v102);
            }
          LABEL_229:
            *v107 = v102;
            *((_DWORD*)v107 + 1) = v104;
          }
        }
        else if (v102 > v103) {
          goto LABEL_236;
        }
        v79 = v8 + 2;
        if (v8 + 2 == a2) {
          return result;
        }
      }
    }
    if (v10 == 1) {
      if (v9 != a2) {
        v93 = (unsigned __int64)(v12 - 2) >> 1;
        v94 = v93 + 1;
        v95 = (__int64)&v8[2 * v93];
        do {
          GameRoutine_5d98e0((__int64)v8, a3, v12, v95),
              v67 = COERCE_AS(__typeof__(v67),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          --v94;
          v95 -= 8;
        } while (v94 != 0);
        do {
          result = GameRoutine_5d9ac0(v8, (__int64)a2, a3, v12),
          v67 = COERCE_AS(__typeof__(v67),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          a2 -= 2;
        } while ((unsigned __int64)v12-- > 2);
      }
      return result;
    }
    v13 = &v9[2 * ((unsigned __int64)v12 >> 1)];
    if ((unsigned __int64)v12 >= 0x81) {
      v14 = *v13;
      v15 = *v9;
      if (*v13 >= 0x0.0p+0f || v15 >= 0x0.0p+0f) {
        if (v14 >= v15) {
          goto LABEL_17;
        }
      }
      else if (v14 <= v15) {
      LABEL_17:
        v16 = *(a2 - 2);
        if (v14 >= 0x0.0p+0f || v16 >= 0x0.0p+0f) {
          if (v16 < v14) {
            goto LABEL_45;
          }
        }
        else {
          if (v16 <= v14) {
            goto LABEL_67;
          }
        LABEL_45:
          v26 = *(_QWORD*)v13;
          *(_QWORD*)v13 = *((_QWORD*)a2 - 1);
          *((_QWORD*)a2 - 1) = v26;
          v27 = *v13;
          v28 = *v9;
          if (*v13 >= 0x0.0p+0f || v28 >= 0x0.0p+0f) {
            if (v27 < v28) {
              goto LABEL_66;
            }
          }
          else {
            if (v27 <= v28) {
              goto LABEL_67;
            }
          LABEL_66:
            v33 = *(_QWORD*)v9;
            *(_QWORD*)v9 = *(_QWORD*)v13;
            *(_QWORD*)v13 = v33;
          }
        }
      LABEL_67:
        v34 = *(v13 - 2);
        v35 = v9[2];
        if (v34 >= 0x0.0p+0f || v35 >= 0x0.0p+0f) {
          if (v34 >= v35) {
            goto LABEL_70;
          }
        }
        else if (v34 <= v35) {
        LABEL_70:
          v36 = *(a2 - 4);
          if (v34 >= 0x0.0p+0f || v36 >= 0x0.0p+0f) {
            if (v36 < v34) {
              goto LABEL_83;
            }
          }
          else {
            if (v36 <= v34) {
              goto LABEL_98;
            }
          LABEL_83:
            v40 = *((_QWORD*)v13 - 1);
            *((_QWORD*)v13 - 1) = *((_QWORD*)a2 - 2);
            *((_QWORD*)a2 - 2) = v40;
            v41 = *(v13 - 2);
            v42 = v9[2];
            if (v41 >= 0x0.0p+0f || v42 >= 0x0.0p+0f) {
              if (v41 < v42) {
                goto LABEL_97;
              }
            }
            else {
              if (v41 <= v42) {
                goto LABEL_98;
              }
            LABEL_97:
              v44 = *((_QWORD*)v9 + 1);
              *((_QWORD*)v9 + 1) = *((_QWORD*)v13 - 1);
              *((_QWORD*)v13 - 1) = v44;
            }
          }
        LABEL_98:
          v45 = v13[2];
          v46 = v9[4];
          if (v45 >= 0x0.0p+0f || v46 >= 0x0.0p+0f) {
            if (v45 >= v46) {
              goto LABEL_101;
            }
          }
          else if (v45 <= v46) {
          LABEL_101:
            v47 = *(a2 - 6);
            if (v45 >= 0x0.0p+0f || v47 >= 0x0.0p+0f) {
              if (v47 < v45) {
                goto LABEL_114;
              }
            }
            else {
              if (v47 <= v45) {
                goto LABEL_125;
              }
            LABEL_114:
              v51 = *((_QWORD*)v13 + 1);
              *((_QWORD*)v13 + 1) = *((_QWORD*)a2 - 3);
              *((_QWORD*)a2 - 3) = v51;
              v52 = v13[2];
              v53 = v9[4];
              if (v52 >= 0x0.0p+0f || v53 >= 0x0.0p+0f) {
                if (v52 < v53) {
                  goto LABEL_124;
                }
              }
              else {
                if (v52 <= v53) {
                  goto LABEL_125;
                }
              LABEL_124:
                v54 = *((_QWORD*)v9 + 2);
                *((_QWORD*)v9 + 2) = *((_QWORD*)v13 + 1);
                *((_QWORD*)v13 + 1) = v54;
              }
            }
          LABEL_125:
            v55 = *v13;
            v56 = *(v13 - 2);
            if (*v13 >= 0x0.0p+0f || v56 >= 0x0.0p+0f) {
              if (v55 >= v56) {
                goto LABEL_128;
              }
            }
            else if (v55 <= v56) {
            LABEL_128:
              v57 = v13[2];
              if (v55 >= 0x0.0p+0f || v57 >= 0x0.0p+0f) {
                if (v57 >= v55) {
                  goto LABEL_152;
                }
              }
              else if (v57 <= v55) {
                goto LABEL_152;
              }
              v61 = *(_QWORD*)v13;
              v60 = *((_QWORD*)v13 + 1);
              *(_QWORD*)v13 = v60;
              *((_QWORD*)v13 + 1) = v61;
              if (*(float*)&v60 >= 0x0.0p+0f || v56 >= 0x0.0p+0f) {
                if (v56 <= *(float*)&v60) {
                  goto LABEL_152;
                }
              }
              else if (v56 >= *(float*)&v60) {
              LABEL_152:
                v63 = *(_QWORD*)v9;
                *(_QWORD*)v9 = *(_QWORD*)v13;
                *(_QWORD*)v13 = v63;
                if ((a5 & 1) != 0) {
                  goto LABEL_158;
                }
                goto LABEL_153;
              }
              v62 = *((_QWORD*)v13 - 1);
              *((_QWORD*)v13 - 1) = v60;
              *(_QWORD*)v13 = v62;
              goto LABEL_152;
            }
            v58 = v13[2];
            if (v55 >= 0x0.0p+0f || v58 >= 0x0.0p+0f) {
              if (v58 >= v55) {
                goto LABEL_136;
              }
            }
            else if (v58 <= v55) {
            LABEL_136:
              v59 = *((_QWORD*)v13 - 1);
              *((_QWORD*)v13 - 1) = *(_QWORD*)v13;
              *(_QWORD*)v13 = v59;
              if (v58 >= 0x0.0p+0f || *(float*)&v59 >= 0x0.0p+0f) {
                if (v58 >= *(float*)&v59) {
                  goto LABEL_152;
                }
              }
              else if (v58 <= *(float*)&v59) {
                goto LABEL_152;
              }
              *(_QWORD*)v13 = *((_QWORD*)v13 + 1);
            LABEL_149:
              *((_QWORD*)v13 + 1) = v59;
              goto LABEL_152;
            }
            v59 = *((_QWORD*)v13 - 1);
            *((_QWORD*)v13 - 1) = *((_QWORD*)v13 + 1);
            goto LABEL_149;
          }
          v48 = *(a2 - 6);
          if (v45 >= 0x0.0p+0f || v48 >= 0x0.0p+0f) {
            if (v48 >= v45) {
              goto LABEL_109;
            }
          }
          else if (v48 <= v45) {
          LABEL_109:
            v49 = *((_QWORD*)v9 + 2);
            *((_QWORD*)v9 + 2) = *((_QWORD*)v13 + 1);
            *((_QWORD*)v13 + 1) = v49;
            v50 = *(a2 - 6);
            if (v50 >= 0x0.0p+0f || *(float*)&v49 >= 0x0.0p+0f) {
              if (v50 >= *(float*)&v49) {
                goto LABEL_125;
              }
            }
            else if (v50 <= *(float*)&v49) {
              goto LABEL_125;
            }
            *((_QWORD*)v13 + 1) = *((_QWORD*)a2 - 3);
          LABEL_122:
            *((_QWORD*)a2 - 3) = v49;
            goto LABEL_125;
          }
          v49 = *((_QWORD*)v9 + 2);
          *((_QWORD*)v9 + 2) = *((_QWORD*)a2 - 3);
          goto LABEL_122;
        }
        v37 = *(a2 - 4);
        if (v34 >= 0x0.0p+0f || v37 >= 0x0.0p+0f) {
          if (v37 >= v34) {
            goto LABEL_78;
          }
        }
        else if (v37 <= v34) {
        LABEL_78:
          v38 = *((_QWORD*)v9 + 1);
          *((_QWORD*)v9 + 1) = *((_QWORD*)v13 - 1);
          *((_QWORD*)v13 - 1) = v38;
          v39 = *(a2 - 4);
          if (v39 >= 0x0.0p+0f || *(float*)&v38 >= 0x0.0p+0f) {
            if (v39 >= *(float*)&v38) {
              goto LABEL_98;
            }
          }
          else if (v39 <= *(float*)&v38) {
            goto LABEL_98;
          }
          *((_QWORD*)v13 - 1) = *((_QWORD*)a2 - 2);
        LABEL_95:
          *((_QWORD*)a2 - 2) = v38;
          goto LABEL_98;
        }
        v38 = *((_QWORD*)v9 + 1);
        *((_QWORD*)v9 + 1) = *((_QWORD*)a2 - 2);
        goto LABEL_95;
      }
      v20 = *(a2 - 2);
      if (v14 >= 0x0.0p+0f || v20 >= 0x0.0p+0f) {
        if (v20 >= v14) {
          goto LABEL_32;
        }
      }
      else if (v20 <= v14) {
      LABEL_32:
        v21 = *(_QWORD*)v9;
        *(_QWORD*)v9 = *(_QWORD*)v13;
        *(_QWORD*)v13 = v21;
        v22 = *(a2 - 2);
        if (v22 >= 0x0.0p+0f || *(float*)&v21 >= 0x0.0p+0f) {
          if (v22 >= *(float*)&v21) {
            goto LABEL_67;
          }
        }
        else if (v22 <= *(float*)&v21) {
          goto LABEL_67;
        }
        *(_QWORD*)v13 = *((_QWORD*)a2 - 1);
      LABEL_61:
        *((_QWORD*)a2 - 1) = v21;
        goto LABEL_67;
      }
      v21 = *(_QWORD*)v9;
      *(_QWORD*)v9 = *((_QWORD*)a2 - 1);
      goto LABEL_61;
    }
    v17 = *v9;
    v18 = *v13;
    if (*v9 >= 0x0.0p+0f || v18 >= 0x0.0p+0f) {
      if (v17 < v18) {
      LABEL_37:
        v23 = *(a2 - 2);
        if (v17 >= 0x0.0p+0f || v23 >= 0x0.0p+0f) {
          if (v23 < v17) {
          LABEL_57:
            v32 = *(_QWORD*)v13;
            *(_QWORD*)v13 = *((_QWORD*)a2 - 1);
            *((_QWORD*)a2 - 1) = v32;
            if ((a5 & 1) != 0) {
              goto LABEL_158;
            }
            goto LABEL_153;
          }
        }
        else if (v23 > v17) {
          goto LABEL_57;
        }
        v24 = *(_QWORD*)v13;
        *(_QWORD*)v13 = *(_QWORD*)v9;
        *(_QWORD*)v9 = v24;
        v25 = *(a2 - 2);
        if (v25 >= 0x0.0p+0f || *(float*)&v24 >= 0x0.0p+0f) {
          if (v25 < *(float*)&v24) {
          LABEL_63:
            *(_QWORD*)v9 = *((_QWORD*)a2 - 1);
            *((_QWORD*)a2 - 1) = v24;
            if ((a5 & 1) != 0) {
              goto LABEL_158;
            }
            goto LABEL_153;
          }
        }
        else if (v25 > *(float*)&v24) {
          goto LABEL_63;
        }
        goto LABEL_91;
      }
    }
    else if (v17 > v18) {
      goto LABEL_37;
    }
    v19 = *(a2 - 2);
    if (v17 >= 0x0.0p+0f || v19 >= 0x0.0p+0f) {
      if (v19 >= v17) {
        goto LABEL_91;
      }
    }
    else if (v19 <= v17) {
      goto LABEL_91;
    }
    v29 = *(_QWORD*)v9;
    *(_QWORD*)v9 = *((_QWORD*)a2 - 1);
    *((_QWORD*)a2 - 1) = v29;
    v30 = *v9;
    v31 = *v13;
    if (*v9 >= 0x0.0p+0f || v31 >= 0x0.0p+0f) {
      if (v30 >= v31) {
        goto LABEL_91;
      }
    LABEL_90:
      v43 = *(_QWORD*)v13;
      *(_QWORD*)v13 = *(_QWORD*)v9;
      *(_QWORD*)v9 = v43;
      goto LABEL_91;
    }
    if (v30 > v31) {
      goto LABEL_90;
    }
  LABEL_91:
    if ((a5 & 1) == 0) {
    LABEL_153:
      v64 = *(v9 - 2);
      v65 = *v9;
      if (v64 >= 0x0.0p+0f || v65 >= 0x0.0p+0f) {
        if (v64 < v65) {
          goto LABEL_158;
        }
      LABEL_162:
        result = GameRoutine_5d8fc0(v9, a2),
        v67 = COERCE_AS(__typeof__(v67),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v9 = result;
      LABEL_163:
        a5 = 0;
        a4 = -v11;
        goto LABEL_3;
      }
      if (v64 <= v65) {
        goto LABEL_162;
      }
    }
  LABEL_158:
    v66 = (__int64*)GameRoutine_5d91c0(v9, a2),
    v67 = COERCE_AS(__typeof__(v67),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if ((v67 & 1) == 0) {
      goto LABEL_161;
    }
    v68 = GameRoutine_5d93c0((__int64*)v9, v66, a3),
    v67 = COERCE_AS(__typeof__(v67),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v9 = (float*)(v66 + 1);
    v69 = v68;
    result = (float*)GameRoutine_5d93c0(v66 + 1, (__int64*)a2, a3),
    v67 = COERCE_AS(__typeof__(v67),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (((unsigned __int8)result & 1) != 0) {
      a4 = -v11;
      a2 = (float*)v66;
      if (v69) {
        return result;
      }
      goto LABEL_2;
    }
    v10 = v11 + 1;
    if (!v69) {
    LABEL_161:
      result = nn_vfx_5d8200(v8, (float*)v66, a3, -v11, a5 & 1),
      v67 = COERCE_AS(__typeof__(v67),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v9 = (float*)(v66 + 1);
      goto LABEL_163;
    }
  }
  if (v12 == 3) {
    v70 = v9[2];
    v71 = *v9;
    if (v70 >= 0x0.0p+0f || v71 >= 0x0.0p+0f) {
      if (v70 >= v71) {
        goto LABEL_169;
      }
    }
    else if (v70 <= v71) {
    LABEL_169:
      v72 = *(a2 - 2);
      if (v70 >= 0x0.0p+0f || v72 >= 0x0.0p+0f) {
        if (v72 >= v70) {
          return result;
        }
      }
      else if (v72 <= v70) {
        return result;
      }
      v110 = *((_QWORD*)v9 + 1);
      *((_QWORD*)v9 + 1) = *((_QWORD*)a2 - 1);
      *((_QWORD*)a2 - 1) = v110;
      v111 = v9[2];
      v112 = *v9;
      if (v111 >= 0x0.0p+0f || v112 >= 0x0.0p+0f) {
        if (v111 >= v112) {
          return result;
        }
      }
      else if (v111 <= v112) {
        return result;
      }
      v119 = *(_QWORD*)v9;
      *(_QWORD*)v9 = *((_QWORD*)v9 + 1);
      *((_QWORD*)v9 + 1) = v119;
      return result;
    }
    v97 = *(a2 - 2);
    if (v70 >= 0x0.0p+0f || v97 >= 0x0.0p+0f) {
      if (v97 >= v70) {
        goto LABEL_252;
      }
    }
    else if (v97 <= v70) {
    LABEL_252:
      v113 = *(_QWORD*)v9;
      *(_QWORD*)v9 = *((_QWORD*)v9 + 1);
      *((_QWORD*)v9 + 1) = v113;
      v114 = *(a2 - 2);
      if (v114 >= 0x0.0p+0f || *(float*)&v113 >= 0x0.0p+0f) {
        if (v114 >= *(float*)&v113) {
          return result;
        }
      }
      else if (v114 <= *(float*)&v113) {
        return result;
      }
      *((_QWORD*)v9 + 1) = *((_QWORD*)a2 - 1);
    LABEL_250:
      *((_QWORD*)a2 - 1) = v113;
      return result;
    }
  LABEL_249:
    v113 = *(_QWORD*)v9;
    *(_QWORD*)v9 = *((_QWORD*)a2 - 1);
    goto LABEL_250;
  }
  if (v12 == 4) {
    return nn_vfx_5d8dd0(v9, v9 + 2, v9 + 4, a2 - 2);
  }
  if (v12 != 5) {
    goto LABEL_11;
  }
  v73 = v9 + 4;
  v74 = v9 + 6;
  result = nn_vfx_5d8dd0(v8, v8 + 2, v8 + 4, v8 + 6),
  v67 = COERCE_AS(__typeof__(v67),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v75 = *(a2 - 2);
  v76 = v8[6];
  if (v75 >= 0x0.0p+0f || v76 >= 0x0.0p+0f) {
    if (v75 < v76) {
      goto LABEL_221;
    }
  }
  else {
    if (v75 <= v76) {
      return result;
    }
  LABEL_221:
    v98 = *v74;
    *v74 = *((_QWORD*)a2 - 1);
    *((_QWORD*)a2 - 1) = v98;
    v99 = *(float*)v74;
    v100 = *v73;
    if (*(float*)v74 >= 0x0.0p+0f || v100 >= 0x0.0p+0f) {
      if (v99 >= v100) {
        return result;
      }
    LABEL_257:
      v115 = *v74;
      v116 = v8[2];
      v117 = *(_QWORD*)v73;
      v118 = COERCE_FLOAT(*v74);
      *(_QWORD*)v73 = *v74;
      *v74 = v117;
      if (v118 >= 0x0.0p+0f || v116 >= 0x0.0p+0f) {
        if (v116 <= v118) {
          return result;
        }
      }
      else if (v116 >= v118) {
        return result;
      }
      v120 = *v8;
      v121 = *((_QWORD*)v8 + 1);
      *((_QWORD*)v8 + 1) = v115;
      *((_QWORD*)v8 + 2) = v121;
      if (v118 >= 0x0.0p+0f || v120 >= 0x0.0p+0f) {
        if (v120 <= v118) {
          return result;
        }
      }
      else if (v120 >= v118) {
        return result;
      }
      v122 = *(_QWORD*)v8;
      *(_QWORD*)v8 = v115;
      *((_QWORD*)v8 + 1) = v122;
      return result;
    }
    if (v99 > v100) {
      goto LABEL_257;
    }
  }
  return result;
}

__int64 nn_vfx_bc5ea0(_QWORD* a1, const char* a2)
{
  __int64 v2;
  __int64 v3;
  bool v4;
  unsigned int v5;
  bool v7;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _BOOL4 v24;
  const char* v25;
  int v27;
  __int64 i;
  int v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  int v33;
  __int64 v34;
  __int64 v35;
  char v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  struct {
    _QWORD v47[2];
    __int64 v48;
    __int64 v49;
  } v47_;

  v2 = a1[14];
  v3 = *(_QWORD*)(v2 + 24);
  v4 = v3 == 0 || a2 == nullptr;
  if (v4 ||
      ((v5 = *(_DWORD*)(v2 + 32), *a2 != 0) ? (v7 = v5 == 0) : (v7 = true),
       v7)) {
  LABEL_15:
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    goto LABEL_16;
  }
  v9 = 0;
  while (1) {
    v10 = (v5 + v9) >> 1;
    v11 = v3 + 336LL * v10;
    v12 = strcmp(*(const char**)v11, a2);
    if (v12 == 0) {
      break;
    }
    if (v12 < 0) {
      v9 = v10 + 1;
    }
    else {
      v5 = (v5 + v9) >> 1;
    }
    if (v9 == v5) {
      goto LABEL_15;
    }
  }
  v20 = a1[13];
  v21 = *(_QWORD*)(v20 + 16);
  if (v21 == v20 + 8) {
  LABEL_22:
    v24 = *(_QWORD*)(v11 + 8) == 0 && *(_QWORD*)(v11 + 24) != 0;
  LABEL_28:
    v16 = 0;
    v15 = 0;
    v18 = 0x100000000LL;
    if (v24) {
      v17 = 0x10000;
    }
    else {
      v17 = 0;
    }
    return v15 | v16 | v17 | v18;
  }
  v22 = v11 + 120;
  while (((*(_QWORD*)(v22 + 8LL * (*(int*)(v21 + 16) >> 6)) >>
           *(_DWORD*)(v21 + 16)) &
          1) == 0) {
    v21 = *(_QWORD*)(v21 + 8);
    if (v21 == v20 + 8) {
      goto LABEL_22;
    }
  }
  v25 = *(const char**)(v11 + 8);
  v24 = v25 == nullptr && *(_QWORD*)(v11 + 24) != 0;
  if ((*(_BYTE*)(v21 - 7) & 1) != 0) {
    goto LABEL_28;
  }
  if (!v24) {
    v27 = 1023;
    for (i = 0; i != 16; ++i) {
      v30 = *(_QWORD*)(v22 + 8 * i);
      if (v30 != 0) {
        v31 = *(_QWORD*)(v20 + 40 + 8 * i) & v30;
        if (v31 != 0) {
          v29 = 0;
          while ((v31 & 1) == 0) {
            if ((v31 & 2) != 0) {
              ++v29;
              break;
            }
            if ((v31 & 4) != 0) {
              v29 += 2;
              break;
            }
            if ((v31 & 8) != 0) {
              v29 += 3;
              break;
            }
            if ((v31 & 0x10) != 0) {
              v29 += 4;
              break;
            }
            if ((v31 & 0x20) != 0) {
              v29 += 5;
              break;
            }
            if ((v31 & 0x40) != 0) {
              v29 += 6;
              break;
            }
            if ((v31 & 0x80) != 0) {
              v29 += 7;
              break;
            }
            if ((v31 & 0x100) != 0) {
              v29 += 8;
              break;
            }
            if ((v31 & 0x200) != 0) {
              v29 += 9;
              break;
            }
            if ((v31 & 0x400) != 0) {
              v29 += 10;
              break;
            }
            if ((v31 & 0x800) != 0) {
              v29 += 11;
              break;
            }
            if ((v31 & 0x1000) != 0) {
              v29 += 12;
              break;
            }
            if ((v31 & 0x2000) != 0) {
              v29 += 13;
              break;
            }
            if ((v31 & 0x4000) != 0) {
              v29 += 14;
              break;
            }
            if ((v31 & 0x8000) != 0) {
              v29 += 15;
              break;
            }
            v31 >>= 16;
            v29 += 16;
            if (v29 == 64) {
              goto LABEL_44;
            }
          }
          v27 = v29 + ((_DWORD)i << 6);
        }
      }
    LABEL_44:;
    }
    v32 = *(_QWORD*)(*(_QWORD*)(a1[12] + 152LL) + 8LL * v27);
    if (v32 != 0 && *(_BYTE*)(v32 + 9) == 1) {
      v33 = CalculateAllocatedSizeHeap_5c7a60(v32, v25);
      if (v33 != -1 && v33 < (signed __int32)*(_DWORD*)(v32 + 76)) {
        v34 = *(_QWORD*)(*(_QWORD*)(v32 + 96) + 8LL * v33);
        if (v34 != 0) {
        LABEL_87:
          if ((*(_BYTE*)(v34 + 42) & 1) != 0) {
            v36 = 1;
          }
          else {
            v36 = *(_BYTE*)(v34 + 41);
          }
          v16 = v36 & 1;
          v13 = 1;
          v15 = 256;
          v14 = 1;
          goto LABEL_16;
        }
        v35 = *(_QWORD*)(v32 + 88);
        if (v35 != 0) {
          v34 = v35 + 56LL * v33;
          goto LABEL_87;
        }
      }
    }
    v13 = 0;
    v16 = 0;
    v14 = 1;
    v15 = 256;
  LABEL_16:
    v17 = 0;
    v18 = (v13 << 24) | (v14 << 32);
    return v15 | v16 | v17 | v18;
  }
  v18 = 0x101000000LL;
  if (*(_BYTE*)(v11 + 320) == 1) {
    v16 = *(unsigned __int8*)(v11 + 321);
  }
  else {
    v37 = Manager_bcd5c0(v20, *(const char**)(v11 + 24));
    if (v37 != 0) {
      v38 = v37;
      if (*(_QWORD*)(v11 + 40) != 0) {
        if (*(_BYTE*)(v37 + 165) == 1 && GameRoutine_ad7390((_QWORD*)v37)) {
          v39 =
              (_QWORD*)ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v38 + 8) + 592LL));
        }
        else {
          v39 = nullptr;
        }
        GameRoutine_a6e580((void*)(v47_.v47), v39, *(const char**)(v11 + 40));
        v16 = v47_.v49 != 0 && (*(_BYTE*)(v47_.v49 + 4) & 4) != 0;
        if ((v47_.v47[0] & 1) != 0 && v47_.v48 != 0) {
          v40 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v40 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v47_.v48);
        }
      }
      else {
        v16 = 0;
      }
      if (*(_QWORD*)(v11 + 48) != 0) {
        v41 = *(_BYTE*)(v38 + 165) == 1 && GameRoutine_ad7390((_QWORD*)v38)
                  ? (_QWORD*)ResFile_5e5f00(
                        *(_QWORD*)(*(_QWORD*)(v38 + 8) + 592LL))
                  : nullptr;
        GameRoutine_a6e580((void*)(v47_.v47), v41, *(const char**)(v11 + 48));
        v16 = (v16 & 1) != 0 ||
              v47_.v49 != 0 && (*(_BYTE*)(v47_.v49 + 4) & 4) != 0;
        if ((v47_.v47[0] & 1) != 0 && v47_.v48 != 0) {
          v42 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v42 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v47_.v48);
        }
      }
      if (*(_QWORD*)(v11 + 56) != 0) {
        v43 = *(_BYTE*)(v38 + 165) == 1 && GameRoutine_ad7390((_QWORD*)v38)
                  ? (_QWORD*)ResFile_5e5f00(
                        *(_QWORD*)(*(_QWORD*)(v38 + 8) + 592LL))
                  : nullptr;
        GameRoutine_a6e580((void*)(v47_.v47), v43, *(const char**)(v11 + 56));
        v16 = (v16 & 1) != 0 ||
              v47_.v49 != 0 && (*(_BYTE*)(v47_.v49 + 4) & 4) != 0;
        if ((v47_.v47[0] & 1) != 0 && v47_.v48 != 0) {
          v44 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v44 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v47_.v48);
        }
      }
      if (*(_QWORD*)(v11 + 64) != 0) {
        v45 = *(_BYTE*)(v38 + 165) == 1 && GameRoutine_ad7390((_QWORD*)v38)
                  ? (_QWORD*)ResFile_5e5f00(
                        *(_QWORD*)(*(_QWORD*)(v38 + 8) + 592LL))
                  : nullptr;
        GameRoutine_a6e580((void*)(v47_.v47), v45, *(const char**)(v11 + 64));
        v16 = (v16 & 1) != 0 ||
              v47_.v49 != 0 && (*(_BYTE*)(v47_.v49 + 4) & 4) != 0;
        if ((v47_.v47[0] & 1) != 0 && v47_.v48 != 0) {
          v46 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v46 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v47_.v48);
        }
      }
    }
    else {
      v16 = 0;
    }
  }
  v17 = 0x10000;
  v15 = 256;
  return v15 | v16 | v17 | v18;
}

#pragma GCC visibility pop
