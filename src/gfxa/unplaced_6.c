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
_QWORD* GameRoutine_604020(_QWORD* result);
__attribute__((swiftcall)) void gfxa_aa1540(PSEUDO_X8, __int64, __int64,
                                            __int64, __int64, __int64, int*);
__attribute__((swiftcall)) void gfxa_aa1a00(PSEUDO_X8, __int64, __int64,
                                            __int64, __int64, __int64, int*);
__int64 GameRoutine_1a0a680(__int64, unsigned __int64, const char*,
                            unsigned __int64);
__int64 GameRoutine_aa1b50(__int64, unsigned __int64);
__int64 TextBox_55c600(__int64 result);
__int64 TextBox_567c80(__int64);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1_pmr_get_default_resource(_QWORD);
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c960;
extern __int128 GameData_1a83190;
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 game_g_frame_clock;
void GameHr_c6c4f0(__int64, unsigned __int8*, unsigned int);
void LightingAnimModule_c6dc40(__int64, __int64);
void Settings_aa1690(__int64, __int64, unsigned __int64);
void __attribute__((noreturn)) String_60a1d0();
void gfxa_c65f00(__int64 a1, unsigned __int8* a2);
__int64 gfxa_1999d60(__int64 a1, __int64 a2);

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

void gfxa_c65f00(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v2;
  unsigned __int8* v3;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64* v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  bool v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  bool v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  bool v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64* v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  bool v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  const char* v45;
  unsigned __int64 v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  unsigned __int64 v55;
  bool v56;
  unsigned __int64 v57;
  unsigned __int64 v58;
  __int64 v59;
  unsigned __int64 v60;
  char* v61;
  __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  char* v65;
  bool v66;
  unsigned __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  char* v71;
  __int64 v72;
  unsigned __int64 v73;
  char* v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  unsigned __int64 v78;
  bool v79;
  unsigned __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  char* v84;
  __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  char* v88;
  bool v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  char* v94;
  __int64 v95;
  unsigned __int64 v96;
  char* v97;
  __int64* v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  unsigned __int64 v102;
  bool v103;
  unsigned __int64 v104;
  unsigned __int64 v105;
  __int64 v106;
  unsigned __int64 v107;
  char* v108;
  __int64 v109;
  unsigned __int64 v110;
  unsigned __int64 v111;
  char* v112;
  bool v113;
  unsigned __int64 v114;
  unsigned __int64 v115;
  __int64 v116;
  unsigned __int64 v117;
  char* v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  unsigned __int64 v123;
  const char* v124;
  unsigned __int64 v125;
  __int64* v126;
  __int64 v127;
  __int64 v128;
  char* v129;
  unsigned __int64 v130;
  __int64 v131;
  __int64 v132;
  __int64 v133;
  __int64 v134;
  unsigned __int64 v135;
  bool v136;
  unsigned __int64 v137;
  unsigned __int64 v138;
  __int64 v139;
  unsigned __int64 v140;
  char* v141;
  __int64 v142;
  unsigned __int64 v143;
  unsigned __int64 v144;
  char* v145;
  bool v146;
  unsigned __int64 v147;
  unsigned __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  unsigned __int64 v152;
  bool v153;
  unsigned __int64 v154;
  unsigned __int64 v155;
  __int64 v156;
  unsigned __int64 v157;
  char* v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  unsigned __int64 v162;
  bool v163;
  unsigned __int64 v164;
  unsigned __int64 v165;
  __int64 v166;
  unsigned __int64 v167;
  char* v168;
  __int64 v169;
  unsigned __int64 v170;
  unsigned __int64 v171;
  char* v172;
  bool v173;
  unsigned __int64 v174;
  unsigned __int64 v175;
  __int64 v176;
  unsigned __int64 v177;
  char* v178;
  __int64 v179;
  __int64 v180;
  __int64 v181;
  unsigned __int64 v182;
  bool v183;
  unsigned __int64 v184;
  const char* v185;
  unsigned __int64 v186;
  __int64* v187;
  __int64 v188;
  __int64 v189;
  unsigned __int64 v190;
  char* v191;
  __int64 v192;
  __int64 v193;
  __int64 v194;
  __int64 v195;
  unsigned __int64 v196;
  bool v197;
  unsigned __int64 v198;
  unsigned __int64 v199;
  __int64 v200;
  unsigned __int64 v201;
  char* v202;
  __int64 v203;
  unsigned __int64 v204;
  char* v205;
  __int64 v206;
  __int64 v207;
  unsigned __int64 v208;
  bool v209;
  unsigned __int64 v210;
  unsigned __int64 v211;
  __int64 v212;
  unsigned __int64 v213;
  char* v214;
  __int64 v215;
  unsigned __int64 v216;
  char* v217;
  __int64 v218;
  __int64 v219;
  unsigned __int64 v220;
  bool v221;
  unsigned __int64 v222;
  unsigned __int64 v223;
  __int64 v224;
  unsigned __int64 v225;
  char* v226;
  __int64 v227;
  __int64 v228;
  __int64 v229;
  unsigned __int64 v230;
  bool v231;
  unsigned __int64 v232;
  unsigned __int64 v233;
  __int64 v234;
  unsigned __int64 v235;
  char* v236;
  __int64 v237;
  __int64 v238;
  __int64 v239;
  unsigned __int64 v240;
  bool v241;
  unsigned __int64 v242;
  unsigned __int64 v243;
  __int64 v244;
  unsigned __int64 v245;
  char* v246;
  __int64 v247;
  unsigned __int64 v248;
  unsigned __int64 v249;
  char* v250;
  bool v251;
  unsigned __int64 v252;
  unsigned __int64 v253;
  __int64 v254;
  unsigned __int64 v255;
  char* v256;
  __int64 v257;
  char* v258;
  unsigned __int64 v259;
  __int64* v260;
  __int64 v261;
  __int64 v262;
  __int64 v263;
  unsigned __int64 v264;
  bool v265;
  unsigned __int64 v266;
  unsigned __int64 v267;
  __int64 v268;
  unsigned __int64 v269;
  char* v270;
  __int64 v271;
  unsigned __int64 v272;
  unsigned __int64 v273;
  char* v274;
  bool v275;
  unsigned __int64 v276;
  unsigned __int64 v277;
  __int64 v278;
  unsigned __int64 v279;
  char* v280;
  __int64 v281;
  __int64 v282;
  __int64 v283;
  __int64 v284;
  unsigned __int64 v285;
  const char* v286;
  unsigned __int64 v287;
  __int64* v288;
  __int64 v289;
  __int64 v290;
  char* v291;
  unsigned __int64 v292;
  __int64 v293;
  __int64 v294;
  __int64 v295;
  __int64 v296;
  unsigned __int64 v297;
  bool v298;
  unsigned __int64 v299;
  unsigned __int64 v300;
  __int64 v301;
  unsigned __int64 v302;
  char* v303;
  __int64 v304;
  __int64* v305;
  __int64 v306;
  __int64 v307;
  unsigned __int64 v308;
  unsigned __int64 v309;
  char* v310;
  bool v311;
  unsigned __int64 v312;
  unsigned __int64 v313;
  __int64 v314;
  unsigned __int64 v315;
  char* v316;
  __int64 v317;
  __int64 v318;
  __int64 v319;
  __int64* v320;
  __int64 v321;
  __int64 v322;
  char* v323;
  unsigned __int64 v324;
  __int64 v325;
  __int64 v326;
  __int64 v327;
  __int64 v328;
  __int64 v329;
  unsigned __int64 v330;
  bool v331;
  unsigned __int64 v332;
  unsigned __int64 v333;
  __int64 v334;
  unsigned __int64 v335;
  char* v336;
  __int64 v337;
  unsigned __int64 v338;
  unsigned __int64 v339;
  char* v340;
  bool v341;
  unsigned __int64 v342;
  unsigned __int64 v343;
  __int64 v344;
  unsigned __int64 v345;
  char* v346;
  __int64 v347;
  char* v348;
  unsigned __int64 v349;
  __int64 v350;
  __int64 v351;
  __int64 v352;
  unsigned __int64 v353;
  bool v354;
  unsigned __int64 v355;
  unsigned __int64 v356;
  __int64 v357;
  unsigned __int64 v358;
  char* v359;
  __int64 v360;
  __int64 v361;
  __int64 v362;
  unsigned __int64 v363;
  bool v364;
  unsigned __int64 v365;
  unsigned __int64 v366;
  __int64 v367;
  unsigned __int64 v368;
  char* v369;
  __int64 v370;
  unsigned __int64 v371;
  unsigned __int64 v372;
  char* v373;
  bool v374;
  unsigned __int64 v375;
  unsigned __int64 v376;
  __int64 v377;
  unsigned __int64 v378;
  char* v379;
  __int64 v380;
  __int64 v381;
  __int64 v382;
  unsigned __int64 v383;
  bool v384;
  unsigned __int64 v385;
  const char* v386;
  unsigned __int64 v387;
  __int64* v388;
  __int64 v389;
  __int64 v390;
  __int64* v391;
  __int64 v392;
  __int64 v393;
  char* v394;
  unsigned __int64 v395;
  __int64 v396;
  __int64 v397;
  __int64 v398;
  __int64 v399;
  __int64 v400;
  unsigned __int64* v401;
  __int64 v402;
  unsigned __int64 v403;
  unsigned __int64 v404;
  __int64 v405;
  unsigned __int64 v406;
  unsigned __int64 v407;
  unsigned __int64 v408;
  struct {
    __int64 v409;
    __int64 v410;
  } v409_;
  struct {
    __int64 v411;
    __int64 v412;
  } v411_;
  struct {
    __int64 v413;
    unsigned __int64 v414;
    __int64 v415;
  } v413_;
  struct {
    __int64 v416;
    __int64 v417;
  } v416_;
  struct {
    __int64 v418;
    __int64 v419;
  } v418_;
  struct {
    __int64 v420;
    __int64 v421;
  } v420_;
  struct {
    __int64 v422;
    __int64 v423;
  } v422_;
  struct {
    __int64 v424;
    __int64 v425;
  } v424_;
  struct {
    __int64 v426;
    __int64 v427;
  } v426_;
  struct {
    __int64 v428;
    __int64 v429;
  } v428_;
  struct {
    __int64 v430;
    unsigned __int64 v431;
    char* v432;
  } v430_;
  struct {
    __int64 v433;
    __int64 v434;
  } v433_;
  struct {
    __int64 v435;
    __int64 v436;
  } v435_;
  struct {
    __int64 v437;
    __int64 v438;
  } v437_;
  struct {
    __int64 v439;
    unsigned __int64 v440;
    char* v441;
  } v439_;
  struct {
    __int64 v442;
    unsigned __int64 v443;
    char* v444;
  } v442_;
  struct {
    __int64 v445;
    unsigned __int64 v446;
    const char* v447;
  } v445_;
  struct {
    __int64 v448;
    __int64 v449;
  } v448_;
  struct {
    __int64 v450;
    __int64 v451;
  } v450_;
  int v452[3];

  v3 = a2 + 24;
  v2 = a2[24];
  v6 = a2[48];
  if ((v6 & 1) != 0) {
    v7 = *((_QWORD*)a2 + 7);
  }
  else {
    v7 = v6 >> 1;
  }
  v8 = a2[72];
  if ((v8 & 1) != 0) {
    v9 = *((_QWORD*)a2 + 10);
  }
  else {
    v9 = v8 >> 1;
  }
  v407 = v9;
  v10 = a2[96];
  if ((v10 & 1) != 0) {
    v11 = *((_QWORD*)a2 + 13);
  }
  else {
    v11 = v10 >> 1;
  }
  v406 = v11;
  if ((v2 & 1) != 0) {
    v12 = *((_QWORD*)a2 + 4);
  }
  else {
    v12 = v2 >> 1;
  }
  v408 = v12;
  v13 = game_g_frame_clock_ptr[0];
  if (v7 != 0) {
    v14 = *(unsigned __int8*)(a1 + 64);
    v16 = *(_QWORD*)(a1 + 72);
    v15 = *(_QWORD*)(a1 + 80);
    v17 = (v14 & 1) == 0;
    v18 = v14 >> 1;
    LODWORD(v445_.v445) = 0;
    v19 = v17 ? a1 + 65 : v15;
    v20 = v17 ? v18 : v16;
    v21 = (v6 & 1) != 0 ? *((_QWORD*)a2 + 8) : (__int64)(a2 + 49);
    gfxa_aa1540((void*)(&v450_.v450),
                *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224), v19, v20, v21,
                v7, (int*)&v445_.v445);
    Settings_aa1690(v450_.v450, v21, v7);
    v22 = v450_.v451;
    if (v450_.v451 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v450_.v451 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22);
      std___1___shared_weak_count___release_weak(v22);
    }
  }
  v23 = *(unsigned __int8*)(a1 + 88);
  v24 = (v23 & 1) == 0;
  v25 = v23 >> 1;
  if (v24) {
    v26 = v25;
  }
  else {
    v26 = *(_QWORD*)(a1 + 96);
  }
  v27 = *a2;
  if (v24) {
    v28 = a1 + 89;
  }
  else {
    v28 = *(_QWORD*)(a1 + 104);
  }
  v29 = (v27 & 1) == 0;
  v30 = v27 >> 1;
  if (v29) {
    v31 = v30;
  }
  else {
    v31 = *((_QWORD*)a2 + 1);
  }
  if (v29) {
    v32 = (__int64)(a2 + 1);
  }
  else {
    v32 = *((_QWORD*)a2 + 2);
  }
  LODWORD(v445_.v445) = 1;
  gfxa_aa1540((void*)(&v448_.v448), *(_QWORD*)(*v13 + 13224), v28, v26, v32,
              v31, (int*)&v445_.v445);
  Settings_aa1690(v448_.v448, v32, v31);
  v33 = v448_.v449;
  if (v448_.v449 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v448_.v449 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v33 + 16LL))(v33);
    std___1___shared_weak_count___release_weak(v33);
    if ((*v3 & 1) == 0) {
      goto LABEL_41;
    }
  LABEL_43:
    fw_text_String_CopyTerminated(&v442_.v442, *((_QWORD*)a2 + 5),
                                  *((_QWORD*)a2 + 4));
    goto LABEL_44;
  }
  if ((*v3 & 1) != 0) {
    goto LABEL_43;
  }
