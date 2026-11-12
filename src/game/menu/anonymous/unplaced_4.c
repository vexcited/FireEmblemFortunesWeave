#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void
EquipInfoItem_AnimalInfo_16c87e0(PSEUDO_X8, __int64, _QWORD**, _BYTE**,
                                 __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void game_menu_f6be60(PSEUDO_X8, __int64, int);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameHr_67ed20(_QWORD*);
__int64 GameRoutine_60a020(__int64, const char*);
__int64 GameSituation_906320(__int64, __int64*);
__int64 LayoutAccessor_155e830(__int64 result, char);
__int64 LayoutAccessor_155ea30(__int64*);
__int64 LayoutAccessor_1563280(__int64*, __int64, char);
__int64 UnitUtil_1212be0(__int64, __int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_menu_1a06840(__int64, __int64, int, int);
__int64 game_menu_ScoutBaseProc_ShowItemDialog(__int64*, __int64, char);
__int64 game_menu_ScoutBaseProc_ShowYesNoDialog(__int64, __int64, char*, char*);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(_QWORD);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__n128 nn_os_UnlockMutex(_QWORD);
char* GameRoutine_a4dbe0(__int64, const char*, char);
const char* game_HashString32(const char* result);
extern _UNKNOWN GameData_216de68;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*msg_TagSelector_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern __int64 GameData_21ec7b8;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gameui_MenuAnimator_instance_;
extern char* msg_MessageManager_empty_text_;
unsigned __int64 GameRoutine_1130770(__int64, const char*, __int64*);
unsigned __int64 strlen(const char*);
void GameRoutine_18855c0(_QWORD*, _QWORD*);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_menu_anonymous_f6fcf0(__int64 a1);
__int64 game_menu_anonymous_f6ff80(__int64 a1);
void game_menu_anonymous_f708a0(__int64 a1);
__attribute__((swiftcall)) void game_menu_anonymous_16b1fb0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void
game_menu_anonymous_16c8660(PSEUDO_X8 x8_, _QWORD* a1, _QWORD** a2, _BYTE** a3,
                            __int64 a4);
__int64 game_menu_anonymous_187e630(__int64 a1);
__int64 game_menu_anonymous_187e6e0(__int64* a1);
__int64 game_menu_anonymous_187ec30(__int64 a1);

void game_menu_anonymous_f6fcf0(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  const char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  struct {
    _QWORD v11[2];
    char* v12;
  } v11_;
  __int64 v13[3];

  v3 = a1 + 152;
  v2 = *(_QWORD**)(a1 + 152);
  strcpy((char*)v13, "*MID_LGV_Scout_Confirm");
  v4 = (const char*)GameHr_67ed20(v2);
  v5 = strlen(v4);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v7 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16,
                                               0);
    v11_.v11[1] = v6;
    v11_.v12 = v7;
    v11_.v11[0] = v8 | 1;
  }
  else {
    LOBYTE(v11_.v11[0]) = 2 * v5;
    v7 = (char*)v11_.v11 + 1;
    if (v5 == 0) {
      goto LABEL_10;
    }
  }
  memmove((__int64)v7, (__int64)v4, v6);
LABEL_10:
  v7[v6] = 0;
  game_menu_ScoutBaseProc_ShowYesNoDialog(v3, a1, (char*)v13, (char*)v11_.v11);
  if ((v11_.v11[0] & 1) != 0 && v11_.v12 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  (__int64)v11_.v12);
  }
  if ((v13[0] & 1) != 0 && v13[2] != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v10,
                                  v13[2]);
  }
}

