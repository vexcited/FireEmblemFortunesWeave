#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1257e40(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 strchr(_QWORD, _QWORD);
extern _UNKNOWN GameData_2265748;
extern _UNKNOWN GameData_2265760;
extern __int64 GameData_21c96d8;
extern __int64 GameData_21f1720;
extern __int64 GameData_21f1728;
extern __int64 GameData_2265738;
extern __int64 GameData_2265750;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime;
extern int GameData_2265740;
extern int GameData_2265758;
__int64* SubQuestInfo_Destructor(__int64 a1);
bool SubQuestInfo_Unknown30(_QWORD* a1);
void GameSubquestData_1257e40(__int64*, _QWORD*);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64* SubQuestInfo_Destructor(__int64 a1)
{
  __int64 v1;
  _BYTE* v2;
  __int64 v3;
  __int64 v4;
  _BYTE* v5;
  bool v6;
  __int64* result;
  __int64 v8;
  __int64 v9;
  int v10;
  int v11;
  __int64* v12;
  __int64 v13;
  int v15;
  __int64 v16;
  __int16 v17;
  __int16 v18;
  __int16 v19;
  int v20;
  int v21;
  int v22;
  __int16 v23;

  v1 = **(_QWORD**)(a1 + 8);
  if (v1 == 0) {
    return &game_gmap_GmapClock_kDefaultTime;
  }
  v2 = *(_BYTE**)(v1 + 8);
  v3 = v1;
  if (v2 != nullptr) {
    v4 = strchr(*(_QWORD*)(v1 + 8), 95);
    if (v4 != 0) {
      v5 = (_BYTE*)(v4 + 1);
    }
    else {
      v5 = v2;
    }
    v6 = *v5 == 62;
  }
  else {
    v6 = false;
  }
  result = &game_gmap_GmapClock_kDefaultTime;
  if (!v6 && GameData_21c96d8 != 0) {
    if (**(_BYTE**)(v3 + 24) == 1) {
      result = &GameData_2265738;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2265748,
                                memory_order_acquire) &
           1) == 0) {
        v20 = __cxa_guard_acquire(&GameData_2265748);
        result = &GameData_2265738;
        if (v20 != 0) {
          GameData_2265740 = 0;
          GameData_2265738 = 0;
          __cxa_guard_release(&GameData_2265748);
          result = &GameData_2265738;
        }
      }
      LOWORD(GameData_2265738) = *(_WORD*)(v3 + 250);
      WORD1(GameData_2265738) = *(unsigned __int8*)(v3 + 252);
      WORD2(GameData_2265738) = *(unsigned __int8*)(v3 + 253);
      return result;
    }
    if (game_GameModeData_instance_ != 0) {
      v8 = GameData_21f1720;
      v9 = GameData_21f1728;
      if (GameData_21f1720 == GameData_21f1728) {
        goto LABEL_41;
      }
      v10 = *(unsigned __int8*)(v3 + 243);
      v11 = *(unsigned __int8*)(v3 + 244);
      if (*(_BYTE*)(game_GameModeData_instance_ + 15) != 0) {
        v12 = &game_gmap_GmapClock_kDefaultTime;
        while (1) {
          v13 = *(_QWORD*)v8;
          if (v10 == *(char*)(*(_QWORD*)v8 + 88LL) &&
              v11 == *(char*)(v13 + 89) &&
              (*(_BYTE*)(*(_QWORD*)(v13 + 24) + 33LL) == 0 ||
               *(unsigned __int8*)(*(_QWORD*)(v13 + 24) + 33LL) ==
                   *(unsigned __int8*)(game_GameModeData_instance_ + 15))) {
            break;
          }
          v8 += 8;
          if (v8 == GameData_21f1728) {
            goto LABEL_42;
          }
        }
        v15 = *(unsigned __int8*)(v13 + 89);
        goto LABEL_34;
      }
    }
    else {
      v8 = GameData_21f1720;
      v9 = GameData_21f1728;
      if (GameData_21f1720 == GameData_21f1728) {
        goto LABEL_41;
      }
      v10 = *(unsigned __int8*)(v3 + 243);
      v11 = *(unsigned __int8*)(v3 + 244);
    }
    v12 = &game_gmap_GmapClock_kDefaultTime;
    while (1) {
      v13 = *(_QWORD*)v8;
      if (v10 == *(char*)(*(_QWORD*)v8 + 88LL) && v11 == *(char*)(v13 + 89)) {
        break;
      }
      v8 += 8;
      if (v8 == v9) {
        goto LABEL_42;
      }
    }
    v15 = *(unsigned __int8*)(v13 + 89);
  LABEL_34:
    v16 = 0;
    do {
      if (*(unsigned __int8*)(v13 + 89) != v15) {
        break;
      }
      if (*(_BYTE*)(v13 + 33) == 18) {
        v16 = v13;
      }
      v13 = *(_QWORD*)(*(_QWORD*)(v13 + 24) + 16LL);
    } while (v13 != 0);
    if (v16 != 0) {
      v12 = (__int64*)(*(_QWORD*)(v16 + 24) + 96LL);
      goto LABEL_42;
    }
  LABEL_41:
    v12 = &game_gmap_GmapClock_kDefaultTime;
  LABEL_42:
    v17 = *(_WORD*)v12;
    v18 = *((_WORD*)v12 + 1);
    v19 = *((_WORD*)v12 + 2);
    result = &GameData_2265750;
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2265760,
                              memory_order_acquire) &
         1) == 0) {
      v23 = v19;
      v21 = __cxa_guard_acquire(&GameData_2265760);
      v19 = v23;
      v22 = v21;
      result = &GameData_2265750;
      if (v22 != 0) {
        GameData_2265758 = 0;
        GameData_2265750 = 0;
        __cxa_guard_release(&GameData_2265760);
        v19 = v23;
        result = &GameData_2265750;
      }
    }
    LOWORD(GameData_2265750) = v17;
    WORD1(GameData_2265750) = v18;
    WORD2(GameData_2265750) = v19;
  }
  return result;
}

