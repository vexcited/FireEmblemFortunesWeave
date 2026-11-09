#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_658c00(_QWORD);
__int64 game_ProcInst_Unregister(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_ProcList_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
__int64 ProcList_Destructor(__int64 a1);
__int64 ProcList_Unknown2(__int64 result);

__int64 ProcList_Destructor(__int64 a1)
{
  __int64* v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = *(__int64**)(a1 + 152);
  *(_QWORD*)a1 = game_ProcList_vtable;
  if (v1 == nullptr) {
    goto LABEL_18;
  }
  v3 = *v1;
  v4 = fw_memory_g_heap_manager_ptr;
  if (*v1 == 0) {
    goto LABEL_15;
  }
  v5 = v1[1];
  if (v3 == v5) {
  LABEL_12:
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v10, v3);
    goto LABEL_15;
  }
  do {
    v7 = *(_QWORD**)(v5 - 16);
    v8 = v5 - 48;
    if ((_QWORD*)(v5 - 48) == v7) {
      v6 = 32;
    LABEL_6:
      (*(void (**)(__int64))(*v7 + v6))((__int64)v7);
      goto LABEL_7;
    }
    if (v7 != nullptr) {
      v6 = 40;
      goto LABEL_6;
    }
  LABEL_7:
    v5 = v8;
  } while (v8 != v3);
  v9 = *v1;
  v1[1] = v3;
  v3 = v9;
  if (v9 != 0) {
    goto LABEL_12;
  }

LABEL_15:
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v11, v1);
  *(_QWORD*)(a1 + 152) = 0;

LABEL_18:
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  return GameRoutine_658c00(a1 + 88);
}

__int64 ProcList_Unknown2(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  _DWORD* v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  unsigned int v13;
  bool v14;
  int v15;
  __int64 v17;

  v1 = *(__int64**)(result + 152);
  v2 = result;
  v3 = *v1;
  v4 = v1[1];
  v7 = *((int*)v1 + 6);
  v6 = v1 + 3;
  v5 = v7;
  if (0xAAAAAAAAAAAAAAABLL * ((v4 - v3) >> 4) > v7) {
    do {
      v17 = v2;
      v11 = *(_QWORD*)(v3 + 48 * v5 + 32);
      if (v11 == 0) {
        GameRoutine_60a310(0);
      }
      result =
          (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v11 + 48LL))(v11, &v17);
      switch ((_DWORD)result) {
      case 1:
        ++*v6;
        if (*(_BYTE*)(v2 + 138) != 0 || *(float*)(v2 + 144) != 0.0) {
          return result;
        }
        break;
      case 0:
        return result;
      case 2:
        goto LABEL_12;
      default:
        break;
      }
      v8 = *(__int64**)(v2 + 152);
      v3 = *v8;
      v9 = v8[1];
      v10 = *((int*)v8 + 6);
      v6 = v8 + 3;
      v5 = v10;
    } while (0xAAAAAAAAAAAAAAABLL * ((v9 - v3) >> 4) > v10);
  }

LABEL_12:
  v12 = *(unsigned __int8**)(v2 + 16);
  if (v12 != nullptr) {
    v13 = *v12;
    v14 = v13 > 0x10;
    v15 = (1 << v13) & 0x1CE00;
    if (!v14 && v15 != 0) {
      *(_WORD*)(v2 + 136) |= 0x80u;
    }
  }
  *(_WORD*)(v2 + 136) |= 8u;
  return result;
}

#pragma GCC visibility pop
