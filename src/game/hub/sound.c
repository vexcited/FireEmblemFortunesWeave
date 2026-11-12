#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fe30c0[])();
extern __int64 (*game_hub_Sound_vtable[])();
extern __int64 GameData_220b6d8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_sound_g_game_sound;
extern __int64* game_sound_g_game_sound_ptr[5];
extern int GameData_2215db8;
__int64 Sound_Destructor_alt1(__int64 a1) __asm__("Sound_Destructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Sound_Destructor(__int64 a1);

void Sound_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;

  *(_QWORD*)a1 = game_hub_Sound_vtable;
  if ((*(_BYTE*)(a1 + 57) & 1) == 0) {
    *(_BYTE*)(a1 + 57) = 1;
    if (game_sound_g_game_sound != 0) {
      *(_BYTE*)(game_sound_g_game_sound + 612) = 0;
    }
  }
  if ((*(_BYTE*)(a1 + 56) & 1) == 0) {
    *(_BYTE*)(a1 + 56) = 1;
    if (*game_sound_g_game_sound_ptr[0] != 0) {
      *(_BYTE*)(*game_sound_g_game_sound_ptr[0] + 600) = 1;
    }
  }
  v2 = *(_QWORD*)(a1 + 80);
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = *(_QWORD*)(a1 + 32);
  if (v3 != 0) {
    v4 = *(_QWORD*)(a1 + 40);
    if (v3 == v4) {
      goto LABEL_17;
    }
    do {
      v5 = *(_QWORD*)(v4 - 8);
      if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak_alt1(v5);
      }
      v4 -= 16;
    } while (v4 != v3);
    v6 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(a1 + 40) = v3;
    v3 = v6;
    if (v6 != 0) {
    LABEL_17:
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v3);
    }
  }
  v8 = *(_QWORD*)(a1 + 8);
  if (v8 != 0) {
    v9 = *(_QWORD*)(a1 + 16);
    if (v8 == v9) {
      goto LABEL_28;
    }
    do {
      v10 = *(_QWORD*)(v9 - 8);
      if (v10 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak_alt1(v10);
      }
      v9 -= 16;
    } while (v9 != v8);
    v11 = *(_QWORD*)(a1 + 8);
    *(_QWORD*)(a1 + 16) = v8;
    v8 = v11;
    if (v11 != 0) {
    LABEL_28:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v12, v8);
    }
  }
  *(_QWORD*)a1 = GameData_1fe30c0;
  if (GameData_220b6d8 == a1) {
    GameData_220b6d8 = 0;
    GameData_2215db8 = 0;
  }
}

#pragma GCC visibility pop
