#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_ad6d20(__int64 result, __int64, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_1fc2718[])();
extern __int64 (*GameData_1fc2818[])();
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) String_60a1d0();
__int64 g3d_a6c880(__int64* a1, __int64 a2, unsigned __int64 a3);
__attribute__((swiftcall)) void g3d_ada070(PSEUDO_X8 x8_, __int64 a1,
                                           unsigned __int64 a2, __int64 a3);
__attribute__((swiftcall)) void g3d_ada970(PSEUDO_X8 x8_, __int64 a1,
                                           unsigned __int64 a2, __int64 a3);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
int memcmp_alt1(__int64, __int64, unsigned __int64) __asm__("memcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 g3d_a6c880(__int64* a1, __int64 a2, unsigned __int64 a3)
{
  char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  bool v19;
  unsigned __int64 v20;
  unsigned __int16* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  struct {
    _QWORD v26[2];
    const char* v27;
  } v26_;

  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  if (a3 >= 0x17) {
    v6 = a2;
    if ((a3 | 7) == 0x17) {
      v7 = 26;
    }
    else {
      v7 = (a3 | 7) + 1;
    }
    v8 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v7, 16, 0);
    a2 = v6;
    v5 = (char*)v8;
    v26_.v26[1] = a3;
    v26_.v27 = (const char*)v8;
    v26_.v26[0] = v7 | 1;
    goto LABEL_9;
  }
  LOBYTE(v26_.v26[0]) = 2 * a3;
  v5 = (char*)v26_.v26 + 1;
  if (a3 != 0) {
  LABEL_9:
    memmove_alt1((__int64)v5, a2, a3);
  }
  v5[a3] = 0;
  v9 = *a1;
  v10 = (__int64)v26_.v27;
  v11 = *(_QWORD*)(*a1 + 56);
  if ((v26_.v26[0] & 1) != 0) {
    v12 = v26_.v27;
  }
  else {
    v12 = (char*)v26_.v26 + 1;
  }
  if (v12 != nullptr) {
    v13 = strlen_alt1(v12);
  }
  else {
    v13 = 0;
  }
  v14 = v11 + 8;
  v15 = *(unsigned __int16*)(v11 + 12);
  v16 = v11 + 8 + 16 * v15;
  v17 = *(_DWORD*)v16;
  if ((signed __int32)*(_DWORD*)(v11 + 8) < (signed __int32)*(_DWORD*)v16) {
    do {
      v20 = (__int64)v17 >> 3;
      if (v13 > v20) {
        v18 = ((unsigned __int8)v12[v13 + ~v20] >> (v17 & 7)) & 1;
      }
      else {
        v18 = 0;
      }
      v15 = *(unsigned __int16*)(v11 + 12 + 16 * v15 + 2 * v18);
      v19 = v17 < (signed __int32)*(_DWORD*)(v14 + 16 * v15);
      v17 = *(_DWORD*)(v14 + 16 * v15);
    } while (v19);
    v16 = v14 + 16 * v15;
  }
  v21 = *(unsigned __int16**)(v16 + 8);
  if (v13 == *v21 && memcmp_alt1((__int64)(v21 + 1), (__int64)v12, v13) == 0 &&
      (~(v22 = v16 - v11 - 24) & 0xFFFFFFFF0LL) != 0) {
    v23 = *(_QWORD*)(*(_QWORD*)(v9 + 40) + 8LL * (int)(v22 >> 4));
    if ((v26_.v26[0] & 1) == 0) {
      return v23;
    }
  }
  else {
    v23 = 0;
    if ((v26_.v26[0] & 1) == 0) {
      return v23;
    }
  }
  if (v10 != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24, v10);
  }
  return v23;
}

