#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_773420(__int64, __int64, long double);
__int64 GameRoutine_775580(__int64 (**)(), __int64, _QWORD*, long double);
__int64 GameRoutine_77b1a0(_QWORD);
__int64 GameRoutine_7823c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_783fa0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_785b80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_7d6200(_QWORD, _QWORD);
__int64 GameRoutine_844950(_QWORD, _QWORD);
__int64 GameRoutine_8450e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_845920(_QWORD, _QWORD);
__int64 GameRoutine_845bc0(_QWORD, _QWORD);
__int64 GameRoutine_a17d20(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 MapUtil_753570(int, int);
__int64 MapUtil_753570_alt1(_QWORD, _QWORD) __asm__("MapUtil_753570");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_Get(_QWORD);
__int64 game_UnitPool_Get_alt1(_QWORD,
                               long double) __asm__("game_UnitPool_Get");
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern _UNKNOWN GameData_1b47d78;
extern _UNKNOWN* GameData_212d208;
extern __int64 (*GameData_1f97f90[])();
extern __int64 (*GameData_1f98010[])();
extern __int64 (*GameData_1f98090[])();
extern __int64 (*GameData_1f98190[])();
extern __int64 GameData_212c060;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21cd140;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212cfb8[11];
extern __int64* game_g_empty_item_ptr;
float GameRoutine_7c05a0(_QWORD, _QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6e5a20(_QWORD);
__int64 VTarget_778140(__int64 a1, __int64 a2, char a3, __int64 a4);
__int64 VTarget_778500(__int64 a1);
__int64 game_map_VTarget_Enumerate(__int64 a1, long double a2);
char* VTarget_778980(__int64* a1, __int64 a2, int* a3);
char* VTarget_778d60(__int64* a1, int* a2);
__int64 VTarget_779120(__int64 a1);
char* VTarget_779520(_QWORD* a1, __int16 a2, __int16 a3);
_DWORD* VTarget_779660(_DWORD* a1, unsigned __int8 a2);
__int64 VTarget_7797e0(_DWORD* a1, unsigned __int8 a2);
__int64 VTarget_779940(_DWORD* a1, __int64 a2);
__int64 VTarget_779e40(_DWORD* a1, __int64 a2);
__int64 VTarget_77a0c0(__int64 a1, unsigned int a2, char a3, char a4);
__int64 VTarget_77a2e0(__int64 a1);
__int64 game_map_VTarget_GetSubDataNextSelect(__int64 a1, unsigned int a2,
                                              char a3, char a4);
__int64 VTarget_77a640(__int64 a1);
__int64 game_map_VTarget_EnumerateSubTarget(__int64 a1, unsigned int a2,
                                            long double a3);
float game_map_VTarget_GetDataNextSelect_lambda0_Invoke(__int64 a1, int* a2);
float game_map_VTarget_GetSubDataNextSelect_lambda0_Invoke(__int64 a1, int* a2);
__int64 game_map_VTarget_EnumerateSubTarget_lambda0_Invoke_787a80(__int64 a1,
                                                                  __int64 a2);
__int64 game_map_VTarget_EnumerateSubTarget_lambda0_Invoke_787bd0(__int64 a1,
                                                                  __int64 a2);
__int64* game_UnitPool_Get_alt2(_BYTE*) __asm__("game_UnitPool_Get");
void GameRoutine_7d6200_alt1(__int64*, _DWORD*) __asm__("GameRoutine_7d6200");
void GameRoutine_a17d20_alt1(int*, int*, __int64*, __int64,
                             char) __asm__("GameRoutine_a17d20");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 VTarget_778140(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v5;
  int v6;
  _DWORD* v7;
  int v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  _QWORD* v31;
  __int64 v32;
  _QWORD* v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;

  *(_BYTE*)(a1 + 8) = 0;
  *(_BYTE*)(a1 + 48) = 0;
  *(_QWORD*)(a1 + 12) = 0;
  *(_QWORD*)(a1 + 17) = 0;
  *(_DWORD*)(a1 + 28) = -1;
  v5 = a1 + 37036;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0xFFFFFFFF00000000LL;
  if (a2 != 0) {
    *(_BYTE*)(a1 + 8) = *(_BYTE*)(a2 + 2088);
    *(_DWORD*)(a1 + 20) = *(_DWORD*)(a2 + 592);
    v6 = *(char*)(a2 + 585);
    *(_DWORD*)(a1 + 12) = *(char*)(a2 + 584);
    *(_DWORD*)(a1 + 16) = v6;
  }
  v7 = (_DWORD*)(a1 + 24692);
  *(_BYTE*)(a1 + 24) = a3;
  if (a4 != 0) {
    v8 = *(_WORD*)(a4 + 16) & 0xFFF;
  }
  else {
    v8 = 0;
  }
  *(_DWORD*)(a1 + 40) = v8;
  *(_BYTE*)(a1 + 37092) = 0;
  *(_DWORD*)(a1 + 12348) = 0;
  *(_DWORD*)(a1 + 37088) = -1;
  if (*(_QWORD*)(a1 + 12376) != 0) {
    v9 = *(_QWORD**)(a1 + 12368);
    if (v9 != nullptr) {
      v10 = fw_memory_g_heap_manager_ptr;
      do {
        v11 = (_QWORD*)*v9;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v12, v9);
        v9 = v11;
      } while (v11 != nullptr);
    }
    v13 = *(_QWORD*)(a1 + 12360);
    *(_QWORD*)(a1 + 12368) = 0;
    if (v13 != 0) {
      v14 = v13 & 7;
      if (v13 >= 8) {
        v16 = v13 & 0xFFFFFFFFFFFFFFF8LL;
        v15 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 12352) + 8 * v15) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12352) + 8 * v15 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12352) + 8 * v15 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12352) + 8 * v15 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12352) + 8 * v15 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12352) + 8 * v15 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12352) + 8 * v15 + 48) = 0;
          v17 = *(_QWORD*)(a1 + 12352) + 8 * v15;
          v15 += 8;
          *(_QWORD*)(v17 + 56) = 0;
        } while (v16 != v15);
      }
      else {
        v15 = 0;
      }
      if (v14 != 0) {
        v18 = 8 * v15;
        do {
          --v14;
          *(_QWORD*)(*(_QWORD*)(a1 + 12352) + v18) = 0;
          v18 += 8;
        } while (v14 != 0);
      }
    }
    *(_QWORD*)(a1 + 12376) = 0;
  }
  v19 = *(_QWORD*)(a1 + 24720);
  *(_DWORD*)(a1 + 12392) = 0;
  *v7 = 0;
  if (v19 != 0) {
    v20 = *(_QWORD**)(a1 + 24712);
    if (v20 != nullptr) {
      v21 = fw_memory_g_heap_manager_ptr;
      do {
        v22 = (_QWORD*)*v20;
        if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v23, v20);
        v20 = v22;
      } while (v22 != nullptr);
    }
    v24 = *(_QWORD*)(a1 + 24704);
    *(_QWORD*)(a1 + 24712) = 0;
    if (v24 != 0) {
      v25 = v24 & 7;
      if (v24 >= 8) {
        v27 = v24 & 0xFFFFFFFFFFFFFFF8LL;
        v26 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v26) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v26 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v26 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v26 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v26 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v26 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v26 + 48) = 0;
          v28 = *(_QWORD*)(a1 + 24696) + 8 * v26;
          v26 += 8;
          *(_QWORD*)(v28 + 56) = 0;
        } while (v27 != v26);
      }
      else {
        v26 = 0;
      }
      if (v25 != 0) {
        v29 = 8 * v26;
        do {
          --v25;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + v29) = 0;
          v29 += 8;
        } while (v25 != 0);
      }
    }
    *(_QWORD*)(a1 + 24720) = 0;
  }
  v30 = *(_QWORD*)(v5 + 28);
  v7[11] = 0;
  *(_DWORD*)v5 = 0;
  if (v30 != 0) {
    v31 = *(_QWORD**)(v5 + 20);
    if (v31 != nullptr) {
      v32 = fw_memory_g_heap_manager_ptr;
      do {
        v33 = (_QWORD*)*v31;
        if (*(_QWORD*)(*(_QWORD*)v32 + 200LL) != 0) {
          v34 = 128;
        }
        else {
          v34 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v32 + v34, v31);
        v31 = v33;
      } while (v33 != nullptr);
    }
    v35 = *(_QWORD*)(v5 + 12);
    *(_QWORD*)(v5 + 20) = 0;
    if (v35 != 0) {
      v36 = v35 & 7;
      if (v35 >= 8) {
        v38 = v35 & 0xFFFFFFFFFFFFFFF8LL;
        v37 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v37) = 0;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v37 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v37 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v37 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v37 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v37 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v37 + 48) = 0;
          v39 = *(_QWORD*)(v5 + 4) + 8 * v37;
          v37 += 8;
          *(_QWORD*)(v39 + 56) = 0;
        } while (v38 != v37);
      }
      else {
        v37 = 0;
      }
      if (v36 != 0) {
        v40 = 8 * v37;
        do {
          --v36;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + v40) = 0;
          v40 += 8;
        } while (v36 != 0);
      }
    }
    *(_QWORD*)(v5 + 28) = 0;
  }
  *(_DWORD*)(v5 + 44) = 0;
  return a1;
}

