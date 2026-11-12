#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1874730(_QWORD, _QWORD);
__int64 GameRoutine_667ea0(_QWORD, _QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_9c0680(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_menu_BasicMenu_Unknown16dd9a0(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern __int64 (*GameData_1fb5ae8[])();
extern __int64 (*game_facility_EmptyDepositoryMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_TransporterConst_List_instance_;
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcObeliskDepositoryMaterialMenu_Unknown85(__int64 a1);
__int64 ProcObeliskDepositoryMaterialMenu_Unknown109(_QWORD* a1);
_QWORD* ProcObeliskDepositoryMaterialMenu_Unknown128(__int64 a1);
__int64 ProcObeliskDepositoryMaterialMenu_Unknown148_alt1(
    __int64 a1,
    __int64* a2) __asm__("ProcObeliskDepositoryMaterialMenu_Unknown148");
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
extern __int64 (*GameData_1fb5f90[])();
extern __int64 (*game_facility_DepositoryMenuItem_vtable[])();
extern __int64* GameData_212c878[6];
__int64
game_facility_anonymous_ProcObeliskDepositoryMaterialMenu_AddItemList_closure_Invoke(
    __int64 result, __int64 a2);
bool game_facility_anonymous_ProcObeliskDepositoryMaterialMenu_SortAndFilter_closure_Invoke(
    __int64 a1, _QWORD* a2);
__int64* LayoutAccessor_155fbe0(__int64*, __int64);
__int64 GameRoutine_71fb20(__int64*);
__int64 LayoutAccessor_1572ac0(__int64*, __int64, unsigned int, unsigned int);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_gameui_15d2a40(__int64*, _WORD*);
bool GameRoutine_19ef8e0(_QWORD*, _QWORD*);
extern __int64* GameData_212cd68[26];
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e010[8];
extern __int64 GameData_212cf90[3];
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
__int64 ProcObeliskDepositoryMaterialMenu_Unknown88_alt1(__int64 a1) __asm__(
    "ProcObeliskDepositoryMaterialMenu_Unknown88");
__int64 ProcObeliskDepositoryMaterialMenu_9bfe50_alt1(__int64 a1) __asm__(
    "ProcObeliskDepositoryMaterialMenu_9bfe50");
bool game_facility_anonymous_ProcObeliskDepositoryMaterialMenu_SortAndFilter_closure_Invoke_9c04c0(
    __int64 a1, _QWORD* a2, __int64* a3);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, __int64);
__int64 game_menu_PageTab_SetupImage(int*, __int64, __int64, unsigned int,
                                     unsigned int, unsigned int);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1fb5a68[])();
__int64
game_facility_anonymous_ProcObeliskDepositoryMaterialMenu_OnInit(__int64 a1);
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
void GameHr_1874730(__int64*, char);
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
__int64*
LayoutAccessor_155fbe0_alt1(__int64*,
                            const char*) __asm__("LayoutAccessor_155fbe0");
__int64
LayoutAccessor_1562cf0_alt1(__int64 result,
                            const char*) __asm__("LayoutAccessor_1562cf0");
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
char* GameRoutine_a4dbe0_alt2(__int64, const char*,
                              char) __asm__("GameRoutine_a4dbe0");
extern __int64* GameData_212d670[3];
extern __int64* GameData_212e028[5];
extern __int64 GameData_212d690;
void GameRoutine_156c910(__int64, const char*, int, ...);
void GameRoutine_157cb40(__int64*, int, __int64, __int64, unsigned int, char);
void ProcObeliskDepositoryMaterialMenu_Unknown141(__int64* a1);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_gameui_15d2a40_alt1(__int64,
                                 _WORD*) __asm__("game_gameui_15d2a40");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void GameRoutine_71fb20_alt1(__int64*) __asm__("GameRoutine_71fb20");
void LayoutAccessor_1572ac0_alt1(
    __int64, __int64, unsigned int,
    unsigned int) __asm__("LayoutAccessor_1572ac0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_874520_alt1() __asm__("GameRoutine_874520");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcObeliskDepositoryMaterialMenu_Unknown88(__int64 a1);
void ProcObeliskDepositoryMaterialMenu_Unknown148(__int64 a1, __int64* a2);
void ProcObeliskDepositoryMaterialMenu_9bfe50(__int64 a1);
__int64

game_facility_anonymous_ProcObeliskDepositoryMaterialMenu_OnInit(__int64 a1)
{
  __int64 v2;
  unsigned int v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  const char* v7;
  struct {
    _QWORD v9[4];
    _QWORD* v10;
  } v9_;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;

  LayoutAccessor_1562cf0(a1 + 848, (__int64)"Transport_On");
  ProcObeliskDepositoryMaterialMenu_9bfe50_alt1(a1);
  LayoutAccessor_1560070((void*)(&v11_.v11), (__int64*)(a1 + 848),
                         (__int64)"L_PageTab");
  v9_.v9[0] = GameData_1fb5a68;
  v2 = *(_QWORD*)a1;
  v9_.v10 = v9_.v9;
  v3 = (*(__int64 (**)(__int64))(v2 + 192))(a1);
  game_menu_PageTab_SetupImage((int*)(a1 + 656), (__int64)&v11_.v11,
                               (__int64)v9_.v9, v3, 0xEu, 0xFu);
  if (v9_.v10 == v9_.v9) {
    v4 = 32;
  }
  else {
    if (v9_.v10 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v9_.v10 + v4))((__int64)v9_.v10);
LABEL_6:
  if (v11_.v12 != 0) {
    std___1___shared_weak_count___release_weak(v11_.v12);
  }
  v5 = (*(_QWORD*)(a1 + 1080) - *(_QWORD*)(a1 + 1072)) >> 3;
  v6 = LayoutAccessor_155fbe0((__int64*)(a1 + 848), (__int64)"L_UnitInfo");
  if ((int)v5 >= 1) {
    v7 = "Info00";
  }
  else {
    v7 = "Simple00";
  }
  return LayoutAccessor_1562cf0((__int64)v6, (__int64)v7);
}

__int64 ProcObeliskDepositoryMaterialMenu_Unknown85(__int64 a1)
{
  int v1;
  __int64 v2;
  char* v4;
  __int64 v5;
  __int64 v6;

  v1 = *(_DWORD*)(a1 + 660);
  v2 = *(_QWORD*)(a1 + 672);
  if (v1 < (unsigned __int64)((*(_QWORD*)(a1 + 680) - v2) >> 2)) {
    v1 = *(_DWORD*)(v2 + 4LL * v1);
  }
  GameHr_1874730((__int64*)a1, v1);
  v4 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0],
                               "MID_Sys_Fragment", 0);
  if (v4 != nullptr) {
    v5 = (__int64)v4;
    v6 = ui_LayoutAccessor_FindTextBox_alt1((__int64*)(a1 + 848),
                                            (__int64)"T_Gold");
    if (v6 != 0) {
      GameRoutine_156c5d0_alt1(v6, v5, 0);
    }
  }
  return (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 1128LL))(a1);
}

