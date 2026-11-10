#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_5d610(_QWORD* result, _QWORD*);
_QWORD* gxc_DeviceChild_DeviceChild(_QWORD* result);
_QWORD* gxc_GpuMemory_Destroy_GpuMemory(_QWORD* result);
_QWORD* gxc_GpuMemory_GpuMemory_5d4d0(_QWORD* result);
__int64 GameRoutine_5d210(int);
__int64 GameRoutine_651190(__int64);
__int64 gxc_DeviceChild_GetDevice();
__int64 gxc_NvnDescriptorPool_AllocateTextureDescriptor(__int64);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern _UNKNOWN* GameData_2132be0[23];
extern _UNKNOWN* GameData_2132be8[22];
extern _UNKNOWN* GameData_2132bf0[21];
extern _UNKNOWN* GameData_2132bf8[20];
extern _UNKNOWN* GameData_2132c00[19];
extern _UNKNOWN* GameData_2132c10[17];
extern _UNKNOWN* GameData_2132c18[16];
extern _UNKNOWN* GameData_2132c20[15];
extern _UNKNOWN* GameData_2132c28[14];
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
extern __int64* GameData_2132d88[2];
void GameRoutine_575c0(__int64, unsigned __int64);
void GameRoutine_651250(void*);
void gxc_54ea0(_QWORD*, unsigned __int64);
void gxc_56ce0(__int64 a1, unsigned int* a2);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_5e750();
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_adf500();
void gxc_5e560(_QWORD* a1, unsigned __int64 a2, _QWORD* a3);

