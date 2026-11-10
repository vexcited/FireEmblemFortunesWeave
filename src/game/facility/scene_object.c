#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_13fc760(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_facility_SceneObjectHolder_vtable)();
extern __int64 (*game_facility_SceneObject_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 SceneObject_Destructor(__int64 a1);
_QWORD* GameRoutine_13fc020(__int64, __int64*);
__int64 GameRoutine_13fd4a0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern __int64 (*GameData_2038508[])();
extern __int64 GameData_212dce8;
extern __int64 GameData_2241860;
void __attribute__((noreturn)) String_60a1d0(_QWORD);
__int64 SceneObject_13fca80(__int64 a1, char a2);
__int64 SceneObject_13fd320(__int64 a1);
_QWORD* game_facility_SceneObject_LoadAssetImpl_lambda0_Clone(__int64 a1);
__int64 game_facility_SceneObject_LoadAssetImpl_lambda0_CloneInto(_QWORD* a1,
                                                                  _QWORD* a2);

__int64 SceneObject_Destructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;

  *(_QWORD*)a1 = game_facility_SceneObject_vtable;
  if (*(_QWORD*)(a1 + 8) != 0) {
    GameRoutine_13fc760(a1);
  }
  v2 = *(_QWORD*)(a1 + 144);
  if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
    std___1___shared_weak_count___release_weak(v2);
    if ((*(_BYTE*)(a1 + 48) & 1) == 0) {
      goto LABEL_11;
    }
  }
  else if ((*(_BYTE*)(a1 + 48) & 1) == 0) {
    goto LABEL_11;
  }
  if (*(_QWORD*)(a1 + 64) != 0) {
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }

LABEL_11:
  if ((*(_BYTE*)(a1 + 24) & 1) != 0 && *(_QWORD*)(a1 + 40) != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4);
  }
  result = *(_QWORD*)(a1 + 16);
  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)a1 = &game_facility_SceneObjectHolder_vtable;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 SceneObject_13fca80(__int64 a1, char a2)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;

  if ((*(_BYTE*)a1 & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 16);
  }
  else {
    v3 = a1 + 1;
  }
  v4 = game_HashString(v3);
  if (v4 == 0) {
    goto LABEL_31;
  }
  v5 = *(_QWORD*)(GameData_2241860 + 96);
  if (v5 == 0 || *(_QWORD*)(GameData_2241860 + 112) == 0) {
    goto LABEL_31;
  }
  v7 = v5 - 1;
  if ((v5 & (v5 - 1)) != 0) {
    v8 = v4;
    if (v4 >= v5) {
      v8 = v4 % v5;
    }
  }
  else {
    v8 = v7 & v4;
  }
  v9 = *(_QWORD**)(*(_QWORD*)(GameData_2241860 + 88) + 8 * v8);
  if (v9 == nullptr) {
    goto LABEL_31;
  }
  v10 = (_QWORD*)*v9;
  if (v10 == nullptr) {
    goto LABEL_31;
  }
  if ((v5 & v7) == 0) {
    while (1) {
      v13 = v10[1];
      if (v13 == v4) {
        if (v10[2] == v4) {
          goto LABEL_29;
        }
      }
      else if ((v13 & v7) != v8) {
        goto LABEL_31;
      }
      v10 = (_QWORD*)*v10;
      v12 = 1;
      if (v10 == nullptr) {
        return v12 & 1;
      }
    }
  }
  while (1) {
    v11 = v10[1];
    if (v11 == v4) {
      break;
    }
    if (v11 >= v5) {
      v11 %= v5;
    }
    if (v11 != v8) {
      goto LABEL_31;
    }
  LABEL_18:
    v10 = (_QWORD*)*v10;
    if (v10 == nullptr) {
      goto LABEL_31;
    }
  }
  if (v10[2] != v4) {
    goto LABEL_18;
  }
LABEL_29:
  v14 = v10[3];
  if (v14 == 0) {
  LABEL_31:
    v12 = 1;
    return v12 & 1;
  }
  v12 = a2 ^ *(_BYTE*)(v14 + 32);
  return v12 & 1;
}

