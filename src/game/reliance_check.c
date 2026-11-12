#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_211eeb8[])();
extern __int64 (*game_RelianceCheck_vtable[])();
extern __int64 GameData_21c9708;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_RelianceCheck_unknown_;
extern int GameData_2272240;
_QWORD* RelianceCheck_Destructor(_QWORD* result);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_19a85a0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 RelianceCheck_19a7f00_alt1(__int64 result, __int64 a2,
                                   int a3) __asm__("RelianceCheck_19a7f00");
void RelianceCheck_19a8310();
__int64 GameReliance_8e17a0(_QWORD, _QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_ProcInst_Register(void);
__int64 game_telop_TelopRelianceLvUp_CreateBind(_QWORD, _QWORD, _QWORD, _QWORD,
                                                _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_2176168;
extern __int64 (***GameData_212dae8)();
extern __int64 (**game_GameReliance_Impl_Data_vtable_ptr)();
extern __int64 (*game_RelianceCheck_CheckSeq_vtable[])();
extern __int64 GameData_212c608[2];
extern __int64 GameData_21d99c8;
extern __int64 GameData_21d99d0;
extern __int64 game_GameModeData_instance_;
void __attribute__((noreturn))
GameRoutine_19a85a0_alt1(_QWORD) __asm__("GameRoutine_19a85a0");
__int64 RelianceCheck_19a8080(__int64 a1);
__int64 RelianceCheck_19a8340(__int64 result, __int64 a2, __int64 a3,
                              __int64 a4, __int64 a5, __int64 a6);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void __attribute__((noreturn))
GameRoutine_19a85a0_alt2() __asm__("GameRoutine_19a85a0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void RelianceCheck_19a7f00(__int64 a1, __int64 a2, int a3);

_QWORD* RelianceCheck_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v1 = result;
  *result = game_RelianceCheck_vtable;
  if (game_RelianceCheck_unknown_ != 0) {
    v2 = fw_memory_g_heap_manager_ptr;
    if (*(_QWORD*)game_RelianceCheck_unknown_ != 0) {
      v3 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      *(_QWORD*)(game_RelianceCheck_unknown_ + 8) =
          *(_QWORD*)game_RelianceCheck_unknown_;
      v4 = 128;
      if (*(_QWORD*)(v3 + 200) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(v3 + v4);
    }
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v5 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5);
    game_RelianceCheck_unknown_ = 0;
  }
  *v1 = GameData_211eeb8;
  if ((_QWORD*)GameData_21c9708 == v1) {
    GameData_21c9708 = 0;
    GameData_2272240 = 0;
  }
  return result;
}

void RelianceCheck_19a7f00(__int64 a1, __int64 a2, int a3)
{
  __int64* v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  signed __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;

  v3 = (__int64*)game_RelianceCheck_unknown_;
  v5 = *(_QWORD*)(game_RelianceCheck_unknown_ + 8);
  v4 = *(_QWORD*)(game_RelianceCheck_unknown_ + 16);
  if (v5 >= v4) {
    v7 = *(_QWORD*)game_RelianceCheck_unknown_;
    v8 = v5 - *(_QWORD*)game_RelianceCheck_unknown_;
    v9 = 1 - 0x5555555555555555LL * (v8 >> 3);
    if (v9 > 0xAAAAAAAAAAAAAAALL) {
      GameRoutine_19a85a0_alt2();
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v4 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x555555555555555LL) {
      v12 = 0xAAAAAAAAAAAAAAALL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0xAAAAAAAAAAAAAAALL) {
        GameRoutine_60a210_alt1();
      }
      v13 = a1;
      v14 = a2;
      v15 = a3;
      v16 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v12, 16, 0);
      a3 = v15;
      a2 = v14;
      a1 = v13;
    }
    else {
      v16 = 0;
    }
    v17 = v16 + v8;
    v18 = v16 + 24 * v12;
    *(_QWORD*)v17 = a1;
    *(_QWORD*)(v17 + 8) = a2;
    *(_DWORD*)(v17 + 16) = a3;
    v6 = v16 + v8 + 24;
    memcpy_alt1(v16, v7, v8);
    *v3 = v16;
    v3[1] = v6;
    v3[2] = v18;
    if (v7 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v10 + v19, v7);
    }
  }
  else {
    *(_QWORD*)v5 = a1;
    *(_QWORD*)(v5 + 8) = a2;
    v6 = v5 + 24;
    *(_DWORD*)(v5 + 16) = a3;
  }
  v3[1] = v6;
}

