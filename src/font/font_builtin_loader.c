#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a46540(__int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_SleepThread(_QWORD);
__int64 nn_pl_GetBuiltInFontData(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD, _QWORD, _QWORD,
                                                  _QWORD, _QWORD);
__int64 FontBuiltinLoader_Destructor_alt1(__int64 result) __asm__(
    "FontBuiltinLoader_Destructor");
__int64 FontBuiltinLoader_DeletingDestructor_alt1(__int64 a1) __asm__(
    "FontBuiltinLoader_DeletingDestructor");
__int64
FontBuiltinLoader_Unknown2_alt1(__int64 result, __int64 a2,
                                int a3) __asm__("FontBuiltinLoader_Unknown2");
__int64 FontBuiltinLoader_Unknown3(__int64 result);
__int64 FontBuiltinLoader_Unknown4(__int64 a1);
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void FontBuiltinLoader_Destructor(__int64 a1);
void FontBuiltinLoader_DeletingDestructor(__int64 a1);
__int64 FontBuiltinLoader_Unknown2(__int64 result, const char* a2, int a3);

void FontBuiltinLoader_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    v1 = *(_QWORD*)(a1 + 56);
    if (v1 != 0) {
      v2 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v2 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, v1);
    }
  }
}

void FontBuiltinLoader_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 56);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v3);
    }
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v2 + v5, a1);
}

__int64 FontBuiltinLoader_Unknown2(__int64 result, const char* a2, int a3)
{
  char v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v7;
  const char* v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  char* v11;
  __int64 v12;
  char v13;
  char v14;
  __int64 v15;
  struct {
    _QWORD v16[2];
    char* v17;
  } v16_;

  if (a2 == nullptr) {
    return result;
  }
  v4 = result + 40;
  v3 = *(_BYTE*)(result + 40);
  v5 = result;
  *(_BYTE*)(result + 65) = 0;
  *(_BYTE*)(result + 64) = a3 != 0;
  if ((v3 & 1) != 0) {
    **(_BYTE**)(result + 56) = 0;
    *(_QWORD*)(result + 48) = 0;
  }
  else {
    *(_WORD*)(result + 40) = 0;
  }
  v7 = strlen_alt1(a2);
  GameRoutine_1a09ce0_alt1(v4, a2, v7);
  if ((*(_BYTE*)(v5 + 40) & 1) != 0) {
    v8 = *(const char**)(v5 + 56);
  }
  else {
    v8 = (const char*)(v5 + 41);
  }
  v9 = strlen_alt1(v8);
  if (v9 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v10 = v9;
  if (v9 >= 0x17) {
    if ((v9 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (v9 | 7) + 1;
    }
    v11 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v12, 16, 0);
    v16_.v16[1] = v10;
    v16_.v17 = v11;
    v16_.v16[0] = v12 | 1;
    goto LABEL_16;
  }
  LOBYTE(v16_.v16[0]) = 2 * v9;
  v11 = (char*)v16_.v16 + 1;
  if (v9 != 0) {
  LABEL_16:
    memcpy_alt1((__int64)v11, (__int64)v8, v10);
  }
  v11[v10] = 0;
  v13 = GameRoutine_a46540((__int64)v16_.v16);
  if ((v16_.v16[0] & 1) != 0 && v16_.v17 != nullptr) {
    v14 = v13;
    v15 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, (__int64)v16_.v17);
    v13 = v14;
  }
  *(_BYTE*)(v5 + 32) = 0x30201040005uLL >> (8 * v13);
  do {
    *(_BYTE*)(v5 + 65) =
        (nn_pl_GetBuiltInFontData(v5 + 8, *(unsigned __int8*)(v5 + 32),
                                  *(unsigned __int8*)(v5 + 64)) &
         1) == 0;
    result = nn_os_SleepThread(8000000);
  } while (*(_BYTE*)(v5 + 65) != 1);
  *(_BYTE*)(v5 + 65) = 1;
  return result;
}

__int64 FontBuiltinLoader_Unknown3(__int64 result)
{
  *(_BYTE*)(result + 65) = 0;
  return result;
}

__int64 FontBuiltinLoader_Unknown4(__int64 a1)
{
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    return *(_QWORD*)(a1 + 56);
  }
  else {
    return a1 + 41;
  }
}

#pragma GCC visibility pop