void ProcObeliskDepositoryMaterialMenu_Unknown88(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  bool v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  __int64 v19;
  __int64 v20;
  _WORD* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212e008[0], GameData_212e010[0], 0);
    if (v3 != 0) {
      v4 = v3;
      v5 = LayoutAccessor_155fbe0_alt1((__int64*)(a1 + 848), "L_InfoDetail");
      v6 = (__int64*)GameData_212cf90[0];
      v8 = *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf90[0]);
      v7 = *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf90[0] + 8);
      v10 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf90[0]);
      v9 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf90[0] + 8);
      v11 = v9 == v10;
      v12 = v7 - 1 + v8;
      v13 = v12 >> 9;
      v14 = v12 & 0x1FF;
      v15 = ((v9 - v10) << 6) - 1;
      v16 = *(_QWORD*)(v10 + 8 * v13);
      if (v11) {
        v15 = 0;
      }
      v17 = *(_QWORD*)(v16 + 8 * v14);
      v18 = (__int64*)game_TransporterConst_List_instance__ptr[0];
      *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + GameData_212cf90[0]) =
          v7 - 1;
      *v18 = v17;
      if ((unsigned __int64)(v15 - (v7 + v8) + 1) >= 0x400) {
        v19 = *(_QWORD*)(v9 - 8);
        if (v19 != 0) {
          v20 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v20 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v19);
          v9 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6);
        }
        *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v6) = v9 - 8;
      }
      v21 = (_WORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4);
      game_gameui_15d2a40_alt1((__int64)v5, v21);
      v22 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6);
      v23 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6 + 8);
      v24 = *v18;
      v25 = ((v23 - v22) << 6) - 1;
      if (v23 == v22) {
        v25 = 0;
      }
      v26 = *(_QWORD*)(game_GameModeData_instance_ + 176) + 2464LL;
      v27 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v6 + 8) +
            *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v6);
      if (v25 == v27) {
        GameRoutine_71fb20_alt1(v6);
        v22 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v6);
        v27 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v6 + 8) +
              *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v6);
      }
      *(_QWORD*)(*(_QWORD*)(v22 + 8 * (v27 >> 9)) + 8 * (v27 & 0x1FF)) = v24;
      *v18 = v26;
      ++*(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v6);
    }
  }
}