bool SubQuestInfo_Unknown30(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  _DWORD* v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  int* v14;
  int v15;
  int v16;
  __int64 v17;
  struct {
    __int64 v19;
    __int64 v20;
    __int64 v21;
  } v19_;

  v2 = (__int64*)a1[1];
  v19_.v20 = 0;
  v19_.v21 = 0;
  v19_.v19 = 0;
  GameSubquestData_1257e40(v2, &v19_.v19);
  v3 = v19_.v20 - v19_.v19;
  if (v19_.v20 == v19_.v19) {
    v7 = 0;
    goto LABEL_11;
  }
  v4 = v3 >> 2;
  v5 = (v3 >> 2) & 7;
  if (v4 < 8) {
    v6 = 0;
    v7 = 0;
    if (v5 == 0) {
      goto LABEL_11;
    }
    goto LABEL_9;
  }
  v8 = (_DWORD*)(v19_.v19 + 16);
  v9 = 0;
  v7 = 0;
  v10 = -(__int64)(v4 & 0xFFFFFFFFFFFFFFF8LL);
  do {
    v9 -= 8;
    v11 = v8[1] + *v8 + *(v8 - 1) + *(v8 - 2) + *(v8 - 3) + *(v8 - 4) + v7;
    v12 = v8[2];
    v13 = v8[3];
    v8 += 8;
    v7 = v13 + v12 + v11;
  } while (v10 != v9);
  v6 = -v9;
  if (v5 != 0) {
  LABEL_9:
    v14 = (int*)(v19_.v19 + 4 * v6);
    do {
      v15 = *v14++;
      --v5;
      v7 += v15;
    } while (v5 != 0);
  }
LABEL_11:
  v16 = (*(__int64 (**)(_QWORD*))(*a1 + 192LL))(a1);
  if (v19_.v19 != 0) {
    v19_.v20 = v19_.v19;
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v17, v19_.v19);
  }
  return v7 >= v16;
}

#pragma GCC visibility pop