__int64 RelianceCheck_19a8080(__int64 a1)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 result;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;

  v2 = game_RelianceCheck_unknown_;
  v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      184, 16, 0);
  *(_QWORD*)(v4 + 144) = 0;
  v5 = v4;
  v6 = GameData_212c608[0];
  *(_QWORD*)(v4 + 160) = 0;
  *(_QWORD*)(v4 + 168) = 0;
  *(_QWORD*)(v4 + 176) = 0;
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 152) = 0;
  v7 = (_QWORD*)(v4 + 152);
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)v4 = v6 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  game_ProcInst_Register();
  *v7 = 0;
  *(_QWORD*)(v5 + 160) = 0;
  *(_QWORD*)(v5 + 168) = 0;
  *(_DWORD*)(v5 + 176) = 0;
  *(_QWORD*)v5 = game_RelianceCheck_CheckSeq_vtable;
  result =
      ProcInst_657850(v5, &GameData_2176168, "RelianceCheck::CheckSeq", 1, a1);
  v9 = *(_DWORD*)(v2 + 24);
  if (v9 >= 1) {
    v10 = *(_QWORD*)v2;
    v11 = *(_QWORD*)(v2 + 8);
    if (*(_QWORD*)v2 != v11) {
      do {
        *(_DWORD*)(v10 + 16) = v9;
        v10 += 24;
      } while (v10 != v11);
    }
  }
  if (v7 != (_QWORD*)v2) {
    v12 = *(_QWORD*)v2;
    v13 = *(_QWORD*)(v2 + 8);
    v14 = *(_QWORD*)(v5 + 168);
    v15 = v13 - *(_QWORD*)v2;
    v16 = *(_QWORD*)(v5 + 152);
    if (v15 <= (unsigned __int64)(v14 - v16)) {
      v24 = *(_QWORD*)(v5 + 160);
      v25 = v24 - v16;
      if (v15 > (unsigned __int64)(v24 - v16)) {
        v26 = v12 + v25;
        if (v24 != v16) {
          result = memmove(*(_QWORD*)(v5 + 152), v12, v25);
          v24 = *(_QWORD*)(v5 + 160);
        }
        if (v13 != v26) {
          result = memmove(v24, v26, v13 - v26);
        }
        v27 = v24 + v13 - v26;
        goto LABEL_28;
      }
      if (v13 != v12) {
        result = memmove(*(_QWORD*)(v5 + 152), v12, v15);
      }
    }
    else {
      v17 = 0xAAAAAAAAAAAAAAABLL * (v15 >> 3);
      if (v16 != 0) {
        v18 = *v3;
        *(_QWORD*)(v5 + 160) = v16;
        v19 = 128;
        if (*(_QWORD*)(v18 + 200) == 0) {
          v19 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v18 + v19);
        v14 = 0;
        v7[1] = 0;
        v7[2] = 0;
        *v7 = 0;
      }
      if (v17 > 0xAAAAAAAAAAAAAAALL) {
        goto LABEL_30;
      }
      v20 = 0xAAAAAAAAAAAAAAABLL * (v14 >> 3);
      v21 = 2 * v20;
      if (2 * v20 <= v17) {
        v21 = 0xAAAAAAAAAAAAAAABLL * (v15 >> 3);
      }
      v22 = v20 >= 0x555555555555555LL ? 0xAAAAAAAAAAAAAAALL : v21;
      if (v22 > 0xAAAAAAAAAAAAAAALL) {
      LABEL_30:
        GameRoutine_19a85a0_alt1(result);
      }
      v23 = 3 * v22;
      result = fw_memory_HeapManager_Allocate(*v3, 24 * v22, 16, 0);
      v16 = result;
      *(_QWORD*)(v5 + 152) = result;
      *(_QWORD*)(v5 + 160) = result;
      *(_QWORD*)(v5 + 168) = result + 8 * v23;
      if (v13 != v12) {
        result = memcpy(result, v12, v15);
      }
    }
    v27 = v16 + v15;
  LABEL_28:
    *(_QWORD*)(v5 + 160) = v27;
  }
  return result;
}

void RelianceCheck_19a8310()
{
  __int64 v0;
  __int64 v1;

  v0 = game_RelianceCheck_unknown_;
  v1 = *(_QWORD*)game_RelianceCheck_unknown_;
  *(_DWORD*)(game_RelianceCheck_unknown_ + 24) = 0;
  *(_QWORD*)(v0 + 8) = v1;
}