__int64 ProcObeliskDepositoryMaterialMenu_Unknown109(_QWORD* a1)
{
  int v2;
  __int64 v4;
  __int64 v5;
  _BYTE v6[32];
  _BYTE* v7;
  const char* v8;

  v2 = GameRoutine_9c0680(a1 + 133);
  if (v2 == 2) {
    v8 = "MID_Shop_FullItem_Material_Message";
    v4 = GameRoutine_667ea0(a1, &v8);
    if (v4 != 0) {
      v7 = nullptr;
      GameRoutine_6680e0(v6, v4 + 1248);
      if (v7 == v6) {
        v5 = 32;
        goto LABEL_10;
      }
      if (v7 != nullptr) {
        v5 = 40;
      LABEL_10:
        (*(void (**)(void*))(*(_QWORD*)v7 + v5))((void*)v7);
      }
    }
    return 12;
  }
  if (v2 != 0) {
    return 1;
  }
  (*(void (**)(_QWORD*))(a1[22] + 144LL))(a1 + 22);
  (*(void (**)(_QWORD*))(*a1 + 1128LL))(a1);
  game_menu_BasicMenu_Unknown16dd9a0(a1);
  return 13;
}

_QWORD* ProcObeliskDepositoryMaterialMenu_Unknown128(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  _QWORD* result;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD v12[4];
  _QWORD* v13;

  v2 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      96, 16, 0);
  *(_QWORD*)(v2 + 72) = 0;
  *(_QWORD*)(v2 + 80) = 0;
  *(_QWORD*)(v2 + 16) = 0;
  *(_QWORD*)(v2 + 24) = 0;
  v4 = v2;
  *(_QWORD*)(v2 + 32) = 0;
  *(_QWORD*)(v2 + 40) = 0;
  *(_QWORD*)(v2 + 48) = 0;
  *(_QWORD*)(v2 + 56) = 0;
  *(_QWORD*)(v2 + 64) = 0;
  *(_WORD*)(v2 + 80) = 257;
  *(_BYTE*)(v2 + 82) = 1;
  *(_DWORD*)(v2 + 84) = 1;
  *(_QWORD*)(v2 + 88) = 0;
  *(_QWORD*)v2 = game_facility_EmptyDepositoryMenuItem_vtable;
  *(_QWORD*)(v2 + 8) = 0;
  v5 = *(_QWORD*)(a1 + 344);
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  result = v12;
  *(_QWORD*)(v4 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v4;
  v12[0] = GameData_1fb5ae8;
  v12[1] = a1;
  v13 = v12;
  v7 = *(_QWORD*)(game_TransporterConst_List_instance_ + 8);
  v8 = *(unsigned int*)(v7 + 80);
  if ((int)v8 < 1) {
    goto LABEL_12;
  }
  v9 = 0;
  v10 = 12 * v8;
  do {
    v3 = *(_QWORD*)(v7 + 8) + v9;
    if (*(_WORD*)(v3 + 2) != 0) {
      if (v13 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_QWORD*))(*v13 + 48LL))(v13);
    }
    v9 += 12;
  } while (v10 != v9);
  result = v13;
  if (v13 == v12) {
  LABEL_12:
    v11 = 32;
  }
  else {
    if (v13 == nullptr) {
      return result;
    }
    v11 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*result + v11))(result,
                                                                     v3);
}

