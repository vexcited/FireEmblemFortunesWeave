#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1562060(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1562680(_QWORD, _QWORD, float);
__int64 GameRoutine_15e8430(void);
__int64 GameRoutine_178a2c0(void);
__int64 GameRoutine_18422d0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1929960(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_a51e10(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_util_Format(const char*, ...);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 ui_LayoutAccessor_FindPane(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212e348;
extern __int64* msg_MessageManager_instance__ptr[2];
extern char GameData_1a9f09e;
extern char* GameData_1fafca8[4];
void __attribute__((noreturn)) GameRoutine_13eb280(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_874520(_QWORD);
__int64 ProcTheaterCastingUnitMenu_Unknown84(__int64 a1);
__int64 ProcTheaterCastingUnitMenu_Unknown139_alt1(
    __int64 a1, __int64* a2) __asm__("ProcTheaterCastingUnitMenu_Unknown139");
__int64 ProcTheaterCastingUnitMenu_Unknown160(__int64 a1);
__int64 BasicMenuCursor_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_192ae90(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_192b110(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_192b2c0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_192b500(_QWORD, _QWORD);
extern _UNKNOWN GameData_1c1e81c;
extern __int64 (*game_facility_anonymous_CastingUnitMenuItem_vtable[])();
extern __int64 GameData_22420c8;
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) GameRoutine_1929e10(void);
__int64
game_facility_anonymous_ProcTheaterCastingUnitMenu_PlusCall_closure_Invoke(
    __int64 a1, _QWORD* a2);
__int64 ProcTheaterCastingUnitMenu_1929e40(__int64 result, __int64* a2,
                                           __int64 a3, char a4);
__int64
game_facility_anonymous_ProcTheaterCastingUnitMenu_OnUnitDecide_closure_Invoke();
__int64
game_facility_anonymous_ProcTheaterCastingUnitMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2);
__int64 FacilityUnitMenu_15e8f40(_QWORD, _QWORD);
__int64 GameRoutine_1789cf0(_QWORD, _QWORD);
__int64 GameRoutine_f369a0(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 ProcTheaterCastingUnitMenu_1929e40_alt1(_QWORD, _QWORD) __asm__(
    "ProcTheaterCastingUnitMenu_1929e40");
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__n128 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212c730;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_21136f0[])();
extern __int64 (*GameData_2113a18[])();
extern __int64 (*game_ProcInst_Unknown04_1929bd0_ptr[])();
extern __int64 (*game_facility_anonymous_ProcTheaterCastingUnitMenu_vtable[])();
extern __int64* GameData_212cc40[63];
extern __int64* GameData_212dcd0;
extern __int64* GameData_212e008[9];
extern __int64* GameData_21312e0[10];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_2113860;
extern __int64 game_UnitListSet_instance_;
extern __int64 game_g_game_setting_ptr;
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD);
_QWORD*
game_facility_anonymous_ProcTheaterCastingUnitMenu_CreateBind(__int64 a1);
__int64 game_facility_anonymous_ProcTheaterCastingUnitMenu_PlusCall_alt1(
    __int64 a1, __int64* a2) __asm__("game_facility_anonymous_"
                                     "ProcTheaterCastingUnitMenu_PlusCall");
__int64
FacilityUnitMenu_15e8f40_alt1(__int64*,
                              _BYTE*) __asm__("FacilityUnitMenu_15e8f40");
__int64 GameRoutine_192ae90_alt1(_QWORD*, _QWORD*,
                                 _QWORD*) __asm__("GameRoutine_192ae90");
__int64 GameRoutine_192b110_alt1(_QWORD*, _QWORD*, _QWORD*,
                                 _QWORD*) __asm__("GameRoutine_192b110");
__int64 GameRoutine_192b2c0_alt1(_QWORD*, _QWORD*, _QWORD*, _QWORD*,
                                 _QWORD*) __asm__("GameRoutine_192b2c0");
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1(
    __int64 result, char, unsigned __int8,
    unsigned __int8) __asm__("_ZN4game4menu9BasicMenu13Unknown16dea40Ebbb");
__int64 game_IsVibrationEnabled_alt1(_BYTE*) __asm__("game_IsVibrationEnabled");
__int64 nn_os_LockMutex_alt1(__int64) __asm__("nn_os_LockMutex");
__int64 nn_os_UnlockMutex_alt1(__int64) __asm__("nn_os_UnlockMutex");
bool GameRoutine_192b500_alt1(_QWORD*, _QWORD*) __asm__("GameRoutine_192b500");
extern _DWORD GameData_1c1e81c_alt1[6] __asm__("GameData_1c1e81c");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 game_facility_anonymous_ProcTheaterCastingUnitMenu_PlusCall(__int64* a1,
                                                                    __int64 a2);
__int64 GameHr_1562680(__int64 result, const char*, float);
__int64 GameRoutine_1929960_alt1(__int64*) __asm__("GameRoutine_1929960");
__int64 LayoutAccessor_15635a0(__int64*, __int64, char);
__int64 game_menu_BasicMenu_Unknown16dd9a0(__int64 result);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64 ui_LayoutAccessor_empty_;
__int64 ProcTheaterCastingUnitMenu_Unknown156(__int64* a1, __int64 a2);
__int64 ProcTheaterCastingUnitMenu_Unknown157(__int64* a1, __int64 a2);
__int64 ProcTheaterCastingUnitMenu_192ae90(_QWORD* a1, _QWORD* a2, _QWORD* a3);
__int64 ProcTheaterCastingUnitMenu_192b110(_QWORD* a1, _QWORD* a2, _QWORD* a3,
                                           _QWORD* a4);
__int64 ProcTheaterCastingUnitMenu_192b2c0(_QWORD* a1, _QWORD* a2, _QWORD* a3,
                                           _QWORD* a4, _QWORD* a5);
bool ProcTheaterCastingUnitMenu_192b500(_QWORD* a1, _QWORD* a2);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
void GameRoutine_178a2c0_alt1(__int64, __int64*) __asm__("GameRoutine_178a2c0");
void __attribute__((noreturn))
GameRoutine_1929e10_alt1() __asm__("GameRoutine_1929e10");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_874520_alt1() __asm__("GameRoutine_874520");
void ProcTheaterCastingUnitMenu_Unknown139(__int64 a1, __int64* a2);
_QWORD*

game_facility_anonymous_ProcTheaterCastingUnitMenu_CreateBind(__int64 a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _QWORD* result;
  __int64*** v19;
  __int64** v20;
  __int64** v21;
  __int64* v22;
  __int64* v23;
  _BOOL4 v24;
  __int64 v25;
  _QWORD v26[4];
  _QWORD* v27;
  __int64 v28;
  __int64 v29;

  v2 = GameData_212dcd0;
  v3 = *(unsigned int*)(*GameData_212dcd0 + 8);
  if ((v3 & 0x80000000) != 0) {
    v4 = 0;
  }
  else {
    v4 = *(_QWORD*)(*(_QWORD*)(*GameData_212cc40[0] + 64) + 8 * v3);
  }
  v5 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      1232, 16, 0);
  v6 = *(unsigned __int8*)(v4 + 72);
  v7 = v5;
  GameRoutine_1789cf0(v5, "TheaterCastingUnitMenu");
  v8 = GameData_21312e0[0];
  *(_QWORD*)(v7 + 1184) = 0;
  *(_QWORD*)(v7 + 1192) = 0;
  *(_QWORD*)(v7 + 1200) = 0;
  *(_DWORD*)(v7 + 1208) = 0;
  *(_QWORD*)v7 = v8 + 2;
  *(_QWORD*)(v7 + 176) = v8 + 163;
  *(_QWORD*)(v7 + 1056) = v8 + 189;
  if (v6 == 3) {
    v9 = 5;
  }
  else {
    v9 = 3;
  }
  GameRoutine_f369a0(v7 + 1184, v9);
  v13 = *(_QWORD*)(v7 + 1184);
  v14 = *(_QWORD*)(v7 + 1192) - v13;
  if (v14 >= 1) {
    memset(v13, 0, v14, v10, v11, v12);
  }
  *(_QWORD*)(v7 + 1216) = v4;
  *(_QWORD*)v7 = game_facility_anonymous_ProcTheaterCastingUnitMenu_vtable;
  *(_QWORD*)(v7 + 1056) =
      game_facility_anonymous_ProcTheaterCastingUnitMenu_vtable + 189;
  v15 = *v2;
  *(_QWORD*)(v7 + 176) = GameData_21136f0;
  *(_QWORD*)(v15 + 56) = *(_QWORD*)(v15 + 48);
  ProcInst_657850(v7, GameData_212c730, "ProcTheaterCastingUnitMenu", 1, a1);
  v28 = v7;
  v26[2] = v4;
  result = v26;
  v26[0] = GameData_2113a18;
  v26[1] = &v28;
  v19 = *(__int64****)(game_UnitListSet_instance_ + 24);
  v27 = v26;
  v20 = *v19;
  v21 = v19[1];
  if (*v19 == v21) {
    goto LABEL_27;
  }
  do {
    v22 = *v20;
    v23 = v20[1];
    if (v23 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 1), 1u,
                                memory_order_relaxed);
    }
    if (v22 != nullptr) {
      v24 = (v22[6] & 0x20) == 0;
      if (v23 == nullptr) {
        goto LABEL_19;
      }
    }
    else {
      v24 = false;
      if (v23 == nullptr) {
        goto LABEL_19;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v23 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v23 + 16))(v23);
      std___1___shared_weak_count___release_weak(v23);
      if (!v24) {
        goto LABEL_11;
      }
      goto LABEL_20;
    }
  LABEL_19:
    if (v24) {
    LABEL_20:
      v29 = **v20;
      if (v27 == nullptr) {
        GameRoutine_60a310(0);
      }
      (*(void (**)(_QWORD*, __int64*))(*v27 + 48LL))(v27, &v29);
    }
  LABEL_11:
    v20 += 2;
  } while (v20 != v21);
  result = v27;
  if (v27 != v26) {
    if (v27 != nullptr) {
      v25 = 40;
      return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(
          *result + v25))(result, v16, v17);
    }
    return result;
  }
