#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ababe0(_QWORD, _QWORD, _QWORD, float);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1fc23d8[])();
extern __int64 (*gfx_settings_BaseParamInstance_vtable)();
extern __int64 GameData_1fc14b0;
extern __int64 GameData_212e530[2];
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_abae00(_QWORD);
__int64 Bool_ab9e30_alt1(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4,
                         float a5, float a6) __asm__("Bool_ab9e30");
__int64 Bool_aba0c0(__int64* a1, __int64 a2, __int64 a3, _QWORD* a4, _QWORD* a5,
                    float a6, float a7);
__int64 GameRoutine_ababe0_alt1(__int64, unsigned __int16, __int64,
                                float) __asm__("GameRoutine_ababe0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_abae00_alt1() __asm__("GameRoutine_abae00");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Bool_ab9e30(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, float a5,
                 float a6);

void Bool_ab9e30(_QWORD* a1, __int64 a2, __int64 a3, __int64 a4, float a5,
                 float a6)
{

#pragma clang fp contract(off)
  __int64 v12;
  unsigned __int8 v13;
  __int64 v14;
  char v15;
  __int64 v16;
  __int64 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  char v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 (**v35)();
  __int64 v36[2];
  __int64 v37;
  char v38;
  __int16 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;

  if (((*(__int64 (**)(__int64))(*(_QWORD*)a4 + 56LL))(a4) & 1) == 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)a4 + 48LL))(a4) & 1) == 0) {
    v31 = *a1;
    v32 = a1;
    v33 = a2;
    v34 = a3;
  LABEL_25:
    (*(void (**)(_QWORD*, __int64, __int64, float, float))(v31 + 24))(
        v32, v33, v34, a5, a6);
    return;
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a3 + 56LL))(a3) & 1) == 0 &&
      ((*(__int64 (**)(__int64))(*(_QWORD*)a3 + 48LL))(a3) & 1) == 0) {
    v31 = *a1;
    v32 = a1;
    v33 = a2;
    v34 = a4;
    goto LABEL_25;
  }
  v12 = 64;
  if (*(_BYTE*)(a2 + 34) != 0) {
    v12 = 33;
  }
  v13 = *(_BYTE*)(a2 + v12);
  v14 = GameData_212e530[0];
  v15 = *(_BYTE*)(a3 + 8);
  v35 = (__int64 (**)(void))(GameData_212e530[0] + 16);
  if ((v15 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v36, *(_QWORD*)(a3 + 24),
                                       *(_QWORD*)(a3 + 16));
  }
  else {
    v16 = *(_QWORD*)(a3 + 16);
    v17 = *(_QWORD*)(a3 + 24);
    v36[0] = *(_QWORD*)(a3 + 8);
    v36[1] = v16;
    v37 = v17;
  }
  v18 = *(_BYTE*)(a3 + 32);
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v35 = GameData_1fc23d8;
  v38 = v18;
  v39 = *(_WORD*)(a3 + 33);
  v20 = *(_QWORD*)(a3 + 40);
  v19 = *(_QWORD*)(a3 + 48);
  v21 = fw_memory_g_heap_manager_ptr;
  v22 = v19 - v20;
  if (v19 != v20) {
    if (v22 < 0) {
      GameRoutine_abae00_alt1();
    }
    v23 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v19 - v20, 16, 0);
    v24 = v23 + v22;
    v40 = v23;
    v41 = v23;
    v42 = v23 + v22;
    memcpy_alt1(v23, v20, v22 - 2);
    v41 = v24;
  }
  v43 = *(_BYTE*)(a3 + 64);
  v25 = GameRoutine_ababe0_alt1(a4, v13 | 0x100u, (__int64)&v35, a6);
  v26 = (*(__int64 (**)(__int64, _QWORD, _QWORD, float))(*(_QWORD*)a4 + 80LL))(
      a4, v13 & 1, v25 & 1, a5);
  v27 = v40;
  v35 = GameData_1fc23d8;
  *(_WORD*)(a2 + 33) = v26 & 1 | 0x100;
  if (v27 != 0) {
    v28 = *(_QWORD*)v21;
    v41 = v27;
    v29 = 128;
    if (*(_QWORD*)(v28 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(v28 + v29, v27);
  }
  v35 = (__int64 (**)(void))(v14 + 16);
  if ((v36[0] & 1) != 0 && v37 != 0) {
    v30 = 128;
    if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v21 + v30, v37);
  }
}

