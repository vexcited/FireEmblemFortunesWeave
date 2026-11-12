#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* ObeliskDestinyMenuItem_1a06060(_QWORD* result, int*, char);
__int64 GameRoutine_6e3b50(_QWORD, _QWORD);
__int64 GameRoutine_930b90(_QWORD, _QWORD);
__int64 ObeliskDestinyMenuItem_1a06cc0(__int64, char*, char*);
__int64 Se_80e330(_QWORD, _QWORD);
__int64 ShowItemList_1a084d0_alt1(_QWORD,
                                  _QWORD) __asm__("ShowItemList_1a084d0");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64* GameRoutine_1a05f00(__int64* result, __int64*);
extern __int64 (*GameData_212bab8[])();
extern __int64 (*GameData_212bb38[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_menu_ShowItemList_CreateBindResult_lambda0_Destructor_alt1(
    __int64 a1) __asm__("game_menu_ShowItemList_CreateBindResult_lambda0_"
                        "Destructor");
__int64 game_menu_ShowItemList_CreateBindResult_lambda0_DeletingDestructor_alt1(
    __int64 a1) __asm__("game_menu_ShowItemList_CreateBindResult_lambda0_"
                        "DeletingDestructor");
__int64 game_menu_ShowItemList_CreateBindResult_lambda0_Clone(__int64 a1);
__int64 game_menu_ShowItemList_CreateBindResult_lambda0_Destroy_alt1(
    __int64
        a1) __asm__("game_menu_ShowItemList_CreateBindResult_lambda0_Destroy");
__int64 game_menu_ShowItemList_CreateBindResult_lambda0_Invoke(__int64 a1,
                                                               __int64* a2);
__int64 ShowItemList_1a084d0(__int64 a1, __int64* a2);
_QWORD* game_menu_ShowItemList_CreateBindResult_lambda1_Destructor_alt1(
    _QWORD* result) __asm__("game_menu_ShowItemList_CreateBindResult_lambda1_"
                            "Destructor");
__int64 game_menu_ShowItemList_CreateBindResult_lambda1_DeletingDestructor_alt1(
    __int64 a1) __asm__("game_menu_ShowItemList_CreateBindResult_lambda1_"
                        "DeletingDestructor");
_QWORD* game_menu_ShowItemList_CreateBindResult_lambda1_Clone(__int64 a1);
__int64* game_menu_ShowItemList_CreateBindResult_lambda1_CloneInto(__int64 a1,
                                                                   __int64 a2);
__int64 game_menu_ShowItemList_CreateBindResult_lambda1_Destroy_alt1(
    __int64 result) __asm__("game_menu_ShowItemList_CreateBindResult_lambda1_"
                            "Destroy");
extern __int64 (
    *game_menu_ShowItemList_CreateBindResult_lambda0_Destructor_ptr[])();
extern __int64 (
    *game_menu_ShowItemList_CreateBindResult_lambda1_Destructor_ptr[])();
void GameRoutine_6e3b50_alt1(__int64, _QWORD*) __asm__("GameRoutine_6e3b50");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_menu_ShowItemList_CreateBindResult_lambda0_Destructor(__int64 a1);
void game_menu_ShowItemList_CreateBindResult_lambda0_DeletingDestructor(
    __int64 a1);
void game_menu_ShowItemList_CreateBindResult_lambda0_Destroy(__int64 a1);
void game_menu_ShowItemList_CreateBindResult_lambda1_Destructor(__int64 a1);
void game_menu_ShowItemList_CreateBindResult_lambda1_DeletingDestructor(
    __int64 a1);
void game_menu_ShowItemList_CreateBindResult_lambda1_Destroy(__int64 a1);
extern __int64* GameData_212c878[6];
void Se_80e330_alt1(__int64, const char*) __asm__("Se_80e330");
void game_menu_ShowItemList_CreateBindResult_lambda1_Invoke(__int64 a1,
                                                            __int64* a2);

void game_menu_ShowItemList_CreateBindResult_lambda0_Destructor(__int64 a1)
{
  _QWORD* v2;
  char v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  *(_QWORD*)(a1 + 80) = 0;
  *(_DWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = game_menu_ShowItemList_CreateBindResult_lambda0_Destructor_ptr;
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    **(_BYTE**)(a1 + 136) = 0;
    *(_QWORD*)(a1 + 128) = 0;
  }
  else {
    *(_WORD*)(a1 + 120) = 0;
  }
  v2 = (_QWORD*)(a1 + 104);
  GameRoutine_6e3b50_alt1(a1 + 96, *(_QWORD**)(a1 + 104));
  v3 = *(_BYTE*)(a1 + 120);
  *v2 = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 96) = a1 + 104;
  if ((v3 & 1) != 0) {
    v4 = *(_QWORD**)(a1 + 136);
    if (v4 != nullptr) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, (__int64)v4);
      v4 = (_QWORD*)*v2;
    }
  }
  else {
    v4 = nullptr;
  }
  GameRoutine_6e3b50_alt1(a1 + 96, v4);
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 48);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v7, v6);
    }
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 24);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v8);
    }
  }
}

