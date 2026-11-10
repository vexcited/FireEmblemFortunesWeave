#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 BattleArea_8bc6c0_alt1(_QWORD) __asm__("BattleArea_8bc6c0");
__int64 BattleArea_8bc800_alt1(_QWORD) __asm__("BattleArea_8bc800");
__int64 BattleArea_8bf0e0_alt1(_QWORD, _QWORD, _QWORD, _QWORD,
                               _QWORD) __asm__("BattleArea_8bf0e0");
__int64 GameRoutine_8bf520(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD, _QWORD);
__int64 GameRoutine_9ba840(_QWORD);
__int64 Impl_9baec0(void);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_Unit_GetJob(_QWORD);
__int64 game_Unit_GetJobUnknown30(void);
__int64 game_map_BattleArea_Impl_Expand_closure_Invoke_alt1(
    _QWORD, _QWORD) __asm__("game_map_BattleArea_Impl_Expand_closure_Invoke");
__int64 nn_mem_StandardAllocator_Free(_QWORD);
char* BattleArea_8beda0_alt1(char* result, char*, __int64, __int64, char*,
                             __int64) __asm__("BattleArea_8beda0");
char* GameRoutine_8bde20(char* result, char*, _DWORD*, __int64, char*, __int64);
extern _UNKNOWN GameData_1a85672;
extern _UNKNOWN GameData_1ab7e7c;
extern _UNKNOWN GameData_1af8f85;
extern _UNKNOWN GameData_21a6130;
extern _UNKNOWN GameData_21f2040;
extern _UNKNOWN GameData_21f2058;
extern _UNKNOWN GameData_21f2070;
extern _UNKNOWN* GameData_212c540;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1fa9ea0[])();
extern __int64 GameData_21ca300;
extern __int64 GameData_21f2030;
extern __int64 GameData_21f2038;
extern __int64 GameData_21f2048;
extern __int64 GameData_21f2050;
extern __int64 GameData_21f2060;
extern __int64 GameData_21f2068;
extern __int64 GameData_21f8040;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c930;
extern __int64* GameData_212ce98[2];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__n128 BattleArea_8b9d00(__int64 a1);
__int64 BattleArea_8bc350();
__int64 BattleArea_8bc4c0(__int64 a1, __int64 a2);
__int64 BattleArea_8bc6c0(__int64 a1);
__int64 BattleArea_8bc800(__int64 a1);
__int64 game_map_BattleArea_Impl_Expand(__int64 a1, unsigned __int8 a2, int a3,
                                        int a4, int a5, int a6, __int64 a7);
__int64 game_map_BattleArea_Impl_Expand_closure_Invoke(__int64 a1, _DWORD* a2);
__int64 game_map_BattleArea_Impl_TrySplit_closure_Invoke(__int64 result,
                                                         _DWORD* a2, int* a3,
                                                         int* a4, int* a5);
__int64 game_map_BattleArea_Impl_TrySplit_closure0_Invoke(__int64 result,
                                                          _DWORD* a2, int* a3,
                                                          int* a4, int* a5);
char* BattleArea_8be220(char* result, char* a2, _DWORD* a3, unsigned __int64 a4,
                        char* a5);
void BattleArea_8becc0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                       __int64 a9, __int64 a10, __int64 a11);
char* BattleArea_8beda0(char* result, char* a2, __int64 a3, unsigned __int64 a4,
                        char* a5, signed __int64 a6);
char* BattleArea_8bf0e0(char* result, char* a2, __int64 a3, unsigned __int64 a4,
                        char* a5);
_QWORD* game_map_BattleArea_CreateBorder_lambda0_Invoke(_QWORD* result,
                                                        int* a2);

__n128 BattleArea_8b9d00(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  __int128 v3;
  __int128 v4;
  __int128 v5;
  unsigned int v6;
  __int128 v7;
  __int128 v8;
  __int64 v9;
  __int128 v10;
  __n128 result;
  int v12;
  __int64 v13;
  int v14;
  __int64 v15;
  int v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;

  v1 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v1 + 56) = 0;
  *(_QWORD*)(v1 + 40) = 0;
  *(_QWORD*)(v1 + 48) = 0;
  *(_QWORD*)(v1 + 32) = 0;
  *(_QWORD*)(v1 + 8) = 0;
  *(_QWORD*)(v1 + 16) = 0;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v20 = v1;
    v12 = __cxa_guard_acquire(&GameData_21a6130);
    v1 = v20;
    if (v12 != 0) {
      v13 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v13;
      __cxa_guard_release(&GameData_21a6130);
      v1 = v20;
    }
  }
  v2 = DWORD2(GameData_21a6120);
  *(_QWORD*)(v1 + 80) = GameData_21a6120;
  v3 = *(_OWORD*)(v1 + 80);
  *((_QWORD*)&v3 + 1) = v2;
  *(_OWORD*)(v1 + 80) = v3;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v21 = v1;
    v14 = __cxa_guard_acquire(&GameData_21a6130);
    v1 = v21;
    if (v14 != 0) {
      v15 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v15;
      __cxa_guard_release(&GameData_21a6130);
      v1 = v21;
    }
  }
  v4 = GameData_21a6120;
  *(_QWORD*)(v1 + 128) = 0;
  *(_QWORD*)(v1 + 136) = 0;
  *(_QWORD*)(v1 + 144) = 0;
  *(_DWORD*)(v1 + 152) = 0;
  *(_QWORD*)(v1 + 96) = v4;
  v5 = *(_OWORD*)(v1 + 96);
  *((_QWORD*)&v5 + 1) = DWORD2(v4);
  *(_OWORD*)(v1 + 96) = v5;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v22 = v1;
    v16 = __cxa_guard_acquire(&GameData_21a6130);
    v1 = v22;
    if (v16 != 0) {
      v17 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v17;
      __cxa_guard_release(&GameData_21a6130);
      v1 = v22;
    }
  }
  v6 = DWORD2(GameData_21a6120);
  *(_QWORD*)(v1 + 176) = GameData_21a6120;
  v7 = *(_OWORD*)(v1 + 176);
  *((_QWORD*)&v7 + 1) = v6;
  *(_OWORD*)(v1 + 176) = v7;
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                            memory_order_acquire) &
       1) == 0) {
    v23 = v1;
    v18 = __cxa_guard_acquire(&GameData_21a6130);
    v1 = v23;
    if (v18 != 0) {
      v19 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v19;
      __cxa_guard_release(&GameData_21a6130);
      v1 = v23;
    }
  }
  v8 = GameData_21a6120;
  *(_QWORD*)(v1 + 252) = 0;
  v9 = v1 + 252;
  *(_QWORD*)(v9 - 28) = 0;
  *(_QWORD*)(v9 - 12) = 0;
  *(_WORD*)(v9 - 4) = 0;
  *(_QWORD*)(v9 + 8) = 0;
  *(_QWORD*)(v9 + 16) = 0;
  *(_QWORD*)(v9 + 24) = 0;
  *(_QWORD*)(v9 + 32) = 0;
  *(_QWORD*)(v9 + 40) = 0;
  *(_QWORD*)(v9 + 48) = 0;
  *(_QWORD*)(v9 + 56) = 0;
  *(_QWORD*)(v9 + 64) = 0;
  *(_QWORD*)(v9 + 72) = 0;
  *(_QWORD*)(v9 + 80) = 0;
  *(_QWORD*)(v9 + 88) = 0;
  *(_QWORD*)(v9 + 96) = 0;
  *(_QWORD*)(v9 + 104) = 0;
  *(_QWORD*)(v9 + 112) = 0;
  *(_QWORD*)(v9 + 120) = 0;
  *(_DWORD*)(v9 + 128) = 0;
  *(_QWORD*)(v9 - 60) = v8;
  v10 = *(_OWORD*)(v9 - 60);
  *((_QWORD*)&v10 + 1) = DWORD2(v8);
  result = *(__n128*)(v9 - 28);
  ((uint64_t*)&result)[1] = 3212836864LL;
  *(__n128*)(v9 - 28) = result;
  *(_OWORD*)(v9 - 60) = v10;
  return result;
}

