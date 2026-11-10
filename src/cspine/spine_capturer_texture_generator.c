#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_2010240[])();
extern __int64 (*cspine_SpineCapturerTexture_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__attribute__((swiftcall)) void
SpineCapturerTextureGenerator_Unknown2(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void

SpineCapturerTextureGenerator_Unknown2(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* result;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 136, 16, 0);
  v2[1] = 0;
  v2[2] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  *v2 = GameData_2010240;
  v2[4] = 0xFFFFFFFFLL;
  v2[5] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  a1[1] = v2;
  v2[3] = cspine_SpineCapturerTexture_vtable;
  result = v2 + 3;
  *a1 = result;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
