#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
__int64 strncmp(_QWORD, _QWORD, _QWORD);
extern __int64 (*scene_Manager_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* Manager_Destructor_652400(_QWORD* result);
__int64 Manager_DeletingDestructor_6524a0(_QWORD* a1);
__int64 Manager_Unknown2(__int64 a1);

_QWORD* Manager_Destructor_652400(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = result[20];
  result[20] = 0;
  *result = scene_Manager_vtable;
  if (v1 != 0) {
    v2 = result;
    v3 = fw_memory_g_heap_manager_ptr;
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, v1);
    v5 = v2[20];
    v2[20] = 0;
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v6 = 56;
      }
      return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v5);
    }
  }
  return result;
}

__int64 Manager_DeletingDestructor_6524a0(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = a1[20];
  a1[20] = 0;
  *a1 = scene_Manager_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                  v1);
    v5 = a1[20];
    a1[20] = 0;
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v5);
    }
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7, a1);
}

__int64 Manager_Unknown2(__int64 a1)
{
  int v2;
  __int64 v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  const char* v10;
  __int64 v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  char v15;
  _BYTE* v16;

  if (*(_BYTE*)(a1 + 96) == 1) {
    LOBYTE(v2) = *(_BYTE*)(a1 + 97);
    *(_QWORD*)(a1 + 128) = 0;
  }
  else {
    v2 = *(unsigned __int8*)(a1 + 97);
    if (v2 != 1) {
      return 1;
    }
  }
  do {
    v3 = *(_QWORD*)(a1 + 112);
    if ((v2 & 1) != 0) {
      v4 = *(_QWORD**)(a1 + 104);
    }
    else {
      if (v3 != 0) {
        v5 = *(_QWORD**)(v3 + 16);
        v6 = *(_QWORD*)(a1 + 136);
        v7 = 0;
        if ((unsigned int)strcmp(*v5, v6) != 0) {
          v8 = v5 + 2;
          do {
            v9 = *v8;
            v8 += 2;
            ++v7;
          } while ((unsigned int)strcmp(v9, v6) != 0);
        }
        v10 = (const char*)v5[2 * v7 + 1];
      }
      else {
        v10 = "A_Boot";
      }
      v11 = strlen(v10);
      if ((unsigned int)strncmp(v10, "<exit>", v11) == 0) {
        while (1)
          ;
      }
      if ((unsigned int)strncmp(v10, "<prev>", v11) != 0) {
        v12 = *(_QWORD**)(a1 + 88);
        do {
          v13 = (_QWORD*)*v12++;
          v4 = v13;
        } while ((unsigned int)strncmp(*v13, v10, v11) != 0);
      }
      else {
        v4 = *(_QWORD**)(a1 + 120);
      }
    }
    *(_QWORD*)(a1 + 112) = v4;
    *(_QWORD*)(a1 + 120) = v3;
    *(_WORD*)(a1 + 96) = 0;
    *(_QWORD*)(a1 + 136) = "<unknown>";
    *(_BYTE*)(a1 + 144) = 0;
    v14 = ((__int64 (*)(__int64, _QWORD))v4[1])(a1, *v4);
    v15 = *(_BYTE*)(a1 + 96);
    LOBYTE(v2) = *(_BYTE*)(a1 + 97);
    *(_QWORD*)(a1 + 128) = v14;
  } while ((v15 & 1) != 0 || (v2 & 1) != 0);
  v16 = *(_BYTE**)(a1 + 160);
  *v16 = 0;
  v16[192] = 0;
  v16[384] = 0;
  v16[576] = 0;
  v16[768] = 0;
  v16[960] = 0;
  v16[1152] = 0;
  v16[1344] = 0;
  v16[1536] = 0;
  v16[1728] = 0;
  v16[1920] = 0;
  v16[2112] = 0;
  v16[2304] = 0;
  v16[2496] = 0;
  v16[2688] = 0;
  v16[2880] = 0;
  v16[3072] = 0;
  v16[3264] = 0;
  v16[3456] = 0;
  v16[3648] = 0;
  v16[3840] = 0;
  v16[4032] = 0;
  v16[4224] = 0;
  v16[4416] = 0;
  v16[4608] = 0;
  v16[4800] = 0;
  v16[4992] = 0;
  v16[5184] = 0;
  v16[5376] = 0;
  v16[5568] = 0;
  v16[5760] = 0;
  v16[5952] = 0;
  return 1;
}

#pragma GCC visibility pop