void gxc_54ea0(_QWORD* a1, unsigned __int64 a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  bool v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  __int64 v19;
  unsigned __int64 v20;
  void* v21;
  __int64 v22;
  __int64 v23;

  v2 = (_QWORD*)a1[1];
  v3 = a1[2];
  if (a2 <= (v3 - (__int64)v2) >> 4) {
    if (a2 != 0) {
      v11 = &v2[2 * a2];
      v12 = 16 * a2 - 16;
      if ((~(_BYTE)v12 & 0x70) != 0) {
        v13 = -(__int64)(((unsigned __int8)((unsigned int)v12 >> 4) + 1) & 7);
        do {
          *v2 = 0;
          v2[1] = 0;
          *((_DWORD*)v2 + 2) = -1;
          v2 += 2;
          v14 = __CFADD__(v13++, 1);
        } while (!v14);
      }
      if (v12 >= 0x70) {
        do {
          *v2 = 0;
          v2[1] = 0;
          *((_DWORD*)v2 + 2) = -1;
          v2[2] = 0;
          v2[3] = 0;
          *((_DWORD*)v2 + 6) = -1;
          v2[4] = 0;
          v2[5] = 0;
          *((_DWORD*)v2 + 10) = -1;
          v2[6] = 0;
          v2[7] = 0;
          *((_DWORD*)v2 + 14) = -1;
          v2[8] = 0;
          v2[9] = 0;
          *((_DWORD*)v2 + 18) = -1;
          v2[10] = 0;
          v2[11] = 0;
          *((_DWORD*)v2 + 22) = -1;
          v2[12] = 0;
          v2[13] = 0;
          *((_DWORD*)v2 + 26) = -1;
          v2[14] = 0;
          v2[15] = 0;
          *((_DWORD*)v2 + 30) = -1;
          v2 += 16;
        } while (v2 != v11);
      }
      v2 = v11;
    }
    a1[1] = v2;
  }
  else {
    v5 = (__int64)v2 - *a1;
    v6 = a2 + (v5 >> 4);
    if (v6 >> 60 != 0) {
      GameRoutine_adf500();
    }
    v7 = v3 - *a1;
    if (v7 >> 3 > v6) {
      v6 = v7 >> 3;
    }
    if ((unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFF0LL) {
      v8 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v8 = v6;
    }
    if (v8 != 0) {
      if (v8 >> 60 != 0) {
        GameRoutine_60a210();
      }
      v9 = a2;
      v10 = GameRoutine_651190(16 * v8);
      a2 = v9;
    }
    else {
      v10 = 0;
    }
    v15 = v10 + v5;
    v16 = 16 * a2 - 16;
    v17 = v10 + v5 + 16 * a2;
    if ((~(_BYTE)v16 & 0x70) != 0) {
      v19 = -(__int64)(((unsigned __int8)((unsigned int)v16 >> 4) + 1) & 7);
      v18 = (_QWORD*)(v10 + v5);
      do {
        *v18 = 0;
        v18[1] = 0;
        *((_DWORD*)v18 + 2) = -1;
        v18 += 2;
        v14 = __CFADD__(v19++, 1);
      } while (!v14);
    }
    else {
      v18 = (_QWORD*)(v10 + v5);
    }
    if (v16 >= 0x70) {
      do {
        *v18 = 0;
        v18[1] = 0;
        *((_DWORD*)v18 + 2) = -1;
        v18[2] = 0;
        v18[3] = 0;
        *((_DWORD*)v18 + 6) = -1;
        v18[4] = 0;
        v18[5] = 0;
        *((_DWORD*)v18 + 10) = -1;
        v18[6] = 0;
        v18[7] = 0;
        *((_DWORD*)v18 + 14) = -1;
        v18[8] = 0;
        v18[9] = 0;
        *((_DWORD*)v18 + 18) = -1;
        v18[10] = 0;
        v18[11] = 0;
        *((_DWORD*)v18 + 22) = -1;
        v18[12] = 0;
        v18[13] = 0;
        *((_DWORD*)v18 + 26) = -1;
        v18[14] = 0;
        v18[15] = 0;
        *((_DWORD*)v18 + 30) = -1;
        v18 += 16;
      } while (v18 != (_QWORD*)v17);
    }
    v20 = v10 + 16 * v8;
    v21 = (void*)*a1;
    v22 = a1[1] - *a1;
    v23 = v15 - v22;
    memcpy(v15 - v22, *a1, v22);
    *a1 = v23;
    a1[1] = v17;
    a1[2] = v20;
    if (v21 != nullptr) {
      GameRoutine_651250(v21);
    }
  }
}

void gxc_56ce0(__int64 a1, unsigned int* a2)
{
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  int v7;
  bool v8;
  unsigned int v9;
  unsigned int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  void* v14;
  unsigned int v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  void (**v32)(__int64);
  void (**v33)(__int64, _QWORD, __int64);
  void (**v34)(__int64, _QWORD);
  void* v35;
  void (**v36)(__int64, _QWORD);
  unsigned int v37;
  __int64 v38;
  unsigned int v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v47;
  void (**v48)(__int64);
  void (**v49)(__int64, _QWORD, __int64);
  void (**v50)(__int64, _QWORD);
  void* v51;
  void (**v52)(__int64, _QWORD);
  unsigned int v53;
  unsigned int v54;
  __int64 v55;
  unsigned int v56;
  unsigned int v57;
  unsigned __int64 v58;
  void* v59;
  __int64 v60;
  __int64 v61;
  int v62;
  _QWORD* v63;
  __int64* v64;
  unsigned int v65;
  _QWORD v66[3];
  _QWORD v67[17];

  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_DeviceChild_DeviceChild((_QWORD*)a1),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_DWORD*)(a1 + 8) = 0;
  *(_QWORD*)a1 = GameData_2132d88[0] + 2;
  gxc_GpuMemory_GpuMemory_5d4d0((_QWORD*)(a1 + 16)),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_QWORD*)(a1 + 40) = 0;
  *(_BYTE*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  v64 = (__int64*)(a1 + 40);
  *(_QWORD*)(a1 + 64) = 0;
  v63 = (_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 88) = 0;
  v4 = gxc_DeviceChild_GetDevice(),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v5 = a2[3];
  v6 = v4;
  memset(v67, 0, 128);
  if (v5 == 1) {
    v7 = 4;
  }
  else {
    v7 = 1;
  }
  if (v5 == 2) {
    v7 = 2;
  }
  v8 = v5 != 3 && v5 == 2;
  if (v5 == 3) {
    v9 = 8;
  }
  else {
    v9 = v7;
  }
  (*(void (**)(_QWORD*))GameData_2132be0[0])(v67),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD*, __int64))GameData_2132be8[0])(v67, v6 + 8),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD*, _QWORD))GameData_2132bf0[0])(v67, *a2),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD*, _QWORD))GameData_2132bf8[0])(v67, a2[1]),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD*, _QWORD))GameData_2132c00[0])(v67, a2[2]),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v65 = v9;
  (*(void (**)(_QWORD*, _QWORD))GameData_2132c10[0])(v67, v9),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v10 = GameRoutine_5d210(a2[4]),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD*, _QWORD))GameData_2132c18[0])(v67, v10),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  if ((~(*(unsigned int (**)(__int64))GameData_2132c20[0])(*((_QWORD*)a2 + 3) +
                                                           8LL) &
       0x81) == 0) {
    (*(void (**)(_QWORD*, __int64))GameData_2132c28[0])(v67, 8),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v11 = (*(__int64 (**)(_QWORD*))GameData_2132c38[0])(v67),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12 = (*(__int64 (**)(_QWORD*))GameData_2132c40[0])(v67),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, __int64, __int64))(
      **((_QWORD**)a2 + 3) + 48LL))((void*)(v66), *((_QWORD*)a2 + 3), v11, v12),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  GameRoutine_5d610((_QWORD*)(a1 + 16), v66),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  gxc_GpuMemory_Destroy_GpuMemory(v66),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  (*(void (**)(_QWORD*, _QWORD, _QWORD))GameData_2132c48[0])(
      v67, *(_QWORD*)(a1 + 24), *(_QWORD*)(a1 + 32)),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v13 = GameRoutine_651190(128),
  v62 = COERCE_AS(__typeof__(v62),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v14 = *(void**)(a1 + 40);
  *(_QWORD*)(a1 + 40) = v13;
  if (v14 != nullptr) {
    GameRoutine_651250(v14),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v13 = *v64;
  }
  (*(void (**)(__int64, _QWORD*))GameData_2132c50[0])(v13, v67),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v19 = a2[3];
  if (v19 == 3) {
    v25 = *(_QWORD*)(a1 + 64);
    v26 = *(_QWORD*)(a1 + 72) - v25;
    v27 = v26 >> 4;
    if ((unsigned __int64)(v26 >> 4) > 6) {
      if (v26 == 112) {
        goto LABEL_32;
      }
      v24 = v25 + 112;
      goto LABEL_28;
    }
    v28 = 7;
  LABEL_30:
    v23 = v28 - v27;
    goto LABEL_31;
  }
  if (v19 != 1) {
    v29 = *(_QWORD*)(a1 + 64);
    v27 = (*(_QWORD*)(a1 + 72) - v29) >> 4;
    if (*(_QWORD*)(a1 + 72) != v29) {
      if (v27 < 2) {
        goto LABEL_32;
      }
      v24 = v29 + 16;
      goto LABEL_28;
    }
    v28 = 1;
    goto LABEL_30;
  }
  v20 = *(_QWORD*)(a1 + 64);
  v21 = (int)a2[2] + 1LL;
  v22 = (*(_QWORD*)(a1 + 72) - v20) >> 4;
  v23 = v21 - v22;
  if (v21 <= v22) {
    if (v21 >= v22) {
      goto LABEL_32;
    }
    v24 = v20 + 16 * v21;
  LABEL_28:
    *(_QWORD*)(a1 + 72) = v24;
    goto LABEL_32;
  }
LABEL_31:
  GameRoutine_575c0((__int64)v63, v23),
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_32:
  v30 = *(_QWORD*)(a1 + 64);
  if (*(_QWORD*)(a1 + 72) != v30) {
    if (v8) {
      v31 = 0;
      v32 = (void (**)(__int64))GameData_2132c58[0],
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v33 = (void (**)(__int64, _QWORD, __int64))GameData_2132c60[0],
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v34 = (void (**)(__int64, _QWORD))GameData_2132c70[0],
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v35 = GameData_2132c68[0];
      v36 = (void (**)(__int64, _QWORD))GameData_2132c78[0],
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v37 = 1;
      do {
        *(_QWORD*)(v30 + 16 * v31) = *(_QWORD*)(a1 + 40);
        v38 = GameRoutine_651190(16),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(*(_QWORD*)(a1 + 64) + 16 * v31 + 8) = v38;
        (*v32)(v38);
        (*v33)(v38, 0, 1);
        v39 = GameRoutine_5d210(a2[4]),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*v34)(v38, v39);
        (*(void (**)(__int64, _QWORD, _QWORD))v35)(v38, 0, 0),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*v36)(v38, v65);
        v30 = *(_QWORD*)(a1 + 64);
        v31 = v37++;
      } while (v31 < (*(_QWORD*)(a1 + 72) - v30) >> 4);
    }
    else {
      v47 = 0;
      v48 = (void (**)(__int64))GameData_2132c58[0],
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v49 = (void (**)(__int64, _QWORD, __int64))GameData_2132c60[0],
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v50 = (void (**)(__int64, _QWORD))GameData_2132c70[0],
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v51 = GameData_2132c68[0];
      v52 = (void (**)(__int64, _QWORD))GameData_2132c78[0],
      v62 = COERCE_AS(__typeof__(v62),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v53 = 1;
      do {
        *(_QWORD*)(v30 + 16 * v47) = *v64;
        v55 = GameRoutine_651190(16),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        *(_QWORD*)(*v63 + 16 * v47 + 8) = v55;
        (*v48)(v55);
        (*v49)(v55, 0, 1);
        v56 = GameRoutine_5d210(a2[4]),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        (*v50)(v55, v56);
        if (v53 == 1) {
          (*(void (**)(__int64, _QWORD, _QWORD))v51)(v55, 0, 0),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          v54 = v65;
        }
        else {
          v54 = 1;
          (*(void (**)(__int64, _QWORD, __int64))v51)(v55, v53 - 2, 1),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        (*v52)(v55, v54);
        v30 = *(_QWORD*)(a1 + 64);
        v47 = v53++;
      } while (v47 < (*(_QWORD*)(a1 + 72) - v30) >> 4);
    }
  }
  v40 = *((_QWORD*)a2 + 4);
  if (v40 != 0) {
    *(_QWORD*)(a1 + 48) = v40;
  }
  v41 = *((unsigned __int8*)a2 + 20);
  *(_BYTE*)(a1 + 56) = v41;
  if (v41 == 1) {
    v42 = *(_QWORD*)(a1 + 48);
    nn_os_LockMutex(v42 + 216),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    v43 = *(_QWORD*)(a1 + 72) - *(_QWORD*)(a1 + 64);
    v45 = *(_QWORD*)(a1 + 88);
    v44 = *(_QWORD*)(a1 + 96);
    v46 = (v44 - v45) >> 4;
    if (v43 >> 4 <= v46) {
      if (v43 >> 4 < v46) {
        v44 = v45 + v43;
        *(_QWORD*)(a1 + 96) = v45 + v43;
      }
    }
    else {
      gxc_54ea0((_QWORD*)(a1 + 88), (v43 >> 4) - v46),
          v62 = COERCE_AS(__typeof__(v62),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      v45 = *(_QWORD*)(a1 + 88);
      v44 = *(_QWORD*)(a1 + 96);
    }
    if (v44 != v45) {
      v57 = 1;
      v58 = 0;
      v59 = GameData_2132c80[0];
      do {
        v60 = gxc_NvnDescriptorPool_AllocateTextureDescriptor(
            *(_QWORD*)(a1 + 48)),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v61 = *(_QWORD*)(a1 + 88) + 16 * v58;
        *(_QWORD*)v61 = v60;
        *(_DWORD*)(v61 + 8) = v62;
        *(_QWORD*)(*(_QWORD*)(a1 + 88) + 16 * v58) = *(_QWORD*)(a1 + 40);
        (*(void (**)(__int64, _QWORD, _QWORD, _QWORD))v59)(
            *(_QWORD*)(a1 + 48) + 8LL,
            *(unsigned int*)(*(_QWORD*)(a1 + 88) + 16 * v58 + 8),
            *(_QWORD*)(*(_QWORD*)(a1 + 88) + 16 * v58),
            *(_QWORD*)(*(_QWORD*)(a1 + 64) + 16 * v58 + 8)),
            v62 = COERCE_AS(__typeof__(v62),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        v58 = v57++;
      } while (v58 < (__int64)(*(_QWORD*)(a1 + 96) - *(_QWORD*)(a1 + 88)) >> 4);
    }
    nn_os_UnlockMutex(v42 + 216),
        v62 = COERCE_AS(__typeof__(v62),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
}

void gxc_5e560(_QWORD* a1, unsigned __int64 a2, _QWORD* a3)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  _QWORD* v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  _QWORD* v19;
  unsigned __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  void* v25;
  char* v26;
  __int64 v27;

  v3 = (_QWORD*)a1[1];
  v4 = a1[2];
  if (a2 <= (v4 - (__int64)v3) >> 3) {
    if (a2 != 0) {
      v13 = *a3;
      v14 = &v3[a2];
      v15 = 8 * a2 - 8;
      if ((~(_BYTE)v15 & 0x38) != 0) {
        v16 = -(__int64)(((unsigned __int8)((unsigned int)v15 >> 3) + 1) & 7);
        do {
          *v3++ = v13;
          v17 = __CFADD__(v16++, 1);
        } while (!v17);
      }
      if (v15 >= 0x38) {
        do {
          *v3 = v13;
          v3[1] = v13;
          v3[2] = v13;
          v3[3] = v13;
          v3[4] = v13;
          v3[5] = v13;
          v3[6] = v13;
          v3[7] = v13;
          v3 += 8;
        } while (v3 != v14);
      }
      v3 = v14;
    }
    a1[1] = v3;
  }
  else {
    v6 = (__int64)v3 - *a1;
    v7 = a2 + (v6 >> 3);
    if (v7 >> 61 != 0) {
      GameRoutine_5e750();
    }
    v8 = v4 - *a1;
    if (v8 >> 2 > v7) {
      v7 = v8 >> 2;
    }
    if ((unsigned __int64)v8 >= 0x7FFFFFFFFFFFFFF8LL) {
      v9 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v9 = v7;
    }
    if (v9 != 0) {
      if (v9 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v10 = a2;
      v11 = a3;
      v12 = GameRoutine_651190(8 * v9);
      a3 = v11;
      a2 = v10;
    }
    else {
      v12 = 0;
    }
    v18 = *a3;
    v19 = (_QWORD*)(v12 + v6);
    v20 = 8 * a2 - 8;
    v21 = v12 + v6 + 8 * a2;
    if ((~(_BYTE)v20 & 0x38) != 0) {
      v23 = -(__int64)(((unsigned __int8)((unsigned int)v20 >> 3) + 1) & 7);
      v22 = v19;
      do {
        *v22++ = v18;
        v17 = __CFADD__(v23++, 1);
      } while (!v17);
    }
    else {
      v22 = v19;
    }
    if (v20 >= 0x38) {
      do {
        *v22 = v18;
        v22[1] = v18;
        v22[2] = v18;
        v22[3] = v18;
        v22[4] = v18;
        v22[5] = v18;
        v22[6] = v18;
        v22[7] = v18;
        v22 += 8;
      } while (v22 != (_QWORD*)v21);
    }
    v24 = v12 + 8 * v9;
    v25 = (void*)*a1;
    v26 = (char*)v3 - *a1;
    v27 = (char*)v19 - v26;
    memcpy((char*)v19 - v26, *a1, v26);
    *a1 = v27;
    a1[1] = v21;
    a1[2] = v24;
    if (v25 != nullptr) {
      GameRoutine_651250(v25);
    }
  }
}

#pragma GCC visibility pop
