#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_95e2c0(_QWORD* __return_ptr, _QWORD, _QWORD);
__int64 GameRoutine_15e0640(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_16e0c00(_QWORD, _QWORD);
__int64 GameRoutine_960100(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_facility_EmptyClassChangeJobMenuItem_vtable[])();
extern __int64 (*game_facility_anonymous_ClassTrialJobMenuItem_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 ProcClassTrialJobMenu_Unknown128(__int64 a1);
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

__int64 ProcClassTrialJobMenu_Unknown128(__int64 a1)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  unsigned int v7;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  bool v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  bool v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64* v22;
  __int64* v23;
  bool v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64* v29;
  bool v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64* v34;
  __int64* v35;
  bool v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  _QWORD* v41;
  bool v42;
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
  __int64 v57;
  int v58;
  __int64* v59;
  __int64* v60;
  __int64 v61;
  __int64* v62;
  __int64* v63;
  __int64 v64;
  __int64* v65;
  __int64* v66;
  __int64 v67;
  __int64* v68;
  __int64* v69;
  __int64 v70;
  __int64* v71;
  __int64* v72;
  __int64 v73;
  _QWORD* v74;
  _QWORD* v75;
  __int64 v76;
  __int64 v77;

  v2 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      104, 16, 0);
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
  v5 = *(_QWORD*)(a1 + 344);
  if (v5 != 0) {
    v5 = (*(__int64 (**)(__int64))(*(_QWORD*)v5 + 8LL))(v5);
  }
  *(_QWORD*)(v4 + 8) = a1;
  *(_QWORD*)(a1 + 344) = v4;
  result = GameRoutine_960100(v5);
  v58 = (unsigned __int8)result;
  if ((_BYTE)result != 0) {
    v7 = 1;
    do {
      v9 = *(_QWORD*)(a1 + 1064);
      v75 = nullptr;
      v76 = 0;
      v73 = 0;
      v74 = nullptr;
      v71 = nullptr;
      v72 = nullptr;
      v69 = nullptr;
      v70 = 0;
      v67 = 0;
      v68 = nullptr;
      v65 = nullptr;
      v66 = nullptr;
      v63 = nullptr;
      v64 = 0;
      v61 = 0;
      v62 = nullptr;
      v59 = nullptr;
      v60 = nullptr;
      result = GameRoutine_15e0640(&v59, v9, v7, 1, 0);
      if ((result & 1) != 0) {
        v10 = v59;
        v11 = v60;
        while (v10 != v11) {
          v13 = *v10;
          v14 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
          *(_WORD*)(v14 + 16) = 0;
          v15 = *(_QWORD*)(a1 + 1064);
          *(_DWORD*)(v14 + 40) = 0;
          *(_QWORD*)(v14 + 48) = 0;
          *(_QWORD*)(v14 + 56) = 0;
          *(_QWORD*)(v14 + 64) = 0;
          *(_QWORD*)(v14 + 72) = 0;
          *(_WORD*)(v14 + 80) = 257;
          *(_BYTE*)(v14 + 82) = 1;
          *(_QWORD*)v14 = game_facility_anonymous_ClassTrialJobMenuItem_vtable;
          *(_QWORD*)(v14 + 8) = 0;
          *(_BYTE*)(v14 + 104) = 0;
          *(_QWORD*)(v14 + 88) = v15;
          *(_QWORD*)(v14 + 96) = v13;
          GameRoutine_95e2c0((__int64*)((char*)&v77 + 4), v15, v13);
          if ((v77 & 0x20000000000LL) != 0) {
            GameRoutine_95e2c0(&v77, *(_QWORD*)(v14 + 88),
                               *(_QWORD*)(v14 + 96));
            v12 = (v77 & 0x400) == 0;
          }
          else {
            v12 = false;
          }
          *(_BYTE*)(v14 + 104) = v12;
          result = GameRoutine_16e0c00(a1, v14);
          ++v10;
        }
        v16 = v62;
        v17 = v63;
        while (v16 != v17) {
          v19 = *v16;
          v20 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
          *(_WORD*)(v20 + 16) = 0;
          v21 = *(_QWORD*)(a1 + 1064);
          *(_DWORD*)(v20 + 40) = 0;
          *(_QWORD*)(v20 + 48) = 0;
          *(_QWORD*)(v20 + 56) = 0;
          *(_QWORD*)(v20 + 64) = 0;
          *(_QWORD*)(v20 + 72) = 0;
          *(_WORD*)(v20 + 80) = 257;
          *(_BYTE*)(v20 + 82) = 1;
          *(_QWORD*)v20 = game_facility_anonymous_ClassTrialJobMenuItem_vtable;
          *(_QWORD*)(v20 + 8) = 0;
          *(_BYTE*)(v20 + 104) = 0;
          *(_QWORD*)(v20 + 88) = v21;
          *(_QWORD*)(v20 + 96) = v19;
          GameRoutine_95e2c0((__int64*)((char*)&v77 + 4), v21, v19);
          if ((v77 & 0x20000000000LL) != 0) {
            GameRoutine_95e2c0(&v77, *(_QWORD*)(v20 + 88),
                               *(_QWORD*)(v20 + 96));
            v18 = (v77 & 0x400) == 0;
          }
          else {
            v18 = false;
          }
          *(_BYTE*)(v20 + 104) = v18;
          result = GameRoutine_16e0c00(a1, v20);
          ++v16;
        }
        v22 = v65;
        v23 = v66;
        while (v22 != v23) {
          v25 = *v22;
          v26 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
          *(_WORD*)(v26 + 16) = 0;
          v27 = *(_QWORD*)(a1 + 1064);
          *(_DWORD*)(v26 + 40) = 0;
          *(_QWORD*)(v26 + 48) = 0;
          *(_QWORD*)(v26 + 56) = 0;
          *(_QWORD*)(v26 + 64) = 0;
          *(_QWORD*)(v26 + 72) = 0;
          *(_WORD*)(v26 + 80) = 257;
          *(_BYTE*)(v26 + 82) = 1;
          *(_QWORD*)v26 = game_facility_anonymous_ClassTrialJobMenuItem_vtable;
          *(_QWORD*)(v26 + 8) = 0;
          *(_BYTE*)(v26 + 104) = 0;
          *(_QWORD*)(v26 + 88) = v27;
          *(_QWORD*)(v26 + 96) = v25;
          GameRoutine_95e2c0((__int64*)((char*)&v77 + 4), v27, v25);
          if ((v77 & 0x20000000000LL) != 0) {
            GameRoutine_95e2c0(&v77, *(_QWORD*)(v26 + 88),
                               *(_QWORD*)(v26 + 96));
            v24 = (v77 & 0x400) == 0;
          }
          else {
            v24 = false;
          }
          *(_BYTE*)(v26 + 104) = v24;
          result = GameRoutine_16e0c00(a1, v26);
          ++v22;
        }
        v28 = v68;
        v29 = v69;
        while (v28 != v29) {
          v31 = *v28;
          v32 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
          *(_WORD*)(v32 + 16) = 0;
          v33 = *(_QWORD*)(a1 + 1064);
          *(_DWORD*)(v32 + 40) = 0;
          *(_QWORD*)(v32 + 48) = 0;
          *(_QWORD*)(v32 + 56) = 0;
          *(_QWORD*)(v32 + 64) = 0;
          *(_QWORD*)(v32 + 72) = 0;
          *(_WORD*)(v32 + 80) = 257;
          *(_BYTE*)(v32 + 82) = 1;
          *(_QWORD*)v32 = game_facility_anonymous_ClassTrialJobMenuItem_vtable;
          *(_QWORD*)(v32 + 8) = 0;
          *(_BYTE*)(v32 + 104) = 0;
          *(_QWORD*)(v32 + 88) = v33;
          *(_QWORD*)(v32 + 96) = v31;
          GameRoutine_95e2c0((__int64*)((char*)&v77 + 4), v33, v31);
          if ((v77 & 0x20000000000LL) != 0) {
            GameRoutine_95e2c0(&v77, *(_QWORD*)(v32 + 88),
                               *(_QWORD*)(v32 + 96));
            v30 = (v77 & 0x400) == 0;
          }
          else {
            v30 = false;
          }
          *(_BYTE*)(v32 + 104) = v30;
          result = GameRoutine_16e0c00(a1, v32);
          ++v28;
        }
        v34 = v71;
        v35 = v72;
        while (v34 != v35) {
          v37 = *v34;
          v38 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
          *(_WORD*)(v38 + 16) = 0;
          v39 = *(_QWORD*)(a1 + 1064);
          *(_DWORD*)(v38 + 40) = 0;
          *(_QWORD*)(v38 + 48) = 0;
          *(_QWORD*)(v38 + 56) = 0;
          *(_QWORD*)(v38 + 64) = 0;
          *(_QWORD*)(v38 + 72) = 0;
          *(_WORD*)(v38 + 80) = 257;
          *(_BYTE*)(v38 + 82) = 1;
          *(_QWORD*)v38 = game_facility_anonymous_ClassTrialJobMenuItem_vtable;
          *(_QWORD*)(v38 + 8) = 0;
          *(_BYTE*)(v38 + 104) = 0;
          *(_QWORD*)(v38 + 88) = v39;
          *(_QWORD*)(v38 + 96) = v37;
          GameRoutine_95e2c0((__int64*)((char*)&v77 + 4), v39, v37);
          if ((v77 & 0x20000000000LL) != 0) {
            GameRoutine_95e2c0(&v77, *(_QWORD*)(v38 + 88),
                               *(_QWORD*)(v38 + 96));
            v36 = (v77 & 0x400) == 0;
          }
          else {
            v36 = false;
          }
          *(_BYTE*)(v38 + 104) = v36;
          result = GameRoutine_16e0c00(a1, v38);
          ++v34;
        }
        v40 = v74;
        v41 = v75;
        if (v74 == v75) {
          goto LABEL_44;
        }
        do {
          v43 = *v40;
          v44 = fw_memory_HeapManager_Allocate(*v2, 112, 16, 0);
          *(_WORD*)(v44 + 16) = 0;
          v45 = *(_QWORD*)(a1 + 1064);
          *(_DWORD*)(v44 + 40) = 0;
          *(_QWORD*)(v44 + 48) = 0;
          *(_QWORD*)(v44 + 56) = 0;
          *(_QWORD*)(v44 + 64) = 0;
          *(_QWORD*)(v44 + 72) = 0;
          *(_WORD*)(v44 + 80) = 257;
          *(_BYTE*)(v44 + 82) = 1;
          *(_QWORD*)v44 = game_facility_anonymous_ClassTrialJobMenuItem_vtable;
          *(_QWORD*)(v44 + 8) = 0;
          *(_BYTE*)(v44 + 104) = 0;
          *(_QWORD*)(v44 + 88) = v45;
          *(_QWORD*)(v44 + 96) = v43;
          GameRoutine_95e2c0((__int64*)((char*)&v77 + 4), v45, v43);
          if ((v77 & 0x20000000000LL) != 0) {
            GameRoutine_95e2c0(&v77, *(_QWORD*)(v44 + 88),
                               *(_QWORD*)(v44 + 96));
            v42 = (v77 & 0x400) == 0;
          }
          else {
            v42 = false;
          }
          *(_BYTE*)(v44 + 104) = v42;
          result = GameRoutine_16e0c00(a1, v44);
          ++v40;
        } while (v40 != v41);
      }
      v40 = v74;
    LABEL_44:
      if (v40 != nullptr) {
        v46 = *v2;
        v75 = v40;
        if (*(_QWORD*)(v46 + 200) != 0) {
          v47 = 128;
        }
        else {
          v47 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v46 + v47, v40);
      }
      if (v71 != nullptr) {
        v48 = *v2;
        v72 = v71;
        if (*(_QWORD*)(v48 + 200) != 0) {
          v49 = 128;
        }
        else {
          v49 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v48 + v49, v71);
      }
      if (v68 != nullptr) {
        v50 = *v2;
        v69 = v68;
        if (*(_QWORD*)(v50 + 200) != 0) {
          v51 = 128;
        }
        else {
          v51 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v50 + v51, v68);
      }
      if (v65 != nullptr) {
        v52 = *v2;
        v66 = v65;
        if (*(_QWORD*)(v52 + 200) != 0) {
          v53 = 128;
        }
        else {
          v53 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v52 + v53, v65);
      }
      if (v62 != nullptr) {
        v54 = *v2;
        v63 = v62;
        if (*(_QWORD*)(v54 + 200) != 0) {
          v55 = 128;
        }
        else {
          v55 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v54 + v55, v62);
      }
      if (v59 != nullptr) {
        v56 = *v2;
        v60 = v59;
        if (*(_QWORD*)(v56 + 200) != 0) {
          v57 = 128;
        }
        else {
          v57 = 56;
        }
        result = nn_mem_StandardAllocator_Free(v56 + v57, v59);
      }
    } while (v7++ != v58);
  }
  return result;
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
  __int64* v9;
  char** v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 result;
  unsigned __int64 v18;
  char* v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[2];
  unsigned __int64 v23;
  unsigned __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;

  v2 = *(_QWORD*)(a1 + 8);
  v4 = *(_DWORD*)(v2 + 660);
  v5 = *(_QWORD*)(v2 + 680);
  v6 = *(_QWORD*)(v2 + 672);
  if (v4 < (unsigned __int64)((v5 - v6) >> 2)) {
    LOBYTE(v4) = *(_BYTE*)(v6 + 4LL * v4);
  }
  v7 = game_facility_kJobRankMids[(unsigned __int8)v4];
  v8 = msg_MessageManager_instance__ptr[0];
  v9 = GameData_212e348;
  v10 = msg_MessageManager_empty_text__ptr;
  if (*v7 != 0) {
    v11 = *msg_MessageManager_instance__ptr[0];
    v27 = -1;
    v28 = -1;
    v29 = -1;
    v30 = -1;
    v31 = -1;
    v32 = -1;
    v33 = -1;
    v34 = -1;
    v35 = -1;
    v36 = -1;
    v37 = -1;
    v38 = -1;
    v22[0] = GameData_212e348 + 2;
    v22[1] = 0xFFFF0001FFFF0000LL;
    v23 = 0xFFFF0004FFFF0002LL;
    v24 = 0xFFFF0006FFFF0005LL;
    v39 = 8;
    v25 = -65529;
    v26 = -65528;
    v12 = GameRoutine_a4dbe0(v11, v7, 0, v22);
  }
  else {
    v12 = (__int64)*msg_MessageManager_empty_text__ptr;
  }
  if (v12 != 0) {
    v13 = v12;
  }
  else {
    v13 = (__int64)*v10;
  }
  GameRoutine_60a020(*v8 + 14704, v13);
  v14 = *v8;
  v27 = -1;
  v28 = -1;
  v29 = -1;
  v30 = -1;
  v31 = -1;
  v32 = -1;
  v33 = -1;
  v34 = -1;
  v35 = -1;
  v36 = -1;
  v37 = -1;
  v38 = -1;
  v22[0] = v9 + 2;
  v22[1] = 0xFFFF0001FFFF0000LL;
  v23 = 0xFFFF0004FFFF0002LL;
  v24 = 0xFFFF0006FFFF0005LL;
  v39 = 8;
  v25 = -65529;
  v26 = -65528;
  v15 = GameRoutine_a4dbe0(v14, "MID_ClassTrialMenu_JobRankSelect", 0, v22);
  if (v15 != 0) {
    v16 = v15;
  }
  else {
    v16 = (__int64)*v10;
  }
  result = strlen(v16);
  if (result >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v18 = result;
  if (result >= 0x17) {
    if ((result | 7) == 0x17) {
      v20 = 26;
    }
    else {
      v20 = (result | 7) + 1;
    }
    v21 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         v20, 16, 0);
    a2[1] = v18;
    a2[2] = v21;
    *a2 = v20 | 1;
    v19 = (char*)v21;
  }
  else {
    *(_BYTE*)a2 = 2 * result;
    v19 = (char*)a2 + 1;
    if (result == 0) {
      goto LABEL_21;
    }
  }
  result = memmove(v19, v16, v18);
LABEL_21:
  v19[v18] = 0;
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