LABEL_27:
  v25 = 32;
  return (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(*result + v25))(
      result, v16, v17);
}

__int64 ProcTheaterCastingUnitMenu_Unknown84(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  char* v34;

  GameRoutine_15e8430();
  v2 = game_util_Format("L_Cast%02d/L_IconNum/Img", 0);
  v3 = ui_LayoutAccessor_FindPane(a1 + 848, v2);
  if (v3 != 0) {
    v3 = __dynamic_cast(v3, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_18422d0(v3, 1, 0);
  v4 = game_util_Format("L_Cast%02d/L_IconNum/Img", 1);
  v5 = ui_LayoutAccessor_FindPane(a1 + 848, v4);
  if (v5 != 0) {
    v5 = __dynamic_cast(v5, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_18422d0(v5, 2, 0);
  v6 = game_util_Format("L_Cast%02d/L_IconNum/Img", 2);
  v7 = ui_LayoutAccessor_FindPane(a1 + 848, v6);
  if (v7 != 0) {
    v7 = __dynamic_cast(v7, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_18422d0(v7, 3, 0);
  v8 = game_util_Format("L_Cast%02d/L_IconNum/Img", 3);
  v9 = ui_LayoutAccessor_FindPane(a1 + 848, v8);
  if (v9 != 0) {
    v9 = __dynamic_cast(v9, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_18422d0(v9, 4, 0);
  v10 = game_util_Format("L_Cast%02d/L_IconNum/Img", 4);
  v11 = ui_LayoutAccessor_FindPane(a1 + 848, v10);
  if (v11 != 0) {
    v11 = __dynamic_cast(v11, GameData_212d670[0], GameData_212d678[0], 0);
  }
  GameRoutine_18422d0(v11, 5, 0);
  if (*(_BYTE*)(*(_QWORD*)(a1 + 1216) + 72LL) == 3) {
    v12 = GameRoutine_1562680(a1 + 848, "CastsNum5", 1.0);
    v13 = **(_QWORD**)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL);
    v14 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL) +
                   8LL) -
        v13;
    if ((int)(v14 >> 3) < 4) {
      goto LABEL_17;
    }
    if (v14 <= 0x18) {
      goto LABEL_43;
    }
    v15 = *(_QWORD*)(v13 + 24);
    if (v15 != 0) {
      v16 = *(_QWORD*)(v15 + 56);
    }
    else {
    LABEL_17:
      v16 = 0;
    }
    v12 = GameRoutine_1562060(a1 + 848, "L_Cast03/T_Txt", v16);
    v17 = **(_QWORD**)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL);
    v18 =
        *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL) +
                   8LL) -
        v17;
    if ((int)(v18 >> 3) <= 4) {
      goto LABEL_22;
    }
    if (v18 <= 0x20) {
      goto LABEL_43;
    }
    v19 = *(_QWORD*)(v17 + 32);
    if (v19 != 0) {
      v20 = *(_QWORD*)(v19 + 56);
    }
    else {
    LABEL_22:
      v20 = 0;
    }
    v12 = GameRoutine_1562060(a1 + 848, "L_Cast04/T_Txt", v20);
  }
  else {
    v12 = GameRoutine_1562680(a1 + 848, "CastsNum3", 1.0);
  }
  v21 = **(char***)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL);
  v22 = *(char**)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL) +
                  8LL);
  if ((int)((unsigned __int64)(v22 - v21) >> 3) < 1) {
    goto LABEL_28;
  }
  if (v22 == v21) {
    goto LABEL_43;
  }
  v23 = *(_QWORD*)v21;
  if (v23 != 0) {
    v24 = *(_QWORD*)(v23 + 56);
  }
  else {
  LABEL_28:
    v24 = 0;
  }
  v12 = GameRoutine_1562060(a1 + 848, "L_Cast00/T_Txt", v24);
  v25 = **(_QWORD**)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL);
  v26 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL) +
                   8LL) -
        v25;
  if ((int)(v26 >> 3) <= 1) {
    goto LABEL_33;
  }
  if (v26 <= 8) {
    goto LABEL_43;
  }
  v27 = *(_QWORD*)(v25 + 8);
  if (v27 != 0) {
    v28 = *(_QWORD*)(v27 + 56);
  }
  else {
  LABEL_33:
    v28 = 0;
  }
  v12 = GameRoutine_1562060(a1 + 848, "L_Cast01/T_Txt", v28);
  v29 = **(_QWORD**)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL);
  v30 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 1216) + 40LL) + 40LL) +
                   8LL) -
        v29;
  if ((int)(v30 >> 3) >= 3) {
    if (v30 <= 0x10) {
    LABEL_43:
      GameRoutine_13eb280(v12);
    }
    v31 = *(_QWORD*)(v29 + 16);
    if (v31 != 0) {
      v32 = *(_QWORD*)(v31 + 56);
      goto LABEL_39;
    }
  }
  v32 = 0;

LABEL_39:
  GameRoutine_1562060(a1 + 848, "L_Cast02/T_Txt", v32);
  GameRoutine_1562060(a1 + 848, "T_Txt",
                      *(_QWORD*)(*(_QWORD*)(a1 + 1216) + 48LL));
  v33 = *(unsigned __int8*)(*(_QWORD*)(a1 + 1216) + 72LL);
  if (v33 == 4) {
    v34 = nullptr;
  }
  else {
    v34 = GameData_1fafca8[v33];
  }
  GameRoutine_1562060(a1 + 848, "T_Genre", v34);
  return GameRoutine_1929960(a1);
}

