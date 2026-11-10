#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_a7c2c0(_QWORD, _QWORD);
__int64 GameRoutine_d3d7a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d3d960(void);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_character_CharacterTrailModule_vtable[])();
extern __int64 fw_memory_g_heap_manager;
__int64 CharacterTrailModule_Destructor(__int64 a1);
__int64 CharacterTrailModule_d3c310(__int64 a1);
__int64 CharacterTrailModule_Unknown9(__int64 result);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_d3de40(void);
__int64 CharacterTrailModule_d3d7a0(__int64* a1, __int64 a2, __int64 a3);
__int64 CharacterTrailModule_d3d960(__int64 a1, __int64 a2);
__int64 CharacterTrailModule_d3daa0(__int64* a1, int* a2, __int64* a3,
                                    __int64 a4);
__int64* CharacterTrailModule_d3dce0(__int64* result, _QWORD* a2);
__int64 game_character_CharacterTrailModule_CharacterTrailModule_lambda0_Invoke(
    __int64 result);

__int64 CharacterTrailModule_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  int v5;
  __int64 v6;
  char* v7;
  char* v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 result;

  *(_QWORD*)a1 = game_character_CharacterTrailModule_vtable;
  v2 = *(_QWORD*)(a1 + 48);
  if (v2 != 0) {
    v3 = *(_QWORD*)(a1 + 56);
    if (*(_QWORD*)(v2 + 8) != -1 && v3 != 0) {
      v5 = *(_DWORD*)(a1 + 192);
      if (v5 != 0) {
        v6 = *(_QWORD*)(v3 + 72);
        v7 = *(char**)(v6 + 56);
        v8 = *(char**)(v6 + 64);
        if (v7 != v8) {
          do {
            if (v5 == *(_DWORD*)v7) {
              *(_DWORD*)v7 = 0;
            }
            v7 += 80;
          } while (v7 != v8);
          v7 = *(char**)(v6 + 56);
          v8 = *(char**)(v6 + 64);
        }
        if (0xCCCCCCCCCCCCCCCDLL * ((v8 - v7) >> 4) >= 0x40) {
          v9 = GameRoutine_d3d960();
          GameRoutine_d3d7a0(v6 + 56, v9, *(_QWORD*)(v6 + 64));
        }
      }
    }
  }
  v10 = *(_QWORD**)(a1 + 264);
  if (v10 != nullptr) {
    GameRoutine_a7c2c0(*v10, v10);
  }
  v11 = *(_QWORD**)(a1 + 272);
  if (v11 != nullptr) {
    GameRoutine_a7c2c0(*v11, v11);
  }
  v12 = *(_QWORD**)(a1 + 280);
  if (v12 != nullptr) {
    GameRoutine_a7c2c0(*v12, v12);
  }
  v13 = *(_QWORD**)(a1 + 288);
  v14 = *(_QWORD**)(a1 + 296);
  if (v13 != v14) {
    do {
      if (*v13 != 0) {
        GameRoutine_a7c2c0(*(_QWORD*)*v13, *v13);
      }
      v15 = (_QWORD*)v13[1];
      if (v15 != nullptr) {
        GameRoutine_a7c2c0(*v15, v15);
      }
      v13 += 2;
    } while (v13 != v14);
    v13 = *(_QWORD**)(a1 + 288);
  }
  if (v13 != nullptr) {
    v16 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 296) = v13;
    v17 = 128;
    if (*(_QWORD*)(v16 + 200) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(v16 + v17, v13);
  }
  v18 = *(_QWORD*)(a1 + 232);
  if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
    std___1___shared_weak_count___release_weak(v18);
    if ((*(_BYTE*)(a1 + 200) & 1) == 0) {
      goto LABEL_41;
    }
  }
  else if ((*(_BYTE*)(a1 + 200) & 1) == 0) {
    goto LABEL_41;
  }
  v19 = *(_QWORD*)(a1 + 216);
  if (v19 != 0) {
    v20 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v20 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v20, v19);
  }

