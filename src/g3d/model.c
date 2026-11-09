#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_5e39c0(_QWORD, _QWORD);
__int64 GameRoutine_a67640(_QWORD, _QWORD);
__int64 GameRoutine_a677e0(_QWORD, _QWORD);
__int64 GameRoutine_a67980(_QWORD, _QWORD);
__int64 GameRoutine_a69c80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_b3cae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 gxc_GpuMemory_Destroy_GpuMemory(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, long double);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fc0208[])();
extern __int64 (*g3d_Model_vtable[])();
extern __int64 (*gfx_render_Object_vtable[])();
extern __int64 GameData_212c060;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn)) GameRoutine_a67330(void);
void __attribute__((noreturn)) GameRoutine_a67b90(_QWORD);
__int64 Model_Destructor(__int64 a1, long double a2);
__int64 Model_Unknown3(__int64 result, char a2);
__int64 Model_Unknown15(__int64 a1, int a2);
__int64 Model_a65960(__int64 result, __int64* a2, __int64 a3, __int64 a4,
                     __int64 a5, __int64 a6);
__int64 Model_a66080(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7);
__int64 Model_a661a0(__int64 a1, int a2, __int64 a3, int a4);
__int64* Model_a66700(__int64* result, int a2);
__int64* Model_a66d00(__int64* result, int a2);

__int64 Model_Destructor(__int64 a1, long double a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 i;
  __int64 v16;
  __int64 v17;
  __int64 j;
  __int64 v19;
  __int64 v20;
  __int64 k;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  long double v25;
  _QWORD* v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  _QWORD* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  _QWORD* v47;
  __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _QWORD* v58;
  __int64 v59;
  _QWORD* v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 result;
  long double v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;

  v2 = *(_QWORD**)(a1 + 584);
  v3 = *(_QWORD**)(a1 + 576);
  *(_QWORD*)a1 = g3d_Model_vtable;
  *(_QWORD*)(a1 + 624) = *(_QWORD*)(a1 + 616);
  *(_QWORD*)(a1 + 368) = *(_QWORD*)(a1 + 360);
  *(_QWORD*)(a1 + 392) = *(_QWORD*)(a1 + 384);
  v5 = fw_memory_g_heap_manager_ptr;
  if (v3 != v2) {
    while (1) {
      v8 = (_QWORD*)*--v2;
      v7 = v8;
      *v2 = 0;
      if (v8 != nullptr) {
        break;
      }
    LABEL_7:
      if (v2 == v3) {
        goto LABEL_21;
      }
    }
    v9 = v7[7];
    if (v9 != 0) {
      v10 = *(_QWORD*)v5;
      v7[8] = v9;
      if (*(_QWORD*)(v10 + 200) != 0) {
        v11 = 128;
      }
      else {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(v10 + v11, a2);
    }
    v12 = v7[3];
    if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
      v13 = v7[1];
      if (v13 != 0) {
      LABEL_17:
        if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak(v13);
        }
      }
    }
    else {
      v13 = v7[1];
      if (v13 != 0) {
        goto LABEL_17;
      }
    }
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
      v6 = 128;
    }
    else {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v6, a2);
    goto LABEL_7;
  }

LABEL_21:
  *(_QWORD*)(a1 + 584) = v3;
  v14 = *(_QWORD*)(a1 + 312);
  for (i = *(_QWORD*)(a1 + 320); i != v14; i -= 16) {
    v16 = *(_QWORD*)(i - 8);
    if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak(v16);
    }
  }
  *(_QWORD*)(a1 + 320) = v14;
  v17 = *(_QWORD*)(a1 + 336);
  for (j = *(_QWORD*)(a1 + 344); j != v17; j -= 16) {
    v19 = *(_QWORD*)(j - 8);
    if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak(v19);
    }
  }
  *(_QWORD*)(a1 + 344) = v17;
  v20 = *(_QWORD*)(a1 + 288);
  for (k = *(_QWORD*)(a1 + 296); k != v20; k -= 16) {
    v22 = *(_QWORD*)(k - 8);
    if (v22 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v22 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak(v22);
    }
  }
  *(_QWORD*)(a1 + 296) = v20;
  v23 = game_g_frame_clock_ptr[0];
  if ((*(_WORD*)(a1 + 162) & 1) != 0) {
    GameRoutine_5e39c0(a1 + 136, *game_g_frame_clock_ptr[0] + 568);
  }
  v24 = *(_QWORD*)(*v23 + 80);
  v94 = *(_QWORD*)(a1 + 208);
  if (v24 == 0) {
    GameRoutine_60a310(0);
  }
  (*(void (**)(__int64, __int64*))(*(_QWORD*)v24 + 48LL))(v24, &v94);
  v26 = *(_QWORD**)(a1 + 800);
  if (v26 == (_QWORD*)(a1 + 768)) {
    v27 = 32;
  }
  else {
    if (v26 == nullptr) {
      goto LABEL_47;
    }
    v27 = 40;
  }
  (*(void (**)(__int64))(*v26 + v27))((__int64)v26);

LABEL_47:
  v28 = *(_QWORD**)(a1 + 752);
  if (v28 == (_QWORD*)(a1 + 720)) {
    v29 = 32;
    goto LABEL_51;
  }
  if (v28 != nullptr) {
    v29 = 40;
  LABEL_51:
    (*(void (**)(__int64))(*v28 + v29))((__int64)v28);
  }
  v30 = *(_QWORD*)(a1 + 688);
  if (v30 == 0) {
    goto LABEL_65;
  }
  v31 = *(_QWORD*)(a1 + 696);
  if (v30 == v31) {
  LABEL_62:
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v35, v25);
    goto LABEL_65;
  }
  do {
    v33 = *(_QWORD**)(v31 - 16);
    if ((_QWORD*)(v31 - 48) == v33) {
      v32 = 32;
    LABEL_56:
      (*(void (**)(__int64))(*v33 + v32))((__int64)v33);
      goto LABEL_57;
    }
    if (v33 != nullptr) {
      v32 = 40;
      goto LABEL_56;
    }
  LABEL_57:
    v31 -= 64;
  } while (v31 != v30);
  v34 = *(_QWORD*)(a1 + 688);
  *(_QWORD*)(a1 + 696) = v30;
  if (v34 != 0) {
    goto LABEL_62;
  }