__int64 VTarget_778500(__int64 a1)
{
  __int64 v2;
  _DWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  unsigned __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;

  *(_DWORD*)(a1 + 12348) = 0;
  v2 = a1 + 37036;
  v3 = (_DWORD*)(a1 + 24692);
  *(_BYTE*)(a1 + 37092) = 0;
  *(_DWORD*)(a1 + 37088) = -1;
  if (*(_QWORD*)(a1 + 12376) != 0) {
    v4 = *(_QWORD**)(a1 + 12368);
    if (v4 != nullptr) {
      v5 = fw_memory_g_heap_manager_ptr;
      do {
        v6 = (_QWORD*)*v4;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v7 = 128;
        }
        else {
          v7 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7, v4);
        v4 = v6;
      } while (v6 != nullptr);
    }
    v8 = *(_QWORD*)(a1 + 12360);
    *(_QWORD*)(a1 + 12368) = 0;
    if (v8 != 0) {
      v9 = v8 & 7;
      if (v8 >= 8) {
        v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v10 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 12352) + 8 * v10) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12352) + 8 * v10 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12352) + 8 * v10 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12352) + 8 * v10 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12352) + 8 * v10 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12352) + 8 * v10 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 12352) + 8 * v10 + 48) = 0;
          v12 = *(_QWORD*)(a1 + 12352) + 8 * v10;
          v10 += 8;
          *(_QWORD*)(v12 + 56) = 0;
        } while (v11 != v10);
      }
      else {
        v10 = 0;
      }
      if (v9 != 0) {
        v13 = 8 * v10;
        do {
          --v9;
          *(_QWORD*)(*(_QWORD*)(a1 + 12352) + v13) = 0;
          v13 += 8;
        } while (v9 != 0);
      }
    }
    *(_QWORD*)(a1 + 12376) = 0;
  }
  v14 = *(_QWORD*)(a1 + 24720);
  *(_DWORD*)(a1 + 12392) = 0;
  *v3 = 0;
  if (v14 != 0) {
    v15 = *(_QWORD**)(a1 + 24712);
    if (v15 != nullptr) {
      v16 = fw_memory_g_heap_manager_ptr;
      do {
        v17 = (_QWORD*)*v15;
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
          v18 = 128;
        }
        else {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v18, v15);
        v15 = v17;
      } while (v17 != nullptr);
    }
    v19 = *(_QWORD*)(a1 + 24704);
    *(_QWORD*)(a1 + 24712) = 0;
    if (v19 != 0) {
      v20 = v19 & 7;
      if (v19 >= 8) {
        v22 = v19 & 0xFFFFFFFFFFFFFFF8LL;
        v21 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v21) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v21 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v21 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v21 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v21 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v21 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v21 + 48) = 0;
          v23 = *(_QWORD*)(a1 + 24696) + 8 * v21;
          v21 += 8;
          *(_QWORD*)(v23 + 56) = 0;
        } while (v22 != v21);
      }
      else {
        v21 = 0;
      }
      if (v20 != 0) {
        v24 = 8 * v21;
        do {
          --v20;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + v24) = 0;
          v24 += 8;
        } while (v20 != 0);
      }
    }
    *(_QWORD*)(a1 + 24720) = 0;
  }
  v25 = *(_QWORD*)(v2 + 28);
  v3[11] = 0;
  *(_DWORD*)v2 = 0;
  if (v25 != 0) {
    v26 = *(_QWORD**)(v2 + 20);
    if (v26 != nullptr) {
      v27 = fw_memory_g_heap_manager_ptr;
      do {
        v28 = (_QWORD*)*v26;
        if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) != 0) {
          v29 = 128;
        }
        else {
          v29 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v27 + v29, v26);
        v26 = v28;
      } while (v28 != nullptr);
    }
    v30 = *(_QWORD*)(v2 + 12);
    *(_QWORD*)(v2 + 20) = 0;
    if (v30 != 0) {
      v31 = v30 & 7;
      if (v30 >= 8) {
        v33 = v30 & 0xFFFFFFFFFFFFFFF8LL;
        v32 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v2 + 4) + 8 * v32) = 0;
          *(_QWORD*)(*(_QWORD*)(v2 + 4) + 8 * v32 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v2 + 4) + 8 * v32 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v2 + 4) + 8 * v32 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v2 + 4) + 8 * v32 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v2 + 4) + 8 * v32 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v2 + 4) + 8 * v32 + 48) = 0;
          v34 = *(_QWORD*)(v2 + 4) + 8 * v32;
          v32 += 8;
          *(_QWORD*)(v34 + 56) = 0;
        } while (v33 != v32);
      }
      else {
        v32 = 0;
      }
      if (v31 != 0) {
        v35 = 8 * v32;
        do {
          --v31;
          *(_QWORD*)(*(_QWORD*)(v2 + 4) + v35) = 0;
          v35 += 8;
        } while (v31 != 0);
      }
    }
    *(_QWORD*)(v2 + 28) = 0;
  }
  *(_DWORD*)(v2 + 44) = 0;
  return a1;
}

__int64 game_map_VTarget_Enumerate(__int64 a1, long double a2)
{
  char v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  _QWORD v11[4];
  _QWORD* v12;

  v11[0] = GameData_1f97f90;
  v11[1] = a1;
  v12 = v11;
  v3 = GameRoutine_773420(a1, (__int64)v11, a2);
  if (v12 == v11) {
    v4 = 32;
  }
  else {
    if (v12 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v12 + v4))((__int64)v12);
LABEL_6:
  if ((v3 & 1) != 0) {
    v5 = *(unsigned __int16*)(a1 + 32);
    if (*(_WORD*)(a1 + 32) == 0) {
      v5 = *(unsigned __int16*)game_g_empty_item_ptr;
    }
    if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v5) +
                   336LL) &
         0x40) != 0 &&
        (*(_DWORD*)(a1 + 28) & 0x80000000) == 0) {
      v6 = *(unsigned int*)(a1 + 12348);
      if ((_DWORD)v6 != 0) {
        v7 = a1 + 60;
        do {
          v8 = *(_DWORD*)(v7 + 8);
          if (((v8 >> *(_DWORD*)(a1 + 28)) & 1) != 0) {
            *(_DWORD*)(a1 + 37080) |= v8;
            v9 = GameRoutine_8450e0(a1 + 24744, (unsigned int)*(char*)(v7 + 1),
                                    (unsigned int)*(char*)(v7 + 2));
            GameRoutine_844950(v9, v7);
          }
          --v6;
          v7 += 12;
        } while (v6 != 0);
      }
    }
  }
  return v3 & 1;
}