LABEL_41:
  v34 = *((_QWORD*)v3 + 1);
  v442_.v442 = *(_QWORD*)v3;
  v442_.v443 = v34;
  v442_.v444 = *((char**)v3 + 2);
LABEL_44:
  v35 = (__int64*)GameRoutine_1a0a680((__int64)&v442_.v442, 0, "__", 2u);
  v37 = v35[1];
  v36 = v35[2];
  v445_.v445 = *v35;
  v445_.v446 = v37;
  v445_.v447 = (const char*)v36;
  v35[1] = 0;
  v35[2] = 0;
  *v35 = 0;
  if ((v442_.v442 & 1) != 0 && v442_.v444 != nullptr) {
    v38 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v38 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v38,
                                  (__int64)v442_.v444);
  }
  if (v408 != 0) {
    v39 = *(unsigned __int8*)(a1 + 112);
    v40 = (v39 & 1) == 0;
    v41 = v39 >> 1;
    if (v40) {
      v42 = v41;
    }
    else {
      v42 = *(_QWORD*)(a1 + 120);
    }
    if (v40) {
      v43 = a1 + 113;
    }
    else {
      v43 = *(_QWORD*)(a1 + 128);
    }
    if ((*a2 & 1) != 0) {
      fw_text_String_CopyTerminated(&v439_.v439, *((_QWORD*)a2 + 2),
                                    *((_QWORD*)a2 + 1));
    }
    else {
      v44 = *((_QWORD*)a2 + 1);
      v439_.v439 = *(_QWORD*)a2;
      v439_.v440 = v44;
      v439_.v441 = *((char**)a2 + 2);
    }
    if ((v445_.v445 & 1) != 0) {
      v45 = v445_.v447;
    }
    else {
      v45 = (char*)&v445_.v445 + 1;
    }
    if ((v445_.v445 & 1) != 0) {
      v46 = v445_.v446;
    }
    else {
      v46 = (unsigned __int64)(unsigned __int8)v445_.v445 >> 1;
    }
    v47 = (__int64*)GameRoutine_1a09ce0((__int64)&v439_.v439, v45, v46);
    v49 = v47[1];
    v48 = v47[2];
    v442_.v442 = *v47;
    v442_.v443 = v49;
    v442_.v444 = (char*)v48;
    v47[1] = 0;
    v47[2] = 0;
    *v47 = 0;
    if ((v442_.v442 & 1) != 0) {
      v50 = v442_.v444;
    }
    else {
      v50 = (char*)&v442_.v442 + 1;
    }
    if ((v442_.v442 & 1) != 0) {
      v51 = v442_.v443;
    }
    else {
      v51 = (unsigned __int64)(unsigned __int8)v442_.v442 >> 1;
    }
    if ((GameRoutine_aa1b50((__int64)v50, v51) & 1) != 0) {
      LODWORD(v413_.v413) = 1;
      gfxa_aa1540((void*)(&v430_.v430), *(_QWORD*)(*v13 + 13224), v43, v42,
                  (__int64)v50, v51, (int*)&v413_.v413);
      Settings_aa1690(v430_.v430, (__int64)v50, v51);
      if ((v442_.v442 & 1) == 0) {
      LABEL_79:
        if ((v439_.v439 & 1) != 0 && v439_.v441 != nullptr) {
          v53 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v53 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                            v53,
                                        (__int64)v439_.v441);
        }
        v54 = v430_.v431;
        if (v430_.v431 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v430_.v431 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
          std___1___shared_weak_count___release_weak(v54);
        }
        goto LABEL_87;
      }
    }
    else {
      v430_.v430 = 0;
      v430_.v431 = 0;
      if ((v442_.v442 & 1) == 0) {
        goto LABEL_79;
      }
    }
    if (v442_.v444 != nullptr) {
      v52 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v52 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v52, (__int64)v442_.v444);
    }
    goto LABEL_79;
  }
LABEL_87:
  if (v7 == 0) {
    goto LABEL_143;
  }
  v55 = *(unsigned __int8*)(a1 + 64);
  v56 = (v55 & 1) == 0;
  v57 = v55 >> 1;
  if (v56) {
    v58 = v57;
  }
  else {
    v58 = *(_QWORD*)(a1 + 72);
  }
  if (v56) {
    v59 = a1 + 65;
  }
  else {
    v59 = *(_QWORD*)(a1 + 80);
  }
  v60 = v58 + 9;
  if (v58 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v60 >= 0x17) {
    if ((v60 | 7) == 0x17) {
      v62 = 26;
    }
    else {
      v62 = (v60 | 7) + 1;
    }
    v61 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v62,
                                                16, 0);
    v442_.v443 = v58 + 9;
    v442_.v444 = v61;
    v442_.v442 = v62 | 1;
    goto LABEL_102;
  }
  v442_.v443 = 0;
  v442_.v444 = nullptr;
  v442_.v442 = (unsigned __int8)(2 * v60);
  v61 = (char*)&v442_.v442 + 1;
  if (v58 != 0) {
  LABEL_102:
    memmove((__int64)v61, v59, v58);
  }
  strcpy(&v61[v58], "_Keyframe");
  if ((v442_.v442 & 1) != 0) {
    v63 = v442_.v443;
  }
  else {
    v63 = (unsigned __int64)(unsigned __int8)v442_.v442 >> 1;
  }
  v64 = a2[48];
  if ((v442_.v442 & 1) != 0) {
    v65 = v442_.v444;
  }
  else {
    v65 = (char*)&v442_.v442 + 1;
  }
  v66 = (v64 & 1) == 0;
  v67 = v64 >> 1;
  if (v66) {
    v68 = v67;
  }
  else {
    v68 = *((_QWORD*)a2 + 7);
  }
  if (v66) {
    v69 = (__int64)(a2 + 49);
  }
  else {
    v69 = *((_QWORD*)a2 + 8);
  }
  v70 = v68 + 9;
  if (v68 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v70 >= 0x17) {
    if ((v70 | 7) == 0x17) {
      v72 = 26;
    }
    else {
      v72 = (v70 | 7) + 1;
    }
    v71 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v72,
                                                16, 0);
    v439_.v440 = v68 + 9;
    v439_.v441 = v71;
    v439_.v439 = v72 | 1;
  }
  else {
    v439_.v440 = 0;
    v439_.v441 = nullptr;
    v439_.v439 = (unsigned __int8)(2 * v70);
    v71 = (char*)&v439_.v439 + 1;
    if (v68 == 0) {
      goto LABEL_124;
    }
  }
  memmove((__int64)v71, v69, v68);
LABEL_124:
  strcpy(&v71[v68], "_Keyframe");
  if ((v439_.v439 & 1) != 0) {
    v73 = v439_.v440;
  }
  else {
    v73 = (unsigned __int64)(unsigned __int8)v439_.v439 >> 1;
  }
  if ((v439_.v439 & 1) != 0) {
    v74 = v439_.v441;
  }
  else {
    v74 = (char*)&v439_.v439 + 1;
  }
  LODWORD(v430_.v430) = 2;
  gfxa_aa1a00((void*)(&v437_.v437),
              *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224), (__int64)v65, v63,
              (__int64)v74, v73, (int*)&v430_.v430);
  Settings_aa1690(v437_.v437, (__int64)v74, v73);
  v75 = v437_.v438;
  if (v437_.v438 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v437_.v438 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v75 + 16LL))(v75);
    std___1___shared_weak_count___release_weak(v75);
  }
  if ((v439_.v439 & 1) != 0 && v439_.v441 != nullptr) {
    v76 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v76 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v76,
                                  (__int64)v439_.v441);
  }
  if ((v442_.v442 & 1) != 0 && v442_.v444 != nullptr) {
    v77 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v77 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v77,
                                  (__int64)v442_.v444);
  }
