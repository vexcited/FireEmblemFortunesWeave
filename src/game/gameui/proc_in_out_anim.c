#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_173fac0(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gameui_ProcInOutAnim_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
__int64 ProcInOutAnim_Unknown2(__int64 result);
__int64
ProcInOutAnim_Destructor_alt1(__int64 a1) __asm__("ProcInOutAnim_Destructor");
__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_15636c0(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ProcInOutAnim_173fac0(__int64 a1, char a2);
__int64 LayoutAccessor_15636c0_alt1(__int64 result, __int64, char,
                                    float) __asm__("LayoutAccessor_15636c0");
__int64 game_ProcInst_Unregister_alt1(__int64 result) __asm__(
    "game_ProcInst_Unregister");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
float LayoutAccessor_15638b0(__int64*, char*, char);
unsigned __int64 GameHr_1562680(unsigned __int64 result, char*, float);
void GameRoutine_658c00_alt1(__int64*) __asm__("GameRoutine_658c00");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcInOutAnim_Destructor(__int64 a1);

__int64 ProcInOutAnim_Unknown2(__int64 result)
{
  float v1;
  float v2;
  float v3;

  v1 = *(float*)(result + 168);
  if (v1 > 0.0) {
    v2 = 60.0 / (float)*(int*)(game_g_frame_clock + 476);
    if (v2 <= 0.0) {
      v2 = 1.0;
    }
    v3 = v1 - v2;
    *(float*)(result + 168) = v3;
    if (v3 <= 0.0) {
      return GameRoutine_173fac0(result, 0);
    }
  }
  return result;
}

__int64 ProcInOutAnim_173fac0(__int64 a1, char a2)
{

#pragma clang fp contract(off)
  __int64 result;
  __int64* v5;
  __int64 v6;
  char* v7;
  char* v8;
  float v9;
  __int64 v10;
  __int64 v11;
  char* v12;
  char* v13;
  float v14;
  __int64 v15;
  __int64 v16;

  result = *(_QWORD*)(a1 + 160);
  if (result != 0) {
    result = std___1___shared_weak_count_lock_alt1(result);
    if (result != 0) {
      v5 = *(__int64**)(a1 + 152);
      v6 = result;
      if (v5 != nullptr) {
        if ((*(_BYTE*)(a1 + 200) & 1) != 0) {
          v7 = *(char**)(a1 + 216);
        }
        else {
          v7 = (char*)(a1 + 201);
        }
        result =
            GameHr_1562680(*(_QWORD*)(a1 + 152), v7, 0x1.0000000000000p+0f);
        if ((a2 & 1) != 0) {
          if ((*(_BYTE*)(a1 + 200) & 1) != 0) {
            v8 = *(char**)(a1 + 216);
          }
          else {
            v8 = (char*)(a1 + 201);
          }
          v9 = LayoutAccessor_15638b0(v5, v8, 1);
          if ((*(_BYTE*)(a1 + 200) & 1) != 0) {
            v10 = *(_QWORD*)(a1 + 216);
          }
          else {
            v10 = a1 + 201;
          }
          result = LayoutAccessor_15636c0_alt1((__int64)v5, v10, 0, v9);
        }
        v11 = *(_QWORD*)(a1 + 256);
        if ((*(_BYTE*)(a1 + 248) & 1) == 0) {
          v11 = *(_BYTE*)(a1 + 248) >> 1;
        }
        if (v11 != 0) {
          v12 = (*(_BYTE*)(a1 + 248) & 1) != 0 ? *(char**)(a1 + 264)
                                               : (char*)(a1 + 249);
          result =
              GameHr_1562680((unsigned __int64)v5, v12, 0x1.0000000000000p+0f);
          if ((a2 & 1) != 0) {
            if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
              v13 = *(char**)(a1 + 264);
            }
            else {
              v13 = (char*)(a1 + 249);
            }
            v14 = LayoutAccessor_15638b0(v5, v13, 1);
            if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
              v15 = *(_QWORD*)(a1 + 264);
            }
            else {
              v15 = a1 + 249;
            }
            result = LayoutAccessor_15636c0_alt1((__int64)v5, v15, 0, v14);
          }
        }
        v16 = *(_QWORD*)(a1 + 8);
        if (v16 != 0) {
          while (1) {
            if (*(_BYTE*)v16 == 2) {
              if (*(_DWORD*)(v16 + 32) == 2) {
                *(_QWORD*)(a1 + 16) = v16;
                *(_WORD*)(a1 + 136) &= ~0x80u;
                break;
              }
            }
            else if (*(_BYTE*)v16 == 0) {
              break;
            }
            v16 += 64;
          }
        }
        *(_WORD*)(a1 + 136) |= 8u;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        return std___1___shared_weak_count___release_weak_alt1(v6);
      }
    }
  }
  return result;
}

void ProcInOutAnim_Destructor(__int64 a1)
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

  *(_QWORD*)a1 = game_gameui_ProcInOutAnim_vtable;
  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 264);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v2);
    }
  }
  if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 240);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  if ((*(_BYTE*)(a1 + 200) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 216);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 192);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v8);
    }
  }
  v10 = *(_QWORD*)(a1 + 160);
  if (v10 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v10);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister_alt1(a1);
  GameRoutine_658c00_alt1((__int64*)(a1 + 88));
}

#pragma GCC visibility pop
