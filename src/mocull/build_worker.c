#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1942920(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19449a0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_os_DestroyThread(_QWORD);
__int64 nn_os_FinalizeLightEvent(_QWORD);
__int64 nn_os_SignalLightEvent(_QWORD);
__int64 nn_os_WaitLightEvent(_QWORD);
__int64 nn_os_WaitThread(_QWORD);
extern __int64 (*base_thread_ExecutorBase_vtable[])();
extern __int64 GameData_226b920;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 BuildWorker_Unknown2(__int64 a1);
__int64 BuildWorker_Unknown4(__int64 result);
__int64 GameRoutine_193d0e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD, _QWORD, _DWORD, _DWORD, _DWORD);
__int64 GameRoutine_193e500(_QWORD, _QWORD, _QWORD);
__int64 BuildWorker_1942920(__int64 a1, int a2, char* a3);

__int64 BuildWorker_Unknown2(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  if ((atomic_exchange((atomic_uchar* volatile)(a1 + 720), 1u) & 1) == 0) {
    nn_os_SignalLightEvent(a1 + 484);
  }
  nn_os_WaitThread(a1 + 32);
  nn_os_FinalizeLightEvent(a1 + 484);
  nn_os_FinalizeLightEvent(a1 + 496);
  *(_BYTE*)(a1 + 480) = 0;
  GameRoutine_19449a0(GameData_226b920, *(_QWORD*)(a1 + 8));
  *(_QWORD*)(a1 + 8) = 0;
  result = nn_os_DestroyThread(a1 + 32);
  v3 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (v3 != 0) {
    v4 = fw_memory_g_heap_manager_ptr;
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v5);
    v6 = *(_QWORD*)(a1 + 24);
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 24) = 0;
    *(_QWORD*)a1 = base_thread_ExecutorBase_vtable;
    if (v6 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
        v7 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7);
    }
  }
  else {
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)a1 = base_thread_ExecutorBase_vtable;
  }
  return result;
}

__int64 BuildWorker_Unknown4(__int64 result)
{
  int v1;
  unsigned __int8 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  unsigned __int8 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  _BYTE v16[12];
  __int128 v17;
  _DWORD v18[10];

  v1 = *(_DWORD*)(result + 12);
  v2 = atomic_load((unsigned __int8*)(result + 720));
  if ((v2 & 1) == 0) {
    v3 = v1 - 1;
    v4 = result + 512;
    v5 = result;
    v6 = result + 556;
    v7 = (_QWORD*)(result + 624);
    do {
      result = nn_os_WaitLightEvent(v5 + 484);
      v8 = atomic_load((unsigned __int8*)(v5 + 720));
      if ((v8 & 1) != 0) {
        break;
      }
      GameRoutine_1942920(v16, v3, v4);
      memset(v18, 0, sizeof(v18));
      v17 = 0u;
      *(_QWORD*)&v16[4] = 0;
      *(_QWORD*)(v5 + 548) = 0x43800000780LL;
      v9 = *(_QWORD*)v16;
      *(_QWORD*)v4 = 0;
      *(_QWORD*)(v4 + 8) = 0;
      *(_QWORD*)(v4 + 16) = 0;
      *(_QWORD*)(v4 + 24) = 0;
      *(_DWORD*)(v4 + 32) = 0;
      v7[8] = 0;
      v7[9] = 0;
      v7[6] = 0;
      v7[7] = 0;
      v7[4] = 0;
      v7[5] = 0;
      v7[2] = 0;
      v7[3] = 0;
      *v7 = 0;
      v7[1] = 0;
      *(_DWORD*)(v5 + 704) = 1036831949;
      *(_QWORD*)(v6 + 16) = 0;
      *(_QWORD*)(v6 + 24) = 0;
      v10 = v18[9];
      v11 = *(_QWORD*)&v18[7];
      *(_QWORD*)v6 = v9;
      *(_QWORD*)(v6 + 8) = 0;
      v12 = *(_QWORD*)&v18[1];
      v13 = *(_QWORD*)&v18[3];
      *(_DWORD*)(v6 + 64) = v10;
      v14 = *(_QWORD*)&v18[5];
      *(_QWORD*)(v6 + 32) = v12;
      *(_QWORD*)(v6 + 40) = v13;
      *(_QWORD*)(v6 + 48) = v14;
      *(_QWORD*)(v6 + 56) = v11;
      result = nn_os_SignalLightEvent(v5 + 496);
      v15 = atomic_load((unsigned __int8*)(v5 + 720));
    } while (v15 != 1);
  }
  return result;
}

