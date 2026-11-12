#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 GameRoutine_b6adf0(_QWORD);
__int64 GameRoutine_b78b40(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*gfxa_GlobalEnvTask_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
_QWORD* GlobalEnvTask_Destructor(_QWORD* result);
_QWORD* CloudSetting_Destructor(_QWORD* result);
__attribute__((swiftcall)) void GameRoutine_b34420(PSEUDO_X8, _QWORD*, __int64,
                                                   unsigned __int64, __int64,
                                                   unsigned __int64, __int64);
__int64* GameRoutine_b3f6c0(_QWORD*, __int64);
__int64* GameRoutine_b3f800(_QWORD*, __int64);
__int64 GameRoutine_6040f0_alt1(__int64) __asm__("GameRoutine_6040f0");
__int64 GameRoutine_b3a120(__int64 result, __int64, __int64*, __int64, char,
                           char);
__int64 GameRoutine_b77550(__int64, _QWORD*, __int64);
__int64 GameRoutine_b78660(__int64, __int64);
__int64 ResourceBuilder_b6adf0(_QWORD*);
__int64 ResourceBuilder_b78b40(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 gfxa_TaskIBL_Worker_Worker(__int64*, __int64, int);
__int64 gfxa_TaskSkyCloud_Updater_Updater(__int64*, __int64);
__int64 gfxa_b6a300(__int64, _QWORD*, __int64*);
__int64 gfxa_b77270(__int64, __int64, __int64*);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN** GameData_212e738;
extern _UNKNOWN GameData_1fc4f80;
extern _UNKNOWN GameData_1fc4fd0;
extern __int64* GameData_212e548[27];
extern __int64* GameData_212e560[24];
extern __int64* GameData_212e568[23];
extern __int64* GameData_212e570[22];
extern __int64* GameData_212e578[21];
extern __int64* GameData_212e590[18];
extern __int64 GameData_212e520[4];
extern __int64 GameData_212e528[3];
extern __int64 GameData_212e530[2];
void __attribute__((noreturn)) GameRoutine_a9fd80();
void __attribute__((noreturn)) GameRoutine_aa0e00();
void __attribute__((noreturn)) GameRoutine_abae00();
void __attribute__((noreturn)) GameRoutine_abc340();
__int64 GlobalEnvTask_b37340_alt1(__int64 a1, __int64 a2,
                                  _QWORD* a3) __asm__("GlobalEnvTask_b37340");
__int64 GlobalEnvTask_Unknown3(__int64 result, _QWORD* a2);
__int64
gfxa_TaskIBL_Worker_Worker_alt1(_QWORD*, __int64,
                                int) __asm__("gfxa_TaskIBL_Worker_Worker");
__int64 gfxa_TaskSkyHDRI_Updater_Updater(__int64, __int64);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void gfxa_b6a300_alt1(__int64, _QWORD*, __int64*) __asm__("gfxa_b6a300");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void GlobalEnvTask_b37340(__int64 a1, __int64 a2, _QWORD* a3);

void GlobalEnvTask_b37340(__int64 a1, __int64 a2, _QWORD* a3)
{
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
  _QWORD* v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  int v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  int v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  _QWORD* v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  _QWORD* v52;
  __int64 v53;
  __int64 v54;
  _QWORD* v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  char v59;
  __int64 v60;
  int v61;
  struct {
    __int64 v62;
    int v63;
  } v62_;

  v3 = a2;
  *(_QWORD*)a1 = gfxa_GlobalEnvTask_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  *(_QWORD*)(a1 + 16) = *a3;
  v5 = a3[1];
  *(_QWORD*)(a1 + 24) = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    v3 = *(_QWORD*)(a1 + 8);
  }
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 120) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_QWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 148) = 0;
  *(_QWORD*)(a1 + 156) = 0;
  *(_QWORD*)(a1 + 128) = 0x100000005LL;
  *(_QWORD*)(a1 + 136) = 0;
  *(_DWORD*)(a1 + 143) = 0;
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_DWORD*)(a1 + 164) = 0;
  *(_DWORD*)(a1 + 168) = -1;
  *(_QWORD*)(a1 + 176) = 0;
  v8 = fw_memory_HeapManager_Allocate(v7, 384, 16, 0);
  gfxa_TaskSkyHDRI_Updater_Updater(v8, v3);
  v9 = *(_QWORD*)(a1 + 96);
  *(_QWORD*)(a1 + 96) = v8;
  if (v9 != 0) {
    GameRoutine_6040f0_alt1(v9 + 200);
    v10 = *(_QWORD*)(v9 + 336);
    *(_QWORD*)(v9 + 336) = 0;
    if (v10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v10 + 8LL))(v10);
    }
    v11 = *(_QWORD*)(v9 + 328);
    *(_QWORD*)(v9 + 328) = 0;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    }
    GameRoutine_604050(v9 + 200);
    ResourceBuilder_b78b40(v9 + 8);
    v12 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v6 + v12, v9);
  }
  v13 = *(_QWORD*)(a1 + 8);
  v14 = fw_memory_HeapManager_Allocate(*v6, 384, 16, 0);
  gfxa_TaskSkyHDRI_Updater_Updater(v14, v13);
  v15 = *(_QWORD*)(a1 + 104);
  *(_QWORD*)(a1 + 104) = v14;
  if (v15 != 0) {
    GameRoutine_6040f0_alt1(v15 + 200);
    v16 = *(_QWORD*)(v15 + 336);
    *(_QWORD*)(v15 + 336) = 0;
    if (v16 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
    }
    v17 = *(_QWORD*)(v15 + 328);
    *(_QWORD*)(v15 + 328) = 0;
    if (v17 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 8LL))(v17);
    }
    GameRoutine_604050(v15 + 200);
    ResourceBuilder_b78b40(v15 + 8);
    v18 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v6 + v18, v15);
  }
  v19 = *(_QWORD*)(a1 + 8);
  v20 = fw_memory_HeapManager_Allocate(*v6, 384, 16, 0);
  gfxa_TaskSkyHDRI_Updater_Updater(v20, v19);
  v21 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 112) = v20;
  if (v21 != 0) {
    GameRoutine_6040f0_alt1(v21 + 200);
    v22 = *(_QWORD*)(v21 + 336);
    *(_QWORD*)(v21 + 336) = 0;
    if (v22 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 8LL))(v22);
    }
    v23 = *(_QWORD*)(v21 + 328);
    *(_QWORD*)(v21 + 328) = 0;
    if (v23 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v23 + 8LL))(v23);
    }
    GameRoutine_604050(v21 + 200);
    ResourceBuilder_b78b40(v21 + 8);
    v24 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v6 + v24, v21);
  }
  v25 = *(_QWORD*)(a1 + 8);
  v26 = (__int64*)fw_memory_HeapManager_Allocate(*v6, 304, 16, 0);
  gfxa_TaskSkyCloud_Updater_Updater(v26, v25);
  v27 = *(_QWORD**)(a1 + 120);
  *(_QWORD*)(a1 + 120) = v26;
  if (v27 != nullptr) {
    GameRoutine_6040f0_alt1((__int64)(v27 + 3));
    v28 = v27[20];
    v27[20] = 0;
    if (v28 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v28 + 8LL))(v28);
    }
    v29 = v27[19];
    v27[19] = 0;
    if (v29 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v29 + 8LL))(v29);
    }
    GameRoutine_604050(v27 + 3);
    v30 = v27[2];
    if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
      std___1___shared_weak_count___release_weak_alt1(v30);
    }
    v31 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v6 + v31, (__int64)v27);
  }
  GameRoutine_b34420((void*)((__int64)&v62_.v62),
                     *(_QWORD**)(*(_QWORD*)(a1 + 8) + 13424LL),
                     (__int64)"Graphics/Textures/common_default", 0x20u,
                     (__int64)"Cmn_Default_LSPV_BC", 0x13u, 0);
  v32 = *v6;
  v33 = *(_QWORD**)(a1 + 8);
  v61 = 32;
  v59 = 1;
  *(_QWORD*)(a1 + 160) = v62_.v62;
  *(_DWORD*)(a1 + 168) = v62_.v63;
  v34 = *(_DWORD*)(a1 + 128);
  LODWORD(v58) = 1;
  HIDWORD(v58) = v34;
  v60 = 0x8000000080LL;
  v35 = fw_memory_HeapManager_Allocate(v32, 136, 16, 0);
  gfxa_b6a300_alt1(v35, v33, &v58);
  v36 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 32, 16, 0);
  v37 = *(_QWORD*)(a1 + 40);
  v36[2] = 0;
  v36[3] = v35;
  *(_QWORD*)(a1 + 32) = v35;
  *(_QWORD*)(a1 + 40) = v36;
  *v36 = &GameData_1fc4f80;
  v36[1] = 0;
  if (v37 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v37 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v37 + 16LL))(v37);
    std___1___shared_weak_count___release_weak_alt1(v37);
  }
  v38 = *(_DWORD*)(a1 + 132);
  v39 = *v6;
  v40 = *(_QWORD**)(a1 + 8);
  v59 = 0;
  v61 = 32;
  LODWORD(v58) = 1;
  HIDWORD(v58) = v38;
  v60 = 0x2000000100LL;
  v41 = fw_memory_HeapManager_Allocate(v39, 136, 16, 0);
  gfxa_b6a300_alt1(v41, v40, &v58);
  v42 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 32, 16, 0);
  v43 = *(_QWORD*)(a1 + 56);
  *v42 = &GameData_1fc4f80;
  v42[1] = 0;
  v42[2] = 0;
  v42[3] = v41;
  *(_QWORD*)(a1 + 48) = v41;
  *(_QWORD*)(a1 + 56) = v42;
  if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
    std___1___shared_weak_count___release_weak_alt1(v43);
  }
  v44 = *v6;
  v45 = *(_QWORD**)(a1 + 8);
  v59 = 0;
  v58 = 0x300000001LL;
  v60 = 0x2000000020LL;
  v61 = 32;
  v46 = fw_memory_HeapManager_Allocate(v44, 136, 16, 0);
  gfxa_b6a300_alt1(v46, v45, &v58);
  v47 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 32, 16, 0);
  v48 = *(_QWORD*)(a1 + 72);
  *v47 = &GameData_1fc4f80;
  v47[1] = 0;
  v47[2] = 0;
  v47[3] = v46;
  *(_QWORD*)(a1 + 64) = v46;
  *(_QWORD*)(a1 + 72) = v47;
  if (v48 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
    std___1___shared_weak_count___release_weak_alt1(v48);
  }
  v49 = *v6;
  v50 = *(_QWORD*)(a1 + 8);
  v58 = 0x40000000800LL;
  v51 = fw_memory_HeapManager_Allocate(v49, 32, 16, 0);
  gfxa_b77270(v51, v50, &v58);
  v52 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 32, 16, 0);
  v53 = *(_QWORD*)(a1 + 88);
  v52[2] = 0;
  v52[3] = v51;
  *(_QWORD*)(a1 + 80) = v51;
  *(_QWORD*)(a1 + 88) = v52;
  *v52 = &GameData_1fc4fd0;
  v52[1] = 0;
  if (v53 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v53 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v53 + 16LL))(v53);
    std___1___shared_weak_count___release_weak_alt1(v53);
  }
  v54 = *(_QWORD*)(a1 + 8);
  v55 = (_QWORD*)fw_memory_HeapManager_Allocate(*v6, 184, 16, 0);
  gfxa_TaskIBL_Worker_Worker_alt1(v55, v54, 2);
  v56 = *(_QWORD**)(a1 + 152);
  *(_QWORD*)(a1 + 152) = v55;
  if (v56 != nullptr) {
    ResourceBuilder_b6adf0(v56);
    v57 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v57 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*v6 + v57, (__int64)v56);
  }
}