LABEL_143:
  v78 = *(unsigned __int8*)(a1 + 88);
  v79 = (v78 & 1) == 0;
  v80 = v78 >> 1;
  if (v79) {
    v81 = v80;
  }
  else {
    v81 = *(_QWORD*)(a1 + 96);
  }
  if (v79) {
    v82 = a1 + 89;
  }
  else {
    v82 = *(_QWORD*)(a1 + 104);
  }
  v83 = v81 + 9;
  if (v81 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v83 >= 0x17) {
    if ((v83 | 7) == 0x17) {
      v85 = 26;
    }
    else {
      v85 = (v83 | 7) + 1;
    }
    v84 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v85,
                                                16, 0);
    v442_.v443 = v81 + 9;
    v442_.v444 = v84;
    v442_.v442 = v85 | 1;
    goto LABEL_157;
  }
  v442_.v443 = 0;
  v442_.v444 = nullptr;
  v442_.v442 = (unsigned __int8)(2 * v83);
  v84 = (char*)&v442_.v442 + 1;
  if (v81 != 0) {
  LABEL_157:
    memmove((__int64)v84, v82, v81);
  }
  strcpy(&v84[v81], "_Keyframe");
  if ((v442_.v442 & 1) != 0) {
    v86 = v442_.v443;
  }
  else {
    v86 = (unsigned __int64)(unsigned __int8)v442_.v442 >> 1;
  }
  v87 = *a2;
  if ((v442_.v442 & 1) != 0) {
    v88 = v442_.v444;
  }
  else {
    v88 = (char*)&v442_.v442 + 1;
  }
  v89 = (v87 & 1) == 0;
  v90 = v87 >> 1;
  if (v89) {
    v91 = v90;
  }
  else {
    v91 = *((_QWORD*)a2 + 1);
  }
  if (v89) {
    v92 = (__int64)(a2 + 1);
  }
  else {
    v92 = *((_QWORD*)a2 + 2);
  }
  v93 = v91 + 9;
  if (v91 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v93 >= 0x17) {
    if ((v93 | 7) == 0x17) {
      v95 = 26;
    }
    else {
      v95 = (v93 | 7) + 1;
    }
    v94 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v95,
                                                16, 0);
    v439_.v440 = v91 + 9;
    v439_.v441 = v94;
    v439_.v439 = v95 | 1;
    goto LABEL_178;
  }
  v439_.v440 = 0;
  v439_.v441 = nullptr;
  v439_.v439 = (unsigned __int8)(2 * v93);
  v94 = (char*)&v439_.v439 + 1;
  if (v91 != 0) {
  LABEL_178:
    memmove((__int64)v94, v92, v91);
  }
  strcpy(&v94[v91], "_Keyframe");
  if ((v439_.v439 & 1) != 0) {
    v96 = v439_.v440;
  }
  else {
    v96 = (unsigned __int64)(unsigned __int8)v439_.v439 >> 1;
  }
  if ((v439_.v439 & 1) != 0) {
    v97 = v439_.v441;
  }
  else {
    v97 = (char*)&v439_.v439 + 1;
  }
  LODWORD(v430_.v430) = 2;
  v98 = game_g_frame_clock_ptr[0];
  gfxa_aa1a00((void*)(&v435_.v435),
              *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224), (__int64)v88, v86,
              (__int64)v97, v96, (int*)&v430_.v430);
  Settings_aa1690(v435_.v435, (__int64)v97, v96);
  v99 = v435_.v436;
  if (v435_.v436 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v435_.v436 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v99 + 16LL))(v99);
    std___1___shared_weak_count___release_weak(v99);
    if ((v439_.v439 & 1) == 0) {
      goto LABEL_193;
    }
  }
  else if ((v439_.v439 & 1) == 0) {
    goto LABEL_193;
  }
  if (v439_.v441 != nullptr) {
    v100 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v100 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v100,
                                  (__int64)v439_.v441);
  }
LABEL_193:
  if ((v442_.v442 & 1) != 0 && v442_.v444 != nullptr) {
    v101 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v101 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v101,
                                  (__int64)v442_.v444);
  }
  if (v408 != 0) {
    v102 = *(unsigned __int8*)(a1 + 112);
    v103 = (v102 & 1) == 0;
    v104 = v102 >> 1;
    if (v103) {
      v105 = v104;
    }
    else {
      v105 = *(_QWORD*)(a1 + 120);
    }
    if (v103) {
      v106 = a1 + 113;
    }
    else {
      v106 = *(_QWORD*)(a1 + 128);
    }
    v107 = v105 + 9;
    if (v105 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_848;
    }
    if (v107 >= 0x17) {
      if ((v107 | 7) == 0x17) {
        v109 = 26;
      }
      else {
        v109 = (v107 | 7) + 1;
      }
      v108 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                   v109, 16, 0);
      v442_.v443 = v105 + 9;
      v442_.v444 = v108;
      v442_.v442 = v109 | 1;
    }
    else {
      v442_.v443 = 0;
      v442_.v444 = nullptr;
      v442_.v442 = (unsigned __int8)(2 * v107);
      v108 = (char*)&v442_.v442 + 1;
      if (v105 == 0) {
      LABEL_214:
        strcpy(&v108[v105], "_Keyframe");
        if ((v442_.v442 & 1) != 0) {
          v110 = v442_.v443;
        }
        else {
          v110 = (unsigned __int64)(unsigned __int8)v442_.v442 >> 1;
        }
        v111 = *a2;
        if ((v442_.v442 & 1) != 0) {
          v112 = v442_.v444;
        }
        else {
          v112 = (char*)&v442_.v442 + 1;
        }
        v113 = (v111 & 1) == 0;
        v114 = v111 >> 1;
        if (v113) {
          v115 = v114;
        }
        else {
          v115 = *((_QWORD*)a2 + 1);
        }
        if (v113) {
          v116 = (__int64)(a2 + 1);
        }
        else {
          v116 = *((_QWORD*)a2 + 2);
        }
        v117 = v115 + 9;
        if (v115 + 9 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_848;
        }
        if (v117 >= 0x17) {
          if ((v117 | 7) == 0x17) {
            v119 = 26;
          }
          else {
            v119 = (v117 | 7) + 1;
          }
          v120 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v119,
                                                16, 0);
          v121 = v119 | 1;
          v118 = (char*)v120;
          v98 = game_g_frame_clock_ptr[0];
          v430_.v431 = v115 + 9;
          v430_.v432 = (char*)v120;
          v430_.v430 = v121;
        }
        else {
          v430_.v431 = 0;
          v430_.v432 = nullptr;
          v430_.v430 = (unsigned __int8)(2 * v117);
          v118 = (char*)&v430_.v430 + 1;
          if (v115 == 0) {
            goto LABEL_235;
          }
        }
        memmove((__int64)v118, v116, v115);
      LABEL_235:
        v123 = v445_.v446;
        v122 = (__int64)v445_.v447;
        strcpy(&v118[v115], "_Keyframe");
        if ((v445_.v445 & 1) != 0) {
          v124 = (const char*)v122;
        }
        else {
          v124 = (char*)&v445_.v445 + 1;
        }
        if ((v445_.v445 & 1) != 0) {
          v125 = v123;
        }
        else {
          v125 = (unsigned __int64)(unsigned __int8)v445_.v445 >> 1;
        }
        v126 = (__int64*)GameRoutine_1a09ce0((__int64)&v430_.v430, v124, v125);
        v128 = v126[1];
        v127 = v126[2];
        v439_.v439 = *v126;
        v439_.v440 = v128;
        v439_.v441 = (char*)v127;
        v126[1] = 0;
        v126[2] = 0;
        *v126 = 0;
        if ((v439_.v439 & 1) != 0) {
          v129 = v439_.v441;
        }
        else {
          v129 = (char*)&v439_.v439 + 1;
        }
        if ((v439_.v439 & 1) != 0) {
          v130 = v439_.v440;
        }
        else {
          v130 = (unsigned __int64)(unsigned __int8)v439_.v439 >> 1;
        }
        if ((GameRoutine_aa1b50((__int64)v129, v130) & 1) != 0) {
          LODWORD(v413_.v413) = 2;
          gfxa_aa1a00((void*)(&v433_.v433), *(_QWORD*)(*v98 + 13224),
                      (__int64)v112, v110, (__int64)v129, v130,
                      (int*)&v413_.v413);
          Settings_aa1690(v433_.v433, (__int64)v129, v130);
          v131 = v433_.v434;
          if (v433_.v434 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v433_.v434 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v131 + 16LL))(v131);
            std___1___shared_weak_count___release_weak(v131);
          }
        }
        else {
          v433_.v433 = 0;
          v433_.v434 = 0;
        }
        if ((v439_.v439 & 1) != 0 && v439_.v441 != nullptr) {
          v132 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v132 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                            v132,
                                        (__int64)v439_.v441);
        }
        if ((v430_.v430 & 1) != 0 && v430_.v432 != nullptr) {
          v133 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v133 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                            v133,
                                        (__int64)v430_.v432);
        }
        if ((v442_.v442 & 1) != 0 && v442_.v444 != nullptr) {
          v134 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v134 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                            v134,
                                        (__int64)v442_.v444);
        }
        goto LABEL_267;
      }
    }
    memmove((__int64)v108, v106, v105);
    goto LABEL_214;
  }
LABEL_267:
  if (v407 == 0) {
    goto LABEL_323;
  }
  v135 = *(unsigned __int8*)(a1 + 64);
  v136 = (v135 & 1) == 0;
  v137 = v135 >> 1;
  if (v136) {
    v138 = v137;
  }
  else {
    v138 = *(_QWORD*)(a1 + 72);
  }
  if (v136) {
    v139 = a1 + 65;
  }
  else {
    v139 = *(_QWORD*)(a1 + 80);
  }
  v140 = v138 + 2;
  if (v138 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v140 >= 0x17) {
    if ((v140 | 7) == 0x17) {
      v142 = 26;
    }
    else {
      v142 = (v140 | 7) + 1;
    }
    v141 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v142,
                                                 16, 0);
    v442_.v443 = v138 + 2;
    v442_.v444 = v141;
    v442_.v442 = v142 | 1;
    goto LABEL_282;
  }
  v442_.v443 = 0;
  v442_.v444 = nullptr;
  v442_.v442 = (unsigned __int8)(2 * v140);
  v141 = (char*)&v442_.v442 + 1;
  if (v138 != 0) {
  LABEL_282:
    memmove((__int64)v141, v139, v138);
  }
  LODWORD(v439_.v439) = 0;
  strcpy(&v141[v138], "Ex");
  if ((v442_.v442 & 1) != 0) {
    v143 = v442_.v443;
  }
  else {
    v143 = (unsigned __int64)(unsigned __int8)v442_.v442 >> 1;
  }
  v144 = a2[72];
  v98 = game_g_frame_clock_ptr[0];
  if ((v442_.v442 & 1) != 0) {
    v145 = v442_.v444;
  }
  else {
    v145 = (char*)&v442_.v442 + 1;
  }
  v146 = (v144 & 1) == 0;
  v147 = v144 >> 1;
  if (v146) {
    v148 = v147;
  }
  else {
    v148 = *((_QWORD*)a2 + 10);
  }
  if (v146) {
    v149 = (__int64)(a2 + 73);
  }
  else {
    v149 = *((_QWORD*)a2 + 11);
  }
  gfxa_aa1540((void*)(&v428_.v428),
              *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224), (__int64)v145,
              v143, v149, v148, (int*)&v439_.v439);
  Settings_aa1690(v428_.v428, v149, v148);
  v150 = v428_.v429;
  if (v428_.v429 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v428_.v429 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v150 + 16LL))(v150);
    std___1___shared_weak_count___release_weak(v150);
    if ((v442_.v442 & 1) == 0) {
      goto LABEL_303;
    }
  }
  else if ((v442_.v442 & 1) == 0) {
    goto LABEL_303;
  }
  if (v442_.v444 != nullptr) {
    v151 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v151 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v151,
                                  (__int64)v442_.v444);
  }
LABEL_303:
  v152 = *(unsigned __int8*)(a1 + 64);
  v153 = (v152 & 1) == 0;
  v154 = v152 >> 1;
  if (v153) {
    v155 = v154;
  }
  else {
    v155 = *(_QWORD*)(a1 + 72);
  }
  if (v153) {
    v156 = a1 + 65;
  }
  else {
    v156 = *(_QWORD*)(a1 + 80);
  }
  v157 = v155 + 2;
  if (v155 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v157 >= 0x17) {
    v159 = v157 | 7;
    if (v159 == 23) {
      v160 = 26;
    }
    else {
      v160 = v159 + 1;
    }
    v158 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v160,
                                                 16, 0);
    v442_.v444 = v158;
    v442_.v442 = v160 | 1;
  }
  else {
    v442_.v443 = 0;
    v442_.v444 = nullptr;
    v442_.v442 = (unsigned __int8)(2 * v157);
    v158 = (char*)&v442_.v442 + 1;
    if (v155 == 0) {
      goto LABEL_318;
    }
  }
  memmove((__int64)v158, v156, v155);
LABEL_318:
  strcpy(&v158[v155], "Ex");
  if ((v442_.v442 & 1) != 0 && v442_.v444 != nullptr) {
    v161 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v161 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v161,
                                  (__int64)v442_.v444);
  }