__int64 Bool_aba0c0(__int64* a1, __int64 a2, __int64 a3, _QWORD* a4, _QWORD* a5,
                    float a6, float a7)
{
  __int64 v14;
  __int64 v15;
  int* v16;
  __int64 v17;
  unsigned __int8 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  int v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 result;
  int v28;
  int v29;
  int v30;
  __int64 v31;
  int* v32;
  __int64 v33;
  int v34;
  int v35;
  float v36;
  int* v37;
  __int64* v38;
  char v39;
  _QWORD* v40;
  __int64 v41;
  char v42;
  __int64 v43;
  __int64 v44;
  unsigned __int8 v45;
  char v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  int* v53;
  char v54;
  int v56;
  char v57;
  char v58;
  __int64 v59;
  __int64 v60;
  char v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  int v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  char v72;
  __int64 v73;
  char v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  char v82;
  char v84;
  __int64 v85;
  __int64 v86;
  char v87;
  __int64* v88;
  char v89;
  __int64 v90;
  __int64 v91;
  unsigned __int8 v92;
  char v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  char v100;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  int v106;
  __int64 v107;
  unsigned __int8 v108;
  __int64 (**v109)();
  _QWORD v110[2];
  __int64 v111;
  char v112;
  __int16 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  char v117;
  __int64 (**v118)();
  _QWORD v119[2];
  __int64 v120;
  char v121;
  __int16 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  char v126;
  __int64 (**v127)();
  _QWORD v128[2];
  __int64 v129;
  char v130;
  __int16 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  char v135;
  __int64 (**v136)();
  _QWORD v137[2];
  __int64 v138;
  char v139;
  __int16 v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  char v144;
  __int64* v145;

  if (((*(__int64 (**)(_QWORD*))(*a5 + 56LL))(a5) & 1) == 0 &&
      ((*(__int64 (**)(_QWORD*))(*a5 + 48LL))(a5) & 1) == 0) {
    v22 = *a1;
    v23 = a1;
    v24 = a2;
    v25 = (_QWORD*)a3;
    v26 = a4;
    return (*(__int64 (**)(__int64*, __int64, _QWORD*, _QWORD*, float, float))(
        v22 + 32))(v23, v24, v25, v26, a6, a7);
  }
  if (((*(__int64 (**)(_QWORD*))(*a4 + 56LL))(a4) & 1) == 0 &&
          ((*(__int64 (**)(_QWORD*))(*a4 + 48LL))(a4) & 1) == 0 ||
      ((v14 = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 56LL))(a3)) & 1) == 0 &&
          ((v14 = (*(__int64 (**)(__int64))(*(_QWORD*)a3 + 48LL))(a3)) & 1) ==
              0) {
    v22 = *a1;
    v23 = a1;
    v24 = a2;
    v25 = a4;
    v26 = a5;
    return (*(__int64 (**)(__int64*, __int64, _QWORD*, _QWORD*, float, float))(
        v22 + 32))(v23, v24, v25, v26, a6, a7);
  }
  v16 = (int*)a5[5];
  v15 = a5[6];
  v17 = 64;
  if (*(_BYTE*)(a2 + 34) != 0) {
    v17 = 33;
  }
  v18 = *(_BYTE*)(a2 + v17);
  v19 = v15 - (_QWORD)v16;
  v20 = (unsigned __int64)(v15 - (_QWORD)v16) >> 3;
  if (a7 > (float)*(int*)(v15 - 8)) {
    v21 = v20 - 1;
  LABEL_30:
    v145 = a1;
    v42 = *(_BYTE*)(a3 + 8);
    v109 = (__int64 (**)())(GameData_212e530[0] + 16);
    if ((v42 & 1) != 0) {
      v45 = v18;
      v14 = fw_text_String_CopyTerminated(v110, *(_QWORD*)(a3 + 24),
                                          *(_QWORD*)(a3 + 16));
    }
    else {
      v43 = *(_QWORD*)(a3 + 16);
      v44 = *(_QWORD*)(a3 + 24);
      v45 = v18;
      v110[0] = *(_QWORD*)(a3 + 8);
      v110[1] = v43;
      v111 = v44;
    }
    v46 = *(_BYTE*)(a3 + 32);
    v47 = a2;
    v114 = 0;
    v115 = 0;
    v116 = 0;
    v109 = GameData_1fc23d8;
    v112 = v46;
    v113 = *(_WORD*)(a3 + 33);
    v49 = *(_QWORD*)(a3 + 40);
    v48 = *(_QWORD*)(a3 + 48);
    v50 = v48 - v49;
    if (v48 != v49) {
      if (v50 < 0) {
        goto LABEL_100;
      }
      v51 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v48 - v49, 16, 0);
      v52 = v51 + v50;
      v114 = v51;
      v115 = v51;
      v116 = v51 + v50;
      memcpy(v51, v49, v50 - 2);
      v115 = v52;
    }
    v53 = &v16[2 * v21];
    v117 = *(_BYTE*)(a3 + 64);
    v54 = GameRoutine_ababe0(a4, v45 | 0x100LL, &v109, a7);
    v56 = *((unsigned __int8*)v53 + 5);
    v57 = *((_BYTE*)v53 + 4);
    v109 = GameData_1fc23d8;
    if (v56 != 0) {
      v58 = v57;
    }
    else {
      v58 = v54;
    }
    if (v114 != 0) {
      v115 = v114;
      v59 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v59 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, (__int64)v114);
    }
    v109 = &gfx_settings_BaseParamInstance_vtable;
    if ((v110[0] & 1) != 0 && v111 != 0) {
      v60 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v60 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, (__int64)v111);
    }
    result = (*(__int64 (**)(__int64*, _QWORD, _QWORD, float))(*v145 + 80))(
        v145, v45 & 1, v58 & 1, a6);
    *(_WORD*)(v47 + 33) = result & 1 | 0x100;
    return result;
  }
  v21 = v20 - 1;
  if ((int)v20 < 1) {
    v21 = 0;
    goto LABEL_30;
  }
  v28 = *v16;
  if (a7 < (float)*v16) {
    v29 = 0;
    v21 = 0;
    v30 = *v16;
    goto LABEL_22;
  }
  v31 = (v19 >> 3) & 0x7FFFFFFF;
  v32 = v16 + 2;
  v33 = 1;
  do {
    if (v31 == v33) {
      v29 = 0;
      goto LABEL_29;
    }
    v34 = *v32;
    v32 += 2;
    v30 = v34;
    ++v33;
  } while (a7 >= (float)v34);
  v21 = v33 - 2;
  v29 = v33 - 1;
  v28 = v16[2 * v21];
