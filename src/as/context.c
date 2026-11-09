#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_192f90(_QWORD);
__int64 GameRoutine_25ec90(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _QWORD as_g_context_slots[16384];
extern __int64 (*as_Context_vtable[])();
extern __int64 (*as_HandlePtr_vtable[])();
extern __int64 (*as_Variable_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* Context_Destructor(__int64 a1);

_QWORD* Context_Destructor(__int64 a1)
{
  _QWORD* v2;
  _QWORD* result;
  __int64 v4;
  int v5;
  _QWORD* v6;
  __int64 v7;
  int v8;
  _QWORD* v9;
  __int64 v10;
  int v11;
  _QWORD* v12;
  __int64 v13;
  int v14;
  _QWORD* v15;
  __int64 v16;
  int v17;
  _QWORD* v18;
  __int64 v19;
  int v20;
  _QWORD* v21;
  __int64 v22;
  int v23;
  _QWORD* v24;
  __int64 v25;
  int v26;
  _QWORD* v27;
  __int64 v28;
  int v29;
  _QWORD* v30;
  __int64 v31;
  int v32;
  _QWORD* v33;
  __int64 v34;
  int v35;
  _QWORD* v36;
  __int64 v37;
  int v38;
  _QWORD* v39;
  __int64 v40;
  int v41;
  _QWORD* v42;
  __int64 v43;
  int v44;
  _QWORD* v45;
  __int64 v46;
  int v47;
  _QWORD* v48;
  __int64 v49;
  int v50;
  _QWORD* v51;
  __int64 v52;
  int v53;
  _QWORD* v54;
  __int64 v55;
  int v56;
  _QWORD* v57;
  __int64 v58;
  int v59;
  _QWORD* v60;
  __int64 v61;
  int v62;
  _QWORD* v63;
  __int64 v64;
  int v65;
  _QWORD* v66;
  __int64 v67;
  int v68;
  _QWORD* v69;
  __int64 v70;
  int v71;
  _QWORD* v72;
  __int64 v73;
  int v74;
  _QWORD* v75;
  __int64 v76;
  int v77;
  _QWORD* v78;
  __int64 v79;
  int v80;
  _QWORD* v81;
  __int64 v82;
  int v83;
  _QWORD* v84;
  __int64 v85;
  int v86;
  _QWORD* v87;
  __int64 v88;
  int v89;
  _QWORD* v90;
  __int64 v91;
  int v92;
  _QWORD* v93;
  __int64 v94;
  int v95;
  _QWORD* v96;
  __int64 v97;
  int v98;
  _QWORD* v99;
  __int64 v100;
  int v101;
  _QWORD* v102;
  __int64 v103;
  int v104;
  _QWORD* v105;
  __int64 v106;
  int v107;
  _QWORD* v108;
  __int64 v109;
  int v110;
  _QWORD* v111;
  __int64 v112;
  int v113;
  _QWORD* v114;
  __int64 v115;
  int v116;
  _QWORD* v117;
  __int64 v118;
  int v119;
  _QWORD* v120;
  __int64 v121;
  int v122;
  _QWORD* v123;
  __int64 v124;
  int v125;
  _QWORD* v126;
  __int64 v127;
  __int64 v128;
  _QWORD* v129;

  *(_QWORD*)a1 = as_Context_vtable;
  v2 = (_QWORD*)(a1 + 2208);
  result = *(_QWORD**)(a1 + 2240);
  if (result == v2) {
    v4 = 32;
  }
  else {
    if (result == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v4))((__int64)result);

LABEL_6:
  *(_QWORD*)(a1 + 2064) = as_Variable_vtable;
  v5 = *(_DWORD*)(a1 + 2096);
  if (v5 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 2072));
  }
  else {
    if (v5 != 4) {
      goto LABEL_15;
    }
    v6 = *(_QWORD**)(a1 + 2072);
    if ((*(_BYTE*)v6 & 1) != 0) {
      GameRoutine_25ec90(v6[2], *v6 & 0xFFFFFFFFFFFFFFFELL);
    }
    v7 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v7 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
  }
  *(_QWORD*)(a1 + 2072) = 0;
  *(_DWORD*)(a1 + 2096) = 0;

LABEL_15:
  *(_QWORD*)(a1 + 2024) = as_Variable_vtable;
  v8 = *(_DWORD*)(a1 + 2056);
  if (v8 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 2032));
  }
  else {
    if (v8 != 4) {
      goto LABEL_24;
    }
    v9 = *(_QWORD**)(a1 + 2032);
    if ((*(_BYTE*)v9 & 1) != 0) {
      GameRoutine_25ec90(v9[2], *v9 & 0xFFFFFFFFFFFFFFFELL);
    }
    v10 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v10 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v9);
  }
  *(_QWORD*)(a1 + 2032) = 0;
  *(_DWORD*)(a1 + 2056) = 0;

