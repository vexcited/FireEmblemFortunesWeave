#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_6c47b0(__int64, _BYTE*, char, char);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern _DWORD* GameData_2131518;
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_2044368[])();
extern __int64 (*game_KnownManager_vtable[])();
extern __int64 GameData_2131520;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
void KnownManager_Destructor(_QWORD* a1);
__int64 GameHr_6c47b0(__int64, _BYTE*, char, char);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

void KnownManager_Destructor(_QWORD* a1)
{
  __int64* v1;
  __int64* v2;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  char v11[4];
  int v12;

  v1 = (__int64*)a1[1];
  v2 = (__int64*)a1[2];
  *a1 = game_KnownManager_vtable;
  if (v1 != v2) {
    v4 = game_g_shared_system_skills_ptr;
    do {
      v6 = *v1;
      v7 = game_GameModeData_instance_;
      v11[0] = 9;
      if (game_GameModeData_instance_ != 0) {
        v7 = *(_QWORD*)(game_GameModeData_instance_ + 96);
      }
      v5 = true;
      if (*(_QWORD*)(v6 + 392) != v7 && (*(_BYTE*)(v6 + 418) & 8) == 0) {
        v8 = v6;
        v12 = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x4LL) + v4) & 0xFFF;
        v9 = game_HasSkill((_QWORD*)(v6 + 1744), (unsigned int*)&v12);
        v6 = v8;
        if ((v9 & 1) != 0 && v11[0] != 9) {
          v5 = false;
        }
      }
      GameHr_6c47b0(v6, v11, v5, 0);
      ++v1;
    } while (v1 != v2);
    v1 = (__int64*)a1[1];
  }
  a1[2] = v1;
  if (v1 != nullptr) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, (__int64)v1);
  }
  *a1 = GameData_2044368;
  if (*(_QWORD**)GameData_2131520 == a1) {
    *(_QWORD*)GameData_2131520 = 0;
    *GameData_2131518 = 0;
  }
}

#pragma GCC visibility pop