LABEL_323:
  if (v406 == 0) {
    goto LABEL_390;
  }
  v162 = *(unsigned __int8*)(a1 + 88);
  v163 = (v162 & 1) == 0;
  v164 = v162 >> 1;
  if (v163) {
    v165 = v164;
  }
  else {
    v165 = *(_QWORD*)(a1 + 96);
  }
  if (v163) {
    v166 = a1 + 89;
  }
  else {
    v166 = *(_QWORD*)(a1 + 104);
  }
  v167 = v165 + 2;
  if (v165 + 2 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v167 >= 0x17) {
    if ((v167 | 7) == 0x17) {
      v169 = 26;
    }
    else {
      v169 = (v167 | 7) + 1;
    }
    v168 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v169,
                                                 16, 0);
    v442_.v443 = v165 + 2;
    v442_.v444 = v168;
    v442_.v442 = v169 | 1;
    goto LABEL_338;
  }
  v442_.v443 = 0;
  v442_.v444 = nullptr;
  v442_.v442 = (unsigned __int8)(2 * v167);
  v168 = (char*)&v442_.v442 + 1;
  if (v165 != 0) {
  LABEL_338:
    memmove((__int64)v168, v166, v165);
  }
  strcpy(&v168[v165], "Ex");
  if ((v442_.v442 & 1) != 0) {
    v170 = v442_.v443;
  }
  else {
    v170 = (unsigned __int64)(unsigned __int8)v442_.v442 >> 1;
  }
  v171 = *a2;
  if ((v442_.v442 & 1) != 0) {
    v172 = v442_.v444;
  }
  else {
    v172 = (char*)&v442_.v442 + 1;
  }
  v173 = (v171 & 1) == 0;
  v174 = v171 >> 1;
  if (v173) {
    v175 = v174;
  }
  else {
    v175 = *((_QWORD*)a2 + 1);
  }
  if (v173) {
    v176 = (__int64)(a2 + 1);
  }
  else {
    v176 = *((_QWORD*)a2 + 2);
  }
  v177 = v175 + 1;
  if (v175 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v177 >= 0x17) {
    if ((v177 | 7) == 0x17) {
      v179 = 26;
    }
    else {
      v179 = (v177 | 7) + 1;
    }
    v180 =
        fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v179, 16, 0);
    v181 = v179 | 1;
    v178 = (char*)v180;
    v98 = game_g_frame_clock_ptr[0];
    v430_.v431 = v175 + 1;
    v430_.v432 = (char*)v180;
    v430_.v430 = v181;
    goto LABEL_359;
  }
  v430_.v431 = 0;
  v430_.v432 = nullptr;
  v430_.v430 = (unsigned __int8)(2 * v177);
  v178 = (char*)&v430_.v430 + 1;
  if (v175 != 0) {
  LABEL_359:
    memmove((__int64)v178, v176, v175);
  }
  *(_WORD*)&v178[v175] = 95;
  v182 = a2[96];
  v183 = (v182 & 1) == 0;
  v184 = v182 >> 1;
  if (v183) {
    v185 = (const char*)(a2 + 97);
  }
  else {
    v185 = *((const char**)a2 + 14);
  }
  if (v183) {
    v186 = v184;
  }
  else {
    v186 = *((_QWORD*)a2 + 13);
  }
  v187 = (__int64*)GameRoutine_1a09ce0((__int64)&v430_.v430, v185, v186);
  v189 = v187[1];
  v188 = v187[2];
  v439_.v439 = *v187;
  v439_.v440 = v189;
  v439_.v441 = (char*)v188;
  v187[1] = 0;
  v187[2] = 0;
  *v187 = 0;
  if ((v439_.v439 & 1) != 0) {
    v190 = v439_.v440;
  }
  else {
    v190 = (unsigned __int64)(unsigned __int8)v439_.v439 >> 1;
  }
  if ((v439_.v439 & 1) != 0) {
    v191 = v439_.v441;
  }
  else {
    v191 = (char*)&v439_.v439 + 1;
  }
  LODWORD(v413_.v413) = 1;
  gfxa_aa1540((void*)(&v426_.v426), *(_QWORD*)(*v98 + 13224), (__int64)v172,
              v170, (__int64)v191, v190, (int*)&v413_.v413);
  Settings_aa1690(v426_.v426, (__int64)v191, v190);
  v192 = v426_.v427;
  if (v426_.v427 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v426_.v427 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v192 + 16LL))(v192);
    std___1___shared_weak_count___release_weak(v192);
    if ((v439_.v439 & 1) != 0) {
    LABEL_375:
      if (v439_.v441 != nullptr) {
        v193 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v193 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v193, (__int64)v439_.v441);
      }
    }
  }
  else if ((v439_.v439 & 1) != 0) {
    goto LABEL_375;
  }
  if ((v430_.v430 & 1) != 0 && v430_.v432 != nullptr) {
    v194 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v194 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v194,
                                  (__int64)v430_.v432);
  }
  if ((v442_.v442 & 1) != 0 && v442_.v444 != nullptr) {
    v195 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v195 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v195,
                                  (__int64)v442_.v444);
  }
LABEL_390:
  v196 = *(unsigned __int8*)(a1 + 64);
  v197 = (v196 & 1) == 0;
  v198 = v196 >> 1;
  if (v197) {
    v199 = v198;
  }
  else {
    v199 = *(_QWORD*)(a1 + 72);
  }
  if (v197) {
    v200 = a1 + 65;
  }
  else {
    v200 = *(_QWORD*)(a1 + 80);
  }
  v201 = v199 + 5;
  if (v199 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v201 >= 0x17) {
    if ((v201 | 7) == 0x17) {
      v203 = 26;
    }
    else {
      v203 = (v201 | 7) + 1;
    }
    v202 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v203,
                                                 16, 0);
    v442_.v443 = v199 + 5;
    v442_.v444 = v202;
    v442_.v442 = v203 | 1;
    goto LABEL_404;
  }
  v442_.v443 = 0;
  v442_.v444 = nullptr;
  v442_.v442 = (unsigned __int8)(2 * v201);
  v202 = (char*)&v442_.v442 + 1;
  if (v199 != 0) {
  LABEL_404:
    memmove((__int64)v202, v200, v199);
  }
  LODWORD(v439_.v439) = 0;
  strcpy(&v202[v199], "_Bmap");
  if ((v442_.v442 & 1) != 0) {
    v204 = v442_.v443;
  }
  else {
    v204 = (unsigned __int64)(unsigned __int8)v442_.v442 >> 1;
  }
  if ((v442_.v442 & 1) != 0) {
    v205 = v442_.v444;
  }
  else {
    v205 = (char*)&v442_.v442 + 1;
  }
  gfxa_aa1540((void*)(&v424_.v424), *(_QWORD*)(*v98 + 13224), (__int64)v205,
              v204, (__int64)"Preset/Bmap", 11, (int*)&v439_.v439);
  Settings_aa1690(v424_.v424, (__int64)"Preset/Bmap", 0xBu);
  v206 = v424_.v425;
  if (v424_.v425 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v424_.v425 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v206 + 16LL))(v206);
    std___1___shared_weak_count___release_weak(v206);
    if ((v442_.v442 & 1) == 0) {
      goto LABEL_419;
    }
  }
  else if ((v442_.v442 & 1) == 0) {
    goto LABEL_419;
  }
  if (v442_.v444 != nullptr) {
    v207 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v207 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v207,
                                  (__int64)v442_.v444);
  }
LABEL_419:
  v208 = *(unsigned __int8*)(a1 + 64);
  v209 = (v208 & 1) == 0;
  v210 = v208 >> 1;
  if (v209) {
    v211 = v210;
  }
  else {
    v211 = *(_QWORD*)(a1 + 72);
  }
  if (v209) {
    v212 = a1 + 65;
  }
  else {
    v212 = *(_QWORD*)(a1 + 80);
  }
  v213 = v211 + 7;
  if (v211 + 7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v213 >= 0x17) {
    if ((v213 | 7) == 0x17) {
      v215 = 26;
    }
    else {
      v215 = (v213 | 7) + 1;
    }
    v214 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v215,
                                                 16, 0);
    v442_.v443 = v211 + 7;
    v442_.v444 = v214;
    v442_.v442 = v215 | 1;
    goto LABEL_433;
  }
  v442_.v443 = 0;
  v442_.v444 = nullptr;
  v442_.v442 = (unsigned __int8)(2 * v213);
  v214 = (char*)&v442_.v442 + 1;
  if (v211 != 0) {
  LABEL_433:
    memmove((__int64)v214, v212, v211);
  }
  LODWORD(v439_.v439) = 0;
  strcpy(&v214[v211], "_Combat");
  if ((v442_.v442 & 1) != 0) {
    v216 = v442_.v443;
  }
  else {
    v216 = (unsigned __int64)(unsigned __int8)v442_.v442 >> 1;
  }
  if ((v442_.v442 & 1) != 0) {
    v217 = v442_.v444;
  }
  else {
    v217 = (char*)&v442_.v442 + 1;
  }
  gfxa_aa1540((void*)(&v422_.v422), *(_QWORD*)(*v98 + 13224), (__int64)v217,
              v216, (__int64)"Preset/Combat", 13, (int*)&v439_.v439);
  Settings_aa1690(v422_.v422, (__int64)"Preset/Combat", 0xDu);
  v218 = v422_.v423;
  if (v422_.v423 != 0 &&
      atomic_fetch_add((atomic_ullong* volatile)(v422_.v423 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v218 + 16LL))(v218);
    std___1___shared_weak_count___release_weak(v218);
    if ((v442_.v442 & 1) == 0) {
      goto LABEL_448;
    }
  }
  else if ((v442_.v442 & 1) == 0) {
    goto LABEL_448;
  }
  if (v442_.v444 != nullptr) {
    v219 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v219 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v219,
                                  (__int64)v442_.v444);
  }
LABEL_448:
  v220 = *(unsigned __int8*)(a1 + 64);
  v221 = (v220 & 1) == 0;
  v222 = v220 >> 1;
  if (v221) {
    v223 = v222;
  }
  else {
    v223 = *(_QWORD*)(a1 + 72);
  }
  if (v221) {
    v224 = a1 + 65;
  }
  else {
    v224 = *(_QWORD*)(a1 + 80);
  }
  v225 = v223 + 5;
  if (v223 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v225 >= 0x17) {
    v227 = v225 | 7;
    if (v227 == 23) {
      v228 = 26;
    }
    else {
      v228 = v227 + 1;
    }
    v226 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v228,
                                                 16, 0);
    v442_.v444 = v226;
    v442_.v442 = v228 | 1;
  }
  else {
    v442_.v443 = 0;
    v442_.v444 = nullptr;
    v442_.v442 = (unsigned __int8)(2 * v225);
    v226 = (char*)&v442_.v442 + 1;
    if (v223 == 0) {
      goto LABEL_463;
    }
  }
  memmove((__int64)v226, v224, v223);
LABEL_463:
  strcpy(&v226[v223], "_Bmap");
  if ((v442_.v442 & 1) != 0 && v442_.v444 != nullptr) {
    v229 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v229 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v229,
                                  (__int64)v442_.v444);
  }
  v230 = *(unsigned __int8*)(a1 + 64);
  v231 = (v230 & 1) == 0;
  v232 = v230 >> 1;
  if (v231) {
    v233 = v232;
  }
  else {
    v233 = *(_QWORD*)(a1 + 72);
  }
  if (v231) {
    v234 = a1 + 65;
  }
  else {
    v234 = *(_QWORD*)(a1 + 80);
  }
  v235 = v233 + 7;
  if (v233 + 7 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v235 >= 0x17) {
    v237 = v235 | 7;
    if (v237 == 23) {
      v238 = 26;
    }
    else {
      v238 = v237 + 1;
    }
    v236 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v238,
                                                 16, 0);
    v442_.v444 = v236;
    v442_.v442 = v238 | 1;
  }
  else {
    v442_.v443 = 0;
    v442_.v444 = nullptr;
    v442_.v442 = (unsigned __int8)(2 * v235);
    v236 = (char*)&v442_.v442 + 1;
    if (v233 == 0) {
      goto LABEL_483;
    }
  }
  memmove((__int64)v236, v234, v233);
