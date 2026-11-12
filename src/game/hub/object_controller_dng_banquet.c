#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_hub_ObjectControllerDngBanquet_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* ObjectControllerDngBanquet_Destructor(_QWORD* result);
__int64 ObjectControllerDngBanquet_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "ObjectControllerDngBanquet_DeletingDestructor");
__attribute__((swiftcall)) void Manager_d9ae80(PSEUDO_X8, __int64, __int64,
                                               __int64, unsigned int);
extern __int64 GameData_212dbb8[9];
__int64 game_hub_ObjectControllerDngBanquet_InitializeImpl_lambda0_Invoke();
__int64 GameHr_14a1520(__int64*, char);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ObjectControllerDngBanquet_DeletingDestructor(_QWORD* a1);
_QWORD* GameRoutine_dbc1e0(_QWORD*, __int64);
__attribute__((swiftcall)) void game_hub_e1bfe0(PSEUDO_X8, __int64, __int64,
                                                __int64*);
__int64 game_hub_Object_EnableAccess(__int64, __int64, unsigned int);
__int64 game_hub_dfc000(__int64 result);
__int64 std___1___shared_weak_count_lock(__int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fe2978[])();
extern __int64 GameData_212c6a0[3];
extern __int64 GameData_212dc48[5];
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
void game_hub_ObjectControllerDngBanquet_InitializeImpl(__int64* a1);

_QWORD* ObjectControllerDngBanquet_Destructor(_QWORD* result)
{
  _DWORD* v1;
  _QWORD* v2;
  __int64 v3;

  *result = game_hub_ObjectControllerDngBanquet_vtable;
  v1 = (_DWORD*)result[3];
  if (*(_QWORD*)v1 != 0 && *(_DWORD*)(*(_QWORD*)v1 + 16LL) == v1[2]) {
    v2 = result;
    GameRoutine_14a1520(result + 3, 1);
    result = v2;
  }
  v3 = result[4];
  if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v3);
  }
  return result;
}

void ObjectControllerDngBanquet_DeletingDestructor(_QWORD* a1)
{
  __int64* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *a1 = game_hub_ObjectControllerDngBanquet_vtable;
  v4 = (_QWORD*)a1[3];
  v2 = a1 + 3;
  v3 = v4;
  v5 = *v4;
  if (*v4 != 0 && *(_DWORD*)(v5 + 16) == *((_DWORD*)v3 + 2)) {
    GameHr_14a1520(v2, 1);
  }
  v6 = a1[4];
  if (v6 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    std___1___shared_weak_count___release_weak_alt1(v6);
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v7 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, (__int64)a1);
}

void game_hub_ObjectControllerDngBanquet_InitializeImpl(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  __int64 v22[3];
  struct {
    __int64* v23;
    __int64 v24;
  } v23_;
  struct {
    _QWORD v25[4];
    _QWORD* v26;
  } v25_;

  v2 = a1[1];
  v25_.v25[0] = GameData_1fe2978;
  v25_.v26 = v25_.v25;
  game_hub_Object_EnableAccess(v2, (__int64)v25_.v25, 2u);
  if (v25_.v26 == v25_.v25) {
    v3 = 32;
    goto LABEL_5;
  }
  if (v25_.v26 != nullptr) {
    v3 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v25_.v26 + v3))((__int64)v25_.v26);
  }
  v4 = a1[1];
  v5 = *(_QWORD*)(v4 + 728);
  if (v5 != 0) {
    v6 = *(_QWORD*)(v4 + 720);
    v7 = *(_QWORD*)(v4 + 728);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                              memory_order_relaxed);
    v8 = std___1___shared_weak_count_lock(v7);
    std___1___shared_weak_count___release_weak_alt1(v5);
    if (v8 != 0) {
      if (v6 != 0) {
        *(_DWORD*)(v6 + 208) |= 0x200u;
        *(_BYTE*)(v6 + 304) = 1;
        if ((*(_BYTE*)(v6 + 232) & 1) != 0) {
          *(_QWORD*)(v6 + 240) = 21;
          v9 = *(char**)(v6 + 248);
        }
        else {
          *(_BYTE*)(v6 + 232) = 42;
          v9 = (char*)(v6 + 233);
        }
        strcpy(v9, "MID_Access_DngBanquet");
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
        std___1___shared_weak_count___release_weak_alt1(v8);
      }
    }
  }
  v10 = GameRoutine_dbc1e0(*(_QWORD**)GameData_212c6a0[0],
                           *(_QWORD*)(a1[1] + 72));
  if (v10 != nullptr && *((_DWORD*)v10 + 3) != 0) {
    game_hub_dfc000(a1[1]);
    return;
  }
  v11 = *(_QWORD*)GameData_212dc48[0];
  strcpy((char*)v22, ",Field_Gim_Banquet_Loop");
  v12 = a1[1];
  if ((*(_BYTE*)(v12 + 976) & 1) != 0) {
    v13 = (__int64*)(v12 + 960);
  }
  else if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                                 memory_order_acquire) &
            1) != 0) {
    v13 = (__int64*)&GameData_21a6120;
  }
  else {
    v19 = v11;
    v20 = __cxa_guard_acquire((__int64)&GameData_21a6130);
    v13 = (__int64*)&GameData_21a6120;
    if (v20 != 0) {
      v21 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v21;
      __cxa_guard_release((__int64)&GameData_21a6130);
      v13 = (__int64*)&GameData_21a6120;
    }
    v11 = v19;
  }
  game_hub_e1bfe0((void*)(&v23_.v23), v11, (__int64)v22, v13);
  v14 = v23_.v23;
  v15 = v23_.v24;
  if (v23_.v24 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v23_.v24 + 8), 1u,
                              memory_order_relaxed);
  }
  v16 = a1[4];
  a1[3] = (__int64)v14;
  a1[4] = v15;
  if (v16 != 0) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
      std___1___shared_weak_count___release_weak_alt1(v16);
    }
    v15 = a1[4];
  }
  if (v15 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v15 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
      std___1___shared_weak_count___release_weak_alt1(v15);
    }
  }
  v17 = v23_.v24;
  if (v23_.v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23_.v24 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    std___1___shared_weak_count___release_weak_alt1(v17);
    if ((v22[0] & 1) == 0) {
      return;
    }
  }
  else if ((v22[0] & 1) == 0) {
    return;
  }
  if (v22[2] != 0) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v22[2]);
  }
}

__int64 game_hub_ObjectControllerDngBanquet_InitializeImpl_lambda0_Invoke()
{
  _BYTE v1[24];

  return X8CALL_X0(__int64,
                   Manager_d9ae80((void*)((__int64)v1),
                                  *(_QWORD*)GameData_212dbb8[0] + 248LL,
                                  (__int64)"CallRunDngBunquet", 17, 0));
}

#pragma GCC visibility pop
