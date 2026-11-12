#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a020(__int64, const char*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memset(__int64, int, unsigned __int64);
__int64 nn_os_FinalizeMutex(__int64);
__int64 nn_os_InitializeMutex(__int64, bool, int);
extern __int64 GameData_226b920;
extern __int64 fw_memory_g_heap_manager_ptr;
int memcmp(__int64, __int64, unsigned __int64);
unsigned __int64 strlen(const char*);
void GameHr_1944d10(__int64, _QWORD*);
void memory_a6e360(__int64, __int64, unsigned __int8*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__attribute__((swiftcall)) void memory_a6e580(PSEUDO_X8 x8_, _QWORD* a1,
                                              const char* a2);
void memory_1944720();

__attribute__((swiftcall)) void memory_a6e580(PSEUDO_X8 x8_, _QWORD* a1,
                                              const char* a2)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  __int64 v12;
  bool v13;
  unsigned __int64 v14;
  unsigned __int16* v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int16* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int16* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int16* v48;
  unsigned __int64 v49;
  __int64 v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  int v56;
  __int64 v57;
  unsigned __int64 v58;
  unsigned __int16* v59;
  unsigned __int64 v60;
  __int64 v61;

  *(_QWORD*)(a3 + 56) = 0;
  *(_QWORD*)(a3 + 64) = 0;
  *(_QWORD*)(a3 + 40) = 0;
  *(_QWORD*)(a3 + 48) = 0;
  *(_QWORD*)(a3 + 24) = 0;
  *(_QWORD*)(a3 + 32) = 0;
  *(_QWORD*)(a3 + 8) = 0;
  *(_QWORD*)(a3 + 16) = 0;
  *(_QWORD*)a3 = 0;
  GameRoutine_60a020(a3, a2);
  v6 = a1[12];
  if (v6 == 0) {
    goto LABEL_12;
  }
  v7 = strlen(a2);
  v8 = v6 + 8;
  v9 = *(unsigned __int16*)(v6 + 12);
  v10 = v6 + 8 + 16 * v9;
  v11 = *(_DWORD*)v10;
  if ((signed __int32)*(_DWORD*)(v6 + 8) < (signed __int32)*(_DWORD*)v10) {
    do {
      v14 = (__int64)v11 >> 3;
      if (v7 > v14) {
        v12 = ((unsigned __int8)a2[v7 + ~v14] >> (v11 & 7)) & 1;
      }
      else {
        v12 = 0;
      }
      v9 = *(unsigned __int16*)(v6 + 12 + 16 * v9 + 2 * v12);
      v13 = v11 < (signed __int32)*(_DWORD*)(v8 + 16 * v9);
      v11 = *(_DWORD*)(v8 + 16 * v9);
    } while (v13);
    v10 = v8 + 16 * v9;
  }
  v15 = *(unsigned __int16**)(v10 + 8);
  if (v7 == *v15 && memcmp((__int64)(v15 + 1), (__int64)a2, v7) == 0 &&
      (~(v16 = v10 - v6 - 24) & 0xFFFFFFFF0LL) != 0) {
    v17 = a1[11] + 80LL * (int)(v16 >> 4);
  }
  else {
  LABEL_12:
    v17 = 0;
  }
  v18 = a1[16];
  *(_QWORD*)(a3 + 24) = v17;
  if (v18 == 0) {
    goto LABEL_24;
  }
  v19 = strlen(a2);
  v20 = v18 + 8;
  v21 = *(unsigned __int16*)(v18 + 12);
  v22 = v18 + 8 + 16 * v21;
  v23 = *(_DWORD*)v22;
  if ((signed __int32)*(_DWORD*)(v18 + 8) < (signed __int32)*(_DWORD*)v22) {
    do {
      v25 = (__int64)v23 >> 3;
      if (v19 > v25) {
        v24 = ((unsigned __int8)a2[v19 + ~v25] >> (v23 & 7)) & 1;
      }
      else {
        v24 = 0;
      }
      v21 = *(unsigned __int16*)(v18 + 12 + 16 * v21 + 2 * v24);
      v13 = v23 < (signed __int32)*(_DWORD*)(v20 + 16 * v21);
      v23 = *(_DWORD*)(v20 + 16 * v21);
    } while (v13);
    v22 = v20 + 16 * v21;
  }
  v26 = *(unsigned __int16**)(v22 + 8);
  if (v19 == *v26 && memcmp((__int64)(v26 + 1), (__int64)a2, v19) == 0 &&
      (~(v27 = v22 - v18 - 24) & 0xFFFFFFFF0LL) != 0) {
    v28 = a1[15] + 96LL * (int)(v27 >> 4);
  }
  else {
  LABEL_24:
    v28 = 0;
  }
  v29 = a1[14];
  *(_QWORD*)(a3 + 32) = v28;
  if (v29 == 0) {
    goto LABEL_36;
  }
  v30 = strlen(a2);
  v31 = v29 + 8;
  v32 = *(unsigned __int16*)(v29 + 12);
  v33 = v29 + 8 + 16 * v32;
  v34 = *(_DWORD*)v33;
  if ((signed __int32)*(_DWORD*)(v29 + 8) < (signed __int32)*(_DWORD*)v33) {
    do {
      v36 = (__int64)v34 >> 3;
      if (v30 > v36) {
        v35 = ((unsigned __int8)a2[v30 + ~v36] >> (v34 & 7)) & 1;
      }
      else {
        v35 = 0;
      }
      v32 = *(unsigned __int16*)(v29 + 12 + 16 * v32 + 2 * v35);
      v13 = v34 < (signed __int32)*(_DWORD*)(v31 + 16 * v32);
      v34 = *(_DWORD*)(v31 + 16 * v32);
    } while (v13);
    v33 = v31 + 16 * v32;
  }
  v37 = *(unsigned __int16**)(v33 + 8);
  if (v30 == *v37 && memcmp((__int64)(v37 + 1), (__int64)a2, v30) == 0 &&
      (~(v38 = v33 - v29 - 24) & 0xFFFFFFFF0LL) != 0) {
    v39 = a1[13] + 112LL * (int)(v38 >> 4);
  }
  else {
  LABEL_36:
    v39 = 0;
  }
  v40 = a1[18];
  *(_QWORD*)(a3 + 40) = v39;
  if (v40 == 0) {
    goto LABEL_48;
  }
  v41 = strlen(a2);
  v42 = v40 + 8;
  v43 = *(unsigned __int16*)(v40 + 12);
  v44 = v40 + 8 + 16 * v43;
  v45 = *(_DWORD*)v44;
  if ((signed __int32)*(_DWORD*)(v40 + 8) < (signed __int32)*(_DWORD*)v44) {
    do {
      v47 = (__int64)v45 >> 3;
      if (v41 > v47) {
        v46 = ((unsigned __int8)a2[v41 + ~v47] >> (v45 & 7)) & 1;
      }
      else {
        v46 = 0;
      }
      v43 = *(unsigned __int16*)(v40 + 12 + 16 * v43 + 2 * v46);
      v13 = v45 < (signed __int32)*(_DWORD*)(v42 + 16 * v43);
      v45 = *(_DWORD*)(v42 + 16 * v43);
    } while (v13);
    v44 = v42 + 16 * v43;
  }
  v48 = *(unsigned __int16**)(v44 + 8);
  if (v41 == *v48 && memcmp((__int64)(v48 + 1), (__int64)a2, v41) == 0 &&
      (~(v49 = v44 - v40 - 24) & 0xFFFFFFFF0LL) != 0) {
    v50 = a1[17] + 80LL * (int)(v49 >> 4);
  }
  else {
  LABEL_48:
    v50 = 0;
  }
  v51 = a1[20];
  *(_QWORD*)(a3 + 48) = v50;
  if (v51 == 0) {
    goto LABEL_60;
  }
  v52 = strlen(a2);
  v53 = v51 + 8;
  v54 = *(unsigned __int16*)(v51 + 12);
  v55 = v51 + 8 + 16 * v54;
  v56 = *(_DWORD*)v55;
  if ((signed __int32)*(_DWORD*)(v51 + 8) < (signed __int32)*(_DWORD*)v55) {
    do {
      v58 = (__int64)v56 >> 3;
      if (v52 > v58) {
        v57 = ((unsigned __int8)a2[v52 + ~v58] >> (v56 & 7)) & 1;
      }
      else {
        v57 = 0;
      }
      v54 = *(unsigned __int16*)(v51 + 12 + 16 * v54 + 2 * v57);
      v13 = v56 < (signed __int32)*(_DWORD*)(v53 + 16 * v54);
      v56 = *(_DWORD*)(v53 + 16 * v54);
    } while (v13);
    v55 = v53 + 16 * v54;
  }
  v59 = *(unsigned __int16**)(v55 + 8);
  if (v52 == *v59 && memcmp((__int64)(v59 + 1), (__int64)a2, v52) == 0 &&
      (~(v60 = v55 - v51 - 24) & 0xFFFFFFFF0LL) != 0) {
    v61 = a1[19] + 96LL * (int)(v60 >> 4);
  }
  else {
  LABEL_60:
    v61 = 0;
  }
  *(_QWORD*)(a3 + 56) = v61;
  memory_a6e360(a3, (__int64)a1, (unsigned __int8*)a3);
}

