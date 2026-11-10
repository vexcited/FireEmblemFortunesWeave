#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d72de0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 nn_os_FinalizeMutex(_QWORD);
extern __int64 (*game_zview_RouteAStarSpace_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 RouteAStarSpace_Unknown5(_QWORD* a1);
__int64 RouteAStarSpace_Unknown2(__int64 result);
bool RouteAStarSpace_Unknown4(__int64 a1);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_world_JobContext_Drain(_QWORD);
__int64 fw_world_JobContext_Wait(_QWORD, _QWORD);
__int64 fw_world_JobQueue_Submit(_QWORD, _QWORD);
__int64 fw_world_SwapCallables(_QWORD, _QWORD);
__int64 nn_os_ClearLightEvent(_QWORD);
extern __int64 (*GameData_1fdd530[])();
extern __int64 GameData_212e368[4];
extern __int64 GameData_21323e8[4];
__int64 RouteAStarSpace_d72de0(__int64 a1);
_QWORD* GameRoutine_d737a0(_QWORD* result, char*, char*);
_QWORD* StateMoveTo_d42860(_QWORD* result, __int64*);
__attribute__((swiftcall)) void game_zview_d16620(PSEUDO_X8, _QWORD*,
                                                  long double*, long double*,
                                                  __int64, float);
__int64 GameRoutine_d71020(__int64, __int64, int);
__int64 GameRoutine_d740c0(_QWORD, float);
__int64 RouteAStarSpace_d72de0_alt1(_QWORD) __asm__("RouteAStarSpace_d72de0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_d71160(float***, __int64, float*, int);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 nn_os_UnlockMutex(_QWORD);
__n128 nn_os_LockMutex(_QWORD);
bool game_zview_d17160(float, __int64, __int64, float32x4_t*, float32x4_t*);
extern __int64 (*GameData_1fdd4b0[])();
extern __int64* GameData_212ebd0[3];
extern __int64 GameData_21d96b8;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_d73a90(long double);
void __attribute__((noreturn)) GameRoutine_d73ab0();
__int64 game_zview_RouteAStarSpace_ConnectNodes(__int64 result);
float32x4_t* RouteAStarSpace_d72f80(__int64 a1, float32x4_t* a2);
__int64 RouteAStarSpace_Unknown3(__int64 a1, float32x4_t* a2, _QWORD* a3);
__int64 game_zview_RouteAStarSpace_ConnectNodes_lambda0_Invoke(__int64 result,
                                                               __int64 a2,
                                                               atomic_uint* a3);
__int64 game_zview_RouteAStarSpace_CalclateNodeCost_lambda0_Invoke(
    __int64 result, __int64 a2, atomic_uint* a3);

__int64 RouteAStarSpace_Unknown5(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;

  *a1 = game_zview_RouteAStarSpace_vtable;
  nn_os_FinalizeMutex(a1 + 21);
  v2 = a1[11];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = a1[12];
    if (v2 == v4) {
      goto LABEL_11;
    }
    do {
      v5 = *(_QWORD*)(v4 - 80);
      if (v5 != 0) {
        *(_QWORD*)(v4 - 72) = v5;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v5);
      }
      v4 -= 96;
    } while (v4 != v2);
    v7 = a1[11];
    a1[12] = v2;
    v2 = v7;
    if (v7 != 0) {
    LABEL_11:
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v2);
    }
  }
  result = nn_os_FinalizeMutex(a1 + 7);
  v10 = a1[4];
  if (v10 != 0) {
    v11 = *(_QWORD*)v3;
    a1[5] = v10;
    v12 = 128;
    if (*(_QWORD*)(v11 + 200) == 0) {
      v12 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v11 + v12, v10);
  }
  v13 = a1[1];
  if (v13 != 0) {
    v14 = *(_QWORD*)v3;
    a1[2] = v13;
    v15 = 128;
    if (*(_QWORD*)(v14 + 200) == 0) {
      v15 = 56;
    }
    return nn_mem_StandardAllocator_Free(v14 + v15, v13);
  }
  return result;
}

