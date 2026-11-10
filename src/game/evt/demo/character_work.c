#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_10b5e70(_QWORD, _QWORD);
__int64 GameRoutine_11c53a0(__int64, __int64, __int128*, __int128*, __int128*,
                            __int128*);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1ab52a0;
extern _UNKNOWN* GameData_212ff28;
extern __int64 (*GameData_2016850[])();
extern __int64 (*GameData_2016950[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212ff20;
__int64 CharacterWork_11c56e0(__int64 a1);
__int64 CharacterWork_11c5860(__int64 a1, __int64 a2);
__int64 game_evt_demo_CharacterWork_CharacterWork_lambda0_DeletingDestructor(
    __int64 a1);
_QWORD* game_evt_demo_CharacterWork_CharacterWork_lambda0_Clone(__int64 a1);
_QWORD* game_evt_demo_CharacterWork_Equip_lambda0_CloneInto(_QWORD* result,
                                                            _QWORD* a2);
__int64 GameRoutine_a59220(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN* GameData_212ec88;
extern int* GameData_212ec80;
__int64
game_evt_demo_CharacterWork_CharacterWork_lambda0_Destructor(__int64 result);
_QWORD*
game_evt_demo_CharacterWork_CharacterWork_lambda0_CloneInto(_QWORD* result,
                                                            _QWORD* a2);
__int64
game_evt_demo_CharacterWork_CharacterWork_lambda0_Destroy(__int64 result);
__int64
game_evt_demo_CharacterWork_SetClothControl_lambda0_Invoke(__int64 result,
                                                           __int64 a2);

__int64 CharacterWork_11c56e0(__int64 a1)
{
  __int128 v2;
  __int128 v3;
  __int128 v4;
  __int128 v5;

  v5 = 0u;
  v3 = 0u;
  v4 = 0u;
  v2 = 0u;
  return GameRoutine_11c53a0(a1, (__int64)&GameData_1ab52a0, &v5, &v4, &v3,
                             &v2);
}

__int64 CharacterWork_11c5860(__int64 a1, __int64 a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  unsigned __int8 explicit;
  int* v8;
  __int64 v9;
  __int64 i;
  int v11;
  unsigned int v12;

  result = strcmp(a2, "Idle");
  if ((_DWORD)result != 0) {
    result = strcmp(a2, "Open");
    if ((_DWORD)result != 0) {
      result = strcmp(a2, "Close");
      if ((_DWORD)result != 0) {
        return result;
      }
      v5 = 2;
    }
    else {
      v5 = 1;
    }
  }
  else {
    v5 = 0;
  }
  v6 = *(_QWORD*)(a1 + 152);
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ff28,
                                  memory_order_acquire);
  v8 = GameData_212ff20;
  if ((explicit & 1) == 0) {
    v12 = v5;
    result = __cxa_guard_acquire(GameData_212ff28);
    v5 = v12;
    if ((_DWORD)result != 0) {
      *v8 = wld_Crc32(0, "CharacterWeaponAnimator", 23);
      result = __cxa_guard_release(GameData_212ff28);
      v5 = v12;
    }
  }
  v9 = *(_QWORD*)(v6 + 512);
  for (i = v9; i != *(_QWORD*)(v6 + 504); i -= 16) {
    v11 = *(_DWORD*)(i - 16);
    v9 -= 16;
    if (v11 == *v8) {
      if (*(_QWORD*)(v6 + 512) != v9) {
        result = *(_QWORD*)(v9 + 8);
        if (result != 0) {
          return GameRoutine_10b5e70(result, v5);
        }
      }
      return result;
    }
  }
  return result;
}

__int64

game_evt_demo_CharacterWork_CharacterWork_lambda0_Destructor(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  *(_QWORD*)result = GameData_2016850;
  if ((*(_BYTE*)(result + 40) & 1) != 0) {
    v1 = *(_QWORD*)(result + 56);
    if (v1 != 0) {
      v2 = result;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v1);
      result = v2;
    }
  }
  if ((*(_BYTE*)(result + 16) & 1) != 0) {
    v4 = *(_QWORD*)(result + 32);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

__int64

game_evt_demo_CharacterWork_CharacterWork_lambda0_DeletingDestructor(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  *(_QWORD*)a1 = GameData_2016850;
  v2 = fw_memory_g_heap_manager_ptr;
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    v3 = *(_QWORD*)(a1 + 56);
    if (v3 != 0) {
      v4 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v4 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                    v3);
    }
  }
  if ((*(_BYTE*)(a1 + 16) & 1) != 0) {
    v5 = *(_QWORD*)(a1 + 32);
    if (v5 != 0) {
      v6 = 128;
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v6, v5);
    }
  }
  v7 = 128;
  if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
    v7 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v7, a1);
}