void memory_1944720()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;

  v0 = fw_memory_g_heap_manager_ptr;
  v1 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      8272, 16, 0);
  *(_WORD*)v1 = 0;
  *(_QWORD*)(v1 + 4) = 0;
  *(_QWORD*)(v1 + 16) = 0;
  *(_DWORD*)(v1 + 24) = 0;
  nn_os_InitializeMutex(v1, false, 0);
  *(_QWORD*)(v1 + 40) = 0;
  *(_QWORD*)(v1 + 32) = v1 + 40;
  *(_QWORD*)(v1 + 48) = 0;
  *(_QWORD*)(v1 + 56) = v1 + 56;
  *(_QWORD*)(v1 + 64) = v1 + 56;
  memset(v1 + 72, 0, 0x2008u);
  v2 = GameData_226b920;
  GameData_226b920 = v1;
  if (v2 != 0) {
    if (*(_QWORD*)(v2 + 72) != 0) {
      v3 = *(_QWORD**)(v2 + 64);
      v4 = *(_QWORD**)(*(_QWORD*)(v2 + 56) + 8LL);
      *(_QWORD*)(*v3 + 8LL) = v4;
      *v4 = *v3;
      *(_QWORD*)(v2 + 72) = 0;
      if (v3 != (_QWORD*)(v2 + 56)) {
        do {
          v5 = (_QWORD*)v3[1];
          if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) != 0) {
            v6 = 128;
          }
          else {
            v6 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v6, (__int64)v3);
          v3 = v5;
        } while (v5 != (_QWORD*)(v2 + 56));
      }
    }
    GameHr_1944d10(v2 + 32, *(_QWORD**)(v2 + 40));
    nn_os_FinalizeMutex(v2);
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v0 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v0 + v7, v2);
  }
}

#pragma GCC visibility pop
