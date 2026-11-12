#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*wld_WorldAOModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a250(_QWORD);
__int64 WorldAOModule_Destructor(_QWORD* a1);
__int64 WorldAOModule_Unknown7(_QWORD* a1);
__int64 WorldAOModule_Unknown9(_QWORD* a1);
__attribute__((swiftcall)) void Layout_c1d100(PSEUDO_X8, __int64 result,
                                              unsigned __int64, __int64,
                                              unsigned __int64);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64* game_g_frame_clock_ptr[3];
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 WorldAOModule_c50450(_QWORD* a1, char a2, __int64 a3,
                             unsigned __int64 a4, __int64 a5,
                             unsigned __int64 a6, __int64 a7,
                             unsigned __int64 a8, __int64 a9,
                             unsigned __int64 a10);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 WorldAOModule_c50450(_QWORD* a1, char a2, __int64 a3,
                             unsigned __int64 a4, __int64 a5,
                             unsigned __int64 a6, __int64 a7,
                             unsigned __int64 a8, __int64 a9,
                             unsigned __int64 a10)
{
  _QWORD* v16;
  char* v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  char* v26;
  __int64 v27;
  char* v28;
  unsigned __int64 v29;
  __int64* v30;
  char* v31;
  unsigned __int64 v32;
  char* v33;
  unsigned __int64 v34;
  __int64* v35;
  char* v36;
  unsigned __int64 v37;
  long double v38;
  __int64 v39;
  unsigned __int64 v40;
  char* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  unsigned __int64 v51;
  char* v52;
  __int64 v53;
  char* v54;
  long double v55;
  char* v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  char* v60;
  __int64 v61;
  __int64* v62;
  long double v63;
  char* v64;
  unsigned __int64 v65;
  __int64 v66;
  __int64* v67;
  unsigned __int64 v68;
  char* v69;
  long double v70;
  unsigned __int64 v71;
  char* v72;
  __int64 v73;
  char* v74;
  unsigned __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  char* v78;
  unsigned int v79;
  unsigned __int64 v80;
  char* v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  unsigned __int64 v91;
  char* v92;
  __int64 v93;
  unsigned __int64 v94;
  char* v95;
  __int64 v96;
  unsigned __int64 v97;
  char* v98;
  char v99[16];
  __int64 v100;
  _QWORD v101[2];
  __int64 v102;
  _QWORD v103[2];
  __int64 v104;
  __int64 v105;
  unsigned __int64 v106;
  char* v107;
  __int64 v108;
  unsigned __int64 v109;
  char* v110;
  __int64 v111;
  unsigned __int64 v112;
  char* v113;

  v16 = (_QWORD*)X8CALL_X0(__int64,
                           Layout_c1d100((void*)(&v111), a7, a8, a9, a10));
  v99[0] = 20;
  strcpy(&v99[1], "Contents:/");
  if (a4 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_170;
  }
  if (a4 >= 0x17) {
    if ((a4 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (a4 | 7) + 1;
    }
    v17 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v18,
                                                16, 0);
    v97 = a4;
    v98 = v17;
    v96 = v18 | 1;
    goto LABEL_9;
  }
  LOBYTE(v96) = 2 * a4;
  v17 = (char*)&v96 + 1;
  if (a4 != 0) {
  LABEL_9:
    memmove(v17, a3, a4);
  }
  v17[a4] = 0;
  if ((v96 & 1) != 0) {
    v19 = v98;
  }
  else {
    v19 = (char*)&v96 + 1;
  }
  if ((v96 & 1) != 0) {
    v20 = v97;
  }
  else {
    v20 = (unsigned __int64)(unsigned __int8)v96 >> 1;
  }
  v21 = (_QWORD*)GameRoutine_1a09ce0(v99, v19, v20);
  v23 = v21[1];
  v22 = v21[2];
  v101[0] = *v21;
  v101[1] = v23;
  v102 = v22;
  v21[1] = 0;
  v21[2] = 0;
  *v21 = 0;
  v16 = (_QWORD*)GameRoutine_1a09ce0(v101, "/Lighting/", 10);
  v25 = v16[1];
  v24 = v16[2];
  v103[0] = *v16;
  v103[1] = v25;
  v104 = v24;
  v16[1] = 0;
  v16[2] = 0;
  *v16 = 0;
  if (a6 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_170;
  }
  if (a6 >= 0x17) {
    if ((a6 | 7) == 0x17) {
      v27 = 26;
    }
    else {
      v27 = (a6 | 7) + 1;
    }
    v26 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v27,
                                                16, 0);
    v94 = a6;
    v95 = v26;
    v93 = v27 | 1;
    goto LABEL_24;
  }
  LOBYTE(v93) = 2 * a6;
  v26 = (char*)&v93 + 1;
  if (a6 != 0) {
  LABEL_24:
    memmove(v26, a5, a6);
  }
  v26[a6] = 0;
  if ((v93 & 1) != 0) {
    v28 = v95;
  }
  else {
    v28 = (char*)&v93 + 1;
  }
  if ((v93 & 1) != 0) {
    v29 = v94;
  }
  else {
    v29 = (unsigned __int64)(unsigned __int8)v93 >> 1;
  }
  v30 = (__int64*)GameRoutine_1a09ce0(v103, v28, v29);
  v32 = v30[1];
  v31 = (char*)v30[2];
  v105 = *v30;
  v106 = v32;
  v107 = v31;
  v30[1] = 0;
  v30[2] = 0;
  *v30 = 0;
  if ((v111 & 1) != 0) {
    v33 = v113;
  }
  else {
    v33 = (char*)&v111 + 1;
  }
  if ((v111 & 1) != 0) {
    v34 = v112;
  }
  else {
    v34 = (unsigned __int64)(unsigned __int8)v111 >> 1;
  }
  v35 = (__int64*)GameRoutine_1a09ce0(&v105, v33, v34);
  v37 = v35[1];
  v36 = (char*)v35[2];
  v108 = *v35;
  v109 = v37;
  v110 = v36;
  v35[1] = 0;
  v35[2] = 0;
  *v35 = 0;
  v16 = (_QWORD*)GameRoutine_1a09ce0(&v108, "_WorldAO", 8);
  v39 = *v16;
  v40 = v16[1];
  *v16 = 0;
  v16[1] = 0;
  v90 = v39;
  v91 = v40;
  v41 = (char*)v16[2];
  v16[2] = 0;
  v92 = v41;
  if ((v108 & 1) != 0 && v110 != nullptr) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v42 = 56;
    }
    v16 = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v42, v38);
  }
  if ((v105 & 1) != 0 && v107 != nullptr) {
    v43 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v43 = 56;
    }
    v16 = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v38);
  }
  if ((v93 & 1) != 0 && v95 != nullptr) {
    v44 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v44 = 56;
    }
    v16 = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v38);
  }
  if ((v103[0] & 1) != 0 && v104 != 0) {
    v45 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v45 = 56;
    }
    v16 = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v38);
  }
  if ((v101[0] & 1) != 0 && v102 != 0) {
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v46 = 56;
    }
    v16 = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v38);
  }
  if ((v96 & 1) != 0 && v98 != nullptr) {
    v47 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v47 = 56;
    }
    v16 = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, v38);
  }
  if ((v99[0] & 1) != 0 && v100 != 0) {
    v48 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v48 = 56;
    }
    v16 = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v38);
  }
  if ((v111 & 1) != 0 && v113 != nullptr) {
    v49 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v49 = 56;
    }
    v16 = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, v38);
  }
  if ((v90 & 1) != 0) {
    v50 = v92;
  }
  else {
    v50 = (char*)&v90 + 1;
  }
  if ((v90 & 1) != 0) {
    v51 = v91;
  }
  else {
    v51 = (unsigned __int64)(unsigned __int8)v90 >> 1;
  }
  if (v51 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_170:
    String_60a1d0(v16);
  }
  if (v51 >= 0x17) {
    if ((v51 | 7) == 0x17) {
      v53 = 26;
    }
    else {
      v53 = (v51 | 7) + 1;
    }
    v52 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v53,
                                                16, 0);
    v112 = v51;
    v113 = v52;
    v111 = v53 | 1;
  }
  else {
    LOBYTE(v111) = 2 * v51;
    v52 = (char*)&v111 + 1;
    if (v51 == 0) {
      goto LABEL_92;
    }
  }
  memmove(v52, v50, v51);