LABEL_483:
  strcpy(&v236[v233], "_Combat");
  if ((v442_.v442 & 1) != 0 && v442_.v444 != nullptr) {
    v239 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v239 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v239,
                                  (__int64)v442_.v444);
  }
  v240 = *(unsigned __int8*)(a1 + 88);
  v241 = (v240 & 1) == 0;
  v242 = v240 >> 1;
  if (v241) {
    v243 = v242;
  }
  else {
    v243 = *(_QWORD*)(a1 + 96);
  }
  if (v241) {
    v244 = a1 + 89;
  }
  else {
    v244 = *(_QWORD*)(a1 + 104);
  }
  v245 = v243 + 5;
  if (v243 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v245 >= 0x17) {
    if ((v245 | 7) == 0x17) {
      v247 = 26;
    }
    else {
      v247 = (v245 | 7) + 1;
    }
    v246 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v247,
                                                 16, 0);
    v442_.v443 = v243 + 5;
    v442_.v444 = v246;
    v442_.v442 = v247 | 1;
    goto LABEL_502;
  }
  v442_.v443 = 0;
  v442_.v444 = nullptr;
  v442_.v442 = (unsigned __int8)(2 * v245);
  v246 = (char*)&v442_.v442 + 1;
  if (v243 != 0) {
  LABEL_502:
    memmove((__int64)v246, v244, v243);
  }
  strcpy(&v246[v243], "_Bmap");
  if ((v442_.v442 & 1) != 0) {
    v248 = v442_.v443;
  }
  else {
    v248 = (unsigned __int64)(unsigned __int8)v442_.v442 >> 1;
  }
  v249 = *a2;
  if ((v442_.v442 & 1) != 0) {
    v250 = v442_.v444;
  }
  else {
    v250 = (char*)&v442_.v442 + 1;
  }
  v251 = (v249 & 1) == 0;
  v252 = v249 >> 1;
  if (v251) {
    v253 = v252;
  }
  else {
    v253 = *((_QWORD*)a2 + 1);
  }
  if (v251) {
    v254 = (__int64)(a2 + 1);
  }
  else {
    v254 = *((_QWORD*)a2 + 2);
  }
  v255 = v253 + 5;
  if (v253 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v255 >= 0x17) {
    if ((v255 | 7) == 0x17) {
      v257 = 26;
    }
    else {
      v257 = (v255 | 7) + 1;
    }
    v256 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v257,
                                                 16, 0);
    v439_.v440 = v253 + 5;
    v439_.v441 = v256;
    v439_.v439 = v257 | 1;
    goto LABEL_523;
  }
  v439_.v440 = 0;
  v439_.v441 = nullptr;
  v439_.v439 = (unsigned __int8)(2 * v255);
  v256 = (char*)&v439_.v439 + 1;
  if (v253 != 0) {
  LABEL_523:
    memmove((__int64)v256, v254, v253);
  }
  strcpy(&v256[v253], "_Bmap");
  if ((v439_.v439 & 1) != 0) {
    v258 = v439_.v441;
  }
  else {
    v258 = (char*)&v439_.v439 + 1;
  }
  if ((v439_.v439 & 1) != 0) {
    v259 = v439_.v440;
  }
  else {
    v259 = (unsigned __int64)(unsigned __int8)v439_.v439 >> 1;
  }
  if ((GameRoutine_aa1b50((__int64)v258, v259) & 1) != 0) {
    LODWORD(v430_.v430) = 1;
    v260 = game_g_frame_clock_ptr[0];
    gfxa_aa1540((void*)(&v420_.v420),
                *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224), (__int64)v250,
                v248, (__int64)v258, v259, (int*)&v430_.v430);
    Settings_aa1690(v420_.v420, (__int64)v258, v259);
    v261 = v420_.v421;
    if (v420_.v421 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v420_.v421 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v261 + 16LL))(v261);
      std___1___shared_weak_count___release_weak(v261);
    }
  }
  else {
    v420_.v420 = 0;
    v420_.v421 = 0;
    v260 = &game_g_frame_clock;
  }
  if ((v439_.v439 & 1) != 0 && v439_.v441 != nullptr) {
    v262 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v262 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v262,
                                  (__int64)v439_.v441);
  }
  if ((v442_.v442 & 1) != 0 && v442_.v444 != nullptr) {
    v263 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v263 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v263,
                                  (__int64)v442_.v444);
  }
  if (v408 != 0) {
    v264 = *(unsigned __int8*)(a1 + 112);
    v265 = (v264 & 1) == 0;
    v266 = v264 >> 1;
    if (v265) {
      v267 = v266;
    }
    else {
      v267 = *(_QWORD*)(a1 + 120);
    }
    if (v265) {
      v268 = a1 + 113;
    }
    else {
      v268 = *(_QWORD*)(a1 + 128);
    }
    v269 = v267 + 5;
    if (v267 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_848;
    }
    if (v269 >= 0x17) {
      if ((v269 | 7) == 0x17) {
        v271 = 26;
      }
      else {
        v271 = (v269 | 7) + 1;
      }
      v270 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                   v271, 16, 0);
      v442_.v443 = v267 + 5;
      v442_.v444 = v270;
      v442_.v442 = v271 | 1;
    }
    else {
      v442_.v443 = 0;
      v442_.v444 = nullptr;
      v442_.v442 = (unsigned __int8)(2 * v269);
      v270 = (char*)&v442_.v442 + 1;
      if (v267 == 0) {
      LABEL_561:
        strcpy(&v270[v267], "_Bmap");
        if ((v442_.v442 & 1) != 0) {
          v272 = v442_.v443;
        }
        else {
          v272 = (unsigned __int64)(unsigned __int8)v442_.v442 >> 1;
        }
        v273 = *a2;
        if ((v442_.v442 & 1) != 0) {
          v274 = v442_.v444;
        }
        else {
          v274 = (char*)&v442_.v442 + 1;
        }
        v275 = (v273 & 1) == 0;
        v276 = v273 >> 1;
        if (v275) {
          v277 = v276;
        }
        else {
          v277 = *((_QWORD*)a2 + 1);
        }
        if (v275) {
          v278 = (__int64)(a2 + 1);
        }
        else {
          v278 = *((_QWORD*)a2 + 2);
        }
        v279 = v277 + 5;
        if (v277 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_848;
        }
        if (v279 >= 0x17) {
          if ((v279 | 7) == 0x17) {
            v281 = 26;
          }
          else {
            v281 = (v279 | 7) + 1;
          }
          v282 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v281,
                                                16, 0);
          v283 = v281 | 1;
          v280 = (char*)v282;
          v260 = game_g_frame_clock_ptr[0];
          v430_.v431 = v277 + 5;
          v430_.v432 = (char*)v282;
          v430_.v430 = v283;
        }
        else {
          v430_.v431 = 0;
          v430_.v432 = nullptr;
          v430_.v430 = (unsigned __int8)(2 * v279);
          v280 = (char*)&v430_.v430 + 1;
          if (v277 == 0) {
            goto LABEL_582;
          }
        }
        memmove((__int64)v280, v278, v277);
      LABEL_582:
        v285 = v445_.v446;
        v284 = (__int64)v445_.v447;
        strcpy(&v280[v277], "_Bmap");
        if ((v445_.v445 & 1) != 0) {
          v286 = (const char*)v284;
        }
        else {
          v286 = (char*)&v445_.v445 + 1;
        }
        if ((v445_.v445 & 1) != 0) {
          v287 = v285;
        }
        else {
          v287 = (unsigned __int64)(unsigned __int8)v445_.v445 >> 1;
        }
        v288 = (__int64*)GameRoutine_1a09ce0((__int64)&v430_.v430, v286, v287);
        v290 = v288[1];
        v289 = v288[2];
        v439_.v439 = *v288;
        v439_.v440 = v290;
        v439_.v441 = (char*)v289;
        v288[1] = 0;
        v288[2] = 0;
        *v288 = 0;
        if ((v439_.v439 & 1) != 0) {
          v291 = v439_.v441;
        }
        else {
          v291 = (char*)&v439_.v439 + 1;
        }
        if ((v439_.v439 & 1) != 0) {
          v292 = v439_.v440;
        }
        else {
          v292 = (unsigned __int64)(unsigned __int8)v439_.v439 >> 1;
        }
        if ((GameRoutine_aa1b50((__int64)v291, v292) & 1) != 0) {
          LODWORD(v413_.v413) = 2;
          gfxa_aa1540((void*)(&v418_.v418), *(_QWORD*)(*v260 + 13224),
                      (__int64)v274, v272, (__int64)v291, v292,
                      (int*)&v413_.v413);
          Settings_aa1690(v418_.v418, (__int64)v291, v292);
          v293 = v418_.v419;
          if (v418_.v419 != 0 &&
              atomic_fetch_add((atomic_ullong* volatile)(v418_.v419 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v293 + 16LL))(v293);
            std___1___shared_weak_count___release_weak(v293);
          }
        }
        else {
          v418_.v418 = 0;
          v418_.v419 = 0;
        }
        if ((v439_.v439 & 1) != 0 && v439_.v441 != nullptr) {
          v294 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v294 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                            v294,
                                        (__int64)v439_.v441);
        }
        if ((v430_.v430 & 1) != 0 && v430_.v432 != nullptr) {
          v295 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v295 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                            v295,
                                        (__int64)v430_.v432);
        }
        if ((v442_.v442 & 1) != 0 && v442_.v444 != nullptr) {
          v296 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v296 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                            v296,
                                        (__int64)v442_.v444);
        }
        goto LABEL_614;
      }
    }
    memmove((__int64)v270, v268, v267);
    goto LABEL_561;
  }
