#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19449a0(_QWORD, _QWORD);
__int64 GameRoutine_20();
__int64 nn_account_CloseUser(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_DestroyThread(_QWORD);
__int64 nn_os_FinalizeLightMessageQueue(_QWORD);
__int64 nn_os_ReceiveLightMessageQueue(_QWORD, _QWORD);
__int64 nn_os_SendLightMessageQueue(_QWORD, _QWORD);
__int64 nn_os_WaitThread(_QWORD);
extern __int64 (*base_thread_ExecutorBase_vtable[])();
extern __int64 (*save_Task_vtable[])();
extern __int64 GameData_226b920;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 Task_Unknown2(__int64 a1);
__int64 Task_Unknown4(__int64 a1);
__int64 GameRoutine_656f20(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657150(_QWORD);
__int64 GameRoutine_657220(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD);
__int64 nn_fs_CloseFile(_QWORD);
__int64 nn_fs_Commit(_QWORD);
__int64 nn_fs_DeleteFile(_QWORD);
__int64 nn_fs_GetFileSize(_QWORD, _QWORD);
__int64 nn_fs_ReadFile_1a0a620(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_fs_SetFileSize(_QWORD, _QWORD);
__int64 nn_fs_Unmount(_QWORD);
__int64 nn_fs_WriteFile(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 strcat(_QWORD, _QWORD);
__int64 strcpy(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_2109438[])();
extern char GameData_1a9f09e;
__int64 save_Task_Unmount_lambda0_Invoke(__int64 result);
__int64 save_Task_Open_lambda0_Clone(__int64 a1);
_QWORD* save_Task_Open_lambda0_CloneInto(_QWORD* result, __int64 a2);
__int64 save_Task_Open_lambda0_Invoke(__int64 a1);
__int64 save_Task_Close_lambda0_Invoke(__int64 a1);
__int64 save_Task_CloseNoCommit_lambda0_Invoke(__int64 result);
__int64 save_Task_Commit_lambda0_Invoke(__int64 result);
__int64 save_Task_SetSize_lambda0_Invoke(__int64 result);
__int64 save_Task_GetSize_lambda0_Invoke(__int64 result);
_QWORD* save_Task_Read_lambda0_Invoke(_QWORD* result);
__int64 save_Task_Write_lambda0_Invoke(_QWORD* a1);
__int64 save_Task_Delete_lambda0_Invoke(__int64 a1);
__int64 save_Task_DeleteNoCommit_lambda0_Invoke(__int64 a1);
__int64 save_Task_Func_lambda0_Invoke(__int64 result);
__int64 nn_fs_DeleteFile_alt1(const char*) __asm__("nn_fs_DeleteFile");
__int64 strcat_alt1(__int64, const char*) __asm__("strcat");
__int64 strcpy_alt1(__int64, const char*) __asm__("strcpy");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 nn_os_SendLightMessageQueue_alt1(__int64, unsigned __int64) __asm__(
    "nn_os_SendLightMessageQueue");
extern __int64 (*GameData_2109338[])();
extern __int64 (*GameData_21094b8[])();
extern __int64 (*GameData_2109538[])();
extern __int64 (*GameData_21095b8[])();
extern __int64 (*GameData_21096b8[])();
extern __int64 (*GameData_21097b8[])();
extern __int64 (*GameData_21098b8[])();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 save_Task_Mount(__int64 a1);
void save_Task_Open(__int64 a1, __int64 a2, char a3);
__int64 save_Task_Close(__int64 a1);
__int64 save_Task_CloseNoCommit(__int64 a1);
__int64 save_Task_Commit(__int64 a1);
__int64 save_Task_GetSize(__int64 a1, __int64 a2);
__int64 save_Task_Write(__int64 a1, __int64 a2, __int64 a3, __int64 a4);
void save_Task_DeleteNoCommit(__int64 a1, char* a2);

__int64 Task_Unknown2(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  *(_QWORD*)a1 = save_Task_vtable;
  nn_os_SendLightMessageQueue(a1 + 488, 0);
  nn_os_WaitThread(a1 + 32);
  *(_BYTE*)(a1 + 480) = 0;
  GameRoutine_19449a0(GameData_226b920, *(_QWORD*)(a1 + 8));
  *(_QWORD*)(a1 + 8) = 0;
  nn_os_DestroyThread(a1 + 32);
  v2 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (v2 != 0) {
    v3 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v3);
  }
  *(_QWORD*)(a1 + 16) = 0;
  result = nn_os_FinalizeLightMessageQueue(a1 + 488);
  v5 = *(_QWORD*)(a1 + 792);
  *(_QWORD*)(a1 + 792) = 0;
  if (v5 != 0) {
    if (*(_OWORD*)(v5 + 24) != 0) {
      nn_account_CloseUser(v5);
    }
    if ((*(_BYTE*)(v5 + 88) & 1) != 0 && *(_QWORD*)(v5 + 104) != 0) {
      v6 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v6);
    }
    if ((*(_BYTE*)(v5 + 56) & 1) != 0 && *(_QWORD*)(v5 + 72) != 0) {
      v7 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v7);
    }
    v8 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v8 = 56;
    }
    result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v8);
    v9 = *(_QWORD*)(a1 + 792);
    *(_QWORD*)(a1 + 792) = 0;
    if (v9 != 0) {
      if (*(_OWORD*)(v9 + 24) != 0) {
        nn_account_CloseUser(v9);
      }
      if ((*(_BYTE*)(v9 + 88) & 1) != 0 && *(_QWORD*)(v9 + 104) != 0) {
        v10 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v10 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v10);
      }
      if ((*(_BYTE*)(v9 + 56) & 1) != 0 && *(_QWORD*)(v9 + 72) != 0) {
        v11 = 128;
        if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v11);
      }
      v12 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v12 = 56;
      }
      result = nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v12);
    }
  }
  v13 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = base_thread_ExecutorBase_vtable;
  if (v13 != 0) {
    v14 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v14 = 56;
    }
    return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v14);
  }
  return result;
}