__int64 game_zview_RouteAStarSpace_ConnectNodes(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _QWORD* i;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  float v9;
  __int64 v10;
  __int64 v11;
  long double v12;
  _QWORD* v13;
  long double v14;
  float v15;
  _QWORD* v16;
  __int64 v17;
  __int128 v18;
  __int64 v19;
  long double v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  float v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  int v44;
  int v45;
  unsigned __int64 v46;
  __int64 v47;
  unsigned __int64 v48;
  float v49;
  unsigned __int64* v50;
  unsigned __int64 v51;
  _QWORD* v52;
  _QWORD* v53;
  __int64 v54;
  unsigned __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  float v60;
  __int128 v61;
  unsigned int v62;
  unsigned int v63;
  float v64;
  float v65;
  float v66;
  float v67;
  int v68;
  int v69;
  int v70;
  int v71;
  __int64 v72;
  int v73;
  long double v74;
  long double v75;
  _BYTE v76[32];
  _BYTE* v77;
  float v78;
  char v79;
  __int64 v80;

  if (*(_DWORD*)(GameData_21d96b8 + 8) == 1) {
    v1 = *(_QWORD*)(result + 88);
    v2 = *(_QWORD*)(result + 96);
    v3 = result;
    for (i = (_QWORD*)fw_memory_g_heap_manager_ptr; v2 != v1; v2 -= 96) {
      v5 = *(_QWORD*)(v2 - 80);
      if (v5 != 0) {
        *(_QWORD*)(v2 - 72) = v5;
        if (*(_QWORD*)(*i + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(*i + v6, v5);
      }
    }
    *(_QWORD*)(v3 + 96) = v1;
    v7 = 0;
    *(_DWORD*)(v3 + 160) = 1086324736;
    v59 = v3 + 8;
    do {
      v8 = 0;
      v9 = (float)((float)((float)(unsigned int)(v7 + 256) * 5.0) + 2.5) +
           -0x1.4000000000000p+10;
      do {
        v72 = 0x10100000000LL;
        v73 = 1;
        v68 = v7;
        v69 = v8;
        v70 = v7;
        v71 = v8;
        *(float*)&v62 =
            (float)((float)((float)(unsigned int)(v7 + 256) * 5.0) + 2.5) +
            -0x1.4000000000000p+10;
        *(float*)&v63 =
            (float)((float)((float)(unsigned int)(v8 + 256) * 5.0) + 2.5) +
            -0x1.4000000000000p+10;
        v64 = v9 + -2.5;
        v65 = *(float*)&v63 + -2.5;
        v66 = v9 + 2.5;
        v67 = *(float*)&v63 + 2.5;
        if ((GameRoutine_d740c0(&v62, *(float*)&v63 + 2.5) & 1) != 0) {
          *(_QWORD*)&v12 = v62 | 0xC2C8000000000000LL;
          v13 = (_QWORD*)*GameData_212ebd0[0];
          *(_QWORD*)&v14 = v62 | 0x4348000000000000LL;
          *((_QWORD*)&v14 + 1) = v63;
          v75 = v14;
          *((_QWORD*)&v12 + 1) = v63;
          v74 = v12;
          game_zview_d16620((void*)((__int64)v76), v13, &v75, &v74, 1, 0.0);
          v15 = v78;
          v16 = i;
          if (v79 == 0) {
            v15 = -0x1.9000000000000p+6;
          }
          v60 = v15;
          v17 = fw_memory_HeapManager_Allocate(*i, 4608, 16, 0);
          v18 = COERCE_UNSIGNED_INT(
              (float)((float)((float)(v7 | 0x100u) * 5.0) + 2.5) +
              -0x1.4000000000000p+10);
          v80 = v17;
          *((float*)&v18 + 1) = v60;
          *((float*)&v18 + 2) =
              (float)((float)((float)(v8 | 0x100u) * 5.0) + 2.5) +
              -0x1.4000000000000p+10;
          v61 = v18;
          *(__n128*)&v20 = nn_os_LockMutex(v3 + 168);
          v21 = *(_QWORD*)(v3 + 88);
          v22 = *(_QWORD*)(v3 + 96);
          v23 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v22 - v21) >> 5);
          v24 = *(_QWORD*)(v3 + 104);
          if (v22 < v24) {
            *(_DWORD*)v22 = 0;
            v10 = v22 + 96;
            *(_QWORD*)(v22 + 8) = 0;
            *(_QWORD*)(v22 + 16) = 0;
            *(_QWORD*)(v22 + 24) = 0;
            *(_QWORD*)(v22 + 32) = 0;
            *(_DWORD*)(v22 + 48) = 0;
            *(_DWORD*)(v22 + 80) = v23;
            i = v16;
            *(_QWORD*)(v22 + 40) = v59;
            *(_OWORD*)(v22 + 64) = v61;
          }
          else {
            v25 = v23 + 1;
            if (v23 + 1 > 0x2AAAAAAAAAAAAAALL) {
              GameRoutine_d73a90(v20);
            }
            v26 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v24 - v21) >> 5);
            if (2 * v26 > v25) {
              v25 = 2 * v26;
            }
            if (v26 >= 0x155555555555555LL) {
              v27 = 0x2AAAAAAAAAAAAAALL;
            }
            else {
              v27 = v25;
            }
            if (v27 > 0x2AAAAAAAAAAAAAALL) {
              GameRoutine_60a210(v19);
            }
            v28 = 96 * v27;
            v29 = fw_memory_HeapManager_Allocate(*v16, 96 * v27, 16, 0);
            v30 = v29 + v22 - v21;
            v31 = v29;
            *(_DWORD*)v30 = 0;
            *(_QWORD*)(v30 + 8) = 0;
            *(_QWORD*)(v30 + 16) = 0;
            *(_QWORD*)(v30 + 24) = 0;
            *(_QWORD*)(v30 + 32) = 0;
            *(_DWORD*)(v30 + 48) = 0;
            *(_DWORD*)(v30 + 80) = v23;
            *(_QWORD*)(v30 + 40) = v59;
            *(_OWORD*)(v30 + 64) = v61;
            if (v21 == v22) {
              i = v16;
            }
            else {
              v32 = v21;
              v33 = v29;
              do {
                *(_QWORD*)(v33 + 8) = *(_QWORD*)(v32 + 8);
                *(_QWORD*)v33 = *(_QWORD*)v32;
                *(_QWORD*)(v33 + 16) = *(_QWORD*)(v32 + 16);
                *(_QWORD*)(v33 + 24) = *(_QWORD*)(v32 + 24);
                *(_QWORD*)(v33 + 32) = *(_QWORD*)(v32 + 32);
                *(_QWORD*)(v32 + 24) = 0;
                *(_QWORD*)(v32 + 32) = 0;
                *(_QWORD*)(v32 + 16) = 0;
                v34 = *(_QWORD*)(v32 + 40);
                *(_DWORD*)(v33 + 48) = *(_DWORD*)(v32 + 48);
                *(_QWORD*)(v33 + 40) = v34;
                *(_QWORD*)(v33 + 72) = *(_QWORD*)(v32 + 72);
                *(_QWORD*)(v33 + 64) = *(_QWORD*)(v32 + 64);
                LODWORD(v34) = *(_DWORD*)(v32 + 80);
                v32 += 96;
                *(_DWORD*)(v33 + 80) = v34;
                v33 += 96;
              } while (v32 != v22);
              i = v16;
              do {
                v35 = *(_QWORD*)(v21 + 16);
                if (v35 != 0) {
                  *(_QWORD*)(v21 + 24) = v35;
                  v36 = 56;
                  if (*(_QWORD*)(*v16 + 200LL) != 0) {
                    v36 = 128;
                  }
                  nn_mem_StandardAllocator_Free(*v16 + v36, v35);
                }
                v21 += 96;
              } while (v21 != v22);
              v21 = *(_QWORD*)(v3 + 88);
            }
            v10 = v30 + 96;
            *(_QWORD*)(v3 + 88) = v31;
            *(_QWORD*)(v3 + 96) = v10;
            *(_QWORD*)(v3 + 104) = v31 + v28;
            if (v21 != 0) {
              v37 = 56;
              if (*(_QWORD*)(*i + 200LL) != 0) {
                v37 = 128;
              }
              nn_mem_StandardAllocator_Free(*i + v37, v21);
            }
          }
          *(_QWORD*)(v3 + 96) = v10;
          nn_os_UnlockMutex(v3 + 168);
          v11 = 56;
          if (*(_QWORD*)(*i + 200LL) != 0) {
            v11 = 128;
          }
          nn_mem_StandardAllocator_Free(*i + v11, v80);
        }
        ++v8;
      } while (v8 != 32);
      ++v7;
    } while (v7 != 32);
    v38 = *(float*)(v3 + 160);
    v40 = *(_QWORD*)(v3 + 88);
    v39 = *(_QWORD*)(v3 + 96);
    v41 = (_QWORD*)GameData_21323e8[0];
    fw_world_JobContext_Drain(*(_QWORD*)GameData_21323e8[0]);
    v42 = *v41;
    v43 = *v41 + 32LL;
    do {
      v44 = *(_DWORD*)(v42 + 8);
      v45 = (v44 + 1) & 0xFFFFFF;
      if (v44 + 1 <= 0) {
        v45 = -(-(v44 + 1) & 0xFFFFFF);
      }
      *(_DWORD*)(v42 + 8) = v45;
      v46 = atomic_load((unsigned __int64*)(v43 + 32LL * (v44 & 0x3F)));
      if (v46 != 0) {
        v44 = -1;
      }
    } while (v44 < 0);
    v47 = v39 - v40;
    v48 = v44 | 0xC0000000;
    v49 = v38 * v38;
    v50 = (unsigned __int64*)(v43 + 32LL * (v44 & 0x3F));
    v51 = 0xAAAAAAAAAAAAAAABLL * (v47 >> 5);
    nn_os_ClearLightEvent(v50 + 1);
    v52 = (_QWORD*)fw_memory_HeapManager_Allocate(*i, 80, 16, 0);
    v52[2] = 0;
    v53 = v52;
    v54 = GameData_212e368[0];
    v52[8] = 0;
    *v52 = v54 + 16;
    v52[1] = 0;
    v55 = v50[3];
    v50[3] = (unsigned __int64)v53;
    if (v55 != 0) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v55 + 8LL))(v55);
    }
    atomic_store(v48, v50);
    v53[1] = v42;
    v56 = *i;
    *((_DWORD*)v53 + 4) = v48;
    v57 = fw_memory_HeapManager_Allocate(v56, 40, 16, 0);
    *(_QWORD*)(v57 + 16) = v51;
    *(_QWORD*)(v57 + 24) = v3;
    *(float*)(v57 + 32) = v49;
    v77 = (_BYTE*)v57;
    *(_QWORD*)v57 = GameData_1fdd4b0;
    *(_QWORD*)(v57 + 8) = v40;
    fw_world_SwapCallables(v76, v53 + 4);
    if (v77 == v76) {
      v58 = 32;
    }
    else {
      if (v77 == nullptr) {
      LABEL_58:
        fw_world_JobQueue_Submit(*(_QWORD*)(v42 + 16), v48);
        fw_world_JobContext_Wait(*v41, v48);
        *(_DWORD*)(v3 + 120) = 0;
        *(_BYTE*)(v3 + 136) = 0;
        *(_BYTE*)(v3 + 152) = 0;
        *(_BYTE*)(v3 + 112) = 1;
        *(_WORD*)(v3 + 124) = 257;
        *(_DWORD*)(v3 + 128) = 1;
        *(_BYTE*)(v3 + 132) = 1;
        return RouteAStarSpace_d72de0_alt1(v3);
      }
      v58 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v77 + v58))((__int64)v77);
    goto LABEL_58;
  }
  return result;
}