_QWORD* GlobalEnvTask_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v1 = result[19];
  result[19] = 0;
  v2 = result;
  *result = gfxa_GlobalEnvTask_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    GameRoutine_b6adf0(v1);
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v4 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v4, v1);
  }
  v5 = (_QWORD*)v2[15];
  v2[15] = 0;
  if (v5 != nullptr) {
    GameRoutine_6040f0(v5 + 3, game_g_frame_clock + 568);
    v6 = v5[20];
    v5[20] = 0;
    if (v6 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
    }
    v7 = v5[19];
    v5[19] = 0;
    if (v7 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v7 + 8LL))(v7);
    }
    GameRoutine_604050(v5 + 3);
    v8 = v5[2];
    if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
      std___1___shared_weak_count___release_weak(v8);
    }
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v9 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, v5);
  }
  v10 = v2[14];
  v2[14] = 0;
  if (v10 != 0) {
    GameRoutine_6040f0(v10 + 200, game_g_frame_clock + 568);
    v11 = *(_QWORD*)(v10 + 336);
    *(_QWORD*)(v10 + 336) = 0;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 8LL))(v11);
    }
    v12 = *(_QWORD*)(v10 + 328);
    *(_QWORD*)(v10 + 328) = 0;
    if (v12 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 8LL))(v12);
    }
    GameRoutine_604050(v10 + 200);
    GameRoutine_b78b40(v10 + 8);
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v13 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13, v10);
  }
  v14 = v2[13];
  v2[13] = 0;
  if (v14 != 0) {
    GameRoutine_6040f0(v14 + 200, game_g_frame_clock + 568);
    v15 = *(_QWORD*)(v14 + 336);
    *(_QWORD*)(v14 + 336) = 0;
    if (v15 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 8LL))(v15);
    }
    v16 = *(_QWORD*)(v14 + 328);
    *(_QWORD*)(v14 + 328) = 0;
    if (v16 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 8LL))(v16);
    }
    GameRoutine_604050(v14 + 200);
    GameRoutine_b78b40(v14 + 8);
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v17 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v17, v14);
  }
  v18 = v2[12];
  v2[12] = 0;
  if (v18 != 0) {
    GameRoutine_6040f0(v18 + 200, game_g_frame_clock + 568);
    v19 = *(_QWORD*)(v18 + 336);
    *(_QWORD*)(v18 + 336) = 0;
    if (v19 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 8LL))(v19);
    }
    v20 = *(_QWORD*)(v18 + 328);
    *(_QWORD*)(v18 + 328) = 0;
    if (v20 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v20 + 8LL))(v20);
    }
    GameRoutine_604050(v18 + 200);
    GameRoutine_b78b40(v18 + 8);
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v21 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v21, v18);
  }
  v22 = v2[11];
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v22);
  }
  v23 = v2[9];
  if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v23);
  }
  v24 = v2[7];
  if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v24);
  }
  v25 = v2[5];
  if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v25);
    v26 = v2[3];
    if (v26 == 0) {
      return result;
    }
  }
  else {
    v26 = v2[3];
    if (v26 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v26);
  }
  return result;
}

