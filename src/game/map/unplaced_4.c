#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_BYTE* GameHr_7aa770(_BYTE* result, __int128*);
_QWORD* GameRoutine_18c4dd0(_QWORD* result, __int64, int, int);
_QWORD* ui_LayoutAccessor_Setup_155dda0(_QWORD*, _QWORD*);
__attribute__((swiftcall)) void BattleUtil_7aa190(PSEUDO_X8, __int64,
                                                  unsigned int, unsigned int);
__attribute__((swiftcall)) void GameRoutine_79ca50(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void LayoutAccessor_1560070(PSEUDO_X8, __int64*,
                                                       const char*);
__attribute__((swiftcall)) void MapBattleHUD_18c6be0(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void UnitActor_81d430(PSEUDO_X8, __int64);
__attribute__((swiftcall)) void game_1366bd0(PSEUDO_X8, __int64, __int64,
                                             __int64);
__int64* GameRoutine_1832ca0(__int64**);
__int64* GameRoutine_f155c0(__int64* result, char*, char*, unsigned __int64);
__int64* LayoutAccessor_155fbe0(__int64*, const char*);
__int64* fw_containers_BalanceAfterInsert(__int64* result, __int64*);
__int64* game_UnitPool_Get(_BYTE*);
__int64 AsyncLoadThumbImage_18c0210(__int64);
__int64 AsyncLoadThumbImage_18c0390(__int64, int);
__int64 AsyncLoadThumbImage_18c0b70(__int64 result, __int64, __int64);
__int64 AsyncLoadThumbImage_18c0ca0(__int64 result, __int64, __int64);
__int64 AsyncLoadThumbImage_18c0e20(__int64 result, __int64, __int64);
__int64 AsyncLoadThumbImage_18c0f50(__int64 result, __int64, __int64);
__int64 BattleInfo_79d030(__int64);
__int64 BattleSide_79e950(__int64 result, __int64);
__int64 Camera_7bfee0(__int64, float, float);
__int64 CharacterController_d42d20(__int64 result, char*, char*,
                                   unsigned __int64);
__int64 CombatHudWindow_1832b70(__int64, unsigned int, char);
__int64 ControlCreator_13633c0(__int64 result);
__int64 Cursor_730b20(__int64, int, int);
__int64 EffectConst_961260(__int64, _BYTE**, __int64);
__int64 FloatingHelp_18af980(__int64, __int64*);
__int64 GameHr_961420(__int64, const char**, __int64);
__int64 GameRoutine_10a4c70(__int64 result, unsigned int, unsigned int);
__int64 GameRoutine_1237390(__int64 result, __int64*);
__int64 GameRoutine_155f760(__int64, __int64, const char*);
__int64 GameRoutine_18c6e70(__int64, __int64, __int64*, char, char);
__int64 GameRoutine_68e840(__int64, _QWORD*);
__int64 GameRoutine_68ea90(__int64, _QWORD*);
__int64 GameRoutine_747df0(__int64, int, int, unsigned __int8);
__int64 GameRoutine_7a75b0(__int64);
__int64 GameRoutine_90dac0(__int64, __int64);
__int64 GameRoutine_f098f0(__int64 result, __int64*, char);
__int64 LayoutAccessor_155ea30(__int64*);
__int64 LayoutAccessor_1562cf0(__int64 result, const char*);
__int64 PrimitiveDrawStack_f525a0(__int64*, __int64);
__int64 ProcInst_657ca0(__int64 result, char, float);
__int64 ProcMapSeqBattle_7b6e10(__int64 result, unsigned int);
__int64 UnitActor_819400(__int64);
__int64 UnitActor_81a540(__int64, unsigned int, __int64);
__int64 UnitActor_81ab40(__int64, float, float);
__int64 UnitActor_81b190(__int64, float);
__int64 Unit_6c8a80(__int64 result, int, int, __int64);
__int64 Unit_6ca760(__int64, _DWORD*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_9903e0(__int64 result);
__int64 game_UnitPool_GetFirst(int*);
__int64 game_gameui_control_18c0980(__int64);
__int64 game_map_anonymous_TargetEnumerator_Shoot(__int64, __int64, __int64);
__int64 game_map_f54910(__int64);
__int64 memmove(__int64, __int64, unsigned __int64);
__int64 memset(__int64, int, unsigned __int64);
__int64 snd_Fade_Destroy_Fade(_QWORD*);
__int64 snd_playAt_ff4e0(__int64, __int64, __int64, unsigned int, unsigned int,
                         int, float, float, float, float, float);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 ui_LayoutAccessor_FindPane(__int64*, __int64);
__int64 ui_LayoutAccessor_SetPaneVisible(__int64 result, __int64, char);
bool BattleSide_7a11b0(__int64);
bool GameRoutine_748d40(__int64, int, int);
bool game_HasSkill(_QWORD*, _DWORD*);
bool game_map_784840(_QWORD*, int, int, long double);
char* GameHr_6fb960(__int64);
char* GameRoutine_6e7840(char*, char*, char*);
const char* GameRoutine_156bee0(const char* result, __int64, __int64, __int64,
                                char, float, float);
extern _DWORD GameData_1a82d70[4];
extern _DWORD GameData_1a82e10[4];
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN* GameData_212cf50;
extern _UNKNOWN* GameData_212da30;
extern _UNKNOWN GameData_1b47d78;
extern _UNKNOWN GameData_22594f0;
extern __int128 GameData_1a83090;
extern __int16* GameData_212cf08[9];
extern __int64 (*GameData_1f94310[])();
extern __int64 (*GameData_1f97280[])();
extern __int64 (*GameData_1f97300[])();
extern __int64 (*GameData_1f982c0[])();
extern __int64 (*GameData_1fb24f8[])();
extern __int64 (*game_map_SortieMeshData_vtable[])();
extern __int64* GameData_212c878[6];
extern __int64* GameData_212c930;
extern __int64* GameData_212ce90[3];
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfc8[9];
extern __int64* GameData_212cfd0[8];
extern __int64* GameData_212cff0[4];
extern __int64* GameData_212d670[3];
extern __int64* GameData_212d678[2];
extern __int64* GameData_212d890[2];
extern __int64* GameData_212f878;
extern __int64* GameData_21309c8[5];
extern __int64* game_g_empty_item_ptr;
extern __int64* util_g_handle_slots_ptr[2];
extern __int64 GameData_212d018[6];
extern __int64 GameData_212d270;
extern __int64 GameData_21c99b0;
extern __int64 GameData_21c99b8;
extern __int64 GameData_21ca2e8;
extern __int64 GameData_21ca300;
extern __int64 GameData_21ca310;
extern __int64 GameData_21cd120;
extern __int64 GameData_21cd130;
extern __int64 GameData_21cd158;
extern __int64 GameData_21ec7b0;
extern __int64 GameData_21ed098;
extern __int64 GameData_21f1e08;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_g_empty_item;
extern __int64 game_map_UnitFlags_instance_;
extern char GameData_1a9f09e;
extern int GameData_22594e8;
float BattleUtil_7aa490(__int64, unsigned int, unsigned int);
float Height_7c4d10(__int64, float, float);
float math_Vec3_Angle(float32x4_t*, float32x4_t*);
float ui_LayoutAccessor_GetPaneSize(__int64*, const char*);
float32x4_t* GameRoutine_18c4dd0_alt1(float32x4_t* result, float32x4_t*, int,
                                      int) __asm__("GameRoutine_18c4dd0");
int __cxa_guard_acquire(__int64);
void Camera_7c0130(__int64, char);
void Camera_7c0260(__int64, char);
void FloatingHelp_18aee60(_QWORD*, __int64*);
void GameHr_18af120(_QWORD*, __int64*);
void GameHr_757f60(__int64, _DWORD*, unsigned int, unsigned int, __int64);
void GameRoutine_18ae960(_QWORD*, char);
void PrimitiveDrawStack_f51430(__int64, __int64);
void ProcMapSeqBattle_7b6e80(__int64, __int64, unsigned int, unsigned int,
                             float32x4_t);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_cdcc10();
void __attribute__((noreturn)) String_60a250(const char*);
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void snd_Fade_Fade_10c830(__int64, float);
__int64 game_map_727040();
bool game_map_747b10(__int64 a1, char a2, int a3, int a4, __int64 a5);
__int64 game_map_748580(__int64 a1, unsigned __int8 a2);
__int64 game_map_760540();
__int64 game_map_7857c0(__int64 result, int* a2, int* a3, _QWORD* a4,
                        __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                        long double a9);
__int64 game_map_78d280(__int64 a1, __int64 a2);
void game_map_7aa980(_BYTE* a1, __int64 a2);
void game_map_7b0700(__int64 a1);
void game_map_f55a00(__int64 a1, unsigned __int64 a2);
__int64 game_map_fa3d40(__int64** a1, __int64 a2);
void game_map_1044ea0(_QWORD* a1, __int64 a2);
void game_map_1827b90(__int64* a1);
_QWORD* game_map_182b5a0(_QWORD* result);
void game_map_18328a0(_QWORD* a1);
float32x4_t* game_map_18c5140(float32x4_t* result, int a2, int a3);
__int64 game_map_18c5300(__int64 a1, __int64 a2, char a3);
_DWORD* game_map_18c63a0(__int64 a1, int* a2, __int64 a3, __int64 a4, char a5);
_DWORD* game_map_18c6550(__int64 a1, int* a2, int a3);
_DWORD* game_map_18c66b0(__int64 a1, int* a2);
void game_map_1a00e90(__int64* a1, _DWORD* a2, _QWORD* a3);

__int64 game_map_727040()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  unsigned __int64 v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 i;
  int v9;

  v9 = 15;
  result = game_UnitPool_GetFirst(&v9);
  if (result != 0) {
    v1 = *(_QWORD*)(result + 432);
    if (v1 == 0) {
      v6 = *(_QWORD*)(result + 440);
      if (v6 == 0) {
        return UnitActor_819400(result);
      }
      v7 = *(unsigned __int8*)(v6 + 16);
      if (v7 > 8) {
        return UnitActor_819400(result);
      }
      for (i = 24LL * (unsigned int)v7 + 556024;; i += 24) {
        if (v7 <= 2) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + i);
          if (v1 != 0) {
            break;
          }
        }
        if (++v7 == 9) {
          return UnitActor_819400(result);
        }
      }
    }
    while (1) {
      do {
        v2 = v1;
        UnitActor_819400(result);
        v1 = *(_QWORD*)(v2 + 432);
        result = v2;
      } while (v1 != 0);
      v3 = *(_QWORD*)(v2 + 440);
      if (v3 == 0) {
        break;
      }
      v4 = *(unsigned __int8*)(v3 + 16);
      if (v4 > 8) {
        break;
      }
      v5 = 24LL * (unsigned int)v4 + 556024;
      while (1) {
        if (v4 <= 2) {
          v1 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v5);
          if (v1 != 0) {
            break;
          }
        }
        ++v4;
        v5 += 24;
        if (v4 == 9) {
          goto LABEL_11;
        }
      }
      result = v2;
    }
  LABEL_11:
    result = v2;
    return UnitActor_819400(result);
  }
  return result;
}

bool game_map_747b10(__int64 a1, char a2, int a3, int a4, __int64 a5)
{
  __int64 v7;
  unsigned int v8;
  __int64 v9;
  __int64* v10;
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
  __int64 v21;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v28;
  int v29;
  int v30;
  __int64 v31;
  struct {
    _QWORD v32[4];
    _QWORD* v33;
  } v32_;
  char v34;

  if ((signed __int32)*(_DWORD*)(a1 + 2672) <=
          (int)(unsigned __int8)(a3 - *(_BYTE*)(a1 + 2664)) ||
      (signed __int32)*(_DWORD*)(a1 + 2676) <=
          (int)(unsigned __int8)(a4 - *(_BYTE*)(a1 + 2668))) {
    return false;
  }
  v7 = GameData_21ca300;
  if (a2 == 0) {
    v8 = a3 + 32 * a4;
    if (v8 >= 0x400) {
      v23 = 0;
    }
    else {
      v23 = v8;
    }
    v24 = *(_QWORD*)(GameData_21ca300 + 96) + v23;
    if (*(_BYTE*)(v24 + 8) == 0) {
      goto LABEL_5;
    }
    v25 = *(_QWORD*)(GameData_21ca310 + 56) +
          2224LL * *(unsigned __int8*)(v24 + 8);
    if (*(unsigned __int8*)(v24 + 8) > 0xFAu || v25 == 2224) {
      goto LABEL_5;
    }
    if (*(_QWORD*)(v25 - 1832) == 0 || v25 - 2224 == a5) {
      goto LABEL_5;
    }
    if ((*(_BYTE*)(a1 + 2) & 1) == 0) {
      return false;
    }
    v28 = *(_QWORD*)(GameData_21ca300 + 160) +
          ((unsigned __int64)*(unsigned __int8*)(a1 + 4) << 7);
    v29 = *(char*)(v25 - 1640);
    v30 = *(char*)(v25 - 1639);
    v34 = 0;
    v32_.v33 = v32_.v32;
    v32_.v32[0] = GameData_1f94310;
    v32_.v32[1] = v28 + 8;
    v32_.v32[2] = &v34;
    Unit_6c8a80(v25 - 2224, v29, v30, (__int64)v32_.v32);
    if (v32_.v33 == v32_.v32) {
      v31 = 32;
    }
    else {
      if (v32_.v33 == nullptr) {
        goto LABEL_46;
      }
      v31 = 40;
    }
    (*(void (**)(__int64))(*v32_.v33 + v31))((__int64)v32_.v33);
  LABEL_46:
    if ((v34 & 1) == 0) {
      v7 = GameData_21ca300;
      goto LABEL_5;
    }
    return false;
  }
  v8 = a3 + 32 * a4;
LABEL_5:
  if (v8 >= 0x400) {
    v9 = 0;
  }
  else {
    v9 = v8;
  }
  v10 = GameData_212c930;
  v11 = *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                   8LL * *(unsigned __int16*)(*(_QWORD*)(v7 + 72) +
                                              2LL * (unsigned int)v9 + 8));
  if ((*(unsigned __int8*)(v11 + 62) | *(unsigned __int8*)(v11 + 63)) != 0 ||
      *(unsigned __int8*)(*(_QWORD*)(v11 + 48) + 40LL) == 255 ||
      (*(_BYTE*)(v11 + 216) & 0x40) != 0) {
    return false;
  }
  v12 = *(_QWORD*)(GameData_21cd158 + 16);
  v13 = *(__int16*)(v12 + 2 * v9 + 104);
  if (v13 < 0 || (v14 = *(_QWORD*)(v12 + 8)) == 0 ||
      (v15 = v14 + 144LL * (unsigned int)v13,
       (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v15 + 40LL))(v15) != 2) ||
      ((*(__int64 (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15) & 1) == 0 ||
      (v16 = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 224LL))(v15)) == 0) {
    v16 = **(_QWORD**)(*v10 + 64);
  }
  if ((*(unsigned __int8*)(v16 + 62) | *(unsigned __int8*)(v16 + 63)) != 0 ||
      *(unsigned __int8*)(*(_QWORD*)(v16 + 48) + 40LL) == 255 ||
      (*(_BYTE*)(v16 + 216) & 0x40) != 0) {
    return false;
  }
  v17 = *(_QWORD*)(GameData_21cd158 + 16);
  v18 = *(__int16*)(v17 + 2 * v9 + 12392);
  if (v18 < 0 || (v19 = *(_QWORD*)(v17 + 8)) == 0 ||
      (v20 = v19 + 144LL * (unsigned int)v18,
       ((*(__int64 (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20) & 1) == 0) ||
      (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v20 + 168LL))(v20) == 9 ||
      (v21 = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 224LL))(v20)) == 0) {
    v21 = **(_QWORD**)(*v10 + 64);
  }
  return *(_BYTE*)(v21 + 57) != 14;
}

