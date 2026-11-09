#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_1415980(_QWORD* result);
__int64 GameRoutine_1416c80(_QWORD, _QWORD);
__int64 GameRoutine_7a88a0(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strlen(_QWORD);
extern __int64 (*game_facility_SceneCharacterLookAt_vtable[])();
extern __int64 GameData_212dce8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
_QWORD* SceneCharacterLookAt_Destructor(__int64 a1);
__int64 SceneCharacterLookAt_1416860(__int64 a1, _QWORD* a2);
__int64 SceneCharacterLookAt_1416a00(__int64 a1, __int64 a2, float a3,
                                     float a4);

_QWORD* SceneCharacterLookAt_Destructor(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  unsigned __int64 v6;
  _QWORD* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  _QWORD* v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;

  *(_QWORD*)a1 = game_facility_SceneCharacterLookAt_vtable;
  result = GameRoutine_1415980((_QWORD*)(a1 + 168));
  v3 = *(_QWORD**)(a1 + 176);
  v4 = *(_QWORD**)(a1 + 184);
  if (v4 == v3) {
    v5 = (_QWORD*)(a1 + 208);
    v14 = *(_QWORD**)(a1 + 176);
    goto LABEL_21;
  }
  v5 = (_QWORD*)(a1 + 208);
  v6 = *(_QWORD*)(a1 + 200);
  v7 = &v3[v6 / 0x33];
  v8 = *v7 + 80 * (v6 % 0x33);
  v9 = v3[(*(_QWORD*)(a1 + 208) + v6) / 0x33] +
       80 * ((*(_QWORD*)(a1 + 208) + v6) % 0x33);
  if (v8 == v9) {
    goto LABEL_19;
  }
  v10 = fw_memory_g_heap_manager_ptr;
  do {
    if ((*(_BYTE*)(v8 + 56) & 1) != 0 && *(_QWORD*)(v8 + 72) != 0) {
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
        v11 = 128;
      }
      else {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v11);
    }
    result = *(_QWORD**)(v8 + 32);
    if (result == (_QWORD*)v8) {
      v12 = 32;
    }
    else {
      if (result == nullptr) {
        goto LABEL_16;
      }
      v12 = 40;
    }
    result = (_QWORD*)(*(__int64 (**)(void))(*result + v12))();
  LABEL_16:
    v8 += 80LL;
    if (v8 - *v7 == 4080) {
      v13 = v7[1];
      ++v7;
      v8 = v13;
    }
  } while (v8 != v9);
  v3 = *(_QWORD**)(a1 + 176);
  v4 = *(_QWORD**)(a1 + 184);

LABEL_19:
  v14 = v4;

LABEL_21:
  *v5 = 0;
  v15 = v14 - v3;
  if (v15 >= 3) {
    v16 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v3 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v17);
        v3 = *(_QWORD**)(a1 + 176);
        v4 = *(_QWORD**)(a1 + 184);
        v14 = v4;
      }
      *(_QWORD*)(a1 + 176) = ++v3;
      v15 = v14 - v3;
    } while (v15 > 2);
  }
  if (v15 == 1) {
    v18 = 25;
  LABEL_33:
    *(_QWORD*)(a1 + 200) = v18;
  }
  else if (v15 == 2) {
    v18 = 51;
    goto LABEL_33;
  }
  if (v3 != v4) {
    v19 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v3 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) != 0) {
          v20 = 128;
        }
        else {
          v20 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v20);
      }
      ++v3;
    } while (v3 != v4);
    v21 = *(_QWORD*)(a1 + 184);
    v22 = *(_QWORD*)(a1 + 176) - v21;
    if (v22 != 0) {
      *(_QWORD*)(a1 + 184) = v21 + ((v22 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  if (*(_QWORD*)(a1 + 168) != 0) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v23 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v23);
  }
  if ((*(_BYTE*)(a1 + 144) & 1) != 0 && *(_QWORD*)(a1 + 160) != 0) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
  }
  return result;
}

__int64 SceneCharacterLookAt_1416860(__int64 a1, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  char* v16;
  unsigned __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v22;
  unsigned __int64 v23;
  char* v24;
  _QWORD v25[2];

  v3 = *a2;
  v4 = *(_QWORD*)GameData_212dce8;
  v5 = strlen(*a2);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    GameRoutine_60a1d0(v5);
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16,
                                               0);
    v23 = v6;
    v24 = v7;
    v22 = v8 | 1;
    goto LABEL_9;
  }
  LOBYTE(v22) = 2 * v5;
  v7 = (char*)&v22 + 1;
  if (v5 != 0) {
  LABEL_9:
    memmove(v7, v3, v6);
  }
  v7[v6] = 0;
  v9 = *(__int64**)(v4 + 160);
  v10 = *(__int64**)(v4 + 168);
  if (v9 == v10) {
    v11 = 0;
    if ((v22 & 1) == 0) {
      goto LABEL_27;
    }
    goto LABEL_23;
  }
  while (1) {
    v12 = *v9++;
    v11 = v12;
    v13 = *(_QWORD*)(v12 + 40);
    v14 = v12 + 25;
    v15 = (*(_BYTE*)(v12 + 24) & 1) != 0 ? v13 : v14;
    v16 = v24;
    v17 = (unsigned __int64)(unsigned __int8)v22 >> 1;
    if ((v22 & 1) != 0) {
      v17 = v23;
    }
    else {
      v16 = (char*)&v22 + 1;
    }
    v25[0] = v16;
    v25[1] = v17;
    v18 = game_HashString(v15);
    if (v18 == GameRoutine_7a88a0(v25)) {
      break;
    }
    if (v9 == v10) {
      v11 = 0;
      break;
    }
  }
  if ((v22 & 1) != 0) {
  LABEL_23:
    if (v24 != nullptr) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v19);
    }
  }

LABEL_27:
  if (v11 == *(_QWORD*)(a1 + 8) || v11 == 0) {
    return 0;
  }
  else {
    return v11;
  }
}

__int64 SceneCharacterLookAt_1416a00(__int64 a1, __int64 a2, float a3, float a4)
{
  __int64 v5;
  float v8;
  __int64 v9;
  __int64 result;
  __int64 v11;
  _BYTE v12[32];
  _BYTE* v13;
  float v14;
  float v15;
  __int16 v16;
  __int64 v17;

  v5 = *(_QWORD*)(a2 + 32);
  if (v5 != 0) {
    if (v5 == a2) {
      v13 = v12;
      (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v5 + 24LL))(v5, v12);
    }
    else {
      v13 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    }
  }
  else {
    v13 = nullptr;
  }
  v8 = 1.0;
  v16 = 0;
  if (a3 <= 1.0) {
    v8 = a3;
  }
  if (a3 < 1.1755e-38) {
    v8 = 1.1755e-38;
  }
  v14 = v8;
  v15 = a4;
  GameRoutine_1416c80(a1 + 168, v12);
  if ((v16 & 1) != 0 && v17 != 0) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9);
  }
  result = (__int64)v13;
  if (v13 == v12) {
    v11 = 32;
  }
  else {
    if (v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (*(__int64 (**)(void))(*(_QWORD*)v13 + v11))();
}

#pragma GCC visibility pop
