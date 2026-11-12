#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_17871c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1788420(_QWORD, _QWORD);
__int64 GameRoutine_1788690(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16de4d0(_QWORD);
__int64 game_menu_PageTab_Move(_QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_2071bc8[])();
extern __int64 (*game_gmap_anonymous_EmptyPoolMenuItem_vtable[])();
extern __int64 GameData_20702e8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64* GameData_212d7f8[4];
extern __int64* GameData_21319e8[10];
extern char* GameData_2072a98[8];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
const char* BanquetPool_Unknown43(__int64 a1, char a2);
__int64 BanquetPool_Unknown107(__int64* a1);
__int64 BanquetPool_Unknown128(__int64 a1);
__int64 BanquetPool_Unknown144(__int64 a1, char a2);
__int64 BanquetPool_Unknown145(__int64 a1, char a2);
__int64 BanquetPool_Unknown146(__int64 a1);
bool BanquetPool_Unknown147(__int64 a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
extern __int64 (*game_gmap_anonymous_BanquePoolMenuItem_vtable[])();
extern __int64 game_g_empty_item;
extern __int64* GameData_212c878[6];
__int64 BanquetPool_Unknown7(__int64 a1, char a2);
__int64 BanquetPool_Unknown8(__int64 a1, char a2);
__int64 game_gmap_anonymous_BanquetPool_AddItemList_closure_Invoke(__int64 a1,
                                                                   int* a2);
bool game_gmap_anonymous_BanquetPool_SortAndFilter_closure_Invoke(__int64 a1,
                                                                  int** a2);
_QWORD* game_TransporterConst_List_Impl_EachData(_QWORD* result, __int64,
                                                 __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 game_menu_PageTab_SetupImage(int*, __int64, __int64, unsigned int,
                                     unsigned int, unsigned int);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
bool GameRoutine_19ef8e0(_QWORD*, _QWORD*);
extern __int64 (*GameData_20718f0[])();
extern __int64* GameData_212d7f0[5];
extern __int64 game_TransporterConst_List_instance_;
__int64 game_gmap_anonymous_BanquetPool_OnInit(__int64* a1);
bool game_gmap_anonymous_BanquetPool_SortAndFilter_closure_Invoke_1646570(
    __int64 a1, _QWORD* a2, int** a3);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");

const char* BanquetPool_Unknown43(__int64 a1, char a2)
{
  if ((unsigned __int8)(a2 - 1) > 3u) {
    return "MID_Menu_Default";
  }
  else {
    return GameData_2072a98[(unsigned __int8)(a2 - 1)];
  }
}

__int64 game_gmap_anonymous_BanquetPool_OnInit(__int64* a1)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 result;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  LayoutAccessor_1560070((void*)(&v8_.v8), a1 + 119, (__int64)"L_PageTab");
  v6_.v6[0] = GameData_20718f0;
  v2 = *a1;
  v6_.v7 = v6_.v6;
  v3 = (*(__int64 (**)(__int64*))(v2 + 192))(a1);
  game_menu_PageTab_SetupImage((int*)a1 + 164, (__int64)&v8_.v8,
                               (__int64)v6_.v6, v3, 0xEu, 0xFu);
  if (v6_.v7 == v6_.v6) {
    v4 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v6_.v7 + v4))((__int64)v6_.v7);
LABEL_6:
  result = v8_.v9;
  if (v8_.v9 != 0) {
    return std___1___shared_weak_count___release_weak(v8_.v9);
  }
  return result;
}

__int64 BanquetPool_Unknown107(__int64* a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;

  v2 = __dynamic_cast(a1[132], GameData_21319e8[0], &GameData_20702e8, 0);
  v3 = *a1;
  if (*(_BYTE*)(v2 + 440) != 1) {
    return (*(__int64 (**)(__int64*))(v3 + 1144))(a1);
  }
  if ((*(unsigned int (**)(__int64*))(v3 + 1120))(a1) != 0 &&
      (*(_BYTE*)(a1[132] + 356) & 1) == 0) {
    v5 = a1[22];
    v4 = a1 + 22;
    (*(void (**)(_QWORD*))(v5 + 144))(v4);
    v6 = __dynamic_cast(v4[110], GameData_21319e8[0], &GameData_20702e8, 0);
    GameRoutine_17871c0(v6, 2, 1);
  }
  return 0;
}

__int64 BanquetPool_Unknown128(__int64 a1)
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
  __int64 result;
  __int64 v15;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;
  struct {
    _QWORD v18[4];
    _QWORD* v19;
  } v18_;
  __int64 v20;

  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v2 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 88, 16, 0),
  v3 = COERCE_AS(__typeof__(v3),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v4 = COERCE_AS(__typeof__(v4),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  *(_QWORD*)(v2 + 80) = 0;
  v5 = v2;
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
  *(_QWORD*)v2 = game_gmap_anonymous_EmptyPoolMenuItem_vtable;
  *(_QWORD*)(v2 + 8) = 0;
  v6 = *(_QWORD*)(a1 + 344);
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6),
        v3 = COERCE_AS(__typeof__(v3),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v4 = COERCE_AS(__typeof__(v4),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v7 = *(_QWORD*)(a1 + 1056);
  *(_QWORD*)(v5 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v5;
  if (v7 != 0) {
    v7 = __dynamic_cast(v7, GameData_21319e8[0], &GameData_20702e8, 0),
    v3 = COERCE_AS(__typeof__(v3),
                   PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
    v4 = COERCE_AS(__typeof__(v4),
                   PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  }
  v20 = v7;
  v16_.v16[0] = GameData_2071bc8;
  v16_.v16[1] = a1;
  v16_.v17 = v16_.v16;
  v8 = v18_.v18;
  v16_.v16[2] = &v20;
  v9 = *(_QWORD*)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
  v18_.v18[2] = v16_.v16;
  v18_.v19 = v18_.v18;
  v18_.v18[0] = GameData_212d7f8[0] + 2;
  v18_.v18[1] = 20;
  v10 = *(unsigned int*)(v9 + 80);
  if ((int)v10 < 1) {
    goto LABEL_14;
  }
  v11 = 0;
  v12 = 12 * v10;
  do {
    v3 = *(_QWORD*)(v9 + 8) + v11;
    if (*(_WORD*)(v3 + 2) != 0) {
      if (v18_.v19 == nullptr) {
        GameRoutine_60a310_alt1(),
            v3 = COERCE_AS(__typeof__(v3),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v4 = COERCE_AS(__typeof__(v4),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      (*(void (**)(_QWORD*))(*v18_.v19 + 48LL))(v18_.v19),
          v3 = COERCE_AS(__typeof__(v3),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v4 = COERCE_AS(__typeof__(v4),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    }
    v11 += 12;
  } while (v12 != v11);
  v8 = v18_.v19;
  if (v18_.v19 == v18_.v18) {
  LABEL_14:
    v13 = 32;
  }
  else {
    if (v18_.v19 == nullptr) {
      goto LABEL_16;
    }
    v13 = 40;
  }
  (*(void (**)(_QWORD*, __int64, __int64))(*v8 + v13))(v8, v3, v4),
      v3 = COERCE_AS(__typeof__(v3),
                     PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
      v4 = COERCE_AS(__typeof__(v4),
                     PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
LABEL_16:
  result = (__int64)v16_.v17;
  if (v16_.v17 == v16_.v16) {
    v15 = 32;
  }
  else {
    if (v16_.v17 == nullptr) {
      return result;
    }
    v15 = 40;
  }
  return (*(__int64 (**)(_QWORD*, __int64, __int64))(*v16_.v17 + v15))(v16_.v17,
                                                                       v3, v4);
}

__int64 BanquetPool_Unknown144(__int64 a1, char a2)
{
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1176LL))(a1) & 1) != 0) {
    return GameRoutine_1788420(a1, a2 & 1);
  }
  if ((game_menu_PageTab_Move(a1 + 656, 0xFFFFFFFFLL, a2 & 1) & 1) == 0) {
    return 0;
  }
  game_menu_BasicMenu_Unknown16de4d0(a1);
  return 13;
}

__int64 BanquetPool_Unknown145(__int64 a1, char a2)
{
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1184LL))(a1) & 1) != 0) {
    return GameRoutine_1788690(a1, a2 & 1);
  }
  if ((game_menu_PageTab_Move(a1 + 656, 1, a2 & 1) & 1) == 0) {
    return 0;
  }
  game_menu_BasicMenu_Unknown16de4d0(a1);
  return 13;
}

__int64 BanquetPool_Unknown146(__int64 a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;

  v1 = *(_QWORD*)(a1 + 1056);
  if (v1 != 0 &&
      *(_BYTE*)((v2 = __dynamic_cast(*(_QWORD*)(a1 + 1056), GameData_21319e8[0],
                                     &GameData_20702e8, 0)) +
                440) == 1) {
    v3 = 2;
    v4 = 0;
  }
  else {
    v2 = v1;
    v4 = 1;
    v3 = *(_DWORD*)(*(_QWORD*)(v1 + 8LL * *(unsigned int*)(v1 + 352) + 304) +
                    1064LL) == 0;
  }
  return GameRoutine_17871c0(v2, v3, v4);
}

bool BanquetPool_Unknown147(__int64 a1)
{
  return (*(_DWORD*)(*(_QWORD*)(a1 + 1056) + 356LL) & 1 |
          *(_DWORD*)(a1 + 660)) == 0;
}

__int64 BanquetPool_Unknown7(__int64 a1, char a2)
{
  __int64 v2;

  v2 = a1 - 176;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 176) + 1176LL))(a1 - 176) &
       1) != 0) {
    return GameRoutine_1788420(v2, a2 & 1);
  }
  if ((game_menu_PageTab_Move(a1 + 480, 0xFFFFFFFFLL, a2 & 1) & 1) == 0) {
    return 0;
  }
  game_menu_BasicMenu_Unknown16de4d0(v2);
  return 13;
}