__int64 game_map_748580(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8* v2;
  __int64 v3;
  __int64 v5;
  char* v6;
  char* v7;
  char* v8;
  int v9;
  int v10;
  int v11;
  int v12;
  char* v13;
  int v14;
  int v15;
  __int64 v16;
  __int64 v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  int v27;
  int v28;
  int v29;
  int v30;
  char v31;
  int v32;
  __int64 v33;
  int v34;
  int v35;
  int v36;
  char* v37;
  char* v38;
  __int64* v39;
  __int64 v40;
  unsigned int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  int v45;
  char v46;
  unsigned __int8 v47;
  unsigned __int8 v48;
  unsigned int v49;
  __int64 v50;
  __int64 v51;
  int v52;
  bool v53;
  char v54;
  int v55;
  int v56;
  int v57;
  __int64 v58;
  char* v59;
  char* v60;
  __int64 v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  __int64 v67;
  __int64 v68;
  char v70;
  int v71;
  int v72;
  int v73;
  unsigned __int8 v74;
  int v75;
  int v76;

  v2 = *(unsigned __int8**)(a1 + 12832);
  v3 = a2;
  v5 = *(_QWORD*)(a1 + 8);
  v75 = v2[1];
  v76 = *v2;
  v6 = (char*)GameData_212cf50 + a2;
  v7 = *(char**)(v5 + 2640);
  v8 = *(char**)(v5 + 2648);
  v9 = *v6;
  v10 = v6[256];
  v11 = v9 + v76;
  v12 = v10 + v75;
  if (v7 == v8) {
    v74 = a2;
    v14 = 0;
  LABEL_88:
    if ((*(_BYTE*)(v5 + 1) & 1) != 0) {
      v55 = v11 - v76;
      if (v11 - v76 < 0) {
        v55 = v76 - v11;
      }
      v56 = v12 - v75;
      if (v12 - v75 < 0) {
        v56 = v75 - v12;
      }
      v14 = v55 + v56;
    }
    v57 = v14 + *(unsigned __int8*)(*(_QWORD*)(a1 + 12832) + 3LL);
    v58 = *(_QWORD*)(a1 + 8);
    if (v57 <= (signed __int32)*(_DWORD*)(v58 + 8)) {
      v59 = *(char**)(v5 + 2640);
      v60 = *(char**)(v5 + 2648);
      if (v59 == v60) {
      LABEL_103:
        LODWORD(v67) = v76 + 32 * v75;
        if ((unsigned int)v67 >= 0x400) {
          v67 = 0;
        }
        else {
          v67 = (unsigned int)v67;
        }
        *(_BYTE*)(v58 + v67 + 1096) |= v74;
        LODWORD(v58) = v11 + 32 * v12;
        if ((unsigned int)v58 >= 0x400) {
          v58 = 0;
        }
        else {
          v58 = (unsigned int)v58;
        }
        *(_BYTE*)(*(_QWORD*)(a1 + 8) + v58 + 1096) |=
            *((_BYTE*)GameData_212cf50 + v74 + 512);
        v68 = *(_QWORD*)(a1 + 8) + 64LL;
        if (v57 < *(unsigned __int8*)(v68 + v58)) {
          *(_BYTE*)(v68 + v58) = v57;
          **(_BYTE**)(a1 + 12840) = v11;
          *(_BYTE*)(*(_QWORD*)(a1 + 12840) + 1LL) = v12;
          *(_BYTE*)(*(_QWORD*)(a1 + 12840) + 2LL) = v74;
          *(_BYTE*)(*(_QWORD*)(a1 + 12840) + 3LL) = v57;
          *(_QWORD*)(a1 + 12840) += 4LL;
          ++*(_DWORD*)(a1 + 12848);
          return 1;
        }
      }
      else {
        while (1) {
          v61 = *(_QWORD*)(a1 + 8);
          v62 = *v59;
          v63 = v59[1];
          v64 = *(_DWORD*)(v61 + 2664);
          v65 = *(_DWORD*)(v61 + 2672);
          v66 = v12 + v63;
          if ((v65 <= (unsigned __int8)(v11 + *v59 - v64) ||
               (signed __int32)*(_DWORD*)(v61 + 2676) <=
                   (int)(unsigned __int8)(v66 - *(_BYTE*)(v61 + 2668))) &&
              v65 > (unsigned __int8)(v62 + v76 - v64) &&
              (signed __int32)*(_DWORD*)(v61 + 2676) >
                  (int)(unsigned __int8)(v63 + v75 - *(_DWORD*)(v61 + 2668))) {
            break;
          }
          if (!GameRoutine_748d40(a1, v11 + v62, v66)) {
            break;
          }
          v59 += 4;
          if (v59 == v60) {
            v58 = *(_QWORD*)(a1 + 8);
            goto LABEL_103;
          }
        }
      }
    }
    return 0;
  }
  v13 = *(char**)(v5 + 2640);
  do {
    if ((signed __int32)*(_DWORD*)(v5 + 2672) <=
            (int)(unsigned __int8)(*v13 + v11 - *(_BYTE*)(v5 + 2664)) ||
        (signed __int32)*(_DWORD*)(v5 + 2676) <=
            (int)(unsigned __int8)(v12 + v13[1] - *(_BYTE*)(v5 + 2668))) {
      return 0;
    }
    v13 += 4;
  } while (v13 != v8);
  v74 = a2;
  v14 = 0;
  do {
    v15 = GameRoutine_747df0(*(_QWORD*)(a1 + 8), v11 + *v7, v12 + v7[1],
                             *(_BYTE*)(*(_QWORD*)(a1 + 8) + 5LL));
    v7 += 4;
    if (v14 <= v15) {
      v14 = v15;
    }
  } while (v7 != v8);
  if (v14 != 255) {
    goto LABEL_88;
  }
  if (*(int*)(v5 + 2632) > 1 || *(_BYTE*)(*(_QWORD*)(a1 + 8) + 5LL) != 7 ||
      !GameRoutine_748d40(a1, v11, v12)) {
    goto LABEL_114;
  }
  v16 = *(_QWORD*)(a1 + 8);
  v17 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
  v18 = v11 + 32 * v12;
  if (v18 >= 0x400) {
    v19 = 0;
  }
  else {
    v19 = v18;
  }
  v20 = *(__int16*)(v17 + 2LL * (unsigned int)v19 + 16488);
  if (v20 < 0 || (v21 = *(_QWORD*)(v17 + 8)) == 0 ||
      (v22 = v21 + 144LL * (unsigned int)v20,
       ((*(__int64 (**)(__int64))(*(_QWORD*)v22 + 16LL))(v22) & 1) == 0) ||
      (v23 = (*(__int64 (**)(__int64))(*(_QWORD*)v22 + 224LL))(v22)) == 0 ||
      (v24 = v23, (GameRoutine_68ea90(v23, (_QWORD*)(v16 + 24)) & 1) == 0) ||
      (v25 = GameRoutine_68e840(v24, (_QWORD*)(v16 + 24))) == 0) {
    v25 = GameRoutine_68e840(
        *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                   8LL * *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98[0] +
                                                         72) +
                                              2 * v19 + 8)),
        (_QWORD*)(v16 + 24));
  }
  if ((*(_BYTE*)(*(_QWORD*)(v25 + 48) + 50LL) & 1) == 0) {
    goto LABEL_114;
  }
  v26 = *(_QWORD*)(a1 + 8);
  v27 = *((char*)GameData_212cf50 + v3);
  v28 = v11 + v27;
  if ((signed __int32)*(_DWORD*)(v26 + 2672) <=
      (int)(unsigned __int8)(v11 + *((_BYTE*)GameData_212cf50 + v3) -
                             *(_BYTE*)(v26 + 2664))) {
    goto LABEL_114;
  }
  v29 = *((char*)GameData_212cf50 + v3 + 256);
  v30 = v12 + v29;
  if ((signed __int32)*(_DWORD*)(v26 + 2676) <=
      (int)(unsigned __int8)(v12 + *((_BYTE*)GameData_212cf50 + v3 + 256) -
                             *(_BYTE*)(v26 + 2668))) {
    goto LABEL_114;
  }
  v31 = v12 - v29;
  v70 = v11 - v27;
  v71 = GameRoutine_747df0(v26, v11 - v27, v12 - v29, 7u);
  v32 = GameRoutine_747df0(*(_QWORD*)(a1 + 8), v28, v30, 7u);
  if (v71 == 255 || v32 == 255) {
    goto LABEL_114;
  }
  v33 = *(_QWORD*)(a1 + 8);
  v34 = *(_DWORD*)(v33 + 2664);
  v35 = *(_DWORD*)(v33 + 2672);
  if ((v35 <= (unsigned __int8)(v28 - v34) ||
       (signed __int32)*(_DWORD*)(v33 + 2676) <=
           (int)(unsigned __int8)(v30 - *(_BYTE*)(v33 + 2668))) &&
      v35 > (unsigned __int8)(v70 - v34) &&
      (signed __int32)*(_DWORD*)(v33 + 2676) >
          (int)(unsigned __int8)(v31 - *(_DWORD*)(v33 + 2668))) {
    goto LABEL_114;
  }
  if (!GameRoutine_748d40(a1, v28, v30) ||
      (v11 += v9, v12 += v10,
       v36 = GameRoutine_747df0(*(_QWORD*)(a1 + 8), v11, v12,
                                *(_BYTE*)(*(_QWORD*)(a1 + 8) + 5LL)),
       v14 = v36 + 1, v74 |= *((_BYTE*)GameData_212cf50 + v3 + 768),
       v36 == 254)) {
  LABEL_114:
    if ((*(_WORD*)(v5 + 1) & 0x204) != 0) {
      v37 = *(char**)(v5 + 2640);
      v38 = *(char**)(v5 + 2648);
      if (v37 != v38) {
        v14 = -1;
        v39 = GameData_212cfb8[0];
        while (1) {
          v40 = *(_QWORD*)(*v39 + 16);
          v41 = v11 + *v37 + 32 * (v12 + v37[1]);
          if (v41 >= 0x400) {
            v41 = 0;
          }
          v42 = *(__int16*)(v40 + 2LL * v41 + 2152);
          if (v42 < 0 || (v43 = *(_QWORD*)(v40 + 8)) == 0 ||
              (v44 = v43 + 144LL * (int)v42,
               ((*(__int64 (**)(__int64))(*(_QWORD*)v44 + 272LL))(v44) & 1) ==
                   0)) {
          LABEL_81:
            v52 =
                GameRoutine_747df0(*(_QWORD*)(a1 + 8), v11 + *v37, v12 + v37[1],
                                   *(_BYTE*)(*(_QWORD*)(a1 + 8) + 5LL));
            goto LABEL_82;
          }
          if ((*(_BYTE*)(v5 + 1) & 4) == 0) {
            goto LABEL_57;
          }
          v45 = *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 4LL);
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v44 + 272LL))(v44) & 1) ==
              0) {
            goto LABEL_57;
          }
          v72 = v45;
          if ((*(_BYTE*)((*(__int64 (**)(__int64))(*(_QWORD*)v44 + 224LL))(
                             v44) +
                         216) &
               1) == 0 ||
              (v46 = 1, v72 != 0) && v72 != 3) {
            if ((*(unsigned __int8 (**)(__int64))(*(_QWORD*)v44 + 168LL))(
                    v44) == 9) {
              goto LABEL_49;
            }
            v47 = (*(__int64 (**)(__int64))(*(_QWORD*)v44 + 168LL))(v44);
            if (v72 == v47) {
              goto LABEL_57;
            }
            if (v47 == 0) {
              if (v72 != 3) {
              LABEL_49:
                v46 = 0;
                if ((*(_BYTE*)(v5 + 2) & 2) == 0) {
                  goto LABEL_66;
                }
                goto LABEL_59;
              }
            LABEL_57:
              v46 = 1;
              goto LABEL_58;
            }
            v46 = 0;
            if (v72 == 0 && v47 == 3) {
              goto LABEL_57;
            }
          }
        LABEL_58:
          if ((*(_BYTE*)(v5 + 2) & 2) == 0) {
            goto LABEL_66;
          }
        LABEL_59:
          v73 = *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 4LL);
          if (((*(__int64 (**)(__int64))(*(_QWORD*)v44 + 272LL))(v44) & 1) ==
                  0 ||
              (*(_BYTE*)((*(__int64 (**)(__int64))(*(_QWORD*)v44 + 224LL))(
                             v44) +
                         216) &
               1) != 0 &&
                  (v73 == 0 || v73 == 3) ||
              ((*(__int64 (**)(__int64))(*(_QWORD*)v44 + 480LL))(v44) & 1) ==
                  0 ||
              (*(unsigned __int8 (**)(__int64))(*(_QWORD*)v44 + 168LL))(v44) ==
                  9 ||
              (v48 = (*(__int64 (**)(__int64))(*(_QWORD*)v44 + 168LL))(v44),
               v73 == v48)) {
          LABEL_66:
            if ((v46 & 1) != 0) {
              goto LABEL_81;
            }
            goto LABEL_67;
          }
          if (v48 != 0) {
            v53 = v73 == 0 && v48 == 3;
          }
          else {
            v53 = v73 == 3;
          }
          if (v53) {
            v54 = v46;
          }
          else {
            v54 = 0;
          }
          if ((v54 & 1) != 0) {
            goto LABEL_81;
          }
        LABEL_67:
          v49 = v11 + *v37 + 32 * (v12 + v37[1]);
          if (v49 >= 0x400) {
            v49 = 0;
          }
          v50 =
              *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                         8LL * *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98
                                                                   [0] +
                                                               32) +
                                                    2LL * v49 + 8));
          if (v50 == 0) {
            goto LABEL_81;
          }
          v51 = *(_QWORD*)(v50 + 48);
          if (v51 == 0) {
            goto LABEL_81;
          }
          v52 = *(
              unsigned __int8*)(v51 +
                                *(unsigned __int8*)(*(_QWORD*)(a1 + 8) + 5LL) +
                                32);
        LABEL_82:
          v37 += 4;
          if (v14 <= v52) {
            v14 = v52;
          }
          if (v37 == v38) {
            goto LABEL_85;
          }
        }
      }
    }
    return 0;
  }
LABEL_85:
  if (v14 != 255) {
    goto LABEL_88;
  }
  return 0;
}

__int64 game_map_760540()
{
  __int64 result;
  __int64 v1;
  __int64 v2;
  __int64 v3;
  _DWORD* v4;
  int v5;
  int v6;
  int v10;
  _DWORD* v11;
  __int64* v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  _DWORD* v16;
  _DWORD* v17;
  char v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
  _DWORD* v24;
  int v25;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  __int64 v32;
  struct {
    _QWORD v33[4];
    _QWORD* v34;
  } v33_;

  result = *(_QWORD*)(game_GameModeData_instance_ + 160);
  v1 = *(unsigned int*)(*GameData_212cfd0[0] + 40);
  if ((int)v1 >= 0) {
    v2 = *(_QWORD*)(result + 8) + 32 * v1;
  }
  else {
    v2 = result + 32;
  }
  v3 = *(_QWORD*)(v2 + 16);
  if (v3 == 0) {
    return result;
  }
  v4 = *(_DWORD**)(v3 + 24);
  v5 = *(_DWORD*)(v2 + 4);
  v6 = v4[105];
  if (v6 > 2 && (signed __int32)v4[103] <= v5) {
    v10 = 3;
  }
  else if (v6 > 1 && (signed __int32)v4[102] <= v5) {
    v10 = 2;
  }
  else if (v6 >= 1 && (signed __int32)v4[101] <= v5) {
    v10 = 1;
  }
  else {
    v10 = v4[104];
  }
  v11 = &v4[24 * v10];
  v12 = GameData_212ce90[0];
  v13 = GameData_21309c8[0];
  if (*((_QWORD*)v11 + 6) != *((_QWORD*)v11 + 7)) {
    v14 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) +
                     24LL * *(unsigned __int8*)(*GameData_212ce90[0] + 24) +
                     556000);
    if (v14 != 0) {
      do {
        v15 = v14;
        v14 = *(_QWORD*)(v14 + 432);
        v16 = *((_DWORD**)v11 + 6);
        v17 = *((_DWORD**)v11 + 7);
        if (v16 != v17) {
          v18 = 0;
          do {
            v19 = Unit_6ca760(v15, v16++);
            v18 |= v19;
          } while (v16 != v17);
          if ((v18 & 1) != 0) {
            v20 = *v13;
            if (*v13 != 0 && *(_BYTE*)(v20 + 8) == 1 &&
                (*(_BYTE*)(v20 + 9) & 1) == 0) {
              v21 = *(_QWORD*)(v15 + 440);
              if (v21 != 0 && *(unsigned __int8*)(v21 + 16) <= 8u &&
                  game_map_UnitFlags_instance_ != 0) {
                v22 = *(unsigned __int8*)(v15 + 2088);
                if ((*(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v22) & 1) !=
                    0) {
                  *(_BYTE*)(game_map_UnitFlags_instance_ + 8 + v22) |= 2u;
                }
              }
            }
            v23 = *(_DWORD*)(v2 + 4);
            v24 = *(_DWORD**)(*(_QWORD*)(v2 + 16) + 24LL);
            v25 = v24[105];
            if (v25 > 2 && (signed __int32)v24[103] <= v23) {
              v29 = 3;
            }
            else if (v25 > 1 && (signed __int32)v24[102] <= v23) {
              v29 = 2;
            }
            else if (v25 >= 1 && (signed __int32)v24[101] <= v23) {
              v29 = 1;
            }
            else {
              v29 = (int)v24[104];
            }
            if ((v24[v29] & 0xFFF) != 0) {
              UnitActor_81b190(v15, 0x0.0p+0f);
            }
          }
        }
      } while (v14 != 0);
      result = *(_QWORD*)(game_GameModeData_instance_ + 160);
    }
  }
  GameRoutine_90dac0(result, v2);
  if (*v12 != 0) {
    *(_BYTE*)(*v12 + 28) = *(_DWORD*)v2;
  }
  v30 = GameData_212ce98[0];
  result =
      (*(__int64 (**)(_QWORD))(**(_QWORD**)(*GameData_212ce98[0] + 160) +
                               32LL))(*(_QWORD*)(*GameData_212ce98[0] + 160));
  if ((*(_BYTE*)(*v12 + 21) & 2) != 0 &&
      *(_DWORD*)(*(_QWORD*)(*v30 + 160) + 528LL) == 0) {
    v33_.v33[0] = GameData_1fb24f8;
    v33_.v34 = v33_.v33;
    game_9903e0((__int64)v33_.v33);
    result = (__int64)v33_.v34;
    if (v33_.v34 == v33_.v33) {
      v31 = 32;
      goto LABEL_64;
    }
    if (v33_.v34 != nullptr) {
      v31 = 40;
    LABEL_64:
      result = (*(__int64 (**)(__int64))(*v33_.v34 + v31))((__int64)v33_.v34);
    }
  }
  v32 = *v13;
  if (*v13 != 0) {
    if (*(_BYTE*)(v32 + 8) != 1 || (*(_BYTE*)(v32 + 9) & 1) != 0 ||
        (result = GameRoutine_1237390(v32 + 864, *(__int64**)(v2 + 16)),
         v32 = *v13, *v13 != 0)) {
      if (*(_BYTE*)(v32 + 8) == 1 && (*(_BYTE*)(v32 + 9) & 1) == 0) {
        *(_DWORD*)(v32 + 12) |= 0x800u;
      }
      if (*(_BYTE*)(v32 + 16) == 0) {
        *(_BYTE*)(v32 + 16) = 2;
      }
    }
  }
  return result;
}