LABEL_614:
  v297 = *(unsigned __int8*)(a1 + 88);
  v298 = (v297 & 1) == 0;
  v299 = v297 >> 1;
  if (v298) {
    v300 = v299;
  }
  else {
    v300 = *(_QWORD*)(a1 + 96);
  }
  if (v298) {
    v301 = a1 + 89;
  }
  else {
    v301 = *(_QWORD*)(a1 + 104);
  }
  v302 = v300 + 5;
  if (v300 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v302 >= 0x17) {
    if ((v302 | 7) == 0x17) {
      v304 = 26;
    }
    else {
      v304 = (v302 | 7) + 1;
    }
    v303 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v304,
                                                 16, 0);
    v439_.v440 = v300 + 5;
    v439_.v441 = v303;
    v439_.v439 = v304 | 1;
    goto LABEL_628;
  }
  v439_.v440 = 0;
  v439_.v441 = nullptr;
  v439_.v439 = (unsigned __int8)(2 * v302);
  v303 = (char*)&v439_.v439 + 1;
  if (v300 != 0) {
  LABEL_628:
    memmove((__int64)v303, v301, v300);
  }
  strcpy(&v303[v300], "_Bmap");
  v305 = (__int64*)GameRoutine_1a09ce0((__int64)&v439_.v439, "_Keyframe", 9u);
  v307 = v305[1];
  v306 = v305[2];
  v442_.v442 = *v305;
  v442_.v443 = v307;
  v442_.v444 = (char*)v306;
  v305[1] = 0;
  v305[2] = 0;
  *v305 = 0;
  if ((v442_.v442 & 1) != 0) {
    v308 = v442_.v443;
  }
  else {
    v308 = (unsigned __int64)(unsigned __int8)v442_.v442 >> 1;
  }
  v309 = *a2;
  if ((v442_.v442 & 1) != 0) {
    v310 = v442_.v444;
  }
  else {
    v310 = (char*)&v442_.v442 + 1;
  }
  v311 = (v309 & 1) == 0;
  v312 = v309 >> 1;
  if (v311) {
    v313 = v312;
  }
  else {
    v313 = *((_QWORD*)a2 + 1);
  }
  if (v311) {
    v314 = (__int64)(a2 + 1);
  }
  else {
    v314 = *((_QWORD*)a2 + 2);
  }
  v315 = v313 + 5;
  if (v313 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v315 >= 0x17) {
    if ((v315 | 7) == 0x17) {
      v317 = 26;
    }
    else {
      v317 = (v315 | 7) + 1;
    }
    v318 =
        fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v317, 16, 0);
    v319 = v317 | 1;
    v316 = (char*)v318;
    v260 = game_g_frame_clock_ptr[0];
    v413_.v414 = v313 + 5;
    v413_.v415 = v318;
    v413_.v413 = v319;
    goto LABEL_649;
  }
  v413_.v414 = 0;
  v413_.v415 = 0;
  v413_.v413 = (unsigned __int8)(2 * v315);
  v316 = (char*)&v413_.v413 + 1;
  if (v313 != 0) {
  LABEL_649:
    memmove((__int64)v316, v314, v313);
  }
  strcpy(&v316[v313], "_Bmap");
  v320 = (__int64*)GameRoutine_1a09ce0((__int64)&v413_.v413, "_Keyframe", 9u);
  v322 = v320[1];
  v321 = v320[2];
  v430_.v430 = *v320;
  v430_.v431 = v322;
  v430_.v432 = (char*)v321;
  v320[1] = 0;
  v320[2] = 0;
  *v320 = 0;
  if ((v430_.v430 & 1) != 0) {
    v323 = v430_.v432;
  }
  else {
    v323 = (char*)&v430_.v430 + 1;
  }
  if ((v430_.v430 & 1) != 0) {
    v324 = v430_.v431;
  }
  else {
    v324 = (unsigned __int64)(unsigned __int8)v430_.v430 >> 1;
  }
  if ((GameRoutine_aa1b50((__int64)v323, v324) & 1) != 0) {
    v452[0] = 2;
    gfxa_aa1a00((void*)(&v416_.v416), *(_QWORD*)(*v260 + 13224), (__int64)v310,
                v308, (__int64)v323, v324, v452);
    Settings_aa1690(v416_.v416, (__int64)v323, v324);
    v325 = v416_.v417;
    if (v416_.v417 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v416_.v417 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v325 + 16LL))(v325);
      std___1___shared_weak_count___release_weak(v325);
    }
  }
  else {
    v416_.v416 = 0;
    v416_.v417 = 0;
  }
  if ((v430_.v430 & 1) != 0 && v430_.v432 != nullptr) {
    v326 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v326 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v326,
                                  (__int64)v430_.v432);
  }
  if ((v413_.v413 & 1) != 0 && v413_.v415 != 0) {
    v327 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v327 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v327,
                                  v413_.v415);
  }
  if ((v442_.v442 & 1) != 0 && v442_.v444 != nullptr) {
    v328 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v328 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v328,
                                  (__int64)v442_.v444);
  }
  if ((v439_.v439 & 1) != 0 && v439_.v441 != nullptr) {
    v329 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v329 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v329,
                                  (__int64)v439_.v441);
  }
  if (v407 != 0) {
    v330 = *(unsigned __int8*)(a1 + 64);
    v331 = (v330 & 1) == 0;
    v332 = v330 >> 1;
    if (v331) {
      v333 = v332;
    }
    else {
      v333 = *(_QWORD*)(a1 + 72);
    }
    if (v331) {
      v334 = a1 + 65;
    }
    else {
      v334 = *(_QWORD*)(a1 + 80);
    }
    v335 = v333 + 7;
    if (v333 + 7 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_848;
    }
    if (v335 >= 0x17) {
      if ((v335 | 7) == 0x17) {
        v337 = 26;
      }
      else {
        v337 = (v335 | 7) + 1;
      }
      v336 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                   v337, 16, 0);
      v442_.v443 = v333 + 7;
      v442_.v444 = v336;
      v442_.v442 = v337 | 1;
    }
    else {
      v442_.v443 = 0;
      v442_.v444 = nullptr;
      v442_.v442 = (unsigned __int8)(2 * v335);
      v336 = (char*)&v442_.v442 + 1;
      if (v333 == 0) {
      LABEL_697:
        strcpy(&v336[v333], "Ex_Bmap");
        if ((v442_.v442 & 1) != 0) {
          v338 = v442_.v443;
        }
        else {
          v338 = (unsigned __int64)(unsigned __int8)v442_.v442 >> 1;
        }
        v339 = a2[72];
        if ((v442_.v442 & 1) != 0) {
          v340 = v442_.v444;
        }
        else {
          v340 = (char*)&v442_.v442 + 1;
        }
        v341 = (v339 & 1) == 0;
        v342 = v339 >> 1;
        if (v341) {
          v343 = v342;
        }
        else {
          v343 = *((_QWORD*)a2 + 10);
        }
        if (v341) {
          v344 = (__int64)(a2 + 73);
        }
        else {
          v344 = *((_QWORD*)a2 + 11);
        }
        v345 = v343 + 5;
        if (v343 + 5 >= 0xFFFFFFFFFFFFFFF7LL) {
          goto LABEL_848;
        }
        if (v345 >= 0x17) {
          if ((v345 | 7) == 0x17) {
            v347 = 26;
          }
          else {
            v347 = (v345 | 7) + 1;
          }
          v346 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                                       v347, 16, 0);
          v439_.v440 = v343 + 5;
          v439_.v441 = v346;
          v439_.v439 = v347 | 1;
        }
        else {
          v439_.v440 = 0;
          v439_.v441 = nullptr;
          v439_.v439 = (unsigned __int8)(2 * v345);
          v346 = (char*)&v439_.v439 + 1;
          if (v343 == 0) {
          LABEL_718:
            LODWORD(v430_.v430) = 0;
            strcpy(&v346[v343], "_Bmap");
            if ((v439_.v439 & 1) != 0) {
              v348 = v439_.v441;
            }
            else {
              v348 = (char*)&v439_.v439 + 1;
            }
            if ((v439_.v439 & 1) != 0) {
              v349 = v439_.v440;
            }
            else {
              v349 = (unsigned __int64)(unsigned __int8)v439_.v439 >> 1;
            }
            v260 = game_g_frame_clock_ptr[0];
            gfxa_aa1540((void*)(&v411_.v411),
                        *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13224),
                        (__int64)v340, v338, (__int64)v348, v349,
                        (int*)&v430_.v430);
            Settings_aa1690(v411_.v411, (__int64)v348, v349);
            v350 = v411_.v412;
            if (v411_.v412 != 0 &&
                atomic_fetch_add((atomic_ullong* volatile)(v411_.v412 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v350 + 16LL))(v350);
              std___1___shared_weak_count___release_weak(v350);
              if ((v439_.v439 & 1) == 0) {
                goto LABEL_732;
              }
            }
            else if ((v439_.v439 & 1) == 0) {
              goto LABEL_732;
            }
            if (v439_.v441 != nullptr) {
              v351 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v351 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v351,
                  (__int64)v439_.v441);
            }
          LABEL_732:
            if ((v442_.v442 & 1) != 0 && v442_.v444 != nullptr) {
              v352 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v352 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v352,
                  (__int64)v442_.v444);
            }
            v353 = *(unsigned __int8*)(a1 + 64);
            v354 = (v353 & 1) == 0;
            v355 = v353 >> 1;
            if (v354) {
              v356 = v355;
            }
            else {
              v356 = *(_QWORD*)(a1 + 72);
            }
            if (v354) {
              v357 = a1 + 65;
            }
            else {
              v357 = *(_QWORD*)(a1 + 80);
            }
            v358 = v356 + 7;
            if (v356 + 7 >= 0xFFFFFFFFFFFFFFF7LL) {
              goto LABEL_848;
            }
            if (v358 >= 0x17) {
              v360 = v358 | 7;
              if (v360 == 23) {
                v361 = 26;
              }
              else {
                v361 = v360 + 1;
              }
              v359 = (char*)fw_memory_HeapManager_Allocate(
                  fw_memory_g_heap_manager, v361, 16, 0);
              v442_.v444 = v359;
              v442_.v442 = v361 | 1;
            }
            else {
              v442_.v443 = 0;
              v442_.v444 = nullptr;
              v442_.v442 = (unsigned __int8)(2 * v358);
              v359 = (char*)&v442_.v442 + 1;
              if (v356 == 0) {
                goto LABEL_752;
              }
            }
            memmove((__int64)v359, v357, v356);
          LABEL_752:
            strcpy(&v359[v356], "Ex_Bmap");
            if ((v442_.v442 & 1) != 0 && v442_.v444 != nullptr) {
              v362 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v362 = 56;
              }
              nn_mem_StandardAllocator_Free(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v362,
                  (__int64)v442_.v444);
            }
            goto LABEL_757;
          }
        }
        memmove((__int64)v346, v344, v343);
        goto LABEL_718;
      }
    }
    memmove((__int64)v336, v334, v333);
    goto LABEL_697;
  }
LABEL_757:
  if (v406 == 0) {
    goto LABEL_831;
  }
  v363 = *(unsigned __int8*)(a1 + 88);
  v364 = (v363 & 1) == 0;
  v365 = v363 >> 1;
  if (v364) {
    v366 = v365;
  }
  else {
    v366 = *(_QWORD*)(a1 + 96);
  }
  if (v364) {
    v367 = a1 + 89;
  }
  else {
    v367 = *(_QWORD*)(a1 + 104);
  }
  v368 = v366 + 7;
  if (v366 + 7 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_848:
    String_60a1d0();
  }
  if (v368 >= 0x17) {
    if ((v368 | 7) == 0x17) {
      v370 = 26;
    }
    else {
      v370 = (v368 | 7) + 1;
    }
    v369 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v370,
                                                 16, 0);
    v442_.v443 = v366 + 7;
    v442_.v444 = v369;
    v442_.v442 = v370 | 1;
    goto LABEL_772;
  }
  v442_.v443 = 0;
  v442_.v444 = nullptr;
  v442_.v442 = (unsigned __int8)(2 * v368);
  v369 = (char*)&v442_.v442 + 1;
  if (v366 != 0) {
  LABEL_772:
    memmove((__int64)v369, v367, v366);
  }
  strcpy(&v369[v366], "Ex_Bmap");
  if ((v442_.v442 & 1) != 0) {
    v371 = v442_.v443;
  }
  else {
    v371 = (unsigned __int64)(unsigned __int8)v442_.v442 >> 1;
  }
  v372 = *a2;
  if ((v442_.v442 & 1) != 0) {
    v373 = v442_.v444;
  }
  else {
    v373 = (char*)&v442_.v442 + 1;
  }
  v374 = (v372 & 1) == 0;
  v375 = v372 >> 1;
  if (v374) {
    v376 = v375;
  }
  else {
    v376 = *((_QWORD*)a2 + 1);
  }
  if (v374) {
    v377 = (__int64)(a2 + 1);
  }
  else {
    v377 = *((_QWORD*)a2 + 2);
  }
  v378 = v376 + 1;
  if (v376 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_848;
  }
  if (v378 >= 0x17) {
    if ((v378 | 7) == 0x17) {
      v380 = 26;
    }
    else {
      v380 = (v378 | 7) + 1;
    }
    v381 =
        fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v380, 16, 0);
    v382 = v380 | 1;
    v379 = (char*)v381;
    v260 = game_g_frame_clock_ptr[0];
    v413_.v414 = v376 + 1;
    v413_.v415 = v381;
    v413_.v413 = v382;
  }
  else {
    v413_.v414 = 0;
    v413_.v415 = 0;
    v413_.v413 = (unsigned __int8)(2 * v378);
    v379 = (char*)&v413_.v413 + 1;
    if (v376 == 0) {
      goto LABEL_794;
    }
  }
  memmove((__int64)v379, v377, v376);