__int64 game_facility_anonymous_ProcTheaterCastingUnitMenu_PlusCall(__int64* a1,
                                                                    __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 (**v5)();
  unsigned __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  unsigned __int64 i;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64* v17;
  __int64* v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 (**v21)();
  __int64 v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  unsigned int v27;
  __int64 v28;
  __int64 v29;
  _BYTE* v30;
  _BYTE* v31;
  __int64 v32;
  int v33;
  __int64 v34;
  struct {
    _QWORD v36[4];
    _QWORD* v37;
  } v36_;
  struct {
    __int64* v38;
    __int64* v39;
    __int64 v40;
  } v38_;
  __int64 v41;

  v2 = a1[149];
  v3 = a1[148];
  if (v2 == v3) {
    return (*(__int64 (**)(__int64*))(*a1 + 1264))(a1);
  }
  v5 = game_ProcInst_Unknown04_1929bd0_ptr;
  v6 = 0;
  v7 = game_map_MapRandom_instance__ptr[0];
  do {
    if (v2 == v3) {
      break;
    }
    v8 = (v2 - v3) >> 3;
    v9 = 0;
    while (*(_QWORD*)(v3 + 8 * v9) != 0) {
      if (v8 == ++v9) {
        return (*(__int64 (**)(__int64*))(*a1 + 1264))(a1);
      }
    }
    if (v9 == -1) {
      break;
    }
    v10 = a1[29];
    v11 = a1[30];
    v12 = v36_.v36;
    v38_.v39 = nullptr;
    v38_.v40 = 0;
    v38_.v38 = nullptr;
    v36_.v36[0] = v5;
    v36_.v36[1] = &v38_.v38;
    v36_.v37 = v36_.v36;
    if (v11 == v10) {
      goto LABEL_20;
    }
    for (i = 0; i < (v11 - v10) >> 3; ++i) {
      v14 = *(_QWORD*)(v10 + 8 * i);
      if (v14 == 0) {
        continue;
      }
      v15 = __dynamic_cast(v14, GameData_212e008[0], &GameData_2113860, 0);
      if (v15 == 0) {
        continue;
      }
      v41 = v15;
      if (v36_.v37 == nullptr) {
        GameRoutine_60a310_alt1();
      }
      if (((*(__int64 (**)(_QWORD*, __int64*))(*v36_.v37 + 48LL))(v36_.v37,
                                                                  &v41) &
           1) != 0) {
        break;
      }
      v10 = a1[29];
      v11 = a1[30];
    }
    v12 = v36_.v37;
    if (v36_.v37 != v36_.v36) {
      if (v36_.v37 != nullptr) {
        v16 = 40;
        goto LABEL_21;
      }
      goto LABEL_22;
    }
  LABEL_20:
    v16 = 32;
  LABEL_21:
    (*(void (**)(_QWORD*, __int64))(*v12 + v16))(v12, a2);
  LABEL_22:
    v17 = v38_.v38;
    v18 = v38_.v39;
    v19 = (unsigned __int64)((char*)v38_.v39 - (char*)v38_.v38) >> 3;
    if ((int)v19 >= 1) {
      v20 = ((unsigned __int64)((char*)v38_.v39 - (char*)v38_.v38) >> 3) &
            0x7FFFFFFF;
      v21 = v5;
      v22 = 0;
      do {
        nn_os_LockMutex_alt1((__int64)&game_g_random_mutex);
        v23 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7);
        v24 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7 + 4);
        v25 = *(_DWORD*)v7 ^ (*(_DWORD*)v7 << 11);
        *(_DWORD*)v7 = *((_DWORD*)v7 + 1);
        *((_DWORD*)v7 + 1) = v23;
        v26 = (v25 >> 8) ^ (v24 >> 19) ^ v25 ^ v24;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7) = v24;
        *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v7 + 4) = v26;
        v27 = v26 & 0x7FFFFFFF;
        nn_os_UnlockMutex_alt1((__int64)&game_g_random_mutex);
        v28 = (__int64)v38_.v38;
        v29 = v38_.v38[v22];
        v38_.v38[v22++] = v38_.v38[v27 % (unsigned int)v19];
        *(_QWORD*)(v28 + 8LL * (v27 % (unsigned int)v19)) = v29;
      } while (v20 != v22);
      v17 = v38_.v38;
      v18 = v38_.v39;
      v5 = v21;
    }
    if (v17 != v18) {
      ProcTheaterCastingUnitMenu_1929e40((__int64)v17, v18,
                                         (2 * __clz(v18 - v17)) ^ 0x7E, 1);
      v17 = v38_.v38;
    }
    v30 = (_BYTE*)*v17;
    v31 = (_BYTE*)a1[42];
    if (v31 == v30) {
    LABEL_33:
      if (v31 == nullptr) {
        goto LABEL_37;
      }
      if (((*(__int64 (**)(_BYTE*))(*(_QWORD*)v31 + 120LL))(v31) & 1) != 0) {
        v33 = 4;
      }
      else {
        v33 = 0;
      }
    }
    else {
      if (v31 != nullptr) {
        (*(void (**)(_BYTE*))(*(_QWORD*)v31 + 168LL))(v31);
      }
      a1[42] = (__int64)v30;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb_alt1((__int64)a1, 0, 1u, 0);
      v32 = a1[42];
      if (v32 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v32 + 160LL))(v32);
        game_IsVibrationEnabled_alt1(
            (_BYTE*)(*(_QWORD*)game_g_game_setting_ptr + 712LL));
        v31 = (_BYTE*)a1[42];
        goto LABEL_33;
      }
    LABEL_37:
      v33 = 4;
    }
    *((_DWORD*)a1 + 89) = *((_DWORD*)a1 + 89) & 0xFFFFFFFB | v33;
    FacilityUnitMenu_15e8f40_alt1(a1, v30);
    a2 = (__int64)v38_.v38;
    if (v38_.v38 != nullptr) {
      v38_.v39 = v38_.v38;
      v34 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v34 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, (__int64)v38_.v38);
    }
    v2 = a1[149];
    v3 = a1[148];
    ++v6;
  } while (v6 < (v2 - v3) >> 3);
  return (*(__int64 (**)(__int64*))(*a1 + 1264))(a1);
}

void ProcTheaterCastingUnitMenu_Unknown139(__int64 a1, __int64* a2)
{
  int v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  signed __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;

  GameRoutine_178a2c0_alt1(a1, a2);
  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 192LL))(a1);
  v5 = a2[1];
  v6 = a2[2];
  if (v5 >= v6) {
    v8 = *a2;
    v9 = v5 - *a2;
    v10 = 1 - 0x3333333333333333LL * (v9 >> 3);
    if (v10 > 0x666666666666666LL) {
      GameRoutine_874520_alt1();
    }
    v11 = fw_memory_g_heap_manager_ptr;
    v12 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v6 - v8) >> 3);
    if (2 * v12 > v10) {
      v10 = 2 * v12;
    }
    if (v12 >= 0x333333333333333LL) {
      v13 = 0x666666666666666LL;
    }
    else {
      v13 = v10;
    }
    if (v13 != 0) {
      if (v13 > 0x666666666666666LL) {
        GameRoutine_60a210_alt1();
      }
      v14 = v4;
      v15 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 40 * v13, 16, 0);
      v4 = v14;
    }
    else {
      v15 = 0;
    }
    v16 = v15 + v9;
    *(_QWORD*)v16 = &GameData_1a9f09e;
    *(_QWORD*)(v16 + 8) = "MID_KeyHelp_AutoUnitSelect";
    *(_BYTE*)(v16 + 28) = 0;
    *(_QWORD*)(v16 + 32) = 0;
    *(_BYTE*)(v16 + 16) = 1;
    v17 = v15 + 40 * v13;
    v7 = v15 + v9 + 40;
    *(_DWORD*)(v16 + 20) = 11;
    *(_DWORD*)(v16 + 24) = v4;
    memcpy_alt1(v15, v8, v9);
    *a2 = v15;
    a2[1] = v7;
    a2[2] = v17;
    if (v8 != 0) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v11 + v18, v8);
    }
  }
  else {
    *(_BYTE*)(v5 + 28) = 0;
    *(_QWORD*)(v5 + 32) = 0;
    *(_QWORD*)v5 = &GameData_1a9f09e;
    *(_QWORD*)(v5 + 8) = "MID_KeyHelp_AutoUnitSelect";
    v7 = v5 + 40;
    *(_BYTE*)(v5 + 16) = 1;
    *(_DWORD*)(v5 + 20) = 11;
    *(_DWORD*)(v5 + 24) = v4;
  }
  a2[1] = v7;
}

__int64 ProcTheaterCastingUnitMenu_Unknown156(__int64* a1, __int64 a2)
{
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64 v8;

  v3 = *(_QWORD*)(a2 + 56);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v5 = std___1___shared_weak_count_lock(v3);
  if (v5 == 0) {
    goto LABEL_5;
  }
  v6 = *(__int64**)(a2 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = v5;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v8);
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  if ((LayoutAccessor_15635a0(v6, (__int64)"IconNumIn", 1) & 1) == 0 &&
      (LayoutAccessor_15635a0(v6, (__int64)"IconNumOn", 1) & 1) == 0) {
    GameHr_1562680((__int64)v6, "IconNumIn", 0x1.0000000000000p+0f);
  }
  GameRoutine_1929960_alt1(a1);
  (*(void (**)(__int64*))(*a1 + 704))(a1);
  return game_menu_BasicMenu_Unknown16dd9a0((__int64)a1);
}

