#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_13fa520(PSEUDO_X8, _QWORD, _QWORD);
__attribute__((swiftcall)) void GameRoutine_1560070(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 GameRoutine_13fa3e0(_QWORD, _QWORD);
__int64 GameRoutine_15753b0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1597c00(_QWORD, _QWORD);
__int64 GameRoutine_15e77c0(_QWORD);
__int64 GameRoutine_1840740(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18b7f20(_QWORD, _QWORD);
__int64 GameRoutine_18b83a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18b8e80(_QWORD, _QWORD);
__int64 GameRoutine_18b90a0(_QWORD);
__int64 GameRoutine_9244a0(_QWORD, _QWORD);
__int64 GameRoutine_94eea0(_QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 (*GameData_1faf778[])();
extern __int64 GameData_20378a8;
extern __int64 GameData_212c6c0[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64 ui_Manager_instance_;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212dcd0;
extern __int64* GameData_212e008[9];
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a1d0(_QWORD);
__int64 ProcDiningRecipeMenu_Unknown84(__int64 a1);
__int64 ProcDiningRecipeMenu_Unknown88(__int64 a1);
__int64 GameRoutine_15758f0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 LayoutAccessor_1562cf0(_QWORD, _QWORD);
__int64 ProcDiningRecipeMenu_13fa3e0(__int64 a1, unsigned int a2);
__int64 BasicMenuCursor_16ddaa0(_QWORD, _QWORD);
__int64 GameRoutine_928e80(_QWORD);
__int64 GameRoutine_929c90(_QWORD, _QWORD);
extern __int64 (*game_facility_DiningArgs_vtable)();
extern __int64 GameData_21f3ff8;
extern __int64 GameData_2243960;
__int64
game_facility_anonymous_ProcDiningRecipeMenu_ACall_closure_Invoke_13fad90_alt1(
    __int64 a1,
    __int64* a2) __asm__("game_facility_anonymous_ProcDiningRecipeMenu_ACall_"
                         "closure_Invoke_13fad90");
__int64
game_facility_anonymous_ProcDiningRecipeMenu_ACall_closure_Invoke_13faf40(
    __int64 a1);
_QWORD* GameRoutine_13fa790(__int64, __int64, __int64, __int64, __int64);
_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_67ed20(_QWORD*);
__int64 GameRoutine_9244a0_alt1(__int64, __int64) __asm__("GameRoutine_9244a0");
__int64 GameRoutine_94a700(__int16*);
__n128 game_16ad210(__int64, __int64, char, __int64);
extern __int64 (*GameData_2037950[])();
extern __int64 (*GameData_2037ad0[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64* GameData_212cc30[65];
extern __int64* GameData_212d2b8;
void* game_97b2f0(__int64);
__int64 game_facility_anonymous_ProcDiningRecipeMenu_ACall(__int64 a1);
__attribute__((swiftcall)) void
GameRoutine_13fa520_alt1(PSEUDO_X8, __int64*,
                         _QWORD*) __asm__("GameRoutine_13fa520");
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__int64 GameHr_1840740(__int64, unsigned int, __int64, unsigned __int8, char);
__int64 GameRoutine_929c90_alt1(__int64, _QWORD*) __asm__("GameRoutine_929c90");
__int64 Manager_136a920(__int64, __int64, int, unsigned int, _BYTE*);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64
ui_LayoutAccessor_FindPane_alt1(__int64*,
                                __int64) __asm__("ui_LayoutAccessor_FindPane");
char* game_util_Format_alt1(const char*, ...) __asm__("game_util_Format");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void GameRoutine_18b83a0_alt1(__int64, __int64,
                              char) __asm__("GameRoutine_18b83a0");
void GameRoutine_928e80_alt1(__int64) __asm__("GameRoutine_928e80");
void InfoTitle_18b7f20(__int64, _BYTE*);
void InfoTitle_18b8e80(__int64, _BYTE*);
void InfoTitle_18b90a0(__int64);
void Util_15753b0(__int64, __int64, int, unsigned __int8);
void __attribute__((noreturn)) String_60a1d0();
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void game_facility_anonymous_ProcDiningRecipeMenu_ACall_closure_Invoke_13fad90(
    __int64 a1, __int64* a2);

__int64 ProcDiningRecipeMenu_Unknown84(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int16* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  __int64 v10;
  char v11;
  _QWORD v13[4];
  _QWORD* v14;
  __int64 v15;

  GameRoutine_13fa3e0(a1, 0);
  GameRoutine_13fa3e0(a1, 1);
  GameRoutine_13fa3e0(a1, 2);
  v2 = v13;
  v13[0] = GameData_1faf778;
  v14 = v13;
  v3 = *(_QWORD*)GameData_212c6c0[0];
  if (*(_QWORD*)GameData_212c6c0[0] == 0) {
    v11 = 0;
    v10 = 32;
    goto LABEL_18;
  }
  if (game_gmap_GmapClock_instance_ != 0) {
    v4 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
  }
  else {
    v4 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
  }
  v5 = *(_QWORD*)(v3 + 16);
  v6 = *(_QWORD*)(v3 + 24);
  if (v5 != v6) {
    v7 = *v4;
    v8 = v4[1];
    v9 = v4[2];
    v10 = 32;
    while (v7 != *(unsigned __int16*)(v5 + 4) ||
           v8 != *(unsigned __int8*)(v5 + 6) ||
           v9 != *(unsigned __int8*)(v5 + 7)) {
      v5 += 368;
      if (v5 == v6) {
        v11 = 0;
        v2 = v13;
        goto LABEL_18;
      }
    }
  }
  v2 = v13;
  v10 = 32;
  v11 = 0;
  if (v5 == v6 || v5 == 0) {
    goto LABEL_18;
  }
  v15 = v5;
  v11 = GameRoutine_94eea0(v13, &v15);
  v2 = v14;
  if (v14 == v13) {
    v10 = 32;
    goto LABEL_18;
  }
  if (v14 != nullptr) {
    v10 = 40;
  LABEL_18:
    (*(void (**)(_QWORD*))(*v2 + v10))(v2);
  }
  GameRoutine_1597c00(a1 + 848, v11 & 1);
  return GameRoutine_15e77c0(a1);
}

__int64 ProcDiningRecipeMenu_Unknown88(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  char* v8;
  __int64 v9;
  __int64 v10;
  char* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  char* v14;
  _BYTE* v15;
  __int64 v16;
  __int64* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int8 v23;
  unsigned __int8 v24;
  unsigned __int8 v25;
  __int64 v26;
  __int64 v27;
  unsigned __int8 v28;
  __int64 v29;
  __int64 v30;
  unsigned __int8 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int8 v34;
  struct {
    __int64 v35;
    __int64 v36;
  } v35_;
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
    _BYTE* v43;
  } v41_;
  _QWORD v44[2];

  result = *(_QWORD*)(a1 + 336);
  if (result == 0) {
    return result;
  }
  result = __dynamic_cast(result, GameData_212e008[0], &GameData_20378a8, 0);
  if (result == 0) {
    return result;
  }
  v3 = *(_QWORD*)(result + 88);
  v4 = result;
  v44[0] = "L_Info";
  v44[1] = 6;
  GameRoutine_13fa520_alt1((void*)(&v41_.v41), (__int64*)(a1 + 848), v44);
  if (v41_.v42 != 0) {
    v5 = std___1___shared_weak_count_lock_alt1(v41_.v42);
    v6 = v41_.v41;
    if (v41_.v42 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v41_.v42);
    }
    if (v5 != 0 && v6 != 0) {
      InfoTitle_18b7f20(v6, *(_BYTE**)(v3 + 32));
      GameRoutine_18b83a0_alt1(v6, *(_QWORD*)(v3 + 40), 0);
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4) & 0x70000) !=
          0) {
        v7 = (*(__int64 (**)(__int64))(*(_QWORD*)v4 + 560LL))(v4);
        if ((v7 & 0x40000) != 0) {
          v8 = "MID_Menu_Cause_UsedChapter";
        }
        else if ((v7 & 0x20000) != 0) {
          v8 = "MID_Menu_Cause_UsedWeek";
        }
        else if ((v7 & 0x10000) != 0) {
          v8 = "MID_Menu_Cause_UsedDay";
        }
        else {
          v8 = &GameData_1a9f09e;
        }
        InfoTitle_18b8e80(v6, v8);
      }
      else {
        InfoTitle_18b90a0(v6);
      }
    }
    else if (v5 == 0) {
      goto LABEL_22;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak_alt1(v5);
    }
  }
LABEL_22:
  v9 = ui_LayoutAccessor_FindPane_alt1((__int64*)(a1 + 848), (__int64)"Img");
  if (v9 != 0) {
    v10 = __dynamic_cast(v9, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v10 = 0;
  }
  v11 = game_util_Format_alt1("Recipe_%s", *(const char**)(v3 + 56));
  v12 = strlen_alt1(v11);
  if (v12 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v13 = v12;
  if (v12 >= 0x17) {
    if ((v12 | 7) == 0x17) {
      v22 = 26;
    }
    else {
      v22 = (v12 | 7) + 1;
    }
    v14 = (char*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v22, 16, 0);
    v41_.v42 = v13;
    v41_.v43 = v14;
    v41_.v41 = v22 | 1;
  LABEL_46:
    memmove_alt1((__int64)v14, (__int64)v11, v13);
    v14[v13] = 0;
    if (v10 != 0) {
      goto LABEL_29;
    }
    goto LABEL_33;
  }
  LOBYTE(v41_.v41) = 2 * v12;
  v14 = (char*)&v41_.v41 + 1;
  if (v12 != 0) {
    goto LABEL_46;
  }
  BYTE1(v41_.v41) = 0;
  if (v10 != 0) {
  LABEL_29:
    if ((v41_.v41 & 1) != 0) {
      v15 = v41_.v43;
    }
    else {
      v15 = (char*)&v41_.v41 + 1;
    }
    Manager_136a920(ui_Manager_instance_ + 1264, v10, 0, 0xCu, v15);
  }
LABEL_33:
  if ((v41_.v41 & 1) != 0 && v41_.v43 != nullptr) {
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v16, (__int64)v41_.v43);
  }
  v17 = *(__int64**)(*GameData_212dcd0 + 48);
  v18 = *(_QWORD*)(*GameData_212dcd0 + 56) - (_QWORD)v17;
  if (v18 != 0) {
    v19 = *v17;
    if (v18 < 9) {
      v20 = 0;
      v21 = 0;
    }
    else {
      v20 = v17[1];
      if (v18 == 16) {
        v21 = 0;
      }
      else {
        v21 = v17[2];
      }
    }
  }
  else {
    v20 = 0;
    v19 = 0;
    v21 = 0;
  }
  LayoutAccessor_1560070((void*)(&v39_.v39), (__int64*)(a1 + 848),
                         "L_UnitInfo00/L_BlnFavor");
  v23 = GameRoutine_9244a0_alt1(v3, v19);
  Util_15753b0((__int64)&v39_.v39, v19, 0, v23);
  if (v39_.v40 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v39_.v40);
  }
  LayoutAccessor_1560070((void*)(&v37_.v37), (__int64*)(a1 + 848),
                         "L_UnitInfo01/L_BlnFavor");
  v24 = GameRoutine_9244a0_alt1(v3, v20);
  Util_15753b0((__int64)&v37_.v37, v20, 0, v24);
  if (v37_.v38 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v37_.v38);
  }
  LayoutAccessor_1560070((void*)(&v35_.v35), (__int64*)(a1 + 848),
                         "L_UnitInfo02/L_BlnFavor");
  v25 = GameRoutine_9244a0_alt1(v3, v21);
  Util_15753b0((__int64)&v35_.v35, v21, 0, v25);
  if (v35_.v36 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v35_.v36);
  }
  v26 = ui_LayoutAccessor_FindPane_alt1(
      (__int64*)(a1 + 848), (__int64)"L_UnitInfo00/L_UnitInfo/Face");
  if (v26 != 0) {
    v27 = __dynamic_cast(v26, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v27 = 0;
  }
  v28 = GameRoutine_9244a0_alt1(v3, v19);
  GameHr_1840740(v27, 0, v19, v28, 1);
  v29 = ui_LayoutAccessor_FindPane_alt1(
      (__int64*)(a1 + 848), (__int64)"L_UnitInfo01/L_UnitInfo/Face");
  if (v29 != 0) {
    v30 = __dynamic_cast(v29, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v30 = 0;
  }
  v31 = GameRoutine_9244a0_alt1(v3, v20);
  GameHr_1840740(v30, 0, v20, v31, 1);
  v32 = ui_LayoutAccessor_FindPane_alt1(
      (__int64*)(a1 + 848), (__int64)"L_UnitInfo02/L_UnitInfo/Face");
  if (v32 != 0) {
    v33 = __dynamic_cast(v32, GameData_212d670[0], GameData_212d678[0], 0);
  }
  else {
    v33 = 0;
  }
  v34 = GameRoutine_9244a0_alt1(v3, v21);
  return GameHr_1840740(v33, 0, v21, v34, 1);
}

__int64 game_facility_anonymous_ProcDiningRecipeMenu_ACall(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  int v8;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int16* v20;
  double v21;
  unsigned int v22;
  double v23;
  double v24;
  double v25;
  int v26;
  __int64 v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  char v31;
  char v32;
  __int64 v33;
  struct {
    _QWORD v34[4];
    _QWORD* v35;
  } v34_;
  struct {
    __int64 (*v36[4])();
    __int64 (**v37)();
  } v36_;
  struct {
    __int64 (*v38[4])();
    __int64 (**v39)();
  } v38_;
  const char* v40;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 == 0) {
    return 1;
  }
  v3 = a1;
  v4 = __dynamic_cast(v2, GameData_212e008[0], &GameData_20378a8, 0);
  if (v4 == 0) {
    return 1;
  }
  v5 = v4;
  if (((*(__int64 (**)(__int64))(*(_QWORD*)v4 + 464LL))(v4) & 1) == 0) {
    return 1;
  }
  v6 = GameData_212dcd0;
  v7 = *(_QWORD*)(v5 + 88);
  if (v7 != 0) {
    v8 = *(unsigned __int16*)(v7 + 16);
  }
  else {
    v8 = -1;
  }
  *(_DWORD*)(*GameData_212dcd0 + 8) = v8;
  v40 = "MID_DiningMenu_Confirm";
  v38_.v38[0] = (__int64 (*)())GameData_2037950;
  v38_.v38[1] = (__int64 (*)())v3;
  v38_.v39 = v38_.v38;
  v36_.v37 = v36_.v36;
  v34_.v35 = v34_.v34;
  v36_.v36[0] = (__int64 (*)())GameData_2037ad0;
  v34_.v34[0] = GameData_2037ad0;
  v10 = GameRoutine_13fa790(v3, (__int64)&v40, (__int64)v38_.v38,
                            (__int64)v36_.v36, (__int64)v34_.v34);
  if (v34_.v35 == v34_.v34) {
    v11 = 32;
  }
  else {
    if (v34_.v35 == nullptr) {
      goto LABEL_14;
    }
    v11 = 40;
  }
  (*(void (**)(__int64))(*v34_.v35 + v11))((__int64)v34_.v35);
LABEL_14:
  if (v36_.v37 == v36_.v36) {
    v12 = 32;
  }
  else {
    if (v36_.v37 == nullptr) {
      goto LABEL_19;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))((char*)*v36_.v37 + v12))((__int64)v36_.v37);
