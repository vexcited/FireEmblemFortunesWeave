#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_145c3e0(void);
__int64 GameRoutine_149e3e0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_155fbe0(_QWORD, _QWORD);
__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_156c5d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16dd8b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16df7a0(_QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_18edba0(_QWORD);
__int64 GameRoutine_18eeb40(_QWORD);
__int64 GameRoutine_18f3260(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18f3a00(_QWORD);
__int64 GameRoutine_8f0c60(_QWORD, _QWORD);
__int64 GameRoutine_906440(_QWORD, _QWORD);
__int64 GameRoutine_906560(_QWORD, _QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_UnitPool_Find_6ead60(_QWORD, _QWORD);
__int64 game_menu_PageTab_Add(_QWORD, _QWORD);
__int64 game_menu_PageTab_SetupImage(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                                     _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindTextBox(_QWORD, _QWORD);
extern _DWORD* GameData_212dcd8;
extern _UNKNOWN* GameData_212ce70;
extern __int64 (*GameData_2082af0[])();
extern __int64 (*game_hub_anonymous_AreaMenuItem_vtable[])();
extern __int64 (*game_hub_anonymous_EmptyMenuItem_vtable[])();
extern __int64 (*game_hub_anonymous_FacilityMenuItem_vtable[])();
extern __int64 (*game_hub_anonymous_FastTravelMenuItem_vtable[])();
extern __int64 (*game_hub_anonymous_UnitMenuItem_vtable[])();
extern __int64 GameData_2082b60;
extern __int64 GameData_212c610;
extern __int64 GameData_2131520;
extern __int64 GameData_2131c18[55];
extern __int64 GameData_220d618;
extern __int64 GameData_225e7a8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64* GameData_212c970[153];
extern __int64* GameData_212dcc8[2];
extern __int64* GameData_212dcd0;
extern __int64* GameData_212e008[9];
extern __int64* GameData_212e348;
extern __int64* GameData_212fd90[5];
extern __int64* GameData_212fd98[4];
extern __int64* GameData_212fda0[3];
extern __int64* GameData_212fda8[2];
extern __int64* GameData_2132210[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
extern char* GameData_2083b20[6];
void __attribute__((noreturn)) GameRoutine_60a1d0(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcFastTravelMenu_Unknown2(__int64 a1);
__int64 ProcFastTravelMenu_Unknown84_alt1(__int64* a1) __asm__(
    "ProcFastTravelMenu_Unknown84");
__int64 ProcFastTravelMenu_Unknown88(__int64 a1);
__int64 ProcFastTravelMenu_Unknown92(__int64 a1);
__int64 ProcFastTravelMenu_Unknown128(_QWORD* a1);
__int64 ProcFastTravelMenu_Unknown141(__int64 result, __int64* a2);
__int64 GameRoutine_136a920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 ui_Manager_instance_;
extern char* GameData_2083b38[3];
__int64 game_hub_anonymous_ProcFastTravelMenu_OnInit_closure_Invoke(
    __int64 a1, __int64* a2, unsigned int* a3);
bool game_hub_anonymous_ProcFastTravelMenu_SortAndFilter_closure_Invoke_169e390(
    __int64 a1, _QWORD* a2);
__int64 GameRoutine_149a380(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19f02c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_975940(void);
extern char GameData_21f3fe0;
__int64
game_hub_anonymous_ProcFastTravelMenu_SortAndFilter_closure_Invoke_169e160(
    __int64 a1, __int64 a2, __int64 a3);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_145c3e0_alt1() __asm__("GameRoutine_145c3e0");
__int64 GameRoutine_18edba0_alt1(__int64) __asm__("GameRoutine_18edba0");
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64
game_menu_PageTab_SetupImage_alt1(int*, __int64, __int64, int, int,
                                  int) __asm__("game_menu_PageTab_SetupImage");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 ui_LayoutAccessor_FindTextBox_alt1(__int64*, __int64) __asm__(
    "ui_LayoutAccessor_FindTextBox");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_156c5d0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_156c5d0");
void GameRoutine_18eeb40_alt1(__int64) __asm__("GameRoutine_18eeb40");
void LayoutAccessor_1562060(__int64*, __int64, __int64);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcFastTravelMenu_Unknown84(__int64* a1);

__int64 ProcFastTravelMenu_Unknown2(__int64 a1)
{
  GameRoutine_18eeb40(GameData_225e7a8);
  return GameRoutine_16df7a0(a1);
}

void ProcFastTravelMenu_Unknown84(__int64* a1)
{
  __int64* v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  signed int v12;
  __int64 v13;
  char* v14;
  __int64 v15;
  char* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  const char* v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  char* v31;
  unsigned int v32;
  __int64 v33;
  char* v34;
  const char* v35;
  __int64 v36;
  struct {
    __int64 v37;
    __int64 v38;
  } v37_;
  struct {
    __int64 v39;
    __int64 v40;
  } v39_;
  struct {
    __int64 v41;
    unsigned __int64 v42;
    char* v43;
    unsigned __int64 v44;
    __int64* v45;
    __int64 v46;
    __int64 v47;
    __int64 v48;
    __int64 v49;
    __int64 v50;
    __int64 v51;
    __int64 v52;
    __int64 v53;
    __int64 v54;
    __int64 v55;
    __int64 v56;
    __int64 v57;
    __int64 v58;
  } v41_;

  v2 = GameData_212dcd0;
  v3 = *GameData_212dcd0;
  v4 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (*GameData_212dcd0 != 0) {
    ++*GameData_212dcd8;
  }
  else {
    v5 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
    v6 = v5;
    if (*v2 == 0) {
      *v2 = (__int64)v5;
      *GameData_212dcd8 = 1;
    }
    v7 = GameData_212dcc8[0];
    v5[6] = 0;
    v5[7] = 0;
    v5[8] = 0;
    v5[9] = 0;
    v5[10] = 0;
    v5[11] = 0;
    v5[2] = -1;
    v5[3] = -1;
    v5[4] = -1;
    v5[5] = -1;
    *v5 = (__int64)(v7 + 2);
    v5[1] = -1;
    GameRoutine_145c3e0_alt1();
    v8 = *v6;
    *v2 = (__int64)v6;
    (*(void (**)(__int64*))(v8 + 16))(v6);
    v3 = *v2;
  }
  *(_DWORD*)(v3 + 8) = -1;
  *(_DWORD*)(v3 + 44) = -1;
  *(_QWORD*)(v3 + 56) = *(_QWORD*)(v3 + 48);
  *(_QWORD*)(v3 + 80) = *(_QWORD*)(v3 + 72);
  *(_QWORD*)(v3 + 12) = -1;
  *(_QWORD*)(v3 + 20) = -1;
  *(_QWORD*)(v3 + 28) = -1;
  *(_QWORD*)(v3 + 36) = -1;
  LayoutAccessor_1560070((void*)(&v39_.v39), a1 + 119, "L_PageTab");
  v41_.v41 = (__int64)GameData_2082af0;
  v9 = *a1;
  v41_.v45 = &v41_.v41;
  v10 = (*(__int64 (**)(__int64*))(v9 + 192))(a1);
  game_menu_PageTab_SetupImage_alt1((int*)a1 + 164, (__int64)&v39_.v39,
                                    (__int64)&v41_.v41, v10, 14, 15);
  if (v41_.v45 == &v41_.v41) {
    v11 = 32;
  }
  else {
    if (v41_.v45 == nullptr) {
      goto LABEL_11;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v41_.v45 + v11))((__int64)v41_.v45);
LABEL_11:
  if (v39_.v40 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v39_.v40);
  }
  v12 = *((_DWORD*)a1 + 165);
  v13 = a1[84];
  if (v12 < (unsigned __int64)((a1[85] - v13) >> 2)) {
    v12 = *(_DWORD*)(v13 + 4LL * v12);
  }
  if ((unsigned int)v12 > 2) {
    v14 = &GameData_1a9f09e;
  }
  else {
    v14 = GameData_2083b20[v12];
  }
  v41_.v46 = -1;
  v41_.v47 = -1;
  v41_.v48 = -1;
  v41_.v49 = -1;
  v15 = *msg_MessageManager_instance__ptr[0];
  v41_.v50 = -1;
  v41_.v51 = -1;
  v41_.v52 = -1;
  v41_.v53 = -1;
  v41_.v54 = -1;
  v41_.v55 = -1;
  v41_.v56 = -1;
  v41_.v57 = -1;
  v41_.v41 = (__int64)(GameData_212e348 + 2);
  v41_.v42 = 0xFFFF0001FFFF0000LL;
  v41_.v43 = (char*)0xFFFF0004FFFF0002LL;
  v41_.v44 = 0xFFFF0006FFFF0005LL;
  v41_.v58 = 8;
  v41_.v45 = (__int64*)0xFFFF0008FFFF0007LL;
  v16 = GameRoutine_a4dbe0_alt1(v15, v14, 0);
  if (v16 != nullptr) {
    v17 = (__int64)v16;
    v18 = ui_LayoutAccessor_FindTextBox_alt1(a1 + 119, (__int64)"T_Title");
    if (v18 != 0) {
      GameRoutine_156c5d0_alt1(v18, v17, 0);
    }
  }
  v19 = fw_memory_HeapManager_Allocate_alt1(*v4, 816, 16, 0);
  LayoutAccessor_1560070((void*)(&v37_.v37), a1 + 106, "L_Map");
  *(_QWORD*)v19 = GameData_2132210[0] + 2;
  *(_QWORD*)(v19 + 8) = 0x3F80000000000001LL;
  v20 = v37_.v38;
  *(_QWORD*)(v19 + 16) = v37_.v37;
  *(_QWORD*)(v19 + 24) = v20;
  if (v20 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                              memory_order_relaxed);
  }
  *(_DWORD*)(v19 + 32) = 0;
  *(_QWORD*)(v19 + 152) = 0;
  *(_QWORD*)(v19 + 160) = 0;
  *(_QWORD*)(v19 + 168) = 0;
  *(_QWORD*)(v19 + 176) = 0;
  *(_QWORD*)(v19 + 40) = 0;
  *(_QWORD*)(v19 + 48) = 0;
  *(_QWORD*)(v19 + 56) = 0;
  *(_QWORD*)(v19 + 64) = 0;
  *(_QWORD*)(v19 + 72) = 0;
  *(_QWORD*)(v19 + 80) = 0;
  *(_QWORD*)(v19 + 88) = 0;
  *(_QWORD*)(v19 + 96) = 0;
  *(_QWORD*)(v19 + 104) = 0;
  *(_QWORD*)(v19 + 112) = 0;
  *(_QWORD*)(v19 + 120) = 0;
  *(_QWORD*)(v19 + 125) = 0;
  v21 = GameData_212fd90[0] + 2;
  *(_QWORD*)(v19 + 192) = 0;
  *(_QWORD*)(v19 + 200) = 0;
  *(_QWORD*)(v19 + 224) = 0;
  *(_QWORD*)(v19 + 232) = 0;
  *(_QWORD*)(v19 + 240) = 0;
  *(_QWORD*)(v19 + 248) = 0;
  *(_QWORD*)(v19 + 256) = 0;
  *(_QWORD*)(v19 + 136) = v21;
  *(_QWORD*)(v19 + 144) = 0;
  *(_DWORD*)(v19 + 184) = 128;
  v22 = GameData_212fd98[0];
  *(_QWORD*)(v19 + 288) = 0;
  *(_QWORD*)(v19 + 296) = 0;
  *(_QWORD*)(v19 + 304) = 0;
  *(_QWORD*)(v19 + 312) = 0;
  *(_QWORD*)(v19 + 208) = 0;
  *(_QWORD*)(v19 + 216) = v22 + 2;
  *(_DWORD*)(v19 + 264) = 10;
  v23 = GameData_212fda0[0];
  *(_QWORD*)(v19 + 320) = 0;
  *(_QWORD*)(v19 + 328) = 0;
  *(_QWORD*)(v19 + 384) = 0;
  *(_QWORD*)(v19 + 392) = 0;
  *(_QWORD*)(v19 + 368) = 0;
  *(_QWORD*)(v19 + 376) = 0;
  *(_QWORD*)(v19 + 272) = v23 + 2;
  *(_QWORD*)(v19 + 280) = 0;
  *(_QWORD*)(v19 + 336) = 0;
  *(_QWORD*)(v19 + 344) = 0x800000010LL;
  v24 = GameData_212fda8[0];
  *(_QWORD*)(v19 + 400) = 0;
  *(_QWORD*)(v19 + 408) = 0;
  *(_WORD*)(v19 + 600) = 0;
  *(_WORD*)(v19 + 648) = 0;
  *(_QWORD*)(v19 + 672) = 0;
  *(_QWORD*)(v19 + 800) = 0;
  *(_QWORD*)(v19 + 792) = 0;
  *(_QWORD*)(v19 + 784) = 0;
  *(_QWORD*)(v19 + 560) = 0;
  *(_QWORD*)(v19 + 552) = 0;
  *(_QWORD*)(v19 + 544) = 0;
  *(_QWORD*)(v19 + 536) = 0;
  *(_QWORD*)(v19 + 528) = 0;
  *(_QWORD*)(v19 + 520) = 0;
  *(_QWORD*)(v19 + 504) = 0;
  *(_QWORD*)(v19 + 512) = 0;
  *(_QWORD*)(v19 + 488) = 0;
  *(_QWORD*)(v19 + 496) = 0;
  *(_QWORD*)(v19 + 472) = 0;
  *(_QWORD*)(v19 + 480) = 0;
  *(_QWORD*)(v19 + 456) = 0;
  *(_QWORD*)(v19 + 464) = 0;
  *(_QWORD*)(v19 + 440) = 0;
  *(_QWORD*)(v19 + 448) = 0;
  *(_QWORD*)(v19 + 432) = 0;
  *(_BYTE*)(v19 + 592) = 0;
  *(_QWORD*)(v19 + 584) = 0;
  *(_QWORD*)(v19 + 576) = 0;
  *(_QWORD*)(v19 + 608) = 0;
  *(_QWORD*)(v19 + 616) = 0;
  *(_WORD*)(v19 + 624) = 0;
  *(_QWORD*)(v19 + 688) = 0;
  *(_QWORD*)(v19 + 696) = 0;
  *(_QWORD*)(v19 + 704) = 0;
  *(_DWORD*)(v19 + 712) = 0;
  *(_QWORD*)(v19 + 720) = 0;
  *(_QWORD*)(v19 + 728) = 0;
  *(_QWORD*)(v19 + 736) = 0;
  *(_QWORD*)(v19 + 744) = 0;
  *(_QWORD*)(v19 + 752) = 0;
  *(_QWORD*)(v19 + 760) = 0;
  *(_QWORD*)(v19 + 768) = 0;
  *(_QWORD*)(v19 + 352) = v24 + 2;
  *(_QWORD*)(v19 + 360) = 0;
  *(_QWORD*)(v19 + 416) = 0;
  *(_QWORD*)(v19 + 424) = 0x2041800000LL;
  *(_DWORD*)(v19 + 775) = 0;
  GameRoutine_18edba0_alt1(v19);
  v25 = GameData_225e7a8;
  GameData_225e7a8 = v19;
  if (v25 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v25 + 8LL))(v25);
  }
  if (v37_.v38 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v37_.v38);
  }
  GameRoutine_18eeb40_alt1(GameData_225e7a8);
  v27 = *(_QWORD*)(GameData_225e7a8 + 672);
  if (v27 == 0 || (v28 = *(const char**)(v27 + 80)) == nullptr || *v28 == 0) {
    v32 = 0;
    LOWORD(v41_.v41) = 0;
    goto LABEL_41;
  }
  v29 = strlen_alt1(v28);
  if (v29 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v30 = v29;
  if (v29 >= 0x17) {
    if ((v29 | 7) == 0x17) {
      v33 = 26;
    }
    else {
      v33 = (v29 | 7) + 1;
    }
    v31 = (char*)fw_memory_HeapManager_Allocate_alt1(*v4, v33, 16, 0);
    v41_.v42 = v30;
    v41_.v43 = v31;
    v41_.v41 = v33 | 1;
  }
  else {
    LOBYTE(v41_.v41) = 2 * v29;
    v31 = (char*)&v41_.v41 + 1;
    if (v29 == 0) {
      goto LABEL_40;
    }
  }
  memmove_alt1((__int64)v31, (__int64)v28, v30);
LABEL_40:
  v31[v30] = 0;
  v32 = (unsigned __int8)v41_.v41;
  v26 = v41_.v42;
LABEL_41:
  if ((v32 & 1) == 0) {
    v26 = v32 >> 1;
  }
  if (v26 != 0) {
    if ((v32 & 1) != 0) {
      v34 = v41_.v43;
    }
    else {
      v34 = (char*)&v41_.v41 + 1;
    }
    LayoutAccessor_1562060(a1 + 106, (__int64)"T_Txt", (__int64)v34);
    v35 = "TxtOn";
  }
  else {
    v35 = "TxtOff";
  }
  GameHr_1562680((__int64)(a1 + 106), v35, 0x1.0000000000000p+0f);
  if ((v41_.v41 & 1) != 0 && v41_.v43 != nullptr) {
    v36 = 128;
    if (*(_QWORD*)(*v4 + 200) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*v4 + v36, (__int64)v41_.v43);
  }
}

__int64 ProcFastTravelMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  _BYTE* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  unsigned int v15;
  __int64 v16;
  unsigned __int64 v17;
  char* v18;
  const char* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  char* v24;

  GameRoutine_18f3a00(GameData_225e7a8);
  result = *(_QWORD*)(a1 + 336);
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_2082b60, 0);
    if (result != 0) {
      v3 = *(_QWORD*)(result + 88);
      v4 = *(_QWORD*)(result + 96);
      v5 = result;
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (v3 == 0) {
            goto LABEL_13;
          }
          goto LABEL_10;
        }
        (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
        std___1___shared_weak_count___release_weak(v4);
        if (v3 != 0) {
        LABEL_10:
          v6 = GameData_225e7a8;
          v8 = *(_QWORD*)(v5 + 88);
          v9 = *(_QWORD*)(v5 + 96);
          if (v9 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                      memory_order_relaxed);
            GameRoutine_18f3260(v6, v8, *(unsigned int*)(v5 + 84));
            if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
              std___1___shared_weak_count___release_weak(v9);
            }
          LABEL_16:
            v10 = *(_QWORD*)(GameData_225e7a8 + 672);
            if (v10 == 0 || (v11 = *(_BYTE**)(v10 + 80)) == nullptr ||
                *v11 == 0) {
              v15 = 0;
              LOWORD(v22) = 0;
            LABEL_30:
              v17 = v23;
              if ((v15 & 1) == 0) {
                v17 = v15 >> 1;
              }
              if (v17 != 0) {
                if ((v15 & 1) != 0) {
                  v18 = v24;
                }
                else {
                  v18 = (char*)&v22 + 1;
                }
                GameRoutine_1562060(a1 + 848, "T_Txt", v18);
                v19 = "TxtOn";
              }
              else {
                v19 = "TxtOff";
              }
              GameRoutine_1562680(a1 + 848, v19, 1.0);
              if ((v22 & 1) != 0 && v24 != nullptr) {
                v20 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v20 = 56;
                }
                nn_mem_StandardAllocator_Free(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v24);
              }
              goto LABEL_43;
            }
            v12 = strlen(v11);
            if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
              GameRoutine_60a1d0();
            }
            v13 = v12;
            if (v12 >= 0x17) {
              if ((v12 | 7) == 0x17) {
                v16 = 26;
              }
              else {
                v16 = (v12 | 7) + 1;
              }
              v14 = (char*)fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, v16, 16, 0);
              v23 = v13;
              v24 = v14;
              v22 = v16 | 1;
            }
            else {
              LOBYTE(v22) = 2 * v12;
              v14 = (char*)&v22 + 1;
              if (v12 == 0) {
                goto LABEL_29;
              }
            }
            memmove(v14, v11, v13);
          LABEL_29:
            v14[v13] = 0;
            v15 = (unsigned __int8)v22;
            goto LABEL_30;
          }
          v7 = *(unsigned int*)(v5 + 84);
        LABEL_15:
          GameRoutine_18f3260(v6, v8, v7);
          goto LABEL_16;
        }
      }
      else if (v3 != 0) {
        v6 = GameData_225e7a8;
        v7 = *(unsigned int*)(v5 + 84);
        v8 = v3;
        goto LABEL_15;
      }
    LABEL_13:
      *(_BYTE*)(GameData_225e7a8 + 592) = 0;
    LABEL_43:
      v21 = GameRoutine_155fbe0(a1 + 848, "L_InfoDetail");
      return (*(__int64 (**)(__int64, __int64))(*(_QWORD*)v5 + 560LL))(v5, v21);
    }
  }
  return result;
}