__int64 game_map_7857c0(__int64 result, int* a2, int* a3, _QWORD* a4,
                        __int64 a5, __int64 a6, __int64 a7, __int64 a8,
                        long double a9)
{

#pragma clang fp contract(off)
  __int64 v11;
  int* v16;
  __int64 v17;
  int* v18;
  unsigned __int64 v19;
  int* v20;
  int* v21;
  int v22;
  __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  int* v26;
  int* v27;
  int v28;
  int* v29;
  long double v30;
  int* v31;
  int* v32;
  __int64 v33;
  __int64 v34;
  int* v35;
  int* v36;
  __int64 v37;
  int* v38;
  int* v39;
  int v40;
  int* v41;
  __int64 v42;
  int v43;
  __int64 v44;
  int v45;
  __int64 v46;
  int v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  int* v51;
  _QWORD v52[2];

  v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (a6 != 0) {
    v11 = a6;
    v16 = (int*)result;
    while (a5 > a8 && v11 > a8) {
      if (a5 == 0) {
        return result;
      }
      while (1) {
        result = ((__int64 (*)(_QWORD*, int, int, long double))
                      game_map_784840)(a4, *a2, *v16, a9),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if ((result & 1) != 0) {
          break;
        }
        ++v16;
        if (--a5 == 0) {
          return result;
        }
      }
      v50 = a7;
      v51 = a3;
      if (a5 >= v11) {
        if (a5 == 1) {
          v45 = *v16;
          *v16 = *a2;
          *a2 = v45;
          return result;
        }
        v23 = a5 / 2;
        v24 = a4[1];
        v18 = &v16[a5 / 2];
        v52[0] = *a4;
        v52[1] = v24;
        if (a3 != a2) {
          v25 = a3 - a2;
          v49 = a8;
          a3 = a2;
          do {
            v26 = &a3[v25 >> 1];
            v28 = *v26;
            v27 = v26 + 1;
            if (game_map_784840(v52, v28, *v18, a9)) {
              a3 = v27;
              v25 += ~(v25 >> 1);
            }
            else {
              v25 >>= 1;
            }
          } while (v25 != 0);
          v23 = a5 / 2;
          a8 = v49;
        }
        v17 = a3 - a2;
      }
      else {
        v17 = v11 / 2;
        a3 = &a2[v11 / 2];
        if (v16 == a2) {
          v18 = a2;
        }
        else {
          v48 = a8;
          v18 = v16;
          v19 = a2 - v16;
          do {
            v20 = &v18[v19 >> 1];
            v22 = *v20;
            v21 = v20 + 1;
            if (game_map_784840(a4, *a3, v22, a9)) {
              v19 >>= 1;
            }
            else {
              v18 = v21;
              v19 += ~(v19 >> 1);
            }
          } while (v19 != 0);
          v17 = v11 / 2;
          a8 = v48;
        }
        v23 = v18 - v16;
      }
      a5 -= v23;
      v11 -= v17;
      v29 = (int*)GameRoutine_6e7840((char*)v18, (char*)a2, (char*)a3),
      v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v31 = v29;
      if (v23 + v17 >= a5 + v11) {
        v33 = v11;
        v11 = v17;
        result =
            game_map_7857c0((__int64)v29, a3, v51, a4, a5, v33, v50, a8, v30),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
        a3 = v18;
        a7 = v50;
        a5 = v23;
        v51 = v31;
      }
      else {
        v32 = v18;
        a7 = v50;
        result =
            game_map_7857c0((__int64)v16, v32, v29, a4, v23, v17, v50, a8, v30),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v16 = v31;
      }
      a2 = a3;
      a3 = v51;
      if (v11 == 0) {
        return result;
      }
    }
    if (a5 <= v11) {
      if (v16 != a2) {
        v37 = -a7;
        v38 = (int*)a7;
        v39 = v16;
        do {
          v40 = *v39++;
          v37 -= 4;
          *v38++ = v40;
        } while (v39 != a2);
        while (a2 != a3) {
          result = ((__int64 (*)(_QWORD*, int, int, long double))
                        game_map_784840)(a4, *a2, *(_DWORD*)a7, a9),
          v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
          if ((result & 1) != 0) {
            v41 = a2;
          }
          else {
            v41 = (int*)a7;
          }
          if ((result & 1) != 0) {
            v42 = 4;
          }
          else {
            v42 = 0;
          }
          v43 = *v41;
          a2 = (int*)((char*)a2 + v42);
          if ((result & 1) != 0) {
            v44 = 0;
          }
          else {
            v44 = 4;
          }
          a7 += v44;
          *v16++ = v43;
          if (v38 == (int*)a7) {
            return result;
          }
        }
        return memmove((__int64)v16, a7, -(a7 + v37));
      }
    }
    else if (a2 != a3) {
      v34 = 0;
      do {
        *(_DWORD*)(a7 + v34 * 4) = a2[v34];
        ++v34;
      } while (&a2[v34] != a3);
      v35 = (int*)(a7 + v34 * 4);
      while (a2 != v16) {
        result = ((__int64 (*)(_QWORD*, int, int, long double))
                      game_map_784840)(a4, *(v35 - 1), *(a2 - 1), a9),
        v30 = COERCE_AS(__typeof__(v30), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if ((result & 1) != 0) {
          v36 = a2;
        }
        else {
          v36 = v35;
        }
        if ((result & 1) != 0) {
          --a2;
        }
        else {
          --v35;
        }
        *--a3 = *(v36 - 1);
        if (v35 == (int*)a7) {
          return result;
        }
      }
      if ((int*)a7 != v35) {
        v46 = 0x3FFFFFFFFFFFFFFFLL;
        do {
          v47 = *--v35;
          a3[v46--] = v47;
        } while (v35 != (int*)a7);
      }
    }
  }
  return result;
}

__int64 game_map_78d280(__int64 a1, __int64 a2)
{
  int v3;
  __int64* v5;
  int v6;
  __int64 v7;
  __int64 v8;
  float32x4_t v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  int v13;
  _BYTE* v14;
  int v15;
  __int64* v16;
  int v17;
  unsigned int v18;
  __int64 v19;
  __int64 v20;
  int v21;
  unsigned int v22;
  __int64 v23;
  unsigned int v24;
  __int64 v28;
  unsigned int v29;
  unsigned int v30;
  _BYTE* v31;
  int v32;
  __int64* v33;
  __int64 v34;
  __int64 v35;
  unsigned __int16 v36;
  int v37;
  __int64 v38;
  __int64 v39;
  float v40;
  float v41;
  float v42;
  __int64 v43;
  unsigned int v44;
  __int64 v45;
  unsigned int v46;
  bool v47;
  float32x4_t* v48;
  __int64 v49;
  int v50;
  char* v51;
  __int64 v52;
  int v53;
  char* v54;
  __int64 v55;
  int v56;
  int v57;
  __int64 v58;
  __int64 v59;
  char* v60;
  __int64 v61;
  __int64 v62;
  int v63;
  char* v64;
  int v65;
  int v66;
  int v67;
  int v68;
  __int64 v69;
  int v70;
  _BYTE* v71;
  int v72;
  __int64* v73;
  int v74;
  unsigned int v75;
  __int64 v76;
  __int64 v77;
  int v78;
  int v79;
  int v80;
  char* v81;
  __int64 v82;
  int v83;
  char* v84;
  __int64 v85;
  int v86;
  int v87;
  __int64 v88;
  __int64 v89;
  char* v90;
  __int64 v91;
  __int64 v92;
  int v93;
  char* v94;
  int v95;
  int v96;
  int v97;
  int v98;
  __int64 v99;
  float32x4_t v100;
  int v101;
  __int64 v102;
  __int64* v103;
  __int64 v104;
  __int64* v105;
  __int64* v106;
  __int64 v107;
  float32x4_t v108;
  float v109;
  float32x4_t v110;
  int8x16_t v111;
  float v112;
  int8x16_t v113;
  float32x4_t v114;
  float32x4_t v115;
  float32x4_t v116;
  float32x4_t v117;
  _BYTE* v118;
  int v119;
  __int64* v120;
  __int64 v121;
  float32x4_t v122;
  float v123;
  float32x4_t v124;
  int8x16_t v125;
  float v126;
  int8x16_t v127;
  float32x4_t v128;
  float32x4_t v129;
  float32x4_t v130;
  float32x4_t v131;
  __int64* v132;
  __int64 v133;
  __int64 v134;
  unsigned __int32 v135;
  __int64 v136;
  __int128 v137;
  float v138;
  __int64 v140;
  float v141;
  __int64 v142;
  __int64 v143;
  float v144;
  float v145;
  float v146;
  __int64 v147;
  __int64 result;
  unsigned int v149;
  __int64 v150;
  __int64 v151;
  __int64* v152;
  unsigned __int64 v153;
  unsigned __int64 v154;
  char v155;
  unsigned __int64 v156;
  unsigned __int64 v157;
  float v158;
  unsigned __int64 v159;
  unsigned __int64 v160;
  char v161;
  float32x4_t v162;
  int v163;
  int v164;
  int v165;
  struct {
    __int128 v166;
    char gap112_[16];
    float32x4_t* v167;
  } v166_;
  float32x4_t v168;

  v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
  v3 = *(char*)(a2 + 1);
  v5 = GameData_212cff0[0];
  if (v3 < 0) {
    goto LABEL_251;
  }
  v6 = *(unsigned __int8*)(a2 + 2);
  if ((char)v6 < 0) {
    goto LABEL_251;
  }
  v7 = *GameData_212cff0[0];
  v164 = *(unsigned __int8*)(a2 + 2);
  v165 = v3;
  v163 = 1;
  v8 = *(unsigned int*)(v7 + 24700);
  LANES128(v9).n128_u32[1] = 0;
  LANES128(v9).n128_u32[3] = 0;
  LANES128(v9).n128_f32[0] =
      (float)((float)((float)(v3 | 0x100u) * 0x1.4000000000000p+2f) +
              0x1.4000000000000p+1f) +
      -0x1.4000000000000p+10f;
  LANES128(v9).n128_f32[2] =
      (float)((float)((float)(v6 | 0x100u) * 0x1.4000000000000p+2f) +
              0x1.4000000000000p+1f) +
      -0x1.4000000000000p+10f;
  v162 = v9;
  v10 = GameData_212cfd0[0];
  if ((_DWORD)v8 == 0) {
  LABEL_7:
    v13 = *(_DWORD*)(v7 + 48);
    if ((v13 & 0xFFF) != 0) {
      v14 = *(_BYTE**)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (v13 & 0xFFF));
      if (v14 == nullptr) {
        goto LABEL_210;
      }
      if (v14[250] == 16) {
      LABEL_10:
        if ((int)v8 < 1) {
          goto LABEL_210;
        }
        v15 = *(unsigned __int8*)(*GameData_212cfd0[0] + 8);
        if (*(_BYTE*)(*GameData_212cfd0[0] + 8) != 0) {
          v16 = game_UnitPool_Get((_BYTE*)(*GameData_212cfd0[0] + 8)),
          v146 =
              COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
          if (v16 != nullptr) {
            v15 = *((char*)v16 + 584);
            v17 = *((_DWORD*)v16 + 148);
            v18 = *(_DWORD*)(v7 + 24700);
            if (v18 != 0) {
              v19 = v18 & 7;
              if (v18 >= 8) {
                v51 = (char*)(v7 + 12461);
                v52 = 0;
                v21 = *((char*)v16 + 584);
                do {
                  v52 -= 8;
                  if (v21 >= *(v51 - 48)) {
                    v21 = *(v51 - 48);
                  }
                  if (v21 >= *(v51 - 36)) {
                    v21 = *(v51 - 36);
                  }
                  if (v21 >= *(v51 - 24)) {
                    v21 = *(v51 - 24);
                  }
                  if (v21 >= *(v51 - 12)) {
                    v21 = *(v51 - 12);
                  }
                  if (v21 >= *v51) {
                    v21 = *v51;
                  }
                  if (v21 >= v51[12]) {
                    v21 = v51[12];
                  }
                  if (v21 >= v51[24]) {
                    v21 = v51[24];
                  }
                  v53 = v51[36];
                  v51 += 96;
                  if (v21 >= v53) {
                    v21 = v53;
                  }
                } while (-(__int64)(v18 & 0xFFFFFFF8) != v52);
                v20 = -v52;
              }
              else {
                v20 = 0;
                v21 = *((char*)v16 + 584);
              }
              if ((v18 & 7) != 0) {
                v54 = (char*)(v7 + 12 * v20 + 12413);
                v55 = v18 & 7;
                do {
                  v57 = *v54;
                  v54 += 12;
                  v56 = v57;
                  if (v21 >= v57) {
                    v21 = v56;
                  }
                  --v55;
                } while (v55 != 0);
              }
              v58 = v18 & 7;
              if (v18 >= 8) {
                v60 = (char*)(v7 + 12461);
                v61 = 0;
                v62 = -(__int64)(v18 & 0xFFFFFFF8);
                v50 = *((char*)v16 + 584);
                do {
                  v61 -= 8;
                  if (v50 <= *(v60 - 48)) {
                    v50 = *(v60 - 48);
                  }
                  if (v50 <= *(v60 - 36)) {
                    v50 = *(v60 - 36);
                  }
                  if (v50 <= *(v60 - 24)) {
                    v50 = *(v60 - 24);
                  }
                  if (v50 <= *(v60 - 12)) {
                    v50 = *(v60 - 12);
                  }
                  if (v50 <= *v60) {
                    v50 = *v60;
                  }
                  if (v50 <= v60[12]) {
                    v50 = v60[12];
                  }
                  if (v50 <= v60[24]) {
                    v50 = v60[24];
                  }
                  v63 = v60[36];
                  v60 += 96;
                  if (v50 <= v63) {
                    v50 = v63;
                  }
                } while (v62 != v61);
                v59 = -v61;
              }
              else {
                v59 = 0;
                v50 = *((char*)v16 + 584);
              }
              if (v58 != 0) {
                v64 = (char*)(v7 + 12 * v59 + 12413);
                do {
                  v66 = *v64;
                  v64 += 12;
                  v65 = v66;
                  if (v50 <= v66) {
                    v50 = v65;
                  }
                  --v19;
                } while (v19 != 0);
              }
            }
            else {
              v21 = *((char*)v16 + 584);
              v50 = v21;
            }
            if (v17 <= 1) {
              v17 = 1;
            }
            v67 = (v50 - v15 + v21 - v15) * (v50 - v21);
            v68 = v50 - v17 + 1;
            if (v68 < v50) {
              v50 = v68;
            }
            if (v68 >= v21) {
              v68 = v21;
            }
            if (v67 >= 0) {
              v68 = v50;
            }
            if (v67 != 0) {
              v15 = v68;
            }
          }
          else {
            v15 = 0;
          }
        }
        v69 = *v10;
        v70 = v15;
        v165 = v15;
        v72 = *(unsigned __int8*)(v69 + 8);
        v71 = (_BYTE*)(v69 + 8);
        if (v72 != 0 && (v73 = game_UnitPool_Get(v71)) != nullptr) {
          v74 = *((_DWORD*)v73 + 148);
          v75 = *(_DWORD*)(v7 + 24700);
          if (v75 != 0) {
            v76 = v75 & 7;
            if (v75 >= 8) {
              v81 = (char*)(v7 + 12462);
              v82 = 0;
              v78 = *((char*)v73 + 585);
              do {
                v82 -= 8;
                if (v78 >= *(v81 - 48)) {
                  v78 = *(v81 - 48);
                }
                if (v78 >= *(v81 - 36)) {
                  v78 = *(v81 - 36);
                }
                if (v78 >= *(v81 - 24)) {
                  v78 = *(v81 - 24);
                }
                if (v78 >= *(v81 - 12)) {
                  v78 = *(v81 - 12);
                }
                if (v78 >= *v81) {
                  v78 = *v81;
                }
                if (v78 >= v81[12]) {
                  v78 = v81[12];
                }
                if (v78 >= v81[24]) {
                  v78 = v81[24];
                }
                v83 = v81[36];
                v81 += 96;
                if (v78 >= v83) {
                  v78 = v83;
                }
              } while (-(__int64)(v75 & 0xFFFFFFF8) != v82);
              v77 = -v82;
            }
            else {
              v77 = 0;
              v78 = *((char*)v73 + 585);
            }
            if ((v75 & 7) != 0) {
              v84 = (char*)(v7 + 12 * v77 + 12414);
              v85 = v75 & 7;
              do {
                v87 = *v84;
                v84 += 12;
                v86 = v87;
                if (v78 >= v87) {
                  v78 = v86;
                }
                --v85;
              } while (v85 != 0);
            }
            v88 = v75 & 7;
            if (v75 >= 8) {
              v90 = (char*)(v7 + 12462);
              v91 = 0;
              v92 = -(__int64)(v75 & 0xFFFFFFF8);
              v80 = *((char*)v73 + 585);
              do {
                v91 -= 8;
                if (v80 <= *(v90 - 48)) {
                  v80 = *(v90 - 48);
                }
                if (v80 <= *(v90 - 36)) {
                  v80 = *(v90 - 36);
                }
                if (v80 <= *(v90 - 24)) {
                  v80 = *(v90 - 24);
                }
                if (v80 <= *(v90 - 12)) {
                  v80 = *(v90 - 12);
                }
                if (v80 <= *v90) {
                  v80 = *v90;
                }
                if (v80 <= v90[12]) {
                  v80 = v90[12];
                }
                if (v80 <= v90[24]) {
                  v80 = v90[24];
                }
                v93 = v90[36];
                v90 += 96;
                if (v80 <= v93) {
                  v80 = v93;
                }
              } while (v92 != v91);
              v89 = -v91;
            }
            else {
              v89 = 0;
              v80 = *((char*)v73 + 585);
            }
            if (v88 != 0) {
              v94 = (char*)(v7 + 12 * v89 + 12414);
              do {
                v96 = *v94;
                v94 += 12;
                v95 = v96;
                if (v80 <= v96) {
                  v80 = v95;
                }
                --v76;
              } while (v76 != 0);
            }
          }
          else {
            v78 = *((char*)v73 + 585);
            v80 = v78;
          }
          if (v74 <= 1) {
            v74 = 1;
          }
          v97 = (v80 - *((char*)v73 + 585) + v78 - *((char*)v73 + 585)) *
                (v80 - v78);
          v98 = v80 - v74 + 1;
          if (v98 < v80) {
            v80 = v98;
          }
          if (v98 >= v78) {
            v98 = v78;
          }
          if (v97 >= 0) {
            v98 = v80;
          }
          if (v97 != 0) {
            v79 = v98;
          }
          else {
            v79 = *((char*)v73 + 585);
          }
        }
        else {
          v79 = 0;
        }
        v99 = *v10;
        v164 = v79;
        v163 = *((_DWORD*)game_UnitPool_Get((_BYTE*)(v99 + 8)) + 148),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
        v40 = (float)(v163 + 2 * v70) * 0x1.4000000000000p+1f;
        v41 = (float)(v163 + 2 * v79) * 0x1.4000000000000p+1f;
        if (GameData_21ca2e8 != 0) {
          v42 = Height_7c4d10(*(_QWORD*)(GameData_21ca2e8 + 61456), v40, v41),
          v146 =
              COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
          v41 = (float)(v163 + 2 * v79) * 0x1.4000000000000p+1f;
          v6 = v79;
          v3 = v70;
          goto LABEL_209;
        }
        v6 = v79;
        v3 = v70;
        goto LABEL_208;
      }
      if (v14[105] == 3 && v14[279] != 0) {
      LABEL_43:
        LANES128(v168).n128_u8[1] = v6;
        LANES128(v168).n128_u8[0] = v3;
        LANES128(v168).n128_u16[1] = 0;
        *(_QWORD*)&v166_.v166 = GameData_1f97280;
        *((_QWORD*)&v166_.v166 + 1) = &v168;
        v166_.v167 = (float32x4_t*)&v166_.v166;
        game_map_anonymous_TargetEnumerator_Shoot(v7 + 8, a2,
                                                  (__int64)&v166_.v166),
            v146 =
                COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v166_.v167 == (float32x4_t*)&v166_.v166) {
          v35 = 32;
        }
        else {
          if (v166_.v167 == nullptr) {
            goto LABEL_48;
          }
          v35 = 40;
        }
        (*(void (**)(void*))(LANES128(*(v166_.v167)).n128_u64[0] + v35))(
            (void*)v166_.v167),
            v146 =
                COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
      LABEL_48:
        v36 = *(_WORD*)(a2 + 1);
        v37 = LANES128(v168).n128_i8[0];
        v165 = LANES128(v168).n128_i8[0];
        v38 = *v5;
        LANES128(v168).n128_u32[0] = v36;
        v166_.v167 = (float32x4_t*)&v166_.v166;
        *(_QWORD*)&v166_.v166 = GameData_1f97300;
        *((_QWORD*)&v166_.v166 + 1) = &v168;
        game_map_anonymous_TargetEnumerator_Shoot(v38 + 8, a2,
                                                  (__int64)&v166_.v166),
            v146 =
                COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v166_.v167 == (float32x4_t*)&v166_.v166) {
          v39 = 32;
        }
        else {
          if (v166_.v167 == nullptr) {
          LABEL_53:
            v164 = LANES128(v168).n128_i8[1];
            v6 = LANES128(v168).n128_i8[1];
            v40 = (float)((2 * v37) | 1) * 0x1.4000000000000p+1f;
            v41 = (float)((2 * LANES128(v168).n128_i8[1]) | 1) *
                  0x1.4000000000000p+1f;
            if (GameData_21ca2e8 != 0) {
              v158 = (float)((2 * LANES128(v168).n128_i8[1]) | 1) *
                     0x1.4000000000000p+1f;
              v42 = Height_7c4d10(
                  *(_QWORD*)(GameData_21ca2e8 + 61456),
                  (float)((2 * v37) | 1) * 0x1.4000000000000p+1f, v41),
              v146 = COERCE_AS(__typeof__(v146),
                               PSEUDO_REGISTER(float, "s0", "=w"));
              v41 = v158;
              v6 = v164;
              v3 = v37;
            LABEL_209:
              LANES128(v100).n128_u64[0] =
                  __PAIR64__(LODWORD(v42), LODWORD(v40));
              LANES128(v100).n128_u64[1] = LODWORD(v41);
              v162 = v100;
              goto LABEL_210;
            }
            v3 = v37;
          LABEL_208:
            v42 = 0x0.0p+0f;
            goto LABEL_209;
          }
          v39 = 40;
        }
        (*(void (**)(void*))(LANES128(*(v166_.v167)).n128_u64[0] + v39))(
            (void*)v166_.v167),
            v146 =
                COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
        goto LABEL_53;
      }
    }
    else {
      v22 = *(unsigned __int16*)(v7 + 40);
      if (*(_WORD*)(v7 + 40) == 0) {
        v22 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v23 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v22);
      v14 = *(_BYTE**)(v23 + 192);
      v24 = *(unsigned __int8*)(v23 + 72);
      if (v14 == nullptr || v24 > 7) {
        goto LABEL_210;
      }
      if (v14[105] != 0 && v14[104] != 2 && v14[250] == 16) {
        goto LABEL_10;
      }
      if (v14[105] != 0 && v14[104] != 2 && v14[105] == 3 && v14[279] != 0) {
        goto LABEL_43;
      }
      if (v14[105] == 0 || v14[104] == 2) {
        goto LABEL_210;
      }
    }
    if (v14[250] != 28) {
      goto LABEL_210;
    }
    v28 = *GameData_212cfd0[0];
    v29 = *(_DWORD*)(v7 + 20);
    v30 = *(_DWORD*)(v7 + 24);
    v161 = 0;
    v32 = *(unsigned __int8*)(v28 + 8);
    v31 = (_BYTE*)(v28 + 8);
    if (v32 != 0) {
      v33 = game_UnitPool_Get(v31),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
      v7 = *v5;
      v34 = (__int64)v33;
      v13 = *(_DWORD*)(*v5 + 48);
    }
    else {
      v34 = 0;
    }
    if ((v13 & 0xFFF) != 0) {
      v43 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) + 8LL * (v13 & 0xFFF));
      if (v43 == 0) {
        goto LABEL_70;
      }
    }
    else {
      v44 = *(unsigned __int16*)(v7 + 40);
      if (*(_WORD*)(v7 + 40) == 0) {
        v44 = *(unsigned __int16*)game_g_empty_item_ptr;
      }
      v45 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b8 + 64) + 8LL * v44);
      v43 = *(_QWORD*)(v45 + 192);
      v46 = *(unsigned __int8*)(v45 + 72);
      v47 = v43 == 0 || v46 > 7;
      if (v47 || *(_BYTE*)(v43 + 105) == 0 || *(_BYTE*)(v43 + 104) == 2) {
        LODWORD(v43) = 0;
      LABEL_70:
        LANES128(v168).n128_u32[0] = v43;
        v48 = (float32x4_t*)fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
        v166_.v167 = v48;
        LANES128(*(v48)).n128_u64[0] = (unsigned __int64)GameData_1f982c0;
        LANES128(*(v48)).n128_u64[1] = (unsigned __int64)&v161;
        LANES128(v48[1]).n128_u64[0] = (unsigned __int64)&v165;
        LANES128(v48[1]).n128_u64[1] = (unsigned __int64)&v164;
        LANES128(v48[2]).n128_u64[0] = (unsigned __int64)&v163;
        LANES128(v48[2]).n128_u64[1] = (unsigned __int64)&v162;
        GameHr_757f60(v34, &v168, v29, v30, (__int64)&v166_.v166),
            v146 =
                COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v166_.v167 == (float32x4_t*)&v166_.v166) {
          v49 = 32;
        }
        else {
          if (v166_.v167 == nullptr) {
          LABEL_75:
            v6 = v164;
            v3 = v165;
            goto LABEL_210;
          }
          v49 = 40;
        }
        (*(void (**)(void*))(LANES128(*(v166_.v167)).n128_u64[0] + v49))(
            (void*)v166_.v167),
            v146 =
                COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
        goto LABEL_75;
      }
    }
    LODWORD(v43) = *(_WORD*)(v43 + 16) & 0xFFF;
    goto LABEL_70;
  }
  v11 = v8;
  v12 = v7 + 12400;
  while (1) {
    v12 += 12;
    if (v12 == a2) {
      break;
    }
    if (--v11 == 0) {
      goto LABEL_7;
    }
  }
