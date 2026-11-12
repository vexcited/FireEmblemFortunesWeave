#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_18ce740(__int64, int, int);
__int64 nn_diag_detail_AbortImpl_1a0a590(_QWORD);
extern __int64 GameData_1c1a2bc;
extern __int64 GameData_1c1a3bc;
__int64* MovieVideoRenderer_18cf080(__int64 a1, int a2, int a3, int a4);
__int64 MovieVideoRenderer_18cf220(__int64 a1, unsigned __int64 a2,
                                   unsigned __int64 a3);
void omovie_MovieVideoRenderer_Initialize_lambda0_Invoke(__int64 a1, _WORD* a2);
__attribute__((swiftcall)) void GameRoutine_53b30(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_53bd0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void GameRoutine_53c20(PSEUDO_X8, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
extern _UNKNOWN** GameData_2132150;
extern __int64 (*GameData_2108ec8[])();
extern __int64 (*GameData_2108f08[])();
extern __int64* GameData_212e8a0;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MovieVideoRenderer_18ce740(__int64 a1, int a2, int a3);
void nn_diag_detail_AbortImpl_1a0a590_alt1() __asm__(
    "nn_diag_detail_AbortImpl_1a0a590");

__int64 MovieVideoRenderer_18ce740(__int64 a1, int a2, int a3)
{
  signed int v4;
  signed int v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  _QWORD* v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  _QWORD* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  _QWORD* v68;
  __int64 v69;
  _QWORD* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  _QWORD* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  _QWORD* v80;
  __int64 v81;
  __int64 v82;
  int v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  unsigned __int64 v96;
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
  __int64 result;
  struct {
    unsigned __int64 v112;
    __int64 v113;
    _BYTE v114[11];
    char gap27_[5];
    __int64 v115;
    __int64 v116;
  } v112_;
  __int64 v117;
  int v118;

  v4 = (a2 & 1) + a2;
  v5 = (a3 & 1) + a3;
  v6 = game_g_frame_clock_ptr[0];
  v7 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (*(_DWORD*)(a1 + 56) == 0) {
    v8 = *game_g_frame_clock_ptr[0];
    v9 = *game_g_frame_clock_ptr[0] + 16592;
    v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         24, 16, 0);
    *(_DWORD*)(v10 + 8) = 2;
    v11 = GameData_212e8a0 + 2;
    v12 = *(_QWORD*)(a1 + 120);
    *(_QWORD*)(a1 + 120) = 0;
    *(_QWORD*)v10 = v11;
    *(_QWORD*)(v10 + 16) = v12;
    v13 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 24, 16, 0);
    v13[1] = v9;
    v13[2] = v10;
    v14 = *(_QWORD*)(v8 + 16592);
    *v13 = v14;
    *(_QWORD*)(v14 + 8) = v13;
    *(_QWORD*)(v8 + 16592) = v13;
    v15 = *v7;
    ++*(_QWORD*)(v8 + 16608);
    v16 = fw_memory_HeapManager_Allocate(v15, 24, 16, 0);
    v17 = *(_QWORD*)(a1 + 112);
    v18 = v16;
    *(_DWORD*)(v16 + 8) = 2;
    *(_QWORD*)v16 = v11;
    *(_QWORD*)(a1 + 112) = 0;
    *(_QWORD*)(v16 + 16) = v17;
    v19 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 24, 16, 0);
    v19[1] = v9;
    v19[2] = v18;
    v20 = *(_QWORD*)(v8 + 16592);
    *v19 = v20;
    *(_QWORD*)(v20 + 8) = v19;
    *(_QWORD*)(v8 + 16592) = v19;
    v21 = *v7;
    ++*(_QWORD*)(v8 + 16608);
    v22 = fw_memory_HeapManager_Allocate(v21, 24, 16, 0);
    v23 = *(_QWORD*)(a1 + 184);
    v24 = v22;
    *(_DWORD*)(v22 + 8) = 2;
    *(_QWORD*)(a1 + 184) = 0;
    *(_QWORD*)v22 = GameData_2108ec8;
    *(_QWORD*)(v22 + 16) = v23;
    v25 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 24, 16, 0);
    v25[1] = v9;
    v25[2] = v24;
    v26 = *(_QWORD*)(v8 + 16592);
    *v25 = v26;
    *(_QWORD*)(v26 + 8) = v25;
    *(_QWORD*)(v8 + 16592) = v25;
    v27 = *v7;
    ++*(_QWORD*)(v8 + 16608);
    v28 = fw_memory_HeapManager_Allocate(v27, 24, 16, 0);
    v29 = *(_QWORD*)(a1 + 80);
    v30 = v28;
    *(_DWORD*)(v28 + 8) = 2;
    *(_QWORD*)v28 = GameData_2108f08;
    *(_QWORD*)(a1 + 80) = 0;
    *(_QWORD*)(v28 + 16) = v29;
    v31 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 24, 16, 0);
    v31[1] = v9;
    v31[2] = v30;
    v32 = *(_QWORD*)(v8 + 16592);
    *v31 = v32;
    *(_QWORD*)(v32 + 8) = v31;
    *(_QWORD*)(v8 + 16592) = v31;
    v33 = *v7;
    ++*(_QWORD*)(v8 + 16608);
    v34 = fw_memory_HeapManager_Allocate(v33, 24, 16, 0);
    v35 = *(_QWORD*)(a1 + 192);
    v36 = v34;
    *(_DWORD*)(v34 + 8) = 2;
    *(_QWORD*)v34 = GameData_2108ec8;
    *(_QWORD*)(a1 + 192) = 0;
    *(_QWORD*)(v34 + 16) = v35;
    v37 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 24, 16, 0);
    v37[1] = v9;
    v37[2] = v36;
    v38 = *(_QWORD*)(v8 + 16592);
    *v37 = v38;
    *(_QWORD*)(v38 + 8) = v37;
    *(_QWORD*)(v8 + 16592) = v37;
    ++*(_QWORD*)(v8 + 16608);
    v39 = *game_g_frame_clock_ptr[0];
    v40 = *game_g_frame_clock_ptr[0] + 16592;
    v41 = fw_memory_HeapManager_Allocate(*v7, 24, 16, 0);
    v42 = *(_QWORD*)(a1 + 88);
    v43 = v41;
    *(_DWORD*)(v41 + 8) = 2;
    *(_QWORD*)v41 = GameData_2108f08;
    *(_QWORD*)(a1 + 88) = 0;
    *(_QWORD*)(v41 + 16) = v42;
    v44 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 24, 16, 0);
    v44[1] = v40;
    v44[2] = v43;
    v45 = *(_QWORD*)(v39 + 16592);
    *v44 = v45;
    *(_QWORD*)(v45 + 8) = v44;
    *(_QWORD*)(v39 + 16592) = v44;
    v46 = *v7;
    ++*(_QWORD*)(v39 + 16608);
    v47 = fw_memory_HeapManager_Allocate(v46, 24, 16, 0);
    v48 = *(_QWORD*)(a1 + 200);
    v49 = v47;
    *(_DWORD*)(v47 + 8) = 2;
    *(_QWORD*)v47 = GameData_2108ec8;
    *(_QWORD*)(a1 + 200) = 0;
    *(_QWORD*)(v47 + 16) = v48;
    v50 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 24, 16, 0);
    v50[1] = v40;
    v50[2] = v49;
    v51 = *(_QWORD*)(v39 + 16592);
    *v50 = v51;
    *(_QWORD*)(v51 + 8) = v50;
    *(_QWORD*)(v39 + 16592) = v50;
    v52 = *v7;
    ++*(_QWORD*)(v39 + 16608);
    v53 = fw_memory_HeapManager_Allocate(v52, 24, 16, 0);
    v54 = *(_QWORD*)(a1 + 96);
    v55 = v53;
    *(_DWORD*)(v53 + 8) = 2;
    *(_QWORD*)v53 = GameData_2108f08;
    *(_QWORD*)(a1 + 96) = 0;
    *(_QWORD*)(v53 + 16) = v54;
    v56 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 24, 16, 0);
    v56[1] = v40;
    v56[2] = v55;
    v57 = *(_QWORD*)(v39 + 16592);
    *v56 = v57;
    *(_QWORD*)(v57 + 8) = v56;
    *(_QWORD*)(v39 + 16592) = v56;
    v58 = *v7;
    ++*(_QWORD*)(v39 + 16608);
    v59 = fw_memory_HeapManager_Allocate(v58, 24, 16, 0);
    *(_DWORD*)(v59 + 8) = 2;
    *(_QWORD*)v59 = GameData_2108ec8;
    v60 = v59;
    v6 = game_g_frame_clock_ptr[0];
    v61 = *(_QWORD*)(a1 + 208);
    *(_QWORD*)(a1 + 208) = 0;
    *(_QWORD*)(v59 + 16) = v61;
    v62 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 24, 16, 0);
    v62[1] = v40;
    v62[2] = v60;
    v63 = *(_QWORD*)(v39 + 16592);
    *v62 = v63;
    *(_QWORD*)(v63 + 8) = v62;
    *(_QWORD*)(v39 + 16592) = v62;
    v64 = *v7;
    ++*(_QWORD*)(v39 + 16608);
    v65 = fw_memory_HeapManager_Allocate(v64, 24, 16, 0);
    v66 = *(_QWORD*)(a1 + 104);
    v67 = v65;
    *(_DWORD*)(v65 + 8) = 2;
    *(_QWORD*)v65 = GameData_2108f08;
    *(_QWORD*)(a1 + 104) = 0;
    *(_QWORD*)(v65 + 16) = v66;
    v68 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 24, 16, 0);
    v68[1] = v40;
    v68[2] = v67;
    v69 = *(_QWORD*)(v39 + 16592);
    *v68 = v69;
    *(_QWORD*)(v69 + 8) = v68;
    *(_QWORD*)(v39 + 16592) = v68;
    ++*(_QWORD*)(v39 + 16608);
  }
  v70 = (_QWORD*)*v6;
  v71 = *v6 + 16592;
  v72 = fw_memory_HeapManager_Allocate(*v7, 24, 16, 0);
  *(_DWORD*)(v72 + 8) = 2;
  *(_QWORD*)v72 = GameData_212e8a0 + 2;
  v73 = *(_QWORD*)(a1 + 128);
  *(_QWORD*)(a1 + 128) = 0;
  *(_QWORD*)(v72 + 16) = v73;
  v74 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 24, 16, 0);
  v74[1] = v71;
  v74[2] = v72;
  v75 = v70[2074];
  *v74 = v75;
  *(_QWORD*)(v75 + 8) = v74;
  v70[2074] = v74;
  v76 = *v7;
  ++v70[2076];
  v77 = fw_memory_HeapManager_Allocate(v76, 24, 16, 0);
  v78 = *(_QWORD*)(a1 + 72);
  v79 = v77;
  *(_DWORD*)(v77 + 8) = 2;
  *(_QWORD*)v77 = GameData_2108f08;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(v77 + 16) = v78;
  v80 = (_QWORD*)fw_memory_HeapManager_Allocate(*v7, 24, 16, 0);
  v80[1] = v71;
  v80[2] = v79;
  v81 = v70[2074];
  *v80 = v81;
  *(_QWORD*)(v81 + 8) = v80;
  v70[2074] = v80;
  ++v70[2076];
  if (*(_DWORD*)(a1 + 56) != 0) {
    v82 = *(_QWORD*)(a1 + 72);
    if (v82 != 0) {
      goto LABEL_29;
    }
    goto LABEL_25;
  }
  v118 = 0;
  ((void (*)(__int64, __int64, int*))*GameData_2132150)(v70[32] + 8LL, 56,
                                                        &v118);
  v83 = ((v4 + v118 - 1) & -v118) * v5;
  v112_.v112 = (((4 * v83 + 4095) & 0xFFFFF000) + 1052671 +
                ((3 * v83 / 2 + 4095) & 0xFFFFF000)) &
               0xFFFFF000;
  v112_.v113 = 33;
  GameRoutine_53b30((void*)(&v117), (__int64)&v112_.v112);
  v84 = v117;
  v85 = *(_QWORD*)(a1 + 72);
  v117 = 0;
  *(_QWORD*)(a1 + 72) = v84;
  if (v85 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v85 + 8LL))(v85);
    v86 = v117;
    v117 = 0;
    if (v86 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v86 + 8LL))(v86);
    }
  }
  v87 = *(_QWORD*)(a1 + 72);
  v112_.v112 = __PAIR64__(v5, v4);
  v112_.v113 = 0x100000001LL;
  *(_DWORD*)v112_.v114 = 0;
  *(_DWORD*)&v112_.v114[7] = 0;
  *(_DWORD*)&v112_.v114[4] = 1;
  v112_.v115 = v87;
  v88 = *(_QWORD*)(*(_QWORD*)(*v6 + 552) + 16LL);
  v112_.v114[8] = 1;
  v112_.v116 = v88;
  GameRoutine_53c20((void*)(&v117), (__int64)&v112_.v112);
  v89 = v117;
  v90 = *(_QWORD*)(a1 + 112);
  v117 = 0;
  *(_QWORD*)(a1 + 112) = v89;
  if (v90 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v90 + 8LL))(v90);
    v91 = v117;
    v117 = 0;
    if (v91 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v91 + 8LL))(v91);
    }
  }
  v112_.v113 = 0x100000001LL;
  *(_DWORD*)v112_.v114 = 0;
  *(_DWORD*)&v112_.v114[7] = 0;
  *(_DWORD*)&v112_.v114[4] = 2;
  LODWORD(v112_.v112) = v4 / 2;
  HIDWORD(v112_.v112) = v5 / 2;
  v112_.v115 = *(_QWORD*)(a1 + 72);
  v92 = *(_QWORD*)(*(_QWORD*)(*v6 + 552) + 16LL);
  v112_.v114[8] = 1;
  v112_.v116 = v92;
  GameRoutine_53c20((void*)(&v117), (__int64)&v112_.v112);
  v93 = v117;
  v94 = *(_QWORD*)(a1 + 120);
  v117 = 0;
  *(_QWORD*)(a1 + 120) = v93;
  if (v94 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v94 + 8LL))(v94);
    v95 = v117;
    v117 = 0;
    if (v95 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v95 + 8LL))(v95);
    }
  }
  if (*(_QWORD*)(a1 + 40) != 0) {
    v96 = 0;
    do {
      v112_.v112 = (3 * v4 * v5 / 2 + 4095) & 0xFFFFF000;
      v112_.v113 = 34;
      GameRoutine_53b30((void*)(&v117), (__int64)&v112_.v112);
      v97 = a1 + 8 * v96;
      v98 = v117;
      v117 = 0;
      v99 = *(_QWORD*)(v97 + 80);
      *(_QWORD*)(v97 + 80) = v98;
      if (v99 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v99 + 8LL))(v99);
        v100 = v117;
        v117 = 0;
        if (v100 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v100 + 8LL))(v100);
        }
      }
      v101 = *(_QWORD*)(v97 + 80);
      LODWORD(v112_.v112) = 0;
      v112_.v113 = (3 * v4 * v5 / 2 + 4095) & 0xFFFFF000;
      *(_QWORD*)v112_.v114 = v101;
      GameRoutine_53bd0((void*)(&v117), (__int64)&v112_.v112);
      v102 = v117;
      v103 = *(_QWORD*)(v97 + 184);
      v117 = 0;
      *(_QWORD*)(v97 + 184) = v102;
      if (v103 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v103 + 8LL))(v103);
        v104 = v117;
        v117 = 0;
        if (v104 != 0) {
          (*(void (**)(__int64))(*(_QWORD*)v104 + 8LL))(v104);
        }
      }
      ++v96;
    } while (*(_QWORD*)(a1 + 40) > v96);
  }
  v105 = (*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 184) + 56LL))(
      *(_QWORD*)(a1 + 184));
  v70 = (_QWORD*)*v6;
  *(_QWORD*)(a1 + 152) = v105;
  v82 = *(_QWORD*)(a1 + 72);
  if (v82 == 0) {
  LABEL_25:
    v118 = 0;
    ((void (*)(__int64, __int64, int*))*GameData_2132150)(v70[32] + 8LL, 56,
                                                          &v118);
    v112_.v112 =
        (((4 * v5 * ((v4 + v118 - 1) & -v118) + 4095) & 0xFFFFF000) + 1052671) &
        0xFFFFF000;
    v112_.v113 = 33;
    GameRoutine_53b30((void*)(&v117), (__int64)&v112_.v112);
    v106 = v117;
    v107 = *(_QWORD*)(a1 + 72);
    v117 = 0;
    *(_QWORD*)(a1 + 72) = v106;
    if (v107 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)v107 + 8LL))(v107);
      v108 = v117;
      v117 = 0;
      if (v108 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v108 + 8LL))(v108);
      }
    }
    v82 = *(_QWORD*)(a1 + 72);
    v70 = (_QWORD*)*v6;
  }
