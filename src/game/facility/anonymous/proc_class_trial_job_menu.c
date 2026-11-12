#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void GameRoutine_95e2c0(PSEUDO_X8, _QWORD, _QWORD);
__int64 GameRoutine_15e0640(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_960100(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_facility_EmptyClassChangeJobMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_ClassTrialJobMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcClassTrialJobMenu_Unknown128_alt1(__int64 a1) __asm__(
    "ProcClassTrialJobMenu_Unknown128");
__int64 GameRoutine_16b41a0(__int64);
__int64 GameRoutine_6c2b50(_QWORD);
__int64 GameRoutine_fa6720(void);
__int64 LayoutAccessor_1566d90(_QWORD, _QWORD);
__int64 LayoutAccessor_1567000(_QWORD, _QWORD);
__int64 ProcInst_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(_QWORD, _QWORD, _QWORD,
                                                    _QWORD);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_IsVibrationEnabled(_QWORD);
extern _UNKNOWN* GameData_212c730;
extern __int64 (*GameData_208d178[])();
extern __int64 (*game_facility_anonymous_ProcClassTrialJobMenu_vtable[])();
extern __int64 (*game_menu_GameMenuImpl_ImplUnknown00_ptr[])();
extern __int64 (*game_menu_MenuInput_InputUnknown00_ptr[])();
extern __int64 GameData_208cc80;
extern __int64 game_facility_FacilityView_instance_;
extern __int64 game_g_game_setting;
extern __int64 game_gameui_Footer_instance_;
extern __int64 game_gameui_Header_instance_;
extern __int64* GameData_212c868;
extern __int64* GameData_212dcd0;
extern __int64* GameData_212e008[9];
extern __int64* GameData_2131b70[3];
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
_QWORD*
game_facility_anonymous_ProcClassTrialJobMenu_CreateBind(__int64 a1, __int64 a2,
                                                         unsigned int a3);
__int64 game_facility_anonymous_ProcClassTrialJobMenu_ACall_closure_Invoke();
__int64 game_facility_anonymous_ProcClassTrialJobMenu_CreateBind_closure_Invoke(
    __int64 a1, _QWORD* a2);
__attribute__((swiftcall)) void game_95e2c0(PSEUDO_X8, __int64 result, __int64);
__int64 BasicMenu_16e1f40(__int64 result, __int64, __int64);
__int64 GameRoutine_13fa790(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16ae640(_QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_654050(_QWORD, _QWORD);
__int64 GameRoutine_6680e0(_QWORD, _QWORD);
__int64 GameRoutine_67ed20(_QWORD);
__int64 GameRoutine_95e0e0(_QWORD);
__int64 GameRoutine_a4dbe0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 Util_1588700(__int64*, __int64, __int64);
__int64 game_16ad210(__int64 result, __int64, char, __int64);
__int64 game_97b2f0(_QWORD);
__int64 game_menu_Dialog__CreateBind_game_menu_Dialog(_QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 strlen(_QWORD);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
__n128 GameRoutine_16b57f0(__int64*);
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_208cca8[])();
extern __int64 (*GameData_208cd28[])();
extern __int64 (*GameData_208cda8[])();
extern __int64 (*GameData_208d078[])();
extern __int64 (*game_sound_PlayDecideLightSe_ptr[6])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d2b8;
extern __int64* GameData_212e348;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64* msg_MessageManager_instance__ptr[2];
extern char* game_facility_kJobRankMids[6];
extern char** msg_MessageManager_empty_text__ptr;
void __attribute__((noreturn)) String_60a1d0(void);
__int64 ProcClassTrialJobMenu_Unknown88(__int64* a1);
__int64 game_facility_anonymous_ProcClassTrialJobMenu_ACall(__int64 a1);
__int64 game_facility_anonymous_ProcClassTrialJobMenu_SortAndFilter(__int64 a1);
bool game_facility_anonymous_ProcClassTrialJobMenu_SortAndFilter_closure_Invoke(
    __int64 a1, __int64* a2);
__attribute__((swiftcall)) void
game_facility_anonymous_ProcClassTrialJobMenu_SetupRankPageTab_closure_Invoke(
    PSEUDO_X8 x8_, __int64 a1);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 GameRoutine_960100_alt1() __asm__("GameRoutine_960100");
__int64 UnitUtil_15e0640(__int64, __int64, int, int, char);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
char* GameRoutine_a4dbe0_alt1(__int64, _BYTE*,
                              char) __asm__("GameRoutine_a4dbe0");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void BasicMenuCursor_16e0c00(_QWORD*, __int64);
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void ProcClassTrialJobMenu_Unknown128(_QWORD* a1);
__attribute__((swiftcall)) void GameRoutine_1587740(PSEUDO_X8, __int64*,
                                                    _QWORD*);
__int64 JobIcon_19a9be0(__int64, __int64, __int64);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64
game_facility_anonymous_ProcClassTrialJobMenu_ACall_closure_Invoke_16b9fc0(
    __int64 a1, __int64* a2);

__int64 ProcClassTrialJobMenu_Unknown88(__int64* a1)
{
  __int64 result;
  __int64 v3;
  char v4;
  __int16 v5[2];
  __int16 v6;

  GameRoutine_16b57f0(a1);
  result = a1[42];
  if (result != 0) {
    result = __dynamic_cast(result, GameData_212e008[0], &GameData_208cc80, 0);
    if (result != 0) {
      v3 = result;
      Util_1588700(a1 + 106, a1[133], *(_QWORD*)(result + 96));
      game_95e2c0((void*)(&v6), a1[133], *(_QWORD*)(v3 + 96));
      if ((v6 & 0x200) != 0) {
        game_95e2c0((void*)(v5), a1[133], *(_QWORD*)(v3 + 96));
        v4 = (v5[0] & 0x400) != 0;
      }
      else {
        v4 = 1;
      }
      return ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 106),
                                              (__int64)"N_TrialInfo", v4);
    }
  }
  return result;
}

__int64 game_facility_anonymous_ProcClassTrialJobMenu_ACall(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  _QWORD* v4;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  int v23;
  unsigned int v24;
  unsigned int v25;
  int v26;
  __int64 v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD v38[4];
  _QWORD* v39;
  _QWORD v40[4];
  _QWORD* v41;
  _QWORD v42[4];
  _QWORD* v43;
  const char* v44;

  v2 = *(_QWORD*)(a1 + 336);
  if (v2 != 0) {
    v3 = __dynamic_cast(v2, GameData_212e008[0], &GameData_208cc80, 0);
    if (v3 != 0) {
      v4 = (_QWORD*)v3;
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v3 + 464LL))(v3) & 1) != 0) {
        v5 = GameData_212dcd0;
        v6 = *GameData_212dcd0;
        if (*GameData_212dcd0 != 0) {
          v7 = *(__int64**)(v6 + 48);
          if (*(__int64**)(v6 + 56) == v7 || (v8 = *v7, *v7 == 0) ||
              ((v9 = *(unsigned int*)(v6 + 20)) & 0x80000000) != 0 ||
              (v10 = *(_QWORD*)(*GameData_212c868 + 64),
               (int)v9 >=
                   (int)((unsigned __int64)(*(_QWORD*)(*GameData_212c868 + 72) -
                                            v10) >>
                         3)) ||
              *(_QWORD*)(v10 + 8 * v9) == 0) {
            v12 = 0;
          }
          else {
            v11 = GameRoutine_95e0e0(v8);
            v6 = *v5;
            if (*v5 == 0) {
              goto LABEL_17;
            }
            v12 = v11 & ~(v11 >> 31);
          }
          *(_DWORD*)(v6 + 28) = v12;
        }
      LABEL_17:
        v44 = "MID_ClassTrialMenu_Confirm";
        v42[0] = GameData_208cca8;
        v39 = v38;
        v43 = v42;
        v41 = v40;
        v40[0] = GameData_208cd28;
        v38[0] = GameData_208cd28;
        v14 = GameRoutine_13fa790(a1, &v44, v42, v40, v38);
        if (v39 == v38) {
          v15 = 32;
        }
        else {
          if (v39 == nullptr) {
            goto LABEL_22;
          }
          v15 = 40;
        }
        (*(void (**)(__int64))(*v39 + v15))((__int64)v39);
      LABEL_22:
        if (v41 == v40) {
          v16 = 32;
        }
        else {
          if (v41 == nullptr) {
            goto LABEL_27;
          }
          v16 = 40;
        }
        (*(void (**)(__int64))(*v41 + v16))((__int64)v41);
      LABEL_27:
        if (v43 == v42) {
          v17 = 32;
        }
        else {
          if (v43 == nullptr) {
            goto LABEL_32;
          }
          v17 = 40;
        }
        (*(void (**)(__int64))(*v43 + v17))((__int64)v43);
      LABEL_32:
        v41 = v40;
        v43 = v42;
        v40[0] = GameData_212d2b8 + 2;
        v40[1] = game_sound_PlayDecideLightSe_ptr[0];
        v42[0] = GameData_212d2b8 + 2;
        v42[1] = game_sound_PlayDecideLightSe_ptr[0];
        GameRoutine_654050(v42, v14 + 1152);
        if (v43 == v42) {
          v18 = 32;
        }
        else {
          if (v43 == nullptr) {
            goto LABEL_37;
          }
          v18 = 40;
        }
        (*(void (**)(__int64))(*v43 + v18))((__int64)v43);
      LABEL_37:
        if (v41 == v40) {
          v19 = 32;
        }
        else {
          if (v41 == nullptr) {
            goto LABEL_42;
          }
          v19 = 40;
        }
        (*(void (**)(__int64))(*v41 + v19))((__int64)v41);
      LABEL_42:
        v20 = *(_QWORD*)(v4[12] + 480LL);
        if (v20 != 0) {
          v21 = *(unsigned __int16*)(v20 + 16);
          if (*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                   8 * v21) +
                        73LL) == 17) {
            nn_os_LockMutex(&game_g_random_mutex);
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
            nn_os_UnlockMutex(&game_g_random_mutex);
            LODWORD(v20) =
                (16 * ((_WORD)v26 -
                       1000 * (unsigned __int16)((v26 & 0x7FFFFFFFu) / 0x3E8)) +
                 16) &
                    0x3FF0 |
                1;
          }
          else {
            LODWORD(v20) = 1;
          }
        }
        else {
          LOWORD(v21) = 0;
        }
        *(_DWORD*)(v14 + 1584) = v20;
        v30 = *v5;
        *(_WORD*)(v14 + 1580) = v21;
        *(_WORD*)(v14 + 1582) = 0;
        v32 = v30 + 48;
        v31 = *(__int64**)(v30 + 48);
        if (*(__int64**)(v32 + 8) == v31) {
          v33 = 0;
        }
        else {
          v33 = *v31;
          if (*v31 != 0) {
            if (*(_BYTE*)(v33 + 2136) != 0) {
              v34 = game_97b2f0(v33 + 2104);
            }
            else {
              v34 = GameRoutine_67ed20(*(_QWORD*)(v33 + 392));
            }
            game_16ad210(v14, *(_QWORD*)(v33 + 392), 6, v34);
          }
        }
        v35 = v4[12];
        v36 = (*(__int64 (**)(_QWORD*))(*v4 + 24LL))(v4);
        if (v36 != 0) {
          GameRoutine_60a020(v14 + 1496, v36);
        }
        v40[2] = v35;
        v42[2] = v35;
        v40[0] = GameData_208cda8;
        v40[1] = v33;
        v41 = v40;
        v42[0] = GameData_208cda8;
        v42[1] = v33;
        v43 = v42;
        GameRoutine_16ae640(v42, v14 + 1520);
        if (v43 == v42) {
          v37 = 32;
        }
        else {
          if (v43 == nullptr) {
            goto LABEL_64;
          }
          v37 = 40;
        }
        (*(void (**)(__int64))(*v43 + v37))((__int64)v43);
      LABEL_64:
        v28 = v41;
        if (v41 != v40) {
          goto LABEL_65;
        }
      LABEL_48:
        v29 = 32;
      LABEL_67:
        (*(void (**)(__int64))(*v28 + v29))((__int64)v28);
        return 12;
      }
      if (*(_BYTE*)(v4[12] + 505LL) != 0 &&
          (unsigned int)GameRoutine_95e0e0(*(_QWORD*)(a1 + 1064)) - 100 >=
              0xFFFFFF9D) {
        v40[0] = "MID_ClassTrialMenu_PassRateFull_Message";
        v27 = game_menu_Dialog__CreateBind_game_menu_Dialog(a1, v40);
        if (v27 == 0) {
          return 12;
        }
        v43 = nullptr;
        GameRoutine_6680e0(v42, v27 + 1248);
        v28 = v43;
        if (v43 == v42) {
          goto LABEL_48;
        }
      LABEL_65:
        if (v28 != nullptr) {
          v29 = 40;
          goto LABEL_67;
        }
        return 12;
      }
    }
  }
  return 1;
}

