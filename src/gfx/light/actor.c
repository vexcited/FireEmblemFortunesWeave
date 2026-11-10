#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*gfx_light_Actor_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 Actor_DeletingDestructor(_QWORD* a1);
extern _UNKNOWN* GameData_212c2a0;
long double Actor_Unknown2();

__int64 Actor_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;

  *a1 = gfx_light_Actor_vtable;
  a1[1] = 0;
  v2 = a1[2];
  a1[2] = 0;
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak(v2);
    v3 = a1[2];
    a1[3] = 0;
    if (v3 != 0) {
      std___1___shared_weak_count___release_weak(v3);
    }
  }
  else {
    a1[3] = 0;
  }
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4);
}

long double Actor_Unknown2() { return *(long double*)GameData_212c2a0; }

#pragma GCC visibility pop