void ProcObeliskDepositoryMaterialMenu_Unknown141(__int64* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  const char* v5;
  unsigned __int64 v6;
  __int64* v7;
  const char* v8;
  __int64* v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64* v19;
  unsigned int v20;
  __int64* v21;
  __int64* v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  unsigned int v30;
  __int64* v31;
  __int64* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;

  v1 = a1[135];
  v2 = a1[134];
  v4 = (__int64)(a1 + 106);
  if ((int)((unsigned __int64)(v1 - v2) >> 3) <= 0) {
    v5 = "Transport_On";
  }
  else {
    v5 = "TransportCost_On";
  }
  LayoutAccessor_1562cf0_alt1(v4, v5);
  v6 = (unsigned __int64)(a1[135] - a1[134]) >> 3;
  v7 = LayoutAccessor_155fbe0_alt1(a1 + 106, "L_UnitInfo");
  if ((int)v6 >= 1) {
    v8 = "Info00";
  }
  else {
    v8 = "Simple00";
  }
  LayoutAccessor_1562cf0_alt1((__int64)v7, v8);
  v9 = msg_MessageManager_instance__ptr[0];
  v10 = GameRoutine_a4dbe0_alt2(*msg_MessageManager_instance__ptr[0],
                                "MID_DepositoryMenu_TotalNum", 0);
  if (v10 != nullptr) {
    v11 = (__int64)v10;
    v12 = ui_LayoutAccessor_FindTextBox_alt1(a1 + 106, (__int64)"T_NumTitle");
    if (v12 != 0) {
      GameRoutine_156c5d0_alt1(v12, v11, 0);
    }
  }
  v13 = GameRoutine_a4dbe0_alt2(*v9, "MID_DepositoryMenu_TotalPrice", 0);
  if (v13 != nullptr) {
    v14 = (__int64)v13;
    v15 = ui_LayoutAccessor_FindTextBox_alt1(a1 + 106, (__int64)"T_CostTitle");
    if (v15 != 0) {
      GameRoutine_156c5d0_alt1(v15, v14, 0);
    }
  }
  v16 = LayoutAccessor_155fbe0_alt1(a1 + 106, "L_CostGold");
  v17 = (_QWORD*)a1[134];
  v18 = (_QWORD*)a1[135];
  v19 = v16;
  if (v17 == v18) {
    v20 = 0;
  }
  else {
    v20 = 0;
    v21 = GameData_212e008[0];
    v22 = GameData_212e028[0];
    v23 = GameData_212c878[0];
    v24 = GameData_212cd68[0];
    do {
      if (*v17 != 0) {
        v25 = __dynamic_cast(*v17, v21, v22, 0);
        if (v25 != 0) {
          v26 = v25;
          v27 = *(
              _QWORD*)(*(_QWORD*)(*v24 + 64) +
                       8LL *
                           *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v23 +
                                                                     64) +
                                                          8LL *
                                                              *(unsigned __int16*)(*(
                                                                  __int64 (**)(
                                                                      __int64))(
                                                                  *(_QWORD*)
                                                                      v25 +
                                                                  560LL))(
                                                                  v25)) +
                                               84LL));
          if (v27 != 0) {
            LODWORD(v27) = *(unsigned __int16*)(v27 + 32);
          }
          v20 += *(_DWORD*)(v26 + 84) * v27;
        }
      }
      ++v17;
    } while (v17 != v18);
  }
  GameRoutine_157cb40(v19, 3, (__int64)"Icon", (__int64)"T_Num", v20, 1);
  v28 = (_QWORD*)a1[134];
  v29 = (_QWORD*)a1[135];
  if (v28 == v29) {
    v30 = 0;
  }
  else {
    v30 = 0;
    v31 = GameData_212e008[0];
    v32 = GameData_212e028[0];
    do {
      if (*v28 != 0) {
        v33 = __dynamic_cast(*v28, v31, v32, 0);
        if (v33 != 0) {
          v30 += *(_DWORD*)(v33 + 84);
        }
      }
      ++v28;
    } while (v28 != v29);
  }
  v34 = ui_LayoutAccessor_FindPane(a1 + 106, (__int64)"T_CountNum");
  if (v34 != 0) {
    v35 = __dynamic_cast(v34, GameData_212d670[0], GameData_212d690, 0);
    if (v35 != 0) {
      GameRoutine_156c910(v35, "%d", 1, v30);
    }
  }
}

