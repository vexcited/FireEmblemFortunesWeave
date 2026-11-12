#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_os_ClearSystemEvent(_QWORD);
__int64 nn_os_ConvertToTimeSpan(_QWORD);
__int64 nn_os_GetMultiWaitHolderUserData(_QWORD);
__int64 nn_os_GetSystemTick(_QWORD);
__int64 nn_os_SignalEvent(_QWORD);
__int64 nn_os_SleepThread(_QWORD);
__int64 nn_os_StartThread(_QWORD);
__int64 nn_os_WaitAny(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 MovieEventHandler_18cbc40(__int64 a1);
__int64 MovieEventHandler_18cc080(__int64 a1);
__int64 omovie_MovieEventHandler_Initialize_lambda0_Invoke(__int64 a1);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_os_InitializeMultiWaitHolder_1a0b230(__int64, __int64);
__int64 nn_os_InitializeMultiWaitHolder_1a0b240(__int64, __int64);
__int64 nn_os_LinkMultiWaitHolder(__int64, __int64);
__int64 nn_os_SetMultiWaitHolderUserData(__int64, unsigned __int64);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_18cc140();
void __attribute__((noreturn)) GameRoutine_18cc160();
void __attribute__((noreturn)) GameRoutine_60a210();
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 MovieEventHandler_18cb930(_QWORD* a1, __int64 a2, __int64 a3);
__int64 MovieEventHandler_18cbd60(_QWORD* a1, __int64 a2, __int64 a3);

__int64 MovieEventHandler_18cb930(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  struct {
    _QWORD v43[4];
    _QWORD* v44;
  } v43_;

  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  if (v7 == nullptr) {
    return 17;
  }
  v7[6] = 0;
  v7[7] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v8 = v7;
  v7[2] = 0;
  v7[3] = 0;
  *v7 = 0;
  v7[1] = 0;
  v9 = *(_QWORD*)(a3 + 32);
  if (v9 != 0) {
    if (v9 == a3) {
      v43_.v44 = v43_.v43;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v9 + 24LL))(v9, v43_.v43);
    }
    else {
      v43_.v44 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    }
  }
  else {
    v43_.v44 = nullptr;
  }
  GameRoutine_654050(v43_.v43, v8);
  if (v43_.v44 == v43_.v43) {
    v10 = 32;
  }
  else {
    if (v43_.v44 == nullptr) {
      goto LABEL_12;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v43_.v44 + v10))((__int64)v43_.v44);
LABEL_12:
  v11 = (_QWORD*)a1[74];
  v12 = a1[75];
  if ((unsigned __int64)v11 >= v12) {
    v14 = a1[73];
    v15 = (char*)v11 - v14;
    v16 = ((__int64)v11 - v14) >> 3;
    v17 = v16 + 1;
    if ((unsigned __int64)(v16 + 1) >> 61 != 0) {
      GameRoutine_18cc140();
    }
    v18 = v12 - v14;
    if (v18 >> 2 > v17) {
      v17 = v18 >> 2;
    }
    if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
      v19 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v19 = v17;
    }
    if (v19 != 0) {
      if (v19 >> 61 != 0) {
        goto LABEL_48;
      }
      v20 = fw_memory_HeapManager_Allocate(*v6, 8 * v19, 16, 0);
    }
    else {
      v20 = 0;
    }
    v21 = v20 + 8 * v19;
    v22 = (unsigned __int64)v11 - v14;
    v23 = (__int64)&v15[v20 + -8 * v16];
    *(_QWORD*)&v15[v20] = v8;
    v13 = (__int64)&v15[v20 + 8];
    memcpy(v23, v14, v22);
    a1[73] = v23;
    a1[74] = v13;
    a1[75] = v21;
    if (v14 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v24, v14);
    }
  }
  else {
    *v11 = v8;
    v13 = (__int64)(v11 + 1);
  }
  v25 = *v6;
  a1[74] = v13;
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate(v25, 64, 16, 0);
  if (v26 == nullptr) {
    return 17;
  }
  v26[6] = 0;
  v26[7] = 0;
  v26[4] = 0;
  v26[5] = 0;
  v27 = (__int64)v26;
  v26[2] = 0;
  v26[3] = 0;
  *v26 = 0;
  v26[1] = 0;
  v28 = (_QWORD*)a1[77];
  v29 = a1[78];
  if ((unsigned __int64)v28 >= v29) {
    v32 = a1[76];
    v33 = (char*)v28 - v32;
    v34 = ((__int64)v28 - v32) >> 3;
    v35 = v34 + 1;
    if ((unsigned __int64)(v34 + 1) >> 61 != 0) {
      GameRoutine_18cc160();
    }
    v36 = v29 - v32;
    if (v36 >> 2 > v35) {
      v35 = v36 >> 2;
    }
    if ((unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFF8LL) {
      v37 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v37 = v35;
    }
    if (v37 == 0) {
      v38 = 0;
    LABEL_42:
      v39 = v38 + 8 * v37;
      v40 = (unsigned __int64)v28 - v32;
      v41 = (__int64)&v33[v38 + -8 * v34];
      *(_QWORD*)&v33[v38] = v27;
      v30 = (__int64)&v33[v38 + 8];
      memcpy(v41, v32, v40);
      a1[76] = v41;
      a1[77] = v30;
      a1[78] = v39;
      if (v32 != 0) {
        v42 = 128;
        if (*(_QWORD*)(*v6 + 200) == 0) {
          v42 = 56;
        }
        nn_mem_StandardAllocator_Free(*v6 + v42, v32);
      }
      goto LABEL_46;
    }
    if (v37 >> 61 == 0) {
      v38 = fw_memory_HeapManager_Allocate(*v6, 8 * v37, 16, 0);
      goto LABEL_42;
    }
  LABEL_48:
    GameRoutine_60a210();
  }
  *v28 = v26;
  v30 = (__int64)(v28 + 1);
LABEL_46:
  a1[77] = v30;
  nn_os_InitializeMultiWaitHolder_1a0b230(v27, a2);
  nn_os_SetMultiWaitHolderUserData(v27, (unsigned __int64)v8);
  nn_os_LinkMultiWaitHolder((__int64)a1, v27);
  return 0;
}

