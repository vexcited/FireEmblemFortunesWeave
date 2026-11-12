#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Destroy_BasicMenu(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*GameData_1fa80c0[])();
extern __int64 (*GameData_1fe9538[])();
extern __int64 (*GameData_1fe9998[])();
extern __int64 (*game_menu_MaterialMenuItem_Empty_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_TransporterConst_List_instance__ptr[6];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
__int64 ProcTalkSelectGiftMenu_Destructor_alt1(__int64 a1) __asm__(
    "ProcTalkSelectGiftMenu_Destructor");
__int64 ProcTalkSelectGiftMenu_Unknown128(_QWORD* a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 MapSortieMenu_871860(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fe9438[])();
extern __int64 (*GameData_1fe94b8[])();
extern __int64 (*game_menu_anonymous_TalkSelectGiftMenuItem_vtable[])();
extern __int64 GameData_21c99b8;
__int64 game_menu_anonymous_ProcTalkSelectGiftMenu_BCall(__int64 a1);
__int64 game_menu_anonymous_ProcTalkSelectGiftMenu_AddItemList_closure_Invoke(
    __int64 a1, int* a2);
__int64 game_menu_anonymous_ProcTalkSelectGiftMenu_AddItemList_closure0_Invoke(
    __int64 result, int* a2);
__int64 MapSortieMenu_871860_alt1(__int64, __int64, __int64, __int64,
                                  __int64) __asm__("MapSortieMenu_871860");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void game_menu_BasicMenu_Destroy_BasicMenu_alt1(__int64) __asm__(
    "game_menu_BasicMenu_Destroy_BasicMenu");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcTalkSelectGiftMenu_Destructor(__int64 a1);

void ProcTalkSelectGiftMenu_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(a1 + 1072);
  if (v1 != 0) {
    *(_QWORD*)(a1 + 1080) = v1;
    v2 = a1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, v1);
    a1 = v2;
  }
  game_menu_BasicMenu_Destroy_BasicMenu_alt1(a1);
}

__int64 game_menu_anonymous_ProcTalkSelectGiftMenu_BCall(__int64 a1)
{
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  struct {
    _QWORD v12[4];
    _QWORD* v13;
  } v12_;
  const char* v16;

  if (*(_BYTE*)(a1 + 1096) != 1) {
    return 3;
  }
  v16 = "MID_GiftMenu_Confirm";
  v3 = *(_QWORD*)(a1 + 152);
  v12_.v12[0] = GameData_1fe9438;
  v8_.v9 = v8_.v8;
  v10_.v11 = v10_.v10;
  if (v3 != 0) {
    a1 = v3;
  }
  v12_.v13 = v12_.v12;
  v10_.v10[0] = GameData_1fe94b8;
  v8_.v8[0] = GameData_1fe94b8;
  MapSortieMenu_871860_alt1(a1, (__int64)&v16, (__int64)v12_.v12,
                            (__int64)v10_.v10, (__int64)v8_.v8);
  if (v8_.v9 == v8_.v8) {
    v4 = 32;
  }
  else {
    if (v8_.v9 == nullptr) {
      goto LABEL_10;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v8_.v9 + v4))((__int64)v8_.v9);
LABEL_10:
  if (v10_.v11 == v10_.v10) {
    v6 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_15;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v10_.v11 + v6))((__int64)v10_.v11);
LABEL_15:
  if (v12_.v13 == v12_.v12) {
    v7 = 32;
    goto LABEL_19;
  }
  if (v12_.v13 != nullptr) {
    v7 = 40;
  LABEL_19:
    (*(void (**)(__int64))(*v12_.v13 + v7))((__int64)v12_.v13);
  }
  return 12;
}

