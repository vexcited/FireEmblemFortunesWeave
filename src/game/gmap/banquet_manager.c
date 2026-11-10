#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_gmap_BanquetManager_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* BanquetManager_Destructor(_QWORD* result);
__int64 BanquetManager_DeletingDestructor(_QWORD* a1);
__int64 Troop_133ed80(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN GameData_1aa85de;
extern _UNKNOWN GameData_1ade171;
extern _UNKNOWN GameData_21f4970;
extern _UNKNOWN GameData_21f4988;
extern __int64 (*GameData_1fb0900[])();
extern __int64 GameData_21f4960;
extern __int64 GameData_21f4968;
extern __int64 GameData_21f4978;
extern __int64 GameData_21f4980;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_GameModeData_instance_;
extern __int64* GameData_212c790;
extern __int64* GameData_212c878[6];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_6c1f60(_QWORD);
bool BanquetManager_96bae0(__int64 a1);
__int64 BanquetManager_96c9e0(__int64* a1, int* a2);
__int64 game_gmap_BanquetManager_GetHealHp_lambda0_Invoke(__int64 result,
                                                          unsigned __int16* a2,
                                                          _DWORD* a3);
__int64 game_gmap_BanquetManager_GetHealMagic_lambda0_Invoke(
    __int64 result, unsigned __int16* a2, _DWORD* a3);
__int64 game_gmap_BanquetManager_GetTaste_lambda0_Invoke(__int64 result,
                                                         unsigned __int16* a2,
                                                         _DWORD* a3);
__int64 game_gmap_BanquetManager_GetFood_lambda0_Invoke(__int64 result,
                                                        unsigned __int16* a2,
                                                        _DWORD* a3);
__int64 game_gmap_BanquetManager_GetUnits_lambda0_Invoke(__int64 result,
                                                         __int64* a2);
__int64 game_gmap_BanquetManager_GetUnits_lambda1_Invoke(__int64 a1,
                                                         __int64* a2);

bool BanquetManager_96bae0(__int64 a1)
{
  int v2;
  __int64 v3;
  int v4;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4970,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f4970) != 0) {
    GameData_21f4968 = (__int64)&GameData_1ade171;
    GameData_21f4960 = game_HashString(&GameData_1ade171);
    __cxa_guard_release(&GameData_21f4970, v8, v9, v10);
  }
  v2 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v3 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f4960);
    if (v3 != 0) {
      v2 = *(_DWORD*)(v3 + 32);
    }
    else {
      v2 = 0;
    }
  }
  v4 = *(_DWORD*)(a1 + 8);
  if (v2 > v4) {
    return false;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21f4988,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_21f4988) != 0) {
    GameData_21f4980 = (__int64)&GameData_1aa85de;
    GameData_21f4978 = game_HashString(&GameData_1aa85de);
    __cxa_guard_release(&GameData_21f4988, v11, v12, v13);
  }
  v6 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v7 = game_GameVariableTable_Find(
        *(_QWORD*)(game_GameModeData_instance_ + 48), &GameData_21f4978);
    if (v7 != 0) {
      v6 = *(_DWORD*)(v7 + 32);
    }
    else {
      v6 = 0;
    }
  }
  return v4 <= v6;
}

