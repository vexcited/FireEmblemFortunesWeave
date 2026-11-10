#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_bc9020(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fd0140[])();
extern __int64 GameData_2203100;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212e340[2];
extern __int64* snd_g_fileIndex_ptr[2];
__int64 eft_data_Manager_LoadAsync(_QWORD* a1);
__int64 ElfFile_631220(__int64*, __int64);
int* eft_data_Manager_LoadAsync_lambda0_Invoke(__int64 a1, __int64* a2);

__int64 eft_data_Manager_LoadAsync(_QWORD* a1)
{
  _QWORD* v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;
  _QWORD v8[3];
  __int64 v9;
  __int64 v10;
  int v11;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v2[2] = 0;
  v3 = GameData_212e340[0];
  v4 = a1[1];
  v2[5] = a1;
  *v2 = v3 + 2;
  v2[1] = 0;
  v2[4] = GameData_1fd0140;
  v2[8] = v2 + 4;
  *a1 = v2 + 4;
  a1[1] = v2;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *snd_g_fileIndex_ptr[0];
  v8[0] = "Effect/Data/data_effect.elf";
  v8[1] = 27;
  v6 = a1[1];
  v8[2] = *a1;
  v9 = v6;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
  }
  v10 = GameData_2203100;
  v11 = 1;
  a1[2] = GameRoutine_bc9020(v5, v8);
  result = v9;
  if (v9 != 0) {
    return std___1___shared_weak_count___release_weak(v9);
  }
  return result;
}

int* eft_data_Manager_LoadAsync_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  int* v4;
  int v5;
  int* result;
  int v7;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)(v3 + 24) =
      ElfFile_631220((__int64*)(*a2 + 800), (__int64)"eft::data::s_data");
  v4 = (int*)ElfFile_631220((__int64*)(v2 + 800),
                            (__int64)"eft::data::s_dataCount");
  if (v4 != nullptr) {
    v5 = *v4;
  }
  else {
    v5 = 0;
  }
  *(_DWORD*)(v3 + 32) = v5;
  *(_QWORD*)(v3 + 40) =
      ElfFile_631220((__int64*)(v2 + 800), (__int64)"eft::data::s_category");
  result = (int*)ElfFile_631220((__int64*)(v2 + 800),
                                (__int64)"eft::data::s_categoryCount");
  if (result != nullptr) {
    v7 = *result;
  }
  else {
    v7 = 0;
  }
  *(_DWORD*)(v3 + 48) = v7;
  return result;
}

#pragma GCC visibility pop
