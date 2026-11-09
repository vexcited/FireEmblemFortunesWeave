#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f9e298[])();
extern __int64 (*game_map_MapObjectManager_vtable[])();
extern __int64 GameData_21cd0d8;
extern __int64 GameData_21ec7c8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21ec958;
_QWORD* MapObjectManager_Destructor(_QWORD* result);
__int64 MapObjectManager_DeletingDestructor(_QWORD* a1);

_QWORD* MapObjectManager_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  _QWORD* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  void (***v27)(_QWORD);
  void (***v28)(_QWORD);
  void (***v29)(_QWORD);
  void (***v30)(_QWORD);
  void (**v31)(_QWORD);
  bool v32;
  void (***v33)(_QWORD);
  __int64 v34;
  __int64 v35;

  v1 = result;
  *result = game_map_MapObjectManager_vtable;
  v2 = (_QWORD*)GameData_21ec7c8;
  if (GameData_21ec7c8 != 0) {
    v3 = *(_QWORD**)(GameData_21ec7c8 + 160);
    v4 = fw_memory_g_heap_manager_ptr;
    if (v3 != nullptr) {
      do {
        v5 = (_QWORD*)*v3;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6, v3);
        v3 = v5;
      } while (v5 != nullptr);
    }
    v7 = v2[18];
    v2[18] = 0;
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
    }
    v9 = (_QWORD*)v2[15];
    if (v9 != nullptr) {
      do {
        v10 = (_QWORD*)*v9;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v11, v9);
        v9 = v10;
      } while (v10 != nullptr);
    }
    v12 = v2[13];
    v2[13] = 0;
    if (v12 != 0) {
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v13, v12);
    }
    v14 = (_QWORD*)v2[10];
    if (v14 != nullptr) {
      do {
        v16 = (_QWORD*)*v14;
        v17 = v14[3];
        if (v17 != 0) {
          v18 = *(_QWORD*)v4;
          v14[4] = v17;
          if (*(_QWORD*)(v18 + 200) != 0) {
            v19 = 128;
          }
          else {
            v19 = 56;
          }
          nn_mem_StandardAllocator_Free(v18 + v19, v17);
        }
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v15 = 128;
        }
        else {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v15, v14);
        v14 = v16;
      } while (v16 != nullptr);
    }
    v20 = v2[8];
    v2[8] = 0;
    if (v20 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v21, v20);
    }
    v22 = (_QWORD*)v2[5];
    if (v22 != nullptr) {
      do {
        v23 = (_QWORD*)*v22;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v24 = 128;
        }
        else {
          v24 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v24, v22);
        v22 = v23;
      } while (v23 != nullptr);
    }
    v25 = v2[3];
    v2[3] = 0;
    if (v25 != 0) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v26 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v26, v25);
    }
    v27 = (void (***)(_QWORD))*v2;
    if (*v2 != 0) {
      v28 = (void (***)(_QWORD))v2[1];
      if (v27 == v28) {
        goto LABEL_50;
      }
      v29 = v28 - 22;
      v30 = v28 - 22;
      do {
        v31 = *v30;
        v30 -= 22;
        (*v31)(v29);
        v32 = v29 == v27;
        v29 = v30;
      } while (!v32);
      v33 = (void (***)(_QWORD))*v2;
      v2[1] = v27;
      v27 = v33;
      if (v33 != nullptr) {
      LABEL_50:
        v34 = 128;
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
          v34 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v34, v27);
      }
    }
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v35 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v35, v2);
    GameData_21ec7c8 = 0;
  }
  *v1 = GameData_1f9e298;
  if ((_QWORD*)GameData_21cd0d8 == v1) {
    GameData_21cd0d8 = 0;
    GameData_21ec958 = 0;
  }
  return result;
}

__int64 MapObjectManager_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  MapObjectManager_Destructor(a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

#pragma GCC visibility pop