LABEL_24:
  *(_QWORD*)(a1 + 1984) = as_Variable_vtable;
  v11 = *(_DWORD*)(a1 + 2016);
  if (v11 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1992));
  }
  else {
    if (v11 != 4) {
      goto LABEL_33;
    }
    v12 = *(_QWORD**)(a1 + 1992);
    if ((*(_BYTE*)v12 & 1) != 0) {
      GameRoutine_25ec90(v12[2], *v12 & 0xFFFFFFFFFFFFFFFELL);
    }
    v13 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v13 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, v12);
  }
  *(_QWORD*)(a1 + 1992) = 0;
  *(_DWORD*)(a1 + 2016) = 0;

LABEL_33:
  *(_QWORD*)(a1 + 1944) = as_Variable_vtable;
  v14 = *(_DWORD*)(a1 + 1976);
  if (v14 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1952));
  }
  else {
    if (v14 != 4) {
      goto LABEL_42;
    }
    v15 = *(_QWORD**)(a1 + 1952);
    if ((*(_BYTE*)v15 & 1) != 0) {
      GameRoutine_25ec90(v15[2], *v15 & 0xFFFFFFFFFFFFFFFELL);
    }
    v16 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v16 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
  }
  *(_QWORD*)(a1 + 1952) = 0;
  *(_DWORD*)(a1 + 1976) = 0;

LABEL_42:
  *(_QWORD*)(a1 + 1904) = as_Variable_vtable;
  v17 = *(_DWORD*)(a1 + 1936);
  if (v17 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1912));
  }
  else {
    if (v17 != 4) {
      goto LABEL_51;
    }
    v18 = *(_QWORD**)(a1 + 1912);
    if ((*(_BYTE*)v18 & 1) != 0) {
      GameRoutine_25ec90(v18[2], *v18 & 0xFFFFFFFFFFFFFFFELL);
    }
    v19 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v19 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v18);
  }
  *(_QWORD*)(a1 + 1912) = 0;
  *(_DWORD*)(a1 + 1936) = 0;

LABEL_51:
  *(_QWORD*)(a1 + 1864) = as_Variable_vtable;
  v20 = *(_DWORD*)(a1 + 1896);
  if (v20 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1872));
  }
  else {
    if (v20 != 4) {
      goto LABEL_60;
    }
    v21 = *(_QWORD**)(a1 + 1872);
    if ((*(_BYTE*)v21 & 1) != 0) {
      GameRoutine_25ec90(v21[2], *v21 & 0xFFFFFFFFFFFFFFFELL);
    }
    v22 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v22 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, v21);
  }
  *(_QWORD*)(a1 + 1872) = 0;
  *(_DWORD*)(a1 + 1896) = 0;

LABEL_60:
  *(_QWORD*)(a1 + 1824) = as_Variable_vtable;
  v23 = *(_DWORD*)(a1 + 1856);
  if (v23 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1832));
  }
  else {
    if (v23 != 4) {
      goto LABEL_69;
    }
    v24 = *(_QWORD**)(a1 + 1832);
    if ((*(_BYTE*)v24 & 1) != 0) {
      GameRoutine_25ec90(v24[2], *v24 & 0xFFFFFFFFFFFFFFFELL);
    }
    v25 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v25 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v24);
  }
  *(_QWORD*)(a1 + 1832) = 0;
  *(_DWORD*)(a1 + 1856) = 0;

