#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_5d610(_QWORD* result, _QWORD*);
_QWORD* gxc_DeviceChild_DeviceChild(_QWORD* result);
_QWORD* gxc_GpuMemory_Destroy_GpuMemory(_QWORD* result);
_QWORD* gxc_GpuMemory_GpuMemory_5d4d0(_QWORD* result);
__int64 GameRoutine_5d210(int);
__int64 GameRoutine_651190(__int64);
__int64 gxc_DeviceChild_GetDevice();
__int64 gxc_NvnDescriptorPool_AllocateTexture(__int64);
__int64 gxc_NvnDescriptorPool_AllocateTextureDescriptor(__int64);
unsigned __int128 gxc_NvnDescriptorPool_AllocateTextureDescriptor_pair(
    __int64) __asm__("gxc_NvnDescriptorPool_AllocateTextureDescriptor");
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _DWORD GameData_1b0058c[3];
extern _DWORD GameData_1b00598[3];
extern _UNKNOWN* GameData_2132be0[23];
extern _UNKNOWN* GameData_2132be8[22];
extern _UNKNOWN* GameData_2132bf0[21];
extern _UNKNOWN* GameData_2132bf8[20];
extern _UNKNOWN* GameData_2132c00[19];
extern _UNKNOWN* GameData_2132c08[18];
extern _UNKNOWN* GameData_2132c10[17];
extern _UNKNOWN* GameData_2132c18[16];
extern _UNKNOWN* GameData_2132c20[15];
extern _UNKNOWN* GameData_2132c28[14];
extern _UNKNOWN* GameData_2132c30[13];
extern _UNKNOWN* GameData_2132c38[12];
extern _UNKNOWN* GameData_2132c40[11];
extern _UNKNOWN* GameData_2132c48[10];
extern _UNKNOWN* GameData_2132c50[9];
extern _UNKNOWN* GameData_2132c58[8];
extern _UNKNOWN* GameData_2132c60[7];
extern _UNKNOWN* GameData_2132c68[6];
extern _UNKNOWN* GameData_2132c70[5];
extern _UNKNOWN* GameData_2132c78[4];
extern _UNKNOWN* GameData_2132c80[3];
extern _UNKNOWN* GameData_2132c88[2];
extern __int64* GameData_2132bd8;
void GameRoutine_54d60(__int64, unsigned __int64);
void GameRoutine_55100(__int64, unsigned __int64);
void GameRoutine_651250(void*);
void gxc_54ea0(_QWORD*, unsigned __int64);
void DeviceChild_53d60(_QWORD* a1, unsigned int* a2);

