#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f0a0d0(__int64, int);
__int64 GameRoutine_f1e9a0(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*game_map_MapDrawCursor_vtable[])();
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d038[2];
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21cd0e8;
extern __int64 GameData_21ed070;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_empty_item_ptr;
extern int GameData_21d92e0;
bool MapDrawCursor_Unknown6(__int64 a1);
__int64 MapDrawCursor_Destructor(_QWORD* a1);
__int64 MapDrawCursor_DeletingDestructor(_QWORD* a1);

bool MapDrawCursor_Unknown6(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  _QWORD* v15;
  _BYTE* v16;
  unsigned int v18;
  __int64 v19;
  unsigned int v20;
  bool v21;

  v2 = GameData_212d020[0];
  v3 = *(_QWORD*)GameData_212d020[0];
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 40LL))(a1);
  if ((GameRoutine_f0a0d0(v3, v4) & 1) == 0) {
    return false;
  }
  v5 = *(_QWORD*)v2;
  v6 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 56LL))(a1);
  if (GameData_21ed070 != 0) {
    if (v6 != 0) {
      return false;
    }
  }
  else if (*(_BYTE*)(v5 + 196) == 1) {
    if (*(_DWORD*)(v5 + 192) != v6) {
      return false;
    }
  }
  else if (GameData_21d92e0 != v6) {
    return false;
  }
  v7 = *(_QWORD*)(*(_QWORD*)v2 + 24LL);
  v8 = *(_QWORD*)(*(_QWORD*)v2 + 104LL);
  if (v8 != 0 && (v9 = *(_QWORD*)(*(_QWORD*)v2 + 96LL),
                  v10 = *(_QWORD*)(*(_QWORD*)v2 + 104LL),
                  atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 16),
                                            1u, memory_order_relaxed),
                  v11 = std___1___shared_weak_count_lock(v10),
                  std___1___shared_weak_count___release_weak(v8), v11 != 0)) {
    if (v9 != 0) {
      v12 = 254936;
    }
    else if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0) {
      v12 = 8;
    }
    else {
      v12 = 127472;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
    }
  }
  else if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0) {
    v12 = 8;
  }
  else {
    v12 = 127472;
  }
  v13 = (_QWORD*)(v7 + v12);
  if ((*(_QWORD*)(v7 + v12 + 127168) | *(_QWORD*)(v7 + v12 + 127192)) != 0 &&
      v7 != 0) {
    if (GameData_21cd0e8 != 0 && *(_BYTE*)(GameData_21cd0e8 + 32) != 0 &&
        (unsigned int)(*(_DWORD*)(*(_QWORD*)v2 + 4368LL) - 7) <= 1) {
      if ((*(_DWORD*)(GameData_21cd0e8 + 48) & 0xFFF) == 0) {
        v18 = *(unsigned __int16*)(GameData_21cd0e8 + 40);
        if (*(_WORD*)(GameData_21cd0e8 + 40) == 0) {
          v18 = *(unsigned __int16*)game_g_empty_item_ptr;
        }
        v19 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v18);
        v16 = *(_BYTE**)(v19 + 192);
        v20 = *(unsigned __int8*)(v19 + 72);
        v21 = v16 == nullptr || v20 > 7;
        if (v21 || v16[105] == 0 || v16[104] == 2) {
          return true;
        }
        return v16[250] != 28 ||
               0xAAAAAAAAAAAAAAABLL *
                       ((__int64)(v13[15930] - v13[15929]) >> 4) <=
                   1;
      }
      v15 = (_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                      8LL * (*(_DWORD*)(GameData_21cd0e8 + 48) & 0xFFF));
    }
    else {
      v15 = v13 + 15895;
    }
    v16 = (_BYTE*)*v15;
    if (v16 == nullptr) {
      return true;
    }
    return v16[250] != 28 ||
           0xAAAAAAAAAAAAAAABLL * ((__int64)(v13[15930] - v13[15929]) >> 4) <=
               1;
  }
  return true;
}

__int64 MapDrawCursor_Destructor(_QWORD* a1)
{
  __int64 v1;
  _QWORD* v2;

  v1 = a1[6];
  *a1 = game_map_MapDrawCursor_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    v2 = a1;
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
    a1 = v2;
  }
  return GameRoutine_f1e9a0(a1[3]);
}

__int64 MapDrawCursor_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[6];
  *a1 = game_map_MapDrawCursor_vtable;
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
  GameRoutine_f1e9a0(a1[3]);
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, a1);
}

#pragma GCC visibility pop