void ProcClassTrialJobMenu_Unknown128(_QWORD* a1)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v8;
  __int64* v9;
  __int64* v10;
  bool v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64* v16;
  bool v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  bool v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  bool v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64* v33;
  __int64* v34;
  bool v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64* v39;
  __int64* v40;
  bool v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
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
  int v57;
  struct {
    __int64* v58;
    __int64 v59;
    __int64 v60;
    __int64* v61;
    __int64 v62;
    __int64 v63;
    __int64* v64;
    __int64 v65;
    __int64 v66;
    __int64* v67;
    __int64 v68;
    __int64 v69;
    __int64* v70;
    __int64 v71;
    __int64 v72;
    __int64* v73;
    __int64* v74;
    __int64 v75;
  } v58_;
  __int16 v76[2];
  __int16 v77[2];

  v2 = (__int64*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 104, 16, 0);
  *(_WORD*)(v3 + 16) = 0;
  *(_DWORD*)(v3 + 40) = 0;
  v4 = v3;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)(v3 + 96) = 0;
  *(_WORD*)(v3 + 80) = 257;
  *(_BYTE*)(v3 + 82) = 1;
  *(_QWORD*)v3 = game_facility_EmptyClassChangeJobMenuItem_vtable;
  v5 = a1[43];
  if (v5 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  *(_QWORD*)(v4 + 8) = a1;
  a1[43] = v4;
  v57 = (unsigned __int8)GameRoutine_960100_alt1();
  if (v57 != 0) {
    v6 = 1;
    do {
      v8 = a1[133];
      v58_.v74 = nullptr;
      v58_.v75 = 0;
      v58_.v72 = 0;
      v58_.v73 = nullptr;
      v58_.v70 = nullptr;
      v58_.v71 = 0;
      v58_.v68 = 0;
      v58_.v69 = 0;
      v58_.v66 = 0;
      v58_.v67 = nullptr;
      v58_.v64 = nullptr;
      v58_.v65 = 0;
      v58_.v62 = 0;
      v58_.v63 = 0;
      v58_.v60 = 0;
      v58_.v61 = nullptr;
      v58_.v58 = nullptr;
      v58_.v59 = 0;
      if ((UnitUtil_15e0640((__int64)&v58_.v58, v8, v6, 1, 0) & 1) != 0) {
        v9 = v58_.v58;
        v10 = (__int64*)v58_.v59;
        while (v9 != v10) {
          v12 = *v9;
          v13 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
          *(_WORD*)(v13 + 16) = 0;
          v14 = a1[133];
          *(_DWORD*)(v13 + 40) = 0;
          *(_QWORD*)(v13 + 48) = 0;
          *(_QWORD*)(v13 + 56) = 0;
          *(_QWORD*)(v13 + 64) = 0;
          *(_QWORD*)(v13 + 72) = 0;
          *(_WORD*)(v13 + 80) = 257;
          *(_BYTE*)(v13 + 82) = 1;
          *(_QWORD*)v13 = game_facility_anonymous_ClassTrialJobMenuItem_vtable;
          *(_QWORD*)(v13 + 8) = 0;
          *(_BYTE*)(v13 + 104) = 0;
          *(_QWORD*)(v13 + 88) = v14;
          *(_QWORD*)(v13 + 96) = v12;
          game_95e2c0((void*)(v77), v14, v12);
          if ((v77[0] & 0x200) != 0) {
            game_95e2c0((void*)(v76), *(_QWORD*)(v13 + 88),
                        *(_QWORD*)(v13 + 96));
            v11 = (v76[0] & 0x400) == 0;
          }
          else {
            v11 = false;
          }
          *(_BYTE*)(v13 + 104) = v11;
          BasicMenuCursor_16e0c00(a1, v13);
          ++v9;
        }
        v15 = v58_.v61;
        v16 = (__int64*)v58_.v62;
        while (v15 != v16) {
          v18 = *v15;
          v19 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
          *(_WORD*)(v19 + 16) = 0;
          v20 = a1[133];
          *(_DWORD*)(v19 + 40) = 0;
          *(_QWORD*)(v19 + 48) = 0;
          *(_QWORD*)(v19 + 56) = 0;
          *(_QWORD*)(v19 + 64) = 0;
          *(_QWORD*)(v19 + 72) = 0;
          *(_WORD*)(v19 + 80) = 257;
          *(_BYTE*)(v19 + 82) = 1;
          *(_QWORD*)v19 = game_facility_anonymous_ClassTrialJobMenuItem_vtable;
          *(_QWORD*)(v19 + 8) = 0;
          *(_BYTE*)(v19 + 104) = 0;
          *(_QWORD*)(v19 + 88) = v20;
          *(_QWORD*)(v19 + 96) = v18;
          game_95e2c0((void*)(v77), v20, v18);
          if ((v77[0] & 0x200) != 0) {
            game_95e2c0((void*)(v76), *(_QWORD*)(v19 + 88),
                        *(_QWORD*)(v19 + 96));
            v17 = (v76[0] & 0x400) == 0;
          }
          else {
            v17 = false;
          }
          *(_BYTE*)(v19 + 104) = v17;
          BasicMenuCursor_16e0c00(a1, v19);
          ++v15;
        }
        v21 = v58_.v64;
        v22 = (__int64*)v58_.v65;
        while (v21 != v22) {
          v24 = *v21;
          v25 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
          *(_WORD*)(v25 + 16) = 0;
          v26 = a1[133];
          *(_DWORD*)(v25 + 40) = 0;
          *(_QWORD*)(v25 + 48) = 0;
          *(_QWORD*)(v25 + 56) = 0;
          *(_QWORD*)(v25 + 64) = 0;
          *(_QWORD*)(v25 + 72) = 0;
          *(_WORD*)(v25 + 80) = 257;
          *(_BYTE*)(v25 + 82) = 1;
          *(_QWORD*)v25 = game_facility_anonymous_ClassTrialJobMenuItem_vtable;
          *(_QWORD*)(v25 + 8) = 0;
          *(_BYTE*)(v25 + 104) = 0;
          *(_QWORD*)(v25 + 88) = v26;
          *(_QWORD*)(v25 + 96) = v24;
          game_95e2c0((void*)(v77), v26, v24);
          if ((v77[0] & 0x200) != 0) {
            game_95e2c0((void*)(v76), *(_QWORD*)(v25 + 88),
                        *(_QWORD*)(v25 + 96));
            v23 = (v76[0] & 0x400) == 0;
          }
          else {
            v23 = false;
          }
          *(_BYTE*)(v25 + 104) = v23;
          BasicMenuCursor_16e0c00(a1, v25);
          ++v21;
        }
        v27 = v58_.v67;
        v28 = (__int64*)v58_.v68;
        while (v27 != v28) {
          v30 = *v27;
          v31 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
          *(_WORD*)(v31 + 16) = 0;
          v32 = a1[133];
          *(_DWORD*)(v31 + 40) = 0;
          *(_QWORD*)(v31 + 48) = 0;
          *(_QWORD*)(v31 + 56) = 0;
          *(_QWORD*)(v31 + 64) = 0;
          *(_QWORD*)(v31 + 72) = 0;
          *(_WORD*)(v31 + 80) = 257;
          *(_BYTE*)(v31 + 82) = 1;
          *(_QWORD*)v31 = game_facility_anonymous_ClassTrialJobMenuItem_vtable;
          *(_QWORD*)(v31 + 8) = 0;
          *(_BYTE*)(v31 + 104) = 0;
          *(_QWORD*)(v31 + 88) = v32;
          *(_QWORD*)(v31 + 96) = v30;
          game_95e2c0((void*)(v77), v32, v30);
          if ((v77[0] & 0x200) != 0) {
            game_95e2c0((void*)(v76), *(_QWORD*)(v31 + 88),
                        *(_QWORD*)(v31 + 96));
            v29 = (v76[0] & 0x400) == 0;
          }
          else {
            v29 = false;
          }
          *(_BYTE*)(v31 + 104) = v29;
          BasicMenuCursor_16e0c00(a1, v31);
          ++v27;
        }
        v33 = v58_.v70;
        v34 = (__int64*)v58_.v71;
        while (v33 != v34) {
          v36 = *v33;
          v37 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
          *(_WORD*)(v37 + 16) = 0;
          v38 = a1[133];
          *(_DWORD*)(v37 + 40) = 0;
          *(_QWORD*)(v37 + 48) = 0;
          *(_QWORD*)(v37 + 56) = 0;
          *(_QWORD*)(v37 + 64) = 0;
          *(_QWORD*)(v37 + 72) = 0;
          *(_WORD*)(v37 + 80) = 257;
          *(_BYTE*)(v37 + 82) = 1;
          *(_QWORD*)v37 = game_facility_anonymous_ClassTrialJobMenuItem_vtable;
          *(_QWORD*)(v37 + 8) = 0;
          *(_BYTE*)(v37 + 104) = 0;
          *(_QWORD*)(v37 + 88) = v38;
          *(_QWORD*)(v37 + 96) = v36;
          game_95e2c0((void*)(v77), v38, v36);
          if ((v77[0] & 0x200) != 0) {
            game_95e2c0((void*)(v76), *(_QWORD*)(v37 + 88),
                        *(_QWORD*)(v37 + 96));
            v35 = (v76[0] & 0x400) == 0;
          }
          else {
            v35 = false;
          }
          *(_BYTE*)(v37 + 104) = v35;
          BasicMenuCursor_16e0c00(a1, v37);
          ++v33;
        }
        v39 = v58_.v73;
        v40 = v58_.v74;
        if (v58_.v73 == v58_.v74) {
          goto LABEL_44;
        }
        do {
          v42 = *v39;
          v43 = fw_memory_HeapManager_Allocate_alt1(*v2, 112, 16, 0);
          *(_WORD*)(v43 + 16) = 0;
          v44 = a1[133];
          *(_DWORD*)(v43 + 40) = 0;
          *(_QWORD*)(v43 + 48) = 0;
          *(_QWORD*)(v43 + 56) = 0;
          *(_QWORD*)(v43 + 64) = 0;
          *(_QWORD*)(v43 + 72) = 0;
          *(_WORD*)(v43 + 80) = 257;
          *(_BYTE*)(v43 + 82) = 1;
          *(_QWORD*)v43 = game_facility_anonymous_ClassTrialJobMenuItem_vtable;
          *(_QWORD*)(v43 + 8) = 0;
          *(_BYTE*)(v43 + 104) = 0;
          *(_QWORD*)(v43 + 88) = v44;
          *(_QWORD*)(v43 + 96) = v42;
          game_95e2c0((void*)(v77), v44, v42);
          if ((v77[0] & 0x200) != 0) {
            game_95e2c0((void*)(v76), *(_QWORD*)(v43 + 88),
                        *(_QWORD*)(v43 + 96));
            v41 = (v76[0] & 0x400) == 0;
          }
          else {
            v41 = false;
          }
          *(_BYTE*)(v43 + 104) = v41;
          BasicMenuCursor_16e0c00(a1, v43);
          ++v39;
        } while (v39 != v40);
      }
      v39 = v58_.v73;
    LABEL_44:
      if (v39 != nullptr) {
        v45 = *v2;
        v58_.v74 = v39;
        if (*(_QWORD*)(v45 + 200) != 0) {
          v46 = 128;
        }
        else {
          v46 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v45 + v46, (__int64)v39);
      }
      if (v58_.v70 != nullptr) {
        v47 = *v2;
        v58_.v71 = (__int64)v58_.v70;
        if (*(_QWORD*)(v47 + 200) != 0) {
          v48 = 128;
        }
        else {
          v48 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v47 + v48, (__int64)v58_.v70);
      }
      if (v58_.v67 != nullptr) {
        v49 = *v2;
        v58_.v68 = (__int64)v58_.v67;
        if (*(_QWORD*)(v49 + 200) != 0) {
          v50 = 128;
        }
        else {
          v50 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v49 + v50, (__int64)v58_.v67);
      }
      if (v58_.v64 != nullptr) {
        v51 = *v2;
        v58_.v65 = (__int64)v58_.v64;
        if (*(_QWORD*)(v51 + 200) != 0) {
          v52 = 128;
        }
        else {
          v52 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v51 + v52, (__int64)v58_.v64);
      }
      if (v58_.v61 != nullptr) {
        v53 = *v2;
        v58_.v62 = (__int64)v58_.v61;
        if (*(_QWORD*)(v53 + 200) != 0) {
          v54 = 128;
        }
        else {
          v54 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v53 + v54, (__int64)v58_.v61);
      }
      if (v58_.v58 != nullptr) {
        v55 = *v2;
        v58_.v59 = (__int64)v58_.v58;
        if (*(_QWORD*)(v55 + 200) != 0) {
          v56 = 128;
        }
        else {
          v56 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(v55 + v56, (__int64)v58_.v58);
      }
    } while (v6++ != v57);
  }
}

__int64 game_facility_anonymous_ProcClassTrialJobMenu_SortAndFilter(__int64 a1)
{
  __int64 v1;
  __int64 result;
  __int64 v3;
  struct {
    _BYTE v4[32];
    _BYTE* v5;
  } v4_;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;

  v4_.v5 = nullptr;
  v6_.v6[0] = GameData_208d078;
  v6_.v6[1] = a1;
  v6_.v7 = v6_.v6;
  BasicMenu_16e1f40(a1, (__int64)v6_.v6, (__int64)v4_.v4);
  if (v4_.v5 == v4_.v4) {
    v1 = 32;
  }
  else {
    if (v4_.v5 == nullptr) {
      goto LABEL_6;
    }
    v1 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v4_.v5 + v1))((__int64)v4_.v5);
LABEL_6:
  result = (__int64)v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v3 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v3 = 40;
  }
  return (*(__int64 (**)(__int64))(*v6_.v7 + v3))((__int64)v6_.v7);
}