__int64 game_menu_anonymous_f6ff80(__int64 a1)
{
  __int64 v1;
  __int64* v2;
  __int64* v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  int v32;
  __int64 v33;
  int v34;
  struct {
    __int64 v36[2];
    char gap16_[48];
    __int64 v37;
  } v36_;
  __int64 v38;

  v2 = (__int64*)(a1 + 152);
  v1 = *(_QWORD*)(a1 + 152);
  v36_.v36[0] = 0;
  v36_.v36[1] = v1;
  GameSituation_906320(game_GameModeData_instance_ + 136, v36_.v36);
  v4 = GameData_212c878[0];
  if ((((0x10000000000LL << *(_BYTE*)(*(_QWORD*)(v36_.v37 + 88) + 72LL)) |
        (1LL << *(_BYTE*)(*(_QWORD*)(v36_.v37 + 88) + 73LL))) &
       0xFFBFFFFFFFA39FFFLL) != 0) {
    v5 = *v2;
    v36_.v36[0] = 0;
    v36_.v36[1] = v5;
    GameSituation_906320(game_GameModeData_instance_ + 136, v36_.v36);
    v38 = 0;
    v7 = *(_QWORD*)(v36_.v37 + 88);
    if (v7 != 0) {
      v8 = *(unsigned __int16*)(v7 + 16);
      HIDWORD(v38) = 1;
      v9 = *v4;
      LOWORD(v38) = v8;
      if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v9 + 64) + 8 * v8) + 73LL) == 17) {
        nn_os_LockMutex(&game_g_random_mutex);
        v10 = game_map_MapRandom_instance__ptr[0];
        v11 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL));
        v12 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                         (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
        v13 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
              (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
        *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
            *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
        *((_DWORD*)v10 + 1) = v11;
        v14 = (v13 >> 8) ^ (v12 >> 19) ^ v13 ^ v12;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10) = v12;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v10 + 4) = v14;
        nn_os_UnlockMutex(&game_g_random_mutex);
        HIDWORD(v38) =
            (16 * ((_WORD)v14 -
                   1000 * (unsigned __int16)((v14 & 0x7FFFFFFFu) / 0x3E8)) +
             16) &
                0x3FF0 |
            1;
      }
    }
    v15 = UnitUtil_1212be0((__int64)&v38, 0);
    v16 = *v2;
    v17 = v15;
    v36_.v36[0] = 0;
    v36_.v36[1] = v16;
    GameSituation_906320(game_GameModeData_instance_ + 136, v36_.v36);
    if (v17 >= *(unsigned __int16*)(v36_.v37 + 96)) {
      *(_BYTE*)(a1 + 168) = 1;
    }
  }
  v18 = game_menu_ScoutBaseProc_ShowItemDialog(v2, a1, *(_BYTE*)(a1 + 168));
  v19 = *(_QWORD*)(a1 + 152);
  v20 = v18;
  v36_.v36[0] = 0;
  v36_.v36[1] = v19;
  GameSituation_906320(game_GameModeData_instance_ + 136, v36_.v36);
  v21 = *(_QWORD*)(v36_.v37 + 88);
  v22 = *(_QWORD*)(a1 + 152);
  v36_.v36[0] = 0;
  v36_.v36[1] = v22;
  GameSituation_906320(game_GameModeData_instance_ + 136, v36_.v36);
  v38 = 0;
  v24 = *(_QWORD*)(v36_.v37 + 88);
  if (v24 != 0) {
    v25 = *(unsigned __int16*)(v24 + 16);
    HIDWORD(v38) = 1;
    v26 = *v4;
    LOWORD(v38) = v25;
    if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v26 + 64) + 8 * v25) + 73LL) == 17) {
      nn_os_LockMutex(&game_g_random_mutex);
      v27 = game_map_MapRandom_instance__ptr[0];
      v28 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v29 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v30 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v27 + 1) = v28;
      v31 = (v30 >> 8) ^ (v29 >> 19) ^ v30 ^ v29;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v27) = v29;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v27 + 4) = v31;
      nn_os_UnlockMutex(&game_g_random_mutex);
      HIDWORD(v38) =
          (16 * ((_WORD)v31 -
                 1000 * (unsigned __int16)((v31 & 0x7FFFFFFFu) / 0x3E8)) +
           16) &
              0x3FF0 |
          1;
    }
  }
  v32 = UnitUtil_1212be0((__int64)&v38, 0);
  v33 = *v2;
  v34 = v32;
  v36_.v36[0] = 0;
  v36_.v36[1] = v33;
  GameSituation_906320(game_GameModeData_instance_ + 136, v36_.v36);
  return game_menu_1a06840(v20 + 1496, v21, v34,
                           *(unsigned __int16*)(v36_.v37 + 96));
}