void ProcObeliskDepositoryMaterialMenu_Unknown148(__int64 a1, __int64* a2)
{
  int v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  signed __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  int v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;

  v3 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v4 = a2[1];
  v5 = a2[2];
  if (v4 >= v5) {
    v7 = *a2;
    v8 = v4 - *a2;
    v9 = 1 - 0x3333333333333333LL * (v8 >> 3);
    if (v9 > 0x666666666666666LL) {
      GameRoutine_874520_alt1();
    }
    v10 = fw_memory_g_heap_manager_ptr;
    v11 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - v7) >> 3);
    if (2 * v11 > v9) {
      v9 = 2 * v11;
    }
    if (v11 >= 0x333333333333333LL) {
      v12 = 0x666666666666666LL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 > 0x666666666666666LL) {
        GameRoutine_60a210_alt1();
      }
      v13 = v3;
      v14 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v12, 16, 0);
      v3 = v13;
    }
    else {
      v14 = 0;
    }
    v15 = v14 + v8;
    *(_QWORD*)v15 = "MultiSelection";
    *(_QWORD*)(v15 + 8) = "MID_KeyHelp_MultiSelection";
    *(_BYTE*)(v15 + 28) = 0;
    *(_QWORD*)(v15 + 32) = 0;
    *(_BYTE*)(v15 + 16) = 1;
    v16 = v14 + 40 * v12;
    v6 = v14 + v8 + 40;
    *(_DWORD*)(v15 + 20) = 7;
    *(_DWORD*)(v15 + 24) = v3;
    memcpy_alt1(v14, v7, v8);
    *a2 = v14;
    a2[1] = v6;
    a2[2] = v16;
    if (v7 != 0) {
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v10 + v17, v7);
    }
  }
  else {
    *(_BYTE*)(v4 + 28) = 0;
    *(_QWORD*)(v4 + 32) = 0;
    *(_QWORD*)v4 = "MultiSelection";
    *(_QWORD*)(v4 + 8) = "MID_KeyHelp_MultiSelection";
    v6 = v4 + 40;
    *(_BYTE*)(v4 + 16) = 1;
    *(_DWORD*)(v4 + 20) = 7;
    *(_DWORD*)(v4 + 24) = v3;
  }
  a2[1] = v6;
}

void ProcObeliskDepositoryMaterialMenu_9bfe50(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;

  v1 = (__int64*)GameData_212cf90[0];
  v3 = *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf90[0]);
  v2 = *(_QWORD*)((char*)((char*)0x20LL) + GameData_212cf90[0] + 8);
  v5 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf90[0]);
  v4 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + GameData_212cf90[0] + 8);
  v6 = v4 == v5;
  v7 = v2 - 1 + v3;
  v8 = v7 >> 9;
  v9 = v7 & 0x1FF;
  v10 = ((v4 - v5) << 6) - 1;
  v11 = *(_QWORD*)(v5 + 8 * v8);
  if (v6) {
    v10 = 0;
  }
  v12 = *(_QWORD*)(v11 + 8 * v9);
  v13 = (__int64*)game_TransporterConst_List_instance__ptr[0];
  *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + GameData_212cf90[0]) = v2 - 1;
  *v13 = v12;
  if ((unsigned __int64)(v10 - (v2 + v3) + 1) >= 0x400) {
    v14 = *(_QWORD*)(v4 - 8);
    if (v14 != 0) {
      v15 = a1;
      v16 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v16 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, v14);
      v4 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v1);
      a1 = v15;
    }
    *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v1) = v4 - 8;
  }
  v17 = LayoutAccessor_155fbe0_alt1((__int64*)(a1 + 848), "L_UnitInfo");
  LayoutAccessor_1572ac0_alt1((__int64)v17, 0, 1u, 1u);
  v18 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v1);
  v19 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v1 + 8);
  v20 = *v13;
  v21 = ((v19 - v18) << 6) - 1;
  if (v19 == v18) {
    v21 = 0;
  }
  v22 = *(_QWORD*)(game_GameModeData_instance_ + 176);
  v23 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v1 + 8) +
        *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v1);
  if (v21 == v23) {
    GameRoutine_71fb20_alt1(v1);
    v18 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v1);
    v23 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v1 + 8) +
          *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v1);
  }
  *(_QWORD*)(*(_QWORD*)(v18 + 8 * (v23 >> 9)) + 8 * (v23 & 0x1FF)) = v20;
  *v13 = v22 + 2464;
  ++*(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v1);
}

__int64