LABEL_22:
  v35 = v30 - v28;
  if (v35 < 1) {
  LABEL_29:
    v36 = 0.0;
    if (v21 != v29) {
      goto LABEL_24;
    }
    goto LABEL_30;
  }
  v36 = (float)(a7 - (float)v28) / (float)(unsigned int)v35;
  if (v21 == v29) {
    goto LABEL_30;
  }
LABEL_24:
  v37 = &v16[2 * v21];
  if ((*((_BYTE*)v37 + 5) & 1) != 0 || BYTE1(v16[2 * v29 + 1]) == 1) {
    LODWORD(v145) = *v37;
    v106 = v16[2 * v29];
    v38 = (__int64*)GameData_212e530[0];
    v40 = (_QWORD*)(a3 + 8);
    v39 = *(_BYTE*)(a3 + 8);
    v107 = v29;
    v108 = v18;
    v136 = (__int64 (**)())(GameData_212e530[0] + 16);
    if ((v39 & 1) != 0) {
      v14 = fw_text_String_CopyTerminated(v137, *(_QWORD*)(a3 + 24),
                                          *(_QWORD*)(a3 + 16));
    }
    else {
      v41 = *(_QWORD*)(a3 + 16);
      v137[0] = *v40;
      v137[1] = v41;
      v138 = *(_QWORD*)(a3 + 24);
    }
    v61 = *(_BYTE*)(a3 + 32);
    v141 = 0;
    v142 = 0;
    v143 = 0;
    v139 = v61;
    v136 = GameData_1fc23d8;
    v140 = *(_WORD*)(a3 + 33);
    v63 = *(_QWORD*)(a3 + 40);
    v62 = *(_QWORD*)(a3 + 48);
    v64 = v62 - v63;
    if (v62 != v63) {
      if ((v64 & 0x8000000000000000LL) == 0) {
        v65 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v62 - v63, 16, 0);
        v66 = v65 + v64;
        v141 = v65;
        v142 = v65;
        v143 = v65 + v64;
        memcpy(v65, v63, v64 - 2);
        v142 = v66;
        v38 = &GameData_1fc14b0;
        goto LABEL_54;
      }
    LABEL_100:
      GameRoutine_abae00(v14);
    }
  LABEL_54:
    v144 = *(_BYTE*)(a3 + 64);
    v14 = GameRoutine_ababe0(a4, v108 | 0x100LL, &v136, (float)(int)v145);
    if (*((_BYTE*)v37 + 5) != 0) {
      v68 = *((unsigned __int8*)v37 + 4);
    }
    else {
      v68 = v14;
    }
    LODWORD(v145) = v68;
    v136 = GameData_1fc23d8;
    if (v141 != 0) {
      v142 = v141;
      v69 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v69 = 56;
      }
      v14 = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v69, v141);
    }
    v136 = (__int64 (**)())(v38 + 2);
    if ((v137[0] & 1) != 0 && v138 != 0) {
      v70 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v70 = 56;
      }
      v14 = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v70, v138);
    }
    v71 = a5[5];
    v72 = *(_BYTE*)v40;
    v127 = (__int64 (**)())(v38 + 2);
    if ((v72 & 1) != 0) {
      v14 = fw_text_String_CopyTerminated(v128, *(_QWORD*)(a3 + 24),
                                          *(_QWORD*)(a3 + 16));
    }
    else {
      v73 = *(_QWORD*)(a3 + 16);
      v128[0] = *v40;
      v128[1] = v73;
      v129 = *(_QWORD*)(a3 + 24);
    }
    v74 = *(_BYTE*)(a3 + 32);
    v132 = 0;
    v133 = 0;
    v134 = 0;
    v130 = v74;
    v127 = GameData_1fc23d8;
    v131 = *(_WORD*)(a3 + 33);
    v76 = *(_QWORD*)(a3 + 40);
    v75 = *(_QWORD*)(a3 + 48);
    v77 = v75 - v76;
    if (v75 != v76) {
      if (v77 < 0) {
        goto LABEL_100;
      }
      v78 = v38;
      v79 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v75 - v76, 16, 0);
      v80 = v79 + v77;
      v132 = v79;
      v133 = v79;
      v134 = v79 + v77;
      memcpy(v79, v76, v77 - 2);
      v133 = v80;
      v38 = v78;
    }
    v81 = v71 + 8 * v107;
    v135 = *(_BYTE*)(a3 + 64);
    v82 = GameRoutine_ababe0(a4, v108 | 0x100LL, &v127, (float)v106);
    if (*(_BYTE*)(v81 + 5) != 0) {
      v84 = *(_BYTE*)(v81 + 4);
    }
    else {
      v84 = v82;
    }
    v127 = GameData_1fc23d8;
    if (v132 != 0) {
      v133 = v132;
      v85 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v85 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v85, (__int64)v132);
    }
    v127 = (__int64 (**)())(v38 + 2);
    if ((v128[0] & 1) != 0 && v129 != 0) {
      v86 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v86 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v86, (__int64)v129);
    }
    v87 = (*(__int64 (**)(__int64*, __int64, _QWORD, float))(*a1 + 80))(
        a1, (unsigned __int8)v145 & 1, v84 & 1, v36);
    result = (*(__int64 (**)(__int64*, _QWORD, _QWORD, float))(*a1 + 80))(
        a1, v108 & 1, v87 & 1, a6);
    *(_WORD*)(a2 + 33) = result & 1 | 0x100;
  }
  else {
    v88 = (__int64*)GameData_212e530[0];
    v89 = *(_BYTE*)(a3 + 8);
    v118 = (__int64 (**)())(GameData_212e530[0] + 16);
    if ((v89 & 1) != 0) {
      v92 = v18;
      v14 = fw_text_String_CopyTerminated(v119, *(_QWORD*)(a3 + 24),
                                          *(_QWORD*)(a3 + 16));
    }
    else {
      v90 = *(_QWORD*)(a3 + 16);
      v91 = *(_QWORD*)(a3 + 24);
      v92 = v18;
      v119[0] = *(_QWORD*)(a3 + 8);
      v119[1] = v90;
      v120 = v91;
    }
    v93 = *(_BYTE*)(a3 + 32);
    v123 = 0;
    v124 = 0;
    v125 = 0;
    v118 = GameData_1fc23d8;
    v121 = v93;
    v122 = *(_WORD*)(a3 + 33);
    v95 = *(_QWORD*)(a3 + 40);
    v94 = *(_QWORD*)(a3 + 48);
    v96 = fw_memory_g_heap_manager_ptr;
    v97 = v94 - v95;
    if (v94 != v95) {
      if (v97 < 0) {
        goto LABEL_100;
      }
      v98 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v94 - v95, 16, 0);
      v99 = v98 + v97;
      v123 = v98;
      v124 = v98;
      v125 = v98 + v97;
      memcpy(v98, v95, v97 - 2);
      v124 = v99;
      v88 = &GameData_1fc14b0;
    }
    v126 = *(_BYTE*)(a3 + 64);
    v100 = GameRoutine_ababe0(a4, v92 | 0x100LL, &v118, a7);
    result = (*(__int64 (**)(__int64*, _QWORD, _QWORD, float))(*a1 + 80))(
        a1, v92 & 1, v100 & 1, a6);
    v102 = v123;
    v118 = GameData_1fc23d8;
    *(_WORD*)(a2 + 33) = result & 1 | 0x100;
    if (v102 != 0) {
      v103 = *(_QWORD*)v96;
      v124 = v102;
      v104 = 128;
      if (*(_QWORD*)(v103 + 200) == 0) {
        v104 = 56;
      }
      result = nn_mem_StandardAllocator_Free(v103 + v104, v102);
    }
    v118 = (__int64 (**)())(v88 + 2);
    if ((v119[0] & 1) != 0 && v120 != 0) {
      v105 = 128;
      if (*(_QWORD*)(*(_QWORD*)v96 + 200LL) == 0) {
        v105 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v96 + v105, v120);
    }
  }
  return result;
}

#pragma GCC visibility pop