__int64 SceneObject_13fd320(__int64 a1)
{
  __int64* v2;
  __int64* v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  char* v9;
  __int64 v10;
  __int64 v11;
  __int64 v13[2];
  char* v14;

  if (a1 == 0) {
    return 0;
  }
  v2 = *(__int64**)(*(_QWORD*)GameData_212dce8 + 232LL);
  v3 = *(__int64**)(*(_QWORD*)GameData_212dce8 + 240LL);
  while (v2 != v3) {
    v4 = *v2++;
    if (*(_QWORD*)(v4 + 8) == a1) {
      return 0;
    }
  }
  v5 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      224, 16, 0);
  v7 = strlen(a1 + 16);
  if (v7 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(v7);
  }
  v8 = v7;
  if (v7 >= 0x17) {
    if ((v7 | 7) == 0x17) {
      v10 = 26;
    }
    else {
      v10 = (v7 | 7) + 1;
    }
    v9 = (char*)fw_memory_HeapManager_Allocate(*v5, v10, 16, 0);
    v13[1] = v8;
    v14 = v9;
    v13[0] = v10 | 1;
    goto LABEL_14;
  }
  LOBYTE(v13[0]) = 2 * v7;
  v9 = (char*)v13 + 1;
  if (v7 != 0) {
  LABEL_14:
    memcpy(v9, a1 + 16, v8);
  }
  v9[v8] = 0;
  GameRoutine_13fc020(v6, v13);
  if ((v13[0] & 1) != 0 && v14 != nullptr) {
    v11 = 128;
    if (*(_QWORD*)(*v5 + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*v5 + v11);
  }
  GameRoutine_13fd4a0(v6, a1);
  return v6;
}

_QWORD* game_facility_SceneObject_LoadAssetImpl_lambda0_Clone(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  char v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
  v3 = v2;
  *v2 = GameData_2038508;
  v4 = *(_BYTE*)(a1 + 32);
  v5 = *(_QWORD*)(a1 + 24);
  v2[2] = *(_QWORD*)(a1 + 16);
  v2[3] = v5;
  if ((v4 & 1) == 0) {
    v6 = *(_QWORD*)(a1 + 40);
    v7 = *(_QWORD*)(a1 + 48);
    v2[4] = *(_QWORD*)(a1 + 32);
    v2[5] = v6;
    v2[6] = v7;
    v8 = *(_QWORD*)(a1 + 96);
    if (v8 != 0) {
      goto LABEL_3;
    }
  LABEL_6:
    v3[12] = 0;
    return v3;
  }
  fw_text_String_CopyTerminated(v2 + 4, *(_QWORD*)(a1 + 48),
                                *(_QWORD*)(a1 + 40));
  v8 = *(_QWORD*)(a1 + 96);
  if (v8 == 0) {
    goto LABEL_6;
  }
LABEL_3:
  if (v8 == a1 + 64) {
    v3[12] = v3 + 8;
    (*(void (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8);
  }
  else {
    v3[12] = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  }
  return v3;
}

__int64 game_facility_SceneObject_LoadAssetImpl_lambda0_CloneInto(_QWORD* a1,
                                                                  _QWORD* a2)
{
  __int64 v4;
  __int64 result;

  *a2 = GameData_2038508;
  a2[3] = a1[3];
  a2[2] = a1[2];
  if ((a1[4] & 1) == 0) {
    a2[5] = a1[5];
    v4 = a1[4];
    a2[6] = a1[6];
    a2[4] = v4;
    result = a1[12];
    if (result != 0) {
      goto LABEL_3;
    }
  LABEL_6:
    a2[12] = 0;
    return result;
  }
  fw_text_String_CopyTerminated(a2 + 4, a1[6], a1[5]);
  result = a1[12];
  if (result == 0) {
    goto LABEL_6;
  }
LABEL_3:
  if ((_QWORD*)result == a1 + 8) {
    a2[12] = a2 + 8;
    return (*(__int64 (**)(_QWORD))(*(_QWORD*)a1[12] + 24LL))(a1[12]);
  }
  else {
    result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 16LL))(result);
    a2[12] = result;
  }
  return result;
}

#pragma GCC visibility pop
