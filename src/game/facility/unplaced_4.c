#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_654050(_QWORD* result, _QWORD*);
_QWORD* SceneCameraWorkUpdater_14559c0(__int64, unsigned __int64*, __int64,
                                       _QWORD**, __int64*);
_QWORD* game_TransporterConst_List_Impl_EachData(_QWORD* result, __int64,
                                                 __int64);
_QWORD* game_UnitPool_Find_6ead60(__int64*, _DWORD*);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void ProcStableScene_1955550(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_103a420(PSEUDO_X8);
__attribute__((swiftcall)) void game_9a64e0(PSEUDO_X8, __int64*);
__attribute__((swiftcall)) void game_facility_144f120(PSEUDO_X8, __int64,
                                                      __int64);
__attribute__((swiftcall)) void game_hub_e01a40(PSEUDO_X8, __int64);
__int64* GameRoutine_92b0a0(_QWORD*, unsigned __int8*);
__int64* game_8af240(__int64* result, __int64**);
__int64 Alignment_56b600(__int64 result);
__int64 BlacksmithMenuItem_Info_Unknown55(__int64);
__int64 FacilityVariable_1472420(unsigned __int64*, unsigned __int64*, char);
__int64 GameHr_1327400(_QWORD*);
__int64 GameHr_7a88a0(__int64*);
__int64 GameHr_f41c80();
__int64 GameRoutine_14127e0(__int64, __int64*);
__int64
GameRoutine_14127e0_alt1(__int64,
                         unsigned __int8*) __asm__("GameRoutine_14127e0");
__int64 GameRoutine_143e400();
__int64 GameRoutine_1a09ce0(__int64, const char*, unsigned __int64);
__int64 GameRoutine_86b4e0(__int64*);
__int64 GameRoutine_9b11a0(_QWORD*, unsigned __int64*, __int64);
__int64 GameRoutine_9db9e0(unsigned int, unsigned int);
__int64 ItemSeq_8af940(__int64, unsigned __int16**, __int64, const char**,
                       const char**, char);
__int64 ObjectBuildCreate_c21360(__int64, __int64, unsigned __int64);
__int64 Pane_58f8a0(__int64);
__int64 SceneManager_138c8e0(__int64, __int64);
__int64 SceneManager_138e060(_QWORD*);
__int64 SceneManager_138e5e0(__int64);
__int64 Util_15792c0(__int64*, unsigned __int16*, char, unsigned __int8,
                     __int64, const char*, __int64, char);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HashString(__int64 result);
__int64 game_ProcInst_Unregister(__int64 result);
__int64 game_VariableManager_SetFlag(__int64 result, int);
__int64 game_facility_14107c0(__int64, __int64);
__int64 game_facility_94c100(__int64);
__int64 game_facility_BlacksmithMenuUtil_CanRefine(unsigned __int16*, __int64);
__int64 game_facility_ReleaseGroups();
__int64 game_gameui_Util_EachItemFromTransporter(__int64);
__int64 game_gmap_TroopMgr_EachPlayerTroop(__int64 result, __int64);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindAlignment(__int64*, __int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_FindTextBox(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
char* game_util_Format(const char*, ...);
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN** GameData_2132468;
extern _UNKNOWN GameData_1a856ca;
extern _UNKNOWN GameData_1aaffc1;
extern _UNKNOWN GameData_1ae37d2;
extern _UNKNOWN GameData_1afaa0d;
extern _UNKNOWN GameData_1afac00;
extern _UNKNOWN GameData_21ca3d8;
extern _UNKNOWN GameData_21ca3dc;
extern _UNKNOWN GameData_22594f0;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_20330a8[])();
extern __int64 (*GameData_2040f68[])();
extern __int64 (*GameData_2040fe8[])();
extern __int64 (*GameData_20fa440[])();
extern __int64 (*GameData_2118c88[])();
extern __int64 (*GameData_2118d38[])();
extern __int64 (*GameData_2118e20[])();
extern __int64 (*game_ProcInst_vtable[])();
extern __int64 (*game_facility_FacilitySceneBase_vtable[])();
extern __int64* GameData_212c790;
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212d7f0[5];
extern __int64* game_vstring_kEmpty_ptr[2];
extern __int64 GameData_212dce8;
extern __int64 GameData_21c6978;
extern __int64 GameData_21c6980;
extern __int64 GameData_21c96f8;
extern __int64 GameData_21f3d10;
extern __int64 GameData_21f4000;
extern __int64 GameData_21f61c0;
extern __int64 GameData_220f950;
extern __int64 GameData_22492c8;
extern __int64 GameData_22492d8;
extern __int64 GameData_226bb60;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_TransporterConst_List_instance__ptr[6];
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_hub_ProcHubSeqView_instance_;
extern __int64 game_map_MapRandom_instance_;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
extern __int64 ui_LayoutAccessor_empty_;
extern char GameData_226b338;
extern int GameData_2241730;
extern int GameData_22594e8;
float Cursor_734120(unsigned int, float, float, float, float);
int __cxa_guard_acquire(__int64);
unsigned __int16* Dir_70d7a0(unsigned __int16* result);
unsigned __int64 strlen(const char*);
unsigned int* game_gmap_SpotMgr_GetCurrentSpot();
void FacilitySceneBase_1958ed0(__int64, __int64);
void GameHr_f42060(__int64*);
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_658c00(__int64*);
void SceneManager_138d7c0(__int64, __int64, __int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_6c1f60();
void __attribute__((noreturn)) String_60a1d0();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_facility_94b3c0(__int64 a1);
__int64* game_facility_9c3860(__int64* result, __int64* a2, __int64* a3,
                              __int64* a4, __int64* a5);
bool game_facility_9c39e0(__int64* a1, __int64* a2);
__int64 game_facility_142a920(__int64 result);
void game_facility_146cca0();
__int64* game_facility_1705ea0(__int64* result, __int64* a2, __int64* a3,
                               __int64* a4, __int64* a5);
__int64 game_facility_1867180(__int64 a1);
__int64 game_facility_1867320(__int64 result);
unsigned __int64 game_facility_186b9a0(unsigned __int64 result, __int64* a2,
                                       __int64 a3, char a4);
__int64* game_facility_186c3e0(__int64* result, __int64* a2, __int64* a3,
                               __int64* a4, __int64* a5);
bool game_facility_186c560(__int64* a1, __int64* a2);
__int64 game_facility_1873150(_QWORD* a1);
_DWORD* game_facility_187c5b0(__int64* a1, unsigned __int16* a2, int a3,
                              __int64 a4, char a5);
_QWORD* game_facility_187c870(unsigned __int16* a1, char a2, __int64 a3);
__int64 game_facility_187c960(__int64 result, __int64 a2, unsigned __int16* a3);
void game_facility_194f1d0(__int64 a1);
void game_facility_194f2b0(__int64 a1);
void game_facility_194f6c0(__int64 a1);
void game_facility_1952140(__int64 a1);
__int64 game_facility_1952360(__int64 result);
__int64 game_facility_1953500(__int64 result);
__int64 game_facility_19537e0(__int64 a1, __int64* a2);
void game_facility_19548c0();
void game_facility_19551d0(__int64 a1, unsigned __int8* a2);
__int64 game_facility_19595c0();
void game_facility_197fb20(__int64 a1);

__int64 game_facility_94b3c0(__int64 a1)
{
  int v2;
  __int64 v3;
  int v4;
  __int64 v5;
  int v6;
  __int64 v7;
  bool v8;
  unsigned __int16* v9;
  __int16 v10;
  __int16 v11;
  __int16 v12;
  __int16 v13;
  struct {
    __int64 v15;
    void* v16;
    __int16 v17;
    __int16 v18;
  } v15_;

  if (a1 != 0) {
    FacilityVariable_1472420((unsigned __int64*)&GameData_22492c8,
                             (unsigned __int64*)&GameData_22492d8,
                             *(_WORD*)(a1 + 16));
  }
  v2 = GameRoutine_9db9e0(0x15u, *(unsigned __int16*)(a1 + 68));
  v3 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v4 = (*(_DWORD*)(game_GameModeData_instance_ + 72) - v2) &
         ~((*(_DWORD*)(game_GameModeData_instance_ + 72) - v2) >> 31);
    if (v4 >= 9999999) {
      v4 = 9999999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 72) = v4;
    if (*(_BYTE*)(v3 + 56) == 5) {
      v15_.v16 = &GameData_1a856ca;
      v15_.v15 = game_HashString((__int64)&GameData_1a856ca);
      if (game_GameModeData_instance_ != 0) {
        v5 = game_GameVariableTable_Find(
            *(_QWORD**)(game_GameModeData_instance_ + 48),
            (unsigned __int64*)&v15_.v15);
        if (v5 != 0) {
          v6 = *(_DWORD*)(v5 + 32);
          v7 = game_gmap_GmapClock_instance_;
          v8 = v6 == 0 || game_gmap_GmapClock_instance_ == 0;
          if (!v8 && *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
                             *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
                             *(__int16*)(game_gmap_GmapClock_instance_ + 24) !=
                         0) {
            v9 = (unsigned __int16*)(game_gmap_GmapClock_instance_ + 8);
            v10 = *(_WORD*)(game_gmap_GmapClock_instance_ + 8);
            v11 = *(_WORD*)(game_gmap_GmapClock_instance_ + 18);
            v12 = *(_WORD*)(game_gmap_GmapClock_instance_ + 16);
            v15_.v15 = game_gmap_GmapClock_instance_;
            LOWORD(v15_.v16) = v10;
            *(_DWORD*)((char*)&v15_.v16 + 2) =
                *(_DWORD*)(game_gmap_GmapClock_instance_ + 10);
            v13 = *(_WORD*)(game_gmap_GmapClock_instance_ + 14);
            v15_.v18 = v11;
            v15_.v17 = v12;
            *(_WORD*)(game_gmap_GmapClock_instance_ + 18) = 0;
            HIWORD(v15_.v16) = v13;
            *(_WORD*)(v7 + 14) = v13 + v6 / 60;
            *(_WORD*)(v7 + 16) = v12 + v6 % 60;
            Dir_70d7a0(v9);
            *(_DWORD*)(v7 + 44) = 0;
            GameRoutine_86b4e0(&v15_.v15);
          }
        }
      }
    }
  }
  v15_.v16 = &GameData_1aaffc1;
  v15_.v15 = game_HashString((__int64)&GameData_1aaffc1);
  return GameRoutine_9b11a0(&GameData_21f61c0, (unsigned __int64*)&v15_.v15, 1);
}

__int64* game_facility_9c3860(__int64* result, __int64* a2, __int64* a3,
                              __int64* a4, __int64* a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v5 = *a2;
  v6 = *result;
  v7 = *a3;
  v8 = *(_DWORD*)(*a2 + 40);
  v9 = *(_DWORD*)(*a3 + 40);
  if (v8 <= (signed __int32)*(_DWORD*)(*result + 40)) {
    if (v9 <= v8) {
      v5 = *a3;
    }
    else {
      *a2 = v7;
      *a3 = v5;
      v10 = *result;
      if ((signed __int32)*(_DWORD*)(*a2 + 40) >
          (signed __int32)*(_DWORD*)(*result + 40)) {
        *result = *a2;
        *a2 = v10;
        v5 = *a3;
      }
    }
  }
  else {
    if (v9 > v8) {
      *result = v7;
    LABEL_9:
      *a3 = v6;
      v5 = v6;
      goto LABEL_11;
    }
    *result = v5;
    *a2 = v6;
    v5 = *a3;
    if ((signed __int32)*(_DWORD*)(*a3 + 40) >
        (signed __int32)*(_DWORD*)(v6 + 40)) {
      *a2 = v5;
      goto LABEL_9;
    }
  }
LABEL_11:
  if ((signed __int32)*(_DWORD*)(*a4 + 40) >
      (signed __int32)*(_DWORD*)(v5 + 40)) {
    *a3 = *a4;
    *a4 = v5;
    v11 = *a2;
    if ((signed __int32)*(_DWORD*)(*a3 + 40) >
        (signed __int32)*(_DWORD*)(*a2 + 40)) {
      *a2 = *a3;
      *a3 = v11;
      v12 = *result;
      if ((signed __int32)*(_DWORD*)(*a2 + 40) >
          (signed __int32)*(_DWORD*)(*result + 40)) {
        *result = *a2;
        *a2 = v12;
      }
    }
  }
  v13 = *a4;
  if ((signed __int32)*(_DWORD*)(*a5 + 40) >
      (signed __int32)*(_DWORD*)(*a4 + 40)) {
    *a4 = *a5;
    *a5 = v13;
    v14 = *a3;
    if ((signed __int32)*(_DWORD*)(*a4 + 40) >
        (signed __int32)*(_DWORD*)(*a3 + 40)) {
      *a3 = *a4;
      *a4 = v14;
      v15 = *a2;
      if ((signed __int32)*(_DWORD*)(*a3 + 40) >
          (signed __int32)*(_DWORD*)(*a2 + 40)) {
        *a2 = *a3;
        *a3 = v15;
        v16 = *result;
        if ((signed __int32)*(_DWORD*)(*a2 + 40) >
            (signed __int32)*(_DWORD*)(*result + 40)) {
          *result = *a2;
          *a2 = v16;
        }
      }
    }
  }
  return result;
}

bool game_facility_9c39e0(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  int v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      v5 = *a1;
      v6 = a1[1];
      v7 = *(a2 - 1);
      v8 = *(_DWORD*)(v6 + 40);
      v9 = *(_DWORD*)(v7 + 40);
      if (v8 > (signed __int32)*(_DWORD*)(*a1 + 40)) {
        if (v9 <= v8) {
          *a1 = v6;
          a1[1] = v5;
          v22 = *(a2 - 1);
          if ((signed __int32)*(_DWORD*)(v22 + 40) >
              (signed __int32)*(_DWORD*)(v5 + 40)) {
            a1[1] = v22;
            *(a2 - 1) = v5;
          }
        }
        else {
          *a1 = v7;
          *(a2 - 1) = v5;
        }
        return true;
      }
      if (v9 <= v8) {
        return true;
      }
      a1[1] = v7;
      *(a2 - 1) = v6;
      v21 = a1[1];
    LABEL_49:
      v34 = *a1;
      if ((signed __int32)*(_DWORD*)(v21 + 40) >
          (signed __int32)*(_DWORD*)(*a1 + 40)) {
        *a1 = v21;
        a1[1] = v34;
      }
      return true;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_13;
      }
      game_facility_9c3860(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
      return true;
    }
    v17 = *a1;
    v16 = a1[1];
    v18 = a1[2];
    v19 = *(_DWORD*)(v16 + 40);
    v20 = *(_DWORD*)(v18 + 40);
    if (v19 <= (signed __int32)*(_DWORD*)(*a1 + 40)) {
      if (v20 > v19) {
        a1[1] = v18;
        a1[2] = v16;
        if ((signed __int32)*(_DWORD*)(v18 + 40) >
            (signed __int32)*(_DWORD*)(v17 + 40)) {
          *a1 = v18;
          a1[1] = v17;
        }
        goto LABEL_46;
      }
    }
    else {
      if (v20 > v19) {
        *a1 = v18;
      LABEL_44:
        a1[2] = v17;
        v16 = v17;
        goto LABEL_46;
      }
      *a1 = v16;
      a1[1] = v17;
      if ((signed __int32)*(_DWORD*)(v18 + 40) >
          (signed __int32)*(_DWORD*)(v17 + 40)) {
        a1[1] = v18;
        goto LABEL_44;
      }
    }
    v16 = v18;
  LABEL_46:
    v32 = *(a2 - 1);
    if ((signed __int32)*(_DWORD*)(v32 + 40) <=
        (signed __int32)*(_DWORD*)(v16 + 40)) {
      return true;
    }
    a1[2] = v32;
    *(a2 - 1) = v16;
    v33 = a1[1];
    v21 = a1[2];
    if ((signed __int32)*(_DWORD*)(v21 + 40) <=
        (signed __int32)*(_DWORD*)(v33 + 40)) {
      return true;
    }
    a1[1] = v21;
    a1[2] = v33;
    goto LABEL_49;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    v3 = *(a2 - 1);
    v4 = *a1;
    if ((signed __int32)*(_DWORD*)(v3 + 40) >
        (signed __int32)*(_DWORD*)(*a1 + 40)) {
      *a1 = v3;
      *(a2 - 1) = v4;
    }
    return true;
  }
LABEL_13:
  v11 = a1 + 2;
  v10 = a1[2];
  v12 = *a1;
  v13 = a1[1];
  v14 = *(_DWORD*)(v13 + 40);
  v15 = *(_DWORD*)(v10 + 40);
  if (v14 <= (signed __int32)*(_DWORD*)(*a1 + 40)) {
    if (v15 > v14) {
      a1[1] = v10;
      a1[2] = v13;
      if ((signed __int32)*(_DWORD*)(v10 + 40) >
          (signed __int32)*(_DWORD*)(v12 + 40)) {
        *a1 = v10;
        a1[1] = v12;
      }
    }
  }
  else {
    if (v15 <= v14) {
      *a1 = v13;
      a1[1] = v12;
      if ((signed __int32)*(_DWORD*)(v10 + 40) <=
          (signed __int32)*(_DWORD*)(v12 + 40)) {
        goto LABEL_32;
      }
      a1[1] = v10;
    }
    else {
      *a1 = v10;
    }
    a1[2] = v12;
  }
LABEL_32:
  v23 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v24 = 24;
  v25 = 0;
  while (1) {
    v27 = *v23;
    v28 = *v11;
    if ((signed __int32)*(_DWORD*)(*v23 + 40) >
        (signed __int32)*(_DWORD*)(v28 + 40)) {
      v29 = v24;
      do {
        v30 = v29 - 8;
        *(__int64*)((char*)a1 + v29) = v28;
        if (v29 == 8) {
          v26 = a1;
          goto LABEL_35;
        }
        v31 = (char*)a1 + v29;
        v29 -= 8;
        v28 = *((_QWORD*)v31 - 2);
      } while ((signed __int32)*(_DWORD*)(v27 + 40) >
               (signed __int32)*(_DWORD*)(v28 + 40));
      v26 = (__int64*)((char*)a1 + v30);
    LABEL_35:
      ++v25;
      *v26 = v27;
      if (v25 == 8) {
        return v23 + 1 == a2;
      }
    }
    v11 = v23++;
    v24 += 8;
    if (v23 == a2) {
      return true;
    }
  }
}