LABEL_41:
  v21 = *(_QWORD*)(a1 + 96);
  if (v21 != 0) {
    v22 = fw_memory_g_heap_manager;
    *(_QWORD*)(a1 + 104) = v21;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free(v22 + v23, v21);
  }
  result = *(_QWORD*)(a1 + 48);
  if (result != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 CharacterTrailModule_d3c310(__int64 a1)
{
  float v1;
  _QWORD* v2;
  char v3;
  __int64 v4;
  _BYTE* v5;
  char v6;
  _QWORD* v7;
  char v8;
  __int64 v9;
  _BYTE* v10;
  float v11;
  char v12;
  _QWORD* v13;
  char v14;
  __int64 v15;
  _BYTE* v16;

  if (*(_BYTE*)(a1 + 128) == 1) {
    v1 = *(float*)(a1 + 124);
    if (v1 >= (float)(*(float*)(*(_QWORD*)(a1 + 24) + 8LL) / 60.0) ||
        (*(_BYTE*)(a1 + 88) & 1) != 0) {
      goto LABEL_11;
    }
    v2 = *(_QWORD**)(a1 + 80);
    if (v2 != nullptr && *((_BYTE*)v2 + 16) != 0) {
      v3 = *((_BYTE*)v2 + 17);
      *((_BYTE*)v2 + 16) = 0;
      v4 = a1;
      *((_BYTE*)v2 + 17) = v3 | 2;
      *((_BYTE*)v2 + 18) |= 2u;
      *((_BYTE*)v2 + 19) |= 2u;
      *((_BYTE*)v2 + 20) |= 2u;
      v5 = (_BYTE*)v2[1];
      v5[632] = 0;
      v5[664] = 0;
      v5[696] = 0;
      v5[728] = 0;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v2 + 72LL))(
          (void*)v2, v2);
      v1 = *(float*)(v4 + 124);
      v6 = *(_BYTE*)(v4 + 128);
      a1 = v4;
    }
    else {
      v6 = 1;
    }
    *(_BYTE*)(a1 + 88) = 1;
    if ((v6 & 1) != 0) {
    LABEL_11:
      if (v1 >= (float)(*(float*)(a1 + 132) +
                        (float)(*(float*)(*(_QWORD*)(a1 + 32) + 8LL) / 60.0)) &&
          (*(_BYTE*)(a1 + 88) & 1) == 0) {
        v7 = *(_QWORD**)(a1 + 80);
        if (v7 != nullptr && *((_BYTE*)v7 + 16) != 0) {
          v8 = *((_BYTE*)v7 + 17);
          *((_BYTE*)v7 + 16) = 0;
          v9 = a1;
          *((_BYTE*)v7 + 17) = v8 | 2;
          *((_BYTE*)v7 + 18) |= 2u;
          *((_BYTE*)v7 + 19) |= 2u;
          *((_BYTE*)v7 + 20) |= 2u;
          v10 = (_BYTE*)v7[1];
          v10[632] = 0;
          v10[664] = 0;
          v10[696] = 0;
          v10[728] = 0;
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
              *v7 + 72LL))((void*)v7, v7);
          a1 = v9;
        }
        *(_BYTE*)(a1 + 88) = 1;
      }
    }
  }
  v11 = *(float*)(a1 + 120);
  v12 = (v11 <= 0.0) | *(_BYTE*)(a1 + 88);
  if (v11 <= 0.0 && (*(_BYTE*)(a1 + 88) & 1) == 0) {
    v13 = *(_QWORD**)(a1 + 80);
    if (v13 != nullptr && *((_BYTE*)v13 + 16) != 0) {
      v14 = *((_BYTE*)v13 + 17);
      *((_BYTE*)v13 + 16) = 0;
      v15 = a1;
      *((_BYTE*)v13 + 17) = v14 | 2;
      *((_BYTE*)v13 + 18) |= 2u;
      *((_BYTE*)v13 + 19) |= 2u;
      *((_BYTE*)v13 + 20) |= 2u;
      v16 = (_BYTE*)v13[1];
      v16[632] = 0;
      v16[664] = 0;
      v16[696] = 0;
      v16[728] = 0;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(
          *v13 + 72LL))((void*)v13, v13);
      a1 = v15;
    }
    v12 = 1;
    *(_BYTE*)(a1 + 88) = 1;
  }
  return v12 & 1;
}

