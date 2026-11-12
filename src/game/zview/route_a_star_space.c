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
__int64 game_zview_RouteAStarSpace_ConnectNodes_lambda0_Invoke_alt1(
    __int64 result, __int64 a2,
    atomic_uint*
        a3) __asm__("game_zview_RouteAStarSpace_ConnectNodes_lambda0_Invoke");
__int64 game_zview_RouteAStarSpace_CalclateNodeCost_lambda0_Invoke(
    __int64 result, __int64 a2, atomic_uint* a3);
_QWORD* fw_world_SwapCallables_alt1(_QWORD* result,
                                    _QWORD*) __asm__("fw_world_SwapCallables");
__attribute__((swiftcall)) void
game_zview_d16620_alt1(PSEUDO_X8, _QWORD*, float32x4_t*, float32x4_t*, __int64,
                       float) __asm__("game_zview_d16620");
__int64 GameRoutine_d740c0_alt1(__int64, int*) __asm__("GameRoutine_d740c0");
__int64 fw_world_JobContext_Drain_alt1(unsigned int*) __asm__(
    "fw_world_JobContext_Drain");
__int64
fw_world_JobContext_Wait_alt1(__int64 result,
                              unsigned int) __asm__("fw_world_JobContext_Wait");
__int64 fw_world_JobQueue_Submit_alt1(__int64,
                                      int) __asm__("fw_world_JobQueue_Submit");
__int64 nn_os_ClearLightEvent_alt1(__int64) __asm__("nn_os_ClearLightEvent");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
void __attribute__((noreturn))
GameRoutine_d73a90_alt1() __asm__("GameRoutine_d73a90");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 GameHr_d71020(__int64, __int64, int);
__int64 game_zview_d17160_alt1(float, __int64, __int64, float32x4_t*,
                               float32x4_t*) __asm__("game_zview_d17160");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
