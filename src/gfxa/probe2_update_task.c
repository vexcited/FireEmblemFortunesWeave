#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_604050(_QWORD);
__int64 GameRoutine_6040f0(_QWORD, _QWORD);
__int64 GameRoutine_b47f40(_QWORD);
__int64 GameRoutine_b6adf0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*gfxa_Probe2UpdateTask_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
__int64 Probe2UpdateTask_Destructor(_QWORD* a1);
_QWORD* Probe2UpdateTask_b47f40(_QWORD* result);
_QWORD* GameRoutine_604020(_QWORD* result);
__attribute__((swiftcall)) void
gfx_shader_Archive_CreateShader(PSEUDO_X8, __int64*, __int64, unsigned __int64,
                                __int64, unsigned __int64);
__int64* GameRoutine_b447c0(__int64* result, unsigned __int64);
__int64 DecalObject_a91100(__int64*, __int64, __int64, __int64);
__int64 GameRoutine_5fc230(__int64 result);
__int64 GameRoutine_604060(__int64, __int64*, __int64);
__int64 GameRoutine_615760(__int64, __int64);
__int64 GameRoutine_ad5280(__int64*);
__int64 ResourceBuilder_b6adf0(_QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 gfxa_TaskIBL_Worker_Worker(__int64*, __int64, int);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 (*GameData_1fc51d8[])();
extern __int64 (*GameData_1fc5278[])();
extern __int64 (*GameData_1fc52f8[])();
extern __int64 (*gfx_render_ViewVolumeCulling_vtable[])();
__int64 gfxa_Probe2UpdateTask_initializeCommon(__int64 a1, __int64 a2,
                                               __int64* a3);

__int64 gfxa_Probe2UpdateTask_initializeCommon(__int64 a1, __int64 a2,
                                               __int64* a3)
{
  __int64 v4;
  __int64 v5;
  unsigned int v6;
  _QWORD* v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 (**v16)();
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 (**v20)();
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v28;
  __int64* v29;
  unsigned __int64 v30;
  __int64* v31;
  __int64* i;
  __int64 v33;
  __int64* v34;
  _QWORD* v35;
  __int64 v36;
  __int64 v37;
  __int64* v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64* v42;
  __int64 result;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  struct {
    __int64 (**v49)();
    __int64 v50;
    char gap16_[16];
    __int64 (***v51)();
  } v49_;
  struct {
    _QWORD v52[2];
    __int64 v53;
    __int64 v54;
  } v52_;

  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = gfxa_Probe2UpdateTask_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  v4 = *a3;
  *(_QWORD*)(a1 + 32) = *a3;
  v5 = a3[1];
  *(_QWORD*)(a1 + 40) = v5;
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    v4 = *(_QWORD*)(a1 + 32);
  }
  v6 = *((_DWORD*)a3 + 4);
  *(_DWORD*)(a1 + 48) = v6;
  if ((v6 & 0x80000000) != 0 || (signed int)v6 >= *(_DWORD*)v4) {
    *(_QWORD*)(a1 + 56) = 0;
    *(_QWORD*)(a1 + 64) = 0;
  }
  else {
    v7 = (_QWORD*)(*(_QWORD*)(v4 + 112) + 48LL * v6);
    *(_QWORD*)(a1 + 56) = *v7;
    v8 = v7[1];
    *(_QWORD*)(a1 + 64) = v8;
    if (v8 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                                memory_order_relaxed);
    }
  }
  v9 = (__int64*)fw_memory_g_heap_manager_ptr;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       272, 16, 0);
  *(_BYTE*)(v10 + 8) = 1;
  *(_BYTE*)(v10 + 256) = 0;
  *(_QWORD*)(v10 + 16) = 0;
  *(_QWORD*)(v10 + 24) = 0;
  *(_QWORD*)(v10 + 32) = 0;
  *(_QWORD*)(v10 + 40) = 0;
  *(_QWORD*)(v10 + 48) = 0;
  *(_QWORD*)(v10 + 56) = 0;
  *(_QWORD*)(v10 + 64) = 0;
  *(_QWORD*)(v10 + 72) = 0;
  *(_QWORD*)(v10 + 80) = 0;
  *(_QWORD*)(v10 + 88) = 0;
  *(_QWORD*)(v10 + 96) = 0;
  *(_QWORD*)(v10 + 104) = 0;
  *(_QWORD*)(v10 + 112) = 0;
  *(_QWORD*)(v10 + 120) = 0;
  *(_QWORD*)(v10 + 128) = 0;
  *(_QWORD*)(v10 + 136) = 0;
  *(_QWORD*)(v10 + 144) = 0;
  *(_QWORD*)(v10 + 152) = 0;
  *(_QWORD*)(v10 + 160) = 0;
  *(_QWORD*)(v10 + 168) = 0;
  *(_QWORD*)(v10 + 176) = 0;
  *(_QWORD*)(v10 + 184) = 0;
  *(_QWORD*)(v10 + 192) = 0;
  *(_QWORD*)(v10 + 200) = 0;
  *(_QWORD*)(v10 + 208) = 0;
  *(_QWORD*)(v10 + 216) = 0;
  *(_QWORD*)(v10 + 224) = 0;
  *(_QWORD*)(v10 + 232) = 0;
  *(_QWORD*)(v10 + 240) = 0;
  *(_QWORD*)(a1 + 72) = v10;
  *(_QWORD*)v10 = gfx_render_ViewVolumeCulling_vtable;
  GameRoutine_604020((_QWORD*)(a1 + 80));
  *(_QWORD*)(a1 + 200) = -1;
  GameRoutine_604020((_QWORD*)(a1 + 208));
  v11 = *v9;
  *(_QWORD*)(a1 + 328) = -1;
  *(_QWORD*)(a1 + 336) = 0;
  *(_QWORD*)(a1 + 344) = 0;
  *(_QWORD*)(a1 + 352) = 0;
  *(_QWORD*)(a1 + 360) = 0;
  *(_QWORD*)(a1 + 368) = 0;
  *(_QWORD*)(a1 + 376) = 0;
  *(_QWORD*)(a1 + 384) = 0;
  *(_QWORD*)(a1 + 392) = 0;
  *(_QWORD*)(a1 + 400) = 0;
  *(_QWORD*)(a1 + 408) = 0;
  *(_QWORD*)(a1 + 416) = 0;
  *(_QWORD*)(a1 + 424) = 0;
  *(_DWORD*)(a1 + 432) = -1;
  *(_QWORD*)(a1 + 456) = 0;
  *(_QWORD*)(a1 + 440) = a1 + 448;
  *(_QWORD*)(a1 + 448) = 0;
  v12 = (_QWORD*)fw_memory_HeapManager_Allocate(v11, 64, 16, 0);
  v12[1] = 0;
  v12[2] = 0;
  v12[4] = 0;
  v12[5] = 0;
  *(_QWORD*)(a1 + 528) = 0;
  *(_QWORD*)(a1 + 480) = 0;
  *(_QWORD*)(a1 + 488) = 0;
  *(_QWORD*)(a1 + 496) = 0;
  *(_QWORD*)(a1 + 504) = 0;
  *(_QWORD*)(a1 + 520) = 0;
  v52_.v53 = 0;
  v52_.v54 = 0;
  v52_.v52[0] = 0;
  v52_.v52[1] = 0;
  v12[6] = 0;
  v12[7] = 0xFFFFFFFF00000000LL;
  v49_.v51 = &v49_.v49;
  *v12 = GameData_1fc51d8;
  v12[3] = 0;
  *(_QWORD*)(a1 + 464) = v12 + 3;
  *(_QWORD*)(a1 + 472) = v12;
  *(_DWORD*)(a1 + 512) = 1065353216;
  *(_QWORD*)(a1 + 533) = 0;
  v49_.v49 = GameData_1fc5278;
  GameRoutine_5fc230((__int64)v52_.v52);
  if (v49_.v51 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v49_.v51)[6])(v49_.v51,
                                                             v52_.v52);
  }
  v13 = game_g_frame_clock_ptr[0];
  GameRoutine_604060(a1 + 80, (__int64*)(*game_g_frame_clock_ptr[0] + 568),
                     (__int64)v52_.v52);
  *(_QWORD*)(a1 + 200) = GameRoutine_615760(*(_QWORD*)(*v13 + 552), a1 + 80);
  if (v49_.v51 == &v49_.v49) {
    v14 = 4;
  }
  else {
    if (v49_.v51 == nullptr) {
      goto LABEL_15;
    }
    v14 = 5;
  }
  ((__int64 (*)(__int64))(*v49_.v51)[v14])((__int64)v49_.v51);