char* VTarget_778980(__int64* a1, __int64 a2, int* a3)
{
  __int64 v4;
  _DWORD* v5;
  __int16 v6;
  _QWORD* v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  int v41;
  int v42;
  __int16 v43;
  int v44;
  __int16 v45;

  if (a2 == 0) {
    return (char*)&GameData_1b47d78;
  }
  v4 = (__int64)a1 + 37036;
  v5 = (_DWORD*)a1 + 6173;
  *((_DWORD*)a1 + 10) = a1[5] & 0xFFFFF000 | *(_WORD*)(a2 + 16) & 0xFFF;
  v42 = *a3;
  v43 = *((_WORD*)a3 + 2);
  v44 = *(int*)((char*)a3 + 6);
  v6 = *((_WORD*)a3 + 5);
  *((_DWORD*)a1 + 3087) = 0;
  v45 = v6;
  if (a1[1547] != 0) {
    v7 = (_QWORD*)a1[1546];
    if (v7 != nullptr) {
      v8 = fw_memory_g_heap_manager_ptr;
      do {
        v9 = (_QWORD*)*v7;
        if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) != 0) {
          v10 = 128;
        }
        else {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v10, v7);
        v7 = v9;
      } while (v9 != nullptr);
    }
    v11 = a1[1545];
    a1[1546] = 0;
    if (v11 != 0) {
      v12 = v11 & 7;
      if (v11 >= 8) {
        v15 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        v13 = 0;
        do {
          *(_QWORD*)(a1[1544] + 8 * v13) = 0;
          *(_QWORD*)(a1[1544] + 8 * v13 + 8) = 0;
          *(_QWORD*)(a1[1544] + 8 * v13 + 16) = 0;
          *(_QWORD*)(a1[1544] + 8 * v13 + 24) = 0;
          *(_QWORD*)(a1[1544] + 8 * v13 + 32) = 0;
          *(_QWORD*)(a1[1544] + 8 * v13 + 40) = 0;
          *(_QWORD*)(a1[1544] + 8 * v13 + 48) = 0;
          v16 = a1[1544] + 8 * v13;
          v13 += 8;
          *(_QWORD*)(v16 + 56) = 0;
        } while (v15 != v13);
      }
      else {
        v13 = 0;
      }
      if (v12 != 0) {
        v17 = 8 * v13;
        do {
          --v12;
          *(_QWORD*)(a1[1544] + v17) = 0;
          v17 += 8;
        } while (v12 != 0);
      }
    }
    a1[1547] = 0;
  }
  v18 = a1[3090];
  *((_DWORD*)a1 + 3098) = 0;
  *v5 = 0;
  if (v18 != 0) {
    v19 = (_QWORD*)a1[3089];
    if (v19 != nullptr) {
      v20 = fw_memory_g_heap_manager_ptr;
      do {
        v21 = (_QWORD*)*v19;
        if (*(_QWORD*)(*(_QWORD*)v20 + 200LL) != 0) {
          v22 = 128;
        }
        else {
          v22 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v20 + v22, v19);
        v19 = v21;
      } while (v21 != nullptr);
    }
    v23 = a1[3088];
    a1[3089] = 0;
    if (v23 != 0) {
      v24 = v23 & 7;
      if (v23 >= 8) {
        v26 = v23 & 0xFFFFFFFFFFFFFFF8LL;
        v25 = 0;
        do {
          *(_QWORD*)(a1[3087] + 8 * v25) = 0;
          *(_QWORD*)(a1[3087] + 8 * v25 + 8) = 0;
          *(_QWORD*)(a1[3087] + 8 * v25 + 16) = 0;
          *(_QWORD*)(a1[3087] + 8 * v25 + 24) = 0;
          *(_QWORD*)(a1[3087] + 8 * v25 + 32) = 0;
          *(_QWORD*)(a1[3087] + 8 * v25 + 40) = 0;
          *(_QWORD*)(a1[3087] + 8 * v25 + 48) = 0;
          v27 = a1[3087] + 8 * v25;
          v25 += 8;
          *(_QWORD*)(v27 + 56) = 0;
        } while (v26 != v25);
      }
      else {
        v25 = 0;
      }
      if (v24 != 0) {
        v28 = 8 * v25;
        do {
          --v24;
          *(_QWORD*)(a1[3087] + v28) = 0;
          v28 += 8;
        } while (v24 != 0);
      }
    }
    a1[3090] = 0;
  }
  v29 = *(_QWORD*)(v4 + 28);
  v5[11] = 0;
  *(_DWORD*)v4 = 0;
  if (v29 != 0) {
    v30 = *(_QWORD**)(v4 + 20);
    if (v30 != nullptr) {
      v31 = fw_memory_g_heap_manager_ptr;
      do {
        v32 = (_QWORD*)*v30;
        if (*(_QWORD*)(*(_QWORD*)v31 + 200LL) != 0) {
          v33 = 128;
        }
        else {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v31 + v33, v30);
        v30 = v32;
      } while (v32 != nullptr);
    }
    v34 = *(_QWORD*)(v4 + 12);
    *(_QWORD*)(v4 + 20) = 0;
    if (v34 != 0) {
      v35 = v34 & 7;
      if (v34 >= 8) {
        v37 = v34 & 0xFFFFFFFFFFFFFFF8LL;
        v36 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v4 + 4) + 8 * v36) = 0;
          *(_QWORD*)(*(_QWORD*)(v4 + 4) + 8 * v36 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v4 + 4) + 8 * v36 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v4 + 4) + 8 * v36 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v4 + 4) + 8 * v36 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v4 + 4) + 8 * v36 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v4 + 4) + 8 * v36 + 48) = 0;
          v38 = *(_QWORD*)(v4 + 4) + 8 * v36;
          v36 += 8;
          *(_QWORD*)(v38 + 56) = 0;
        } while (v37 != v36);
      }
      else {
        v36 = 0;
      }
      if (v35 != 0) {
        v39 = 8 * v36;
        do {
          --v35;
          *(_QWORD*)(*(_QWORD*)(v4 + 4) + v39) = 0;
          v39 += 8;
        } while (v35 != 0);
      }
    }
    *(_QWORD*)(v4 + 28) = 0;
  }
  v40 = *a1;
  *(_DWORD*)(v4 + 44) = 0;
  if (((*(__int64 (**)(__int64*))(v40 + 24))(a1) & 1) == 0) {
    return (char*)&GameData_1b47d78;
  }
  v41 = GameRoutine_845920(a1 + 7, &v42);
  if (v41 >= 0) {
    return (char*)a1 + 12 * (unsigned int)v41 + 60;
  }
  else {
    return (char*)GameData_212d208;
  }
}

char* VTarget_778d60(__int64* a1, int* a2)
{
  __int64 v3;
  _DWORD* v4;
  __int16 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  _QWORD* v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  int v39;
  int v41;
  __int16 v42;
  int v43;
  __int16 v44;

  v3 = (__int64)a1 + 37036;
  v4 = (_DWORD*)a1 + 6173;
  v41 = *a2;
  v42 = *((_WORD*)a2 + 2);
  v43 = *(int*)((char*)a2 + 6);
  v5 = *((_WORD*)a2 + 5);
  *((_DWORD*)a1 + 3087) = 0;
  v44 = v5;
  if (a1[1547] != 0) {
    v6 = (_QWORD*)a1[1546];
    if (v6 != nullptr) {
      v7 = fw_memory_g_heap_manager_ptr;
      do {
        v8 = (_QWORD*)*v6;
        if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) != 0) {
          v9 = 128;
        }
        else {
          v9 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v7 + v9, v6);
        v6 = v8;
      } while (v8 != nullptr);
    }
    v10 = a1[1545];
    a1[1546] = 0;
    if (v10 != 0) {
      v11 = v10 & 7;
      if (v10 >= 8) {
        v13 = v10 & 0xFFFFFFFFFFFFFFF8LL;
        v12 = 0;
        do {
          *(_QWORD*)(a1[1544] + 8 * v12) = 0;
          *(_QWORD*)(a1[1544] + 8 * v12 + 8) = 0;
          *(_QWORD*)(a1[1544] + 8 * v12 + 16) = 0;
          *(_QWORD*)(a1[1544] + 8 * v12 + 24) = 0;
          *(_QWORD*)(a1[1544] + 8 * v12 + 32) = 0;
          *(_QWORD*)(a1[1544] + 8 * v12 + 40) = 0;
          *(_QWORD*)(a1[1544] + 8 * v12 + 48) = 0;
          v14 = a1[1544] + 8 * v12;
          v12 += 8;
          *(_QWORD*)(v14 + 56) = 0;
        } while (v13 != v12);
      }
      else {
        v12 = 0;
      }
      if (v11 != 0) {
        v15 = 8 * v12;
        do {
          --v11;
          *(_QWORD*)(a1[1544] + v15) = 0;
          v15 += 8;
        } while (v11 != 0);
      }
    }
    a1[1547] = 0;
  }
  v16 = a1[3090];
  *((_DWORD*)a1 + 3098) = 0;
  *v4 = 0;
  if (v16 != 0) {
    v17 = (_QWORD*)a1[3089];
    if (v17 != nullptr) {
      v18 = fw_memory_g_heap_manager_ptr;
      do {
        v19 = (_QWORD*)*v17;
        if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) != 0) {
          v20 = 128;
        }
        else {
          v20 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v20, v17);
        v17 = v19;
      } while (v19 != nullptr);
    }
    v21 = a1[3088];
    a1[3089] = 0;
    if (v21 != 0) {
      v22 = v21 & 7;
      if (v21 >= 8) {
        v24 = v21 & 0xFFFFFFFFFFFFFFF8LL;
        v23 = 0;
        do {
          *(_QWORD*)(a1[3087] + 8 * v23) = 0;
          *(_QWORD*)(a1[3087] + 8 * v23 + 8) = 0;
          *(_QWORD*)(a1[3087] + 8 * v23 + 16) = 0;
          *(_QWORD*)(a1[3087] + 8 * v23 + 24) = 0;
          *(_QWORD*)(a1[3087] + 8 * v23 + 32) = 0;
          *(_QWORD*)(a1[3087] + 8 * v23 + 40) = 0;
          *(_QWORD*)(a1[3087] + 8 * v23 + 48) = 0;
          v25 = a1[3087] + 8 * v23;
          v23 += 8;
          *(_QWORD*)(v25 + 56) = 0;
        } while (v24 != v23);
      }
      else {
        v23 = 0;
      }
      if (v22 != 0) {
        v26 = 8 * v23;
        do {
          --v22;
          *(_QWORD*)(a1[3087] + v26) = 0;
          v26 += 8;
        } while (v22 != 0);
      }
    }
    a1[3090] = 0;
  }
  v27 = *(_QWORD*)(v3 + 28);
  v4[11] = 0;
  *(_DWORD*)v3 = 0;
  if (v27 != 0) {
    v28 = *(_QWORD**)(v3 + 20);
    if (v28 != nullptr) {
      v29 = fw_memory_g_heap_manager_ptr;
      do {
        v30 = (_QWORD*)*v28;
        if (*(_QWORD*)(*(_QWORD*)v29 + 200LL) != 0) {
          v31 = 128;
        }
        else {
          v31 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v29 + v31, v28);
        v28 = v30;
      } while (v30 != nullptr);
    }
    v32 = *(_QWORD*)(v3 + 12);
    *(_QWORD*)(v3 + 20) = 0;
    if (v32 != 0) {
      v33 = v32 & 7;
      if (v32 >= 8) {
        v35 = v32 & 0xFFFFFFFFFFFFFFF8LL;
        v34 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v3 + 4) + 8 * v34) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 4) + 8 * v34 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 4) + 8 * v34 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 4) + 8 * v34 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 4) + 8 * v34 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 4) + 8 * v34 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v3 + 4) + 8 * v34 + 48) = 0;
          v36 = *(_QWORD*)(v3 + 4) + 8 * v34;
          v34 += 8;
          *(_QWORD*)(v36 + 56) = 0;
        } while (v35 != v34);
      }
      else {
        v34 = 0;
      }
      if (v33 != 0) {
        v37 = 8 * v34;
        do {
          --v33;
          *(_QWORD*)(*(_QWORD*)(v3 + 4) + v37) = 0;
          v37 += 8;
        } while (v33 != 0);
      }
    }
    *(_QWORD*)(v3 + 28) = 0;
  }
  v38 = *a1;
  *(_DWORD*)(v3 + 44) = 0;
  if (((*(__int64 (**)(__int64*))(v38 + 24))(a1) & 1) == 0) {
    return (char*)&GameData_1b47d78;
  }
  v39 = GameRoutine_845920(a1 + 7, &v41);
  if (v39 >= 0) {
    return (char*)a1 + 12 * (unsigned int)v39 + 60;
  }
  else {
    return (char*)GameData_212d208;
  }
}