LABEL_210:
  Cursor_730b20(GameData_21cd130, v3, v6),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
  v101 = v163;
  v102 = *(_QWORD*)(GameData_21cd130 + 48);
  *(_DWORD*)(v102 + 184) = v163;
  *(_DWORD*)(v102 + 188) = v101;
  v103 = GameData_212cfc8[0];
  v104 = *(_QWORD*)(*GameData_212cfc8[0] + 432);
  LODWORD(v166_.v166) = 1065353216;
  if (*(_BYTE*)(v104 + 120) == 1) {
    (*(void (**)(__int64, float, float))(*(_QWORD*)(v104 + 96) + 24LL))(
        v104 + 96, 0x1.0000000000000p+0f, 0x1.0000000000000p+0f),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
    *(_DWORD*)(v104 + 104) = 0;
  LABEL_215:
    *(_DWORD*)(v104 + 108) = 0;
    *(_WORD*)(v104 + 120) = 256;
    goto LABEL_216;
  }
  if (*(float*)(v104 + 104) > 0x1.8000000000000p-1f ||
      ((*(__int64 (**)(__int64, __int128*, __int64))(
           *(_QWORD*)(v104 + 96) + 8LL))(v104 + 96, &v166_.v166, v104 + 128) &
       1) != 0) {
    (*(void (**)(__int64))(*(_QWORD*)(v104 + 96) + 16LL))(v104 + 96),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
    (*(void (**)(__int64))(*(_QWORD*)(v104 + 96) + 24LL))(v104 + 96),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
    *(_DWORD*)(v104 + 104) = 1061158912;
    goto LABEL_215;
  }
LABEL_216:
  if (*(_BYTE*)(*v10 + 8) != 0) {
    v105 = game_UnitPool_Get((_BYTE*)(*v10 + 8)),
    v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v105 != nullptr) {
      v106 = v105 + 6;
      v107 = (__int64)v105;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64*))(
          v105[6] + 16))((void*)(&v166_.v166), v105 + 6),
          v146 =
              COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
      v108 = vsubq_f32(v162, COERCE_AS(float32x4_t, v166_.v166));
      if ((float)(vmuls_lane_f32(LANES128(v108).n128_f32[2], v108, 2) +
                  (float)(LANES128(v108).n128_f32[0] *
                          LANES128(v108).n128_f32[0])) >=
          0x1.0000000000000p-4f) {
        v109 = 0x0.0p+0f;
        if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                                 COERCE_AS(float32x2_t, 1065353216LL)))
                .n64_f32[0] > 0x0.0p+0f) {
          LANES128(v110).n128_u64[0] = LANES128(v108).n128_u32[0];
          LANES128(v110).n128_u64[1] = LANES128(v108).n128_u32[2];
          v111 = vmulq_f32(v110, v110);
          LANES128(v111).n128_u64[0] =
              LANES64_OF(
                  vadd_f32(
                      COERCE_AS(
                          float32x2_t,
                          LANES128_OF(vextq_s8(v111, v111, 8u)).n128_u64[0]),
                      COERCE_AS(float32x2_t, LANES128(v111).n128_u64[0])))
                  .n64_u64[0];
          if (LANES64_OF(
                  vpadd_f32(COERCE_AS(float32x2_t, LANES128(v111).n128_u64[0]),
                            COERCE_AS(float32x2_t, LANES128(v111).n128_u64[0])))
                  .n64_f32[0] > 0x0.0p+0f) {
            v168 = v110;
            v156 = LANES128(v108).n128_u32[2];
            v159 = LANES128(v108).n128_u32[0];
            v166_.v166 = GameData_1a83090;
            v112 = math_Vec3_Angle((float32x4_t*)&v166_.v166, &v168),
            v146 =
                COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
            LANES128(v113).n128_u64[0] = v159;
            LANES128(v113).n128_u64[1] = v156;
            LANES128(v114).n128_u64[0] =
                LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                     COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            LANES128(v115).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v113, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            LANES128(v116).n128_u64[0] =
                LANES64_OF(
                    vqtbl1_s8(v113, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v114).n128_i8[8] =
                vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                          COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            LANES128(v117).n128_u64[0] =
                LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                     COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                    .n64_u64[0];
            *(int8x8_t*)&LANES128(v116).n128_i8[8] =
                vqtbl1_s8(v113, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
            *(int8x8_t*)&LANES128(v115).n128_i8[8] =
                vqtbl1_s8(v113, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            *(int8x8_t*)&LANES128(v117).n128_i8[8] =
                vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                          COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
            if (LANES128_OF(vmlsq_f32(vmulq_f32(v114, v115), v116, v117))
                    .n128_f32[1] < 0x0.0p+0f) {
              v112 = -v112;
            }
            v109 = v112 * 0x1.ca5dc00000000p+5f;
          }
        }
        UnitActor_81ab40(v107, v109, -0x1.0000000000000p+0f),
            v146 =
                COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
      }
      v119 = *(unsigned __int8*)(a2 + 5);
      v118 = (_BYTE*)(a2 + 5);
      if (v119 != 0) {
        v120 = game_UnitPool_Get(v118),
        v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
        if (v120 != nullptr) {
          v121 = (__int64)v120;
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64*))(
              *v106 + 16))((void*)(&v166_.v166), v106),
              v146 = COERCE_AS(__typeof__(v146),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64))(
              *(_QWORD*)(v121 + 48) + 16LL))((void*)(&v168), v121 + 48),
              v146 = COERCE_AS(__typeof__(v146),
                               PSEUDO_REGISTER(float, "s0", "=w"));
          v122 = vsubq_f32(COERCE_AS(float32x4_t, v166_.v166), v168);
          if ((float)(vmuls_lane_f32(LANES128(v122).n128_f32[2], v122, 2) +
                      (float)(LANES128(v122).n128_f32[0] *
                              LANES128(v122).n128_f32[0])) >=
              0x1.0000000000000p-4f) {
            v123 = 0x0.0p+0f;
            if (LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 1065353216LL),
                                     COERCE_AS(float32x2_t, 1065353216LL)))
                    .n64_f32[0] > 0x0.0p+0f) {
              LANES128(v124).n128_u64[0] = LANES128(v122).n128_u32[0];
              LANES128(v124).n128_u64[1] = LANES128(v122).n128_u32[2];
              v125 = vmulq_f32(v124, v124);
              LANES128(v125).n128_u64[0] =
                  LANES64_OF(
                      vadd_f32(
                          COERCE_AS(float32x2_t,
                                    LANES128_OF(vextq_s8(v125, v125, 8u))
                                        .n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v125).n128_u64[0])))
                      .n64_u64[0];
              if (LANES64_OF(
                      vpadd_f32(
                          COERCE_AS(float32x2_t, LANES128(v125).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v125).n128_u64[0])))
                      .n64_f32[0] > 0x0.0p+0f) {
                v168 = v124;
                v157 = LANES128(v122).n128_u32[2];
                v160 = LANES128(v122).n128_u32[0];
                v166_.v166 = GameData_1a83090;
                v126 = math_Vec3_Angle((float32x4_t*)&v166_.v166, &v168),
                v146 = COERCE_AS(__typeof__(v146),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
                LANES128(v127).n128_u64[0] = v160;
                LANES128(v127).n128_u64[1] = v157;
                LANES128(v128).n128_u64[0] =
                    LANES64_OF(
                        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                  COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                        .n64_u64[0];
                LANES128(v129).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v127, COERCE_AS(int8x8_t,
                                                         0x30201000B0A0908LL)))
                        .n64_u64[0];
                LANES128(v130).n128_u64[0] =
                    LANES64_OF(vqtbl1_s8(v127, COERCE_AS(int8x8_t,
                                                         0xB0A090807060504LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v128).n128_i8[8] =
                    vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                              COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                LANES128(v131).n128_u64[0] =
                    LANES64_OF(
                        vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                                  COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                        .n64_u64[0];
                *(int8x8_t*)&LANES128(v130).n128_i8[8] =
                    vqtbl1_s8(v127, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
                *(int8x8_t*)&LANES128(v129).n128_i8[8] =
                    vqtbl1_s8(v127, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                *(int8x8_t*)&LANES128(v131).n128_i8[8] =
                    vqtbl1_s8(COERCE_AS(int8x16_t, GameData_1a83090),
                              COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
                if (LANES128_OF(vmlsq_f32(vmulq_f32(v128, v129), v130, v131))
                        .n128_f32[1] < 0x0.0p+0f) {
                  v126 = -v126;
                }
                v123 = v126 * 0x1.ca5dc00000000p+5f;
              }
            }
            UnitActor_81ab40(v121, v123, -0x1.0000000000000p+0f),
                v146 = COERCE_AS(__typeof__(v146),
                                 PSEUDO_REGISTER(float, "s0", "=w"));
          }
        }
      }
    }
  }
  if (*(_BYTE*)(*v10 + 8) != 0) {
    v132 = game_UnitPool_Get((_BYTE*)(*v10 + 8)),
    v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v132 != nullptr) {
      v133 = (__int64)v132;
      BattleUtil_7aa190((void*)((float32x4_t*)&v166_.v166), (__int64)v132,
                        *(_DWORD*)(*(_QWORD*)(GameData_21cd130 + 48) + 8LL),
                        *(_DWORD*)(*(_QWORD*)(GameData_21cd130 + 48) + 12LL)),
          v146 =
              COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
      v134 = GameData_21cd130;
      v135 = DWORD2(v166_.v166);
      v136 = *(_QWORD*)(GameData_21cd130 + 48);
      *(_QWORD*)(v136 + 144) = v166_.v166;
      v137 = *(_OWORD*)(v136 + 144);
      *((_QWORD*)&v137 + 1) = v135;
      *(_OWORD*)(v136 + 144) = v137;
      v138 = BattleUtil_7aa490(v133, *(_DWORD*)(*(_QWORD*)(v134 + 48) + 8LL),
                               *(_DWORD*)(*(_QWORD*)(v134 + 48) + 12LL)),
      v146 = COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
      v140 = *v103;
      v141 = v138;
      v142 = *(_QWORD*)(*v103 + 432);
      if (game_GameModeData_instance_ != 0 &&
          (v143 = *(_QWORD*)(game_GameModeData_instance_ + 16)) != 0) {
        LOBYTE(v138) = *(_BYTE*)(v143 + 129);
        v144 = (float)LODWORD(v138);
        LOBYTE(v138) = *(_BYTE*)(v143 + 130);
        v145 = (float)LODWORD(v138);
      }
      else {
        v144 = 0x1.6800000000000p+6f;
        v145 = 0x1.6800000000000p+6f;
      }
      if (*(float*)(v142 + 68) == *(float*)(v142 + 64)) {
        (*(void (**)(__int64))(*(_QWORD*)(v142 + 56) + 16LL))(v142 + 56),
            v146 =
                COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
        v140 = *v103;
      }
      else {
        v146 = *(float*)(v142 + 88);
      }
      if (v141 < (float)((float)(v146 - v144) / (float)(v145 - v144))) {
        Camera_7bfee0(*(_QWORD*)(v140 + 432), v141, v145 - v144),
            v146 =
                COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
        v140 = *v103;
      }
      v147 = *(_QWORD*)(v140 + 432);
      LANES128(v168).n128_u32[0] = 0;
      if (*(_BYTE*)(v147 + 160) == 1) {
        (*(void (**)(__int64, double, double))(*(_QWORD*)(v147 + 136) + 24LL))(
            v147 + 136, 0x0.0p+0, 0x0.0p+0),
            v146 =
                COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_DWORD*)(v147 + 144) = 0;
      LABEL_250:
        *(_DWORD*)(v147 + 148) = 0;
        *(_WORD*)(v147 + 160) = 256;
        goto LABEL_251;
      }
      if (*(float*)(v147 + 144) > 0x1.8000000000000p-1f ||
          ((*(__int64 (**)(__int64, float32x4_t*, __int64))(
               *(_QWORD*)(v147 + 136) + 8LL))(v147 + 136, &v168, v147 + 168) &
           1) != 0) {
        (*(void (**)(__int64))(*(_QWORD*)(v147 + 136) + 16LL))(v147 + 136),
            v146 =
                COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
        (*(void (**)(__int64))(*(_QWORD*)(v147 + 136) + 24LL))(v147 + 136),
            v146 =
                COERCE_AS(__typeof__(v146), PSEUDO_REGISTER(float, "s0", "=w"));
        *(_DWORD*)(v147 + 144) = 1061158912;
        goto LABEL_250;
      }
    }
  }
