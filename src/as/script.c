#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_192f90(_QWORD);
__int64 GameRoutine_25ec90(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _QWORD as_g_context_slots[16384];
extern __int64 (*as_HandlePtr_vtable[])();
extern __int64 (*as_Script_vtable[])();
extern __int64 GameData_212bfd8;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Script_Destructor(__int64 result);

__int64 Script_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;
  _QWORD* v4;
  __int64 v5;
  int v6;
  _QWORD* v7;
  __int64 v8;
  int v9;
  _QWORD* v10;
  __int64 v11;
  int v12;
  _QWORD* v13;
  __int64 v14;
  int v15;
  _QWORD* v16;
  __int64 v17;
  int v18;
  _QWORD* v19;
  __int64 v20;
  int v21;
  _QWORD* v22;
  __int64 v23;
  int v24;
  _QWORD* v25;
  __int64 v26;
  int v27;
  _QWORD* v28;
  __int64 v29;
  int v30;
  _QWORD* v31;
  __int64 v32;
  int v33;
  _QWORD* v34;
  __int64 v35;
  int v36;
  _QWORD* v37;
  __int64 v38;
  int v39;
  _QWORD* v40;
  __int64 v41;
  int v42;
  _QWORD* v43;
  __int64 v44;
  int v45;
  _QWORD* v46;
  __int64 v47;
  int v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  _QWORD* v52;

  v1 = result;
  *(_QWORD*)result = as_Script_vtable;
  v2 = GameData_212bfd8;
  *(_QWORD*)(result + 928) = GameData_212bfd8 + 16;
  v3 = *(_DWORD*)(result + 960);
  if (v3 == 7) {
    result = GameRoutine_192f90(*(_QWORD*)(result + 936));
  }
  else {
    if (v3 != 4) {
      goto LABEL_10;
    }
    v4 = *(_QWORD**)(result + 936);
    if ((*(_BYTE*)v4 & 1) != 0) {
      GameRoutine_25ec90(v4[2], *v4 & 0xFFFFFFFFFFFFFFFELL);
    }
    v5 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
  }
  *(_QWORD*)(v1 + 936) = 0;
  *(_DWORD*)(v1 + 960) = 0;

LABEL_10:
  *(_QWORD*)(v1 + 888) = v2 + 16;
  v6 = *(_DWORD*)(v1 + 920);
  if (v6 == 7) {
    result = GameRoutine_192f90(*(_QWORD*)(v1 + 896));
  }
  else {
    if (v6 != 4) {
      goto LABEL_19;
    }
    v7 = *(_QWORD**)(v1 + 896);
    if ((*(_BYTE*)v7 & 1) != 0) {
      GameRoutine_25ec90(v7[2], *v7 & 0xFFFFFFFFFFFFFFFELL);
    }
    v8 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v8 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v7);
  }
  *(_QWORD*)(v1 + 896) = 0;
  *(_DWORD*)(v1 + 920) = 0;

LABEL_19:
  *(_QWORD*)(v1 + 848) = v2 + 16;
  v9 = *(_DWORD*)(v1 + 880);
  if (v9 == 7) {
    result = GameRoutine_192f90(*(_QWORD*)(v1 + 856));
  }
  else {
    if (v9 != 4) {
      goto LABEL_28;
    }
    v10 = *(_QWORD**)(v1 + 856);
    if ((*(_BYTE*)v10 & 1) != 0) {
      GameRoutine_25ec90(v10[2], *v10 & 0xFFFFFFFFFFFFFFFELL);
    }
    v11 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v11 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v10);
  }
  *(_QWORD*)(v1 + 856) = 0;
  *(_DWORD*)(v1 + 880) = 0;

LABEL_28:
  *(_QWORD*)(v1 + 808) = v2 + 16;
  v12 = *(_DWORD*)(v1 + 840);
  if (v12 == 7) {
    result = GameRoutine_192f90(*(_QWORD*)(v1 + 816));
  }
  else {
    if (v12 != 4) {
      goto LABEL_37;
    }
    v13 = *(_QWORD**)(v1 + 816);
    if ((*(_BYTE*)v13 & 1) != 0) {
      GameRoutine_25ec90(v13[2], *v13 & 0xFFFFFFFFFFFFFFFELL);
    }
    v14 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v14 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v13);
  }
  *(_QWORD*)(v1 + 816) = 0;
  *(_DWORD*)(v1 + 840) = 0;

