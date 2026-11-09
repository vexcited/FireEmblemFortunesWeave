#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64* Model_a66700(__int64* result, int);
extern __int64 (*wld_LocatorModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* LocatorModule_Destructor(_QWORD* result);

_QWORD* LocatorModule_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  _QWORD* v18;
  __int64 v19;

  v1 = (_QWORD*)result[5];
  v2 = (_QWORD*)result[6];
  v3 = result;
  *result = wld_LocatorModule_vtable;
  v4 = fw_memory_g_heap_manager_ptr;
  v5 = v1;
  if (v1 != v2) {
    do {
      v8 = (__int64*)*--v2;
      v7 = v8;
      *v2 = 0;
      if (v8 != nullptr) {
        if (*((_BYTE*)v7 + 28) == 1) {
          v9 = *v7;
          v10 = v7[3];
          *((_DWORD*)v7 + 32) = 0;
          if ((v10 & 0x100000000LL) != 0) {
            *((_BYTE*)v7 + 28) = 0;
            v11 = v7;
            Model_a66700(*(__int64**)(v9 + 24), v10);
            v7 = v11;
          }
          *(_BYTE*)(*(_QWORD*)(v9 + 24) + 504LL) = 1;
        }
        if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v6, v7);
      }
    } while (v2 != v1);
    v5 = (_QWORD*)v3[5];
  }
  v3[6] = v1;
  if (v5 != nullptr) {
    if (v5 == v1) {
      v3[6] = v5;
    }
    else {
      do {
        v14 = (__int64*)*--v1;
        v13 = v14;
        *v1 = 0;
        if (v14 != nullptr) {
          if (*((_BYTE*)v13 + 28) == 1) {
            v15 = *v13;
            v16 = v13[3];
            *((_DWORD*)v13 + 32) = 0;
            if ((v16 & 0x100000000LL) != 0) {
              *((_BYTE*)v13 + 28) = 0;
              v17 = v13;
              Model_a66700(*(__int64**)(v15 + 24), v16);
              v13 = v17;
            }
            *(_BYTE*)(*(_QWORD*)(v15 + 24) + 504LL) = 1;
          }
          if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
            v12 = 128;
          }
          else {
            v12 = 56;
          }
          result =
              (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v12, v13);
        }
      } while (v1 != v5);
      v18 = (_QWORD*)v3[5];
      v3[6] = v5;
      v5 = v18;
      if (v18 == nullptr) {
        return result;
      }
    }
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) == 0) {
      v19 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v19, v5);
  }
  return result;
}

#pragma GCC visibility pop
