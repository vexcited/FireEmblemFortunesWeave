#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_b54ca0(__int64, const char*, __int64*);
__int64 GameRoutine_b67250(__int64*, const char*, __int64);
__int64 ResourceBuilder_b49f50(_QWORD*, __int64, unsigned __int64, __int64*);
__int64 ResourceBuilder_b4bb60(__int64, unsigned __int8*, __int64*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_b32f50();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void gfxa_b743b0(__int64* a1, __int64* a2, int* a3);

void gfxa_b743b0(__int64* a1, __int64* a2, int* a3)
{
  int* v3;
  int v6;
  int v7;
  _QWORD* v8;
  int v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  const char* v38;
  unsigned __int64 v39;
  __int64* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  char v44;
  __int64 v45;
  __int64 v46;
  int v47;
  int v48;
  __int64 v49;
  int* v50;
  int v51;
  int v52;
  __int64 v53;
  __int64 v54;
  char* v55;
  const char* v56;
  unsigned __int64 v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  char v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  char* v67;
  const char* v68;
  unsigned __int64 v69;
  __int64* v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  char v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  char* v79;
  const char* v80;
  unsigned __int64 v81;
  __int64* v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  char v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  const char* v90;
  unsigned __int64 v91;
  __int64* v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  char v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  const char* v101;
  unsigned __int64 v102;
  __int64* v103;
  __int64 v104;
  __int64 v105;
  __int64 v106;
  char v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  const char* v111;
  unsigned __int64 v112;
  __int64* v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  char v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  const char* v121;
  unsigned __int64 v122;
  __int64* v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  char v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;
  int v131;
  int v132;
  int v133;
  int v134;
  int v135;
  int v136;
  int v137;
  int v138;
  struct {
    __int64 v139;
    __int64 v140;
    __int64 v141;
    char v142;
    char gap57_[3];
    int v143;
  } v139_;
  struct {
    __int64 v144;
    unsigned __int64 v145;
    const char* v146;
  } v144_;
  _QWORD v147[3];
  struct {
    __int64 v148;
    int v149;
    int v150;
    __int64 v151;
    char v152;
    char gap137_[3];
    int v153;
  } v148_;

  v3 = a3;
  v148_.v153 = 0;
  v148_.v151 = 0x100000001LL;
  v148_.v152 = 1;
  v6 = a3[1];
  v148_.v149 = *a3;
  v148_.v150 = v6;
  v7 = a3[14];
  LODWORD(v148_.v148) = 0;
  HIDWORD(v148_.v148) = v7;
  a1[1] = GameRoutine_b67250(a2, "DstColor_SkyBlur", (__int64)&v148_.v148);
  v8 = (_QWORD*)*a2;
  v9 = v3[1] / 2;
  v148_.v149 = *v3 / 2;
  v148_.v150 = v9;
  v10 = ResourceBuilder_b49f50(v8, (__int64)"TempHalfDownscale_SkyBlur", 0x19u,
                               &v148_.v148);
  v11 = (_QWORD*)a2[1];
  v12 = v10;
  v14 = (__int64*)v11[5];
  v13 = v11[6];
  if ((unsigned __int64)v14 >= v13) {
    v16 = v11[4];
    v17 = (char*)v14 - v16;
    v18 = ((__int64)v14 - v16) >> 3;
    v19 = v18 + 1;
    if ((unsigned __int64)(v18 + 1) >> 61 != 0) {
      GameRoutine_b32f50();
    }
    v20 = v13 - v16;
    if (v20 >> 2 > v19) {
      v19 = v20 >> 2;
    }
    if ((unsigned __int64)v20 >= 0x7FFFFFFFFFFFFFF8LL) {
      v21 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v21 = v19;
    }
    if (v21 != 0) {
      if (v21 >> 61 != 0) {
        GameRoutine_60a210();
      }
      v22 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v21, 16, 0);
    }
    else {
      v22 = 0;
    }
    v23 = v22 + 8 * v21;
    v24 = (unsigned __int64)v14 - v16;
    v25 = (__int64)&v17[v22 + -8 * v18];
    *(_QWORD*)&v17[v22] = v12;
    v15 = (__int64)&v17[v22 + 8];
    memcpy(v25, v16, v24);
    v11[4] = v25;
    v11[5] = v15;
    v11[6] = v23;
    if (v16 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v16);
    }
  }
  else {
    *v14 = v10;
    v15 = (__int64)(v14 + 1);
  }
  v11[5] = v15;
  *a1 = v12;
  v27 = *v3;
  v28 = v3[1];
  v29 = *v3 + 3;
  if (*v3 >= 0) {
    v30 = *v3;
  }
  else {
    v30 = *v3 + 7;
  }
  if (v27 < 0) {
    v31 = v27 + 15;
  }
  else {
    v29 = *v3;
    v31 = *v3;
  }
  v32 = v29 >> 2;
  v133 = v27 + (v27 < 0 ? 0x1F : 0);
  if (v28 >= 0) {
    v33 = v3[1];
  }
  else {
    v33 = v28 + 3;
  }
  v34 = v33 >> 2;
  if (v28 >= 0) {
    v35 = v3[1];
  }
  else {
    v35 = v28 + 7;
  }
  v36 = v28 + 15;
  v137 = v34;
  v138 = v32;
  v148_.v149 = v32;
  v148_.v150 = v34;
  if (v28 >= 0) {
    v36 = v28;
  }
  v134 = v36;
  v37 = v28 + 31;
  if (v28 >= 0) {
    v37 = v28;
  }
  v132 = v37;
  v147[0] = 27;
  v147[1] = 23;
  v147[2] = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 26, 16, 0);
  strcpy((char*)v147[2], "RTTempDownscale_SkyBlur");
  std___1_to_string_1a0a790((void*)(&v144_.v144), 0);
  if ((v144_.v144 & 1) != 0) {
    v38 = v144_.v146;
  }
  else {
    v38 = (char*)&v144_.v144 + 1;
  }
  if ((v144_.v144 & 1) != 0) {
    v39 = v144_.v145;
  }
  else {
    v39 = (unsigned __int64)(unsigned __int8)v144_.v144 >> 1;
  }
  v40 = (__int64*)GameRoutine_1a09ce0((__int64)v147, v38, v39);
  v42 = v40[1];
  v41 = v40[2];
  v139_.v139 = *v40;
  v139_.v140 = v42;
  v139_.v141 = v41;
  v40[1] = 0;
  v40[2] = 0;
  *v40 = 0;
  v43 = ResourceBuilder_b4bb60((__int64)a2, (unsigned __int8*)&v139_.v139,
                               &v148_.v148);
  v44 = v139_.v139;
  a1[3] = v43;
  if ((v44 & 1) != 0 && v139_.v141 != 0) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v45,
                                  v139_.v141);
  }
  if ((v144_.v144 & 1) != 0 && v144_.v146 != nullptr) {
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v46,
                                  (__int64)v144_.v146);
  }
  v47 = v35 >> 3;
  v48 = v30 >> 3;
  v49 = fw_memory_g_heap_manager_ptr;
  if ((v147[0] & 1) != 0 && v147[2] != 0) {
    v50 = v3;
    v51 = v31;
    v52 = v47;
    v53 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v53 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v53,
                                  v147[2]);
    v47 = v52;
    v31 = v51;
    v3 = v50;
    v48 = v30 >> 3;
    v49 = fw_memory_g_heap_manager_ptr;
  }
  v54 = *(_QWORD*)v49;
  v135 = v47;
  v136 = v48;
  v148_.v149 = v48;
  v148_.v150 = v47;
  v55 = (char*)fw_memory_HeapManager_Allocate(v54, 26, 16, 0);
  strcpy(v55, "RTTempDownscale_SkyBlur");
  v147[0] = 27;
  v147[1] = 23;
  v147[2] = v55;
  std___1_to_string_1a0a790((void*)(&v144_.v144), 1);
  if ((v144_.v144 & 1) != 0) {
    v56 = v144_.v146;
  }
  else {
    v56 = (char*)&v144_.v144 + 1;
  }
  if ((v144_.v144 & 1) != 0) {
    v57 = v144_.v145;
  }
  else {
    v57 = (unsigned __int64)(unsigned __int8)v144_.v144 >> 1;
  }
  v58 = (__int64*)GameRoutine_1a09ce0((__int64)v147, v56, v57);
  v60 = v58[1];
  v59 = v58[2];
  v139_.v139 = *v58;
  v139_.v140 = v60;
  v139_.v141 = v59;
  v58[1] = 0;
  v58[2] = 0;
  *v58 = 0;
  v61 = ResourceBuilder_b4bb60((__int64)a2, (unsigned __int8*)&v139_.v139,
                               &v148_.v148);
  v62 = v139_.v139;
  a1[4] = v61;
  if ((v62 & 1) != 0 && v139_.v141 != 0) {
    v63 = 128;
    if (*(_QWORD*)(*(_QWORD*)v49 + 200LL) == 0) {
      v63 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v49 + v63, v139_.v141);
  }
  if ((v144_.v144 & 1) != 0 && v144_.v146 != nullptr) {
    v64 = 128;
    if (*(_QWORD*)(*(_QWORD*)v49 + 200LL) == 0) {
      v64 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v49 + v64, (__int64)v144_.v146);
  }
  if ((v147[0] & 1) != 0 && v147[2] != 0) {
    v65 = 128;
    if (*(_QWORD*)(*(_QWORD*)v49 + 200LL) == 0) {
      v65 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v49 + v65, v147[2]);
  }
  v66 = *(_QWORD*)v49;
  v148_.v149 = v31 >> 4;
  v148_.v150 = v134 >> 4;
  v67 = (char*)fw_memory_HeapManager_Allocate(v66, 26, 16, 0);
  strcpy(v67, "RTTempDownscale_SkyBlur");
  v147[0] = 27;
  v147[1] = 23;
  v147[2] = v67;
  std___1_to_string_1a0a790((void*)(&v144_.v144), 2);
  if ((v144_.v144 & 1) != 0) {
    v68 = v144_.v146;
  }
  else {
    v68 = (char*)&v144_.v144 + 1;
  }
  if ((v144_.v144 & 1) != 0) {
    v69 = v144_.v145;
  }
  else {
    v69 = (unsigned __int64)(unsigned __int8)v144_.v144 >> 1;
  }
  v70 = (__int64*)GameRoutine_1a09ce0((__int64)v147, v68, v69);
  v72 = v70[1];
  v71 = v70[2];
  v139_.v139 = *v70;
  v139_.v140 = v72;
  v139_.v141 = v71;
  v70[1] = 0;
  v70[2] = 0;
  *v70 = 0;
  v73 = ResourceBuilder_b4bb60((__int64)a2, (unsigned __int8*)&v139_.v139,
                               &v148_.v148);
  v74 = v139_.v139;
  a1[5] = v73;
  if ((v74 & 1) != 0 && v139_.v141 != 0) {
    v75 = 128;
    if (*(_QWORD*)(*(_QWORD*)v49 + 200LL) == 0) {
      v75 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v49 + v75, v139_.v141);
  }
  if ((v144_.v144 & 1) != 0 && v144_.v146 != nullptr) {
    v76 = 128;
    if (*(_QWORD*)(*(_QWORD*)v49 + 200LL) == 0) {
      v76 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v49 + v76, (__int64)v144_.v146);
  }
  if ((v147[0] & 1) != 0 && v147[2] != 0) {
    v77 = 128;
    if (*(_QWORD*)(*(_QWORD*)v49 + 200LL) == 0) {
      v77 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v49 + v77, v147[2]);
  }
  v78 = *(_QWORD*)v49;
  v148_.v149 = v133 >> 5;
  v148_.v150 = v132 >> 5;
  v79 = (char*)fw_memory_HeapManager_Allocate(v78, 26, 16, 0);
  strcpy(v79, "RTTempDownscale_SkyBlur");
  v147[0] = 27;
  v147[1] = 23;
  v147[2] = v79;
  std___1_to_string_1a0a790((void*)(&v144_.v144), 3);
  if ((v144_.v144 & 1) != 0) {
    v80 = v144_.v146;
  }
  else {
    v80 = (char*)&v144_.v144 + 1;
  }
  if ((v144_.v144 & 1) != 0) {
    v81 = v144_.v145;
  }
  else {
    v81 = (unsigned __int64)(unsigned __int8)v144_.v144 >> 1;
  }
  v82 = (__int64*)GameRoutine_1a09ce0((__int64)v147, v80, v81);
  v84 = v82[1];
  v83 = v82[2];
  v139_.v139 = *v82;
  v139_.v140 = v84;
  v139_.v141 = v83;
  v82[1] = 0;
  v82[2] = 0;
  *v82 = 0;
  v85 = ResourceBuilder_b4bb60((__int64)a2, (unsigned __int8*)&v139_.v139,
                               &v148_.v148);
  v86 = v139_.v139;
  a1[6] = v85;
  if ((v86 & 1) != 0 && v139_.v141 != 0) {
    v87 = 128;
    if (*(_QWORD*)(*(_QWORD*)v49 + 200LL) == 0) {
      v87 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v49 + v87, v139_.v141);
  }
  if ((v144_.v144 & 1) != 0 && v144_.v146 != nullptr) {
    v88 = 128;
    if (*(_QWORD*)(*(_QWORD*)v49 + 200LL) == 0) {
      v88 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v49 + v88, (__int64)v144_.v146);
  }
  if ((v147[0] & 1) != 0 && v147[2] != 0) {
    v89 = 128;
    if (*(_QWORD*)(*(_QWORD*)v49 + 200LL) == 0) {
      v89 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v49 + v89, v147[2]);
  }
  v148_.v149 = v138;
  v148_.v150 = v137;
  strcpy((char*)v147, "$RTTempBlur_SkyBlur");
  std___1_to_string_1a0a790((void*)(&v144_.v144), 0);
  if ((v144_.v144 & 1) != 0) {
    v90 = v144_.v146;
  }
  else {
    v90 = (char*)&v144_.v144 + 1;
  }
  if ((v144_.v144 & 1) != 0) {
    v91 = v144_.v145;
  }
  else {
    v91 = (unsigned __int64)(unsigned __int8)v144_.v144 >> 1;
  }
  v92 = (__int64*)GameRoutine_1a09ce0((__int64)v147, v90, v91);
  v94 = v92[1];
  v93 = v92[2];
  v139_.v139 = *v92;
  v139_.v140 = v94;
  v139_.v141 = v93;
  v92[1] = 0;
  v92[2] = 0;
  *v92 = 0;
  v95 = ResourceBuilder_b4bb60((__int64)a2, (unsigned __int8*)&v139_.v139,
                               &v148_.v148);
  v96 = v139_.v139;
  a1[7] = v95;
  if ((v96 & 1) != 0 && v139_.v141 != 0) {
    v97 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v97 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v97,
                                  v139_.v141);
  }
  if ((v144_.v144 & 1) != 0 && v144_.v146 != nullptr) {
    v98 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v98 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v98,
                                  (__int64)v144_.v146);
  }
  v99 = fw_memory_g_heap_manager_ptr;
  if ((v147[0] & 1) != 0 && v147[2] != 0) {
    v100 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v100 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v100,
                                  v147[2]);
  }
  v148_.v149 = v136;
  v148_.v150 = v135;
  strcpy((char*)v147, "$RTTempBlur_SkyBlur");
  std___1_to_string_1a0a790((void*)(&v144_.v144), 1);
  if ((v144_.v144 & 1) != 0) {
    v101 = v144_.v146;
  }
  else {
    v101 = (char*)&v144_.v144 + 1;
  }
  if ((v144_.v144 & 1) != 0) {
    v102 = v144_.v145;
  }
  else {
    v102 = (unsigned __int64)(unsigned __int8)v144_.v144 >> 1;
  }
  v103 = (__int64*)GameRoutine_1a09ce0((__int64)v147, v101, v102);
  v105 = v103[1];
  v104 = v103[2];
  v139_.v139 = *v103;
  v139_.v140 = v105;
  v139_.v141 = v104;
  v103[1] = 0;
  v103[2] = 0;
  *v103 = 0;
  v106 = ResourceBuilder_b4bb60((__int64)a2, (unsigned __int8*)&v139_.v139,
                                &v148_.v148);
  v107 = v139_.v139;
  a1[8] = v106;
  if ((v107 & 1) != 0 && v139_.v141 != 0) {
    v108 = 128;
    if (*(_QWORD*)(*(_QWORD*)v99 + 200LL) == 0) {
      v108 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v99 + v108, v139_.v141);
  }
  if ((v144_.v144 & 1) != 0 && v144_.v146 != nullptr) {
    v109 = 128;
    if (*(_QWORD*)(*(_QWORD*)v99 + 200LL) == 0) {
      v109 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v99 + v109, (__int64)v144_.v146);
  }
  if ((v147[0] & 1) != 0 && v147[2] != 0) {
    v110 = 128;
    if (*(_QWORD*)(*(_QWORD*)v99 + 200LL) == 0) {
      v110 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v99 + v110, v147[2]);
  }
  v148_.v149 = v31 >> 4;
  v148_.v150 = v134 >> 4;
  strcpy((char*)v147, "$RTTempBlur_SkyBlur");
  std___1_to_string_1a0a790((void*)(&v144_.v144), 2);
  if ((v144_.v144 & 1) != 0) {
    v111 = v144_.v146;
  }
  else {
    v111 = (char*)&v144_.v144 + 1;
  }
  if ((v144_.v144 & 1) != 0) {
    v112 = v144_.v145;
  }
  else {
    v112 = (unsigned __int64)(unsigned __int8)v144_.v144 >> 1;
  }
  v113 = (__int64*)GameRoutine_1a09ce0((__int64)v147, v111, v112);
  v115 = v113[1];
  v114 = v113[2];
  v139_.v139 = *v113;
  v139_.v140 = v115;
  v139_.v141 = v114;
  v113[1] = 0;
  v113[2] = 0;
  *v113 = 0;
  v116 = ResourceBuilder_b4bb60((__int64)a2, (unsigned __int8*)&v139_.v139,
                                &v148_.v148);
  v117 = v139_.v139;
  a1[9] = v116;
  if ((v117 & 1) != 0 && v139_.v141 != 0) {
    v118 = 128;
    if (*(_QWORD*)(*(_QWORD*)v99 + 200LL) == 0) {
      v118 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v99 + v118, v139_.v141);
  }
  if ((v144_.v144 & 1) != 0 && v144_.v146 != nullptr) {
    v119 = 128;
    if (*(_QWORD*)(*(_QWORD*)v99 + 200LL) == 0) {
      v119 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v99 + v119, (__int64)v144_.v146);
  }
  if ((v147[0] & 1) != 0 && v147[2] != 0) {
    v120 = 128;
    if (*(_QWORD*)(*(_QWORD*)v99 + 200LL) == 0) {
      v120 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v99 + v120, v147[2]);
  }
  v148_.v149 = v133 >> 5;
  v148_.v150 = v132 >> 5;
  strcpy((char*)v147, "$RTTempBlur_SkyBlur");
  std___1_to_string_1a0a790((void*)(&v144_.v144), 3);
  if ((v144_.v144 & 1) != 0) {
    v121 = v144_.v146;
  }
  else {
    v121 = (char*)&v144_.v144 + 1;
  }
  if ((v144_.v144 & 1) != 0) {
    v122 = v144_.v145;
  }
  else {
    v122 = (unsigned __int64)(unsigned __int8)v144_.v144 >> 1;
  }
  v123 = (__int64*)GameRoutine_1a09ce0((__int64)v147, v121, v122);
  v125 = v123[1];
  v124 = v123[2];
  v139_.v139 = *v123;
  v139_.v140 = v125;
  v139_.v141 = v124;
  v123[1] = 0;
  v123[2] = 0;
  *v123 = 0;
  v126 = ResourceBuilder_b4bb60((__int64)a2, (unsigned __int8*)&v139_.v139,
                                &v148_.v148);
  v127 = v139_.v139;
  a1[10] = v126;
  if ((v127 & 1) != 0 && v139_.v141 != 0) {
    v128 = 128;
    if (*(_QWORD*)(*(_QWORD*)v99 + 200LL) == 0) {
      v128 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v99 + v128, v139_.v141);
  }
  if ((v144_.v144 & 1) != 0 && v144_.v146 != nullptr) {
    v129 = 128;
    if (*(_QWORD*)(*(_QWORD*)v99 + 200LL) == 0) {
      v129 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v99 + v129, (__int64)v144_.v146);
  }
  if ((v147[0] & 1) != 0 && v147[2] != 0) {
    v130 = 128;
    if (*(_QWORD*)(*(_QWORD*)v99 + 200LL) == 0) {
      v130 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v99 + v130, v147[2]);
  }
  if (*((_BYTE*)v3 + 9) == 1) {
    v139_.v143 = 0;
    v139_.v139 = 0x100000000LL;
    v139_.v141 = 0x100000001LL;
    v139_.v142 = 1;
    v131 = v3[1];
    LODWORD(v139_.v140) = *v3;
    HIDWORD(v139_.v140) = v131;
    a1[2] = GameRoutine_b54ca0((__int64)a2, "SkyBlurMeshMask", &v139_.v139);
  }
}

#pragma GCC visibility pop