LABEL_65:
  v36 = *(_QWORD*)(a1 + 656);
  if (v36 == 0) {
    goto LABEL_78;
  }
  v37 = *(_QWORD*)(a1 + 664);
  if (v36 == v37) {
  LABEL_75:
    v41 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v41 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v41, v25);
    goto LABEL_78;
  }
  while (2) {
    v39 = *(_QWORD**)(v37 - 16);
    if ((_QWORD*)(v37 - 48) == v39) {
      v38 = 32;
      goto LABEL_69;
    }
    if (v39 != nullptr) {
      v38 = 40;
    LABEL_69:
      (*(void (**)(__int64))(*v39 + v38))((__int64)v39);
    }
    v37 -= 64;
    if (v37 != v36) {
      continue;
    }
    break;
  }
  v40 = *(_QWORD*)(a1 + 656);
  *(_QWORD*)(a1 + 664) = v36;
  if (v40 != 0) {
    goto LABEL_75;
  }

LABEL_78:
  v42 = *(_QWORD*)(a1 + 648);
  *(_QWORD*)(a1 + 648) = 0;
  if (v42 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 8LL))(v42);
  }
  v43 = *(_QWORD*)(a1 + 616);
  if (v43 != 0) {
    v44 = *(_QWORD*)v5;
    *(_QWORD*)(a1 + 624) = v43;
    v45 = 128;
    if (*(_QWORD*)(v44 + 200) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free(v44 + v45, v25);
  }
  v46 = *(_QWORD**)(a1 + 576);
  if (v46 == nullptr) {
    goto LABEL_109;
  }
  v47 = *(_QWORD**)(a1 + 584);
  if (v46 == v47) {
    goto LABEL_106;
  }
  while (2) {
    v50 = (_QWORD*)*--v47;
    v49 = v50;
    *v47 = 0;
    if (v50 != nullptr) {
      v51 = v49[7];
      if (v51 != 0) {
        v52 = *(_QWORD*)v5;
        v49[8] = v51;
        if (*(_QWORD*)(v52 + 200) != 0) {
          v53 = 128;
        }
        else {
          v53 = 56;
        }
        nn_mem_StandardAllocator_Free(v52 + v53, v25);
      }
      v54 = v49[3];
      if (v54 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v54 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
        std___1___shared_weak_count___release_weak(v54);
        v55 = v49[1];
        if (v55 != 0) {
          goto LABEL_101;
        }
      }
      else {
        v55 = v49[1];
        if (v55 != 0) {
        LABEL_101:
          if (atomic_fetch_add((atomic_ullong* volatile)(v55 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v55 + 16LL))(v55);
            std___1___shared_weak_count___release_weak(v55);
          }
        }
      }
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
        v48 = 128;
      }
      else {
        v48 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v48, v25);
    }
    if (v47 != v46) {
      continue;
    }
    break;
  }
  v56 = *(_QWORD*)(a1 + 576);
  *(_QWORD*)(a1 + 584) = v46;
  if (v56 != 0) {
  LABEL_106:
    v57 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v57 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v57, v25);
  }

LABEL_109:
  v58 = *(_QWORD**)(a1 + 560);
  if (v58 == (_QWORD*)(a1 + 528)) {
    v59 = 32;
  LABEL_113:
    (*(void (**)(__int64))(*v58 + v59))((__int64)v58);
  }
  else if (v58 != nullptr) {
    v59 = 40;
    goto LABEL_113;
  }
  v60 = *(_QWORD**)(a1 + 408);
  if (v60 != nullptr) {
    v61 = *(_QWORD**)(a1 + 416);
    if (v60 == v61) {
      goto LABEL_123;
    }
    do {
      v62 = *(v61 - 6);
      *(v61 - 6) = 0;
      if (v62 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v62 + 8LL))(v62);
      }
      v64 = *(v61 - 7);
      v61 -= 7;
      v63 = v64;
      *v61 = 0;
      if (v64 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v63 + 8LL))(v63);
      }
    } while (v61 != v60);
    v65 = *(_QWORD*)(a1 + 408);
    *(_QWORD*)(a1 + 416) = v60;
    if (v65 != 0) {
    LABEL_123:
      v66 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v66 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v66, v25);
    }
  }
  v67 = *(_QWORD*)(a1 + 384);
  if (v67 != 0) {
    v68 = *(_QWORD*)v5;
    *(_QWORD*)(a1 + 392) = v67;
    v69 = 128;
    if (*(_QWORD*)(v68 + 200) == 0) {
      v69 = 56;
    }
    nn_mem_StandardAllocator_Free(v68 + v69, v25);
  }
  v70 = *(_QWORD*)(a1 + 360);
  if (v70 != 0) {
    v71 = *(_QWORD*)v5;
    *(_QWORD*)(a1 + 368) = v70;
    v72 = 128;
    if (*(_QWORD*)(v71 + 200) == 0) {
      v72 = 56;
    }
    nn_mem_StandardAllocator_Free(v71 + v72, v25);
  }
  v73 = *(_QWORD*)(a1 + 336);
  if (v73 != 0) {
    v74 = *(_QWORD*)(a1 + 344);
    if (v73 == v74) {
      goto LABEL_142;
    }
    do {
      v75 = *(_QWORD*)(v74 - 8);
      if (v75 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v75 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
        std___1___shared_weak_count___release_weak(v75);
      }
      v74 -= 16;
    } while (v74 != v73);
    v76 = *(_QWORD*)(a1 + 336);
    *(_QWORD*)(a1 + 344) = v73;
    if (v76 != 0) {
    LABEL_142:
      v77 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v77 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v77, v25);
    }
  }
  v78 = *(_QWORD*)(a1 + 312);
  if (v78 != 0) {
    v79 = *(_QWORD*)(a1 + 320);
    if (v78 == v79) {
      goto LABEL_153;
    }
    do {
      v80 = *(_QWORD*)(v79 - 8);
      if (v80 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v80 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v80 + 16LL))(v80);
        std___1___shared_weak_count___release_weak(v80);
      }
      v79 -= 16;
    } while (v79 != v78);
    v81 = *(_QWORD*)(a1 + 312);
    *(_QWORD*)(a1 + 320) = v78;
    if (v81 != 0) {
    LABEL_153:
      v82 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v82 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v82, v25);
    }
  }
  v83 = *(_QWORD*)(a1 + 288);
  if (v83 != 0) {
    v84 = *(_QWORD*)(a1 + 296);
    if (v83 == v84) {
      goto LABEL_164;
    }
    do {
      v85 = *(_QWORD*)(v84 - 8);
      if (v85 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v85 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v85 + 16LL))(v85);
        std___1___shared_weak_count___release_weak(v85);
      }
      v84 -= 16;
    } while (v84 != v83);
    v86 = *(_QWORD*)(a1 + 288);
    *(_QWORD*)(a1 + 296) = v83;
    if (v86 != 0) {
    LABEL_164:
      v87 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v87 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v87, v25);
    }
  }
  result = gxc_GpuMemory_Destroy_GpuMemory(a1 + 256);
  v90 = *(_QWORD*)(a1 + 80);
  *(_QWORD*)a1 = gfx_render_Object_vtable;
  if (v90 != 0) {
    v91 = *(_QWORD*)v5;
    *(_QWORD*)(a1 + 88) = v90;
    v92 = 128;
    if (*(_QWORD*)(v91 + 200) == 0) {
      v92 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v91 + v92, v89);
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0 && *(_QWORD*)(a1 + 24) != 0) {
    v93 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v93 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v93, v89);
  }
  return result;
}