__int64 game_facility_142a920(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64** v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v1 = *(_QWORD*)(result + 216);
  if (v1 == 0) {
    goto LABEL_8;
  }
  result = GameRoutine_143e400();
  if (result == 0) {
    goto LABEL_8;
  }
  v2 = result;
  result = game_HashString((__int64)&GameData_1afac00);
  v3 = *(__int64***)(v2 + 40);
  v4 = *v3;
  v5 = v3[1];
  if (*v3 == v5) {
    goto LABEL_8;
  }
  while (1) {
    v7 = *v4++;
    v6 = v7;
    v8 = *(_QWORD*)(v7 + 32);
    v9 = game_HashString((__int64)&GameData_1afac00);
    result = game_HashString(v8);
    if (v9 == result) {
      break;
    }
    if (v4 == v5) {
      v6 = 0;
      break;
    }
  }
  if (v1 != v6) {
  LABEL_8:
    if (game_hub_ProcHubSeqView_instance_ != 0 && GameData_21f3d10 != 0 &&
        (signed __int32)*(_DWORD*)(game_hub_ProcHubSeqView_instance_ + 232) <=
            0) {
      *(_BYTE*)(GameData_21f3d10 + 768) = 1;
    }
  }
  return result;
}

void game_facility_146cca0()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char* v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  _BYTE v33[24];
  __int64 v34;
  __int64* v35;
  struct {
    __int64 v36[3];
    char gap72_[8];
    __int64* v37;
  } v36_;

  v0 = *(_QWORD*)(GameData_21f4000 + 264);
  if (v0 != 0) {
    v1 = *(_QWORD*)(GameData_21f4000 + 256);
    v2 = *(_QWORD*)(GameData_21f4000 + 264);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v0 + 16), 1u,
                              memory_order_relaxed);
    v3 = std___1___shared_weak_count_lock(v2);
    std___1___shared_weak_count___release_weak(v0);
    if (v3 != 0) {
      if (v1 != 0) {
        v4 = *(_QWORD*)(v1 + 392);
        if (v4 != 0) {
          (*(void (**)(__int64, __int64))(*(_QWORD*)v4 + 32LL))(v4, v1);
        }
        v5 = *(_QWORD*)(v1 + 400);
        *(_QWORD*)(v1 + 392) = 0;
        *(_QWORD*)(v1 + 400) = 0;
        if (v5 != 0) {
          if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
            std___1___shared_weak_count___release_weak(v5);
          }
          v6 = *(_QWORD*)(v1 + 392);
          if (v6 != 0) {
            (*(void (**)(__int64, __int64))(*(_QWORD*)v6 + 24LL))(v6, v1);
          }
        }
        v7 = *(_QWORD*)(v1 + 416);
        *(_QWORD*)(v1 + 408) = 0;
        *(_QWORD*)(v1 + 416) = 0;
        if (v7 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          std___1___shared_weak_count___release_weak(v7);
        }
        v8 = fw_memory_g_heap_manager_ptr;
        v9 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
        *(_BYTE*)(v9 + 35) = 0;
        v36_.v36[0] = 41;
        v36_.v36[1] = 35;
        v36_.v36[2] = v9;
        *(_DWORD*)(v9 + 31) = -1380391789;
        *(_QWORD*)v9 = 0x83E3A183E3AB82E3LL;
        *(_QWORD*)(v9 + 8) = 0xE3BC83E3AF83E3A9LL;
        *(_QWORD*)(v9 + 16) = 0xA8E9A6A9E85FAF82LL;
        *(_QWORD*)(v9 + 24) = 0x93A8E9A6A9E85F93LL;
        game_facility_144f120((void*)(v33), v1, (__int64)v36_.v36);
        v0 = *(_QWORD*)v33;
        v1 = *(_QWORD*)&v33[8];
        *(_QWORD*)v33 = 0;
        *(_QWORD*)&v33[8] = 0;
        if ((v36_.v36[0] & 1) != 0 && v36_.v36[2] != 0) {
          v10 = 128;
          if (*(_QWORD*)(*(_QWORD*)v8 + 200LL) == 0) {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v8 + v10, v36_.v36[2]);
        }
      }
      else {
        v0 = 0;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
        std___1___shared_weak_count___release_weak(v3);
      }
    }
    else {
      v0 = 0;
      v1 = 0;
    }
  }
  else {
    v1 = 0;
  }
  BYTE4(v36_.v36[2]) = 0;
  LOBYTE(v36_.v36[0]) = 38;
  LODWORD(v36_.v36[2]) = -2004622461;
  *(__int64*)((char*)v36_.v36 + 1) = 0xE35F93A8E9A6A9E8LL;
  v11 = *(__int64**)(GameData_21f4000 + 160);
  v12 = *(__int64**)(GameData_21f4000 + 168);
  *(__int64*)((char*)&v36_.v36[1] + 1) = 0x8383E38B83E3A683LL;
  if (v11 == v12) {
    goto LABEL_65;
  }
  while (1) {
    v14 = *v11++;
    v13 = v14;
    v15 = *(_QWORD*)(v14 + 40);
    v16 = v14 + 25;
    v17 = (*(_BYTE*)(v14 + 24) & 1) != 0 ? v15 : v16;
    v18 = (char*)v36_.v36[2];
    v19 = (unsigned __int64)LOBYTE(v36_.v36[0]) >> 1;
    if ((v36_.v36[0] & 1) != 0) {
      v19 = v36_.v36[1];
    }
    else {
      v18 = (char*)v36_.v36 + 1;
    }
    *(_QWORD*)v33 = v18;
    *(_QWORD*)&v33[8] = v19;
    v20 = game_HashString(v17);
    if (v20 == GameHr_7a88a0((__int64*)v33)) {
      break;
    }
    if (v11 == v12) {
      v13 = 0;
      break;
    }
  }
  if ((v36_.v36[0] & 1) != 0 && v36_.v36[2] != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v21,
                                  v36_.v36[2]);
  }
  if (v13 == 0) {
    goto LABEL_65;
  }
  v22 = fw_memory_g_heap_manager_ptr;
  v23 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       40, 16, 0);
  *(_BYTE*)(v23 + 38) = 0;
  *(_QWORD*)v33 = 41;
  *(_QWORD*)&v33[8] = 38;
  *(_QWORD*)&v33[16] = v23;
  *(_QWORD*)(v23 + 16) = 0xB383E3A783E3B782LL;
  *(_QWORD*)(v23 + 24) = 0x5F93A8E9A6A9E85FLL;
  *(_QWORD*)(v23 + 30) = 0x8881E38BA7E65F93LL;
  *(_QWORD*)v23 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v23 + 8) = 0xE3BC83E3A283E3A9LL;
  game_facility_14107c0((__int64)v36_.v36, (__int64)v33);
  v24 = *(_QWORD*)(v13 + 112);
  v25 = *(_QWORD*)(v13 + 120);
  if (v25 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v25 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_14127e0(v24, v36_.v36);
    if (atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v25 + 16LL))(v25);
      std___1___shared_weak_count___release_weak(v25);
    }
  }
  else {
    GameRoutine_14127e0(v24, v36_.v36);
  }
  if ((v36_.v36[0] & 1) != 0 && v36_.v36[2] != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v22 + v26, v36_.v36[2]);
  }
  if ((v33[0] & 1) != 0 && *(_QWORD*)&v33[16] != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v22 + v27, *(__int64*)&v33[16]);
  }
  if (v0 == 0) {
    goto LABEL_65;
  }
  v36_.v36[0] = (__int64)GameData_2040f68;
  v36_.v36[1] = v13;
  v36_.v37 = v36_.v36;
  v34 = game_HashString((__int64)&GameData_1afaa0d);
  v35 = v36_.v36;
  *(_QWORD*)v33 = &v34;
  SceneCameraWorkUpdater_14559c0(v0 + 144, (unsigned __int64*)&v34,
                                 (__int64)std___1_piecewise_construct_ptr,
                                 (_QWORD**)v33, (__int64*)&v35);
  if (v36_.v37 == v36_.v36) {
    v28 = 32;
    goto LABEL_59;
  }
  if (v36_.v37 != nullptr) {
    v28 = 40;
  LABEL_59:
    (*(void (**)(__int64))(*v36_.v37 + v28))((__int64)v36_.v37);
  }
  v36_.v36[0] = (__int64)GameData_2040fe8;
  v36_.v36[1] = v13;
  v36_.v37 = v36_.v36;
  v34 = game_HashString((__int64)&GameData_1ae37d2);
  v35 = v36_.v36;
  *(_QWORD*)v33 = &v34;
  SceneCameraWorkUpdater_14559c0(v0 + 144, (unsigned __int64*)&v34,
                                 (__int64)std___1_piecewise_construct_ptr,
                                 (_QWORD**)v33, (__int64*)&v35);
  if (v36_.v37 == v36_.v36) {
    v29 = 32;
  }
  else {
    if (v36_.v37 == nullptr) {
      goto LABEL_65;
    }
    v29 = 40;
  }
  (*(void (**)(__int64))(*v36_.v37 + v29))((__int64)v36_.v37);
LABEL_65:
  v30 = GameData_21f4000;
  v33[23] = 0;
  v33[0] = 44;
  *(_QWORD*)&v33[1] = 0x83E39683E3A283E3LL;
  *(_QWORD*)&v33[9] = 0x5F8883E3B982E3AALL;
  *(_QWORD*)&v33[15] = 0x93A8E9A6A9E85F88LL;
  if ((SceneManager_138c8e0(GameData_21f4000, (__int64)v33) & 1) != 0) {
    LODWORD(v36_.v36[1]) = 0;
    v36_.v36[0] = (__int64)GameData_20330a8;
    v36_.v37 = v36_.v36;
    SceneManager_138d7c0(v30, (__int64)v33, (__int64)v36_.v36);
    if (v36_.v37 == v36_.v36) {
      v31 = 32;
      goto LABEL_70;
    }
    if (v36_.v37 != nullptr) {
      v31 = 40;
    LABEL_70:
      (*(void (**)(__int64))(*v36_.v37 + v31))((__int64)v36_.v37);
    }
  }
  if ((v33[0] & 1) != 0 && *(_QWORD*)&v33[16] != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v32,
                                  *(__int64*)&v33[16]);
  }
  if (v1 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
    std___1___shared_weak_count___release_weak(v1);
  }
}

__int64* game_facility_1705ea0(__int64* result, __int64* a2, __int64* a3,
                               __int64* a4, __int64* a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v5 = *a2;
  v6 = *result;
  v7 = *a3;
  v8 = *(_DWORD*)(*a2 + 40);
  v9 = *(_DWORD*)(*a3 + 40);
  if (v8 <= (signed __int32)*(_DWORD*)(*result + 40)) {
    if (v9 <= v8) {
      v5 = *a3;
    }
    else {
      *a2 = v7;
      *a3 = v5;
      v10 = *result;
      if ((signed __int32)*(_DWORD*)(*a2 + 40) >
          (signed __int32)*(_DWORD*)(*result + 40)) {
        *result = *a2;
        *a2 = v10;
        v5 = *a3;
      }
    }
  }
  else {
    if (v9 > v8) {
      *result = v7;
    LABEL_9:
      *a3 = v6;
      v5 = v6;
      goto LABEL_11;
    }
    *result = v5;
    *a2 = v6;
    v5 = *a3;
    if ((signed __int32)*(_DWORD*)(*a3 + 40) >
        (signed __int32)*(_DWORD*)(v6 + 40)) {
      *a2 = v5;
      goto LABEL_9;
    }
  }
LABEL_11:
  if ((signed __int32)*(_DWORD*)(*a4 + 40) >
      (signed __int32)*(_DWORD*)(v5 + 40)) {
    *a3 = *a4;
    *a4 = v5;
    v11 = *a2;
    if ((signed __int32)*(_DWORD*)(*a3 + 40) >
        (signed __int32)*(_DWORD*)(*a2 + 40)) {
      *a2 = *a3;
      *a3 = v11;
      v12 = *result;
      if ((signed __int32)*(_DWORD*)(*a2 + 40) >
          (signed __int32)*(_DWORD*)(*result + 40)) {
        *result = *a2;
        *a2 = v12;
      }
    }
  }
  v13 = *a4;
  if ((signed __int32)*(_DWORD*)(*a5 + 40) >
      (signed __int32)*(_DWORD*)(*a4 + 40)) {
    *a4 = *a5;
    *a5 = v13;
    v14 = *a3;
    if ((signed __int32)*(_DWORD*)(*a4 + 40) >
        (signed __int32)*(_DWORD*)(*a3 + 40)) {
      *a3 = *a4;
      *a4 = v14;
      v15 = *a2;
      if ((signed __int32)*(_DWORD*)(*a3 + 40) >
          (signed __int32)*(_DWORD*)(*a2 + 40)) {
        *a2 = *a3;
        *a3 = v15;
        v16 = *result;
        if ((signed __int32)*(_DWORD*)(*a2 + 40) >
            (signed __int32)*(_DWORD*)(*result + 40)) {
          *result = *a2;
          *a2 = v16;
        }
      }
    }
  }
  return result;
}

