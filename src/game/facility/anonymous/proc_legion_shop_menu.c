#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameSubquestData_125d3e0(_QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 game_menu_BasicMenu_Unknown96(_QWORD);
extern __int64 GameData_212c610;
extern __int64 GameData_212c7b0[11];
extern __int64 GameData_2130f48;
extern __int64 GameData_2131c18[55];
__int64 ProcLegionShopMenu_Unknown92(__int64 a1);
__int64 ProcLegionShopMenu_Unknown96(_QWORD* a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_15d32c0(_QWORD, _QWORD, _QWORD);
__int64 LayoutAccessor_155fbe0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_20fe308[])();
extern __int64 (*game_facility_anonymous_LegionShopMenuItem_Sell_vtable[])();
extern __int64 GameData_20fdd88;
extern __int64 GameData_212cf80[5];
extern __int64 GameData_21ca060;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ceb0;
extern __int64* GameData_212e008[9];
extern char* GameData_20fe5a8[14];
const char* ProcLegionShopMenu_Unknown43(__int64 a1, char a2);
__int64 ProcLegionShopMenu_Unknown88(__int64 a1);
__int64 game_facility_anonymous_ProcLegionShopMenu_AddItemList_closure_Invoke(
    __int64 result, unsigned int* a2);
bool game_facility_anonymous_ProcLegionShopMenu_SortAndFilter_closure_Invoke(
    __int64 a1, _QWORD* a2);
__int64* game_8aef60(__int64, unsigned __int16*);
__int64 ItemSeq_8af940(__int64, unsigned __int16**, __int64, const char**,
                       const char**, char);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString(__int64 result);
__int64 game_facility_IShopSelectMenu_OnUnbindImpl(_QWORD*);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
bool LegionPool_9374e0(_QWORD*, __int64);
char* game_util_Format(const char*, ...);
extern _UNKNOWN GameData_1a87999;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_20fe010[])();
extern __int64 (*game_facility_anonymous_LegionShopMenuItem_Empty_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21c99b8;
extern __int64 GameData_21f4280;
extern __int64 game_GameModeData_instance_;
unsigned __int64 strlen(const char*);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void ProcLegionShopMenu_Unknown96_18826a0(_QWORD* a1);
__int64 game_facility_anonymous_ProcLegionShopMenu_AddItemList(__int64 a1);

const char* ProcLegionShopMenu_Unknown43(__int64 a1, char a2)
{
  if ((unsigned __int8)(a2 - 1) > 9u) {
    return "MID_Menu_Default";
  }
  else {
    return GameData_20fe5a8[(unsigned __int8)(a2 - 1)];
  }
}

__int64 ProcLegionShopMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_20fdd88, 0);
    if (result != 0) {
      v3 = result;
      v4 = LayoutAccessor_155fbe0(a1 + 848, "L_InfoDetail");
      v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
      return GameRoutine_15d32c0(v4, v5, 0);
    }
  }
  return result;
}

void ProcLegionShopMenu_Unknown96_18826a0(_QWORD* a1)
{
  unsigned __int64 v2;
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  int v12;
  unsigned int v13;
  signed int v14;
  char* v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned __int64 v27;
  const char* v28;
  const char* v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  const char* v34;
  const char* v35;
  __int64 v36;
  struct {
    __int64 v37;
    unsigned __int64 v38;
    const char* v39;
  } v37_;
  struct {
    unsigned __int16* v40;
    unsigned __int16* v41;
    __int64 v42;
  } v40_;

  game_facility_IShopSelectMenu_OnUnbindImpl(a1);
  v2 = game_HashString((__int64)&GameData_1a87999);
  if (v2 == 0) {
    goto LABEL_25;
  }
  v3 = *(_QWORD*)(GameData_21c99b8 + 96);
  if (v3 == 0 || *(_QWORD*)(GameData_21c99b8 + 112) == 0) {
    goto LABEL_25;
  }
  v5 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v6 = v2;
    if (v2 >= v3) {
      v6 = v2 % v3;
    }
  }
  else {
    v6 = v5 & v2;
  }
  v7 = *(_QWORD**)(*(_QWORD*)(GameData_21c99b8 + 88) + 8 * v6);
  if (v7 != nullptr && (v8 = (_QWORD*)*v7) != nullptr) {
    if ((v3 & v5) == 0) {
      while (1) {
        v11 = v8[1];
        if (v11 == v2) {
          if (v8[2] == v2) {
            goto LABEL_65;
          }
        }
        else if ((v11 & v5) != v6) {
          goto LABEL_25;
        }
        v8 = (_QWORD*)*v8;
        v10 = 0;
        if (v8 == nullptr) {
          goto LABEL_28;
        }
      }
    }
    do {
      v9 = v8[1];
      if (v9 == v2) {
        if (v8[2] == v2) {
        LABEL_65:
          v10 = v8[3];
          if (*(_QWORD*)v10 != 0) {
            goto LABEL_29;
          }
          return;
        }
      }
      else {
        if (v9 >= v3) {
          v9 %= v3;
        }
        if (v9 != v6) {
          goto LABEL_25;
        }
      }
      v8 = (_QWORD*)*v8;
    } while (v8 != nullptr);
    v10 = 0;
  LABEL_28:
    if (*(_QWORD*)((char*)0x40LL) == 0) {
      return;
    }
  }
  else {
  LABEL_25:
    v10 = 0;
    if (*(_QWORD*)((char*)0x40LL) == 0) {
      return;
    }
  }