__int64 GlobalEnvTask_Unknown3(__int64 result, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v6;
  int v7;
  __int64 v9;
  int v10;
  unsigned int v11;
  __int64 v12;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  char v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  char v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  int v55;
  char v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  int v64;
  char v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  int v73;
  char v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  int v82;
  char v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  int v91;
  char v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  int v112;
  char v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  __int64 v131;
  __int64 v132;
  int v133;
  char v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int64 v138;
  __int64 v139;
  __int64 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64 v146;
  __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  __int64 v152;
  __int64 v153;
  int v154;
  char v155;
  __int64 v156;
  __int64 v157;
  __int16 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  __int64 v163;
  __int64 v164;
  __int64 v165;
  __int64 v166;
  __int64 v167;
  __int64 v168;
  __int64 v169;
  __int64 v170;
  int v171;
  char v172;
  __int64 v173;
  __int64 v174;
  __int64 v175;
  __int64 v176;
  __int64 v177;
  __int64 v178;
  __int64 v179;
  int v180;
  char v181;
  __int64 v182;
  __int64 v183;
  __int64 v184;
  __int64 v185;
  __int64 v186;
  __int64 v187;
  __int64 v188;
  int v189;
  char v190;
  __int64 v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  __int64 v196;
  __int64 v197;
  int v198;
  char v199;
  __int64 v200;
  __int64 v201;
  __int64 v202;
  __int64 v203;
  __int64 v204;
  __int64 v205;
  __int64 v206;
  int v207;
  char v208;
  __int64 v209;
  __int64 v210;
  __int64 v211;
  __int64 v212;
  __int64 v213;
  __int64 v214;
  __int64 v215;
  int v216;
  char v217;
  __int64 v218;
  __int64 v219;
  __int64 v220;
  __int64 v221;
  __int64 v222;
  __int64 v223;
  __int64 v224;
  int v225;
  char v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  __int64 v230;
  __int64 v231;
  __int64 v232;
  __int64 v233;
  int v234;
  char v235;
  __int64 v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  __int64 v240;
  __int64 v241;
  __int64 v242;
  int v243;
  char v244;
  __int64 v245;
  __int64 v246;
  __int64 v247;
  __int64 v248;
  __int64 v249;
  __int64 v250;
  __int64 v251;
  int v252;
  char v253;
  __int64 v254;
  __int64 v255;
  __int64 v256;
  __int64 v257;
  __int64 v258;
  __int64 v259;
  __int64 v260;
  int v261;
  char v262;
  __int64 v263;
  __int64 v264;
  __int64 v265;
  __int64 v266;
  __int64 v267;
  __int64 v268;
  __int64 v269;
  int v270;
  __int64 v271;
  __int64* v272;
  int8x16_t v273;
  unsigned int v274;
  __int64 v275;
  __int64 v276;
  __int64** v277;
  __int64 v278;
  __int128 v279;
  __int64 v280;
  unsigned int v281;
  __int64 v282;
  int v283;
  int v284;
  __int64 v285;
  int v286;
  int v287;
  __int64 v288;
  char v289;
  __int64 v290;
  __int64 v291;
  int v292;
  __int64 (**v293)(__int64, __int64);
  __int64 v294;
  __int64 v295;
  __int64 v296;
  unsigned int v297;
  __int64 v298;
  unsigned int v299;
  __int64* v300;
  __int64 v301;
  __int64 v302;
  __int64 v303;
  __int64 v304;
  __int64 v305;
  unsigned int v306;
  __int64 v307;
  int v308;
  __int64 v309;
  unsigned int v310;
  __int64 v311;
  unsigned int v312;
  __int64 v313;
  __int64 v314;
  __int64 v315;
  __int64 v316;
  __int64 v317;
  __int64 v318;
  unsigned int v319;
  __int64 v320;
  __int64 v321;
  unsigned int v322;
  __int64 v323;
  unsigned int v324;
  __int64 v325;
  __int64 v326;
  __int64 v327;
  __int64 v328;
  __int64 v329;
  __int64 v330;
  unsigned int v331;
  __int64 v332;
  __int64 v333;
  unsigned int v334;
  __int64 v335;
  unsigned int v336;
  __int64 v337;
  __int64 v338;
  __int64 v339;
  __int64 v340;
  __int64 v341;
  __int64 v342;
  unsigned int v343;
  __int64 v344;
  __int64 v345;
  unsigned int v346;
  __int64 v347;
  unsigned int v348;
  __int64 v349;
  __int64 v350;
  __int64 v351;
  __int64 v352;
  __int64 v353;
  __int64 v354;
  unsigned int v355;
  __int64 v356;
  __int64 v357;
  unsigned int v358;
  __int64 v359;
  unsigned int v360;
  __int64 v361;
  __int64 v362;
  __int64 v363;
  __int64 v364;
  __int64 v365;
  __int64 v366;
  unsigned int v367;
  __int64 v368;
  __int64 v369;
  __int64 v370;
  __int64* v371;
  __int64 v372[2];
  __int64 v373[2];
  __int64* v374;
  __int64 v375;
  __int64 v376;
  unsigned __int64 v377;
  __int64 v378;
  __int64 v379;
  __int64 v380;
  __int64 v381;
  __int64 v382[3];
  char v383;
  __int64 v384;
  __int64 v385;
  __int64 v386;
  __int64 v387;
  int v388;
  __int64 v389;
  __int64 v390[3];
  char v391;
  __int64 v392;
  __int64 v393;
  __int64 v394;
  __int64 v395;
  int v396;
  __int64 v397;
  __int64 v398[3];
  char v399;
  __int64 v400;
  __int64 v401;
  __int64 v402;
  __int64 v403;
  int v404;
  __int64 v405;
  __int64 v406[3];
  char v407;
  __int64 v408;
  __int64 v409;
  __int64 v410;
  __int64 v411;
  int v412;
  __int64 v413;
  __int64 v414[3];
  char v415;
  __int64 v416;
  __int64 v417;
  __int64 v418;
  __int64 v419;
  int v420;
  __int64 v421;
  __int64 v422[3];
  char v423;
  __int64 v424;
  __int64 v425;
  __int64 v426;
  __int64 v427;
  int v428;
  __int64 v429;
  __int64 v430[3];
  char v431;
  __int64 v432;
  __int64 v433;
  __int64 v434;
  __int64 v435;
  int v436;
  __int64* v437;
  __int64 v438[3];
  char v439;
  __int64 v440;
  __int64 v441;
  __int64 v442;
  __int64 v443;
  __int64 v444;
  __int64 v445;
  __int64 v446;
  __int64 v447;
  __int64 v448;
  __int64 v449;
  __int64 v450[3];
  char v451;
  __int64 v452;
  __int64 v453;
  __int64 v454;
  __int64 v455;
  int v456;
  __int64* v457;
  __int64 v458[3];
  char v459;
  __int64 v460;
  __int64 v461;
  __int64 v462;
  __int64 v463;
  __int64 v464;
  __int64 v465;
  __int64 v466;
  __int64 v467;
  __int64 v468;
  __int64 v469;
  __int64 v470[3];
  char v471;
  __int64 v472;
  __int64 v473;
  __int64 v474;
  __int64 v475;
  int v476;
  __int64* v477;
  __int64 v478[3];
  char v479;
  __int64 v480;
  __int64 v481;
  __int64 v482;
  __int64 v483;
  __int64 v484;
  __int64 v485;
  __int64 v486;
  __int64 v487;
  __int64 v488;
  __int64 v489;
  __int64 v490[3];
  char v491;
  __int64 v492;
  __int64 v493;
  __int64 v494;
  __int64 v495;
  int v496;
  __int64* v497;
  __int64 v498[3];
  char v499;
  __int16 v500;
  __int64 v501;
  __int64 v502;
  __int64 v503;
  char v504;
  __int64 v505;
  __int64 v506[3];
  char v507;
  __int64 v508;
  __int64 v509;
  __int64 v510;
  __int64 v511;
  int v512;
  __int64 v513;
  __int64 v514[3];
  char v515;
  __int64 v516;
  __int64 v517;
  __int64 v518;
  __int64 v519;
  int v520;
  __int64 v521;
  __int64 v522[3];
  char v523;
  __int64 v524;
  __int64 v525;
  __int64 v526;
  __int64 v527;
  int v528;
  __int64 v529;
  __int64 v530[3];
  char v531;
  __int64 v532;
  __int64 v533;
  __int64 v534;
  __int64 v535;
  int v536;
  __int64 v537;
  __int64 v538[3];
  char v539;
  __int64 v540;
  __int64 v541;
  __int64 v542;
  __int64 v543;
  int v544;
  __int64 v545;
  __int64 v546[3];
  char v547;
  __int64 v548;
  __int64 v549;
  __int64 v550;
  __int64 v551;
  int v552;
  __int64 v553;
  __int64 v554[3];
  char v555;
  __int64 v556;
  __int64 v557;
  __int64 v558;
  __int64 v559;
  int v560;
  __int64 v561;
  __int64 v562[3];
  char v563;
  __int64 v564;
  __int64 v565;
  __int64 v566;
  __int64 v567;
  int v568;
  __int64 v569;
  __int64 v570[3];
  char v571;
  __int64 v572;
  __int64 v573;
  __int64 v574;
  __int64 v575;
  int v576;
  __int64 v577;
  __int64 v578[3];
  char v579;
  __int64 v580;
  __int64 v581;
  __int64 v582;
  __int64 v583;
  int v584;
  __int64 v585;
  __int64 v586[3];
  char v587;
  __int64 v588;
  __int64 v589;
  __int64 v590;
  __int64 v591;
  int v592;
  __int64 v593;
  __int64 v594[3];
  char v595;
  __int64 v596;
  __int64 v597;
  __int64 v598;
  __int64 v599;
  int v600;

  v306 = COERCE_AS(__typeof__(v306),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v319 = COERCE_AS(__typeof__(v319),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v331 = COERCE_AS(__typeof__(v331),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v343 = COERCE_AS(__typeof__(v343),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v355 = COERCE_AS(__typeof__(v355),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v367 = COERCE_AS(__typeof__(v367),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = *(_QWORD*)(result + 16);
  v3 = result;
  if ((*(_BYTE*)(v2 + 48) & 1) != 0) {
    v4 = *(_QWORD*)(v2 + 288);
    v6 = *(__int64**)(v4 + 528);
    v7 = *(_DWORD*)(v4 + 536);
    if ((*(_BYTE*)(result + 146) & 1) == 0 &&
        (*(_BYTE*)(result + 145) & 1) == 0) {
      goto LABEL_211;
    }
    if (v6 == nullptr || v7 == -1) {
      goto LABEL_211;
    }
    if (*(_BYTE*)(result + 146) != 0) {
      v9 = 1;
    }
    else {
      v11 = *(_DWORD*)(result + 176);
      if (v11 != 0) {
        v12 = *(_QWORD*)(result + 120);
        if (*(_QWORD*)(v12 + 280) != 0 && *(_DWORD*)(v12 + 288) != -1) {
          v281 = *(_DWORD*)(v3 + 180);
          if (v281 != 0) {
          LABEL_209:
            v282 = *(_QWORD*)(v3 + 80);
            v374 = v6;
            LODWORD(v375) = v7;
            v377 = __PAIR64__(v11, v281);
            v376 = v282;
            result = GameRoutine_b77550(v12, a2, (__int64)&v374),
            v306 = COERCE_AS(__typeof__(v306),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v319 = COERCE_AS(__typeof__(v319),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v331 = COERCE_AS(__typeof__(v331),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v343 = COERCE_AS(__typeof__(v343),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v355 = COERCE_AS(__typeof__(v355),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v367 = COERCE_AS(__typeof__(v367),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            v283 = *(_DWORD*)(v3 + 176) * *(_DWORD*)(v3 + 176);
            v284 = *(_DWORD*)(v3 + 180) + 1;
            *(_DWORD*)(v3 + 180) = v284;
            if (v284 >= v283) {
              v285 = *(_QWORD*)(v3 + 80);
              *(_WORD*)(v3 + 145) = 0;
              *(_QWORD*)(v3 + 176) = 0;
              *(_BYTE*)(v285 + 24) ^= 1u;
              *(_BYTE*)(v285 + 25) = 1;
            }
          LABEL_211:
            if ((*(_BYTE*)(v3 + 144) & 1) != 0 ||
                (v287 = *(_DWORD*)(v3 + 136), v286 = *(_DWORD*)(v3 + 140),
                 v287 >= 1) &&
                    v287 >= v286) {
              v288 = *(_QWORD*)(v3 + 40);
              v374 = *(__int64**)(v3 + 32);
              v375 = v288;
              if (v288 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v288 + 8),
                                          1u, memory_order_relaxed);
                result = GameRoutine_b3a120(v3, (__int64)a2, (__int64*)&v374,
                                            *(_QWORD*)(v3 + 96), 0, 0),
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                if (atomic_fetch_add((atomic_ullong* volatile)(v288 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  (*(void (**)(__int64))(*(_QWORD*)v288 + 16LL))(v288),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  result = std___1___shared_weak_count___release_weak(v288),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
              }
              else {
                result = GameRoutine_b3a120(v3, (__int64)a2, (__int64*)&v374,
                                            *(_QWORD*)(v3 + 96), 0, 0),
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              v289 = *(_BYTE*)(v3 + 144);
              *(_DWORD*)(v3 + 136) = 0;
              if ((v289 & 1) == 0) {
                goto LABEL_230;
              }
            }
            else if (v286 < 1) {
            LABEL_230:
              v292 = *(_DWORD*)(v3 + 148);
              *(_BYTE*)(v3 + 144) = 0;
              if (v292 >= 1) {
                v293 = (__int64 (**)(__int64, __int64))GameData_212e738,
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                ((void (*)(__int64, __int64))*GameData_212e738)(*a2 + 8LL, 17),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v294 = *(_QWORD*)(v3 + 32);
                if (*(_BYTE*)(v294 + 8) == 1) {
                  v295 = *(int*)(v294 + 128);
                  v296 = *(_QWORD*)(*(_QWORD*)(v294 + 32) + 8 * v295);
                  v297 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(
                      *(_QWORD*)v296 + 72LL))(v296, 0, 0),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v298 = *(_QWORD*)(v3 + 32);
                  v299 = v297;
                  v300 = *(__int64**)(v298 + 104);
                  v301 = *v300;
                  v302 = v300[1];
                  v303 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v298 + 24) +
                                                  40LL))(*(_QWORD*)(v298 + 24)),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v304 = *(_QWORD*)(v3 + 152);
                  v305 = v303;
                  v307 = v306;
                  v308 = *(_DWORD*)(*(_QWORD*)(v3 + 32) + 20LL);
                  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 +
                                                         200LL))(
                      *a2, 8, *(_QWORD*)(*(_QWORD*)(v304 + 8) + 144LL)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64,
                               _QWORD))(*(_QWORD*)*a2 + 248LL))(
                      *a2, 8, 0, v305, v307, *(unsigned int*)(v304 + 176)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                      *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, v301, v302),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
                      *(_QWORD*)*a2 + 256LL))(*a2, 8, 0, v299),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                      *(_QWORD*)*a2 + 304LL))(*a2, (unsigned int)(v308 / 8),
                                              (unsigned int)(v308 / 8), 1),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v309 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 32LL) +
                                    8 * v295);
                  v310 = (*(__int64 (**)(__int64, _QWORD, __int64))(
                      *(_QWORD*)v309 + 72LL))(v309, 0, 1),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v311 = *(_QWORD*)(v3 + 32);
                  v312 = v310;
                  v313 = *(_QWORD*)(v311 + 104);
                  v314 = *(_QWORD*)(v313 + 16);
                  v315 = *(_QWORD*)(v313 + 24);
                  v316 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v311 + 24) +
                                                  40LL))(*(_QWORD*)(v311 + 24)),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v317 = *(_QWORD*)(v3 + 152);
                  v318 = v316;
                  v320 = v319;
                  LODWORD(v304) = *(_DWORD*)(*(_QWORD*)(v3 + 32) + 20LL);
                  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 +
                                                         200LL))(
                      *a2, 8, *(_QWORD*)(*(_QWORD*)(v317 + 8) + 144LL)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64,
                               _QWORD))(*(_QWORD*)*a2 + 248LL))(
                      *a2, 8, 0, v318, v320, *(unsigned int*)(v317 + 176)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                      *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, v314, v315),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
                      *(_QWORD*)*a2 + 256LL))(*a2, 8, 0, v312),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                      *(_QWORD*)*a2 + 304LL))(*a2,
                                              (unsigned int)((int)v304 / 8),
                                              (unsigned int)((int)v304 / 8), 1),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v321 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 32LL) +
                                    8 * v295);
                  v322 = (*(__int64 (**)(__int64, _QWORD, __int64))(
                      *(_QWORD*)v321 + 72LL))(v321, 0, 2),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v323 = *(_QWORD*)(v3 + 32);
                  v324 = v322;
                  v325 = *(_QWORD*)(v323 + 104);
                  v326 = *(_QWORD*)(v325 + 32);
                  v327 = *(_QWORD*)(v325 + 40);
                  v328 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v323 + 24) +
                                                  40LL))(*(_QWORD*)(v323 + 24)),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v329 = *(_QWORD*)(v3 + 152);
                  v330 = v328;
                  v332 = v331;
                  LODWORD(v304) = *(_DWORD*)(*(_QWORD*)(v3 + 32) + 20LL);
                  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 +
                                                         200LL))(
                      *a2, 8, *(_QWORD*)(*(_QWORD*)(v329 + 8) + 144LL)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64,
                               _QWORD))(*(_QWORD*)*a2 + 248LL))(
                      *a2, 8, 0, v330, v332, *(unsigned int*)(v329 + 176)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                      *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, v326, v327),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
                      *(_QWORD*)*a2 + 256LL))(*a2, 8, 0, v324),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                      *(_QWORD*)*a2 + 304LL))(*a2,
                                              (unsigned int)((int)v304 / 8),
                                              (unsigned int)((int)v304 / 8), 1),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v333 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 32LL) +
                                    8 * v295);
                  v334 = (*(__int64 (**)(__int64, _QWORD, __int64))(
                      *(_QWORD*)v333 + 72LL))(v333, 0, 3),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v335 = *(_QWORD*)(v3 + 32);
                  v336 = v334;
                  v337 = *(_QWORD*)(v335 + 104);
                  v338 = *(_QWORD*)(v337 + 48);
                  v339 = *(_QWORD*)(v337 + 56);
                  v340 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v335 + 24) +
                                                  40LL))(*(_QWORD*)(v335 + 24)),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v341 = *(_QWORD*)(v3 + 152);
                  v342 = v340;
                  v344 = v343;
                  LODWORD(v304) = *(_DWORD*)(*(_QWORD*)(v3 + 32) + 20LL);
                  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 +
                                                         200LL))(
                      *a2, 8, *(_QWORD*)(*(_QWORD*)(v341 + 8) + 144LL)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64,
                               _QWORD))(*(_QWORD*)*a2 + 248LL))(
                      *a2, 8, 0, v342, v344, *(unsigned int*)(v341 + 176)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                      *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, v338, v339),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
                      *(_QWORD*)*a2 + 256LL))(*a2, 8, 0, v336),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                      *(_QWORD*)*a2 + 304LL))(*a2,
                                              (unsigned int)((int)v304 / 8),
                                              (unsigned int)((int)v304 / 8), 1),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v345 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 32LL) +
                                    8 * v295);
                  v346 = (*(__int64 (**)(__int64, _QWORD, __int64))(
                      *(_QWORD*)v345 + 72LL))(v345, 0, 4),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v347 = *(_QWORD*)(v3 + 32);
                  v348 = v346;
                  v349 = *(_QWORD*)(v347 + 104);
                  v350 = *(_QWORD*)(v349 + 64);
                  v351 = *(_QWORD*)(v349 + 72);
                  v352 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v347 + 24) +
                                                  40LL))(*(_QWORD*)(v347 + 24)),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v353 = *(_QWORD*)(v3 + 152);
                  v354 = v352;
                  v356 = v355;
                  LODWORD(v304) = *(_DWORD*)(*(_QWORD*)(v3 + 32) + 20LL);
                  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 +
                                                         200LL))(
                      *a2, 8, *(_QWORD*)(*(_QWORD*)(v353 + 8) + 144LL)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64,
                               _QWORD))(*(_QWORD*)*a2 + 248LL))(
                      *a2, 8, 0, v354, v356, *(unsigned int*)(v353 + 176)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                      *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, v350, v351),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, __int64, _QWORD, _QWORD))(
                      *(_QWORD*)*a2 + 256LL))(*a2, 8, 0, v348),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                      *(_QWORD*)*a2 + 304LL))(*a2,
                                              (unsigned int)((int)v304 / 8),
                                              (unsigned int)((int)v304 / 8), 1),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v357 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 32LL) +
                                    8 * v295);
                  v358 = (*(__int64 (**)(__int64, _QWORD, __int64))(
                      *(_QWORD*)v357 + 72LL))(v357, 0, 5),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v359 = *(_QWORD*)(v3 + 32);
                  v360 = v358;
                  v361 = *(_QWORD*)(v359 + 104);
                  v362 = *(_QWORD*)(v361 + 80);
                  v363 = *(_QWORD*)(v361 + 88);
                  v364 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(v359 + 24) +
                                                  40LL))(*(_QWORD*)(v359 + 24)),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v365 = *(_QWORD*)(v3 + 152);
                  v366 = v364;
                  v368 = v367;
                  LODWORD(v304) = *(_DWORD*)(*(_QWORD*)(v3 + 32) + 20LL);
                  (*(void (**)(_QWORD, __int64, _QWORD))(*(_QWORD*)*a2 +
                                                         200LL))(
                      *a2, 8, *(_QWORD*)(*(_QWORD*)(v365 + 8) + 144LL)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64,
                               _QWORD))(*(_QWORD*)*a2 + 248LL))(
                      *a2, 8, 0, v366, v368, *(unsigned int*)(v365 + 176)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, __int64, _QWORD, __int64, __int64))(
                      *(_QWORD*)*a2 + 224LL))(*a2, 8, 0, v362, v363),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v369 = v360;
                  v293 = (__int64 (**)(__int64, __int64))GameData_212e738,
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, __int64, _QWORD, __int64))(
                      *(_QWORD*)*a2 + 256LL))(*a2, 8, 0, v369),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  (*(void (**)(_QWORD, _QWORD, _QWORD, __int64))(
                      *(_QWORD*)*a2 + 304LL))(*a2,
                                              (unsigned int)((int)v304 / 8),
                                              (unsigned int)((int)v304 / 8), 1),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                result = (*v293)(*a2 + 8LL, 17);
                *(_DWORD*)(v3 + 148) = 0;
              }
              return result;
            }
            v290 = *(_QWORD*)(v3 + 56);
            v373[0] = *(_QWORD*)(v3 + 48);
            v373[1] = v290;
            if (v290 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v290 + 8), 1u,
                                        memory_order_relaxed);
              GameRoutine_b3a120(v3, (__int64)a2, v373, *(_QWORD*)(v3 + 104), 1,
                                 0),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (atomic_fetch_add((atomic_ullong* volatile)(v290 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v290 + 16LL))(v290),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                std___1___shared_weak_count___release_weak(v290),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
            else {
              GameRoutine_b3a120(v3, (__int64)a2, v373, *(_QWORD*)(v3 + 104), 1,
                                 0),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            v291 = *(_QWORD*)(v3 + 72);
            v372[0] = *(_QWORD*)(v3 + 64);
            v372[1] = v291;
            if (v291 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v291 + 8), 1u,
                                        memory_order_relaxed);
              result = GameRoutine_b3a120(v3, (__int64)a2, v372,
                                          *(_QWORD*)(v3 + 112), 1, 1),
              v306 = COERCE_AS(__typeof__(v306),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v319 = COERCE_AS(__typeof__(v319),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v331 = COERCE_AS(__typeof__(v331),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v355 = COERCE_AS(__typeof__(v355),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v367 = COERCE_AS(__typeof__(v367),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              if (atomic_fetch_add((atomic_ullong* volatile)(v291 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v291 + 16LL))(v291),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                result = std___1___shared_weak_count___release_weak(v291),
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
            }
            else {
              result = GameRoutine_b3a120(v3, (__int64)a2, v372,
                                          *(_QWORD*)(v3 + 112), 1, 1),
              v306 = COERCE_AS(__typeof__(v306),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v319 = COERCE_AS(__typeof__(v319),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v331 = COERCE_AS(__typeof__(v331),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v343 = COERCE_AS(__typeof__(v343),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v355 = COERCE_AS(__typeof__(v355),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
              v367 = COERCE_AS(__typeof__(v367),
                               PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
            *(_DWORD*)(v3 + 140) = 0;
            goto LABEL_230;
          }
        LABEL_21:
          v14 = *(_DWORD*)(v2 + 304);
          v15 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 13224LL);
          if (v14 == -1) {
            v18 = 0;
          }
          else {
            v16 = v15 + 1560LL * v14;
            v17 = *(_QWORD*)(v16 + 1752);
            v18 = *(_QWORD*)(v16 + 1760);
            if (v18 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                        memory_order_relaxed);
            }
            v19 = v18;
            if (v17 != 0) {
            LABEL_32:
              v20 = *(_QWORD*)(*(_QWORD*)(v17 + 8) + 120LL);
              v374 = GameData_212e548[0] + 2;
              if ((*(_BYTE*)(v20 + 8) & 1) != 0) {
                fw_text_String_CopyTerminated(&v375, *(_QWORD*)(v20 + 24),
                                              *(_QWORD*)(v20 + 16)),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v21 = *(_QWORD*)(v20 + 8);
                v22 = *(_QWORD*)(v20 + 24);
                v376 = *(_QWORD*)(v20 + 16);
                v377 = v22;
                v375 = v21;
              }
              v379 = 0;
              v380 = 0;
              v378 = 0;
              v24 = *(_QWORD*)(v20 + 32);
              v23 = *(_QWORD*)(v20 + 40);
              v25 = v23 - v24;
              if (v23 != v24) {
                if (v25 < 0) {
                  GameRoutine_a9fd80(),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                v26 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v23 - v24, 16, 0),
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v27 = v26 + v25;
                v378 = v26;
                v379 = v26;
                v380 = v26 + v25;
                memcpy(v26, v24, v25),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v379 = v27;
              }
              v28 = GameData_212e530[0];
              v370 = v19;
              v381 = GameData_212e530[0] + 16;
              v29 = *(_BYTE*)(v20 + 64);
              v374 = GameData_212e590[0] + 2;
              if ((v29 & 1) != 0) {
                fw_text_String_CopyTerminated(v382, *(_QWORD*)(v20 + 80),
                                              *(_QWORD*)(v20 + 72)),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v382[1] = *(_QWORD*)(v20 + 72);
                v30 = *(_QWORD*)(v20 + 64);
                v382[2] = *(_QWORD*)(v20 + 80);
                v382[0] = v30;
              }
              v383 = *(_BYTE*)(v20 + 88);
              v381 = GameData_212e528[0] + 16;
              v31 = *(_QWORD*)(v20 + 92);
              v386 = 0;
              v387 = 0;
              v385 = 0;
              v384 = v31;
              v33 = *(_QWORD*)(v20 + 104);
              v32 = *(_QWORD*)(v20 + 112);
              v34 = v32 - v33;
              if (v32 != v33) {
                if (0xAAAAAAAAAAAAAAABLL * (v34 >> 2) > 0x1555555555555555LL) {
                  goto LABEL_237;
                }
                v35 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v34, 16, 0),
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v36 = v35 + v34;
                v385 = v35;
                v386 = v35;
                v387 = v35 + v34;
                memcpy(v35, v33, v34),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v386 = v36;
              }
              v37 = *(_BYTE*)(v20 + 144);
              v371 = v6;
              v388 = *(_DWORD*)(v20 + 128);
              v38 = GameData_212e520[0];
              v381 = GameData_212e520[0] + 16;
              v389 = v28 + 16;
              if ((v37 & 1) != 0) {
                fw_text_String_CopyTerminated(v390, *(_QWORD*)(v20 + 160),
                                              *(_QWORD*)(v20 + 152)),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v390[1] = *(_QWORD*)(v20 + 152);
                v39 = *(_QWORD*)(v20 + 144);
                v390[2] = *(_QWORD*)(v20 + 160);
                v390[0] = v39;
              }
              v391 = *(_BYTE*)(v20 + 168);
              v389 = GameData_212e528[0] + 16;
              v40 = *(_QWORD*)(v20 + 172);
              v394 = 0;
              v395 = 0;
              v393 = 0;
              v392 = v40;
              v42 = *(_QWORD*)(v20 + 184);
              v41 = *(_QWORD*)(v20 + 192);
              v43 = v41 - v42;
              if (v41 != v42) {
                if (0xAAAAAAAAAAAAAAABLL * (v43 >> 2) > 0x1555555555555555LL) {
                  goto LABEL_237;
                }
                v44 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v43, 16, 0),
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v45 = v44 + v43;
                v393 = v44;
                v394 = v44;
                v395 = v44 + v43;
                memcpy(v44, v42, v43),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v394 = v45;
              }
              v46 = *(_BYTE*)(v20 + 224);
              v47 = *(_DWORD*)(v20 + 208);
              v389 = v38 + 16;
              v397 = v28 + 16;
              v396 = v47;
              if ((v46 & 1) != 0) {
                fw_text_String_CopyTerminated(v398, *(_QWORD*)(v20 + 240),
                                              *(_QWORD*)(v20 + 232)),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v398[1] = *(_QWORD*)(v20 + 232);
                v48 = *(_QWORD*)(v20 + 224);
                v398[2] = *(_QWORD*)(v20 + 240);
                v398[0] = v48;
              }
              v399 = *(_BYTE*)(v20 + 248);
              v397 = GameData_212e528[0] + 16;
              v49 = *(_QWORD*)(v20 + 252);
              v402 = 0;
              v403 = 0;
              v401 = 0;
              v400 = v49;
              v51 = *(_QWORD*)(v20 + 264);
              v50 = *(_QWORD*)(v20 + 272);
              v52 = v50 - v51;
              if (v50 != v51) {
                if (0xAAAAAAAAAAAAAAABLL * (v52 >> 2) > 0x1555555555555555LL) {
                  goto LABEL_237;
                }
                v53 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v52, 16, 0),
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v54 = v53 + v52;
                v401 = v53;
                v402 = v53;
                v403 = v53 + v52;
                memcpy(v53, v51, v52),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v402 = v54;
              }
              v55 = *(_DWORD*)(v20 + 288);
              v56 = *(_BYTE*)(v20 + 304);
              v397 = v38 + 16;
              v405 = v28 + 16;
              v404 = v55;
              if ((v56 & 1) != 0) {
                fw_text_String_CopyTerminated(v406, *(_QWORD*)(v20 + 320),
                                              *(_QWORD*)(v20 + 312)),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v406[1] = *(_QWORD*)(v20 + 312);
                v57 = *(_QWORD*)(v20 + 304);
                v406[2] = *(_QWORD*)(v20 + 320);
                v406[0] = v57;
              }
              v407 = *(_BYTE*)(v20 + 328);
              v405 = GameData_212e528[0] + 16;
              v58 = *(_QWORD*)(v20 + 332);
              v410 = 0;
              v411 = 0;
              v409 = 0;
              v408 = v58;
              v60 = *(_QWORD*)(v20 + 344);
              v59 = *(_QWORD*)(v20 + 352);
              v61 = v59 - v60;
              if (v59 != v60) {
                if (0xAAAAAAAAAAAAAAABLL * (v61 >> 2) > 0x1555555555555555LL) {
                  goto LABEL_237;
                }
                v62 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v61, 16, 0),
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v63 = v62 + v61;
                v409 = v62;
                v410 = v62;
                v411 = v62 + v61;
                memcpy(v62, v60, v61),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v410 = v63;
              }
              v64 = *(_DWORD*)(v20 + 368);
              v65 = *(_BYTE*)(v20 + 384);
              v405 = v38 + 16;
              v413 = v28 + 16;
              v412 = v64;
              if ((v65 & 1) != 0) {
                fw_text_String_CopyTerminated(v414, *(_QWORD*)(v20 + 400),
                                              *(_QWORD*)(v20 + 392)),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v414[1] = *(_QWORD*)(v20 + 392);
                v66 = *(_QWORD*)(v20 + 384);
                v414[2] = *(_QWORD*)(v20 + 400);
                v414[0] = v66;
              }
              v415 = *(_BYTE*)(v20 + 408);
              v413 = GameData_212e528[0] + 16;
              v67 = *(_QWORD*)(v20 + 412);
              v418 = 0;
              v419 = 0;
              v417 = 0;
              v416 = v67;
              v69 = *(_QWORD*)(v20 + 424);
              v68 = *(_QWORD*)(v20 + 432);
              v70 = v68 - v69;
              if (v68 != v69) {
                if (0xAAAAAAAAAAAAAAABLL * (v70 >> 2) > 0x1555555555555555LL) {
                  goto LABEL_237;
                }
                v71 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v70, 16, 0),
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v72 = v71 + v70;
                v417 = v71;
                v418 = v71;
                v419 = v71 + v70;
                memcpy(v71, v69, v70),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v418 = v72;
              }
              v73 = *(_DWORD*)(v20 + 448);
              v74 = *(_BYTE*)(v20 + 464);
              v413 = v38 + 16;
              v421 = v28 + 16;
              v420 = v73;
              if ((v74 & 1) != 0) {
                fw_text_String_CopyTerminated(v422, *(_QWORD*)(v20 + 480),
                                              *(_QWORD*)(v20 + 472)),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v422[1] = *(_QWORD*)(v20 + 472);
                v75 = *(_QWORD*)(v20 + 464);
                v422[2] = *(_QWORD*)(v20 + 480);
                v422[0] = v75;
              }
              v423 = *(_BYTE*)(v20 + 488);
              v421 = GameData_212e528[0] + 16;
              v76 = *(_QWORD*)(v20 + 492);
              v427 = 0;
              v425 = 0;
              v426 = 0;
              v424 = v76;
              v78 = *(_QWORD*)(v20 + 504);
              v77 = *(_QWORD*)(v20 + 512);
              v79 = v77 - v78;
              if (v77 != v78) {
                if (0xAAAAAAAAAAAAAAABLL * (v79 >> 2) > 0x1555555555555555LL) {
                  goto LABEL_237;
                }
                v80 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v79, 16, 0),
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v81 = v80 + v79;
                v425 = v80;
                v426 = v80;
                v427 = v80 + v79;
                memcpy(v80, v78, v79),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v426 = v81;
              }
              v82 = *(_DWORD*)(v20 + 528);
              v421 = v38 + 16;
              v429 = v28 + 16;
              v83 = *(_BYTE*)(v20 + 544);
              v428 = v82;
              if ((v83 & 1) != 0) {
                fw_text_String_CopyTerminated(v430, *(_QWORD*)(v20 + 560),
                                              *(_QWORD*)(v20 + 552)),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v430[1] = *(_QWORD*)(v20 + 552);
                v84 = *(_QWORD*)(v20 + 544);
                v430[2] = *(_QWORD*)(v20 + 560);
                v430[0] = v84;
              }
              v431 = *(_BYTE*)(v20 + 568);
              v429 = GameData_212e528[0] + 16;
              v85 = *(_QWORD*)(v20 + 572);
              v433 = 0;
              v435 = 0;
              v434 = 0;
              v86 = *(_QWORD*)(v20 + 584);
              v432 = v85;
              v87 = *(_QWORD*)(v20 + 592);
              v88 = v87 - v86;
              if (v87 != v86) {
                if (0xAAAAAAAAAAAAAAABLL * (v88 >> 2) > 0x1555555555555555LL) {
                  goto LABEL_237;
                }
                v89 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v88, 16, 0),
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v90 = v89 + v88;
                v433 = v89;
                v434 = v89;
                v435 = v89 + v88;
                memcpy(v89, v86, v88),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v434 = v90;
              }
              v91 = *(_DWORD*)(v20 + 608);
              v429 = v38 + 16;
              v437 = (__int64*)(v28 + 16);
              v92 = *(_BYTE*)(v20 + 632);
              v436 = v91;
              if ((v92 & 1) != 0) {
                fw_text_String_CopyTerminated(v438, *(_QWORD*)(v20 + 648),
                                              *(_QWORD*)(v20 + 640)),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v93 = *(_QWORD*)(v20 + 632);
                v94 = *(_QWORD*)(v20 + 648);
                v438[1] = *(_QWORD*)(v20 + 640);
                v438[2] = v94;
                v438[0] = v93;
              }
              v95 = *(_QWORD*)(v20 + 680);
              v96 = *(_QWORD*)(v20 + 696);
              v439 = *(_BYTE*)(v20 + 656);
              v97 = *(_QWORD*)(v20 + 688);
              v437 = GameData_212e578[0] + 2;
              v98 = *(_QWORD*)(v20 + 672);
              v444 = 0;
              v446 = 0;
              v445 = 0;
              v443 = v96;
              v441 = v95;
              v99 = *(_QWORD*)(v20 + 704);
              v442 = v97;
              v440 = v98;
              v100 = *(_QWORD*)(v20 + 712);
              v101 = v100 - v99;
              if (v100 != v99) {
                if (0xAAAAAAAAAAAAAAABLL * (v101 >> 4) > 0x555555555555555LL) {
                  goto LABEL_238;
                }
                v102 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v101, 16, 0),
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v103 = v102 + v101;
                v444 = v102;
                v445 = v102;
                v446 = v102 + v101;
                memcpy(v102, v99, v101),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v445 = v103;
              }
              v448 = *(_QWORD*)(v20 + 744);
              v447 = *(_QWORD*)(v20 + 736);
              v437 = GameData_212e570[0] + 2;
              v449 = v28 + 16;
              if ((*(_BYTE*)(v20 + 760) & 1) != 0) {
                fw_text_String_CopyTerminated(v450, *(_QWORD*)(v20 + 776),
                                              *(_QWORD*)(v20 + 768)),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v104 = *(_QWORD*)(v20 + 760);
                v105 = *(_QWORD*)(v20 + 776);
                v450[1] = *(_QWORD*)(v20 + 768);
                v450[2] = v105;
                v450[0] = v104;
              }
              v451 = *(_BYTE*)(v20 + 784);
              v449 = GameData_212e528[0] + 16;
              v106 = *(_QWORD*)(v20 + 788);
              v453 = 0;
              v455 = 0;
              v454 = 0;
              v107 = *(_QWORD*)(v20 + 800);
              v452 = v106;
              v108 = *(_QWORD*)(v20 + 808);
              v109 = v108 - v107;
              if (v108 != v107) {
                if (0xAAAAAAAAAAAAAAABLL * (v109 >> 2) > 0x1555555555555555LL) {
                  goto LABEL_237;
                }
                v110 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v109, 16, 0),
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v111 = v110 + v109;
                v453 = v110;
                v454 = v110;
                v455 = v110 + v109;
                memcpy(v110, v107, v109),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v454 = v111;
              }
              v112 = *(_DWORD*)(v20 + 824);
              v449 = v38 + 16;
              v457 = (__int64*)(v28 + 16);
              v113 = *(_BYTE*)(v20 + 840);
              v456 = v112;
              if ((v113 & 1) != 0) {
                fw_text_String_CopyTerminated(v458, *(_QWORD*)(v20 + 856),
                                              *(_QWORD*)(v20 + 848)),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v114 = *(_QWORD*)(v20 + 840);
                v115 = *(_QWORD*)(v20 + 856);
                v458[1] = *(_QWORD*)(v20 + 848);
                v458[2] = v115;
                v458[0] = v114;
              }
              v459 = *(_BYTE*)(v20 + 864);
              v116 = *(_QWORD*)(v20 + 904);
              v117 = *(_QWORD*)(v20 + 880);
              v118 = *(_QWORD*)(v20 + 896);
              v457 = GameData_212e578[0] + 2;
              v119 = *(_QWORD*)(v20 + 888);
              v464 = 0;
              v466 = 0;
              v465 = 0;
              v462 = v118;
              v460 = v117;
              v463 = v116;
              v120 = *(_QWORD*)(v20 + 912);
              v461 = v119;
              v121 = *(_QWORD*)(v20 + 920);
              v122 = v121 - v120;
              if (v121 != v120) {
                if (0xAAAAAAAAAAAAAAABLL * (v122 >> 4) > 0x555555555555555LL) {
                  goto LABEL_238;
                }
                v123 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v122, 16, 0),
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v124 = v123 + v122;
                v464 = v123;
                v465 = v123;
                v466 = v123 + v122;
                memcpy(v123, v120, v122),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v465 = v124;
              }
              v468 = *(_QWORD*)(v20 + 952);
              v467 = *(_QWORD*)(v20 + 944);
              v457 = GameData_212e570[0] + 2;
              v469 = v28 + 16;
              if ((*(_BYTE*)(v20 + 968) & 1) != 0) {
                fw_text_String_CopyTerminated(v470, *(_QWORD*)(v20 + 984),
                                              *(_QWORD*)(v20 + 976)),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v125 = *(_QWORD*)(v20 + 968);
                v126 = *(_QWORD*)(v20 + 984);
                v470[1] = *(_QWORD*)(v20 + 976);
                v470[2] = v126;
                v470[0] = v125;
              }
              v471 = *(_BYTE*)(v20 + 992);
              v469 = GameData_212e528[0] + 16;
              v127 = *(_QWORD*)(v20 + 996);
              v473 = 0;
              v475 = 0;
              v474 = 0;
              v128 = *(_QWORD*)(v20 + 1008);
              v472 = v127;
              v129 = *(_QWORD*)(v20 + 1016);
              v130 = v129 - v128;
              if (v129 != v128) {
                if (0xAAAAAAAAAAAAAAABLL * (v130 >> 2) > 0x1555555555555555LL) {
                  goto LABEL_237;
                }
                v131 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v130, 16, 0),
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v132 = v131 + v130;
                v473 = v131;
                v474 = v131;
                v475 = v131 + v130;
                memcpy(v131, v128, v130),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v474 = v132;
              }
              v133 = *(_DWORD*)(v20 + 1032);
              v469 = v38 + 16;
              v477 = (__int64*)(v28 + 16);
              v134 = *(_BYTE*)(v20 + 1048);
              v476 = v133;
              if ((v134 & 1) != 0) {
                fw_text_String_CopyTerminated(v478, *(_QWORD*)(v20 + 1064),
                                              *(_QWORD*)(v20 + 1056)),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              else {
                v135 = *(_QWORD*)(v20 + 1048);
                v136 = *(_QWORD*)(v20 + 1064);
                v478[1] = *(_QWORD*)(v20 + 1056);
                v478[2] = v136;
                v478[0] = v135;
              }
              v479 = *(_BYTE*)(v20 + 1072);
              v137 = *(_QWORD*)(v20 + 1112);
              v138 = *(_QWORD*)(v20 + 1088);
              v139 = *(_QWORD*)(v20 + 1104);
              v477 = GameData_212e578[0] + 2;
              v140 = *(_QWORD*)(v20 + 1096);
              v484 = 0;
              v486 = 0;
              v485 = 0;
              v482 = v139;
              v480 = v138;
              v483 = v137;
              v141 = *(_QWORD*)(v20 + 1120);
              v481 = v140;
              v142 = *(_QWORD*)(v20 + 1128);
              v143 = v142 - v141;
              if (v142 == v141) {
              LABEL_110:
                v488 = *(_QWORD*)(v20 + 1160);
                v487 = *(_QWORD*)(v20 + 1152);
                v477 = GameData_212e570[0] + 2;
                v489 = v28 + 16;
                if ((*(_BYTE*)(v20 + 1176) & 1) != 0) {
                  fw_text_String_CopyTerminated(v490, *(_QWORD*)(v20 + 1192),
                                                *(_QWORD*)(v20 + 1184)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                else {
                  v146 = *(_QWORD*)(v20 + 1176);
                  v147 = *(_QWORD*)(v20 + 1192);
                  v490[1] = *(_QWORD*)(v20 + 1184);
                  v490[2] = v147;
                  v490[0] = v146;
                }
                v491 = *(_BYTE*)(v20 + 1200);
                v489 = GameData_212e528[0] + 16;
                v148 = *(_QWORD*)(v20 + 1204);
                v493 = 0;
                v495 = 0;
                v494 = 0;
                v149 = *(_QWORD*)(v20 + 1216);
                v492 = v148;
                v150 = *(_QWORD*)(v20 + 1224);
                v151 = v150 - v149;
                if (v150 != v149) {
                  if (0xAAAAAAAAAAAAAAABLL * (v151 >> 2) >
                      0x1555555555555555LL) {
                    goto LABEL_237;
                  }
                  v152 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v151, 16, 0),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v153 = v152 + v151;
                  v493 = v152;
                  v494 = v152;
                  v495 = v152 + v151;
                  memcpy(v152, v149, v151),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v494 = v153;
                }
                v154 = *(_DWORD*)(v20 + 1240);
                v489 = v38 + 16;
                v497 = (__int64*)(v28 + 16);
                v155 = *(_BYTE*)(v20 + 1256);
                v496 = v154;
                if ((v155 & 1) != 0) {
                  fw_text_String_CopyTerminated(v498, *(_QWORD*)(v20 + 1272),
                                                *(_QWORD*)(v20 + 1264)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                else {
                  v156 = *(_QWORD*)(v20 + 1256);
                  v157 = *(_QWORD*)(v20 + 1272);
                  v498[1] = *(_QWORD*)(v20 + 1264);
                  v498[2] = v157;
                  v498[0] = v156;
                }
                v499 = *(_BYTE*)(v20 + 1280);
                v497 = GameData_212e568[0] + 2;
                v158 = *(_WORD*)(v20 + 1281);
                v501 = 0;
                v503 = 0;
                v502 = 0;
                v159 = *(_QWORD*)(v20 + 1288);
                v500 = v158;
                v160 = *(_QWORD*)(v20 + 1296);
                v161 = v160 - v159;
                if (v160 != v159) {
                  if (v161 < 0) {
                    GameRoutine_abae00(),
                        v306 = COERCE_AS(
                            __typeof__(v306),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v319 = COERCE_AS(
                            __typeof__(v319),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v331 = COERCE_AS(
                            __typeof__(v331),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v343 = COERCE_AS(
                            __typeof__(v343),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v355 = COERCE_AS(
                            __typeof__(v355),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v367 = COERCE_AS(
                            __typeof__(v367),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  v162 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v160 - v159, 16,
                      0),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v163 = v162 + v161;
                  v501 = v162;
                  v502 = v162;
                  v503 = v162 + v161;
                  memcpy(v162, v159, v161 - 2),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v502 = v163;
                }
                v504 = *(_BYTE*)(v20 + 1312);
                v497 = GameData_212e560[0] + 2;
                v505 = v28 + 16;
                if ((*(_BYTE*)(v20 + 1328) & 1) != 0) {
                  fw_text_String_CopyTerminated(v506, *(_QWORD*)(v20 + 1344),
                                                *(_QWORD*)(v20 + 1336)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                else {
                  v506[1] = *(_QWORD*)(v20 + 1336);
                  v164 = *(_QWORD*)(v20 + 1328);
                  v506[2] = *(_QWORD*)(v20 + 1344);
                  v506[0] = v164;
                }
                v507 = *(_BYTE*)(v20 + 1352);
                v505 = GameData_212e528[0] + 16;
                v165 = *(_QWORD*)(v20 + 1356);
                v509 = 0;
                v511 = 0;
                v510 = 0;
                v166 = *(_QWORD*)(v20 + 1368);
                v508 = v165;
                v167 = *(_QWORD*)(v20 + 1376);
                v168 = v167 - v166;
                if (v167 != v166) {
                  if (0xAAAAAAAAAAAAAAABLL * (v168 >> 2) >
                      0x1555555555555555LL) {
                    goto LABEL_237;
                  }
                  v169 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v168, 16, 0),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v170 = v169 + v168;
                  v509 = v169;
                  v510 = v169;
                  v511 = v169 + v168;
                  memcpy(v169, v166, v168),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v510 = v170;
                }
                v171 = *(_DWORD*)(v20 + 1392);
                v505 = v38 + 16;
                v513 = v28 + 16;
                v172 = *(_BYTE*)(v20 + 1408);
                v512 = v171;
                if ((v172 & 1) != 0) {
                  fw_text_String_CopyTerminated(v514, *(_QWORD*)(v20 + 1424),
                                                *(_QWORD*)(v20 + 1416)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                else {
                  v514[1] = *(_QWORD*)(v20 + 1416);
                  v173 = *(_QWORD*)(v20 + 1408);
                  v514[2] = *(_QWORD*)(v20 + 1424);
                  v514[0] = v173;
                }
                v515 = *(_BYTE*)(v20 + 1432);
                v513 = GameData_212e528[0] + 16;
                v174 = *(_QWORD*)(v20 + 1436);
                v517 = 0;
                v519 = 0;
                v518 = 0;
                v175 = *(_QWORD*)(v20 + 1448);
                v516 = v174;
                v176 = *(_QWORD*)(v20 + 1456);
                v177 = v176 - v175;
                if (v176 != v175) {
                  if (0xAAAAAAAAAAAAAAABLL * (v177 >> 2) >
                      0x1555555555555555LL) {
                    goto LABEL_237;
                  }
                  v178 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v177, 16, 0),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v179 = v178 + v177;
                  v517 = v178;
                  v518 = v178;
                  v519 = v178 + v177;
                  memcpy(v178, v175, v177),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v518 = v179;
                }
                v180 = *(_DWORD*)(v20 + 1472);
                v513 = v38 + 16;
                v521 = v28 + 16;
                v181 = *(_BYTE*)(v20 + 1488);
                v520 = v180;
                if ((v181 & 1) != 0) {
                  fw_text_String_CopyTerminated(v522, *(_QWORD*)(v20 + 1504),
                                                *(_QWORD*)(v20 + 1496)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                else {
                  v522[1] = *(_QWORD*)(v20 + 1496);
                  v182 = *(_QWORD*)(v20 + 1488);
                  v522[2] = *(_QWORD*)(v20 + 1504);
                  v522[0] = v182;
                }
                v523 = *(_BYTE*)(v20 + 1512);
                v521 = GameData_212e528[0] + 16;
                v183 = *(_QWORD*)(v20 + 1516);
                v525 = 0;
                v527 = 0;
                v526 = 0;
                v184 = *(_QWORD*)(v20 + 1528);
                v524 = v183;
                v185 = *(_QWORD*)(v20 + 1536);
                v186 = v185 - v184;
                if (v185 != v184) {
                  if (0xAAAAAAAAAAAAAAABLL * (v186 >> 2) >
                      0x1555555555555555LL) {
                    goto LABEL_237;
                  }
                  v187 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v186, 16, 0),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v188 = v187 + v186;
                  v525 = v187;
                  v526 = v187;
                  v527 = v187 + v186;
                  memcpy(v187, v184, v186),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v526 = v188;
                }
                v189 = *(_DWORD*)(v20 + 1552);
                v521 = v38 + 16;
                v529 = v28 + 16;
                v190 = *(_BYTE*)(v20 + 1568);
                v528 = v189;
                if ((v190 & 1) != 0) {
                  fw_text_String_CopyTerminated(v530, *(_QWORD*)(v20 + 1584),
                                                *(_QWORD*)(v20 + 1576)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                else {
                  v530[1] = *(_QWORD*)(v20 + 1576);
                  v191 = *(_QWORD*)(v20 + 1568);
                  v530[2] = *(_QWORD*)(v20 + 1584);
                  v530[0] = v191;
                }
                v531 = *(_BYTE*)(v20 + 1592);
                v529 = GameData_212e528[0] + 16;
                v192 = *(_QWORD*)(v20 + 1596);
                v533 = 0;
                v535 = 0;
                v534 = 0;
                v193 = *(_QWORD*)(v20 + 1608);
                v532 = v192;
                v194 = *(_QWORD*)(v20 + 1616);
                v195 = v194 - v193;
                if (v194 != v193) {
                  if (0xAAAAAAAAAAAAAAABLL * (v195 >> 2) >
                      0x1555555555555555LL) {
                    goto LABEL_237;
                  }
                  v196 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v195, 16, 0),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v197 = v196 + v195;
                  v533 = v196;
                  v534 = v196;
                  v535 = v196 + v195;
                  memcpy(v196, v193, v195),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v534 = v197;
                }
                v198 = *(_DWORD*)(v20 + 1632);
                v529 = v38 + 16;
                v537 = v28 + 16;
                v199 = *(_BYTE*)(v20 + 1648);
                v536 = v198;
                if ((v199 & 1) != 0) {
                  fw_text_String_CopyTerminated(v538, *(_QWORD*)(v20 + 1664),
                                                *(_QWORD*)(v20 + 1656)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                else {
                  v538[1] = *(_QWORD*)(v20 + 1656);
                  v200 = *(_QWORD*)(v20 + 1648);
                  v538[2] = *(_QWORD*)(v20 + 1664);
                  v538[0] = v200;
                }
                v539 = *(_BYTE*)(v20 + 1672);
                v537 = GameData_212e528[0] + 16;
                v201 = *(_QWORD*)(v20 + 1676);
                v541 = 0;
                v543 = 0;
                v542 = 0;
                v202 = *(_QWORD*)(v20 + 1688);
                v540 = v201;
                v203 = *(_QWORD*)(v20 + 1696);
                v204 = v203 - v202;
                if (v203 != v202) {
                  if (0xAAAAAAAAAAAAAAABLL * (v204 >> 2) >
                      0x1555555555555555LL) {
                    goto LABEL_237;
                  }
                  v205 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v204, 16, 0),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v206 = v205 + v204;
                  v541 = v205;
                  v542 = v205;
                  v543 = v205 + v204;
                  memcpy(v205, v202, v204),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v542 = v206;
                }
                v207 = *(_DWORD*)(v20 + 1712);
                v537 = v38 + 16;
                v545 = v28 + 16;
                v208 = *(_BYTE*)(v20 + 1728);
                v544 = v207;
                if ((v208 & 1) != 0) {
                  fw_text_String_CopyTerminated(v546, *(_QWORD*)(v20 + 1744),
                                                *(_QWORD*)(v20 + 1736)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                else {
                  v546[1] = *(_QWORD*)(v20 + 1736);
                  v209 = *(_QWORD*)(v20 + 1728);
                  v546[2] = *(_QWORD*)(v20 + 1744);
                  v546[0] = v209;
                }
                v547 = *(_BYTE*)(v20 + 1752);
                v545 = GameData_212e528[0] + 16;
                v210 = *(_QWORD*)(v20 + 1756);
                v549 = 0;
                v551 = 0;
                v550 = 0;
                v211 = *(_QWORD*)(v20 + 1768);
                v548 = v210;
                v212 = *(_QWORD*)(v20 + 1776);
                v213 = v212 - v211;
                if (v212 != v211) {
                  if (0xAAAAAAAAAAAAAAABLL * (v213 >> 2) >
                      0x1555555555555555LL) {
                    goto LABEL_237;
                  }
                  v214 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v213, 16, 0),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v215 = v214 + v213;
                  v549 = v214;
                  v550 = v214;
                  v551 = v214 + v213;
                  memcpy(v214, v211, v213),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v550 = v215;
                }
                v216 = *(_DWORD*)(v20 + 1792);
                v545 = v38 + 16;
                v553 = v28 + 16;
                v217 = *(_BYTE*)(v20 + 1808);
                v552 = v216;
                if ((v217 & 1) != 0) {
                  fw_text_String_CopyTerminated(v554, *(_QWORD*)(v20 + 1824),
                                                *(_QWORD*)(v20 + 1816)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                else {
                  v554[1] = *(_QWORD*)(v20 + 1816);
                  v218 = *(_QWORD*)(v20 + 1808);
                  v554[2] = *(_QWORD*)(v20 + 1824);
                  v554[0] = v218;
                }
                v555 = *(_BYTE*)(v20 + 1832);
                v553 = GameData_212e528[0] + 16;
                v219 = *(_QWORD*)(v20 + 1836);
                v557 = 0;
                v559 = 0;
                v558 = 0;
                v220 = *(_QWORD*)(v20 + 1848);
                v556 = v219;
                v221 = *(_QWORD*)(v20 + 1856);
                v222 = v221 - v220;
                if (v221 != v220) {
                  if (0xAAAAAAAAAAAAAAABLL * (v222 >> 2) >
                      0x1555555555555555LL) {
                    goto LABEL_237;
                  }
                  v223 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v222, 16, 0),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v224 = v223 + v222;
                  v557 = v223;
                  v558 = v223;
                  v559 = v223 + v222;
                  memcpy(v223, v220, v222),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v558 = v224;
                }
                v225 = *(_DWORD*)(v20 + 1872);
                v553 = v38 + 16;
                v561 = v28 + 16;
                v226 = *(_BYTE*)(v20 + 1888);
                v560 = v225;
                if ((v226 & 1) != 0) {
                  fw_text_String_CopyTerminated(v562, *(_QWORD*)(v20 + 1904),
                                                *(_QWORD*)(v20 + 1896)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                else {
                  v562[1] = *(_QWORD*)(v20 + 1896);
                  v227 = *(_QWORD*)(v20 + 1888);
                  v562[2] = *(_QWORD*)(v20 + 1904);
                  v562[0] = v227;
                }
                v563 = *(_BYTE*)(v20 + 1912);
                v561 = GameData_212e528[0] + 16;
                v228 = *(_QWORD*)(v20 + 1916);
                v565 = 0;
                v567 = 0;
                v566 = 0;
                v229 = *(_QWORD*)(v20 + 1928);
                v564 = v228;
                v230 = *(_QWORD*)(v20 + 1936);
                v231 = v230 - v229;
                if (v230 != v229) {
                  if (0xAAAAAAAAAAAAAAABLL * (v231 >> 2) >
                      0x1555555555555555LL) {
                    goto LABEL_237;
                  }
                  v232 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v231, 16, 0),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v233 = v232 + v231;
                  v565 = v232;
                  v566 = v232;
                  v567 = v232 + v231;
                  memcpy(v232, v229, v231),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v566 = v233;
                }
                v234 = *(_DWORD*)(v20 + 1952);
                v561 = v38 + 16;
                v569 = v28 + 16;
                v235 = *(_BYTE*)(v20 + 1968);
                v568 = v234;
                if ((v235 & 1) != 0) {
                  fw_text_String_CopyTerminated(v570, *(_QWORD*)(v20 + 1984),
                                                *(_QWORD*)(v20 + 1976)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                else {
                  v570[1] = *(_QWORD*)(v20 + 1976);
                  v236 = *(_QWORD*)(v20 + 1968);
                  v570[2] = *(_QWORD*)(v20 + 1984);
                  v570[0] = v236;
                }
                v571 = *(_BYTE*)(v20 + 1992);
                v569 = GameData_212e528[0] + 16;
                v237 = *(_QWORD*)(v20 + 1996);
                v573 = 0;
                v575 = 0;
                v574 = 0;
                v238 = *(_QWORD*)(v20 + 2008);
                v572 = v237;
                v239 = *(_QWORD*)(v20 + 2016);
                v240 = v239 - v238;
                if (v239 != v238) {
                  if (0xAAAAAAAAAAAAAAABLL * (v240 >> 2) >
                      0x1555555555555555LL) {
                    goto LABEL_237;
                  }
                  v241 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v240, 16, 0),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v242 = v241 + v240;
                  v573 = v241;
                  v574 = v241;
                  v575 = v241 + v240;
                  memcpy(v241, v238, v240),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v574 = v242;
                }
                v243 = *(_DWORD*)(v20 + 2032);
                v569 = v38 + 16;
                v577 = v28 + 16;
                v244 = *(_BYTE*)(v20 + 2048);
                v576 = v243;
                if ((v244 & 1) != 0) {
                  fw_text_String_CopyTerminated(v578, *(_QWORD*)(v20 + 2064),
                                                *(_QWORD*)(v20 + 2056)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                else {
                  v578[1] = *(_QWORD*)(v20 + 2056);
                  v245 = *(_QWORD*)(v20 + 2048);
                  v578[2] = *(_QWORD*)(v20 + 2064);
                  v578[0] = v245;
                }
                v579 = *(_BYTE*)(v20 + 2072);
                v577 = GameData_212e528[0] + 16;
                v246 = *(_QWORD*)(v20 + 2076);
                v581 = 0;
                v583 = 0;
                v582 = 0;
                v247 = *(_QWORD*)(v20 + 2088);
                v580 = v246;
                v248 = *(_QWORD*)(v20 + 2096);
                v249 = v248 - v247;
                if (v248 != v247) {
                  if (0xAAAAAAAAAAAAAAABLL * (v249 >> 2) >
                      0x1555555555555555LL) {
                    goto LABEL_237;
                  }
                  v250 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v249, 16, 0),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v251 = v250 + v249;
                  v581 = v250;
                  v582 = v250;
                  v583 = v250 + v249;
                  memcpy(v250, v247, v249),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v582 = v251;
                }
                v252 = *(_DWORD*)(v20 + 2112);
                v577 = v38 + 16;
                v585 = v28 + 16;
                v253 = *(_BYTE*)(v20 + 2128);
                v584 = v252;
                if ((v253 & 1) != 0) {
                  fw_text_String_CopyTerminated(v586, *(_QWORD*)(v20 + 2144),
                                                *(_QWORD*)(v20 + 2136)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                else {
                  v586[1] = *(_QWORD*)(v20 + 2136);
                  v254 = *(_QWORD*)(v20 + 2128);
                  v586[2] = *(_QWORD*)(v20 + 2144);
                  v586[0] = v254;
                }
                v587 = *(_BYTE*)(v20 + 2152);
                v585 = GameData_212e528[0] + 16;
                v255 = *(_QWORD*)(v20 + 2156);
                v589 = 0;
                v591 = 0;
                v590 = 0;
                v256 = *(_QWORD*)(v20 + 2168);
                v588 = v255;
                v257 = *(_QWORD*)(v20 + 2176);
                v258 = v257 - v256;
                if (v257 != v256) {
                  if (0xAAAAAAAAAAAAAAABLL * (v258 >> 2) >
                      0x1555555555555555LL) {
                    goto LABEL_237;
                  }
                  v259 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v258, 16, 0),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v260 = v259 + v258;
                  v589 = v259;
                  v590 = v259;
                  v591 = v259 + v258;
                  memcpy(v259, v256, v258),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v590 = v260;
                }
                v261 = *(_DWORD*)(v20 + 2192);
                v585 = v38 + 16;
                v593 = v28 + 16;
                v262 = *(_BYTE*)(v20 + 2208);
                v592 = v261;
                if ((v262 & 1) != 0) {
                  fw_text_String_CopyTerminated(v594, *(_QWORD*)(v20 + 2224),
                                                *(_QWORD*)(v20 + 2216)),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                }
                else {
                  v594[1] = *(_QWORD*)(v20 + 2216);
                  v263 = *(_QWORD*)(v20 + 2208);
                  v594[2] = *(_QWORD*)(v20 + 2224);
                  v594[0] = v263;
                }
                v595 = *(_BYTE*)(v20 + 2232);
                v6 = v371;
                v593 = GameData_212e528[0] + 16;
                v264 = *(_QWORD*)(v20 + 2236);
                v597 = 0;
                v599 = 0;
                v598 = 0;
                v265 = *(_QWORD*)(v20 + 2248);
                v596 = v264;
                v266 = *(_QWORD*)(v20 + 2256);
                v267 = v266 - v265;
                if (v266 == v265) {
                  goto LABEL_194;
                }
                if (0xAAAAAAAAAAAAAAABLL * (v267 >> 2) <=
                    0x1555555555555555LL) {
                  v268 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, v267, 16, 0),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v269 = v268 + v267;
                  v597 = v268;
                  v598 = v268;
                  v599 = v268 + v267;
                  memcpy(v268, v265, v267),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v598 = v269;
                LABEL_194:
                  v270 = *(_DWORD*)(v20 + 2272);
                  v271 = *(_QWORD*)(v3 + 16);
                  v593 = v38 + 16;
                  v600 = v270;
                  v272 = GameRoutine_b3f6c0(
                      (_QWORD*)(*(_QWORD*)(v271 + 288) + 592LL),
                      (__int64)"Sun"),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  v273 = *((int8x16_t*)v272 + 3);
                  if (*((_BYTE*)v272 + 112) != 0) {
                    v274 = -1;
                  }
                  else {
                    v274 = 0;
                  }
                  if (LANES128_OF(vbslq_s8(vdupq_n_s32(v274),
                                           *((int8x16_t*)v272 + 6), v273))
                          .n128_f32[1] > 0x0.0p+0f) {
                    v273 = *((int8x16_t*)GameRoutine_b3f800(
                                 (_QWORD*)(*(_QWORD*)(v271 + 288) + 592LL),
                                 (__int64)"Moon") +
                             3),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  *(float32x4_t*)(*(_QWORD*)(v3 + 120) + 208LL) =
                      vsubq_f32(COERCE_AS(float32x4_t, 0), v273);
                  v275 = 128;
                  if (BYTE4(v384) != 0) {
                    v275 = 92;
                  }
                  *(_DWORD*)(*(_QWORD*)(v3 + 120) + 224LL) =
                      *(_DWORD*)((char*)&v374 + v275);
                  v276 = 92;
                  if ((_BYTE)v442 != 0) {
                    v276 = 84;
                  }
                  v277 = &(&v374)[v276];
                  v278 = 824;
                  if (BYTE4(v452) != 0) {
                    v278 = 788;
                  }
                  *(_QWORD*)&v279 = *v277;
                  *((_QWORD*)&v279 + 1) =
                      *((unsigned int*)v277 + 2) |
                      ((unsigned __int64)*(unsigned int*)((char*)&v374 + v278)
                       << 32);
                  *(_OWORD*)(*(_QWORD*)(v3 + 120) + 240LL) = v279;
                  v280 = *(_QWORD*)(v3 + 120);
                  *(_QWORD*)(v280 + 280) = v371;
                  *(_DWORD*)(v280 + 288) = v7;
                  CloudSetting_Destructor(&v374),
                      v306 = COERCE_AS(
                          __typeof__(v306),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v319 = COERCE_AS(
                          __typeof__(v319),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v331 = COERCE_AS(
                          __typeof__(v331),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v343 = COERCE_AS(
                          __typeof__(v343),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v355 = COERCE_AS(
                          __typeof__(v355),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                      v367 = COERCE_AS(
                          __typeof__(v367),
                          PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  if (v370 != 0 &&
                      atomic_fetch_add((atomic_ullong* volatile)(v370 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v370 + 16LL))(v370),
                        v306 = COERCE_AS(
                            __typeof__(v306),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v319 = COERCE_AS(
                            __typeof__(v319),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v331 = COERCE_AS(
                            __typeof__(v331),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v343 = COERCE_AS(
                            __typeof__(v343),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v355 = COERCE_AS(
                            __typeof__(v355),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v367 = COERCE_AS(
                            __typeof__(v367),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                    std___1___shared_weak_count___release_weak(v370),
                        v306 = COERCE_AS(
                            __typeof__(v306),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v319 = COERCE_AS(
                            __typeof__(v319),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v331 = COERCE_AS(
                            __typeof__(v331),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v343 = COERCE_AS(
                            __typeof__(v343),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v355 = COERCE_AS(
                            __typeof__(v355),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                        v367 = COERCE_AS(
                            __typeof__(v367),
                            PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                  }
                  v11 = *(_DWORD*)(v3 + 176);
                  v281 = *(_DWORD*)(v3 + 180);
                  v12 = *(_QWORD*)(v3 + 120);
                  goto LABEL_209;
                }
              LABEL_237:
                GameRoutine_aa0e00(),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
              }
              if (0xAAAAAAAAAAAAAAABLL * (v143 >> 4) <= 0x555555555555555LL) {
                v144 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, v143, 16, 0),
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v145 = v144 + v143;
                v484 = v144;
                v485 = v144;
                v486 = v144 + v143;
                memcpy(v144, v141, v143),
                    v306 = COERCE_AS(
                        __typeof__(v306),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v319 = COERCE_AS(
                        __typeof__(v319),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v331 = COERCE_AS(
                        __typeof__(v331),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v343 = COERCE_AS(
                        __typeof__(v343),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v355 = COERCE_AS(
                        __typeof__(v355),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                    v367 = COERCE_AS(
                        __typeof__(v367),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
                v485 = v145;
                goto LABEL_110;
              }
            LABEL_238:
              GameRoutine_abc340(),
                  v306 = COERCE_AS(
                      __typeof__(v306),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v319 = COERCE_AS(
                      __typeof__(v319),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v331 = COERCE_AS(
                      __typeof__(v331),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v343 = COERCE_AS(
                      __typeof__(v343),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v355 = COERCE_AS(
                      __typeof__(v355),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                  v367 = COERCE_AS(
                      __typeof__(v367),
                      PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            }
          }
          v17 = *(_QWORD*)(v15 + 48);
          v19 = *(_QWORD*)(v15 + 56);
          if (v19 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 8), 1u,
                                      memory_order_relaxed);
          }
          if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18),
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
            std___1___shared_weak_count___release_weak(v18),
                v306 =
                    COERCE_AS(__typeof__(v306),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v319 =
                    COERCE_AS(__typeof__(v319),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v331 =
                    COERCE_AS(__typeof__(v331),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v343 =
                    COERCE_AS(__typeof__(v343),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v355 =
                    COERCE_AS(__typeof__(v355),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
                v367 =
                    COERCE_AS(__typeof__(v367),
                              PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
          }
          goto LABEL_32;
        }
      }
      v9 = 4;
    }
    *(_QWORD*)(v3 + 176) = v9;
    goto LABEL_21;
  }
  v10 = *(_DWORD*)(result + 140);
  if (v10 >= 1) {
    v10 = 1;
  }
  *(_DWORD*)(result + 140) = v10;
  return result;
}

#pragma GCC visibility pop
