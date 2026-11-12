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
__int64
ModelResource_Destructor_alt1(_QWORD* a1) __asm__("ModelResource_Destructor");
__int64 ModelResource_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "ModelResource_DeletingDestructor");
__int64 ModelResource_Unknown2(__int64 a1);
_QWORD*
ModelResource_bce590_alt2(_QWORD* result) __asm__("ModelResource_bce590");
__int64 ModelResource_Unknown3(__int64 a1);
_QWORD**
ModelResource_bce590_alt1(_QWORD** result) __asm__("ModelResource_bce590");
__attribute__((swiftcall)) void g3d_ada070(PSEUDO_X8, __int64, __int64,
                                           __int64);
__int64 GameRoutine_ad6bb0_alt1(_QWORD*) __asm__("GameRoutine_ad6bb0");
bool GameRoutine_ad7390_alt1(_QWORD*) __asm__("GameRoutine_ad7390");
int snprintf_alt1(__int64, unsigned __int64, const char*,
                  ...) __asm__("snprintf");
unsigned __int64 fs_6360e0(__int64, __int64, unsigned __int64, char, int);
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameHr_ad69c0(_QWORD*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ModelResource_Destructor(_QWORD* a1);
void ModelResource_DeletingDestructor(_QWORD* a1);
_QWORD** ModelResource_bce590(_QWORD** result);

void ModelResource_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;

  *a1 = eft_res_ModelResource_vtable;
  v2 = (_QWORD*)a1[23];
  if (v2 != nullptr) {
    GameRoutine_ad6bb0_alt1(v2);
    v3 = (_QWORD*)a1[23];
    a1[23] = 0;
    if (v3 != nullptr) {
      GameHr_ad69c0(v3);
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, (__int64)v3);
    }
  }
}

void ModelResource_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  *a1 = eft_res_ModelResource_vtable;
  v2 = (_QWORD*)a1[23];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != nullptr) {
    GameRoutine_ad6bb0_alt1(v2);
    v4 = (_QWORD*)a1[23];
    a1[23] = 0;
    if (v4 != nullptr) {
      GameHr_ad69c0(v4);
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v5, (__int64)v4);
    }
  }
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v6, (__int64)a1);
}

__int64 ModelResource_Unknown2(__int64 a1)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD** v16;
  __int64 v17;
  struct {
    _BYTE v18[32];
    _BYTE* v19;
  } v18_;
  char v20[128];
  _QWORD* v23;

  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    return 0;
  }
  if (*(_QWORD*)(*(_QWORD*)(eft_g_effectSystem + 112) + 24LL) == 0 ||
      *(_QWORD*)(a1 + 48) == 0) {
    return 0;
  }
  if ((*(_BYTE*)(a1 + 10) & 1) != 0) {
    goto LABEL_20;
  }
  v4 = a1;
  v5 = *snd_g_fileIndex_ptr[0];
  v6 = strlen_alt1((const char*)(a1 + 56));
  if ((fs_6360e0(v5, v4 + 56, v6, 0, 1) & 1) != 0) {
    snprintf_alt1((__int64)v20, 0x80u, "Effect/model/%s/%s",
                  *(const char**)(v4 + 40), *(const char**)(v4 + 48));
    v7 = strlen_alt1(v20);
    v18_.v19 = nullptr;
    g3d_ada070((void*)((__int64*)&v23), (__int64)v20, v7, (__int64)v18_.v18);
    v8 = (__int64)v23;
    v9 = *(_QWORD**)(v4 + 184);
    v23 = nullptr;
    *(_QWORD*)(v4 + 184) = v8;
    if (v9 != nullptr) {
      GameHr_ad69c0(v9);
      v10 = fw_memory_g_heap_manager_ptr;
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v9);
      v12 = v23;
      v23 = nullptr;
      if (v12 != nullptr) {
        GameHr_ad69c0(v12);
        v13 = 128;
        if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
          v13 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v10 + v13, (__int64)v12);
      }
    }
    if (v18_.v19 == v18_.v18) {
      v14 = 32;
      goto LABEL_18;
    }
    if (v18_.v19 != nullptr) {
      v14 = 40;
    LABEL_18:
      (*(void (**)(__int64))(*(_QWORD*)v18_.v19 + v14))((__int64)v18_.v19);
    }
  }
  a1 = v4;
  *(_BYTE*)(v4 + 10) = 1;
