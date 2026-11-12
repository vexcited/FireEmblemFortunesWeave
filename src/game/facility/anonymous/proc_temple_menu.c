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
_BYTE* ProcTempleMenu_Unknown145_alt1(_BYTE* result, __int64* a2) __asm__(
    "ProcTempleMenu_Unknown145");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
void BasicInfo_15e5b50(__int64, __int64*, __int64);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_874520_alt1() __asm__("GameRoutine_874520");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcTempleMenu_Unknown145(_BYTE* a1, __int64* a2);

__int64 ProcTempleMenu_Unknown102(__int64 a1)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  char v9;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  if (*(_BYTE*)(a1 + 1072) != 1) {
    return 0;
  }
  v3 = *(_QWORD*)(a1 + 1064);
  if (v3 != 0) {
    v5 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 216, 16, 0);
    v11_.v11 = 0;
    v11_.v12 = 0;
    BasicInfo_15e5b50(v5, &v11_.v11, 0);
    v6 = v11_.v12;
    if (v11_.v12 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v11_.v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt1(v6);
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
    *(_DWORD*)(v5 + 140) =
        (unsigned int)game_HashString32_alt1("ProcVolunteerInfo");
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

void ProcTempleMenu_Unknown145(_BYTE* a1, __int64* a2)
{
  int v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  signed __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  if (a1[1072] == 1) {
    v3 = (*(__int64 (**)(_BYTE*))(*(_QWORD*)a1 + 192LL))(a1);
    v4 = a2[1];
    v5 = a2[2];
    if (v4 >= v5) {
      v7 = *a2;
      v8 = v4 - *a2;
      v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
      if (v9 > 0x666666666666666LL) {
        GameRoutine_874520_alt1();
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
          GameRoutine_60a210_alt1();
        }
        v13 = v3;
        v14 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
        v3 = v13;
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
      *(_DWORD*)(v15 + 24) = v3;
      memcpy_alt1(v14, v7, v8);
      *a2 = v14;
      a2[1] = v6;
      a2[2] = v16;
      if (v7 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v10 + v17, v7);
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
      *(_DWORD*)(v4 + 24) = v3;
    }
    a2[1] = v6;
  }
}

#pragma GCC visibility pop