__int64 Task_Unknown4(__int64 a1)
{
  __int64 result;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;

  v9 = nullptr;
  result = nn_os_ReceiveLightMessageQueue(&v9, a1 + 488);
  v3 = v9;
  if (v9 != nullptr) {
    v4 = fw_memory_g_heap_manager_ptr;
    do {
      v7 = *(_QWORD*)((char*)GameRoutine_20 + (_QWORD)v3);
      if (v7 == 0) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(__int64))(*(_QWORD*)v7 + 48LL))(v7);
      v8 = *(_QWORD**)((char*)GameRoutine_20 + (_QWORD)v3);
      if (v8 == v3) {
        v5 = 32;
      }
      else {
        if (v8 == nullptr) {
          goto LABEL_5;
        }
        v5 = 40;
      }
      (*(void (**)(void*))(*v8 + v5))(v8);
    LABEL_5:
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
        v6 = 128;
      }
      else {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6);
      atomic_fetch_add((atomic_uint* volatile)(a1 + 804), 0xFFFFFFFF);
      v9 = nullptr;
      result = nn_os_ReceiveLightMessageQueue(&v9, a1 + 488);
      v3 = v9;
    } while (v9 != nullptr);
  }
  return result;
}

__int64 save_Task_Mount(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

  v6_.v6[0] = GameData_2109338;
  v6_.v6[1] = a1;
  v6_.v7 = v6_.v6;
  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v8_.v8[0] = GameData_2109338;
  v8_.v8[1] = a1;
  v8_.v9 = v8_.v8;
  GameRoutine_654050(v8_.v8, v2);
  if (v8_.v9 == v8_.v8) {
    v3 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v8_.v9 + v3))((__int64)v8_.v9);
LABEL_6:
  atomic_fetch_add((atomic_uint* volatile)(a1 + 804), 1u);
  nn_os_SendLightMessageQueue_alt1(a1 + 488, (unsigned __int64)v2);
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v5 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
}