LABEL_29:
  v112_.v115 = v82;
  v109 = v70[69];
  v112_.v112 = __PAIR64__(v5, v4);
  v112_.v113 = 0x100000001LL;
  *(_DWORD*)v112_.v114 = 0;
  *(_DWORD*)&v112_.v114[7] = 0;
  *(_DWORD*)&v112_.v114[4] = 5;
  v112_.v116 = *(_QWORD*)(v109 + 16);
  v112_.v114[8] = 1;
  v112_.v114[10] = 1;
  GameRoutine_53c20((void*)(&v117), (__int64)&v112_.v112);
  v110 = v117;
  result = *(_QWORD*)(a1 + 128);
  v117 = 0;
  *(_QWORD*)(a1 + 128) = v110;
  if (result != 0) {
    (*(void (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    result = v117;
    v117 = 0;
    if (result != 0) {
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
    }
  }
  return result;
}

__int64* MovieVideoRenderer_18cf080(__int64 a1, int a2, int a3, int a4)
{
  unsigned int v4;
  __int64* result;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  v4 = atomic_load((unsigned int*)(a1 + 12));
  if (v4 != 1) {
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  if ((unsigned int)(a2 - 1) >= 8) {
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  if ((unsigned int)(a3 - 1) >= 2) {
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  if ((unsigned int)(a4 - 1) >= 8) {
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  *(_DWORD*)a1 = a2;
  *(_DWORD*)(a1 + 4) = a3;
  *(_DWORD*)(a1 + 8) = a4;
  result = (__int64*)(*(__int64 (**)(_QWORD))(**(_QWORD**)(a1 + 176) + 56LL))(
      *(_QWORD*)(a1 + 176));
  if ((unsigned int)(*(_DWORD*)a1 - 3) >= 2) {
    if (*(_DWORD*)a1 == 1) {
      if (*(_DWORD*)(a1 + 4) != 2) {
        v8 = 0x3F00808100000000LL;
        result[6] = 0x3FED844D3F800000LL;
        result[7] = 0;
        result[4] = 0xBE3FD1EF3F800000LL;
        result[5] = 3203378684LL;
        v10 = 1065353216;
        v9 = 1070174988;
        goto LABEL_15;
      }
      v8 = 0x3F0080813D808081LL;
      result[6] = 0x400731993F950A81LL;
      result[7] = 0;
      result[4] = 0xBE5A5DDA3F950A81LL;
      result[5] = 3205000384LL;
      v9 = 1072003213;
      goto LABEL_14;
    }
    v7 = &GameData_1c1a3bc;
  LABEL_13:
    v11 = v7[6];
    v12 = v7[4];
    v8 = *v7;
    result[6] = v11;
    result[7] = 0;
    result[4] = v12;
    result[5] = 3209698984LL;
    v9 = 1070353053;
  LABEL_14:
    v10 = 1066732161;
    goto LABEL_15;
  }
  if (*(_DWORD*)(a1 + 4) == 2) {
    v7 = &GameData_1c1a2bc;
    goto LABEL_13;
  }
  v8 = 0x3F00808100000000LL;
  result[6] = 0x3FE2D0E53F800000LL;
  result[7] = 0;
  result[4] = 0xBEB032A23F800000LL;
  result[5] = 3208040867LL;
  v10 = 1065353216;
  v9 = 1068725436;
LABEL_15:
  result[2] = v10;
  result[3] = v9;
  *result = v8;
  result[1] = 1056997505;
  return result;
}

__int64 MovieVideoRenderer_18cf220(__int64 a1, unsigned __int64 a2,
                                   unsigned __int64 a3)
{
  unsigned int v3;
  __int64 result;

  v3 = atomic_load((unsigned int*)(a1 + 12));
  if (v3 != 1) {
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  if (a2 >= 0xF01) {
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  if (a3 >= 0x871) {
    nn_diag_detail_AbortImpl_1a0a590_alt1();
  }
  result = MovieVideoRenderer_18ce740(a1, a2, a3);
  *(_QWORD*)(a1 + 16) = a2;
  *(_QWORD*)(a1 + 24) = a3;
  return result;
}

void omovie_MovieVideoRenderer_Initialize_lambda0_Invoke(__int64 a1, _WORD* a2)
{
  a2[3] = 42;
  *a2 = 514;
}

#pragma GCC visibility pop