__int64 VTarget_779120(__int64 a1)
{
  _BYTE* v1;
  unsigned int v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  __int64 v9;
  unsigned int v10;
  _BYTE* v11;
  __int64 v12;

  v1 = (_BYTE*)(a1 + 8);
  if (*(_BYTE*)(a1 + 8) == 0 || game_UnitPool_Get(a1 + 8) == 0) {
    return 0xFFFFFFFFLL;
  }
  v3 = *(_DWORD*)(a1 + 37088);
  if ((v3 & 0x80000000) != 0) {
    result = *(unsigned int*)(a1 + 28);
    if ((result & 0x80000000) != 0 ||
        ((*(_DWORD*)(a1 + 12392) >> result) & 1) == 0) {
      if (*v1 != 0) {
        v7 = game_UnitPool_Get(v1);
      }
      else {
        v7 = 0;
      }
      v11 = (_BYTE*)(v7 + 847);
      result = 2;
      v12 = *GameData_212c878[0];
      while (1) {
        if (*(_WORD*)(v11 - 19) != 0 && (*(v11 - 16) & 1) != 0 &&
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v12 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(v11 - 19)) +
                                72LL) < 8u) {
          result -= 2;
          goto LABEL_79;
        }
        if (*(_WORD*)(v11 - 11) != 0 && (*(v11 - 8) & 1) != 0 &&
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v12 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(v11 - 11)) +
                                72LL) < 8u) {
          break;
        }
        if (*(_WORD*)(v11 - 3) != 0 && (*v11 & 1) != 0 &&
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v12 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(v11 - 3)) +
                                72LL) < 8u) {
          goto LABEL_79;
        }
        result += 3;
        v11 += 24;
        if (result == 32) {
          v10 = *(_DWORD*)(a1 + 12392);
          goto LABEL_80;
        }
      }
      --result;
    LABEL_79:
      v10 = *(_DWORD*)(a1 + 12392);
      if (((v10 >> result) & 1) != 0) {
        return result;
      }
    LABEL_80:
      if ((v10 & 1) == 0) {
        if ((v10 & 2) == 0) {
          if ((v10 & 4) == 0) {
            if ((v10 & 8) == 0) {
              if ((v10 & 0x10) == 0) {
                if ((v10 & 0x20) == 0) {
                  if ((v10 & 0x40) == 0) {
                    if ((v10 & 0x80) == 0) {
                      if ((v10 & 0x100) == 0) {
                        if ((v10 & 0x200) == 0) {
                          if ((v10 & 0x400) == 0) {
                            if ((v10 & 0x800) == 0) {
                              if ((v10 & 0x1000) == 0) {
                                if ((v10 & 0x2000) == 0) {
                                  if ((v10 & 0x4000) == 0) {
                                    if ((v10 & 0x8000) == 0) {
                                      if ((v10 & 0x10000) == 0) {
                                        if ((v10 & 0x20000) == 0) {
                                          if ((v10 & 0x40000) == 0) {
                                            if ((v10 & 0x80000) == 0) {
                                              if ((v10 & 0x100000) == 0) {
                                                if ((v10 & 0x200000) == 0) {
                                                  if ((v10 & 0x400000) == 0) {
                                                    if ((v10 & 0x800000) == 0) {
                                                      if ((v10 & 0x1000000) ==
                                                          0) {
                                                        if ((v10 & 0x2000000) ==
                                                            0) {
                                                          if ((v10 &
                                                               0x4000000) ==
                                                              0) {
                                                            if ((v10 &
                                                                 0x8000000) ==
                                                                0) {
                                                              if ((v10 &
                                                                   0x10000000) ==
                                                                  0) {
                                                              LABEL_74:
                                                                if ((v10 &
                                                                     0x20000000) !=
                                                                    0) {
                                                                  return 29;
                                                                }
                                                                else {
                                                                  return 0xFFFFFFFFLL;
                                                                }
                                                              }
                                                              return 28;
                                                            }
                                                            return 27;
                                                          }
                                                          return 26;
                                                        }
                                                        return 25;
                                                      }
                                                      return 24;
                                                    }
                                                    return 23;
                                                  }
                                                  return 22;
                                                }
                                                return 21;
                                              }
                                              return 20;
                                            }
                                            return 19;
                                          }
                                          return 18;
                                        }
                                        return 17;
                                      }
                                      return 16;
                                    }
                                    return 15;
                                  }
                                  return 14;
                                }
                                return 13;
                              }
                              return 12;
                            }
                            return 11;
                          }
                          return 10;
                        }
                        return 9;
                      }
                      return 8;
                    }
                    return 7;
                  }
                  return 6;
                }
                return 5;
              }
              return 4;
            }
            return 3;
          }
          return 2;
        }
        return 1;
      }
      return 0;
    }
  }
  else {
    result = *(unsigned int*)(a1 + 28);
    v5 = a1 + 12LL * v3;
    if ((result & 0x80000000) != 0 ||
        ((*(_DWORD*)(v5 + 68) >> result) & 1) == 0) {
      if (*v1 != 0) {
        v6 = game_UnitPool_Get(v1);
      }
      else {
        v6 = 0;
      }
      v8 = (_BYTE*)(v6 + 847);
      result = 2;
      v9 = *GameData_212c878[0];
      while (1) {
        if (*(_WORD*)(v8 - 19) != 0 && (*(v8 - 16) & 1) != 0 &&
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(v8 - 19)) +
                                72LL) < 8u) {
          result -= 2;
          goto LABEL_44;
        }
        if (*(_WORD*)(v8 - 11) != 0 && (*(v8 - 8) & 1) != 0 &&
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) +
                                           8LL *
                                               *(unsigned __int16*)(v8 - 11)) +
                                72LL) < 8u) {
          break;
        }
        if (*(_WORD*)(v8 - 3) != 0 && (*v8 & 1) != 0 &&
            *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) +
                                           8LL * *(unsigned __int16*)(v8 - 3)) +
                                72LL) < 8u) {
          goto LABEL_44;
        }
        result += 3;
        v8 += 24;
        if (result == 32) {
          v10 = *(_DWORD*)(v5 + 68);
          goto LABEL_45;
        }
      }
      --result;
    LABEL_44:
      v10 = *(_DWORD*)(v5 + 68);
      if (((v10 >> result) & 1) != 0) {
        return result;
      }
    LABEL_45:
      if ((v10 & 1) == 0) {
        if ((v10 & 2) == 0) {
          if ((v10 & 4) == 0) {
            if ((v10 & 8) == 0) {
              if ((v10 & 0x10) == 0) {
                if ((v10 & 0x20) == 0) {
                  if ((v10 & 0x40) == 0) {
                    if ((v10 & 0x80) == 0) {
                      if ((v10 & 0x100) == 0) {
                        if ((v10 & 0x200) == 0) {
                          if ((v10 & 0x400) == 0) {
                            if ((v10 & 0x800) == 0) {
                              if ((v10 & 0x1000) == 0) {
                                if ((v10 & 0x2000) == 0) {
                                  if ((v10 & 0x4000) == 0) {
                                    if ((v10 & 0x8000) == 0) {
                                      if ((v10 & 0x10000) == 0) {
                                        if ((v10 & 0x20000) == 0) {
                                          if ((v10 & 0x40000) == 0) {
                                            if ((v10 & 0x80000) == 0) {
                                              if ((v10 & 0x100000) == 0) {
                                                if ((v10 & 0x200000) == 0) {
                                                  if ((v10 & 0x400000) == 0) {
                                                    if ((v10 & 0x800000) == 0) {
                                                      if ((v10 & 0x1000000) ==
                                                          0) {
                                                        if ((v10 & 0x2000000) ==
                                                            0) {
                                                          if ((v10 &
                                                               0x4000000) ==
                                                              0) {
                                                            if ((v10 &
                                                                 0x8000000) ==
                                                                0) {
                                                              if ((v10 &
                                                                   0x10000000) ==
                                                                  0) {
                                                                goto LABEL_74;
                                                              }
                                                              return 28;
                                                            }
                                                            return 27;
                                                          }
                                                          return 26;
                                                        }
                                                        return 25;
                                                      }
                                                      return 24;
                                                    }
                                                    return 23;
                                                  }
                                                  return 22;
                                                }
                                                return 21;
                                              }
                                              return 20;
                                            }
                                            return 19;
                                          }
                                          return 18;
                                        }
                                        return 17;
                                      }
                                      return 16;
                                    }
                                    return 15;
                                  }
                                  return 14;
                                }
                                return 13;
                              }
                              return 12;
                            }
                            return 11;
                          }
                          return 10;
                        }
                        return 9;
                      }
                      return 8;
                    }
                    return 7;
                  }
                  return 6;
                }
                return 5;
              }
              return 4;
            }
            return 3;
          }
          return 2;
        }
        return 1;
      }
      return 0;
    }
  }
  return result;
}