LABEL_69:
  *(_QWORD*)(a1 + 1784) = as_Variable_vtable;
  v26 = *(_DWORD*)(a1 + 1816);
  if (v26 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1792));
  }
  else {
    if (v26 != 4) {
      goto LABEL_78;
    }
    v27 = *(_QWORD**)(a1 + 1792);
    if ((*(_BYTE*)v27 & 1) != 0) {
      GameRoutine_25ec90(v27[2], *v27 & 0xFFFFFFFFFFFFFFFELL);
    }
    v28 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v28 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v27);
  }
  *(_QWORD*)(a1 + 1792) = 0;
  *(_DWORD*)(a1 + 1816) = 0;

LABEL_78:
  *(_QWORD*)(a1 + 1744) = as_Variable_vtable;
  v29 = *(_DWORD*)(a1 + 1776);
  if (v29 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1752));
  }
  else {
    if (v29 != 4) {
      goto LABEL_87;
    }
    v30 = *(_QWORD**)(a1 + 1752);
    if ((*(_BYTE*)v30 & 1) != 0) {
      GameRoutine_25ec90(v30[2], *v30 & 0xFFFFFFFFFFFFFFFELL);
    }
    v31 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v31 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v30);
  }
  *(_QWORD*)(a1 + 1752) = 0;
  *(_DWORD*)(a1 + 1776) = 0;

LABEL_87:
  *(_QWORD*)(a1 + 1704) = as_Variable_vtable;
  v32 = *(_DWORD*)(a1 + 1736);
  if (v32 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1712));
  }
  else {
    if (v32 != 4) {
      goto LABEL_96;
    }
    v33 = *(_QWORD**)(a1 + 1712);
    if ((*(_BYTE*)v33 & 1) != 0) {
      GameRoutine_25ec90(v33[2], *v33 & 0xFFFFFFFFFFFFFFFELL);
    }
    v34 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v34 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v33);
  }
  *(_QWORD*)(a1 + 1712) = 0;
  *(_DWORD*)(a1 + 1736) = 0;

LABEL_96:
  *(_QWORD*)(a1 + 1664) = as_Variable_vtable;
  v35 = *(_DWORD*)(a1 + 1696);
  if (v35 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1672));
  }
  else {
    if (v35 != 4) {
      goto LABEL_105;
    }
    v36 = *(_QWORD**)(a1 + 1672);
    if ((*(_BYTE*)v36 & 1) != 0) {
      GameRoutine_25ec90(v36[2], *v36 & 0xFFFFFFFFFFFFFFFELL);
    }
    v37 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v37 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v37, v36);
  }
  *(_QWORD*)(a1 + 1672) = 0;
  *(_DWORD*)(a1 + 1696) = 0;

LABEL_105:
  *(_QWORD*)(a1 + 1624) = as_Variable_vtable;
  v38 = *(_DWORD*)(a1 + 1656);
  if (v38 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1632));
  }
  else {
    if (v38 != 4) {
      goto LABEL_114;
    }
    v39 = *(_QWORD**)(a1 + 1632);
    if ((*(_BYTE*)v39 & 1) != 0) {
      GameRoutine_25ec90(v39[2], *v39 & 0xFFFFFFFFFFFFFFFELL);
    }
    v40 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v40 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v40, v39);
  }
  *(_QWORD*)(a1 + 1632) = 0;
  *(_DWORD*)(a1 + 1656) = 0;