LABEL_20:
  v16 = (_QWORD**)(a1 + 184);
  v15 = *(_QWORD*)(a1 + 184);
  if (v15 == 0) {
    return 0;
  }
  if (*(_BYTE*)(v15 + 165) != 1) {
    return 0;
  }
  v17 = a1;
  if (!GameRoutine_ad7390_alt1(*(_QWORD**)(a1 + 184))) {
    return 0;
  }
  if (*(_QWORD*)((*v16)[1] + 592LL) == 0) {
    GameRoutine_ad6bb0_alt1(*v16);
    ModelResource_bce590_alt1(v16);
  }
  *(_BYTE*)(v17 + 8) = 1;
  return 1;
}

_QWORD** ModelResource_bce590(_QWORD** result)
{
  _QWORD* v1;
  _QWORD** v2;
  __int64 v3;

  v1 = *result;
  *result = nullptr;
  if (v1 != nullptr) {
    v2 = result;
    GameHr_ad69c0(v1);
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)v1);
    return v2;
  }
  return result;
}

__int64 ModelResource_Unknown3(__int64 a1)
{
  __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  _QWORD* v17;
  __int64 v18;
  struct {
    _BYTE v19[32];
    _BYTE* v20;
  } v19_;
  char v21[128];
  _QWORD* v24;

  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    return 0;
  }
  if (*(_QWORD*)(*(_QWORD*)(eft_g_effectSystem + 112) + 24LL) == 0) {
    return 0;
  }
  if ((*(_BYTE*)(a1 + 10) & 1) == 0) {
    v5 = *snd_g_fileIndex_ptr[0];
    v6 = strlen_alt1((const char*)(a1 + 56));
    if ((fs_6360e0(v5, a1 + 56, v6, 0, 1) & 1) != 0) {
      snprintf_alt1((__int64)v21, 0x80u, "Effect/model/%s/%s",
                    *(const char**)(a1 + 40), *(const char**)(a1 + 48));
      v7 = strlen_alt1(v21);
      v19_.v20 = nullptr;
      g3d_ada070((void*)((__int64*)&v24), (__int64)v21, v7, (__int64)v19_.v19);
      v8 = (__int64)v24;
      v9 = *(_QWORD**)(a1 + 184);
      v24 = nullptr;
      *(_QWORD*)(a1 + 184) = v8;
      if (v9 != nullptr) {
        GameHr_ad69c0(v9);
        v10 = fw_memory_g_heap_manager_ptr;
        v11 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v11 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v9);
        v12 = v24;
        v24 = nullptr;
        if (v12 != nullptr) {
          GameHr_ad69c0(v12);
          v13 = 128;
          if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
            v13 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v10 + v13, (__int64)v12);
        }
      }
      if (v19_.v20 == v19_.v19) {
        v14 = 32;
        goto LABEL_17;
      }
      if (v19_.v20 != nullptr) {
        v14 = 40;
      LABEL_17:
        (*(void (**)(__int64))(*(_QWORD*)v19_.v20 + v14))((__int64)v19_.v20);
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
  if (*(_BYTE*)(v15 + 165) == 1 && GameRoutine_ad7390_alt1((_QWORD*)v15)) {
    v16 = *(_QWORD**)(a1 + 184);
    if (v16 != nullptr && *(_QWORD*)(v16[1] + 592LL) == 0) {
      GameRoutine_ad6bb0_alt1(v16);
      v17 = *(_QWORD**)(a1 + 184);
      *(_QWORD*)(a1 + 184) = 0;
      if (v17 != nullptr) {
        GameHr_ad69c0(v17);
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v17);
      }
    }
    goto LABEL_28;
  }
  return 0;
}

#pragma GCC visibility pop