__int64 BanquetManager_96c9e0(__int64* a1, int* a2)
{
  unsigned __int64 v2;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64** v9;
  __int64* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  unsigned __int64 v18;
  __int64 v19;

  v2 = a1[1];
  if (v2 == 0 || a1[3] == 0) {
    return 0;
  }
  v5 = *a2;
  v6 = v2 - 1;
  if ((v2 & (v2 - 1)) != 0) {
    v7 = *a2;
    if (v2 <= v5) {
      v7 = v5 % v2;
    }
  }
  else {
    v7 = v6 & v5;
  }
  v8 = *a1;
  v9 = *(__int64***)(*a1 + 8 * v7);
  if (v9 == nullptr) {
    return 0;
  }
  v10 = *v9;
  if (*v9 == nullptr) {
    return 0;
  }
  if ((v2 & v6) == 0) {
    while (1) {
      v12 = v10[1];
      if (v12 == v5) {
        if (*((_DWORD*)v10 + 4) == (_DWORD)v5) {
          goto LABEL_28;
        }
      }
      else if ((v12 & v6) != v7) {
        return 0;
      }
      v10 = (__int64*)*v10;
      if (v10 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v11 = v10[1];
    if (v11 == v5) {
      break;
    }
    if (v11 >= v2) {
      v11 %= v2;
    }
    if (v11 != v7) {
      return 0;
    }
  LABEL_16:
    v10 = (__int64*)*v10;
    if (v10 == nullptr) {
      return 0;
    }
  }
  if (*((_DWORD*)v10 + 4) != (_DWORD)v5) {
    goto LABEL_16;
  }
LABEL_28:
  if ((v2 & v6) != 0) {
    if (v2 <= v5) {
      v5 %= v2;
    }
  }
  else {
    v5 &= v6;
  }
  v13 = *(__int64**)(v8 + 8 * v5);
  do {
    v14 = v13;
    v13 = (__int64*)*v13;
  } while (v13 != v10);
  if (v14 == a1 + 2) {
    goto LABEL_45;
  }
  v15 = v14[1];
  if ((v2 & v6) != 0) {
    if (v15 >= v2) {
      v15 %= v2;
    }
  }
  else {
    v15 &= v6;
  }
  if (v15 != v5) {
  LABEL_45:
    if (*v10 == 0) {
      goto LABEL_46;
    }
    v16 = *(_QWORD*)(*v10 + 8);
    if ((v2 & v6) != 0) {
      if (v16 >= v2) {
        v16 %= v2;
      }
    }
    else {
      v16 &= v6;
    }
    if (v16 != v5) {
    LABEL_46:
      *(_QWORD*)(v8 + 8 * v5) = 0;
    }
  }
  v17 = (__int64*)*v10;
  if (*v10 != 0) {
    v18 = v17[1];
    if ((v2 & v6) != 0) {
      if (v18 >= v2) {
        v18 %= v2;
      }
    }
    else {
      v18 &= v6;
    }
    if (v18 != v5) {
      *(_QWORD*)(*a1 + 8 * v18) = v14;
      v17 = (__int64*)*v10;
    }
  }
  *v14 = (__int64)v17;
  *v10 = 0;
  --a1[3];
  v19 = 128;
  if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
    v19 = 56;
  }
  nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v19);
  return 1;
}

__int64 game_gmap_BanquetManager_GetHealHp_lambda0_Invoke(__int64 result,
                                                          unsigned __int16* a2,
                                                          _DWORD* a3)
{
  **(_DWORD**)(result + 8) +=
      *a3 *
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *a2) +
                          97LL);
  return result;
}

__int64 game_gmap_BanquetManager_GetHealMagic_lambda0_Invoke(
    __int64 result, unsigned __int16* a2, _DWORD* a3)
{
  **(_DWORD**)(result + 8) +=
      *a3 *
      *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                     8LL * *a2) +
                          98LL);
  return result;
}

__int64 game_gmap_BanquetManager_GetTaste_lambda0_Invoke(__int64 result,
                                                         unsigned __int16* a2,
                                                         _DWORD* a3)
{
  __int64 v3;

  v3 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                      8LL * *a2) +
                           95LL);
  *(_DWORD*)(**(_QWORD**)(result + 8) + 4 * v3) += *a3;
  return result;
}

__int64 game_gmap_BanquetManager_GetFood_lambda0_Invoke(__int64 result,
                                                        unsigned __int16* a2,
                                                        _DWORD* a3)
{
  __int64 v3;

  v3 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                      8LL * *a2) +
                           94LL);
  *(_DWORD*)(**(_QWORD**)(result + 8) + 4 * v3) += *a3;
  return result;
}