LABEL_92:
  v52[v51] = 0;
  v54 = (char*)&v90 + 1;
  v16 = (_QWORD*)GameRoutine_1a09ce0(&v111, ".param", 6);
  v57 = v16[1];
  v56 = (char*)v16[2];
  v108 = *v16;
  v109 = v57;
  v110 = v56;
  v16[1] = 0;
  v16[2] = 0;
  *v16 = 0;
  if ((v111 & 1) != 0 && v113 != nullptr) {
    v58 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v58 = 56;
    }
    v16 = (_QWORD*)nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v55);
  }
  if ((v90 & 1) != 0) {
    v54 = v92;
    v59 = v91;
  }
  else {
    v59 = (unsigned __int64)(unsigned __int8)v90 >> 1;
  }
  if (v59 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_170;
  }
  if (v59 >= 0x17) {
    if ((v59 | 7) == 0x17) {
      v61 = 26;
    }
    else {
      v61 = (v59 | 7) + 1;
    }
    v60 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v61,
                                                16, 0);
    v112 = v59;
    v113 = v60;
    v111 = v61 | 1;
  }
  else {
    LOBYTE(v111) = 2 * v59;
    v60 = (char*)&v111 + 1;
    if (v59 == 0) {
      goto LABEL_109;
    }
  }
  memmove(v60, v54, v59);
