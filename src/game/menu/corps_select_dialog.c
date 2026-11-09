#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_133e4e0(_QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_menu_anonymous_CorpsSelectDialogItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e0c8[6];
__int64 CorpsSelectDialog_Unknown128(__int64 result);
__int64 CorpsSelectDialog_Unknown100(__int64 a1);

__int64 CorpsSelectDialog_Unknown128(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(__int64**)(result + 1552);
  v2 = *(__int64**)(result + 1560);
  if (v1 != v2) {
    v3 = result;
    v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v5 = fw_memory_HeapManager_Allocate(*v4, 104, 16, 0);
      v6 = *v1++;
      v7 = v5;
      v8 = GameRoutine_133e4e0(v6);
      *(_WORD*)(v7 + 16) = 0;
      *(_DWORD*)(v7 + 40) = 0;
      *(_QWORD*)(v7 + 48) = 0;
      *(_QWORD*)(v7 + 56) = 0;
      *(_QWORD*)(v7 + 64) = 0;
      *(_QWORD*)(v7 + 72) = 0;
      *(_WORD*)(v7 + 80) = 257;
      *(_BYTE*)(v7 + 82) = 1;
      *(_QWORD*)v7 = game_menu_anonymous_CorpsSelectDialogItem_vtable;
      *(_QWORD*)(v7 + 8) = 0;
      *(_QWORD*)(v7 + 88) = v8;
      *(_QWORD*)(v7 + 96) = v6;
      result = GameRoutine_16e0c00(v3, v7);
    } while (v1 != v2);
  }
  return result;
}

__int64 CorpsSelectDialog_Unknown100(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212e008[0], GameData_212e0c8[0], 0);
    if (v3 != 0) {
      v4 = v3;
      v5 = *(_QWORD*)(a1 + 1536);
      if (v5 != 0) {
        v7 = *(_QWORD*)(v4 + 88);
        (*(void (**)(__int64, __int64*))(*(_QWORD*)v5 + 48LL))(v5, &v7);
      }
    }
  }
  return 2;
}

#pragma GCC visibility pop
