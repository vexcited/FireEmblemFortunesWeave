#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_gmap_ProcBeforeEncountSeq_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcBeforeEncountSeq_Destructor(__int64 a1);
__int64 ProcBeforeEncountSeq_DeletingDestructor(__int64 a1);
__int64 GameRoutine_1340560(_QWORD, _QWORD);
extern __int64 (*GameData_204c138[])();
extern __int64 GameData_21c96e8;
extern __int64 GameData_22566d8;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD* game_gmap_ProcBeforeEncountSeq_HideAnimal(__int64 a1, __int64 a2);
void ProcBeforeEncountSeq_154f0e0();
__int64 game_gmap_ProcBeforeEncountSeq_HideAnimal_closure_Invoke(__int64 a1,
                                                                 __int64* a2);
void game_gmap_ProcBeforeEncountSeq_EndStartBattle_closure_Invoke(__int64 a1,
                                                                  __int64 a2);
__int64 game_gmap_TroopMgr_EachEncountTroop(__int64 (*)(), __int64);
extern __int64 (*GameData_204c238[])();
float GameRoutine_135bea0();
__int64 game_gmap_ProcBeforeEncountSeq_EndStartBattle(__int64 a1);
void game_gmap_ProcBeforeEncountSeq_WaitEncountMotionTick_closure_Invoke(
    __int64 a1, __int64* a2);

_QWORD* game_gmap_ProcBeforeEncountSeq_HideAnimal(__int64 a1, __int64 a2)
{
  __int64 v2;
  _QWORD* result;
  __int64 v4;
  _QWORD* v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD v8[4];
  _QWORD* v9;
  _QWORD* v10;

  v2 = *(_QWORD*)(a1 + 152);
  result = v8;
  v8[0] = GameData_204c138;
  v9 = v8;
  if (v2 == 0) {
    goto LABEL_11;
  }
  v4 = *(_QWORD*)(GameData_21c96e8 + 8);
  v5 = *(_QWORD**)(v4 + 8);
  v6 = *(_QWORD**)(v4 + 16);
  if (v5 == v6) {
    result = v8;
  LABEL_11:
    v7 = 32;
    return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v7))(result);
  }
  do {
    if (*(_QWORD*)*v5 == v2) {
      v10 = (_QWORD*)*v5;
      if (v9 == nullptr) {
        GameRoutine_60a310(0, a2);
      }
      (*(void (**)(_QWORD*, _QWORD**))(*v9 + 48LL))(v9, &v10);
    }
    ++v5;
  } while (v5 != v6);
  result = v9;
  if (v9 == v8) {
    goto LABEL_11;
  }
  if (v9 == nullptr) {
    return result;
  }
  v7 = 40;
  return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v7))(result);
}

void ProcBeforeEncountSeq_154f0e0()
{
  if (GameData_22566d8 != 0) {
    *(_BYTE*)(GameData_22566d8 + 284) = 1;
  }
}

__int64 game_gmap_ProcBeforeEncountSeq_EndStartBattle(__int64 a1)
{
  __int64 (*v1)();
  __int64 result;
  __int64 v3;
  struct {
    _QWORD v4[4];
    _QWORD* v5;
  } v4_;

  v1 = *(__int64 (**)(void))(a1 + 152);
  v4_.v4[0] = GameData_204c238;
  v4_.v5 = v4_.v4;
  game_gmap_TroopMgr_EachEncountTroop(v1, (__int64)v4_.v4);
  result = (__int64)v4_.v5;
  if (v4_.v5 == v4_.v4) {
    v3 = 32;
  }
  else {
    if (v4_.v5 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*v4_.v5 + v3))((__int64)v4_.v5);
}

__int64 game_gmap_ProcBeforeEncountSeq_HideAnimal_closure_Invoke(__int64 a1,
                                                                 __int64* a2)
{
  __int64 result;
  __int64 v3;
  bool v4;

  result = *a2;
  if (*(_QWORD*)(*a2 + 96) == 0) {
    v3 = *(_QWORD*)(result + 552);
    v4 = v3 != 0 && *(_QWORD*)(result + 104) == 0;
    if (v4 &&
        *(__int16*)(result + 642) * *(__int16*)(result + 640) *
                *(__int16*)(result + 644) ==
            0 &&
        *(_QWORD*)(v3 + 352) != 0) {
      return GameRoutine_1340560(result, 4);
    }
  }
  return result;
}

void game_gmap_ProcBeforeEncountSeq_WaitEncountMotionTick_closure_Invoke(
    __int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  int v4;
  float v6;

  v2 = *a2;
  v3 = *(_QWORD*)(*a2 + 376);
  if (v3 != 0) {
    v4 = *(_DWORD*)(*(_QWORD*)(v3 + 72) + 120LL);
    if (v4 == 2017201876 || v4 == -1193575777) {
      v6 = GameRoutine_135bea0();
      v3 = *(_QWORD*)(v2 + 376);
      if (v3 == 0) {
        return;
      }
    }
    else {
      v6 = 0x1.0000000000000p+0f;
    }
    *(float*)(*(_QWORD*)(v3 + 304) + 12LL) = v6;
  }
}

void game_gmap_ProcBeforeEncountSeq_EndStartBattle_closure_Invoke(__int64 a1,
                                                                  __int64 a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(*(_QWORD*)a2 + 376LL);
  if (v2 != 0) {
    *(_DWORD*)(*(_QWORD*)(v2 + 304) + 12LL) = 1065353216;
  }
}

__int64 ProcBeforeEncountSeq_Destructor(__int64 a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)a1 = game_gmap_ProcBeforeEncountSeq_vtable;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 192) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = *(_QWORD*)(a1 + 160);
  if (v6 != 0) {
    v7 = *v3;
    *(_QWORD*)(a1 + 168) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcBeforeEncountSeq_DeletingDestructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(a1 + 184);
  *(_QWORD*)a1 = game_gmap_ProcBeforeEncountSeq_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    *(_QWORD*)(a1 + 192) = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5, v1);
  }
  v6 = *(_QWORD*)(a1 + 160);
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    *(_QWORD*)(a1 + 168) = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8, v6);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v9 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v9 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v9, a1);
}

#pragma GCC visibility pop