LABEL_251:
  result = GameData_21cd120;
  if (GameData_21cd120 == 0) {
    return result;
  }
  v149 = *(_DWORD*)(a1 + 276);
  if ((v149 & 0x80000000) != 0 ||
      (v150 = *v5, *(char*)(*v5 + 12LL * v149 + 12413) < 0) ||
      *(char*)(*v5 + 12LL * v149 + 12414) < 0) {
    v149 = *(_DWORD*)(a1 + 272);
    if ((v149 & 0x80000000) != 0) {
      v152 = (__int64*)&GameData_1b47d78;
      goto LABEL_260;
    }
    v150 = *v5;
    v151 = 64;
  }
  else {
    v151 = 12408;
  }
  v152 = (__int64*)(v150 + v151 + 12LL * v149 + 4);
LABEL_260:
  v154 = *(_QWORD*)(a1 + 8);
  v153 = *(_QWORD*)(a1 + 16);
  if (v154 > v153) {
  LABEL_263:
    v155 = 0;
  }
  else {
    while (*(_BYTE*)v153 != 2) {
      v153 -= 64LL;
      if (v154 > v153) {
        goto LABEL_263;
      }
    }
    v155 = (unsigned int)(*(_DWORD*)(v153 + 32) - 5) < 2;
  }
  return GameRoutine_f098f0(GameData_21cd120, v152, v155);
}