void game_menu_ShowItemList_CreateBindResult_lambda0_DeletingDestructor(
    __int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  *(_QWORD*)(a1 + 80) = 0;
  *(_DWORD*)(a1 + 88) = 0;
  *(_QWORD*)a1 = game_menu_ShowItemList_CreateBindResult_lambda0_Destructor_ptr;
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    **(_BYTE**)(a1 + 136) = 0;
    *(_QWORD*)(a1 + 128) = 0;
  }
  else {
    *(_WORD*)(a1 + 120) = 0;
  }
  v2 = (_QWORD*)(a1 + 104);
  GameRoutine_6e3b50_alt1(a1 + 96, *(_QWORD**)(a1 + 104));
  *v2 = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 96) = a1 + 104;
  v3 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 120) & 1) != 0) {
    v4 = *(_QWORD**)(a1 + 136);
    if (v4 != nullptr) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, (__int64)v4);
      v4 = (_QWORD*)*v2;
    }
  }
  else {
    v4 = nullptr;
  }
  GameRoutine_6e3b50_alt1(a1 + 96, v4);
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v6 = *(_QWORD*)(a1 + 48);
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v7, v6);
    }
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v8 = *(_QWORD*)(a1 + 24);
    if (v8 != 0) {
      v9 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v9 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v9, v8);
    }
  }
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v10 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, a1);
}

__int64 game_menu_ShowItemList_CreateBindResult_lambda0_Clone(__int64 a1)
{
  __int64 v2;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      168, 16, 0);
  ShowItemList_1a084d0_alt1(v2, a1 + 8);
  return v2;
}

void game_menu_ShowItemList_CreateBindResult_lambda0_Destroy(__int64 a1)
{
  char v1;
  _QWORD* v3;
  char v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = *(_BYTE*)(a1 + 120);
  *(_DWORD*)(a1 + 88) = 0;
  *(_QWORD*)(a1 + 80) = 0;
  if ((v1 & 1) != 0) {
    **(_BYTE**)(a1 + 136) = 0;
    *(_QWORD*)(a1 + 128) = 0;
  }
  else {
    *(_WORD*)(a1 + 120) = 0;
  }
  v3 = (_QWORD*)(a1 + 104);
  GameRoutine_6e3b50_alt1(a1 + 96, *(_QWORD**)(a1 + 104));
  v4 = *(_BYTE*)(a1 + 120);
  *v3 = 0;
  *(_QWORD*)(a1 + 112) = 0;
  *(_QWORD*)(a1 + 96) = a1 + 104;
  if ((v4 & 1) != 0) {
    v5 = *(_QWORD**)(a1 + 136);
    if (v5 != nullptr) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v6, (__int64)v5);
      v5 = (_QWORD*)*v3;
    }
  }
  else {
    v5 = nullptr;
  }
  GameRoutine_6e3b50_alt1(a1 + 96, v5);
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v7 = *(_QWORD*)(a1 + 48);
    if (v7 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v7);
    }
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v9 = *(_QWORD*)(a1 + 24);
    if (v9 != 0) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v9);
    }
  }
}

__int64 game_menu_ShowItemList_CreateBindResult_lambda0_Invoke(__int64 a1,
                                                               __int64* a2)
{
  char v3;
  char* v4;
  char* v5;
  __int64 v6;
  char* v7;
  char* v8;
  __int64 v9;
  const char* v10;

  v3 = *(_BYTE*)(a1 + 8);
  v4 = *(char**)(a1 + 24);
  v5 = (char*)(a1 + 9);
  v6 = *a2;
  if ((v3 & 1) != 0) {
    v7 = v4;
  }
  else {
    v7 = v5;
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v8 = *(char**)(a1 + 48);
  }
  else {
    v8 = (char*)(a1 + 33);
  }
  v9 = ObeliskDestinyMenuItem_1a06cc0(v6, v7, v8);
  ObeliskDestinyMenuItem_1a06060((_QWORD*)(v9 + 824), (int*)(a1 + 56), 0);
  if ((*(_BYTE*)(a1 + 160) & 1) != 0 ||
      (Se_80e330(v9, "SE_SYS_Telop_ItemGet_Special"),
       (*(_BYTE*)(a1 + 160) & 1) != 0)) {
    v10 = "FF_Negative1";
  }
  else {
    v10 = "FF_Special_ItemGet";
  }
  return Se_80e330(v9, v10);
}