LABEL_15:
  v52_.v53 = 0;
  v52_.v54 = 0;
  v52_.v52[0] = 0;
  v52_.v52[1] = 0;
  v49_.v49 = GameData_1fc52f8;
  v49_.v51 = &v49_.v49;
  GameRoutine_5fc230((__int64)v52_.v52);
  if (v49_.v51 != nullptr) {
    ((void (*)(__int64 (***)(void), _QWORD*))(*v49_.v51)[6])(v49_.v51,
                                                             v52_.v52);
  }
  GameRoutine_604060(a1 + 208, (__int64*)(*v13 + 568), (__int64)v52_.v52);
  *(_QWORD*)(a1 + 328) = GameRoutine_615760(*(_QWORD*)(*v13 + 552), a1 + 208);
  if (v49_.v51 == &v49_.v49) {
    v15 = 4;
    goto LABEL_21;
  }
  if (v49_.v51 != nullptr) {
    v15 = 5;
  LABEL_21:
    ((__int64 (*)(__int64))(*v49_.v51)[v15])((__int64)v49_.v51);
  }
  gfx_shader_Archive_CreateShader(
      (void*)(&v49_.v49), *(__int64**)(*(_QWORD*)(a1 + 8) + 13408LL),
      (__int64)"Probe", 5u, (__int64)"LS2RelightProbe", 0xFu);
  v16 = v49_.v49;
  v17 = v49_.v50;
  v18 = *(_QWORD*)(a1 + 344);
  v49_.v49 = nullptr;
  v49_.v50 = 0;
  *(_QWORD*)(a1 + 336) = v16;
  *(_QWORD*)(a1 + 344) = v17;
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
  }
  v19 = v49_.v50;
  if (v49_.v50 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49_.v50 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak(v19);
  }
  GameRoutine_ad5280(*(__int64**)(a1 + 336));
  gfx_shader_Archive_CreateShader(
      (void*)(&v49_.v49), *(__int64**)(*(_QWORD*)(a1 + 8) + 13408LL),
      (__int64)"Probe", 5u, (__int64)"LS2GenMip", 9u);
  v20 = v49_.v49;
  v21 = v49_.v50;
  v22 = *(_QWORD*)(a1 + 360);
  v49_.v49 = nullptr;
  v49_.v50 = 0;
  *(_QWORD*)(a1 + 352) = v20;
  *(_QWORD*)(a1 + 360) = v21;
  if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
    std___1___shared_weak_count___release_weak(v22);
  }
  v23 = v49_.v50;
  if (v49_.v50 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v49_.v50 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
    std___1___shared_weak_count___release_weak(v23);
  }
  GameRoutine_ad5280(*(__int64**)(a1 + 352));
  v28 = *(_QWORD*)(a1 + 368);
  v29 = *(__int64**)(a1 + 376);
  v30 = 0x6DB6DB6DB6DB6DB7LL * (((__int64)v29 - v28) >> 3);
  if (v30 > 0xB) {
    if ((_UNKNOWN*)((char*)v29 - v28) == ((_UNKNOWN*)0x2A0LL)) {
      v31 = *(__int64**)(a1 + 376);
    }
    else {
      v31 = (__int64*)(v28 + 672);
      if ((__int64*)(v28 + 672) != v29) {
        do {
          v46 = *(v29 - 6);
          *(v29 - 6) = 0;
          if (v46 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v46 + 8LL))(v46);
          }
          v48 = *(v29 - 7);
          v29 -= 7;
          v47 = v48;
          *v29 = 0;
          if (v48 != 0) {
            (*(void (**)(__int64))(*(_QWORD*)v47 + 8LL))(v47);
          }
        } while (v29 != v31);
      }
      *(_QWORD*)(a1 + 376) = v31;
    }
  }
  else {
    GameRoutine_b447c0((__int64*)(a1 + 368), 12 - v30);
    v31 = *(__int64**)(a1 + 376);
  }
  for (i = *(__int64**)(a1 + 368); i != v31; i += 7) {
    DecalObject_a91100(
        i, *(_QWORD*)(*(_QWORD*)(a1 + 8) + 312LL),
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 552LL) + 16LL), 220);
  }
  v33 = *(_QWORD*)(a1 + 8);
  v34 = (__int64*)fw_memory_HeapManager_Allocate(*v9, 184, 16, 0);
  gfxa_TaskIBL_Worker_Worker(v34, v33, 0);
  v35 = *(_QWORD**)(a1 + 392);
  *(_QWORD*)(a1 + 392) = v34;
  if (v35 != nullptr) {
    ResourceBuilder_b6adf0(v35);
    v36 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v9 + v36);
  }
  v37 = *(_QWORD*)(a1 + 8);
  v38 = (__int64*)fw_memory_HeapManager_Allocate(*v9, 184, 16, 0);
  gfxa_TaskIBL_Worker_Worker(v38, v37, 1);
  v39 = *(_QWORD**)(a1 + 400);
  *(_QWORD*)(a1 + 400) = v38;
  if (v39 != nullptr) {
    ResourceBuilder_b6adf0(v39);
    v40 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v9 + v40);
  }
  v41 = *(_QWORD*)(a1 + 8);
  v42 = (__int64*)fw_memory_HeapManager_Allocate(*v9, 184, 16, 0);
  result = gfxa_TaskIBL_Worker_Worker(v42, v41, 2);
  v44 = *(_QWORD**)(a1 + 408);
  *(_QWORD*)(a1 + 408) = v42;
  if (v44 != nullptr) {
    ResourceBuilder_b6adf0(v44);
    v45 = 128;
    if (*(_QWORD*)(*v9 + 200) == 0) {
      v45 = 56;
    }
    return nn_mem_StandardAllocator_Free_alt1(*v9 + v45);
  }
  return result;
}

