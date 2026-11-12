#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void game_menu_f6be60(PSEUDO_X8, __int64, int);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
const char* game_HashString32(const char* result);
extern _UNKNOWN GameData_216de68;
extern __int64 GameData_21ec7b8;
extern __int64 fw_memory_g_heap_manager_ptr;
unsigned __int64 GameRoutine_1130770(__int64, const char*, __int64*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_menu_anonymous_f6fb70(__int64 a1, int a2);
void game_menu_anonymous_f70590(__int64 a1);

void game_menu_anonymous_f6fb70(__int64 a1, int a2)
{
  int v3;
  const char* v4;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  char v9;
  __int64 v10;
  struct {
    __int64 v11[2];
    const char* v12;
  } v11_;

  game_menu_f6be60((void*)(v11_.v11), a1 + 152, a2);
  v3 = v11_.v11[0] & 1;
  if ((v11_.v11[0] & 1) != 0) {
    v4 = v11_.v12;
  }
  else {
    v4 = (char*)v11_.v11 + 1;
  }
  if (GameData_21ec7b8 == 0 && v4 != nullptr) {
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v6, v4, nullptr);
    v7 = *(_QWORD*)(a1 + 40);
    if (v7 != 0) {
      *(_QWORD*)(v7 + 48) = v6;
      *(_QWORD*)(v6 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v6;
    *(_QWORD*)(v6 + 24) = "talk::Seq";
    *(_QWORD*)(v6 + 32) = a1;
    *(_DWORD*)(v6 + 140) = (unsigned int)game_HashString32("talk::Seq");
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 24;
    *(_QWORD*)(v6 + 80) = 1;
    *(_QWORD*)(v6 + 8) = &GameData_216de68;
    *(_QWORD*)(v6 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v6 + 32LL))(v6);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 136LL))(v6) & 1) != 0 &&
        (*(_WORD*)(v6 + 136) & 0x100) == 0) {
      *(_WORD*)(v6 + 136) |= 0x100u;
    }
    v8 = *(_BYTE**)(v6 + 32);
    v9 = v8[138];
    if (v9 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v8 + 64LL))(*(_QWORD*)(v6 + 32));
      v9 = v8[138];
    }
    v8[138] = v9 + 1;
    *(_WORD*)(v6 + 136) |= 2u;
    v3 = v11_.v11[0] & 1;
  }
  if (v3 != 0 && v11_.v12 != nullptr) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  (__int64)v11_.v12);
  }
}

void game_menu_anonymous_f70590(__int64 a1)
{
  int v2;
  const char* v3;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v8;
  __int64 v9;
  struct {
    __int64 v10[2];
    const char* v11;
  } v10_;

  game_menu_f6be60((void*)(v10_.v10), a1 + 152, 2 * *(_DWORD*)(a1 + 168) + 4);
  v2 = v10_.v10[0] & 1;
  if ((v10_.v10[0] & 1) != 0) {
    v3 = v10_.v11;
  }
  else {
    v3 = (char*)v10_.v10 + 1;
  }
  if (GameData_21ec7b8 == 0 && v3 != nullptr) {
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v5, v3, nullptr);
    v6 = *(_QWORD*)(a1 + 40);
    if (v6 != 0) {
      *(_QWORD*)(v6 + 48) = v5;
      *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v5;
    *(_QWORD*)(v5 + 24) = "talk::Seq";
    *(_QWORD*)(v5 + 32) = a1;
    *(_DWORD*)(v5 + 140) = (unsigned int)game_HashString32("talk::Seq");
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 24;
    *(_QWORD*)(v5 + 80) = 1;
    *(_QWORD*)(v5 + 8) = &GameData_216de68;
    *(_QWORD*)(v5 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
        (*(_WORD*)(v5 + 136) & 0x100) == 0) {
      *(_WORD*)(v5 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v5 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v5 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v5 + 136) |= 2u;
    v2 = v10_.v10[0] & 1;
  }
  if (v2 != 0 && v10_.v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  (__int64)v10_.v11);
  }
}

#pragma GCC visibility pop
