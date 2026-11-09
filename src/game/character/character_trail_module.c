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
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v2 + 72LL))(v2, v2);
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
          (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v7 + 72LL))(v7, v7);
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
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v13 + 72LL))(v13, v13);
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
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v1 + 72LL))(v1, v1);
      result = v3;
    }
    *(_BYTE*)(result + 88) = 1;
  }
  return result;
}

#pragma GCC visibility pop
