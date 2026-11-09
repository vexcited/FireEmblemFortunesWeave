#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MemoryInputStream_Destructor(__int64 a1);
__int64 MemoryInputStream_6b51e0(__int64 result);
__int64 MemoryInputStream_DeletingDestructor(__int64 a1);
__int64 MemoryInputStream_Unknown2(__int64 a1, __int64 a2);
__int64 MemoryInputStream_Unknown3(__int64 a1);
unsigned __int64 MemoryInputStream_Unknown4(__int64 a1, unsigned __int64 a2);

__int64 MemoryInputStream_Destructor(__int64 a1)
{
  __int64 result;

  result = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  *(_DWORD*)(a1 + 60) = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  return result;
}

__int64 MemoryInputStream_6b51e0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  char v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = *(_QWORD*)(result + 64);
  v2 = result;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)(result + 72);
    if (v1 == v4) {
      goto LABEL_12;
    }
    v5 = *(_QWORD*)(result + 72);
    do {
      v6 = *(_BYTE*)(v5 - 32);
      v5 -= 32;
      if ((v6 & 1) != 0) {
        v7 = *(_QWORD*)(v4 - 16);
        if (v7 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v8 = 128;
          }
          else {
            v8 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8, v7);
        }
      }
      v4 = v5;
    } while (v5 != v1);
    v9 = *(_QWORD*)(v2 + 64);
    *(_QWORD*)(v2 + 72) = v1;
    v1 = v9;
    if (v9 != 0) {
    LABEL_12:
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v10 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10, v1);
    }
  }
  v11 = *(_QWORD*)(v2 + 40);
  if (v11 != 0) {
    v12 = *(_QWORD*)(v2 + 48);
    if (v11 == v12) {
      goto LABEL_26;
    }
    v13 = *(_QWORD*)(v2 + 48);
    do {
      v14 = *(_BYTE*)(v13 - 32);
      v13 -= 32;
      if ((v14 & 1) != 0) {
        v15 = *(_QWORD*)(v12 - 16);
        if (v15 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
            v16 = 128;
          }
          else {
            v16 = 56;
          }
          result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v16, v15);
        }
      }
      v12 = v13;
    } while (v13 != v11);
    v17 = *(_QWORD*)(v2 + 40);
    *(_QWORD*)(v2 + 48) = v11;
    v11 = v17;
    if (v17 != 0) {
    LABEL_26:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v18 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v18, v11);
    }
  }
  if ((*(_BYTE*)v2 & 1) != 0) {
    v19 = *(_QWORD*)(v2 + 16);
    if (v19 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
        v20 = 56;
      }
      return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v20, v19);
    }
  }
  return result;
}

__int64 MemoryInputStream_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  (*(void (**)(__int64))(*(_QWORD*)a1 + 24LL))(a1);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

__int64 MemoryInputStream_Unknown2(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 result;

  v2 = *(_QWORD*)(a1 + 64);
  if (v2 != 0) {
    if (a2 != 0) {
      return 0;
    }
    else {
      result = *(_QWORD*)(a1 + 72);
      *(_QWORD*)(a1 + 40) = v2;
      *(_QWORD*)(a1 + 48) = result;
    }
  }
  else {
    if (*(_DWORD*)(a1 + 60) == 0) {
      *(_DWORD*)(a1 + 60) = 12;
    }
    return 0;
  }
  return result;
}

__int64 MemoryInputStream_Unknown3(__int64 a1)
{
  *(_QWORD*)(a1 + 64) = 0;
  *(_QWORD*)(a1 + 72) = 0;
  return 1;
}

unsigned __int64 MemoryInputStream_Unknown4(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  unsigned __int64 v11;

  if (*(_DWORD*)(a1 + 60) != 0) {
    v5 = *(_QWORD*)(a1 + 16);
    result = *(_QWORD*)(a1 + 24);
    if (v5 == result) {
      return 0;
    }
    if (v5 != 0) {
      if (result >= a2) {
        v6 = 0;
      }
      else {
        v6 = *(_QWORD*)(a1 + 24);
      }
      if (result < a2) {
        result = 0;
      }
    }
    else {
      if (result < a2) {
        *(_QWORD*)(a1 + 24) = 0;
        return result;
      }
      v6 = 0;
    }
  LABEL_23:
    v11 = result - (a2 - v6);
    *(_QWORD*)(a1 + 16) = 0;
    *(_QWORD*)(a1 + 24) = v11;
    if (result != a2 - v6) {
      memmove(*(_QWORD*)(a1 + 40), *(_QWORD*)(a1 + 40) + a2 - v6, v11);
    }
    return a2;
  }
  else {
    v6 = 0;
  LABEL_6:
    v7 = (*(__int64 (**)(__int64, _QWORD, _QWORD))(*(_QWORD*)a1 + 16LL))(
        a1, *(_QWORD*)(a1 + 40), *(_QWORD*)(a1 + 48));
    result = *(_QWORD*)(a1 + 24);
    if (v7 != 0) {
      v8 = *(_QWORD*)(a1 + 8);
      *(_QWORD*)(a1 + 24) = v7;
      *(_QWORD*)(a1 + 32) = -1;
      v9 = v8 + result;
      result = v7;
      *(_QWORD*)(a1 + 8) = v9;
      *(_QWORD*)(a1 + 16) = 0;
    }
    while (*(_QWORD*)(a1 + 16) != result) {
      if (result + v6 >= a2) {
        goto LABEL_23;
      }
      v10 = *(_DWORD*)(a1 + 60);
      *(_QWORD*)(a1 + 24) = 0;
      v6 += result;
      if (v10 == 0) {
        goto LABEL_6;
      }
      result = *(_QWORD*)(a1 + 24);
    }
    return v6;
  }
}

#pragma GCC visibility pop
