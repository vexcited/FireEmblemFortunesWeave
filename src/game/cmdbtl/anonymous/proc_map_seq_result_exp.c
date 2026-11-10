#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1006e20(_QWORD);
__int64 GameRoutine_17549a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fee0e0[])();
extern __int64 GameData_2219080;
extern __int64 GameData_22190c0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_8c43b0(_QWORD);
__int64 game_cmdbtl_anonymous_ProcMapSeqResultExp_Open(__int64 result);
_QWORD* CmdbtlPartyNatives_e9a800(_QWORD*, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fec818[])();
extern __int64* GameData_212ea58;
void GameRoutine_e80e80(__int64, float*);
bool game_cmdbtl_anonymous_ProcMapSeqResultExp_Open_closure_Invoke(__int64 a1,
                                                                   __int64* a2);

__int64 game_cmdbtl_anonymous_ProcMapSeqResultExp_Open(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64** v3;
  __int64** v4;
  unsigned __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  char v9;
  char v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64** v22;
  _QWORD v23[4];
  _QWORD* v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;

  v1 = GameData_2219080;
  if (*(_QWORD*)(GameData_2219080 + 40) == *(_QWORD*)(GameData_2219080 + 32)) {
    return result;
  }
  v21 = result;
  v2 = GameRoutine_1006e20(GameData_22190c0);
  v4 = *(__int64***)(v1 + 32);
  v3 = *(__int64***)(v1 + 40);
  v26 = 0;
  v27 = 0;
  v25 = 0;
  if (v4 != v3) {
    v5 = 0;
    v22 = v3;
    do {
      v6 = **v4;
      v7 = *((_DWORD*)*v4 + 3);
      v8 = *((_DWORD*)*v4 + 5);
      v9 = *((_BYTE*)*v4 + 16);
      v10 = *((_BYTE*)*v4 + 17);
      if (v5 < v27) {
        *(_QWORD*)v5 = v6;
        *(_DWORD*)(v5 + 8) = v7;
        *(_DWORD*)(v5 + 12) = v8;
        *(_BYTE*)(v5 + 16) = v9;
        *(_BYTE*)(v5 + 17) = v10;
        v5 += 24LL;
      }
      else {
        v11 = v25;
        v12 = v5 - v25;
        v13 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v5 - v25) >> 3) + 1;
        if (v13 > 0xAAAAAAAAAAAAAAALL) {
          GameRoutine_8c43b0(v2);
        }
        if (0x5555555555555556LL * ((__int64)(v27 - v25) >> 3) > v13) {
          v13 = 0x5555555555555556LL * ((__int64)(v27 - v25) >> 3);
        }
        if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v27 - v25) >> 3) >=
            0x555555555555555LL) {
          v14 = 0xAAAAAAAAAAAAAAALL;
        }
        else {
          v14 = v13;
        }
        if (v14 != 0) {
          if (v14 > 0xAAAAAAAAAAAAAAALL) {
            GameRoutine_60a210(v2);
          }
          v15 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager,
                                               24 * v14, 16, 0);
        }
        else {
          v15 = 0;
        }
        v16 = v15 + v12;
        *(_QWORD*)v16 = v6;
        v17 = v15 + 24 * v14;
        *(_DWORD*)(v16 + 8) = v7;
        *(_DWORD*)(v16 + 12) = v8;
        *(_BYTE*)(v16 + 16) = v9;
        v5 = v15 + v12 + 24;
        *(_BYTE*)(v16 + 17) = v10;
        v2 = memcpy(v15, v11, v12);
        v25 = v15;
        v27 = v17;
        if (v11 != 0) {
          v18 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v18 = 56;
          }
          v2 = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
        }
        v3 = v22;
      }
      v4 += 2;
      v26 = v5;
    } while (v4 != v3);
  }
  v23[0] = GameData_1fee0e0;
  v24 = v23;
  GameRoutine_17549a0(v21, &v25, 1, v23);
  result = (__int64)v24;
  if (v24 == v23) {
    v19 = 32;
  }
  else {
    if (v24 == nullptr) {
      goto LABEL_27;
    }
    v19 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v24 + v19))((__int64)v24);
LABEL_27:
  if (v25 != 0) {
    v26 = v25;
    v20 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v20 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
  }
  return result;
}

bool game_cmdbtl_anonymous_ProcMapSeqResultExp_Open_closure_Invoke(__int64 a1,
                                                                   __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64* v3;
  _QWORD* v4;
  long double v5;
  __int64 v6;
  __int64 (**v7)();
  __int64* v8;
  __int64 (**v9)();
  __int64 v10;
  __int64 v11;
  __int64 v13;
  struct {
    __int64 (**v14)();
    __int64* v15;
    __int64 (***v16)();
    char gap24_[8];
    __int64 (***v17)();
    char gap40_[8];
    __int64 v18;
    int v19;
    char gap60_[4];
    __int128 v20;
    char v21;
    char gap81_[3];
    int v22;
    char v23;
  } v14_;
  struct {
    __int64 (**v24)();
    __int64 v25;
  } v24_;
  __int64 v26;

  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = *a2;
  v3 = GameData_212ea58;
  v24_.v24 = nullptr;
  v14_.v17 = &v14_.v14;
  v24_.v25 = 0;
  v26 = v2;
  v4 = (_QWORD*)*GameData_212ea58;
  v14_.v14 = GameData_1fec818;
  v14_.v15 = &v26;
  v14_.v16 = &v24_.v24;
  CmdbtlPartyNatives_e9a800(v4, (__int64)&v14_.v14),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v14_.v17 == &v14_.v14) {
    v6 = 4;
  }
  else {
    if (v14_.v17 == nullptr) {
      goto LABEL_6;
    }
    v6 = 5;
  }
  ((__int64 (*)(__int64))(*v14_.v17)[v6])((__int64)v14_.v17),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
LABEL_6:
  v7 = v24_.v24;
  if (v24_.v24 != nullptr) {
    LOBYTE(v14_.v17) = 0;
    v14_.v19 = 0;
    LOBYTE(v14_.v16) = 0;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v13 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v13;
      __cxa_guard_release(&GameData_21a6130),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v14_.v21 = 0;
    v14_.v20 = GameData_21a6120;
    v14_.v22 = 1109393408;
    v14_.v23 = 1;
    v9 = v24_.v24;
    v8 = (__int64*)v24_.v25;
    if (v24_.v25 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v24_.v25 + 16), 1u,
                                memory_order_relaxed);
    }
    v14_.v14 = v9;
    v14_.v15 = v8;
    v10 = *v3;
    v14_.v18 = 3248488448LL;
    GameRoutine_e80e80(v10 + 16, (float*)&v14_.v14),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v14_.v15 != nullptr) {
      *(__n128*)&v5 = std___1___shared_weak_count___release_weak(v14_.v15),
      v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
  }
  v11 = v24_.v25;
  if (v24_.v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24_.v25 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v11 + 16LL))(v11, v5),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
    std___1___shared_weak_count___release_weak(v11),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  return v7 != nullptr;
}

#pragma GCC visibility pop