LABEL_19:
  if (v38_.v39 == v38_.v38) {
    v13 = 32;
  }
  else {
    if (v38_.v39 == nullptr) {
      goto LABEL_24;
    }
    v13 = 40;
  }
  (*(void (**)(__int64))((char*)*v38_.v39 + v13))((__int64)v38_.v39);
LABEL_24:
  v36_.v37 = v36_.v36;
  v38_.v39 = v38_.v38;
  v36_.v36[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v36_.v36[1] = game_sound_PlayDecideLightSe_ptr[0];
  v38_.v38[0] = (__int64 (*)())(GameData_212d2b8 + 2);
  v38_.v38[1] = game_sound_PlayDecideLightSe_ptr[0];
  GameRoutine_654050(v38_.v38, v10 + 144);
  if (v38_.v39 == v38_.v38) {
    v15 = 32;
  }
  else {
    if (v38_.v39 == nullptr) {
      goto LABEL_29;
    }
    v15 = 40;
  }
  (*(void (**)(__int64))((char*)*v38_.v39 + v15))((__int64)v38_.v39);
LABEL_29:
  if (v36_.v37 == v36_.v36) {
    v16 = 32;
  }
  else {
    if (v36_.v37 == nullptr) {
      goto LABEL_34;
    }
    v16 = 40;
  }
  (*(void (**)(__int64))((char*)*v36_.v37 + v16))((__int64)v36_.v37);
LABEL_34:
  v17 = *(unsigned int*)(*v6 + 8);
  if ((v17 & 0x80000000) == 0) {
    v18 = *(_QWORD*)(*(_QWORD*)(*GameData_212cc30[0] + 64) + 8 * v17);
    if (v18 != 0) {
      v19 = *(_QWORD*)(v18 + 32);
      if (v19 != 0) {
        GameRoutine_60a020((__int64)(v10 + 187), v19);
      }
      if (game_gmap_GmapClock_instance_ != 0) {
        v20 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
      }
      else {
        v20 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
      }
      LOWORD(v14) = *(_WORD*)(v18 + 52);
      v21 = (double)v14;
      v22 = GameRoutine_94a700(v20);
      v23 = 0x1.0000000000000p+0;
      v24 = (double)v22 / -0x1.9000000000000p+6 + 0x1.0000000000000p+0;
      if (v24 <= 0x1.0000000000000p+0) {
        v23 = (double)v22 / -0x1.9000000000000p+6 + 0x1.0000000000000p+0;
      }
      if (v24 >= 0x1.47ae147ae147bp-7) {
        v25 = v23;
      }
      else {
        v25 = 0x1.47ae147ae147bp-7;
      }
      v26 = (int)(v25 * v21);
      if (v26 <= 1) {
        v26 = 1;
      }
      *((_DWORD*)v10 + 392) = v26;
      v27 = *(_QWORD*)(*v6 + 48);
      v28 = *(_QWORD*)(*v6 + 56);
      if ((int)((unsigned __int64)(v28 - v27) >> 3) >= 1) {
        v29 = 0;
        do {
          if (v29 >= (v28 - v27) >> 3) {
            GameRoutine_9244a0_alt1(v18, 0);
          }
          else {
            v30 = *(_QWORD*)(v27 + 8 * v29);
            v31 = GameRoutine_9244a0_alt1(v18, v30);
            if (v30 != 0) {
              v32 = v31;
              if (*(_BYTE*)(v30 + 2136) != 0) {
                v33 = (__int64)game_97b2f0(v30 + 2104);
              }
              else {
                v33 = GameRoutine_67ed20(*(_QWORD**)(v30 + 392));
              }
              game_16ad210((__int64)v10, *(_QWORD*)(v30 + 392), v32, v33);
            }
          }
          ++v29;
          v27 = *(_QWORD*)(*v6 + 48);
          v28 = *(_QWORD*)(*v6 + 56);
        } while ((__int64)v29 < (int)((unsigned __int64)(v28 - v27) >> 3));
      }
    }
  }
  return 12;
}