__int64 RouteAStarSpace_Unknown2(__int64 result)
{
  if (*(_BYTE*)(result + 112) == 1) {
    *(_DWORD*)(result + 120) = 0;
    *(_BYTE*)(result + 136) = 0;
    *(_BYTE*)(result + 152) = 0;
    *(_WORD*)(result + 124) = 257;
    *(_DWORD*)(result + 128) = 1;
    *(_BYTE*)(result + 132) = 1;
    return GameRoutine_d72de0(result);
  }
  return result;
}

__int64 RouteAStarSpace_d72de0(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64* v12;
  unsigned __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  _QWORD v20[4];
  _QWORD* v21;

  v2 = *(_QWORD*)(a1 + 88);
  v1 = *(_QWORD*)(a1 + 96);
  v4 = (_QWORD*)GameData_21323e8[0];
  fw_world_JobContext_Drain(*(_QWORD*)GameData_21323e8[0]);
  v5 = *v4;
  v6 = *v4 + 32LL;
  do {
    v7 = *(_DWORD*)(v5 + 8);
    v8 = (v7 + 1) & 0xFFFFFF;
    if (v7 + 1 <= 0) {
      v8 = -(-(v7 + 1) & 0xFFFFFF);
    }
    *(_DWORD*)(v5 + 8) = v8;
    v9 = atomic_load((unsigned __int64*)(v6 + 32LL * (v7 & 0x3F)));
    if (v9 != 0) {
      v7 = -1;
    }
  } while (v7 < 0);
  v10 = v1 - v2;
  v11 = v7 | 0xC0000000;
  v12 = (unsigned __int64*)(v6 + 32LL * (v7 & 0x3F));
  v13 = 0xAAAAAAAAAAAAAAABLL * (v10 >> 5);
  nn_os_ClearLightEvent(v12 + 1);
  v14 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v14[2] = 0;
  v15 = v14;
  v16 = GameData_212e368[0];
  v14[8] = 0;
  *v14 = v16 + 16;
  v14[1] = 0;
  v17 = v12[3];
  v12[3] = (unsigned __int64)v15;
  if (v17 != 0) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)v17 + 8LL))(v17);
  }
  atomic_store(v11, v12);
  v20[2] = v13;
  v20[3] = a1;
  v15[1] = v5;
  *((_DWORD*)v15 + 4) = v11;
  v20[0] = GameData_1fdd530;
  v20[1] = v2;
  v21 = v20;
  fw_world_SwapCallables(v20, v15 + 4);
  if (v21 == v20) {
    v18 = 32;
    goto LABEL_13;
  }
  if (v21 != nullptr) {
    v18 = 40;
  LABEL_13:
    (*(void (**)(__int64))(*v21 + v18))((__int64)v21);
  }
  fw_world_JobQueue_Submit(*(_QWORD*)(v5 + 16), v11);
  return fw_world_JobContext_Wait(*v4, v11);
}

