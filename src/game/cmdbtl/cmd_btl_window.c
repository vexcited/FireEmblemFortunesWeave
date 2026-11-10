#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _QWORD GameData_1c054e0[4];
extern __int64 (*GameData_20d8f38[])();
extern __int64 (*GameData_20d8f58[])();
extern __int64 (*GameData_20d9018[])();
extern __int64 (*game_cmdbtl_CmdBtlWindow_vtable[])();
extern __int64 GameData_22190b8;
extern __int64 GameData_22197d8;
extern __int64 GameData_221b2e8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f628[9];
extern int GameData_2265770;
void __attribute__((noreturn)) GameRoutine_17c88f0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 CmdBtlWindow_Destructor(_QWORD* a1);
__int64 CmdBtlWindow_17c8500(__int64 a1);
_QWORD* CmdBtlWindow_17c8620(_QWORD* result, __int64* a2, char a3, char a4);
__int64 CmdBtlWindow_Unknown4();
__int64 CmdBtlWindow_17c87e0();
__int64 CmdBtlWindow_Unknown5();
__int64 GameRoutine_17c1720(__int64);
__int64 GameRoutine_17c55b0(__int64);
__int64 GameRoutine_17c89c0(_QWORD);
extern __int64 (*CmdBtlWindow_17c87e0_ptr[])();
extern __int64 GameData_212f538;
extern __int64 GameData_212f5c0[3];
__int64 CmdBtlWindow_17c7dc0(__int64 a1);
__int64 CmdBtlWindow_DeletingDestructor();

__int64 CmdBtlWindow_17c7dc0(__int64 a1)
{
  __int64* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;

  v1 = (__int64*)GameData_212f538;
  if (*(_QWORD*)GameData_212f538 == 0) {
    *(_QWORD*)GameData_212f538 = a1;
    GameData_2265770 = 1;
  }
  *(_DWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 56) = 0;
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  *(_DWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_BYTE*)(a1 + 32) = 1;
  *(_QWORD*)a1 = game_cmdbtl_CmdBtlWindow_vtable;
  *(_QWORD*)(a1 + 8) = CmdBtlWindow_17c87e0_ptr;
  *(_QWORD*)(a1 + 24) = GameData_20d8f58;
  *(_DWORD*)(a1 + 36) = 2;
  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 117) = 0;
  v3 = fw_memory_HeapManager_Allocate(*v2, 288, 16, 0);
  GameRoutine_17c55b0(v3);
  *GameData_212f628[0] = v3;
  (*(void (**)(__int64))(*(_QWORD*)(v3 + 240) + 16LL))(v3 + 240);
  v4 = fw_memory_HeapManager_Allocate(*v2, 368, 16, 0);
  GameRoutine_17c1720(v4);
  *(_QWORD*)GameData_212f5c0[0] = v4;
  result = (*(__int64 (**)(__int64))(*(_QWORD*)(v4 + 240) + 16LL))(v4 + 240);
  v6 = *v1;
  if (*v1 != 0) {
    v7 = *(_QWORD*)(v6 + 48);
    v8 = *(_QWORD*)(v6 + 56);
    v9 = ((v8 - v7) << 7) - 1;
    if (v8 == v7) {
      v9 = 0;
    }
    v10 = *(_QWORD*)(v6 + 80) + *(_QWORD*)(v6 + 72);
    if (v9 == v10) {
      GameRoutine_17c89c0(v6 + 40);
      v7 = *(_QWORD*)(v6 + 48);
      v10 = *(_QWORD*)(v6 + 80) + *(_QWORD*)(v6 + 72);
    }
    v11 = 0;
    *(_DWORD*)(*(_QWORD*)(v7 + 8 * (v10 >> 10)) + 4 * (v10 & 0x3FF)) =
        *(_DWORD*)(v6 + 88);
    ++*(_QWORD*)(v6 + 80);
    result = CmdBtlWindow_17c8620(v6, &v11, 0, 0);
    *(_DWORD*)(v6 + 88) = 1;
  }
  return result;
}