__int64 ProcTheaterCastingUnitMenu_Unknown157(__int64* a1, __int64 a2)
{
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64 v8;

  v3 = *(_QWORD*)(a2 + 56);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v5 = std___1___shared_weak_count_lock(v3);
  if (v5 == 0) {
    goto LABEL_5;
  }
  v6 = *(__int64**)(a2 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v8 = v5;
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak_alt1(v8);
    if (v6 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if (v6 == nullptr) {
  LABEL_5:
    v6 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  if ((LayoutAccessor_15635a0(v6, (__int64)"IconNumOut", 1) & 1) == 0 &&
      (LayoutAccessor_15635a0(v6, (__int64)"IconNumOff", 1) & 1) == 0) {
    GameHr_1562680((__int64)v6, "IconNumOut", 0x1.0000000000000p+0f);
  }
  GameRoutine_1929960_alt1(a1);
  (*(void (**)(__int64*))(*a1 + 704))(a1);
  return game_menu_BasicMenu_Unknown16dd9a0((__int64)a1);
}

__int64 ProcTheaterCastingUnitMenu_Unknown160(__int64 a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  _QWORD v5[4];
  int v6;
  int v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;

  v1 = msg_MessageManager_instance__ptr[0];
  if (*(_BYTE*)(*(_QWORD*)(a1 + 1216) + 72LL) == 3) {
    v2 = 5;
  }
  else {
    v2 = 3;
  }
  GameRoutine_a51e10(*msg_MessageManager_instance__ptr[0] + 14704, 0, v2, 0);
  v3 = *v1;
  v8 = -1;
  v9 = -1;
  v10 = -1;
  v11 = -1;
  v12 = -1;
  v13 = -1;
  v14 = -1;
  v15 = -1;
  v16 = -1;
  v17 = -1;
  v18 = -1;
  v19 = -1;
  v5[0] = GameData_212e348 + 2;
  v5[1] = 0xFFFF0001FFFF0000LL;
  v5[2] = 0xFFFF0004FFFF0002LL;
  v5[3] = 0xFFFF0006FFFF0005LL;
  v20 = 8;
  v6 = -65529;
  v7 = -65528;
  return GameRoutine_a4dbe0(v3, "MID_Menu_PlayerFacility_UnitSelect_Help", 0,
                            v5);
}

__int64

game_facility_anonymous_ProcTheaterCastingUnitMenu_PlusCall_closure_Invoke(
    __int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64* v4;
  unsigned __int64 v5;
  _QWORD* v6;
  __int64 v7;
  __int64 v8;
  signed __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *a2;
  if ((*(_BYTE*)(*a2 + 79LL) & 1) == 0 &&
      ((*(__int64 (**)(_QWORD))(*(_QWORD*)v2 + 464LL))(*a2) & 1) != 0) {
    v4 = *(__int64**)(a1 + 8);
    v6 = (_QWORD*)v4[1];
    v5 = v4[2];
    if ((unsigned __int64)v6 >= v5) {
      v8 = *v4;
      v9 = (signed __int64)v6 - *v4;
      v10 = (v9 >> 3) + 1;
      if (v10 >> 61 != 0) {
        GameRoutine_1929e10_alt1();
      }
      v11 = v5 - v8;
      v12 = fw_memory_g_heap_manager_ptr;
      if (v11 >> 2 > v10) {
        v10 = v11 >> 2;
      }
      if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFF8LL) {
        v13 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v13 = v10;
      }
      if (v13 != 0) {
        if (v13 >> 61 != 0) {
          GameRoutine_60a210_alt1();
        }
        v14 = fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v13, 16, 0);
      }
      else {
        v14 = 0;
      }
      v15 = v14 + 8 * v13;
      v16 = v14 + v9 - 8 * (v9 >> 3);
      *(_QWORD*)(v14 + v9) = v2;
      v7 = v14 + v9 + 8;
      memcpy_alt1(v16, v8, v9);
      *v4 = v16;
      v4[1] = v7;
      v4[2] = v15;
      if (v8 != 0) {
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
          v17 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v12 + v17, v8);
      }
    }
    else {
      *v6 = v2;
      v7 = (__int64)(v6 + 1);
    }
    v4[1] = v7;
  }
  return 0;
}

