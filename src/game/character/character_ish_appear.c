#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 CmdBtlZoomIn_10a04e0(__int64*, float*, float*, __int64);
__int64 GameRoutine_109fee0(_QWORD, float, float);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_200f0b0[])();
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterIshAppear_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
struct PseudoSret GameRoutine_108d740(_QWORD, _QWORD);
__int64 CharacterIshAppear_Unknown5(__int64 result);
_QWORD* game_character_CharacterIshAppear_Disappear(_QWORD* a1);
__n128 CharacterIshAppear_Destructor(_QWORD* a1);
__int64 CharacterIshAppear_DeletingDestructor(_QWORD* a1);
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
extern __int64 (*GameData_20076d8[])();
extern __int64 (*GameData_2007758[])();
__int64 game_character_CharacterIshAppear_Appear_lambda0_Invoke(__int64 result);
__int64
game_character_CharacterIshAppear_Disappear_lambda0_Invoke(__int64 result);

__int64 CharacterIshAppear_Unknown5(__int64 result)
{
  float* v1;
  float* v2;
  _QWORD* v3;
  float v4;
  __int64 v5;
  float v6;
  float v7;
  float v8;
  float v9;
  bool v10;
  float v11;
  float v12;
  float v14;
  float v15;
  float* v16;
  float* v17;
  float v18;
  float v19;
  float* v20;
  float v21;
  float v22;
  float v23;
  bool v24;
  float v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;

  v1 = *(float**)(result + 56);
  v2 = *(float**)(result + 64);
  v3 = (_QWORD*)(result + 56);
  if (v1 == v2) {
    return result;
  }
  v4 = *(float*)(result + 84);
  v5 = result;
  v6 = v4;
  do {
    v7 = *v1;
    if (v6 <= *v1) {
      v8 = v6;
    }
    else {
      v8 = *v1;
    }
    if (v4 < v7) {
      v9 = *v1;
    }
    else {
      v9 = v4;
    }
    v10 = v7 < 0.0f;
    if (v7 >= 0.0f) {
      v11 = v9;
    }
    else {
      v11 = v4;
    }
    v4 = v1[1];
    if (!v10) {
      v6 = v8;
    }
    if (v4 < 0.0f) {
      goto LABEL_3;
    }
    if (v6 > v4) {
      v6 = v1[1];
    }
    if (v11 >= v4) {
    LABEL_3:
      v4 = v11;
    }
    v1 += 16;
  } while (v1 != v2);
  v12 = *(float*)(result + 80);
  if (v6 > v12 || v12 >= v4) {
    return result;
  }
  v14 = (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 496LL) + 16LL) *
                16.683f) /
        1000.0f;
  result = GameRoutine_109fee0(result + 56, v12, v12 + v14);
  v15 = *(float*)(v5 + 84);
  v16 = *(float**)(v5 + 56);
  v17 = *(float**)(v5 + 64);
  v18 = v14 + *(float*)(v5 + 80);
  *(float*)(v5 + 80) = v18;
  if (v16 == v17) {
    v19 = v15;
  }
  else {
    v19 = v15;
    v20 = v16;
    do {
      v21 = *v20;
      if (v19 <= *v20) {
        v22 = v19;
      }
      else {
        v22 = *v20;
      }
      if (v15 < v21) {
        v23 = *v20;
      }
      else {
        v23 = v15;
      }
      v24 = v21 < 0.0f;
      if (v21 >= 0.0f) {
        v25 = v23;
      }
      else {
        v25 = v15;
      }
      v15 = v20[1];
      if (!v24) {
        v19 = v22;
      }
      if (v15 < 0.0f) {
        goto LABEL_28;
      }
      if (v19 > v15) {
        v19 = v20[1];
      }
      if (v25 >= v15) {
      LABEL_28:
        v15 = v25;
      }
      v20 += 16;
    } while (v20 != v17);
  }
  if (v19 <= v18 && v18 < v15) {
    return result;
  }
  if (v16 == nullptr) {
    goto LABEL_62;
  }
  if (v16 == v17) {
    *(_QWORD*)(v5 + 64) = v16;
    goto LABEL_59;
  }
  do {
    result = *((_QWORD*)v17 - 2);
    if (v17 - 12 == (float*)result) {
      v26 = 32;
    LABEL_53:
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)result + v26))((__int64)result);
      goto LABEL_54;
    }
    if (result != 0) {
      v26 = 40;
      goto LABEL_53;
    }
  LABEL_54:
    v17 -= 16;
  } while (v17 != v16);
  v27 = *(_QWORD*)(v5 + 56);
  *(_QWORD*)(v5 + 64) = v16;
  if (v27 != 0) {
  LABEL_59:
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v28 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v28);
  }
