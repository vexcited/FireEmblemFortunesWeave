#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_201eed8[])();
extern __int64 (*game_AIEntrustImage_vtable[])();
extern __int64 GameData_22400d0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_224078c;
_QWORD* AIEntrustImage_Destructor_alt1(_QWORD* result) __asm__(
    "AIEntrustImage_Destructor");
__int64 AIDeploy_Destructor(_QWORD);
__int64 AIHistory_Destructor(_QWORD);
__int64 GameRoutine_1273d20(void);
extern _DWORD* GameData_21309a0;
extern _DWORD* GameData_2130b68;
extern _DWORD* GameData_2130b88;
extern _DWORD* GameData_2130c78;
extern __int64* GameData_2130668[3];
extern __int64* GameData_2130670[2];
extern __int64* GameData_2130920[5];
extern __int64* GameData_2130928[4];
extern __int64* GameData_2130930[3];
extern __int64* GameData_2130940;
extern __int64* GameData_2130998;
extern __int64* GameData_2130b60;
extern __int64* GameData_2130b70[3];
extern __int64* GameData_2130c70;
extern __int64 GameData_2130688;
extern __int64 GameData_21306a0[7];
extern __int64 GameData_21306c0[3];
extern __int64 GameData_21306c8[2];
extern __int64 GameData_21306d0;
extern __int64 GameData_21308b0[2];
__int64 AIEntrustImage_1273940_alt1() __asm__("AIEntrustImage_1273940");
__int64 AIDeploy_Destructor_alt1(_QWORD*) __asm__("AIDeploy_Destructor");
void AIHistory_Destructor_alt1(_QWORD*) __asm__("AIHistory_Destructor");
void GameHr_1273d20();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void AIEntrustImage_1273940();
void AIEntrustImage_Destructor(_QWORD* a1);