__int64 RelianceCheck_19a8340(__int64 result, __int64 a2, __int64 a3,
                              __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6;
  __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 (***v13)();
  __int64 v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  __int64 v26;
  _QWORD v27[3];
  _QWORD v28[3];

  v6 = *(_QWORD*)(result + 152);
  v7 = *(_QWORD*)(result + 160);
  if (v6 != v7) {
    v8 = *(int*)(result + 176);
    if (0xAAAAAAAAAAAAAAABLL * ((v7 - v6) >> 3) > v8) {
      v9 = (__int64*)(v6 + 24LL * (int)v8);
      v10 = *v9;
      v28[0] = 0;
      v28[1] = v10;
      if (v10 != 0) {
        v10 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 24) + 1784LL) + 272LL);
      }
      v28[2] = v10;
      v11 = v9[1];
      v27[0] = 0;
      v27[1] = v11;
      if (v11 != 0) {
        v12 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v11 + 24) + 1784LL) + 272LL);
        v27[2] = v12;
        v13 = GameData_212dae8;
        if (v10 != 0 && v12 != 0) {
          v14 = *(_QWORD*)(game_GameModeData_instance_ + 128);
          v15 = result;
          v16 = GameReliance_8e17a0(v14, v28, v27);
          if ((v16 & 0x80000000) != 0) {
            v13 = &game_GameReliance_Impl_Data_vtable_ptr;
          }
          else {
            v13 = (__int64 (***)())(*(_QWORD*)(v14 + 8) + 56LL * v16);
          }
          result = v15;
          if (*((_BYTE*)v13 + 10) == 0) {
            goto LABEL_39;
          }
          goto LABEL_22;
        }
      }
      else {
        v13 = &game_GameReliance_Impl_Data_vtable_ptr;
      }
      if (*((_BYTE*)((_UNKNOWN**)0x8LL) + (_QWORD)v13 + 2) == 0) {
        goto LABEL_39;
      }
    LABEL_22:
      v18 = *((unsigned __int8*)v13 + 11);
      v19 = (unsigned __int64)(GameData_21d99d0 - GameData_21d99c8) >> 2;
      if ((int)v19 < 1) {
        v20 = 0;
      LABEL_37:
        if ((_DWORD)v18 == (unsigned __int8)v20) {
          goto LABEL_39;
        }
      }
      else {
        LODWORD(v20) = 0;
        v21 = *(_DWORD*)(GameData_21d99c8 + 4LL * (unsigned int)(v19 - 1));
        v22 = *((unsigned __int16*)v13 + 6) - *((_DWORD*)v9 + 4);
        if (v21 >= v22) {
          v21 = v22;
        }
        if (v22 >= *(_DWORD*)GameData_21d99c8) {
          v23 = v21;
        }
        else {
          v23 = *(_DWORD*)GameData_21d99c8;
        }
        while (1) {
          v24 = (unsigned int)(v20 + v19) >> 1;
          v25 = *(_DWORD*)(GameData_21d99c8 + 4LL * v24);
          if (v23 == v25) {
            break;
          }
          if (v23 >= v25) {
            v20 = v24 + 1;
          }
          else {
            v20 = (unsigned int)v20;
          }
          if (v23 < v25) {
            LODWORD(v19) = v24;
          }
          if ((int)v20 >= (int)v19) {
            goto LABEL_37;
          }
        }
        v20 = v24 + 1;
        if ((_DWORD)v18 == (unsigned __int8)(v24 + 1)) {
          goto LABEL_39;
        }
      }
      v26 = result;
      game_telop_TelopRelianceLvUp_CreateBind(result, *v9, v9[1], v20, v18, a6);
      result = v26;
    LABEL_39:
      ++*(_DWORD*)(result + 176);
      v17 = *(_QWORD*)(result + 8);
      if (v17 != 0) {
        while (1) {
          if (*(_BYTE*)v17 == 2) {
            if (*(_DWORD*)(v17 + 32) == 0) {
              goto LABEL_46;
            }
          }
          else if (*(_BYTE*)v17 == 0) {
            return result;
          }
          v17 += 64;
        }
      }
      return result;
    }
  }
  v17 = *(_QWORD*)(result + 8);
  if (v17 != 0) {
    while (1) {
      if (*(_BYTE*)v17 == 2) {
        if (*(_DWORD*)(v17 + 32) == 1) {
        LABEL_46:
          *(_QWORD*)(result + 16) = v17;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v17 == 0) {
        return result;
      }
      v17 += 64;
    }
  }
  return result;
}

#pragma GCC visibility pop