LABEL_62:
  v3[2] = 0;
  v3[3] = 0;
  *v3 = 0;
  v3[1] = 0;
  return result;
}

_QWORD* game_character_CharacterIshAppear_Disappear(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* result;
  __int64 v15;
  _QWORD v16[4];
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  int v20;
  int v21;

  v1 = a1[4];
  if (v1 != 0) {
    v3 = *(_QWORD*)(v1 + 8);
    v4 = a1[5];
    if (v3 != -1 && v4 != 0) {
      *(_DWORD*)(*(_QWORD*)(v4 + 80) + 72LL) = -1082130432;
      *(struct PseudoSret*)(&v18) =
          GameRoutine_108d740(*(_QWORD*)(v4 + 80), "Btl_Ish_Warp_Out");
      v6 = v19;
      if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  v7 = a1[7];
  if (v7 == 0) {
    goto LABEL_22;
  }
  v8 = a1[8];
  if (v7 == v8) {
  LABEL_19:
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12);
    goto LABEL_22;
  }
  do {
    v10 = *(_QWORD**)(v8 - 16);
    if ((_QWORD*)(v8 - 48) == v10) {
      v9 = 32;
    LABEL_13:
      (*(void (**)(__int64))(*v10 + v9))((__int64)v10);
      goto LABEL_14;
    }
    if (v10 != nullptr) {
      v9 = 40;
      goto LABEL_13;
    }
  LABEL_14:
    v8 -= 64;
  } while (v8 != v7);
  v11 = a1[7];
  a1[8] = v7;
  if (v11 != 0) {
    goto LABEL_19;
  }
LABEL_22:
  a1[9] = 0;
  a1[10] = 0;
  a1[7] = 0;
  a1[8] = 0;
  v16[0] = GameData_200f0b0;
  v16[1] = a1;
  v17 = v16;
  v21 = 1034594987;
  v20 = -1082130432;
  v13 = CmdBtlZoomIn_10a04e0(a1 + 7, (float*)&v21, (float*)&v20, (__int64)v16);
  result = v17;
  a1[8] = v13;
  if (result == v16) {
    v15 = 32;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v15))((__int64)result);
  }
  else if (result != nullptr) {
    v15 = 40;
    return (_QWORD*)(*(__int64 (**)(__int64))(*result + v15))((__int64)result);
  }
  return result;
}

__n128 CharacterIshAppear_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __n128 result;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = a1[7];
  *a1 = game_character_CharacterIshAppear_vtable;
  if (v1 == 0) {
    goto LABEL_14;
  }
  v3 = a1[8];
  if (v1 == v3) {
  LABEL_11:
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v8);
    goto LABEL_14;
  }
  do {
    v6 = *(_QWORD**)(v3 - 16);
    if ((_QWORD*)(v3 - 48) == v6) {
      v4 = 32;
    LABEL_5:
      (*(void (**)(__int64))(*v6 + v4))((__int64)v6);
      goto LABEL_6;
    }
    if (v6 != nullptr) {
      v4 = 40;
      goto LABEL_5;
    }
  LABEL_6:
    v3 -= 64;
  } while (v3 != v1);
  v7 = a1[7];
  a1[8] = v1;
  if (v7 != 0) {
    goto LABEL_11;
  }
LABEL_14:
  v9 = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (v9 != 0) {
    return std___1___shared_weak_count___release_weak(v9);
  }
  return result;
}

__int64 CharacterIshAppear_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v1 = a1[7];
  *a1 = game_character_CharacterIshAppear_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 == 0) {
    goto LABEL_14;
  }
  v4 = a1[8];
  if (v1 == v4) {
  LABEL_11:
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
    goto LABEL_14;
  }
  do {
    v6 = *(_QWORD**)(v4 - 16);
    if ((_QWORD*)(v4 - 48) == v6) {
      v5 = 32;
    LABEL_5:
      (*(void (**)(__int64))(*v6 + v5))((__int64)v6);
      goto LABEL_6;
    }
    if (v6 != nullptr) {
      v5 = 40;
      goto LABEL_5;
    }
  LABEL_6:
    v4 -= 64;
  } while (v4 != v1);
  v7 = a1[7];
  a1[8] = v1;
  if (v7 != 0) {
    goto LABEL_11;
  }