void game_menu_anonymous_f708a0(__int64 a1)
{
  int v2;
  const char* v3;
  __int64 v5;
  __int64 v6;
  _BYTE* v7;
  char v8;
  __int64 v9;
  struct {
    __int64 v10[2];
    const char* v11;
  } v10_;

  game_menu_f6be60((void*)(v10_.v10), a1 + 152, 2 * *(_DWORD*)(a1 + 168) + 5);
  v2 = v10_.v10[0] & 1;
  if ((v10_.v10[0] & 1) != 0) {
    v3 = v10_.v11;
  }
  else {
    v3 = (char*)v10_.v10 + 1;
  }
  if (GameData_21ec7b8 == 0 && v3 != nullptr) {
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        1376, 16, 0);
    GameRoutine_1130770(v5, v3, nullptr);
    v6 = *(_QWORD*)(a1 + 40);
    if (v6 != 0) {
      *(_QWORD*)(v6 + 48) = v5;
      *(_QWORD*)(v5 + 56) = *(_QWORD*)(a1 + 40);
    }
    *(_QWORD*)(a1 + 40) = v5;
    *(_QWORD*)(v5 + 24) = "talk::Seq";
    *(_QWORD*)(v5 + 32) = a1;
    *(_DWORD*)(v5 + 140) = (unsigned int)game_HashString32("talk::Seq");
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 24;
    *(_QWORD*)(v5 + 80) = 1;
    *(_QWORD*)(v5 + 8) = &GameData_216de68;
    *(_QWORD*)(v5 + 16) = &GameData_216de68;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 32LL))(v5);
    if (((*(__int64 (**)(__int64))(*(_QWORD*)v5 + 136LL))(v5) & 1) != 0 &&
        (*(_WORD*)(v5 + 136) & 0x100) == 0) {
      *(_WORD*)(v5 + 136) |= 0x100u;
    }
    v7 = *(_BYTE**)(v5 + 32);
    v8 = v7[138];
    if (v8 == 0) {
      (*(void (**)(_QWORD))(*(_QWORD*)v7 + 64LL))(*(_QWORD*)(v5 + 32));
      v8 = v7[138];
    }
    v7[138] = v8 + 1;
    *(_WORD*)(v5 + 136) |= 2u;
    v2 = v10_.v10[0] & 1;
  }
  if (v2 != 0 && v10_.v11 != nullptr) {
    v9 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v9 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v9,
                                  (__int64)v10_.v11);
  }
}