LABEL_114:
  *(_QWORD*)(a1 + 1584) = as_Variable_vtable;
  v41 = *(_DWORD*)(a1 + 1616);
  if (v41 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1592));
  }
  else {
    if (v41 != 4) {
      goto LABEL_123;
    }
    v42 = *(_QWORD**)(a1 + 1592);
    if ((*(_BYTE*)v42 & 1) != 0) {
      GameRoutine_25ec90(v42[2], *v42 & 0xFFFFFFFFFFFFFFFELL);
    }
    v43 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v43 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v42);
  }
  *(_QWORD*)(a1 + 1592) = 0;
  *(_DWORD*)(a1 + 1616) = 0;

LABEL_123:
  *(_QWORD*)(a1 + 1544) = as_Variable_vtable;
  v44 = *(_DWORD*)(a1 + 1576);
  if (v44 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1552));
  }
  else {
    if (v44 != 4) {
      goto LABEL_132;
    }
    v45 = *(_QWORD**)(a1 + 1552);
    if ((*(_BYTE*)v45 & 1) != 0) {
      GameRoutine_25ec90(v45[2], *v45 & 0xFFFFFFFFFFFFFFFELL);
    }
    v46 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v46 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v45);
  }
  *(_QWORD*)(a1 + 1552) = 0;
  *(_DWORD*)(a1 + 1576) = 0;

LABEL_132:
  *(_QWORD*)(a1 + 1504) = as_Variable_vtable;
  v47 = *(_DWORD*)(a1 + 1536);
  if (v47 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1512));
  }
  else {
    if (v47 != 4) {
      goto LABEL_141;
    }
    v48 = *(_QWORD**)(a1 + 1512);
    if ((*(_BYTE*)v48 & 1) != 0) {
      GameRoutine_25ec90(v48[2], *v48 & 0xFFFFFFFFFFFFFFFELL);
    }
    v49 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v49 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, v48);
  }
  *(_QWORD*)(a1 + 1512) = 0;
  *(_DWORD*)(a1 + 1536) = 0;

LABEL_141:
  *(_QWORD*)(a1 + 1464) = as_Variable_vtable;
  v50 = *(_DWORD*)(a1 + 1496);
  if (v50 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1472));
  }
  else {
    if (v50 != 4) {
      goto LABEL_150;
    }
    v51 = *(_QWORD**)(a1 + 1472);
    if ((*(_BYTE*)v51 & 1) != 0) {
      GameRoutine_25ec90(v51[2], *v51 & 0xFFFFFFFFFFFFFFFELL);
    }
    v52 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v52 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v52, v51);
  }
  *(_QWORD*)(a1 + 1472) = 0;
  *(_DWORD*)(a1 + 1496) = 0;

LABEL_150:
  *(_QWORD*)(a1 + 1424) = as_Variable_vtable;
  v53 = *(_DWORD*)(a1 + 1456);
  if (v53 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1432));
  }
  else {
    if (v53 != 4) {
      goto LABEL_159;
    }
    v54 = *(_QWORD**)(a1 + 1432);
    if ((*(_BYTE*)v54 & 1) != 0) {
      GameRoutine_25ec90(v54[2], *v54 & 0xFFFFFFFFFFFFFFFELL);
    }
    v55 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v55 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v55, v54);
  }
  *(_QWORD*)(a1 + 1432) = 0;
  *(_DWORD*)(a1 + 1456) = 0;

LABEL_159:
  *(_QWORD*)(a1 + 1384) = as_Variable_vtable;
  v56 = *(_DWORD*)(a1 + 1416);
  if (v56 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1392));
  }
  else {
    if (v56 != 4) {
      goto LABEL_168;
    }
    v57 = *(_QWORD**)(a1 + 1392);
    if ((*(_BYTE*)v57 & 1) != 0) {
      GameRoutine_25ec90(v57[2], *v57 & 0xFFFFFFFFFFFFFFFELL);
    }
    v58 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v58 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v58, v57);
  }
  *(_QWORD*)(a1 + 1392) = 0;
  *(_DWORD*)(a1 + 1416) = 0;