void save_Task_Open(__int64 a1, __int64 a2, char a3)
{
  int v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _DWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    __int64 v18;
    unsigned __int64 v19;
    __int64 v20;
    int v21;
    char gap36_[4];
    __int64 v22;
  } v18_;
  struct {
    __int64 v23;
    unsigned __int64 v24;
    __int64 v25;
    int v26;
  } v23_;
  struct {
    _QWORD v27[4];
    _QWORD* v28;
  } v27_;

  v18_.v22 = a1;
  if ((a3 & 1) != 0) {
    v4 = 6;
  }
  else {
    v4 = 1;
  }
  if ((*(_BYTE*)a2 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v23_.v23, *(_QWORD*)(a2 + 16),
                                       *(_QWORD*)(a2 + 8));
    v6 = v18_.v22;
  }
  else {
    v5 = *(_QWORD*)(a2 + 8);
    v6 = a1;
    v23_.v23 = *(_QWORD*)a2;
    v23_.v24 = v5;
    v23_.v25 = *(_QWORD*)(a2 + 16);
  }
  v23_.v26 = v4;
  if ((v23_.v23 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v18_.v18, v23_.v25, v23_.v24);
    v4 = v23_.v26;
  }
  else {
    v18_.v18 = v23_.v23;
    v18_.v19 = v23_.v24;
    v18_.v20 = v23_.v25;
  }
  v18_.v21 = v4;
  v7 = fw_memory_g_heap_manager_ptr;
  v8 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v9 = v8;
  *v8 = GameData_2109438;
  v8[1] = v6;
  if ((v18_.v18 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v8 + 2, v18_.v20, v18_.v19);
    v4 = v18_.v21;
  }
  else {
    v10 = v18_.v19;
    v8[2] = v18_.v18;
    v8[3] = v10;
    v8[4] = v18_.v20;
  }
  v11 = *(_QWORD*)v7;
  v9[10] = v4;
  v12 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v11, 48, 16, 0);
  v13 = *(_QWORD*)v9;
  *v12 = 0;
  v12[1] = 0;
  v12[2] = 0;
  v12[3] = 0;
  v14 = v12;
  v12[4] = 0;
  v12[5] = 0;
  v27_.v28 = (_QWORD*)(*(__int64 (**)(_DWORD*))(v13 + 16))(v9);
  GameRoutine_654050(v27_.v27, v14);
  if (v27_.v28 == v27_.v27) {
    v15 = 32;
    goto LABEL_17;
  }
  if (v27_.v28 != nullptr) {
    v15 = 40;
  LABEL_17:
    (*(void (**)(__int64))(*v27_.v28 + v15))((__int64)v27_.v28);
  }
  atomic_fetch_add((atomic_uint* volatile)(a1 + 804), 1u);
  nn_os_SendLightMessageQueue_alt1(a1 + 488, (unsigned __int64)v14);
  (*(void (**)(_DWORD*))(*(_QWORD*)v9 + 40LL))(v9);
  if ((v18_.v18 & 1) != 0 && v18_.v20 != 0) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v16, v18_.v20);
  }
  if ((v23_.v23 & 1) != 0 && v23_.v25 != 0) {
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)v7 + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v7 + v17, v23_.v25);
  }
}

__int64 save_Task_Close(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

  v6_.v6[0] = GameData_21094b8;
  v6_.v6[1] = a1;
  v6_.v7 = v6_.v6;
  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v8_.v8[0] = GameData_21094b8;
  v8_.v8[1] = a1;
  v8_.v9 = v8_.v8;
  GameRoutine_654050(v8_.v8, v2);
  if (v8_.v9 == v8_.v8) {
    v3 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v8_.v9 + v3))((__int64)v8_.v9);
LABEL_6:
  atomic_fetch_add((atomic_uint* volatile)(a1 + 804), 1u);
  nn_os_SendLightMessageQueue_alt1(a1 + 488, (unsigned __int64)v2);
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v5 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
}

__int64 save_Task_CloseNoCommit(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

  v6_.v6[0] = GameData_2109538;
  v6_.v6[1] = a1;
  v6_.v7 = v6_.v6;
  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v8_.v8[0] = GameData_2109538;
  v8_.v8[1] = a1;
  v8_.v9 = v8_.v8;
  GameRoutine_654050(v8_.v8, v2);
  if (v8_.v9 == v8_.v8) {
    v3 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v8_.v9 + v3))((__int64)v8_.v9);
LABEL_6:
  atomic_fetch_add((atomic_uint* volatile)(a1 + 804), 1u);
  nn_os_SendLightMessageQueue_alt1(a1 + 488, (unsigned __int64)v2);
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v5 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
}

__int64 save_Task_Commit(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

  v6_.v6[0] = GameData_21095b8;
  v6_.v6[1] = a1;
  v6_.v7 = v6_.v6;
  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 0;
  v8_.v8[0] = GameData_21095b8;
  v8_.v8[1] = a1;
  v8_.v9 = v8_.v8;
  GameRoutine_654050(v8_.v8, v2);
  if (v8_.v9 == v8_.v8) {
    v3 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      goto LABEL_6;
    }
    v3 = 40;
  }
  (*(void (**)(__int64))(*v8_.v9 + v3))((__int64)v8_.v9);