__attribute__((swiftcall)) void game_menu_anonymous_16b1fb0(PSEUDO_X8 x8_)
{
  __int64* a1 = (__int64*)PSEUDO_X8_VALUE(x8_);
  const char* v2;
  __int64 v3;
  char* v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  char v10;
  __int64 v11;
  struct {
    __int64 v12[7];
    int v13;
    int v14;
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
    __int64 v27;
  } v12_;

  strcpy((char*)v12_.v12, "&MID_NextSelect_Main");
  v2 = (char*)v12_.v12 + 1;
  if (game_GameModeData_instance_ != 0 &&
          *(_DWORD*)(game_GameModeData_instance_ + 60) == 2 &&
          (GameRoutine_60a020((__int64)v12_.v12, "MID_NextSelect_Main_Part2"),
           (v12_.v12[0] & 1) != 0) &&
          (v2 = (const char*)v12_.v12[2], v12_.v12[2] == 0) ||
      *v2 == 0) {
    v4 = msg_MessageManager_empty_text_;
  }
  else {
    v12_.v15 = -1;
    v12_.v16 = -1;
    v12_.v17 = -1;
    v12_.v18 = -1;
    v3 = *msg_MessageManager_instance__ptr[0];
    v12_.v19 = -1;
    v12_.v20 = -1;
    v12_.v21 = -1;
    v12_.v22 = -1;
    v12_.v23 = -1;
    v12_.v24 = -1;
    v12_.v25 = -1;
    v12_.v26 = -1;
    v12_.v12[3] = (__int64)msg_TagSelector_vtable;
    v12_.v12[4] = 0xFFFF0001FFFF0000LL;
    v12_.v12[5] = 0xFFFF0004FFFF0002LL;
    v12_.v12[6] = 0xFFFF0006FFFF0005LL;
    v12_.v27 = 8;
    v12_.v13 = -65529;
    v12_.v14 = -65528;
    v4 = GameRoutine_a4dbe0(v3, v2, 0);
  }
  v5 = strlen(v4);
  if (v5 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v6 = v5;
  if (v5 >= 0x17) {
    if ((v5 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v5 | 7) + 1;
    }
    v9 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v8, 16, 0);
    a1[1] = v6;
    a1[2] = v9;
    *a1 = v8 | 1;
    v7 = v9;
  }
  else {
    *(_BYTE*)a1 = 2 * v5;
    v7 = (__int64)a1 + 1;
    if (v5 == 0) {
      goto LABEL_17;
    }
  }
  memmove(v7, (__int64)v4, v6);
LABEL_17:
  v10 = v12_.v12[0];
  *(_BYTE*)(v7 + v6) = 0;
  if ((v10 & 1) != 0 && v12_.v12[2] != 0) {
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v11,
                                  v12_.v12[2]);
  }
}

__attribute__((swiftcall)) void

game_menu_anonymous_16c8660(PSEUDO_X8 x8_, _QWORD* a1, _QWORD** a2, _BYTE** a3,
                            __int64 a4)
{
  __int64** a5 = (__int64**)PSEUDO_X8_VALUE(x8_);
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v12;
  struct {
    __int64* v13;
    __int64 v14;
  } v13_;

  EquipInfoItem_AnimalInfo_16c87e0((void*)(&v13_.v13), a1[10], a2, a3, a4);
  v7 = v13_.v14;
  if (v13_.v14 == 0) {
    goto LABEL_15;
  }
  v8 = std___1___shared_weak_count_lock(v13_.v14);
  v9 = v13_.v13;
  v10 = v8;
  std___1___shared_weak_count___release_weak(v7);
  if (v10 == 0 || v9 == nullptr) {
    if (v10 == 0) {
      goto LABEL_15;
    }
  }
  else {
    v13_.v13 = v9;
    v13_.v14 = v10;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_18855c0(a1, &v13_.v13);
    v12 = v13_.v14;
    if (v13_.v14 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v13_.v14 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
    }
    *a5 = v9;
    a5[1] = (__int64*)v10;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v10 + 16), 1u,
                              memory_order_relaxed);
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 != nullptr) {
      return;
    }
    goto LABEL_15;
  }
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  std___1___shared_weak_count___release_weak(v10);
  if (v9 == nullptr) {
  LABEL_15:
    *a5 = nullptr;
    a5[1] = nullptr;
  }
}

