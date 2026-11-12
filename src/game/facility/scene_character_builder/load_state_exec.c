#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1469c40(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1952d00(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1984a30(_QWORD, float);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_facility_SceneCharacterBuilder_LoadStateHide_vtable[])();
extern __int64 (*game_facility_SceneCharacterBuilder_LoadStateIdle_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 LoadStateExec_DeletingDestructor(__int64 a1, __int64 a2);
__int64 LoadStateExec_Unknown2(__int64 a1, _QWORD* a2);
__int64 GameHr_1984a30(__int64 result, float);
__int64 GameRoutine_1952d00_alt1(__int64, __int64,
                                 __int64) __asm__("GameRoutine_1952d00");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");

__int64 LoadStateExec_DeletingDestructor(__int64 a1, __int64 a2)
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

__int64 LoadStateExec_Unknown2(__int64 a1, _QWORD* a2)
{
  int v2;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 result;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  struct {
    _BYTE v12[32];
    _BYTE* v13;
  } v12_;

  v2 = *(unsigned __int8*)(a1 + 8);
  v4 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
  v5 = v4;
  if (v2 == 1) {
    v6 = a2[3];
    v12_.v13 = nullptr;
    *v5 = game_facility_SceneCharacterBuilder_LoadStateHide_vtable;
    GameRoutine_1952d00_alt1(v6, 0, (__int64)v12_.v12);
    result = (__int64)v12_.v13;
    if (v12_.v13 == v12_.v12) {
      v8 = 32;
    }
    else {
      if (v12_.v13 == nullptr) {
      LABEL_10:
        a2[2] = v5;
        return result;
      }
      v8 = 40;
    }
    result =
        (*(__int64 (**)(__int64))(*(_QWORD*)v12_.v13 + v8))((__int64)v12_.v13);
    goto LABEL_10;
  }
  a2[2] = v4;
  *v4 = game_facility_SceneCharacterBuilder_LoadStateIdle_vtable;
  v9 = a2[1];
  v10 = *(_QWORD*)(v9 + 160);
  v11 = *(_QWORD*)(v9 + 168);
  if (v11 == 0) {
    return GameHr_1984a30(v10, 0x1.3333340000000p-2f);
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                            memory_order_relaxed);
  result = GameHr_1984a30(v10, 0x1.3333340000000p-2f);
  if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
    return std___1___shared_weak_count___release_weak_alt1(v11);
  }
  return result;
}

#pragma GCC visibility pop
