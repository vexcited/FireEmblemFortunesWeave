#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_cmdbtl_CmdBtlRecord_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f768[4];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_ebdb90(void);
__int64 CmdbtlRecordNatives_ebd760_alt2(__int64 result) __asm__(
    "CmdbtlRecordNatives_ebd760");
__int64 CmdbtlRecordNatives_ebd9a0(__int64* a1, __int64 a2);
__int64 CmdBtlRecord_ebccc0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 CmdBtlRecord_ebd060(_QWORD);
__int64 CmdbtlRecordNatives_ebd760_alt1(_QWORD) __asm__(
    "CmdbtlRecordNatives_ebd760");
__int64 game_HashString(_QWORD);
extern __int64 GameData_21c99b0;
extern __int64 GameData_2203490;
extern __int64 as_g_thread_info;
extern __int64* as_g_script_manager_ptr;
unsigned __int64 cmdbtl_record_NewBtlInfoArts(unsigned int a1, __int64 a2);
unsigned __int64 cmdbtl_record_NewViewerArts(unsigned int a1, __int64 a2);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64* CmdbtlRecordNatives_ebd760(__int64* result);

__int64* CmdbtlRecordNatives_ebd760(__int64* result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  struct {
    __int64 (**v6)();
    int v7;
    char gap12_[4];
    __int64 v8;
    __int64 v9;
    __int64 v10;
    __int64 v11;
  } v6_;

  v6_.v7 = 0;
  v6_.v8 = 0;
  v6_.v9 = 0;
  v6_.v10 = 0;
  v6_.v11 = 0;
  v1 = result[2];
  v2 = result[3];
  v6_.v6 = game_cmdbtl_CmdBtlRecord_vtable;
  if (v1 >= v2) {
    v3 = result;
    result = (__int64*)CmdbtlRecordNatives_ebd9a0(result + 1, (__int64)&v6_.v6);
    v4 = v6_.v11;
    v3[2] = (__int64)result;
    v6_.v6 = game_cmdbtl_CmdBtlRecord_vtable;
    if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      result = (__int64*)std___1___shared_weak_count___release_weak_alt1(v4);
    }
  }
  else {
    *(_QWORD*)v1 = game_cmdbtl_CmdBtlRecord_vtable;
    *(_DWORD*)(v1 + 8) = 0;
    *(_QWORD*)(v1 + 16) = 0;
    *(_QWORD*)(v1 + 24) = 0;
    *(_QWORD*)(v1 + 32) = 0;
    *(_QWORD*)(v1 + 40) = 0;
    v6_.v6 = game_cmdbtl_CmdBtlRecord_vtable;
    result[2] = v1 + 48;
  }
  v5 = v6_.v9;
  if (v6_.v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6_.v9 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    return (__int64*)std___1___shared_weak_count___release_weak_alt1(v5);
  }
  return result;
}