void DeviceChild_53d60(_QWORD* a1, unsigned int* a2)
{
  _QWORD* v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  unsigned int v7;
  unsigned int v8;
  void (*v9)(_QWORD*);
  unsigned int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  void* v15;
  __int64 v20;
  unsigned int v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  bool v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  int v41;
  __int64 v42;
  unsigned int v43;
  char v44;
  __int64 v45;
  unsigned int v46;
  unsigned __int64 v47;
  void* v48;
  __int64 v49;
  __int64 v50;
  int v51;
  unsigned int v52;
  unsigned __int64 v53;
  void* v54;
  __int64 v55;
  void (**v56)(void);
  void (**v57)(__int64, _QWORD, __int64);
  void* v58;
  unsigned int v59;
  void (**v60)(__int64, _QWORD);
  void (**v61)(__int64, __int64);
  __int64 v62;
  __int64 v63;
  __int64 v64;
  unsigned int v65;
  int v66;
  void (**v67)(void);
  void (**v68)(__int64, _QWORD);
  void (**v69)(__int64, _QWORD, __int64);
  void* v70;
  void (**v71)(__int64, __int64);
  _QWORD* v72;
  __int64 v73;
  __int64 v74;
  unsigned int v75;
  __int64 v76;
  __int64 v77;
  unsigned int v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  unsigned int v82;
  __int64 v83;
  __int64 v84;
  unsigned int v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  unsigned int v89;
  unsigned int v90;
  unsigned int v91;
  unsigned int* v92;
  unsigned int v93;
  int v94;
  _QWORD v95[3];
  _QWORD v96[17];

  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v3 = a1;
  gxc_DeviceChild_DeviceChild(a1),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_DWORD*)v3 + 2) = 0;
  *v3 = GameData_2132bd8 + 2;
  gxc_GpuMemory_GpuMemory_5d4d0(v3 + 2),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *((_BYTE*)v3 + 56) = 0;
  v3[6] = 0;
  v3[5] = 0;
  v4 = v3 + 5;
  v3[9] = 0;
  v5 = v3 + 9;
  *(_QWORD*)((char*)v3 + 60) = 0x100000001LL;
  v3[12] = 0;
  v3[15] = 0;
  v3[10] = 0;
  v3[11] = 0;
  v3[13] = 0;
  v3[14] = 0;
  v3[16] = 0;
  v3[17] = 0;
  v6 = gxc_DeviceChild_GetDevice(),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v92 = a2;
  v7 = a2[4] - 1;
  if (v7 > 2) {
    v8 = 1;
    v91 = 1;
  }
  else {
    v91 = GameData_1b0058c[v7];
    v8 = GameData_1b00598[v7];
  }
  v9 = *(void (**)(_QWORD*))GameData_2132be0[0],
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  memset(v96, 0, 128);
  v9(v96), v51 = COERCE_AS(__typeof__(v51),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD*, __int64))GameData_2132be8[0])(v96, v6 + 8),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD*, _QWORD))GameData_2132bf0[0])(v96, *a2),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD*, _QWORD))GameData_2132bf8[0])(v96, a2[1]),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD*, _QWORD))GameData_2132c00[0])(v96, a2[2]),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD*, _QWORD))GameData_2132c08[0])(v96, a2[3]),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD*, _QWORD))GameData_2132c10[0])(v96, v8),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = GameRoutine_5d210(a2[5]),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD*, _QWORD))GameData_2132c18[0])(v96, v10),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((~(*(unsigned int (**)(__int64))GameData_2132c20[0])(*((_QWORD*)a2 + 4) +
                                                           8LL) &
       0x81) != 0) {
    if (*((_BYTE*)a2 + 25) != 1) {
    LABEL_6:
      if (*((_BYTE*)a2 + 26) != 1) {
        goto LABEL_8;
      }
      goto LABEL_7;
    }
  }
  else {
    (*(void (**)(_QWORD*, __int64))GameData_2132c28[0])(v96, 8),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (*((_BYTE*)a2 + 25) != 1) {
      goto LABEL_6;
    }
  }
  v24 = (*(__int64 (**)(_QWORD*))GameData_2132c30[0])(v96),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD*, _QWORD))GameData_2132c28[0])(v96, v24 | 4u),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*((_BYTE*)a2 + 26) == 1) {
  LABEL_7:
    v11 = (*(__int64 (**)(_QWORD*))GameData_2132c30[0])(v96),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(_QWORD*, _QWORD))GameData_2132c28[0])(v96, v11 | 2u),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