LABEL_109:
  v60[v59] = 0;
  v62 = (__int64*)GameRoutine_1a09ce0(&v111, ".bntx", 5);
  v65 = v62[1];
  v64 = (char*)v62[2];
  v105 = *v62;
  v106 = v65;
  v107 = v64;
  v62[1] = 0;
  v62[2] = 0;
  *v62 = 0;
  if ((v111 & 1) != 0 && v113 != nullptr) {
    v66 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v66 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v66, v63);
  }
  v67 = game_g_frame_clock_ptr[0];
  if ((v108 & 1) != 0) {
    v68 = v109;
  }
  else {
    v68 = (unsigned __int64)(unsigned __int8)v108 >> 1;
  }
  if ((v108 & 1) != 0) {
    v69 = v110;
  }
  else {
    v69 = (char*)&v108 + 1;
  }
  if (((*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
           **(_QWORD**)(*game_g_frame_clock_ptr[0] + 13432) + 96LL))(
           *(_QWORD*)(*game_g_frame_clock_ptr[0] + 13432), v69, v68, 255) &
       1) == 0 ||
      ((v105 & 1) != 0 ? (v71 = v106)
                       : (v71 = (unsigned __int64)(unsigned __int8)v105 >> 1),
       (v105 & 1) == 0 ? (v72 = (char*)&v105 + 1) : (v72 = v107),
       ((*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64))(
            **(_QWORD**)(*v67 + 13432) + 96LL))(*(_QWORD*)(*v67 + 13432), v72,
                                                v71, 255) &
        1) == 0)) {
    v79 = 0;
    if ((v105 & 1) == 0) {
      goto LABEL_159;
    }
    goto LABEL_155;
  }
  v73 = *(_QWORD*)(*v67 + 13432);
  if ((v108 & 1) != 0) {
    v74 = v110;
  }
  else {
    v74 = (char*)&v108 + 1;
  }
  if ((v108 & 1) != 0) {
    v75 = v109;
  }
  else {
    v75 = (unsigned __int64)(unsigned __int8)v108 >> 1;
  }
  if ((a2 & 1) != 0) {
    v88 = 0;
    v89 = 0;
    *a1 = (*(__int64 (**)(__int64, char*, unsigned __int64, __int64*, __int64))(
        *(_QWORD*)v73 + 16LL))(v73, v74, v75, &v88, 255);
    if (v89 != 0) {
      std___1___shared_weak_count___release_weak(v89);
    }
    v76 = *v67;
    v86 = 0;
    v87 = 0;
    if ((v105 & 1) != 0) {
      v77 = v106;
    }
    else {
      v77 = (unsigned __int64)(unsigned __int8)v105 >> 1;
    }
    if ((v105 & 1) != 0) {
      v78 = v107;
    }
    else {
      v78 = (char*)&v105 + 1;
    }
    a1[1] = (*(__int64 (**)(_QWORD, char*, unsigned __int64, __int64*))(
        **(_QWORD**)(v76 + 13432) + 40LL))(*(_QWORD*)(v76 + 13432), v78, v77,
                                           &v86);
    if (v87 != 0) {
      std___1___shared_weak_count___release_weak(v87);
    }
  }
  else {
    *a1 = (*(__int64 (**)(__int64, char*, unsigned __int64, __int64))(
        *(_QWORD*)v73 + 56LL))(v73, v74, v75, 255);
    if ((v105 & 1) != 0) {
      v80 = v106;
    }
    else {
      v80 = (unsigned __int64)(unsigned __int8)v105 >> 1;
    }
    if ((v105 & 1) != 0) {
      v81 = v107;
    }
    else {
      v81 = (char*)&v105 + 1;
    }
    a1[1] = (*(__int64 (**)(_QWORD, char*, unsigned __int64))(
        **(_QWORD**)(*v67 + 13432) + 80LL))(*(_QWORD*)(*v67 + 13432), v81, v80);
  }
  v79 = 1;
  if ((v105 & 1) != 0) {
  LABEL_155:
    if (v107 != nullptr) {
      v82 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v82 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v82, v70);
    }
  }