__int64 CmdBtlWindow_Destructor(_QWORD* a1)
{
  __int64* v2;
  __int64 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  *a1 = game_cmdbtl_CmdBtlWindow_vtable;
  a1[1] = GameData_20d8f38;
  a1[3] = GameData_20d8f58;
  v2 = GameData_212f628[0];
  (*(void (**)(__int64))(*(_QWORD*)(*GameData_212f628[0] + 240) + 24LL))(
      *GameData_212f628[0] + 240);
  if (*v2 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v2 + 16LL))(*v2);
  }
  *v2 = 0;
  (*(void (**)(__int64))(*(_QWORD*)(GameData_22197d8 + 240) + 24LL))(
      GameData_22197d8 + 240);
  result = GameData_22197d8;
  if (GameData_22197d8 != 0) {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)GameData_22197d8 + 16LL))(
        GameData_22197d8);
  }
  GameData_22197d8 = 0;
  v4 = a1[12];
  v5 = fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[13] = v4;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v6 + v7, v4);
  }
  v8 = (_QWORD*)a1[6];
  v9 = (_QWORD*)a1[7];
  a1[10] = 0;
  v10 = v9 - v8;
  if (v10 >= 3) {
    do {
      if (*v8 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v11, *v8);
        v8 = (_QWORD*)a1[6];
        v9 = (_QWORD*)a1[7];
      }
      a1[6] = ++v8;
      v10 = v9 - v8;
    } while (v10 > 2);
  }
  if (v10 == 1) {
    v12 = 512;
  }
  else {
    if (v10 != 2) {
      goto LABEL_22;
    }
    v12 = 1024;
  }
  a1[9] = v12;

LABEL_22:
  if (v8 != v9) {
    do {
      if (*v8 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v13 = 128;
        }
        else {
          v13 = 56;
        }
        result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v13, *v8);
      }
      ++v8;
    } while (v8 != v9);
    v14 = a1[7];
    v15 = a1[6] - v14;
    if (v15 != 0) {
      a1[7] = v14 + ((v15 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v16 = a1[5];
  if (v16 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v17 = 56;
    }
    result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v17, v16);
  }
  *a1 = GameData_20d9018;
  if ((_QWORD*)GameData_22190b8 == a1) {
    GameData_22190b8 = 0;
    GameData_2265770 = 0;
  }
  return result;
}

__int64 CmdBtlWindow_17c8500(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  int v17;
  int v18;
  __int64 result;
  unsigned __int64 v20;

  v2 = *(_QWORD*)(a1 + 72);
  v1 = *(_QWORD*)(a1 + 80);
  v4 = *(_QWORD*)(a1 + 48);
  v3 = *(_QWORD*)(a1 + 56);
  v6 = v3 == v4;
  v7 = v1 - 1 + v2;
  v8 = v7 >> 10;
  v9 = v7 & 0x3FF;
  v10 = ((v3 - v4) << 7) - 1;
  v11 = *(_QWORD*)(v4 + 8 * v8);
  if (v6) {
    v10 = 0;
  }
  v12 = *(_DWORD*)(v11 + 4 * v9);
  *(_QWORD*)(a1 + 80) = v1 - 1;
  if ((unsigned __int64)(v10 - (v1 + v2) + 1) >= 0x800) {
    v13 = *(_QWORD*)(v3 - 8);
    if (v13 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v13);
      v3 = *(_QWORD*)(a1 + 56);
    }
    *(_QWORD*)(a1 + 56) = v3 - 8;
  }
  v15 = GameData_1c054e0[*(int*)(a1 + 88)];
  v16 = HIDWORD(v15);
  v20 = v15;
  if ((_DWORD)v15 != 0) {
    if ((_DWORD)v15 != 1) {
      goto LABEL_14;
    }
    v17 = 0;
  }
  else {
    v17 = 1;
  }
  LODWORD(v20) = v17;