__int64 game_facility_1867180(__int64 a1)
{
  _QWORD* v3;
  unsigned __int64* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  unsigned __int64* v13;
  __int64 v14;
  __int64 v15;
  char v16;
  __int64 v17;

  if ((*(_BYTE*)(a1 + 136) & 1) != 0) {
    return 0;
  }
  if ((GameData_226b338 & 1) != 0 || (*(_BYTE*)(a1 + 137) & 1) != 0) {
    goto LABEL_16;
  }
  v3 = *(_QWORD**)(a1 + 120);
  if (v3[1] == *v3) {
    v4 = (unsigned __int64*)&GameData_21c6980;
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
    LABEL_11:
      v7 = 128;
      goto LABEL_12;
    }
  }
  else {
    v4 = (unsigned __int64*)(*(_QWORD*)(*(_QWORD*)*v3 + 24LL) + 32LL);
    v5 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_11;
    }
  }
  v6 = game_GameVariableTable_Find(*(_QWORD**)(v5 + 48), v4);
  if (v6 == 0) {
    goto LABEL_11;
  }
  v7 = *(_DWORD*)(v6 + 32) | 0x80;
LABEL_12:
  if (v3[1] == *v3) {
    v8 = &GameData_21c6980;
  }
  else {
    v8 = (__int64*)(*(_QWORD*)(*(_QWORD*)*v3 + 24LL) + 32LL);
  }
  game_VariableManager_SetFlag((__int64)v8, v7);
LABEL_16:
  v9 = *(_QWORD*)(a1 + 56);
  if (v9 == 0) {
    goto LABEL_20;
  }
  v10 = std___1___shared_weak_count_lock(v9);
  if (v10 == 0) {
    goto LABEL_20;
  }
  v11 = *(__int64**)(a1 + 48);
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v11 != nullptr) {
      goto LABEL_21;
    }
    goto LABEL_20;
  }
  v17 = v10;
  (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
  std___1___shared_weak_count___release_weak(v17);
  if (v11 == nullptr) {
  LABEL_20:
    v11 = &ui_LayoutAccessor_empty_;
  }
LABEL_21:
  v12 = **(_QWORD**)(a1 + 120);
  if (*(_QWORD*)(*(_QWORD*)(a1 + 120) + 8LL) == v12) {
    v13 = (unsigned __int64*)&GameData_21c6980;
    v14 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
    LABEL_27:
      v16 = 1;
      goto LABEL_28;
    }
  }
  else {
    v13 = (unsigned __int64*)(*(_QWORD*)(*(_QWORD*)v12 + 24LL) + 32LL);
    v14 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ == 0) {
      goto LABEL_27;
    }
  }
  v15 = game_GameVariableTable_Find(*(_QWORD**)(v14 + 48), v13);
  if (v15 == 0) {
    goto LABEL_27;
  }
  v16 = (*(_BYTE*)(v15 + 32) & 0x80) == 0;
LABEL_28:
  ui_LayoutAccessor_SetPaneVisible((__int64)v11, (__int64)"IconNew", v16);
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)(a1 + 96) + 16LL))(a1 + 96,
                                                                        0);
}

__int64 game_facility_1867320(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  unsigned __int64* v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64* v13;
  __int64 v14;
  __int64 v15;
  char v16;

  if (*(_QWORD*)(*(_QWORD*)(result + 8) + 336LL) == result) {
    v1 = result;
    if ((GameData_226b338 & 1) != 0 || (*(_BYTE*)(result + 137) & 1) != 0) {
      goto LABEL_15;
    }
    v2 = *(_QWORD**)(result + 120);
    if (v2[1] == *v2) {
      v3 = (unsigned __int64*)&GameData_21c6980;
      v4 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_10;
      }
    }
    else {
      v3 = (unsigned __int64*)(*(_QWORD*)(*(_QWORD*)*v2 + 24LL) + 32LL);
      v4 = game_GameModeData_instance_;
      if (game_GameModeData_instance_ == 0) {
        goto LABEL_10;
      }
    }
    v5 = game_GameVariableTable_Find(*(_QWORD**)(v4 + 48), v3);
    if (v5 != 0) {
      v6 = *(_DWORD*)(v5 + 32) | 0x80;
    LABEL_11:
      if (v2[1] == *v2) {
        v7 = &GameData_21c6980;
      }
      else {
        v7 = (__int64*)(*(_QWORD*)(*(_QWORD*)*v2 + 24LL) + 32LL);
      }
      game_VariableManager_SetFlag((__int64)v7, v6);
    LABEL_15:
      v8 = *(_QWORD*)(v1 + 56);
      if (v8 == 0) {
        goto LABEL_20;
      }
      v9 = std___1___shared_weak_count_lock(v8);
      if (v9 == 0) {
        goto LABEL_20;
      }
      v10 = *(__int64**)(v1 + 48);
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v11 = v9;
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
        std___1___shared_weak_count___release_weak(v11);
      }
      if (v10 == nullptr) {
      LABEL_20:
        v10 = &ui_LayoutAccessor_empty_;
      }
      v12 = **(_QWORD**)(v1 + 120);
      if (*(_QWORD*)(*(_QWORD*)(v1 + 120) + 8LL) == v12) {
        v13 = (unsigned __int64*)&GameData_21c6980;
        v14 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_27;
        }
      }
      else {
        v13 = (unsigned __int64*)(*(_QWORD*)(*(_QWORD*)v12 + 24LL) + 32LL);
        v14 = game_GameModeData_instance_;
        if (game_GameModeData_instance_ == 0) {
          goto LABEL_27;
        }
      }
      v15 = game_GameVariableTable_Find(*(_QWORD**)(v14 + 48), v13);
      if (v15 != 0) {
        v16 = (*(_BYTE*)(v15 + 32) & 0x80) == 0;
        return ui_LayoutAccessor_SetPaneVisible((__int64)v10,
                                                (__int64)"IconNew", v16);
      }
    LABEL_27:
      v16 = 1;
      return ui_LayoutAccessor_SetPaneVisible((__int64)v10, (__int64)"IconNew",
                                              v16);
    }
  LABEL_10:
    v6 = 128;
    goto LABEL_11;
  }
  return result;
}