__int64 ProcFastTravelMenu_Unknown92(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 result;

  v2 = GameData_212dcd0;
  v3 = *GameData_212dcd0;
  if (*GameData_212dcd0 != 0 && (*GameData_212dcd8)-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)v3 + 24LL))(v3);
    if (*v2 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v2 + 8LL))(*v2);
    }
    *v2 = 0;
  }
  v5 = a1;
  v6 = a1;
  v7 = GameData_212c610;
  v8 = GameData_2131c18[0];
  do {
    result = __dynamic_cast(v6, v7, v8, 0);
    v6 = *(_QWORD*)(v6 + 32);
    if (result != 0) {
      v5 = result;
    }
  } while (v6 != 0);
  if (v5 == a1) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)(a1 + 1056) + 104LL))(a1 + 1056);
  }
  return result;
}

__int64 ProcFastTravelMenu_Unknown128(_QWORD* a1)
{
  _BOOL4 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  char v21;
  __int64* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  bool v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  _QWORD* v43;
  char v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  bool v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v57;
  _BOOL4 v58;
  __int64 v59;
  _QWORD v60[2];

  a1[85] = a1[84];
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = *(_WORD*)(game_gmap_GmapClock_instance_ + 22) != 0 &&
         *(_WORD*)(game_gmap_GmapClock_instance_ + 20) != 0 &&
         *(_WORD*)(game_gmap_GmapClock_instance_ + 24) != 0;
    v58 = v4;
  }
  else {
    v58 = false;
  }
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      112, 16, 0);
  *(_WORD*)(v5 + 16) = 0;
  *(_DWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 88) = 0;
  *(_QWORD*)(v5 + 96) = 0;
  *(_BYTE*)(v5 + 104) = 0;
  *(_WORD*)(v5 + 80) = 257;
  *(_BYTE*)(v5 + 82) = 1;
  *(_DWORD*)(v5 + 84) = 3;
  *(_QWORD*)v5 = game_hub_anonymous_EmptyMenuItem_vtable;
  v6 = a1[43];
  if (v6 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v6 + 8LL))(v6);
  }
  *(_QWORD*)(v5 + 8) = a1;
  a1[43] = v5;
  v57 = GameData_220d618;
  v7 = *(_QWORD*)(GameData_220d618 + 40);
  v8 = *(_QWORD**)v7;
  v9 = *(_QWORD**)(v7 + 8);
  if (*(_QWORD**)v7 != v9) {
    v10 = 0;
    while (1) {
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v8 + 16LL))(*v8) & 1) != 0) {
        v11 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 128, 16, 0);
        v13 = *v8;
        v12 = v8[1];
        v14 = (_QWORD*)v11;
        if (v12 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                    memory_order_relaxed);
        }
        v15 = *(_QWORD*)(v13 + 8);
        v16 = *(_QWORD*)(v13 + 16);
        if (v16 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                    memory_order_relaxed);
        }
        *(_WORD*)(v11 + 16) = 0;
        *(_DWORD*)(v11 + 40) = 0;
        *(_QWORD*)(v11 + 48) = 0;
        *(_QWORD*)(v11 + 56) = 0;
        *(_QWORD*)(v11 + 64) = 0;
        *(_QWORD*)(v11 + 72) = 0;
        *(_BYTE*)(v11 + 82) = 1;
        *(_DWORD*)(v11 + 84) = 0;
        *(_QWORD*)(v11 + 88) = v15;
        *(_QWORD*)(v11 + 96) = v16;
        *(_WORD*)(v11 + 80) = 257;
        *(_QWORD*)v11 = game_hub_anonymous_FastTravelMenuItem_vtable;
        *(_QWORD*)(v11 + 8) = 0;
        if (v16 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                                    memory_order_relaxed);
        }
        v17 = v58;
        *(_BYTE*)(v11 + 104) = 1;
        if (v58) {
          v17 = **(_DWORD**)(v11 + 88) == 1;
        }
        *(_BYTE*)(v11 + 104) = v17;
        if (v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
          std___1___shared_weak_count___release_weak(v16);
        }
        v14[14] = v13;
        v14[15] = v12;
        *v14 = game_hub_anonymous_AreaMenuItem_vtable;
        if (v12 != 0) {
          v10 = 1;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                    memory_order_relaxed);
          GameRoutine_16e0c00(a1, v14);
          if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            goto LABEL_19;
          }
          (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
          std___1___shared_weak_count___release_weak(v12);
        }
        else {
          GameRoutine_16e0c00(a1, v14);
        }
        v10 = 1;
      }
    LABEL_19:
      v8 += 2;
      if (v8 == v9) {
        if ((v10 & 1) != 0) {
          game_menu_PageTab_Add(a1 + 82, 0);
        }
        break;
      }
    }
  }
  v18 = *(_QWORD*)(v57 + 40);
  v19 = *(_QWORD**)(v18 + 24);
  v20 = *(_QWORD**)(v18 + 32);
  if (v19 != v20) {
    v21 = 0;
    v22 = GameData_212c970[0];
    do {
      if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v19 + 16LL))(*v19) & 1) != 0 &&
          ((*(_DWORD*)(*v19 + 32LL) - 21) & 0xFFFFFFFD) != 0) {
        v23 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 160, 16, 0);
        v25 = *v19;
        v24 = v19[1];
        v26 = v23;
        if (v24 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                    memory_order_relaxed);
        }
        v27 = *(_QWORD*)(v25 + 8);
        v28 = *(_QWORD*)(v25 + 16);
        if (v28 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                    memory_order_relaxed);
        }
        *(_WORD*)(v23 + 16) = 0;
        *(_DWORD*)(v23 + 40) = 0;
        *(_QWORD*)(v23 + 48) = 0;
        *(_QWORD*)(v23 + 56) = 0;
        *(_QWORD*)(v23 + 64) = 0;
        *(_QWORD*)(v23 + 72) = 0;
        *(_WORD*)(v23 + 80) = 257;
        *(_BYTE*)(v23 + 82) = 1;
        *(_DWORD*)(v23 + 84) = 1;
        *(_QWORD*)(v23 + 88) = v27;
        *(_QWORD*)(v23 + 96) = v28;
        *(_QWORD*)v23 = game_hub_anonymous_FastTravelMenuItem_vtable;
        *(_QWORD*)(v23 + 8) = 0;
        if (v28 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v28 + 8), 1u,
                                    memory_order_relaxed);
        }
        v29 = v58;
        *(_BYTE*)(v23 + 104) = 1;
        if (v58) {
          v29 = **(_DWORD**)(v23 + 88) == 1;
        }
        *(_BYTE*)(v23 + 104) = v29;
        if (v28 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v28 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v28 + 16LL))(v28);
          std___1___shared_weak_count___release_weak(v28);
        }
        *(_QWORD*)(v26 + 112) = v25;
        *(_QWORD*)(v26 + 120) = v24;
        *(_QWORD*)v26 = game_hub_anonymous_FacilityMenuItem_vtable;
        if (v24 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v24 + 8), 1u,
                                    memory_order_relaxed);
        }
        *(_QWORD*)(v26 + 128) = 0;
        *(_BYTE*)(v26 + 136) = 0;
        if (*(_DWORD*)(v25 + 32) == 0) {
          if ((*(_BYTE*)(v25 + 40) & 1) != 0) {
            v30 = *(_QWORD*)(v25 + 56);
          }
          else {
            v30 = v25 + 41;
          }
          v31 = game_HashString(v30);
          v32 = 0;
          if (v31 != 0) {
            v33 = *v22;
            v34 = *(_QWORD*)(*v22 + 96);
            if (v34 != 0 && *(_QWORD*)(v33 + 112) != 0) {
              v35 = v34 - 1;
              if ((v34 & (v34 - 1)) != 0) {
                v36 = v31;
                if (v31 >= v34) {
                  v36 = v31 % v34;
                }
              }
              else {
                v36 = v35 & v31;
              }
              v37 = *(_QWORD**)(*(_QWORD*)(v33 + 88) + 8 * v36);
              if (v37 == nullptr || (v38 = (_QWORD*)*v37) == nullptr) {
              LABEL_82:
                v32 = 0;
                goto LABEL_83;
              }
              if ((v34 & v35) == 0) {
                while (1) {
                  v40 = v38[1];
                  if (v40 == v31) {
                    if (v38[2] == v31) {
                      goto LABEL_87;
                    }
                  }
                  else if ((v40 & v35) != v36) {
                    goto LABEL_82;
                  }
                  v38 = (_QWORD*)*v38;
                  v32 = 0;
                  if (v38 == nullptr) {
                    goto LABEL_83;
                  }
                }
              }
              while (1) {
                v39 = v38[1];
                if (v39 == v31) {
                  if (v38[2] == v31) {
                  LABEL_87:
                    v32 = v38[3];
                    break;
                  }
                }
                else {
                  if (v39 >= v34) {
                    v39 %= v34;
                  }
                  if (v39 != v36) {
                    goto LABEL_82;
                  }
                }
                v38 = (_QWORD*)*v38;
                if (v38 == nullptr) {
                  goto LABEL_82;
                }
              }
            }
          }
        LABEL_83:
          *(_QWORD*)(v26 + 128) = v32;
        }
        GameRoutine_16e0c00(a1, v26);
        if (v24 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
          std___1___shared_weak_count___release_weak(v24);
        }
        v21 = 1;
      }
      v19 += 2;
    } while (v19 != v20);
    if ((v21 & 1) != 0) {
      game_menu_PageTab_Add(a1 + 82, 1);
    }
  }
  v41 = *(_QWORD*)(v57 + 40);
  v42 = *(_QWORD**)(v41 + 48);
  v43 = *(_QWORD**)(v41 + 56);
  if (v42 == v43) {
    return GameRoutine_16dd8b0(a1, (a1[85] - a1[84]) >> 2, 0);
  }
  v44 = 0;
  do {
    if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*v42 + 16LL))(*v42) & 1) == 0) {
      goto LABEL_93;
    }
    v45 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         176, 16, 0);
    v47 = (_QWORD*)*v42;
    v46 = v42[1];
    v48 = v45;
    if (v46 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 8), 1u,
                                memory_order_relaxed);
    }
    v49 = v47[1];
    v50 = v47[2];
    if (v50 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8), 1u,
                                memory_order_relaxed);
    }
    *(_WORD*)(v45 + 16) = 0;
    *(_DWORD*)(v45 + 40) = 0;
    *(_QWORD*)(v45 + 48) = 0;
    *(_QWORD*)(v45 + 56) = 0;
    *(_QWORD*)(v45 + 64) = 0;
    *(_QWORD*)(v45 + 72) = 0;
    *(_BYTE*)(v45 + 82) = 1;
    *(_QWORD*)(v45 + 88) = v49;
    *(_QWORD*)(v45 + 96) = v50;
    *(_WORD*)(v45 + 80) = 257;
    *(_QWORD*)v45 = game_hub_anonymous_FastTravelMenuItem_vtable;
    *(_QWORD*)(v45 + 8) = 0;
    *(_DWORD*)(v45 + 84) = 2;
    if (v50 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v50 + 8), 1u,
                                memory_order_relaxed);
    }
    v51 = v58;
    *(_BYTE*)(v45 + 104) = 1;
    if (v58) {
      v51 = **(_DWORD**)(v45 + 88) == 1;
    }
    *(_BYTE*)(v45 + 104) = v51;
    if (v50 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v50 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v50 + 16LL))(v50);
      std___1___shared_weak_count___release_weak(v50);
    }
    *(_QWORD*)(v48 + 112) = 0;
    v52 = (__int64*)(v48 + 112);
    *(_QWORD*)(v48 + 120) = 0;
    *(_QWORD*)(v48 + 128) = 0;
    *(_QWORD*)(v48 + 136) = v47;
    *(_QWORD*)(v48 + 144) = v46;
    *(_QWORD*)v48 = game_hub_anonymous_UnitMenuItem_vtable;
    if (v46 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v46 + 8), 1u,
                                memory_order_relaxed);
      v47 = *(_QWORD**)(v48 + 136);
    }
    *(_BYTE*)(v48 + 152) = 0;
    v59 = v47[4];
    v53 = v59;
    v60[0] = 0;
    v60[1] = v59;
    if ((unsigned __int8)GameRoutine_906440(game_GameModeData_instance_ + 136,
                                            v60) != 3) {
      *v52 = 0;
    LABEL_112:
      v60[0] = 0;
      v60[1] = v53;
      if ((GameRoutine_906560(game_GameModeData_instance_ + 136, v60) & 1) !=
          0) {
        LODWORD(v60[0]) = 0;
        *(_QWORD*)(v48 + 120) =
            GameRoutine_149e3e0(*(_QWORD*)GameData_2131520, v53, v60);
      }
      else {
        v55 = GameRoutine_8f0c60(*(_QWORD*)(game_GameModeData_instance_ + 176),
                                 v53);
        if (v55 != 0) {
          v60[0] = *(_QWORD*)(v55 + 392);
          LODWORD(v59) = 241;
          if (game_UnitPool_Find_6ead60(v60, &v59) == 0) {
            LODWORD(v60[0]) = 0;
            *(_QWORD*)(v48 + 128) =
                GameRoutine_149e3e0(*(_QWORD*)GameData_2131520, v53, v60);
          }
        }
      }
      goto LABEL_117;
    }
    v54 = game_UnitPool_Find_6ead60(&v59, GameData_212ce70);
    *v52 = v54;
    if (v54 == 0) {
      goto LABEL_112;
    }
  LABEL_117:
    GameRoutine_16e0c00(a1, v48);
    if (v46 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v46 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v46 + 16LL))(v46);
      std___1___shared_weak_count___release_weak(v46);
    }
    v44 = 1;
  LABEL_93:
    v42 += 2;
  } while (v42 != v43);
  if ((v44 & 1) != 0) {
    game_menu_PageTab_Add(a1 + 82, 2);
  }
  return GameRoutine_16dd8b0(a1, (a1[85] - a1[84]) >> 2, 0);
}