void game_map_7aa980(_BYTE* a1, __int64 a2)
{

#pragma clang fp contract(off)
  int v4;
  int v5;
  __int64 v6;
  float v7;
  float32x4_t v8;
  _QWORD v9[25];

  GameRoutine_79ca50((void*)(&v8), a2);
  if (a1 != nullptr && *a1 != 0) {
    if (game_ProcGameSkipView_instance_ == 0 ||
        *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
        (((v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
             ? (v5 = 2)
             : (v5 = 3),
         (v5 & v4) != 0)) {
      v7 = LANES128(v8).n128_f32[0];
      v6 = *(__int64*)((char*)LANES128(v8).n128_i64 + 4);
      snd_Fade_Fade_10c830((__int64)v9, 0x0.0p+0f);
      snd_playAt_ff4e0((__int64)&GameData_1a9f09e, (__int64)a1, (__int64)v9, 0,
                       0x10001u, 0, v7, *(float*)&v6, *((float*)&v6 + 1),
                       0x0.0p+0f, 0x1.0000000000000p+0f);
      snd_Fade_Destroy_Fade(v9);
    }
  }
}

void game_map_7b0700(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  float32x4_t v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned int v10;
  int v11;
  __int64 v13;
  __int64 v14;
  __int64 (***v15)(_QWORD);
  int v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  int v20;
  int v21;
  float v22;
  int v23;
  int v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  int v28;
  int v29;
  __int64 v30;
  float v31;
  bool v32;
  float v33;
  int v34;
  int v35;
  int v36;
  float v37;
  float v38;
  unsigned int v39;
  unsigned __int64 v40;
  unsigned int v41;
  int v42;
  int v43;
  __int64 v44;
  int v45;
  __int64 v48;
  __int64* v50;
  __int64 v51;
  float32x4_t v52;
  __int64 v53;
  bool v54;
  __int64 v56;
  int v57;
  int v60;
  __int64 v62;
  unsigned int v63;
  int v64;
  int v65;
  int v66;
  __int64 v67;
  unsigned int v68;
  int v69;
  int v70;
  float v71;
  int v72;
  __int64 v73;
  int v74;
  unsigned __int64 v75;
  __int64 v76;
  unsigned int v77;
  float32x4_t v78;
  unsigned int v79;
  int v80;
  int v81;
  __int64 v82;
  __int16 v83;
  int v84;
  __int64 v85;
  __int64 v86;
  char* v87;
  unsigned int v88;
  int v89;
  int v90;
  float v91;
  float v92;
  float v93;
  float32x4_t v94;
  float32x4_t v95;
  struct {
    float32x4_t v96;
    __int64 v97;
    __int16 v98;
  } v96_;

  v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
  v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v1 = a1 + 20480;
  v3 = *(int*)(a1 + 22980);
  if ((int)v3 < (signed __int32)*(_DWORD*)(a1 + 11432)) {
    v4 = a1 + (v3 << 6);
    v5 = a1 + 192;
    v6 = v4 + 3240;
    BattleSide_79e950(a1 + 192, v4 + 3240),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
    BattleSide_79e950(a1 + 952, v4 + 3240),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
    BattleSide_79e950(a1 + 1712, v4 + 3240),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
    BattleSide_79e950(a1 + 2472, v4 + 3240),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v8 = *(unsigned __int8*)(v4 + 3242);
    if (v8 == 4) {
      goto LABEL_3;
    }
    v13 = v5 + 760LL * *(unsigned __int8*)(v4 + 3243);
    v14 = *(_QWORD*)(v13 + 24);
    if (v14 == 0 || *(_QWORD*)(v14 + 392) == 0) {
      if ((*(_BYTE*)(*(_QWORD*)(v13 + 8) + 11277LL) & 0x80) != 0) {
        goto LABEL_3;
      }
      v15 = *(__int64 (****)(_QWORD))(v13 + 32),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v15 == nullptr || ((**v15)(v15) & 1) == 0) {
        goto LABEL_3;
      }
    }
    v16 = *(_DWORD*)(v6 + 12);
    v17 = v5 + 760LL * (unsigned int)v8;
    if ((v16 & 1) != 0) {
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
          (((v23 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v24 = 2)
               : (v24 = 3),
           (v24 & v23) != 0)) {
        v7 = X8CALL_V0(float32x4_t,
                       GameRoutine_79ca50((void*)(&v96_.v96), v13)),
        v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
        v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v25 = GameData_21ec7b0;
        if (GameData_21ec7b0 == 0 ||
            (v26 = *(_QWORD*)(GameData_21ec7b0 + 8)) == 0 ||
            (*(_BYTE*)(v26 + 113) & 0x40) == 0) {
          if (GameData_21ed098 != 0) {
            GameRoutine_18c4dd0((_QWORD*)GameData_21ed098, (__int64)&v96_.v96,
                                0, 1),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
                v78 = COERCE_AS(__typeof__(v78),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            v25 = GameData_21ec7b0;
          }
          if (v25 != 0) {
            v27 = *(_QWORD*)(v25 + 128);
            if (v27 != 0) {
              *(_DWORD*)(v27 + 464) = 1062557013;
            }
          }
        }
      }
      GameRoutine_79ca50((void*)(&v94), v13),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
          (((v28 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v29 = 2)
               : (v29 = 3),
           (v29 & v28) != 0)) {
        v93 = LANES128(v94).n128_f32[0];
        v30 = *(__int64*)((char*)LANES128(v94).n128_i64 + 4);
        snd_Fade_Fade_10c830((__int64)&v96_.v96, 0x0.0p+0f),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
        snd_playAt_ff4e0((__int64)&GameData_1a9f09e, (__int64)"SE_ACT_LD_Miss",
                         (__int64)&v96_.v96, 0, 0x10001u, 0, v93, *(float*)&v30,
                         *((float*)&v30 + 1), 0x0.0p+0f, 0x1.0000000000000p+0f),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
        snd_Fade_Destroy_Fade(&v96_.v96),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
      goto LABEL_52;
    }
    if ((v16 & 2) == 0) {
      v18 = v6 + 12LL * *(unsigned __int8*)(v13 + 16);
      v19 = *(__int16*)(v18 + 18);
      if (*(_WORD*)(v18 + 18) != 0) {
        GameRoutine_79ca50((void*)(&v96_.v96), v13),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (game_ProcGameSkipView_instance_ == 0 ||
            *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
            (((v20 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) !=
                     0
                 ? (v21 = 2)
                 : (v21 = 3),
             (v21 & v20) != 0)) {
          GameRoutine_10a4c70((__int64)&v96_.v96, v19, 0),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          if ((v19 & 0x80000000) != 0 && *(_BYTE*)(v1 + 2552) == 0) {
            GameHr_7aa770("SE_ACT_LD_Hit_Recovery_Common",
                          (__int128*)&v96_.v96),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
                v78 = COERCE_AS(__typeof__(v78),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
          }
        }
        v22 = 0x1.99999a0000000p-3f;
        if (*(int*)(*(_QWORD*)(a1 + 168) + 12356LL) > 0) {
          v22 = 0x0.0p+0f;
        }
        ProcInst_657ca0(a1, 2, v22),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    LABEL_150:
      if (*(_BYTE*)(v1 + 2552) != 0) {
        if ((*(_DWORD*)(v6 + 8) & 0xFFF) == 0) {
          goto LABEL_171;
        }
        v72 = *(_DWORD*)(v6 + 12);
        if ((v72 & 0x20000) != 0) {
          goto LABEL_171;
        }
        v73 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                         8LL * (*(_DWORD*)(v6 + 8) & 0xFFF));
        if ((*(_WORD*)(v73 + 754) & 1) == 0) {
          goto LABEL_171;
        }
        v74 = *(unsigned __int8*)(v6 + 4);
        if ((unsigned int)(v74 - 14) < 4 ||
            v74 == 13 && (((unsigned __int16)*GameData_212cf08[0] >>
                           *(_BYTE*)(v73 + 104)) &
                          1) != 0) {
          goto LABEL_171;
        }
        if ((v72 & 0x10) != 0 &&
            (*(_WORD*)(*(_QWORD*)(v73 + 24) + 496LL) & 0x80) != 0) {
          goto LABEL_171;
        }
        if ((unsigned int)(v74 - 5) < 5 ==
            (((unsigned __int16)*GameData_212cf08[0] >> *(_BYTE*)(v73 + 104)) &
             1)) {
          goto LABEL_171;
        }
        v75 = *(_QWORD*)(v73 + 784);
        if (v75 == 0) {
          goto LABEL_171;
        }
        v76 = *(_QWORD*)(v13 + 24);
        if (v76 != 0) {
          LANES128(v96_.v96).n128_u64[0] = v75;
          GameHr_961420(a1, (const char**)&v96_.v96, v76),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          LANES128(v94).n128_u64[0] = v75;
          GameRoutine_79ca50((void*)(&v95), v13),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          v96_.v98 = 0;
          v96_.v96 = v95;
          v96_.v97 = 1065353216;
          EffectConst_961260(a1, &v94, (__int64)&v96_.v96),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        v32 = (signed __int32)*(_DWORD*)(*(_QWORD*)(a1 + 168) + 12356LL) <= 0;
        v33 = 0x1.3333340000000p-2f;
        v31 = 0x1.99999a0000000p-4f;
        goto LABEL_53;
      }
      v77 = GameRoutine_7a75b0(v6) - 1,
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v77 > 3) {
        goto LABEL_171;
      }
      v79 = GameData_1a82e10[v77];
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
          (((v80 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v81 = 2)
               : (v81 = 3),
           (v81 & v80) != 0)) {
        GameRoutine_79ca50((void*)(&v96_.v96), v17),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
        GameRoutine_10a4c70((__int64)&v96_.v96, 0, v79),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    LABEL_52:
      v31 = 0x0.0p+0f;
      v32 = (signed __int32)*(_DWORD*)(*(_QWORD*)(a1 + 168) + 12356LL) <= 0;
      v33 = 0x1.99999a0000000p-3f;
    LABEL_53:
      if (!v32) {
        v33 = v31;
      }
      v34 = (int)(float)(v33 * 0x1.e000000000000p+5f);
      if (v34 >= 1) {
        if (game_ProcGameSkipView_instance_ == 0 ||
            *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
            (((v35 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) !=
                     0
                 ? (v36 = 2)
                 : (v36 = 3),
             (v36 & v35) != 0)) {
          v37 = *(float*)(a1 + 144);
          v38 = (float)(unsigned int)v34;
          *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
          if (v37 >= (float)(unsigned int)v34) {
            v38 = v37;
          }
          *(float*)(a1 + 144) = v38;
        }
      }
      goto LABEL_171;
    }
    v39 = *(__int16*)(v6 + 16 + 12LL * *(unsigned __int8*)(v13 + 16) + 2);
    if ((v39 & 0x80000000) != 0) {
      v7 = X8CALL_V0(float32x4_t,
                     GameRoutine_79ca50((void*)(&v96_.v96), v13)),
      v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
      v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
          (((v42 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v43 = 2)
               : (v43 = 3),
           (v43 & v42) != 0)) {
        GameRoutine_10a4c70((__int64)&v96_.v96, v39, 0),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if (*(_BYTE*)(v1 + 2552) == 0) {
          GameHr_7aa770("SE_ACT_LD_Hit_Recovery_Common", (__int128*)&v96_.v96),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
      v44 = *(_QWORD*)(v13 + 24);
      v45 = *(unsigned __int8*)(v1 + 2552);
      if (*(_QWORD*)(v17 + 24) != v44 && v44 != 0 && v45 != 0) {
        v48 = *(_QWORD*)(v13 + 24);
        LANES128(v96_.v96).n128_u8[12] = 0;
        LANES128(v96_.v96).n128_u64[0] = 0xBF800000BF800000LL;
        LANES128(v96_.v96).n128_u32[2] =
            *(_DWORD*)(*(_QWORD*)GameData_212d270 + 456LL);
        UnitActor_81a540(v48, 0x953E62E9, (__int64)&v96_.v96),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v44 = *(_QWORD*)(v13 + 24);
        v45 = *(unsigned __int8*)(v1 + 2552);
      }
      if (v44 != 0 && v45 != 0) {
        v50 = (__int64*)(v17 + 44);
        if (*(_WORD*)(v17 + 44) == 0) {
          v51 = *(unsigned int*)(v17 + 40);
          if ((v51 & 0x80000000) != 0) {
            v50 = &game_g_empty_item;
          }
          else {
            v50 = (__int64*)(*(_QWORD*)(v17 + 24) + 8 * v51 + 828);
          }
        }
        GameHr_961420(
            a1,
            (const char**)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] + 64) +
                                      8LL * *(unsigned __int16*)v50) +
                           432LL),
            v44),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
      }
    }
    else if (*(_WORD*)(v6 + 16 + 12LL * *(unsigned __int8*)(v13 + 16) + 2) !=
             0) {
      v40 = *(unsigned __int8*)(v6 + 2);
      if (v40 > 3) {
        v41 = 0x10000;
      }
      else {
        v41 = GameData_1a82d70[v40];
      }
      ProcMapSeqBattle_7b6e80(a1, v13, v39, v41, v7),
          v52 = COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
          v78 = COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v56 = *(_QWORD*)(v13 + 24);
      v57 = *(unsigned __int8*)(v1 + 2552);
      if (*(_QWORD*)(v17 + 24) != v56 && v56 != 0 && v57 != 0) {
        LANES128(v96_.v96).n128_u8[12] = 0;
        LANES128(v96_.v96).n128_u64[0] = 0xBF800000BF800000LL;
        LANES128(v96_.v96).n128_u32[2] =
            *(_DWORD*)(*(_QWORD*)GameData_212d270 + 456LL);
        UnitActor_81a540(v56, 0xB8DB7A93, (__int64)&v96_.v96),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v57 = *(unsigned __int8*)(v1 + 2552);
      }
      if (v57 == 0) {
        v60 = *(_DWORD*)(v6 + 12);
        if ((v60 & 4) != 0) {
          game_map_7aa980("SE_ACT_LD_Hit_Critical", v13),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          Camera_7c0260(*GameData_212cfc8[0], 0),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else if ((v60 & 0x60) != 0) {
          game_map_7aa980("SE_ACT_LD_Hit_Special", v13),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          Camera_7c0130(*GameData_212cfc8[0], 0),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        else {
          game_map_7aa980("SE_ACT_LD_Hit_Common", v13),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
    }
    else {
      if (!BattleSide_7a11b0(v17) && (BattleInfo_79d030(v17) & 1) == 0) {
        game_map_7aa980("SE_ACT_LD_Guard_Normal", v13),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
        if ((*(_BYTE*)(v6 + 13) & 0x80) != 0) {
          v63 = 256;
          v62 = v13;
        }
        else {
          v62 = v13;
          v63 = 4;
        }
        ProcMapSeqBattle_7b6e10(v62, v63),
            v52 =
                COERCE_AS(__typeof__(v52), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v7 = COERCE_AS(__typeof__(v7), PSEUDO_REGISTER(__n128, "v0", "=w")),
            v78 =
                COERCE_AS(__typeof__(v78), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v64 = 0;
      LABEL_126:
        if (*(int*)(*(_QWORD*)(a1 + 168) + 12356LL) <= 0) {
          if (game_ProcGameSkipView_instance_ == 0 ||
              *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
              (((v65 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) &
                8) != 0
                   ? (v66 = 2)
                   : (v66 = 3),
               (v66 & v65) != 0)) {
            PSEUDO_LOW_LANE128(v7, n128_u32, *(_DWORD*)(a1 + 144));
            *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
            if (LANES128(v7).n128_f32[0] < 0x1.8000000000000p+3f) {
              PSEUDO_LOW_LANE128(v7, n128_f32, 0x1.8000000000000p+3f);
            }
            *(_DWORD*)(a1 + 144) = LANES128(v7).n128_u32[0];
          }
        }
        v67 = v6 + 16 + 12LL * *(unsigned __int8*)(v17 + 16);
        v68 = *(__int16*)(v67 + 2);
        if (*(_WORD*)(v67 + 2) != 0) {
          GameRoutine_79ca50((void*)(&v96_.v96), v17),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
          if (game_ProcGameSkipView_instance_ == 0 ||
              *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
              (((v69 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) &
                8) != 0
                   ? (v70 = 2)
                   : (v70 = 3),
               (v70 & v69) != 0)) {
            GameRoutine_10a4c70((__int64)&v96_.v96, v68, 0),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
                v78 = COERCE_AS(__typeof__(v78),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
            if ((v68 & 0x80000000) != 0 && *(_BYTE*)(v1 + 2552) == 0) {
              GameHr_7aa770("SE_ACT_LD_Hit_Recovery_Common",
                            (__int128*)&v96_.v96),
                  v52 = COERCE_AS(__typeof__(v52),
                                  PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v7 = COERCE_AS(__typeof__(v7),
                                 PSEUDO_REGISTER(__n128, "v0", "=w")),
                  v78 = COERCE_AS(__typeof__(v78),
                                  PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
          }
          v71 = 0x1.99999a0000000p-3f;
          if (*(int*)(*(_QWORD*)(a1 + 168) + 12356LL) > 0) {
            v71 = 0x0.0p+0f;
          }
          ProcInst_657ca0(a1, 2, v71),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
        if (v64 == 0) {
        LABEL_171:
          if ((*(_DWORD*)(v6 + 8) & 0xFFF) == 0) {
            goto LABEL_3;
          }
          if ((*(_BYTE*)(v6 + 14) & 2) != 0) {
            goto LABEL_3;
          }
          v82 = *(_QWORD*)(*(_QWORD*)(GameData_21c99b0 + 64) +
                           8LL * (*(_DWORD*)(v6 + 8) & 0xFFF));
          v83 = *(_WORD*)(v82 + 754);
          if ((v83 & 1) == 0) {
            goto LABEL_3;
          }
          v84 = *(unsigned __int8*)(v6 + 4);
          if ((unsigned int)(v84 - 14) < 4) {
            goto LABEL_3;
          }
          if (v84 == 13) {
            if ((v83 & 2) == 0 ||
                ((1 << *(_BYTE*)(v82 + 104)) &
                 (unsigned __int16)*GameData_212cf08[0]) != 0) {
            LABEL_3:
              ++*(_DWORD*)(v1 + 2500);
              goto LABEL_10;
            }
          }
          else if ((v83 & 2) == 0 || (((unsigned __int16)*GameData_212cf08[0] >>
                                       *(_BYTE*)(v82 + 104)) &
                                      1) != 0) {
            goto LABEL_3;
          }
          if (*(_BYTE*)(v1 + 2552) != 0) {
            v85 = GameData_21ed098;
            if (GameData_21ed098 != 0) {
              v86 = *(_QWORD*)(v17 + 24);
              if (v86 != 0) {
                UnitActor_81d430((void*)(&v96_.v96), v86),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v7 = COERCE_AS(__typeof__(v7),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v78 = COERCE_AS(__typeof__(v78),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
                v87 = GameHr_6fb960(v82),
                v52 = COERCE_AS(__typeof__(v52),
                                PSEUDO_REGISTER(__n128, "v0", "=w")),
                v7 = COERCE_AS(__typeof__(v7),
                               PSEUDO_REGISTER(__n128, "v0", "=w")),
                v78 = COERCE_AS(__typeof__(v78),
                                PSEUDO_REGISTER(__n128, "v0", "=w"));
                game_map_18c63a0(v85, (int*)&v96_.v96, v82, (__int64)v87, 0),
                    v52 = COERCE_AS(__typeof__(v52),
                                    PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v7 = COERCE_AS(__typeof__(v7),
                                   PSEUDO_REGISTER(__n128, "v0", "=w")),
                    v78 = COERCE_AS(__typeof__(v78),
                                    PSEUDO_REGISTER(__n128, "v0", "=w"));
              }
            }
            if (*(int*)(*(_QWORD*)(a1 + 168) + 12356LL) <= 0) {
              v88 = 18;
            }
            else {
              v88 = 6;
            }
            if (game_ProcGameSkipView_instance_ == 0 ||
                *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
                (((v89 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) &
                  8) != 0
                     ? (v90 = 2)
                     : (v90 = 3),
                 (v90 & v89) != 0)) {
              v91 = *(float*)(a1 + 144);
              v92 = (float)v88;
              *(_WORD*)(a1 + 136) = *(_WORD*)(a1 + 136) & 0xFF97 | 0x60;
              if (v91 >= (float)v88) {
                v92 = v91;
              }
              *(float*)(a1 + 144) = v92;
            }
          }
          goto LABEL_3;
        }
        goto LABEL_150;
      }
      if (!BattleSide_7a11b0(v17) && (BattleInfo_79d030(v17) & 1) != 0) {
        v53 = *(_QWORD*)(v13 + 24);
        v54 = *(_QWORD*)(v17 + 24) == v53 || v53 == 0;
        if (!v54 && *(_BYTE*)(v1 + 2552) != 0) {
          LANES128(v96_.v96).n128_u8[12] = 0;
          LANES128(v96_.v96).n128_u64[0] = 0xBF800000BF800000LL;
          LANES128(v96_.v96).n128_u32[2] =
              *(_DWORD*)(*(_QWORD*)GameData_212d270 + 456LL);
          UnitActor_81a540(v53, 0x953E62E9, (__int64)&v96_.v96),
              v52 = COERCE_AS(__typeof__(v52),
                              PSEUDO_REGISTER(__n128, "v0", "=w")),
              v7 = COERCE_AS(__typeof__(v7),
                             PSEUDO_REGISTER(__n128, "v0", "=w")),
              v78 = COERCE_AS(__typeof__(v78),
                              PSEUDO_REGISTER(__n128, "v0", "=w"));
        }
      }
    }
    v64 = 1;
    goto LABEL_126;
  }
  v9 = *(unsigned __int8**)(a1 + 16);
  if (v9 != nullptr) {
    v10 = *v9;
    v32 = v10 > 0x10;
    v11 = (1 << v10) & 0x1CE00;
    if (!v32 && v11 != 0) {
      *(_WORD*)(a1 + 136) |= 0x80u;
    }
  }
LABEL_10:
  *(_WORD*)(a1 + 136) |= 8u;
}

void game_map_f55a00(__int64 a1, unsigned __int64 a2)
{
  __int64 v2;
  __int64* v3;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;

  v3 = *(__int64**)(a1 + 8);
  v2 = *(_QWORD*)(a1 + 16);
  if (a2 <= (v2 - (__int64)v3) >> 4) {
    if (a2 != 0) {
      memset(*(_QWORD*)(a1 + 8), 0, 16 * a2);
      v3 += 2 * a2;
    }
    *(_QWORD*)(a1 + 8) = v3;
  }
  else {
    v6 = *(__int64**)a1;
    v7 = (__int64)v3 - *(_QWORD*)a1;
    v8 = v7 >> 4;
    v9 = (v7 >> 4) + a2;
    if (v9 >> 60 != 0) {
      GameRoutine_cdcc10();
    }
    v10 = v2 - (_QWORD)v6;
    v11 = fw_memory_g_heap_manager_ptr;
    if (v10 >> 3 > v9) {
      v9 = v10 >> 3;
    }
    if ((unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF0LL) {
      v12 = 0xFFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v9;
    }
    if (v12 != 0) {
      if (v12 >> 60 != 0) {
        GameRoutine_60a210();
      }
      v13 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 16 * v12, 16, 0);
    }
    else {
      v13 = 0;
    }
    v14 = v13 + v7;
    v15 = v13 + 16 * v12;
    memset(v14, 0, 16 * a2);
    if (v6 != v3) {
      v16 = (_QWORD*)(v14 - 16 * v8);
      do {
        v16[1] = v6[1];
        v17 = *v6;
        v6 += 2;
        *v16 = v17;
        v16 += 2;
      } while (v6 != v3);
      v6 = *(__int64**)a1;
    }
    *(_QWORD*)a1 = v14 - 16 * v8;
    *(_QWORD*)(a1 + 8) = v14 + 16 * a2;
    *(_QWORD*)(a1 + 16) = v15;
    if (v6 != nullptr) {
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v11 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v11 + v18, (__int64)v6);
    }
  }
}

__int64 game_map_fa3d40(__int64** a1, __int64 a2)
{
  unsigned __int64 v4;
  __int64 v5;
  __int64** v6;
  unsigned __int64 v7;
  __int64* v8;
  __int64** v9;
  __int64 v10;
  __int64* v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64* v17;
  __int128 v18;
  __int128 v19;
  __int64 v20;
  int v21;
  __int64 v22;
  __int64 v23;
  __int64* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64* v28;
  __int64 v29;
  __int64 result;
  int v31;

  v4 = (*(__int64 (**)(__int64))(*(_QWORD*)a2 + 32LL))(a2);
  v6 = a1 + 1;
  v5 = (__int64)a1[1];
  v7 = v4;
  v8 = (__int64*)fw_memory_g_heap_manager_ptr;
  v9 = a1 + 1;
  v10 = (__int64)(a1 + 1);
  if (v5 != 0) {
    v11 = a1[1];
    while (1) {
      v12 = v11[4];
      if (v4 >= v12) {
        if (v12 >= v4) {
          while (1) {
            while (1) {
              v13 = *(_QWORD*)(v5 + 32);
              if (v4 >= v13) {
                break;
              }
              v5 = *(_QWORD*)v5;
              if (v5 == 0) {
                goto LABEL_11;
              }
            }
            if (v13 >= v4) {
              goto LABEL_32;
            }
            v5 = *(_QWORD*)(v5 + 8);
            if (v5 == 0) {
            LABEL_11:
              String_60a250("map::at:  key not found");
            }
          }
        }
        ++v11;
      }
      v11 = (__int64*)*v11;
      if (v11 == nullptr) {
        while (1) {
          while (1) {
            v14 = *(_QWORD*)(v5 + 32);
            v10 = v5;
            if (v4 >= v14) {
              break;
            }
            v5 = *(_QWORD*)v5;
            v9 = (__int64**)v10;
            if (*(_QWORD*)v10 == 0) {
              goto LABEL_17;
            }
          }
          if (v14 >= v4) {
            goto LABEL_20;
          }
          v5 = *(_QWORD*)(v5 + 8);
          if (v5 == 0) {
            v9 = (__int64**)(v10 + 8);
            goto LABEL_17;
          }
        }
      }
    }
  }
LABEL_17:
  v15 = v10;
  v10 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       304, 16, 0);
  *(_QWORD*)(v10 + 32) = v7;
  game_map_f54910(v10 + 48);
  *(_QWORD*)(v10 + 48) = game_map_SortieMeshData_vtable;
  *(_BYTE*)(v10 + 292) = 0;
  v16 = (__int64*)v10;
  *(_QWORD*)v10 = 0;
  *(_QWORD*)(v10 + 8) = 0;
  *(_QWORD*)(v10 + 16) = v15;
  *v9 = (__int64*)v10;
  v17 = (__int64*)**a1;
  if (v17 != nullptr) {
    *a1 = v17;
    v16 = *v9;
  }
  fw_containers_BalanceAfterInsert(a1[1], v16);
  a1[2] = (__int64*)((char*)a1[2] + 1);
LABEL_20:
  *(_DWORD*)(v10 + 56) = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(v10 + 60) = *(_DWORD*)(a2 + 12);
  *(_OWORD*)(v10 + 64) = *(_OWORD*)(a2 + 16);
  *(_OWORD*)(v10 + 80) = *(_OWORD*)(a2 + 32);
  *(_OWORD*)(v10 + 96) = *(_OWORD*)(a2 + 48);
  *(_OWORD*)(v10 + 112) = *(_OWORD*)(a2 + 64);
  *(_QWORD*)(v10 + 136) = *(_QWORD*)(a2 + 88);
  *(_QWORD*)(v10 + 128) = *(_QWORD*)(a2 + 80);
  if (v10 + 48 != a2) {
    GameRoutine_f155c0(
        (__int64*)(v10 + 144), *(char**)(a2 + 96), *(char**)(a2 + 104),
        (__int64)(*(_QWORD*)(a2 + 104) - *(_QWORD*)(a2 + 96)) >> 6);
    CharacterController_d42d20(
        v10 + 168, *(char**)(a2 + 120), *(char**)(a2 + 128),
        (__int64)(*(_QWORD*)(a2 + 128) - *(_QWORD*)(a2 + 120)) >> 4);
  }
  v5 = (__int64)(a1 + 1);
  *(_DWORD*)(v10 + 192) = *(_DWORD*)(a2 + 144);
  *(_DWORD*)(v10 + 196) = *(_DWORD*)(a2 + 148);
  v18 = *(_OWORD*)(v10 + 192);
  *((_QWORD*)&v18 + 1) = *(unsigned int*)(a2 + 152);
  *(_OWORD*)(v10 + 192) = v18;
  *(_QWORD*)(v10 + 216) = *(_QWORD*)(a2 + 168);
  *(_QWORD*)(v10 + 208) = *(_QWORD*)(a2 + 160);
  *(_DWORD*)(v10 + 224) = *(_DWORD*)(a2 + 176);
  *(_DWORD*)(v10 + 228) = *(_DWORD*)(a2 + 180);
  v19 = *(_OWORD*)(v10 + 224);
  *((_QWORD*)&v19 + 1) = *(unsigned int*)(a2 + 184);
  *(_OWORD*)(v10 + 224) = v19;
  v20 = *(_QWORD*)(a2 + 232);
  v21 = *(_DWORD*)(a2 + 240);
  *(_QWORD*)(v10 + 264) = *(_QWORD*)(a2 + 216);
  *(_QWORD*)(v10 + 280) = v20;
  *(_QWORD*)(v10 + 248) = *(_QWORD*)(a2 + 200);
  v22 = *(_QWORD*)(a2 + 192);
  *(_QWORD*)(v10 + 256) = *(_QWORD*)(a2 + 208);
  *(_QWORD*)(v10 + 240) = v22;
  v23 = *(_QWORD*)(a2 + 224);
  *(_DWORD*)(v10 + 288) = v21;
  *(_QWORD*)(v10 + 272) = v23;
  *(_BYTE*)(v10 + 292) = *(_BYTE*)(a2 + 244);
  v24 = *v6;
  if (*v6 != nullptr) {
    while (1) {
      while (1) {
        v5 = (__int64)v24;
        v25 = v24[4];
        if (v7 >= v25) {
          break;
        }
        v24 = *(__int64**)v5;
        v6 = (__int64**)v5;
        if (*(_QWORD*)v5 == 0) {
          goto LABEL_29;
        }
      }
      if (v25 >= v7) {
        break;
      }
      v24 = *(__int64**)(v5 + 8);
      if (v24 == nullptr) {
        v6 = (__int64**)(v5 + 8);
        goto LABEL_29;
      }
    }
  }
  else {
  LABEL_29:
    v26 = v5;
    v5 = fw_memory_HeapManager_Allocate(*v8, 304, 16, 0);
    *(_QWORD*)(v5 + 32) = v7;
    game_map_f54910(v5 + 48);
    *(_QWORD*)(v5 + 48) = game_map_SortieMeshData_vtable;
    *(_BYTE*)(v5 + 292) = 0;
    v27 = (__int64*)v5;
    *(_QWORD*)v5 = 0;
    *(_QWORD*)(v5 + 8) = 0;
    *(_QWORD*)(v5 + 16) = v26;
    *v6 = (__int64*)v5;
    v28 = (__int64*)**a1;
    if (v28 != nullptr) {
      *a1 = v28;
      v27 = *v6;
    }
    fw_containers_BalanceAfterInsert(a1[1], v27);
    a1[2] = (__int64*)((char*)a1[2] + 1);
  }
LABEL_32:
  v29 = *(_QWORD*)(v5 + 48);
  *(_BYTE*)(v5 + 272) = 1;
  result = (*(__int64 (**)(__int64))(v29 + 48))((__int64)(v5 + 48));
  if ((result & 1) != 0) {
    v31 = 1036831949;
  }
  else {
    v31 = 0;
    *(_DWORD*)(v5 + 276) = 1065353216;
  }
  *(_DWORD*)(v5 + 280) = v31;
  return result;
}

void game_map_1044ea0(_QWORD* a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64* v4;
  float32x4_t* v5;
  unsigned int v6;
  float v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  float32x4_t v14;
  float32x4_t v15;
  float32x4_t v16;
  float32x4_t v17;
  __int64* v18;
  _QWORD* v19;
  float32x4_t* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int32 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  _QWORD* v28;
  _QWORD* v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  _QWORD* v34;
  _QWORD* v35;
  bool v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  _QWORD* v45;
  _QWORD* v46;
  unsigned int v47;
  struct {
    __int64 v48;
    unsigned __int64 v49;
    __int64 v50;
    char gap40_[8];
    float32x4_t v51;
    float32x4_t v52;
    unsigned __int64 v53;
    unsigned __int32 v54;
    char gap92_[4];
    float32x4_t v55;
    unsigned __int64 v56;
    unsigned __int8 v57;
  } v48_;

  v4 = GameData_212f878;
  v5 = (float32x4_t*)*GameData_212f878;
  v6 = *(_DWORD*)(*GameData_212f878 + 1436);
  v7 = -*(float*)(*GameData_212f878 + 1432);
  if ((*(_BYTE*)a2 & 1) != 0) {
    v47 = *(_DWORD*)(*GameData_212f878 + 1436);
    fw_text_String_CopyTerminated(&v48_.v48, *(_QWORD*)(a2 + 16),
                                  *(_QWORD*)(a2 + 8));
    v6 = v47;
    v5 = (float32x4_t*)*v4;
  }
  else {
    v8 = *(_QWORD*)(a2 + 8);
    v48_.v48 = *(_QWORD*)a2;
    v48_.v49 = v8;
    v48_.v50 = *(_QWORD*)(a2 + 16);
  }
  v9 = *(_QWORD*)(a2 + 32);
  v10 = *(_QWORD*)(a2 + 56);
  LANES128(v48_.v52).n128_u64[0] = *(_QWORD*)(a2 + 48);
  LANES128(v48_.v52).n128_u64[1] = v10;
  v48_.v53 = *(_QWORD*)(a2 + 64);
  v48_.v54 = *(_DWORD*)(a2 + 72);
  v11 = *(_QWORD*)(a2 + 40);
  LANES128(v48_.v51).n128_u64[0] = v9;
  LANES128(v48_.v51).n128_u64[1] = v11;
  v12 = *(_QWORD*)(a2 + 88);
  LANES128(v48_.v55).n128_u64[0] = *(_QWORD*)(a2 + 80);
  LANES128(v48_.v55).n128_u64[1] = v12;
  v13 = *(_QWORD*)(a2 + 96);
  v48_.v57 = *(_BYTE*)(a2 + 104);
  v48_.v56 = v13;
  v15 = v5[3];
  v14 = v5[4];
  LANES128(v48_.v55).n128_u64[0] = __PAIR64__(LODWORD(v7), v6);
  v48_.v54 = 0;
  LOBYTE(v48_.v56) = 1;
  v16 = vmulq_f32(*(float32x4_t*)GameData_212c958, v14);
  v17 = vmulq_f32(*(float32x4_t*)GameData_212c958, v15);
  PSEUDO_LOW_LANE128(v15, n128_u32, *(_DWORD*)(a2 + 44));
  v48_.v51 = v17;
  v48_.v52 = v16;
  LANES128(v17).n128_f32[0] = vmuls_lane_f32(LANES128(v15).n128_f32[0], v17, 3);
  PSEUDO_LOW_LANE128(v15, n128_u32, *(_DWORD*)(a2 + 60));
  LANES128(v48_.v51).n128_u32[3] = LANES128(v17).n128_u32[0];
  LANES128(v17).n128_u64[0] = __PAIR64__(LODWORD(v7), v6);
  LANES128(v17).n128_u64[1] = v6;
  LANES128(v48_.v52).n128_f32[3] =
      vmuls_lane_f32(LANES128(v15).n128_f32[0], v16, 3);
  v48_.v55 = v17;
  v18 = (__int64*)GameData_212d018[0];
  v19 = *(_QWORD**)GameData_212d018[0];
  v20 = *(float32x4_t**)(*(_QWORD*)GameData_212d018[0] + 24LL);
  if ((unsigned __int64)v20 >=
      *(_QWORD*)(*(_QWORD*)GameData_212d018[0] + 32LL)) {
    v22 = PrimitiveDrawStack_f525a0(v19 + 2, (__int64)&v48_.v48);
  }
  else {
    if ((v48_.v48 & 1) != 0) {
      fw_text_String_CopyTerminated(
          *(__int64**)(*(_QWORD*)GameData_212d018[0] + 24LL), v48_.v50,
          v48_.v49);
    }
    else {
      LANES128(*(v20)).n128_u64[1] = v48_.v49;
      v21 = v48_.v48;
      LANES128(v20[1]).n128_u64[0] = v48_.v50;
      LANES128(*(v20)).n128_u64[0] = v21;
    }
    v23 = v48_.v54;
    v22 = (__int64)&v20[7];
    LANES128(v20[3]).n128_u64[1] = LANES128(v48_.v52).n128_u64[1];
    v20[2] = v48_.v51;
    v24 = LANES128(v48_.v52).n128_u64[0];
    v25 = v48_.v53;
    LANES128(v20[4]).n128_u32[2] = v23;
    LANES128(v20[4]).n128_u64[0] = v25;
    LANES128(v20[3]).n128_u64[0] = v24;
    v20[5] = v48_.v55;
    v26 = v48_.v56;
    LANES128(v20[6]).n128_u8[8] = v48_.v57;
    LANES128(v20[6]).n128_u64[0] = v26;
  }
  v27 = v19[2];
  v19[3] = v22;
  v19[1] = 0x6DB6DB6DB6DB6DB7LL * ((v22 - v27) >> 4) - 1;
  v29 = a1 + 1;
  v28 = (_QWORD*)*a1;
  if ((_QWORD*)*a1 != a1 + 1) {
    do {
      PrimitiveDrawStack_f51430(*v18, (__int64)(v28 + 6));
      v34 = (_QWORD*)v28[1];
      if (v34 != nullptr) {
        do {
          v35 = v34;
          v34 = (_QWORD*)*v34;
        } while (v34 != nullptr);
      }
      else {
        do {
          v35 = (_QWORD*)v28[2];
          v36 = v28 == (_QWORD*)*v35;
          v28 = v35;
        } while (!v36);
      }
      v28 = v35;
    } while (v35 != v29);
  }
  v30 = *v18;
  *(_QWORD*)(*v18 + 8) = 1024;
  if ((v48_.v48 & 1) != 0 && v48_.v50 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v31 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v31,
                                  v48_.v50);
    v30 = *v18;
  }
  v32 = *(_QWORD*)(v30 + 24);
  if (v32 >= *(_QWORD*)(v30 + 32)) {
    v37 = PrimitiveDrawStack_f525a0((__int64*)(v30 + 16), a2);
  }
  else {
    if ((*(_BYTE*)a2 & 1) != 0) {
      fw_text_String_CopyTerminated(*(__int64**)(v30 + 24), *(_QWORD*)(a2 + 16),
                                    *(_QWORD*)(a2 + 8));
    }
    else {
      *(_QWORD*)(v32 + 8) = *(_QWORD*)(a2 + 8);
      v33 = *(_QWORD*)a2;
      *(_QWORD*)(v32 + 16) = *(_QWORD*)(a2 + 16);
      *(_QWORD*)v32 = v33;
    }
    v38 = *(_DWORD*)(a2 + 72);
    v37 = v32 + 112;
    *(_QWORD*)(v32 + 56) = *(_QWORD*)(a2 + 56);
    *(_QWORD*)(v32 + 40) = *(_QWORD*)(a2 + 40);
    *(_QWORD*)(v32 + 32) = *(_QWORD*)(a2 + 32);
    v39 = *(_QWORD*)(a2 + 48);
    v40 = *(_QWORD*)(a2 + 64);
    *(_DWORD*)(v32 + 72) = v38;
    *(_QWORD*)(v32 + 64) = v40;
    *(_QWORD*)(v32 + 48) = v39;
    v41 = *(_QWORD*)(a2 + 88);
    *(_QWORD*)(v32 + 80) = *(_QWORD*)(a2 + 80);
    *(_QWORD*)(v32 + 88) = v41;
    v42 = *(_QWORD*)(a2 + 96);
    *(_BYTE*)(v32 + 104) = *(_BYTE*)(a2 + 104);
    *(_QWORD*)(v32 + 96) = v42;
  }
  v43 = *(_QWORD*)(v30 + 16);
  *(_QWORD*)(v30 + 24) = v37;
  *(_QWORD*)(v30 + 8) = 0x6DB6DB6DB6DB6DB7LL * ((v37 - v43) >> 4) - 1;
  v44 = (_QWORD*)*a1;
  if (v44 != v29) {
    do {
      PrimitiveDrawStack_f51430(*v18, (__int64)(v44 + 6));
      v45 = (_QWORD*)v44[1];
      if (v45 != nullptr) {
        do {
          v46 = v45;
          v45 = (_QWORD*)*v45;
        } while (v45 != nullptr);
      }
      else {
        do {
          v46 = (_QWORD*)v44[2];
          v36 = v44 == (_QWORD*)*v46;
          v44 = v46;
        } while (!v36);
      }
      v44 = v46;
    } while (v46 != v29);
  }
  *(_QWORD*)(*v18 + 8) = 1024;
}

void game_map_1827b90(__int64* a1)
{
  int v1;
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
  _BOOL4 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  float v20;
  float v21;
  __int64 v22;
  float v23;
  unsigned __int64 v24;
  __int64 v25;
  float v26;
  float v27;
  __int64 v28;
  struct {
    __int64* v29;
    int v30;
    char gap36_[4];
    __int64 v31;
  } v29_;
  _BYTE v32[4];

  v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
  if ((LayoutAccessor_155ea30(a1 + 5) & 1) != 0) {
    v3 = a1[6];
    if (v3 != 0) {
      v4 = std___1___shared_weak_count_lock(v3),
      v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
      if (v4 != 0) {
        v5 = v4;
        v6 = a1[5];
        if (v6 != 0) {
          ControlCreator_13633c0(v6),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          std___1___shared_weak_count___release_weak(v5),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
      }
    }
    v7 = GameData_21f1e08;
    if (GameData_21f1e08 != 0) {
      *(_BYTE*)(GameData_21f1e08 + 256) = 0;
      FloatingHelp_18aee60((_QWORD*)v7, a1 + 5),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
      GameRoutine_18ae960((_QWORD*)v7, 1),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
      v8 = *(_QWORD*)(v7 + 240);
      *(_QWORD*)(v7 + 232) = 0;
      *(_QWORD*)(v7 + 240) = 0;
      if (v8 != 0) {
        std___1___shared_weak_count___release_weak(v8),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
      }
      *(_BYTE*)(v7 + 257) = 0;
      *(_DWORD*)(v7 + 248) = -1;
      v9 = GameData_21f1e08;
      if (GameData_21f1e08 != 0) {
        *(_QWORD*)(GameData_21f1e08 + 268) = 0x44048000C46D8000LL;
        *(_QWORD*)(v9 + 276) = 0xC4048000446D8000LL;
      }
    }
    v27 = 0x0.0p+0f;
    if (a1[7] == 0) {
      goto LABEL_35;
    }
    v10 = a1[6];
    if (v10 == 0) {
      goto LABEL_35;
    }
    v11 = std___1___shared_weak_count_lock(v10),
    v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
    if (v11 != 0) {
      v12 = a1[5];
      if (v12 != 0) {
        v1 = *(unsigned __int8*)(v12 + 24);
        v13 = v12 + 152;
        if (v1 == 0) {
          v13 = 0;
        }
        v14 = v13 != a1[7];
      }
      else {
        v14 = true;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                           0xFFFFFFFFFFFFFFFFLL) != 0) {
        if (v14) {
          goto LABEL_27;
        }
      }
      else {
        v17 = v11;
        (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
        std___1___shared_weak_count___release_weak(v17),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v14) {
          goto LABEL_27;
        }
      }
      if ((v1 & 1) == 0) {
      LABEL_35:
        ui_LayoutAccessor_GetPaneSize(a1 + 5, "L_Skill00"),
            v20 =
                COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
        v21 = v20;
        v22 = ui_LayoutAccessor_FindPane(a1 + 5, (__int64)"A_Skill"),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
        v23 = 0x0.0p+0f;
        v32[0] = 0;
        v29_.v29 = (__int64*)0xFF7FFFFF7F7FFFFFLL;
        v28 = 0x7F7FFFFFFF7FFFFFLL;
        if (v22 != 0) {
          v24 = LANES128_OF(vmulq_f32(*(float32x4_t*)(v22 + 128),
                                      *(float32x4_t*)(v22 + 128)))
                    .n128_u64[0];
          GameRoutine_156bee0(
              (const char*)v22, (__int64)&v29_.v29, (__int64)&v28, (__int64)v32,
              0,
              sqrtf((float)(*(float*)&v24 +
                            (float)(COERCE_FLOAT(*(_OWORD*)(v22 + 112)) *
                                    COERCE_FLOAT(*(_OWORD*)(v22 + 112)))) +
                    (float)(COERCE_FLOAT(*(_OWORD*)(v22 + 144)) *
                            COERCE_FLOAT(*(_OWORD*)(v22 + 144)))) /
                  *(float*)(v22 + 72),
              sqrtf(
                  (float)(*((float*)&v24 + 1) +
                          (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v22 + 112))) *
                                  COERCE_FLOAT(
                                      HIDWORD(*(_QWORD*)(v22 + 112))))) +
                  (float)(COERCE_FLOAT(HIDWORD(*(_QWORD*)(v22 + 144))) *
                          COERCE_FLOAT(HIDWORD(*(_QWORD*)(v22 + 144))))) /
                  *(float*)(v22 + 76)),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w"));
          if (v32[0] == 1) {
            v23 = vabds_f32(*(float*)&v28, *(float*)&v29_.v29);
          }
        }
        v25 = GameData_21f1e08;
        if (GameData_21f1e08 != 0) {
          v26 = 0x1.2c00000000000p+8f;
          *(_DWORD*)(GameData_21f1e08 + 280) = -1006338048;
          *(_DWORD*)(v25 + 268) = -999456768;
          if (v23 >= 0x1.2c00000000000p+8f) {
            v26 = v23;
          }
          *(float*)(v25 + 276) = v26 + -0x1.db00000000000p+9f;
          *(float*)(v25 + 272) =
              v27 + (float)(PSEUDO_UNFUSED(v21 * 0x1.0000000000000p-1f));
          GameRoutine_18ae960((_QWORD*)v25, 0),
              v20 = COERCE_AS(__typeof__(v20),
                              PSEUDO_REGISTER(float, "s1", "=w"));
        }
        return;
      }
    LABEL_32:
      v18 = a1[7];
      if (v18 != 0) {
        v19 = GameRoutine_155f760((__int64)(a1 + 5), v18, "L_Skill00"),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
        if (v19 != 0) {
          LODWORD(v27) = HIDWORD(*(_QWORD*)(v19 + 136));
        }
      }
      goto LABEL_35;
    }
  LABEL_27:
    v16 = a1[6];
    if (v16 == 0 || *(_QWORD*)(v16 + 8) == -1) {
      goto LABEL_35;
    }
    goto LABEL_32;
  }
  v15 = (_QWORD*)GameData_21f1e08;
  if (GameData_21f1e08 != 0) {
    if (*(_QWORD*)(GameData_21f1e08 + 152) != 0) {
      v29_.v31 = 0;
      v29_.v29 = GameData_212d890[0] + 2;
      v29_.v30 = 44;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
          *(_QWORD*)(GameData_21f1e08 + 8) + 16LL))(
          (void*)(&v28), GameData_21f1e08 + 8, &v29_.v29),
          v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
    }
    v15[20] = 0;
    GameHr_18af120(v15, a1 + 5),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
    FloatingHelp_18af980((__int64)v15, a1 + 5),
        v20 = COERCE_AS(__typeof__(v20), PSEUDO_REGISTER(float, "s1", "=w"));
  }
}

_QWORD* game_map_182b5a0(_QWORD* result)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;
  __int64 v6;
  struct {
    __int64* v7;
    int v8;
    char gap20_[4];
    __int64 v9;
  } v7_;
  __int64 var4;

  v1 = result[19];
  result[19] = 0;
  if (v1 != 0) {
    v2 = (_QWORD*)result[46];
    if (v2 != nullptr) {
      v3 = result + 42;
      v4 = result;
      (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, _QWORD))(*v2 + 48LL))(
          (void*)(v2), result[46]);
      v5 = (_QWORD*)v4[46];
      v4[46] = 0;
      if (v5 == v3) {
        v6 = 32;
        goto LABEL_7;
      }
      if (v5 != nullptr) {
        v6 = 40;
      LABEL_7:
        (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
      }
    }
    v7_.v9 = 0;
    v7_.v7 = GameData_212d890[0] + 2;
    v7_.v8 = 1;
    return X8CALL_X0(
        _QWORD*,
        (*(__attribute__((swiftcall)) void (**)(PSEUDO_X8, __int64, __int64**))(
            *(_QWORD*)v1 + 16LL))((void*)&var4, v1, &v7_.v7));
  }
  return result;
}

void game_map_18328a0(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  char v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  struct {
    __int64* v16;
    __int64 v17;
  } v16_;
  struct {
    __int64* v18;
    __int64 v19;
  } v18_;
  struct {
    __int64* v20;
    __int64 v21;
  } v20_;
  struct {
    __int64* v22;
    __int64 v23;
  } v22_;
  _QWORD v24[2];
  struct {
    __int64 v25;
    __int64 v26;
  } v25_;
  struct {
    _QWORD v27[6];
    int v28;
    char gap148_[4];
    __int64 v29;
    __int64 v30;
    __int64 v31;
  } v27_;

  v27_.v29 = 0;
  v27_.v30 = 0;
  v27_.v31 = 0;
  __builtin_memset(&v27_.v27[2], 0, 32);
  v27_.v28 = 0;
  v27_.v27[0] = 0x800000018LL;
  v27_.v27[1] = 0x500000020LL;
  game_1366bd0((void*)(&v25_.v25), (__int64)"Layout/Battle.arc",
               (__int64)"Battle_BattleInfo", (__int64)v27_.v27);
  v2 = v25_.v25;
  v3 = v25_.v26;
  v4 = a1[2];
  v25_.v25 = 0;
  v25_.v26 = 0;
  a1[1] = v2;
  a1[2] = v3;
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    std___1___shared_weak_count___release_weak(v4);
  }
  v5 = v25_.v26;
  if (v25_.v26 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25_.v26 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = a1[2];
  v24[0] = a1[1];
  v24[1] = v6;
  if (v6 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 8), 1u,
                              memory_order_relaxed);
    ui_LayoutAccessor_Setup_155dda0(a1 + 3, v24);
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak(v6);
    }
  }
  else {
    ui_LayoutAccessor_Setup_155dda0(a1 + 3, v24);
  }
  v7 = LayoutAccessor_155fbe0(a1 + 3, "L_Player_Equip01");
  LayoutAccessor_1562cf0((__int64)v7, "KeyOff");
  ui_LayoutAccessor_SetPaneVisible((__int64)(a1 + 3), (__int64)"N_Link", 0);
  CombatHudWindow_1832b70((__int64)a1, 1u, 1);
  LayoutAccessor_1560070((void*)(&v22_.v22), a1 + 3, "L_Player_Equip00");
  GameRoutine_1832ca0(&v22_.v22);
  if (v22_.v23 != 0) {
    std___1___shared_weak_count___release_weak(v22_.v23);
  }
  LayoutAccessor_1560070((void*)(&v20_.v20), a1 + 3, "L_Player_Equip01");
  GameRoutine_1832ca0(&v20_.v20);
  if (v20_.v21 != 0) {
    std___1___shared_weak_count___release_weak(v20_.v21);
  }
  LayoutAccessor_1560070((void*)(&v18_.v18), a1 + 3, "L_Player_EquipOne");
  GameRoutine_1832ca0(&v18_.v18);
  if (v18_.v19 != 0) {
    std___1___shared_weak_count___release_weak(v18_.v19);
  }
  LayoutAccessor_1560070((void*)(&v16_.v16), a1 + 3, "L_Link_Equip00");
  GameRoutine_1832ca0(&v16_.v16);
  if (v16_.v17 != 0) {
    std___1___shared_weak_count___release_weak(v16_.v17);
  }
  v8 = v27_.v29;
  if (v27_.v29 != 0) {
    v9 = v27_.v30;
    v10 = fw_memory_g_heap_manager_ptr;
    if (v27_.v29 == v27_.v30) {
      goto LABEL_30;
    }
    v11 = v27_.v30;
    do {
      v12 = *(_BYTE*)(v11 - 24);
      v11 -= 24;
      if ((v12 & 1) != 0) {
        v13 = *(_QWORD*)(v9 - 8);
        if (v13 != 0) {
          if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) != 0) {
            v14 = 128;
          }
          else {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v14, v13);
        }
      }
      v9 = v11;
    } while (v11 != v8);
    v27_.v30 = v8;
    v8 = v27_.v29;
    if (v27_.v29 != 0) {
    LABEL_30:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v10 + v15, v8);
    }
  }
}

float32x4_t* game_map_18c5140(float32x4_t* result, int a2, int a3)
{

#pragma clang fp contract(off)
  float32x4_t v5;

  if (result != nullptr) {
    UnitActor_81d430((void*)(&v5), (__int64)result);
    result = (float32x4_t*)GameData_21ed098;
    if (GameData_21ed098 != 0) {
      return GameRoutine_18c4dd0_alt1((float32x4_t*)GameData_21ed098, &v5, a2,
                                      a3);
    }
  }
  return result;
}

__int64 game_map_18c5300(__int64 a1, __int64 a2, char a3)
{
  __int64 result;
  int v6;
  int v7;
  __int64 v8;
  struct {
    __int64 v9;
    char v10;
  } v9_;
  struct {
    __int64 v11;
    __int64 v12;
  } v11_;
  struct {
    __int64 v13;
    __int64 v14;
  } v13_;

  MapBattleHUD_18c6be0((void*)(&v13_.v13), a1);
  result = v13_.v13;
  if (v13_.v13 != 0) {
    v6 = *(_DWORD*)(v13_.v13 + 232);
    v7 = (a3 & 1) == 0;
    *(_DWORD*)(v13_.v13 + 232) = v7;
    if (v6 != v7) {
      (*(void (**)(__int64))(*(_QWORD*)result + 184LL))(result);
      result = v13_.v13;
    }
    AsyncLoadThumbImage_18c0210(result);
    v11_.v11 = v13_.v13;
    v11_.v12 = v13_.v14;
    if (v13_.v14 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13_.v14 + 16), 1u,
                                memory_order_relaxed);
    }
    LOBYTE(v9_.v9) = 0;
    v9_.v10 = 0;
    GameRoutine_18c6e70((__int64)&v11_.v11, a2, &v9_.v9, 0, 1);
    result = v11_.v12;
    if (v11_.v12 != 0) {
      result = std___1___shared_weak_count___release_weak(v11_.v12);
    }
  }
  v8 = v13_.v14;
  if (v13_.v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13_.v14 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

_DWORD* game_map_18c63a0(__int64 a1, int* a2, __int64 a3, __int64 a4, char a5)
{
  _DWORD* result;
  __int64 v10;
  int v11;
  int v12;
  int v13;
  __int128 v14;
  __int64 v15;
  __int64 v16;
  struct {
    __int64 v17;
    char v18;
  } v17_;
  struct {
    _DWORD* v19;
    __int64 v20;
  } v19_;
  struct {
    __int64 v21;
    _DWORD* v22;
  } v21_;

  MapBattleHUD_18c6be0((void*)((__int64*)&v19_.v19), a1);
  result = v19_.v19;
  if (v19_.v19 != nullptr) {
    if ((a5 & 1) != 0) {
      LODWORD(v10) = 2;
    }
    else if (GameData_21ec7b0 != 0) {
      v10 = *(_QWORD*)(GameData_21ec7b0 + 8);
      if (v10 != 0) {
        v11 = *(_DWORD*)(v10 + 112);
        LODWORD(v10) = (v11 & 0x8000) != 0 || (v11 & 0x200) != 0;
      }
    }
    else {
      LODWORD(v10) = 1;
    }
    v12 = v19_.v19[58];
    v19_.v19[58] = v10;
    if (v12 != (_DWORD)v10) {
      (*(void (**)(_DWORD*))(*(_QWORD*)result + 184LL))(result);
      result = v19_.v19;
    }
    v13 = *a2;
    LOBYTE(v21_.v21) = 0;
    LOBYTE(v21_.v22) = 0;
    result[48] = v13;
    result[49] = a2[1];
    v14 = *((_OWORD*)result + 12);
    v15 = *(_QWORD*)result;
    *((_QWORD*)&v14 + 1) = (unsigned int)a2[2];
    *((_OWORD*)result + 12) = v14;
    (*(void (**)(_DWORD*, __int64*, _QWORD, _QWORD))(v15 + 192))(
        result, &v21_.v21, 0, 0);
    if (*(_BYTE*)(a3 + 104) == 7) {
      if (a4 != 0) {
        AsyncLoadThumbImage_18c0f50((__int64)v19_.v19, a3, a4);
      }
      else {
        AsyncLoadThumbImage_18c0e20((__int64)v19_.v19, a3, 0);
      }
    }
    else if (a4 != 0) {
      AsyncLoadThumbImage_18c0ca0((__int64)v19_.v19, a3, a4);
    }
    else {
      AsyncLoadThumbImage_18c0b70((__int64)v19_.v19, a3, 0);
    }
    v21_.v21 = (__int64)v19_.v19;
    v21_.v22 = (_DWORD*)v19_.v20;
    if (v19_.v20 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v19_.v20 + 16), 1u,
                                memory_order_relaxed);
    }
    LOBYTE(v17_.v17) = 0;
    v17_.v18 = 0;
    GameRoutine_18c6e70((__int64)&v21_.v21, (__int64)a2, &v17_.v17, 0, 0);
    result = v21_.v22;
    if (v21_.v22 != nullptr) {
      result = (_DWORD*)std___1___shared_weak_count___release_weak(
          (__int64)v21_.v22);
    }
  }
  v16 = v19_.v20;
  if (v19_.v20 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19_.v20 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    return (_DWORD*)std___1___shared_weak_count___release_weak(v16);
  }
  return result;
}

_DWORD* game_map_18c6550(__int64 a1, int* a2, int a3)
{
  _DWORD* result;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  __int128 v10;
  __int64 v11;
  __int64 v12;
  struct {
    __int64 v13;
    char v14;
  } v13_;
  struct {
    _DWORD* v15;
    __int64 v16;
  } v15_;
  struct {
    __int64 v17;
    _DWORD* v18;
  } v17_;

  MapBattleHUD_18c6be0((void*)((__int64*)&v15_.v15), a1);
  result = v15_.v15;
  if (v15_.v15 != nullptr) {
    if (GameData_21ec7b0 != 0) {
      v6 = *(_QWORD*)(GameData_21ec7b0 + 8);
      if (v6 != 0) {
        v7 = *(_DWORD*)(v6 + 112);
        LODWORD(v6) = (v7 & 0x8000) != 0 || (v7 & 0x200) != 0;
      }
    }
    else {
      LODWORD(v6) = 1;
    }
    v8 = v15_.v15[58];
    v15_.v15[58] = v6;
    if (v8 != (_DWORD)v6) {
      (*(void (**)(_DWORD*))(*(_QWORD*)result + 184LL))(result);
      result = v15_.v15;
    }
    v9 = *a2;
    LOBYTE(v17_.v17) = 0;
    LOBYTE(v17_.v18) = 0;
    result[48] = v9;
    result[49] = a2[1];
    v10 = *((_OWORD*)result + 12);
    v11 = *(_QWORD*)result;
    *((_QWORD*)&v10 + 1) = (unsigned int)a2[2];
    *((_OWORD*)result + 12) = v10;
    (*(void (**)(_DWORD*, __int64*, _QWORD, _QWORD))(v11 + 192))(
        result, &v17_.v17, 0, 0);
    AsyncLoadThumbImage_18c0390((__int64)v15_.v15, a3);
    v17_.v17 = (__int64)v15_.v15;
    v17_.v18 = (_DWORD*)v15_.v16;
    if (v15_.v16 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v15_.v16 + 16), 1u,
                                memory_order_relaxed);
    }
    LOBYTE(v13_.v13) = 0;
    v13_.v14 = 0;
    GameRoutine_18c6e70((__int64)&v17_.v17, (__int64)a2, &v13_.v13, 0, 0);
    result = v17_.v18;
    if (v17_.v18 != nullptr) {
      result = (_DWORD*)std___1___shared_weak_count___release_weak(
          (__int64)v17_.v18);
    }
  }
  v12 = v15_.v16;
  if (v15_.v16 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v15_.v16 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
    return (_DWORD*)std___1___shared_weak_count___release_weak(v12);
  }
  return result;
}