float32x4_t* RouteAStarSpace_d72f80(__int64 a1, float32x4_t* a2)
{

#pragma clang fp contract(off)
  float32x4_t* v2;
  float32x4_t* v3;
  __int64 v5;
  float32x4_t* v6;
  float32x4_t** v7;
  float32x4_t** v8;
  unsigned __int64 v9;
  float v10;
  float32x4_t** v11;
  unsigned __int64 v12;
  __int64 v13;
  float32x4_t v14;
  int8x16_t v15;
  float v16;
  float32x4_t** v17;
  char* v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  char* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  float32x4_t* v28;
  float32x4_t* v29;
  float v30;
  float32x4_t** v31;
  unsigned __int64 v32;
  __int64 v33;
  float32x4_t v34;
  int8x16_t v35;
  float v36;
  __int64 v37;
  float32x4_t** v38;
  char* v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  char* v44;
  __int64 v45;
  float v46;
  float v47;

  v3 = *(float32x4_t**)(a1 + 88);
  v2 = *(float32x4_t**)(a1 + 96);
  if (v3 == v2) {
    return nullptr;
  }
  v5 = a1;
  v6 = nullptr;
  v7 = nullptr;
  v8 = nullptr;
  v9 = 0;
  v10 = *(float*)(a1 + 160) * *(float*)(a1 + 160);
  do {
    v11 = v7;
    if (v7 == v8) {
      goto LABEL_4;
    }
    v12 = (char*)v8 - (char*)v7 - 8;
    v11 = v7;
    if ((~(_BYTE)v12 & 0x18) != 0) {
      v13 = ((unsigned __int8)((unsigned int)v12 >> 3) + 1) & 3;
      v11 = v7;
      while (*v11 != v3) {
        ++v11;
        if (--v13 == 0) {
          goto LABEL_11;
        }
      }
    LABEL_4:
      if (v11 != v8) {
        goto LABEL_5;
      }
      goto LABEL_12;
    }
  LABEL_11:
    if (v12 >= 0x18) {
      v11 += 2;
      while (1) {
        if (*(v11 - 2) == v3) {
          v11 -= 2;
          goto LABEL_4;
        }
        if (*(v11 - 1) == v3) {
          --v11;
          goto LABEL_4;
        }
        if (*v11 == v3) {
          goto LABEL_4;
        }
        if (v11[1] == v3) {
          break;
        }
        v17 = v11 + 2;
        v11 += 4;
        if (v17 == v8) {
          goto LABEL_12;
        }
      }
      ++v11;
      goto LABEL_4;
    }
  LABEL_12:
    v14 = vsubq_f32(*a2, v3[4]);
    v15 = vmulq_f32(v14, v14);
    LANES128(v15).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v15, v15, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
            .n64_u64[0];
    v16 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
            .n64_f32[0];
    if (v16 < v10) {
      v46 = v16;
      if ((unsigned __int64)v8 >= v9) {
        v18 = (char*)((char*)v8 - (char*)v7);
        v19 = v8 - v7;
        v20 = v19 + 1;
        if ((unsigned __int64)(v19 + 1) >> 61 != 0) {
        LABEL_91:
          GameRoutine_d73ab0();
        }
        if ((__int64)(v9 - (_QWORD)v7) >> 2 > v20) {
          v20 = (__int64)(v9 - (_QWORD)v7) >> 2;
        }
        if (v9 - (unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFF8LL) {
          v21 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v21 = v20;
        }
        if (v21 != 0) {
          if (v21 >> 61 != 0) {
          LABEL_92:
            GameRoutine_60a210_alt1();
          }
          v22 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v21, 16, 0);
        }
        else {
          v22 = 0;
        }
        v9 = v22 + 8 * v21;
        v23 = (char*)((char*)v8 - (char*)v7);
        v24 = (__int64)&v18[v22 + -8 * v19];
        *(_QWORD*)&v18[v22] = v3;
        v8 = (float32x4_t**)&v18[v22 + 8];
        memcpy(v24, v7, v23);
        if (v7 != nullptr) {
          v25 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v25 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
        }
        v7 = (float32x4_t**)v24;
        v5 = a1;
      }
      else {
        *v8++ = v3;
      }
      if (game_zview_d17160(0x1.3333340000000p-2f, *GameData_212ebd0[0],
                            v5 + 120, a2, v3 + 4)) {
        v6 = v3;
        v10 = v46;
      }
    }
  LABEL_5:
    v3 += 6;
  } while (v3 != v2);
  if (v6 == nullptr) {
    v28 = *(float32x4_t**)(v5 + 88);
    v29 = *(float32x4_t**)(v5 + 96);
    if (v28 == v29) {
      v6 = nullptr;
      goto LABEL_43;
    }
    v6 = nullptr;
    v30 = (float)(*(float*)(v5 + 160) * 0x1.4000000000000p+1f) *
          (float)(*(float*)(v5 + 160) * 0x1.4000000000000p+1f);
    while (1) {
      v31 = v7;
      if (v7 == v8) {
        goto LABEL_52;
      }
      v32 = (char*)v8 - (char*)v7 - 8;
      v31 = v7;
      if ((~(_BYTE)v32 & 0x18) != 0) {
        break;
      }
    LABEL_59:
      if (v32 >= 0x18) {
        v31 += 2;
        while (1) {
          if (*(v31 - 2) == v28) {
            v31 -= 2;
            goto LABEL_52;
          }
          if (*(v31 - 1) == v28) {
            --v31;
            goto LABEL_52;
          }
          if (*v31 == v28) {
            goto LABEL_52;
          }
          if (v31[1] == v28) {
            break;
          }
          v38 = v31 + 2;
          v31 += 4;
          if (v38 == v8) {
            goto LABEL_60;
          }
        }
        ++v31;
        goto LABEL_52;
      }
    LABEL_60:
      v34 = vsubq_f32(*a2, v28[4]);
      v35 = vmulq_f32(v34, v34);
      LANES128(v35).n128_u64[0] =
          LANES64_OF(
              vadd_f32(
                  COERCE_AS(float32x2_t,
                            LANES128_OF(vextq_s8(v35, v35, 8u)).n128_u64[0]),
                  COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
              .n64_u64[0];
      v36 = LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v35).n128_u64[0])))
                .n64_f32[0];
      if (v36 < v30) {
        v47 = v36;
        if ((unsigned __int64)v8 >= v9) {
          v39 = (char*)((char*)v8 - (char*)v7);
          v40 = v8 - v7;
          v41 = v40 + 1;
          if ((unsigned __int64)(v40 + 1) >> 61 != 0) {
            goto LABEL_91;
          }
          if ((__int64)(v9 - (_QWORD)v7) >> 2 > v41) {
            v41 = (__int64)(v9 - (_QWORD)v7) >> 2;
          }
          if (v9 - (unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFF8LL) {
            v42 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v42 = v41;
          }
          if (v42 != 0) {
            if (v42 >> 61 != 0) {
              goto LABEL_92;
            }
            v43 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v42, 16, 0);
          }
          else {
            v43 = 0;
          }
          v9 = v43 + 8 * v42;
          v44 = (char*)((char*)v8 - (char*)v7);
          v37 = (__int64)&v39[v43 + -8 * v40];
          *(_QWORD*)&v39[v43] = v28;
          v8 = (float32x4_t**)&v39[v43 + 8];
          memcpy(v37, v7, v44);
          if (v7 != nullptr) {
            v45 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v45 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v45);
          }
          v5 = a1;
        }
        else {
          *v8++ = v28;
          v37 = (__int64)v7;
        }
        v7 = (float32x4_t**)v37;
        if (game_zview_d17160(0x1.3333340000000p-2f, *GameData_212ebd0[0],
                              v5 + 120, a2, v28 + 4)) {
          v6 = v28;
          v30 = v47;
        }
      }
    LABEL_53:
      v28 += 6;
      if (v28 == v29) {
        goto LABEL_43;
      }
    }
    v33 = ((unsigned __int8)((unsigned int)v32 >> 3) + 1) & 3;
    v31 = v7;
    while (*v31 != v28) {
      ++v31;
      if (--v33 == 0) {
        goto LABEL_59;
      }
    }
  LABEL_52:
    if (v31 != v8) {
      goto LABEL_53;
    }
    goto LABEL_60;
  }
