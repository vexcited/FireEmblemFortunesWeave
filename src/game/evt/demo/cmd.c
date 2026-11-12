#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_2012b00[])();
extern __int64 (*game_evt_demo_Cmd_Manager_vtable[])();
extern __int64 GameData_21c96b8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2236868;
_QWORD*
Cmd_Manager_Destructor_alt1(_QWORD* result) __asm__("Cmd_Manager_Destructor");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Cmd_Manager_Destructor(_QWORD* a1);

void Cmd_Manager_Destructor(_QWORD* a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  _QWORD* v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;

  *a1 = game_evt_demo_Cmd_Manager_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if (a1[4] != 0) {
    v3 = (_QWORD*)a1[3];
    while (v3 != nullptr) {
      v5 = (__int64)v3;
      v3 = (_QWORD*)*v3;
      v6 = *(_QWORD**)(v5 + 80);
      if (v6 == (_QWORD*)(v5 + 48)) {
        v7 = 32;
      }
      else {
        if (v6 == nullptr) {
          goto LABEL_13;
        }
        v7 = 40;
      }
      (*(void (**)(__int64))(*v6 + v7))((__int64)v6);
    LABEL_13:
      if ((*(_BYTE*)(v5 + 16) & 1) != 0) {
        v8 = *(_QWORD*)(v5 + 32);
        if (v8 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v9, v8);
        }
      }
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v4 = 128;
      }
      else {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v4, v5);
    }
    v10 = a1[2];
    a1[3] = 0;
    if (v10 != 0) {
      v11 = v10 & 7;
      if (v10 >= 8) {
        v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        v12 = 0;
        do {
          *(_QWORD*)(a1[1] + 8 * v12) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 8) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 16) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 24) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 32) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 40) = 0;
          *(_QWORD*)(a1[1] + 8 * v12 + 48) = 0;
          v14 = a1[1] + 8 * v12;
          v12 += 8;
          *(_QWORD*)(v14 + 56) = 0;
        } while (v13 != v12);
      }
      else {
        v12 = 0;
      }
      if (v11 != 0) {
        v15 = 8 * v12;
        do {
          --v11;
          *(_QWORD*)(a1[1] + v15) = 0;
          v15 += 8;
        } while (v11 != 0);
      }
    }
    a1[4] = 0;
  }
  if (a1[9] != 0) {
    v16 = (_QWORD*)a1[8];
    while (v16 != nullptr) {
      v18 = (__int64)v16;
      v16 = (_QWORD*)*v16;
      v19 = *(_QWORD**)(v18 + 80);
      if (v19 == (_QWORD*)(v18 + 48)) {
        v20 = 32;
      }
      else {
        if (v19 == nullptr) {
          goto LABEL_40;
        }
        v20 = 40;
      }
      (*(void (**)(__int64))(*v19 + v20))((__int64)v19);
    LABEL_40:
      if ((*(_BYTE*)(v18 + 16) & 1) != 0) {
        v21 = *(_QWORD*)(v18 + 32);
        if (v21 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
            v22 = 128;
          }
          else {
            v22 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v22, v21);
        }
      }
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v17 = 128;
      }
      else {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v17, v18);
    }
    v23 = a1[7];
    a1[8] = 0;
    if (v23 != 0) {
      v24 = v23 & 7;
      if (v23 >= 8) {
        v26 = v23 & 0xFFFFFFFFFFFFFFF8LL;
        v25 = 0;
        do {
          *(_QWORD*)(a1[6] + 8 * v25) = 0;
          *(_QWORD*)(a1[6] + 8 * v25 + 8) = 0;
          *(_QWORD*)(a1[6] + 8 * v25 + 16) = 0;
          *(_QWORD*)(a1[6] + 8 * v25 + 24) = 0;
          *(_QWORD*)(a1[6] + 8 * v25 + 32) = 0;
          *(_QWORD*)(a1[6] + 8 * v25 + 40) = 0;
          *(_QWORD*)(a1[6] + 8 * v25 + 48) = 0;
          v27 = a1[6] + 8 * v25;
          v25 += 8;
          *(_QWORD*)(v27 + 56) = 0;
        } while (v26 != v25);
      }
      else {
        v25 = 0;
      }
      if (v24 != 0) {
        v28 = 8 * v25;
        do {
          --v24;
          *(_QWORD*)(a1[6] + v28) = 0;
          v28 += 8;
        } while (v24 != 0);
      }
    }
    a1[9] = 0;
  }
  v29 = (_QWORD*)a1[8];
  while (v29 != nullptr) {
    v31 = (__int64)v29;
    v29 = (_QWORD*)*v29;
    v32 = *(_QWORD**)(v31 + 80);
    if (v32 == (_QWORD*)(v31 + 48)) {
      v33 = 32;
    }
    else {
      if (v32 == nullptr) {
        goto LABEL_66;
      }
      v33 = 40;
    }
    (*(void (**)(__int64))(*v32 + v33))((__int64)v32);
  LABEL_66:
    if ((*(_BYTE*)(v31 + 16) & 1) != 0) {
      v34 = *(_QWORD*)(v31 + 32);
      if (v34 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v35 = 128;
        }
        else {
          v35 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v35, v34);
      }
    }
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
      v30 = 128;
    }
    else {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v30, v31);
  }
  v36 = a1[6];
  a1[6] = 0;
  if (v36 != 0) {
    v37 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v37 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v37, v36);
  }
  v38 = (_QWORD*)a1[3];
  while (v38 != nullptr) {
    v40 = (__int64)v38;
    v38 = (_QWORD*)*v38;
    v41 = *(_QWORD**)(v40 + 80);
    if (v41 == (_QWORD*)(v40 + 48)) {
      v42 = 32;
    }
    else {
      if (v41 == nullptr) {
        goto LABEL_87;
      }
      v42 = 40;
    }
    (*(void (**)(__int64))(*v41 + v42))((__int64)v41);
  LABEL_87:
    if ((*(_BYTE*)(v40 + 16) & 1) != 0) {
      v43 = *(_QWORD*)(v40 + 32);
      if (v43 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v44 = 128;
        }
        else {
          v44 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v44, v43);
      }
    }
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
      v39 = 128;
    }
    else {
      v39 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v39, v40);
  }
  v45 = a1[1];
  a1[1] = 0;
  if (v45 != 0) {
    v46 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v46 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v46, v45);
  }
  *a1 = GameData_2012b00;
  if ((_QWORD*)GameData_21c96b8 == a1) {
    GameData_21c96b8 = 0;
    GameData_2236868 = 0;
  }
}

#pragma GCC visibility pop