__int64 ShowItemList_1a084d0(__int64 a1, __int64* a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 result;
  __int64 v14;

  *(_QWORD*)a1 = GameData_212bab8;
  v4 = (_QWORD*)(a1 + 8);
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated(v4, a2[2], a2[1]);
  }
  else {
    v5 = *a2;
    v6 = a2[2];
    v4[1] = a2[1];
    v4[2] = v6;
    *v4 = v5;
  }
  if ((a2[3] & 1) != 0) {
    fw_text_String_CopyTerminated(a1 + 32, a2[5], a2[4]);
  }
  else {
    v7 = a2[3];
    v8 = a2[5];
    *(_QWORD*)(a1 + 40) = a2[4];
    *(_QWORD*)(a1 + 48) = v8;
    *(_QWORD*)(a1 + 32) = v7;
  }
  v9 = *((_DWORD*)a2 + 12);
  *(_QWORD*)(a1 + 60) = 0;
  *(_DWORD*)(a1 + 56) = v9;
  v10 = *(__int64*)((char*)a2 + 52);
  *(_QWORD*)(a1 + 68) = 0;
  *(_QWORD*)(a1 + 60) = v10;
  if (*((_BYTE*)a2 + 60) != 0) {
    v11 = *(__int64*)((char*)a2 + 60);
  }
  else {
    v11 = 0;
  }
  *(_QWORD*)(a1 + 104) = 0;
  v12 = a1 + 104;
  *(_QWORD*)(v12 - 36) = v11;
  *(_WORD*)(v12 - 22) = 0;
  *(_DWORD*)(v12 - 20) = 0;
  *(_QWORD*)(v12 - 8) = v12;
  *(_QWORD*)(v12 + 8) = 0;
  *(_QWORD*)(v12 + 16) = 0;
  *(_QWORD*)(v12 + 24) = 0;
  *(_QWORD*)(v12 + 32) = 0;
  result = GameRoutine_930b90(v12 - 24, a2 + 9);
  v14 = a2[17];
  *(_DWORD*)(v12 + 48) = *((_DWORD*)a2 + 36);
  *(_QWORD*)(v12 + 40) = v14;
  *(_BYTE*)(v12 + 56) = *((_BYTE*)a2 + 152);
  return result;
}

void game_menu_ShowItemList_CreateBindResult_lambda1_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_ShowItemList_CreateBindResult_lambda1_Destructor_ptr;
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 64);
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_16;
    }
    v5 = v3 - 40;
    do {
      v8 = *(_BYTE*)(v5 - 8);
      *(_DWORD*)(v5 - 40) = 0;
      *(_QWORD*)(v5 - 48) = 0;
      if ((v8 & 1) != 0) {
        **(_BYTE**)(v5 + 8) = 0;
        *(_QWORD*)v5 = 0;
      }
      else {
        *(_WORD*)(v5 - 8) = 0;
      }
      GameRoutine_6e3b50_alt1(v5 - 32, *(_QWORD**)(v5 - 24));
      v9 = *(_BYTE*)(v5 - 8);
      *(_QWORD*)(v5 - 24) = 0;
      *(_QWORD*)(v5 - 16) = 0;
      *(_QWORD*)(v5 - 32) = v5 - 24;
      if ((v9 & 1) != 0) {
        v6 = *(_QWORD**)(v5 + 8);
        if (v6 != nullptr) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v10, (__int64)v6);
          v6 = *(_QWORD**)(v5 - 24);
        }
      }
      else {
        v6 = nullptr;
      }
      GameRoutine_6e3b50_alt1(v5 - 32, v6);
      v7 = v5 - 72;
      v5 -= 112;
    } while (v7 != v1);
    v11 = *(_QWORD*)(a1 + 56);
    *(_QWORD*)(a1 + 64) = v1;
    v1 = v11;
    if (v11 != 0) {
    LABEL_16:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v12, v1);
    }
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v13 = *(_QWORD*)(a1 + 48);
    if (v13 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v13);
    }
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 24);
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
    }
  }
}

