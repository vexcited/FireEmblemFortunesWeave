#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_14a06a0(float);
__int64 GameRoutine_19449a0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_ClearThreadCache(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_ClearLightEvent(_QWORD);
__int64 nn_os_DestroyThread(_QWORD);
__int64 nn_os_FinalizeLightEvent(_QWORD);
__int64 nn_os_SignalLightEvent(_QWORD);
__int64 nn_os_WaitLightEvent(_QWORD);
__int64 nn_os_WaitThread(_QWORD);
extern __int64 (*base_thread_ExecutorBase_vtable[])();
extern __int64 GameData_226b920;
extern __int64 fw_memory_g_heap_manager;
__int64 Executor_Unknown2(__int64 a1);
__int64 Executor_Unknown4(__int64 a1);
__int64 GameRoutine_64dfe0(void);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) String_60a250(_QWORD);
__int64 Executor_19449a0(_QWORD* a1, __int64 a2);

__int64 Executor_Unknown2(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v5;
  __int64 v6;

  nn_os_WaitLightEvent(a1 + 496);
  *(_QWORD*)(a1 + 512) = 0;
  *(_DWORD*)(a1 + 520) = 0;
  nn_os_ClearLightEvent(a1 + 496);
  nn_os_SignalLightEvent(a1 + 484);
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
  nn_os_FinalizeLightEvent(a1 + 484);
  result = nn_os_FinalizeLightEvent(a1 + 496);
  v5 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)a1 = base_thread_ExecutorBase_vtable;
  if (v5 != 0) {
    v6 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v6 = 56;
    }
    return nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v6);
  }
  return result;
}

__int64 Executor_Unknown4(__int64 a1)
{
  __int64 result;

  nn_os_WaitLightEvent(a1 + 484);
  for (result = *(_QWORD*)(a1 + 512); result != 0;
       result = *(_QWORD*)(a1 + 512)) {
    GameRoutine_14a06a0(*(float*)(a1 + 520));
    if (*(_QWORD*)(fw_memory_g_heap_manager + 760) != 0) {
      nn_mem_StandardAllocator_ClearThreadCache(fw_memory_g_heap_manager + 688);
    }
    nn_os_SignalLightEvent(a1 + 496);
    nn_os_WaitLightEvent(a1 + 484);
  }
  return result;
}