__int64 Model_Unknown3(__int64 result, char a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  if ((a2 & 1) != 0) {
    v2 = result;
    v3 = *(unsigned __int16*)(*(_QWORD*)(result + 112) + 106LL);
    if ((*(unsigned __int16*)(**(_QWORD**)(result + 280) + 60LL) |
         *(unsigned __int16*)(**(_QWORD**)(result + 280) + 58LL)) != 0 &&
        (_DWORD)v3 != 0) {
      v5 = 0;
      v6 = 56 * v3;
      do {
        v7 = *(int*)(v2 + 496);
        if ((int)v7 >= -1) {
          v8 = (v7 + 1) & 1;
        }
        else {
          v8 = -((v7 + 1) & 1);
        }
        v9 = *(_QWORD*)(*(_QWORD*)(v2 + 408) + 8 * v7 + v5);
        v10 = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 56LL))(v9);
        v11 = *(_QWORD*)(*(_QWORD*)(v2 + 408) + 8LL * v8 + v5);
        v12 = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 56LL))(v11);
        memcpy(v10, v12, *(_QWORD*)(*(_QWORD*)(v2 + 280) + 72LL));
        (*(void (**)(__int64))(*(_QWORD*)v11 + 64LL))(v11);
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 64LL))(v9);
        v5 += 56;
      } while (v6 != v5);
    }
  }
  return result;
}

__int64 Model_Unknown15(__int64 a1, int a2)
{
  int v2;
  _QWORD* v3;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  v2 = *(unsigned __int16*)(a1 + 164);
  if (*(_WORD*)(a1 + 164) == 0) {
    return 0;
  }
  v3 = *(_QWORD**)(a1 + 176);
  v4 = *(_QWORD*)(a1 + 384);
  v5 = *(_DWORD*)(a1 + 252) - 1;
  if (v5 >= a2) {
    v5 = a2;
  }
  if (a2 >= 0) {
    v6 = v5;
  }
  else {
    v6 = 0;
  }
  v7 = v6;
  if (v4 != *(_QWORD*)(a1 + 392)) {
    v8 = 1LL << v6;
    if (v2 == 1) {
      v9 = 0;
      result = 0;
    }
    else {
      v17 = (_QWORD*)(v4 + 8);
      v9 = 0;
      result = 0;
      v18 = v3;
      do {
        if (v7 < *(unsigned __int8*)(*v18 + 91LL) && (*(v17 - 1) & v8) == 0) {
          v20 = *(_QWORD*)(*v18 + 24LL);
          if (v20 != 0) {
            v21 = v20 + 56LL * v7;
            if (*(_DWORD*)(v21 + 36) == 3) {
              result = *(_DWORD*)(v21 + 44) / 3u + (unsigned int)result;
            }
          }
        }
        v22 = v18[14];
        if (v7 < *(unsigned __int8*)(v22 + 91) && (*v17 & v8) == 0) {
          v24 = *(_QWORD*)(v22 + 24);
          if (v24 != 0) {
            v25 = v24 + 56LL * v7;
            if (*(_DWORD*)(v25 + 36) == 3) {
              result = *(_DWORD*)(v25 + 44) / 3u + (unsigned int)result;
            }
          }
        }
        v9 += 2;
        v18 += 28;
        v17 += 2;
      } while ((v2 & 0xFFFE) != v9);
    }
    if ((v2 & 1) == 0) {
      return result;
    }
    v11 = v3[14 * v9];
    v12 = *(_QWORD*)(v4 + 8 * v9) & v8;
    if (v7 >= *(unsigned __int8*)(v11 + 91) || v12 != 0) {
      return result;
    }
  LABEL_21:
    v15 = *(_QWORD*)(v11 + 24);
    if (v15 != 0) {
      v16 = v15 + 56LL * v7;
      if (*(_DWORD*)(v16 + 36) == 3) {
        return *(_DWORD*)(v16 + 44) / 3u + (unsigned int)result;
      }
    }
    return result;
  }
  if (v2 == 1) {
    v14 = 0;
    result = 0;
  }
  else {
    v14 = 0;
    result = 0;
    v26 = v3;
    do {
      if (v6 < *(unsigned __int8*)(*v26 + 91LL)) {
        v27 = *(_QWORD*)(*v26 + 24LL);
        if (v27 != 0) {
          v28 = v27 + 56LL * v6;
          if (*(_DWORD*)(v28 + 36) == 3) {
            result = *(_DWORD*)(v28 + 44) / 3u + (unsigned int)result;
          }
        }
      }
      v29 = v26[14];
      if (v6 < *(unsigned __int8*)(v29 + 91)) {
        v30 = *(_QWORD*)(v29 + 24);
        if (v30 != 0) {
          v31 = v30 + 56LL * v6;
          if (*(_DWORD*)(v31 + 36) == 3) {
            result = *(_DWORD*)(v31 + 44) / 3u + (unsigned int)result;
          }
        }
      }
      v14 += 2;
      v26 += 28;
    } while ((v2 & 0xFFFE) != v14);
  }
  if ((v2 & 1) != 0) {
    v11 = v3[14 * v14];
    if (v6 < *(unsigned __int8*)(v11 + 91)) {
      goto LABEL_21;
    }
  }
  return result;
}