_DWORD* game_map_18c66b0(__int64 a1, int* a2)
{
  _DWORD* result;
  __int64 v4;
  int v5;
  int v6;
  int v7;
  __int128 v8;
  __int64 v9;
  __int64 v10;
  struct {
    __int64 v11;
    char v12;
  } v11_;
  struct {
    _DWORD* v13;
    __int64 v14;
  } v13_;
  struct {
    __int64 v15;
    _DWORD* v16;
  } v15_;

  MapBattleHUD_18c6be0((void*)((__int64*)&v13_.v13), a1);
  result = v13_.v13;
  if (v13_.v13 != nullptr) {
    if (GameData_21ec7b0 != 0) {
      v4 = *(_QWORD*)(GameData_21ec7b0 + 8);
      if (v4 != 0) {
        v5 = *(_DWORD*)(v4 + 112);
        LODWORD(v4) = (v5 & 0x8000) != 0 || (v5 & 0x200) != 0;
      }
    }
    else {
      LODWORD(v4) = 1;
    }
    v6 = v13_.v13[58];
    v13_.v13[58] = v4;
    if (v6 != (_DWORD)v4) {
      (*(void (**)(_DWORD*))(*(_QWORD*)result + 184LL))(result);
      result = v13_.v13;
    }
    v7 = *a2;
    LOBYTE(v15_.v15) = 0;
    LOBYTE(v15_.v16) = 0;
    result[48] = v7;
    result[49] = a2[1];
    v8 = *((_OWORD*)result + 12);
    v9 = *(_QWORD*)result;
    *((_QWORD*)&v8 + 1) = (unsigned int)a2[2];
    *((_OWORD*)result + 12) = v8;
    (*(void (**)(_DWORD*, __int64*, _QWORD, _QWORD))(v9 + 192))(
        result, &v15_.v15, 0, 0);
    game_gameui_control_18c0980((__int64)v13_.v13);
    v15_.v15 = (__int64)v13_.v13;
    v15_.v16 = (_DWORD*)v13_.v14;
    if (v13_.v14 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v13_.v14 + 16), 1u,
                                memory_order_relaxed);
    }
    LOBYTE(v11_.v11) = 0;
    v11_.v12 = 0;
    GameRoutine_18c6e70((__int64)&v15_.v15, (__int64)a2, &v11_.v11, 0, 0);
    result = v15_.v16;
    if (v15_.v16 != nullptr) {
      result = (_DWORD*)std___1___shared_weak_count___release_weak(
          (__int64)v15_.v16);
    }
  }
  v10 = v13_.v14;
  if (v13_.v14 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13_.v14 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    return (_DWORD*)std___1___shared_weak_count___release_weak(v10);
  }
  return result;
}