unsigned __int64 game_facility_186b9a0(unsigned __int64 result, __int64* a2,
                                       __int64 a3, char a4)
{
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64* v11;
  int v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  int v42;
  int v43;
  __int64 v44;
  __int64 v45;
  int v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64* v56;
  int v57;
  __int64 v58;
  __int64 v59;
  __int64* v60;
  bool v61;
  bool v62;
  __int64 v63;
  unsigned __int64 v64;
  __int64* v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  __int64 v70;
  __int64 v71;
  __int64* v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  int v78;
  int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  int v83;
  int v84;
  __int64* v85;
  bool v87;
  __int64 v88;
  __int64* v89;
  __int64* v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  char* v95;
  unsigned __int64 v96;
  unsigned __int64 v97;
  bool v98;
  __int64 v99;
  __int64* v100;
  __int64 v101;
  __int64* v102;
  __int64 v103;
  __int64* v104;
  __int64 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64* v109;
  __int64* v110;
  __int64 v111;
  __int64 v112;
  __int64 v113;
  __int64* v114;
  __int64* v115;
  __int64 v116;
  __int64 v117;
  unsigned __int64 v118;
  unsigned __int64 v119;
  __int64 v120;
  __int64* v121;
  __int64 v122;
  __int64* v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  __int64 v129;
  __int64 v130;

  v7 = (__int64*)result;
  while (2) {
    v8 = v7;
    while (1) {
      while (1) {
        v7 = v8;
        v9 = a2 - v8;
        if (v9 > 2) {
          if (v9 == 3) {
            v75 = *v8;
            v76 = v8[1];
            v77 = *(a2 - 1);
            v78 = *(_DWORD*)(v76 + 40);
            v79 = *(_DWORD*)(v77 + 40);
            if (v78 > (signed __int32)*(_DWORD*)(*v8 + 40)) {
              if (v79 <= v78) {
                *v8 = v76;
                v8[1] = v75;
                v127 = *(a2 - 1);
                if ((signed __int32)*(_DWORD*)(v127 + 40) >
                    (signed __int32)*(_DWORD*)(v75 + 40)) {
                  v8[1] = v127;
                  *(a2 - 1) = v75;
                }
              }
              else {
                *v8 = v77;
                *(a2 - 1) = v75;
              }
              return result;
            }
            if (v79 <= v78) {
              return result;
            }
            v8[1] = v77;
            *(a2 - 1) = v76;
            v124 = v8[1];
          LABEL_182:
            v130 = *v8;
            if ((signed __int32)*(_DWORD*)(v124 + 40) >
                (signed __int32)*(_DWORD*)(*v8 + 40)) {
              *v8 = v124;
              v8[1] = v130;
            }
            return result;
          }
          if (v9 != 4) {
            if (v9 == 5) {
              return (unsigned __int64)game_facility_186c3e0(v8, v8 + 1, v8 + 2,
                                                             v8 + 3, a2 - 1);
            }
            goto LABEL_10;
          }
          v81 = *v8;
          v80 = v8[1];
          v82 = v8[2];
          v83 = *(_DWORD*)(v80 + 40);
          v84 = *(_DWORD*)(v82 + 40);
          if (v83 <= (signed __int32)*(_DWORD*)(*v8 + 40)) {
            if (v84 > v83) {
              v8[1] = v82;
              v8[2] = v80;
              if ((signed __int32)*(_DWORD*)(v82 + 40) >
                  (signed __int32)*(_DWORD*)(v81 + 40)) {
                *v8 = v82;
                v8[1] = v81;
              }
              goto LABEL_179;
            }
          }
          else {
            if (v84 > v83) {
              *v8 = v82;
            LABEL_177:
              v8[2] = v81;
              v80 = v81;
              goto LABEL_179;
            }
            *v8 = v80;
            v8[1] = v81;
            if ((signed __int32)*(_DWORD*)(v82 + 40) >
                (signed __int32)*(_DWORD*)(v81 + 40)) {
              v8[1] = v82;
              goto LABEL_177;
            }
          }
          v80 = v82;
        LABEL_179:
          v128 = *(a2 - 1);
          if ((signed __int32)*(_DWORD*)(v128 + 40) <=
              (signed __int32)*(_DWORD*)(v80 + 40)) {
            return result;
          }
          v8[2] = v128;
          *(a2 - 1) = v80;
          v129 = v8[1];
          v124 = v8[2];
          if ((signed __int32)*(_DWORD*)(v124 + 40) <=
              (signed __int32)*(_DWORD*)(v129 + 40)) {
            return result;
          }
          v8[1] = v124;
          v8[2] = v129;
          goto LABEL_182;
        }
        if ((unsigned __int64)v9 < 2) {
          return result;
        }
        if (v9 == 2) {
          v73 = *(a2 - 1);
          v74 = *v8;
          if ((signed __int32)*(_DWORD*)(v73 + 40) >
              (signed __int32)*(_DWORD*)(*v8 + 40)) {
            *v8 = v73;
            *(a2 - 1) = v74;
          }
          return result;
        }
      LABEL_10:
        if (v9 <= 23) {
          v85 = v8 + 1;
          v87 = v8 == a2 || v85 == a2;
          if ((a4 & 1) != 0) {
            if (!v87) {
              v88 = 8;
              v89 = v8;
              do {
                v92 = *v89;
                v91 = v89[1];
                v89 = v85;
                if ((signed __int32)*(_DWORD*)(v91 + 40) >
                    (signed __int32)*(_DWORD*)(v92 + 40)) {
                  v93 = v88;
                  do {
                    v94 = v93 - 8;
                    *(__int64*)((char*)v8 + v93) = v92;
                    if (v93 == 8) {
                      v90 = v8;
                      goto LABEL_124;
                    }
                    v95 = (char*)v8 + v93;
                    v93 -= 8;
                    v92 = *((_QWORD*)v95 - 2);
                  } while ((signed __int32)*(_DWORD*)(v91 + 40) >
                           (signed __int32)*(_DWORD*)(v92 + 40));
                  v90 = (__int64*)((char*)v8 + v94);
                LABEL_124:
                  *v90 = v91;
                }
                v85 = v89 + 1;
                v88 += 8;
              } while (v89 + 1 != a2);
            }
          }
          else if (!v87) {
            do {
              v126 = *v7;
              v125 = v7[1];
              v7 = v85;
              if ((signed __int32)*(_DWORD*)(v125 + 40) >
                  (signed __int32)*(_DWORD*)(v126 + 40)) {
                do {
                  *v85 = v126;
                  v126 = *(v85 - 2);
                  --v85;
                } while ((signed __int32)*(_DWORD*)(v125 + 40) >
                         (signed __int32)*(_DWORD*)(v126 + 40));
                *v85 = v125;
              }
              v85 = v7 + 1;
            } while (v7 + 1 != a2);
          }
          return result;
        }
        if (a3 == 0) {
          if (v8 != a2) {
            v96 = (unsigned __int64)(v9 - 2) >> 1;
            v97 = v96;
            do {
              if (v96 >= v97) {
                v99 = (2 * (v97 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                v100 = &v8[v99];
                v101 = *v100;
                if ((__int64)(2 * v97 + 2) < v9 &&
                    (signed __int32)*(_DWORD*)(v101 + 40) >
                        (signed __int32)*(_DWORD*)(v100[1] + 40)) {
                  v101 = v100[1];
                  ++v100;
                  v99 = 2 * v97 + 2;
                }
                v102 = &v8[v97];
                v103 = *v102;
                if ((signed __int32)*(_DWORD*)(v101 + 40) <=
                    (signed __int32)*(_DWORD*)(*v102 + 40)) {
                  do {
                    v104 = v100;
                    *v102 = v101;
                    if ((__int64)v96 < v99) {
                      break;
                    }
                    v105 = (2 * (v99 & 0x3FFFFFFFFFFFFFFFLL)) | 1;
                    v106 = 2 * v99 + 2;
                    v100 = &v8[v105];
                    v101 = *v100;
                    if (v106 < v9 &&
                        (signed __int32)*(_DWORD*)(v101 + 40) >
                            (signed __int32)*(_DWORD*)(v100[1] + 40)) {
                      v101 = v100[1];
                      ++v100;
                      v105 = v106;
                    }
                    result = *(unsigned int*)(v103 + 40);
                    v102 = v104;
                    v99 = v105;
                  } while ((signed __int32)*(_DWORD*)(v101 + 40) <=
                           (int)result);
                  *v104 = v103;
                }
              }
              v98 = (__int64)v97-- <= 0;
            } while (!v98);
            do {
              v107 = *v8;
              v108 = 0;
              v109 = v8;
              do {
                v115 = &v109[v108];
                v114 = v115 + 1;
                v113 = v115[1];
                v116 = (2 * v108) | 1;
                v108 = 2 * v108 + 2;
                if (v108 < v9) {
                  v112 = v115[2];
                  v110 = v115 + 2;
                  v111 = v112;
                  result = *(unsigned int*)(v112 + 40);
                  if ((signed __int32)*(_DWORD*)(v113 + 40) <= (int)result) {
                    v108 = v116;
                  }
                  else {
                    v113 = v111;
                    v114 = v110;
                  }
                }
                else {
                  v108 = v116;
                }
                *v109 = v113;
                v109 = v114;
              } while (v108 <= (__int64)((unsigned __int64)(v9 - 2) >> 1));
              if (v114 == --a2) {
                *v114 = v107;
              }
              else {
                *v114 = *a2;
                *a2 = v107;
                v117 = ((char*)v114 - (char*)v8 + 8) >> 3;
                v98 = v117 < 2;
                v118 = v117 - 2;
                if (!v98) {
                  v119 = v118 >> 1;
                  v120 = *v114;
                  v121 = &v8[v119];
                  v122 = *v121;
                  if ((signed __int32)*(_DWORD*)(*v121 + 40) >
                      (signed __int32)*(_DWORD*)(*v114 + 40)) {
                    do {
                      v123 = v121;
                      *v114 = v122;
                      if (v119 == 0) {
                        break;
                      }
                      v119 = (v119 - 1) >> 1;
                      v114 = v121;
                      v121 = &v8[v119];
                      v122 = *v121;
                    } while ((signed __int32)*(_DWORD*)(*v121 + 40) >
                             (signed __int32)*(_DWORD*)(v120 + 40));
                    *v123 = v120;
                  }
                }
              }
              v98 = v9-- <= 2;
            } while (!v98);
          }
          return result;
        }
        v10 = *(a2 - 1);
        v11 = &v8[(unsigned __int64)v9 >> 1];
        v12 = *(_DWORD*)(v10 + 40);
        if ((unsigned __int64)v9 >= 0x81) {
          v13 = *v11;
          v14 = *v8;
          v15 = *(_DWORD*)(*v11 + 40);
          if (v15 <= (signed __int32)*(_DWORD*)(*v8 + 40)) {
            if (v12 > v15) {
              *v11 = v10;
              *(a2 - 1) = v13;
              v19 = *v8;
              if ((signed __int32)*(_DWORD*)(*v11 + 40) >
                  (signed __int32)*(_DWORD*)(*v8 + 40)) {
                *v8 = *v11;
                *v11 = v19;
              }
            }
          }
          else {
            if (v12 <= v15) {
              *v8 = v13;
              *v11 = v14;
              v21 = *(a2 - 1);
              if ((signed __int32)*(_DWORD*)(v21 + 40) <=
                  (signed __int32)*(_DWORD*)(v14 + 40)) {
                goto LABEL_28;
              }
              *v11 = v21;
            }
            else {
              *v8 = v10;
            }
            *(a2 - 1) = v14;
          }
        LABEL_28:
          v22 = *(v11 - 1);
          v23 = v8[1];
          v24 = *(a2 - 2);
          v25 = *(_DWORD*)(v22 + 40);
          v26 = *(_DWORD*)(v24 + 40);
          if (v25 <= (signed __int32)*(_DWORD*)(v23 + 40)) {
            if (v26 > v25) {
              *(v11 - 1) = v24;
              *(a2 - 2) = v22;
              v27 = *(v11 - 1);
              v28 = v8[1];
              if ((signed __int32)*(_DWORD*)(v27 + 40) >
                  (signed __int32)*(_DWORD*)(v28 + 40)) {
                v8[1] = v27;
                *(v11 - 1) = v28;
              }
            }
          }
          else {
            if (v26 <= v25) {
              v8[1] = v22;
              *(v11 - 1) = v23;
              v30 = *(a2 - 2);
              if ((signed __int32)*(_DWORD*)(v30 + 40) <=
                  (signed __int32)*(_DWORD*)(v23 + 40)) {
                goto LABEL_40;
              }
              *(v11 - 1) = v30;
            }
            else {
              v8[1] = v24;
            }
            *(a2 - 2) = v23;
          }
        LABEL_40:
          v31 = v11[1];
          v32 = v8[2];
          v33 = *(a2 - 3);
          v34 = *(_DWORD*)(v31 + 40);
          v35 = *(_DWORD*)(v33 + 40);
          if (v34 <= (signed __int32)*(_DWORD*)(v32 + 40)) {
            if (v35 > v34) {
              v11[1] = v33;
              *(a2 - 3) = v31;
              v36 = v11[1];
              v37 = v8[2];
              if ((signed __int32)*(_DWORD*)(v36 + 40) >
                  (signed __int32)*(_DWORD*)(v37 + 40)) {
                v8[2] = v36;
                v11[1] = v37;
              }
            }
          }
          else {
            if (v35 <= v34) {
              v8[2] = v31;
              v11[1] = v32;
              v38 = *(a2 - 3);
              if ((signed __int32)*(_DWORD*)(v38 + 40) <=
                  (signed __int32)*(_DWORD*)(v32 + 40)) {
                goto LABEL_49;
              }
              v11[1] = v38;
            }
            else {
              v8[2] = v33;
            }
            *(a2 - 3) = v32;
          }
        LABEL_49:
          v39 = *(v11 - 1);
          v40 = *v11;
          v41 = v11[1];
          v42 = *(_DWORD*)(*v11 + 40);
          v43 = *(_DWORD*)(v41 + 40);
          if (v42 <= (signed __int32)*(_DWORD*)(v39 + 40)) {
            if (v43 <= v42) {
              goto LABEL_55;
            }
            *v11 = v41;
            v11[1] = v40;
            if ((signed __int32)*(_DWORD*)(v41 + 40) >
                (signed __int32)*(_DWORD*)(v39 + 40)) {
              *(v11 - 1) = v41;
              *v11 = v39;
            LABEL_59:
              v44 = *v8;
              *v8 = v39;
              *v11 = v44;
              goto LABEL_60;
            }
          }
          else {
            if (v43 > v42) {
              *(v11 - 1) = v41;
              v11[1] = v39;
            LABEL_55:
              v39 = v40;
              goto LABEL_59;
            }
            *(v11 - 1) = v40;
            *v11 = v39;
            if ((signed __int32)*(_DWORD*)(v41 + 40) <=
                (signed __int32)*(_DWORD*)(v39 + 40)) {
              goto LABEL_59;
            }
            *v11 = v41;
            v11[1] = v39;
          }
          v39 = v41;
          goto LABEL_59;
        }
        v16 = *v8;
        v17 = *v11;
        v18 = *(_DWORD*)(*v8 + 40);
        if (v18 <= (signed __int32)*(_DWORD*)(*v11 + 40)) {
          if (v12 > v18) {
            *v8 = v10;
            *(a2 - 1) = v16;
            v20 = *v11;
            if ((signed __int32)*(_DWORD*)(*v8 + 40) >
                (signed __int32)*(_DWORD*)(*v11 + 40)) {
              *v11 = *v8;
              *v8 = v20;
            }
          }
        }
        else {
          if (v12 <= v18) {
            *v11 = v16;
            *v8 = v17;
            v29 = *(a2 - 1);
            if ((signed __int32)*(_DWORD*)(v29 + 40) <=
                (signed __int32)*(_DWORD*)(v17 + 40)) {
              goto LABEL_60;
            }
            *v8 = v29;
          }
          else {
            *v11 = v10;
          }
          *(a2 - 1) = v17;
        }
      LABEL_60:
        v45 = *v8;
        --a3;
        if ((a4 & 1) != 0) {
          break;
        }
        v46 = *(_DWORD*)(v45 + 40);
        if ((signed __int32)*(_DWORD*)(*(v8 - 1) + 40) > v46) {
          goto LABEL_63;
        }
        if (v46 <= (signed __int32)*(_DWORD*)(*(a2 - 1) + 40)) {
          v64 = (unsigned __int64)(v8 + 1);
          do {
            v8 = (__int64*)v64;
            if (v64 >= (unsigned __int64)a2) {
              break;
            }
            v64 += 8LL;
          } while (v46 <= (signed __int32)*(_DWORD*)(*v8 + 40));
        }
        else {
          do {
            v63 = v8[1];
            ++v8;
          } while (v46 <= (signed __int32)*(_DWORD*)(v63 + 40));
        }
        v65 = a2;
        if (v8 < a2) {
          v65 = a2;
          do {
            v66 = *--v65;
          } while (v46 > (signed __int32)*(_DWORD*)(v66 + 40));
        }
        if (v8 < v65) {
          v67 = *v8;
          v68 = *v65;
          do {
            *v8 = v68;
            *v65 = v67;
            v69 = *(_DWORD*)(v45 + 40);
            do {
              v70 = v8[1];
              ++v8;
              v67 = v70;
            } while (v69 <= (signed __int32)*(_DWORD*)(v70 + 40));
            do {
              v71 = *--v65;
              v68 = v71;
            } while (v69 > (signed __int32)*(_DWORD*)(v71 + 40));
          } while (v8 < v65);
        }
        v72 = v8 - 1;
        if (v7 != v8 - 1) {
          *v7 = *v72;
        }
        a4 = 0;
        *v72 = v45;
      }
      v46 = *(_DWORD*)(v45 + 40);
    LABEL_63:
      v47 = 0;
      do {
        v48 = &v8[v47++];
        v49 = v48[1];
      } while ((signed __int32)*(_DWORD*)(v49 + 40) > v46);
      v50 = &v8[v47];
      v51 = a2;
      if (v47 == 1) {
        v51 = a2;
        do {
          if (v50 >= v51) {
            break;
          }
          v53 = *--v51;
        } while ((signed __int32)*(_DWORD*)(v53 + 40) <= v46);
      }
      else {
        do {
          v52 = *--v51;
        } while ((signed __int32)*(_DWORD*)(v52 + 40) <= v46);
      }
      if (v50 >= v51) {
        v60 = v50 - 1;
        if (v8 == v50 - 1) {
          goto LABEL_81;
        }
      LABEL_80:
        *v8 = *v60;
        goto LABEL_81;
      }
      v54 = *v51;
      v55 = &v8[v47];
      v56 = v51;
      do {
        *v55 = v54;
        *v56 = v49;
        v57 = *(_DWORD*)(v45 + 40);
        do {
          v58 = v55[1];
          ++v55;
          v49 = v58;
        } while ((signed __int32)*(_DWORD*)(v58 + 40) > v57);
        do {
          v59 = *--v56;
          v54 = v59;
        } while ((signed __int32)*(_DWORD*)(v59 + 40) <= v57);
      } while (v55 < v56);
      v60 = v55 - 1;
      if (v8 != v55 - 1) {
        goto LABEL_80;
      }
    LABEL_81:
      *v60 = v45;
      if (v50 < v51) {
        goto LABEL_84;
      }
      v61 = game_facility_186c560(v8, v60);
      v8 = v60 + 1;
      v62 = v61;
      result = game_facility_186c560(v60 + 1, a2);
      if ((result & 1) != 0) {
        break;
      }
      if (!v62) {
      LABEL_84:
        result = game_facility_186b9a0((unsigned __int64)v7, v60, a3, a4 & 1);
        a4 = 0;
        v8 = v60 + 1;
      }
    }
    a2 = v60;
    if (!v62) {
      continue;
    }
    return result;
  }
}

__int64* game_facility_186c3e0(__int64* result, __int64* a2, __int64* a3,
                               __int64* a4, __int64* a5)
{
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;

  v5 = *a2;
  v6 = *result;
  v7 = *a3;
  v8 = *(_DWORD*)(*a2 + 40);
  v9 = *(_DWORD*)(*a3 + 40);
  if (v8 <= (signed __int32)*(_DWORD*)(*result + 40)) {
    if (v9 <= v8) {
      v5 = *a3;
    }
    else {
      *a2 = v7;
      *a3 = v5;
      v10 = *result;
      if ((signed __int32)*(_DWORD*)(*a2 + 40) >
          (signed __int32)*(_DWORD*)(*result + 40)) {
        *result = *a2;
        *a2 = v10;
        v5 = *a3;
      }
    }
  }
  else {
    if (v9 > v8) {
      *result = v7;
    LABEL_9:
      *a3 = v6;
      v5 = v6;
      goto LABEL_11;
    }
    *result = v5;
    *a2 = v6;
    v5 = *a3;
    if ((signed __int32)*(_DWORD*)(*a3 + 40) >
        (signed __int32)*(_DWORD*)(v6 + 40)) {
      *a2 = v5;
      goto LABEL_9;
    }
  }
LABEL_11:
  if ((signed __int32)*(_DWORD*)(*a4 + 40) >
      (signed __int32)*(_DWORD*)(v5 + 40)) {
    *a3 = *a4;
    *a4 = v5;
    v11 = *a2;
    if ((signed __int32)*(_DWORD*)(*a3 + 40) >
        (signed __int32)*(_DWORD*)(*a2 + 40)) {
      *a2 = *a3;
      *a3 = v11;
      v12 = *result;
      if ((signed __int32)*(_DWORD*)(*a2 + 40) >
          (signed __int32)*(_DWORD*)(*result + 40)) {
        *result = *a2;
        *a2 = v12;
      }
    }
  }
  v13 = *a4;
  if ((signed __int32)*(_DWORD*)(*a5 + 40) >
      (signed __int32)*(_DWORD*)(*a4 + 40)) {
    *a4 = *a5;
    *a5 = v13;
    v14 = *a3;
    if ((signed __int32)*(_DWORD*)(*a4 + 40) >
        (signed __int32)*(_DWORD*)(*a3 + 40)) {
      *a3 = *a4;
      *a4 = v14;
      v15 = *a2;
      if ((signed __int32)*(_DWORD*)(*a3 + 40) >
          (signed __int32)*(_DWORD*)(*a2 + 40)) {
        *a2 = *a3;
        *a3 = v15;
        v16 = *result;
        if ((signed __int32)*(_DWORD*)(*a2 + 40) >
            (signed __int32)*(_DWORD*)(*result + 40)) {
          *result = *a2;
          *a2 = v16;
        }
      }
    }
  }
  return result;
}

bool game_facility_186c560(__int64* a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  int v9;
  __int64 v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  int v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  __int64 v24;
  int v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;

  v2 = a2 - a1;
  if (v2 > 2) {
    if (v2 == 3) {
      v5 = *a1;
      v6 = a1[1];
      v7 = *(a2 - 1);
      v8 = *(_DWORD*)(v6 + 40);
      v9 = *(_DWORD*)(v7 + 40);
      if (v8 > (signed __int32)*(_DWORD*)(*a1 + 40)) {
        if (v9 <= v8) {
          *a1 = v6;
          a1[1] = v5;
          v22 = *(a2 - 1);
          if ((signed __int32)*(_DWORD*)(v22 + 40) >
              (signed __int32)*(_DWORD*)(v5 + 40)) {
            a1[1] = v22;
            *(a2 - 1) = v5;
          }
        }
        else {
          *a1 = v7;
          *(a2 - 1) = v5;
        }
        return true;
      }
      if (v9 <= v8) {
        return true;
      }
      a1[1] = v7;
      *(a2 - 1) = v6;
      v21 = a1[1];
    LABEL_49:
      v34 = *a1;
      if ((signed __int32)*(_DWORD*)(v21 + 40) >
          (signed __int32)*(_DWORD*)(*a1 + 40)) {
        *a1 = v21;
        a1[1] = v34;
      }
      return true;
    }
    if (v2 != 4) {
      if (v2 != 5) {
        goto LABEL_13;
      }
      game_facility_186c3e0(a1, a1 + 1, a1 + 2, a1 + 3, a2 - 1);
      return true;
    }
    v17 = *a1;
    v16 = a1[1];
    v18 = a1[2];
    v19 = *(_DWORD*)(v16 + 40);
    v20 = *(_DWORD*)(v18 + 40);
    if (v19 <= (signed __int32)*(_DWORD*)(*a1 + 40)) {
      if (v20 > v19) {
        a1[1] = v18;
        a1[2] = v16;
        if ((signed __int32)*(_DWORD*)(v18 + 40) >
            (signed __int32)*(_DWORD*)(v17 + 40)) {
          *a1 = v18;
          a1[1] = v17;
        }
        goto LABEL_46;
      }
    }
    else {
      if (v20 > v19) {
        *a1 = v18;
      LABEL_44:
        a1[2] = v17;
        v16 = v17;
        goto LABEL_46;
      }
      *a1 = v16;
      a1[1] = v17;
      if ((signed __int32)*(_DWORD*)(v18 + 40) >
          (signed __int32)*(_DWORD*)(v17 + 40)) {
        a1[1] = v18;
        goto LABEL_44;
      }
    }
    v16 = v18;
  LABEL_46:
    v32 = *(a2 - 1);
    if ((signed __int32)*(_DWORD*)(v32 + 40) <=
        (signed __int32)*(_DWORD*)(v16 + 40)) {
      return true;
    }
    a1[2] = v32;
    *(a2 - 1) = v16;
    v33 = a1[1];
    v21 = a1[2];
    if ((signed __int32)*(_DWORD*)(v21 + 40) <=
        (signed __int32)*(_DWORD*)(v33 + 40)) {
      return true;
    }
    a1[1] = v21;
    a1[2] = v33;
    goto LABEL_49;
  }
  if ((unsigned __int64)v2 < 2) {
    return true;
  }
  if (v2 == 2) {
    v3 = *(a2 - 1);
    v4 = *a1;
    if ((signed __int32)*(_DWORD*)(v3 + 40) >
        (signed __int32)*(_DWORD*)(*a1 + 40)) {
      *a1 = v3;
      *(a2 - 1) = v4;
    }
    return true;
  }
LABEL_13:
  v11 = a1 + 2;
  v10 = a1[2];
  v12 = *a1;
  v13 = a1[1];
  v14 = *(_DWORD*)(v13 + 40);
  v15 = *(_DWORD*)(v10 + 40);
  if (v14 <= (signed __int32)*(_DWORD*)(*a1 + 40)) {
    if (v15 > v14) {
      a1[1] = v10;
      a1[2] = v13;
      if ((signed __int32)*(_DWORD*)(v10 + 40) >
          (signed __int32)*(_DWORD*)(v12 + 40)) {
        *a1 = v10;
        a1[1] = v12;
      }
    }
  }
  else {
    if (v15 <= v14) {
      *a1 = v13;
      a1[1] = v12;
      if ((signed __int32)*(_DWORD*)(v10 + 40) <=
          (signed __int32)*(_DWORD*)(v12 + 40)) {
        goto LABEL_32;
      }
      a1[1] = v10;
    }
    else {
      *a1 = v10;
    }
    a1[2] = v12;
  }
LABEL_32:
  v23 = a1 + 3;
  if (a1 + 3 == a2) {
    return true;
  }
  v24 = 24;
  v25 = 0;
  while (1) {
    v27 = *v23;
    v28 = *v11;
    if ((signed __int32)*(_DWORD*)(*v23 + 40) >
        (signed __int32)*(_DWORD*)(v28 + 40)) {
      v29 = v24;
      do {
        v30 = v29 - 8;
        *(__int64*)((char*)a1 + v29) = v28;
        if (v29 == 8) {
          v26 = a1;
          goto LABEL_35;
        }
        v31 = (char*)a1 + v29;
        v29 -= 8;
        v28 = *((_QWORD*)v31 - 2);
      } while ((signed __int32)*(_DWORD*)(v27 + 40) >
               (signed __int32)*(_DWORD*)(v28 + 40));
      v26 = (__int64*)((char*)a1 + v30);
    LABEL_35:
      ++v25;
      *v26 = v27;
      if (v25 == 8) {
        return v23 + 1 == a2;
      }
    }
    v11 = v23++;
    v24 += 8;
    if (v23 == a2) {
      return true;
    }
  }
}

__int64 game_facility_1873150(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  unsigned __int16* v5;
  char v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  char v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  atomic_ullong* v14;
  __int64* v15;
  __int64 result;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  struct {
    __int64 v25;
    __int64 v26;
  } v25_;

  BlacksmithMenuItem_Info_Unknown55((__int64)a1);
  v2 = a1[7];
  if (v2 == 0) {
    goto LABEL_5;
  }
  v3 = std___1___shared_weak_count_lock(v2);
  if (v3 == 0) {
    goto LABEL_5;
  }
  v4 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v4 != nullptr) {
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v22 = v3;
  (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
  std___1___shared_weak_count___release_weak(v22);
  if (v4 == nullptr) {
  LABEL_5:
    v4 = &ui_LayoutAccessor_empty_;
  }
LABEL_6:
  v5 = (unsigned __int16*)(*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
  v6 = (*(__int64 (**)(_QWORD*))(*a1 + 464LL))(a1);
  Util_15792c0(v4, v5, 0, 1u, 0, "L_Icon", (__int64)"T_Txt", v6 & 1);
  v7 = a1[7];
  if (v7 == 0) {
    goto LABEL_10;
  }
  v8 = std___1___shared_weak_count_lock(v7);
  if (v8 == 0) {
    goto LABEL_10;
  }
  v9 = (__int64*)a1[6];
  if (atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                       0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v9 != nullptr) {
      goto LABEL_11;
    }
    goto LABEL_10;
  }
  v23 = v8;
  (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
  std___1___shared_weak_count___release_weak(v23);
  if (v9 == nullptr) {
  LABEL_10:
    v9 = &ui_LayoutAccessor_empty_;
  }
LABEL_11:
  v10 = (*(__int64 (**)(_QWORD*))(*a1 + 592LL))(a1);
  ui_LayoutAccessor_SetPaneVisible((__int64)v9, (__int64)"IconNew", v10 & 1);
  v11 = a1[7];
  if (v11 == 0) {
    goto LABEL_15;
  }
  v12 = std___1___shared_weak_count_lock(v11);
  if (v12 == 0) {
    goto LABEL_15;
  }
  v13 = v12;
  v14 = (atomic_ullong*)(v12 + 8);
  v15 = (__int64*)a1[6];
  if (atomic_fetch_add(v14, 0xFFFFFFFFFFFFFFFFLL) != 0) {
    if (v15 != nullptr) {
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  v24 = v15;
  (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
  std___1___shared_weak_count___release_weak(v13);
  v15 = v24;
  if (v24 == nullptr) {
  LABEL_15:
    v15 = &ui_LayoutAccessor_empty_;
  }
LABEL_16:
  LayoutAccessor_1560070((void*)(&v25_.v25), v15, "L_Icon");
  result = v25_.v26;
  if (v25_.v26 == 0) {
    return result;
  }
  v17 = std___1___shared_weak_count_lock(v25_.v26);
  v18 = v25_.v25;
  result = v25_.v26;
  if (v25_.v26 != 0) {
    result = std___1___shared_weak_count___release_weak(v25_.v26);
  }
  if (v17 != 0 && v18 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 16), 1u,
                              memory_order_relaxed);
    v19 = (*(__int64 (**)(_QWORD*))(*a1 + 560LL))(a1);
    v20 = std___1___shared_weak_count_lock(v17);
    if (v20 != 0) {
      v21 = v20;
      ui_LayoutAccessor_SetPaneVisible(v18, (__int64)"IconLock",
                                       (*(_BYTE*)(v19 + 3) & 0x10) != 0);
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        std___1___shared_weak_count___release_weak(v21);
      }
    }
    result = std___1___shared_weak_count___release_weak(v17);
  }
  else if (v17 == 0) {
    return result;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
    return std___1___shared_weak_count___release_weak(v17);
  }
  return result;
}

_DWORD* game_facility_187c5b0(__int64* a1, unsigned __int16* a2, int a3,
                              __int64 a4, char a5)
{
  _QWORD* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  char* v13;
  __int64 v14;
  char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  _DWORD* result;
  __int64 v24;
  __int64* v25;
  int v26;
  _DWORD* v27;
  int v28;
  struct {
    __int64* v29;
    int* v30;
    char gap16_[16];
    __int64** v31;
  } v29_;
  int v32;

  Util_15792c0(a1, a2, 0, 0, 0, "L_Icon", (__int64)"T_Txt", (a5 & 1) == 0);
  v32 = 0;
  v9 = *(_QWORD**)(*(_QWORD*)game_TransporterConst_List_instance__ptr[0] + 8LL);
  v10 = *(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) + 8LL * *a2);
  v29_.v31 = &v29_.v29;
  v29_.v29 = GameData_212d7f0[0] + 2;
  v29_.v30 = &v32;
  game_TransporterConst_List_Impl_EachData(v9, v10, (__int64)&v29_.v29);
  if (v29_.v31 == &v29_.v29) {
    v11 = 4;
  }
  else {
    if (v29_.v31 == nullptr) {
      goto LABEL_6;
    }
    v11 = 5;
  }
  ((void (*)(void*))(*v29_.v31)[v11])(v29_.v31);
LABEL_6:
  v12 = v32;
  v13 = game_util_Format("%d", v32);
  v14 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Num_Endurance");
  if (v14 != 0) {
    GameRoutine_156c5d0(v14, (__int64)v13, 0);
  }
  v15 = game_util_Format("%d", a3);
  v16 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_MaxNum");
  if (v16 != 0) {
    GameRoutine_156c5d0(v16, (__int64)v15, 0);
  }
  v17 = 60;
  if ((a5 & 1) != 0) {
    v17 = 64;
  }
  v18 = 36;
  if ((a5 & 1) != 0) {
    v18 = 72;
  }
  if (v12 >= a3) {
    v17 = v18;
  }
  v19 = *(_DWORD*)((char*)GameData_212da30 + v17);
  v20 = ui_LayoutAccessor_FindTextBox(a1, (__int64)"T_Num_Endurance");
  if (v20 != 0) {
    v21 = Pane_58f8a0(v20);
    if (v21 != 0) {
      *(_DWORD*)(v21 + 12) = v19;
    }
  }
  v22 = ui_LayoutAccessor_FindAlignment(a1, (__int64)"A_Num");
  if (v22 != 0) {
    Alignment_56b600(v22);
  }
  LayoutAccessor_1560070((void*)(&v29_.v29), a1, "L_Icon");
  result = v29_.v30;
  if (v29_.v30 != nullptr) {
    v24 = std___1___shared_weak_count_lock((__int64)v29_.v30);
    v25 = v29_.v29;
    result = v29_.v30;
    if (v29_.v30 != nullptr) {
      result = (_DWORD*)std___1___shared_weak_count___release_weak(
          (__int64)v29_.v30);
    }
    if (v24 != 0 && v25 != nullptr) {
      result = (_DWORD*)ui_LayoutAccessor_FindPane(v25, (__int64)"Icon");
      if (result != nullptr) {
        result = (_DWORD*)__dynamic_cast(result, GameData_212d670[0],
                                         GameData_212d678[0], 0);
        if (result != nullptr) {
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                                    memory_order_acquire) &
               1) == 0) {
            v27 = result;
            v28 = __cxa_guard_acquire((__int64)&GameData_22594f0);
            result = v27;
            if (v28 != 0) {
              GameData_22594e8 = -1;
              __cxa_guard_release((__int64)&GameData_22594f0);
              result = v27;
            }
          }
          v26 = GameData_22594e8;
          result = (_DWORD*)(*(__int64 (**)(_DWORD*, _QWORD))(*(_QWORD*)result +
                                                              88LL))(result, 0);
          if (result != nullptr) {
            result[3] = v26;
          }
        }
      }
    }
    else if (v24 == 0) {
      return result;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v24 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v24 + 16LL))(v24);
      return (_DWORD*)std___1___shared_weak_count___release_weak(v24);
    }
  }
  return result;
}

