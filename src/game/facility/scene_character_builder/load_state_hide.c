#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1469730(_QWORD, _QWORD);
__int64 GameRoutine_1984a30(_QWORD, float);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_facility_SceneCharacterBuilder_LoadStateIdle_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
bool LoadStateHide_DeletingDestructor(__int64 a1, __int64 a2);
__int64 LoadStateHide_Unknown2(__int64 a1, _QWORD* a2);
_QWORD* SceneCharacterBuilder_1469730(__int64, __int64);
__int64 GameHr_1984a30(__int64 result, float);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");

bool LoadStateHide_DeletingDestructor(__int64 a1, __int64 a2)
{
  return *(_QWORD*)(a2 + 40) != 0 || *(float*)(*(_QWORD*)(a2 + 24) + 36LL) >=
                                         *(float*)(*(_QWORD*)(a2 + 24) + 32LL);
}

__int64 LoadStateHide_Unknown2(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 i;
  __int64 v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = a2[3];
  if ((*(_BYTE*)(v2 + 136) & 1) != 0) {
    goto LABEL_9;
  }
  v4 = *(_QWORD**)(v2 + 96);
  *(_QWORD*)(v2 + 96) = 0;
  *(_BYTE*)(v2 + 136) = 1;
  if (v4 == (_QWORD*)(v2 + 64)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_7;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);
LABEL_7:
  v6 = *(_QWORD*)(v2 + 112);
  for (i = *(_QWORD*)(v2 + 120); i != v6; i -= 64) {
    v12 = *(_QWORD**)(i - 16);
    *(_QWORD*)(i - 16) = 0;
    if ((_QWORD*)(i - 48) == v12) {
      v13 = 32;
    }
    else {
      if (v12 == nullptr) {
        continue;
      }
      v13 = 40;
    }
    (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
    v14 = *(_QWORD**)(i - 16);
    if ((_QWORD*)(i - 48) == v14) {
      v11 = 32;
    }
    else {
      if (v14 == nullptr) {
        continue;
      }
      v11 = 40;
    }
    (*(void (**)(__int64))(*v14 + v11))((__int64)v14);
  }
  *(_QWORD*)(v2 + 120) = v6;
LABEL_9:
  v8 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
  if (a2[5] != 0) {
    v9 = fw_memory_HeapManager_Allocate_alt1(v8, 16, 16, 0);
    result = (__int64)SceneCharacterBuilder_1469730(v9, (__int64)a2);
    a2[2] = v9;
  }
  else {
    v15 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v8, 8, 16, 0);
    a2[2] = v15;
    *v15 = game_facility_SceneCharacterBuilder_LoadStateIdle_vtable;
    v16 = a2[1];
    v17 = *(_QWORD*)(v16 + 160);
    v18 = *(_QWORD*)(v16 + 168);
    if (v18 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
      result = GameHr_1984a30(v17, 0x1.3333340000000p-2f);
      if (atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        return std___1___shared_weak_count___release_weak_alt1(v18);
      }
    }
    else {
      return GameHr_1984a30(v17, 0x1.3333340000000p-2f);
    }
  }
  return result;
}

#pragma GCC visibility pop