__int64 ProcFastTravelMenu_Unknown141(__int64 result, __int64* a2)
{
  int v2;
  int v3;
  int v4;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;

  if (game_GameModeData_instance_ == 0) {
    return result;
  }
  v2 = *(_DWORD*)(game_GameModeData_instance_ + 60);
  if (v2 == 2 || v2 == 0) {
    return result;
  }
  v3 = *(_DWORD*)(game_GameModeData_instance_ + 64);
  if (v2 == 3) {
    if (v3 < 2) {
      return result;
    }
  }
  else if (v2 == 1) {
    v4 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    if ((unsigned int)(v4 - 2) >= 3) {
      if (v4 == 1 && v3 <= 2) {
        return result;
      }
    }
    else if (v3 <= 3) {
      return result;
    }
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 192LL))(result);
  v7 = a2[1];
  v8 = a2[2];
  v9 = a2;
  if (v7 >= v8) {
    v11 = *a2;
    v12 = v7 - *a2;
    v13 = 1 - 0x3333333333333333LL * (v12 >> 3);
    if (v13 > 0x666666666666666LL) {
      GameRoutine_874520(result);
    }
    v14 = fw_memory_g_heap_manager_ptr;
    if (0x999999999999999ALL * ((__int64)(v8 - v11) >> 3) > v13) {
      v13 = 0x999999999999999ALL * ((__int64)(v8 - v11) >> 3);
    }
    if (0xCCCCCCCCCCCCCCCDLL * ((__int64)(v8 - v11) >> 3) >=
        0x333333333333333LL) {
      v15 = 0x666666666666666LL;
    }
    else {
      v15 = v13;
    }
    if (v15 != 0) {
      if (v15 > 0x666666666666666LL) {
        GameRoutine_60a210(result);
      }
      v16 = result;
      v17 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v15, 16, 0);
      LODWORD(result) = v16;
    }
    else {
      v17 = 0;
    }
    v18 = v17 + v12;
    *(_QWORD*)v18 = &GameData_1a9f09e;
    *(_QWORD*)(v18 + 8) = "MID_KeyHelp_GmapMap";
    *(_BYTE*)(v18 + 28) = 0;
    *(_QWORD*)(v18 + 32) = 0;
    *(_BYTE*)(v18 + 16) = 1;
    v19 = v17 + 40 * v15;
    v10 = v17 + v12 + 40;
    *(_DWORD*)(v18 + 20) = 7;
    *(_DWORD*)(v18 + 24) = result;
    result = memcpy(v17, v11, v12);
    *a2 = v17;
    a2[1] = v10;
    a2[2] = v19;
    if (v11 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v14 + 200LL) == 0) {
        v20 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v14 + v20, v11);
    }
    v9 = a2;
  }
  else {
    *(_BYTE*)(v7 + 28) = 0;
    *(_QWORD*)(v7 + 32) = 0;
    *(_QWORD*)v7 = &GameData_1a9f09e;
    *(_QWORD*)(v7 + 8) = "MID_KeyHelp_GmapMap";
    v10 = v7 + 40;
    *(_BYTE*)(v7 + 16) = 1;
    *(_DWORD*)(v7 + 20) = 7;
    *(_DWORD*)(v7 + 24) = result;
  }
  v9[1] = v10;
  return result;
}