__int64 BattleArea_8bc350()
{
  _QWORD* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v0 = (_QWORD*)GameData_21f8040;
  if (GameData_21f8040 != 0) {
    v1 = *(_QWORD*)(GameData_21f8040 + 16);
    v2 = *(_QWORD*)(GameData_21f8040 + 24);
    v3 = ((v2 - v1) << 9) - 1;
    if (v2 == v1) {
      v3 = 0;
    }
    v4 = *(_QWORD*)(GameData_21f8040 + 48) + *(_QWORD*)(GameData_21f8040 + 40);
    if (v3 == v4) {
      GameRoutine_9ba840(GameData_21f8040 + 8);
      v1 = v0[2];
      v4 = v0[6] + v0[5];
    }
    *(_BYTE*)(*(_QWORD*)(v1 + 8 * (v4 >> 12)) + (v4 & 0xFFF)) = 1;
    result = GameData_21f8040;
    ++v0[6];
    if (result != 0) {
      result = Impl_9baec0();
      v6 = GameData_21f8040;
      if (GameData_21f8040 != 0) {
        v8 = *(_QWORD*)(GameData_21f8040 + 16);
        v7 = *(_QWORD*)(GameData_21f8040 + 24);
        v9 = v7 - v8;
        v10 = v7 == v8;
        v12 = *(_QWORD*)(GameData_21f8040 + 40);
        v11 = *(_QWORD*)(GameData_21f8040 + 48);
        v13 = (v9 << 9) - 1;
        if (v10) {
          v13 = 0;
        }
        *(_QWORD*)(GameData_21f8040 + 48) = v11 - 1;
        if ((unsigned __int64)(v13 - (v11 + v12) + 1) >= 0x2000) {
          if (*(_QWORD*)(v7 - 8) != 0) {
            v14 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v14 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
            v7 = *(_QWORD*)(v6 + 24);
          }
          *(_QWORD*)(v6 + 24) = v7 - 8;
        }
      }
    }
  }
  return result;
}

__int64 BattleArea_8bc4c0(__int64 a1, __int64 a2)
{
  __int64 v2;
  int v5;
  int v6;
  int v7;
  __int64 v8;
  int v9;
  __int64 v10;
  _BOOL4 v11;
  int v12;
  int v13;
  __int64 v14;
  int v15;
  __int64 result;
  int v17;
  int v18;
  int v19;
  _BOOL4 v20;

  v2 = *(_QWORD*)(a2 + 56);
  v20 = v2 != 0 && *(unsigned __int8*)(v2 + 104) == 6;
  v5 = *(_DWORD*)(a2 + 76);
  v6 = *(_DWORD*)(a2 + 88);
  v19 = *(_DWORD*)(a2 + 72);
  v7 = BattleArea_8bc6c0_alt1(*(_QWORD*)(a2 + 24));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2040,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f2040) != 0) {
    GameData_21f2038 = (__int64)&GameData_1af8f85;
    GameData_21f2030 = game_HashString(&GameData_1af8f85);
    __cxa_guard_release(&GameData_21f2040);
  }
  if (game_GameModeData_instance_ == 0 ||
      (v8 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f2030)) ==
          0) {
    v9 = 0;
    v10 = *(_QWORD*)(a2 + 56);
    if (v10 == 0) {
      goto LABEL_8;
    }
  LABEL_10:
    v11 = *(unsigned __int8*)(v10 + 104) == 6;
    goto LABEL_11;
  }
  v9 = *(_DWORD*)(v8 + 32);
  v10 = *(_QWORD*)(a2 + 56);
  if (v10 != 0) {
    goto LABEL_10;
  }
LABEL_8:
  v11 = false;
LABEL_11:
  v12 = *(_DWORD*)(a2 + 88);
  v13 = BattleArea_8bc800_alt1(*(_QWORD*)(a2 + 24));
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2058,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f2058) != 0) {
    GameData_21f2050 = (__int64)&GameData_1ab7e7c;
    GameData_21f2048 = game_HashString(&GameData_1ab7e7c);
    __cxa_guard_release(&GameData_21f2058);
  }
  if (game_GameModeData_instance_ == 0 ||
      (v14 = game_GameVariableTable_Find(
           *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f2048)) ==
          0) {
    v15 = 0;
    result = *(_QWORD*)(a2 + 24);
    if (result == 0) {
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  v15 = *(_DWORD*)(v14 + 32);
  result = *(_QWORD*)(a2 + 24);
  if (result != 0) {
  LABEL_17:
    result = game_Unit_GetJobUnknown30();
  }
LABEL_18:
  v17 = v11 + v12;
  *(_BYTE*)(a1 + 80) = result;
  if (v11 + v12 <= v13) {
    v17 = v13;
  }
  v18 = v20 + v6;
  if (v17 <= v15) {
    v17 = v15;
  }
  *(_DWORD*)(a1 + 16) = v19;
  *(_DWORD*)(a1 + 20) = v5;
  *(_DWORD*)(a1 + 32) = v17;
  if (v18 <= v7) {
    v18 = v7;
  }
  if (v18 <= v9) {
    v18 = v9;
  }
  *(_DWORD*)(a1 + 24) = v6;
  *(_DWORD*)(a1 + 28) = v18;
  return result;
}

__int64 BattleArea_8bc6c0(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  int v5;
  __int64 v6;

  if (a1 != 0 && (v1 = game_Unit_GetJob(a1)) != 0) {
    if (*(unsigned __int8*)(v1 + 417) <=
        (unsigned int)*(unsigned __int8*)(v1 + 418)) {
      v2 = *(unsigned __int8*)(v1 + 418);
    }
    else {
      v2 = *(unsigned __int8*)(v1 + 417);
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2040,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21f2040) != 0) {
      GameData_21f2038 = (__int64)&GameData_1af8f85;
      GameData_21f2030 = game_HashString(&GameData_1af8f85);
      __cxa_guard_release(&GameData_21f2040);
    }
    v3 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v4 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f2030);
      if (v4 != 0) {
        v3 = *(_DWORD*)(v4 + 32);
      }
      else {
        v3 = 0;
      }
    }
    if ((int)v2 <= (int)v3) {
      return v3;
    }
    else {
      return v2;
    }
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2040,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21f2040) != 0) {
      GameData_21f2038 = (__int64)&GameData_1af8f85;
      GameData_21f2030 = game_HashString(&GameData_1af8f85);
      __cxa_guard_release(&GameData_21f2040);
    }
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v6 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f2030);
      if (v6 != 0) {
        v5 = *(_DWORD*)(v6 + 32);
      }
      else {
        v5 = 0;
      }
    }
    return v5 & (unsigned int)~(v5 >> 31);
  }
}