__int64 Model_a65960(__int64 result, __int64* a2, __int64 a3, __int64 a4,
                     __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  long double v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  bool v37;
  char v38;
  bool v39;
  bool v40;
  char v41;
  __int64* v42;
  __int64* v43;
  __int64 v44;
  __int64 v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  int v50;
  __int64 v51;
  int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  bool v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  __int64 v70;
  __int64 v71;
  int v72;
  char v73;
  bool v74;
  bool v75;
  char v76;
  __int64 v77;
  __int64 v78;
  int v79;
  __int16 v80;
  int v81;
  __int16 v82;

  v6 = *a2;
  v7 = a2[1];
  v9 = result;
  v10 = v7 - *a2;
  v11 = *(int*)(result + 252);
  v12 = 0xAAAAAAAAAAAAAAABLL * (v10 >> 3);
  v13 = v11 - v12;
  if (v11 <= v12) {
    if (v11 >= v12) {
      goto LABEL_18;
    }
    v29 = v6 + 24LL * (int)v11;
    goto LABEL_17;
  }
  v14 = a2[2];
  if (0xAAAAAAAAAAAAAAABLL * ((v14 - v7) >> 3) >= v13) {
    result = memset(a2[1], 0, 24 * ((24 * v13 - 24) / 0x18) + 24, a4, a5, a6);
    v29 = v7 + 24 * ((24 * v13 - 24) / 0x18) + 24;
  LABEL_17:
    a2[1] = v29;
    goto LABEL_18;
  }
  if ((v11 & 0x80000000) != 0) {
    GameRoutine_a67330();
  }
  v15 = 0xAAAAAAAAAAAAAAABLL * ((v14 - v6) >> 3);
  v16 = 2 * v15;
  if (2 * v15 <= v11) {
    v16 = *(int*)(result + 252);
  }
  if (v15 >= 0x555555555555555LL) {
    v17 = 0xAAAAAAAAAAAAAAALL;
  }
  else {
    v17 = v16;
  }
  if (v17 > 0xAAAAAAAAAAAAAAALL) {
    GameRoutine_60a210(result);
  }
  v18 = 3 * v17;
  v19 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       24 * v17, 16, 0);
  v20 = v19 + v10;
  v21 = v19;
  v22 = v19 + 8 * v18;
  v23 = 24 * ((24 * v13 - 24) / 0x18) + 24;
  memset(v19 + v10, 0, v23, v24, v25, v26);
  result = memcpy(v21, v6, v10);
  *a2 = v21;
  a2[1] = v20 + v23;
  a2[2] = v22;
  if (v6 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v27);
  }