LABEL_794:
  *(_WORD*)&v379[v376] = 95;
  v383 = a2[96];
  v384 = (v383 & 1) == 0;
  v385 = v383 >> 1;
  if (v384) {
    v386 = (const char*)(a2 + 97);
  }
  else {
    v386 = *((const char**)a2 + 14);
  }
  if (v384) {
    v387 = v385;
  }
  else {
    v387 = *((_QWORD*)a2 + 13);
  }
  v388 = (__int64*)GameRoutine_1a09ce0((__int64)&v413_.v413, v386, v387);
  v390 = v388[1];
  v389 = v388[2];
  v430_.v430 = *v388;
  v430_.v431 = v390;
  v430_.v432 = (char*)v389;
  v388[1] = 0;
  v388[2] = 0;
  *v388 = 0;
  v391 = (__int64*)GameRoutine_1a09ce0((__int64)&v430_.v430, "_Bmap", 5u);
  v393 = v391[1];
  v392 = v391[2];
  v439_.v439 = *v391;
  v439_.v440 = v393;
  v439_.v441 = (char*)v392;
  v391[1] = 0;
  v391[2] = 0;
  *v391 = 0;
  if ((v439_.v439 & 1) != 0) {
    v394 = v439_.v441;
  }
  else {
    v394 = (char*)&v439_.v439 + 1;
  }
  if ((v439_.v439 & 1) != 0) {
    v395 = v439_.v440;
  }
  else {
    v395 = (unsigned __int64)(unsigned __int8)v439_.v439 >> 1;
  }
  if ((GameRoutine_aa1b50((__int64)v394, v395) & 1) != 0) {
    v452[0] = 1;
    gfxa_aa1540((void*)(&v409_.v409), *(_QWORD*)(*v260 + 13224), (__int64)v373,
                v371, (__int64)v394, v395, v452);
    Settings_aa1690(v409_.v409, (__int64)v394, v395);
    v396 = v409_.v410;
    if (v409_.v410 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v409_.v410 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v396 + 16LL))(v396);
      std___1___shared_weak_count___release_weak(v396);
    }
  }
  else {
    v409_.v409 = 0;
    v409_.v410 = 0;
  }
  if ((v439_.v439 & 1) != 0 && v439_.v441 != nullptr) {
    v397 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v397 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v397,
                                  (__int64)v439_.v441);
  }
  if ((v430_.v430 & 1) != 0 && v430_.v432 != nullptr) {
    v398 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v398 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v398,
                                  (__int64)v430_.v432);
  }
  if ((v413_.v413 & 1) != 0 && v413_.v415 != 0) {
    v399 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v399 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v399,
                                  v413_.v415);
  }
  if ((v442_.v442 & 1) != 0 && v442_.v444 != nullptr) {
    v400 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v400 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v400,
                                  (__int64)v442_.v444);
  }
LABEL_831:
  if (*((int*)a2 + 54) >= 1) {
    v401 = (unsigned __int64*)(a2 + 128);
    v402 = 0;
    do {
      v403 = *((unsigned __int8*)v401 - 8);
      if ((v403 & 1) != 0) {
        v404 = *v401;
      }
      else {
        v404 = v403 >> 1;
      }
      if (v404 != 0) {
        GameHr_c6c4f0(a1, a2, v402);
        if ((*(_DWORD*)(a1 + 512) & 0x80000000) != 0) {
          *(_DWORD*)(a1 + 512) = v402;
          *(_DWORD*)(a1 + 516) = -1;
          *(_QWORD*)(a1 + 520) = 0;
          *(_DWORD*)(a1 + 528) = 0;
        }
      }
      v401 += 3;
      ++v402;
    } while (v402 < *((int*)a2 + 54));
  }
  if ((a2[224] & 1) != 0) {
    LightingAnimModule_c6dc40(a1, (__int64)a2);
  }
  if ((v445_.v445 & 1) != 0 && v445_.v447 != nullptr) {
    v405 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v405 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v405,
                                  (__int64)v445_.v447);
  }
}

