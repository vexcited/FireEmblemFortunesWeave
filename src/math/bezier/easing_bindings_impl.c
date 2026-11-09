#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CScriptArray_GetSize(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__n128 CScriptArray_At_1971f0(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
float GameRoutine_619100(__int64, long double, float);
float EasingBindings_619bc0(__int64 a1, float a2, float a3);
__int64 EasingBindings_b2db40(__int64 result);

float EasingBindings_619bc0(__int64 a1, float a2, float a3)
{
  float v4;
  float v5;
  float v7;
  float v8;
  unsigned int v9;
  int v10;
  float v11;
  int v12;
  unsigned int i;
  __int64 v14;
  float v15;
  float v16;
  unsigned int v17;
  float v18;
  float v19;
  __int64 v20;
  float v21;
  float v22;
  __int64 v23;
  __int64 v24;
  float v25;
  long double v26;
  __int64 v27;

  v4 = 0.0;
  if (a3 > 0.0) {
    v5 = 0.0;
    if (a2 > a3) {
      v7 = a3;
    }
    else {
      v7 = a2;
    }
    if (a2 >= 0.0) {
      v8 = v7;
    }
    else {
      v8 = 0.0;
    }
    v9 = ((__int64 (*)(void))CScriptArray_GetSize)();
    v10 = CScriptArray_GetSize(a1);
    v11 = 0.0;
    if (v10 != 0) {
      v12 = v10;
      for (i = 0; i != v12; ++i) {
        v14 = ((__int64 (*)(__int64, _QWORD))CScriptArray_At_1971f0)(a1, i);
        v11 = v11 + *(float*)(v14 + 20);
      }
    }
    v15 = v8 / a3;
    v16 = 0.0;
    v17 = 0;
    if (v9 != 0) {
      v5 = 0.0;
      while (1) {
        v20 = ((__int64 (*)(__int64, _QWORD))CScriptArray_At_1971f0)(a1, v17);
        v21 = *(float*)(v20 + 20);
        v22 = v5 + v21;
        if ((float)((float)(v5 + v21) / v11) >= v15) {
          goto LABEL_22;
        }
        v23 = v20;
        v24 = *(_QWORD*)(v20 + 24);
        v18 = v21;
        if (v24 != 0) {
          if ((unsigned int)CScriptArray_GetSize(v24) > 1) {
            v25 =
                *(float*)((__int64 (*)(_QWORD, __int64))CScriptArray_At_1971f0)(
                    *(_QWORD*)(v23 + 24), 1);
            v19 = (float)(v25 - *(float*)((__int64 (*)(
                                    _QWORD, _QWORD))CScriptArray_At_1971f0)(
                                    *(_QWORD*)(v23 + 24), 0)) /
                  *(float*)(v23 + 20);
            goto LABEL_15;
          }
          v18 = *(float*)(v23 + 20);
        }
        v19 = 1.0 / v18;
      LABEL_15:
        v16 = v16 + (float)(v19 * v21);
        v5 = v22;
        if (v9 == ++v17) {
          v5 = v22;
          v17 = v9;
          goto LABEL_22;
        }
      }
    }
    v21 = 0.0;
  LABEL_22:
    *(__n128*)&v26 = CScriptArray_At_1971f0(a1, v17);
    *(float*)&v26 = -(float)(v5 - (float)(v11 * v15));
    return (float)(v16 + (float)(GameRoutine_619100(v27, v26, v21) * v21)) /
           v11;
  }
  return v4;
}

__int64 EasingBindings_b2db40(__int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = *(__int64**)(result + 24);
  if (v1 != nullptr) {
    v2 = *v1;
    v3 = fw_memory_g_heap_manager_ptr;
    if (*v1 != 0) {
      v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      v1[1] = v2;
      v5 = 128;
      if (*(_QWORD*)(v4 + 200) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(v4 + v5, v2);
    }
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v1);
  }
  return result;
}

#pragma GCC visibility pop