__int64 CharacterTrailModule_Unknown9(__int64 result)
{
  _QWORD* v1;
  char v2;
  __int64 v3;
  _BYTE* v4;

  if ((*(_BYTE*)(result + 88) & 1) == 0) {
    v1 = *(_QWORD**)(result + 80);
    if (v1 != nullptr && *((_BYTE*)v1 + 16) != 0) {
      v2 = *((_BYTE*)v1 + 17);
      *((_BYTE*)v1 + 16) = 0;
      v3 = result;
      *((_BYTE*)v1 + 17) = v2 | 2;
      *((_BYTE*)v1 + 18) |= 2u;
      *((_BYTE*)v1 + 19) |= 2u;
      *((_BYTE*)v1 + 20) |= 2u;
      v4 = (_BYTE*)v1[1];
      v4[632] = 0;
      v4[664] = 0;
      v4[696] = 0;
      v4[728] = 0;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD*))(*v1 + 72LL))(
          (void*)v1, v1);
      result = v3;
    }
    *(_BYTE*)(result + 88) = 1;
  }
  return result;
}

__int64 CharacterTrailModule_d3d7a0(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;

  if (a2 == a3) {
    return a2;
  }
  v4 = a1[1];
  if (a3 == v4) {
    v19 = a2;
    if (a2 == v4) {
      goto LABEL_20;
    }
  LABEL_23:
    while (1) {
      v21 = *(_QWORD**)(v4 - 16);
      if ((_QWORD*)(v4 - 48) == v21) {
        break;
      }
      if (v21 != nullptr) {
        v22 = 40;
      LABEL_27:
        (*(void (**)(void*))(*v21 + v22))(v21);
      }
      v23 = *(_QWORD*)(v4 - 64);
      if (v23 != 0) {
        std___1___shared_weak_count___release_weak(v23);
      }
      v4 -= 80;
      if (v4 == v19) {
        goto LABEL_20;
      }
    }
    v22 = 32;
    goto LABEL_27;
  }
  v6 = *a1;
  v7 = *a1 + a2;
  v8 = -*a1;
  v9 = *a1 + a3;
  do {
    v10 = v9 + v8;
    v11 = v7 + v8;
    *(_DWORD*)v11 = *(_DWORD*)(v9 + v8);
    v12 = *(_QWORD*)(v9 + v8 + 8);
    v13 = *(_QWORD*)(v9 + v8 + 16);
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    v14 = *(_QWORD*)(v7 + v8 + 16);
    *(_QWORD*)(v11 + 8) = v12;
    *(_QWORD*)(v11 + 16) = v13;
    if (v14 != 0) {
      std___1___shared_weak_count___release_weak(v14);
    }
    v15 = *(_QWORD**)(v11 + 64);
    *(_QWORD*)(v11 + 64) = 0;
    if ((_QWORD*)(v11 + 32) == v15) {
      v16 = 32;
    }
    else {
      if (v15 == nullptr) {
        goto LABEL_13;
      }
      v16 = 40;
    }
    (*(void (**)(void*))(*v15 + v16))(v15);
  LABEL_13:
    v17 = v9 + v8;
    v18 = *(_QWORD*)(v9 + v8 + 64);
    if (v18 != 0) {
      if (v10 + 32 == v18) {
        *(_QWORD*)(v11 + 64) = v11 + 32;
        (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v17 + 64) + 24LL))(
            *(_QWORD*)(v17 + 64), v11 + 32);
      }
      else {
        *(_QWORD*)(v11 + 64) = v18;
        *(_QWORD*)(v17 + 64) = 0;
      }
    }
    else {
      *(_QWORD*)(v11 + 64) = 0;
    }
    v9 += 80;
    v7 += 80;
  } while (v9 + v8 != v4);
  v4 = a1[1];
  v19 = v7 - v6;
  if (v7 - v6 != v4) {
    goto LABEL_23;
  }
LABEL_20:
  a1[1] = v19;
  return a2;
}