LABEL_29:
  if (game_GameModeData_instance_ != 0) {
    v12 = *(_DWORD*)(game_GameModeData_instance_ + 84);
    if (v12 >= 100) {
      v13 = v12 / 0x64u;
      v14 = v12 % 0x64u;
      if (v14 >= 99999) {
        v14 = 99999;
      }
      *(_DWORD*)(game_GameModeData_instance_ + 84) = v14;
      v15 = game_util_Format("%d", 100 * v13);
      v16 = strlen(v15);
      if (v16 >= 0xFFFFFFFFFFFFFFF7LL) {
        String_60a1d0();
      }
      v17 = v16;
      v18 = fw_memory_g_heap_manager_ptr;
      if (v16 >= 0x17) {
        if ((v16 | 7) == 0x17) {
          v20 = 26;
        }
        else {
          v20 = (v16 | 7) + 1;
        }
        v19 = (char*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, v20, 16, 0);
        v37_.v38 = v17;
        v37_.v39 = v19;
        v37_.v37 = v20 | 1;
      }
      else {
        LOBYTE(v37_.v37) = 2 * v16;
        v19 = (char*)&v37_.v37 + 1;
        if (v16 == 0) {
          goto LABEL_42;
        }
      }
      memmove((__int64)v19, (__int64)v15, v17);
    LABEL_42:
      v19[v17] = 0;
      v21 = *(unsigned __int16*)(v10 + 16);
      v36 = 0x100000000LL;
      LOWORD(v36) = v21;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                               8 * v21) +
                    73LL) == 17) {
        nn_os_LockMutex((__int64)&game_g_random_mutex);
        v22 = game_map_MapRandom_instance__ptr[0];
        v23 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v24 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v25 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v22 + 1) = v23;
        v26 = (v25 >> 8) ^ (v24 >> 19) ^ v25 ^ v24;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v22) = v24;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v22 + 4) = v26;
        nn_os_UnlockMutex((__int64)&game_g_random_mutex);
        HIDWORD(v36) =
            (16 * ((_WORD)v26 -
                   1000 * (unsigned __int16)((v26 & 0x7FFFFFFFu) / 0x3E8)) +
             16) &
                0x3FF0 |
            1;
      }
      v40_.v41 = nullptr;
      v40_.v42 = 0;
      v40_.v40 = nullptr;
      v27 = v37_.v38;
      if ((v37_.v37 & 1) != 0) {
        v28 = v37_.v39;
      }
      else {
        v27 = (unsigned __int64)(unsigned __int8)v37_.v37 >> 1;
        v28 = (char*)&v37_.v37 + 1;
      }
      if (v27 != 0) {
        v29 = v28;
      }
      else {
        v29 = nullptr;
      }
      v34 = v29;
      v35 = "MID_LegionSellMenu_Result";
      if ((_DWORD)v21 != 0) {
        v30 = v13 - 1;
      LABEL_53:
        game_8aef60((__int64)&v40_.v40, (unsigned __int16*)&v36);
        while (v30 != 0) {
          --v30;
          if ((_WORD)v36 != 0) {
            goto LABEL_53;
          }
        }
      }
      ItemSeq_8af940((__int64)a1, &v40_.v40, 0, &v35, &v34, 0);
      if (v40_.v40 != nullptr) {
        v31 = *(_QWORD*)v18;
        v40_.v41 = v40_.v40;
        v32 = 128;
        if (*(_QWORD*)(v31 + 200) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free(v31 + v32, (__int64)v40_.v40);
      }
      if ((v37_.v37 & 1) != 0 && v37_.v39 != nullptr) {
        v33 = 128;
        if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
          v33 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v18 + v33, (__int64)v37_.v39);
      }
    }
  }
}