LABEL_159:
  if ((v108 & 1) != 0 && v110 != nullptr) {
    v83 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v83 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v83, v70);
  }
  if ((v90 & 1) != 0 && v92 != nullptr) {
    v84 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v84 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v84, v70);
  }
  return v79;
}

__int64 WorldAOModule_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;

  v1 = a1[7];
  *a1 = wld_WorldAOModule_vtable;
  if (v1 != 0) {
    v3 = a1[8];
    if (v1 == v3) {
      goto LABEL_9;
    }
    do {
      v4 = *(_QWORD*)(v3 - 8);
      if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak_alt1(v4);
      }
      v3 -= 24;
    } while (v3 != v1);
    v5 = a1[7];
    a1[8] = v1;
    v1 = v5;
    if (v5 != 0) {
    LABEL_9:
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, v1);
    }
  }
  v7 = a1[6];
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  result = a1[4];
  if (result != 0) {
    return std___1___shared_weak_count___release_weak_alt1(result);
  }
  return result;
}

__int64 WorldAOModule_Unknown7(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v2 = a1[4];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = a1[3];
    }
    else {
      v4 = 0;
    }
    result = a1[6];
    if (result == 0) {
      goto LABEL_27;
    }
  }
  else {
    v3 = 0;
    v4 = 0;
    result = a1[6];
    if (result == 0) {
      goto LABEL_27;
    }
  }
  result = std___1___shared_weak_count_lock(result);
  if (v4 != 0 && result != 0) {
    v6 = a1[5];
    if (v6 != 0) {
      v7 = a1[7];
      v8 = a1[8];
      if (v7 == v8) {
      LABEL_15:
        v9 = *(_QWORD*)(v4 + 256);
        *(_QWORD*)(v4 + 248) = 0;
        *(_QWORD*)(v4 + 256) = 0;
        if (v9 == 0) {
          goto LABEL_25;
        }
        goto LABEL_23;
      }
      while (1) {
        if (*(_DWORD*)v7 >= 0xAu) {
          GameRoutine_60a250("bitset test argument out of range");
        }
        if (((*(_QWORD*)(v6 + 392) >> *(_DWORD*)v7) & 1) != 0) {
          break;
        }
        v7 += 24;
        if (v7 == v8) {
          goto LABEL_15;
        }
      }
      v10 = *(_QWORD*)(v7 + 8);
      v9 = *(_QWORD*)(v7 + 16);
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
      }
      v11 = *(_QWORD*)(v4 + 256);
      *(_QWORD*)(v4 + 248) = v10;
      *(_QWORD*)(v4 + 256) = v9;
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        v12 = result;
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
        std___1___shared_weak_count___release_weak(v11);
        result = v12;
      }
      if (v9 != 0) {
      LABEL_23:
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v13 = result;
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          std___1___shared_weak_count___release_weak(v9);
          result = v13;
        }
      }
    }
  }

LABEL_25:
  if (result != 0 && atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    v14 = result;
    (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    result = std___1___shared_weak_count___release_weak(v14);
    if (v3 == 0) {
      return result;
    }
    goto LABEL_28;
  }

LABEL_27:
  if (v3 == 0) {
    return result;
  }

LABEL_28:
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

__int64 WorldAOModule_Unknown9(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = a1[4];
  if (v2 != 0) {
    v3 = std___1___shared_weak_count_lock(v2);
    if (v3 != 0) {
      v4 = a1[3];
    }
    else {
      v4 = 0;
    }
    result = a1[6];
    if (result == 0) {
      goto LABEL_16;
    }
  }
  else {
    v4 = 0;
    v3 = 0;
    result = a1[6];
    if (result == 0) {
      goto LABEL_16;
    }
  }
  result = std___1___shared_weak_count_lock(result);
  if (v4 != 0 && result != 0 && a1[5] != 0) {
    v6 = *(_QWORD*)(v4 + 256);
    *(_QWORD*)(v4 + 248) = 0;
    *(_QWORD*)(v4 + 256) = 0;
    if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      v7 = result;
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
      result = v7;
    }
  }
  else if (result == 0) {
    goto LABEL_16;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
  LABEL_16:
    if (v3 == 0) {
      return result;
    }
    goto LABEL_17;
  }
  v8 = result;
  (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
  result = std___1___shared_weak_count___release_weak(v8);
  if (v3 == 0) {
    return result;
  }

LABEL_17:
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

#pragma GCC visibility pop