__int64 BattleArea_8bc800(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  unsigned int v3;
  __int64 v4;
  int v5;
  __int64 v6;

  if (a1 != 0 && (v1 = game_Unit_GetJob(a1)) != 0) {
    if (*(unsigned __int8*)(v1 + 417) <=
        (unsigned int)*(unsigned __int8*)(v1 + 419)) {
      v2 = *(unsigned __int8*)(v1 + 419);
    }
    else {
      v2 = *(unsigned __int8*)(v1 + 417);
    }
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2040,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21f2040) != 0) {
      GameData_21f2038 = (__int64)&GameData_1af8f85;
      GameData_21f2030 = game_HashString(&GameData_1af8f85);
      __cxa_guard_release(&GameData_21f2040);
    }
    v3 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v4 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f2030);
      if (v4 != 0) {
        v3 = *(_DWORD*)(v4 + 32);
      }
      else {
        v3 = 0;
      }
    }
    if ((int)v2 <= (int)v3) {
      return v3;
    }
    else {
      return v2;
    }
  }
  else {
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2058,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21f2058) != 0) {
      GameData_21f2050 = (__int64)&GameData_1ab7e7c;
      GameData_21f2048 = game_HashString(&GameData_1ab7e7c);
      __cxa_guard_release(&GameData_21f2058);
    }
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v6 = game_GameVariableTable_Find(
          *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f2048);
      if (v6 != 0) {
        v5 = *(_DWORD*)(v6 + 32);
      }
      else {
        v5 = 0;
      }
    }
    return v5 & (unsigned int)~(v5 >> 31);
  }
}

__int64 game_map_BattleArea_Impl_Expand(__int64 a1, unsigned __int8 a2, int a3,
                                        int a4, int a5, int a6, __int64 a7)
{
  __int64 v9;
  int v10;
  int v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  unsigned int v19;
  __int64 v20;
  bool v21;
  __int64 v22;
  int v23;
  __int64 v24;
  _QWORD* v25;
  _DWORD* v26;
  _QWORD* v27;
  int v28;
  int v29;
  int v30;
  int v31;
  char v33;
  int v34;
  int v35;
  __int64 v36;
  int v37;
  unsigned int v38;
  __int64 v39;
  char v40;
  char v41;
  char v42;
  int v43;
  int v44;
  int v45;
  int v46;
  __int64 v47;
  int v48;
  int v49;
  int v50;
  __int64 v53;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  unsigned int v61;
  int v62;
  int v63;
  int v64;
  __int64 v65;
  unsigned __int8 v66;
  int v67;
  int v68;
  int v69;
  int v70;

  v9 = a1 + 256;
  if (a5 >= a3) {
    v10 = a3;
  }
  else {
    v10 = a5;
  }
  if (a5 <= a3) {
    v11 = a3;
  }
  else {
    v11 = a5;
  }
  v12 = a2;
  v13 = *GameData_212ce98[0];
  if (a6 >= a4) {
    v14 = a4;
  }
  else {
    v14 = a6;
  }
  if (a6 <= a4) {
    v15 = a4;
  }
  else {
    v15 = a6;
  }
  v16 = 32 * v14;
  v17 = v14;
LABEL_14:
  if (v13 != 0 &&
      *(unsigned __int8*)(v13 + 27) >
          (unsigned int)(unsigned __int8)(v17 - *(_BYTE*)(v13 + 25))) {
    v18 = v10;
    while (*(unsigned __int8*)(v13 + 26) >
           (unsigned int)(unsigned __int8)(v18 - *(_BYTE*)(v13 + 24))) {
      v19 = v16 + v18;
      if (((*(_DWORD*)(v9 + 4LL * ((v16 + v18) >> 5)) >> v18) & 1) != 0) {
        break;
      }
      if (v19 >= 0x400) {
        v19 = 0;
      }
      v20 = *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                       8LL * *(unsigned __int16*)(*(_QWORD*)(v13 + 72) +
                                                  2LL * v19 + 8));
      if (v20 == 0 ||
          *(unsigned __int8*)(*(_QWORD*)(v20 + 48) + v12 + 32) == 255) {
        break;
      }
      if (v11 + 1 == ++v18) {
        v16 += 32;
        v21 = v17++ == v15;
        if (!v21) {
          goto LABEL_14;
        }
        v22 = 0;
        v63 = v10;
        v64 = 0;
        v58 = v11;
        v59 = v15;
        v56 = v10;
        v57 = v14;
        v61 = v14;
        v62 = v11;
        v60 = v15;
        do {
          v69 = v14;
          v70 = v10;
          v67 = v15;
          v68 = v11;
          v65 = v22 + 1;
          do {
            v24 = *(_QWORD*)(a1 + 16);
            v66 = a2;
            if (v24 == 0) {
              break;
            }
            v25 = (_QWORD*)fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
            v26 = (_DWORD*)(v24 + 16 * v22);
            v27 = v25;
            *v25 = GameData_1fa9ea0;
            v25[1] = &v70;
            v25[2] = &v69;
            v25[3] = &v68;
            v25[4] = &v67;
            v25[5] = a1;
            v25[6] = &v66;
            v28 = *v26 + v70;
            v29 = v26[1] + v69;
            v30 = v26[2] + v68;
            v31 = v26[3] + v67;
            if (v29 <= v31 && v28 <= v30) {
              v34 = 32 * v29;
              v35 = v29;
              v36 = *GameData_212ce98[0];
            LABEL_38:
              if (v36 != 0 &&
                  *(unsigned __int8*)(v36 + 27) >
                      (unsigned int)(unsigned __int8)(v35 -
                                                      *(_BYTE*)(v36 + 25))) {
                v37 = v28;
                while (*(unsigned __int8*)(v36 + 26) >
                       (unsigned int)(unsigned __int8)(v37 -
                                                       *(_BYTE*)(v36 + 24))) {
                  v38 = v34 + v37;
                  if (((*(_DWORD*)(v9 + 4LL * ((v34 + v37) >> 5)) >> v37) &
                       1) != 0) {
                    break;
                  }
                  if (v38 >= 0x400) {
                    v38 = 0;
                  }
                  v39 = *(
                      _QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                               8LL * *(unsigned __int16*)(*(_QWORD*)(v36 + 72) +
                                                          2LL * v38 + 8));
                  if (v39 == 0 || *(unsigned __int8*)(*(_QWORD*)(v39 + 48) +
                                                      v12 + 32) == 255) {
                    break;
                  }
                  if (v30 + 1 == ++v37) {
                    v34 += 32;
                    v21 = v35++ == v31;
                    if (v21) {
                      goto LABEL_36;
                    }
                    goto LABEL_38;
                  }
                }
              }
              v33 = 0;
            }
            else {
            LABEL_36:
              v33 = 1;
              v69 = v29;
              v70 = v28;
              v67 = v31;
              v68 = v30;
            }
            v40 = game_map_BattleArea_Impl_Expand_closure_Invoke_alt1(
                v25, v24 + 16 * ((v22 + 1) & 3));
            v41 = (*(__int64 (**)(_QWORD*, __int64))(*v27 + 48LL))(
                v27, v24 + 16 * (v22 ^ 2));
            v42 = (*(__int64 (**)(_QWORD*, __int64))(*v27 + 48LL))(
                v27, v24 + 16LL * (((_BYTE)v22 - 1) & 3));
            (*(void (**)(_QWORD*))(*v27 + 40LL))(v27);
            if ((v33 & 1) == 0 && (v40 & 1) == 0 && (v41 & 1) == 0 &&
                (v42 & 1) == 0) {
              break;
            }
            v43 = v68 - v70 + 1;
            v44 = v67 - v69 + 1;
            v45 = v44 >= v43 ? v68 - v70 + 1 : v67 - v69 + 1;
            if (v45 > *(_DWORD*)(a1 + 12)) {
              break;
            }
            if (v43 <= v44) {
              v46 = v67 - v69 + 1;
            }
            else {
              v46 = v68 - v70 + 1;
            }
            if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f2070,
                                      memory_order_acquire) &
                 1) == 0 &&
                (unsigned int)__cxa_guard_acquire(&GameData_21f2070) != 0) {
              GameData_21f2068 = (__int64)&GameData_1a85672;
              GameData_21f2060 = game_HashString(&GameData_1a85672);
              __cxa_guard_release(&GameData_21f2070);
            }
            v23 = game_GameModeData_instance_;
            if (game_GameModeData_instance_ != 0) {
              v47 = game_GameVariableTable_Find(
                  *(_QWORD*)(game_GameModeData_instance_ + 48),
                  &GameData_21f2060);
              if (v47 != 0) {
                v23 = *(_DWORD*)(v47 + 32);
              }
              else {
                v23 = 0;
              }
            }
          } while (v46 < v23);
          v48 = v68 - v70 + 1;
          v49 = v67 - v69 + 1;
          if (v49 >= v48) {
            v50 = v68 - v70 + 1;
          }
          else {
            v50 = v67 - v69 + 1;
          }
          if (v48 <= v49) {
            v48 = v67 - v69 + 1;
          }
          if (*(_DWORD*)(a1 + 8) <= v50 && *(_DWORD*)(a1 + 12) <= v48 &&
              v50 > v64) {
            v56 = v70;
            v57 = v69;
            v58 = v68;
            v59 = v67;
            v64 = v50;
          }
          ++v22;
          v11 = v62;
          v10 = v63;
          v15 = v60;
          v14 = v61;
        } while (v65 != 4);
        if (v64 > 0) {
          v69 = v57;
          v70 = v56;
          v53 = *(_QWORD*)(a7 + 32);
          v67 = v59;
          v68 = v58;
          if (v53 == 0) {
            GameRoutine_60a310(0, v61);
          }
          (*(void (**)(__int64, int*, int*, int*, int*))(*(_QWORD*)v53 + 48LL))(
              v53, &v70, &v69, &v68, &v67);
          return 1;
        }
        return 0;
      }
    }
  }
  return 0;
}