LABEL_14:
  v9 = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (v9 != 0) {
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v10 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v10);
}

__int64 game_character_CharacterIshAppear_Appear_lambda0_Invoke(__int64 result)
{

#pragma clang fp contract(off)
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  struct {
    __int64 (**v7)();
    int v8;
    char gap12_[20];
    __int64 (***v9)();
  } v7_;

  v1 = *(_QWORD**)(result + 8);
  v2 = v1[4];
  if (v2 == 0) {
    return result;
  }
  v3 = v1[5];
  if (*(_QWORD*)(v2 + 8) == -1 || v3 == 0) {
    return result;
  }
  *(_BYTE*)(v1[1] + 289LL) = 1;
  if (*(float*)(v3 + 348) == 0x1.0000000000000p+0f) {
    return result;
  }
  *(_DWORD*)(v3 + 348) = 1065353216;
  v7_.v7 = GameData_20076d8;
  v7_.v8 = 1065353216;
  v7_.v9 = &v7_.v7;
  CharacterBuilder_1083e90((_QWORD*)v3, (__int64)&v7_.v7);
  if (v7_.v9 == &v7_.v7) {
    v5 = 4;
    goto LABEL_11;
  }
  if (v7_.v9 != nullptr) {
    v5 = 5;
  LABEL_11:
    ((__int64 (*)(__int64))(*v7_.v9)[v5])((__int64)v7_.v9);
  }
  v7_.v7 = GameData_2007758;
  v7_.v9 = &v7_.v7;
  v7_.v8 = 1065353216;
  CharacterBuilder_1083e90((_QWORD*)v3, (__int64)&v7_.v7);
  result = (__int64)v7_.v9;
  if (v7_.v9 == &v7_.v7) {
    v6 = 4;
  }
  else {
    if (v7_.v9 == nullptr) {
      return result;
    }
    v6 = 5;
  }
  return ((__int64 (*)(__int64))(*v7_.v9)[v6])((__int64)v7_.v9);
}

__int64

game_character_CharacterIshAppear_Disappear_lambda0_Invoke(__int64 result)
{

#pragma clang fp contract(off)
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  struct {
    __int64 (**v7)();
    int v8;
    char gap12_[20];
    __int64 (***v9)();
  } v7_;

  v1 = *(_QWORD**)(result + 8);
  v2 = v1[4];
  if (v2 == 0) {
    return result;
  }
  v3 = v1[5];
  if (*(_QWORD*)(v2 + 8) == -1 || v3 == 0) {
    return result;
  }
  *(_BYTE*)(v1[1] + 289LL) = 0;
  if (*(float*)(v3 + 348) == 0x0.0p+0f) {
    return result;
  }
  *(_DWORD*)(v3 + 348) = 0;
  v7_.v8 = 0;
  v7_.v7 = GameData_20076d8;
  v7_.v9 = &v7_.v7;
  CharacterBuilder_1083e90((_QWORD*)v3, (__int64)&v7_.v7);
  if (v7_.v9 == &v7_.v7) {
    v5 = 4;
    goto LABEL_11;
  }
  if (v7_.v9 != nullptr) {
    v5 = 5;
  LABEL_11:
    ((__int64 (*)(__int64))(*v7_.v9)[v5])((__int64)v7_.v9);
  }
  v7_.v8 = 0;
  v7_.v7 = GameData_2007758;
  v7_.v9 = &v7_.v7;
  CharacterBuilder_1083e90((_QWORD*)v3, (__int64)&v7_.v7);
  result = (__int64)v7_.v9;
  if (v7_.v9 == &v7_.v7) {
    v6 = 4;
  }
  else {
    if (v7_.v9 == nullptr) {
      return result;
    }
    v6 = 5;
  }
  return ((__int64 (*)(__int64))(*v7_.v9)[v6])((__int64)v7_.v9);
}

#pragma GCC visibility pop