__int64 game_menu_anonymous_187e630(__int64 a1)
{
  __int64 result;
  __int64 v2;
  __int64* v3;
  struct {
    __int64* v5;
    __int64 v6;
  } v5_;

  LayoutAccessor_1560070((void*)(&v5_.v5), (__int64*)(a1 + 848),
                         "L_Info/L_Stamp");
  result = v5_.v6;
  if (v5_.v6 != 0) {
    v2 = std___1___shared_weak_count_lock(v5_.v6);
    v3 = v5_.v5;
    result = v5_.v6;
    if (v5_.v6 != 0) {
      result = std___1___shared_weak_count___release_weak(v5_.v6);
    }
    if (v2 == 0 || v3 == nullptr) {
      if (v2 == 0) {
        return result;
      }
    }
    else {
      result = LayoutAccessor_155ea30(v3);
      if ((result & 1) != 0) {
        result = GameHr_1562680((__int64)v3, "Wait", 0x1.0000000000000p+0f);
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      return std___1___shared_weak_count___release_weak(v2);
    }
  }
  return result;
}

__int64 game_menu_anonymous_187e6e0(__int64* a1)
{
  __int64 v2;
  __int64* v3;
  bool v4;
  char v5;
  char v6;
  __int64 v8;
  __int64 v9;
  __int64 i;
  _BOOL4 v20;
  __int64 v21;
  struct {
    __int64* v23;
    __int64 v24;
  } v23_;

  LayoutAccessor_1560070((void*)(&v23_.v23), a1 + 106, "L_Info/L_Stamp");
  if (v23_.v24 != 0) {
    v2 = std___1___shared_weak_count_lock(v23_.v24);
    v3 = v23_.v23;
    if (v23_.v24 != 0) {
      std___1___shared_weak_count___release_weak(v23_.v24);
    }
    v4 = v2 == 0 || v3 == nullptr;
    if (v4) {
      if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
        std___1___shared_weak_count___release_weak(v2);
      }
    }
    else {
      v5 = LayoutAccessor_1563280(v3, (__int64)"In", 1);
      v6 = v5;
      if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if ((v5 & 1) != 0) {
          return 0;
        }
      }
      else {
        (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
        std___1___shared_weak_count___release_weak(v2);
        if ((v6 & 1) != 0) {
          return 0;
        }
      }
    }
  }
  if (((*(__int64 (**)(__int64*))(*a1 + 472))(a1) & 1) != 0) {
    return 0;
  }
  v8 = a1[74];
  v9 = a1[75];
  if (v8 != v9) {
    for (i = v8 + 8;; i += 8) {
      v21 = *(_QWORD*)(i - 8);
      if (v21 == -1 || game_gameui_MenuAnimator_instance_ == 0) {
        v20 = false;
      }
      else {
        v20 = v21 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 272) ||
              v21 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 504) ||
              v21 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 736) ||
              v21 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 968) ||
              v21 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1200) ||
              v21 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1432) ||
              v21 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1664) ||
              v21 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 1896) ||
              v21 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2128) ||
              v21 == *(_QWORD*)(game_gameui_MenuAnimator_instance_ + 2360);
        if (v20) {
          return !v20;
        }
      }
      v4 = i == v9;
      if (v4) {
        return !v20;
      }
    }
  }
  return 1;
}

__int64 game_menu_anonymous_187ec30(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 result;
  __int64 v6;
  __int64 v7;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  LayoutAccessor_1560070((void*)(&v8_.v8), (__int64*)(a1 + 848),
                         "L_Info/L_KeyHelp00");
  if (v8_.v9 != 0) {
    v2 = std___1___shared_weak_count_lock(v8_.v9);
    v3 = v8_.v8;
    if (v8_.v9 != 0) {
      std___1___shared_weak_count___release_weak(v8_.v9);
    }
    if (v2 == 0 || v3 == 0) {
      if (v2 == 0) {
        goto LABEL_12;
      }
    }
    else {
      LayoutAccessor_155e830(v3, 0);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2);
      std___1___shared_weak_count___release_weak(v2);
    }
  }
LABEL_12:
  LayoutAccessor_1560070((void*)(&v8_.v8), (__int64*)(a1 + 848),
                         "L_Info/L_KeyHelp01");
  result = v8_.v9;
  if (v8_.v9 == 0) {
    return result;
  }
  v6 = std___1___shared_weak_count_lock(v8_.v9);
  v7 = v8_.v8;
  result = v8_.v9;
  if (v8_.v9 != 0) {
    result = std___1___shared_weak_count___release_weak(v8_.v9);
  }
  if (v6 != 0 && v7 != 0) {
    result = LayoutAccessor_155e830(v7, 0);
  }
  else if (v6 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

#pragma GCC visibility pop