__int64 BanquetPool_Unknown8(__int64 a1, char a2)
{
  __int64 v2;

  v2 = a1 - 176;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)(a1 - 176) + 1184LL))(a1 - 176) &
       1) != 0) {
    return GameRoutine_1788690(v2, a2 & 1);
  }
  if ((game_menu_PageTab_Move(a1 + 480, 1, a2 & 1) & 1) == 0) {
    return 0;
  }
  game_menu_BasicMenu_Unknown16de4d0(v2);
  return 13;
}

__int64 game_gmap_anonymous_BanquetPool_AddItemList_closure_Invoke(__int64 a1,
                                                                   int* a2)
{
  __int64 v2;
  __int64* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  int v7;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(__int64**)(a1 + 16);
  v4 = *a2;
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
  v6 = *v3;
  *(_WORD*)(v5 + 16) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_DWORD*)(v5 + 40) = v4;
  *(_DWORD*)(v5 + 96) = 0;
  *(_WORD*)(v5 + 80) = 257;
  *(_BYTE*)(v5 + 82) = 1;
  *(_QWORD*)(v5 + 88) = v6;
  *(_QWORD*)v5 = game_gmap_anonymous_BanquePoolMenuItem_vtable;
  *(_QWORD*)(v5 + 8) = 0;
  if (v4 == -1) {
    v7 = 0;
  }
  else {
    v7 = *(
        unsigned __int16*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                     game_TransporterConst_List_instance__ptr
                                                         [0] +
                                                 8LL) +
                                      8LL) +
                           12LL * v4 + 2);
  }
  *(_DWORD*)(v5 + 100) = v7;
  return BasicMenuCursor_16e0c00(v2, v5);
}

