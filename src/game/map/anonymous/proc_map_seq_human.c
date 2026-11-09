#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1566440(_QWORD, _QWORD);
__int64 GameRoutine_182ae70(_QWORD, _QWORD);
__int64 GameRoutine_658c00(_QWORD);
__int64 GameRoutine_739f00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*GameData_1f94888[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_map_anonymous_ProcMapSeqHuman_vtable[])();
extern __int64 GameData_212d0d0[2];
extern __int64 GameData_21cf830;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcMapSeqHuman_Destructor(__int64 a1);
__int64 ProcMapSeqHuman_Unknown9(__int64 a1);
__int64 ProcMapSeqHuman_Unknown12(__int64 result);
__int64 game_UnitPool_GetFirst(_QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern _DWORD GameData_1a82ec0[4];
extern __int64 GameData_21ca310;
extern __int64* GameData_212ce90[3];
__int64 ProcMapSeqHuman_739f00();

__int64 ProcMapSeqHuman_739f00()
{
  __int64* v0;
  unsigned __int64 v1;
  int v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  unsigned int v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned int v20;
  __int64 v21;
  unsigned int v22;
  unsigned int v23;
  unsigned int v24;
  int v25;

  v0 = GameData_212ce90[0];
  v1 = *(unsigned __int8*)(*GameData_212ce90[0] + 24);
  if (v1 > 3) {
    v2 = 0;
  }
  else {
    v2 = GameData_1a82ec0[v1];
  }
  v25 = v2;
  result = game_UnitPool_GetFirst(&v25);
  v7 = *v0;
  v8 = (_QWORD*)result;
  v9 = *(unsigned __int8*)(*v0 + 24);
  if (v9 <= 3) {
    v10 = GameData_1a82ec0[v9];
    if (result == 0) {
      return result;
    }
  LABEL_8:
    v11 = *(_QWORD*)(result + 432);
    if (v11 == 0) {
      v11 = *(_QWORD*)(result + 440);
      if (v11 != 0) {
        v12 = *(unsigned __int8*)(v11 + 16);
        if (v12 < 9) {
          do {
            v24 = v12 + 1;
            if (((v10 >> v12) & 2) != 0) {
              v11 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                               24LL * (unsigned __int8)(v12 + 1) + 556000);
              if (v11 != 0) {
                goto LABEL_14;
              }
            }
            v12 = v24;
          } while (v24 != 9);
        }
        v11 = 0;
        goto LABEL_14;
      }
    }
    while (1) {
    LABEL_14:
      v13 = v8[275];
      v8 = (_QWORD*)v11;
      if (v13 != 0) {
        v14 = *(_QWORD*)(v13 + 24);
        *(_DWORD*)v13 = 0;
        *(_WORD*)(v13 + 4) = 9;
        *(_QWORD*)(v13 + 8) = 0x100000000LL;
        *(_DWORD*)(v13 + 16) = 0;
        *(_DWORD*)(v13 + 48) = 0;
        *(_QWORD*)(v13 + 32) = v14;
        memset(v13 + 64, 255, 1024, v4, v5, v6);
        result = memset(v13 + 1096, 0, 1536, v15, v16, v17);
        v18 = *(_QWORD*)(v13 + 2640);
        *(_DWORD*)(v13 + 2632) = 0;
        *(_QWORD*)(v13 + 2664) = 0;
        *(_QWORD*)(v13 + 2672) = 0;
        *(_QWORD*)(v13 + 2648) = v18;
        v7 = *v0;
      }
      v19 = *(unsigned __int8*)(v7 + 24);
      if (v19 > 3) {
        v20 = 0;
        if (v8 == nullptr) {
          return result;
        }
      }
      else {
        v20 = GameData_1a82ec0[v19];
        if (v8 == nullptr) {
          return result;
        }
      }
      v11 = v8[54];
      if (v11 == 0) {
        v21 = v8[55];
        if (v21 != 0) {
          v22 = *(unsigned __int8*)(v21 + 16);
          v11 = 0;
          if (v22 <= 8) {
            while (1) {
              v23 = v22 + 1;
              if (((v20 >> v22) & 2) != 0) {
                v11 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                                 24LL * (unsigned __int8)(v22 + 1) + 556000);
                if (v11 != 0) {
                  break;
                }
              }
              ++v22;
              if (v23 == 9) {
                v11 = 0;
                goto LABEL_14;
              }
            }
          }
        }
      }
    }
  }
  v10 = 0;
  if (result != 0) {
    goto LABEL_8;
  }
  return result;
}

__int64 ProcMapSeqHuman_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;

  *(_QWORD*)a1 = game_map_anonymous_ProcMapSeqHuman_vtable;
  GameRoutine_739f00(a1);
  v2 = *(_QWORD*)(a1 + 208);
  if (v2 != 0) {
    *(_QWORD*)(a1 + 216) = v2;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                  v2);
  }
  v4 = *(_QWORD**)(a1 + 192);
  *(_QWORD*)a1 = GameData_1f94888;
  if (v4 == (_QWORD*)(a1 + 160)) {
    v5 = 32;
  }
  else {
    if (v4 == nullptr) {
      goto LABEL_10;
    }
    v5 = 40;
  }
  (*(void (**)(__int64))(*v4 + v5))((__int64)v4);

LABEL_10:
  GameData_21cf830 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcMapSeqHuman_Unknown9(__int64 a1)
{
  if (*(_BYTE*)(a1 + 232) == 1) {
    GameRoutine_1566440(a1 + 208, 0);
    *(_BYTE*)(a1 + 232) = 0;
  }
  return GameRoutine_182ae70(*(_QWORD*)GameData_212d0d0[0], 1);
}

__int64 ProcMapSeqHuman_Unknown12(__int64 result)
{
  unsigned __int64 v1;
  unsigned __int64 v2;
  _BOOL4 v3;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(result + 16);
  if (v1 > v2) {
  LABEL_4:
    v3 = true;
  }
  else {
    while (*(_BYTE*)v2 != 2) {
      v2 -= 64LL;
      if (v1 > v2) {
        goto LABEL_4;
      }
    }
    v3 = *(_DWORD*)(v2 + 32) != 28;
  }
  if (v1 != 0 && v3) {
    while (1) {
      if (*(_BYTE*)v1 == 2) {
        if (*(_DWORD*)(v1 + 32) == 28) {
          *(_QWORD*)(result + 16) = v1;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v1 == 0) {
        return result;
      }
      v1 += 64LL;
    }
  }
  return result;
}

#pragma GCC visibility pop