_QWORD* game_facility_187c870(unsigned __int16* a1, char a2, __int64 a3)
{
  _QWORD* result;
  __int64 v5;
  struct {
    _QWORD v6[4];
    _QWORD* v7;
  } v6_;
  _QWORD v8[2];
  char v9;

  v9 = a2;
  v8[0] = &v9;
  v8[1] = a3;
  if (a1 != nullptr) {
    game_facility_187c960((__int64)v8, 0, a1 + 414);
    game_facility_187c960((__int64)v8, 1, a1 + 418);
    game_facility_187c960((__int64)v8, 2, a1 + 422);
    game_facility_187c960((__int64)v8, 3, a1 + 426);
    game_facility_187c960((__int64)v8, 4, a1 + 430);
    return (_QWORD*)game_facility_187c960((__int64)v8, 5, a1 + 434);
  }
  v6_.v6[0] = GameData_20fa440;
  v6_.v6[1] = v8;
  v6_.v7 = v6_.v6;
  game_gameui_Util_EachItemFromTransporter((__int64)v6_.v6);
  result = v6_.v7;
  if (v6_.v7 == v6_.v6) {
    v5 = 32;
  }
  else {
    if (v6_.v7 == nullptr) {
      return result;
    }
    v5 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(__int64))(*v6_.v7 + v5))((__int64)v6_.v7);
}

