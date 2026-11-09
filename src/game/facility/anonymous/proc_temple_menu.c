#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_15e5b50(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString32(void);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_2174af8;
extern __int64 (*game_facility_anonymous_ProcVolunteerInfo_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcTempleMenu_Unknown102(__int64 a1);
_BYTE* ProcTempleMenu_Unknown145(_BYTE* result, __int64* a2);

__int64 ProcTempleMenu_Unknown102(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  char v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  if (*(_BYTE*)(a1 + 1072) != 1) {
    return 0;
  }
  v13 = v1;
  v14 = v2;
  v3 = *(_QWORD*)(a1 + 1064);
  if (v3 != 0) {
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        216, 16, 0);
    v11 = 0;
    v12 = 0;
    GameRoutine_15e5b50(v5, &v11, 0);
    v6 = v12;
    if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
    *(_QWORD*)(v5 + 208) = v3;
    *(_QWORD*)v5 = game_facility_anonymous_ProcVolunteerInfo_vtable;
    v7 = *(_QWORD*)(a1 + 40);
    if (v7 != 0) {
      *(_QWORD*)(v7 + 48) = v5;
      *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v5;
    *(_QWORD*)(v5 + 24) = "ProcVolunteerInfo";
    *(_QWORD*)(v5 + 32) = a1;
    *(_DWORD*)(v5 + 140) = game_HashString32();
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 24;
    *(_QWORD*)(v5 + 80) = 1;
    *(_QWORD*)(v5 + 8) = &GameData_2174af8;
    *(_QWORD*)(v5 + 16) = &GameData_2174af8;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
        (*(_WORD*)(v5 + 136) & 0x100) == 0) {
      *(_WORD*)(v5 + 136) |= 0x100u;
    }
    v8 = *(_BYTE**)(v5 + 32);
    v9 = v8[138];
    if (v9 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v8 + 64LL))(*(_QWORD*)(v5 + 32));
      v9 = v8[138];
    }
    v8[138] = v9 + 1;
    *(_WORD*)(v5 + 136) |= 2u;
  }
  return 11;
}

_BYTE* ProcTempleMenu_Unknown145(_BYTE* result, __int64* a2)
{
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;

  if (result[1072] == 1) {
    result =
        (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)result + 192LL))(result);
    v3 = a2[1];
    v4 = a2[2];
    if (v3 >= v4) {
      v6 = *a2;
      v7 = v3 - *a2;
      v8 = 1 - 0x3333333333333333LL * (v7 >> 3);
      if (v8 > 0x666666666666666LL) {
        GameRoutine_874520(result);
      }
      v9 = fw_memory_g_heap_manager_ptr;
      v10 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v4 - v6) >> 3);
      if (2 * v10 > v8) {
        v8 = 2 * v10;
      }
      if (v10 >= 0x333333333333333LL) {
        v11 = 0x666666666666666LL;
      }
      else {
        v11 = v8;
      }
      if (v11 != 0) {
        if (v11 > 0x666666666666666LL) {
          GameRoutine_60a210(result);
        }
        v12 = (int)result;
        v13 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v11, 16, 0);
        LODWORD(result) = v12;
      }
      else {
        v13 = 0;
      }
      v14 = v13 + v7;
      *(_QWORD*)v14 = &GameData_1a9f09e;
      *(_QWORD*)(v14 + 8) = "MID_KeyHelp_HelpDetail";
      *(_BYTE*)(v14 + 28) = 0;
      *(_QWORD*)(v14 + 32) = 0;
      *(_BYTE*)(v14 + 16) = 1;
      v15 = v13 + 40 * v11;
      v5 = v13 + v7 + 40;
      *(_DWORD*)(v14 + 20) = 2;
      *(_DWORD*)(v14 + 24) = (_DWORD)result;
      result = (_BYTE*)memcpy(v13, v6, v7);
      *a2 = v13;
      a2[1] = v5;
      a2[2] = v15;
      if (v6 != 0) {
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
          v16 = 56;
        }
        result = (_BYTE*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v16);
      }
    }
    else {
      *(_BYTE*)(v3 + 28) = 0;
      *(_QWORD*)(v3 + 32) = 0;
      *(_QWORD*)v3 = &GameData_1a9f09e;
      *(_QWORD*)(v3 + 8) = "MID_KeyHelp_HelpDetail";
      v5 = v3 + 40;
      *(_BYTE*)(v3 + 16) = 1;
      *(_DWORD*)(v3 + 20) = 2;
      *(_DWORD*)(v3 + 24) = (_DWORD)result;
    }
    a2[1] = v5;
  }
  return result;
}

#pragma GCC visibility pop