__int64 ProcDiningRecipeMenu_13fa3e0(__int64 a1, unsigned int a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;

  v4 = *(_QWORD*)(*GameData_212dcd0 + 48);
  if (a2 >=
      (unsigned __int64)((*(_QWORD*)(*GameData_212dcd0 + 56) - v4) >> 3)) {
    v5 = 0;
  }
  else {
    v5 = *(_QWORD*)(v4 + 8LL * a2);
  }
  v6 = game_util_Format("L_UnitInfo%02d", a2);
  GameRoutine_1560070((void*)&v13, a1 + 848, v6);
  GameRoutine_15758f0(&v13, v5, 0xFFFFFFFFLL, 0, 6, 0, 1);
  if (v14 != 0) {
    std___1___shared_weak_count___release_weak(v14);
  }
  v7 = game_util_Format("L_UnitInfo%02d/L_UnitInfo", a2);
  GameRoutine_1560070((void*)&v11, a1 + 848, v7);
  result = v12;
  if (v12 != 0) {
    v9 = std___1___shared_weak_count_lock(v12);
    if (v9 != 0) {
      v10 = v9;
      if (v11 != 0) {
        LayoutAccessor_1562cf0(v11, "Simple01");
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        std___1___shared_weak_count___release_weak(v10);
      }
    }
    result = v12;
    if (v12 != 0) {
      return std___1___shared_weak_count___release_weak(v12);
    }
  }
  return result;
}