LABEL_18:
  v30 = *(unsigned __int16*)(v9 + 164);
  v82 = 0;
  v81 = 0;
  if ((_DWORD)v30 != 0) {
    if ((int)v11 > 0) {
      v31 = v11 & 0x7FFFFFFE;
      v32 = -1;
      v33 = 0;
      v34 = 0;
      result = 24;
      while (1) {
        v35 = *(_QWORD*)(v9 + 176) + 112 * v33;
        if (v32 != *(unsigned __int16*)(*(_QWORD*)v35 + 82LL)) {
          v34 = *(_QWORD*)(*(_QWORD*)(v9 + 312) +
                           16LL * *(unsigned __int16*)(*(_QWORD*)v35 + 82LL));
          v32 = *(unsigned __int16*)(*(_QWORD*)v35 + 82LL);
        }
        v36 = *(_QWORD*)(v9 + 616);
        LOBYTE(v81) = 1;
        v79 = 0;
        LODWORD(v36) = *(_DWORD*)(v36 + 8 * v33);
        v80 = 0;
        v37 = (v36 & 0x8000) == 0;
        v38 = v36 & 1;
        v39 = (v36 & 2) != 0;
        v40 = (v36 & 4) != 0;
        v41 = v37;
        HIBYTE(v82) = v40;
        HIBYTE(v81) = v38;
        LOBYTE(v82) = v39;
        BYTE1(v81) = v41;
        BYTE2(v81) = v41;
        v42 = *(__int64**)(v34 + 288);
        v43 = *(__int64**)(v34 + 296);
        if (v42 == v43) {
          goto LABEL_22;
        }
        do {
          v45 = *v42 >> 32;
          if ((*((_BYTE*)&v79 + v45) & 1) == 0 && *((_BYTE*)&v81 + v45) == 1) {
            if ((unsigned int)(HIDWORD(*v42) - 3) < 3 &&
                (*(_DWORD*)(*(_QWORD*)(v9 + 616) + 8 * v33) & 0xC000) ==
                    0x8000) {
              v46 = 0;
              if (v11 != 1) {
                v47 = 4 * v45;
                while (1) {
                  v49 = *(_QWORD*)(v9 + 384);
                  v50 = *(unsigned __int8*)(*(_QWORD*)v35 + 91LL) - 1;
                  if (v50 >= (int)v46) {
                    v50 = v46;
                  }
                  if (v49 == *(_QWORD*)(v9 + 392) ||
                      ((*(_QWORD*)(v49 + 8 * v33) >> v50) & 1) == 0) {
                    break;
                  }
                LABEL_53:
                  v52 = *(unsigned __int8*)(*(_QWORD*)v35 + 91LL) - 1;
                  v53 = *(_QWORD*)(v9 + 384);
                  if (v52 >= (int)v46 + 1) {
                    v52 = v46 + 1;
                  }
                  if (v53 == *(_QWORD*)(v9 + 392) ||
                      ((*(_QWORD*)(v53 + 8 * v33) >> v52) & 1) == 0) {
                    if (v52 != -2) {
                      v48 = *(_QWORD*)(*(_QWORD*)v35 + 24LL);
                      if (v48 == 0) {
                        goto LABEL_41;
                      }
                      v48 += 56LL * v52;
                      if (*(_DWORD*)(v48 + 36) == 3) {
                        LODWORD(v48) = *(_DWORD*)(v48 + 44) / 3u;
                        goto LABEL_41;
                      }
                    }
                    LODWORD(v48) = 0;
                  LABEL_41:
                    *(_DWORD*)(*a2 + v47 + 24) += v48;
                  }
                  v46 += 2LL;
                  v47 += 48;
                  if (v31 == v46) {
                    goto LABEL_88;
                  }
                }
                if (v50 != -2) {
                  v51 = *(_QWORD*)(*(_QWORD*)v35 + 24LL);
                  if (v51 == 0) {
                  LABEL_52:
                    *(_DWORD*)(*a2 + v47) += v51;
                    goto LABEL_53;
                  }
                  v51 += 56LL * v50;
                  if (*(_DWORD*)(v51 + 36) == 3) {
                    LODWORD(v51) = *(_DWORD*)(v51 + 44) / 3u;
                    goto LABEL_52;
                  }
                }
                LODWORD(v51) = 0;
                goto LABEL_52;
              }
            LABEL_88:
              if ((v11 & 1) == 0) {
                goto LABEL_32;
              }
              v64 = *(_QWORD*)(v9 + 384);
              v65 = *(unsigned __int8*)(*(_QWORD*)v35 + 91LL) - 1;
              if (v65 >= (int)v46) {
                v65 = v46;
              }
              if (v64 != *(_QWORD*)(v9 + 392) &&
                  ((*(_QWORD*)(v64 + 8 * v33) >> v65) & 1) != 0) {
                goto LABEL_32;
              }
              if (v65 != -2) {
                v44 = *(_QWORD*)(*(_QWORD*)v35 + 24LL);
                if (v44 != 0) {
                  v44 += 56LL * v65;
                  goto LABEL_101;
                }
              LABEL_31:
                *(_DWORD*)(*a2 + 24 * v46 + 4 * v45) += v44;
              LABEL_32:
                *((_BYTE*)&v79 + v45) = 1;
                goto LABEL_33;
              }
            }
            else {
              if (v11 == 1) {
                v46 = 0;
              }
              else {
                v54 = 4 * v45;
                v55 = 0;
                v46 = 0;
                do {
                  v57 = *(_QWORD*)(v9 + 384);
                  if (v57 == *(_QWORD*)(v9 + 392)) {
                    LOBYTE(v58) = 0;
                  }
                  else {
                    v58 = (*(_QWORD*)(v57 + 8 * v33) >> v46) & 1LL;
                  }
                  if (v46 < *(unsigned __int8*)(*(_QWORD*)v35 + 91LL) &&
                      (v58 & 1) == 0) {
                    v59 = *(_QWORD*)(*(_QWORD*)v35 + 24LL);
                    if (v59 != 0) {
                      v59 += v55;
                      if (*(_DWORD*)(v59 + 36) == 3) {
                        LODWORD(v59) = *(_DWORD*)(v59 + 44) / 3u;
                      }
                      else {
                        LODWORD(v59) = 0;
                      }
                    }
                    *(_DWORD*)(*a2 + v54) += v59;
                  }
                  v60 = *(_QWORD*)(v9 + 384);
                  v61 = v60 != *(_QWORD*)(v9 + 392) &&
                        ((*(_QWORD*)(v60 + 8 * v33) >> v46) & 2LL) != 0;
                  if (v46 + 1 < *(unsigned __int8*)(*(_QWORD*)v35 + 91LL) &&
                      !v61) {
                    v56 = *(_QWORD*)(*(_QWORD*)v35 + 24LL);
                    if (v56 != 0) {
                      v56 += v55;
                      if (*(_DWORD*)(v56 + 92) == 3) {
                        LODWORD(v56) = *(_DWORD*)(v56 + 100) / 3u;
                      }
                      else {
                        LODWORD(v56) = 0;
                      }
                    }
                    *(_DWORD*)(*a2 + v54 + 24) += v56;
                  }
                  v46 += 2LL;
                  v55 += 112;
                  v54 += 48;
                } while (v31 != v46);
              }
              if ((v11 & 1) == 0) {
                goto LABEL_32;
              }
              v62 = *(_QWORD*)(v9 + 384);
              if (v62 == *(_QWORD*)(v9 + 392)) {
                LOBYTE(v63) = 0;
              }
              else {
                v63 = (*(_QWORD*)(v62 + 8 * v33) >> v46) & 1LL;
              }
              if (v46 >= *(unsigned __int8*)(*(_QWORD*)v35 + 91LL) ||
                  (v63 & 1) != 0) {
                goto LABEL_32;
              }
              v44 = *(_QWORD*)(*(_QWORD*)v35 + 24LL);
              if (v44 == 0) {
                goto LABEL_31;
              }
              v44 += 56 * v46;
            LABEL_101:
              if (*(_DWORD*)(v44 + 36) == 3) {
                LODWORD(v44) = *(_DWORD*)(v44 + 44) / 3u;
                goto LABEL_31;
              }
            }
            LODWORD(v44) = 0;
            goto LABEL_31;
          }
        LABEL_33:
          ++v42;
        } while (v42 != v43);
        LODWORD(v30) = *(unsigned __int16*)(v9 + 164);
      LABEL_22:
        if (++v33 >= (unsigned __int64)(unsigned int)v30) {
          return result;
        }
      }
    }
    v66 = *(_QWORD*)(v9 + 176);
    v67 = *(_QWORD*)(v9 + 312);
    v68 = *(_QWORD*)(v9 + 616);
    v69 = -1;
    v70 = 0;
    v71 = 0;
    do {
      if (v69 != *(unsigned __int16*)(*(_QWORD*)(v66 + 112 * v70) + 82LL)) {
        v69 = *(unsigned __int16*)(*(_QWORD*)(v66 + 112 * v70) + 82LL);
        v71 =
            *(_QWORD*)(v67 +
                       16LL * *(unsigned __int16*)(*(_QWORD*)(v66 + 112 * v70) +
                                                   82LL));
      }
      LOBYTE(v81) = 1;
      v79 = 0;
      v72 = *(_DWORD*)(v68 + 8 * v70);
      v80 = 0;
      v37 = (v72 & 0x8000) == 0;
      v73 = v72 & 1;
      v74 = (v72 & 2) != 0;
      v75 = (v72 & 4) != 0;
      v76 = v37;
      HIBYTE(v82) = v75;
      HIBYTE(v81) = v73;
      LOBYTE(v82) = v74;
      BYTE1(v81) = v76;
      BYTE2(v81) = v76;
      v77 = *(_QWORD*)(v71 + 288);
      result = *(_QWORD*)(v71 + 296);
      while (v77 != result) {
        v78 = *(int*)(v77 + 4);
        if ((*((_BYTE*)&v79 + v78) & 1) == 0 && *((_BYTE*)&v81 + v78) == 1) {
          *((_BYTE*)&v79 + v78) = 1;
        }
        v77 += 8;
      }
      ++v70;
    } while (v70 != v30);
  }
  return result;
}

