#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* VariableAssign_62dbb0(_QWORD*, __int64, unsigned __int64);
__int64 GameRoutine_627e70(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d9b900(__int64, const char*, __int64, const char*, __int64,
                           __int64*, int, __int64*);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64* VariableAssign_62da90(__int64*, __int64, unsigned __int64);
extern _UNKNOWN as_g_context_slots;
extern __int64 (*GameData_1f8e750[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* as_g_script_manager_ptr;
__int64 as_Manager_executeContext_lambda0_Invoke_630510(__int64 result,
                                                        __int64 a2);
__int64 as_Manager_executeContext_lambda0_Invoke_630650(__int64 result,
                                                        __int64 a2);
__int64* as_Manager_executeContext_lambda0_Invoke_630790(__int64* result,
                                                         __int64 a2);
__int64 as_Manager_executeContext(__int64 a1, const char* a2, __int64 a3,
                                  __int64* a4, int a5);

__int64 as_Manager_executeContext_lambda0_Invoke_630510(__int64 result,
                                                        __int64 a2)
{
  __int64 v2;

  if (*(_QWORD*)(result + 8) != 0) {
    v2 = result;
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)a2 + 24LL) +
                                      200LL))(*(_QWORD*)(*(_QWORD*)a2 + 24LL));
    **(_DWORD**)(v2 + 8) = result;
  }
  return result;
}

__int64 as_Manager_executeContext_lambda0_Invoke_630650(__int64 result,
                                                        __int64 a2)
{
  __int64 v2;

  if (*(_QWORD*)(result + 8) != 0) {
    v2 = result;
    result = (*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)a2 + 24LL) +
                                      184LL))(*(_QWORD*)(*(_QWORD*)a2 + 24LL));
    **(_BYTE**)(v2 + 8) = (unsigned __int8)result != 0;
  }
  return result;
}

__int64* as_Manager_executeContext_lambda0_Invoke_630790(__int64* result,
                                                         __int64 a2)
{
  __int64* v2;
  __int64* v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;

  if (result[1] != 0) {
    v2 = result;
    v3 = (__int64*)(*(__int64 (**)(_QWORD))(**(_QWORD**)(*(_QWORD*)a2 + 24LL) +
                                            240LL))(
        *(_QWORD*)(*(_QWORD*)a2 + 24LL));
    result = (__int64*)v2[1];
    if (result != v3) {
      v4 = *(unsigned __int8*)v3;
      if ((*(_BYTE*)result & 1) != 0) {
        if ((v4 & 1) != 0) {
          v8 = v3[2];
        }
        else {
          v8 = (__int64)v3 + 1;
        }
        if ((v4 & 1) != 0) {
          v9 = v3[1];
        }
        else {
          v9 = v4 >> 1;
        }
        return VariableAssign_62da90(result, v8, v9);
      }
      else if ((v4 & 1) != 0) {
        return VariableAssign_62dbb0(result, v3[2], v3[1]);
      }
      else {
        v5 = *v3;
        v6 = v3[1];
        v7 = v3[2];
        result[1] = v6;
        result[2] = v7;
        *result = v5;
      }
    }
  }
  return result;
}

__int64 as_Manager_executeContext(__int64 a1, const char* a2, __int64 a3,
                                  __int64* a4, int a5)
{
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13[2];
  __int64 v14;
  _QWORD v15[4];
  _QWORD* v16;
  unsigned int v17;

  v17 = 0;
  if (a3 == 0) {
    return 0;
  }
  v13[1] = 0;
  v14 = 0;
  v13[0] = 0;
  GameRoutine_d9b900(a1, "s32", 3, a2, a3, a4, a5, v13);
  if (v12 != 0x2000) {
    v5 = (_QWORD*)((char*)&as_g_context_slots + 16 * v12);
    v6 = v5[1];
    if (v6 != 0 && *v5 == v11 && *(_DWORD*)(v6 + 52) == 1) {
      v16 = v15;
      v7 = *as_g_script_manager_ptr;
      v15[0] = GameData_1f8e750;
      v15[1] = &v17;
      GameRoutine_627e70(v7, v6, 0, v15, 0);
      if (v16 == v15) {
        v8 = 32;
      }
      else {
        if (v16 == nullptr) {
          goto LABEL_12;
        }
        v8 = 40;
      }
      (*(void (**)(void))(*v16 + v8))();
    }
  }

LABEL_12:
  if ((v13[0] & 1) != 0 && v14 != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v14);
  }
  return v17;
}

#pragma GCC visibility pop
