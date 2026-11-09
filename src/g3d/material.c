#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 gfx_shader_Material_Destroy_Material(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*g3d_Material_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Material_Destructor(_QWORD* a1);
__int64 Material_DeletingDestructor(_QWORD* a1);

__int64 Material_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = a1[53];
  *a1 = g3d_Material_vtable;
  if (v1 != 0) {
    v3 = a1[54];
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_12;
    }
    v5 = a1[54];
    do {
      v6 = *(_BYTE*)(v5 - 24);
      v5 -= 24;
      if ((v6 & 1) != 0) {
        v7 = *(_QWORD*)(v3 - 8);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v8, v7);
        }
      }
      v3 = v5;
    } while (v5 != v1);
    v9 = a1[53];
    a1[54] = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v1);
    }
  }
  return gfx_shader_Material_Destroy_Material(a1);
}

__int64 Material_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[53];
  *a1 = g3d_Material_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[54];
    if (v1 == v4) {
      goto LABEL_12;
    }
    v5 = a1[54];
    do {
      v6 = *(_BYTE*)(v5 - 24);
      v5 -= 24;
      if ((v6 & 1) != 0) {
        v7 = *(_QWORD*)(v4 - 8);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v7);
        }
      }
      v4 = v5;
    } while (v5 != v1);
    v9 = a1[53];
    a1[54] = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v1);
    }
  }
  gfx_shader_Material_Destroy_Material(a1);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11, a1);
}

#pragma GCC visibility pop