LABEL_37:
  *(_QWORD*)(v1 + 768) = v2 + 16;
  v15 = *(_DWORD*)(v1 + 800);
  if (v15 == 7) {
    result = GameRoutine_192f90(*(_QWORD*)(v1 + 776));
  }
  else {
    if (v15 != 4) {
      goto LABEL_46;
    }
    v16 = *(_QWORD**)(v1 + 776);
    if ((*(_BYTE*)v16 & 1) != 0) {
      GameRoutine_25ec90(v16[2], *v16 & 0xFFFFFFFFFFFFFFFELL);
    }
    v17 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v17 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
  }
  *(_QWORD*)(v1 + 776) = 0;
  *(_DWORD*)(v1 + 800) = 0;

LABEL_46:
  *(_QWORD*)(v1 + 728) = v2 + 16;
  v18 = *(_DWORD*)(v1 + 760);
  if (v18 == 7) {
    result = GameRoutine_192f90(*(_QWORD*)(v1 + 736));
  }
  else {
    if (v18 != 4) {
      goto LABEL_55;
    }
    v19 = *(_QWORD**)(v1 + 736);
    if ((*(_BYTE*)v19 & 1) != 0) {
      GameRoutine_25ec90(v19[2], *v19 & 0xFFFFFFFFFFFFFFFELL);
    }
    v20 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v20 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v19);
  }
  *(_QWORD*)(v1 + 736) = 0;
  *(_DWORD*)(v1 + 760) = 0;

LABEL_55:
  *(_QWORD*)(v1 + 688) = v2 + 16;
  v21 = *(_DWORD*)(v1 + 720);
  if (v21 == 7) {
    result = GameRoutine_192f90(*(_QWORD*)(v1 + 696));
  }
  else {
    if (v21 != 4) {
      goto LABEL_64;
    }
    v22 = *(_QWORD**)(v1 + 696);
    if ((*(_BYTE*)v22 & 1) != 0) {
      GameRoutine_25ec90(v22[2], *v22 & 0xFFFFFFFFFFFFFFFELL);
    }
    v23 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v23 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v22);
  }
  *(_QWORD*)(v1 + 696) = 0;
  *(_DWORD*)(v1 + 720) = 0;

LABEL_64:
  *(_QWORD*)(v1 + 648) = v2 + 16;
  v24 = *(_DWORD*)(v1 + 680);
  if (v24 == 7) {
    result = GameRoutine_192f90(*(_QWORD*)(v1 + 656));
  }
  else {
    if (v24 != 4) {
      goto LABEL_73;
    }
    v25 = *(_QWORD**)(v1 + 656);
    if ((*(_BYTE*)v25 & 1) != 0) {
      GameRoutine_25ec90(v25[2], *v25 & 0xFFFFFFFFFFFFFFFELL);
    }
    v26 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v26 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v25);
  }
  *(_QWORD*)(v1 + 656) = 0;
  *(_DWORD*)(v1 + 680) = 0;

LABEL_73:
  *(_QWORD*)(v1 + 608) = v2 + 16;
  v27 = *(_DWORD*)(v1 + 640);
  if (v27 == 7) {
    result = GameRoutine_192f90(*(_QWORD*)(v1 + 616));
  }
  else {
    if (v27 != 4) {
      goto LABEL_82;
    }
    v28 = *(_QWORD**)(v1 + 616);
    if ((*(_BYTE*)v28 & 1) != 0) {
      GameRoutine_25ec90(v28[2], *v28 & 0xFFFFFFFFFFFFFFFELL);
    }
    v29 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v29 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, v28);
  }
  *(_QWORD*)(v1 + 616) = 0;
  *(_DWORD*)(v1 + 640) = 0;

LABEL_82:
  *(_QWORD*)(v1 + 568) = v2 + 16;
  v30 = *(_DWORD*)(v1 + 600);
  if (v30 == 7) {
    result = GameRoutine_192f90(*(_QWORD*)(v1 + 576));
  }
  else {
    if (v30 != 4) {
      goto LABEL_91;
    }
    v31 = *(_QWORD**)(v1 + 576);
    if ((*(_BYTE*)v31 & 1) != 0) {
      GameRoutine_25ec90(v31[2], *v31 & 0xFFFFFFFFFFFFFFFELL);
    }
    v32 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v32 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v31);
  }
  *(_QWORD*)(v1 + 576) = 0;
  *(_DWORD*)(v1 + 600) = 0;