__int64 CharacterTrailModule_d3d960(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;

  v3 = a1;
  if (a1 == a2) {
  LABEL_7:
    if (v3 == a2) {
      return v3;
    }
    for (i = v3 + 80;; i += 80) {
      if (i == a2) {
        return v3;
      }
      if (*(_DWORD*)i != 0) {
        v6 = *(_QWORD*)(i + 16);
        if (v6 != 0 && *(_QWORD*)(v6 + 8) != -1) {
          break;
        }
      }
    LABEL_11:;
    }
    *(_DWORD*)v3 = *(_DWORD*)i;
    v7 = *(_QWORD*)(i + 8);
    v8 = *(_QWORD*)(i + 16);
    *(_QWORD*)(i + 8) = 0;
    *(_QWORD*)(i + 16) = 0;
    v9 = *(_QWORD*)(v3 + 16);
    *(_QWORD*)(v3 + 8) = v7;
    *(_QWORD*)(v3 + 16) = v8;
    if (v9 != 0) {
      std___1___shared_weak_count___release_weak(v9);
    }
    v10 = *(_QWORD**)(v3 + 64);
    *(_QWORD*)(v3 + 64) = 0;
    if (v10 == (_QWORD*)(v3 + 32)) {
      v11 = 32;
    }
    else {
      if (v10 == nullptr) {
      LABEL_23:
        v12 = *(_QWORD*)(i + 64);
        if (v12 != 0) {
          if (i + 32 == v12) {
            *(_QWORD*)(v3 + 64) = v3 + 32;
            (*(void (**)(_QWORD, __int64))(**(_QWORD**)(i + 64) + 24LL))(
                *(_QWORD*)(i + 64), v3 + 32);
          }
          else {
            *(_QWORD*)(v3 + 64) = v12;
            *(_QWORD*)(i + 64) = 0;
          }
        }
        else {
          *(_QWORD*)(v3 + 64) = 0;
        }
        v3 += 80;
        goto LABEL_11;
      }
      v11 = 40;
    }
    (*(void (**)(void*))(*v10 + v11))(v10);
    goto LABEL_23;
  }
  do {
    if (*(_DWORD*)v3 == 0) {
      goto LABEL_7;
    }
    v4 = *(_QWORD*)(v3 + 16);
    if (v4 == 0 || *(_QWORD*)(v4 + 8) == -1) {
      goto LABEL_7;
    }
    v3 += 80;
  } while (v3 != a2);
  return a2;
}

__int64 CharacterTrailModule_d3daa0(__int64* a1, int* a2, __int64* a3,
                                    __int64 a4)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  _QWORD* v33;

  v4 = *a1;
  v5 = a1[1] - *a1;
  v6 = 1 - 0x3333333333333333LL * (v5 >> 4);
  if (v6 > 0x333333333333333LL) {
    GameRoutine_d3de40();
  }
  v7 = a1[2];
  v33 = a1 + 2;
  v12 = fw_memory_g_heap_manager_ptr;
  v13 = 0xCCCCCCCCCCCCCCCDLL * ((v7 - v4) >> 4);
  if (2 * v13 > v6) {
    v6 = 2 * v13;
  }
  if (v13 >= 0x199999999999999LL) {
    v14 = 0x333333333333333LL;
  }
  else {
    v14 = v6;
  }
  if (v14 != 0) {
    if (v14 > 0x333333333333333LL) {
      GameRoutine_60a210(a1);
    }
    v15 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         80 * v14, 16, 0);
  }
  else {
    v15 = 0;
  }
  v16 = *a2;
  v17 = v15 + v5;
  v29 = v15;
  v30 = v17;
  v32 = v15 + 80 * v14;
  v18 = *a3;
  v19 = a3[1];
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    *(_DWORD*)v17 = v16;
    *(_QWORD*)(v17 + 8) = v18;
    *(_QWORD*)(v17 + 16) = v19;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    v20 = *(_QWORD*)(a4 + 32);
    if (v20 != 0) {
      goto LABEL_13;
    }
  }
  else {
    *(_DWORD*)v17 = v16;
    *(_QWORD*)(v17 + 8) = v18;
    *(_QWORD*)(v17 + 16) = 0;
    v20 = *(_QWORD*)(a4 + 32);
    if (v20 != 0) {
    LABEL_13:
      if (v20 == a4) {
        *(_QWORD*)(v17 + 64) = v17 + 32;
        (*(void (**)(__int64))(*(_QWORD*)v20 + 24LL))(v20);
        if (v19 == 0) {
          goto LABEL_19;
        }
      }
      else {
        *(_QWORD*)(v17 + 64) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        if (v19 == 0) {
          goto LABEL_19;
        }
      }
      goto LABEL_18;
    }
  }
  *(_QWORD*)(v17 + 64) = 0;
  if (v19 != 0) {
  LABEL_18:
    std___1___shared_weak_count___release_weak(v19);
  }