__int64 CmdbtlRecordNatives_ebd9a0(__int64* a1, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  void (***v14)(_QWORD);
  void (***v15)(_QWORD);
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64* v19;
  void (***v20)(_QWORD);
  __int64 v21;
  void (**v22)(_QWORD);
  void (**v23)(_QWORD);
  void (***v24)(_QWORD);
  void (**v25)(_QWORD);
  __int64 v26;

  v2 = a1[1] - *a1;
  v3 = 1 - 0x5555555555555555LL * (v2 >> 4);
  if (v3 > 0x555555555555555LL) {
    GameRoutine_ebdb90();
  }
  if (0x5555555555555556LL * ((a1[2] - *a1) >> 4) > v3) {
    v3 = 0x5555555555555556LL * ((a1[2] - *a1) >> 4);
  }
  if (0xAAAAAAAAAAAAAAABLL * ((a1[2] - *a1) >> 4) >= 0x2AAAAAAAAAAAAAALL) {
    v5 = 0x555555555555555LL;
  }
  else {
    v5 = v3;
  }
  if (v5 > 0x555555555555555LL) {
    GameRoutine_60a210(a1);
  }
  v6 = 3 * v5;
  v8 = fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      48 * v5, 16, 0);
  v10 = v9 + v2;
  v11 = GameData_212f768[0];
  *(_QWORD*)v10 = GameData_212f768[0] + 2;
  *(_DWORD*)(v10 + 8) = *(_DWORD*)(a2 + 8);
  v12 = *(_QWORD*)(a2 + 24);
  *(_QWORD*)(v10 + 16) = *(_QWORD*)(a2 + 16);
  *(_QWORD*)(v10 + 24) = v12;
  if (v12 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                              memory_order_relaxed);
  }
  v13 = *(_QWORD*)(a2 + 40);
  *(_QWORD*)(v10 + 32) = *(_QWORD*)(a2 + 32);
  *(_QWORD*)(v10 + 40) = v13;
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                              memory_order_relaxed);
  }
  v14 = (void (***)(_QWORD))*a1;
  v15 = (void (***)(_QWORD))a1[1];
  v16 = v9 + 16 * v6;
  v17 = v10 + 48;
  v18 = v10 + *a1 - (_QWORD)v15;
  if (v15 != (void (***)(_QWORD))*a1) {
    v19 = v11 + 2;
    v20 = (void (***)(_QWORD))*a1;
    v21 = v10 + *a1 - (_QWORD)v15;
    do {
      *(_QWORD*)v21 = v19;
      *(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
      *(_QWORD*)(v21 + 16) = v20[2];
      v22 = v20[3];
      *(_QWORD*)(v21 + 24) = v22;
      if (v22 != nullptr) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v22 + 1), 1u,
                                  memory_order_relaxed);
      }
      *(_QWORD*)(v21 + 32) = v20[4];
      v23 = v20[5];
      *(_QWORD*)(v21 + 40) = v23;
      if (v23 != nullptr) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 1), 1u,
                                  memory_order_relaxed);
      }
      v20 += 6;
      v21 += 48;
    } while (v20 != v15);
    v24 = v14;
    do {
      v25 = *v24;
      v24 += 6;
      (*v25)(v14);
      v14 = v24;
    } while (v24 != v15);
    v14 = (void (***)(_QWORD))*a1;
  }
  *a1 = v18;
  a1[1] = v17;
  a1[2] = v16;
  if (v14 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v26, v14);
  }
  return v17;
}

unsigned __int64 cmdbtl_record_NewBtlInfoArts(unsigned int a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  unsigned __int64 result;
  unsigned __int64 v16;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  unsigned __int64 v22;
  __int64 v23;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v9 = GameData_2203490;
  CmdbtlRecordNatives_ebd760_alt1(GameData_2203490 + 576);
  v10 = *(_QWORD*)(v9 + 592);
  v11 = *(_QWORD*)(v9 + 584);
  v12 = v10 - 48;
  if (v10 != v11 && v10 != 48) {
    CmdBtlRecord_ebccc0(v10 - 48, 0, a1, 3);
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v14 = *(_QWORD*)(a2 + 16);
  }
  else {
    v14 = a2 + 1;
  }
  result = game_HashString(v14);
  if (result != 0) {
    v16 = *(_QWORD*)(GameData_21c99b0 + 96);
    if (v16 != 0 && *(_QWORD*)(GameData_21c99b0 + 112) != 0) {
      v18 = v16 - 1;
      if ((v16 & (v16 - 1)) != 0) {
        v19 = result;
        if (result >= v16) {
          v19 = result % v16;
        }
      }
      else {
        v19 = v18 & result;
      }
      v20 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b0 + 88) + 8 * v19);
      if (v20 != nullptr) {
        v21 = (_QWORD*)*v20;
        if (v21 != nullptr) {
          if ((v16 & v18) == 0) {
            while (1) {
              v23 = v21[1];
              if (v23 == result) {
                if (v21[2] == result) {
                  goto LABEL_42;
                }
              }
              else if ((v23 & v18) != v19) {
                return result;
              }
              v21 = (_QWORD*)*v21;
              if (v21 == nullptr) {
                return result;
              }
            }
          }
          do {
            v22 = v21[1];
            if (v22 == result) {
              if (v21[2] == result) {
              LABEL_42:
                if (v21[3] != 0) {
                  return CmdBtlRecord_ebd060(v12);
                }
                return result;
              }
            }
            else {
              if (v22 >= v16) {
                v22 %= v16;
              }
              if (v22 != v19) {
                return result;
              }
            }
            v21 = (_QWORD*)*v21;
          } while (v21 != nullptr);
        }
      }
    }
  }
  return result;
}