LABEL_91:
  *(_QWORD*)(v1 + 528) = v2 + 16;
  v33 = *(_DWORD*)(v1 + 560);
  if (v33 == 7) {
    result = GameRoutine_192f90(*(_QWORD*)(v1 + 536));
  }
  else {
    if (v33 != 4) {
      goto LABEL_100;
    }
    v34 = *(_QWORD**)(v1 + 536);
    if ((*(_BYTE*)v34 & 1) != 0) {
      GameRoutine_25ec90(v34[2], *v34 & 0xFFFFFFFFFFFFFFFELL);
    }
    v35 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v35 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, v34);
  }
  *(_QWORD*)(v1 + 536) = 0;
  *(_DWORD*)(v1 + 560) = 0;

LABEL_100:
  *(_QWORD*)(v1 + 488) = v2 + 16;
  v36 = *(_DWORD*)(v1 + 520);
  if (v36 == 7) {
    result = GameRoutine_192f90(*(_QWORD*)(v1 + 496));
  }
  else {
    if (v36 != 4) {
      goto LABEL_109;
    }
    v37 = *(_QWORD**)(v1 + 496);
    if ((*(_BYTE*)v37 & 1) != 0) {
      GameRoutine_25ec90(v37[2], *v37 & 0xFFFFFFFFFFFFFFFELL);
    }
    v38 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v38 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, v37);
  }
  *(_QWORD*)(v1 + 496) = 0;
  *(_DWORD*)(v1 + 520) = 0;

LABEL_109:
  *(_QWORD*)(v1 + 448) = v2 + 16;
  v39 = *(_DWORD*)(v1 + 480);
  if (v39 == 7) {
    result = GameRoutine_192f90(*(_QWORD*)(v1 + 456));
  }
  else {
    if (v39 != 4) {
      goto LABEL_118;
    }
    v40 = *(_QWORD**)(v1 + 456);
    if ((*(_BYTE*)v40 & 1) != 0) {
      GameRoutine_25ec90(v40[2], *v40 & 0xFFFFFFFFFFFFFFFELL);
    }
    v41 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v41 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, v40);
  }
  *(_QWORD*)(v1 + 456) = 0;
  *(_DWORD*)(v1 + 480) = 0;

LABEL_118:
  *(_QWORD*)(v1 + 408) = v2 + 16;
  v42 = *(_DWORD*)(v1 + 440);
  if (v42 == 7) {
    result = GameRoutine_192f90(*(_QWORD*)(v1 + 416));
  }
  else {
    if (v42 != 4) {
      goto LABEL_127;
    }
    v43 = *(_QWORD**)(v1 + 416);
    if ((*(_BYTE*)v43 & 1) != 0) {
      GameRoutine_25ec90(v43[2], *v43 & 0xFFFFFFFFFFFFFFFELL);
    }
    v44 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v44 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v44, v43);
  }
  *(_QWORD*)(v1 + 416) = 0;
  *(_DWORD*)(v1 + 440) = 0;

LABEL_127:
  *(_QWORD*)(v1 + 368) = v2 + 16;
  v45 = *(_DWORD*)(v1 + 400);
  if (v45 == 7) {
    result = GameRoutine_192f90(*(_QWORD*)(v1 + 376));
  }
  else {
    if (v45 != 4) {
      goto LABEL_136;
    }
    v46 = *(_QWORD**)(v1 + 376);
    if ((*(_BYTE*)v46 & 1) != 0) {
      GameRoutine_25ec90(v46[2], *v46 & 0xFFFFFFFFFFFFFFFELL);
    }
    v47 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v47 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v47, v46);
  }
  *(_QWORD*)(v1 + 376) = 0;
  *(_DWORD*)(v1 + 400) = 0;

LABEL_136:
  *(_QWORD*)(v1 + 328) = v2 + 16;
  v48 = *(_DWORD*)(v1 + 360);
  if (v48 == 7) {
    result = GameRoutine_192f90(*(_QWORD*)(v1 + 336));
  LABEL_144:
    *(_QWORD*)(v1 + 336) = 0;
    *(_DWORD*)(v1 + 360) = 0;
    goto LABEL_145;
  }
  if (v48 == 4) {
    v49 = *(_QWORD**)(v1 + 336);
    if ((*(_BYTE*)v49 & 1) != 0) {
      GameRoutine_25ec90(v49[2], *v49 & 0xFFFFFFFFFFFFFFFELL);
    }
    v50 = 368;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 440LL) == 0) {
      v50 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v50, v49);
    goto LABEL_144;
  }

LABEL_145:
  *(_QWORD*)v1 = as_HandlePtr_vtable;
  v51 = *(unsigned int*)(v1 + 8);
  if ((_DWORD)v51 != 0x2000) {
    v52 = &as_g_context_slots[2 * v51];
    if (*v52 != 0 && v52[1] == v1) {
      *v52 = 0;
      v52[1] = 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