__int64 MovieEventHandler_18cbc40(__int64 a1)
{
  __int64 v2;
  __int64 result;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _BYTE v8[32];
  _BYTE* v9;

  atomic_store(1u, (unsigned __int8*)(a1 + 57));
  do {
    v5 = nn_os_WaitAny(a1);
    result = nn_os_GetMultiWaitHolderUserData(v5);
    if (result != 0) {
      v6 = result;
      v7 = *(_QWORD*)(result + 32);
      if (v7 != 0) {
        if (v7 == v6) {
          v9 = v8;
          (*(void (**)(_QWORD, _BYTE*))(**(_QWORD**)(v6 + 32) + 24LL))(
              *(_QWORD*)(v6 + 32), v8);
        }
        else {
          v9 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
        }
      }
      else {
        v9 = nullptr;
      }
      if (*(_BYTE*)(v6 + 48) == 1) {
        nn_os_ClearSystemEvent(*(_QWORD*)(v6 + 56));
      }
      if (v9 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_BYTE*))(*(_QWORD*)v9 + 48LL))(v9);
      result = (__int64)v9;
      if (v9 == v8) {
        v2 = 32;
      LABEL_3:
        result = (*(__int64 (**)(void*))(*(_QWORD*)v9 + v2))((void*)v9);
        goto LABEL_4;
      }
      if (v9 != nullptr) {
        v2 = 40;
        goto LABEL_3;
      }
    }
  LABEL_4:
    v4 = atomic_load((unsigned __int8*)(a1 + 536));
  } while (v4 != 1);
  return result;
}

__int64 MovieEventHandler_18cbd60(_QWORD* a1, __int64 a2, __int64 a3)
{
  __int64* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned __int64* v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  _QWORD* v26;
  __int64 v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v32;
  char* v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  __int64 v42;
  struct {
    _QWORD v43[4];
    _QWORD* v44;
  } v43_;

  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  v7 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  if (v7 == nullptr) {
    return 17;
  }
  v7[6] = 0;
  v7[7] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v8 = (unsigned __int64)v7;
  v7[2] = 0;
  v7[3] = 0;
  *v7 = 0;
  v7[1] = 0;
  v9 = *(_QWORD*)(a3 + 32);
  if (v9 != 0) {
    if (v9 == a3) {
      v43_.v44 = v43_.v43;
      (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v9 + 24LL))(v9, v43_.v43);
    }
    else {
      v43_.v44 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    }
  }
  else {
    v43_.v44 = nullptr;
  }
  GameRoutine_654050(v43_.v43, (_QWORD*)v8);
  if (v43_.v44 == v43_.v43) {
    v10 = 32;
  }
  else {
    if (v43_.v44 == nullptr) {
      goto LABEL_12;
    }
    v10 = 40;
  }
  (*(void (**)(__int64))(*v43_.v44 + v10))((__int64)v43_.v44);