LABEL_19:
  v31 = v17 + 80;
  CharacterTrailModule_d3dce0(a1, &v29);
  v21 = a1[1];
  v22 = v30;
  while (1) {
    v23 = v31;
    if (v22 == v31) {
      break;
    }
    v31 -= 80;
    v24 = *(_QWORD**)(v23 - 16);
    if (v24 == (_QWORD*)(v23 - 48)) {
      v25 = 32;
      goto LABEL_25;
    }
    if (v24 != nullptr) {
      v25 = 40;
    LABEL_25:
      (*(void (**)(__int64))(*v24 + v25))((__int64)v24);
    }
    v26 = *(_QWORD*)(v23 - 64);
    if (v26 != 0) {
      std___1___shared_weak_count___release_weak(v26);
    }
  }
  if (v29 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v12 + v27, v29);
  }
  return v21;
}

__int64* CharacterTrailModule_d3dce0(__int64* result, _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v3 = *result;
  v2 = (_QWORD*)result[1];
  v5 = result;
  v6 = a2[1] + *result - (_QWORD)v2;
  if (v2 != (_QWORD*)*result) {
    v7 = 0;
    do {
      v8 = v3 + v7;
      v9 = v6 + v7;
      *(_DWORD*)v9 = *(_DWORD*)(v3 + v7);
      *(_QWORD*)(v9 + 8) = *(_QWORD*)(v3 + v7 + 8);
      *(_QWORD*)(v9 + 16) = *(_QWORD*)(v3 + v7 + 16);
      *(_QWORD*)(v8 + 8) = 0;
      *(_QWORD*)(v8 + 16) = 0;
      v10 = *(_QWORD*)(v3 + v7 + 64);
      if (v10 != 0) {
        if (v8 + 32 == v10) {
          *(_QWORD*)(v9 + 64) = v9 + 32;
          (*(void (**)(_QWORD))(**(_QWORD**)(v8 + 64) + 24LL))(
              *(_QWORD*)(v8 + 64));
        }
        else {
          *(_QWORD*)(v9 + 64) = v10;
          *(_QWORD*)(v8 + 64) = 0;
        }
      }
      else {
        *(_QWORD*)(v9 + 64) = 0;
      }
      v7 += 80;
    } while ((_QWORD*)(v3 + v7) != v2);
    v11 = (_QWORD*)(v3 + 32);
    while (1) {
      v13 = (_QWORD*)v11[4];
      if (v11 == v13) {
        break;
      }
      if (v13 != nullptr) {
        v14 = 40;
      LABEL_15:
        (*(void (**)(void*))(*v13 + v14))(v13);
      }
      result = (__int64*)*(v11 - 2);
      if (result != nullptr) {
        result = (__int64*)std___1___shared_weak_count___release_weak(result);
      }
      v12 = v11 + 6;
      v11 += 10;
      if (v12 == v2) {
        goto LABEL_18;
      }
    }
    v14 = 32;
    goto LABEL_15;
  }
LABEL_18:
  a2[1] = v6;
  v15 = *v5;
  v5[1] = *v5;
  *v5 = a2[1];
  a2[1] = v15;
  v16 = v5[1];
  v5[1] = a2[2];
  a2[2] = v16;
  v17 = v5[2];
  v5[2] = a2[3];
  a2[3] = v17;
  *a2 = a2[1];
  return result;
}

__int64 game_character_CharacterTrailModule_CharacterTrailModule_lambda0_Invoke(
    __int64 result)
{
  __int64 v1;
  char v2;
  _BYTE* v3;

  v1 = *(_QWORD*)(result + 8);
  if ((*(_BYTE*)(v1 + 88) & 1) == 0) {
    result = *(_QWORD*)(v1 + 80);
    if (result != 0 && *(_BYTE*)(result + 16) != 0) {
      v2 = *(_BYTE*)(result + 17);
      *(_BYTE*)(result + 16) = 0;
      *(_BYTE*)(result + 17) = v2 | 2;
      *(_BYTE*)(result + 18) |= 2u;
      *(_BYTE*)(result + 19) |= 2u;
      *(_BYTE*)(result + 20) |= 2u;
      v3 = *(_BYTE**)(result + 8);
      v3[632] = 0;
      v3[664] = 0;
      v3[696] = 0;
      v3[728] = 0;
      result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 72LL))(result);
    }
    *(_BYTE*)(v1 + 88) = 1;
  }
  return result;
}

#pragma GCC visibility pop