__int64 ProcTalkSelectGiftMenu_Unknown128(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 result;
  __int64 v19;
  struct {
    _QWORD v20[4];
    _QWORD* v21;
  } v20_;
  struct {
    _QWORD v22[2];
    _QWORD* v23;
    char gap72_[8];
    _QWORD* v24;
  } v22_;

  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v2 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  *(_WORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  v4 = v2;
  *(_QWORD*)(v2 + 64) = 0;
  *(_QWORD*)(v2 + 72) = 0;
  *(_WORD*)(v2 + 80) = 257;
  *(_BYTE*)(v2 + 82) = 1;
  *(_QWORD*)v2 = game_menu_MaterialMenuItem_Empty_vtable;
  *(_DWORD*)(v2 + 40) = -1;
  v5 = a1[43];
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  }
  v6 = a1[134];
  v7 = a1[135];
  *(_QWORD*)(v4 + 8) = a1;
  a1[43] = v4;
  if (v6 != v7) {
    v20_.v20[0] = GameData_1fe9998;
    v20_.v20[1] = a1;
    v8 = v22_.v22;
    v20_.v21 = v20_.v20;
    v9 =
        *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
    v22_.v23 = v20_.v20;
    v22_.v24 = v22_.v22;
    v10 = *(unsigned int*)(v9 + 80);
    v22_.v22[0] = GameData_1fa80c0;
    v22_.v22[1] = 19;
    if ((int)v10 >= 1) {
      v11 = 0;
      v12 = 12 * v10;
      while (1) {
        v3 = *(_QWORD*)(v9 + 8) + v11;
        if (*(_WORD*)(v3 + 2) != 0) {
          if (v22_.v24 == nullptr) {
            goto LABEL_27;
          }
          (*(void (**)(_QWORD*))(*v22_.v24 + 48LL))(v22_.v24),
              v3 = COERCE_AS(__typeof__(v3),
                             PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
        }
        v11 += 12;
        if (v12 == v11) {
          goto LABEL_16;
        }
      }
    }
  LABEL_19:
    v17 = 32;
    goto LABEL_20;
  }
  v20_.v20[0] = GameData_1fe9538;
  v20_.v20[1] = a1;
  v8 = v22_.v22;
  v20_.v21 = v20_.v20;
  v13 = *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
  v22_.v23 = v20_.v20;
  v22_.v24 = v22_.v22;
  v14 = *(unsigned int*)(v13 + 80);
  v22_.v22[0] = GameData_1fa80c0;
  v22_.v22[1] = 19;
  if ((int)v14 < 1) {
    goto LABEL_19;
  }
  v15 = 0;
  v16 = 12 * v14;
  do {
    v3 = *(_QWORD*)(v13 + 8) + v15;
    if (*(_WORD*)(v3 + 2) != 0) {
      if (v22_.v24 == nullptr) {
      LABEL_27:
        GameRoutine_60a310_alt1(),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
      }
      (*(void (**)(_QWORD*))(*v22_.v24 + 48LL))(v22_.v24),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    }
    v15 += 12;
  } while (v16 != v15);
LABEL_16:
  v8 = v22_.v24;
  if (v22_.v24 == v22_.v22) {
    goto LABEL_19;
  }
  if (v22_.v24 == nullptr) {
    goto LABEL_21;
  }
  v17 = 40;
LABEL_20:
  (*(void (**)(_QWORD*, __int64))(*v8 + v17))(v8, v3),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
LABEL_21:
  result = (__int64)v20_.v21;
  if (v20_.v21 == v20_.v20) {
    v19 = 32;
  }
  else {
    if (v20_.v21 == nullptr) {
      return result;
    }
    v19 = 40;
  }
  return (*(__int64 (**)(_QWORD*, __int64))(*v20_.v21 + v19))(v20_.v21, v3);
}

__int64 game_menu_anonymous_ProcTalkSelectGiftMenu_AddItemList_closure_Invoke(
    __int64 a1, int* a2)
{
  __int64 v2;
  int v3;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      88, 16, 0);
  *(_WORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_DWORD*)(v4 + 40) = v3;
  *(_WORD*)(v4 + 80) = 257;
  *(_BYTE*)(v4 + 82) = 1;
  *(_QWORD*)v4 = game_menu_anonymous_TalkSelectGiftMenuItem_vtable;
  *(_QWORD*)(v4 + 8) = 0;
  return BasicMenuCursor_16e0c00(v2, v4);
}

__int64 game_menu_anonymous_ProcTalkSelectGiftMenu_AddItemList_closure0_Invoke(
    __int64 result, int* a2)
{
  int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  char* v6;
  char* v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  char* v11;
  __int64 v12;

  v2 = *a2;
  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                 game_TransporterConst_List_instance__ptr[0] +
                             8LL) +
                  8LL) +
       12LL * *a2;
  v4 = *(unsigned __int16*)(v3 + 4);
  if (*(_WORD*)(v3 + 4) == 0) {
    return result;
  }
  v5 = *(_QWORD*)(result + 8);
  v6 = *(char**)(v5 + 1072);
  v7 = *(char**)(v5 + 1080);
  if (v6 == v7) {
    goto LABEL_18;
  }
  v8 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8 * v4);
  v9 = v7 - v6 - 8;
  if ((~(_BYTE)v9 & 0x18) != 0) {
    v10 = ((unsigned __int8)((unsigned int)v9 >> 3) + 1) & 3;
    while (*(_QWORD*)v6 != v8) {
      v6 += 8;
      if (--v10 == 0) {
        goto LABEL_7;
      }
    }
  LABEL_18:
    if (v6 != v7) {
    LABEL_19:
      v12 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0);
      *(_WORD*)(v12 + 16) = 0;
      *(_QWORD*)(v12 + 48) = 0;
      *(_QWORD*)(v12 + 56) = 0;
      *(_QWORD*)(v12 + 64) = 0;
      *(_QWORD*)(v12 + 72) = 0;
      *(_DWORD*)(v12 + 40) = v2;
      *(_WORD*)(v12 + 80) = 257;
      *(_BYTE*)(v12 + 82) = 1;
      *(_QWORD*)v12 = game_menu_anonymous_TalkSelectGiftMenuItem_vtable;
      *(_QWORD*)(v12 + 8) = 0;
      return BasicMenuCursor_16e0c00(v5, v12);
    }
    return result;
  }
LABEL_7:
  if (v9 >= 0x18) {
    for (v6 += 16;; v6 += 32) {
      if (*((_QWORD*)v6 - 2) == v8) {
        if (v6 - 16 != v7) {
          goto LABEL_19;
        }
        return result;
      }
      if (*((_QWORD*)v6 - 1) == v8) {
        v6 -= 8;
        goto LABEL_18;
      }
      if (*(_QWORD*)v6 == v8) {
        goto LABEL_18;
      }
      if (*((_QWORD*)v6 + 1) == v8) {
        break;
      }
      v11 = v6 + 16;
      if (v11 == v7) {
        return result;
      }
    }
    if (v6 + 8 != v7) {
      goto LABEL_19;
    }
  }
  return result;
}

#pragma GCC visibility pop