char* VTarget_779520(_QWORD* a1, __int16 a2, __int16 a3)
{
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64*** v8;
  __int64** v9;
  unsigned __int64 v10;
  __int64* v12;

  v3 = a1[1545];
  if (v3 != 0 && a1[1547] != 0) {
    v5 = v3 - 1;
    v6 = (unsigned __int16)(a2 | (a3 << 8));
    if ((v3 & (v3 - 1)) != 0) {
      v7 = (unsigned __int16)(a2 | (a3 << 8));
      if (v3 <= v6) {
        v7 = (unsigned int)v6 % (unsigned int)v3;
      }
    }
    else {
      v7 = ((_DWORD)v3 - 1) & (unsigned int)v6;
    }
    v8 = *(__int64****)(a1[1544] + 8 * v7);
    if (v8 != nullptr) {
      v9 = *v8;
      if (v9 != nullptr) {
        if ((v3 & v5) != 0) {
          while (1) {
            v10 = (unsigned __int64)v9[1];
            if (v10 == v6) {
              if (*((unsigned __int16*)v9 + 8) == (_DWORD)v6) {
                return (char*)a1 + 12 * *((unsigned __int16*)v9 + 9) + 60;
              }
            }
            else {
              if (v10 >= v3) {
                v10 %= v3;
              }
              if (v10 != v7) {
                return (char*)&GameData_1b47d78;
              }
            }
            v9 = (__int64**)*v9;
            if (v9 == nullptr) {
              return (char*)&GameData_1b47d78;
            }
          }
        }
        while (1) {
          v12 = v9[1];
          if (v12 == (__int64*)v6) {
            break;
          }
          if (((unsigned __int64)v12 & v5) != v7) {
            return (char*)&GameData_1b47d78;
          }
        LABEL_23:
          v9 = (__int64**)*v9;
          if (v9 == nullptr) {
            return (char*)&GameData_1b47d78;
          }
        }
        if (*((unsigned __int16*)v9 + 8) != (_DWORD)v6) {
          goto LABEL_23;
        }
        return (char*)a1 + 12 * *((unsigned __int16*)v9 + 9) + 60;
      }
    }
  }
  return (char*)&GameData_1b47d78;
}

_DWORD* VTarget_779660(_DWORD* a1, unsigned __int8 a2)
{
  __int64 v2;
  _DWORD* v3;
  int v4;
  _DWORD* v5;
  int v6;
  int v7;
  __int64 v8;
  int v9;
  _DWORD* result;
  char v11;
  char v12;
  int v13;
  int v14;
  int v15;
  int v16;
  _DWORD* v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;

  if (a2 == 0) {
    return &GameData_1b47d78;
  }
  v2 = (unsigned int)a1[3087];
  if ((int)v2 < 1) {
    return &GameData_1b47d78;
  }
  v3 = a1 + 15;
  v4 = a1[7];
  v5 = a1 + 17;
  v6 = a1[3];
  v7 = a1[4];
  v8 = 0;
  v9 = a1[5];
  result = &GameData_1b47d78;
  while (1) {
    if (v4 < 0 || (v5[3 * (int)v8] & (1 << v4)) != 0) {
      v17 = &v3[3 * v8];
      v18 = *((char*)v17 + 1);
      v19 = *((char*)v17 + 2);
      if (v9 < 2) {
        v11 = v7;
        v12 = v6;
      }
      else {
        v20 = 10000;
        v11 = 0;
        v12 = 0;
        v21 = v7;
        do {
          v22 = v19 - v21;
          v23 = v18 - v6;
          v24 = v6;
          if (v19 - v21 < 0) {
            v22 = v21 - v19;
          }
          do {
            if (v23 >= 0) {
              v25 = v23;
            }
            else {
              v25 = -v23;
            }
            --v23;
            v26 = v25 + v22;
            if (v26 < v20) {
              v11 = v21;
              v12 = v24;
              v20 = v26;
            }
            ++v24;
          } while (v24 < v9 + v6);
          ++v21;
        } while (v21 < v9 + v7);
      }
      v13 = v18 - v12;
      v14 = v19 - v11;
      v15 = v14 <= 0 ? ((unsigned int)v13 >> 30) & 2 | (v14 < 0)
                     : ((unsigned int)v13 >> 30) & 2 | (v14 < 0) | 4;
      v16 = v13 <= 0 ? v15 : v15 | 8;
      if (a2 == v16) {
        break;
      }
    }
    if (++v8 == v2) {
      return result;
    }
  }
  return &v3[3 * (int)v8];
}

__int64 VTarget_7797e0(_DWORD* a1, unsigned __int8 a2)
{
  __int64 v2;
  _DWORD* v4;
  int v5;
  _DWORD* v6;
  int v7;
  int v8;
  __int64 result;
  int v10;
  char v11;
  char v12;
  int v13;
  int v14;
  int v15;
  int v16;
  _DWORD* v17;
  int v18;
  int v19;
  unsigned int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  unsigned int v26;

  if (a2 == 0) {
    return 0xFFFFFFFFLL;
  }
  v2 = (unsigned int)a1[3087];
  if ((int)v2 < 1) {
    return 0xFFFFFFFFLL;
  }
  v4 = a1 + 15;
  v5 = a1[7];
  v6 = a1 + 17;
  v7 = a1[3];
  v8 = a1[4];
  result = 0;
  v10 = a1[5];
  while (1) {
    if (v5 < 0 || (v6[3 * (int)result] & (1 << v5)) != 0) {
      v17 = &v4[3 * result];
      v18 = *((char*)v17 + 1);
      v19 = *((char*)v17 + 2);
      if (v10 < 2) {
        v11 = v8;
        v12 = v7;
      }
      else {
        v20 = 10000;
        v11 = 0;
        v12 = 0;
        v21 = v8;
        do {
          v22 = v19 - v21;
          v23 = v18 - v7;
          v24 = v7;
          if (v19 - v21 < 0) {
            v22 = v21 - v19;
          }
          do {
            if (v23 >= 0) {
              v25 = v23;
            }
            else {
              v25 = -v23;
            }
            --v23;
            v26 = v25 + v22;
            if (v26 < v20) {
              v11 = v21;
              v12 = v24;
              v20 = v26;
            }
            ++v24;
          } while (v24 < v10 + v7);
          ++v21;
        } while (v21 < v10 + v8);
      }
      v13 = v18 - v12;
      v14 = v19 - v11;
      v15 = v14 <= 0 ? ((unsigned int)v13 >> 30) & 2 | (v14 < 0)
                     : ((unsigned int)v13 >> 30) & 2 | (v14 < 0) | 4;
      v16 = v13 <= 0 ? v15 : v15 | 8;
      if (a2 == v16) {
        break;
      }
    }
    if (++result == v2) {
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}

__int64 VTarget_779940(_DWORD* a1, __int64 a2)
{
  __int64 result;
  char* v4;
  __int64 v5;
  char* v6;
  char* v7;
  unsigned __int64 v8;
  __int64 v9;
  int v10;
  signed __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  signed __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  bool v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  char* v29;
  __int64 v30;
  unsigned __int64 v31;
  char* v32;
  int v33;
  signed __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  signed __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned int v47;
  __int64 v48;
  _QWORD v50[2];

  if ((int)a1[3087] < 1) {
    return 0xFFFFFFFFLL;
  }
  result = (unsigned int)a1[9272];
  if ((result & 0x80000000) != 0) {
    v4 = (char*)a1 + 65;
    v5 = 0;
    v6 = nullptr;
    v7 = nullptr;
    v8 = 0;
    do {
      if (*v4 != 0) {
        result = game_UnitPool_Get(v4);
        if (result != 0 && v5 < (int)a1[3087]) {
          v10 = a1[7];
          if (v10 < 0 || ((*(_DWORD*)(v4 + 3) >> v10) & 1) != 0) {
            if ((unsigned __int64)v7 < v8) {
              *(_DWORD*)v7 = v5;
              v7 += 4;
            }
            else {
              v11 = v7 - v6;
              v12 = (v7 - v6) >> 2;
              v13 = v12 + 1;
              if ((unsigned __int64)(v12 + 1) >> 62 != 0) {
              LABEL_88:
                GameRoutine_6e5a20(result);
              }
              if ((__int64)(v8 - (_QWORD)v6) >> 1 > v13) {
                v13 = (__int64)(v8 - (_QWORD)v6) >> 1;
              }
              if (v8 - (unsigned __int64)v6 >= 0x7FFFFFFFFFFFFFFCLL) {
                v14 = 0x3FFFFFFFFFFFFFFFLL;
              }
              else {
                v14 = v13;
              }
              if (v14 != 0) {
                if (v14 >> 62 != 0) {
                LABEL_89:
                  GameRoutine_60a210(result);
                }
                v15 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v14, 16, 0);
              }
              else {
                v15 = 0;
              }
              v8 = v15 + 4 * v14;
              v16 = v7 - v6;
              v17 = v15 + v11 - 4 * v12;
              *(_DWORD*)(v15 + v11) = v5;
              v7 = (char*)(v15 + v11 + 4);
              result = memcpy(v17, v6, v16);
              if (v6 != nullptr) {
                v18 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v18 = 56;
                }
                result = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v6);
              }
              v6 = (char*)v17;
            }
          }
        }
      }
      v9 = (int)a1[3087];
      ++v5;
      v4 += 12;
    } while (v5 < v9);
    v19 = v7 - v6;
    if (v7 != v6) {
      v20 = v19 >> 2;
      v50[0] = a1;
      v50[1] = a2;
      if (v19 >> 2 < 129) {
        v24 = 0;
      LABEL_40:
        GameRoutine_7823c0(v6, v7, v50, v20, 0, v24);
        goto LABEL_83;
      }
      v21 = v19 >> 2;
      v22 = GameData_212c060;
      while (1) {
        v23 = GameRoutine_1a09d20(4 * v21, v22);
        if (v23 != 0) {
          break;
        }
        v24 = v21 >> 1;
        v25 = v21 > 1;
        v21 >>= 1;
        if (!v25) {
          goto LABEL_40;
        }
      }
      v27 = v23;
      GameRoutine_7823c0(v6, v7, v50, v20, v23, v21);
    LABEL_42:
      v28 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v27);
    LABEL_83:
      v47 = *(_DWORD*)v6;
      v48 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v48 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v48, v6);
      return v47;
    }
    if (v7 != nullptr) {
      v26 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v26 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v26, v6);
      LODWORD(v9) = a1[3087];
      if ((int)v9 < 1) {
        return 0;
      }
    }
    else if ((int)v9 < 1) {
      return 0;
    }
    v29 = (char*)a1 + 65;
    v30 = 0;
    v31 = 0;
    v32 = nullptr;
    v6 = nullptr;
    do {
      if (*v29 == 0 || (result = game_UnitPool_Get(v29), LODWORD(v9) = a1[3087],
                        result == 0)) {
        if (v30 < (int)v9) {
          v33 = a1[7];
          if (v33 < 0 || ((*(_DWORD*)(v29 + 3) >> v33) & 1) != 0) {
            if ((unsigned __int64)v32 < v31) {
              *(_DWORD*)v32 = v30;
              v32 += 4;
            }
            else {
              v34 = v32 - v6;
              v35 = (v32 - v6) >> 2;
              v36 = v35 + 1;
              if ((unsigned __int64)(v35 + 1) >> 62 != 0) {
                goto LABEL_88;
              }
              if ((__int64)(v31 - (_QWORD)v6) >> 1 > v36) {
                v36 = (__int64)(v31 - (_QWORD)v6) >> 1;
              }
              if (v31 - (unsigned __int64)v6 >= 0x7FFFFFFFFFFFFFFCLL) {
                v37 = 0x3FFFFFFFFFFFFFFFLL;
              }
              else {
                v37 = v36;
              }
              if (v37 != 0) {
                if (v37 >> 62 != 0) {
                  goto LABEL_89;
                }
                v38 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v37, 16, 0);
              }
              else {
                v38 = 0;
              }
              v31 = v38 + 4 * v37;
              v39 = v32 - v6;
              v40 = v38 + v34 - 4 * v35;
              *(_DWORD*)(v38 + v34) = v30;
              v32 = (char*)(v38 + v34 + 4);
              result = memcpy(v40, v6, v39);
              if (v6 != nullptr) {
                v41 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v41 = 56;
                }
                result = nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v41, v6);
              }
              v6 = (char*)v40;
            }
          }
        }
      }
      v9 = (int)a1[3087];
      ++v30;
      v29 += 12;
    } while (v30 < v9);
    if (v32 != v6) {
      v50[0] = a1;
      v50[1] = a2;
      if ((v32 - v6) >> 2 < 129) {
        v45 = 0;
      LABEL_82:
        GameRoutine_783fa0(v6, v32, v50, (v32 - v6) >> 2, 0, v45);
        goto LABEL_83;
      }
      v42 = (v32 - v6) >> 2;
      v43 = GameData_212c060;
      while (1) {
        v44 = GameRoutine_1a09d20(4 * v42, v43);
        if (v44 != 0) {
          break;
        }
        v45 = v42 >> 1;
        v25 = v42 > 1;
        v42 >>= 1;
        if (!v25) {
          goto LABEL_82;
        }
      }
      v27 = v44;
      GameRoutine_783fa0(v6, v32, v50, (v32 - v6) >> 2, v44, v42);
      goto LABEL_42;
    }
    if (v6 != nullptr) {
      v46 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v6);
      return 0;
    }
    return 0;
  }
  return result;
}