__int64 ProcTheaterCastingUnitMenu_1929e40(__int64 result, __int64* a2,
                                           __int64 a3, char a4)
{
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  unsigned __int8 v12;
  int v13;
  unsigned __int8 v14;
  __int64 v15;
  unsigned __int8 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  int v20;
  unsigned __int8 v21;
  int v22;
  unsigned __int8 v23;
  __int64* v24;
  __int64* v25;
  __int64 v26;
  unsigned __int8 v27;
  int v28;
  unsigned __int8 v29;
  __int64* v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  unsigned __int8 v34;
  int v35;
  unsigned __int8 v36;
  __int64 v37;
  unsigned __int8 v38;
  int v39;
  unsigned __int8 v40;
  int v41;
  __int64 v42;
  unsigned __int8 v43;
  int v44;
  unsigned __int8 v45;
  __int64* v46;
  bool v47;
  unsigned __int64 v48;
  int v49;
  unsigned __int8 v50;
  int v51;
  int v52;
  unsigned __int8 v53;
  int v54;
  __int64 v55;
  __int64* v56;
  unsigned __int8 v57;
  int v58;
  __int64 v59;
  __int64 v60;
  unsigned __int8 v61;
  int v62;
  __int64 v63;
  unsigned __int8 v64;
  int v65;
  unsigned __int8 v66;
  int v67;
  __int64 v68;
  __int64* v69;
  unsigned __int8 v70;
  int v71;
  __int64* v72;
  bool v74;
  __int64 v75;
  __int64* v76;
  __int64* v77;
  __int64* v78;
  unsigned __int8 v79;
  int v80;
  __int64 v81;
  __int64 v82;
  int v83;
  unsigned __int8 v84;
  int v85;
  signed __int64 v86;
  signed __int64 v87;
  signed __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64* v91;
  unsigned __int8 v92;
  int v93;
  unsigned __int8 v94;
  int v95;
  unsigned __int8 v96;
  int v97;
  __int64* v98;
  __int64 v99;
  __int64* v100;
  __int64 v101;
  unsigned __int8 v102;
  int v103;
  unsigned __int8 v104;
  int v105;
  bool v106;
  unsigned __int8 v107;
  int v108;
  __int64* v109;
  __int64 v110;
  __int64* v111;
  __int64* v112;
  __int64 v113;
  __int64* v114;
  __int64 v115;
  unsigned __int8 v116;
  int v117;
  __int64* v118;
  __int64 v119;
  int v120;
  __int64* v121;
  __int64 v122;
  unsigned __int64 v123;
  unsigned __int64 v124;
  __int64* v125;
  unsigned __int8 v126;
  int v127;
  __int64 v128;
  __int64* v129;
  unsigned __int8 v130;
  int v131;
  __int64 v132;
  __int64* v133;
  unsigned __int8 v134;
  int v135;
  __int64 v136;
  __int64* v137;
  int v138;
  unsigned __int8 v139;
  int v140;
  __int64* v141;
  __int64* v142;
  signed __int64 v143;
  __int64* v144;
  __int64 v145;
  __int64* v146;
  __int64* v147;

  v7 = (__int64*)result;
LABEL_2:
  v8 = v7;
  v142 = a2 - 2;
  v144 = a2 - 1;
  v141 = a2 - 3;
  v146 = a2;
  while (1) {
    v7 = v8;
    v9 = a2 - v8;
    if (v9 > 2) {
      switch (v9) {
      case 3LL:
        return GameRoutine_192ae90_alt1(v7, v7 + 1, v144);
      case 4LL:
        return GameRoutine_192b110_alt1(v7, v7 + 1, v7 + 2, v144);
      case 5LL:
        return GameRoutine_192b2c0_alt1(v7, v7 + 1, v7 + 2, v7 + 3, v144);
      default:
        break;
      }
      goto LABEL_10;
    }
    if ((unsigned __int64)v9 < 2) {
      return result;
    }
    if (v9 == 2) {
      break;
    }
  LABEL_10:
    if (v9 <= 23) {
      v72 = v7 + 1;
      v74 = v7 == a2 || v72 == a2;
      if ((a4 & 1) != 0) {
        if (v74) {
          return result;
        }
        v75 = 0;
        v76 = v7;
        while (1) {
          v78 = v72;
          v79 = (*(__int64 (**)(__int64))(*(_QWORD*)v76[1] + 640LL))(v76[1]);
          if (v79 > 5u) {
            v80 = -1;
          }
          else {
            v80 = GameData_1c1e81c_alt1[v79];
          }
          result = (*(__int64 (**)(__int64))(*(_QWORD*)*v76 + 640LL))(*v76);
          if ((unsigned __int8)result > 5u) {
            if (v80 > -1) {
            LABEL_148:
              v81 = *v78;
              v82 = v75;
              do {
                *(__int64*)((char*)v7 + v82 + 8) = *(__int64*)((char*)v7 + v82);
                if (v82 == 0) {
                  v77 = v7;
                  goto LABEL_139;
                }
                v84 = (*(__int64 (**)(__int64))(*(_QWORD*)v81 + 640LL))(v81);
                if (v84 > 5u) {
                  v85 = -1;
                }
                else {
                  v85 = GameData_1c1e81c_alt1[v84];
                }
                result = (*(__int64 (**)(_QWORD))(
                    **(_QWORD**)((char*)v7 + v82 - 8) + 640LL))(
                    *(__int64*)((char*)v7 + v82 - 8));
                if ((unsigned __int8)result <= 5u) {
                  v83 = GameData_1c1e81c_alt1[(unsigned __int8)result];
                }
                else {
                  v83 = -1;
                }
                v82 -= 8;
              } while (v85 > v83);
              v77 = (__int64*)((char*)v7 + v82 + 8);
            LABEL_139:
              *v77 = v81;
            }
          }
          else if (v80 > (signed __int32)
                             GameData_1c1e81c_alt1[(unsigned __int8)result]) {
            goto LABEL_148;
          }
          v72 = v78 + 1;
          v75 += 8;
          v76 = v78;
          if (v78 + 1 == v146) {
            return result;
          }
        }
      }
      if (v74) {
        return result;
      }
      while (1) {
        v133 = v72;
        v134 = (*(__int64 (**)(__int64))(*(_QWORD*)v7[1] + 640LL))(v7[1]);
        if (v134 > 5u) {
          v135 = -1;
        }
        else {
          v135 = GameData_1c1e81c_alt1[v134];
        }
        result = (*(__int64 (**)(__int64))(*(_QWORD*)*v7 + 640LL))(*v7);
        if ((unsigned __int8)result > 5u) {
          if (v135 > -1) {
          LABEL_250:
            v136 = *v133;
            v137 = v133;
            do {
              *v137 = *(v137 - 1);
              v139 = (*(__int64 (**)(__int64))(*(_QWORD*)v136 + 640LL))(v136);
              if (v139 > 5u) {
                v140 = -1;
              }
              else {
                v140 = GameData_1c1e81c_alt1[v139];
              }
              result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*(v137 - 2) + 640LL))(
                  *(v137 - 2));
              if ((unsigned __int8)result <= 5u) {
                v138 = GameData_1c1e81c_alt1[(unsigned __int8)result];
              }
              else {
                v138 = -1;
              }
              --v137;
            } while (v140 > v138);
            a2 = v146;
            *v137 = v136;
          }
        }
        else if (v135 > (signed __int32)
                            GameData_1c1e81c_alt1[(unsigned __int8)result]) {
          goto LABEL_250;
        }
        v72 = v133 + 1;
        v7 = v133;
        if (v133 + 1 == a2) {
          return result;
        }
      }
    }
    if (a3 == 0) {
      if (v7 == a2) {
        return result;
      }
      v86 = (unsigned __int64)(v9 - 2) >> 1;
      v87 = v86;
      while (1) {
        v88 = v87;
        if (v86 >= v87) {
          v143 = v87;
          v89 = (2 * (v87 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
          v90 = 2 * v87 + 2;
          v91 = &v7[v89];
          if (v90 < v9) {
            v92 = (*(__int64 (**)(__int64))(*(_QWORD*)*v91 + 640LL))(*v91);
            v93 = v92 > 5u ? -1 : GameData_1c1e81c_alt1[v92];
            v94 = (*(__int64 (**)(__int64))(*(_QWORD*)v91[1] + 640LL))(v91[1]);
            v95 = v94 > 5u ? -1 : GameData_1c1e81c_alt1[v94];
            if (v93 > v95) {
              ++v91;
              v89 = v90;
            }
          }
          v96 = (*(__int64 (**)(__int64))(*(_QWORD*)*v91 + 640LL))(*v91);
          v88 = v143;
          if (v96 > 5u) {
            v97 = -1;
          }
          else {
            v97 = GameData_1c1e81c_alt1[v96];
          }
          v98 = &v7[v143];
          result = (*(__int64 (**)(__int64))(*(_QWORD*)*v98 + 640LL))(*v98);
          if ((unsigned __int8)result > 5u) {
            if (v97 <= -1) {
            LABEL_179:
              v99 = *v98;
              while (1) {
                v100 = v98;
                v98 = v91;
                *v100 = *v91;
                if (v86 < v89) {
                  break;
                }
                v101 = (2 * v89) | 1;
                v89 = 2 * v89 + 2;
                v91 = &v7[v101];
                if (v89 >= v9) {
                  v89 = v101;
                }
                else {
                  v102 =
                      (*(__int64 (**)(__int64))(*(_QWORD*)*v91 + 640LL))(*v91);
                  if (v102 > 5u) {
                    v103 = -1;
                  }
                  else {
                    v103 = GameData_1c1e81c_alt1[v102];
                  }
                  v104 = (*(__int64 (**)(__int64))(*(_QWORD*)v91[1] + 640LL))(
                      v91[1]);
                  if (v104 > 5u) {
                    v105 = -1;
                  }
                  else {
                    v105 = GameData_1c1e81c_alt1[v104];
                  }
                  v106 = v103 <= v105;
                  v86 = (unsigned __int64)(v9 - 2) >> 1;
                  if (v106) {
                    v89 = v101;
                  }
                  else {
                    ++v91;
                  }
                }
                v107 = (*(__int64 (**)(__int64))(*(_QWORD*)*v91 + 640LL))(*v91);
                if (v107 > 5u) {
                  v108 = -1;
                }
                else {
                  v108 = GameData_1c1e81c_alt1[v107];
                }
                result = (*(__int64 (**)(__int64))(*(_QWORD*)v99 + 640LL))(v99);
                if ((unsigned __int8)result <= 5u) {
                  if (v108 >
                      (signed __int32)
                          GameData_1c1e81c_alt1[(unsigned __int8)result]) {
                    break;
                  }
                }
                else if (v108 > -1) {
                  break;
                }
              }
              *v98 = v99;
              v88 = v143;
            }
          }
          else if (v97 <= (signed __int32)
                              GameData_1c1e81c_alt1[(unsigned __int8)result]) {
            goto LABEL_179;
          }
        }
        v87 = v88 - 1;
        if (v88 == 0) {
          v109 = v146;
          while (1) {
            v147 = v109;
            v110 = 0;
            v111 = v7;
            v145 = *v7;
            do {
              v112 = &v111[v110];
              v113 = (2 * v110) | 1;
              v114 = v112 + 1;
              v115 = 2 * v110 + 2;
              if (v115 >= v9) {
                v110 = (2 * v110) | 1;
              }
              else {
                v116 = (*(__int64 (**)(__int64))(*(_QWORD*)v112[1] + 640LL))(
                    v112[1]);
                if (v116 > 5u) {
                  v117 = -1;
                }
                else {
                  v117 = GameData_1c1e81c_alt1[v116];
                }
                v119 = v112[2];
                v118 = v112 + 2;
                result =
                    (*(__int64 (**)(__int64))(*(_QWORD*)v119 + 640LL))(v119);
                if ((unsigned __int8)result > 5u) {
                  v120 = -1;
                }
                else {
                  v120 = GameData_1c1e81c_alt1[(unsigned __int8)result];
                }
                if (v117 <= v120) {
                  v110 = v113;
                }
                else {
                  v114 = v118;
                  v110 = v115;
                }
              }
              *v111 = *v114;
              v111 = v114;
            } while (v110 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
            v121 = v147 - 1;
            if (v114 == v147 - 1) {
              v109 = v147 - 1;
              *v114 = v145;
            }
            else {
              v109 = v147 - 1;
              *v114 = *v121;
              *v121 = v145;
              v122 = ((char*)v114 - (char*)v7 + 8) >> 3;
              v106 = v122 < 2;
              v123 = v122 - 2;
              if (!v106) {
                v124 = v123 >> 1;
                v125 = &v7[v123 >> 1];
                v126 =
                    (*(__int64 (**)(__int64))(*(_QWORD*)*v125 + 640LL))(*v125);
                if (v126 > 5u) {
                  v127 = -1;
                }
                else {
                  v127 = GameData_1c1e81c_alt1[v126];
                }
                result =
                    (*(__int64 (**)(__int64))(*(_QWORD*)*v114 + 640LL))(*v114);
                if ((unsigned __int8)result > 5u) {
                  if (v127 > -1) {
                  LABEL_224:
                    v128 = *v114;
                    while (1) {
                      v129 = v114;
                      v114 = v125;
                      *v129 = *v125;
                      if (v124 == 0) {
                        break;
                      }
                      v124 = (v124 - 1) >> 1;
                      v125 = &v7[v124];
                      v130 = (*(__int64 (**)(__int64))(*(_QWORD*)*v125 +
                                                       640LL))(*v125);
                      if (v130 > 5u) {
                        v131 = -1;
                      }
                      else {
                        v131 = GameData_1c1e81c_alt1[v130];
                      }
                      result = (*(__int64 (**)(__int64))(*(_QWORD*)v128 +
                                                         640LL))(v128);
                      if ((unsigned __int8)result <= 5u) {
                        if (v131 <= (signed __int32)GameData_1c1e81c_alt1[(
                                        unsigned __int8)result]) {
                          break;
                        }
                      }
                      else if (v131 <= -1) {
                        break;
                      }
                    }
                    *v114 = v128;
                  }
                }
                else if (v127 >
                         (signed __int32)
                             GameData_1c1e81c_alt1[(unsigned __int8)result]) {
                  goto LABEL_224;
                }
              }
            }
            v106 = v9-- <= 2;
            if (v106) {
              return result;
            }
          }
        }
      }
    }
    v10 = &v7[(unsigned __int64)v9 >> 1];
    if ((unsigned __int64)v9 < 0x81) {
      GameRoutine_192ae90_alt1(&v7[(unsigned __int64)v9 >> 1], v7, v144);
      --a3;
      if ((a4 & 1) != 0) {
        goto LABEL_24;
      }
    }
    else {
      GameRoutine_192ae90_alt1(v7, &v7[(unsigned __int64)v9 >> 1], v144);
      GameRoutine_192ae90_alt1(v7 + 1, v10 - 1, v142);
      GameRoutine_192ae90_alt1(v7 + 2, v10 + 1, v141);
      GameRoutine_192ae90_alt1(v10 - 1, &v7[(unsigned __int64)v9 >> 1],
                               v10 + 1);
      v11 = *v7;
      *v7 = *v10;
      *v10 = v11;
      --a3;
      if ((a4 & 1) != 0) {
        goto LABEL_24;
      }
    }
    v12 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*(v7 - 1) + 640LL))(*(v7 - 1));
    if (v12 > 5u) {
      v13 = -1;
    }
    else {
      v13 = GameData_1c1e81c_alt1[v12];
    }
    v14 = (*(__int64 (**)(__int64))(*(_QWORD*)*v7 + 640LL))(*v7);
    if (v14 > 5u) {
      if (v13 > -1) {
        goto LABEL_24;
      }
    LABEL_21:
      v15 = *v7;
      v16 = (*(__int64 (**)(__int64))(*(_QWORD*)*v7 + 640LL))(*v7);
      if (v16 > 5u) {
        v17 = -1;
      }
      else {
        v17 = GameData_1c1e81c_alt1[v16];
      }
      result = (*(__int64 (**)(__int64))(*(_QWORD*)*v144 + 640LL))(*v144);
      if ((unsigned __int8)result > 5u) {
        if (v17 <= -1) {
        LABEL_77:
          v48 = (unsigned __int64)(v7 + 1);
          do {
            v8 = (__int64*)v48;
            if (v48 >= (unsigned __int64)a2) {
              break;
            }
            v50 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 640LL))(v15);
            v51 = v50 > 5u ? -1 : GameData_1c1e81c_alt1[v50];
            result = (*(__int64 (**)(__int64))(*(_QWORD*)*v8 + 640LL))(*v8);
            v49 = (unsigned __int8)result <= 5u
                      ? GameData_1c1e81c_alt1[(unsigned __int8)result]
                      : -1;
            v48 = (unsigned __int64)(v8 + 1);
          } while (v51 <= v49);
          goto LABEL_95;
        }
      }
      else if (v17 <=
               (signed __int32)GameData_1c1e81c_alt1[(unsigned __int8)result]) {
        goto LABEL_77;
      }
      v8 = v7;
      do {
        v53 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 640LL))(v15);
        if (v53 > 5u) {
          v54 = -1;
        }
        else {
          v54 = GameData_1c1e81c_alt1[v53];
        }
        v55 = v8[1];
        ++v8;
        result = (*(__int64 (**)(__int64))(*(_QWORD*)v55 + 640LL))(v55);
        if ((unsigned __int8)result <= 5u) {
          v52 = GameData_1c1e81c_alt1[(unsigned __int8)result];
        }
        else {
          v52 = -1;
        }
      } while (v54 <= v52);
    LABEL_95:
      v56 = a2;
      if (v8 < a2) {
        v56 = a2;
        do {
          while (1) {
            v57 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 640LL))(v15);
            v58 = v57 > 5u ? -1 : GameData_1c1e81c_alt1[v57];
            v59 = *--v56;
            result = (*(__int64 (**)(__int64))(*(_QWORD*)v59 + 640LL))(v59);
            if ((unsigned __int8)result > 5u) {
              break;
            }
            if (v58 <= (signed __int32)
                           GameData_1c1e81c_alt1[(unsigned __int8)result]) {
              goto LABEL_103;
            }
          }
        } while (v58 > -1);
      }
    LABEL_103:
      while (v8 < v56) {
        v60 = *v8;
        *v8 = *v56;
        *v56 = v60;
        do {
          while (1) {
            v61 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 640LL))(v15);
            v62 = v61 > 5u ? -1 : GameData_1c1e81c_alt1[v61];
            v63 = v8[1];
            ++v8;
            v64 = (*(__int64 (**)(__int64))(*(_QWORD*)v63 + 640LL))(v63);
            if (v64 > 5u) {
              break;
            }
            if (v62 > (signed __int32)GameData_1c1e81c_alt1[v64]) {
              goto LABEL_114;
            }
          }
        } while (v62 <= -1);
        do {
        LABEL_114:
          v66 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 640LL))(v15);
          if (v66 > 5u) {
            v67 = -1;
          }
          else {
            v67 = GameData_1c1e81c_alt1[v66];
          }
          v68 = *--v56;
          result = (*(__int64 (**)(__int64))(*(_QWORD*)v68 + 640LL))(v68);
          if ((unsigned __int8)result <= 5u) {
            v65 = GameData_1c1e81c_alt1[(unsigned __int8)result];
          }
          else {
            v65 = -1;
          }
        } while (v67 > v65);
      }
      v69 = v8 - 1;
      if (v7 != v8 - 1) {
        *v7 = *v69;
      }
      a4 = 0;
      *v69 = v15;
    }
    else {
      if (v13 <= (signed __int32)GameData_1c1e81c_alt1[v14]) {
        goto LABEL_21;
      }
    LABEL_24:
      v18 = *v7;
      v19 = 0;
      do {
        v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v7[v19 + 1] + 640LL))(
            v7[v19 + 1]);
        if (v21 > 5u) {
          v22 = -1;
        }
        else {
          v22 = GameData_1c1e81c_alt1[v21];
        }
        v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 640LL))(v18);
        if (v23 <= 5u) {
          v20 = GameData_1c1e81c_alt1[v23];
        }
        else {
          v20 = -1;
        }
        ++v19;
      } while (v22 > v20);
      v24 = &v7[v19];
      v25 = a2;
      if (v19 == 1) {
        v25 = a2;
        do {
          if (v24 >= v25) {
            break;
          }
          v42 = *--v25;
          v43 = (*(__int64 (**)(__int64))(*(_QWORD*)v42 + 640LL))(v42);
          v44 = v43 > 5u ? -1 : GameData_1c1e81c_alt1[v43];
          v45 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 640LL))(v18);
          v41 = v45 <= 5u ? GameData_1c1e81c_alt1[v45] : -1;
        } while (v44 <= v41);
      }
      else {
        do {
          while (1) {
            v26 = *--v25;
            v27 = (*(__int64 (**)(__int64))(*(_QWORD*)v26 + 640LL))(v26);
            v28 = v27 > 5u ? -1 : GameData_1c1e81c_alt1[v27];
            v29 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 640LL))(v18);
            if (v29 > 5u) {
              break;
            }
            if (v28 > (signed __int32)GameData_1c1e81c_alt1[v29]) {
              goto LABEL_40;
            }
          }
        } while (v28 <= -1);
      }
    LABEL_40:
      if (v24 >= v25) {
        v46 = v24 - 1;
        if (v7 != v24 - 1) {
          goto LABEL_69;
        }
      }
      else {
        v30 = v24;
        v31 = v25;
        do {
          v32 = *v30;
          *v30 = *v31;
          *v31 = v32;
          do {
            while (1) {
              v33 = v30[1];
              ++v30;
              v34 = (*(__int64 (**)(__int64))(*(_QWORD*)v33 + 640LL))(v33);
              v35 = v34 > 5u ? -1 : GameData_1c1e81c_alt1[v34];
              v36 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 640LL))(v18);
              if (v36 > 5u) {
                break;
              }
              if (v35 <= (signed __int32)GameData_1c1e81c_alt1[v36]) {
                goto LABEL_52;
              }
            }
          } while (v35 > -1);
          do {
          LABEL_52:
            while (1) {
              v37 = *--v31;
              v38 = (*(__int64 (**)(__int64))(*(_QWORD*)v37 + 640LL))(v37);
              v39 = v38 > 5u ? -1 : GameData_1c1e81c_alt1[v38];
              v40 = (*(__int64 (**)(__int64))(*(_QWORD*)v18 + 640LL))(v18);
              if (v40 > 5u) {
                break;
              }
              if (v39 > (signed __int32)GameData_1c1e81c_alt1[v40]) {
                goto LABEL_42;
              }
            }
          } while (v39 <= -1);
        LABEL_42:;
        } while (v30 < v31);
        a2 = v146;
        v46 = v30 - 1;
        if (v7 != v46) {
        LABEL_69:
          *v7 = *v46;
        }
      }
      *v46 = v18;
      if (v24 < v25) {
        goto LABEL_73;
      }
      v8 = v46 + 1;
      v47 = GameRoutine_192b500_alt1(v7, v46);
      result = GameRoutine_192b500_alt1(v46 + 1, a2);
      if ((result & 1) != 0) {
        a2 = v46;
        if (v47) {
          return result;
        }
        goto LABEL_2;
      }
      if (!v47) {
      LABEL_73:
        result =
            ProcTheaterCastingUnitMenu_1929e40((__int64)v7, v46, a3, a4 & 1);
        a4 = 0;
        v8 = v46 + 1;
      }
    }
  }
  v70 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*(a2 - 1) + 640LL))(*(a2 - 1));
  if (v70 > 5u) {
    v71 = -1;
  }
  else {
    v71 = GameData_1c1e81c_alt1[v70];
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)*v7 + 640LL))(*v7);
  if ((unsigned __int8)result <= 5u) {
    if (v71 <= (signed __int32)GameData_1c1e81c_alt1[(unsigned __int8)result]) {
      return result;
    }
  LABEL_238:
    v132 = *v7;
    *v7 = *(a2 - 1);
    *(a2 - 1) = v132;
    return result;
  }
  if (v71 > -1) {
    goto LABEL_238;
  }
  return result;
}