bool game_gmap_anonymous_BanquetPool_SortAndFilter_closure_Invoke(__int64 a1,
                                                                  int** a2)
{
  int* v2;
  int v4;
  unsigned __int8 v5;
  __int64* v7;
  unsigned int v8;

  v2 = *a2;
  if (((*(__int64 (**)(int*))(*(_QWORD*)*a2 + 480LL))(*a2) & 1) != 0) {
    if ((_WORD)game_g_empty_item != 0) {
      goto LABEL_3;
    }
    return false;
  }
  if (*(_WORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                          game_TransporterConst_List_instance__ptr
                                              [0] +
                                      8LL) +
                           8LL) +
                12LL * v2[10] + 4) == 0) {
    return false;
  }
LABEL_3:
  v4 = *(unsigned __int8*)(a1 + 8);
  if (v4 == 0) {
    return true;
  }
  if (((*(__int64 (**)(int*))(*(_QWORD*)v2 + 480LL))(v2) & 1) != 0) {
    v5 = 0;
  }
  else {
    if (((*(__int64 (**)(int*))(*(_QWORD*)v2 + 480LL))(v2) & 1) != 0) {
      v7 = &game_g_empty_item;
    }
    else {
      v7 =
          (__int64*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                               game_TransporterConst_List_instance__ptr
                                                   [0] +
                                           8LL) +
                                8LL) +
                     12LL * v2[10] + 4);
    }
    v8 = *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                        8LL * *(unsigned __int16*)v7) +
                             94LL);
    if (v8 < 3) {
      v5 = v8 + 1;
    }
    else {
      v5 = 0;
    }
  }
  return v4 == v5;
}

