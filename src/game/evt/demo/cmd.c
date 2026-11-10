#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_2012b00[])();
extern __int64 (*game_evt_demo_Cmd_Manager_vtable[])();
extern __int64 GameData_21c96b8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_2236868;
_QWORD* Cmd_Manager_Destructor(_QWORD* result);

_QWORD* Cmd_Manager_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD* v27;
  __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _QWORD* v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;

  v1 = result;
  *result = game_evt_demo_Cmd_Manager_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if (result[4] != 0) {
    v3 = (_QWORD*)result[3];
    while (v3 != nullptr) {
      v5 = v3;
      v3 = (_QWORD*)*v3;
      v6 = (_QWORD*)v5[10];
      if (v6 == v5 + 6) {
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
      if ((v5[2] & 1) != 0 && v5[4] != 0) {
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v8 = 128;
        }
        else {
          v8 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v8);
      }
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v4 = 128;
      }
      else {
        v4 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
    }
    v9 = v1[2];
    v1[3] = 0;
    if (v9 != 0) {
      v10 = v9 & 7;
      if (v9 >= 8) {
        v12 = v9 & 0xFFFFFFFFFFFFFFF8LL;
        v11 = 0;
        do {
          *(_QWORD*)(v1[1] + 8 * v11) = 0;
          *(_QWORD*)(v1[1] + 8 * v11 + 8) = 0;
          *(_QWORD*)(v1[1] + 8 * v11 + 16) = 0;
          *(_QWORD*)(v1[1] + 8 * v11 + 24) = 0;
          *(_QWORD*)(v1[1] + 8 * v11 + 32) = 0;
          *(_QWORD*)(v1[1] + 8 * v11 + 40) = 0;
          *(_QWORD*)(v1[1] + 8 * v11 + 48) = 0;
          v13 = v1[1] + 8 * v11;
          v11 += 8;
          *(_QWORD*)(v13 + 56) = 0;
        } while (v12 != v11);
      }
      else {
        v11 = 0;
      }
      if (v10 != 0) {
        v14 = 8 * v11;
        do {
          --v10;
          *(_QWORD*)(v1[1] + v14) = 0;
          v14 += 8;
        } while (v10 != 0);
      }
    }
    v1[4] = 0;
  }
  if (v1[9] != 0) {
    v15 = (_QWORD*)v1[8];
    while (v15 != nullptr) {
      v17 = v15;
      v15 = (_QWORD*)*v15;
      v18 = (_QWORD*)v17[10];
      if (v18 == v17 + 6) {
        v19 = 32;
      }
      else {
        if (v18 == nullptr) {
          goto LABEL_40;
        }
        v19 = 40;
      }
      (*(void (**)(__int64))(*v18 + v19))((__int64)v18);
    LABEL_40:
      if ((v17[2] & 1) != 0 && v17[4] != 0) {
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v20 = 128;
        }
        else {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v20);
      }
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v16 = 128;
      }
      else {
        v16 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v16);
    }
    v21 = v1[7];
    v1[8] = 0;
    if (v21 != 0) {
      v22 = v21 & 7;
      if (v21 >= 8) {
        v24 = v21 & 0xFFFFFFFFFFFFFFF8LL;
        v23 = 0;
        do {
          *(_QWORD*)(v1[6] + 8 * v23) = 0;
          *(_QWORD*)(v1[6] + 8 * v23 + 8) = 0;
          *(_QWORD*)(v1[6] + 8 * v23 + 16) = 0;
          *(_QWORD*)(v1[6] + 8 * v23 + 24) = 0;
          *(_QWORD*)(v1[6] + 8 * v23 + 32) = 0;
          *(_QWORD*)(v1[6] + 8 * v23 + 40) = 0;
          *(_QWORD*)(v1[6] + 8 * v23 + 48) = 0;
          v25 = v1[6] + 8 * v23;
          v23 += 8;
          *(_QWORD*)(v25 + 56) = 0;
        } while (v24 != v23);
      }
      else {
        v23 = 0;
      }
      if (v22 != 0) {
        v26 = 8 * v23;
        do {
          --v22;
          *(_QWORD*)(v1[6] + v26) = 0;
          v26 += 8;
        } while (v22 != 0);
      }
    }
    v1[9] = 0;
  }
  v27 = (_QWORD*)v1[8];
  while (v27 != nullptr) {
    v29 = v27;
    v27 = (_QWORD*)*v27;
    v30 = (_QWORD*)v29[10];
    if (v30 == v29 + 6) {
      v31 = 32;
    }
    else {
      if (v30 == nullptr) {
        goto LABEL_66;
      }
      v31 = 40;
    }
    (*(void (**)(__int64))(*v30 + v31))((__int64)v30);
  LABEL_66:
    if ((v29[2] & 1) != 0 && v29[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v32 = 128;
      }
      else {
        v32 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v32);
    }
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
      v28 = 128;
    }
    else {
      v28 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v28);
  }
  v33 = v1[6];
  v1[6] = 0;
  if (v33 != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v34 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v34);
  }
  v35 = (_QWORD*)v1[3];
  while (v35 != nullptr) {
    v37 = v35;
    v35 = (_QWORD*)*v35;
    v38 = (_QWORD*)v37[10];
    if (v38 == v37 + 6) {
      v39 = 32;
    }
    else {
      if (v38 == nullptr) {
        goto LABEL_87;
      }
      v39 = 40;
    }
    (*(void (**)(__int64))(*v38 + v39))((__int64)v38);
  LABEL_87:
    if ((v37[2] & 1) != 0 && v37[4] != 0) {
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v40 = 128;
      }
      else {
        v40 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v40);
    }
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
      v36 = 128;
    }
    else {
      v36 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v36);
  }
  v41 = v1[1];
  v1[1] = 0;
  if (v41 != 0) {
    v42 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v42 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v42);
  }
  *v1 = GameData_2012b00;
  if ((_QWORD*)GameData_21c96b8 == v1) {
    GameData_21c96b8 = 0;
    GameData_2236868 = 0;
  }
  return result;
}

#pragma GCC visibility pop