void game_menu_ShowItemList_CreateBindResult_lambda1_DeletingDestructor(
    __int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v1 = *(_QWORD*)(a1 + 56);
  *(_QWORD*)a1 = game_menu_ShowItemList_CreateBindResult_lambda1_Destructor_ptr;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)(a1 + 64);
    if (v1 == v4) {
      goto LABEL_16;
    }
    v5 = v4 - 40;
    do {
      v8 = *(_BYTE*)(v5 - 8);
      *(_DWORD*)(v5 - 40) = 0;
      *(_QWORD*)(v5 - 48) = 0;
      if ((v8 & 1) != 0) {
        **(_BYTE**)(v5 + 8) = 0;
        *(_QWORD*)v5 = 0;
      }
      else {
        *(_WORD*)(v5 - 8) = 0;
      }
      GameRoutine_6e3b50_alt1(v5 - 32, *(_QWORD**)(v5 - 24));
      v9 = *(_BYTE*)(v5 - 8);
      *(_QWORD*)(v5 - 24) = 0;
      *(_QWORD*)(v5 - 16) = 0;
      *(_QWORD*)(v5 - 32) = v5 - 24;
      if ((v9 & 1) != 0) {
        v6 = *(_QWORD**)(v5 + 8);
        if (v6 != nullptr) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, (__int64)v6);
          v6 = *(_QWORD**)(v5 - 24);
        }
      }
      else {
        v6 = nullptr;
      }
      GameRoutine_6e3b50_alt1(v5 - 32, v6);
      v7 = v5 - 72;
      v5 -= 112;
    } while (v7 != v1);
    v11 = *(_QWORD*)(a1 + 56);
    *(_QWORD*)(a1 + 64) = v1;
    v1 = v11;
    if (v11 != 0) {
    LABEL_16:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v12, v1);
    }
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v13 = *(_QWORD*)(a1 + 48);
    if (v13 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v14, v13);
    }
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 24);
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v16, v15);
    }
  }
  v17 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v17 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v17, a1);
}

_QWORD* game_menu_ShowItemList_CreateBindResult_lambda1_Clone(__int64 a1)
{
  _QWORD* v2;
  char v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
  v3 = *(_BYTE*)(a1 + 8);
  v4 = v2;
  *v2 = GameData_212bb38;
  v5 = v2 + 1;
  if ((v3 & 1) != 0) {
    fw_text_String_CopyTerminated(v5, *(_QWORD*)(a1 + 24), *(_QWORD*)(a1 + 16));
  }
  else {
    v6 = *(_QWORD*)(a1 + 16);
    v7 = *(_QWORD*)(a1 + 24);
    *v5 = *(_QWORD*)(a1 + 8);
    v5[1] = v6;
    v5[2] = v7;
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    fw_text_String_CopyTerminated(v4 + 4, *(_QWORD*)(a1 + 48),
                                  *(_QWORD*)(a1 + 40));
  }
  else {
    v8 = *(_QWORD*)(a1 + 40);
    v9 = *(_QWORD*)(a1 + 48);
    v4[4] = *(_QWORD*)(a1 + 32);
    v4[5] = v8;
    v4[6] = v9;
  }
  GameRoutine_1a05f00(v4 + 7, (__int64*)(a1 + 56));
  *((_BYTE*)v4 + 80) = *(_BYTE*)(a1 + 80);
  return v4;
}

__int64* game_menu_ShowItemList_CreateBindResult_lambda1_CloneInto(__int64 a1,
                                                                   __int64 a2)
{
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* result;

  *(_QWORD*)a2 = GameData_212bb38;
  v4 = (_QWORD*)(a2 + 8);
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    fw_text_String_CopyTerminated(v4, *(_QWORD*)(a1 + 24), *(_QWORD*)(a1 + 16));
  }
  else {
    v5 = *(_QWORD*)(a1 + 8);
    v6 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(a2 + 16) = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a2 + 24) = v6;
    *v4 = v5;
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    fw_text_String_CopyTerminated(a2 + 32, *(_QWORD*)(a1 + 48),
                                  *(_QWORD*)(a1 + 40));
  }
  else {
    v7 = *(_QWORD*)(a1 + 32);
    v8 = *(_QWORD*)(a1 + 48);
    *(_QWORD*)(a2 + 40) = *(_QWORD*)(a1 + 40);
    *(_QWORD*)(a2 + 48) = v8;
    *(_QWORD*)(a2 + 32) = v7;
  }
  result = GameRoutine_1a05f00((__int64*)(a2 + 56), (__int64*)(a1 + 56));
  *(_BYTE*)(a2 + 80) = *(_BYTE*)(a1 + 80);
  return result;
}