LABEL_8:
  v12 = (*(__int64 (**)(_QWORD*))GameData_2132c38[0])(v96),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = (*(__int64 (**)(_QWORD*))GameData_2132c40[0])(v96),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, __int64, __int64))(
      **((_QWORD**)a2 + 4) + 48LL))((void*)(v95), *((_QWORD*)a2 + 4), v12, v13),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_5d610(v3 + 2, v95),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_GpuMemory_Destroy_GpuMemory(v95),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD*, _QWORD, _QWORD))GameData_2132c48[0])(v96, v3[3], v3[4]),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = GameRoutine_651190(128),
  v51 = COERCE_AS(__typeof__(v51),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v15 = (void*)v3[5];
  v3[5] = v14;
  if (v15 != nullptr) {
    GameRoutine_651250(v15),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v14 = *v4;
  }
  (*(void (**)(__int64, _QWORD*))GameData_2132c50[0])(v14, v96),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v20 = *((_QWORD*)a2 + 5);
  if (v20 != 0) {
    v3[6] = v20;
  }
  v21 = a2[4];
  switch (v21) {
  case 1u:
    v23 = a2[3];
    *((_DWORD*)v3 + 16) = v23;
    v22 = a2[2];
    *((_DWORD*)v3 + 15) = v22;
    if (v23 != 1) {
    LABEL_27:
      if (v22 == 1) {
        v28 = v3[9];
        v29 = (int)(v23 + 1);
        v30 = (v3[10] - v28) >> 4;
        v31 = v29 >= v30;
        v32 = v29 - v30;
        if (v29 > v30) {
          goto LABEL_37;
        }
      LABEL_31:
        if (!v31) {
          v27 = v28 + 16 * v29;
        LABEL_33:
          v3[10] = v27;
        }
      LABEL_34:
        if (*((_BYTE*)a2 + 24) != 1) {
          goto LABEL_42;
        }
        goto LABEL_38;
      }
    LABEL_30:
      LODWORD(v29) = v22 + 1 + (v22 + 1) * v23;
      v28 = v3[9];
      v29 = (int)v29;
      v33 = (v3[10] - v28) >> 4;
      v31 = (int)v29 >= v33;
      v32 = (int)v29 - v33;
      if ((int)v29 > v33) {
        goto LABEL_37;
      }
      goto LABEL_31;
    }
    break;
  case 3u:
    v22 = 6;
    v23 = a2[3];
    *((_DWORD*)v3 + 15) = 6;
    *((_DWORD*)v3 + 16) = v23;
    goto LABEL_30;
  case 2u:
    v22 = 1;
    v23 = 1;
    *((_DWORD*)v3 + 15) = 1;
    *((_DWORD*)v3 + 16) = 1;
    break;
  default:
    v22 = 1;
    v23 = a2[3];
    *((_DWORD*)v3 + 15) = 1;
    *((_DWORD*)v3 + 16) = v23;
    if (v23 != 1) {
      goto LABEL_27;
    }
    break;
  }
  if (v22 != 1) {
    goto LABEL_27;
  }
  v25 = v3[9];
  v26 = (v3[10] - v25) >> 4;
  if (v3[10] != v25) {
    if (v26 < 2) {
      goto LABEL_34;
    }
    v27 = v25 + 16;
    goto LABEL_33;
  }
  v32 = 1 - v26;
LABEL_37:
  GameRoutine_54d60((__int64)(v3 + 9), v32),
      v51 = COERCE_AS(__typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if (*((_BYTE*)a2 + 24) == 1) {
  LABEL_38:
    v34 = v3[10] - v3[9];
    v35 = v3[12];
    v36 = (v3[13] - v35) >> 4;
    if (v34 >> 4 <= v36) {
      if (v34 >> 4 < v36) {
        v3[13] = v35 + v34;
      }
    }
    else {
      gxc_54ea0(v3 + 12, (v34 >> 4) - v36),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
LABEL_42:
  if (*((_BYTE*)a2 + 25) == 1) {
    v37 = v3[15];
    v38 = (__int64)(v3[10] - v3[9]) >> 4;
    v39 = (v3[16] - v37) >> 2;
    if (v38 <= v39) {
      if (v38 < v39) {
        v3[16] = v37 + 4 * v38;
      }
    }
    else {
      GameRoutine_55100((__int64)(v3 + 15), v38 - v39),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
  }
  LODWORD(v40) = *((_DWORD*)v3 + 15);
  v41 = *((_DWORD*)v3 + 16);
  if (v41 == 1 && (_DWORD)v40 == 1) {
    *(_QWORD*)*v5 = *v4;
    v42 = GameRoutine_651190(16),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(*v5 + 8LL) = v42;
    (*(void (**)(void))GameData_2132c58[0])(),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD, _QWORD))GameData_2132c60[0])(v42, 0, 0),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD, _QWORD))GameData_2132c68[0])(v42, 0, 0),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v43 = GameRoutine_5d210(a2[5]),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD))GameData_2132c70[0])(v42, v43),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD))GameData_2132c78[0])(v42, v8),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    goto LABEL_50;
  }
  v90 = v8;
  if ((_DWORD)v40 != 1) {
    if (v41 < 0 || (v40 & 0x80000000) != 0) {
      goto LABEL_50;
    }
    v66 = 0;
    v67 = (void (**)(void))GameData_2132c58[0],
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v68 = (void (**)(__int64, _QWORD))GameData_2132c70[0],
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v69 = (void (**)(__int64, _QWORD, __int64))GameData_2132c60[0],
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v70 = GameData_2132c68[0];
    v71 = (void (**)(__int64, __int64))GameData_2132c78[0],
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    while (1) {
      if ((v40 & 0x80000000) == 0) {
        v94 = v66;
        if (v66 != 0) {
          v72 = v3;
          v73 = v3[5];
          v74 = v3[9];
          v75 = v66 - 1;
          v76 = 16LL * (v66 + v66 * (int)v40);
          *(_QWORD*)(v74 + v76) = v73;
          v77 = GameRoutine_651190(16),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          *(_QWORD*)(v72[9] + v76 + 8) = v77;
          (*v67)();
          v78 = GameRoutine_5d210(v92[5]),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*v68)(v77, v78);
          (*v69)(v77, v75, 1);
          (*(void (**)(__int64, _QWORD, _QWORD))v70)(v77, 0, 0),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*v71)(v77, v91);
          LODWORD(v40) = *((_DWORD*)v72 + 15);
          if ((int)v40 >= 1) {
            v93 = v75;
            v79 = 0;
            v3 = v72;
            v67 = (void (**)(void))GameData_2132c58[0],
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v68 = (void (**)(__int64, _QWORD))GameData_2132c70[0],
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v69 = (void (**)(__int64, _QWORD, __int64))GameData_2132c60[0],
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v66 = v94;
            do {
              v80 = 16 * (v79 + v66 + v66 * (int)v40) + 16;
              *(_QWORD*)(v72[9] + v80) = v72[5];
              v81 = GameRoutine_651190(16),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              *(_QWORD*)(v72[9] + v80 + 8) = v81;
              (*v67)();
              v82 = GameRoutine_5d210(v92[5]),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              (*v68)(v81, v82);
              (*v69)(v81, v93, 1);
              (*(void (**)(__int64, _QWORD, __int64))v70)(v81,
                                                          (unsigned int)v79, 1),
                  v51 = COERCE_AS(
                      __typeof__(v51),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              v83 = v81;
              v66 = v94;
              (*v71)(v83, 1);
              LODWORD(v40) = *((_DWORD*)v72 + 15);
              ++v79;
            } while ((int)v79 < (int)v40);
            goto LABEL_72;
          }
          v3 = v72;
          v67 = (void (**)(void))GameData_2132c58[0],
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v68 = (void (**)(__int64, _QWORD))GameData_2132c70[0],
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v69 = (void (**)(__int64, _QWORD, __int64))GameData_2132c60[0],
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        else {
          *(_QWORD*)v3[9] = v3[5];
          v84 = GameRoutine_651190(16),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          *(_QWORD*)(v3[9] + 8LL) = v84;
          (*v67)();
          v85 = GameRoutine_5d210(v92[5]),
          v51 = COERCE_AS(__typeof__(v51),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*v68)(v84, v85);
          (*v69)(v84, 0, 0);
          (*(void (**)(__int64, _QWORD, _QWORD))v70)(v84, 0, 0),
              v51 = COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          (*v71)(v84, v90);
          LODWORD(v40) = *((_DWORD*)v3 + 15);
          if ((int)v40 < 1) {
            goto LABEL_72;
          }
          v86 = 0;
          v87 = 0;
          do {
            *(_QWORD*)(v3[9] + v86 + 16) = v3[5];
            v88 = GameRoutine_651190(16),
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            *(_QWORD*)(v3[9] + v86 + 24) = v88;
            (*v67)();
            v89 = GameRoutine_5d210(v92[5]),
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*v68)(v88, v89);
            (*v69)(v88, 0, 0);
            (*(void (**)(__int64, _QWORD, __int64))v70)(v88, (unsigned int)v87,
                                                        1),
                v51 =
                    COERCE_AS(__typeof__(v51),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            (*v71)(v88, 1);
            v40 = *((int*)v3 + 15);
            ++v87;
            v86 += 16;
          } while (v87 < v40);
        }
        v66 = v94;
      }
    LABEL_72:
      if (++v66 > *((_DWORD*)v3 + 16)) {
        goto LABEL_50;
      }
    }
  }
  if ((v41 & 0x80000000) == 0) {
    *(_QWORD*)v3[9] = v3[5];
    v55 = GameRoutine_651190(16),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    *(_QWORD*)(v3[9] + 8LL) = v55;
    v56 = (void (**)(void))GameData_2132c58[0],
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(void))GameData_2132c58[0])(),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v57 = (void (**)(__int64, _QWORD, __int64))GameData_2132c60[0],
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD, _QWORD))GameData_2132c60[0])(v55, 0, 0),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v58 = GameData_2132c68[0];
    (*(void (**)(__int64, _QWORD, _QWORD))GameData_2132c68[0])(v55, 0, 0),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v59 = GameRoutine_5d210(v92[5]),
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v60 = (void (**)(__int64, _QWORD))GameData_2132c70[0],
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD))GameData_2132c70[0])(v55, v59),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v61 = (void (**)(__int64, __int64))GameData_2132c78[0],
    v51 = COERCE_AS(__typeof__(v51),
                    PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    (*(void (**)(__int64, _QWORD))GameData_2132c78[0])(v55, v8),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (*((int*)v3 + 16) >= 1) {
      v62 = 0;
      v63 = 0;
      do {
        *(_QWORD*)(v3[9] + v62 + 16) = v3[5];
        v64 = GameRoutine_651190(16),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(v3[9] + v62 + 24) = v64;
        (*v56)();
        (*v57)(v64, (unsigned int)v63, 1);
        (*(void (**)(__int64, _QWORD, _QWORD))v58)(v64, 0, 0),
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v65 = GameRoutine_5d210(v92[5]),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*v60)(v64, v65);
        (*v61)(v64, 1);
        ++v63;
        v62 += 16;
      } while (v63 < *((int*)v3 + 16));
    }
  }