LABEL_168:
  *(_QWORD*)(a1 + 1344) = as_Variable_vtable;
  v59 = *(_DWORD*)(a1 + 1376);
  if (v59 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1352));
  }
  else {
    if (v59 != 4) {
      goto LABEL_177;
    }
    v60 = *(_QWORD**)(a1 + 1352);
    if ((*(_BYTE*)v60 & 1) != 0) {
      GameRoutine_25ec90(v60[2], *v60 & 0xFFFFFFFFFFFFFFFELL);
    }
    v61 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v61 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v61, v60);
  }
  *(_QWORD*)(a1 + 1352) = 0;
  *(_DWORD*)(a1 + 1376) = 0;

LABEL_177:
  *(_QWORD*)(a1 + 1304) = as_Variable_vtable;
  v62 = *(_DWORD*)(a1 + 1336);
  if (v62 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1312));
  }
  else {
    if (v62 != 4) {
      goto LABEL_186;
    }
    v63 = *(_QWORD**)(a1 + 1312);
    if ((*(_BYTE*)v63 & 1) != 0) {
      GameRoutine_25ec90(v63[2], *v63 & 0xFFFFFFFFFFFFFFFELL);
    }
    v64 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v64 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v64, v63);
  }
  *(_QWORD*)(a1 + 1312) = 0;
  *(_DWORD*)(a1 + 1336) = 0;

LABEL_186:
  *(_QWORD*)(a1 + 1264) = as_Variable_vtable;
  v65 = *(_DWORD*)(a1 + 1296);
  if (v65 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1272));
  }
  else {
    if (v65 != 4) {
      goto LABEL_195;
    }
    v66 = *(_QWORD**)(a1 + 1272);
    if ((*(_BYTE*)v66 & 1) != 0) {
      GameRoutine_25ec90(v66[2], *v66 & 0xFFFFFFFFFFFFFFFELL);
    }
    v67 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v67 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v67, v66);
  }
  *(_QWORD*)(a1 + 1272) = 0;
  *(_DWORD*)(a1 + 1296) = 0;

LABEL_195:
  *(_QWORD*)(a1 + 1224) = as_Variable_vtable;
  v68 = *(_DWORD*)(a1 + 1256);
  if (v68 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1232));
  }
  else {
    if (v68 != 4) {
      goto LABEL_204;
    }
    v69 = *(_QWORD**)(a1 + 1232);
    if ((*(_BYTE*)v69 & 1) != 0) {
      GameRoutine_25ec90(v69[2], *v69 & 0xFFFFFFFFFFFFFFFELL);
    }
    v70 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v70 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v70, v69);
  }
  *(_QWORD*)(a1 + 1232) = 0;
  *(_DWORD*)(a1 + 1256) = 0;

LABEL_204:
  *(_QWORD*)(a1 + 1184) = as_Variable_vtable;
  v71 = *(_DWORD*)(a1 + 1216);
  if (v71 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1192));
  }
  else {
    if (v71 != 4) {
      goto LABEL_213;
    }
    v72 = *(_QWORD**)(a1 + 1192);
    if ((*(_BYTE*)v72 & 1) != 0) {
      GameRoutine_25ec90(v72[2], *v72 & 0xFFFFFFFFFFFFFFFELL);
    }
    v73 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v73 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v73, v72);
  }
  *(_QWORD*)(a1 + 1192) = 0;
  *(_DWORD*)(a1 + 1216) = 0;

LABEL_213:
  *(_QWORD*)(a1 + 1144) = as_Variable_vtable;
  v74 = *(_DWORD*)(a1 + 1176);
  if (v74 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1152));
  }
  else {
    if (v74 != 4) {
      goto LABEL_222;
    }
    v75 = *(_QWORD**)(a1 + 1152);
    if ((*(_BYTE*)v75 & 1) != 0) {
      GameRoutine_25ec90(v75[2], *v75 & 0xFFFFFFFFFFFFFFFELL);
    }
    v76 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v76 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, v75);
  }
  *(_QWORD*)(a1 + 1152) = 0;
  *(_DWORD*)(a1 + 1176) = 0;