LABEL_6:
  atomic_fetch_add((atomic_uint* volatile)(a1 + 804), 1u);
  nn_os_SendLightMessageQueue_alt1(a1 + 488, (unsigned __int64)v2);
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v5 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (*(__int64 (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
}

__int64 save_Task_GetSize(__int64 a1, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  struct {
    __int64 (**v10)();
    __int64 v11;
    __int64 v12;
    char gap24_[8];
    __int64 (***v13)();
  } v10_;
  struct {
    _QWORD v14[4];
    _QWORD* v15;
  } v14_;

  v10_.v12 = a2;
  v10_.v10 = GameData_21096b8;
  v10_.v11 = a1;
  v10_.v13 = &v10_.v10;
  v3 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v4 = v10_.v11;
  v5 = v10_.v12;
  v6 = (unsigned __int64)v3;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v14_.v15 = v14_.v14;
  v14_.v14[0] = GameData_21096b8;
  v14_.v14[1] = v4;
  v14_.v14[2] = v5;
  GameRoutine_654050(v14_.v14, v3);
  if (v14_.v15 == v14_.v14) {
    v7 = 32;
  }
  else {
    if (v14_.v15 == nullptr) {
      goto LABEL_6;
    }
    v7 = 40;
  }
  (*(void (**)(__int64))(*v14_.v15 + v7))((__int64)v14_.v15);
LABEL_6:
  atomic_fetch_add((atomic_uint* volatile)(a1 + 804), 1u);
  nn_os_SendLightMessageQueue_alt1(a1 + 488, v6);
  result = (__int64)v10_.v13;
  if (v10_.v13 == &v10_.v10) {
    v9 = 4;
  }
  else {
    if (v10_.v13 == nullptr) {
      return result;
    }
    v9 = 5;
  }
  return ((__int64 (*)(__int64))(*v10_.v13)[v9])((__int64)v10_.v13);
}

__int64 save_Task_Write(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  struct {
    _QWORD v19[4];
    _QWORD* v20;
  } v19_;

  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v9[2] = a2;
  v9[3] = a3;
  v9[4] = a4;
  *v9 = GameData_21097b8;
  v9[1] = a1;
  v10 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v8, 48, 16, 0);
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v11 = *v8;
  v10[4] = 0;
  v10[5] = 0;
  v12 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(v11, 40, 16, 0);
  v13 = v9[1];
  v14 = v9[2];
  v19_.v20 = v12;
  *v12 = GameData_21097b8;
  v12[1] = v13;
  v15 = v9[3];
  v16 = v9[4];
  v12[2] = v14;
  v12[3] = v15;
  v12[4] = v16;
  GameRoutine_654050(v19_.v19, v10);
  if (v19_.v20 == v19_.v19) {
    v17 = 32;
    goto LABEL_5;
  }
  if (v19_.v20 != nullptr) {
    v17 = 40;
  LABEL_5:
    (*(void (**)(__int64))(*v19_.v20 + v17))((__int64)v19_.v20);
  }
  atomic_fetch_add((atomic_uint* volatile)(a1 + 804), 1u);
  nn_os_SendLightMessageQueue_alt1(a1 + 488, (unsigned __int64)v10);
  return (*(__int64 (**)(_QWORD*))(*v9 + 40LL))(v9);
}

void save_Task_DeleteNoCommit(__int64 a1, char* a2)
{
  char v2;
  unsigned __int64 v4;
  __int64 v5;
  __int64* v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  _QWORD* v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64 v16;
    unsigned __int64 v17;
    __int64 v18;
    __int64 v19;
  } v16_;
  struct {
    __int64 v20;
    unsigned __int64 v21;
    __int64 v22;
  } v20_;
  struct {
    _QWORD v23[4];
    _QWORD* v24;
  } v23_;

  v2 = *a2;
  v16_.v19 = a1;
  if ((v2 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v20_.v20, *((_QWORD*)a2 + 2),
                                       *((_QWORD*)a2 + 1));
    v5 = v16_.v19;
  }
  else {
    v4 = *((_QWORD*)a2 + 1);
    v5 = a1;
    v20_.v20 = *(_QWORD*)a2;
    v20_.v21 = v4;
    v20_.v22 = *((_QWORD*)a2 + 2);
  }
  if ((v20_.v20 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(&v16_.v16, v20_.v22, v20_.v21);
  }
  else {
    v16_.v16 = v20_.v20;
    v16_.v17 = v20_.v21;
    v16_.v18 = v20_.v22;
  }
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
  v8 = v7;
  *v7 = GameData_21098b8;
  v7[1] = v5;
  if ((v16_.v16 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v7 + 2, v16_.v18, v16_.v17);
  }
  else {
    v9 = v16_.v17;
    v7[2] = v16_.v16;
    v7[3] = v9;
    v7[4] = v16_.v18;
  }
  v10 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(*v6, 48, 16, 0);
  v11 = *v8;
  *v10 = 0;
  v10[1] = 0;
  v10[2] = 0;
  v10[3] = 0;
  v12 = v10;
  v10[4] = 0;
  v10[5] = 0;
  v23_.v24 = (_QWORD*)(*(__int64 (**)(_QWORD*))(v11 + 16))(v8);
  GameRoutine_654050(v23_.v23, v12);
  if (v23_.v24 == v23_.v23) {
    v13 = 32;
    goto LABEL_14;
  }
  if (v23_.v24 != nullptr) {
    v13 = 40;
  LABEL_14:
    (*(void (**)(__int64))(*v23_.v24 + v13))((__int64)v23_.v24);
  }
  atomic_fetch_add((atomic_uint* volatile)(a1 + 804), 1u);
  nn_os_SendLightMessageQueue_alt1(a1 + 488, (unsigned __int64)v12);
  (*(void (**)(_QWORD*))(*v8 + 40LL))(v8);
  if ((v16_.v16 & 1) != 0 && v16_.v18 != 0) {
    v14 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v14 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v14, v16_.v18);
  }
  if ((v20_.v20 & 1) != 0 && v20_.v22 != 0) {
    v15 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v15 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v6 + v15, v20_.v22);
  }
}