__int64 VTarget_779e40(_DWORD* a1, __int64 a2)
{
  __int64 result;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  char* v7;
  unsigned __int64 v8;
  char* v9;
  int v10;
  signed __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  signed __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  bool v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD v28[2];

  if ((int)a1[3087] < 1) {
    return 0xFFFFFFFFLL;
  }
  result = (unsigned int)a1[9272];
  if ((result & 0x80000000) != 0) {
    v4 = 17;
    v5 = -1;
    v6 = 0;
    v7 = nullptr;
    v8 = 0;
    v9 = nullptr;
    do {
      v10 = a1[7];
      if (v10 < 0 || ((a1[v4] >> v10) & 1) != 0) {
        if ((unsigned __int64)v9 < v8) {
          *(_DWORD*)v9 = v6;
          v9 += 4;
        }
        else {
          v11 = v9 - v7;
          v12 = (v9 - v7) >> 2;
          v13 = v12 + 1;
          if ((unsigned __int64)(v12 + 1) >> 62 != 0) {
            GameRoutine_6e5a20(result);
          }
          if ((__int64)(v8 - (_QWORD)v7) >> 1 > v13) {
            v13 = (__int64)(v8 - (_QWORD)v7) >> 1;
          }
          if (v8 - (unsigned __int64)v7 >= 0x7FFFFFFFFFFFFFFCLL) {
            v14 = 0x3FFFFFFFFFFFFFFFLL;
          }
          else {
            v14 = v13;
          }
          if (v14 != 0) {
            if (v14 >> 62 != 0) {
              GameRoutine_60a210(result);
            }
            v15 = fw_memory_HeapManager_Allocate(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 4 * v14, 16, 0);
          }
          else {
            v15 = 0;
          }
          v8 = v15 + 4 * v14;
          v16 = v9 - v7;
          v17 = v15 + v11 - 4 * v12;
          *(_DWORD*)(v15 + v11) = v6;
          v9 = (char*)(v15 + v11 + 4);
          result = memcpy(v17, v7, v16);
          if (v7 != nullptr) {
            v18 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v18 = 56;
            }
            result = nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, v7);
          }
          v7 = (char*)v17;
        }
      }
      ++v6;
      v4 += 3;
    } while (v6 < (int)a1[3087]);
    if (v9 == v7) {
      if (v9 == nullptr) {
      LABEL_42:
        if (v9 == v7) {
          return 0;
        }
        else {
          return v5;
        }
      }
    }
    else {
      v28[0] = a1;
      v28[1] = a2;
      if ((v9 - v7) >> 2 < 129) {
        v22 = 0;
      LABEL_34:
        GameRoutine_785b80(v7, v9, v28, (v9 - v7) >> 2, 0, v22);
      }
      else {
        v19 = (v9 - v7) >> 2;
        v20 = GameData_212c060;
        while (1) {
          v21 = GameRoutine_1a09d20(4 * v19, v20);
          if (v21 != 0) {
            break;
          }
          v22 = v19 >> 1;
          v23 = v19 > 1;
          v19 >>= 1;
          if (!v23) {
            goto LABEL_34;
          }
        }
        v24 = v21;
        GameRoutine_785b80(v7, v9, v28, (v9 - v7) >> 2, v21, v19);
        v25 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, v24);
      }
      v5 = *(_DWORD*)v7;
    }
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26,
                                  v7);
    goto LABEL_42;
  }
  return result;
}

__int64 VTarget_77a0c0(__int64 a1, unsigned int a2, char a3, char a4)
{
  unsigned int v4;
  int v5;
  char v7;
  int v9;
  __int64 v10;
  __int64 v11;
  int* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  int v17;
  __int64 v18;
  int v19;
  int v20;
  int v21;
  __int64 v22;
  struct {
    _QWORD v24[3];
    char v25;
    char gap25_[7];
    _QWORD* v26;
  } v24_;
  struct {
    int* v27;
    int* v28;
    __int64 v29;
  } v27_;
  _QWORD* v30;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v4 = a2;
  if ((a2 & 0x80000000) != 0) {
    return v4;
  }
  v5 = *(_DWORD*)(a1 + 12348);
  if (v5 < 1) {
    return v4;
  }
  v7 = a4 & 1;
  v9 = *(_DWORD*)(a1 + 12348);
  v27_.v28 = nullptr;
  v27_.v29 = 0;
  v27_.v27 = nullptr;
  LODWORD(v24_.v24[0]) = 0;
  do {
    GameRoutine_7d6200_alt1((__int64*)&v27_.v27, v24_.v24),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    ++LODWORD(v24_.v24[0]);
  } while (SLODWORD(v24_.v24[0]) < v5);
  v12 = v27_.v27;
  if (GameData_21cd140 != 0) {
    v24_.v24[2] = GameData_21cd140;
    v24_.v25 = v7;
    v24_.v24[0] = GameData_1f98010;
    v24_.v24[1] = a1;
    v24_.v26 = v24_.v24;
    v30 = v24_.v24;
    if (v27_.v27 == v27_.v28) {
      v13 = v24_.v24;
    }
    else {
      GameRoutine_a17d20_alt1(v27_.v27, v27_.v28, (__int64*)&v30,
                              (2 * __clz(v27_.v28 - v27_.v27)) ^ 0x7E, 1),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v13 = v24_.v26;
      if (v24_.v26 != v24_.v24) {
        if (v24_.v26 != nullptr) {
          v14 = 40;
        LABEL_12:
          (*(void (**)(_QWORD*, int*, __int64, __int64))(*v13 + v14))(v13, v12,
                                                                      v10, v11),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        }
        v12 = v27_.v27;
        if (v27_.v28 != v27_.v27) {
          v15 = 0;
          while (v27_.v27[v15] != v4) {
            if (v27_.v28 - v27_.v27 == ++v15) {
              goto LABEL_19;
            }
          }
          v4 = v15;
        }
        goto LABEL_19;
      }
    }
    v14 = 32;
    goto LABEL_12;
  }
LABEL_19:
  v16 = *(_DWORD*)(a1 + 28);
  v17 = *(_DWORD*)(a1 + 12348);
  v18 = a1 + 68;
  v19 = v4;
  if ((a3 & 1) != 0) {
    v20 = v5 - 1;
  }
  else {
    v20 = v5 + 1;
  }
  while (1) {
    v19 = (v20 + v19) % v5;
    v21 = v12[v19];
    if (v21 < v17 &&
        (v16 < 0 || (*(_DWORD*)(v18 + 12LL * v21) & (1 << v16)) != 0)) {
      break;
    }
    if (--v9 == 0) {
      v21 = v4;
      break;
    }
  }
  v27_.v28 = v12;
  v22 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v22 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v12),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  return (unsigned int)v21;
}