LABEL_43:
  if (v7 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v26);
  }
  return v6;
}

bool RouteAStarSpace_Unknown4(__int64 a1)
{
  return *(_QWORD*)(a1 + 96) != *(_QWORD*)(a1 + 88);
}

__int64 RouteAStarSpace_Unknown3(__int64 a1, float32x4_t* a2, _QWORD* a3)
{

#pragma clang fp contract(off)
  __int64* v6;
  _QWORD* v7;
  __int64* v8;
  unsigned int v9;
  float32x4_t* v10;
  float32x4_t* v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  int v15;
  __int64 v16;
  _DWORD* v17;
  __int64 v18;
  _DWORD* v19;
  _DWORD* v20;
  int v21;
  __int128 v22;
  _DWORD* v23;
  float32x4_t* v24;
  float32x4_t* v25;
  float v26;
  float32x4_t v27;
  int8x16_t v28;
  float v29;
  float32x4_t* v30;
  float32x4_t* v31;
  float v32;
  float32x4_t v33;
  int8x16_t v34;
  float v35;

  nn_os_LockMutex(a1 + 168);
  a3[1] = *a3;
  v6 = GameData_212ebd0[0];
  if (!game_zview_d17160(0x1.3333340000000p-2f, *GameData_212ebd0[0],
                         (__int64)&a2[2], a2, a2 + 1)) {
    v10 = RouteAStarSpace_d72f80(a1, a2);
    if (v10 != nullptr) {
      goto LABEL_32;
    }
    v24 = *(float32x4_t**)(a1 + 88);
    v25 = *(float32x4_t**)(a1 + 96);
    if (v24 != v25) {
      v10 = nullptr;
      v26 = 0x1.fffffe0000000p+127f;
      do {
        v27 = vsubq_f32(*a2, v24[4]);
        v28 = vmulq_f32(v27, v27);
        LANES128(v28).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
                .n64_u64[0];
        v29 = LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
                  .n64_f32[0];
        if (v29 < v26) {
          v26 = v29;
          v10 = v24;
        }
        v24 += 6;
      } while (v24 != v25);
      if (v10 != nullptr) {
      LABEL_32:
        v11 = RouteAStarSpace_d72f80(a1, a2 + 1);
        if (v11 != nullptr) {
          goto LABEL_7;
        }
        v30 = *(float32x4_t**)(a1 + 88);
        v31 = *(float32x4_t**)(a1 + 96);
        if (v30 != v31) {
          v11 = nullptr;
          v32 = 0x1.fffffe0000000p+127f;
          do {
            v33 = vsubq_f32(a2[1], v30[4]);
            v34 = vmulq_f32(v33, v33);
            LANES128(v34).n128_u64[0] =
                LANES64_OF(
                    vadd_f32(
                        COERCE_AS(
                            float32x2_t,
                            LANES128_OF(vextq_s8(v34, v34, 8u)).n128_u64[0]),
                        COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
                    .n64_u64[0];
            v35 = LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
                      .n64_f32[0];
            if (v35 < v32) {
              v32 = v35;
              v11 = v30;
            }
            v30 += 6;
          } while (v30 != v31);
          if (v11 != nullptr) {
          LABEL_7:
            if (v10 == v11) {
              StateMoveTo_d42860(a3, (__int64*)a2);
              v8 = (__int64*)&v10[4];
              v7 = a3;
              goto LABEL_3;
            }
            game_d71160((float***)(a1 + 8), (__int64)v10, (float*)v11, 0);
            GameRoutine_d737a0(a3, (char*)*a3, (char*)&a2[1]);
            GameRoutine_d737a0(a3, (char*)*a3, (char*)&v11[4]);
            v12 = LANES128(*(v11)).n128_u64[1];
            if (v12 != 0) {
              do {
                GameRoutine_d737a0(a3, (char*)*a3, (char*)(v12 + 64));
                v12 = *(_QWORD*)(v12 + 8);
              } while (v12 != 0);
              GameRoutine_d737a0(a3, (char*)*a3, (char*)a2);
              v13 = *a3;
              if (a3[1] - *a3 >= 0x21u) {
                v14 = 2;
                v15 = 0;
                do {
                  if (game_zview_d17160(LANES128(a2[4]).n128_f32[2], *v6,
                                        (__int64)&a2[2],
                                        (float32x4_t*)(v13 + 16LL * v15),
                                        (float32x4_t*)(v13 + 16 * v14))) {
                    v17 = (_DWORD*)a3[1];
                    v18 = *a3 + 16LL * v15;
                    if ((_DWORD*)(v18 + 32) == v17) {
                      v16 = v18 + 16;
                      a3[1] = v18 + 16;
                    }
                    else {
                      v19 = (_DWORD*)(*a3 + 16LL * v15 + 20);
                      v20 = v19;
                      do {
                        v21 = v20[4];
                        v20 += 4;
                        *(v19 - 1) = v19[3];
                        *v19 = v21;
                        v22 = *(_OWORD*)(v19 - 1);
                        v23 = v19 + 7;
                        *((_QWORD*)&v22 + 1) = (unsigned int)v19[5];
                        *(_OWORD*)(v19 - 1) = v22;
                        v19 = v20;
                      } while (v23 != v17);
                      v16 = (__int64)(v20 - 1);
                      a3[1] = v20 - 1;
                    }
                  }
                  else {
                    v16 = a3[1];
                    ++v15;
                  }
                  v14 = v15 + 2;
                  v13 = *a3;
                } while (v14 < (v16 - *a3) >> 4);
              }
              goto LABEL_4;
            }
            GameRoutine_d737a0(a3, (char*)*a3, (char*)a2);
          }
        }
      }
    }
    v9 = 0;
    a3[1] = *a3;
    goto LABEL_37;
  }
  v7 = a3;
  v8 = (__int64*)a2;
LABEL_3:
  StateMoveTo_d42860(v7, v8);
  StateMoveTo_d42860(a3, (__int64*)&a2[1]);
LABEL_4:
  v9 = 1;
LABEL_37:
  nn_os_UnlockMutex(a1 + 168);
  return v9;
}

__int64 game_zview_RouteAStarSpace_ConnectNodes_lambda0_Invoke(__int64 result,
                                                               __int64 a2,
                                                               atomic_uint* a3)
{

#pragma clang fp contract(off)
  int v3;
  __int64 v4;
  __int64* v5;
  unsigned int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  int v22;
  __int64 v23;
  float32x4_t v24;
  float v25;
  __int64 v26;
  char v27;
  float32x4_t** v28;
  float32x4_t* v29;
  float32x4_t v30;
  int8x16_t v31;
  int v32;
  atomic_uint* v33;
  unsigned int v34;
  __int64 v35;

  v3 = *(_DWORD*)(result + 16);
  if (v3 >= 1) {
    v4 = result;
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    v33 = a3;
    v32 = *(_DWORD*)(result + 16);
    v6 = v3 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                       *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                      2) &
                     0xFFFFFFFE) +
                    2);
    if ((int)v6 <= 1) {
      v6 = 1;
    }
    do {
      LODWORD(v7) = atomic_fetch_add(a3, v6);
      if ((int)v7 < v3) {
        v34 = v6;
        v8 = v7 + v6;
        v7 = (int)v7;
        if (v8 >= v3) {
          v8 = v3;
        }
        v35 = v8;
        do {
          v10 = *(_QWORD*)(v4 + 24);
          v11 = v5;
          v12 = *(_QWORD*)(v4 + 8) + 96 * v7;
          v13 = *(_QWORD*)(v10 + 88);
          v14 = *(int*)(v12 + 80);
          v15 = 0xAAAAAAAAAAAAAAABLL * ((*(_QWORD*)(v10 + 96) - v13) >> 5);
          v16 = v14 + 1;
          if ((int)v15 < (int)v14 + 1) {
            v17 = -1;
          }
          else {
            v17 = 16LL * ((int)v15 - v16);
          }
          v18 = fw_memory_HeapManager_Allocate_alt1(*v5, v17, 16, 0);
          v22 = v15 - v16;
          v23 = v18;
          if (v22 != 0) {
            memset(v18, 0, 16LL * (int)v15 - 16 * v14 - 16);
            if (v22 >= 1) {
              v24 = *(float32x4_t*)(v12 + 64);
              v25 = *(float*)(v4 + 32);
              v26 = 0;
              v27 = 0;
              while (1) {
                v28 = (float32x4_t**)(v23 + 8 + 16 * v26);
                v29 = (float32x4_t*)(v13 + 96LL * (int)v14 + 96 + 96 * v26++);
                while (1) {
                  v30 = vsubq_f32(v24, v29[4]);
                  LANES128(v30).n128_u32[1] = 0;
                  v31 = vmulq_f32(v30, v30);
                  LANES128(v31).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v31, v31, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v31).n128_u64[0])))
                          .n64_u64[0];
                  if (LANES64_OF(
                          vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v31).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v31).n128_u64[0])))
                          .n64_f32[0] < v25) {
                    break;
                  }
                  ++v26;
                  v28 += 2;
                  v29 += 6;
                  if (v26 - (unsigned int)v22 == 1) {
                    if ((v27 & 1) == 0) {
                      goto LABEL_13;
                    }
                  LABEL_12:
                    GameRoutine_d71020(v10 + 8, v23, v22);
                    goto LABEL_13;
                  }
                }
                v27 = 1;
                *(v28 - 1) = (float32x4_t*)v12;
                *v28 = v29;
                if (v26 == v22) {
                  goto LABEL_12;
                }
              }
            }
          }
        LABEL_13:
          v9 = 128;
          if (*(_QWORD*)(*v11 + 200) == 0) {
            v9 = 56;
          }
          result = nn_mem_StandardAllocator_Free_alt1(*v11 + v9);
          ++v7;
          v5 = v11;
        } while (v7 < v35);
        a3 = v33;
        v3 = v32;
        v6 = v34;
      }
      v6 >>= 1;
      if (v6 <= 1) {
        v6 = 1;
      }
    } while ((int)v7 < v3);
  }
  return result;
}