__int64 game_facility_anonymous_ProcClassTrialJobMenu_ACall_closure_Invoke()
{
  if (game_facility_FacilityView_instance_ != 0) {
    *(_DWORD*)(game_facility_FacilityView_instance_ + 152) = 5;
  }
  if (game_gameui_Header_instance_ != 0) {
    LayoutAccessor_1566d90(game_gameui_Header_instance_, 0);
  }
  if (game_gameui_Footer_instance_ != 0) {
    LayoutAccessor_1567000(game_gameui_Footer_instance_, 0);
  }
  return 6;
}

__int64

game_facility_anonymous_ProcClassTrialJobMenu_ACall_closure_Invoke_16b9fc0(
    __int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  _QWORD v7[2];
  struct {
    __int64 v8;
    __int64 v9;
  } v8_;

  LayoutAccessor_1562cf0((__int64)a2, "JobTrial");
  v7[0] = "L_Job";
  v7[1] = 5;
  GameRoutine_1587740((void*)(&v8_.v8), a2, v7);
  result = v8_.v9;
  if (v8_.v9 != 0) {
    v5 = std___1___shared_weak_count_lock(v8_.v9);
    v6 = v8_.v8;
    result = v8_.v9;
    if (v8_.v9 != 0) {
      result = std___1___shared_weak_count___release_weak(v8_.v9);
    }
    if (v5 != 0 && v6 != 0) {
      *(_BYTE*)(v6 + 1106) = 1;
      JobIcon_19a9be0(v6, *(_QWORD*)(a1 + 8), *(_QWORD*)(a1 + 16));
      result =
          ui_LayoutAccessor_SetPaneVisible((__int64)a2, (__int64)"L_Job", 1);
    }
    else if (v5 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      return std___1___shared_weak_count___release_weak(v5);
    }
  }
  return result;
}