LABEL_222:
  *(_QWORD*)(a1 + 1104) = as_Variable_vtable;
  v77 = *(_DWORD*)(a1 + 1136);
  if (v77 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1112));
  }
  else {
    if (v77 != 4) {
      goto LABEL_231;
    }
    v78 = *(_QWORD**)(a1 + 1112);
    if ((*(_BYTE*)v78 & 1) != 0) {
      GameRoutine_25ec90(v78[2], *v78 & 0xFFFFFFFFFFFFFFFELL);
    }
    v79 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v79 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v79, v78);
  }
  *(_QWORD*)(a1 + 1112) = 0;
  *(_DWORD*)(a1 + 1136) = 0;

LABEL_231:
  *(_QWORD*)(a1 + 1064) = as_Variable_vtable;
  v80 = *(_DWORD*)(a1 + 1096);
  if (v80 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1072));
  }
  else {
    if (v80 != 4) {
      goto LABEL_240;
    }
    v81 = *(_QWORD**)(a1 + 1072);
    if ((*(_BYTE*)v81 & 1) != 0) {
      GameRoutine_25ec90(v81[2], *v81 & 0xFFFFFFFFFFFFFFFELL);
    }
    v82 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v82 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v82, v81);
  }
  *(_QWORD*)(a1 + 1072) = 0;
  *(_DWORD*)(a1 + 1096) = 0;

LABEL_240:
  *(_QWORD*)(a1 + 1024) = as_Variable_vtable;
  v83 = *(_DWORD*)(a1 + 1056);
  if (v83 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 1032));
  }
  else {
    if (v83 != 4) {
      goto LABEL_249;
    }
    v84 = *(_QWORD**)(a1 + 1032);
    if ((*(_BYTE*)v84 & 1) != 0) {
      GameRoutine_25ec90(v84[2], *v84 & 0xFFFFFFFFFFFFFFFELL);
    }
    v85 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v85 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v85, v84);
  }
  *(_QWORD*)(a1 + 1032) = 0;
  *(_DWORD*)(a1 + 1056) = 0;

LABEL_249:
  *(_QWORD*)(a1 + 984) = as_Variable_vtable;
  v86 = *(_DWORD*)(a1 + 1016);
  if (v86 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 992));
  }
  else {
    if (v86 != 4) {
      goto LABEL_258;
    }
    v87 = *(_QWORD**)(a1 + 992);
    if ((*(_BYTE*)v87 & 1) != 0) {
      GameRoutine_25ec90(v87[2], *v87 & 0xFFFFFFFFFFFFFFFELL);
    }
    v88 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v88 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v88, v87);
  }
  *(_QWORD*)(a1 + 992) = 0;
  *(_DWORD*)(a1 + 1016) = 0;

LABEL_258:
  *(_QWORD*)(a1 + 944) = as_Variable_vtable;
  v89 = *(_DWORD*)(a1 + 976);
  if (v89 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 952));
  }
  else {
    if (v89 != 4) {
      goto LABEL_267;
    }
    v90 = *(_QWORD**)(a1 + 952);
    if ((*(_BYTE*)v90 & 1) != 0) {
      GameRoutine_25ec90(v90[2], *v90 & 0xFFFFFFFFFFFFFFFELL);
    }
    v91 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v91 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v91, v90);
  }
  *(_QWORD*)(a1 + 952) = 0;
  *(_DWORD*)(a1 + 976) = 0;

LABEL_267:
  *(_QWORD*)(a1 + 904) = as_Variable_vtable;
  v92 = *(_DWORD*)(a1 + 936);
  if (v92 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 912));
  }
  else {
    if (v92 != 4) {
      goto LABEL_276;
    }
    v93 = *(_QWORD**)(a1 + 912);
    if ((*(_BYTE*)v93 & 1) != 0) {
      GameRoutine_25ec90(v93[2], *v93 & 0xFFFFFFFFFFFFFFFELL);
    }
    v94 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v94 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v94, v93);
  }
  *(_QWORD*)(a1 + 912) = 0;
  *(_DWORD*)(a1 + 936) = 0;