__int64 game_zview_RouteAStarSpace_CalclateNodeCost_lambda0_Invoke(
    __int64 result, __int64 a2, atomic_uint* a3)
{

#pragma clang fp contract(off)
  int v3;
  __int64 v4;
  __int64* v5;
  unsigned int v6;
  __int64 v7;
  int v8;
  __int64 v9;
  float32x4_t* v10;
  float32x4_t** v11;
  unsigned __int64 v12;
  __int64 v13;
  float32x4_t v14;
  int8x16_t v15;
  __int64 v16;
  float32x4_t* v17;
  int v18;
  atomic_uint* v19;
  unsigned int v20;

  v3 = *(_DWORD*)(result + 16);
  if (v3 >= 1) {
    v4 = result;
    v5 = GameData_212ebd0[0];
    v19 = a3;
    v18 = *(_DWORD*)(result + 16);
    v6 = v3 / (int)((((*(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2088LL) -
                       *(_QWORD*)(*(_QWORD*)GameData_21323e8[0] + 2080LL)) >>
                      2) &
                     0xFFFFFFFE) +
                    2);
    if ((int)v6 <= 1) {
      v6 = 1;
    }
    do {
      LODWORD(v7) = atomic_fetch_add(a3, v6);
      if ((int)v7 < v3) {
        v20 = v6;
        v8 = v7 + v6;
        v7 = (int)v7;
        if (v8 >= v3) {
          v8 = v3;
        }
        v9 = v8;
        do {
          v10 = (float32x4_t*)(*(_QWORD*)(v4 + 8) + 96 * v7);
          v11 = (float32x4_t**)LANES128(v10[1]).n128_u64[0];
          v12 = LANES128(v10[1]).n128_u64[1];
          if (v11 != (float32x4_t**)v12) {
            v13 = *(_QWORD*)(v4 + 24);
            do {
              v17 = *v11;
              result = game_zview_d17160(0x1.3333340000000p-2f, *v5, v13 + 120,
                                         v10 + 4, *v11 + 4);
              if ((result & 1) != 0) {
                v14 = vsubq_f32(v10[4], v17[4]);
                v15 = vmulq_f32(v14, v14);
                LANES128(v15).n128_u64[0] =
                    LANES64_OF(
                        vadd_f32(
                            COERCE_AS(float32x2_t,
                                      LANES128_OF(vextq_s8(v15, v15, 8u))
                                          .n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0])))
                        .n64_u64[0];
                v16 =
                    LANES64_OF(
                        vsqrt_f32(vpadd_f32(
                            COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v15).n128_u64[0]))))
                        .n64_u32[0] |
                    0x100000000LL;
              }
              else {
                v16 = 0;
              }
              *((_DWORD*)v11 + 2) = v16;
              *((_BYTE*)v11 + 12) = BYTE4(v16);
              v11 += 9;
            } while (v11 != (float32x4_t**)v12);
          }
          ++v7;
        } while (v7 < v9);
        a3 = v19;
        v3 = v18;
        v6 = v20;
      }
      v6 >>= 1;
      if (v6 <= 1) {
        v6 = 1;
      }
    } while ((int)v7 < v3);
  }
  return result;
}

#pragma GCC visibility pop