LABEL_12:
  *(_QWORD*)(v8 + 56) = a2;
  *(_BYTE*)(v8 + 48) = 1;
  v11 = (unsigned __int64*)a1[74];
  v12 = a1[75];
  if ((unsigned __int64)v11 >= v12) {
    v14 = a1[73];
    v15 = (char*)v11 - v14;
    v16 = ((__int64)v11 - v14) >> 3;
    v17 = v16 + 1;
    if ((unsigned __int64)(v16 + 1) >> 61 != 0) {
      GameRoutine_18cc140();
    }
    v18 = v12 - v14;
    if (v18 >> 2 > v17) {
      v17 = v18 >> 2;
    }
    if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
      v19 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v19 = v17;
    }
    if (v19 != 0) {
      if (v19 >> 61 != 0) {
        goto LABEL_48;
      }
      v20 = fw_memory_HeapManager_Allocate(*v6, 8 * v19, 16, 0);
    }
    else {
      v20 = 0;
    }
    v21 = v20 + 8 * v19;
    v22 = (unsigned __int64)v11 - v14;
    v23 = (__int64)&v15[v20 + -8 * v16];
    *(_QWORD*)&v15[v20] = v8;
    v13 = (__int64)&v15[v20 + 8];
    memcpy(v23, v14, v22);
    a1[73] = v23;
    a1[74] = v13;
    a1[75] = v21;
    if (v14 != 0) {
      v24 = 128;
      if (*(_QWORD*)(*v6 + 200) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v24, v14);
    }
  }
  else {
    *v11 = v8;
    v13 = (__int64)(v11 + 1);
  }
  v25 = *v6;
  a1[74] = v13;
  v26 = (_QWORD*)fw_memory_HeapManager_Allocate(v25, 64, 16, 0);
  if (v26 == nullptr) {
    return 17;
  }
  v26[6] = 0;
  v26[7] = 0;
  v26[4] = 0;
  v26[5] = 0;
  v27 = (__int64)v26;
  v26[2] = 0;
  v26[3] = 0;
  *v26 = 0;
  v26[1] = 0;
  v28 = (_QWORD*)a1[77];
  v29 = a1[78];
  if ((unsigned __int64)v28 >= v29) {
    v32 = a1[76];
    v33 = (char*)v28 - v32;
    v34 = ((__int64)v28 - v32) >> 3;
    v35 = v34 + 1;
    if ((unsigned __int64)(v34 + 1) >> 61 != 0) {
      GameRoutine_18cc160();
    }
    v36 = v29 - v32;
    if (v36 >> 2 > v35) {
      v35 = v36 >> 2;
    }
    if ((unsigned __int64)v36 >= 0x7FFFFFFFFFFFFFF8LL) {
      v37 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v37 = v35;
    }
    if (v37 == 0) {
      v38 = 0;
    LABEL_42:
      v39 = v38 + 8 * v37;
      v40 = (unsigned __int64)v28 - v32;
      v41 = (__int64)&v33[v38 + -8 * v34];
      *(_QWORD*)&v33[v38] = v27;
      v30 = (__int64)&v33[v38 + 8];
      memcpy(v41, v32, v40);
      a1[76] = v41;
      a1[77] = v30;
      a1[78] = v39;
      if (v32 != 0) {
        v42 = 128;
        if (*(_QWORD*)(*v6 + 200) == 0) {
          v42 = 56;
        }
        nn_mem_StandardAllocator_Free(*v6 + v42, v32);
      }
      goto LABEL_46;
    }
    if (v37 >> 61 == 0) {
      v38 = fw_memory_HeapManager_Allocate(*v6, 8 * v37, 16, 0);
      goto LABEL_42;
    }
  LABEL_48:
    GameRoutine_60a210();
  }
  *v28 = v26;
  v30 = (__int64)(v28 + 1);
LABEL_46:
  a1[77] = v30;
  nn_os_InitializeMultiWaitHolder_1a0b240(v27, a2);
  nn_os_SetMultiWaitHolderUserData(v27, v8);
  nn_os_LinkMultiWaitHolder((__int64)a1, v27);
  return 0;
}

__int64 MovieEventHandler_18cc080(__int64 a1)
{
  __int64 started;
  __int64 SystemTickEv;
  __int64 v4;
  unsigned __int8 v5;
  __int64 v6;
  __int64 v7;
  int v8;

  started = nn_os_StartThread(a1 + 88);
  SystemTickEv = nn_os_GetSystemTick(started);
  v4 = nn_os_ConvertToTimeSpan(SystemTickEv) / -1000000;
  do {
    v5 = atomic_load((unsigned __int8*)(a1 + 57));
    if ((v5 & 1) != 0) {
      break;
    }
    v6 = nn_os_SleepThread(1000000LL * *(int*)(a1 + 60));
    v7 = nn_os_GetSystemTick(v6);
  } while (nn_os_ConvertToTimeSpan(v7) / 1000000 + v4 < *(int*)(a1 + 64));
  v8 = atomic_load((unsigned __int8*)(a1 + 57));
  if (v8 != 0) {
    return 0;
  }
  else {
    return 18;
  }
}

__int64 omovie_MovieEventHandler_Initialize_lambda0_Invoke(__int64 a1)
{
  __int64 v1;

  v1 = *(_QWORD*)(a1 + 8);
  atomic_store(1u, (unsigned __int8*)(v1 + 536));
  return nn_os_SignalEvent(v1 + 544);
}

#pragma GCC visibility pop