__int64 game_facility_187c960(__int64 result, __int64 a2, unsigned __int16* a3)
{
  __int64 v3;
  int v4;
  __int64* v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;

  v3 = result;
  v4 = **(unsigned __int8**)result;
  if (**(_BYTE**)result == 0) {
  LABEL_4:
    result = game_facility_BlacksmithMenuUtil_CanRefine(a3, a2);
    if ((result & 1) != 0) {
      v5 = *(__int64**)(*(_QWORD*)(v3 + 8) + 32LL);
      if (v5 != nullptr) {
        v6 = *v5;
        return (*(__int64 (**)(__int64))(v6 + 48))((__int64)v5);
      }
      goto LABEL_19;
    }
    return result;
  }
  if (v4 != 1) {
    if (v4 != 2) {
      if (*(unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                         8LL * *a3) +
                              72LL) <= 7u &&
          (*((_BYTE*)a3 + 3) & 0x10) == 0) {
        v8 = *(__int64**)(*(_QWORD*)(result + 8) + 32LL);
        if (v8 != nullptr) {
          v6 = *v8;
          return (*(__int64 (**)(__int64))(v6 + 48))((__int64)v8);
        }
        goto LABEL_19;
      }
      return result;
    }
    goto LABEL_4;
  }
  if (((*((_BYTE*)a3 + 3) & 8) != 0 || *((_BYTE*)a3 + 2) != 0) &&
      (*((_BYTE*)a3 + 3) & 0x10) == 0 &&
      *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                       8LL * *a3) +
                            24LL) +
                 512LL) != 0) {
    v7 = *(__int64**)(*(_QWORD*)(result + 8) + 32LL);
    if (v7 != nullptr) {
      v6 = *v7;
      return (*(__int64 (**)(__int64))(v6 + 48))((__int64)v7);
    }
  LABEL_19:
    GameRoutine_60a310();
  }
  return result;
}

void game_facility_194f1d0(__int64 a1)
{
  _QWORD* v2;

  *(_QWORD*)a1 = GameData_2118c88;
  *(_QWORD*)(a1 + 152) = GameData_2118d38;
  v2 = (_QWORD*)(a1 + 152);
  FacilitySceneBase_1958ed0(a1 + 152, a1);
  *v2 = game_facility_FacilitySceneBase_vtable;
  if (GameData_21f4000 != 0 && GameData_2241730-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 24LL))(
        (__int64)GameData_21f4000);
    if (GameData_21f4000 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 8LL))(
          GameData_21f4000);
    }
    GameData_21f4000 = 0;
  }
  game_facility_ReleaseGroups();
  GameData_226bb60 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((__int64*)(a1 + 88));
}

void game_facility_194f2b0(__int64 a1)
{
  _QWORD* v2;
  __int64 v4;

  *(_QWORD*)a1 = GameData_2118c88;
  *(_QWORD*)(a1 + 152) = GameData_2118d38;
  v2 = (_QWORD*)(a1 + 152);
  FacilitySceneBase_1958ed0(a1 + 152, a1);
  *v2 = game_facility_FacilitySceneBase_vtable;
  if (GameData_21f4000 != 0 && GameData_2241730-- <= 1) {
    (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 24LL))(
        (__int64)GameData_21f4000);
    if (GameData_21f4000 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_21f4000 + 8LL))(
          GameData_21f4000);
    }
    GameData_21f4000 = 0;
  }
  game_facility_ReleaseGroups();
  GameData_226bb60 = 0;
  *(_QWORD*)a1 = game_ProcInst_vtable;
  if ((*(_WORD*)(a1 + 136) & 0x100) != 0) {
    *(_WORD*)(a1 + 136) &= ~0x100u;
  }
  game_ProcInst_Unregister(a1);
  GameRoutine_658c00((__int64*)(a1 + 88));
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v4,
                                a1);
}

void game_facility_194f6c0(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  unsigned int* v8;
  __int64 v9;
  _QWORD* v10;
  unsigned __int64 v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  signed __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  unsigned int v29;
  unsigned int v30;
  __int64 v31;
  __int64 v32;
  _QWORD* v33;
  unsigned __int64 v34;
  int v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  signed __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned int v51;
  unsigned int v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  struct {
    __int64 v56[4];
    __int64* v57;
  } v56_;
  struct {
    __int64 v58;
    __int64 v59;
    __int64 v60;
    __int64 v61;
    __int64 v62;
    char gap96_[48];
    __int64 v63;
    __int64 v64;
    __int64 v65;
    __int64 v66;
  } v58_;

  v2 = *(_QWORD*)(*GameData_212c790 + 8);
  v3 = *(_DWORD*)(v2 + 56);
  v4 = *(__int64**)(v2 + 8);
  v5 = *(__int64**)(v2 + 16);
  if (v3 < 0) {
    for (; v4 != v5; ++v4) {
      v6 = *v4;
      if (*(_QWORD*)(*v4 + 96) == 0 && *(_QWORD*)(v6 + 552) == 0) {
        goto LABEL_11;
      }
    }
  LABEL_7:
    v8 = game_gmap_SpotMgr_GetCurrentSpot();
    goto LABEL_12;
  }
  if (v4 == v5) {
    goto LABEL_7;
  }
  while (1) {
    v7 = *v4++;
    v6 = v7;
    if (*(_DWORD*)(v7 + 84) == v3) {
      break;
    }
    if (v4 == v5) {
      goto LABEL_7;
    }
  }
LABEL_11:
  v8 = *(unsigned int**)v6;
LABEL_12:
  *(_QWORD*)(a1 + 24) = v8;
  *(_QWORD*)(a1 + 32) = game_facility_94c100((__int64)v8);
  *(_BYTE*)(a1 + 40) = GameHr_1327400(*(_QWORD**)(a1 + 24)) & 1;
  *(_DWORD*)(a1 + 44) = *(_DWORD*)(*(_QWORD*)(GameData_21c96f8 + 16) + 24LL);
  v58_.v61 = v58_.v63;
  v58_.v62 = v58_.v64;
  v58_.v66 = v58_.v65;
  *(_QWORD*)(a1 + 8) = *(_QWORD*)a1;
  v9 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v9 = *(_QWORD*)(game_GameModeData_instance_ + 96);
  }
  v56_.v56[0] = v9;
  LODWORD(v58_.v58) = 241;
  v10 = game_UnitPool_Find_6ead60(v56_.v56, &v58_.v58);
  v12 = *(_QWORD**)(a1 + 8);
  v11 = *(_QWORD*)(a1 + 16);
  v13 = (__int64)v10;
  if ((unsigned __int64)v12 >= v11) {
    v15 = *(_QWORD*)a1;
    v16 = (signed __int64)v12 - *(_QWORD*)a1;
    v17 = (v16 >> 3) + 1;
    if (v17 >> 61 != 0) {
    LABEL_69:
      GameRoutine_6c1f60();
    }
    v18 = v11 - v15;
    if (v18 >> 2 > v17) {
      v17 = v18 >> 2;
    }
    if ((unsigned __int64)v18 >= 0x7FFFFFFFFFFFFFF8LL) {
      v19 = 0x1FFFFFFFFFFFFFFFLL;
    }
    else {
      v19 = v17;
    }
    if (v19 != 0) {
      if (v19 >> 61 != 0) {
      LABEL_70:
        GameRoutine_60a210();
      }
      v20 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v19, 16, 0);
    }
    else {
      v20 = 0;
    }
    v21 = v20 + 8 * v19;
    v22 = v20 + v16 - 8 * (v16 >> 3);
    *(_QWORD*)(v20 + v16) = v13;
    v14 = v20 + v16 + 8;
    memcpy(v22, v15, v16);
    *(_QWORD*)a1 = v22;
    *(_QWORD*)(a1 + 8) = v14;
    *(_QWORD*)(a1 + 16) = v21;
    if (v15 != 0) {
      v23 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v23 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v23, v15);
    }
  }
  else {
    *v12 = v10;
    v14 = (__int64)(v12 + 1);
  }
  v24 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 8) = v14;
  v58_.v59 = 0;
  v58_.v60 = 0;
  v58_.v58 = 0;
  v56_.v56[0] = (__int64)GameData_2118e20;
  v56_.v56[1] = a1;
  v56_.v56[2] = (__int64)&v58_.v58;
  v56_.v56[3] = v13;
  v56_.v57 = v56_.v56;
  game_gmap_TroopMgr_EachPlayerTroop(v24, (__int64)v56_.v56);
  if (v56_.v57 == v56_.v56) {
    v25 = 32;
  }
  else {
    if (v56_.v57 == nullptr) {
      goto LABEL_35;
    }
    v25 = 40;
  }
  (*(void (**)(__int64))(*v56_.v57 + v25))((__int64)v56_.v57);
LABEL_35:
  v26 = (unsigned __int64)(v58_.v59 - v58_.v58) >> 3;
  if ((int)v26 >= 1) {
    v27 = ((unsigned __int64)(v58_.v59 - v58_.v58) >> 3) & 0x7FFFFFFF;
    v28 = 0;
    do {
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v29 = game_map_MapRandom_instance_ ^
            ((_DWORD)game_map_MapRandom_instance_ << 11);
      game_map_MapRandom_instance_ =
          *(__int64*)((char*)&game_map_MapRandom_instance_ + 4);
      GameData_21ca3d8 = GameData_21ca3dc;
      GameData_21ca3dc ^= (v29 >> 8) ^ (GameData_21ca3dc >> 19) ^ v29;
      v30 = GameData_21ca3dc & 0x7FFFFFFF;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      v31 = v58_.v58;
      v32 = *(_QWORD*)(v58_.v58 + 8 * v28);
      *(_QWORD*)(v58_.v58 + 8 * v28++) =
          *(_QWORD*)(v58_.v58 + 8LL * (v30 % (unsigned int)v26));
      *(_QWORD*)(v31 + 8LL * (v30 % (unsigned int)v26)) = v32;
    } while (v27 != v28);
    v26 = (unsigned __int64)(v58_.v59 - v58_.v58) >> 3;
  }
  v33 = *(_QWORD**)(a1 + 8);
  v34 = ((unsigned __int64)v33 - *(_QWORD*)a1) >> 3;
  v35 = 8 - v34;
  if (8 - (int)v34 >= (int)v26) {
    v35 = v26;
  }
  if (v35 >= 1) {
    v36 = 8LL * (unsigned int)v35;
    v37 = 0;
    do {
      v38 = v58_.v58;
      v39 = *(_QWORD*)(a1 + 16);
      if ((unsigned __int64)v33 < v39) {
        *v33++ = *(_QWORD*)(v58_.v58 + v37);
      }
      else {
        v40 = *(_QWORD*)a1;
        v41 = (signed __int64)v33 - *(_QWORD*)a1;
        v42 = (v41 >> 3) + 1;
        if (v42 >> 61 != 0) {
          goto LABEL_69;
        }
        v43 = v39 - v40;
        if (v43 >> 2 > v42) {
          v42 = v43 >> 2;
        }
        if ((unsigned __int64)v43 >= 0x7FFFFFFFFFFFFFF8LL) {
          v44 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v44 = v42;
        }
        if (v44 != 0) {
          if (v44 >> 61 != 0) {
            goto LABEL_70;
          }
          v45 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v44, 16, 0);
        }
        else {
          v45 = 0;
        }
        v46 = *(_QWORD*)(v38 + v37);
        v47 = v45 + 8 * v44;
        v48 = v45 + v41 - 8 * (v41 >> 3);
        *(_QWORD*)(v45 + v41) = v46;
        v33 = (_QWORD*)(v45 + v41 + 8);
        memcpy(v48, v40, v41);
        *(_QWORD*)a1 = v48;
        *(_QWORD*)(a1 + 8) = v33;
        *(_QWORD*)(a1 + 16) = v47;
        if (v40 != 0) {
          v49 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v49 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v49, v40);
        }
      }
      v37 += 8;
      *(_QWORD*)(a1 + 8) = v33;
    } while (v36 != v37);
    v34 = ((unsigned __int64)v33 - *(_QWORD*)a1) >> 3;
  }
  if ((int)v34 >= 1) {
    v50 = 0;
    do {
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v51 = game_map_MapRandom_instance_ ^
            ((_DWORD)game_map_MapRandom_instance_ << 11);
      game_map_MapRandom_instance_ =
          *(__int64*)((char*)&game_map_MapRandom_instance_ + 4);
      GameData_21ca3d8 = GameData_21ca3dc;
      GameData_21ca3dc ^= (v51 >> 8) ^ (GameData_21ca3dc >> 19) ^ v51;
      v52 = GameData_21ca3dc & 0x7FFFFFFF;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      v53 = *(_QWORD*)a1;
      v54 = *(_QWORD*)(*(_QWORD*)a1 + 8 * v50);
      *(_QWORD*)(v53 + 8 * v50++) =
          *(_QWORD*)(*(_QWORD*)a1 + 8LL * (v52 % (unsigned int)v34));
      *(_QWORD*)(v53 + 8LL * (v52 % (unsigned int)v34)) = v54;
    } while ((v34 & 0x7FFFFFFF) != v50);
  }
  if (v58_.v58 != 0) {
    v58_.v59 = v58_.v58;
    v55 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v55 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v55,
                                  v58_.v58);
  }
}

void game_facility_1952140(__int64 a1)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;

  v2 = (_QWORD*)(a1 + 64);
  v3 = *(_QWORD**)(a1 + 96);
  *(_QWORD*)(a1 + 96) = 0;
  if (v3 == v2) {
    v4 = 32;
  }
  else {
    if (v3 == nullptr) {
      goto LABEL_6;
    }
    v4 = 40;
  }
  (*(void (**)(__int64))(*v3 + v4))((__int64)v3);
LABEL_6:
  v5 = *(_QWORD*)(a1 + 112);
  v6 = *(_QWORD*)(a1 + 120);
  v7 = v5;
  if (v5 != v6) {
    while (1) {
      v9 = *(_QWORD**)(v6 - 16);
      *(_QWORD*)(v6 - 16) = 0;
      if ((_QWORD*)(v6 - 48) == v9) {
        v10 = 32;
      }
      else {
        if (v9 == nullptr) {
          goto LABEL_11;
        }
        v10 = 40;
      }
      (*(void (**)(__int64))(*v9 + v10))((__int64)v9);
      v11 = *(_QWORD**)(v6 - 16);
      if ((_QWORD*)(v6 - 48) == v11) {
        v8 = 32;
      }
      else {
        if (v11 == nullptr) {
          goto LABEL_11;
        }
        v8 = 40;
      }
      (*(void (**)(__int64))(*v11 + v8))((__int64)v11);
    LABEL_11:
      v6 -= 64;
      if (v6 == v5) {
        v7 = *(_QWORD*)(a1 + 112);
        *(_QWORD*)(a1 + 120) = v5;
        if (v7 == 0) {
          goto LABEL_36;
        }
        goto LABEL_20;
      }
    }
  }
  *(_QWORD*)(a1 + 120) = v5;
  if (v5 == 0) {
    goto LABEL_36;
  }
LABEL_20:
  if (v7 == v5) {
    *(_QWORD*)(a1 + 120) = v7;
    goto LABEL_33;
  }
  do {
    v13 = *(_QWORD**)(v5 - 16);
    *(_QWORD*)(v5 - 16) = 0;
    if ((_QWORD*)(v5 - 48) == v13) {
      v14 = 32;
    }
    else {
      if (v13 == nullptr) {
        goto LABEL_24;
      }
      v14 = 40;
    }
    (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
    v15 = *(_QWORD**)(v5 - 16);
    if ((_QWORD*)(v5 - 48) == v15) {
      v12 = 32;
    LABEL_23:
      (*(void (**)(__int64))(*v15 + v12))((__int64)v15);
      goto LABEL_24;
    }
    if (v15 != nullptr) {
      v12 = 40;
      goto LABEL_23;
    }
  LABEL_24:
    v5 -= 64;
  } while (v5 != v7);
  v16 = *(_QWORD*)(a1 + 112);
  *(_QWORD*)(a1 + 120) = v7;
  v7 = v16;
  if (v16 != 0) {
  LABEL_33:
    v17 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v17 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v17,
                                  v7);
  }
