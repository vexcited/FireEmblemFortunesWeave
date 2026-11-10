#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e5b50(__int64, __int64*, __int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_2174af8;
extern __int64 (*game_facility_anonymous_ProcTheaterInfo_vtable[])();
extern __int64 GameData_21c9d00;
extern __int64 GameData_21f3ff8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcTheaterMenu_Unknown102(__int64 a1);
__int64 ProcTheaterMenu_Unknown146(__int64 a1, __int64* a2);
_QWORD* GameRoutine_7a8220(_QWORD* result, _QWORD*);
__int64 game_facility_949fe0(__int64);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__attribute__((swiftcall)) void ProcTheaterMenu_Unknown66(PSEUDO_X8 x8_);

__attribute__((swiftcall)) void ProcTheaterMenu_Unknown66(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  struct {
    _QWORD v7[2];
    __int64 v8;
  } v7_;

  a1[1] = 0;
  a1[2] = 0;
  *a1 = 0;
  HIBYTE(v7_.v7[0]) = 0;
  LOBYTE(v7_.v7[0]) = 12;
  *(_DWORD*)((char*)v7_.v7 + 1) = -441211160;
  *(_WORD*)((char*)v7_.v7 + 5) = -30838;
  GameRoutine_7a8220(a1, v7_.v7);
  if ((v7_.v7[0] & 1) != 0 && v7_.v8 != 0) {
    v2 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v2 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
  }
  v3 = *(unsigned int*)(GameData_21f3ff8 + 8);
  if ((v3 & 0x80000000) != 0) {
    v4 = 0;
  }
  else {
    v4 = *(_QWORD*)(*(_QWORD*)(GameData_21c9d00 + 64) + 8 * v3);
  }
  result = game_facility_949fe0(v4);
  if ((unsigned int)result >> 22 == 0) {
    HIBYTE(v7_.v7[0]) = 0;
    LOBYTE(v7_.v7[0]) = 12;
    *(_DWORD*)((char*)v7_.v7 + 1) = -443237146;
    *(_WORD*)((char*)v7_.v7 + 5) = -30838;
    result = (__int64)GameRoutine_7a8220(a1, v7_.v7);
    if ((v7_.v7[0] & 1) != 0 && v7_.v8 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      {
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v6);
        return;
      }
    }
  }
  {
    result;
    return;
  }
}

__int64 ProcTheaterMenu_Unknown102(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v8;
  __int64 v10;
  __int64 v11;

  v1 = *(unsigned int*)(GameData_21f3ff8 + 8);
  if ((v1 & 0x80000000) == 0) {
    v2 = *(_QWORD*)(*(_QWORD*)(GameData_21c9d00 + 64) + 8 * v1);
    if (v2 != 0) {
      v4 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 216, 16, 0);
      v10 = 0;
      v11 = 0;
      GameRoutine_15e5b50(v4, &v10, 0);
      v5 = v11;
      if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
      }
      *(_QWORD*)(v4 + 208) = v2;
      *(_QWORD*)v4 = game_facility_anonymous_ProcTheaterInfo_vtable;
      v6 = *(_QWORD*)(a1 + 40);
      if (v6 != 0) {
        *(_QWORD*)(v6 + 48) = v4;
        *(_QWORD*)(v4 + 56) = *(_QWORD*)(a1 + 40);
      }
      *(_QWORD*)(a1 + 40) = v4;
      *(_QWORD*)(v4 + 24) = "ProcTheaterInfo";
      *(_QWORD*)(v4 + 32) = a1;
      *(_DWORD*)(v4 + 140) = game_HashString32();
      *(_QWORD*)(v4 + 64) = 0;
      *(_QWORD*)(v4 + 72) = 24;
      *(_QWORD*)(v4 + 80) = 1;
      *(_QWORD*)(v4 + 8) = &GameData_2174af8;
      *(_QWORD*)(v4 + 16) = &GameData_2174af8;
      (*(void (**)(__int64))(*(_QWORD*)v4 + 32LL))(v4);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 136LL))(v4) & 1) != 0 &&
          (*(_WORD*)(v4 + 136) & 0x100) == 0) {
        *(_WORD*)(v4 + 136) |= 0x100u;
      }
      v7 = *(_BYTE**)(v4 + 32);
      v8 = v7[138];
      if (v8 == 0) {
        (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v4 + 32));
        v8 = v7[138];
      }
      v7[138] = v8 + 1;
      *(_WORD*)(v4 + 136) |= 2u;
    }
  }
  return 11;
}

__int64 ProcTheaterMenu_Unknown146(__int64 a1, __int64* a2)
{
  __int64 result;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v4 = a2[1];
  v5 = a2[2];
  if (v4 >= v5) {
    v7 = *a2;
    v8 = v4 - *a2;
    v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
    if (v9 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x333333333333333LL) {
      v12 = 0x666666666666666LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v13 = result;
      v14 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
      LODWORD(result) = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    *(_QWORD*)v15 = &GameData_1a9f09e;
    *(_QWORD*)(v15 + 8) = "MID_KeyHelp_HelpDetail";
    *(_BYTE*)(v15 + 28) = 0;
    *(_QWORD*)(v15 + 32) = 0;
    *(_BYTE*)(v15 + 16) = 1;
    v16 = v14 + 40 * v12;
    v6 = v14 + v8 + 40;
    *(_DWORD*)(v15 + 20) = 2;
    *(_DWORD*)(v15 + 24) = result;
    result = memcpy(v14, v7, v8);
    *a2 = v14;
    a2[1] = v6;
    a2[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v17, v7);
    }
  }
  else {
    *(_BYTE*)(v4 + 28) = 0;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)v4 = &GameData_1a9f09e;
    *(_QWORD*)(v4 + 8) = "MID_KeyHelp_HelpDetail";
    v6 = v4 + 40;
    *(_BYTE*)(v4 + 16) = 1;
    *(_DWORD*)(v4 + 20) = 2;
    *(_DWORD*)(v4 + 24) = result;
  }
  a2[1] = v6;
  return result;
}

#pragma GCC visibility pop