__int64 ProcTheaterCastingUnitMenu_192ae90(_QWORD* a1, _QWORD* a2, _QWORD* a3)
{
  unsigned __int8 v6;
  int v7;
  unsigned __int8 v8;
  int v9;
  unsigned __int8 v10;
  int v11;
  int v12;
  __int64 result;
  int v14;
  __int64 v15;
  __int64 v16;
  unsigned __int8 v17;
  int v18;
  unsigned __int8 v19;
  int v20;
  __int64 v21;

  v6 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 640LL))(*a2);
  if (v6 > 5u) {
    v7 = -1;
  }
  else {
    v7 = GameData_1c1e81c_alt1[v6];
  }
  v8 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 640LL))(*a1);
  if (v8 > 5u) {
    v9 = -1;
  }
  else {
    v9 = GameData_1c1e81c_alt1[v8];
  }
  v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 640LL))(*a3);
  if (v7 <= v9) {
    if (v10 > 5u) {
      v12 = -1;
    }
    else {
      v12 = GameData_1c1e81c_alt1[v10];
    }
    result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 640LL))(*a2);
    if ((unsigned __int8)result > 5u) {
      if (v12 <= -1) {
        return result;
      }
    }
    else if (v12 <=
             (signed __int32)GameData_1c1e81c_alt1[(unsigned __int8)result]) {
      return result;
    }
    v16 = *a2;
    *a2 = *a3;
    *a3 = v16;
    v17 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 640LL))(*a2);
    if (v17 > 5u) {
      v18 = -1;
    }
    else {
      v18 = GameData_1c1e81c_alt1[v17];
    }
    result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 640LL))(*a1);
    if ((unsigned __int8)result > 5u) {
      if (v18 <= -1) {
        return result;
      }
    }
    else if (v18 <=
             (signed __int32)GameData_1c1e81c_alt1[(unsigned __int8)result]) {
      return result;
    }
    v21 = *a1;
    *a1 = *a2;
    *a2 = v21;
    return result;
  }
  if (v10 > 5u) {
    v11 = -1;
  }
  else {
    v11 = GameData_1c1e81c_alt1[v10];
  }
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 640LL))(*a2);
  if ((unsigned __int8)result > 5u) {
    v14 = -1;
  }
  else {
    v14 = GameData_1c1e81c_alt1[(unsigned __int8)result];
  }
  v15 = *a1;
  if (v11 > v14) {
    *a1 = *a3;
  LABEL_39:
    *a3 = v15;
    return result;
  }
  *a1 = *a2;
  *a2 = v15;
  v19 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 640LL))(*a3);
  if (v19 > 5u) {
    v20 = -1;
  }
  else {
    v20 = GameData_1c1e81c_alt1[v19];
  }
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 640LL))(*a2);
  if ((unsigned __int8)result > 5u) {
    if (v20 <= -1) {
      return result;
    }
  }
  else if (v20 <=
           (signed __int32)GameData_1c1e81c_alt1[(unsigned __int8)result]) {
    return result;
  }
  v15 = *a2;
  *a2 = *a3;
  goto LABEL_39;
}

