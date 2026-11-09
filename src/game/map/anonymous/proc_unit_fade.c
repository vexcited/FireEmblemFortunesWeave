#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitAction_vtable[])();
extern __int64 (*game_map_anonymous_ProcUnitFade_vtable[])();
extern __int64 GameData_21cd100;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_ProcGameSkipView_instance_;
__int64 ProcUnitFade_Destructor(__int64 a1, long double a2, long double a3);
__int64 ProcUnitFade_DeletingDestructor(__int64 a1, long double a2,
                                        long double a3);
__int64 ProcUnitFade_770930(__int64 a1);
bool ProcUnitFade_Unknown18(__int64 a1);

__int64 ProcUnitFade_Destructor(__int64 a1, long double a2, long double a3)
{
  __int64 v3;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  int v12;

  v3 = *(_QWORD*)(a1 + 152);
  LODWORD(a2) = 1.0;
  DWORD1(a3) = 0;
  *(_QWORD*)a1 = game_map_anonymous_ProcUnitFade_vtable;
  v5 = *(unsigned __int8*)(v3 + 176);
  if (*(_BYTE*)(a1 + 160) != 0) {
    *(float*)&a2 = 0.0;
  }
  v12 = LODWORD(a2);
  if (v5 == 1) {
    v6 = *(_QWORD*)(v3 + 152);
    LODWORD(a3) = LODWORD(a2);
  LABEL_5:
    v7 = v3 + 152;
  LABEL_8:
    (*(void (**)(__int64, long double, long double))(v6 + 24))(v7, a2, a3);
    *(_QWORD*)(v3 + 160) = 0;
    *(_WORD*)(v3 + 176) = 256;
    *(_WORD*)(v3 + 20) |= 8u;
    goto LABEL_9;
  }
  if (*(float*)(v3 + 160) > 0.0) {
    v8 = LODWORD(a2);
    (*(void (**)(__int64))(*(_QWORD*)(v3 + 152) + 16LL))(v3 + 152);
    v6 = *(_QWORD*)(v3 + 152);
    v7 = v3 + 152;
    LODWORD(a3) = v8;
    goto LABEL_8;
  }
  if (((*(__int64 (**)(__int64, int*, __int64))(*(_QWORD*)(v3 + 152) + 8LL))(
           v3 + 152, &v12, v3 + 184) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v3 + 152) + 16LL))(v3 + 152);
    v6 = *(_QWORD*)(v3 + 152);
    LODWORD(a3) = v12;
    goto LABEL_5;
  }

LABEL_9:
  *(_QWORD*)a1 = game_map_anonymous_ProcUnitAction_vtable;
  v9 = GameData_21cd100;
  v10 = *(_DWORD*)(GameData_21cd100 + 16) - 1;
  *(_DWORD*)(GameData_21cd100 + 16) = v10;
  if (v10 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v9 + 8) + 8LL))(v9 + 8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcUnitFade_DeletingDestructor(__int64 a1, long double a2,
                                        long double a3)
{
  __int64 v3;
  int v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  __int64 v11;
  int v13;

  v3 = *(_QWORD*)(a1 + 152);
  LODWORD(a2) = 1.0;
  DWORD1(a3) = 0;
  *(_QWORD*)a1 = game_map_anonymous_ProcUnitFade_vtable;
  v5 = *(unsigned __int8*)(v3 + 176);
  if (*(_BYTE*)(a1 + 160) != 0) {
    *(float*)&a2 = 0.0;
  }
  v13 = LODWORD(a2);
  if (v5 == 1) {
    v6 = *(_QWORD*)(v3 + 152);
    LODWORD(a3) = LODWORD(a2);
  LABEL_5:
    v7 = v3 + 152;
  LABEL_8:
    (*(void (**)(__int64, long double, long double))(v6 + 24))(v7, a2, a3);
    *(_QWORD*)(v3 + 160) = 0;
    *(_WORD*)(v3 + 176) = 256;
    *(_WORD*)(v3 + 20) |= 8u;
    goto LABEL_9;
  }
  if (*(float*)(v3 + 160) > 0.0) {
    v8 = LODWORD(a2);
    (*(void (**)(__int64))(*(_QWORD*)(v3 + 152) + 16LL))(v3 + 152);
    v6 = *(_QWORD*)(v3 + 152);
    v7 = v3 + 152;
    LODWORD(a3) = v8;
    goto LABEL_8;
  }
  if (((*(__int64 (**)(__int64, int*, __int64))(*(_QWORD*)(v3 + 152) + 8LL))(
           v3 + 152, &v13, v3 + 184) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v3 + 152) + 16LL))(v3 + 152);
    v6 = *(_QWORD*)(v3 + 152);
    LODWORD(a3) = v13;
    goto LABEL_5;
  }

LABEL_9:
  *(_QWORD*)a1 = game_map_anonymous_ProcUnitAction_vtable;
  v9 = GameData_21cd100;
  v10 = *(_DWORD*)(GameData_21cd100 + 16) - 1;
  *(_DWORD*)(GameData_21cd100 + 16) = v10;
  if (v10 == 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v9 + 8) + 8LL))(v9 + 8);
  }
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v11 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, a1);
}

__int64 ProcUnitFade_770930(__int64 a1)
{
  __int64 result;
  int v3;
  int v4;
  unsigned __int8* v5;
  unsigned int v6;
  bool v7;
  int v8;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 144LL))(a1);
  if ((result & 1) == 0 ||
      game_ProcGameSkipView_instance_ != 0 &&
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) == 3 &&
          (((v3 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v4 = 2)
               : (v4 = 3),
           (v4 & v3) == 0)) {
    v5 = *(unsigned __int8**)(a1 + 16);
    if (v5 != nullptr) {
      v6 = *v5;
      v7 = v6 > 0x10;
      v8 = (1 << v6) & 0x1CE00;
      if (!v7 && v8 != 0) {
        *(_WORD*)(a1 + 136) |= 0x80u;
      }
    }
    *(_WORD*)(a1 + 136) |= 8u;
  }
  return result;
}

bool ProcUnitFade_Unknown18(__int64 a1)
{
  return *(float*)(*(_QWORD*)(a1 + 152) + 164LL) !=
         *(float*)(*(_QWORD*)(a1 + 152) + 160LL);
}

#pragma GCC visibility pop