__int64 game_map_BattleArea_Impl_Expand_closure_Invoke(__int64 a1, _DWORD* a2)
{
  int* v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int* v9;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  __int64 v17;

  v2 = *(int**)(a1 + 8);
  v3 = a2[2];
  v4 = *a2 + *v2;
  v5 = a2[1] + **(_DWORD**)(a1 + 16);
  v6 = **(_DWORD**)(a1 + 24);
  v7 = v3 + v6;
  v8 = a2[3] + **(_DWORD**)(a1 + 32);
  if (v5 <= v8 && v4 <= v7) {
    if (GameData_21ca300 != 0) {
      v11 = v3 + v6;
      v12 = 32 * v5;
      v13 = a2[1] + **(_DWORD**)(a1 + 16);
      v14 = v11 + 1;
    LABEL_6:
      v15 = *a2 + *v2;
      if (*(unsigned __int8*)(GameData_21ca300 + 27) >
          (unsigned int)(unsigned __int8)(v13 -
                                          *(_BYTE*)(GameData_21ca300 + 25))) {
        while (
            *(unsigned __int8*)(GameData_21ca300 + 26) >
            (unsigned int)(unsigned __int8)(v15 -
                                            *(_BYTE*)(GameData_21ca300 + 24))) {
          v16 = v12 + v15;
          if (((*(_DWORD*)(*(_QWORD*)(a1 + 40) + 256LL +
                           4LL * ((v12 + v15) >> 5)) >>
                v15) &
               1) != 0) {
            break;
          }
          if (v16 >= 0x400) {
            v16 = 0;
          }
          v17 = *(
              _QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                       8LL * *(unsigned __int16*)(*(_QWORD*)(GameData_21ca300 +
                                                             72) +
                                                  2LL * v16 + 8));
          if (v17 == 0 || *(unsigned __int8*)(*(_QWORD*)(v17 + 48) +
                                              **(unsigned __int8**)(a1 + 48) +
                                              32LL) == 255) {
            break;
          }
          if (v14 == ++v15) {
            v12 += 32;
            if (v13++ == v8) {
              goto LABEL_3;
            }
            goto LABEL_6;
          }
        }
      }
    }
    return 0;
  }
  else {
  LABEL_3:
    *v2 = v4;
    **(_DWORD**)(a1 + 16) = v5;
    **(_DWORD**)(a1 + 24) = v7;
    v9 = *(int**)(a1 + 32);
    *v9 = v8;
    return 1;
  }
}

__int64 game_map_BattleArea_Impl_TrySplit_closure_Invoke(__int64 result,
                                                         _DWORD* a2, int* a3,
                                                         int* a4, int* a5)
{
  int v5;
  int v6;
  int v7;
  _DWORD* v8;

  v5 = *a3;
  v6 = *a4;
  v7 = *a5;
  v8 = *(_DWORD**)(result + 8);
  v8[8] = *a2;
  v8[9] = v5;
  v8[10] = v6;
  v8[11] = v7;
  return result;
}

__int64 game_map_BattleArea_Impl_TrySplit_closure0_Invoke(__int64 result,
                                                          _DWORD* a2, int* a3,
                                                          int* a4, int* a5)
{
  int v5;
  int v6;
  int v7;
  _DWORD* v8;

  v5 = *a3;
  v6 = *a4;
  v7 = *a5;
  v8 = *(_DWORD**)(result + 8);
  v8[32] = *a2;
  v8[33] = v5;
  v8[34] = v6;
  v8[35] = v7;
  return result;
}