__int64 Model_a66080(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5,
                     __int64 a6, __int64 a7)
{
  __int64 v12;
  __int64 result;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  _QWORD v26[2];

  v24 = a6;
  v25 = a7;
  v26[0] = a4;
  v26[1] = a5;
  v12 = *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13416);
  result = GameRoutine_a67640(v12, v26);
  if (result != 0 &&
      (v14 = result, (result = GameRoutine_a677e0(result + 40, &v24)) != 0)) {
    v15 = result + 40;
    v16 = GameRoutine_a67980(v14 + 80, *(_QWORD*)(result + 40) + 32LL);
    v17 = v12 + 64;
    if (v16 != 0) {
      v18 = v16 + 40;
    }
    else {
      v18 = 0;
    }
    v19 = (_QWORD*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 472,
                                                  16, 0);
    v20 = v24;
    v21 = v25;
    v22 = v19 + 3;
    v23 = v19;
    v19[1] = 0;
    v19[2] = 0;
    *v19 = GameData_1fc0208;
    result =
        GameRoutine_b3cae0(v19 + 3, a2, v18, a3, a4, a5, v20, v21, v15, v17);
    *a1 = v22;
    a1[1] = v23;
  }
  else {
    *a1 = 0;
    a1[1] = 0;
  }
  return result;
}

__int64 Model_a661a0(__int64 a1, int a2, __int64 a3, int a4)
{
  _BYTE* v5;
  _BYTE* v6;
  __int64 v7;
  _BYTE* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  long double v21;
  __int64 v22;
  __int64 v23;
  _BYTE* v24;
  __int64* v25;
  __int64* v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64** v31;
  __int64* v32;
  __int64* v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  bool v42;
  long double v43;
  __int64 v44;
  _BYTE* v45;
  __int64 v46;
  __int64 v48;
  _BYTE v50[32];
  _BYTE* v51;
  _BYTE v52[32];
  _BYTE* v53;
  _QWORD v54[4];

  if (*(_QWORD*)(a1 + 664) == *(_QWORD*)(a1 + 656)) {
    *(_QWORD*)(*(_QWORD*)(a1 + 280) + 88LL) = *(_QWORD*)(a1 + 648);
  }
  v5 = *(_BYTE**)(a3 + 32);
  v51 = nullptr;
  HIDWORD(v48) = a4;
  if (v5 == nullptr) {
    v6 = nullptr;
  LABEL_10:
    v53 = v5;
    v51 = v6;
    goto LABEL_11;
  }
  if (v5 == (_BYTE*)a3) {
    v53 = v52;
    (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v5 + 24LL))(v5, v52);
    v6 = v53;
    v5 = v51;
  }
  else {
    v6 = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + 16LL))(v5);
    v5 = nullptr;
    v53 = v6;
  }
  if (v6 != v52) {
    if (v5 == v50) {
      (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v5 + 24LL))(v5, v52);
      (*(void (**)(_BYTE*))(*(_QWORD*)v51 + 32LL))(v51);
      v8 = v53;
      v53 = v52;
      v5 = v52;
      v51 = v8;
      goto LABEL_17;
    }
    goto LABEL_10;
  }
  if (v5 == v50) {
    (*(void (**)(_BYTE* __return_ptr, _BYTE*, _QWORD*))(*(_QWORD*)v6 + 24LL))(
        v6, v6, v54);
    (*(void (**)(_BYTE*))(*(_QWORD*)v53 + 32LL))(v53);
    v53 = nullptr;
    (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v51 + 24LL))(v51, v52);
    (*(void (**)(_BYTE*))(*(_QWORD*)v51 + 32LL))(v51);
    v51 = nullptr;
    v53 = v52;
    (*(void (**)(_QWORD*, _BYTE*))(v54[0] + 24LL))(v54, v50);
    (*(void (**)(_QWORD*))(v54[0] + 32LL))(v54);
    v5 = v53;
    v51 = v50;
  }
  else {
    (*(void (**)(_BYTE* __return_ptr, _BYTE*, _BYTE*))(*(_QWORD*)v6 + 24LL))(
        v6, v6, v50);
    (*(void (**)(_BYTE*))(*(_QWORD*)v53 + 32LL))(v53);
    v5 = v51;
    v51 = v50;
    v53 = v5;
  }