_QWORD* game_evt_demo_CharacterWork_CharacterWork_lambda0_Clone(__int64 a1)
{
  _QWORD* v2;
  char v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  v3 = *(_BYTE*)(a1 + 16);
  v4 = v2;
  v5 = *(_QWORD*)(a1 + 8);
  *v2 = GameData_2016850;
  v2[1] = v5;
  if ((v3 & 1) != 0) {
    fw_text_String_CopyTerminated(v2 + 2, *(_QWORD*)(a1 + 32),
                                  *(_QWORD*)(a1 + 24));
  }
  else {
    v6 = *(_QWORD*)(a1 + 24);
    v7 = *(_QWORD*)(a1 + 32);
    v2[2] = *(_QWORD*)(a1 + 16);
    v2[3] = v6;
    v2[4] = v7;
  }
  if ((*(_BYTE*)(a1 + 40) & 1) != 0) {
    fw_text_String_CopyTerminated(v4 + 5, *(_QWORD*)(a1 + 56),
                                  *(_QWORD*)(a1 + 48));
  }
  else {
    v8 = *(_QWORD*)(a1 + 48);
    v9 = *(_QWORD*)(a1 + 56);
    v4[5] = *(_QWORD*)(a1 + 40);
    v4[6] = v8;
    v4[7] = v9;
  }
  return v4;
}

_QWORD*

game_evt_demo_CharacterWork_CharacterWork_lambda0_CloneInto(_QWORD* result,
                                                            _QWORD* a2)
{
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v3 = result;
  *a2 = GameData_2016850;
  a2[1] = result[1];
  if ((result[2] & 1) != 0) {
    result =
        (_QWORD*)fw_text_String_CopyTerminated(a2 + 2, result[4], result[3]);
  }
  else {
    v4 = result[2];
    v5 = result[4];
    a2[3] = result[3];
    a2[4] = v5;
    a2[2] = v4;
  }
  if ((v3[5] & 1) != 0) {
    return (_QWORD*)fw_text_String_CopyTerminated(a2 + 5, v3[7], v3[6]);
  }
  v6 = v3[5];
  v7 = v3[7];
  a2[6] = v3[6];
  a2[7] = v7;
  a2[5] = v6;
  return result;
}

__int64

game_evt_demo_CharacterWork_CharacterWork_lambda0_Destroy(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  if ((*(_BYTE*)(result + 40) & 1) != 0) {
    v1 = *(_QWORD*)(result + 56);
    if (v1 != 0) {
      v2 = result;
      v3 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v3 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3,
                                    v1);
      result = v2;
    }
  }
  if ((*(_BYTE*)(result + 16) & 1) != 0) {
    v4 = *(_QWORD*)(result + 32);
    if (v4 != 0) {
      v5 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v5 = 56;
      }
      return nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v4);
    }
  }
  return result;
}

_QWORD* game_evt_demo_CharacterWork_Equip_lambda0_CloneInto(_QWORD* result,
                                                            _QWORD* a2)
{
  *a2 = GameData_2016950;
  a2[2] = result[2];
  a2[5] = result[5];
  a2[4] = result[4];
  a2[7] = result[7];
  a2[6] = result[6];
  a2[9] = result[9];
  a2[8] = result[8];
  a2[11] = result[11];
  a2[10] = result[10];
  return result;
}

__int64

game_evt_demo_CharacterWork_SetClothControl_lambda0_Invoke(__int64 result,
                                                           __int64 a2)
{
  unsigned __int8 explicit;
  int* v3;
  __int64 v4;
  __int64 i;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 j;
  float v15;
  __int64 v16;
  int v17;
  __int64 v18;

  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ec88,
                                  memory_order_acquire);
  v3 = GameData_212ec80;
  if ((explicit & 1) == 0) {
    v16 = a2;
    v18 = result;
    v17 = __cxa_guard_acquire(GameData_212ec88);
    result = v18;
    a2 = v16;
    if (v17 != 0) {
      *v3 = wld_Crc32(0, "ClothModule", 11);
      __cxa_guard_release(GameData_212ec88);
      result = v18;
      a2 = v16;
    }
  }
  v4 = *(_QWORD*)(a2 + 512);
  for (i = v4; i != *(_QWORD*)(a2 + 504); i -= 16) {
    v6 = *(_DWORD*)(i - 16);
    v4 -= 16;
    if (v6 == *v3) {
      if (*(_QWORD*)(a2 + 512) != v4) {
        v7 = *(_QWORD*)(v4 + 8);
        if (v7 != 0) {
          if (*(_BYTE*)(result + 8) == 1 &&
              (v8 = *(_QWORD*)(result + 16)) != 0) {
            v9 = *(_QWORD*)(v7 + 24);
            v10 = *(_QWORD*)(v7 + 32);
            if (v9 != v10) {
              do {
                *(_BYTE*)(v9 + 133) = 0;
                v9 += 176;
              } while (v9 != v10);
              v8 = *(_QWORD*)(result + 16);
            }
            v11 = result;
            v12 = strlen(v8);
            GameRoutine_a59220(v7 + 24, v8, v12, 1);
            result = v11;
          }
          else {
            v13 = *(_QWORD*)(v7 + 24);
            for (j = *(_QWORD*)(v7 + 32); v13 != j; v13 += 176) {
              *(_BYTE*)(v13 + 133) = 1;
            }
          }
          v15 = 0.0;
          if (*(_BYTE*)(result + 8) != 0) {
            v15 = 1.0;
          }
          *(float*)(v7 + 52) = v15;
        }
      }
      return result;
    }
  }
  return result;
}

#pragma GCC visibility pop