char* BattleArea_8be220(char* result, char* a2, _DWORD* a3, unsigned __int64 a4,
                        char* a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  __int64 v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  unsigned int v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;
  char v22;
  char* v23;
  __int64 v24;
  char* v25;
  char* v26;
  int v27;
  int v28;
  int v29;
  int v30;
  __int64 v31;
  unsigned int v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
  int v38;
  unsigned int v39;
  int v40;
  int v41;
  int v42;
  __int16 v43;
  char* v44;
  __int64 v45;
  int v46;
  int v47;
  unsigned int v48;
  int v49;
  int v50;
  int v51;
  __int64 v52;
  int v53;
  int v54;
  int v55;
  int v56;
  unsigned int v57;
  int v58;
  unsigned int v59;
  int v60;
  int v61;
  int v62;
  __int64 v63;
  char* v64;
  char* v69;
  __int64 v70;
  char* v71;
  char* v72;
  char* v73;
  char* v74;
  char* v75;
  int v76;
  int v77;
  int v78;
  int v79;
  __int64 v80;
  unsigned int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  unsigned int v86;
  int v87;
  unsigned int v88;
  int v89;
  int v90;
  int v91;
  char v92;
  __int64 v93;
  char* v94;
  char* v95;

  if (a4 != 0) {
    if (a4 == 2) {
      v5 = *(a2 - 4);
      v6 = *(a2 - 3);
      v7 = a3[2];
      v8 = a3[3];
      v9 = *(_QWORD*)(*(_QWORD*)a3 + 8LL) + 64LL;
      v10 = v5 + 32 * v6;
      if (v10 >= 0x400) {
        v10 = 0;
      }
      v11 = v7 - v5;
      v12 = *(unsigned __int8*)(v9 + v10);
      if (v7 - v5 < 0) {
        v11 = v5 - v7;
      }
      v13 = v8 - v6;
      if (v13 < 0) {
        v13 = -v13;
      }
      v14 = v11 + (v12 << 16);
      v15 = result[1];
      v16 = v14 + v13;
      v17 = *result;
      v18 = v17 + 32 * v15;
      if (v18 >= 0x400) {
        v18 = 0;
      }
      v19 = v7 - v17;
      v20 = *(unsigned __int8*)(v9 + v18);
      if (v19 < 0) {
        v19 = -v19;
      }
      v21 = v8 - v15;
      if (v21 < 0) {
        v21 = -v21;
      }
      if (v16 >= v21 + v19 + (v20 << 16)) {
        *a5 = v17;
        a5[1] = result[1];
        a5[2] = result[2];
        a5[3] = result[3];
        a5[4] = *(a2 - 4);
        a5[5] = *(a2 - 3);
        a5[6] = *(a2 - 2);
        v22 = *(a2 - 1);
      }
      else {
        *a5 = v5;
        a5[1] = *(a2 - 3);
        a5[2] = *(a2 - 2);
        a5[3] = *(a2 - 1);
        a5[4] = *result;
        a5[5] = result[1];
        a5[6] = result[2];
        v22 = result[3];
      }
      a5[7] = v22;
    }
    else if (a4 == 1) {
      *a5 = *result;
      a5[1] = result[1];
      a5[2] = result[2];
      a5[3] = result[3];
    }
    else if ((__int64)a4 > 8) {
      v63 = a4 >> 1;
      v64 = result;
      v69 = &result[4 * (a4 >> 1)];
      v70 = 4 * (a4 >> 1);
      GameRoutine_8bde20(result, v69, a3, v63, a5, v63);
      result =
          GameRoutine_8bde20(v69, a2, a3, a4 - v63, &a5[4 * v63], a4 - v63);
      if (v70 != 0) {
        v71 = v69;
        v72 = a5;
        v73 = a2;
        v74 = v64;
        while (v71 != a2) {
          v76 = *v71;
          v77 = v71[1];
          v78 = a3[2];
          v79 = a3[3];
          v80 = *(_QWORD*)(*(_QWORD*)a3 + 8LL) + 64LL;
          v81 = v76 + 32 * v77;
          if (v81 >= 0x400) {
            v81 = 0;
          }
          v82 = v78 - v76;
          v83 = *(unsigned __int8*)(v80 + v81);
          if (v78 - v76 < 0) {
            v82 = v76 - v78;
          }
          v84 = v79 - v77;
          if (v84 < 0) {
            v84 = -v84;
          }
          v85 = v82 + (v83 << 16);
          result = (char*)(unsigned int)v74[1];
          v86 = v85 + v84;
          v87 = *v74;
          v88 = v87 + 32 * (_DWORD)result;
          if (v88 >= 0x400) {
            v88 = 0;
          }
          v89 = v78 - v87;
          v90 = *(unsigned __int8*)(v80 + v88);
          if (v89 < 0) {
            v89 = -v89;
          }
          v91 = v79 - (_DWORD)result;
          if (v91 < 0) {
            v91 = -v91;
          }
          if (v86 >= v91 + v89 + (v90 << 16)) {
            *v72 = v87;
            v75 = v74;
            v74 += 4;
          }
          else {
            *v72 = v76;
            v75 = v71;
            v71 += 4;
          }
          v72[1] = v75[1];
          v72[2] = v75[2];
          v72[3] = v75[3];
          v72 += 4;
          if (v74 == v69) {
            goto LABEL_79;
          }
        }
        if (v74 != v69) {
          v93 = 0;
          do {
            v94 = &v74[v93];
            v95 = &v72[v93];
            v93 += 4;
            *v95 = *v94;
            v95[1] = v94[1];
            v95[2] = v94[2];
            v95[3] = v94[3];
          } while (v94 + 4 != v69);
        }
      }
      else {
        v71 = v69;
        v72 = a5;
        v73 = a2;
      LABEL_79:
        while (v71 != v73) {
          *v72 = *v71;
          v72[1] = v71[1];
          v72[2] = v71[2];
          v92 = v71[3];
          v71 += 4;
          v72[3] = v92;
          v72 += 4;
        }
      }
    }
    else if (result != a2) {
      v23 = result + 4;
      *a5 = *result;
      a5[1] = result[1];
      a5[2] = result[2];
      a5[3] = result[3];
      if (result + 4 != a2) {
        v24 = 0;
        v25 = a5;
        do {
          v26 = v23;
          v27 = result[4];
          v28 = result[5];
          v29 = a3[2];
          v30 = a3[3];
          v31 = *(_QWORD*)(*(_QWORD*)a3 + 8LL) + 64LL;
          v32 = v27 + 32 * v28;
          if (v32 >= 0x400) {
            v32 = 0;
          }
          v33 = v29 - v27;
          v34 = *(unsigned __int8*)(v31 + v32);
          if (v29 - v27 < 0) {
            v33 = v27 - v29;
          }
          v35 = v30 - v28;
          if (v35 < 0) {
            v35 = -v35;
          }
          v36 = v33 + (v34 << 16) + v35;
          v37 = *v25;
          v38 = v25[1];
          v39 = v37 + 32 * v38;
          if (v39 >= 0x400) {
            v39 = 0;
          }
          v40 = v29 - v37;
          v41 = *(unsigned __int8*)(v31 + v39);
          if (v40 < 0) {
            v40 = -v40;
          }
          v42 = v30 - v38;
          if (v42 < 0) {
            v42 = -v42;
          }
          if (v36 >= v42 + v40 + (v41 << 16)) {
            v25[4] = v27;
            v25[5] = result[5];
            v25[6] = result[6];
            v25[7] = result[7];
          }
          else {
            v25[4] = v37;
            v43 = *((_WORD*)v25 + 1);
            v25[5] = v38;
            *((_WORD*)v25 + 3) = v43;
            v44 = a5;
            if (v25 != a5) {
              v45 = v24;
              while (1) {
                v46 = *v26;
                v47 = result[5];
                v44 = &a5[v45];
                v48 = v46 + 32 * v47;
                v49 = a3[2];
                v50 = a3[3];
                if (v48 >= 0x400) {
                  v48 = 0;
                }
                v51 = v49 - v46;
                v52 = *(_QWORD*)(*(_QWORD*)a3 + 8LL) + 64LL;
                if (v51 < 0) {
                  v51 = -v51;
                }
                v53 = v50 - v47;
                v54 = *(unsigned __int8*)(v52 + v48);
                if (v53 < 0) {
                  v53 = -v53;
                }
                v55 = v51 + (v54 << 16);
                v56 = *(v44 - 3);
                v57 = v55 + v53;
                v58 = *(v44 - 4);
                v59 = v58 + 32 * v56;
                if (v59 >= 0x400) {
                  v59 = 0;
                }
                v60 = v49 - v58;
                v61 = *(unsigned __int8*)(v52 + v59);
                if (v60 < 0) {
                  v60 = -v60;
                }
                v62 = v50 - v56;
                if (v62 < 0) {
                  v62 = -v62;
                }
                if (v57 >= v62 + v60 + (v61 << 16)) {
                  break;
                }
                v45 -= 4;
                *(_DWORD*)v44 = *((_DWORD*)v44 - 1);
                if (v45 == 0) {
                  v44 = a5;
                  break;
                }
              }
            }
            *(_DWORD*)v44 = *(_DWORD*)v26;
          }
          v25 += 4;
          v23 = v26 + 4;
          v24 += 4;
          result = v26;
        } while (v26 + 4 != a2);
      }
    }
  }
  return result;
}