__int64 memset_alt1(__int64, int, unsigned __int64) __asm__("memset");
void game_zview_RouteAStarSpace_ConnectNodes_lambda0_Invoke(__int64 a1,
                                                            __int64 a2,
                                                            atomic_uint* a3);

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
  __int64* i;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  float v9;
  __int64 v10;
  __int64 v11;
  float32x4_t v12;
  _QWORD* v13;
  float32x4_t v14;
  float v15;
  __int64* v16;
  __int64 v17;
  __int128 v18;
  __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  float v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  unsigned __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  float v47;
  unsigned __int64* v48;
  unsigned __int64 v49;
  _QWORD* v50;
  _QWORD* v51;
  __int64 v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  float v58;
  __int128 v59;
  struct {
    unsigned int v60;
    unsigned int v61;
    float v62;
    float v63;
    float v64;
    float v65;
    int v66;
    int v67;
    int v68;
    int v69;
  } v60_;
  struct {
    __int64 v70;
    int v71;
  } v70_;
  float32x4_t v72;
  float32x4_t v73;
  struct {
    _QWORD v74[4];
    _QWORD* v75;
    char gap200_[76];
    float v76;
    char gap280_[24];
    char v77;
    char gap305_[39];
    __int64 v78;
  } v74_;

  if (*(_DWORD*)(GameData_21d96b8 + 8) == 1) {
    v1 = *(_QWORD*)(result + 88);
    v2 = *(_QWORD*)(result + 96);
    v3 = result;
    for (i = (__int64*)fw_memory_g_heap_manager_ptr; v2 != v1; v2 -= 96) {
      v5 = *(_QWORD*)(v2 - 80);
      if (v5 != 0) {
        *(_QWORD*)(v2 - 72) = v5;
        if (*(_QWORD*)(*i + 200) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*i + v6, v5);
      }
    }
    *(_QWORD*)(v3 + 96) = v1;
    v7 = 0;
    *(_DWORD*)(v3 + 160) = 1086324736;
    v57 = v3 + 8;
    do {
      v8 = 0;
      v9 = (float)((float)((float)(unsigned int)(v7 + 256) *
                           0x1.4000000000000p+2f) +
                   0x1.4000000000000p+1f) +
           -0x1.4000000000000p+10f;
      do {
        v70_.v70 = 0x10100000000LL;
        v70_.v71 = 1;
        v60_.v66 = v7;
        v60_.v67 = v8;
        v60_.v68 = v7;
        v60_.v69 = v8;
        *(float*)&v60_.v60 = (float)((float)((float)(unsigned int)(v7 + 256) *
                                             0x1.4000000000000p+2f) +
                                     0x1.4000000000000p+1f) +
                             -0x1.4000000000000p+10f;
        *(float*)&v60_.v61 = (float)((float)((float)(unsigned int)(v8 + 256) *
                                             0x1.4000000000000p+2f) +
                                     0x1.4000000000000p+1f) +
                             -0x1.4000000000000p+10f;
        v60_.v62 = v9 + -0x1.4000000000000p+1f;
        v60_.v63 = *(float*)&v60_.v61 + -0x1.4000000000000p+1f;
        v60_.v64 = v9 + 0x1.4000000000000p+1f;
        v60_.v65 = *(float*)&v60_.v61 + 0x1.4000000000000p+1f;
        if ((GameRoutine_d740c0_alt1((__int64)&v60_.v60, (int*)&v70_.v70) &
             1) != 0) {
          LANES128(v12).n128_u64[0] = v60_.v60 | 0xC2C8000000000000LL;
          v13 = (_QWORD*)*GameData_212ebd0[0];
          LANES128(v14).n128_u64[0] = v60_.v60 | 0x4348000000000000LL;
          LANES128(v14).n128_u64[1] = v60_.v61;
          v73 = v14;
          LANES128(v12).n128_u64[1] = v60_.v61;
          v72 = v12;
          game_zview_d16620_alt1((void*)((__int64)v74_.v74), v13, &v73, &v72, 1,
                                 0x0.0p+0f);
          v15 = v74_.v76;
          v16 = i;
          if (v74_.v77 == 0) {
            v15 = -0x1.9000000000000p+6f;
          }
          v58 = v15;
          v17 = fw_memory_HeapManager_Allocate_alt1(*i, 4608, 16, 0);
          v18 = COERCE_UNSIGNED_INT(
              (float)((float)((float)(v7 | 0x100u) * 0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f);
          v74_.v78 = v17;
          *((float*)&v18 + 1) = v58;
          *((float*)&v18 + 2) =
              (float)((float)((float)(v8 | 0x100u) * 0x1.4000000000000p+2f) +
                      0x1.4000000000000p+1f) +
              -0x1.4000000000000p+10f;
          v59 = v18;
          nn_os_LockMutex_alt1(v3 + 168);
          v19 = *(_QWORD*)(v3 + 88);
          v20 = *(_QWORD*)(v3 + 96);
          v21 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v20 - v19) >> 5);
          v22 = *(_QWORD*)(v3 + 104);
          if (v20 < v22) {
            *(_DWORD*)v20 = 0;
            v10 = v20 + 96;
            *(_QWORD*)(v20 + 8) = 0;
            *(_QWORD*)(v20 + 16) = 0;
            *(_QWORD*)(v20 + 24) = 0;
            *(_QWORD*)(v20 + 32) = 0;
            *(_DWORD*)(v20 + 48) = 0;
            *(_DWORD*)(v20 + 80) = v21;
            i = v16;
            *(_QWORD*)(v20 + 40) = v57;
            *(_OWORD*)(v20 + 64) = v59;
          }
          else {
            v23 = v21 + 1;
            if (v21 + 1 > 0x2AAAAAAAAAAAAAALL) {
              GameRoutine_d73a90_alt1();
            }
            v24 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v22 - v19) >> 5);
            if (2 * v24 > v23) {
              v23 = 2 * v24;
            }
            if (v24 >= 0x155555555555555LL) {
              v25 = 0x2AAAAAAAAAAAAAALL;
            }
            else {
              v25 = v23;
            }
            if (v25 > 0x2AAAAAAAAAAAAAALL) {
              GameRoutine_60a210_alt1();
            }
            v26 = 96 * v25;
            v27 = fw_memory_HeapManager_Allocate_alt1(*v16, 96 * v25, 16, 0);
            v28 = v27 + v20 - v19;
            v29 = v27;
            *(_DWORD*)v28 = 0;
            *(_QWORD*)(v28 + 8) = 0;
            *(_QWORD*)(v28 + 16) = 0;
            *(_QWORD*)(v28 + 24) = 0;
            *(_QWORD*)(v28 + 32) = 0;
            *(_DWORD*)(v28 + 48) = 0;
            *(_DWORD*)(v28 + 80) = v21;
            *(_QWORD*)(v28 + 40) = v57;
            *(_OWORD*)(v28 + 64) = v59;
            if (v19 == v20) {
              i = v16;
            }
            else {
              v30 = v19;
              v31 = v27;
              do {
                *(_QWORD*)(v31 + 8) = *(_QWORD*)(v30 + 8);
                *(_QWORD*)v31 = *(_QWORD*)v30;
                *(_QWORD*)(v31 + 16) = *(_QWORD*)(v30 + 16);
                *(_QWORD*)(v31 + 24) = *(_QWORD*)(v30 + 24);
                *(_QWORD*)(v31 + 32) = *(_QWORD*)(v30 + 32);
                *(_QWORD*)(v30 + 24) = 0;
                *(_QWORD*)(v30 + 32) = 0;
                *(_QWORD*)(v30 + 16) = 0;
                v32 = *(_QWORD*)(v30 + 40);
                *(_DWORD*)(v31 + 48) = *(_DWORD*)(v30 + 48);
                *(_QWORD*)(v31 + 40) = v32;
                *(_QWORD*)(v31 + 72) = *(_QWORD*)(v30 + 72);
                *(_QWORD*)(v31 + 64) = *(_QWORD*)(v30 + 64);
                LODWORD(v32) = *(_DWORD*)(v30 + 80);
                v30 += 96;
                *(_DWORD*)(v31 + 80) = v32;
                v31 += 96;
              } while (v30 != v20);
              i = v16;
              do {
                v33 = *(_QWORD*)(v19 + 16);
                if (v33 != 0) {
                  *(_QWORD*)(v19 + 24) = v33;
                  v34 = 56;
                  if (*(_QWORD*)(*v16 + 200) != 0) {
                    v34 = 128;
                  }
                  nn_mem_StandardAllocator_Free_alt2(*v16 + v34, v33);
                }
                v19 += 96;
              } while (v19 != v20);
              v19 = *(_QWORD*)(v3 + 88);
            }
            v10 = v28 + 96;
            *(_QWORD*)(v3 + 88) = v29;
            *(_QWORD*)(v3 + 96) = v10;
            *(_QWORD*)(v3 + 104) = v29 + v26;
            if (v19 != 0) {
              v35 = 56;
              if (*(_QWORD*)(*i + 200) != 0) {
                v35 = 128;
              }
              nn_mem_StandardAllocator_Free_alt2(*i + v35, v19);
            }
          }
          *(_QWORD*)(v3 + 96) = v10;
          nn_os_UnlockMutex_alt1(v3 + 168);
          v11 = 56;
          if (*(_QWORD*)(*i + 200) != 0) {
            v11 = 128;
          }
          nn_mem_StandardAllocator_Free_alt2(*i + v11, v74_.v78);
        }
        ++v8;
      } while (v8 != 32);
      ++v7;
    } while (v7 != 32);
    v36 = *(float*)(v3 + 160);
    v38 = *(_QWORD*)(v3 + 88);
    v37 = *(_QWORD*)(v3 + 96);
    v39 = (__int64*)GameData_21323e8[0];
    fw_world_JobContext_Drain_alt1(*(unsigned int**)GameData_21323e8[0]);
    v40 = *v39;
    v41 = *v39 + 32;
    do {
      v42 = *(_DWORD*)(v40 + 8);
      v43 = (v42 + 1) & 0xFFFFFF;
      if (v42 + 1 <= 0) {
        v43 = -(-(v42 + 1) & 0xFFFFFF);
      }
      *(_DWORD*)(v40 + 8) = v43;
      v44 = atomic_load((unsigned __int64*)(v41 + 32LL * (v42 & 0x3F)));
      if (v44 != 0) {
        v42 = -1;
      }
    } while (v42 < 0);
    v45 = v37 - v38;
    v46 = v42 | 0xC0000000;
    v47 = v36 * v36;
    v48 = (unsigned __int64*)(v41 + 32LL * (v42 & 0x3F));
    v49 = 0xAAAAAAAAAAAAAAABLL * (v45 >> 5);
    nn_os_ClearLightEvent_alt1((__int64)(v48 + 1));
    v50 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*i, 80, 16, 0);
    v50[2] = 0;
    v51 = v50;
    v52 = GameData_212e368[0];
    v50[8] = 0;
    *v50 = v52 + 16;
    v50[1] = 0;
    v53 = v48[3];
    v48[3] = (unsigned __int64)v51;
    if (v53 != 0) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v53 + 8LL))(v53);
    }
    atomic_store(v46, v48);
    v51[1] = v40;
    v54 = *i;
    *((_DWORD*)v51 + 4) = v46;
    v55 = fw_memory_HeapManager_Allocate_alt1(v54, 40, 16, 0);
    *(_QWORD*)(v55 + 16) = v49;
    *(_QWORD*)(v55 + 24) = v3;
    *(float*)(v55 + 32) = v47;
    v74_.v75 = (_QWORD*)v55;
    *(_QWORD*)v55 = GameData_1fdd4b0;
    *(_QWORD*)(v55 + 8) = v38;
    fw_world_SwapCallables_alt1(v74_.v74, v51 + 4);
    if (v74_.v75 == v74_.v74) {
      v56 = 32;
    }
    else {
      if (v74_.v75 == nullptr) {
      LABEL_58:
        fw_world_JobQueue_Submit_alt1(*(_QWORD*)(v40 + 16), v46);
        fw_world_JobContext_Wait_alt1(*v39, v46);
        *(_DWORD*)(v3 + 120) = 0;
        *(_BYTE*)(v3 + 136) = 0;
        *(_BYTE*)(v3 + 152) = 0;
        *(_BYTE*)(v3 + 112) = 1;
        *(_WORD*)(v3 + 124) = 257;
        *(_DWORD*)(v3 + 128) = 1;
        *(_BYTE*)(v3 + 132) = 1;
        return RouteAStarSpace_d72de0(v3);
      }
      v56 = 40;
    }
    (*(void (**)(__int64))(*v74_.v75 + v56))((__int64)v74_.v75);
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
  __int64 v7;
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
  unsigned __int64 v23;
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
  unsigned __int64 v44;
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
  v7 = 0;
  v8 = nullptr;
  v9 = 0;
  v10 = *(float*)(a1 + 160) * *(float*)(a1 + 160);
  do {
    v11 = (float32x4_t**)v7;
    if ((float32x4_t**)v7 == v8) {
      goto LABEL_4;
    }
    v12 = (unsigned __int64)v8 - v7 - 8;
    v11 = (float32x4_t**)v7;
    if ((~(_BYTE)v12 & 0x18) != 0) {
      v13 = ((unsigned __int8)((unsigned int)v12 >> 3) + 1) & 3;
      v11 = (float32x4_t**)v7;
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
        v18 = (char*)v8 - v7;
        v19 = ((__int64)v8 - v7) >> 3;
        v20 = v19 + 1;
        if ((unsigned __int64)(v19 + 1) >> 61 != 0) {
        LABEL_91:
          GameRoutine_d73ab0();
        }
        if ((__int64)(v9 - v7) >> 2 > v20) {
          v20 = (__int64)(v9 - v7) >> 2;
        }
        if (v9 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
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
        v23 = (unsigned __int64)v8 - v7;
        v24 = (__int64)&v18[v22 + -8 * v19];
        *(_QWORD*)&v18[v22] = v3;
        v8 = (float32x4_t**)&v18[v22 + 8];
        memcpy_alt1(v24, v7, v23);
        if (v7 != 0) {
          v25 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v25 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v7);
        }
        v7 = v24;
        v5 = a1;
      }
      else {
        *v8++ = v3;
      }
      if ((game_zview_d17160_alt1(0x1.3333340000000p-2f, *GameData_212ebd0[0],
                                  v5 + 120, a2, v3 + 4) &
           1) != 0) {
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
      v31 = (float32x4_t**)v7;
      if ((float32x4_t**)v7 == v8) {
        goto LABEL_52;
      }
      v32 = (unsigned __int64)v8 - v7 - 8;
      v31 = (float32x4_t**)v7;
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
          v39 = (char*)v8 - v7;
          v40 = ((__int64)v8 - v7) >> 3;
          v41 = v40 + 1;
          if ((unsigned __int64)(v40 + 1) >> 61 != 0) {
            goto LABEL_91;
          }
          if ((__int64)(v9 - v7) >> 2 > v41) {
            v41 = (__int64)(v9 - v7) >> 2;
          }
          if (v9 - v7 >= 0x7FFFFFFFFFFFFFF8LL) {
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
          v44 = (unsigned __int64)v8 - v7;
          v37 = (__int64)&v39[v43 + -8 * v40];
          *(_QWORD*)&v39[v43] = v28;
          v8 = (float32x4_t**)&v39[v43 + 8];
          memcpy_alt1(v37, v7, v44);
          if (v7 != 0) {
            v45 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v45 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v7);
          }
          v5 = a1;
        }
        else {
          *v8++ = v28;
          v37 = v7;
        }
        v7 = v37;
        if ((game_zview_d17160_alt1(0x1.3333340000000p-2f, *GameData_212ebd0[0],
                                    v5 + 120, a2, v28 + 4) &
             1) != 0) {
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
    v31 = (float32x4_t**)v7;
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
  if (v7 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v7);
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

void game_zview_RouteAStarSpace_ConnectNodes_lambda0_Invoke(__int64 a1,
                                                            __int64 a2,
                                                            atomic_uint* a3)
{

#pragma clang fp contract(off)
  int v3;
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
  int v19;
  __int64 v20;
  float32x4_t v21;
  float v22;
  __int64 v23;
  char v24;
  float32x4_t** v25;
  float32x4_t* v26;
  float32x4_t v27;
  int8x16_t v28;
  int v29;
  atomic_uint* v30;
  unsigned int v31;
  __int64 v32;

  v3 = *(_DWORD*)(a1 + 16);
  if (v3 >= 1) {
    v5 = (__int64*)fw_memory_g_heap_manager_ptr;
    v30 = a3;
    v29 = *(_DWORD*)(a1 + 16);
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
        v31 = v6;
        v8 = v7 + v6;
        v7 = (int)v7;
        if (v8 >= v3) {
          v8 = v3;
        }
        v32 = v8;
        do {
          v10 = *(_QWORD*)(a1 + 24);
          v11 = v5;
          v12 = *(_QWORD*)(a1 + 8) + 96 * v7;
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
          v19 = v15 - v16;
          v20 = v18;
          if (v19 != 0) {
            memset_alt1(v18, 0, 16LL * (int)v15 - 16 * v14 - 16);
            if (v19 >= 1) {
              v21 = *(float32x4_t*)(v12 + 64);
              v22 = *(float*)(a1 + 32);
              v23 = 0;
              v24 = 0;
              while (1) {
                v25 = (float32x4_t**)(v20 + 8 + 16 * v23);
                v26 = (float32x4_t*)(v13 + 96LL * (int)v14 + 96 + 96 * v23++);
                while (1) {
                  v27 = vsubq_f32(v21, v26[4]);
                  LANES128(v27).n128_u32[1] = 0;
                  v28 = vmulq_f32(v27, v27);
                  LANES128(v28).n128_u64[0] =
                      LANES64_OF(
                          vadd_f32(COERCE_AS(float32x2_t,
                                             LANES128_OF(vextq_s8(v28, v28, 8u))
                                                 .n128_u64[0]),
                                   COERCE_AS(float32x2_t,
                                             LANES128(v28).n128_u64[0])))
                          .n64_u64[0];
                  if (LANES64_OF(
                          vpadd_f32(
                              COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                              COERCE_AS(float32x2_t,
                                        LANES128(v28).n128_u64[0])))
                          .n64_f32[0] < v22) {
                    break;
                  }
                  ++v23;
                  v25 += 2;
                  v26 += 6;
                  if (v23 - (unsigned int)v19 == 1) {
                    if ((v24 & 1) == 0) {
                      goto LABEL_13;
                    }
                  LABEL_12:
                    GameHr_d71020(v10 + 8, v20, v19);
                    goto LABEL_13;
                  }
                }
                v24 = 1;
                *(v25 - 1) = (float32x4_t*)v12;
                *v25 = v26;
                if (v23 == v19) {
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
          nn_mem_StandardAllocator_Free_alt2(*v11 + v9, v20);
          ++v7;
          v5 = v11;
        } while (v7 < v32);
        a3 = v30;
        v3 = v29;
        v6 = v31;
      }
      v6 >>= 1;
      if (v6 <= 1) {
        v6 = 1;
      }
    } while ((int)v7 < v3);
  }
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