bool game_gmap_anonymous_BanquetPool_SortAndFilter_closure_Invoke_1646570(
    __int64 a1, _QWORD* a2, int** a3)
{
  __int64 v3;
  int* v4;
  __int64* v6;
  __int64* v7;
  unsigned int v8;
  int v9;
  char v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  struct {
    _QWORD v27[2];
    int v28;
    int v29;
    char v30;
  } v27_;
  struct {
    _QWORD v31[2];
    int v32;
    int v33;
    char v34;
    char gap57_[7];
    _QWORD* v35;
  } v31_;

  v3 = *a2;
  v4 = *a3;
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 480LL))(*a2) & 1) != 0) {
    v6 = &game_g_empty_item;
  }
  else {
    v6 = (__int64*)(*(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ +
                                          8) +
                               8LL) +
                    12LL * *(int*)(v3 + 40) + 4);
  }
  if (((*(__int64 (**)(int*))(*(_QWORD*)v4 + 480LL))(v4) & 1) != 0) {
    v7 = &game_g_empty_item;
  }
  else {
    v7 = (__int64*)(*(_QWORD*)(*(_QWORD*)(game_TransporterConst_List_instance_ +
                                          8) +
                               8LL) +
                    12LL * v4[10] + 4);
  }
  v8 = *(unsigned __int8*)(a1 + 8);
  v9 = 0;
  if (v8 > 2) {
    if (v8 != 3) {
      v10 = 0;
      v11 = 0;
      if (v8 == 4) {
        v10 = 0;
        v13 = *(_QWORD*)(*GameData_212c878[0] + 64);
        v11 =
            *(unsigned __int8*)(*(_QWORD*)(v13 + 8LL * *(unsigned __int16*)v6) +
                                95LL);
        v9 =
            *(unsigned __int8*)(*(_QWORD*)(v13 + 8LL * *(unsigned __int16*)v7) +
                                95LL);
      }
      goto LABEL_19;
    }
    v15 = GameData_212c878[0];
    v16 = *(_QWORD*)(*GameData_212c878[0] + 64);
    v17 = *(_QWORD*)(v16 + 8LL * *(unsigned __int16*)v6);
    if ((((0x10000000000LL << *(_BYTE*)(v17 + 72)) |
          (1LL << *(_BYTE*)(v17 + 73))) &
         0xFFBFFFFFFFA39FFFLL) != 0 ||
        (v18 = *(_QWORD*)(v16 + 8LL * *(unsigned __int16*)v7),
         (((0x10000000000LL << *(_BYTE*)(v18 + 72)) |
           (1LL << *(_BYTE*)(v18 + 73))) &
          0xFFBFFFFFFFA39FFFLL) != 0)) {
      v9 = 0;
      v10 = 0;
      v11 = 0;
      goto LABEL_19;
    }
    LODWORD(v27_.v27[0]) = 0;
    v20 = *(_QWORD**)(game_TransporterConst_List_instance_ + 8);
    v21 = GameData_212d7f0[0];
    v31_.v35 = v31_.v31;
    v31_.v31[0] = GameData_212d7f0[0] + 2;
    v31_.v31[1] = v27_.v27;
    game_TransporterConst_List_Impl_EachData(v20, v17, (__int64)v31_.v31);
    if (v31_.v35 == v31_.v31) {
      v22 = 32;
    }
    else {
      if (v31_.v35 == nullptr) {
        goto LABEL_25;
      }
      v22 = 40;
    }
    (*(void (**)(__int64))(*v31_.v35 + v22))((__int64)v31_.v35);
  LABEL_25:
    v23 = *v15;
    v11 = v27_.v27[0];
    LODWORD(v27_.v27[0]) = 0;
    v24 = *(_QWORD**)(game_TransporterConst_List_instance_ + 8);
    v25 = *(_QWORD*)(*(_QWORD*)(v23 + 64) + 8LL * *(unsigned __int16*)v7);
    v31_.v35 = v31_.v31;
    v31_.v31[0] = v21 + 2;
    v31_.v31[1] = v27_.v27;
    game_TransporterConst_List_Impl_EachData(v24, v25, (__int64)v31_.v31);
    if (v31_.v35 == v31_.v31) {
      v26 = 32;
    }
    else {
      if (v31_.v35 == nullptr) {
      LABEL_30:
        v9 = v27_.v27[0];
        goto LABEL_15;
      }
      v26 = 40;
    }
    (*(void (**)(__int64))(*v31_.v35 + v26))((__int64)v31_.v35);
    goto LABEL_30;
  }
  if (v8 == 1) {
    v14 = *(_QWORD*)(*GameData_212c878[0] + 64);
    v11 = *(unsigned __int8*)(*(_QWORD*)(v14 + 8LL * *(unsigned __int16*)v6) +
                              97LL);
    v9 = *(unsigned __int8*)(*(_QWORD*)(v14 + 8LL * *(unsigned __int16*)v7) +
                             97LL);
    goto LABEL_15;
  }
  v10 = 0;
  v11 = 0;
  if (v8 == 2) {
    v12 = *(_QWORD*)(*GameData_212c878[0] + 64);
    v11 = *(unsigned __int8*)(*(_QWORD*)(v12 + 8LL * *(unsigned __int16*)v6) +
                              98LL);
    v9 = *(unsigned __int8*)(*(_QWORD*)(v12 + 8LL * *(unsigned __int16*)v7) +
                             98LL);
  LABEL_15:
    v10 = 1;
  }
LABEL_19:
  v31_.v31[0] = v6;
  v31_.v31[1] = 0;
  v31_.v32 = 0;
  v31_.v33 = v11;
  v31_.v34 = v10;
  v27_.v27[0] = v7;
  v27_.v27[1] = 0;
  v27_.v28 = 0;
  v27_.v29 = v9;
  v27_.v30 = v10;
  return GameRoutine_19ef8e0(v31_.v31, v27_.v27);
}

#pragma GCC visibility pop