__int64 game_facility_anonymous_ProcLegionShopMenu_AddItemList(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  struct {
    _QWORD v7[4];
    _QWORD* v8;
  } v7_;
  int v9;

  v2 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
  *(_QWORD*)(v2 + 80) = 0;
  v3 = v2;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = 0;
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_WORD*)(v2 + 80) = 257;
  *(_BYTE*)(v2 + 82) = 1;
  *(_QWORD*)v2 = game_facility_anonymous_LegionShopMenuItem_Empty_vtable;
  *(_QWORD*)(v2 + 8) = 0;
  v4 = *(_QWORD*)(a1 + 344);
  if (v4 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 8LL))(v4);
  }
  *(_QWORD*)(v3 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v3;
  v9 = 0;
  v7_.v7[0] = GameData_20fe010;
  v7_.v7[1] = a1;
  v7_.v7[2] = &v9;
  v7_.v8 = v7_.v7;
  LegionPool_9374e0(*(_QWORD**)(GameData_21f4280 + 8), (__int64)v7_.v7);
  result = (__int64)v7_.v8;
  if (v7_.v8 == v7_.v7) {
    v6 = 32;
  }
  else {
    if (v7_.v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v7_.v8 + v6))((__int64)v7_.v8);
}

__int64 game_facility_anonymous_ProcLegionShopMenu_AddItemList_closure_Invoke(
    __int64 result, unsigned int* a2)
{
  __int64 v2;
  __int64* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;

  v2 = *a2;
  v3 = (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL) +
                             48LL) +
                  8 * v2);
  if ((int)v2 < 0) {
    v3 = GameData_212ceb0;
  }
  if (*(_BYTE*)v3 != 0) {
    v4 = *(_QWORD*)(result + 8);
    v5 = result;
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        112, 16, 0);
    v7 = *(_QWORD*)(v4 + 1064);
    v8 = **(_DWORD**)(v5 + 16);
    *(_WORD*)(v6 + 80) = 257;
    *(_WORD*)(v6 + 16) = 0;
    *(_QWORD*)(v6 + 48) = 0;
    *(_QWORD*)(v6 + 56) = 0;
    *(_QWORD*)(v6 + 64) = 0;
    *(_QWORD*)(v6 + 72) = 0;
    *(_DWORD*)(v6 + 40) = v2;
    *(_BYTE*)(v6 + 82) = 1;
    *(_QWORD*)v6 = game_facility_anonymous_LegionShopMenuItem_Sell_vtable;
    *(_QWORD*)(v6 + 8) = 0;
    *(_QWORD*)(v6 + 88) = GameData_20fe308;
    *(_QWORD*)(v6 + 96) = v7;
    *(_DWORD*)(v6 + 104) = v8;
    result = BasicMenuCursor_16e0c00(v4, v6);
    ++**(_DWORD**)(v5 + 16);
  }
  return result;
}

bool game_facility_anonymous_ProcLegionShopMenu_SortAndFilter_closure_Invoke(
    __int64 a1, _QWORD* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  int v5;

  v2 = *(unsigned __int8*)(a1 + 8);
  v3 = *(unsigned __int8*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  if (v2 == 0) {
    return (_DWORD)v3 != 0;
  }
  v4 =
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21ca060 + 64) + 8 * v3) + 64LL);
  if (v4 != 0) {
    v5 = *(unsigned __int8*)(v4 + 250);
    if (v5 <= 9) {
      if (v5 == 7) {
        LODWORD(v4) = 1;
        return v2 == (_DWORD)v4;
      }
      if (v5 != 8) {
        goto LABEL_17;
      }
      LODWORD(v4) = 2;
    }
    else {
      if (v5 != 10 && v5 != 31) {
        if (v5 == 42) {
          LODWORD(v4) = 4;
          return v2 == (_DWORD)v4;
        }
      LABEL_17:
        LODWORD(v4) = 0;
        return v2 == (_DWORD)v4;
      }
      LODWORD(v4) = 3;
    }
  }
  return v2 == (_DWORD)v4;
}

__int64 ProcLegionShopMenu_Unknown92(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 result;

  v2 = a1;
  v3 = a1;
  v4 = GameData_212c610;
  v5 = GameData_2131c18[0];
  do {
    v6 = __dynamic_cast(v3, v4, v5, 0);
    v3 = *(_QWORD*)(v3 + 32);
    if (v6 != 0) {
      v2 = v6;
    }
  } while (v3 != 0);
  if (v2 == a1) {
    (*(void (**)(__int64))(*(_QWORD*)(a1 + 1056) + 104LL))(a1 + 1056);
  }
  result = GameSubquestData_125d3e0(*(_QWORD*)GameData_212c7b0[0]);
  if (*(_QWORD*)GameData_2130f48 != 0) {
    *(_BYTE*)(*(_QWORD*)GameData_2130f48 + 1688LL) = 1;
  }
  return result;
}

__int64 ProcLegionShopMenu_Unknown96(_QWORD* a1)
{
  game_menu_BasicMenu_Unknown96(a1);
  if ((*(unsigned int (**)(_QWORD*))(*a1 + 168LL))(a1)-8 <= 0xFFFFFFF9) {
    (*(void (**)(_QWORD*))(a1[132] + 96LL))(a1 + 132);
  }
  return game_menu_BasicMenu_Unknown16dd9a0(a1);
}

#pragma GCC visibility pop