__int64 game_hub_anonymous_ProcFastTravelMenu_OnInit_closure_Invoke(
    __int64 a1, __int64* a2, unsigned int* a3)
{
  __int64 v3;
  __int64 v4;
  char* v5;
  __int64 result;

  result = COERCE_AS(__typeof__(result),
                     PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v3 = *a2;
  if (v3 != 0) {
    v4 = *a3;
    if ((unsigned int)v4 > 2) {
      v5 = &GameData_1a9f09e;
    }
    else {
      v5 = GameData_2083b38[v4];
    }
    return Manager_136a920(ui_Manager_instance_ + 1264, v3, 0, 7u, v5);
  }
  return result;
}

__int64

game_hub_anonymous_ProcFastTravelMenu_SortAndFilter_closure_Invoke_169e160(
    __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  unsigned int v5;
  __int64 v6;
  char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int16 v11;
  unsigned int v12;
  __int64 v13;
  char* v14;
  __int64 v15;

  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a2 + 136LL) + 32LL);
  v4 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)a3 + 136LL) + 32LL);
  if (*(_BYTE*)(a1 + 8) == 1) {
    v5 = (unsigned __int8)GameData_21f3fe0;
    if (GameData_21f3fe0 == 12) {
      v6 = 0;
      v7 = &GameData_1a9f09e;
    }
    else {
      if (*(_QWORD*)(v3 + 288) == 0 || (v10 = GameRoutine_975940()) == 0 ||
          (v7 = *(char**)(v10 + 72)) == nullptr) {
        if (*(_QWORD*)(v3 + 32) != 0) {
          v7 = *(char**)(v3 + 32);
        }
        else {
          v7 = &GameData_1a9f09e;
        }
      }
      v6 = strlen(v7);
    }
    v11 = GameRoutine_149a380(v7, v6, v5);
    v12 = (unsigned __int8)GameData_21f3fe0;
    v9 = (unsigned int)v11;
    if (GameData_21f3fe0 == 12) {
      v13 = 0;
      v14 = &GameData_1a9f09e;
    }
    else {
      if (*(_QWORD*)(v4 + 288) == 0 || (v15 = GameRoutine_975940()) == 0 ||
          (v14 = *(char**)(v15 + 72)) == nullptr) {
        if (*(_QWORD*)(v4 + 32) != 0) {
          v14 = *(char**)(v4 + 32);
        }
        else {
          v14 = &GameData_1a9f09e;
        }
      }
      v13 = strlen(v14);
    }
    v8 = (unsigned int)(__int16)GameRoutine_149a380(v14, v13, v12);
  }
  else {
    v8 = 0;
    v9 = 0;
  }
  return GameRoutine_19f02c0(v3, v9, v4, v8, 0, 0);
}

bool game_hub_anonymous_ProcFastTravelMenu_SortAndFilter_closure_Invoke_169e390(
    __int64 a1, _QWORD* a2)
{
  __int64 v2;

  v2 = *a2;
  return ((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 48LL))(*a2) & 1) != 0 &&
         *(_DWORD*)(v2 + 84) == *(_DWORD*)(a1 + 8);
}

#pragma GCC visibility pop