LABEL_36:
  v18 = *(_QWORD**)(a1 + 96);
  if (v18 == v2) {
    v19 = 32;
  LABEL_40:
    (*(void (**)(__int64))(*v18 + v19))((__int64)v18);
  }
  else if (v18 != nullptr) {
    v19 = 40;
    goto LABEL_40;
  }
  if ((*(_BYTE*)a1 & 1) != 0) {
    v20 = *(_QWORD*)(a1 + 16);
    if (v20 != 0) {
      v21 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v21 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v21, v20);
    }
  }
}

__int64 game_facility_1952360(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  float v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    _QWORD v16[4];
    _QWORD* v17;
  } v16_;

  v1 = *(_QWORD*)(result + 112);
  v2 = *(_QWORD*)(result + 120);
  v3 = result;
  v4 = v2;
  if (v1 != v2) {
    v5 = *(float*)(result + 48);
    while (1) {
      result = *(_QWORD*)(v1 + 48);
      if (result == 0) {
        break;
      }
      if (v5 >= *(float*)v1) {
        (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
        result = *(_QWORD*)(v1 + 48);
        *(_QWORD*)(v1 + 48) = 0;
        if (v1 + 16 == result) {
          v6 = 32;
        }
        else {
          if (result == 0) {
            break;
          }
          v6 = 40;
        }
        result =
            (*(__int64 (**)(__int64))(*(_QWORD*)result + v6))((__int64)result);
        break;
      }
      v1 += 64;
      if (v1 == v2) {
        goto LABEL_35;
      }
    }
  }
  if (v1 != v2) {
    v7 = v1 + 64;
    if (v1 + 64 != v2) {
      v4 = v1;
      while (1) {
        result = *(_QWORD*)(v7 + 48);
        if (result != 0) {
          v9 = v7 + 16;
          if (*(float*)(v3 + 48) < *(float*)v7) {
            *(_DWORD*)v4 = *(_DWORD*)v7;
            v10 = *(_QWORD*)(v7 + 48);
            if (v10 != 0) {
              if (v9 == v10) {
                v16_.v17 = v16_.v16;
                (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v10 + 24LL))(
                    v10, v16_.v16);
              }
              else {
                v16_.v17 = (_QWORD*)(*(__int64 (**)(__int64))(*(_QWORD*)v10 +
                                                              16LL))(v10);
              }
            }
            else {
              v16_.v17 = nullptr;
            }
            GameRoutine_654050(v16_.v16, (_QWORD*)(v4 + 16));
            result = (__int64)v16_.v17;
            if (v16_.v17 == v16_.v16) {
              v11 = 32;
            LABEL_32:
              result = (*(__int64 (**)(__int64))(*v16_.v17 + v11))(
                  (__int64)v16_.v17);
            }
            else if (v16_.v17 != nullptr) {
              v11 = 40;
              goto LABEL_32;
            }
            v4 += 64;
            goto LABEL_17;
          }
          (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
          result = *(_QWORD*)(v7 + 48);
          *(_QWORD*)(v7 + 48) = 0;
          if (v9 == result) {
            v8 = 32;
          }
          else {
            if (result == 0) {
              goto LABEL_17;
            }
            v8 = 40;
          }
          result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v8))(
              (__int64)result);
        }
      LABEL_17:
        v7 += 64;
        if (v7 == v2) {
          goto LABEL_35;
        }
      }
    }
    v4 = v1;
  }
LABEL_35:
  v12 = *(_QWORD*)(v3 + 120);
  if (v4 != v12) {
    while (1) {
      result = *(_QWORD*)(v12 - 16);
      *(_QWORD*)(v12 - 16) = 0;
      if (v12 - 48 == result) {
        v15 = 32;
      }
      else {
        if (result == 0) {
          goto LABEL_45;
        }
        v15 = 40;
      }
      (*(void (**)(__int64))(*(_QWORD*)result + v15))((__int64)result);
      result = *(_QWORD*)(v12 - 16);
      if (v12 - 48 == result) {
        v14 = 32;
      }
      else {
        if (result == 0) {
          goto LABEL_45;
        }
        v14 = 40;
      }
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)result + v14))((__int64)result);
    LABEL_45:
      v12 -= 64;
      if (v12 == v4) {
        *(_QWORD*)(v3 + 120) = v4;
        break;
      }
    }
  }
  if (*(float*)(v3 + 36) >= *(float*)(v3 + 32)) {
    result = *(_QWORD*)(v3 + 96);
    if (result != 0) {
      (*(void (**)(__int64))(*(_QWORD*)result + 48LL))(result);
      result = *(_QWORD*)(v3 + 96);
      *(_QWORD*)(v3 + 96) = 0;
      if (result == v3 + 64) {
        v13 = 32;
      }
      else {
        if (result == 0) {
          return result;
        }
        v13 = 40;
      }
      return (*(__int64 (**)(__int64))(*(_QWORD*)result + v13))(
          (__int64)result);
    }
  }
  return result;
}

__int64 game_facility_1953500(__int64 result)
{

#pragma clang fp contract(off)
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64* i;
  __int64* v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  __int64 v20;
  unsigned int v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  __int64 v27;
  __int64 v28;

  v1 = *(__int64**)(result + 8);
  v2 = *(__int64**)(result + 16);
  v3 = result;
  if (v1 == v2) {
  LABEL_9:
    v6 = v1 + 2;
    if (v1 == v2 || v6 == v2) {
      goto LABEL_25;
    }
    while (1) {
      result = v6[1];
      if (result != 0) {
        result = std___1___shared_weak_count_lock(result);
        if (result != 0) {
          v8 = *v6;
          if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                               0xFFFFFFFFFFFFFFFFLL) != 0) {
            if (v8 != 0) {
              goto LABEL_22;
            }
          }
          else {
            v9 = result;
            (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
            result = std___1___shared_weak_count___release_weak(v9);
            if (v8 != 0) {
            LABEL_22:
              v10 = *v6;
              v11 = v6[1];
              *v6 = 0;
              v6[1] = 0;
              result = v1[1];
              *v1 = v10;
              v1[1] = v11;
              if (result != 0) {
                result = std___1___shared_weak_count___release_weak(result);
              }
              v1 += 2;
            }
          }
        }
      }
      v6 += 2;
      if (v6 == v2) {
        goto LABEL_25;
      }
    }
  }
  do {
    result = v1[1];
    if (result == 0) {
      goto LABEL_9;
    }
    result = std___1___shared_weak_count_lock(result);
    if (result == 0) {
      goto LABEL_9;
    }
    v5 = *v1;
    if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                         0xFFFFFFFFFFFFFFFFLL) != 0) {
      if (v5 == 0) {
        goto LABEL_9;
      }
    }
    else {
      v4 = result;
      (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
      result = std___1___shared_weak_count___release_weak(v4);
      if (v5 == 0) {
        goto LABEL_9;
      }
    }
    v1 += 2;
  } while (v1 != v2);
  v1 = v2;
LABEL_25:
  i = *(__int64**)(v3 + 16);
  if (v1 != i) {
    v13 = *(__int64**)(v3 + 16);
    for (i = v1; v13 != v1; v13 -= 2) {
      result = *(v13 - 1);
      if (result != 0) {
        result = std___1___shared_weak_count___release_weak(result);
      }
    }
    *(_QWORD*)(v3 + 16) = v1;
  }
  v14 = *(__int64**)(v3 + 8);
  if (v14 != i) {
    v15 = game_script_hub_g_frame_counter_ptr[0];
    do {
      result = v14[1];
      if (result != 0) {
        result = std___1___shared_weak_count_lock(result);
        if (result != 0) {
          v16 = *v14;
          if (*v14 != 0 && (*(_BYTE*)(v16 + 136) & 1) == 0) {
            v18 = *(float*)(v16 + 32);
            v17 = *(float*)(v16 + 36);
            v19 = *(float*)(v16 + 48);
            if (v17 >= v18) {
              v26 = *(float*)(v16 + 44);
            }
            else {
              v20 = result;
              v21 = *(_DWORD*)(v16 + 52);
              v22 = v17 + (float)((float)(*(float*)(*(_QWORD*)v15 + 160LL) *
                                          0x1.0aef000000000p+4f) /
                                  0x1.f400000000000p+9f);
              if (v18 >= v22) {
                v23 = v22;
              }
              else {
                v23 = *(float*)(v16 + 32);
              }
              v24 = *(float*)(v16 + 40);
              v25 = *(float*)(v16 + 44);
              *(float*)(v16 + 36) = v23;
              v26 = Cursor_734120(v21, v24, v25, v23, v18);
              result = v20;
            }
            *(float*)(v16 + 48) = v26;
            if (v26 != v19) {
              v28 = result;
              game_facility_1952360(v16);
              result = v28;
            }
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v27 = result;
            (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
            result = std___1___shared_weak_count___release_weak(v27);
          }
        }
      }
      v14 += 2;
    } while (v14 != i);
  }
  return result;
}

__int64 game_facility_19537e0(__int64 a1, __int64* a2)
{
  __int64 result;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64* v25;
  __int64* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;

  result = a2[1];
  if (result != 0) {
    result = std___1___shared_weak_count_lock(result);
    if (result != 0) {
      v5 = *a2;
      if (atomic_fetch_add((atomic_ullong* volatile)(result + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v5 == 0) {
          return 0;
        }
      }
      else {
        v6 = result;
        (*(void (**)(__int64))(*(_QWORD*)result + 16LL))(result);
        std___1___shared_weak_count___release_weak(v6);
        if (v5 == 0) {
          return 0;
        }
      }
      v7 = *(__int64**)(a1 + 8);
      v8 = *(__int64**)(a1 + 16);
      v9 = a2[1];
      if (v9 != 0) {
        v10 = *a2;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 16), 1u,
                                  memory_order_relaxed);
        if (v7 != v8) {
          v31 = a1;
          do {
            v11 = v7[1];
            if (v11 != 0) {
              v12 = *v7;
              v13 = v7[1];
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                                        memory_order_relaxed);
              v14 = std___1___shared_weak_count_lock(v13);
              if (v14 == 0) {
                goto LABEL_10;
              }
              v15 = v14;
              if (v12 != 0 &&
                  (v16 = std___1___shared_weak_count_lock(v9)) != 0) {
                v17 = v12 == v10;
                if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
                  v18 = v10;
                  v19 = v16;
                  (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
                  v20 = v19;
                  v10 = v18;
                  std___1___shared_weak_count___release_weak(v20);
                }
              }
              else {
                v17 = false;
              }
              if (atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
                std___1___shared_weak_count___release_weak(v15);
              }
              if (v12 != 0) {
                std___1___shared_weak_count___release_weak(v11);
                if (v17) {
                  goto LABEL_33;
                }
              }
              else {
              LABEL_10:
                std___1___shared_weak_count___release_weak(v11);
              }
            }
            v7 += 2;
          } while (v7 != v8);
          v7 = v8;
        LABEL_33:
          a1 = v31;
        }
        std___1___shared_weak_count___release_weak(v9);
      }
      else if (v7 != v8) {
        do {
          v21 = v7[1];
          if (v21 != 0) {
            v22 = v7[1];
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 16), 1u,
                                      memory_order_relaxed);
            v23 = std___1___shared_weak_count_lock(v22);
            if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                             0xFFFFFFFFFFFFFFFFLL) == 0) {
              v24 = v23;
              (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
              std___1___shared_weak_count___release_weak(v24);
            }
            std___1___shared_weak_count___release_weak(v21);
          }
          v7 += 2;
        } while (v7 != v8);
        v7 = v8;
      }
      v25 = *(__int64**)(a1 + 16);
      if (v7 == v25) {
        return 0;
      }
      v26 = v7 + 2;
      if (v7 + 2 == v25) {
        if (v7 == v25) {
        LABEL_44:
          result = 1;
          *(_QWORD*)(a1 + 16) = v7;
          return result;
        }
      }
      else {
        do {
          v28 = *v26;
          v27 = v26[1];
          v29 = *(v26 - 1);
          *v26 = 0;
          v26[1] = 0;
          *(v26 - 2) = v28;
          *(v26 - 1) = v27;
          if (v29 != 0) {
            std___1___shared_weak_count___release_weak(v29);
          }
          v26 += 2;
        } while (v26 != v25);
        v25 = *(__int64**)(a1 + 16);
        v7 = v26 - 2;
        if (v26 - 2 == v25) {
          goto LABEL_44;
        }
      }
      do {
        v30 = *(v25 - 1);
        if (v30 != 0) {
          std___1___shared_weak_count___release_weak(v30);
        }
        v25 -= 2;
      } while (v25 != v7);
      goto LABEL_44;
    }
  }
  return result;
}

void game_facility_19548c0()
{
  __int64* v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  char* v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  struct {
    __int64 v30;
    __int64 v31;
    __int64 v32;
  } v30_;
  struct {
    __int64 v33;
    unsigned __int64 v34;
    char* v35;
  } v33_;

  v0 = (__int64*)GameData_212dce8;
  v1 = SceneManager_138e5e0(*(_QWORD*)GameData_212dce8);
  if (v1 == 0) {
    goto LABEL_17;
  }
  v2 = v1;
  v3 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 56, 16, 0);
  *(_BYTE*)(v3 + 54) = 0;
  v30_.v30 = 57;
  v30_.v31 = 54;
  v30_.v32 = v3;
  *(_QWORD*)(v3 + 32) = 0xB8E48481E3BCA3E9LL;
  *(_QWORD*)(v3 + 40) = 0x9781E38882E35FBBLL;
  *(_QWORD*)(v3 + 46) = 0x9781E38882E39781LL;
  *(_QWORD*)v3 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v3 + 8) = 0xE3BC83E3A283E3A9LL;
  *(_QWORD*)(v3 + 16) = 0xB383E3A783E3B782LL;
  *(_QWORD*)(v3 + 24) = 0x5F8E88E8A98EE55FLL;
  game_facility_14107c0((__int64)&v33_.v33, (__int64)&v30_.v30);
  v4 = *(_QWORD*)(v2 + 112);
  v5 = *(_QWORD*)(v2 + 120);
  if (v5 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_14127e0_alt1(v4, (unsigned __int8*)&v33_.v33);
    if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
      std___1___shared_weak_count___release_weak(v5);
    }
    if ((v33_.v33 & 1) == 0) {
      goto LABEL_12;
    }
    goto LABEL_8;
  }
  GameRoutine_14127e0_alt1(v4, (unsigned __int8*)&v33_.v33);
  if ((v33_.v33 & 1) != 0) {
  LABEL_8:
    if (v33_.v35 != nullptr) {
      v6 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v6 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v6,
                                    (__int64)v33_.v35);
    }
  }
LABEL_12:
  if ((v30_.v30 & 1) != 0 && v30_.v32 != 0) {
    v7 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v7, v30_.v32);
  }