LABEL_276:
  *(_QWORD*)(a1 + 864) = as_Variable_vtable;
  v95 = *(_DWORD*)(a1 + 896);
  if (v95 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 872));
  }
  else {
    if (v95 != 4) {
      goto LABEL_285;
    }
    v96 = *(_QWORD**)(a1 + 872);
    if ((*(_BYTE*)v96 & 1) != 0) {
      GameRoutine_25ec90(v96[2], *v96 & 0xFFFFFFFFFFFFFFFELL);
    }
    v97 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v97 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v97, v96);
  }
  *(_QWORD*)(a1 + 872) = 0;
  *(_DWORD*)(a1 + 896) = 0;

LABEL_285:
  *(_QWORD*)(a1 + 824) = as_Variable_vtable;
  v98 = *(_DWORD*)(a1 + 856);
  if (v98 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 832));
  }
  else {
    if (v98 != 4) {
      goto LABEL_294;
    }
    v99 = *(_QWORD**)(a1 + 832);
    if ((*(_BYTE*)v99 & 1) != 0) {
      GameRoutine_25ec90(v99[2], *v99 & 0xFFFFFFFFFFFFFFFELL);
    }
    v100 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v100 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v100, v99);
  }
  *(_QWORD*)(a1 + 832) = 0;
  *(_DWORD*)(a1 + 856) = 0;

LABEL_294:
  *(_QWORD*)(a1 + 784) = as_Variable_vtable;
  v101 = *(_DWORD*)(a1 + 816);
  if (v101 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 792));
  }
  else {
    if (v101 != 4) {
      goto LABEL_303;
    }
    v102 = *(_QWORD**)(a1 + 792);
    if ((*(_BYTE*)v102 & 1) != 0) {
      GameRoutine_25ec90(v102[2], *v102 & 0xFFFFFFFFFFFFFFFELL);
    }
    v103 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v103 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v103, v102);
  }
  *(_QWORD*)(a1 + 792) = 0;
  *(_DWORD*)(a1 + 816) = 0;

LABEL_303:
  *(_QWORD*)(a1 + 744) = as_Variable_vtable;
  v104 = *(_DWORD*)(a1 + 776);
  if (v104 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 752));
  }
  else {
    if (v104 != 4) {
      goto LABEL_312;
    }
    v105 = *(_QWORD**)(a1 + 752);
    if ((*(_BYTE*)v105 & 1) != 0) {
      GameRoutine_25ec90(v105[2], *v105 & 0xFFFFFFFFFFFFFFFELL);
    }
    v106 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v106 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v106, v105);
  }
  *(_QWORD*)(a1 + 752) = 0;
  *(_DWORD*)(a1 + 776) = 0;

LABEL_312:
  *(_QWORD*)(a1 + 704) = as_Variable_vtable;
  v107 = *(_DWORD*)(a1 + 736);
  if (v107 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 712));
  }
  else {
    if (v107 != 4) {
      goto LABEL_321;
    }
    v108 = *(_QWORD**)(a1 + 712);
    if ((*(_BYTE*)v108 & 1) != 0) {
      GameRoutine_25ec90(v108[2], *v108 & 0xFFFFFFFFFFFFFFFELL);
    }
    v109 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v109 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v109, v108);
  }
  *(_QWORD*)(a1 + 712) = 0;
  *(_DWORD*)(a1 + 736) = 0;

LABEL_321:
  *(_QWORD*)(a1 + 664) = as_Variable_vtable;
  v110 = *(_DWORD*)(a1 + 696);
  if (v110 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 672));
  }
  else {
    if (v110 != 4) {
      goto LABEL_330;
    }
    v111 = *(_QWORD**)(a1 + 672);
    if ((*(_BYTE*)v111 & 1) != 0) {
      GameRoutine_25ec90(v111[2], *v111 & 0xFFFFFFFFFFFFFFFELL);
    }
    v112 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v112 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v112, v111);
  }
  *(_QWORD*)(a1 + 672) = 0;
  *(_DWORD*)(a1 + 696) = 0;