unsigned __int64 cmdbtl_record_NewViewerArts(unsigned int a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  unsigned __int64 result;
  unsigned __int64 v16;
  unsigned __int64 v18;
  unsigned __int64 v19;
  _QWORD* v20;
  _QWORD* v21;
  unsigned __int64 v22;
  __int64 v23;

  v4 = *as_g_script_manager_ptr;
  v5 = *(
      _QWORD*)(v4 +
               8LL * (*(unsigned int (**)(__int64))(*(_QWORD*)as_g_thread_info +
                                                    72LL))(as_g_thread_info) +
               4384);
  if (v5 != 0) {
    v6 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 472LL))(v5);
  }
  else {
    v6 = 0;
  }
  (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v6 + 24) + 448LL))(
      *(_QWORD*)(v6 + 24), 1);
  v7 = *(_QWORD**)(v6 + 2240);
  *(_QWORD*)(v6 + 2240) = 0;
  if (v7 == (_QWORD*)(v6 + 2208)) {
    v8 = 32;
  }
  else {
    if (v7 == nullptr) {
      goto LABEL_9;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
LABEL_9:
  v9 = GameData_2203490;
  CmdbtlRecordNatives_ebd760_alt1(GameData_2203490 + 576);
  v10 = *(_QWORD*)(v9 + 592);
  v11 = *(_QWORD*)(v9 + 584);
  v12 = v10 - 48;
  if (v10 != v11 && v10 != 48) {
    CmdBtlRecord_ebccc0(v10 - 48, 1, a1, 3);
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    v14 = *(_QWORD*)(a2 + 16);
  }
  else {
    v14 = a2 + 1;
  }
  result = game_HashString(v14);
  if (result != 0) {
    v16 = *(_QWORD*)(GameData_21c99b0 + 96);
    if (v16 != 0 && *(_QWORD*)(GameData_21c99b0 + 112) != 0) {
      v18 = v16 - 1;
      if ((v16 & (v16 - 1)) != 0) {
        v19 = result;
        if (result >= v16) {
          v19 = result % v16;
        }
      }
      else {
        v19 = v18 & result;
      }
      v20 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b0 + 88) + 8 * v19);
      if (v20 != nullptr) {
        v21 = (_QWORD*)*v20;
        if (v21 != nullptr) {
          if ((v16 & v18) == 0) {
            while (1) {
              v23 = v21[1];
              if (v23 == result) {
                if (v21[2] == result) {
                  goto LABEL_42;
                }
              }
              else if ((v23 & v18) != v19) {
                return result;
              }
              v21 = (_QWORD*)*v21;
              if (v21 == nullptr) {
                return result;
              }
            }
          }
          do {
            v22 = v21[1];
            if (v22 == result) {
              if (v21[2] == result) {
              LABEL_42:
                if (v21[3] != 0) {
                  return CmdBtlRecord_ebd060(v12);
                }
                return result;
              }
            }
            else {
              if (v22 >= v16) {
                v22 %= v16;
              }
              if (v22 != v19) {
                return result;
              }
            }
            v21 = (_QWORD*)*v21;
          } while (v21 != nullptr);
        }
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
