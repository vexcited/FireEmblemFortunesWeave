#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void std___1_to_string_1a0a790(PSEUDO_X8, _QWORD);
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_b48e70(__int64, __int64);
__int64 GameRoutine_b4ba10(__int64*, const char*, __int64);
__int64 ResourceBuilder_b4bb60(__int64*, unsigned __int8*, __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 gfx_flow_b4af90(__int64* a1, __int64* a2, __int64 a3);

__int64 gfx_flow_b4af90(__int64* a1, __int64* a2, __int64 a3)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  const char* v15;
  unsigned __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char v21;
  __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  const char* v26;
  unsigned __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char v32;
  __int64 v33;
  __int64 v34;
  int v35;
  __int64 v36;
  const char* v37;
  unsigned __int64 v38;
  __int64* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  char v43;
  __int64 v44;
  __int64 v45;
  int v46;
  int v47;
  __int64 v48;
  const char* v49;
  unsigned __int64 v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  char v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  const char* v59;
  unsigned __int64 v60;
  __int64* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  char v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  const char* v69;
  unsigned __int64 v70;
  __int64* v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  char v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  const char* v79;
  unsigned __int64 v80;
  __int64* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  char v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  const char* v89;
  unsigned __int64 v90;
  __int64* v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  char v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 result;
  int v100;
  int v101;
  int v102;
  int v103;
  int v104;
  int v105;
  int v106;
  struct {
    __int64 v107;
    unsigned __int64 v108;
    const char* v109;
  } v107_;
  char v110;
  _BYTE v111[23];
  struct {
    __int64 v112;
    __int64 v113;
    __int64 v114;
  } v112_;
  struct {
    _DWORD v115[2];
    int v116;
    int v117;
    __int64 v118;
    char v119;
    char gap137_[3];
    int v120;
  } v115_;

  v115_.v120 = 0;
  v115_.v118 = 0x100000001LL;
  v115_.v119 = 1;
  v6 = *(_DWORD*)(a3 + 4);
  v115_.v116 = *(_DWORD*)a3;
  v115_.v117 = v6;
  v7 = *(_DWORD*)(a3 + 16);
  v115_.v115[0] = 0;
  v115_.v115[1] = v7;
  a1[1] = GameRoutine_b4ba10(a2, "RTTempHiLum", (__int64)v115_.v115);
  v8 = *(_DWORD*)a3;
  v9 = *(_DWORD*)(a3 + 4);
  v111[15] = 0;
  if (v8 >= 0) {
    v10 = v8;
  }
  else {
    v10 = v8 + 3;
  }
  v11 = v8 + 7;
  if (v8 >= 0) {
    v11 = v8;
  }
  v115_.v116 = v8 / 2;
  v115_.v117 = v9 / 2;
  v102 = v9 / 2;
  v100 = v11;
  v103 = v8 / 2;
  v104 = v8 + (v8 < 0 ? 0xF : 0);
  if (v9 >= 0) {
    v12 = v9;
  }
  else {
    v12 = v9 + 3;
  }
  if (v9 >= 0) {
    v13 = v9;
  }
  else {
    v13 = v9 + 7;
  }
  v14 = v9 + 15;
  if (v9 >= 0) {
    v14 = v9;
  }
  v101 = v14;
  v110 = 30;
  qmemcpy(v111, "RTTempDownscale", 15);
  std___1_to_string_1a0a790((void*)(&v107_.v107), 0);
  if ((v107_.v107 & 1) != 0) {
    v15 = v107_.v109;
  }
  else {
    v15 = (char*)&v107_.v107 + 1;
  }
  if ((v107_.v107 & 1) != 0) {
    v16 = v107_.v108;
  }
  else {
    v16 = (unsigned __int64)(unsigned __int8)v107_.v107 >> 1;
  }
  v17 = (__int64*)GameRoutine_1a09ce0((__int64)&v110, v15, v16);
  v19 = v17[1];
  v18 = v17[2];
  v112_.v112 = *v17;
  v112_.v113 = v19;
  v112_.v114 = v18;
  v17[1] = 0;
  v17[2] = 0;
  *v17 = 0;
  v20 = ResourceBuilder_b4bb60(a2, (unsigned __int8*)&v112_.v112,
                               (__int64)v115_.v115);
  v21 = v112_.v112;
  a1[2] = v20;
  if ((v21 & 1) != 0 && v112_.v114 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v22,
                                  v112_.v114);
  }
  if ((v107_.v107 & 1) != 0 && v107_.v109 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                                  (__int64)v107_.v109);
  }
  v24 = v12 >> 2;
  if ((v110 & 1) != 0 && *(_QWORD*)&v111[15] != 0) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v25,
                                  *(__int64*)&v111[15]);
    v24 = v12 >> 2;
  }
  v115_.v116 = v10 >> 2;
  v115_.v117 = v24;
  v106 = v24;
  strcpy(v111, "RTTempDownscale");
  v110 = 30;
  std___1_to_string_1a0a790((void*)(&v107_.v107), 1);
  if ((v107_.v107 & 1) != 0) {
    v26 = v107_.v109;
  }
  else {
    v26 = (char*)&v107_.v107 + 1;
  }
  if ((v107_.v107 & 1) != 0) {
    v27 = v107_.v108;
  }
  else {
    v27 = (unsigned __int64)(unsigned __int8)v107_.v107 >> 1;
  }
  v28 = (__int64*)GameRoutine_1a09ce0((__int64)&v110, v26, v27);
  v30 = v28[1];
  v29 = v28[2];
  v112_.v112 = *v28;
  v112_.v113 = v30;
  v112_.v114 = v29;
  v28[1] = 0;
  v28[2] = 0;
  *v28 = 0;
  v31 = ResourceBuilder_b4bb60(a2, (unsigned __int8*)&v112_.v112,
                               (__int64)v115_.v115);
  v32 = v112_.v112;
  a1[3] = v31;
  if ((v32 & 1) != 0 && v112_.v114 != 0) {
    v33 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v33 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v33,
                                  v112_.v114);
  }
  if ((v107_.v107 & 1) != 0 && v107_.v109 != nullptr) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v34,
                                  (__int64)v107_.v109);
  }
  v35 = v13 >> 3;
  if ((v110 & 1) != 0 && *(_QWORD*)&v111[15] != 0) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v36,
                                  *(__int64*)&v111[15]);
  }
  v115_.v116 = v100 >> 3;
  v115_.v117 = v35;
  strcpy(v111, "RTTempDownscale");
  v110 = 30;
  std___1_to_string_1a0a790((void*)(&v107_.v107), 2);
  if ((v107_.v107 & 1) != 0) {
    v37 = v107_.v109;
  }
  else {
    v37 = (char*)&v107_.v107 + 1;
  }
  if ((v107_.v107 & 1) != 0) {
    v38 = v107_.v108;
  }
  else {
    v38 = (unsigned __int64)(unsigned __int8)v107_.v107 >> 1;
  }
  v39 = (__int64*)GameRoutine_1a09ce0((__int64)&v110, v37, v38);
  v41 = v39[1];
  v40 = v39[2];
  v112_.v112 = *v39;
  v112_.v113 = v41;
  v112_.v114 = v40;
  v39[1] = 0;
  v39[2] = 0;
  *v39 = 0;
  v42 = ResourceBuilder_b4bb60(a2, (unsigned __int8*)&v112_.v112,
                               (__int64)v115_.v115);
  v43 = v112_.v112;
  a1[4] = v42;
  if ((v43 & 1) != 0 && v112_.v114 != 0) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v44,
                                  v112_.v114);
  }
  if ((v107_.v107 & 1) != 0 && v107_.v109 != nullptr) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v45 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v45,
                                  (__int64)v107_.v109);
  }
  v46 = v104 >> 4;
  v47 = v101 >> 4;
  if ((v110 & 1) != 0 && *(_QWORD*)&v111[15] != 0) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v48,
                                  *(__int64*)&v111[15]);
    v46 = v104 >> 4;
    v47 = v101 >> 4;
  }
  v105 = v46;
  v115_.v116 = v46;
  v115_.v117 = v47;
  strcpy(v111, "RTTempDownscale");
  v110 = 30;
  std___1_to_string_1a0a790((void*)(&v107_.v107), 3);
  if ((v107_.v107 & 1) != 0) {
    v49 = v107_.v109;
  }
  else {
    v49 = (char*)&v107_.v107 + 1;
  }
  if ((v107_.v107 & 1) != 0) {
    v50 = v107_.v108;
  }
  else {
    v50 = (unsigned __int64)(unsigned __int8)v107_.v107 >> 1;
  }
  v51 = (__int64*)GameRoutine_1a09ce0((__int64)&v110, v49, v50);
  v53 = v51[1];
  v52 = v51[2];
  v112_.v112 = *v51;
  v112_.v113 = v53;
  v112_.v114 = v52;
  v51[1] = 0;
  v51[2] = 0;
  *v51 = 0;
  v54 = ResourceBuilder_b4bb60(a2, (unsigned __int8*)&v112_.v112,
                               (__int64)v115_.v115);
  v55 = v112_.v112;
  a1[5] = v54;
  if ((v55 & 1) != 0 && v112_.v114 != 0) {
    v56 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v56 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v56,
                                  v112_.v114);
  }
  if ((v107_.v107 & 1) != 0 && v107_.v109 != nullptr) {
    v57 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v57 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v57,
                                  (__int64)v107_.v109);
  }
  if ((v110 & 1) != 0 && *(_QWORD*)&v111[15] != 0) {
    v58 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v58 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v58,
                                  *(__int64*)&v111[15]);
  }
  v115_.v116 = v103;
  v115_.v117 = v102;
  v110 = 20;
  strcpy(v111, "RTTempBlur");
  std___1_to_string_1a0a790((void*)(&v107_.v107), 0);
  if ((v107_.v107 & 1) != 0) {
    v59 = v107_.v109;
  }
  else {
    v59 = (char*)&v107_.v107 + 1;
  }
  if ((v107_.v107 & 1) != 0) {
    v60 = v107_.v108;
  }
  else {
    v60 = (unsigned __int64)(unsigned __int8)v107_.v107 >> 1;
  }
  v61 = (__int64*)GameRoutine_1a09ce0((__int64)&v110, v59, v60);
  v63 = v61[1];
  v62 = v61[2];
  v112_.v112 = *v61;
  v112_.v113 = v63;
  v112_.v114 = v62;
  v61[1] = 0;
  v61[2] = 0;
  *v61 = 0;
  v64 = ResourceBuilder_b4bb60(a2, (unsigned __int8*)&v112_.v112,
                               (__int64)v115_.v115);
  v65 = v112_.v112;
  a1[6] = v64;
  if ((v65 & 1) != 0 && v112_.v114 != 0) {
    v66 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v66 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v66,
                                  v112_.v114);
  }
  if ((v107_.v107 & 1) != 0 && v107_.v109 != nullptr) {
    v67 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v67 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v67,
                                  (__int64)v107_.v109);
  }
  if ((v110 & 1) != 0 && *(_QWORD*)&v111[15] != 0) {
    v68 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v68 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v68,
                                  *(__int64*)&v111[15]);
  }
  *(_QWORD*)v111 = *(_QWORD*)"RTTempBlur";
  v115_.v116 = v10 >> 2;
  v115_.v117 = v106;
  v110 = 20;
  strcpy(&v111[8], "ur");
  std___1_to_string_1a0a790((void*)(&v107_.v107), 1);
  if ((v107_.v107 & 1) != 0) {
    v69 = v107_.v109;
  }
  else {
    v69 = (char*)&v107_.v107 + 1;
  }
  if ((v107_.v107 & 1) != 0) {
    v70 = v107_.v108;
  }
  else {
    v70 = (unsigned __int64)(unsigned __int8)v107_.v107 >> 1;
  }
  v71 = (__int64*)GameRoutine_1a09ce0((__int64)&v110, v69, v70);
  v73 = v71[1];
  v72 = v71[2];
  v112_.v112 = *v71;
  v112_.v113 = v73;
  v112_.v114 = v72;
  v71[1] = 0;
  v71[2] = 0;
  *v71 = 0;
  v74 = ResourceBuilder_b4bb60(a2, (unsigned __int8*)&v112_.v112,
                               (__int64)v115_.v115);
  v75 = v112_.v112;
  a1[7] = v74;
  if ((v75 & 1) != 0 && v112_.v114 != 0) {
    v76 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v76 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v76,
                                  v112_.v114);
  }
  if ((v107_.v107 & 1) != 0 && v107_.v109 != nullptr) {
    v77 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v77 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v77,
                                  (__int64)v107_.v109);
  }
  if ((v110 & 1) != 0 && *(_QWORD*)&v111[15] != 0) {
    v78 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v78 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v78,
                                  *(__int64*)&v111[15]);
  }
  v115_.v116 = v100 >> 3;
  v115_.v117 = v35;
  *(_QWORD*)v111 = *(_QWORD*)"RTTempBlur";
  v110 = 20;
  strcpy(&v111[8], "ur");
  std___1_to_string_1a0a790((void*)(&v107_.v107), 2);
  if ((v107_.v107 & 1) != 0) {
    v79 = v107_.v109;
  }
  else {
    v79 = (char*)&v107_.v107 + 1;
  }
  if ((v107_.v107 & 1) != 0) {
    v80 = v107_.v108;
  }
  else {
    v80 = (unsigned __int64)(unsigned __int8)v107_.v107 >> 1;
  }
  v81 = (__int64*)GameRoutine_1a09ce0((__int64)&v110, v79, v80);
  v83 = v81[1];
  v82 = v81[2];
  v112_.v112 = *v81;
  v112_.v113 = v83;
  v112_.v114 = v82;
  v81[1] = 0;
  v81[2] = 0;
  *v81 = 0;
  v84 = ResourceBuilder_b4bb60(a2, (unsigned __int8*)&v112_.v112,
                               (__int64)v115_.v115);
  v85 = v112_.v112;
  a1[8] = v84;
  if ((v85 & 1) != 0 && v112_.v114 != 0) {
    v86 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v86 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v86,
                                  v112_.v114);
  }
  if ((v107_.v107 & 1) != 0 && v107_.v109 != nullptr) {
    v87 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v87 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v87,
                                  (__int64)v107_.v109);
  }
  if ((v110 & 1) != 0 && *(_QWORD*)&v111[15] != 0) {
    v88 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v88 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v88,
                                  *(__int64*)&v111[15]);
  }
  *(_QWORD*)v111 = *(_QWORD*)"RTTempBlur";
  v115_.v116 = v105;
  v115_.v117 = v47;
  v110 = 20;
  strcpy(&v111[8], "ur");
  std___1_to_string_1a0a790((void*)(&v107_.v107), 3);
  if ((v107_.v107 & 1) != 0) {
    v89 = v107_.v109;
  }
  else {
    v89 = (char*)&v107_.v107 + 1;
  }
  if ((v107_.v107 & 1) != 0) {
    v90 = v107_.v108;
  }
  else {
    v90 = (unsigned __int64)(unsigned __int8)v107_.v107 >> 1;
  }
  v91 = (__int64*)GameRoutine_1a09ce0((__int64)&v110, v89, v90);
  v93 = v91[1];
  v92 = v91[2];
  v112_.v112 = *v91;
  v112_.v113 = v93;
  v112_.v114 = v92;
  v91[1] = 0;
  v91[2] = 0;
  *v91 = 0;
  v94 = ResourceBuilder_b4bb60(a2, (unsigned __int8*)&v112_.v112,
                               (__int64)v115_.v115);
  v95 = v112_.v112;
  a1[9] = v94;
  if ((v95 & 1) != 0 && v112_.v114 != 0) {
    v96 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v96 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v96,
                                  v112_.v114);
  }
  if ((v107_.v107 & 1) != 0 && v107_.v109 != nullptr) {
    v97 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v97 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v97,
                                  (__int64)v107_.v109);
  }
  if ((v110 & 1) != 0 && *(_QWORD*)&v111[15] != 0) {
    v98 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v98 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v98,
                                  *(__int64*)&v111[15]);
  }
  result = GameRoutine_b48e70((__int64)a2, *(_QWORD*)(a3 + 8));
  *a1 = result;
  return result;
}

#pragma GCC visibility pop