void game_map_1a00e90(__int64* a1, _DWORD* a2, _QWORD* a3)
{
  __int64 v5;
  __int64 v6;
  __int64* v7;
  const char* v8;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64* v18;
  bool v19;
  bool v20;
  __int64 v21;
  int v22;
  struct {
    __int64 v23[2];
    const char* v24;
  } v23_;
  struct {
    __int64* v25;
    __int64 v26;
  } v25_;

  if ((a3[1] & 1) != 0) {
    v7 = a1;
    fw_text_String_CopyTerminated(v23_.v23, a3[3], a3[2]);
    a1 = v7;
  }
  else {
    v5 = a3[2];
    v6 = a3[3];
    v23_.v23[0] = a3[1];
    v23_.v23[1] = v5;
    v23_.v24 = (const char*)v6;
  }
  if ((v23_.v23[0] & 1) != 0) {
    v8 = v23_.v24;
  }
  else {
    v8 = (char*)v23_.v23 + 1;
  }
  LayoutAccessor_1560070((void*)(&v25_.v25), a1, v8);
  if (v25_.v26 == 0) {
    v9 = 0;
    v10 = nullptr;
    if ((v23_.v23[0] & 1) == 0) {
      goto LABEL_20;
    }
    goto LABEL_16;
  }
  v9 = std___1___shared_weak_count_lock(v25_.v26);
  if (v9 != 0) {
    v10 = v25_.v25;
  }
  else {
    v10 = nullptr;
  }
  if (v25_.v26 != 0) {
    std___1___shared_weak_count___release_weak(v25_.v26);
  }
  if ((v23_.v23[0] & 1) != 0) {
  LABEL_16:
    if (v23_.v24 != nullptr) {
      v11 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, (__int64)v23_.v24);
    }
  }
LABEL_20:
  if (v10 != nullptr) {
    v12 = ui_LayoutAccessor_FindPane(v10, (__int64)"MapChip_Unit");
    if (v12 != 0) {
      v13 = __dynamic_cast(v12, GameData_212d670[0], GameData_212d678[0], 0);
      if (v13 != 0) {
        if (*a2 != 0) {
          goto LABEL_24;
        }
        v16 = a3[5];
        if (v16 == 0) {
          goto LABEL_43;
        }
        if ((*(_BYTE*)(v16 + 416) & 1) != 0) {
          goto LABEL_24;
        }
        v17 = v13;
        v18 = util_g_handle_slots_ptr[0];
        LODWORD(v23_.v23[0]) =
            *(_DWORD*)((_BYTE*)util_g_handle_slots_ptr[0] +
                       (unsigned __int64)((_UNKNOWN*)0x44LL)) &
            0xFFF;
        v19 = game_HasSkill((_QWORD*)(v16 + 1744), v23_.v23);
        v13 = v17;
        if (v19 ||
            *(_WORD*)(v16 + 492) == 0 && *(_BYTE*)(v16 + 496) == 0 &&
                (LODWORD(v23_.v23[0]) =
                     *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x144LL) + (_QWORD)v18) &
                     0xFFF,
                 v20 = game_HasSkill((_QWORD*)(v16 + 1744), v23_.v23),
                 v13 = v17, v20)) {
        LABEL_24:
          v14 =
              *(_DWORD*)((char*)((_UNKNOWN*)0xE8LL) + (_QWORD)GameData_212da30);
        }
        else {
        LABEL_43:
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_22594f0,
                                    memory_order_acquire) &
               1) == 0) {
            v21 = v13;
            v22 = __cxa_guard_acquire((__int64)&GameData_22594f0);
            v13 = v21;
            if (v22 != 0) {
              GameData_22594e8 = -1;
              __cxa_guard_release((__int64)&GameData_22594f0);
              v13 = v21;
            }
          }
          v14 = GameData_22594e8;
        }
        v15 = (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)v13 + 88LL))(v13, 0);
        if (v15 != 0) {
          *(_DWORD*)(v15 + 12) = v14;
        }
      }
    }
  }
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
}

#pragma GCC visibility pop