__attribute__((swiftcall)) void g3d_ada070(PSEUDO_X8 x8_, __int64 a1,
                                           unsigned __int64 a2, __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _BYTE* v11;
  __int64 v12;
  _QWORD* result;
  __int64 v14;
  _QWORD* v15;
  _BYTE* v16;
  __int64 v17;
  struct {
    _BYTE v18[32];
    _BYTE* v19;
  } v18_;
  struct {
    _BYTE v20[32];
    _BYTE* v21;
  } v20_;

  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      176, 16, 0);
  *(_QWORD*)(v9 + 8) = 0;
  *(_QWORD*)(v9 + 16) = 0;
  *(_QWORD*)(v9 + 24) = 0;
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_DWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 144) = 0;
  *(_DWORD*)(v9 + 160) = 0;
  *(_WORD*)(v9 + 164) = 0;
  *(_QWORD*)(v9 + 80) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  *(_DWORD*)v9 = 7;
  *a4 = v9;
  *(_DWORD*)(v9 + 64) = 1065353216;
  v10 = *(_QWORD*)(a3 + 32);
  if (v10 != 0) {
    if (v10 == a3) {
      v18_.v19 = v18_.v18;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v10 + 24LL))(v10, v18_.v18);
      v12 = v9;
      v11 = v18_.v19;
    }
    else {
      v11 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      v18_.v19 = v11;
      v12 = v9;
    }
    v15 = (_QWORD*)fw_memory_HeapManager_Allocate(*v8, 80, 16, 0);
    v16 = v15;
    v15[2] = v12;
    *v15 = GameData_1fc2718;
    if (v11 != nullptr) {
      if (v11 == v18_.v18) {
        v15[8] = v15 + 4;
        (*(void (**)(_BYTE*))(*(_QWORD*)v11 + 24LL))(v11);
      }
      else {
        v15[8] = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v11 + 16LL))(v11);
      }
    }
    else {
      v15[8] = 0;
    }
    v20_.v21 = v16;
    GameRoutine_ad6d20(v9, a1, a2);
    if (v20_.v21 == v20_.v20) {
      v17 = 32;
    }
    else {
      if (v20_.v21 == nullptr) {
        goto LABEL_17;
      }
      v17 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v20_.v21 + v17))((__int64)v20_.v21);
  LABEL_17:
    result = v18_.v19;
    if (v18_.v19 != v18_.v18) {
      goto LABEL_18;
    }
  LABEL_5:
    v14 = 32;
    {
      (_QWORD*)(*(__int64 (**)(__int64))(*result + v14))((__int64)result);
      return;
    }
  }
  v20_.v21 = nullptr;
  GameRoutine_ad6d20(v9, a1, a2);
  result = v20_.v21;
  if (v20_.v21 == v20_.v20) {
    goto LABEL_5;
  }
LABEL_18:
  if (result == nullptr) {
    result;
    return;
  }
  v14 = 40;
  {
    (_QWORD*)(*(__int64 (**)(__int64))(*result + v14))((__int64)result);
    return;
  }
}

__attribute__((swiftcall)) void g3d_ada970(PSEUDO_X8 x8_, __int64 a1,
                                           unsigned __int64 a2, __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64* v8;
  __int64 v9;
  __int64 v10;
  _BYTE* v11;
  __int64 v12;
  _QWORD* result;
  __int64 v14;
  _QWORD* v15;
  _BYTE* v16;
  __int64 v17;
  struct {
    _BYTE v18[32];
    _BYTE* v19;
  } v18_;
  struct {
    _BYTE v20[32];
    _BYTE* v21;
  } v20_;

  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      176, 16, 0);
  *(_QWORD*)(v9 + 8) = 0;
  *(_QWORD*)(v9 + 16) = 0;
  *(_QWORD*)(v9 + 24) = 0;
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_DWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 144) = 0;
  *(_DWORD*)(v9 + 160) = 0;
  *(_WORD*)(v9 + 164) = 0;
  *(_QWORD*)(v9 + 80) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  *(_DWORD*)v9 = 2;
  *a4 = v9;
  *(_DWORD*)(v9 + 64) = 1065353216;
  v10 = *(_QWORD*)(a3 + 32);
  if (v10 != 0) {
    if (v10 == a3) {
      v18_.v19 = v18_.v18;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v10 + 24LL))(v10, v18_.v18);
      v12 = v9;
      v11 = v18_.v19;
    }
    else {
      v11 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
      v18_.v19 = v11;
      v12 = v9;
    }
    v15 = (_QWORD*)fw_memory_HeapManager_Allocate(*v8, 80, 16, 0);
    v16 = v15;
    v15[2] = v12;
    *v15 = GameData_1fc2818;
    if (v11 != nullptr) {
      if (v11 == v18_.v18) {
        v15[8] = v15 + 4;
        (*(void (**)(_BYTE*))(*(_QWORD*)v11 + 24LL))(v11);
      }
      else {
        v15[8] = (*(__int64 (**)(_BYTE*))(*(_QWORD*)v11 + 16LL))(v11);
      }
    }
    else {
      v15[8] = 0;
    }
    v20_.v21 = v16;
    GameRoutine_ad6d20(v9, a1, a2);
    if (v20_.v21 == v20_.v20) {
      v17 = 32;
    }
    else {
      if (v20_.v21 == nullptr) {
        goto LABEL_17;
      }
      v17 = 40;
    }
    (*(void (**)(__int64))(*(_QWORD*)v20_.v21 + v17))((__int64)v20_.v21);
  LABEL_17:
    result = v18_.v19;
    if (v18_.v19 != v18_.v18) {
      goto LABEL_18;
    }
  LABEL_5:
    v14 = 32;
    {
      (_QWORD*)(*(__int64 (**)(__int64))(*result + v14))((__int64)result);
      return;
    }
  }
  v20_.v21 = nullptr;
  GameRoutine_ad6d20(v9, a1, a2);
  result = v20_.v21;
  if (v20_.v21 == v20_.v20) {
    goto LABEL_5;
  }
LABEL_18:
  if (result == nullptr) {
    result;
    return;
  }
  v14 = 40;
  {
    (_QWORD*)(*(__int64 (**)(__int64))(*result + v14))((__int64)result);
    return;
  }
}

#pragma GCC visibility pop