void game_facility_anonymous_ProcDiningRecipeMenu_ACall_closure_Invoke_13fad90(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  struct {
    __int64 (**v6)();
    __int64 v7;
    __int64 v8;
    __int64 v9;
  } v6_;

  if (GameData_2243960 != 0) {
    v2 = *a2;
    v3 = *(_QWORD*)(GameData_2243960 + 216);
    if (*a2 != 0 && v3 != 0 && GameData_21f3ff8 != 0) {
      *(_DWORD*)(GameData_21f3ff8 + 12) = *(unsigned __int16*)(v3 + 16);
      v6_.v8 = 0;
      v6_.v9 = 0;
      v6_.v6 = &game_facility_DiningArgs_vtable;
      v6_.v7 = 0;
      GameRoutine_928e80_alt1((__int64)&v6_.v6);
      GameRoutine_929c90_alt1(v2, &v6_.v6);
      v6_.v6 = &game_facility_DiningArgs_vtable;
      if (v6_.v7 != 0) {
        v6_.v8 = v6_.v7;
        v5 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v5 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v5, v6_.v7);
      }
    }
  }
}

__int64

game_facility_anonymous_ProcDiningRecipeMenu_ACall_closure_Invoke_13faf40(
    __int64 a1)
{
  __int64 v1;
  __int64 v2;

  v1 = *(_QWORD*)(a1 + 8);
  v2 = *GameData_212dcd0;
  *(_DWORD*)(v2 + 8) = -1;
  *(_DWORD*)(v2 + 44) = -1;
  *(_QWORD*)(v2 + 56) = *(_QWORD*)(v2 + 48);
  *(_QWORD*)(v2 + 80) = *(_QWORD*)(v2 + 72);
  *(_QWORD*)(v2 + 12) = -1;
  *(_QWORD*)(v2 + 20) = -1;
  *(_QWORD*)(v2 + 28) = -1;
  *(_QWORD*)(v2 + 36) = -1;
  return BasicMenuCursor_16ddaa0(v1, 5);
}

#pragma GCC visibility pop