__int64 save_Task_Unmount_lambda0_Invoke(__int64 result)
{
  __int64 v1;
  int v2;
  unsigned __int64 v3;
  unsigned __int64 v4;
  __int64 v5;

  v1 = *(_QWORD*)(*(_QWORD*)(result + 8) + 792LL);
  v2 = atomic_load((unsigned __int8*)(v1 + 81));
  if (v2 == 1) {
    v3 = *(unsigned __int8*)(v1 + 56);
    v4 = *(_QWORD*)(v1 + 64);
    if ((v3 & 1) == 0) {
      v4 = v3 >> 1;
    }
    if (v4 != 0) {
      if ((v3 & 1) != 0) {
        v5 = *(_QWORD*)(v1 + 72);
      }
      else {
        v5 = v1 + 57;
      }
      result = nn_fs_Unmount(v5);
    }
  }
  if ((*(_BYTE*)(v1 + 56) & 1) != 0) {
    **(_BYTE**)(v1 + 72) = 0;
    *(_QWORD*)(v1 + 64) = 0;
  }
  else {
    *(_WORD*)(v1 + 56) = 0;
  }
  *(_BYTE*)(v1 + 80) = 0;
  atomic_store(0, (unsigned __int8*)(v1 + 81));
  return result;
}

__int64 save_Task_Open_lambda0_Clone(__int64 a1)
{
  __int64 result;
  char v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  result = fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
  v3 = *(_BYTE*)(a1 + 16);
  v4 = *(_QWORD*)(a1 + 8);
  *(_QWORD*)result = GameData_2109438;
  *(_QWORD*)(result + 8) = v4;
  if ((v3 & 1) != 0) {
    v7 = result;
    fw_text_String_CopyTerminated(result + 16, *(_QWORD*)(a1 + 32));
    result = v7;
  }
  else {
    v5 = *(_QWORD*)(a1 + 24);
    v6 = *(_QWORD*)(a1 + 32);
    *(_QWORD*)(result + 16) = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(result + 24) = v5;
    *(_QWORD*)(result + 32) = v6;
  }
  *(_DWORD*)(result + 40) = *(_DWORD*)(a1 + 40);
  return result;
}

_QWORD* save_Task_Open_lambda0_CloneInto(_QWORD* result, __int64 a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;

  v3 = result;
  *(_QWORD*)a2 = GameData_2109438;
  *(_QWORD*)(a2 + 8) = result[1];
  if ((result[2] & 1) != 0) {
    result = (_QWORD*)fw_text_String_CopyTerminated(a2 + 16, result[4]);
  }
  else {
    v4 = result[2];
    v5 = result[4];
    *(_QWORD*)(a2 + 24) = result[3];
    *(_QWORD*)(a2 + 32) = v5;
    *(_QWORD*)(a2 + 16) = v4;
  }
  *(_DWORD*)(a2 + 40) = *((_DWORD*)v3 + 10);
  return result;
}

