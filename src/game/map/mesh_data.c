#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MeshData_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__n128 MeshData_DeletingDestructor(_QWORD* a1);

__n128 MeshData_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  void (***v6)(_QWORD);
  void (***v7)(_QWORD);
  void (***v8)(_QWORD);
  void (***v9)(_QWORD);
  void (**v10)(_QWORD);
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v1 = a1[15];
  *a1 = game_map_MeshData_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[16] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = (void (***)(_QWORD))a1[12];
  if (v6 != nullptr) {
    v7 = (void (***)(_QWORD))a1[13];
    if (v6 == v7) {
      goto LABEL_11;
    }
    v8 = v7 - 8;
    v9 = v7 - 8;
    do {
      v10 = *v9;
      v9 -= 8;
      (*v10)(v8);
      v11 = v8 == v6;
      v8 = v9;
    } while (!v11);
    v12 = a1[12];
    a1[13] = v6;
    if (v12 != 0) {
    LABEL_11:
      v13 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v13 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
    }
  }
  v14 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v14 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v14);
}

#pragma GCC visibility pop