game_facility_anonymous_ProcObeliskDepositoryMaterialMenu_AddItemList_closure_Invoke(
    __int64 result, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;

  v2 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                  8LL * *(unsigned __int16*)(a2 + 4));
  if ((((0x10000000000LL << *(_BYTE*)(v2 + 72)) | (1LL << *(_BYTE*)(v2 + 73))) &
       0xFFBFFFFFFFA39FFFLL) == 0) {
    v3 = *(_QWORD*)(result + 8);
    v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        112, 16, 0);
    *(_WORD*)(v5 + 16) = 0;
    *(_DWORD*)(v5 + 40) = 0;
    *(_QWORD*)(v5 + 48) = 0;
    *(_QWORD*)(v5 + 56) = 0;
    *(_QWORD*)(v5 + 64) = 0;
    *(_QWORD*)(v5 + 72) = 0;
    *(_BYTE*)(v5 + 82) = 1;
    *(_DWORD*)(v5 + 84) = 1;
    *(_BYTE*)(v5 + 88) = 0;
    *(_WORD*)(v5 + 80) = 257;
    *(_QWORD*)v5 = game_facility_DepositoryMenuItem_vtable;
    *(_QWORD*)(v5 + 8) = 0;
    *(_QWORD*)(v5 + 96) = GameData_1fb5f90;
    *(_QWORD*)(v5 + 104) = a2;
    return BasicMenuCursor_16e0c00(v3, v5);
  }
  return result;
}

bool game_facility_anonymous_ProcObeliskDepositoryMaterialMenu_SortAndFilter_closure_Invoke(
    __int64 a1, _QWORD* a2)
{
  int v2;

  v2 = *(unsigned __int8*)(a1 + 8);
  return v2 == 32 ||
         v2 == *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                         64) +
                                              8LL * *(unsigned __int16*)(*(
                                                        __int64 (**)(_QWORD))(
                                                        *(_QWORD*)*a2 + 560LL))(
                                                        *a2)) +
                                   73LL);
}

bool game_facility_anonymous_ProcObeliskDepositoryMaterialMenu_SortAndFilter_closure_Invoke_9c04c0(
    __int64 a1, _QWORD* a2, __int64* a3)
{
  __int64 v3;
  __int64 v4;
  unsigned __int16* v6;
  unsigned __int16* v7;
  int v8;
  __int64 v9;
  int v10;
  char v11;
  __int64 v12;
  unsigned __int16* v13;
  unsigned __int16* v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  struct {
    _QWORD v19[2];
    int v20;
    int v21;
    char v22;
  } v19_;
  struct {
    _QWORD v23[2];
    int v24;
    int v25;
    char v26;
  } v23_;

  v3 = *a2;
  v4 = *a3;
  v6 = (unsigned __int16*)(*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 560LL))(*a2);
  v7 = (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4);
  v8 = *(unsigned __int8*)(a1 + 8);
  if (v8 == 2) {
    v13 = v7;
    v14 =
        (unsigned __int16*)(*(__int64 (**)(__int64))(*(_QWORD*)v3 + 560LL))(v3);
    v15 = GameData_212c878[0];
    v16 = GameData_212cd68[0];
    v17 = *(
        _QWORD*)(*(_QWORD*)(*GameData_212cd68[0] + 64) +
                 8LL *
                     *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878
                                                                   [0] +
                                                               64) +
                                                    8LL * *v14) +
                                         84LL));
    if (v17 != 0) {
      v10 = *(unsigned __int16*)(v17 + 32);
    }
    else {
      v10 = 0;
    }
    v12 = *(
        _QWORD*)(*(_QWORD*)(*v16 + 64) +
                 8LL *
                     *(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*v15 + 64) +
                                                    8LL *
                                                        *(unsigned __int16*)(*(
                                                            __int64 (**)(
                                                                __int64))(
                                                            *(_QWORD*)v4 +
                                                            560LL))(v4)) +
                                         84LL));
    if (v12 != 0) {
      LODWORD(v12) = *(unsigned __int16*)(v12 + 32);
    }
    v11 = 1;
    v7 = v13;
  }
  else if (v8 == 1) {
    v9 = *(_QWORD*)(*GameData_212c878[0] + 64);
    v10 = *(unsigned __int8*)(*(_QWORD*)(v9 + 8LL * *v6) + 96LL);
    v12 = *(_QWORD*)(v9 + 8LL * *v7);
    v11 = 1;
    LODWORD(v12) = *(unsigned __int8*)(v12 + 96);
  }
  else {
    LODWORD(v12) = 0;
    v11 = 0;
    v10 = 0;
  }
  v19_.v19[0] = v7;
  v19_.v19[1] = 0;
  v23_.v23[0] = v6;
  v23_.v23[1] = 0;
  v23_.v24 = 0;
  v23_.v25 = v10;
  v23_.v26 = v11;
  v19_.v20 = 0;
  v19_.v21 = v12;
  v19_.v22 = v11;
  return GameRoutine_19ef8e0(v23_.v23, v19_.v19);
}

#pragma GCC visibility pop