LABEL_17:
  v8 = *v0;
  v9 = (__int64)*GameData_2132468;
  v10 = strlen((const char*)*GameData_2132468);
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0();
  }
  v11 = v10;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13,
                                                16, 0);
    v33_.v34 = v11;
    v33_.v35 = v12;
    v33_.v33 = v13 | 1;
    goto LABEL_25;
  }
  LOBYTE(v33_.v33) = 2 * v10;
  v12 = (char*)&v33_.v33 + 1;
  if (v10 != 0) {
  LABEL_25:
    memmove((__int64)v12, v9, v11);
  }
  v12[v11] = 0;
  v14 = *(__int64**)(v8 + 160);
  v15 = *(__int64**)(v8 + 168);
  if (v14 == v15) {
    v16 = 0;
    if ((v33_.v33 & 1) == 0) {
      goto LABEL_43;
    }
    goto LABEL_39;
  }
  while (1) {
    v17 = *v14++;
    v16 = v17;
    v18 = *(_QWORD*)(v17 + 40);
    v19 = v17 + 25;
    v20 = (*(_BYTE*)(v17 + 24) & 1) != 0 ? v18 : v19;
    v21 = v33_.v35;
    v22 = (unsigned __int64)(unsigned __int8)v33_.v33 >> 1;
    if ((v33_.v33 & 1) != 0) {
      v22 = v33_.v34;
    }
    else {
      v21 = (char*)&v33_.v33 + 1;
    }
    v30_.v30 = (__int64)v21;
    v30_.v31 = v22;
    v23 = game_HashString(v20);
    if (v23 == GameHr_7a88a0(&v30_.v30)) {
      break;
    }
    if (v14 == v15) {
      v16 = 0;
      break;
    }
  }
  if ((v33_.v33 & 1) != 0) {
  LABEL_39:
    if (v33_.v35 != nullptr) {
      v24 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v24,
                                    (__int64)v33_.v35);
    }
  }
LABEL_43:
  if (v16 == 0) {
    return;
  }
  v25 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, 56, 16, 0);
  *(_BYTE*)(v25 + 54) = 0;
  v30_.v30 = 57;
  v30_.v31 = 54;
  v30_.v32 = v25;
  *(_QWORD*)(v25 + 32) = 0x89E78A82E397B9E4LL;
  *(_QWORD*)(v25 + 40) = 0x9781E38882E35FA9LL;
  *(_QWORD*)(v25 + 46) = 0x9781E38882E39781LL;
  *(_QWORD*)v25 = 0x83E3A383E3AD82E3LL;
  *(_QWORD*)(v25 + 8) = 0xE3BC83E3A283E3A9LL;
  *(_QWORD*)(v25 + 16) = 0xB383E3A783E3B782LL;
  *(_QWORD*)(v25 + 24) = 0x5F8E88E8A98EE55FLL;
  game_facility_14107c0((__int64)&v33_.v33, (__int64)&v30_.v30);
  v26 = *(_QWORD*)(v16 + 112);
  v27 = *(_QWORD*)(v16 + 120);
  if (v27 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v27 + 8), 1u,
                              memory_order_relaxed);
    GameRoutine_14127e0_alt1(v26, (unsigned __int8*)&v33_.v33);
    if (atomic_fetch_add((atomic_ullong* volatile)(v27 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v27 + 16LL))(v27);
      std___1___shared_weak_count___release_weak(v27);
    }
    if ((v33_.v33 & 1) == 0) {
      goto LABEL_54;
    }
    goto LABEL_50;
  }
  GameRoutine_14127e0_alt1(v26, (unsigned __int8*)&v33_.v33);
  if ((v33_.v33 & 1) != 0) {
  LABEL_50:
    if (v33_.v35 != nullptr) {
      v28 = 128;
      if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
        v28 = 56;
      }
      nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v28,
                                    (__int64)v33_.v35);
    }
  }
LABEL_54:
  if ((v30_.v30 & 1) != 0 && v30_.v32 != 0) {
    v29 = 128;
    if (*(_QWORD*)(fw_memory_g_heap_manager + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(fw_memory_g_heap_manager + v29, v30_.v32);
  }
}

void game_facility_19551d0(__int64 a1, unsigned __int8* a2)
{
  unsigned __int64 v4;
  bool v5;
  unsigned __int64 v6;
  const char* v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  const char* v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  bool v19;
  unsigned __int64 v20;
  const char* v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64 v26;
  const char* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  char* v30;
  __int64 v31;
  unsigned __int64 v32;
  bool v33;
  unsigned __int64 v34;
  const char* v35;
  unsigned __int64 v36;
  __int64* v37;
  __int64* v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  struct {
    __int64 v43;
    unsigned __int64 v44;
    char* v45;
  } v43_;

  ProcStableScene_1955550((void*)(&v43_.v43), a1);
  GameRoutine_1a09ce0((__int64)&v43_.v43, "_", 1u);
  v4 = *a2;
  v5 = (v4 & 1) == 0;
  v6 = v4 >> 1;
  if (v5) {
    v7 = (const char*)(a2 + 1);
  }
  else {
    v7 = *((const char**)a2 + 2);
  }
  if (v5) {
    v8 = v6;
  }
  else {
    v8 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0((__int64)&v43_.v43, v7, v8);
  v9 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)&v43_.v43);
  v10 = v9;
  if (v9 != nullptr) {
    v11 = v9[10];
    if (v11 == 0) {
      goto LABEL_74;
    }
    (*(void (**)(__int64))(*(_QWORD*)v11 + 48LL))(v11);
  }
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v12 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v12 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v12,
                                  (__int64)v43_.v45);
  }
  if (v10 != nullptr) {
    return;
  }
  if ((*(_BYTE*)(a1 + 8) & 1) != 0) {
    v13 = *(const char**)(a1 + 24);
  }
  else {
    v13 = (const char*)(a1 + 9);
  }
  v14 = strlen(v13);
  if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_75;
  }
  v15 = v14;
  if (v14 >= 0x17) {
    if ((v14 | 7) == 0x17) {
      v17 = 26;
    }
    else {
      v17 = (v14 | 7) + 1;
    }
    v16 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v17,
                                                16, 0);
    v43_.v44 = v15;
    v43_.v45 = v16;
    v43_.v43 = v17 | 1;
    goto LABEL_27;
  }
  LOBYTE(v43_.v43) = 2 * v14;
  v16 = (char*)&v43_.v43 + 1;
  if (v14 != 0) {
  LABEL_27:
    memmove((__int64)v16, (__int64)v13, v15);
  }
  v16[v15] = 0;
  GameRoutine_1a09ce0((__int64)&v43_.v43, "_", 1u);
  v18 = *a2;
  v19 = (v18 & 1) == 0;
  v20 = v18 >> 1;
  if (v19) {
    v21 = (const char*)(a2 + 1);
  }
  else {
    v21 = *((const char**)a2 + 2);
  }
  if (v19) {
    v22 = v20;
  }
  else {
    v22 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0((__int64)&v43_.v43, v21, v22);
  v23 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)&v43_.v43);
  v24 = v23;
  if (v23 != nullptr) {
    v25 = v23[10];
    if (v25 == 0) {
      goto LABEL_74;
    }
    (*(void (**)(__int64))(*(_QWORD*)v25 + 48LL))(v25);
  }
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v26,
                                  (__int64)v43_.v45);
  }
  if (v24 != nullptr) {
    return;
  }
  if ((*(_BYTE*)(a1 + 32) & 1) != 0) {
    v27 = *(const char**)(a1 + 48);
  }
  else {
    v27 = (const char*)(a1 + 33);
  }
  v28 = strlen(v27);
  if (v28 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_75:
    String_60a1d0();
  }
  v29 = v28;
  if (v28 >= 0x17) {
    if ((v28 | 7) == 0x17) {
      v31 = 26;
    }
    else {
      v31 = (v28 | 7) + 1;
    }
    v30 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v31,
                                                16, 0);
    v43_.v44 = v29;
    v43_.v45 = v30;
    v43_.v43 = v31 | 1;
  }
  else {
    LOBYTE(v43_.v43) = 2 * v28;
    v30 = (char*)&v43_.v43 + 1;
    if (v28 == 0) {
      goto LABEL_55;
    }
  }
  memmove((__int64)v30, (__int64)v27, v29);
LABEL_55:
  v30[v29] = 0;
  GameRoutine_1a09ce0((__int64)&v43_.v43, "_", 1u);
  v32 = *a2;
  v33 = (v32 & 1) == 0;
  v34 = v32 >> 1;
  if (v33) {
    v35 = (const char*)(a2 + 1);
  }
  else {
    v35 = *((const char**)a2 + 2);
  }
  if (v33) {
    v36 = v34;
  }
  else {
    v36 = *((_QWORD*)a2 + 1);
  }
  GameRoutine_1a09ce0((__int64)&v43_.v43, v35, v36);
  v37 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), (unsigned __int8*)&v43_.v43);
  v38 = v37;
  if (v37 != nullptr) {
    v39 = v37[10];
    if (v39 == 0) {
      goto LABEL_74;
    }
    (*(void (**)(__int64))(*(_QWORD*)v39 + 48LL))(v39);
  }
  if ((v43_.v43 & 1) != 0 && v43_.v45 != nullptr) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v40,
                                  (__int64)v43_.v45);
  }
  if (v38 == nullptr) {
    v41 = GameRoutine_92b0a0((_QWORD*)(a1 + 56), a2);
    if (v41 != nullptr) {
      v42 = v41[10];
      if (v42 != 0) {
        (*(void (**)(__int64))(*(_QWORD*)v42 + 48LL))(v42);
        return;
      }
    LABEL_74:
      GameRoutine_60a310();
    }
  }
}

__int64 game_facility_19595c0()
{
  char v0;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  char v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int8* v12;
  unsigned __int8* v13;
  __int64 v14;
  unsigned __int64 v15;
  bool v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD* v22;
  __int64 v23;
  unsigned __int8* v24;
  __int64 v25;
  unsigned __int8* v26;
  char v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  struct {
    unsigned __int8* v32;
    unsigned __int8* v33;
    __int64 v34;
    char v35;
    char gap25_[15];
    __int64 v36;
    char gap48_[8];
    char v37;
    char gap57_[15];
    __int64 v38;
  } v32_;
  struct {
    __int64 v39;
    __int64 v40;
    char gap96_[8];
    char v41;
  } v39_;

  v0 = SceneManager_138e060((_QWORD*)GameData_21f4000);
  if ((v0 & 1) == 0) {
    GameHr_f41c80();
    game_103a420((void*)((__int64)&v32_.v32));
    if (v39_.v41 == 1) {
      GameHr_f42060(&v39_.v39);
      if (v39_.v41 == 1) {
        v1 = v39_.v39;
        if (v39_.v39 != 0) {
          v2 = v39_.v40;
          if (v39_.v39 == v39_.v40) {
            goto LABEL_15;
          }
          v3 = v39_.v40;
          v4 = fw_memory_g_heap_manager_ptr;
          do {
            v5 = *(_BYTE*)(v3 - 24);
            v3 -= 24;
            if ((v5 & 1) != 0) {
              v6 = *(_QWORD*)(v2 - 8);
              if (v6 != 0) {
                if (*(_QWORD*)(*(_QWORD*)v4 + 200LL) != 0) {
                  v7 = 128;
                }
                else {
                  v7 = 56;
                }
                nn_mem_StandardAllocator_Free(*(_QWORD*)v4 + v7, v6);
              }
            }
            v2 = v3;
          } while (v3 != v1);
          v39_.v40 = v1;
          v1 = v39_.v39;
          if (v39_.v39 != 0) {
          LABEL_15:
            v8 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v8 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v1);
          }
        }
        if ((v32_.v37 & 1) != 0 && v32_.v38 != 0) {
          v9 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v9 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v9, v32_.v38);
        }
        if ((v32_.v35 & 1) != 0 && v32_.v36 != 0) {
          v10 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v10 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v32_.v36);
        }
        if (((unsigned __int8)v32_.v32 & 1) != 0 && v32_.v34 != 0) {
          v11 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v11 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v32_.v34);
        }
      }
    }
    if (GameData_220f950 != 0) {
      game_hub_e01a40((void*)((__int64*)&v32_.v32), GameData_220f950);
      v12 = v32_.v32;
      v13 = v32_.v33;
      if (v32_.v32 != v32_.v33) {
        v14 = GameData_21c6978;
        do {
          v15 = *v12;
          v16 = (v15 & 1) == 0;
          v17 = v15 >> 1;
          if (v16) {
            v18 = v17;
          }
          else {
            v18 = *((_QWORD*)v12 + 1);
          }
          if (v16) {
            v19 = (__int64)(v12 + 1);
          }
          else {
            v19 = *((_QWORD*)v12 + 2);
          }
          v20 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v14 + 32) - 8LL) + 64LL);
          if (v20 != 0) {
            v21 = *(_QWORD*)(v20 + 96);
            if (v21 != 0 && *(_DWORD*)(v21 + 240) == 5) {
              v22 = (_QWORD*)(v20 + 120);
              while (1) {
                v22 = (_QWORD*)*v22;
                if (v22 == nullptr) {
                  break;
                }
                if (*(_DWORD*)(v22[5] + 240LL) != 5) {
                  goto LABEL_36;
                }
              }
              v23 = ObjectBuildCreate_c21360(v20, v19, v18);
              v14 = GameData_21c6978;
              if (v23 != 0 && *(_BYTE*)(v23 + 288) != 0) {
                *(_BYTE*)(v23 + 288) = 0;
              }
            }
          }
        LABEL_36:
          v12 += 24;
        } while (v12 != v13);
        v12 = v32_.v32;
      }
      if (v12 != nullptr) {
        v24 = v32_.v33;
        v25 = fw_memory_g_heap_manager_ptr;
        if (v12 == v32_.v33) {
          goto LABEL_65;
        }
        v26 = v32_.v33;
        do {
          v27 = *(v26 - 24);
          v26 -= 24;
          if ((v27 & 1) != 0) {
            v28 = *((_QWORD*)v24 - 1);
            if (v28 != 0) {
              if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) != 0) {
                v29 = 128;
              }
              else {
                v29 = 56;
              }
              nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v29, v28);
            }
          }
          v24 = v26;
        } while (v26 != v12);
        v32_.v33 = v12;
        v12 = v32_.v32;
        if (v32_.v32 != nullptr) {
        LABEL_65:
          v30 = 128;
          if (*(_QWORD*)(*(_QWORD*)v25 + 200LL) == 0) {
            v30 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v25 + v30, (__int64)v12);
        }
      }
    }
  }
  return v0 & 1;
}

void game_facility_197fb20(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int16* v7[3];
  _QWORD v8[3];

  game_9a64e0((void*)(v8), (__int64*)(a1 + 216));
  v2 = v8[0];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v8[1] != v8[0]) {
    game_8af240((__int64*)v7, (__int64**)v8);
    ItemSeq_8af940(a1, v7, 0, (const char**)game_vstring_kEmpty_ptr[0],
                   (const char**)game_vstring_kEmpty_ptr[0], 0);
    if (v7[0] != nullptr) {
      v4 = *(_QWORD*)v3;
      v7[1] = v7[0];
      v5 = 128;
      if (*(_QWORD*)(v4 + 200) == 0) {
        v5 = 56;
      }
      nn_mem_StandardAllocator_Free(v4 + v5, (__int64)v7[0]);
    }
  }
  if (v2 != 0) {
    v6 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v6 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6, v2);
  }
}

#pragma GCC visibility pop
