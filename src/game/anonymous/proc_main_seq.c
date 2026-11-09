#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_634d80(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_8b51d0(void);
__int64 GameRoutine_a4c820(_QWORD);
__int64 GameRoutine_a526f0(_QWORD, _QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN* GameData_21fdd40;
extern __int64 (*GameData_1f8fe50[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_anonymous_ProcMainSeq_vtable[])();
extern __int64 GameData_21c9600;
extern __int64 GameData_21c9648;
extern __int64 GameData_21fdd20;
extern __int64 GameData_21fdd28;
extern __int64 GameData_21fdd38;
extern __int64 GameData_21fdd48;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* msg_MessageManager_instance__ptr[2];
__int64 ProcMainSeq_Destructor(__int64 a1);
__int64 ProcMainSeq_DeletingDestructor(__int64 a1);
__int64 ProcMainSeq_Unknown6();
__int64 ProcMainSeq_Unknown7();

__int64 ProcMainSeq_Destructor(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;

  *(_QWORD*)a1 = game_anonymous_ProcMainSeq_vtable;
  GameRoutine_8b51d0();
  v2 = msg_MessageManager_instance__ptr[0];
  GameRoutine_a4c820(*msg_MessageManager_instance__ptr[0] + 14600);
  v3 = *v2;
  v4 = *(_QWORD*)(v3 + 14600);
  if (v4 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v4 + 8), v4);
    *(_QWORD*)(v3 + 14600) = 0;
  }
  v6 = GameData_21fdd20;
  v5 = GameData_21fdd28;
  if (GameData_21fdd20 != GameData_21fdd28) {
    v7 = GameData_21fdd28;
    v8 = fw_memory_g_heap_manager_ptr;
    do {
      v9 = *(_BYTE*)(v7 - 24);
      v7 -= 24;
      if ((v9 & 1) != 0) {
        v10 = *(_QWORD*)(v5 - 8);
        if (v10 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v11, v10);
        }
      }
      v5 = v7;
    } while (v7 != v6);
  }
  GameData_21fdd28 = v6;
  GameRoutine_a526f0(&GameData_21fdd38, GameData_21fdd40);
  v12 = *(_QWORD**)(a1 + 192);
  GameData_21fdd48 = 0;
  GameData_21fdd38 = (__int64)&GameData_21fdd40;
  GameData_21fdd40 = nullptr;
  *(_BYTE*)(a1 + 224) = 0;
  *(_QWORD*)a1 = GameData_1f8fe50;
  if (v12 == (_QWORD*)(a1 + 160)) {
    v13 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_17;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v12 + v13))((__int64)v12);

LABEL_17:
  GameData_21c9600 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcMainSeq_DeletingDestructor(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;

  *(_QWORD*)a1 = game_anonymous_ProcMainSeq_vtable;
  GameRoutine_8b51d0();
  v2 = msg_MessageManager_instance__ptr[0];
  GameRoutine_a4c820(*msg_MessageManager_instance__ptr[0] + 14600);
  v3 = *v2;
  v4 = *(_QWORD*)(v3 + 14600);
  if (v4 != 0) {
    GameRoutine_634d80(*(_QWORD*)(v4 + 8), v4);
    *(_QWORD*)(v3 + 14600) = 0;
  }
  v6 = GameData_21fdd20;
  v5 = GameData_21fdd28;
  v7 = fw_memory_g_heap_manager_ptr;
  if (GameData_21fdd20 != GameData_21fdd28) {
    v8 = GameData_21fdd28;
    do {
      v9 = *(_BYTE*)(v8 - 24);
      v8 -= 24;
      if ((v9 & 1) != 0) {
        v10 = *(_QWORD*)(v5 - 8);
        if (v10 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
            v11 = 128;
          }
          else {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v11, v10);
        }
      }
      v5 = v8;
    } while (v8 != v6);
  }
  GameData_21fdd28 = v6;
  GameRoutine_a526f0(&GameData_21fdd38, GameData_21fdd40);
  v12 = *(_QWORD**)(a1 + 192);
  GameData_21fdd48 = 0;
  GameData_21fdd38 = (__int64)&GameData_21fdd40;
  GameData_21fdd40 = nullptr;
  *(_BYTE*)(a1 + 224) = 0;
  *(_QWORD*)a1 = GameData_1f8fe50;
  if (v12 == (_QWORD*)(a1 + 160)) {
    v13 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_17;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))(*v12 + v13))((__int64)v12);

LABEL_17:
  GameData_21c9600 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00(a1 + 88);
  v14 = 128;
  if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
    v14 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v14, a1);
}

__int64 ProcMainSeq_Unknown6()
{
  __int64 result;
  int v1;

  result = GameData_21c9648;
  v1 = *(_DWORD*)(GameData_21c9648 + 16);
  *(_DWORD*)(GameData_21c9648 + 16) = v1 + 1;
  if (v1 == 0) {
    return (**(__int64 (***)(__int64))(result + 8))(result + 8);
  }
  return result;
}

__int64 ProcMainSeq_Unknown7()
{
  __int64 result;
  int v1;

  result = GameData_21c9648;
  v1 = *(_DWORD*)(GameData_21c9648 + 16) - 1;
  *(_DWORD*)(GameData_21c9648 + 16) = v1;
  if (v1 == 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)(result + 8) + 8LL))(result + 8);
  }
  return result;
}

#pragma GCC visibility pop
