#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1469c40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1952d00(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*game_facility_SceneCharacterBuilder_LoadStateHide_vtable[])();
extern __int64 (*game_facility_SceneCharacterBuilder_LoadStateIdle_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 LoadStateInitialize_DeletingDestructor(__int64 a1, __int64 a2);
_QWORD* LoadStateInitialize_Unknown2(__int64 a1, __int64 a2);

__int64 LoadStateInitialize_DeletingDestructor(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64* v6;

  v2 = *(_QWORD*)(a2 + 8);
  if (v2 == 0) {
    return 0;
  }
  v3 = *(_QWORD*)(v2 + 8);
  v5 = 0;
  v6 = &v5;
  GameRoutine_1469c40(&v6, &v6, v3);
  if (v5 != 0) {
    return *(_BYTE*)(v5 + 342) & 1;
  }
  else {
    return 0;
  }
}

_QWORD* LoadStateInitialize_Unknown2(__int64 a1, __int64 a2)
{
  int v2;
  _QWORD* result;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _BYTE v8[32];
  _BYTE* v9;

  v2 = *(unsigned __int8*)(a1 + 8);
  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  v5 = result;
  if (v2 == 1) {
    v6 = *(_QWORD*)(a2 + 24);
    v9 = nullptr;
    *v5 = game_facility_SceneCharacterBuilder_LoadStateHide_vtable;
    GameRoutine_1952d00(v6, 0, v8);
    result = v9;
    if (v9 == v8) {
      v7 = 32;
      goto LABEL_7;
    }
    if (v9 != nullptr) {
      v7 = 40;
    LABEL_7:
      result = (_QWORD*)(*(__int64 (**)(void))(*(_QWORD*)v9 + v7))();
    }
  }
  else {
    *result = game_facility_SceneCharacterBuilder_LoadStateIdle_vtable;
  }
  *(_QWORD*)(a2 + 16) = v5;
  return result;
}

#pragma GCC visibility pop