void AIEntrustImage_1273940()
{
  __int64* v0;
  __int64* v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64* v20;
  __int64 v21;
  __int64* v22;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64* v29;
  __int64* v30;
  _QWORD* v31;
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;
  __int64 v35;

  v0 = GameData_2130940;
  (*(void (**)(_QWORD))(*(_QWORD*)*GameData_2130940 + 24LL))(*GameData_2130940);
  if (*v0 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)*v0 + 8LL))(*v0);
  }
  *v0 = 0;
  v1 = GameData_2130670[0];
  v2 = (_QWORD*)*GameData_2130670[0];
  v3 = fw_memory_g_heap_manager_ptr;
  if (*GameData_2130670[0] != 0) {
    v4 = v2[1];
    if (v4 != 0) {
      v5 = v2[2];
      if (v4 == v5) {
        goto LABEL_14;
      }
      v6 = v2[2];
      do {
        v8 = *(_QWORD*)(v6 - 24);
        v6 -= 24;
        v7 = v8;
        if (v8 != 0) {
          *(_QWORD*)(v5 - 16) = v7;
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v9 = 128;
          }
          else {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v9, v7);
        }
        v5 = v6;
      } while (v6 != v4);
      v10 = v2[1];
      v2[2] = v4;
      v4 = v10;
      if (v10 != 0) {
      LABEL_14:
        v11 = 128;
        if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v11, v4);
      }
    }
    *v2 = GameData_2130b60 + 2;
    if ((_QWORD*)*v1 == v2) {
      *v1 = 0;
      *GameData_2130b68 = 0;
    }
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v12, (__int64)v2);
  }
  *v1 = 0;
  v13 = GameData_2130668[0];
  v14 = (_QWORD*)*GameData_2130668[0];
  if (*GameData_2130668[0] != 0) {
    v15 = v14[1];
    if (v15 != 0) {
      v16 = *(_QWORD*)v3;
      v14[2] = v15;
      v17 = 128;
      if (*(_QWORD*)(v16 + 200) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(v16 + v17, v15);
    }
    *v14 = GameData_2130998 + 2;
    if ((_QWORD*)*v13 == v14) {
      *v13 = 0;
      *GameData_21309a0 = 0;
    }
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v18, (__int64)v14);
  }
  *v13 = 0;
  v19 = (_QWORD*)GameData_21306c0[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_21306c0[0] + 24LL))(
      *(_QWORD*)GameData_21306c0[0]);
  if (*v19 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v19 + 8LL))(*v19);
  }
  *v19 = 0;
  GameHr_1273d20();
  v20 = GameData_2130b70[0];
  v21 = *GameData_2130b70[0];
  v22 = GameData_2130c70;
  *GameData_2130b70[0] = 0;
  *(_QWORD*)(v21 + 192) = v22 + 2;
  *GameData_2130c78 = 0;
  v23 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v23 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v23, v21);
  *v20 = 0;
  v24 = (_QWORD*)GameData_21306c8[0];
  (*(void (**)(_QWORD))(**(_QWORD**)GameData_21306c8[0] + 24LL))(
      *(_QWORD*)GameData_21306c8[0]);
  if (*v24 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v24 + 8LL))(*v24);
  }
  *v24 = 0;
  v25 = (_QWORD*)GameData_2130688;
  v26 = *(_QWORD*)GameData_2130688;
  if (*(_QWORD*)GameData_2130688 != 0) {
    AIHistory_Destructor_alt1(*(_QWORD**)GameData_2130688);
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v27, v26);
  }
  *v25 = 0;
  v28 = GameData_2130928[0];
  *GameData_2130928[0] = 0;
  v28[1] = 0;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v28) = 0;
  *GameData_2130b88 = 0;
  v29 = GameData_2130920[0];
  *GameData_2130920[0] = 0;
  v29[1] = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v29) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v29 + 8) = 0;
  *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v29) = 0;
  *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v29 + 8) = 0;
  *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v29) = 0;
  *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v29) = 0;
  *(_QWORD*)((char*)((char*)0x40LL) + (_QWORD)v29) = 0;
  *(_QWORD*)((char*)((char*)0x40LL) + (_QWORD)v29 + 8) = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + (_QWORD)v29) = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x50LL) + (_QWORD)v29 + 8) = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x60LL) + (_QWORD)v29) = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x60LL) + (_QWORD)v29 + 8) = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x70LL) + (_QWORD)v29) = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x70LL) + (_QWORD)v29 + 8) = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x7CLL) + (_QWORD)v29 + 4) = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x7CLL) + (_QWORD)v29 + 12) = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)v29) = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0x90LL) + (_QWORD)v29 + 8) = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0xA0LL) + (_QWORD)v29) = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0xA0LL) + (_QWORD)v29 + 8) = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0xB0LL) + (_QWORD)v29) = 0;
  *(_QWORD*)((char*)((_UNKNOWN*)0xB0LL) + (_QWORD)v29 + 8) = 0;
  v30 = GameData_2130930[0];
  *(_DWORD*)((char*)((_UNKNOWN*)0xC0LL) + (_QWORD)v29) = 0;
  *(_DWORD*)((char*)((char*)0x20LL) + (_QWORD)v30) = 0;
  v31 = (_QWORD*)GameData_21308b0[0];
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v30) = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v30 + 8) = 0;
  v32 = (_QWORD*)GameData_21306d0;
  *v30 = 0;
  v30[1] = 0;
  *v31 = 0;
  v31[1] = 0;
  *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v31) = 0;
  *(_DWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v31 + 8) = 0;
  (*(void (**)(_QWORD))(*(_QWORD*)*v32 + 24LL))(*v32);
  if (*v32 != 0) {
    (*(void (**)(_QWORD))(*(_QWORD*)*v32 + 8LL))(*v32);
  }
  *v32 = 0;
  v33 = (_QWORD*)GameData_21306a0[0];
  v34 = *(_QWORD*)GameData_21306a0[0];
  AIDeploy_Destructor_alt1(*(_QWORD**)GameData_21306a0[0]);
  v35 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v35 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v35, v34);
  *v33 = 0;
}

void AIEntrustImage_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = a1[331];
  *a1 = game_AIEntrustImage_vtable;
  v3 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[332] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v4 + v5, v1);
  }
  v6 = a1[4];
  if (v6 != 0) {
    v7 = *v3;
    a1[5] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v7 + v8, v6);
  }
  *a1 = GameData_201eed8;
  if ((_QWORD*)GameData_22400d0 == a1) {
    GameData_22400d0 = 0;
    GameData_224078c = 0;
  }
}

#pragma GCC visibility pop
