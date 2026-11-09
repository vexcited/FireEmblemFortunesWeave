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
__int64 ProcInOutAnim_Destructor(__int64 a1);
__int64 GameRoutine_15638b0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_1562680(_QWORD, _QWORD, long double);
__int64 LayoutAccessor_15636c0(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 ProcInOutAnim_173fac0(__int64 a1, char a2);

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
  __int64 result;
  long double v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  long double v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  result = *(_QWORD*)(a1 + 160);
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v6 = *(_QWORD*)(a1 + 152);
      v7 = result;
      if (v6 != 0) {
        LODWORD(v5) = 1.0;
        if ((*(_BYTE*)(a1 + 200) & 1) != 0) {
          v8 = *(_QWORD*)(a1 + 216);
        }
        else {
          v8 = a1 + 201;
        }
        result = LayoutAccessor_1562680(*(_QWORD*)(a1 + 152), v8, v5);
        if ((a2 & 1) != 0) {
          if ((*(_BYTE*)(a1 + 200) & 1) != 0) {
            v10 = *(_QWORD*)(a1 + 216);
          }
          else {
            v10 = a1 + 201;
          }
          GameRoutine_15638b0(v6, v10, 1);
          if ((*(_BYTE*)(a1 + 200) & 1) != 0) {
            v11 = *(_QWORD*)(a1 + 216);
          }
          else {
            v11 = a1 + 201;
          }
          result = LayoutAccessor_15636c0(v6, v11, 0);
        }
        v12 = *(_QWORD*)(a1 + 256);
        if ((*(_BYTE*)(a1 + 248) & 1) == 0) {
          v12 = *(_BYTE*)(a1 + 248) >> 1;
        }
        if (v12 != 0) {
          LODWORD(v9) = 1.0;
          v13 =
              (*(_BYTE*)(a1 + 248) & 1) != 0 ? *(_QWORD*)(a1 + 264) : a1 + 249;
          result = LayoutAccessor_1562680(v6, v13, v9);
          if ((a2 & 1) != 0) {
            if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
              v14 = *(_QWORD*)(a1 + 264);
            }
            else {
              v14 = a1 + 249;
            }
            GameRoutine_15638b0(v6, v14, 1);
            if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
              v15 = *(_QWORD*)(a1 + 264);
            }
            else {
              v15 = a1 + 249;
            }
            result = LayoutAccessor_15636c0(v6, v15, 0);
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
      if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        return std___1___shared_weak_count___release_weak();
      }
    }
  }
  return result;
}

__int64 ProcInOutAnim_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)a1 = game_gameui_ProcInOutAnim_vtable;
  if ((*(_BYTE*)(a1 + 248) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 264);
    if (v2 != 0) {
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v2);
    }
  }
  if ((*(_BYTE*)(a1 + 224) & 1) != 0) {
    v4 = *(_QWORD*)(a1 + 240);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v5,
                                    v4);
    }
  }
  if ((*(_BYTE*)(a1 + 200) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 216);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v7,
                                    v6);
    }
  }
  if ((*(_BYTE*)(a1 + 176) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 192);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                    v8);
    }
  }
  if (*(_QWORD*)(a1 + 160) != 0) {
    std___1___shared_weak_count___release_weak();
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

#pragma GCC visibility pop