__int64 gfxa_1999d60(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int128 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
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
  __int64 result;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;

  *(_QWORD*)a1 = a1;
  *(_QWORD*)(a1 + 8) = a2;
  v3 = a1 + 17280;
  memset(a1 + 96, 0, 0x4020u);
  GameRoutine_604020((_QWORD*)(a1 + 16512));
  *(_QWORD*)(a1 + 16632) = -1;
  GameRoutine_604020((_QWORD*)(a1 + 16640));
  *(_QWORD*)(a1 + 16760) = -1;
  GameRoutine_604020((_QWORD*)(a1 + 16768));
  *(_QWORD*)(a1 + 16888) = -1;
  GameRoutine_604020((_QWORD*)(a1 + 16896));
  *(_QWORD*)(a1 + 17016) = -1;
  GameRoutine_604020((_QWORD*)(a1 + 17024));
  *(_QWORD*)(a1 + 17144) = -1;
  GameRoutine_604020((_QWORD*)(a1 + 17152));
  *(_QWORD*)&v4 = 0x3F8000003F800000LL;
  *((_QWORD*)&v4 + 1) = 0x3F8000003F800000LL;
  *(_QWORD*)(a1 + 17384) = 0;
  *(_QWORD*)(a1 + 17272) = -1;
  *(_QWORD*)(a1 + 17296) = 0x200000000LL;
  *(_DWORD*)v3 = 0;
  *(_QWORD*)(a1 + 17368) = 0;
  *(_QWORD*)(a1 + 17376) = 0;
  *(_DWORD*)(v3 + 144) = 0;
  *(_QWORD*)(a1 + 17456) = 0;
  *(_QWORD*)(a1 + 17448) = 0;
  *(_QWORD*)(a1 + 17440) = 0;
  *(_BYTE*)(v3 + 200) = 0;
  *(_QWORD*)(a1 + 17390) = 0;
  *(_DWORD*)(v3 + 24) = 2;
  *(_QWORD*)(a1 + 17400) = 1056964608;
  *(_OWORD*)(a1 + 17344) = v4;
  *(_QWORD*)(a1 + 17308) = 0;
  *(_QWORD*)(a1 + 17316) = 0;
  *(_QWORD*)(a1 + 17324) = 0;
  *(_DWORD*)(a1 + 17332) = 0;
  *(_DWORD*)(v3 + 80) = 1065353216;
  *(_DWORD*)(v3 + 192) = 0;
  *(_DWORD*)(v3 + 196) = 1065353216;
  *(_DWORD*)(v3 + 204) = 1065353216;
  *(_OWORD*)(a1 + 17408) = GameData_1a83190;
  v6 = *(_QWORD*)GameData_212c960;
  v5 = *((_QWORD*)GameData_212c960 + 1);
  *(_QWORD*)(a1 + 17504) = 0;
  *(_BYTE*)(v3 + 232) = 0;
  *(_DWORD*)(v3 + 236) = 0;
  *(_WORD*)(v3 + 240) = 0;
  *(_QWORD*)(a1 + 17496) = v5;
  *(_QWORD*)(a1 + 17488) = v6;
  v7 = memset(a1 + 17552, 0, 0x405u);
  v8 = (__int64*)GameData_212c2a0;
  *(_QWORD*)(a1 + 18736) = 0;
  *(_QWORD*)(a1 + 18744) = 0;
  *(_QWORD*)(a1 + 18752) = 0;
  v9 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v8);
  v10 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v8 + 8);
  v11 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v8);
  v12 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v8);
  v13 = *v8;
  v14 = v8[1];
  *(_QWORD*)(a1 + 18624) = v9;
  v16 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8);
  v15 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v8 + 8);
  *(_QWORD*)(a1 + 18616) = v15;
  *(_QWORD*)(a1 + 18680) = v15;
  *(_QWORD*)(a1 + 18632) = v10;
  *(_QWORD*)(a1 + 18640) = v11;
  *(_QWORD*)(a1 + 18648) = v12;
  *(_QWORD*)(a1 + 18592) = v13;
  *(_QWORD*)(a1 + 18600) = v14;
  *(_QWORD*)(a1 + 18608) = v16;
  *(_QWORD*)(a1 + 18712) = v12;
  *(_QWORD*)(a1 + 18704) = v11;
  *(_QWORD*)(a1 + 18696) = v10;
  *(_QWORD*)(a1 + 18688) = v9;
  *(_QWORD*)(a1 + 18672) = v16;
  *(_QWORD*)(a1 + 18664) = v14;
  *(_QWORD*)(a1 + 18656) = v13;
  *(_DWORD*)(a1 + 18727) = 0;
  *(_QWORD*)(a1 + 18720) = 0;
  v17 = std___1_pmr_get_default_resource(v7);
  *(_QWORD*)(a1 + 18760) = v17;
  *(_QWORD*)(a1 + 18768) = 0;
  *(_QWORD*)(a1 + 18776) = 0;
  *(_QWORD*)(a1 + 18784) = 0;
  *(_QWORD*)(a1 + 18792) = std___1_pmr_get_default_resource(v17);
  *(_QWORD*)(a1 + 18800) = 0;
  TextBox_567c80(a1 + 18808);
  v18 = TextBox_55c600(a1 + 18912);
  *(_QWORD*)(a1 + 19120) = 0;
  *(_QWORD*)(a1 + 19112) = 0;
  *(_QWORD*)(a1 + 19104) = 0;
  v19 = std___1_pmr_get_default_resource(v18);
  *(_QWORD*)(a1 + 19128) = v19;
  *(_QWORD*)(a1 + 19136) = 0;
  *(_QWORD*)(a1 + 19144) = 0;
  *(_QWORD*)(a1 + 19152) = 0;
  v20 = std___1_pmr_get_default_resource(v19);
  *(_QWORD*)(a1 + 19160) = v20;
  *(_QWORD*)(a1 + 19168) = 0;
  *(_QWORD*)(a1 + 19176) = 0;
  *(_QWORD*)(a1 + 19184) = 0;
  result = std___1_pmr_get_default_resource(v20);
  v22 = 114688;
  *(_QWORD*)(a1 + 19192) = result;
  *(_QWORD*)(a1 + 19208) = 0;
  *(_QWORD*)(a1 + 19216) = 0;
  *(_QWORD*)(a1 + 19232) = 0;
  *(_QWORD*)(a1 + 19240) = 0;
  *(_QWORD*)(a1 + 19200) = 0x7FFFFFFFFLL;
  *(_DWORD*)(a1 + 19224) = 0;
  *(_DWORD*)(a1 + 19248) = 0;
  v23 = a1 + 19256;
  do {
    *(_DWORD*)(v23 + 16) = 0;
    *(_QWORD*)v23 = 0;
    *(_QWORD*)(v23 + 8) = 0;
    v22 -= 896;
    *(_QWORD*)(v23 + 24) = 0;
    *(_QWORD*)(v23 + 32) = 0;
    *(_QWORD*)(v23 + 40) = 0;
    *(_QWORD*)(v23 + 48) = 0;
    *(_QWORD*)(v23 + 56) = 0;
    *(_QWORD*)(v23 + 64) = 0;
    *(_DWORD*)(v23 + 72) = 0;
    *(_QWORD*)(v23 + 80) = 0;
    *(_QWORD*)(v23 + 88) = 0;
    *(_QWORD*)(v23 + 96) = 0;
    *(_QWORD*)(v23 + 104) = 0;
    *(_QWORD*)(v23 + 112) = 0;
    *(_QWORD*)(v23 + 120) = 0;
    *(_DWORD*)(v23 + 128) = 0;
    *(_QWORD*)(v23 + 152) = 0;
    *(_QWORD*)(v23 + 160) = 0;
    *(_QWORD*)(v23 + 136) = 0;
    *(_QWORD*)(v23 + 144) = 0;
    *(_DWORD*)(v23 + 184) = 0;
    *(_QWORD*)(v23 + 168) = 0;
    *(_QWORD*)(v23 + 176) = 0;
    *(_QWORD*)(v23 + 208) = 0;
    *(_QWORD*)(v23 + 216) = 0;
    *(_QWORD*)(v23 + 192) = 0;
    *(_QWORD*)(v23 + 200) = 0;
    *(_DWORD*)(v23 + 240) = 0;
    *(_QWORD*)(v23 + 224) = 0;
    *(_QWORD*)(v23 + 232) = 0;
    *(_QWORD*)(v23 + 264) = 0;
    *(_QWORD*)(v23 + 272) = 0;
    *(_QWORD*)(v23 + 248) = 0;
    *(_QWORD*)(v23 + 256) = 0;
    *(_DWORD*)(v23 + 296) = 0;
    *(_QWORD*)(v23 + 280) = 0;
    *(_QWORD*)(v23 + 288) = 0;
    *(_QWORD*)(v23 + 320) = 0;
    *(_QWORD*)(v23 + 328) = 0;
    *(_QWORD*)(v23 + 304) = 0;
    *(_QWORD*)(v23 + 312) = 0;
    *(_DWORD*)(v23 + 352) = 0;
    *(_QWORD*)(v23 + 336) = 0;
    *(_QWORD*)(v23 + 344) = 0;
    *(_QWORD*)(v23 + 376) = 0;
    *(_QWORD*)(v23 + 384) = 0;
    *(_QWORD*)(v23 + 360) = 0;
    *(_QWORD*)(v23 + 368) = 0;
    *(_DWORD*)(v23 + 408) = 0;
    *(_QWORD*)(v23 + 392) = 0;
    *(_QWORD*)(v23 + 400) = 0;
    *(_QWORD*)(v23 + 432) = 0;
    *(_QWORD*)(v23 + 440) = 0;
    *(_QWORD*)(v23 + 416) = 0;
    *(_QWORD*)(v23 + 424) = 0;
    *(_DWORD*)(v23 + 464) = 0;
    *(_QWORD*)(v23 + 448) = 0;
    *(_QWORD*)(v23 + 456) = 0;
    *(_QWORD*)(v23 + 488) = 0;
    *(_QWORD*)(v23 + 496) = 0;
    *(_QWORD*)(v23 + 472) = 0;
    *(_QWORD*)(v23 + 480) = 0;
    *(_DWORD*)(v23 + 520) = 0;
    *(_QWORD*)(v23 + 504) = 0;
    *(_QWORD*)(v23 + 512) = 0;
    *(_QWORD*)(v23 + 552) = 0;
    *(_QWORD*)(v23 + 544) = 0;
    *(_QWORD*)(v23 + 536) = 0;
    *(_QWORD*)(v23 + 528) = 0;
    *(_DWORD*)(v23 + 576) = 0;
    *(_QWORD*)(v23 + 568) = 0;
    *(_QWORD*)(v23 + 560) = 0;
    *(_QWORD*)(v23 + 608) = 0;
    *(_QWORD*)(v23 + 600) = 0;
    *(_QWORD*)(v23 + 592) = 0;
    *(_QWORD*)(v23 + 584) = 0;
    *(_DWORD*)(v23 + 632) = 0;
    *(_QWORD*)(v23 + 624) = 0;
    *(_QWORD*)(v23 + 616) = 0;
    *(_QWORD*)(v23 + 664) = 0;
    *(_QWORD*)(v23 + 656) = 0;
    *(_QWORD*)(v23 + 648) = 0;
    *(_QWORD*)(v23 + 640) = 0;
    *(_DWORD*)(v23 + 688) = 0;
    *(_QWORD*)(v23 + 680) = 0;
    *(_QWORD*)(v23 + 672) = 0;
    *(_QWORD*)(v23 + 720) = 0;
    *(_QWORD*)(v23 + 712) = 0;
    *(_QWORD*)(v23 + 704) = 0;
    *(_QWORD*)(v23 + 696) = 0;
    *(_DWORD*)(v23 + 744) = 0;
    *(_QWORD*)(v23 + 736) = 0;
    *(_QWORD*)(v23 + 728) = 0;
    *(_QWORD*)(v23 + 776) = 0;
    *(_QWORD*)(v23 + 768) = 0;
    *(_QWORD*)(v23 + 760) = 0;
    *(_QWORD*)(v23 + 752) = 0;
    *(_DWORD*)(v23 + 800) = 0;
    *(_QWORD*)(v23 + 792) = 0;
    *(_QWORD*)(v23 + 784) = 0;
    *(_QWORD*)(v23 + 832) = 0;
    *(_QWORD*)(v23 + 824) = 0;
    *(_QWORD*)(v23 + 816) = 0;
    *(_QWORD*)(v23 + 808) = 0;
    *(_DWORD*)(v23 + 856) = 0;
    *(_QWORD*)(v23 + 848) = 0;
    *(_QWORD*)(v23 + 840) = 0;
    *(_QWORD*)(v23 + 888) = 0;
    *(_QWORD*)(v23 + 880) = 0;
    *(_QWORD*)(v23 + 872) = 0;
    *(_QWORD*)(v23 + 864) = 0;
    v23 += 896;
  } while (v22 != 0);
  v24 = 114688;
  v25 = a1 + 133944;
  do {
    *(_DWORD*)(v25 + 16) = 0;
    *(_QWORD*)v25 = 0;
    *(_QWORD*)(v25 + 8) = 0;
    v24 -= 896;
    *(_QWORD*)(v25 + 24) = 0;
    *(_QWORD*)(v25 + 32) = 0;
    *(_QWORD*)(v25 + 40) = 0;
    *(_QWORD*)(v25 + 48) = 0;
    *(_QWORD*)(v25 + 56) = 0;
    *(_QWORD*)(v25 + 64) = 0;
    *(_DWORD*)(v25 + 72) = 0;
    *(_QWORD*)(v25 + 80) = 0;
    *(_QWORD*)(v25 + 88) = 0;
    *(_QWORD*)(v25 + 96) = 0;
    *(_QWORD*)(v25 + 104) = 0;
    *(_QWORD*)(v25 + 112) = 0;
    *(_QWORD*)(v25 + 120) = 0;
    *(_DWORD*)(v25 + 128) = 0;
    *(_QWORD*)(v25 + 152) = 0;
    *(_QWORD*)(v25 + 160) = 0;
    *(_QWORD*)(v25 + 136) = 0;
    *(_QWORD*)(v25 + 144) = 0;
    *(_DWORD*)(v25 + 184) = 0;
    *(_QWORD*)(v25 + 168) = 0;
    *(_QWORD*)(v25 + 176) = 0;
    *(_QWORD*)(v25 + 208) = 0;
    *(_QWORD*)(v25 + 216) = 0;
    *(_QWORD*)(v25 + 192) = 0;
    *(_QWORD*)(v25 + 200) = 0;
    *(_DWORD*)(v25 + 240) = 0;
    *(_QWORD*)(v25 + 224) = 0;
    *(_QWORD*)(v25 + 232) = 0;
    *(_QWORD*)(v25 + 264) = 0;
    *(_QWORD*)(v25 + 272) = 0;
    *(_QWORD*)(v25 + 248) = 0;
    *(_QWORD*)(v25 + 256) = 0;
    *(_DWORD*)(v25 + 296) = 0;
    *(_QWORD*)(v25 + 280) = 0;
    *(_QWORD*)(v25 + 288) = 0;
    *(_QWORD*)(v25 + 320) = 0;
    *(_QWORD*)(v25 + 328) = 0;
    *(_QWORD*)(v25 + 304) = 0;
    *(_QWORD*)(v25 + 312) = 0;
    *(_DWORD*)(v25 + 352) = 0;
    *(_QWORD*)(v25 + 336) = 0;
    *(_QWORD*)(v25 + 344) = 0;
    *(_QWORD*)(v25 + 376) = 0;
    *(_QWORD*)(v25 + 384) = 0;
    *(_QWORD*)(v25 + 360) = 0;
    *(_QWORD*)(v25 + 368) = 0;
    *(_DWORD*)(v25 + 408) = 0;
    *(_QWORD*)(v25 + 392) = 0;
    *(_QWORD*)(v25 + 400) = 0;
    *(_QWORD*)(v25 + 432) = 0;
    *(_QWORD*)(v25 + 440) = 0;
    *(_QWORD*)(v25 + 416) = 0;
    *(_QWORD*)(v25 + 424) = 0;
    *(_DWORD*)(v25 + 464) = 0;
    *(_QWORD*)(v25 + 448) = 0;
    *(_QWORD*)(v25 + 456) = 0;
    *(_QWORD*)(v25 + 488) = 0;
    *(_QWORD*)(v25 + 496) = 0;
    *(_QWORD*)(v25 + 472) = 0;
    *(_QWORD*)(v25 + 480) = 0;
    *(_DWORD*)(v25 + 520) = 0;
    *(_QWORD*)(v25 + 504) = 0;
    *(_QWORD*)(v25 + 512) = 0;
    *(_QWORD*)(v25 + 552) = 0;
    *(_QWORD*)(v25 + 544) = 0;
    *(_QWORD*)(v25 + 536) = 0;
    *(_QWORD*)(v25 + 528) = 0;
    *(_DWORD*)(v25 + 576) = 0;
    *(_QWORD*)(v25 + 568) = 0;
    *(_QWORD*)(v25 + 560) = 0;
    *(_QWORD*)(v25 + 608) = 0;
    *(_QWORD*)(v25 + 600) = 0;
    *(_QWORD*)(v25 + 592) = 0;
    *(_QWORD*)(v25 + 584) = 0;
    *(_DWORD*)(v25 + 632) = 0;
    *(_QWORD*)(v25 + 624) = 0;
    *(_QWORD*)(v25 + 616) = 0;
    *(_QWORD*)(v25 + 664) = 0;
    *(_QWORD*)(v25 + 656) = 0;
    *(_QWORD*)(v25 + 648) = 0;
    *(_QWORD*)(v25 + 640) = 0;
    *(_DWORD*)(v25 + 688) = 0;
    *(_QWORD*)(v25 + 680) = 0;
    *(_QWORD*)(v25 + 672) = 0;
    *(_QWORD*)(v25 + 720) = 0;
    *(_QWORD*)(v25 + 712) = 0;
    *(_QWORD*)(v25 + 704) = 0;
    *(_QWORD*)(v25 + 696) = 0;
    *(_DWORD*)(v25 + 744) = 0;
    *(_QWORD*)(v25 + 736) = 0;
    *(_QWORD*)(v25 + 728) = 0;
    *(_QWORD*)(v25 + 776) = 0;
    *(_QWORD*)(v25 + 768) = 0;
    *(_QWORD*)(v25 + 760) = 0;
    *(_QWORD*)(v25 + 752) = 0;
    *(_DWORD*)(v25 + 800) = 0;
    *(_QWORD*)(v25 + 792) = 0;
    *(_QWORD*)(v25 + 784) = 0;
    *(_QWORD*)(v25 + 832) = 0;
    *(_QWORD*)(v25 + 824) = 0;
    *(_QWORD*)(v25 + 816) = 0;
    *(_QWORD*)(v25 + 808) = 0;
    *(_DWORD*)(v25 + 856) = 0;
    *(_QWORD*)(v25 + 848) = 0;
    *(_QWORD*)(v25 + 840) = 0;
    *(_QWORD*)(v25 + 888) = 0;
    *(_QWORD*)(v25 + 880) = 0;
    *(_QWORD*)(v25 + 872) = 0;
    *(_QWORD*)(v25 + 864) = 0;
    v25 += 896;
  } while (v24 != 0);
  *(_QWORD*)(a1 + 248720) = 0;
  *(_QWORD*)(a1 + 248672) = 0;
  *(_QWORD*)(a1 + 248680) = 0;
  *(_QWORD*)(a1 + 248664) = 0;
  *(_QWORD*)(a1 + 248632) = 0;
  *(_QWORD*)(a1 + 248640) = 0;
  *(_QWORD*)(a1 + 248648) = 0;
  *(_BYTE*)(a1 + 248656) = 0;
  *(_QWORD*)(a1 + 248736) = 0;
  *(_QWORD*)(a1 + 248744) = 0;
  *(_QWORD*)(a1 + 248752) = 0;
  return result;
}

#pragma GCC visibility pop