__int64 BuildWorker_1942920(__int64 a1, int a2, char* a3)
{
  _QWORD* v3;
  char* v4;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  __int64 result;
  unsigned int v11;
  __int64 v12;
  unsigned int v13;
  _QWORD* v14;
  __int64 v15;
  unsigned int v16;
  __int64 v17;
  atomic_uint* v18;
  unsigned int v19;
  unsigned int v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned int v24;
  unsigned int v25;
  unsigned int* v26;
  unsigned int v27;
  bool v28;
  int v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned int v35;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  __int64 v39;
  unsigned int v40;
  unsigned __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  unsigned __int8 v44;

  v4 = a3 + 28;
  v3 = *(_QWORD**)a3;
  v7 = 0;
  v8 = *(_DWORD*)(*(_QWORD*)a3 + 12LL);
  v9 = *(_DWORD*)(*(_QWORD*)a3 + 8LL) >> 1;
  while (1) {
    v11 = a2 + 2 * v7;
    v12 = v3[4] + 24LL * v11;
    if ((atomic_exchange((atomic_uchar* volatile)(v12 + 20), 1u) & 1) != 0) {
      goto LABEL_3;
    }
    v13 = atomic_load((unsigned int*)(v12 + 16));
    v14 = *(_QWORD**)a3;
    v15 = v13 % *(_DWORD*)(*(_QWORD*)a3 + 12LL);
    v16 = atomic_load(
        (unsigned int*)(*(_QWORD*)(*(_QWORD*)a3 + 88LL) + (v15 << 6) + 4));
    if (v13 == v16) {
      v17 = v14[8];
      if (v17 != 0) {
        if (*(_DWORD*)(v17 + 24LL * (v11 + *((_DWORD*)v14 + 2) * (_DWORD)v15) +
                       4) != 0) {
          result = GameRoutine_193e500(*((_QWORD*)a3 + 1), *((_QWORD*)a3 + 2),
                                       *((unsigned int*)a3 + 6));
        }
        v18 = (atomic_uint*)(v12 + 16);
        goto LABEL_10;
      }
    }
    atomic_store(0, (unsigned __int8*)(v12 + 20));
    v19 = atomic_load((unsigned int*)(*(_QWORD*)a3 + 20LL));
    v20 = atomic_load((unsigned int*)(*(_QWORD*)a3 + 24LL));
    v21 = *(_QWORD*)a3;
    if (*(_DWORD*)(*(_QWORD*)a3 + 8LL) == 0) {
      break;
    }
    v22 = 16;
    v23 = 0;
    v24 = 0;
    v25 = v19;
    do {
      v26 = (unsigned int*)(*(_QWORD*)(v21 + 32) + v22);
      v22 += 24;
      v27 = atomic_load(v26);
      if (v27 == v24) {
        v24 |= 1 << v23;
      }
      v28 = v27 >= v25;
      v29 = 1 << v23++;
      if (v27 < v25) {
        v25 = v27;
      }
      v21 = *(_QWORD*)a3;
      if (!v28) {
        v24 = v29;
      }
      v30 = *(unsigned int*)(v21 + 8);
    } while (v23 < v30);
    if (v20 < v19 && v20 - v25 < v8) {
      goto LABEL_36;
    }
    if ((_DWORD)v30 == 0) {
      goto LABEL_42;
    }
    v31 = 0;
    v32 = 0;
    while (1) {
      if (((v24 >> v32) & 1) != 0) {
        v33 = *(_QWORD*)(v21 + 32);
        v12 = v33 + v31;
        if ((atomic_exchange((atomic_uchar* volatile)(v33 + v31 + 20), 1u) &
             1) == 0) {
          break;
        }
        v21 = *(_QWORD*)a3;
      }
      ++v32;
      v31 += 24;
      if (v32 >= *(unsigned int*)(v21 + 8)) {
        goto LABEL_42;
      }
    }
    if (v33 == 0) {
      goto LABEL_42;
    }
    v34 = v33 + v31;
    v35 = atomic_load((unsigned int*)(v33 + v31 + 16));
    v36 = *(_QWORD*)a3;
    v37 = v35 % *(_DWORD*)(*(_QWORD*)a3 + 12LL);
    v38 = atomic_load(
        (unsigned int*)(*(_QWORD*)(*(_QWORD*)a3 + 88LL) + (v37 << 6) + 4));
    if (v35 != v38 || (v39 = *(_QWORD*)(v36 + 64)) == 0) {
      atomic_store(0, (unsigned __int8*)(v12 + 20));
      goto LABEL_42;
    }
    if (*(_DWORD*)(v39 +
                   24LL * (unsigned int)(v32 + *(_DWORD*)(v36 + 8) * v37) +
                   4) != 0) {
      result = GameRoutine_193e500(*((_QWORD*)a3 + 1), *((_QWORD*)a3 + 2),
                                   *((unsigned int*)a3 + 6));
    }
    v18 = (atomic_uint*)(v34 + 16);
  LABEL_10:
    atomic_fetch_add(v18, 1u);
    atomic_store(0, (unsigned __int8*)(v12 + 20));
  LABEL_3:
    v7 = (v7 + 1) % v9;
    v3 = *(_QWORD**)a3;
  }
  v25 = v19;
  if (v20 < v19 && v20 - v19 < v8) {
  LABEL_36:
    v40 = v20;
    atomic_compare_exchange_strong((atomic_uint* volatile)(v21 + 24), &v40,
                                   v20 + 1);
    if (v40 == v20) {
      v41 = *(_QWORD*)(v21 + 88) +
            ((unsigned __int64)(v20 % *(_DWORD*)(v21 + 12)) << 6);
      if (*(_DWORD*)(v21 + 8) != 0) {
        v42 = 0;
        v43 = 0;
        do {
          ++v43;
          *(_DWORD*)(*(_QWORD*)(v41 + 48) + v42 + 4) = 0;
          *(_DWORD*)(*(_QWORD*)(v41 + 48) + v42) = 0;
          v42 += 24;
        } while (v43 < *(unsigned int*)(v21 + 8));
      }
      atomic_store(v20, (unsigned int*)v41);
      result = GameRoutine_193d0e0(
          *(_QWORD*)(v41 + 8), *(_QWORD*)(v41 + 16), *(_QWORD*)(v41 + 24),
          *(_QWORD*)(v41 + 32), *(_QWORD*)(v41 + 48), *(_QWORD*)(v41 + 56),
          a3 + 48, v4, **(_DWORD**)a3, *(_DWORD*)(*(_QWORD*)a3 + 4LL),
          *(_DWORD*)(v41 + 40));
      atomic_store(
          v20,
          (unsigned int*)(*(_QWORD*)(*(_QWORD*)a3 + 88LL) +
                          ((unsigned __int64)(v20 %
                                              *(_DWORD*)(*(_QWORD*)a3 + 12LL))
                           << 6) +
                          4));
    }
    goto LABEL_3;
  }

LABEL_42:
  v44 = atomic_load((unsigned __int8*)(*(_QWORD*)a3 + 16LL));
  if ((v44 & 1) != 0 || v25 != v19) {
    goto LABEL_3;
  }
  return result;
}

#pragma GCC visibility pop