void game_menu_ShowItemList_CreateBindResult_lambda1_Destroy(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  char v8;
  char v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v1 = *(_QWORD*)(a1 + 56);
  if (v1 != 0) {
    v3 = *(_QWORD*)(a1 + 64);
    v4 = fw_memory_g_heap_manager_ptr;
    if (v1 == v3) {
      goto LABEL_16;
    }
    v5 = v3 - 40;
    do {
      v8 = *(_BYTE*)(v5 - 8);
      *(_DWORD*)(v5 - 40) = 0;
      *(_QWORD*)(v5 - 48) = 0;
      if ((v8 & 1) != 0) {
        **(_BYTE**)(v5 + 8) = 0;
        *(_QWORD*)v5 = 0;
      }
      else {
        *(_WORD*)(v5 - 8) = 0;
      }
      GameRoutine_6e3b50_alt1(v5 - 32, *(_QWORD**)(v5 - 24));
      v9 = *(_BYTE*)(v5 - 8);
      *(_QWORD*)(v5 - 24) = 0;
      *(_QWORD*)(v5 - 16) = 0;
      *(_QWORD*)(v5 - 32) = v5 - 24;
      if ((v9 & 1) != 0) {
        v6 = *(_QWORD**)(v5 + 8);
        if (v6 != nullptr) {
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v10 = 128;
          }
          else {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v10, (__int64)v6);
          v6 = *(_QWORD**)(v5 - 24);
        }
      }
      else {
        v6 = nullptr;
      }
      GameRoutine_6e3b50_alt1(v5 - 32, v6);
      v7 = v5 - 72;
      v5 -= 112;
    } while (v7 != v1);
    v11 = *(_QWORD*)(a1 + 56);
    *(_QWORD*)(a1 + 64) = v1;
    v1 = v11;
    if (v11 != 0) {
    LABEL_16:
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v12 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v4 + v12, v1);
    }
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v13 = *(_QWORD*)(a1 + 48);
    if (v13 != 0) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, v13);
    }
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v15 = *(_QWORD*)(a1 + 24);
    if (v15 != 0) {
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v15);
    }
  }
}

void game_menu_ShowItemList_CreateBindResult_lambda1_Invoke(__int64 a1,
                                                            __int64* a2)
{
  char v3;
  char* v4;
  char* v5;
  __int64 v6;
  char* v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  __int64* v14;
  int v15;
  const char* v16;

  v3 = *(_BYTE*)(a1 + 8);
  v4 = *(char**)(a1 + 24);
  v5 = (char*)(a1 + 9);
  v6 = *a2;
  if ((v3 & 1) != 0) {
    v7 = v4;
  }
  else {
    v7 = v5;
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v8 = *(char**)(a1 + 48);
  }
  else {
    v8 = (char*)(a1 + 33);
  }
  v9 = ObeliskDestinyMenuItem_1a06cc0(v6, v7, v8);
  v10 = *(_QWORD*)(a1 + 56);
  v11 = *(_QWORD*)(a1 + 64);
  v12 = v9;
  if (v10 == v11) {
    goto LABEL_14;
  }
  v13 = 0;
  v14 = GameData_212c878[0];
  do {
    ObeliskDestinyMenuItem_1a06060((_QWORD*)(v12 + 824), (int*)v10, 0);
    if (*(_WORD*)(v10 + 4) != 0) {
      v13 |= (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*v14 + 64) +
                                   8LL * *(unsigned __int16*)(v10 + 4)) +
                        337LL) &
              0x20) != 0;
    }
    v10 += 112;
  } while (v10 != v11);
  v15 = *(unsigned __int8*)(a1 + 80);
  if ((v13 & ~v15 & 1) != 0) {
    Se_80e330_alt1(v12, "SE_SYS_ItemGet_Quest");
  LABEL_14:
    LOBYTE(v15) = *(_BYTE*)(a1 + 80);
  }
  if ((v15 & 1) != 0) {
    v16 = "FF_Negative1";
  }
  else {
    v16 = "FF_Positive1";
  }
  Se_80e330_alt1(v12, v16);
}

#pragma GCC visibility pop
