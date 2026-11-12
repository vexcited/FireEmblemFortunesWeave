#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1553220(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fe3428[])();
extern __int64 (*game_hub_Time_vtable[])();
extern __int64 GameData_220d638;
extern __int64 GameData_220f848;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_script_hub_g_frame_counter;
extern int GameData_2216250;
__int64
Time_Destructor_e1dfb0_alt1(__int64 result) __asm__("Time_Destructor_e1dfb0");
__int64 Time_e1e170(__int64 a1);
__int64 GameRoutine_1553220_alt1(__int64 result) __asm__("GameRoutine_1553220");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Time_Destructor_e1dfb0(__int64 a1);

void Time_Destructor_e1dfb0(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  *(_QWORD*)a1 = game_hub_Time_vtable;
  *(_DWORD*)(game_script_hub_g_frame_counter + 156) = 1065353216;
  if (*(_BYTE*)(a1 + 8) != 0) {
    *(_WORD*)(a1 + 8) = 0;
    v2 = GameData_220f848;
    if (*(_BYTE*)(GameData_220f848 + 273) == 1) {
      GameRoutine_1553220_alt1(15);
      *(_BYTE*)(v2 + 273) = 0;
    }
    v3 = (_QWORD*)game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
      v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
      v7 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
      v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
      v8 = v6 == v7;
      v9 = v4 - 1 + v5;
      v10 = v9 >> 7;
      v11 = v9 & 0x7F;
      v12 = 16 * (v6 - v7) - 1;
      v13 = *(_QWORD*)(v7 + 8 * v10);
      if (v8) {
        v12 = 0;
      }
      v14 = v13 + 32 * v11;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
          *(_DWORD*)v14 & 0xFFFFFFFD |
          (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
      v3[21] = *(_QWORD*)(v14 + 24);
      v15 = *(_QWORD*)(v14 + 16);
      v3[27] = v4 - 1;
      v3[20] = v15;
      if ((unsigned __int64)(v12 - (v4 + v5) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        v16 = *(_QWORD*)(v6 - 8);
        if (v16 != 0) {
          v17 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
          v6 = v3[24];
        }
        v3[24] = v6 - 8;
      }
    }
  }
  v18 = *(_QWORD*)(a1 + 40);
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak_alt1(v18);
  }
  v19 = *(_QWORD*)(a1 + 24);
  if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
    std___1___shared_weak_count___release_weak_alt1(v19);
  }
  *(_QWORD*)a1 = GameData_1fe3428;
  if (GameData_220d638 == a1) {
    GameData_220d638 = 0;
    GameData_2216250 = 0;
  }
}

__int64 Time_e1e170(__int64 a1)
{
  unsigned int v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v1 = *(unsigned __int8*)(a1 + 8);
  if (*(_BYTE*)(a1 + 8) != 0) {
    *(_WORD*)(a1 + 8) = 0;
    v2 = GameData_220f848;
    if (*(_BYTE*)(GameData_220f848 + 273) == 1) {
      GameRoutine_1553220_alt1(15);
      *(_BYTE*)(v2 + 273) = 0;
    }
    v3 = (_QWORD*)game_ProcGameSkipView_instance_;
    if (game_ProcGameSkipView_instance_ != 0) {
      v5 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 208);
      v4 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 216);
      v7 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 184);
      v6 = *(_QWORD*)(game_ProcGameSkipView_instance_ + 192);
      v8 = v6 == v7;
      v9 = v4 - 1 + v5;
      v10 = v9 >> 7;
      v11 = v9 & 0x7F;
      v12 = 16 * (v6 - v7) - 1;
      v13 = *(_QWORD*)(v7 + 8 * v10);
      if (v8) {
        v12 = 0;
      }
      v14 = v13 + 32 * v11;
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) =
          *(_DWORD*)v14 & 0xFFFFFFFD |
          (2 * ((*(_DWORD*)(game_ProcGameSkipView_instance_ + 156) & 2) != 0));
      v3[21] = *(_QWORD*)(v14 + 24);
      v15 = *(_QWORD*)(v14 + 16);
      v3[27] = v4 - 1;
      v3[20] = v15;
      if ((unsigned __int64)(v12 - (v4 + v5) - 255) <= 0xFFFFFFFFFFFFFEFFLL) {
        v16 = *(_QWORD*)(v6 - 8);
        if (v16 != 0) {
          v17 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v17 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v16);
          v6 = v3[24];
        }
        v3[24] = v6 - 8;
      }
    }
  }
  return v1;
}

#pragma GCC visibility pop
