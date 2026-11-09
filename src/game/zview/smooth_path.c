#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_d92a40(_QWORD);
__int64 GameRoutine_d93540(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d95860(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_d95570(void);
__int64 SmoothPath_Unknown3(__int64 a1);
__int64 SmoothPath_Unknown4(__int64 a1);
__int64 SmoothPath_d930a0(__int64 result);

__int64 SmoothPath_Unknown3(__int64 a1)
{
  return (*(_QWORD*)(a1 + 64) - *(_QWORD*)(a1 + 56)) >> 4;
}

__int64 SmoothPath_Unknown4(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;

  if (*(_BYTE*)(a1 + 12) == 1) {
    GameRoutine_d92a40(a1);
  }
  else {
    SmoothPath_d930a0(a1);
  }
  v2 = *(_QWORD*)(a1 + 56);
  if (*(_QWORD*)(a1 + 64) != v2) {
    v3 = 0;
    v4 = 0;
    do {
      v5 = *(_QWORD*)(v2 + v3);
      v3 += 16;
      *(_DWORD*)(v5 + 40) = v4++;
      v2 = *(_QWORD*)(a1 + 56);
    } while (v4 < (*(_QWORD*)(a1 + 64) - v2) >> 4);
  }
  return GameRoutine_d95860(a1);
}

__int64 SmoothPath_d930a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
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
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  _QWORD* v33;
  _QWORD* v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  _QWORD* v51;
  __int64 v52;
  _QWORD* v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64* v57;
  __int64* v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  _QWORD* v63;
  __int64 v64;
  __int64 v65;
  _QWORD* v66;
  __int64 v67;
  __int64 v68;
  _QWORD* v69;
  __int64 v70;
  __int64 v71;
  _QWORD* v72;
  __int64 v73;
  __int64 v74;
  _QWORD* v75;
  __int64 v76;
  __int64 v77;
  _QWORD* v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  _QWORD* v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  _QWORD* v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  _QWORD* v92;
  __int64* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  _QWORD* v97;
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

  v2 = *(_QWORD*)(result + 56);
  v1 = *(_QWORD*)(result + 64);
  v3 = v1 - v2;
  if (v1 == v2) {
    return result;
  }
  v111 = 0;
  v4 = v3 >> 4;
  v5 = result;
  v6 = fw_memory_g_heap_manager_ptr;
  v109 = 0;
  v110 = 0;
  if (v3 << 28 == 0) {
    v12 = 0;
    v20 = 0;
    v25 = 0;
    v107 = 0;
    v108 = 0;
    v105 = 0;
    v106 = 0;
    v103 = 0;
    v104 = 0;
    if ((int)v4 <= 0) {
      return GameRoutine_d93540(&v109, &v106, &v103, (unsigned int)v4);
    }
  LABEL_7:
    v29 = *(_QWORD*)(v5 + 56);
    v30 = (v3 >> 4) & 3;
    v31 = ((v3 >> 4) & 0x7FFFFFFF) - 1;
    if (v31 >= 3) {
      v33 = (_QWORD*)(v29 + 32);
      v34 = (_QWORD*)(v12 + 48);
      v35 = 0;
      do {
        v36 = (_QWORD*)*(v33 - 4);
        v35 -= 4;
        v37 = v36[2];
        v38 = v36[3];
        v39 = v36[4];
        *(v34 - 5) = v38;
        *(v34 - 4) = v39;
        *(v34 - 6) = v37;
        v40 = (_QWORD*)*(v33 - 2);
        v41 = v40[2];
        v42 = v40[3];
        v43 = v40[4];
        *(v34 - 2) = v42;
        *(v34 - 1) = v43;
        *(v34 - 3) = v41;
        v44 = *(_QWORD*)(*v33 + 16LL);
        v45 = *(_QWORD*)(*v33 + 32LL);
        v34[1] = *(_QWORD*)(*v33 + 24LL);
        v34[2] = v45;
        *v34 = v44;
        v46 = (_QWORD*)v33[2];
        v33 += 8;
        v47 = v46[2];
        v48 = v46[3];
        v49 = v46[4];
        v34[4] = v48;
        v34[5] = v49;
        v34[3] = v47;
        v34 += 12;
      } while (-4LL * ((v3 >> 6) & 0x1FFFFFFF) != v35);
      v32 = -v35;
      if (v30 == 0) {
      LABEL_15:
        GameRoutine_d93540(&v109, &v106, &v103, (unsigned int)v4);
        if (v31 >= 3) {
          v57 = (__int64*)(v20 + 48);
          v58 = (__int64*)(v25 + 48);
          v59 = 48;
          v60 = 0;
          do {
            v61 = *(v57 - 6);
            v60 -= 4;
            v62 = *(v57 - 4);
            v63 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v59 - 48);
            v63[9] = *(v57 - 5);
            v63[10] = v62;
            v63[8] = v61;
            v64 = *(v58 - 6);
            v65 = *(v58 - 4);
            v66 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v59 - 48);
            v66[12] = *(v58 - 5);
            v66[13] = v65;
            v66[11] = v64;
            v67 = *(v57 - 3);
            v68 = *(v57 - 1);
            v69 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v59 - 32);
            v69[9] = *(v57 - 2);
            v69[10] = v68;
            v69[8] = v67;
            v70 = *(v58 - 3);
            v71 = *(v58 - 1);
            v72 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v59 - 32);
            v72[12] = *(v58 - 2);
            v72[13] = v71;
            v72[11] = v70;
            v73 = *v57;
            v74 = v57[2];
            v75 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v59 - 16);
            v75[9] = v57[1];
            v75[10] = v74;
            v75[8] = v73;
            v76 = *v58;
            v77 = v58[2];
            v78 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v59 - 16);
            v78[12] = v58[1];
            v78[13] = v77;
            v78[11] = v76;
            v79 = v57[3];
            v80 = v57[4];
            v81 = v57[5];
            v57 += 12;
            v82 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v59);
            v82[9] = v80;
            v82[10] = v81;
            v82[8] = v79;
            v83 = v58[3];
            v84 = v58[4];
            v85 = v58[5];
            v58 += 12;
            v86 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v59);
            v59 += 64;
            v86[12] = v84;
            v86[13] = v85;
            v86[11] = v83;
          } while (-4LL * ((v3 >> 6) & 0x1FFFFFFF) != v60);
          v56 = -v60;
          if (v30 == 0) {
            goto LABEL_23;
          }
        }
        else {
          v56 = 0;
          if (v30 == 0) {
            goto LABEL_23;
          }
        }
        v87 = 3 * v56;
        v88 = 16 * v56;
        v89 = 8 * v87;
        do {
          --v30;
          v90 = *(_QWORD*)(v20 + v89);
          v91 = *(_QWORD*)(v20 + v89 + 16);
          v92 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v88);
          v92[9] = *(_QWORD*)(v20 + v89 + 8);
          v92[10] = v91;
          v92[8] = v90;
          v93 = (__int64*)(v25 + v89);
          v89 += 24;
          v94 = *v93;
          v95 = v93[1];
          v96 = v93[2];
          v97 = *(_QWORD**)(*(_QWORD*)(v5 + 56) + v88);
          v88 += 16;
          v97[12] = v95;
          v97[13] = v96;
          v97[11] = v94;
        } while (v30 != 0);
        goto LABEL_23;
      }
    }
    else {
      v32 = 0;
      if (v30 == 0) {
        goto LABEL_15;
      }
    }
    v50 = (_QWORD*)(v29 + 16 * v32);
    v51 = (_QWORD*)(v12 + 24 * v32);
    v52 = (v3 >> 4) & 3;
    do {
      v53 = (_QWORD*)*v50;
      v50 += 2;
      --v52;
      v54 = v53[2];
      v55 = v53[4];
      v51[1] = v53[3];
      v51[2] = v55;
      *v51 = v54;
      v51 += 3;
    } while (v52 != 0);
    goto LABEL_15;
  }
  v7 = (int)((__int64)v3 >> 4);
  if (v7 >= 0xAAAAAAAAAAAAAABLL) {
    GameRoutine_d95570();
  }
  v8 = 3 * v7;
  v9 = 24 * v7;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       24 * v7, 16, 0);
  v11 = v10 + 8 * v8;
  v12 = v10;
  v109 = v10;
  v111 = v11;
  v13 = 24 * ((v9 - 24) / 0x18uLL) + 24;
  memset(v10, 0, v13, v14, v15, v16);
  v17 = *(_QWORD*)v6;
  v110 = v11;
  v18 = fw_memory_HeapManager_Allocate(v17, v9, 16, 0);
  v19 = v18 + 8 * v8;
  v20 = v18;
  v106 = v18;
  v108 = v19;
  memset(v18, 0, v13, v21, v22, v23);
  v24 = *(_QWORD*)v6;
  v107 = v19;
  v25 = fw_memory_HeapManager_Allocate(v24, v9, 16, 0);
  v103 = v25;
  v105 = v25 + 8 * v8;
  memset(v25, 0, v13, v26, v27, v28);
  v104 = v105;
  if ((int)v4 > 0) {
    goto LABEL_7;
  }
  GameRoutine_d93540(&v109, &v106, &v103, (unsigned int)v4);

LABEL_23:
  v98 = *(_QWORD*)v6;
  v104 = v25;
  v99 = 128;
  if (*(_QWORD*)(v98 + 200) == 0) {
    v99 = 56;
  }
  result = nn_mem_StandardAllocator_Free(v98 + v99, v25);
  if (v20 != 0) {
    v100 = *(_QWORD*)v6;
    v107 = v20;
    v101 = 128;
    if (*(_QWORD*)(v100 + 200) == 0) {
      v101 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v100 + v101, v20);
  }
  if (v12 != 0) {
    v102 = 128;
    if (*(_QWORD*)(*(_QWORD*)v6 + 200LL) == 0) {
      v102 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v6 + v102, v12);
  }
  return result;
}

#pragma GCC visibility pop