void BattleArea_8becc0(__int64 a1, __int64 a2, __int64 a3, __int64 a4,
                       __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                       __int64 a9, __int64 a10, __int64 a11)
{
  int v12;
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  __int64 v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  int v31;

  if (a2 != a4) {
    while (a6 != a8) {
      v12 = *(char*)(a2 - 4);
      v13 = *(char*)(a2 - 3);
      v14 = v12 + 32 * v13;
      v16 = *(_DWORD*)(*(_QWORD*)a11 + 8LL);
      v15 = *(_DWORD*)(*(_QWORD*)a11 + 12LL);
      v17 = *(char*)(a6 - 3);
      if (v14 >= 0x400) {
        v14 = 0;
      }
      v18 = v16 - v12;
      if (v18 < 0) {
        v18 = -v18;
      }
      v19 = v15 - v13;
      if (v19 < 0) {
        v19 = -v19;
      }
      v20 = *(_QWORD*)(**(_QWORD**)a11 + 8LL) + 64LL;
      v21 = v18 + (*(unsigned __int8*)(v20 + v14) << 16) + v19;
      v22 = *(char*)(a6 - 4);
      v23 = v22 + 32 * v17;
      if (v23 >= 0x400) {
        v23 = 0;
      }
      v24 = v16 - v22;
      v25 = *(unsigned __int8*)(v20 + v23);
      if (v24 < 0) {
        v24 = -v24;
      }
      v26 = v15 - v17;
      if (v26 < 0) {
        v26 = -v26;
      }
      v27 = v26 + v24 + (v25 << 16);
      v28 = v21 >= v27;
      if (v21 >= v27) {
        v29 = a2;
      }
      else {
        v29 = a6;
      }
      if (v28) {
        a2 -= 4;
      }
      else {
        a6 -= 4;
      }
      *(_DWORD*)(a10 - 4) = *(_DWORD*)(v29 - 4);
      a10 -= 4;
      if (a2 == a4) {
        return;
      }
    }
    if (a4 != a2) {
      v30 = -4;
      do {
        v31 = *(_DWORD*)(a2 - 4);
        a2 -= 4;
        *(_DWORD*)(a10 + v30) = v31;
        v30 -= 4;
      } while (a2 != a4);
    }
  }
}

