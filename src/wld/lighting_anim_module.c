#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_60a060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c686d0(__int64, __int64);
__int64 GameRoutine_c69950(__int64 result);
__int64 GameRoutine_c6c4f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_c6da10(__int64 result);
__int64 GameRoutine_c6db70(__int64 result, unsigned int);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*wld_LightingAnimModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 LightingAnimModule_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "LightingAnimModule_DeletingDestructor");
__int64 LightingAnimModule_c74700(__int64 a1, __int64 a2, __int64 a3, float a4);
__int64 GameRoutine_b86d00(__int64, float, __int64, int);
__int64 GameRoutine_c749a0(__int64*, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0();
__int64
LightingAnimModule_c74350_alt1(_QWORD* a1, unsigned __int8* a2,
                               unsigned __int64 a3,
                               float a4) __asm__("LightingAnimModule_c74350");
__int64 GameHr_b86d00(__int64, unsigned int, int, float);
__int64 GameHr_c749a0(__int64*, __int64);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void LightingAnimModule_DeletingDestructor(_QWORD* a1);
void LightingAnimModule_c74350(_QWORD* a1, unsigned __int8* a2,
                               unsigned __int64 a3, float a4);

void LightingAnimModule_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = a1[4];
  *a1 = wld_LightingAnimModule_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = a1[5];
    if (v1 == v4) {
      goto LABEL_12;
    }
    v5 = a1[5];
    do {
      v6 = *(_BYTE*)(v5 - 40);
      v5 -= 40;
      if ((v6 & 1) != 0) {
        v7 = *(_QWORD*)(v4 - 24);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v8, v7);
        }
      }
      v4 = v5;
    } while (v5 != v1);
    v9 = a1[4];
    a1[5] = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v10, v1);
    }
  }
  v11 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v11 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v3 + v11, (__int64)a1);
}

void LightingAnimModule_c74350(_QWORD* a1, unsigned __int8* a2,
                               unsigned __int64 a3, float a4)
{

#pragma clang fp contract(off)
  unsigned int v8;
  unsigned int v9;
  char* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  struct {
    __int64 v19;
    unsigned __int64 v20;
    char* v21;
    unsigned __int64 v22;
    float v23;
  } v19_;

  v8 = wld_Crc32(0, a2, a3);
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v9 = v8;
  if (a3 >= 0x17) {
    if ((a3 | 7) == 0x17) {
      v11 = 26;
    }
    else {
      v11 = (a3 | 7) + 1;
    }
    v10 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v11,
                                                16, 0);
    v19_.v20 = a3;
    v19_.v21 = v10;
    v19_.v19 = v11 | 1;
    goto LABEL_9;
  }
  LOBYTE(v19_.v19) = 2 * a3;
  v10 = (char*)&v19_.v19 + 1;
  if (a3 != 0) {
  LABEL_9:
    memmove_alt1((__int64)v10, (__int64)a2, a3);
  }
  v10[a3] = 0;
  v19_.v22 = __PAIR64__(LODWORD(a4), v9);
  v13 = a1[5];
  v12 = a1[6];
  v19_.v23 = a4;
  if (v13 >= v12) {
    v16 = GameHr_c749a0(a1 + 4, (__int64)&v19_.v19);
    a4 = *((float*)&v19_.v22 + 1);
    v9 = v19_.v22;
  }
  else {
    if ((v19_.v19 & 1) != 0) {
      fw_text_String_CopyTerminated((__int64*)v13, (__int64)v19_.v21, v19_.v20);
    }
    else {
      v14 = v19_.v19;
      v15 = (__int64)v19_.v21;
      *(_QWORD*)(v13 + 8) = v19_.v20;
      *(_QWORD*)(v13 + 16) = v15;
      *(_QWORD*)v13 = v14;
    }
    v17 = v19_.v22;
    v16 = v13 + 40;
    *(float*)(v13 + 32) = v19_.v23;
    *(_QWORD*)(v13 + 24) = v17;
  }
  a1[5] = v16;
  GameHr_b86d00(a1[3], v9, 0, a4);
  if ((v19_.v19 & 1) != 0 && v19_.v21 != nullptr) {
    v18 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v18, (__int64)v19_.v21);
  }
}

__int64 LightingAnimModule_c74700(__int64 a1, __int64 a2, __int64 a3, float a4)
{
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 i;
  unsigned __int64 v11;
  unsigned __int64 v12;
  _QWORD* v13;
  __int64 result;
  float v15;

  v7 = *(_QWORD*)(*(_QWORD*)(a1 + 24) + 392LL);
  v8 = *(unsigned int*)(v7 + 352);
  if ((int)v8 <= 0) {
    goto LABEL_14;
  }
  v9 = (_QWORD*)(v7 + 272);
  for (i = 0; i != v8; ++i) {
    v11 = *((unsigned __int8*)v9 - 16);
    v12 = *(v9 - 1);
    if ((v11 & 1) == 0) {
      v12 = v11 >> 1;
    }
    if (a3 == v12) {
      v13 = (v11 & 1) != 0 ? (_QWORD*)*v9 : (_QWORD*)((char*)v9 - 15);
      if ((unsigned int)memcmp(a2, v13, a3) == 0) {
        LODWORD(v8) = i;
        goto LABEL_16;
      }
    }
    v9 += 3;
  }
  if ((_DWORD)v8 == 4) {
    LODWORD(v8) = -1;
  }
  else {
  LABEL_14:
    GameRoutine_60a060(v7 + 256 + 24LL * (int)v8, a2, a3);
    ++*(_DWORD*)(v7 + 352);
    GameRoutine_c6c4f0(v7, v7 + 136, (unsigned int)v8);
    if ((_DWORD)v8 == 0) {
      *(_QWORD*)(v7 + 512) = 0xFFFFFFFF00000000LL;
      GameRoutine_c69950(v7);
      GameRoutine_c686d0(v7, v7 + 136);
    }
  }

LABEL_16:
  result = GameRoutine_c6db70(v7, v8);
  if (*(_DWORD*)(v7 + 516) != -1) {
    *(_DWORD*)(v7 + 520) = 1065353216;
    if (a4 <= 0.0) {
      v15 = 0.0;
      *(_DWORD*)(v7 + 524) = 1065353216;
    }
    else {
      v15 = (float)(1.0 - *(float*)(v7 + 524)) / a4;
    }
    *(float*)(v7 + 528) = v15;
    return GameRoutine_c6da10(v7);
  }
  return result;
}

#pragma GCC visibility pop
