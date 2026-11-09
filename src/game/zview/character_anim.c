#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_zview_CharacterAnim_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* CharacterAnim_Destructor(_QWORD* result);

_QWORD* CharacterAnim_Destructor(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  _BYTE* v3;
  _BYTE* v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  _BYTE* v8;
  _BYTE* v9;
  bool v10;
  __int64 v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;

  v1 = result[22];
  v2 = result;
  *result = game_zview_CharacterAnim_vtable;
  if (v1 != 0 && (*(_BYTE*)(v1 + 16) & 1) == 0) {
    *(_BYTE*)(v1 + 16) = 1;
    *(_BYTE*)(v1 + 17) &= ~2u;
    *(_BYTE*)(v1 + 18) &= ~2u;
    *(_BYTE*)(v1 + 19) &= ~2u;
    *(_BYTE*)(v1 + 20) &= ~2u;
    v3 = *(_BYTE**)(v1 + 8);
    v3[632] = 0;
    v3[664] = 0;
    v3[696] = 0;
    v3[728] = 0;
    result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v1 + 64LL))(v1);
    v4 = *(_BYTE**)(v1 + 8);
    v5 = v4[300] == 3 && v4[301] == 3;
    if (v5 || v4[302] == 1) {
      result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v1 + 72LL))(v1);
    }
  }
  v6 = v2[33];
  if (v6 != 0 && (*(_BYTE*)(v6 + 16) & 1) == 0) {
    v7 = v2[33];
    *(_BYTE*)(v6 + 16) = 1;
    *(_BYTE*)(v6 + 17) &= ~2u;
    *(_BYTE*)(v6 + 18) &= ~2u;
    *(_BYTE*)(v6 + 19) &= ~2u;
    *(_BYTE*)(v6 + 20) &= ~2u;
    v8 = *(_BYTE**)(v6 + 8);
    v8[632] = 0;
    v8[664] = 0;
    v8[696] = 0;
    v8[728] = 0;
    result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 64LL))(v7);
    v9 = *(_BYTE**)(v6 + 8);
    v10 = v9[300] == 3 && v9[301] == 3;
    if (v10 || v9[302] == 1) {
      result = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v6 + 72LL))(v6);
    }
  }
  v11 = v2[34];
  v12 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v11 != 0) {
    v13 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v2[35] = v11;
    v14 = 128;
    if (*(_QWORD*)(v13 + 200) == 0) {
      v14 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v13 + v14, v11);
  }
  v15 = v2[28];
  if (v15 != 0) {
    v16 = *v12;
    v2[29] = v15;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v16 + v17, v15);
  }
  v18 = v2[25];
  if (v18 != 0) {
    v19 = *v12;
    v2[26] = v18;
    v20 = 128;
    if (*(_QWORD*)(v19 + 200) == 0) {
      v20 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v19 + v20, v18);
  }
  v21 = v2[17];
  if (v21 != 0) {
    v22 = *v12;
    v2[18] = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v22 + v23, v21);
  }
  v24 = v2[14];
  if (v24 != 0) {
    v25 = *v12;
    v2[15] = v24;
    v26 = 128;
    if (*(_QWORD*)(v25 + 200) == 0) {
      v26 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(v25 + v26, v24);
  }
  return result;
}

#pragma GCC visibility pop