bool game_facility_anonymous_ProcClassTrialJobMenu_SortAndFilter_closure_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v7;
  __int64 v8;
  __int16 v10;

  v2 = *a2;
  if (*a2 == 0) {
    return false;
  }
  v3 = *(_QWORD*)(a1 + 8);
  v4 = *(_QWORD*)(v2 + 96);
  v5 = *(_QWORD*)(v3 + 1064);
  if (v5 == 0 || v4 == 0) {
    return false;
  }
  game_95e2c0((void*)(&v10), v5, v4);
  if ((v10 & 1) != 0 || (v10 & 0xA00) == 0 && (v10 & 0xC0) != 0) {
    return false;
  }
  v7 = *(_DWORD*)(v3 + 660);
  v8 = *(_QWORD*)(v3 + 672);
  if (v7 < (unsigned __int64)((*(_QWORD*)(v3 + 680) - v8) >> 2)) {
    v7 = *(_DWORD*)(v8 + 4LL * v7);
  }
  return *(unsigned __int8*)(*(_QWORD*)(v2 + 96) + 49LL) == (unsigned __int8)v7;
}

__attribute__((swiftcall)) void

game_facility_anonymous_ProcClassTrialJobMenu_SetupRankPageTab_closure_Invoke(
    PSEUDO_X8 x8_, __int64 a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  int v4;
  __int64 v5;
  __int64 v6;
  char* v7;
  __int64* v8;
  const char** v9;
  char* v10;
  const char* v11;
  char* v12;
  const char* v13;
  unsigned __int64 result;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = *(_DWORD*)(v2 + 660);
  v5 = *(_QWORD*)(v2 + 680);
  v6 = *(_QWORD*)(v2 + 672);
  if (v4 < (unsigned __int64)((v5 - v6) >> 2)) {
    LOBYTE(v4) = *(_BYTE*)(v6 + 4LL * v4);
  }
  v7 = game_facility_kJobRankMids[(unsigned __int8)v4];
  v8 = msg_MessageManager_instance__ptr[0];
  v9 = (const char**)msg_MessageManager_empty_text__ptr;
  if (*v7 != 0) {
    v10 = GameRoutine_a4dbe0_alt1(*msg_MessageManager_instance__ptr[0], v7, 0);
  }
  else {
    v10 = *msg_MessageManager_empty_text__ptr;
  }
  if (v10 != nullptr) {
    v11 = v10;
  }
  else {
    v11 = *v9;
  }
  GameRoutine_60a020_alt1(*v8 + 14704, v11);
  v12 = GameRoutine_a4dbe0_alt1(*v8, "MID_ClassTrialMenu_JobRankSelect", 0);
  if (v12 != nullptr) {
    v13 = v12;
  }
  else {
    v13 = *v9;
  }
  result = strlen_alt1(v13);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0_alt1();
  }
  v15 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (result | 7) + 1;
    }
    v18 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v17, 16, 0);
    a2[1] = v15;
    a2[2] = v18;
    *a2 = v17 | 1;
    v16 = v18;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v16 = (__int64)a2 + 1;
    if (result == 0) {
      goto LABEL_21;
    }
  }
  result = memmove_alt1(v16, (__int64)v13, v15);