__int64 ProcTheaterCastingUnitMenu_192b110(_QWORD* a1, _QWORD* a2, _QWORD* a3,
                                           _QWORD* a4)
{
  unsigned __int8 v8;
  int v9;
  __int64 result;
  __int64 v11;
  unsigned __int8 v12;
  int v13;
  __int64 v14;
  unsigned __int8 v15;
  int v16;
  __int64 v17;

  ProcTheaterCastingUnitMenu_192ae90(a1, a2, a3);
  v8 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a4 + 640LL))(*a4);
  if (v8 > 5u) {
    v9 = -1;
  }
  else {
    v9 = GameData_1c1e81c_alt1[v8];
  }
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 640LL))(*a3);
  if ((unsigned __int8)result > 5u) {
    if (v9 <= -1) {
      return result;
    }
  }
  else if (v9 <=
           (signed __int32)GameData_1c1e81c_alt1[(unsigned __int8)result]) {
    return result;
  }
  v11 = *a3;
  *a3 = *a4;
  *a4 = v11;
  v12 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 640LL))(*a3);
  if (v12 > 5u) {
    v13 = -1;
  }
  else {
    v13 = GameData_1c1e81c_alt1[v12];
  }
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 640LL))(*a2);
  if ((unsigned __int8)result > 5u) {
    if (v13 <= -1) {
      return result;
    }
  }
  else if (v13 <=
           (signed __int32)GameData_1c1e81c_alt1[(unsigned __int8)result]) {
    return result;
  }
  v14 = *a2;
  *a2 = *a3;
  *a3 = v14;
  v15 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 640LL))(*a2);
  if (v15 > 5u) {
    v16 = -1;
  }
  else {
    v16 = GameData_1c1e81c_alt1[v15];
  }
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 640LL))(*a1);
  if ((unsigned __int8)result > 5u) {
    if (v16 <= -1) {
      return result;
    }
  }
  else if (v16 <=
           (signed __int32)GameData_1c1e81c_alt1[(unsigned __int8)result]) {
    return result;
  }
  v17 = *a1;
  *a1 = *a2;
  *a2 = v17;
  return result;
}