__int64 Probe2UpdateTask_Destructor(_QWORD* a1)
{
  __int64* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
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
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 result;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  *a1 = gfxa_Probe2UpdateTask_vtable;
  v2 = game_g_frame_clock_ptr[0];
  GameRoutine_6040f0(a1 + 26, *game_g_frame_clock_ptr[0] + 568);
  GameRoutine_6040f0(a1 + 10, *v2 + 568);
  v3 = (_QWORD*)a1[62];
  v4 = fw_memory_g_heap_manager_ptr;
  while (v3 != nullptr) {
    v6 = v3;
    v3 = (_QWORD*)*v3;
    v7 = v6[11];
    if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v8 = v6;
      (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
      std___1___shared_weak_count___release_weak(v7);
      v6 = v8;
    }
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
      v5 = 128;
    }
    else {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v5, v6);
  }
  v9 = a1[60];
  a1[60] = 0;
  if (v9 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v9);
  }
  v11 = a1[59];
  if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    std___1___shared_weak_count___release_weak(v11);
  }
  GameRoutine_b47f40(a1[56]);
  v12 = a1[53];
  if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    std___1___shared_weak_count___release_weak(v12);
  }
  v13 = a1[51];
  a1[51] = 0;
  if (v13 != 0) {
    GameRoutine_b6adf0(v13);
    v14 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v14, v13);
  }
  v15 = a1[50];
  a1[50] = 0;
  if (v15 != 0) {
    GameRoutine_b6adf0(v15);
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v16, v15);
  }
  v17 = a1[49];
  a1[49] = 0;
  if (v17 != 0) {
    GameRoutine_b6adf0(v17);
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v18, v17);
  }
  v19 = (_QWORD*)a1[46];
  if (v19 != nullptr) {
    v20 = (_QWORD*)a1[47];
    if (v19 == v20) {
      goto LABEL_41;
    }
    do {
      v21 = *(v20 - 6);
      *(v20 - 6) = 0;
      if (v21 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 8LL))(v21);
      }
      v23 = *(v20 - 7);
      v20 -= 7;
      v22 = v23;
      *v20 = 0;
      if (v23 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v22 + 8LL))(v22);
      }
    } while (v20 != v19);
    v24 = (_QWORD*)a1[46];
    a1[47] = v19;
    v19 = v24;
    if (v24 != nullptr) {
    LABEL_41:
      v25 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v25, v19);
    }
  }
  v26 = a1[45];
  if (v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
    std___1___shared_weak_count___release_weak(v26);
  }
  v27 = a1[43];
  if (v27 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
    std___1___shared_weak_count___release_weak(v27);
  }
  GameRoutine_604050(a1 + 26);
  result = GameRoutine_604050(a1 + 10);
  v29 = a1[9];
  a1[9] = 0;
  if (v29 != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v30 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v30, v29);
  }
  v31 = a1[8];
  if (v31 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
    result = std___1___shared_weak_count___release_weak(v31);
  }
  v32 = a1[5];
  if (v32 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v32 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
    result = std___1___shared_weak_count___release_weak(v32);
    v33 = a1[3];
    if (v33 == 0) {
      return result;
    }
  }
  else {
    v33 = a1[3];
    if (v33 == 0) {
      return result;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v33 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    return std___1___shared_weak_count___release_weak(v33);
  }
  return result;
}

_QWORD* Probe2UpdateTask_b47f40(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;

  if (result != nullptr) {
    v1 = result;
    Probe2UpdateTask_b47f40(*result);
    Probe2UpdateTask_b47f40(v1[1]);
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
  }
  return result;
}

#pragma GCC visibility pop