LABEL_21:
  *(_BYTE*)(v16 + v15) = 0;
  {
    result;
    return;
  }
}

__int64 game_facility_anonymous_ProcClassTrialJobMenu_CreateBind_closure_Invoke(
    __int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;

  v2 = *a2;
  if (((*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 40LL))(*a2) & 1) != 0 &&
      *(_QWORD*)(a1 + 8) == *(_QWORD*)(v2 + 96)) {
    v5 = *(_QWORD*)(v2 + 8);
    v6 = *(_QWORD*)(v5 + 336);
    if (v6 != v2) {
      if (v6 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 168LL))(v6);
      }
      *(_QWORD*)(v5 + 336) = v2;
      _ZN4game4menu9BasicMenu13Unknown16dea40Ebbb(v5, 0, 1, 0);
      v7 = *(_QWORD*)(v5 + 336);
      if (v7 == 0) {
        v8 = 4;
      LABEL_15:
        *(_DWORD*)(v5 + 356) = *(_DWORD*)(v5 + 356) & 0xFFFFFFFB | v8;
        return 1;
      }
      (*(void (**)(__int64))(*(_QWORD*)v7 + 160LL))(v7);
      game_IsVibrationEnabled(game_g_game_setting + 712);
      v6 = *(_QWORD*)(v5 + 336);
    }
    v8 = 4;
    if (v6 != 0) {
      if (((*(__int64 (**)(__int64))(*(_QWORD*)v6 + 120LL))(v6) & 1) != 0) {
        v8 = 4;
      }
      else {
        v8 = 0;
      }
    }
    goto LABEL_15;
  }
  return 0;
}

#pragma GCC visibility pop