__int64 ProcTheaterCastingUnitMenu_192b2c0(_QWORD* a1, _QWORD* a2, _QWORD* a3,
                                           _QWORD* a4, _QWORD* a5)
{
  unsigned __int8 v10;
  int v11;
  __int64 result;
  __int64 v13;
  unsigned __int8 v14;
  int v15;
  __int64 v16;
  unsigned __int8 v17;
  int v18;
  __int64 v19;
  unsigned __int8 v20;
  int v21;
  __int64 v22;

  ProcTheaterCastingUnitMenu_192b110(a1, a2, a3, a4);
  v10 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a5 + 640LL))(*a5);
  if (v10 > 5u) {
    v11 = -1;
  }
  else {
    v11 = GameData_1c1e81c_alt1[v10];
  }
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a4 + 640LL))(*a4);
  if ((unsigned __int8)result > 5u) {
    if (v11 <= -1) {
      return result;
    }
  }
  else if (v11 <=
           (signed __int32)GameData_1c1e81c_alt1[(unsigned __int8)result]) {
    return result;
  }
  v13 = *a4;
  *a4 = *a5;
  *a5 = v13;
  v14 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a4 + 640LL))(*a4);
  if (v14 > 5u) {
    v15 = -1;
  }
  else {
    v15 = GameData_1c1e81c_alt1[v14];
  }
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 640LL))(*a3);
  if ((unsigned __int8)result > 5u) {
    if (v15 <= -1) {
      return result;
    }
  }
  else if (v15 <=
           (signed __int32)GameData_1c1e81c_alt1[(unsigned __int8)result]) {
    return result;
  }
  v16 = *a3;
  *a3 = *a4;
  *a4 = v16;
  v17 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a3 + 640LL))(*a3);
  if (v17 > 5u) {
    v18 = -1;
  }
  else {
    v18 = GameData_1c1e81c_alt1[v17];
  }
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 640LL))(*a2);
  if ((unsigned __int8)result > 5u) {
    if (v18 <= -1) {
      return result;
    }
  }
  else if (v18 <=
           (signed __int32)GameData_1c1e81c_alt1[(unsigned __int8)result]) {
    return result;
  }
  v19 = *a2;
  *a2 = *a3;
  *a3 = v19;
  v20 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 640LL))(*a2);
  if (v20 > 5u) {
    v21 = -1;
  }
  else {
    v21 = GameData_1c1e81c_alt1[v20];
  }
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 640LL))(*a1);
  if ((unsigned __int8)result > 5u) {
    if (v21 <= -1) {
      return result;
    }
  }
  else if (v21 <=
           (signed __int32)GameData_1c1e81c_alt1[(unsigned __int8)result]) {
    return result;
  }
  v22 = *a1;
  *a1 = *a2;
  *a2 = v22;
  return result;
}

bool ProcTheaterCastingUnitMenu_192b500(_QWORD* a1, _QWORD* a2)
{
  __int64 v4;
  unsigned __int8 v5;
  int v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  int v10;
  _QWORD* v11;
  unsigned __int8 v12;
  int v13;
  unsigned __int8 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  unsigned __int8 v18;
  int v19;
  unsigned __int8 v20;
  unsigned __int8 v21;
  __int64 v22;

  v4 = a2 - a1;
  if (v4 > 2) {
    switch (v4) {
    case 3LL:
      ProcTheaterCastingUnitMenu_192ae90(a1, a1 + 1, a2 - 1);
      return true;
    case 4LL:
      ProcTheaterCastingUnitMenu_192b110(a1, a1 + 1, a1 + 2, a2 - 1);
      return true;
    case 5LL:
      ProcTheaterCastingUnitMenu_192b2c0(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
      return true;
    default:
      break;
    }
  }
  else {
    if ((unsigned __int64)v4 < 2) {
      return true;
    }
    if (v4 == 2) {
      v5 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*(a2 - 1) + 640LL))(*(a2 - 1));
      if (v5 > 5u) {
        v6 = -1;
      }
      else {
        v6 = GameData_1c1e81c_alt1[v5];
      }
      v21 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a1 + 640LL))(*a1);
      if (v21 <= 5u) {
        if (v6 <= (signed __int32)GameData_1c1e81c_alt1[v21]) {
          return true;
        }
      }
      else if (v6 <= -1) {
        return true;
      }
      v22 = *a1;
      *a1 = *(a2 - 1);
      *(a2 - 1) = v22;
      return true;
    }
  }
  v7 = a1 + 2;
  ProcTheaterCastingUnitMenu_192ae90(a1, a1 + 1, a1 + 2);
  v8 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v9 = 0;
  v10 = 0;
  while (1) {
    v12 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v8 + 640LL))(*v8);
    v13 = v12 > 5u ? -1 : GameData_1c1e81c_alt1[v12];
    v14 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v7 + 640LL))(*v7);
    if (v14 > 5u) {
      break;
    }
    if (v13 > (signed __int32)GameData_1c1e81c_alt1[v14]) {
      goto LABEL_23;
    }
  LABEL_15:
    v7 = v8++;
    v9 += 8;
    if (v8 == a2) {
      return true;
    }
  }
  if (v13 <= -1) {
    goto LABEL_15;
  }
LABEL_23:
  v15 = *v8;
  v16 = v9;
  do {
    *(_QWORD*)((char*)a1 + v16 + 24) = *(_QWORD*)((char*)a1 + v16 + 16);
    if (v16 == -16) {
      v11 = a1;
      goto LABEL_14;
    }
    v18 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 640LL))(v15);
    if (v18 > 5u) {
      v19 = -1;
    }
    else {
      v19 = GameData_1c1e81c_alt1[v18];
    }
    v20 = (*(__int64 (**)(_QWORD))(**(_QWORD**)((char*)a1 + v16 + 8) + 640LL))(
        *(_QWORD*)((char*)a1 + v16 + 8));
    if (v20 <= 5u) {
      v17 = GameData_1c1e81c_alt1[v20];
    }
    else {
      v17 = -1;
    }
    v16 -= 8;
  } while (v19 > v17);
  v11 = (_QWORD*)((char*)a1 + v16 + 24);
LABEL_14:
  ++v10;
  *v11 = v15;
  if (v10 != 8) {
    goto LABEL_15;
  }
  return v8 + 1 == a2;
}

__int64

game_facility_anonymous_ProcTheaterCastingUnitMenu_OnUnitDecide_closure_Invoke()
{
  if (GameData_22420c8 != 0) {
    *(_DWORD*)(GameData_22420c8 + 152) = 2;
  }
  return 4;
}

__int64

game_facility_anonymous_ProcTheaterCastingUnitMenu_CreateBind_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;

  v2 = *(_QWORD*)(a1 + 16);
  v3 = *a2;
  v4 = **(_QWORD**)(a1 + 8);
  v5 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 112, 16, 0);
  *(_WORD*)(v5 + 16) = 0;
  *(_DWORD*)(v5 + 40) = 0;
  *(_QWORD*)(v5 + 48) = 0;
  *(_QWORD*)(v5 + 56) = 0;
  *(_QWORD*)(v5 + 64) = 0;
  *(_QWORD*)(v5 + 72) = 0;
  *(_QWORD*)(v5 + 88) = v3;
  *(_QWORD*)(v5 + 104) = v2;
  *(_WORD*)(v5 + 80) = 257;
  *(_BYTE*)(v5 + 82) = 1;
  *(_WORD*)(v5 + 96) = 259;
  *(_QWORD*)v5 = game_facility_anonymous_CastingUnitMenuItem_vtable;
  *(_QWORD*)(v5 + 8) = 0;
  return BasicMenuCursor_16e0c00(v4, v5);
}

#pragma GCC visibility pop