__int64 save_Task_Open_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 32);
  }
  else {
    v2 = a1 + 17;
  }
  result =
      GameRoutine_656f20(*(_QWORD*)(v1 + 792), v2, *(unsigned int*)(a1 + 40));
  *(_DWORD*)(v1 + 800) = result;
  *(_QWORD*)(v1 + 808) = 0;
  return result;
}

__int64 save_Task_Close_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 8);
  result = GameRoutine_657150(*(_QWORD*)(v1 + 792));
  *(_DWORD*)(v1 + 800) = result;
  *(_QWORD*)(v1 + 808) = 0;
  return result;
}

__int64 save_Task_CloseNoCommit_lambda0_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;
  char v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(v1 + 792);
  if (*(_BYTE*)(v2 + 82) == 1) {
    result = nn_fs_CloseFile(*(_QWORD*)(v2 + 40));
    v3 = *(_BYTE*)(v2 + 80);
    *(_QWORD*)(v2 + 40) = 0;
    *(_BYTE*)(v2 + 82) = 0;
    if ((v3 & 1) == 0) {
      v4 = *(unsigned __int8*)(v2 + 88);
      v5 = *(_QWORD*)(v2 + 96);
      if ((v4 & 1) == 0) {
        v5 = v4 >> 1;
      }
      if (v5 != 0) {
        if ((v4 & 1) != 0) {
          v6 = *(_QWORD*)(v2 + 104);
        }
        else {
          v6 = v2 + 89;
        }
        result = nn_fs_DeleteFile(v6);
      }
    }
    if ((*(_BYTE*)(v2 + 88) & 1) != 0) {
      **(_BYTE**)(v2 + 104) = 0;
      *(_QWORD*)(v2 + 96) = 0;
    }
    else {
      *(_WORD*)(v2 + 88) = 0;
    }
  }
  *(_DWORD*)(v1 + 800) = *(_DWORD*)(v2 + 48);
  return result;
}

__int64 save_Task_Commit_lambda0_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(v1 + 792);
  if (*(_BYTE*)(v2 + 83) == 1) {
    if (*(_DWORD*)(v2 + 48) == 0 && (*(_BYTE*)(v2 + 80) & 1) != 0) {
      if ((*(_BYTE*)(v2 + 56) & 1) != 0) {
        v3 = *(_QWORD*)(v2 + 72);
      }
      else {
        v3 = v2 + 57;
      }
      result = nn_fs_Commit(v3);
    }
    *(_BYTE*)(v2 + 83) = 0;
  }
  *(_DWORD*)(v1 + 800) = *(_DWORD*)(v2 + 48);
  return result;
}

__int64 save_Task_SetSize_lambda0_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(v1 + 792);
  v3 = *(_DWORD*)(v2 + 48);
  if (v3 == 0) {
    result = nn_fs_SetFileSize(*(_QWORD*)(v2 + 40), *(_QWORD*)(result + 16));
    v3 = result;
    *(_DWORD*)(v2 + 48) = result;
  }
  *(_DWORD*)(v1 + 800) = v3;
  return result;
}

__int64 save_Task_GetSize_lambda0_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;
  int v3;

  v1 = *(_QWORD*)(result + 8);
  v2 = *(_QWORD*)(v1 + 792);
  v3 = *(_DWORD*)(v2 + 48);
  if (v3 == 0) {
    result = nn_fs_GetFileSize(*(_QWORD*)(result + 16), *(_QWORD*)(v2 + 40));
    v3 = *(_DWORD*)(v2 + 48);
  }
  *(_DWORD*)(v1 + 800) = v3;
  return result;
}