__int64 game_gmap_BanquetManager_GetUnits_lambda0_Invoke(__int64 result,
                                                         __int64* a2)
{
  __int64* v2;
  __int64 v3;
  char* v4;
  char* v5;
  char* v6;
  unsigned __int64 v7;
  __int64 v8;
  char* v9;
  unsigned __int64 v10;
  __int64 v11;
  char* v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  char* v20;
  __int64 v21;
  __int64 v22;

  v2 = *(__int64**)(result + 8);
  v3 = *a2;
  v4 = (char*)*v2;
  v5 = (char*)v2[1];
  v6 = (char*)*v2;
  if ((char*)*v2 == v5) {
    goto LABEL_17;
  }
  v7 = v5 - v4 - 8;
  v6 = (char*)*v2;
  if ((~(_BYTE)v7 & 0x18) != 0) {
    v8 = ((unsigned __int8)((unsigned int)v7 >> 3) + 1) & 3;
    v6 = (char*)*v2;
    while (*(_QWORD*)v6 != v3) {
      v6 += 8;
      if (--v8 == 0) {
        goto LABEL_6;
      }
    }
  LABEL_17:
    if (v6 != v5) {
      return result;
    }
    goto LABEL_18;
  }
LABEL_6:
  if (v7 >= 0x18) {
    v6 += 16;
    while (1) {
      if (*((_QWORD*)v6 - 2) == v3) {
        if (v6 - 16 != v5) {
          return result;
        }
        goto LABEL_18;
      }
      if (*((_QWORD*)v6 - 1) == v3) {
        v6 -= 8;
        goto LABEL_17;
      }
      if (*(_QWORD*)v6 == v3) {
        goto LABEL_17;
      }
      if (*((_QWORD*)v6 + 1) == v3) {
        break;
      }
      v9 = v6 + 16;
      v6 += 32;
      if (v9 == v5) {
        goto LABEL_18;
      }
    }
    if (v6 + 8 != v5) {
      return result;
    }
  }
LABEL_18:
  v10 = v2[2];
  if ((unsigned __int64)v5 >= v10) {
    v12 = (char*)(v5 - v4);
    v13 = (v5 - v4) >> 3;
    v14 = v13 + 1;
    if ((unsigned __int64)(v13 + 1) >> 61 != 0) {
      GameRoutine_6c1f60(result);
    }
    v15 = v10 - (_QWORD)v4;
    v16 = fw_memory_g_heap_manager_ptr;
    if (v15 >> 2 > v14) {
      v14 = v15 >> 2;
    }
    if ((unsigned __int64)v15 >= 0x7FFFFFFFFFFFFFF8LL) {
      v17 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v17 = v14;
    }
    if (v17 != 0) {
      if (v17 >> 61 != 0) {
        GameRoutine_60a210(result);
      }
      v18 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v17, 16, 0);
    }
    else {
      v18 = 0;
    }
    v19 = v18 + 8 * v17;
    v20 = (char*)(v5 - v4);
    v21 = (__int64)&v12[v18 + -8 * v13];
    *(_QWORD*)&v12[v18] = v3;
    v11 = (__int64)&v12[v18 + 8];
    result = memcpy(v21, v4, v20);
    *v2 = v21;
    v2[1] = v11;
    v2[2] = v19;
    if (v4 != nullptr) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v16 + 200LL) == 0) {
        v22 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v16 + v22);
    }
  }
  else {
    *(_QWORD*)v5 = v3;
    v11 = (__int64)(v5 + 8);
  }
  v2[1] = v11;
  return result;
}

__int64 game_gmap_BanquetManager_GetUnits_lambda1_Invoke(__int64 a1,
                                                         __int64* a2)
{
  __int64 result;
  __int64 v4;
  int v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;

  result = *a2;
  v4 = *(_QWORD*)(*GameData_212c790 + 8);
  v5 = *(_DWORD*)(v4 + 56);
  v6 = *(__int64**)(v4 + 8);
  v7 = *(__int64**)(v4 + 16);
  if (v5 < 0) {
    if (v6 == v7) {
    LABEL_7:
      if (result == 0) {
        return result;
      }
      goto LABEL_15;
    }
    while (1) {
      v8 = *v6;
      if (*(_QWORD*)(*v6 + 96) == 0 && *(_QWORD*)(v8 + 552) == 0) {
        break;
      }
      if (++v6 == v7) {
        goto LABEL_7;
      }
    }
  }
  else if (v6 == v7) {
    v8 = 0;
  }
  else {
    while (1) {
      v9 = *v6++;
      v8 = v9;
      if (*(_DWORD*)(v9 + 84) == v5) {
        break;
      }
      if (v6 == v7) {
        goto LABEL_7;
      }
    }
  }
  if (v8 == result) {
    return result;
  }
LABEL_15:
  v10 = *(_QWORD*)(a1 + 8);
  v13 = v12;
  v12[0] = GameData_1fb0900;
  v12[1] = v10;
  Troop_133ed80(result, v12);
  result = (__int64)v13;
  if (v13 == v12) {
    v11 = 32;
  }
  else {
    if (v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (*(__int64 (**)(__int64))(*v13 + v11))((__int64)v13);
}

_QWORD* BanquetManager_Destructor(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;

  v1 = (_QWORD*)result[4];
  v2 = result;
  *result = game_gmap_BanquetManager_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = v2[2];
  v2[2] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
  }
  return result;
}

__int64 BanquetManager_DeletingDestructor(_QWORD* a1)
{
  _QWORD* v1;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v1 = (_QWORD*)a1[4];
  *a1 = game_gmap_BanquetManager_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != nullptr) {
    do {
      v4 = (_QWORD*)*v1;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v5 = 128;
      }
      else {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v5);
      v1 = v4;
    } while (v4 != nullptr);
  }
  v6 = a1[2];
  a1[2] = 0;
  if (v6 != 0) {
    v7 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v7);
  }
  v8 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v8 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v8);
}

#pragma GCC visibility pop