char* BattleArea_8beda0(char* result, char* a2, __int64 a3, unsigned __int64 a4,
                        char* a5, signed __int64 a6)
{
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  char* v14;
  __int64 v15;
  char* v16;
  int* v17;
  int v18;
  char* v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  unsigned int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  __int64 v30;
  char* v31;
  int v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  unsigned __int64 v41;
  unsigned __int64 v43;
  char* v44;
  char* v48;
  char* v51;
  char* v52;
  char* v53;
  char* v54;
  int v55;
  int v56;
  int v57;
  int v58;
  unsigned int v59;
  int v60;
  int v61;
  unsigned int v62;
  bool v63;
  char* v64;
  __int64 v65;
  int v66;
  __int64 v67;
  int v68;
  int v69;

  if (a4 >= 2) {
    if (a4 == 2) {
      v7 = *(_DWORD*)(*(_QWORD*)a3 + 144LL);
      v6 = *(_DWORD*)(*(_QWORD*)a3 + 148LL);
      v8 = v7 - *(a2 - 4);
      if (v8 < 0) {
        v8 = *(a2 - 4) - v7;
      }
      v9 = v6 - *(a2 - 3);
      if (v9 < 0) {
        v9 = *(a2 - 3) - v6;
      }
      v10 = v9 + v8;
      v11 = v7 - *result;
      if (v11 < 0) {
        v11 = *result - v7;
      }
      v12 = v6 - result[1];
      if (v12 < 0) {
        v12 = -v12;
      }
      if (v10 < v12 + v11) {
        v13 = *(_DWORD*)result;
        *(_DWORD*)result = *((_DWORD*)a2 - 1);
        *((_DWORD*)a2 - 1) = v13;
      }
    }
    else if ((__int64)a4 > 128) {
      v41 = a4 >> 1;
      v43 = a4 - (a4 >> 1);
      if ((__int64)a4 <= a6) {
        v48 = result;
        v51 = a5;
        ((void (*)(void))BattleArea_8bf0e0_alt1)();
        v52 = &v51[4 * v41];
        result = (char*)BattleArea_8bf0e0_alt1(&v48[4 * v41], a2, a3, v43, v52);
        v53 = &v51[4 * a4];
        v54 = v52;
        while (v54 != v53) {
          v56 = *(_DWORD*)(*(_QWORD*)a3 + 144LL);
          v55 = *(_DWORD*)(*(_QWORD*)a3 + 148LL);
          v57 = v56 - *v54;
          if (v57 < 0) {
            v57 = *v54 - v56;
          }
          v58 = v55 - v54[1];
          if (v58 < 0) {
            v58 = v54[1] - v55;
          }
          v59 = v58 + v57;
          v60 = v56 - *v51;
          if (v60 < 0) {
            v60 = *v51 - v56;
          }
          v61 = v55 - v51[1];
          if (v61 < 0) {
            v61 = -v61;
          }
          v62 = v61 + v60;
          v63 = v59 >= v62;
          if (v59 >= v62) {
            v64 = v51;
          }
          else {
            v64 = v54;
          }
          if (v63) {
            v65 = 4;
          }
          else {
            v65 = 0;
          }
          v66 = *(_DWORD*)v64;
          v51 += v65;
          if (v63) {
            v67 = 0;
          }
          else {
            v67 = 4;
          }
          v54 += v67;
          *(_DWORD*)v48 = v66;
          v48 += 4;
          if (v51 == v52) {
            while (v54 != v53) {
              v69 = *(_DWORD*)v54;
              v54 += 4;
              *(_DWORD*)v48 = v69;
              v48 += 4;
            }
            return result;
          }
        }
        while (v51 != v52) {
          v68 = *(_DWORD*)v51;
          v51 += 4;
          *(_DWORD*)v48 = v68;
          v48 += 4;
        }
      }
      else {
        v44 = result;
        BattleArea_8beda0(result, &result[4 * v41], a3, a4 >> 1, a5, a6);
        BattleArea_8beda0(&v44[4 * v41], a2, a3, v43, a5, a6);
        return (char*)GameRoutine_8bf520(v44, &v44[4 * v41], a2, a3, v41, v43,
                                         a5, a6);
      }
    }
    else if (result != a2) {
      v14 = result + 4;
      if (result + 4 != a2) {
        v15 = 0;
        v16 = result;
        do {
          v18 = v16[4];
          v19 = v14;
          v20 = v16[5];
          v22 = *(_DWORD*)(*(_QWORD*)a3 + 144LL);
          v21 = *(_DWORD*)(*(_QWORD*)a3 + 148LL);
          v23 = v22 - v18;
          if (v22 - v18 < 0) {
            v23 = v18 - v22;
          }
          v24 = v21 - v20;
          if (v21 - v20 < 0) {
            v24 = v20 - v21;
          }
          v25 = v24 + v23;
          v26 = v22 - *v16;
          if (v26 < 0) {
            v26 = -v26;
          }
          v27 = v21 - v16[1];
          if (v27 < 0) {
            v27 = -v27;
          }
          if (v25 < v27 + v26) {
            v28 = (unsigned __int8)v16[6];
            v29 = (unsigned __int8)v16[7];
            v30 = v15;
            do {
              v31 = &result[v30];
              *(_DWORD*)&result[v30 + 4] = *(_DWORD*)&result[v30];
              if (v30 == 0) {
                v17 = (int*)result;
                goto LABEL_19;
              }
              v30 -= 4;
              v33 = *(_DWORD*)(*(_QWORD*)a3 + 144LL);
              v32 = *(_DWORD*)(*(_QWORD*)a3 + 148LL);
              v34 = v33 - v18;
              if (v33 - v18 < 0) {
                v34 = v18 - v33;
              }
              v35 = v32 - v20;
              if (v32 - v20 < 0) {
                v35 = v20 - v32;
              }
              v36 = v35 + v34;
              v37 = *(v31 - 4);
              v38 = *(v31 - 3);
              v39 = v33 - v37;
              if (v39 < 0) {
                v39 = -v39;
              }
              v40 = v32 - v38;
              if (v40 < 0) {
                v40 = -v40;
              }
            } while (v36 < v40 + v39);
            v17 = (int*)&result[v30 + 4];
          LABEL_19:
            *v17 = (unsigned __int8)v18 | ((unsigned __int8)v20 << 8) |
                   (v28 << 16) | (v29 << 24);
          }
          v14 = v19 + 4;
          v15 += 4;
          v16 = v19;
        } while (v19 + 4 != a2);
      }
    }
  }
  return result;
}