_QWORD* save_Task_Read_lambda0_Invoke(_QWORD* result)
{
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = result[1];
  v2 = result[3];
  v3 = result;
  if (v2 == -1) {
    v2 = *(_QWORD*)(v1 + 808);
  }
  else {
    *(_QWORD*)(v1 + 808) = v2;
  }
  v4 = *(_QWORD*)(v1 + 792);
  v5 = *(_DWORD*)(v4 + 48);
  if (v5 == 0) {
    v6 = result[4];
    v7 = result[2];
    v8 = *(_QWORD*)(v4 + 40);
    v9 = 0;
    result = (_QWORD*)nn_fs_ReadFile_1a0a620(&v9, v8, v2, v7, v6);
    v5 = *(_DWORD*)(v4 + 48);
    v2 = *(_QWORD*)(v1 + 808);
  }
  *(_DWORD*)(v1 + 800) = v5;
  *(_QWORD*)(v1 + 808) = v2 + v3[4];
  return result;
}

__int64 save_Task_Write_lambda0_Invoke(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  char v9;
  int v10;

  v1 = a1[1];
  v2 = a1[3];
  if (v2 == -1) {
    v2 = *(_QWORD*)(v1 + 808);
  }
  else {
    *(_QWORD*)(v1 + 808) = v2;
  }
  v4 = *(_QWORD*)(v1 + 792);
  result = *(unsigned int*)(v4 + 48);
  if ((_DWORD)result == 0) {
    v6 = a1[4];
    v7 = a1[2];
    v8 = *(_QWORD*)(v4 + 40);
    v10 = 1;
    result = nn_fs_WriteFile(v8, v2, v7, v6, &v10);
    v9 = *(_BYTE*)(v4 + 88);
    *(_DWORD*)(v4 + 48) = result;
    if ((v9 & 1) != 0) {
      **(_BYTE**)(v4 + 104) = 0;
      *(_QWORD*)(v4 + 96) = 0;
      result = *(unsigned int*)(v4 + 48);
    }
    else {
      *(_WORD*)(v4 + 88) = 0;
    }
    *(_BYTE*)(v4 + 83) = (_DWORD)result == 0;
    v2 = *(_QWORD*)(v1 + 808);
  }
  *(_DWORD*)(v1 + 800) = result;
  *(_QWORD*)(v1 + 808) = v2 + a1[4];
  return result;
}

__int64 save_Task_Delete_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 result;

  v1 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v2 = *(_QWORD*)(a1 + 32);
  }
  else {
    v2 = a1 + 17;
  }
  result = GameRoutine_657220(*(_QWORD*)(v1 + 792), v2);
  *(_DWORD*)(v1 + 800) = result;
  return result;
}

__int64 save_Task_DeleteNoCommit_lambda0_Invoke(__int64 a1)
{
  __int64 v1;
  char v2;
  const char* v3;
  __int64 v4;
  int v5;
  const char* v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  const char* v11;
  const char* v12;
  const char* v13;
  __int64 result;
  _QWORD v15[32];

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_BYTE*)(a1 + 16);
  v3 = *(const char**)(a1 + 32);
  v4 = *(_QWORD*)(v1 + 792);
  v5 = atomic_load((unsigned __int8*)(v4 + 81));
  if (v5 == 1) {
    memset(&v15[28], 0, 32);
    if ((v2 & 1) != 0) {
      v6 = v3;
    }
    else {
      v6 = (const char*)(a1 + 17);
    }
    memset(&v15[6], 0, 176);
    v7 = *(unsigned __int8*)(v4 + 56);
    v8 = v7 >> 1;
    v9 = (v7 & 1) == 0;
    v10 = *(_QWORD*)(v4 + 64);
    v11 = *(const char**)(v4 + 72);
    v12 = (const char*)(v4 + 57);
    if (v9) {
      v10 = v8;
    }
    else {
      v12 = v11;
    }
    memset(v15, 0, 48);
    if (v10 != 0) {
      v13 = v12;
    }
    else {
      v13 = &GameData_1a9f09e;
    }
    strcpy_alt1((__int64)v15, v13);
    __builtin_strcpy((char*)v15 + strlen_alt1((const char*)v15), ":/");
    strcat_alt1((__int64)v15, v6);
    result = nn_fs_DeleteFile_alt1((const char*)v15);
  }
  else {
    result = 514;
  }
  *(_DWORD*)(v1 + 800) = result;
  return result;
}

__int64 save_Task_Func_lambda0_Invoke(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(result + 16);
  if (*(_DWORD*)(v1 + 800) == 0) {
    v2 = *(_QWORD*)(result + 64);
    v3 = *(_QWORD*)(v1 + 792);
    if (v2 == 0) {
      GameRoutine_60a310(0);
    }
    return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v2 + 48LL))(v2, &v3);
  }
  return result;
}

#pragma GCC visibility pop