LABEL_50:
  v44 = *((_BYTE*)v92 + 24) | *((_BYTE*)v92 + 25);
  *((_BYTE*)v3 + 56) = v44 & 1;
  if ((v44 & 1) != 0) {
    v45 = v3[6];
    nn_os_LockMutex(v45 + 216),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    if (*((_BYTE*)v92 + 24) == 1 && v3[10] != v3[9]) {
      v46 = 1;
      v47 = 0;
      v48 = GameData_2132c80[0];
      do {
        v49 = ({
          unsigned __int128 r_ =
              gxc_NvnDescriptorPool_AllocateTextureDescriptor_pair(v3[6]);
          v51 = COERCE_AS(__typeof__(v51), (unsigned long long)(r_ >> 64));
          (__int64)(unsigned long long)r_;
        });
        v50 = v3[12] + 16 * v47;
        *(_QWORD*)v50 = v49;
        *(_DWORD*)(v50 + 8) = v51;
        *(_QWORD*)(v3[12] + 16 * v47) = v3[5];
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD))v48)(
            v3[6] + 8LL, *(unsigned int*)(v3[12] + 16 * v47 + 8),
            *(_QWORD*)(v3[12] + 16 * v47), *(_QWORD*)(v3[9] + 16 * v47 + 8)),
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v47 = v46++;
      } while (v47 < (__int64)(v3[10] - v3[9]) >> 4);
    }
    if (*((_BYTE*)v92 + 25) == 1 && v3[10] != v3[9]) {
      v52 = 1;
      v53 = 0;
      v54 = GameData_2132c88[0];
      do {
        *(_DWORD*)(v3[15] +
                   4 * v53) = gxc_NvnDescriptorPool_AllocateTexture(v3[6]),
                       v51 = COERCE_AS(
                           __typeof__(v51),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD))v54)(
            v3[6] + 8LL, *(unsigned int*)(v3[15] + 4 * v53), v3[5],
            *(_QWORD*)(v3[9] + 16 * v53 + 8)),
            v51 = COERCE_AS(__typeof__(v51),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v53 = v52++;
      } while (v53 < (__int64)(v3[10] - v3[9]) >> 4);
    }
    nn_os_UnlockMutex(v45 + 216),
        v51 = COERCE_AS(__typeof__(v51),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

#pragma GCC visibility pop
