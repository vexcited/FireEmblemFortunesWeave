#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_5d610(_QWORD* result, _QWORD*);
_QWORD* gxc_DeviceChild_DeviceChild(_QWORD* result);
_QWORD* gxc_GpuMemory_Destroy_GpuMemory(_QWORD* result);
_QWORD* gxc_GpuMemory_GpuMemory_5d4d0(_QWORD* result);
__int64 GameRoutine_651190(__int64);
__int64 gxc_DeviceChild_GetDevice();
__int64 gxc_NvnDevice_GetInteger(__int64, __int64);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 nn_os_InitializeMutex(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN** GameData_2132d98[6];
extern _UNKNOWN** GameData_2132da0[5];
extern __int64* GameData_2132d90;
void GameRoutine_651250(void*);
void __attribute__((noreturn)) GameRoutine_9337e0();
__int64 NvnDescriptorPool_57720(__int64 a1, int* a2);

__int64 NvnDescriptorPool_57720(__int64 a1, int* a2)
{
  __int64 v4;
  int v5;
  int v6;
  __int64 v10;
  char* v11;
  __int64 v12;
  int v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v23;
  int v24;
  int v25;
  int v26;
  __int64 v30;
  char* v31;
  __int64 v32;
  int v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  int v43;
  __int64 result;
  int v45;
  int v46;
  _QWORD v47[3];

  gxc_DeviceChild_DeviceChild((_QWORD*)a1);
  *(_QWORD*)a1 = GameData_2132d90 + 2;
  gxc_GpuMemory_GpuMemory_5d4d0((_QWORD*)(a1 + 72));
  gxc_GpuMemory_GpuMemory_5d4d0((_QWORD*)(a1 + 96));
  *(_WORD*)(a1 + 216) = 0;
  *(_QWORD*)(a1 + 152) = 0;
  *(_DWORD*)(a1 + 160) = 0;
  *(_QWORD*)(a1 + 220) = 0;
  *(_QWORD*)(a1 + 232) = 0;
  *(_DWORD*)(a1 + 240) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 144) = 0;
  *(_QWORD*)(a1 + 168) = 0;
  *(_QWORD*)(a1 + 176) = 0;
  *(_QWORD*)(a1 + 184) = 0;
  *(_QWORD*)(a1 + 192) = 0;
  *(_QWORD*)(a1 + 200) = 0;
  *(_QWORD*)(a1 + 208) = 0;
  nn_os_InitializeMutex(a1 + 216, 1, 0);
  v4 = gxc_DeviceChild_GetDevice();
  *(_DWORD*)(a1 + 120) = gxc_NvnDevice_GetInteger(v4, 17);
  v5 = gxc_NvnDevice_GetInteger(v4, 18);
  *(_DWORD*)(a1 + 124) = v5;
  *(_DWORD*)(a1 + 128) = *a2 - *(_DWORD*)(a1 + 120);
  *(_DWORD*)(a1 + 132) = a2[1] - v5;
  v6 = gxc_NvnDevice_GetInteger(v4, 15);
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, __int64, _QWORD))(
      **((_QWORD**)a2 + 1) + 48LL))((void*)(v47), *((_QWORD*)a2 + 1),
                                    *a2*(__int64)v6, v6);
  GameRoutine_5d610((_QWORD*)(a1 + 72), v47);
  gxc_GpuMemory_Destroy_GpuMemory(v47);
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD))GameData_2132d98[0])(
      a1 + 8, *(_QWORD*)(a1 + 80), *(_QWORD*)(a1 + 88), (unsigned int)*a2);
  v11 = *(char**)(a1 + 168);
  v10 = *(_QWORD*)(a1 + 176);
  v12 = v10 - (_QWORD)v11;
  v13 = (*a2 + 63) >> 3;
  v14 = (int)(v13 & 0xFFFFFFF8);
  v15 = v14 - (v10 - (_QWORD)v11);
  if (v14 <= v10 - (__int64)v11) {
    if (v14 < v10 - (__int64)v11) {
      *(_QWORD*)(a1 + 176) = &v11[v14];
    }
  }
  else {
    v16 = *(_QWORD*)(a1 + 184);
    if (v16 - v10 >= v15) {
      memset(v10, 0, v15);
      *(_QWORD*)(a1 + 176) = &v11[v14];
    }
    else {
      if (v13 < 0) {
        goto LABEL_40;
      }
      v17 = 2 * (v16 - (_QWORD)v11);
      if (v17 <= v14) {
        v17 = v14;
      }
      if ((unsigned __int64)(v16 - (_QWORD)v11) >= 0x3FFFFFFFFFFFFFFFLL) {
        v18 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v18 = v17;
      }
      v19 = GameRoutine_651190(v18);
      memset(v19 + v12, 0, v15);
      memcpy(v19, v11, v12);
      *(_QWORD*)(a1 + 168) = v19;
      *(_QWORD*)(a1 + 176) = v19 + v14;
      *(_QWORD*)(a1 + 184) = v19 + v18;
      if (v11 != nullptr) {
        GameRoutine_651250(v11);
      }
    }
  }
  v23 = *(_QWORD*)(a1 + 168);
  v24 = *a2 + 63;
  *(_DWORD*)(a1 + 144) = *a2;
  *(_QWORD*)(a1 + 136) = v23;
  v25 = v24 >> 6;
  if ((unsigned int)v24 >= 0x40 && v25 >= 1) {
    memset(v23, 0, 8LL * (unsigned int)(v24 >> 6));
    v24 = *(_DWORD*)(a1 + 144) + 63;
    v25 = v24 >> 6;
  }
  if ((unsigned int)v24 >= 0x40 && v25 >= 1) {
    memset(*(_QWORD*)(a1 + 136), 0, 8LL * (unsigned int)v25);
  }
  v26 = gxc_NvnDevice_GetInteger(v4, 16);
  (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD, __int64, _QWORD))(
      **((_QWORD**)a2 + 1) + 48LL))((void*)(v47), *((_QWORD*)a2 + 1),
                                    a2[1] * (__int64)v26, v26);
  GameRoutine_5d610((_QWORD*)(a1 + 96), v47);
  gxc_GpuMemory_Destroy_GpuMemory(v47);
  (*(void (**)(__int64, _QWORD, _QWORD, _QWORD))GameData_2132da0[0])(
      a1 + 40, *(_QWORD*)(a1 + 104), *(_QWORD*)(a1 + 112), (unsigned int)a2[1]);
  v31 = *(char**)(a1 + 192);
  v30 = *(_QWORD*)(a1 + 200);
  v32 = v30 - (_QWORD)v31;
  v33 = (a2[1] + 63) >> 3;
  v34 = (int)(v33 & 0xFFFFFFF8);
  v35 = v34 - (v30 - (_QWORD)v31);
  if (v34 > v30 - (__int64)v31) {
    v36 = *(_QWORD*)(a1 + 208);
    if (v36 - v30 >= v35) {
      memset(v30, 0, v34 - (v30 - (_QWORD)v31));
      *(_QWORD*)(a1 + 200) = &v31[v34];
      goto LABEL_33;
    }
    if ((v33 & 0x80000000) == 0) {
      v37 = 2 * (v36 - (_QWORD)v31);
      if (v37 <= v34) {
        v37 = v34;
      }
      if ((unsigned __int64)(v36 - (_QWORD)v31) >= 0x3FFFFFFFFFFFFFFFLL) {
        v38 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else {
        v38 = v37;
      }
      v39 = GameRoutine_651190(v38);
      memset(v39 + v32, 0, v35);
      memcpy(v39, v31, v32);
      *(_QWORD*)(a1 + 192) = v39;
      *(_QWORD*)(a1 + 200) = v39 + v34;
      *(_QWORD*)(a1 + 208) = v39 + v38;
      if (v31 != nullptr) {
        GameRoutine_651250(v31);
      }
      goto LABEL_33;
    }
  LABEL_40:
    GameRoutine_9337e0();
  }
  if (v34 < v30 - (__int64)v31) {
    *(_QWORD*)(a1 + 200) = &v31[v34];
  }
LABEL_33:
  v43 = a2[1];
  result = *(_QWORD*)(a1 + 192);
  v45 = v43 + 63;
  *(_DWORD*)(a1 + 160) = v43;
  *(_QWORD*)(a1 + 152) = result;
  v46 = (v43 + 63) >> 6;
  if ((unsigned int)v45 >= 0x40 && v46 >= 1) {
    result = memset(result, 0, 8LL * (unsigned int)(v45 >> 6));
    v45 = *(_DWORD*)(a1 + 160) + 63;
    v46 = v45 >> 6;
  }
  if ((unsigned int)v45 >= 0x40 && v46 >= 1) {
    return memset(*(_QWORD*)(a1 + 152), 0, 8LL * (unsigned int)v46);
  }
  return result;
}

#pragma GCC visibility pop