__int64 VTarget_77a2e0(__int64 a1)
{
  __int64 v2;
  __int64* v3;
  __int16* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if (*(int*)(a1 + 24692) < 1) {
  LABEL_13:
    LODWORD(v2) = -1;
  }
  else {
    v2 = 0;
    v3 = GameData_212cfb8[0];
    v4 = (__int16*)(a1 + 12410);
    while (1) {
      if ((MapUtil_753570(*((char*)v4 - 5), *((char*)v4 - 4)) & 1) != 0) {
        if (*((_BYTE*)v4 - 1) != 0) {
          v5 = game_UnitPool_Get((char*)v4 - 1);
          if (v5 != 0 && *(_QWORD*)(v5 + 392) != 0) {
            break;
          }
        }
        if ((*v4 & 0x8000000000000000LL) == 0) {
          v6 = *(_QWORD*)(*(_QWORD*)(*v3 + 16) + 8LL);
          if (v6 != 0) {
            v7 = v6 + 144LL * *v4;
            if (((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 272LL))(v7) & 1) !=
                    0 ||
                ((*(__int64 (**)(__int64))(*(_QWORD*)v7 + 288LL))(v7) & 1) !=
                    0) {
              break;
            }
          }
        }
      }
      ++v2;
      v4 += 6;
      if (v2 >= *(int*)(a1 + 24692)) {
        goto LABEL_13;
      }
    }
  }
  return (unsigned int)v2;
}