__int64 Executor_19449a0(_QWORD* a1, __int64 a2)
{
  _QWORD* v4;
  __int64 v5;
  int v6;
  _BOOL4 v7;
  bool v8;
  __int64 v9;
  int v10;
  bool v11;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  _QWORD* v19;
  _QWORD* v20;
  _QWORD* v21;
  __int64 v23;
  _QWORD* v24;
  _QWORD* v25;
  _QWORD* v26;
  _QWORD* v27;
  _QWORD* v29;
  _QWORD* v30;
  _QWORD* v31;
  _QWORD* v32;
  _QWORD* v33;
  __int64 v34;
  unsigned __int64 v35;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;

  nn_os_LockMutex(a1);
  if (a1[5] != 0) {
    v4 = a1 + 5;
    v5 = a1[5];
    do {
      v6 = *(_DWORD*)(v5 + 32);
      v8 = v6 == (_DWORD)a2;
      v7 = v6 < (int)a2;
      if (v8) {
        v7 = *(_DWORD*)(v5 + 36) < SHIDWORD(a2);
      }
      v8 = !v7;
      if (v7) {
        v9 = 8;
      }
      else {
        v9 = 0;
      }
      if (v8) {
        v4 = (_QWORD*)v5;
      }
      v5 = *(_QWORD*)(v5 + v9);
    } while (v5 != 0);
    if (v4 != a1 + 5) {
      v10 = *((_DWORD*)v4 + 8);
      v8 = v10 == (_DWORD)a2;
      v11 = v10 > (int)a2;
      if (v8) {
        v11 = *((_DWORD*)v4 + 9) > SHIDWORD(a2);
      }
      if (!v11) {
        v12 = (_QWORD*)v4[1];
        if (v12 != nullptr) {
          do {
            v13 = v12;
            v12 = (_QWORD*)*v12;
          } while (v12 != nullptr);
        }
        else {
          v14 = v4;
          do {
            v13 = (_QWORD*)v14[2];
            v8 = v14 == (_QWORD*)*v13;
            v14 = v13;
          } while (!v8);
        }
        if ((_QWORD*)a1[4] == v4) {
          a1[4] = v13;
        }
        --a1[6];
        GameRoutine_64dfe0();
        v15 = fw_memory_g_heap_manager_ptr;
        v16 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v16 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v16);
        if ((unsigned int)a2 >> 29 == 3) {
          v17 = (_QWORD*)v4[5];
          v18 = (_QWORD*)a1[8];
          v19 = a1 + 7;
          v39 = 0;
          v37 = &v37;
          v38 = &v37;
          if (v18 != a1 + 7) {
            if (&v37 == v19) {
              v20 = &v37;
              do {
                v27 = (_QWORD*)v18[1];
                if (v18 + 2 == v17) {
                  while (v27 != &v37 && v27 + 2 == v17) {
                    v27 = (_QWORD*)v27[1];
                  }
                  if (v18 != v27) {
                    v20 = (_QWORD*)*v27;
                    v29 = *(_QWORD**)(*v27 + 8LL);
                    *(_QWORD*)(*v18 + 8LL) = v29;
                    *v29 = *v18;
                    v30 = v37;
                    v37[1] = v18;
                    *v18 = v30;
                    v37 = v20;
                    v20[1] = &v37;
                  }
                  if (v27 != &v37) {
                    v27 = (_QWORD*)v27[1];
                  }
                }
                v18 = v27;
              } while (v27 != &v37);
            }
            else {
              v20 = &v37;
              do {
                v21 = (_QWORD*)v18[1];
                if (v18 + 2 == v17) {
                  while (v21 != v19 && v21 + 2 == v17) {
                    v21 = (_QWORD*)v21[1];
                  }
                  if (v18 != v21) {
                    v20 = (_QWORD*)*v21;
                    v23 = 1;
                    if (v18 != (_QWORD*)*v21) {
                      v24 = v18;
                      do {
                        v24 = (_QWORD*)v24[1];
                        ++v23;
                      } while (v24 != v20);
                    }
                    a1[9] -= v23;
                    v39 += v23;
                    v25 = (_QWORD*)v20[1];
                    *(_QWORD*)(*v18 + 8LL) = v25;
                    *v25 = *v18;
                    v26 = v37;
                    v37[1] = v18;
                    *v18 = v26;
                    v37 = v20;
                    v20[1] = &v37;
                  }
                  if (v21 != v19) {
                    v21 = (_QWORD*)v21[1];
                  }
                }
                v18 = v21;
              } while (v21 != v19);
            }
            if (v39 != 0) {
              v31 = v38;
              v32 = (_QWORD*)v20[1];
              *(_QWORD*)(*v38 + 8LL) = v32;
              *v32 = *v31;
              v39 = 0;
              if (v31 != &v37) {
                do {
                  v33 = (_QWORD*)v31[1];
                  if (*(_QWORD*)(*(_QWORD*)v15 + 200LL) != 0) {
                    v34 = 128;
                  }
                  else {
                    v34 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*(_QWORD*)v15 + v34);
                  v31 = v33;
                } while (v33 != &v37);
              }
            }
          }
          if ((unsigned __int64)(a2 >> 32) >= 0x100) {
            String_60a250("bitset reset argument out of range");
          }
          v35 = (unsigned __int64)&a1[4 * (a2 & 0x1FFFFFFF) +
                                      ((unsigned __int64)(a2 >> 32) >> 6)];
          *(_QWORD*)(v35 + 80) &= ~(1LL << SBYTE4(a2));
        }
      }
    }
  }
  return nn_os_UnlockMutex(a1);
}

#pragma GCC visibility pop