LABEL_330:
  *(_QWORD*)(a1 + 624) = as_Variable_vtable;
  v113 = *(_DWORD*)(a1 + 656);
  if (v113 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 632));
  }
  else {
    if (v113 != 4) {
      goto LABEL_339;
    }
    v114 = *(_QWORD**)(a1 + 632);
    if ((*(_BYTE*)v114 & 1) != 0) {
      GameRoutine_25ec90(v114[2], *v114 & 0xFFFFFFFFFFFFFFFELL);
    }
    v115 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v115 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v115, v114);
  }
  *(_QWORD*)(a1 + 632) = 0;
  *(_DWORD*)(a1 + 656) = 0;

LABEL_339:
  *(_QWORD*)(a1 + 584) = as_Variable_vtable;
  v116 = *(_DWORD*)(a1 + 616);
  if (v116 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 592));
  }
  else {
    if (v116 != 4) {
      goto LABEL_348;
    }
    v117 = *(_QWORD**)(a1 + 592);
    if ((*(_BYTE*)v117 & 1) != 0) {
      GameRoutine_25ec90(v117[2], *v117 & 0xFFFFFFFFFFFFFFFELL);
    }
    v118 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v118 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v118, v117);
  }
  *(_QWORD*)(a1 + 592) = 0;
  *(_DWORD*)(a1 + 616) = 0;

LABEL_348:
  *(_QWORD*)(a1 + 544) = as_Variable_vtable;
  v119 = *(_DWORD*)(a1 + 576);
  if (v119 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 552));
  }
  else {
    if (v119 != 4) {
      goto LABEL_357;
    }
    v120 = *(_QWORD**)(a1 + 552);
    if ((*(_BYTE*)v120 & 1) != 0) {
      GameRoutine_25ec90(v120[2], *v120 & 0xFFFFFFFFFFFFFFFELL);
    }
    v121 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v121 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v121, v120);
  }
  *(_QWORD*)(a1 + 552) = 0;
  *(_DWORD*)(a1 + 576) = 0;

LABEL_357:
  *(_QWORD*)(a1 + 504) = as_Variable_vtable;
  v122 = *(_DWORD*)(a1 + 536);
  if (v122 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 512));
  }
  else {
    if (v122 != 4) {
      goto LABEL_366;
    }
    v123 = *(_QWORD**)(a1 + 512);
    if ((*(_BYTE*)v123 & 1) != 0) {
      GameRoutine_25ec90(v123[2], *v123 & 0xFFFFFFFFFFFFFFFELL);
    }
    v124 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v124 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v124, v123);
  }
  *(_QWORD*)(a1 + 512) = 0;
  *(_DWORD*)(a1 + 536) = 0;

LABEL_366:
  *(_QWORD*)(a1 + 464) = as_Variable_vtable;
  v125 = *(_DWORD*)(a1 + 496);
  if (v125 == 7) {
    result = (_QWORD*)GameRoutine_192f90(*(_QWORD*)(a1 + 472));
  LABEL_374:
    *(_QWORD*)(a1 + 472) = 0;
    *(_DWORD*)(a1 + 496) = 0;
    goto LABEL_375;
  }
  if (v125 == 4) {
    v126 = *(_QWORD**)(a1 + 472);
    if ((*(_BYTE*)v126 & 1) != 0) {
      GameRoutine_25ec90(v126[2], *v126 & 0xFFFFFFFFFFFFFFFELL);
    }
    v127 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v127 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v127, v126);
    goto LABEL_374;
  }

LABEL_375:
  *(_QWORD*)a1 = as_HandlePtr_vtable;
  v128 = *(unsigned int*)(a1 + 8);
  if ((_DWORD)v128 != 0x2000) {
    v129 = &as_g_context_slots[2 * v128];
    if (*v129 != 0 && v129[1] == a1) {
      *v129 = 0;
      v129[1] = 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