LABEL_11:
  if (v5 == v52) {
  LABEL_17:
    v7 = 32;
    goto LABEL_18;
  }
  if (v5 != nullptr) {
    v7 = 40;
  LABEL_18:
    v5 = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v5 + v7))(v5);
  }
  v9 = *(_QWORD*)(a1 + 664);
  LODWORD(v48) = *(_DWORD*)(a1 + 640);
  v10 = *(_QWORD*)(a1 + 672);
  if (v9 < v10) {
    *(_DWORD*)(v9 + 8) = a2;
    *(_QWORD*)v9 = v48;
    if (v51 != nullptr) {
      if (v51 == v50) {
        *(_QWORD*)(v9 + 48) = v9 + 16;
        (*(void (**)(_BYTE*))(*(_QWORD*)v51 + 24LL))(v51);
      }
      else {
        *(_QWORD*)(v9 + 48) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v51 + 16LL))((__int64)v51);
      }
      v11 = v9 + 64;
    }
    else {
      *(_QWORD*)(v9 + 48) = 0;
      v11 = v9 + 64;
    }
    goto LABEL_56;
  }
  v12 = *(_QWORD*)(a1 + 656);
  v13 = v9 - v12;
  v14 = ((__int64)(v9 - v12) >> 6) + 1;
  if (v14 >> 58 != 0) {
    GameRoutine_a67b90(v5);
  }
  v15 = v10 - v12;
  v16 = v15 >> 5;
  if (v15 >> 5 <= v14) {
    v16 = v14;
  }
  v17 = (unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFC0LL;
  v18 = 0x3FFFFFFFFFFFFFFLL;
  if (!v17) {
    v18 = v16;
  }
  if (v18 >> 58 != 0) {
    GameRoutine_60a210(v5);
  }
  v19 = v18 << 6;
  v20 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       v18 << 6, 16, 0);
  v22 = v20 + v13;
  v23 = v20;
  v24 = v51;
  *(_QWORD*)v22 = v48;
  *(_DWORD*)(v22 + 8) = a2;
  if (v24 != nullptr) {
    if (v24 == v50) {
      *(_QWORD*)(v22 + 48) = v22 + 16;
      (*(void (**)(_BYTE*))(*(_QWORD*)v24 + 24LL))(v24);
    }
    else {
      *(_QWORD*)(v22 + 48) =
          (*(__int64 (**)(_BYTE*))(*(_QWORD*)v24 + 16LL))(v24);
    }
  }
  else {
    *(_QWORD*)(v22 + 48) = 0;
  }
  v25 = *(__int64**)(a1 + 664);
  v26 = *(__int64**)(a1 + 656);
  v27 = v23 + v19;
  v11 = v22 + 64;
  v28 = v22 - ((char*)v25 - (char*)v26);
  if (v25 != v26) {
    v29 = v13 - (((char*)v25 - (char*)v26) >> 6 << 6);
    v30 = *(__int64**)(a1 + 656);
    v31 = (__int64**)(v29 + v23 + 48);
    do {
      v32 = (__int64*)*v30;
      *((_DWORD*)v31 - 10) = *((_DWORD*)v30 + 2);
      *(v31 - 6) = v32;
      v33 = (__int64*)v30[6];
      if (v33 != nullptr) {
        if (v30 + 2 == v33) {
          *v31 = (__int64*)(v31 - 4);
          (*(void (**)(__int64))(*(_QWORD*)v30[6] + 24LL))(v30[6]);
        }
        else {
          *v31 = v33;
          v30[6] = 0;
        }
      }
      else {
        *v31 = nullptr;
      }
      v30 += 8;
      v31 += 8;
    } while (v30 != v25);
    while (1) {
      v35 = (__int64*)v26[6];
      if (v26 + 2 == v35) {
        v34 = 32;
      }
      else {
        if (v35 == nullptr) {
          goto LABEL_47;
        }
        v34 = 40;
      }
      (*(void (**)(__int64))(*v35 + v34))((__int64)v35);
    LABEL_47:
      v26 += 8;
      if (v26 == v25) {
        v26 = *(__int64**)(a1 + 656);
        break;
      }
    }
  }
  *(_QWORD*)(a1 + 656) = v28;
  *(_QWORD*)(a1 + 664) = v11;
  *(_QWORD*)(a1 + 672) = v27;
  if (v26 != nullptr) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v36,
                                  v21);
  }

LABEL_56:
  v37 = *(_QWORD*)(a1 + 656);
  *(_QWORD*)(a1 + 664) = v11;
  if ((__int64)(v11 - v37) >> 6 < 1) {
    v41 = 0;
  LABEL_62:
    GameRoutine_a69c80(v37, v11, (__int64)(v11 - v37) >> 6, 0, v41);
  }
  else {
    v38 = (__int64)(v11 - v37) >> 6;
    v39 = GameData_212c060;
    while (1) {
      v40 = GameRoutine_1a09d20(v38 << 6, v39);
      if (v40 != 0) {
        break;
      }
      v41 = v38 >> 1;
      v42 = v38 > 1;
      v38 >>= 1;
      if (!v42) {
        goto LABEL_62;
      }
    }
    GameRoutine_a69c80(v37, v11, (__int64)(v11 - v37) >> 6, v40, v38);
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v44,
                                  v43);
  }
  v45 = v51;
  *(_BYTE*)(a1 + 504) = 1;
  ++*(_DWORD*)(a1 + 640);
  if (v45 == v50) {
    v46 = 32;
    goto LABEL_70;
  }
  if (v45 != nullptr) {
    v46 = 40;
  LABEL_70:
    (*(void (**)(__int64))(*(_QWORD*)v45 + v46))((__int64)v45);
  }
  return (unsigned int)v48;
}

