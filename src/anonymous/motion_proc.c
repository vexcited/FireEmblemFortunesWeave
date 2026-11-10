#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_118a440(_QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_819f40(_QWORD);
__int64 GameRoutine_81a540(_QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*anonymous_MotionProc_vtable[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
__int64 MotionProc_Destructor(__int64 a1);
__int64 MotionProc_DeletingDestructor(__int64 a1);
__int64 MotionProc_Unknown2(__int64 result);
__int64 GameRoutine_d2b5f0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_220f858;
extern __int64 (*eft_ClampCurve_ptr)();
extern int GameData_220f854;
bool MotionProc_118a440(_BOOL8 result);
__int64 anonymous_MotionProc_Create_closure_Invoke(__int64 result, __int64* a2);

__int64 anonymous_MotionProc_Create_closure_Invoke(__int64 result, __int64* a2)
{
  __int64 v2;

  v2 = *a2;
  if (*(_QWORD*)(*a2 + 152) == **(_QWORD**)(result + 8)) {
    **(_BYTE**)(result + 16) = 1;
    *(_BYTE*)(v2 + 160) = **(_BYTE**)(result + 24);
  }
  return result;
}

__int64 MotionProc_Destructor(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  unsigned __int64 v5;
  int v6;
  char v7;

  *(_QWORD*)a1 = anonymous_MotionProc_vtable;
  if (*(_BYTE*)(a1 + 160) == 1) {
    v2 = *(_QWORD*)(a1 + 152);
    v7 = 0;
    v5 = 0xBF800000BF800000LL;
    v6 = 1065353216;
    v3 = GameRoutine_819f40(*(_QWORD*)(v2 + 8));
    if (v3 != *(_DWORD*)(v2 + 16)) {
      GameRoutine_81a540(v2, v3, &v5);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 MotionProc_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  unsigned __int64 v6;
  int v7;
  char v8;

  *(_QWORD*)a1 = anonymous_MotionProc_vtable;
  if (*(_BYTE*)(a1 + 160) == 1) {
    v2 = *(_QWORD*)(a1 + 152);
    v8 = 0;
    v6 = 0xBF800000BF800000LL;
    v7 = 1065353216;
    v3 = GameRoutine_819f40(*(_QWORD*)(v2 + 8));
    if (v3 != *(_DWORD*)(v2 + 16)) {
      GameRoutine_81a540(v2, v3, &v6);
    }
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, a1);
}

__int64 MotionProc_Unknown2(__int64 result)
{
  __int64 v1;
  int v2;
  int v3;
  unsigned __int8* v4;
  unsigned int v5;
  bool v6;
  int v7;

  v1 = result;
  if (game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
          (((v2 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v3 = 2)
               : (v3 = 3),
           (v3 & v2) == 0) ||
      ((result = GameRoutine_118a440(*(_QWORD*)(result + 152))) & 1) == 0) {
    v4 = *(unsigned __int8**)(v1 + 16);
    if (v4 != nullptr) {
      v5 = *v4;
      v6 = v5 > 0x10;
      v7 = (1 << v5) & 0x1CE00;
      if (!v6 && v7 != 0) {
        *(_WORD*)(v1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(v1 + 136) |= 8u;
  }
  return result;
}

bool MotionProc_118a440(_BOOL8 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;

  if (result != 0) {
    v1 = *(_QWORD*)(result + 232);
    if (v1 != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_220f858,
                                memory_order_acquire) &
           1) == 0) {
        v13 = v1;
        v12 = __cxa_guard_acquire(&GameData_220f858);
        v1 = v13;
        if (v12 != 0) {
          GameData_220f854 = wld_Crc32(0, "CharacterAnimator", 17);
          __cxa_guard_release(&GameData_220f858);
          v1 = v13;
        }
      }
      v3 = *(_QWORD*)(v1 + 504);
      v2 = *(_QWORD*)(v1 + 512);
      v4 = v2;
      v5 = v2;
      do {
        if (v5 == v3) {
          return 0;
        }
        v6 = *(_DWORD*)(v5 - 16);
        v5 -= 16;
        v4 -= 16;
      } while (v6 != GameData_220f854);
      if (v2 == v4) {
        return 0;
      }
      v7 = *(_QWORD*)(v4 + 8);
      if (v7 == 0) {
        return 0;
      }
      v8 = *(_QWORD*)(v7 + 96);
      if (v8 == 0) {
        return 0;
      }
      v9 = GameRoutine_d2b5f0(*(_QWORD*)(v8 + 32) + 72LL);
      if ((v9 & 0x100000000LL) == 0) {
        return 0;
      }
      v10 =
          *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v8 + 24) + 72LL) + 104LL * (int)v9);
      if (v10 == 0) {
        return 0;
      }
      v11 = *(_QWORD*)(v10 + 16);
      return v11 == 0 || *(__int64 (**)())(v11 + 16) != eft_ClampCurve_ptr ||
             *(float*)v11 < *(float*)(v11 + 8);
    }
    else {
      return 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