LABEL_14:
  if ((_DWORD)v16 == 0) {
    v18 = 1;
    goto LABEL_18;
  }
  if ((_DWORD)v16 == 1) {
    v18 = 0;
  LABEL_18:
    HIDWORD(v20) = v18;
  }
  result = CmdBtlWindow_17c8620(a1, &v20, 0, 0);
  *(_DWORD*)(a1 + 88) = v12;
  return result;
}

_QWORD* CmdBtlWindow_17c8620(_QWORD* result, __int64* a2, char a3, char a4)
{
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char v7;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;

  v4 = *a2;
  v6 = result[13];
  v5 = result[14];
  v7 = a3 & 1;
  v9 = result;
  if (v6 >= v5) {
    v11 = result[12];
    v12 = v6 - v11;
    v13 = 1 - 0x5555555555555555LL * ((__int64)(v6 - v11) >> 2);
    if (v13 > 0x1555555555555555LL) {
      GameRoutine_17c88f0();
    }
    v14 = fw_memory_g_heap_manager_ptr;
    v15 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v5 - v11) >> 2);
    if (2 * v15 > v13) {
      v13 = 2 * v15;
    }
    if (v15 >= 0xAAAAAAAAAAAAAAALL) {
      v16 = 0x1555555555555555LL;
    }
    else {
      v16 = v13;
    }
    if (v16 != 0) {
      if (v16 > 0x1555555555555555LL) {
        GameRoutine_60a210(result);
      }
      v17 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 12 * v16, 16, 0);
    }
    else {
      v17 = 0;
    }
    v18 = v17 + v12;
    *(_QWORD*)v18 = v4;
    *(_BYTE*)(v18 + 8) = v7;
    v10 = v17 + v12 + 12;
    result = (_QWORD*)memcpy(v17, v11, v12);
    v9[12] = v17;
    v9[13] = v10;
    v9[14] = v17 + 12 * v16;
    if (v11 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v19 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v19, v11);
    }
  }
  else {
    *(_QWORD*)v6 = v4;
    *(_BYTE*)(v6 + 8) = v7;
    v10 = v6 + 12;
  }
  v9[13] = v10;
  if ((a4 & 1) == 0 && *((int*)v9 + 30) <= 0) {
    *((_DWORD*)v9 + 30) = *((_DWORD*)v9 + 9);
  }
  return result;
}

__int64 CmdBtlWindow_Unknown4()
{
  (*(void (**)(__int64))(*(_QWORD*)GameData_221b2e8 + 32LL))(GameData_221b2e8);
  return (*(__int64 (**)(__int64))(*(_QWORD*)GameData_22197d8 + 32LL))(
      GameData_22197d8);
}

__int64 CmdBtlWindow_17c87e0()
{
  (*(void (**)(__int64))(*(_QWORD*)GameData_221b2e8 + 32LL))(GameData_221b2e8);
  return (*(__int64 (**)(__int64))(*(_QWORD*)GameData_22197d8 + 32LL))(
      GameData_22197d8);
}

__int64 CmdBtlWindow_Unknown5()
{
  (*(void (**)(__int64))(*(_QWORD*)GameData_221b2e8 + 24LL))(GameData_221b2e8);
  return (*(__int64 (**)(__int64))(*(_QWORD*)GameData_22197d8 + 24LL))(
      GameData_22197d8);
}

__int64 CmdBtlWindow_DeletingDestructor()
{
  (*(void (**)(__int64))(*(_QWORD*)GameData_221b2e8 + 24LL))(GameData_221b2e8);
  return (*(__int64 (**)(__int64))(*(_QWORD*)GameData_22197d8 + 24LL))(
      GameData_22197d8);
}

#pragma GCC visibility pop
