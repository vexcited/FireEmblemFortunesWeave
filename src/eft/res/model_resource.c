#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_ada070(PSEUDO_X8, _QWORD, _QWORD,
                                                   _QWORD);
__int64 GameRoutine_6360e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_ad69c0(_QWORD);
__int64 GameRoutine_ad6bb0(void);
__int64 GameRoutine_ad7390(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snprintf(_QWORD, _QWORD, const char*, ...);
__int64 strlen(_QWORD);
extern __int64 (*eft_res_ModelResource_vtable[])();
extern __int64 eft_g_effectSystem;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* snd_g_fileIndex_ptr[2];
__int64 ModelResource_Destructor(_QWORD* a1);
__int64 ModelResource_DeletingDestructor(_QWORD* a1);
__int64 ModelResource_Unknown2(__int64 a1);
_QWORD* ModelResource_bce590(_QWORD* result);
__int64 ModelResource_Unknown3(__int64 a1);

__int64 ModelResource_Destructor(_QWORD* a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;

  *a1 = eft_res_ModelResource_vtable;
  result = a1[23];
  if (result != 0) {
    result = GameRoutine_ad6bb0();
    v3 = a1[23];
    a1[23] = 0;
    if (v3 != 0) {
      GameRoutine_ad69c0(v3);
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
    }
  }
  return result;
}

__int64 ModelResource_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *a1 = eft_res_ModelResource_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if (a1[23] != 0) {
    GameRoutine_ad6bb0();
    v3 = a1[23];
    a1[23] = 0;
    if (v3 != 0) {
      GameRoutine_ad69c0(v3);
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v4);
    }
  }
  v5 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v5 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5);
}

__int64 ModelResource_Unknown2(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
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
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _BYTE v18[32];
  _BYTE* v19;
  _BYTE v20[128];
  __int64 v21;
  __int64 v22;
  __int64 v23;

  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    return 0;
  }
  v21 = v1;
  v22 = v2;
  if (*(_QWORD*)(*(_QWORD*)(eft_g_effectSystem + 112) + 24LL) == 0 ||
      *(_QWORD*)(a1 + 48) == 0) {
    return 0;
  }
  if ((*(_BYTE*)(a1 + 10) & 1) != 0) {
    goto LABEL_20;
  }
  v4 = a1;
  v5 = *snd_g_fileIndex_ptr[0];
  v6 = strlen(a1 + 56);
  if ((GameRoutine_6360e0(v5, v4 + 56, v6, 0, 1) & 1) != 0) {
    snprintf(v20, 128, "Effect/model/%s/%s", *(const char**)(v4 + 40),
             *(const char**)(v4 + 48));
    v7 = strlen(v20);
    v19 = nullptr;
    GameRoutine_ada070((void*)&v23, v20, v7, v18);
    v8 = v23;
    v9 = *(_QWORD*)(v4 + 184);
    v23 = 0;
    *(_QWORD*)(v4 + 184) = v8;
    if (v9 != 0) {
      GameRoutine_ad69c0(v9);
      v10 = fw_memory_g_heap_manager_ptr;
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v11);
      v12 = v23;
      v23 = 0;
      if (v12 != 0) {
        GameRoutine_ad69c0(v12);
        v13 = 128;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v13);
      }
    }
    if (v19 == v18) {
      v14 = 32;
      goto LABEL_18;
    }
    if (v19 != nullptr) {
      v14 = 40;
    LABEL_18:
      (*(void (**)(void*))(*(_QWORD*)v19 + v14))((void*)v19);
    }
  }
  a1 = v4;
  *(_BYTE*)(v4 + 10) = 1;

LABEL_20:
  v16 = a1 + 184;
  v15 = *(_QWORD*)(a1 + 184);
  if (v15 == 0) {
    return 0;
  }
  if (*(_BYTE*)(v15 + 165) != 1) {
    return 0;
  }
  v17 = a1;
  if ((GameRoutine_ad7390(*(_QWORD*)(a1 + 184)) & 1) == 0) {
    return 0;
  }
  if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)v16 + 8LL) + 592LL) == 0) {
    GameRoutine_ad6bb0();
    ModelResource_bce590(v16);
  }
  *(_BYTE*)(v17 + 8) = 1;
  return 1;
}

_QWORD* ModelResource_bce590(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;

  v1 = *result;
  *result = 0;
  if (v1 != 0) {
    v2 = result;
    GameRoutine_ad69c0(v1);
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
    return v2;
  }
  return result;
}

__int64 ModelResource_Unknown3(__int64 a1)
{
  __int64 v1;
  __int64 v2;
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
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _BYTE v19[32];
  _BYTE* v20;
  _BYTE v21[128];
  __int64 v22;
  __int64 v23;
  __int64 v24;

  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    return 0;
  }
  v22 = v1;
  v23 = v2;
  if (*(_QWORD*)(*(_QWORD*)(eft_g_effectSystem + 112) + 24LL) == 0) {
    return 0;
  }
  if ((*(_BYTE*)(a1 + 10) & 1) == 0) {
    v5 = *snd_g_fileIndex_ptr[0];
    v6 = strlen(a1 + 56);
    if ((GameRoutine_6360e0(v5, a1 + 56, v6, 0, 1) & 1) != 0) {
      snprintf(v21, 128, "Effect/model/%s/%s", *(const char**)(a1 + 40),
               *(const char**)(a1 + 48));
      v7 = strlen(v21);
      v20 = nullptr;
      GameRoutine_ada070((void*)&v24, v21, v7, v19);
      v8 = v24;
      v9 = *(_QWORD*)(a1 + 184);
      v24 = 0;
      *(_QWORD*)(a1 + 184) = v8;
      if (v9 != 0) {
        GameRoutine_ad69c0(v9);
        v10 = fw_memory_g_heap_manager_ptr;
        v11 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v11);
        v12 = v24;
        v24 = 0;
        if (v12 != 0) {
          GameRoutine_ad69c0(v12);
          v13 = 128;
          if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
            v13 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v13);
        }
      }
      if (v20 == v19) {
        v14 = 32;
        goto LABEL_17;
      }
      if (v20 != nullptr) {
        v14 = 40;
      LABEL_17:
        (*(void (**)(void*))(*(_QWORD*)v20 + v14))((void*)v20);
      }
    }
    *(_BYTE*)(a1 + 10) = 1;
  }
  v15 = *(_QWORD*)(a1 + 184);
  if (v15 == 0) {
  LABEL_28:
    *(_BYTE*)(a1 + 8) = 1;
    return 1;
  }
  if (*(_BYTE*)(v15 + 165) == 1 && (GameRoutine_ad7390(v15) & 1) != 0) {
    v16 = *(_QWORD*)(a1 + 184);
    if (v16 != 0 && *(_QWORD*)(*(_QWORD*)(v16 + 8) + 592LL) == 0) {
      GameRoutine_ad6bb0();
      v17 = *(_QWORD*)(a1 + 184);
      *(_QWORD*)(a1 + 184) = 0;
      if (v17 != 0) {
        GameRoutine_ad69c0(v17);
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                      v18);
      }
    }
    goto LABEL_28;
  }
  return 0;
}

#pragma GCC visibility pop
