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
      (*(void (**)(void))(*v8 + v5))();
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
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  bool v9;
  unsigned __int64 v10;
  char* v11;
  char* v12;
  char* v13;
  __int64 result;
  _QWORD v15[32];

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *(_BYTE*)(a1 + 16);
  v3 = *(_QWORD*)(a1 + 32);
  v4 = *(_QWORD*)(v1 + 792);
  v5 = atomic_load((unsigned __int8*)(v4 + 81));
  if (v5 == 1) {
    memset(&v15[28], 0, 32);
    if ((v2 & 1) != 0) {
      v6 = v3;
    }
    else {
      v6 = a1 + 17;
    }
    memset(&v15[6], 0, 176);
    v7 = *(unsigned __int8*)(v4 + 56);
    v8 = v7 >> 1;
    v9 = (v7 & 1) == 0;
    v10 = *(_QWORD*)(v4 + 64);
    v11 = *(char**)(v4 + 72);
    v12 = (char*)(v4 + 57);
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
    strcpy(v15, v13);
    strcpy((char*)v15 + strlen(v15), ":/");
    strcat(v15, v6);
    result = nn_fs_DeleteFile(v15);
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