__int64 game_map_VTarget_GetSubDataNextSelect(__int64 a1, unsigned int a2,
                                              char a3, char a4)
{
  unsigned int v4;
  int v6;
  char v7;
  int v9;
  __int64 v10;
  __int64 v11;
  int* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  int v16;
  __int64* v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  int* v24;
  __int64 v25;
  struct {
    _QWORD v27[3];
    char v28;
    char gap25_[7];
    _QWORD* v29;
  } v27_;
  struct {
    int* v30;
    int* v31;
    __int64 v32;
  } v30_;
  _QWORD* v33;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
  v11 = COERCE_AS(__typeof__(v11),
                  PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  v4 = a2;
  if ((a2 & 0x80000000) != 0) {
    return v4;
  }
  v6 = *(_DWORD*)(a1 + 24692);
  if (v6 < 1) {
    return v4;
  }
  v7 = a4 & 1;
  v9 = *(_DWORD*)(a1 + 24692);
  v30_.v31 = nullptr;
  v30_.v32 = 0;
  v30_.v30 = nullptr;
  LODWORD(v27_.v27[0]) = 0;
  do {
    GameRoutine_7d6200_alt1((__int64*)&v30_.v30, v27_.v27),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
        v11 = COERCE_AS(__typeof__(v11),
                        PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
    ++LODWORD(v27_.v27[0]);
  } while (SLODWORD(v27_.v27[0]) < v6);
  if (GameData_21cd140 != 0) {
    v12 = v30_.v31;
    v27_.v28 = v7;
    v27_.v27[2] = GameData_21cd140;
    v27_.v27[0] = GameData_1f98090;
    v27_.v27[1] = a1;
    v27_.v29 = v27_.v27;
    v33 = v27_.v27;
    if (v30_.v30 == v30_.v31) {
      v13 = v27_.v27;
    }
    else {
      GameRoutine_a17d20_alt1(v30_.v30, v30_.v31, (__int64*)&v33,
                              (2 * __clz(v30_.v31 - v30_.v30)) ^ 0x7E, 1),
          v10 = COERCE_AS(__typeof__(v10),
                          PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
          v11 = COERCE_AS(__typeof__(v11),
                          PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
      v13 = v27_.v29;
      if (v27_.v29 != v27_.v27) {
        if (v27_.v29 != nullptr) {
          v14 = 40;
        LABEL_12:
          (*(void (**)(_QWORD*, int*, __int64, __int64))(*v13 + v14))(v13, v12,
                                                                      v10, v11),
              v10 = COERCE_AS(__typeof__(v10),
                              PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
              v11 = COERCE_AS(__typeof__(v11),
                              PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
        }
        if (v30_.v31 != v30_.v30) {
          v15 = 0;
          while (v30_.v30[v15] != v4) {
            if (v30_.v31 - v30_.v30 == ++v15) {
              goto LABEL_19;
            }
          }
          v4 = v15;
        }
        goto LABEL_19;
      }
    }
    v14 = 32;
    goto LABEL_12;
  }
LABEL_19:
  v16 = v4;
  v17 = GameData_212cfb8[0];
  if ((a3 & 1) != 0) {
    v18 = v6 - 1;
  }
  else {
    v18 = v6 + 1;
  }
  v19 = a1 + 12404;
  do {
    v16 = (v18 + v16) % v6;
    v20 = v19 + 12LL * v30_.v30[v16];
    if ((MapUtil_753570(*(char*)(v20 + 1), *(char*)(v20 + 2)) & 1) != 0) {
      if (*(_BYTE*)(v20 + 5) != 0 &&
              (v21 = game_UnitPool_Get_alt2((_BYTE*)(v20 + 5))) != nullptr &&
              v21[49] != 0 ||
          (*(__int16*)(v20 + 6) & 0x8000000000000000LL) == 0 &&
              (v22 = *(_QWORD*)(*(_QWORD*)(*v17 + 16) + 8LL)) != 0 &&
              ((v23 = v22 + 144LL * *(__int16*)(v20 + 6),
                ((*(__int64 (**)(__int64))(*(_QWORD*)v23 + 272LL))(v23) & 1) !=
                    0) ||
               ((*(__int64 (**)(__int64))(*(_QWORD*)v23 + 288LL))(v23) & 1) !=
                   0)) {
        v24 = v30_.v30;
        v4 = v30_.v30[v16];
        goto LABEL_34;
      }
    }
    --v9;
  } while (v9 != 0);
  v24 = v30_.v30;
  if (v30_.v30 == nullptr) {
    return v4;
  }
LABEL_34:
  v30_.v31 = v24;
  v25 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v25 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v25, (__int64)v24),
      v10 = COERCE_AS(__typeof__(v10),
                      PSEUDO_REGISTER(unsigned long long, "x2", "=r")),
      v11 = COERCE_AS(__typeof__(v11),
                      PSEUDO_REGISTER(unsigned long long, "x3", "=r"));
  return v4;
}

__int64 VTarget_77a640(__int64 a1)
{
  __int64 v1;
  unsigned int v2;
  __int64* v3;
  __int16* v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = *(unsigned int*)(a1 + 24692);
  if ((_DWORD)v1 != 0) {
    v2 = 0;
    v3 = GameData_212cfb8[0];
    v4 = (__int16*)(a1 + 12410);
    do {
      v5 = false;
      if ((MapUtil_753570(*((char*)v4 - 5), *((char*)v4 - 4)) & 1) != 0) {
        if (*((_BYTE*)v4 - 1) != 0 &&
                (v6 = game_UnitPool_Get((char*)v4 - 1)) != 0 &&
                *(_QWORD*)(v6 + 392) != 0 ||
            (*v4 & 0x8000000000000000LL) == 0 &&
                (v7 = *(_QWORD*)(*(_QWORD*)(*v3 + 16) + 8LL)) != 0 &&
                ((v8 = v7 + 144LL * *v4,
                  ((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 272LL))(v8) & 1) !=
                      0) ||
                 ((*(__int64 (**)(__int64))(*(_QWORD*)v8 + 288LL))(v8) & 1) !=
                     0)) {
          v5 = true;
        }
      }
      v2 += v5;
      --v1;
      v4 += 6;
    } while (v1 != 0);
  }
  else {
    return 0;
  }
  return v2;
}

__int64 game_map_VTarget_EnumerateSubTarget(__int64 a1, unsigned int a2,
                                            long double a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v31;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  _QWORD* v36;
  __int64 v37;
  _QWORD* v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  unsigned __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _QWORD v58[4];
  _QWORD* v59;
  __int64 v60;
  __int64 v61;

  if ((a2 & 0x80000000) == 0) {
    v60 = v3;
    v61 = v4;
    v31 = a1 + 12LL * a2 + 60;
    v33 = a1 + 37036;
    v34 = a1 + 24692;
    v35 = *(_QWORD*)(a1 + 24720);
    *(_DWORD*)(a1 + 24692) = 0;
    if (v35 != 0) {
      v36 = *(_QWORD**)(a1 + 24712);
      if (v36 != nullptr) {
        v37 = fw_memory_g_heap_manager_ptr;
        do {
          v38 = (_QWORD*)*v36;
          if (*(_QWORD*)(*(_QWORD*)v37 + 200LL) != 0) {
            v39 = 128;
          }
          else {
            v39 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v37 + v39, v36);
          v36 = v38;
        } while (v38 != nullptr);
      }
      v40 = *(_QWORD*)(a1 + 24704);
      *(_QWORD*)(a1 + 24712) = 0;
      if (v40 != 0) {
        v41 = v40 & 7;
        if (v40 >= 8) {
          v43 = v40 & 0xFFFFFFFFFFFFFFF8LL;
          v42 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v42) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v42 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v42 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v42 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v42 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v42 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v42 + 48) = 0;
            v44 = *(_QWORD*)(a1 + 24696) + 8 * v42;
            v42 += 8;
            *(_QWORD*)(v44 + 56) = 0;
          } while (v43 != v42);
        }
        else {
          v42 = 0;
        }
        if (v41 != 0) {
          v45 = 8 * v42;
          do {
            --v41;
            *(_QWORD*)(*(_QWORD*)(a1 + 24696) + v45) = 0;
            v45 += 8;
          } while (v41 != 0);
        }
      }
      *(_QWORD*)(a1 + 24720) = 0;
    }
    v46 = *(_QWORD*)(v33 + 28);
    *(_DWORD*)(v34 + 44) = 0;
    *(_DWORD*)v33 = 0;
    if (v46 != 0) {
      v47 = *(_QWORD**)(v33 + 20);
      if (v47 != nullptr) {
        v48 = fw_memory_g_heap_manager_ptr;
        do {
          v49 = (_QWORD*)*v47;
          if (*(_QWORD*)(*(_QWORD*)v48 + 200LL) != 0) {
            v50 = 128;
          }
          else {
            v50 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v48 + v50, v47);
          v47 = v49;
        } while (v49 != nullptr);
      }
      v51 = *(_QWORD*)(v33 + 12);
      *(_QWORD*)(v33 + 20) = 0;
      if (v51 != 0) {
        v52 = v51 & 7;
        if (v51 >= 8) {
          v54 = v51 & 0xFFFFFFFFFFFFFFF8LL;
          v53 = 0;
          do {
            *(_QWORD*)(*(_QWORD*)(v33 + 4) + 8 * v53) = 0;
            *(_QWORD*)(*(_QWORD*)(v33 + 4) + 8 * v53 + 8) = 0;
            *(_QWORD*)(*(_QWORD*)(v33 + 4) + 8 * v53 + 16) = 0;
            *(_QWORD*)(*(_QWORD*)(v33 + 4) + 8 * v53 + 24) = 0;
            *(_QWORD*)(*(_QWORD*)(v33 + 4) + 8 * v53 + 32) = 0;
            *(_QWORD*)(*(_QWORD*)(v33 + 4) + 8 * v53 + 40) = 0;
            *(_QWORD*)(*(_QWORD*)(v33 + 4) + 8 * v53 + 48) = 0;
            v55 = *(_QWORD*)(v33 + 4) + 8 * v53;
            v53 += 8;
            *(_QWORD*)(v55 + 56) = 0;
          } while (v54 != v53);
        }
        else {
          v53 = 0;
        }
        if (v52 != 0) {
          v56 = 8 * v53;
          do {
            --v52;
            *(_QWORD*)(*(_QWORD*)(v33 + 4) + v56) = 0;
            v56 += 8;
          } while (v52 != 0);
        }
      }
      *(_QWORD*)(v33 + 28) = 0;
    }
    *(_DWORD*)(v33 + 44) = 0;
    if (*(char*)(v31 + 1) < 0 || *(char*)(v31 + 2) < 0) {
      return GameRoutine_845bc0(a1 + 12400, a1) & 1;
    }
    v58[0] = GameData_1f98190;
    v58[1] = a1;
    v59 = v58;
    GameRoutine_775580((__int64 (**)())a1, v31, v58, a3);
    if (v59 == v58) {
      v57 = 32;
    }
    else {
      if (v59 == nullptr) {
      LABEL_74:
        GameRoutine_77b1a0(a1);
        return GameRoutine_845bc0(a1 + 12400, a1) & 1;
      }
      v57 = 40;
    }
    (*(void (**)(__int64))(*v59 + v57))((__int64)v59);
    goto LABEL_74;
  }
  v60 = v3;
  v61 = v4;
  v5 = a1 + 37036;
  v6 = a1 + 24692;
  v7 = *(_QWORD*)(a1 + 24720);
  *(_DWORD*)(a1 + 24692) = 0;
  if (v7 != 0) {
    v8 = *(_QWORD**)(a1 + 24712);
    if (v8 != nullptr) {
      v10 = fw_memory_g_heap_manager_ptr;
      do {
        v11 = (_QWORD*)*v8;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
          v12 = 128;
        }
        else {
          v12 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v12, v8);
        v8 = v11;
      } while (v11 != nullptr);
    }
    v13 = *(_QWORD*)(a1 + 24704);
    *(_QWORD*)(a1 + 24712) = 0;
    if (v13 != 0) {
      v14 = v13 & 7;
      if (v13 >= 8) {
        v16 = v13 & 0xFFFFFFFFFFFFFFF8LL;
        v15 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v15) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v15 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v15 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v15 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v15 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v15 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + 8 * v15 + 48) = 0;
          v17 = *(_QWORD*)(a1 + 24696) + 8 * v15;
          v15 += 8;
          *(_QWORD*)(v17 + 56) = 0;
        } while (v16 != v15);
      }
      else {
        v15 = 0;
      }
      if (v14 != 0) {
        v18 = 8 * v15;
        do {
          --v14;
          *(_QWORD*)(*(_QWORD*)(a1 + 24696) + v18) = 0;
          v18 += 8;
        } while (v14 != 0);
      }
    }
    *(_QWORD*)(a1 + 24720) = 0;
  }
  v19 = *(_QWORD*)(v5 + 28);
  *(_DWORD*)(v6 + 44) = 0;
  *(_DWORD*)v5 = 0;
  if (v19 != 0) {
    v20 = *(_QWORD**)(v5 + 20);
    if (v20 != nullptr) {
      v21 = fw_memory_g_heap_manager_ptr;
      do {
        v22 = (_QWORD*)*v20;
        if (*(_QWORD*)(*(_QWORD*)v21 + 200LL) != 0) {
          v23 = 128;
        }
        else {
          v23 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v21 + v23, v20);
        v20 = v22;
      } while (v22 != nullptr);
    }
    v24 = *(_QWORD*)(v5 + 12);
    *(_QWORD*)(v5 + 20) = 0;
    if (v24 != 0) {
      v25 = v24 & 7;
      if (v24 >= 8) {
        v27 = v24 & 0xFFFFFFFFFFFFFFF8LL;
        v26 = 0;
        do {
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v26) = 0;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v26 + 8) = 0;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v26 + 16) = 0;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v26 + 24) = 0;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v26 + 32) = 0;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v26 + 40) = 0;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + 8 * v26 + 48) = 0;
          v28 = *(_QWORD*)(v5 + 4) + 8 * v26;
          v26 += 8;
          *(_QWORD*)(v28 + 56) = 0;
        } while (v27 != v26);
      }
      else {
        v26 = 0;
      }
      if (v25 != 0) {
        v29 = 8 * v26;
        do {
          --v25;
          *(_QWORD*)(*(_QWORD*)(v5 + 4) + v29) = 0;
          v29 += 8;
        } while (v25 != 0);
      }
    }
    *(_QWORD*)(v5 + 28) = 0;
  }
  *(_DWORD*)(v5 + 44) = 0;
  return 0;
}

float game_map_VTarget_GetDataNextSelect_lambda0_Invoke(__int64 a1, int* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 8) + 12LL * *a2;
  return GameRoutine_7c05a0(
      *(_QWORD*)(a1 + 16), (unsigned int)*(char*)(v2 + 61),
      (unsigned int)*(char*)(v2 + 62), *(unsigned __int8*)(a1 + 24));
}

float game_map_VTarget_GetSubDataNextSelect_lambda0_Invoke(__int64 a1, int* a2)
{
  __int64 v2;

  v2 = *(_QWORD*)(a1 + 8) + 12LL * *a2;
  return GameRoutine_7c05a0(
      *(_QWORD*)(a1 + 16), (unsigned int)*(char*)(v2 + 12405),
      (unsigned int)*(char*)(v2 + 12406), *(unsigned __int8*)(a1 + 24));
}

__int64 game_map_VTarget_EnumerateSubTarget_lambda0_Invoke_787a80(__int64 a1,
                                                                  __int64 a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v2 + 24736) |= *(_DWORD*)(a2 + 8);
  v4 = GameRoutine_8450e0(v2 + 12400, (unsigned int)*(char*)(a2 + 1),
                          (unsigned int)*(char*)(a2 + 2));
  return GameRoutine_844950(v4, a2);
}

__int64 game_map_VTarget_EnumerateSubTarget_lambda0_Invoke_787bd0(__int64 a1,
                                                                  __int64 a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 8);
  *(_DWORD*)(v2 + 24736) |= *(_DWORD*)(a2 + 8);
  v4 = GameRoutine_8450e0(v2 + 12400, (unsigned int)*(char*)(a2 + 1),
                          (unsigned int)*(char*)(a2 + 2));
  return GameRoutine_844950(v4, a2);
}

#pragma GCC visibility pop