char* BattleArea_8bf0e0(char* result, char* a2, __int64 a3, unsigned __int64 a4,
                        char* a5)
{
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  int v13;
  char v14;
  char* v15;
  __int64 v16;
  char* v17;
  char* v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  unsigned int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  __int16 v29;
  char* v30;
  __int64 v31;
  int v32;
  int v33;
  int v34;
  int v35;
  unsigned int v36;
  int v37;
  int v38;
  __int64 v39;
  char* v40;
  char* v45;
  __int64 v46;
  char* v47;
  char* v48;
  char* v49;
  char* v50;
  char* v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  unsigned int v57;
  int v58;
  int v59;
  int v60;
  char v61;
  __int64 v62;
  char* v63;
  char* v64;

  if (a4 != 0) {
    if (a4 == 2) {
      v5 = *(a2 - 4);
      v6 = *(_DWORD*)(*(_QWORD*)a3 + 144LL);
      v7 = *(_DWORD*)(*(_QWORD*)a3 + 148LL);
      v8 = v6 - v5;
      if (v6 - v5 < 0) {
        v8 = v5 - v6;
      }
      v9 = v7 - *(a2 - 3);
      if (v9 < 0) {
        v9 = *(a2 - 3) - v7;
      }
      v10 = v9 + v8;
      v11 = *result;
      v12 = v6 - v11;
      if (v12 < 0) {
        v12 = -v12;
      }
      v13 = v7 - result[1];
      if (v13 < 0) {
        v13 = -v13;
      }
      if (v10 >= v13 + v12) {
        *a5 = v11;
        a5[1] = result[1];
        a5[2] = result[2];
        a5[3] = result[3];
        a5[4] = *(a2 - 4);
        a5[5] = *(a2 - 3);
        a5[6] = *(a2 - 2);
        v14 = *(a2 - 1);
      }
      else {
        *a5 = v5;
        a5[1] = *(a2 - 3);
        a5[2] = *(a2 - 2);
        a5[3] = *(a2 - 1);
        a5[4] = *result;
        a5[5] = result[1];
        a5[6] = result[2];
        v14 = result[3];
      }
      a5[7] = v14;
    }
    else if (a4 == 1) {
      *a5 = *result;
      a5[1] = result[1];
      a5[2] = result[2];
      a5[3] = result[3];
    }
    else if ((__int64)a4 > 8) {
      v39 = a4 >> 1;
      v40 = result;
      v45 = &result[4 * (a4 >> 1)];
      v46 = 4 * (a4 >> 1);
      BattleArea_8beda0_alt1(result, v45, a3, v39, a5, v39);
      result =
          BattleArea_8beda0_alt1(v45, a2, a3, a4 - v39, &a5[4 * v39], a4 - v39);
      if (v46 != 0) {
        v47 = v45;
        v48 = a5;
        v49 = a2;
        v50 = v40;
        while (v47 != a2) {
          v52 = *v47;
          v53 = *(_DWORD*)(*(_QWORD*)a3 + 144LL);
          v54 = *(_DWORD*)(*(_QWORD*)a3 + 148LL);
          v55 = v53 - v52;
          if (v53 - v52 < 0) {
            v55 = v52 - v53;
          }
          v56 = v54 - v47[1];
          if (v56 < 0) {
            v56 = v47[1] - v54;
          }
          v57 = v56 + v55;
          v58 = *v50;
          v59 = v53 - v58;
          if (v59 < 0) {
            v59 = -v59;
          }
          v60 = v54 - v50[1];
          if (v60 < 0) {
            v60 = -v60;
          }
          if (v57 >= v60 + v59) {
            *v48 = v58;
            v51 = v50;
            v50 += 4;
          }
          else {
            *v48 = v52;
            v51 = v47;
            v47 += 4;
          }
          v48[1] = v51[1];
          v48[2] = v51[2];
          v48[3] = v51[3];
          v48 += 4;
          if (v50 == v45) {
            goto LABEL_63;
          }
        }
        if (v50 != v45) {
          v62 = 0;
          do {
            v63 = &v50[v62];
            v64 = &v48[v62];
            v62 += 4;
            *v64 = *v63;
            v64[1] = v63[1];
            v64[2] = v63[2];
            v64[3] = v63[3];
          } while (v63 + 4 != v45);
        }
      }
      else {
        v47 = v45;
        v48 = a5;
        v49 = a2;
      LABEL_63:
        while (v47 != v49) {
          *v48 = *v47;
          v48[1] = v47[1];
          v48[2] = v47[2];
          v61 = v47[3];
          v47 += 4;
          v48[3] = v61;
          v48 += 4;
        }
      }
    }
    else if (result != a2) {
      v15 = result + 4;
      *a5 = *result;
      a5[1] = result[1];
      a5[2] = result[2];
      a5[3] = result[3];
      if (result + 4 != a2) {
        v16 = 0;
        v17 = a5;
        do {
          v18 = v15;
          v19 = result[4];
          v20 = *(_DWORD*)(*(_QWORD*)a3 + 144LL);
          v21 = *(_DWORD*)(*(_QWORD*)a3 + 148LL);
          v22 = v20 - v19;
          if (v20 - v19 < 0) {
            v22 = v19 - v20;
          }
          v23 = v21 - result[5];
          if (v23 < 0) {
            v23 = result[5] - v21;
          }
          v24 = v23 + v22;
          v25 = *v17;
          v26 = v17[1];
          v27 = v20 - v25;
          if (v27 < 0) {
            v27 = -v27;
          }
          v28 = v21 - v26;
          if (v28 < 0) {
            v28 = -v28;
          }
          if (v24 >= v28 + v27) {
            v17[4] = v19;
            v17[5] = result[5];
            v17[6] = result[6];
            v17[7] = result[7];
          }
          else {
            v17[4] = v25;
            v29 = *((_WORD*)v17 + 1);
            v17[5] = v26;
            *((_WORD*)v17 + 3) = v29;
            v30 = a5;
            if (v17 != a5) {
              v31 = v16;
              while (1) {
                v30 = &a5[v31];
                v33 = *(_DWORD*)(*(_QWORD*)a3 + 144LL);
                v32 = *(_DWORD*)(*(_QWORD*)a3 + 148LL);
                v34 = v33 - *v18;
                if (v34 < 0) {
                  v34 = *v18 - v33;
                }
                v35 = v32 - result[5];
                if (v35 < 0) {
                  v35 = result[5] - v32;
                }
                v36 = v35 + v34;
                v37 = v33 - *(v30 - 4);
                if (v37 < 0) {
                  v37 = *(v30 - 4) - v33;
                }
                v38 = v32 - a5[v31 - 3];
                if (v38 < 0) {
                  v38 = -v38;
                }
                if (v36 >= v38 + v37) {
                  break;
                }
                v31 -= 4;
                *(_DWORD*)v30 = *((_DWORD*)v30 - 1);
                if (v31 == 0) {
                  v30 = a5;
                  break;
                }
              }
            }
            *(_DWORD*)v30 = *(_DWORD*)v18;
          }
          v17 += 4;
          v15 = v18 + 4;
          v16 += 4;
          result = v18;
        } while (v18 + 4 != a2);
      }
    }
  }
  return result;
}

_QWORD* game_map_BattleArea_CreateBorder_lambda0_Invoke(_QWORD* result, int* a2)
{
  int* v2;
  int v3;
  int* v4;
  int v5;
  int* v6;
  int v7;
  int v8;
  int* v9;
  int v10;
  int v11;
  int v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  __int64 v19;
  int v20;
  int v21;
  bool v22;
  int v23;
  __int64 v24;

  v2 = (int*)result[1];
  v3 = *a2 - 1;
  if (v3 >= *v2) {
    v3 = *v2;
  }
  *v2 = v3;
  v4 = (int*)result[2];
  v5 = a2[1] - 1;
  if (v5 >= *v4) {
    v5 = *v4;
  }
  *v4 = v5;
  v6 = (int*)result[3];
  v7 = a2[2];
  if (*v6 <= v7 + 1) {
    v8 = v7 + 1;
  }
  else {
    v8 = *v6;
  }
  *v6 = v8;
  v9 = (int*)result[4];
  v10 = a2[3];
  if (*v9 <= v10 + 1) {
    v11 = v10 + 1;
  }
  else {
    v11 = *v9;
  }
  *v9 = v11;
  if (*a2 - 1 <= a2[2] + 1) {
    v12 = *a2 - 33;
    do {
      LODWORD(v13) = v12 + 32 * a2[1];
      if ((unsigned int)v13 >= 0x400) {
        v13 = 0;
      }
      else {
        v13 = (unsigned int)v13;
      }
      ++*(_BYTE*)(result[5] + v13 + 8);
      LODWORD(v13) = v12 + 32 * a2[3] + 64;
      if ((unsigned int)v13 >= 0x400) {
        v13 = 0;
      }
      else {
        v13 = (unsigned int)v13;
      }
      ++*(_BYTE*)(result[5] + v13 + 8);
      v14 = v12 + 32;
      ++v12;
    } while (v14 <= a2[2]);
  }
  v15 = a2[1];
  v16 = a2[3];
  if (v15 <= v16) {
    v17 = v15 - 1;
    v18 = (32 * v15) | 1;
    do {
      ++v17;
      LODWORD(v19) = v18 + *a2 - 2;
      if ((unsigned int)v19 >= 0x400) {
        v19 = 0;
      }
      else {
        v19 = (unsigned int)v19;
      }
      ++*(_BYTE*)(result[5] + v19 + 8);
      LODWORD(v19) = v18 + a2[2];
      v18 += 32;
      if ((unsigned int)v19 >= 0x400) {
        v19 = 0;
      }
      else {
        v19 = (unsigned int)v19;
      }
      ++*(_BYTE*)(result[5] + v19 + 8);
      v16 = a2[3];
    } while (v17 < v16);
    v15 = a2[1];
  }
  if (v15 <= v16) {
    v20 = a2[2];
    if (*a2 <= v20) {
      v21 = 32 * v15;
      do {
        v23 = *a2;
        if (*a2 <= v20) {
          do {
            LODWORD(v24) = v21 + v23;
            if ((unsigned int)(v21 + v23) >= 0x400) {
              v24 = 0;
            }
            else {
              v24 = (unsigned int)v24;
            }
            --*(_BYTE*)(result[5] + v24 + 8);
            v20 = a2[2];
            v22 = v23++ < v20;
          } while (v22);
          v16 = a2[3];
        }
        v21 += 32;
        v22 = v15++ < v16;
      } while (v22);
    }
  }
  return result;
}

#pragma GCC visibility pop