__int64* Model_a66700(__int64* result, int a2)
{
  __int64* v2;
  __int64* v3;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;

  v2 = (__int64*)result[82];
  v3 = (__int64*)result[83];
  v5 = result;
  v6 = v2;
  if (v2 != v3) {
    v6 = (__int64*)result[82];
    while (*(_DWORD*)v6 != a2) {
      v6 += 8;
      if (v6 == v3) {
      LABEL_27:
        if (v3 == v2) {
          goto LABEL_28;
        }
        goto LABEL_29;
      }
    }
  }
  v7 = v6 + 8;
  if (v6 == v3 || v7 == v3) {
    if (v6 == v3) {
      goto LABEL_27;
    }
    goto LABEL_30;
  }
  do {
    if (*(_DWORD*)v7 == a2) {
      goto LABEL_15;
    }
    v9 = *v7;
    v10 = *((_DWORD*)v7 + 2);
    result = (__int64*)v6[6];
    v6[6] = 0;
    *((_DWORD*)v6 + 2) = v10;
    *v6 = v9;
    if (result == v6 + 2) {
      v11 = 32;
      goto LABEL_21;
    }
    if (result != nullptr) {
      v11 = 40;
    LABEL_21:
      result =
          (__int64*)(*(__int64 (**)(__int64))(*result + v11))((__int64)result);
    }
    v12 = (__int64*)v7[6];
    if (v12 != nullptr) {
      if (v7 + 2 == v12) {
        v6[6] = (__int64)(v6 + 2);
        result = (__int64*)(*(__int64 (**)(__int64, __int64*))(
            *(_QWORD*)v7[6] + 24LL))(v7[6], v6 + 2);
      }
      else {
        v6[6] = (__int64)v12;
        v7[6] = 0;
      }
    }
    else {
      v6[6] = 0;
    }
    v6 += 8;
  LABEL_15:
    v7 += 8;
  } while (v7 != v3);
  v3 = (__int64*)v5[83];
  v2 = (__int64*)v5[82];
  if (v6 == v3) {
    goto LABEL_27;
  }

LABEL_30:
  while (v3 != v6) {
    result = (__int64*)*(v3 - 2);
    if (v3 - 6 == result) {
      v14 = 32;
    }
    else {
      if (result == nullptr) {
        goto LABEL_35;
      }
      v14 = 40;
    }
    result =
        (__int64*)(*(__int64 (**)(__int64))(*result + v14))((__int64)result);
  LABEL_35:
    v3 -= 8;
  }
  v13 = (__int64*)v5[82];
  v5[83] = (__int64)v6;
  if (v6 == v13) {
  LABEL_28:
    *(_QWORD*)(v5[35] + 88) = 0;
  }

LABEL_29:
  *((_BYTE*)v5 + 504) = 1;
  return result;
}

__int64* Model_a66d00(__int64* result, int a2)
{
  __int64* v2;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;

  v2 = (__int64*)result[87];
  v4 = result;
  v5 = (__int64*)result[86];
  if (v5 != v2) {
    v5 = (__int64*)result[86];
    while (*(_DWORD*)v5 != a2) {
      v5 += 8;
      if (v5 == v2) {
        goto LABEL_29;
      }
    }
  }
  v6 = v5 + 8;
  if (v5 == v2 || v6 == v2) {
    if (v5 != v2) {
      goto LABEL_27;
    }
    goto LABEL_29;
  }
  do {
    if (*(_DWORD*)v6 == a2) {
      goto LABEL_15;
    }
    v8 = *v6;
    result = (__int64*)v5[6];
    v5[6] = 0;
    *v5 = v8;
    if (result == v5 + 2) {
      v9 = 32;
      goto LABEL_21;
    }
    if (result != nullptr) {
      v9 = 40;
    LABEL_21:
      result =
          (__int64*)(*(__int64 (**)(__int64))(*result + v9))((__int64)result);
    }
    v10 = (__int64*)v6[6];
    if (v10 != nullptr) {
      if (v6 + 2 == v10) {
        v5[6] = (__int64)(v5 + 2);
        result = (__int64*)(*(__int64 (**)(__int64, __int64*))(
            *(_QWORD*)v6[6] + 24LL))(v6[6], v5 + 2);
      }
      else {
        v5[6] = (__int64)v10;
        v6[6] = 0;
      }
    }
    else {
      v5[6] = 0;
    }
    v5 += 8;
  LABEL_15:
    v6 += 8;
  } while (v6 != v2);
  v2 = (__int64*)v4[87];
  if (v5 != v2) {
  LABEL_27:
    if (v5 == v2) {
    LABEL_28:
      v4[87] = (__int64)v5;
      goto LABEL_29;
    }
    while (2) {
      result = (__int64*)*(v2 - 2);
      if (v2 - 6 != result) {
        if (result != nullptr) {
          v11 = 40;
        LABEL_31:
          result = (__int64*)(*(__int64 (**)(__int64))(*result + v11))(
              (__int64)result);
        }
        v2 -= 8;
        if (v2 == v5) {
          goto LABEL_28;
        }
        continue;
      }
      break;
    }
    v11 = 32;
    goto LABEL_31;
  }

LABEL_29:
  *((_BYTE*)v4 + 504) = 1;
  return result;
}

#pragma GCC visibility pop
