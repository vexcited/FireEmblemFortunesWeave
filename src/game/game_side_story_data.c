#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_12b4c30(_QWORD, _QWORD);
__int64 GameRoutine_12b72a0();
__int64 GameRoutine_12b7300();
__int64 GameRoutine_12b73b0();
__int64 GameRoutine_12b7400();
__int64 GameRoutine_12b76e0();
__int64 GameRoutine_12b7700();
__int64 GameRoutine_12b7960();
__int64 GameRoutine_12b7f80(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_1a09d20(_QWORD, _QWORD);
__int64 GameRoutine_657850(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_657a50(_QWORD, _QWORD);
__int64 GameRoutine_65f3d0(_QWORD, _QWORD);
__int64 GameRoutine_71dfc0(_QWORD);
__int64 GameRoutine_8679c0(_QWORD);
__int64 GameRoutine_876a40(_QWORD, _QWORD);
__int64 GameRoutine_a51fe0(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_GameVariableTable_Find(_QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_HashString32(_QWORD);
__int64 game_ProcInst_Register(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64* GameRoutine_12b3240(__int64* result, __int64*);
__int64* GameRoutine_12b3420(__int64* result, __int64);
extern _UNKNOWN GameData_21c6868;
extern _UNKNOWN GameData_2240a80;
extern _UNKNOWN GameData_2240b88;
extern _UNKNOWN* GameData_2022250;
extern __int64 (*GameData_20225b0[])();
extern __int64 (*game_GameSideStoryData_ProcAccept_vtable[])();
extern __int64 (*game_GameSideStoryData_ProcReward_vtable[])();
extern __int64 (*game_GameSideStoryData_ProcSideStoryWatcher_vtable[])();
extern __int64 GameData_212c060;
extern __int64 GameData_212c608[2];
extern __int64 GameData_212c6c8;
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_21c67b0;
extern __int64 GameData_21c67b8;
extern __int64 GameData_21c67c0;
extern __int64 GameData_21c67d0;
extern __int64 GameData_21c67e0;
extern __int64 GameData_21c67f0;
extern __int64 GameData_21c67f8;
extern __int64 GameData_21c6800;
extern __int64 GameData_21c6810;
extern __int64 GameData_21c6820;
extern __int64 GameData_21c6830;
extern __int64 GameData_21c6838;
extern __int64 GameData_21c6840;
extern __int64 GameData_21c6850;
extern __int64 GameData_21c6860;
extern __int64 GameData_21eea40;
extern __int64 GameData_22408f8;
extern __int64 GameData_2240908;
extern __int64 GameData_2240910;
extern __int64 GameData_2240918;
extern __int64 GameData_2240928;
extern __int64 GameData_2240938;
extern __int64 GameData_2240948;
extern __int64 GameData_2240950;
extern __int64 GameData_2240958;
extern __int64 GameData_2240968;
extern __int64 GameData_2240978;
extern __int64 GameData_2240988;
extern __int64 GameData_2240990;
extern __int64 GameData_2240998;
extern __int64 GameData_22409a8;
extern __int64 GameData_22409b8;
extern __int64 GameData_22409c8;
extern __int64 GameData_22409d0;
extern __int64 GameData_22409d8;
extern __int64 GameData_22409e8;
extern __int64 GameData_22409f8;
extern __int64 GameData_2240a08;
extern __int64 GameData_2240a10;
extern __int64 GameData_2240a18;
extern __int64 GameData_2240a28;
extern __int64 GameData_2240a38;
extern __int64 GameData_2240a48;
extern __int64 GameData_2240a50;
extern __int64 GameData_2240a58;
extern __int64 GameData_2240a68;
extern __int64 GameData_2240a78;
extern __int64 GameData_2240a90;
extern __int64 GameData_2240a98;
extern __int64 GameData_2240aa0;
extern __int64 GameData_2240ab0;
extern __int64 GameData_2240ac0;
extern __int64 GameData_2240ad0;
extern __int64 GameData_2240ad8;
extern __int64 GameData_2240ae0;
extern __int64 GameData_2240af0;
extern __int64 GameData_2240b00;
extern __int64 GameData_2240b10;
extern __int64 GameData_2240b18;
extern __int64 GameData_2240b20;
extern __int64 GameData_2240b30;
extern __int64 GameData_2240b40;
extern __int64 GameData_2240b50;
extern __int64 GameData_2240b58;
extern __int64 GameData_2240b60;
extern __int64 GameData_2240b70;
extern __int64 GameData_2240b80;
extern __int64 GameData_224b6d8;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern __int64* GameData_212ccd0[45];
extern __int64* GameData_212d6d0;
extern char GameData_21c67a8;
extern char GameData_21c67e8;
extern char GameData_21c6828;
extern char GameData_2240900;
extern char GameData_2240940;
extern char GameData_2240980;
extern char GameData_22409c0;
extern char GameData_2240a00;
extern char GameData_2240a40;
extern char GameData_2240a88;
extern char GameData_2240ac8;
extern char GameData_2240b08;
extern char GameData_2240b48;
extern int GameData_21c67c8;
extern int GameData_21c67d8;
extern int GameData_21c6808;
extern int GameData_21c6818;
extern int GameData_21c6848;
extern int GameData_21c6858;
extern int GameData_2240920;
extern int GameData_2240930;
extern int GameData_2240960;
extern int GameData_2240970;
extern int GameData_22409a0;
extern int GameData_22409b0;
extern int GameData_22409e0;
extern int GameData_22409f0;
extern int GameData_2240a20;
extern int GameData_2240a30;
extern int GameData_2240a60;
extern int GameData_2240a70;
extern int GameData_2240aa8;
extern int GameData_2240ab8;
extern int GameData_2240ae8;
extern int GameData_2240af8;
extern int GameData_2240b28;
extern int GameData_2240b38;
extern int GameData_2240b68;
extern int GameData_2240b78;
extern int GameData_2240b90;
void __attribute__((noreturn)) GameRoutine_12b7c10(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_8123d0(_QWORD);
__int64 GameSideStoryData_Destructor(_QWORD* a1);
__int64 GameSideStoryData_12b4d50(__int64 a1, __int64 a2);
__int64 GameSideStoryData_12b4f80(__int64 result, __int64* a2);
__int64 GameSideStoryData_12b50c0(__int64 result, __int64* a2);
__int64 GameSideStoryData_12b51c0(__int64 a1, __int64* a2);
__int64 GameSideStoryData_12b5380(__int64 result, __int64* a2);
__int64 GameSideStoryData_12b5480(__int64 result, __int64* a2, __int64 a3,
                                  __int64 a4);
__int64 GameSideStoryData_12b56c0(_QWORD* a1, unsigned __int64** a2);
__int64 GameSideStoryData_12b57b0(__int64 a1, __int64 a2);
__int64 GameSideStoryData_12b5980(_QWORD* a1, __int64 a2,
                                  unsigned __int64** a3);
__int64 GameSideStoryData_Unknown8(__int64 result, __int64 a2);
unsigned __int64 GameSideStoryData_Unknown9(_QWORD* a1, __int64 a2, int a3);
__int64 GameSideStoryData_Unknown10(__int64 result, __int64 a2);
__int64 GameSideStoryData_12b6c60(__int64 result, __int64 a2);
__int64* GameSideStoryData_Unknown11(__int64* result, __int64 a2, int a3);
__int64 GameRoutine_1332f00(_QWORD);
__int64 GameRoutine_8b03f0(_QWORD);
__int64 GameSideStoryData_12b3d60(__int64 result);
__int64 game_VariableManager_SetFlag(_QWORD, _QWORD);
__int64 game_gmap_SpotMgr_FindSpot(_QWORD);
__int64* GameSideStoryData_Unknown10_12b6dd0(__int64* result, __int64 a2,
                                             int a3);
__int64 GameSideStoryData_12b72a0(__int64 result);
__int64 GameSideStoryData_12b7300(__int64 a1);
_BYTE* GameSideStoryData_12b73b0(__int64 a1);
__int64 GameSideStoryData_12b7960(__int64 result);
__attribute__((swiftcall)) void LegionPool_936f60(PSEUDO_X8, __int64 result,
                                                  unsigned __int8*, __int64);
__int64** game_8aef60(__int64**, unsigned __int16*, __n128);
__int64 Dir_70d7a0(_QWORD);
__int64 GameRoutine_12b7ce0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64
game_VariableManager_SetFlag_alt1(__int64 result,
                                  int) __asm__("game_VariableManager_SetFlag");
__int64 nn_os_LockMutex(_QWORD);
__int64 std___1___next_prime(_QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__n128 nn_os_UnlockMutex(_QWORD);
bool game_8ae640(__int64*, __int64, char, long double);
extern _UNKNOWN game_g_random_mutex;
extern __int64* GameData_212c878[6];
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212cf80[5];
extern __int64 game_gmap_GmapClock_kDefaultTime;
unsigned __int16*
Dir_70d7a0_alt1(unsigned __int16* result) __asm__("Dir_70d7a0");
void __attribute__((noreturn)) GameRoutine_12b6e30(void);
void __attribute__((noreturn))
GameRoutine_12b7c10_alt1() __asm__("GameRoutine_12b7c10");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
__attribute__((swiftcall)) void GameSideStoryData_12b3ba0(PSEUDO_X8 x8_,
                                                          __int64 result);
_QWORD* GameSideStoryData_12b42e0(_QWORD* result);
void GameSideStoryData_12b7400(__int64 a1);
__int64 GameSideStoryData_12b7700(__int64 a1);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64* GameSideStoryData_12b8520(__int64* result, __int64* a2, __int64* a3,
                                   __int64 a4, __int64 a5, __int64 a6,
                                   __int64 a7);

__attribute__((swiftcall)) void GameSideStoryData_12b3ba0(PSEUDO_X8 x8_,
                                                          __int64 result)
{
  __int64 a2 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  unsigned __int8* v7;
  __int64 v8;
  unsigned __int8* v9;
  unsigned __int8* v10;
  unsigned __int8* v11;
  __int64 v12;
  unsigned int v13;
  __int64 v14;
  int v15;
  int v16;
  __int64* v17;
  __int64 v18;
  bool v19;
  __int16 v20;
  int v21;
  int v22;
  unsigned int v23;
  __int16 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int16 v29;
  __int64 v30;
  __int16 v31;
  __int64 v32;
  __int64 v33;

  v4 = *(_QWORD*)(*(_QWORD*)result + 24LL);
  v5 = *(char*)(v4 + 84);
  if (v5 < 0) {
    *(_BYTE*)a2 = 0;
    *(_BYTE*)(a2 + 12) = 0;
    {
      result;
      return;
    }
  }
  if (game_GameModeData_instance_ != 0) {
    v6 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    v7 = (unsigned __int8*)(v4 + 4 * v6);
    v8 = 4 * v6;
    v9 = v7 + 44;
    v10 = v7 + 45;
    v11 = v7 + 46;
  }
  else {
    v8 = 0;
    v9 = (unsigned __int8*)(v4 + 44);
    v10 = (unsigned __int8*)(v4 + 45);
    v11 = (unsigned __int8*)(v4 + 46);
  }
  v32 = v2;
  v33 = v3;
  v12 = v4 + v8;
  v13 = *v10;
  v14 = *v9;
  v15 = *v11;
  v16 = *(unsigned __int8*)(v12 + 47);
  v30 = 0;
  v17 = (__int64*)(game_gmap_GmapClock_instance_ + 8);
  if (game_gmap_GmapClock_instance_ == 0) {
    v17 = &game_gmap_GmapClock_kDefaultTime;
  }
  v18 = *(__int16*)v17;
  v19 = (_DWORD)v14 == v15 && v13 == v16;
  v20 = *(_WORD*)v17;
  v29 = *(_WORD*)v17;
  if (v19) {
    v25 = *((__int16*)v17 + 2);
    v26 = v18 << 32;
    v4 = *(char*)(v4 + 85);
    v27 = v26 + ((__int64)*((__int16*)v17 + 1) << 24);
    LOWORD(v30) = v14;
    WORD1(v30) = v13;
    HIWORD(v30) = v4;
    if (v27 + (v25 << 18) + ((__int64)*((__int16*)v17 + 3) << 12) +
            ((__int64)*((__int16*)v17 + 4) << 6) + *((__int16*)v17 + 5) <=
        ((unsigned __int64)v13 << 18) + ((__int64)v5 << 12) + (v14 << 24) +
            v26 + (v4 << 6)) {
      goto LABEL_13;
    }
  LABEL_15:
    v28 = a2;
    v31 = 0;
    WORD2(v30) = v5 + 24;
    result = Dir_70d7a0(&v29);
    LOWORD(v5) = WORD2(v30);
    LOWORD(v4) = HIWORD(v30);
    v24 = v31;
    a2 = v28;
    v20 = v29;
    LOWORD(v14) = v30;
    LOWORD(v13) = WORD1(v30);
    goto LABEL_16;
  }
  v21 = *((unsigned __int16*)v17 + 3);
  LOWORD(v14) = *((_WORD*)v17 + 1);
  v22 = *((__int16*)v17 + 4) << 8;
  LOWORD(v13) = *((_WORD*)v17 + 2);
  LODWORD(v4) = *(char*)(v4 + 85);
  v23 = *((__int16*)v17 + 5);
  LOWORD(v30) = v14;
  WORD1(v30) = v13;
  HIWORD(v30) = v4;
  if ((v22 | (v21 << 16) | v23) >
      (((_DWORD)v4 << 8) | (unsigned int)(v5 << 16))) {
    goto LABEL_15;
  }
LABEL_13:
  v24 = 0;
LABEL_16:
  *(_WORD*)(a2 + 6) = v5;
  *(_WORD*)a2 = v20;
  *(_WORD*)(a2 + 2) = v14;
  *(_WORD*)(a2 + 4) = v13;
  *(_WORD*)(a2 + 8) = v4;
  *(_WORD*)(a2 + 10) = v24;
  *(_BYTE*)(a2 + 12) = 1;
  {
    result;
    return;
  }
}

_QWORD* GameSideStoryData_12b42e0(_QWORD* result)
{
  _QWORD* v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64* v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  char* v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  _QWORD* v41;
  unsigned __int64 v42;
  __int64 v43;
  unsigned __int64 v44;
  char* v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  _QWORD* v49;
  _QWORD* v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  float v54;
  _QWORD* v55;
  float v56;
  float v57;
  _BOOL8 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v61;
  __int64 v62;
  __int64 v63;
  _QWORD* v64;
  __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64* v68;
  _QWORD* v69;

  v1 = result;
  v2 = (_QWORD*)result[2];
  v3 = (_QWORD*)result[3];
  v4 = *GameData_212ccd0[0];
  if (v2 != v3) {
    v5 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v2 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) != 0) {
          v6 = 128;
        }
        else {
          v6 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v6);
      }
      ++v2;
    } while (v2 != v3);
    v2 = (_QWORD*)v1[2];
  }
  v7 = v1[8];
  v1[3] = v2;
  if (v7 != 0) {
    v8 = (_QWORD*)v1[7];
    if (v8 != nullptr) {
      v9 = fw_memory_g_heap_manager_ptr;
      do {
        v10 = (_QWORD*)*v8;
        if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) != 0) {
          v11 = 128;
        }
        else {
          v11 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v11);
        v8 = v10;
      } while (v10 != nullptr);
    }
    v12 = v1[6];
    v1[7] = 0;
    if (v12 != 0) {
      v13 = v12 & 7;
      if (v12 >= 8) {
        v15 = v12 & 0xFFFFFFFFFFFFFFF8LL;
        v14 = 0;
        do {
          *(_QWORD*)(v1[5] + 8 * v14) = 0;
          *(_QWORD*)(v1[5] + 8 * v14 + 8) = 0;
          *(_QWORD*)(v1[5] + 8 * v14 + 16) = 0;
          *(_QWORD*)(v1[5] + 8 * v14 + 24) = 0;
          *(_QWORD*)(v1[5] + 8 * v14 + 32) = 0;
          *(_QWORD*)(v1[5] + 8 * v14 + 40) = 0;
          *(_QWORD*)(v1[5] + 8 * v14 + 48) = 0;
          v16 = v1[5] + 8 * v14;
          v14 += 8;
          *(_QWORD*)(v16 + 56) = 0;
        } while (v15 != v14);
      }
      else {
        v14 = 0;
      }
      if (v13 != 0) {
        v17 = 8 * v14;
        do {
          --v13;
          *(_QWORD*)(v1[5] + v17) = 0;
          v17 += 8;
        } while (v13 != 0);
      }
    }
    v2 = (_QWORD*)v1[2];
    v1[8] = 0;
  }
  v18 = *(_QWORD*)(v4 + 72) - *(_QWORD*)(v4 + 64);
  if (v18 > v1[4] - (_QWORD)v2) {
    if ((v18 & 0x8000000000000000LL) != 0) {
    LABEL_126:
      GameRoutine_12b6e30();
    }
    v19 = fw_memory_g_heap_manager_ptr;
    v20 = v1[3] - (_QWORD)v2;
    v21 = fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr,
        *(_QWORD*)(v4 + 72) - *(_QWORD*)(v4 + 64), 16, 0);
    result = (_QWORD*)memcpy(v21, v2, v20);
    v1[2] = v21;
    v1[3] = v21 + v20;
    v1[4] = v21 + v18;
    if (v2 != nullptr) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)v19 + 200LL) == 0) {
        v22 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v19 + v22);
    }
  }
  v23 =
      vcvtps_u64_f32((float)(unsigned __int64)((__int64)(*(_QWORD*)(v4 + 72) -
                                                         *(_QWORD*)(v4 + 64)) >>
                                               3) /
                     *((float*)v1 + 18));
  if (v23 == 1) {
    v23 = 2;
  }
  else if ((v23 & (v23 - 1)) != 0) {
    result = (_QWORD*)std___1___next_prime(v23);
    v23 = (unsigned __int64)result;
  }
  v24 = v1[6];
  if (v23 > v24) {
    goto LABEL_37;
  }
  if (v23 < v24) {
    result = (_QWORD*)vcvtps_u64_f32((float)(unsigned __int64)v1[8] /
                                     *((float*)v1 + 18));
    if (v24 < 3 || (v24 & (v24 - 1)) != 0) {
      result = (_QWORD*)std___1___next_prime(result);
    }
    else {
      v25 = 1LL << -(char)__clz((unsigned __int64)result - 1);
      if ((unsigned __int64)result >= 2) {
        result = (_QWORD*)v25;
      }
    }
    if (v23 <= (unsigned __int64)result) {
      v23 = (unsigned __int64)result;
    }
    if (v23 < v24) {
    LABEL_37:
      result = (_QWORD*)GameRoutine_12b7ce0(v1 + 5, v23);
    }
  }
  v26 = *(_QWORD**)(v4 + 64);
  v27 = *(_QWORD**)(v4 + 72);
  if (v26 != v27) {
    v68 = v1 + 7;
    v28 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    do {
      v29 = *v26;
      v30 = fw_memory_HeapManager_Allocate(*v28, 24, 16, 0);
      *(_QWORD*)v30 = v29;
      *(_WORD*)(v30 + 8) = 0;
      v31 = v30;
      *(_BYTE*)(v30 + 10) = 0;
      *(_BYTE*)(v30 + 22) = 0;
      result = (_QWORD*)game_HashString(*(_QWORD*)(v29 + 8));
      v33 = (__int64*)v1[3];
      v32 = v1[4];
      v34 = (unsigned __int64)result;
      if ((unsigned __int64)v33 >= v32) {
        v36 = v1[2];
        v69 = v26;
        v37 = (char*)v33 - v36;
        v38 = ((__int64)v33 - v36) >> 3;
        v39 = v38 + 1;
        if ((unsigned __int64)(v38 + 1) >> 61 != 0) {
          goto LABEL_126;
        }
        v40 = v32 - v36;
        v41 = v27;
        if (v40 >> 2 > v39) {
          v39 = v40 >> 2;
        }
        if ((unsigned __int64)v40 >= 0x7FFFFFFFFFFFFFF8LL) {
          v42 = 0x1FFFFFFFFFFFFFFFLL;
        }
        else {
          v42 = v39;
        }
        if (v42 != 0) {
          if (v42 >> 61 != 0) {
            GameRoutine_60a210(result);
          }
          v43 = fw_memory_HeapManager_Allocate(*v28, 8 * v42, 16, 0);
        }
        else {
          v43 = 0;
        }
        v44 = v43 + 8 * v42;
        v45 = (char*)v33 - v36;
        v4 = (__int64)&v37[v43 + -8 * v38];
        *(_QWORD*)&v37[v43] = v31;
        v35 = (__int64)&v37[v43 + 8];
        result = (_QWORD*)memcpy(v4, v36, v45);
        v1[2] = v4;
        v1[3] = v35;
        v1[4] = v44;
        if (v36 != 0) {
          v46 = 128;
          if (*(_QWORD*)(*v28 + 200LL) == 0) {
            v46 = 56;
          }
          result = (_QWORD*)nn_mem_StandardAllocator_Free(*v28 + v46);
        }
        v27 = v41;
        v26 = v69;
      }
      else {
        *v33 = v31;
        v35 = (__int64)(v33 + 1);
      }
      v47 = v1[6];
      v1[3] = v35;
      if (v47 != 0) {
        v48 = v47 - 1;
        if ((v47 & (v47 - 1)) != 0) {
          v4 = v34;
          if (v34 >= v47) {
            v4 = v34 % v47;
          }
        }
        else {
          v4 = v48 & v34;
        }
        v49 = *(_QWORD**)(v1[5] + 8 * v4);
        if (v49 != nullptr) {
          v50 = (_QWORD*)*v49;
          if (v50 != nullptr) {
            if ((v47 & v48) == 0) {
              while (1) {
                v52 = v50[1];
                if (v52 == v34) {
                  if (v50[2] == v34) {
                    goto LABEL_124;
                  }
                }
                else if ((v52 & v48) != v4) {
                  goto LABEL_87;
                }
                v50 = (_QWORD*)*v50;
                if (v50 == nullptr) {
                  goto LABEL_87;
                }
              }
            }
            do {
              v51 = v50[1];
              if (v51 == v34) {
                if (v50[2] == v34) {
                  goto LABEL_124;
                }
              }
              else {
                if (v51 >= v47) {
                  v51 %= v47;
                }
                if (v51 != v4) {
                  break;
                }
              }
              v50 = (_QWORD*)*v50;
            } while (v50 != nullptr);
          }
        }
      }
    LABEL_87:
      result = (_QWORD*)fw_memory_HeapManager_Allocate(*v28, 32, 16, 0);
      v53 = v1[8];
      v54 = *((float*)v1 + 18);
      v55 = result;
      *result = 0;
      result[1] = v34;
      result[2] = v34;
      result[3] = v31;
      v56 = (float)(unsigned __int64)(v53 + 1);
      if (v47 == 0 || (float)(v54 * (float)v47) < v56) {
        v57 = v56 / v54;
        v58 = (v47 & (v47 - 1)) != 0;
        if (v47 < 3) {
          v58 = true;
        }
        v59 = v58 | (2 * v47);
        v60 = vcvtps_u64_f32(v57);
        if (v59 <= v60) {
          v61 = v60;
        }
        else {
          v61 = v59;
        }
        if (v61 == 1) {
          v61 = 2;
        }
        else if ((v61 & (v61 - 1)) != 0) {
          result = (_QWORD*)std___1___next_prime(v61);
          v47 = v1[6];
          v61 = (unsigned __int64)result;
        }
        if (v61 > v47) {
          goto LABEL_99;
        }
        if (v61 < v47) {
          result = (_QWORD*)vcvtps_u64_f32((float)(unsigned __int64)v1[8] /
                                           *((float*)v1 + 18));
          if (v47 < 3 || (v47 & (v47 - 1)) != 0) {
            result = (_QWORD*)std___1___next_prime(result);
          }
          else {
            v62 = 1LL << -(char)__clz((unsigned __int64)result - 1);
            if ((unsigned __int64)result >= 2) {
              result = (_QWORD*)v62;
            }
          }
          if (v61 <= (unsigned __int64)result) {
            v61 = (unsigned __int64)result;
          }
          if (v61 < v47) {
          LABEL_99:
            result = (_QWORD*)GameRoutine_12b7ce0(v1 + 5, v61);
          }
        }
        v47 = v1[6];
        if ((v47 & (v47 - 1)) != 0) {
          if (v34 >= v47) {
            v4 = v34 % v47;
          }
          else {
            v4 = v34;
          }
        }
        else {
          v4 = (v47 - 1) & v34;
        }
      }
      v63 = v1[5];
      v64 = *(_QWORD**)(v63 + 8 * v4);
      if (v64 != nullptr) {
        *v55 = *v64;
        *v64 = v55;
      }
      else {
        v65 = *v68;
        *v68 = (__int64)v55;
        *v55 = v65;
        *(_QWORD*)(v63 + 8 * v4) = v68;
        if (*v55 != 0) {
          v66 = *(_QWORD*)(*v55 + 8LL);
          if ((v47 & (v47 - 1)) != 0) {
            if (v66 >= v47) {
              v66 %= v47;
            }
          }
          else {
            v66 &= v47 - 1;
          }
          *(_QWORD*)(v1[5] + 8 * v66) = v55;
        }
      }
      ++v1[8];
    LABEL_124:
      ++v26;
    } while (v26 != v27);
  }
  v67 = v1[10];
  *((_BYTE*)v1 + 128) = 0;
  v1[11] = v67;
  v1[14] = v1[13];
  return result;
}

__int64 GameSideStoryData_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 result;
  _QWORD* v18;

  if (GameData_22408f8 != 0 && (*(_WORD*)(GameData_22408f8 + 136) & 1) == 0) {
    GameRoutine_657a50(GameData_22408f8, 1);
  }
  v2 = a1[13];
  v3 = fw_memory_g_heap_manager_ptr;
  if (v2 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[14] = v2;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  v6 = a1[10];
  if (v6 != 0) {
    v7 = *(_QWORD*)v3;
    a1[11] = v6;
    v8 = 128;
    if (*(_QWORD*)(v7 + 200) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free(v7 + v8);
  }
  v9 = (_QWORD*)a1[7];
  if (v9 != nullptr) {
    do {
      v10 = (_QWORD*)*v9;
      if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) != 0) {
        v11 = 128;
      }
      else {
        v11 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v11);
      v9 = v10;
    } while (v10 != nullptr);
  }
  v12 = a1[5];
  a1[5] = 0;
  if (v12 != 0) {
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v13);
  }
  v14 = a1[2];
  if (v14 != 0) {
    v15 = *(_QWORD*)v3;
    a1[3] = v14;
    v16 = 128;
    if (*(_QWORD*)(v15 + 200) == 0) {
      v16 = 56;
    }
    nn_mem_StandardAllocator_Free(v15 + v16);
  }
  a1[1] = GameData_212d6d0 + 2;
  v18 = a1 + 1;
  result = GameRoutine_876a40(&GameData_21eea40, &v18);
  *a1 = GameData_20225b0;
  if (*(_QWORD**)GameData_212c7b8[0] == a1) {
    *(_QWORD*)GameData_212c7b8[0] = 0;
    GameData_2240b90 = 0;
  }
  return result;
}

__int64 GameSideStoryData_12b4d50(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 result;
  __int64 v7;
  int v8;
  __int64 v9;

  v3 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      168, 16, 0);
  v4 = GameData_212c608[0];
  *(_QWORD*)(v3 + 96) = 0;
  *(_QWORD*)(v3 + 104) = 0;
  *(_QWORD*)(v3 + 112) = 0;
  *(_QWORD*)(v3 + 120) = 0;
  *(_QWORD*)(v3 + 128) = 0;
  *(_WORD*)(v3 + 136) = 0;
  *(_QWORD*)(v3 + 16) = 0;
  *(_QWORD*)(v3 + 24) = "NULL";
  *(_QWORD*)(v3 + 138) = 0;
  *(_QWORD*)(v3 + 144) = 0;
  *(_QWORD*)(v3 + 32) = 0;
  *(_QWORD*)(v3 + 40) = 0;
  *(_QWORD*)(v3 + 48) = 0;
  *(_QWORD*)(v3 + 56) = 0;
  *(_QWORD*)(v3 + 64) = 0;
  *(_QWORD*)(v3 + 72) = 0;
  *(_QWORD*)(v3 + 80) = 0;
  *(_QWORD*)(v3 + 88) = 0;
  *(_QWORD*)v3 = v4 + 16;
  *(_QWORD*)(v3 + 8) = 0;
  result = game_ProcInst_Register(v3, v5);
  *(_DWORD*)(v3 + 160) = 0;
  GameData_22408f8 = v3;
  *(_QWORD*)v3 = game_GameSideStoryData_ProcSideStoryWatcher_vtable;
  *(_QWORD*)(v3 + 152) = 0;
  if (*(_QWORD*)GameData_212c6c8 != 0) {
    if (game_gmap_GmapClock_instance_ != 0) {
      v7 = game_gmap_GmapClock_instance_ + 8;
    }
    else {
      v7 = game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v8 = *(_DWORD*)(v7 + 8);
    *(_QWORD*)(v3 + 152) = *(_QWORD*)v7;
    *(_DWORD*)(v3 + 160) = v8;
  }
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21c6868,
                            memory_order_acquire) &
       1) == 0) {
    result = __cxa_guard_acquire(&GameData_21c6868);
    if ((_DWORD)result != 0) {
      GameData_21c67a8 = 3;
      GameData_21c67d0 = 0;
      GameData_21c67d8 = 0;
      GameData_21c67e0 = 0;
      GameData_21c67b0 = 0;
      GameData_21c67b8 = 0;
      GameData_21c67c0 = 0;
      GameData_21c67c8 = 0;
      GameData_21c6808 = 0;
      GameData_21c6810 = 0;
      GameData_21c6818 = 0;
      GameData_21c6820 = 0;
      GameData_21c6828 = 0;
      GameData_21c6850 = 0;
      GameData_21c6858 = 0;
      GameData_21c6860 = 0;
      GameData_21c6848 = 0;
      GameData_21c6838 = 0;
      GameData_21c6840 = 0;
      GameData_21c6830 = 0;
      GameData_21c67e8 = 14;
      GameData_21c67f0 = 0;
      GameData_21c67f8 = 16;
      GameData_21c6800 = 1;
      result = __cxa_guard_release(&GameData_21c6868);
    }
  }
  if (a2 != 0) {
    v9 = *(_QWORD*)(a2 + 40);
    if (v9 != 0) {
      *(_QWORD*)(v9 + 48) = v3;
      *(_QWORD*)(v3 + 56) = *(_QWORD*)(a2 + 40);
    }
    *(_QWORD*)(a2 + 40) = v3;
    *(_QWORD*)(v3 + 24) = "ProcSideStoryWatcher";
    *(_QWORD*)(v3 + 32) = a2;
    *(_DWORD*)(v3 + 140) = game_HashString32("ProcSideStoryWatcher");
    *(_QWORD*)(v3 + 64) = 0;
    *(_QWORD*)(v3 + 72) = 24;
    *(_QWORD*)(v3 + 80) = 1;
    *(_QWORD*)(v3 + 8) = &GameData_21c67a8;
    *(_QWORD*)(v3 + 16) = &GameData_21c67a8;
    (*(void (**)(__int64))(*(_QWORD*)v3 + 32LL))(v3);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v3 + 136LL))(v3);
    if ((result & 1) != 0 && (*(_WORD*)(v3 + 136) & 0x100) == 0) {
      *(_WORD*)(v3 + 136) |= 0x100u;
    }
  }
  else if ((*(_WORD*)(v3 + 136) & 1) == 0) {
    return GameRoutine_657a50(v3, 1);
  }
  return result;
}

__int64 GameSideStoryData_12b4f80(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  int v11;
  unsigned __int8* v12;

  v2 = *a2;
  v4 = result;
  if ((unsigned __int64)(a2[2] - *a2) <= 0x4F) {
    v5 = fw_memory_g_heap_manager_ptr;
    v6 = a2[1] - v2;
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        80, 16, 0);
    result = memcpy(v7, v2, v6);
    *a2 = v7;
    a2[1] = v7 + v6;
    a2[2] = v7 + 80;
    if (v2 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v8 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8);
    }
  }
  v10 = *(_QWORD*)(v4 + 16);
  v9 = *(_QWORD*)(v4 + 24);
  while (v10 != v9) {
    v11 = *(unsigned __int8*)(*(_QWORD*)v10 + 8LL);
    if ((unsigned int)(v11 - 1) < 2 ||
        v11 == 3 &&
            (*(v12 = *(unsigned __int8**)(**(_QWORD**)v10 + 24LL)) != v12[2] ||
             v12[1] != v12[3])) {
      result = GameRoutine_12b4c30(a2, v10);
    }
    v10 += 8;
  }
  return result;
}

__int64 GameSideStoryData_12b50c0(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = *a2;
  v4 = result;
  if ((unsigned __int64)(a2[2] - *a2) <= 0x4F) {
    v5 = fw_memory_g_heap_manager_ptr;
    v6 = a2[1] - v2;
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        80, 16, 0);
    result = memcpy(v7, v2, v6);
    *a2 = v7;
    a2[1] = v7 + v6;
    a2[2] = v7 + 80;
    if (v2 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v8 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8);
    }
  }
  v10 = *(_QWORD*)(v4 + 16);
  v9 = *(_QWORD*)(v4 + 24);
  while (v10 != v9) {
    if (*(_BYTE*)(*(_QWORD*)v10 + 8LL) == 3) {
      result = GameRoutine_12b4c30(a2, v10);
    }
    v10 += 8;
  }
  return result;
}

__int64 GameSideStoryData_12b51c0(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  bool v17;
  __int64 v19;

  v2 = *a2;
  if ((unsigned __int64)(a2[2] - *a2) <= 0x4F) {
    v5 = fw_memory_g_heap_manager_ptr;
    v6 = a2[1] - v2;
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        80, 16, 0);
    memcpy(v7, v2, v6);
    *a2 = v7;
    a2[1] = v7 + v6;
    a2[2] = v7 + 80;
    if (v2 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v8 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8);
    }
  }
  v10 = *(_QWORD*)(a1 + 16);
  v9 = *(_QWORD*)(a1 + 24);
  while (v10 != v9) {
    if ((unsigned int)*(unsigned __int8*)(*(_QWORD*)v10 + 8LL) - 2 <= 3) {
      GameRoutine_12b4c30(a2, v10);
    }
    v10 += 8;
  }
  v12 = *a2;
  v11 = a2[1];
  if ((v11 - v12) >> 3 < 129) {
    v16 = 0;
    return GameRoutine_12b7f80(v12, v11, (v11 - v12) >> 3, 0, v16);
  }
  else {
    v13 = (v11 - v12) >> 3;
    v14 = GameData_212c060;
    while (1) {
      v15 = GameRoutine_1a09d20(8 * v13, v14);
      if (v15 != 0) {
        break;
      }
      v16 = v13 >> 1;
      v17 = v13 > 1;
      v13 >>= 1;
      if (!v17) {
        return GameRoutine_12b7f80(v12, v11, (v11 - v12) >> 3, 0, v16);
      }
    }
    GameRoutine_12b7f80(v12, v11, (v11 - v12) >> 3, v15, v13);
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
  }
}

__int64 GameSideStoryData_12b5380(__int64 result, __int64* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;

  v2 = *a2;
  v4 = result;
  if ((unsigned __int64)(a2[2] - *a2) <= 0x4F) {
    v5 = fw_memory_g_heap_manager_ptr;
    v6 = a2[1] - v2;
    v7 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        80, 16, 0);
    result = memcpy(v7, v2, v6);
    *a2 = v7;
    a2[1] = v7 + v6;
    a2[2] = v7 + 80;
    if (v2 != 0) {
      v8 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v8 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v8);
    }
  }
  v10 = *(_QWORD*)(v4 + 16);
  v9 = *(_QWORD*)(v4 + 24);
  while (v10 != v9) {
    if ((*(_BYTE*)(*(_QWORD*)v10 + 8LL) & 0xFE) == 2) {
      result = GameRoutine_12b4c30(a2, v10);
    }
    v10 += 8;
  }
  return result;
}

__int64 GameSideStoryData_12b5480(__int64 result, __int64* a2, __int64 a3,
                                  __int64 a4)
{
  _QWORD* v4;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64** v13;
  __int64** v14;
  __int64 v15;
  char* v16;
  __int64* v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v24;
  int v25;
  int v26;
  int v28;
  int v29;
  int v30;
  char* v32;

  v4 = (_QWORD*)*a2;
  v8 = result;
  if ((unsigned __int64)(a2[2] - *a2) <= 0x4F) {
    v9 = fw_memory_g_heap_manager_ptr;
    v10 = a2[1] - (_QWORD)v4;
    v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         80, 16, 0);
    result = memcpy(v11, v4, v10);
    *a2 = v11;
    a2[1] = v11 + v10;
    a2[2] = v11 + 80;
    if (v4 != nullptr) {
      v12 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v12 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v12);
    }
  }
  v13 = *(__int64***)(v8 + 16);
  v14 = *(__int64***)(v8 + 24);
  if (v13 != v14) {
    v15 = game_GameModeData_instance_;
    do {
      if (v15 != 0 && *(_BYTE*)(v15 + 15) != 0) {
        v17 = *v13;
        v18 = **v13;
        if (((*(unsigned __int8*)(v18 + 144) >> (*(_BYTE*)(v15 + 15) - 1)) &
             1) != 0) {
          v16 = (char*)*a2;
          v19 = (char*)a2[1];
          if ((char*)*a2 != v19) {
            v20 = v19 - v16 - 8;
            if ((~(_BYTE)v20 & 0x18) != 0) {
              v21 = ((unsigned __int8)((unsigned int)v20 >> 3) + 1) & 3;
              while (*(__int64**)v16 != v17) {
                v16 += 8;
                if (--v21 == 0) {
                  goto LABEL_19;
                }
              }
            }
            else {
            LABEL_19:
              if (v20 < 0x18) {
              LABEL_20:
                v22 = *(__int16*)(a3 + 2);
                v23 =
                    *(_QWORD*)(v18 + 24) + 4LL * *(unsigned __int8*)(v15 + 15);
                v26 = *(unsigned __int8*)(v23 + 6);
                v24 = v23 + 6;
                v25 = v26;
                if (v26 >= v22 && (v25 != v22 || *(unsigned __int8*)(v24 + 1) >=
                                                     *(__int16*)(a3 + 4))) {
                  v28 = *(unsigned __int8*)(v24 - 2);
                  v29 = *(__int16*)(a4 + 2);
                  if (v28 <= v29) {
                    v30 = *(unsigned __int8*)(v24 - 1);
                    if (v28 != v29 || v30 <= *(__int16*)(a4 + 4)) {
                      result = GameRoutine_12b4c30(a2, v13);
                      v15 = game_GameModeData_instance_;
                    }
                  }
                }
                goto LABEL_10;
              }
              v16 += 16;
              while (1) {
                if (*((__int64**)v16 - 2) == v17) {
                  v16 -= 16;
                  goto LABEL_9;
                }
                if (*((__int64**)v16 - 1) == v17) {
                  v16 -= 8;
                  goto LABEL_9;
                }
                if (*(__int64**)v16 == v17) {
                  goto LABEL_9;
                }
                if (*((__int64**)v16 + 1) == v17) {
                  break;
                }
                v32 = v16 + 16;
                v16 += 32;
                if (v32 == v19) {
                  goto LABEL_20;
                }
              }
              v16 += 8;
            }
          }
        LABEL_9:
          if (v16 == v19) {
            goto LABEL_20;
          }
        }
      }
    LABEL_10:
      ++v13;
    } while (v13 != v14);
  }
  return result;
}

__int64 GameSideStoryData_12b56c0(_QWORD* a1, unsigned __int64** a2)
{
  unsigned __int64 v2;
  unsigned __int64 v4;
  unsigned __int64 v5;
  unsigned __int64 v6;
  _QWORD* v7;
  _QWORD* v8;
  unsigned __int64 v9;
  __int64 result;
  __int64 v11;

  if (*a2 != nullptr) {
    v2 = a1[6];
    if (v2 != 0 && a1[8] != 0) {
      v4 = **a2;
      v5 = v2 - 1;
      if ((v2 & (v2 - 1)) != 0) {
        v6 = **a2;
        if (v4 >= v2) {
          v6 = v4 % v2;
        }
      }
      else {
        v6 = v5 & v4;
      }
      v7 = *(_QWORD**)(a1[5] + 8 * v6);
      if (v7 != nullptr) {
        v8 = (_QWORD*)*v7;
        if (v8 != nullptr) {
          if ((v2 & v5) == 0) {
            while (1) {
              v11 = v8[1];
              if (v4 == v11) {
                if (v8[2] == v4) {
                  return v8[3];
                }
              }
              else if ((v11 & v5) != v6) {
                return 0;
              }
              v8 = (_QWORD*)*v8;
              result = 0;
              if (v8 == nullptr) {
                return result;
              }
            }
          }
          do {
            v9 = v8[1];
            if (v4 == v9) {
              if (v8[2] == v4) {
                return v8[3];
              }
            }
            else {
              if (v9 >= v2) {
                v9 %= v2;
              }
              if (v9 != v6) {
                return 0;
              }
            }
            v8 = (_QWORD*)*v8;
          } while (v8 != nullptr);
        }
      }
    }
  }
  return 0;
}

__int64 GameSideStoryData_12b57b0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2240a80,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2240a80) != 0) {
    GameData_2240900 = 13;
    GameData_2240908 = 0;
    GameData_2240910 = (__int64)GameRoutine_12b72a0;
    GameData_2240940 = 13;
    GameData_2240980 = 13;
    GameData_22409c0 = 13;
    GameData_2240918 = 0;
    GameData_2240920 = 0;
    GameData_2240928 = 0;
    GameData_2240930 = 0;
    GameData_2240938 = 0;
    GameData_2240958 = 0;
    GameData_2240960 = 0;
    GameData_2240968 = 0;
    GameData_2240948 = 0;
    GameData_2240950 = (__int64)GameRoutine_12b7300;
    GameData_22409c8 = 0;
    GameData_22409d0 = (__int64)GameRoutine_12b7400;
    GameData_2240970 = 0;
    GameData_2240978 = 0;
    GameData_2240998 = 0;
    GameData_22409a0 = 0;
    GameData_22409a8 = 0;
    GameData_22409b0 = 0;
    GameData_22409b8 = 0;
    GameData_2240988 = 0;
    GameData_2240990 = (__int64)GameRoutine_12b73b0;
    GameData_22409d8 = 0;
    GameData_22409e0 = 0;
    GameData_22409e8 = 0;
    GameData_22409f0 = 0;
    GameData_22409f8 = 0;
    GameData_2240a00 = 2;
    GameData_2240a28 = 0;
    GameData_2240a30 = 0;
    GameData_2240a38 = 0;
    GameData_2240a40 = 0;
    GameData_2240a68 = 0;
    GameData_2240a70 = 0;
    GameData_2240a78 = 0;
    GameData_2240a20 = 0;
    GameData_2240a10 = 0;
    GameData_2240a18 = 0;
    GameData_2240a08 = 0;
    GameData_2240a48 = 0;
    GameData_2240a50 = 0;
    GameData_2240a58 = 0;
    GameData_2240a60 = 0;
    __cxa_guard_release(&GameData_2240a80);
  }
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      160, 16, 0);
  v5 = GameData_212c608[0];
  *(_QWORD*)(v4 + 96) = 0;
  *(_QWORD*)(v4 + 104) = 0;
  *(_QWORD*)(v4 + 112) = 0;
  *(_QWORD*)(v4 + 120) = 0;
  *(_QWORD*)(v4 + 128) = 0;
  *(_WORD*)(v4 + 136) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)(v4 + 24) = "NULL";
  *(_QWORD*)(v4 + 138) = 0;
  *(_QWORD*)(v4 + 144) = 0;
  *(_QWORD*)(v4 + 32) = 0;
  *(_QWORD*)(v4 + 40) = 0;
  *(_QWORD*)(v4 + 48) = 0;
  *(_QWORD*)(v4 + 56) = 0;
  *(_QWORD*)(v4 + 64) = 0;
  *(_QWORD*)(v4 + 72) = 0;
  *(_QWORD*)(v4 + 80) = 0;
  *(_QWORD*)(v4 + 88) = 0;
  *(_QWORD*)v4 = v5 + 16;
  *(_QWORD*)(v4 + 8) = 0;
  game_ProcInst_Register(v4, v6);
  *(_QWORD*)(v4 + 152) = a2;
  *(_QWORD*)v4 = game_GameSideStoryData_ProcAccept_vtable;
  return GameRoutine_657850(v4, &GameData_2240900, "ProcAccept", 1, a1);
}

__int64 GameSideStoryData_12b5980(_QWORD* a1, __int64 a2, unsigned __int64** a3)
{
  unsigned __int64 v3;
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v14;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  int v21;
  float v22;
  char v23;

  if (*a3 == nullptr) {
    return 0;
  }
  v3 = a1[6];
  if (v3 == 0 || a1[8] == 0) {
    return 0;
  }
  v5 = **a3;
  v6 = v3 - 1;
  if ((v3 & (v3 - 1)) != 0) {
    v7 = **a3;
    if (v5 >= v3) {
      v7 = v5 % v3;
    }
  }
  else {
    v7 = v6 & v5;
  }
  v8 = *(_QWORD**)(a1[5] + 8 * v7);
  if (v8 == nullptr) {
    return 0;
  }
  v9 = (_QWORD*)*v8;
  if (v9 == nullptr) {
    return 0;
  }
  if ((v3 & v6) == 0) {
    while (1) {
      v11 = v9[1];
      if (v5 == v11) {
        if (v9[2] == v5) {
          goto LABEL_26;
        }
      }
      else if ((v11 & v6) != v7) {
        return 0;
      }
      v9 = (_QWORD*)*v9;
      if (v9 == nullptr) {
        return 0;
      }
    }
  }
  while (1) {
    v10 = v9[1];
    if (v5 == v10) {
      break;
    }
    if (v10 >= v3) {
      v10 %= v3;
    }
    if (v10 != v7) {
      return 0;
    }
  LABEL_15:
    v9 = (_QWORD*)*v9;
    if (v9 == nullptr) {
      return 0;
    }
  }
  if (v9[2] != v5) {
    goto LABEL_15;
  }

LABEL_26:
  v12 = v9[3];
  if (v12 == 0 || *(_BYTE*)(v12 + 8) != 3) {
    return 0;
  }
  v14 = v9[3];
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2240b88,
                            memory_order_acquire) &
       1) == 0 &&
      (unsigned int)__cxa_guard_acquire(&GameData_2240b88) != 0) {
    GameData_2240a88 = 13;
    GameData_2240a90 = 0;
    GameData_2240a98 = (__int64)GameRoutine_12b76e0;
    GameData_2240ac8 = 13;
    GameData_2240b08 = 13;
    GameData_2240aa0 = 0;
    GameData_2240aa8 = 0;
    GameData_2240ab0 = 0;
    GameData_2240ab8 = 0;
    GameData_2240ac0 = 0;
    GameData_2240ae0 = 0;
    GameData_2240ae8 = 0;
    GameData_2240af0 = 0;
    GameData_2240af8 = 0;
    GameData_2240ad0 = 0;
    GameData_2240ad8 = (__int64)GameRoutine_12b7700;
    GameData_2240b00 = 0;
    GameData_2240b10 = 0;
    GameData_2240b18 = (__int64)GameRoutine_12b7960;
    GameData_2240b20 = 0;
    GameData_2240b28 = 0;
    GameData_2240b30 = 0;
    GameData_2240b38 = 0;
    GameData_2240b40 = 0;
    GameData_2240b48 = 0;
    GameData_2240b70 = 0;
    GameData_2240b78 = 0;
    GameData_2240b80 = 0;
    GameData_2240b68 = 0;
    GameData_2240b58 = 0;
    GameData_2240b60 = 0;
    GameData_2240b50 = 0;
    __cxa_guard_release(&GameData_2240b88);
  }
  v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       168, 16, 0);
  v17 = GameData_212c608[0];
  *(_QWORD*)(v16 + 96) = 0;
  *(_QWORD*)(v16 + 104) = 0;
  *(_QWORD*)(v16 + 112) = 0;
  *(_QWORD*)(v16 + 120) = 0;
  *(_QWORD*)(v16 + 128) = 0;
  *(_WORD*)(v16 + 136) = 0;
  *(_QWORD*)(v16 + 16) = 0;
  *(_QWORD*)(v16 + 24) = "NULL";
  *(_QWORD*)(v16 + 138) = 0;
  *(_QWORD*)(v16 + 144) = 0;
  *(_QWORD*)(v16 + 32) = 0;
  *(_QWORD*)(v16 + 40) = 0;
  *(_QWORD*)(v16 + 48) = 0;
  *(_QWORD*)(v16 + 56) = 0;
  *(_QWORD*)(v16 + 64) = 0;
  *(_QWORD*)(v16 + 72) = 0;
  *(_QWORD*)(v16 + 80) = 0;
  *(_QWORD*)(v16 + 88) = 0;
  *(_QWORD*)v16 = v17 + 16;
  *(_QWORD*)(v16 + 8) = 0;
  v19 = game_ProcInst_Register(v16, v18);
  *(_QWORD*)(v16 + 152) = v14;
  *(_QWORD*)v16 = game_GameSideStoryData_ProcReward_vtable;
  GameRoutine_8679c0(v19);
  v20 = game_ProcGameSkipView_instance_;
  if (game_ProcGameSkipView_instance_ != 0) {
    v21 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156);
    if ((v21 & 0x10) == 0) {
      v22 = *(float*)(game_ProcGameSkipView_instance_ + 224);
      *(_DWORD*)(game_ProcGameSkipView_instance_ + 156) = v21 & 0xFFFFFFE2 | 1;
      if (v22 > 0.0) {
        *(_DWORD*)(v20 + 224) = 0;
      }
    }
  }
  if ((int)GameData_224b6d8 < 1) {
    v23 = 0;
  }
  else {
    LODWORD(GameData_224b6d8) = GameData_224b6d8 - 1;
    v23 = 1;
  }
  *(_BYTE*)(v16 + 160) = v23;
  return GameRoutine_657850(v16, &GameData_2240a88, "ProcReward", 1, a2);
}

__int64 GameSideStoryData_Unknown8(__int64 result, __int64 a2)
{
  __int64 v2;
  _QWORD* v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _QWORD** v9;
  _QWORD** i;
  _QWORD* v11;
  __int64 v12;
  char v13;
  __int64 v14;
  char v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int16 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int16* v32;
  __int16* j;
  __int64 v34;
  __int16 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64* k;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;

  v2 = *(int*)(a2 + 20);
  v4 = (_QWORD*)result;
  v5 = *(_QWORD*)(result + 24) - *(_QWORD*)(result + 16);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = v5 >> 3;
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v5 >> 11;
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v5 >> 19;
  v8 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = v5 >> 27;
  v9 = *(_QWORD***)(result + 16);
  for (i = *(_QWORD***)(result + 24); v9 != i; ++v9) {
    v11 = *v9;
    result = GameRoutine_65f3d0(a2, **v9);
    v12 = *(int*)(a2 + 20);
    v13 = *((_BYTE*)v11 + 8);
    *(_DWORD*)(a2 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = v13;
    v14 = *(int*)(a2 + 20);
    v15 = *((_BYTE*)v11 + 9);
    *(_DWORD*)(a2 + 20) = v14 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = v15;
    v16 = *(int*)(a2 + 20);
    v17 = *((unsigned __int8*)v11 + 22);
    *(_DWORD*)(a2 + 20) = v16 + 1;
    v18 = *(_QWORD*)(a2 + 8);
    if (v17 == 1) {
      *(_BYTE*)(v18 + v16) = 1;
      if ((*((_BYTE*)v11 + 22) & 1) == 0) {
        GameRoutine_8123d0(result);
      }
      v19 = *(int*)(a2 + 20);
      v20 = *((_WORD*)v11 + 5);
      *(_DWORD*)(a2 + 20) = v19 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = v20;
      v21 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v21 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = HIBYTE(v20);
      v22 = *(int*)(a2 + 20);
      LOBYTE(v20) = *((_BYTE*)v11 + 12);
      *(_DWORD*)(a2 + 20) = v22 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = v20;
      v23 = *(int*)(a2 + 20);
      LOBYTE(v20) = *((_BYTE*)v11 + 14);
      *(_DWORD*)(a2 + 20) = v23 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = v20;
      v24 = *(int*)(a2 + 20);
      LOBYTE(v20) = *((_BYTE*)v11 + 16);
      *(_DWORD*)(a2 + 20) = v24 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v24) = v20;
      v25 = *(int*)(a2 + 20);
      LOBYTE(v20) = *((_BYTE*)v11 + 18);
      *(_DWORD*)(a2 + 20) = v25 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = v20;
      v26 = *(int*)(a2 + 20);
      LOBYTE(v20) = *((_BYTE*)v11 + 20);
      *(_DWORD*)(a2 + 20) = v26 + 1;
      *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = v20;
    }
    else {
      *(_BYTE*)(v18 + v16) = 0;
    }
  }
  v27 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v4[11] - v4[10]) >> 3);
  v28 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v28 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = v27;
  v29 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v29 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29) = BYTE1(v27);
  v30 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v30 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30) = BYTE2(v27);
  v31 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v31 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = BYTE3(v27);
  v32 = (__int16*)v4[10];
  for (j = (__int16*)v4[11]; v32 != j; v32 += 12) {
    v34 = *(int*)(a2 + 20);
    v35 = *v32;
    *(_DWORD*)(a2 + 20) = v34 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v34) = v35;
    v36 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v36 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v36) = HIBYTE(v35);
    v37 = *(int*)(a2 + 20);
    LOBYTE(v35) = *((_BYTE*)v32 + 2);
    *(_DWORD*)(a2 + 20) = v37 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v37) = v35;
    v38 = *(int*)(a2 + 20);
    LOBYTE(v35) = *((_BYTE*)v32 + 4);
    *(_DWORD*)(a2 + 20) = v38 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v38) = v35;
    v39 = *(int*)(a2 + 20);
    LOBYTE(v35) = *((_BYTE*)v32 + 6);
    *(_DWORD*)(a2 + 20) = v39 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v39) = v35;
    v40 = *(int*)(a2 + 20);
    LOBYTE(v35) = *((_BYTE*)v32 + 8);
    *(_DWORD*)(a2 + 20) = v40 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v40) = v35;
    v41 = *(int*)(a2 + 20);
    LOBYTE(v35) = *((_BYTE*)v32 + 10);
    *(_DWORD*)(a2 + 20) = v41 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v41) = v35;
    result = GameRoutine_65f3d0(a2, **((_QWORD**)v32 + 2));
  }
  v42 = *(int*)(a2 + 20);
  v43 = v4[14] - v4[13];
  *(_DWORD*)(a2 + 20) = v42 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v42) = v43 >> 3;
  v44 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v44 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v44) = v43 >> 11;
  v45 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v45 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v45) = v43 >> 19;
  v46 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v46 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v46) = v43 >> 27;
  v47 = (__int64*)v4[13];
  for (k = (__int64*)v4[14]; v47 != k;
       *(_BYTE*)(*(_QWORD*)(a2 + 8) + v57) = HIBYTE(v50)) {
    v49 = *(int*)(a2 + 20);
    v50 = *v47++;
    *(_DWORD*)(a2 + 20) = v49 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v49) = v50;
    v51 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v51 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v51) = BYTE1(v50);
    v52 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v52 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v52) = BYTE2(v50);
    v53 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v53 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v53) = BYTE3(v50);
    v54 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v54 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v54) = BYTE4(v50);
    v55 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v55 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v55) = BYTE5(v50);
    v56 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v56 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v56) = BYTE6(v50);
    v57 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v57 + 1;
  }
  return result;
}

unsigned __int64 GameSideStoryData_Unknown9(_QWORD* a1, __int64 a2, int a3)
{
  __int64 v3;
  __int64 v4;
  int v6;
  int v7;
  int v8;
  int i;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  char v13;
  char v14;
  int v15;
  __int16 v16;
  __int16 v17;
  __int16 v18;
  __int16 v19;
  __int16 v20;
  __int16 v21;
  __int16 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  char v32;
  __int64 v33;
  __int64 v34;
  int v35;
  int v36;
  int v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  int v47;
  __int64 v48;
  _QWORD* v49;
  __int64 v50;
  __int64 v51;
  __int16 v52;
  __int16 v53;
  __int16 v54;
  __int16 v55;
  __int16 v56;
  __int16 v57;
  __int16 v58;
  __int64 v59;
  __int64 v60;
  unsigned __int64 v61;
  unsigned __int64 v62;
  unsigned __int64 v63;
  unsigned __int64 v64;
  _QWORD* v65;
  _QWORD* v66;
  unsigned __int64 v67;
  __int64 v68;
  __int64 v69;
  __int16 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  unsigned __int64 v75;
  unsigned __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64* v85;
  _QWORD* v86;
  unsigned __int64 result;
  unsigned __int64 v88;
  bool v89;
  unsigned __int64 v90;
  unsigned __int64 v91;
  _QWORD* v92;
  _QWORD* v93;
  unsigned __int64 v94;
  __int64 v95;
  __int64* v96;
  __int64*** v97;
  __int64*** v98;
  __int64* v99;
  __int64* v100;
  __int64 v101;
  __int64 v102;
  int v103;
  int v104;
  __int64 v105;
  char v106;
  __int16 v107;
  int v108;
  __int64 v109;
  unsigned __int64* v112;
  __int64 v113;

  v3 = *(int*)(a2 + 20);
  v4 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v3 + 1;
  v6 = *(unsigned __int8*)(v4 + v3);
  *(_DWORD*)(a2 + 20) = v3 + 2;
  v7 = v6 | (*(unsigned __int8*)(v4 + v3 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v3 + 3;
  v8 = *(unsigned __int8*)(v4 + v3 + 2);
  *(_DWORD*)(a2 + 20) = v3 + 4;
  v108 = v7 | (v8 << 16) | (*(unsigned __int8*)(v4 + v3 + 3) << 24);
  if (v108 != 0) {
    for (i = 0; i != v108; ++i) {
      v10 = GameRoutine_71dfc0(a2);
      v11 = *(int*)(a2 + 20);
      v12 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v11 + 1;
      v13 = *(_BYTE*)(v12 + v11);
      if (a3 < 2) {
        v20 = 0;
        v21 = 0;
        v22 = 0;
        v19 = 0;
        v18 = 0;
        v17 = 0;
        v15 = 0;
        v14 = 0;
        if (v10 == 0) {
          continue;
        }
      }
      else {
        *(_DWORD*)(a2 + 20) = v11 + 2;
        v89 = *(_BYTE*)(v12 + v11 + 1) == 0;
        *(_DWORD*)(a2 + 20) = v11 + 3;
        v14 = !v89;
        if (*(_BYTE*)(v12 + v11 + 2) != 0) {
          v15 = 1;
          *(_DWORD*)(a2 + 20) = v11 + 4;
          v16 = *(unsigned __int8*)(v12 + v11 + 3);
          *(_DWORD*)(a2 + 20) = v11 + 5;
          v17 = v16 | (*(unsigned __int8*)(v12 + v11 + 4) << 8);
          *(_DWORD*)(a2 + 20) = v11 + 6;
          v18 = *(unsigned __int8*)(v12 + v11 + 5);
          *(_DWORD*)(a2 + 20) = v11 + 7;
          v19 = *(unsigned __int8*)(v12 + v11 + 6);
          *(_DWORD*)(a2 + 20) = v11 + 8;
          v20 = *(unsigned __int8*)(v12 + v11 + 7);
          *(_DWORD*)(a2 + 20) = v11 + 9;
          v21 = *(unsigned __int8*)(v12 + v11 + 8);
          *(_DWORD*)(a2 + 20) = v11 + 10;
          v22 = *(unsigned __int8*)(v12 + v11 + 9);
          if (v10 == 0) {
            continue;
          }
        }
        else {
          v20 = 0;
          v21 = 0;
          v22 = 0;
          v19 = 0;
          v18 = 0;
          v17 = 0;
          v15 = 0;
          if (v10 == 0) {
            continue;
          }
        }
      }
      v106 = v14;
      GameRoutine_a51fe0(&v112, *(_QWORD*)(v10 + 8));
      if (v112 != nullptr) {
        v23 = a1[6];
        if (v23 != 0 && a1[8] != 0) {
          v24 = *v112;
          v25 = v23 - 1;
          if ((v23 & (v23 - 1)) != 0) {
            v26 = *v112;
            if (v24 >= v23) {
              v26 = v24 % v23;
            }
          }
          else {
            v26 = v25 & v24;
          }
          v27 = *(_QWORD**)(a1[5] + 8 * v26);
          if (v27 != nullptr) {
            v28 = (_QWORD*)*v27;
            if (v28 != nullptr) {
              if ((v23 & v25) == 0) {
                while (1) {
                  v30 = v28[1];
                  if (v24 == v30) {
                    if (v28[2] == v24) {
                      goto LABEL_37;
                    }
                  }
                  else if ((v30 & v25) != v26) {
                    goto LABEL_3;
                  }
                  v28 = (_QWORD*)*v28;
                  if (v28 == nullptr) {
                    goto LABEL_3;
                  }
                }
              }
              do {
                v29 = v28[1];
                if (v24 == v29) {
                  if (v28[2] == v24) {
                  LABEL_37:
                    v31 = v28[3];
                    if (v31 != 0) {
                      *(_BYTE*)(v31 + 8) = v13;
                      *(_BYTE*)(v31 + 9) = v106;
                      if (v15 != 0) {
                        v32 = *(_BYTE*)(v31 + 22);
                        *(_WORD*)(v31 + 10) = v17;
                        *(_WORD*)(v31 + 12) = v18;
                        *(_WORD*)(v31 + 14) = v19;
                        *(_WORD*)(v31 + 16) = v20;
                        *(_WORD*)(v31 + 18) = v21;
                        *(_WORD*)(v31 + 20) = v22;
                        if ((v32 & 1) == 0) {
                          *(_BYTE*)(v31 + 22) = 1;
                        }
                      }
                      else if (*(_BYTE*)(v31 + 22) == 1) {
                        *(_BYTE*)(v31 + 22) = 0;
                      }
                    }
                    break;
                  }
                }
                else {
                  if (v29 >= v23) {
                    v29 %= v23;
                  }
                  if (v29 != v26) {
                    break;
                  }
                }
                v28 = (_QWORD*)*v28;
              } while (v28 != nullptr);
            }
          }
        }
      }
    LABEL_3:;
    }
  }
  if (a3 <= 2) {
    goto LABEL_98;
  }
  v33 = *(int*)(a2 + 20);
  v34 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v33 + 1;
  v35 = *(unsigned __int8*)(v34 + v33);
  *(_DWORD*)(a2 + 20) = v33 + 2;
  v36 = v35 | (*(unsigned __int8*)(v34 + v33 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v33 + 3;
  v37 = *(unsigned __int8*)(v34 + v33 + 2);
  *(_DWORD*)(a2 + 20) = v33 + 4;
  v38 = a1[10];
  v39 = v36 | (v37 << 16) | (*(unsigned __int8*)(v34 + v33 + 3) << 24);
  v40 = fw_memory_g_heap_manager_ptr;
  if (0xAAAAAAAAAAAAAAABLL * ((a1[12] - v38) >> 3) < v39) {
    v41 = a1[11];
    v42 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         24 * v39, 16, 0);
    if (v41 != v38) {
      v43 = v38;
      v44 = v42;
      do {
        *(_WORD*)v44 = *(_WORD*)v43;
        *(_WORD*)(v44 + 2) = *(_WORD*)(v43 + 2);
        *(_WORD*)(v44 + 4) = *(_WORD*)(v43 + 4);
        *(_WORD*)(v44 + 6) = *(_WORD*)(v43 + 6);
        *(_WORD*)(v44 + 8) = *(_WORD*)(v43 + 8);
        *(_WORD*)(v44 + 10) = *(_WORD*)(v43 + 10);
        v45 = *(_QWORD*)(v43 + 16);
        v43 += 24;
        *(_QWORD*)(v44 + 16) = v45;
        v44 += 24;
      } while (v43 != v41);
    }
    a1[10] = v42;
    a1[11] = v42 + v41 - v38;
    a1[12] = v42 + 24 * v39;
    if (v38 != 0) {
      v46 = 128;
      if (*(_QWORD*)(*(_QWORD*)v40 + 200LL) == 0) {
        v46 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v40 + v46);
    }
  }
  if ((_DWORD)v39 != 0) {
    v47 = 0;
    do {
      v50 = *(int*)(a2 + 20);
      v51 = *(_QWORD*)(a2 + 8);
      *(_DWORD*)(a2 + 20) = v50 + 1;
      v52 = *(unsigned __int8*)(v51 + v50);
      *(_DWORD*)(a2 + 20) = v50 + 2;
      v53 = *(unsigned __int8*)(v51 + v50 + 1);
      *(_DWORD*)(a2 + 20) = v50 + 3;
      v54 = *(unsigned __int8*)(v51 + v50 + 2);
      *(_DWORD*)(a2 + 20) = v50 + 4;
      v55 = *(unsigned __int8*)(v51 + v50 + 3);
      *(_DWORD*)(a2 + 20) = v50 + 5;
      v56 = *(unsigned __int8*)(v51 + v50 + 4);
      *(_DWORD*)(a2 + 20) = v50 + 6;
      v57 = *(unsigned __int8*)(v51 + v50 + 5);
      *(_DWORD*)(a2 + 20) = v50 + 7;
      v58 = *(unsigned __int8*)(v51 + v50 + 6);
      v59 = GameRoutine_71dfc0(a2);
      if (v59 != 0) {
        v60 = GameRoutine_a51fe0(&v112, *(_QWORD*)(v59 + 8));
        if (v112 != nullptr) {
          v61 = a1[6];
          if (v61 != 0 && a1[8] != 0) {
            v62 = *v112;
            v63 = v61 - 1;
            if ((v61 & (v61 - 1)) != 0) {
              v64 = *v112;
              if (v62 >= v61) {
                v64 = v62 % v61;
              }
            }
            else {
              v64 = v63 & v62;
            }
            v65 = *(_QWORD**)(a1[5] + 8 * v64);
            if (v65 != nullptr) {
              v66 = (_QWORD*)*v65;
              if (v66 != nullptr) {
                if ((v61 & v63) == 0) {
                  while (1) {
                    v68 = v66[1];
                    if (v62 == v68) {
                      if (v66[2] == v62) {
                        goto LABEL_81;
                      }
                    }
                    else if ((v68 & v63) != v64) {
                      goto LABEL_56;
                    }
                    v66 = (_QWORD*)*v66;
                    if (v66 == nullptr) {
                      goto LABEL_56;
                    }
                  }
                }
                do {
                  v67 = v66[1];
                  if (v62 == v67) {
                    if (v66[2] == v62) {
                    LABEL_81:
                      v69 = v66[3];
                      if (v69 != 0) {
                        v70 = v52 | (v53 << 8);
                        v72 = a1[11];
                        v71 = a1[12];
                        if (v72 < v71) {
                          *(_WORD*)v72 = v70;
                          *(_WORD*)(v72 + 2) = v54;
                          v48 = v72 + 24;
                          *(_WORD*)(v72 + 4) = v55;
                          *(_WORD*)(v72 + 6) = v56;
                          *(_WORD*)(v72 + 8) = v57;
                          *(_WORD*)(v72 + 10) = v58;
                          *(_QWORD*)(v72 + 16) = v69;
                          v49 = a1;
                        }
                        else {
                          v73 = a1[10];
                          v74 = 1 - 0x5555555555555555LL *
                                        ((__int64)(v72 - v73) >> 3);
                          if (v74 > 0xAAAAAAAAAAAAAAALL) {
                            GameRoutine_12b7c10(v60);
                          }
                          v107 = v70;
                          v109 = v66[3];
                          v75 = 0xAAAAAAAAAAAAAAABLL *
                                ((__int64)(v71 - v73) >> 3);
                          if (2 * v75 > v74) {
                            v74 = 2 * v75;
                          }
                          if (v75 >= 0x555555555555555LL) {
                            v76 = 0xAAAAAAAAAAAAAAALL;
                          }
                          else {
                            v76 = v74;
                          }
                          if (v76 > 0xAAAAAAAAAAAAAAALL) {
                            GameRoutine_60a210(v60);
                          }
                          v105 = 3 * v76;
                          v77 = fw_memory_HeapManager_Allocate(
                              *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v76,
                              16, 0);
                          v78 = v73;
                          v79 = v77 + v72 - v73;
                          *(_WORD*)v79 = v107;
                          *(_WORD*)(v79 + 2) = v54;
                          *(_WORD*)(v79 + 4) = v55;
                          *(_WORD*)(v79 + 6) = v56;
                          *(_WORD*)(v79 + 8) = v57;
                          *(_WORD*)(v79 + 10) = v58;
                          *(_QWORD*)(v79 + 16) = v109;
                          if (v73 != v72) {
                            v80 = v73;
                            v81 = v77;
                            do {
                              *(_WORD*)v81 = *(_WORD*)v80;
                              *(_WORD*)(v81 + 2) = *(_WORD*)(v80 + 2);
                              *(_WORD*)(v81 + 4) = *(_WORD*)(v80 + 4);
                              *(_WORD*)(v81 + 6) = *(_WORD*)(v80 + 6);
                              *(_WORD*)(v81 + 8) = *(_WORD*)(v80 + 8);
                              *(_WORD*)(v81 + 10) = *(_WORD*)(v80 + 10);
                              v82 = *(_QWORD*)(v80 + 16);
                              v80 += 24;
                              *(_QWORD*)(v81 + 16) = v82;
                              v81 += 24;
                            } while (v80 != v72);
                          }
                          v49 = a1;
                          v48 = v79 + 24;
                          a1[10] = v77;
                          a1[11] = v79 + 24;
                          a1[12] = v77 + 8 * v105;
                          if (v78 != 0) {
                            v83 = 128;
                            if (*(_QWORD*)(*(_QWORD*)
                                               fw_memory_g_heap_manager_ptr +
                                           200LL) == 0) {
                              v83 = 56;
                            }
                            nn_mem_StandardAllocator_Free(
                                *(_QWORD*)fw_memory_g_heap_manager_ptr + v83);
                          }
                        }
                        v49[11] = v48;
                      }
                      break;
                    }
                  }
                  else {
                    if (v67 >= v61) {
                      v67 %= v61;
                    }
                    if (v67 != v64) {
                      break;
                    }
                  }
                  v66 = (_QWORD*)*v66;
                } while (v66 != nullptr);
              }
            }
          }
        }
      }
    LABEL_56:
      ++v47;
    } while (v47 != (_DWORD)v39);
  }
  if (a3 == 3) {
  LABEL_98:
    v84 = 0;
    v85 = GameData_212ccd0[0];
    v86 = a1;
    do {
      v113 = *(__int64*)((char*)&GameData_2022250 + v84);
      result = game_HashString(v113);
      v112 = (unsigned __int64*)result;
      if (game_GameModeData_instance_ != 0) {
        result = game_GameVariableTable_Find(
            *(_QWORD*)(game_GameModeData_instance_ + 48), &v112);
        if (result != 0 && *(_DWORD*)(result + 32) != 0) {
          result = game_HashString(
              *(_UNKNOWN**)((char*)&GameData_2022250 + v84 + 8));
          if (result != 0) {
            v88 = *(_QWORD*)(*v85 + 96);
            v89 = v88 == 0 || *(_QWORD*)(*v85 + 112) == 0;
            if (!v89) {
              v90 = v88 - 1;
              if ((v88 & (v88 - 1)) != 0) {
                v91 = result;
                if (result >= v88) {
                  v91 = result % v88;
                }
              }
              else {
                v91 = v90 & result;
              }
              v92 = *(_QWORD**)(*(_QWORD*)(*v85 + 88) + 8 * v91);
              if (v92 != nullptr) {
                v93 = (_QWORD*)*v92;
                if (v93 != nullptr) {
                  if ((v88 & v90) == 0) {
                    while (1) {
                      v95 = v93[1];
                      if (v95 == result) {
                        if (v93[2] == result) {
                          goto LABEL_128;
                        }
                      }
                      else if ((v95 & v90) != v91) {
                        goto LABEL_99;
                      }
                      v93 = (_QWORD*)*v93;
                      if (v93 == nullptr) {
                        goto LABEL_99;
                      }
                    }
                  }
                  do {
                    v94 = v93[1];
                    if (v94 == result) {
                      if (v93[2] == result) {
                      LABEL_128:
                        v96 = (__int64*)v93[3];
                        if (v96 != nullptr) {
                          result = (unsigned __int64)GameRoutine_12b3240(
                              a1 + 13, v96);
                        }
                        break;
                      }
                    }
                    else {
                      if (v94 >= v88) {
                        v94 %= v88;
                      }
                      if (v94 != v91) {
                        break;
                      }
                    }
                    v93 = (_QWORD*)*v93;
                  } while (v93 != nullptr);
                }
              }
            }
          }
        }
      }
    LABEL_99:
      v84 += 16;
    } while (v84 != 144);
    v97 = (__int64***)a1[2];
    v98 = (__int64***)a1[3];
    while (v97 != v98) {
      if (*((_BYTE*)*v97 + 8) == 4) {
        result = (unsigned __int64)GameRoutine_12b3240(a1 + 13, **v97);
      }
      ++v97;
    }
  }
  else {
    v86 = a1;
    result = (unsigned __int64)GameRoutine_12b3420(a1 + 13, a2);
  }
  v99 = (__int64*)v86[2];
  v100 = (__int64*)v86[3];
  if (v99 != v100) {
    v101 = game_GameModeData_instance_;
    do {
      v102 = *v99;
      if (v101 == 0) {
        goto LABEL_151;
      }
      LOBYTE(v103) = *(_BYTE*)(v101 + 15);
      if ((_BYTE)v103 != 0) {
        v103 = (*(unsigned __int8*)(*(_QWORD*)v102 + 144LL) >> (v103 - 1)) & 1;
      }
      if ((v103 & 1) == 0) {
      LABEL_151:
        if (*(_BYTE*)(v102 + 8) != 0) {
          v104 = *(unsigned __int8*)(v102 + 22);
          *(_WORD*)(v102 + 8) = 0;
          if (v104 == 1) {
            *(_BYTE*)(v102 + 22) = 0;
          }
        }
      }
      ++v99;
    } while (v99 != v100);
  }
  return result;
}

__int64 GameSideStoryData_Unknown10(__int64 result, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* i;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(result + 112) - *(_QWORD*)(result + 104);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = v3 >> 3;
  v4 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = v3 >> 11;
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v3 >> 19;
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v3 >> 27;
  v7 = *(__int64**)(result + 104);
  for (i = *(__int64**)(result + 112); v7 != i;
       *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = HIBYTE(v10)) {
    v9 = *(int*)(a2 + 20);
    v10 = *v7++;
    *(_DWORD*)(a2 + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v10;
    v11 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = BYTE1(v10);
    v12 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE2(v10);
    v13 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE3(v10);
    v14 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v14 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = BYTE4(v10);
    v15 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = BYTE5(v10);
    v16 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v16 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = BYTE6(v10);
    v17 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v17 + 1;
  }
  return result;
}

__int64 GameSideStoryData_12b6c60(__int64 result, __int64 a2)
{
  __int64 v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64* v7;
  __int64* i;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;

  v2 = *(int*)(a2 + 20);
  v3 = *(_QWORD*)(result + 104) - *(_QWORD*)(result + 96);
  *(_DWORD*)(a2 + 20) = v2 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v2) = v3 >> 3;
  v4 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v4 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v4) = v3 >> 11;
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = v3 >> 19;
  v6 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v6 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v6) = v3 >> 27;
  v7 = *(__int64**)(result + 96);
  for (i = *(__int64**)(result + 104); v7 != i;
       *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = HIBYTE(v10)) {
    v9 = *(int*)(a2 + 20);
    v10 = *v7++;
    *(_DWORD*)(a2 + 20) = v9 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = v10;
    v11 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v11 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = BYTE1(v10);
    v12 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v12 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE2(v10);
    v13 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v13 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE3(v10);
    v14 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v14 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = BYTE4(v10);
    v15 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v15 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v15) = BYTE5(v10);
    v16 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v16 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = BYTE6(v10);
    v17 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v17 + 1;
  }
  return result;
}

__int64* GameSideStoryData_Unknown11(__int64* result, __int64 a2, int a3)
{
  __int64* v3;
  __int64 v4;

  if (a3 >= 4) {
    v4 = result[13];
    v3 = result + 13;
    v3[1] = v4;
    return GameRoutine_12b3420(v3, a2);
  }
  return result;
}

__int64* GameSideStoryData_Unknown10_12b6dd0(__int64* result, __int64 a2,
                                             int a3)
{
  __int64* v3;
  __int64 v4;

  if (a3 >= 4) {
    v4 = result[12];
    v3 = result + 12;
    v3[1] = v4;
    return GameRoutine_12b3420(v3, a2);
  }
  return result;
}

__int64 GameSideStoryData_12b72a0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;

  v1 = *(_QWORD*)(result + 152);
  if (*(_BYTE*)(v1 + 8) == 1) {
    v2 = *(_QWORD*)(result + 152);
    *(_BYTE*)(v1 + 8) = 2;
    return GameSideStoryData_12b3d60(v2);
  }
  v3 = *(_QWORD*)(result + 8);
  if (v3 != 0) {
    while (1) {
      if (*(_BYTE*)v3 == 2) {
        if (*(_DWORD*)(v3 + 32) == 0) {
          *(_QWORD*)(result + 16) = v3;
          *(_WORD*)(result + 136) &= ~0x80u;
          return result;
        }
      }
      else if (*(_BYTE*)v3 == 0) {
        return result;
      }
      v3 += 64;
    }
  }
  return result;
}

__int64 GameSideStoryData_12b7300(__int64 a1)
{
  __int64 result;
  __int64 v3;
  __int64* v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;

  result = *(_QWORD*)(**(_QWORD**)(a1 + 152) + 200LL);
  if (result != 0) {
    result = game_gmap_SpotMgr_FindSpot(result);
    if (result != 0 &&
        (*(_BYTE*)(result + 176) != 3 || *(_BYTE*)(result + 112) != 0)) {
      v3 = *(_QWORD*)(result + 120);
      v4 = (__int64*)fw_memory_g_heap_manager_ptr;
      v5 = (_QWORD*)fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 8, 16, 0);
      v8 = v5;
      *v5 = v3;
      v9 = v5 + 1;
      v10 = v5 + 1;
      result = GameRoutine_1332f00(&v8);
      if (v8 != nullptr) {
        v6 = *v4;
        v9 = v8;
        v7 = 128;
        if (*(_QWORD*)(v6 + 200) == 0) {
          v7 = 56;
        }
        return nn_mem_StandardAllocator_Free(v6 + v7);
      }
    }
  }
  return result;
}

_BYTE* GameSideStoryData_12b73b0(__int64 a1)
{
  _BYTE* result;
  _QWORD v2[2];

  result = *(_BYTE**)(**(_QWORD**)(a1 + 152) + 320LL);
  if (result != nullptr && *result != 0) {
    v2[1] = result;
    v2[0] = game_HashString(result);
    return (_BYTE*)game_VariableManager_SetFlag(v2, 1);
  }
  return result;
}

void GameSideStoryData_12b7400(__int64 a1)
{
  __int64 v1;
  _BYTE* v2;
  _QWORD* v3;
  __int64 v4;
  unsigned __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int16 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int128 v26;

  v1 = *(_QWORD*)(a1 + 152);
  v2 = *(_BYTE**)(*(_QWORD*)v1 + 328LL);
  if (v2 != nullptr && *v2 != 0) {
    v3 = *(_QWORD**)GameData_212c7b8[0];
    v4 = *(_QWORD*)(*(_QWORD*)GameData_212c7b8[0] + 80LL);
    v5 = *(_QWORD*)(*(_QWORD*)GameData_212c7b8[0] + 88LL);
    if (v4 == v5) {
    LABEL_7:
      if (GameData_22408f8 != 0) {
        if (game_gmap_GmapClock_instance_ != 0) {
          v7 = game_gmap_GmapClock_instance_ + 8;
        }
        else {
          v7 = game_gmap_GmapClock_kDefaultTime_ptr;
        }
        LOWORD(v26) = *(_WORD*)v7;
        v8 = *(_DWORD*)(v7 + 2);
        v9 = *(_WORD*)(v7 + 6);
        WORD5(v26) = 0;
        *(_DWORD*)((char*)&v26 + 2) = v8;
        *(_DWORD*)((char*)&v26 + 6) = (unsigned __int16)(v9 + 6);
        Dir_70d7a0_alt1((unsigned __int16*)&v26);
        v10 = v3[12];
        if (v5 >= v10) {
          v13 = v5 - v4;
          v14 = 1 - 0x5555555555555555LL * ((__int64)(v5 - v4) >> 3);
          if (v14 > 0xAAAAAAAAAAAAAAALL) {
            GameRoutine_12b7c10_alt1();
          }
          v15 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v10 - v4) >> 3);
          if (2 * v15 > v14) {
            v14 = 2 * v15;
          }
          if (v15 >= 0x555555555555555LL) {
            v16 = 0xAAAAAAAAAAAAAAALL;
          }
          else {
            v16 = v14;
          }
          if (v16 > 0xAAAAAAAAAAAAAAALL) {
            GameRoutine_60a210_alt1();
          }
          v17 = 3 * v16;
          v18 = fw_memory_g_heap_manager_ptr;
          v19 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v16, 16, 0);
          v20 = v26;
          v21 = v19 + v13;
          *(_QWORD*)(v21 + 16) = v1;
          v12 = v19 + v13 + 24;
          *(_QWORD*)v21 = v20;
          *(_DWORD*)(v21 + 8) = DWORD2(v26);
          if (v4 != v5) {
            v22 = v4;
            v23 = v19;
            do {
              *(_WORD*)v23 = *(_WORD*)v22;
              *(_WORD*)(v23 + 2) = *(_WORD*)(v22 + 2);
              *(_WORD*)(v23 + 4) = *(_WORD*)(v22 + 4);
              *(_WORD*)(v23 + 6) = *(_WORD*)(v22 + 6);
              *(_WORD*)(v23 + 8) = *(_WORD*)(v22 + 8);
              *(_WORD*)(v23 + 10) = *(_WORD*)(v22 + 10);
              v24 = *(_QWORD*)(v22 + 16);
              v22 += 24;
              *(_QWORD*)(v23 + 16) = v24;
              v23 += 24;
            } while (v22 != v5);
          }
          v3[10] = v19;
          v3[11] = v12;
          v3[12] = v19 + 8 * v17;
          if (v4 != 0) {
            v25 = 128;
            if (*(_QWORD*)(*(_QWORD*)v18 + 200LL) == 0) {
              v25 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v18 + v25);
          }
        }
        else {
          v11 = v26;
          *(_QWORD*)(v5 + 16) = v1;
          v12 = v5 + 24;
          *(_QWORD*)v5 = v11;
          *(_DWORD*)(v5 + 8) = DWORD2(v26);
        }
        v3[11] = v12;
      }
      else {
        *((_QWORD*)&v26 + 1) = *(_QWORD*)(*(_QWORD*)v1 + 328LL);
        *(_QWORD*)&v26 = game_HashString_alt1((__int64)v2);
        game_VariableManager_SetFlag_alt1((__int64)&v26, 1);
      }
    }
    else {
      v6 = *(_QWORD*)(*(_QWORD*)GameData_212c7b8[0] + 80LL);
      while (*(_QWORD*)(v6 + 16) != v1) {
        v6 += 24;
        if (v6 == v5) {
          goto LABEL_7;
        }
      }
    }
  }
}

__int64 GameSideStoryData_12b7700(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  int v3;
  __int64 v4;
  __n128 v5;
  __int64 v6;
  __int64* v7;
  __int64* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  int v13;
  unsigned int v14;
  unsigned int v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 result;
  int v20;
  __int64 v21;
  struct {
    __int64* v22;
    __int64* v23;
    __int64* v24;
  } v22_;

  v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v2 = **(_QWORD**)(a1 + 152);
  if (*(_WORD*)(v2 + 336) != 0 && game_GameModeData_instance_ != 0) {
    v3 = (*(_DWORD*)(game_GameModeData_instance_ + 72) +
          *(unsigned __int16*)(v2 + 336)) &
         ~((*(_DWORD*)(game_GameModeData_instance_ + 72) +
            *(unsigned __int16*)(v2 + 336)) >>
           31);
    if (v3 >= 9999999) {
      v3 = 9999999;
    }
    *(_DWORD*)(game_GameModeData_instance_ + 72) = v3;
    v2 = **(_QWORD**)(a1 + 152);
  }
  v4 = *(unsigned __int16*)(v2 + 344);
  if (*(_WORD*)(v2 + 344) != 0) {
    v22_.v22 = (__int64*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v4, 16, 0),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v22_.v23 = v22_.v22;
    v6 = 8;
    v22_.v24 = &v22_.v22[v4];
    v7 = GameData_212c878[0];
    v8 = game_map_MapRandom_instance__ptr[0];
    do {
      v9 = *(_QWORD*)(*(_QWORD*)(**(_QWORD**)(a1 + 152) + 352LL) + v6);
      v21 = 0;
      if (v9 != 0) {
        v10 = *v7;
        v11 = *(unsigned __int16*)(v9 + 16);
        HIDWORD(v21) = 1;
        v12 = *(_QWORD*)(v10 + 64);
        LOWORD(v21) = v11;
        if (*(_BYTE*)(*(_QWORD*)(v12 + 8 * v11) + 73LL) == 17) {
          nn_os_LockMutex(&game_g_random_mutex),
              v5 = COERCE_AS(__typeof__(v5),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          v13 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8);
          v14 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 4);
          v15 = *(_DWORD*)v8 ^ (*(_DWORD*)v8 << 11);
          *(_DWORD*)v8 = *((_DWORD*)v8 + 1);
          *((_DWORD*)v8 + 1) = v13;
          v16 = (v15 >> 8) ^ (v14 >> 19) ^ v15 ^ v14;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8) = v14;
          *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v8 + 4) = v16;
          v5 = nn_os_UnlockMutex(&game_g_random_mutex);
          HIDWORD(v21) =
              HIDWORD(v21) & 0xFFFFC00F |
              (16 *
               (((16 * (v16 - 1000 * ((v16 & 0x7FFFFFFFu) / 0x3E8)) + 16) >>
                 4) &
                0x3FF));
        }
      }
      game_8aef60(&v22_.v22, (unsigned __int16*)&v21, v5),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
      --v4;
      v6 += 16;
    } while (v4 != 0);
    game_8ae640((__int64*)&v22_.v22, 0, 0, *(long double*)&v5),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v22_.v22 != nullptr) {
      v22_.v23 = v22_.v22;
      v17 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v17 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v17),
          v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    v2 = **(_QWORD**)(a1 + 152);
  }
  v18 = *(_QWORD*)(v2 + 368);
  if (v18 != 0) {
    v22_.v22 = (__int64*)*(unsigned __int8*)(v18 + 16);
    LegionPool_936f60((void*)((__int64)&v21),
                      *(_QWORD*)(*(_QWORD*)GameData_212cf80[0] + 8LL),
                      (unsigned __int8*)&v22_.v22, 0),
        v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
    v2 = **(_QWORD**)(a1 + 152);
  }
  result = *(_QWORD*)(v2 + 376);
  if (result != 0) {
    v22_.v23 = *(__int64**)(v2 + 376);
    v22_.v22 = (__int64*)game_HashString_alt1(result),
    v5 = COERCE_AS(__typeof__(v5), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (game_GameModeData_instance_ != 0) {
      v20 = *(unsigned __int8*)(game_GameModeData_instance_ + 15);
    }
    else {
      v20 = 0;
    }
    return game_VariableManager_SetFlag_alt1((__int64)&v22_.v22, v20);
  }
  return result;
}

__int64 GameSideStoryData_12b7960(__int64 result)
{
  if (*(_BYTE*)(**(_QWORD**)(result + 152) + 338LL) != 0) {
    return GameRoutine_8b03f0(result);
  }
  return result;
}

__int64* GameSideStoryData_12b8520(__int64* result, __int64* a2, __int64* a3,
                                   __int64 a4, __int64 a5, __int64 a6,
                                   __int64 a7)
{
  unsigned int v9;
  __int64 v10;
  unsigned int v11;
  __int64 v13;
  __int64* v14;
  unsigned __int64 v15;
  __int64* v16;
  unsigned int v17;
  unsigned __int64 v18;
  __int64* v19;
  __int64* v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64* v23;
  __int64* v24;
  __int64 v25;
  __int64* v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64* v30;
  __int64* v31;
  __int64 v32;
  unsigned int v33;
  _BOOL4 v35;
  __int64* v36;
  __int64* v37;
  __int64* v38;
  char* v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  signed __int64 v44;
  __int64* v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64* v55;
  __int64 v56;
  __int64 v57;
  __int64* v58;
  _QWORD* v59;
  _QWORD* v60;
  char* v61;
  __int64 v62;
  bool v63;
  char v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64* v68;
  __int64* v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64* v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64* v77;
  unsigned int v78;
  unsigned int v79;
  int v80;
  __int64 v82;
  __int64* v83;
  __int64* v84;
  __int64 v85;
  __int64 v86;
  unsigned int v87;
  unsigned int v88;
  int v89;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64* v95;
  __int64* v96;

  if (a5 == 0) {
    return result;
  }
  while (a4 > a7 && a5 > a7) {
    if (a4 == 0) {
      return result;
    }
    v9 = *(unsigned __int8*)(*a2 + 8);
    if ((v9 & 0xFE) == 4) {
      while (1) {
        v10 = *result;
        v11 = *(unsigned __int8*)(*result + 8);
        if ((v11 & 0xFE) == 4 && v9 < v11) {
          break;
        }
        ++result;
        if (--a4 == 0) {
          return result;
        }
      }
    }
    else {
      while (1) {
        v10 = *result;
        if ((*(_BYTE*)(*result + 8) & 0xFE) == 4) {
          break;
        }
        ++result;
        if (--a4 == 0) {
          return result;
        }
      }
    }
    if (a4 >= a5) {
      if (a4 == 1) {
        *result = *a2;
        *a2 = v10;
        return result;
      }
      v14 = a3;
      v27 = a4 / 2;
      v16 = &result[a4 / 2];
      if (a3 != a2) {
        v14 = a2;
        if ((*(_BYTE*)(*v16 + 8) & 0xFE) == 4) {
          v28 = a3 - a2;
          v14 = a2;
          do {
            v29 = v28 >> 1;
            v30 = &v14[v28 >> 1];
            v32 = *v30;
            v31 = v30 + 1;
            v33 = *(unsigned __int8*)(v32 + 8);
            v35 = (*(_BYTE*)(v32 + 8) & 0xFE) != 4 ||
                  v33 < *(unsigned __int8*)(*v16 + 8);
            v28 += ~v29;
            if (v35) {
              v14 = v31;
            }
            else {
              v28 = v29;
            }
          } while (v28 != 0);
        }
      }
      v13 = v14 - a2;
    }
    else {
      v13 = a5 / 2;
      v14 = &a2[a5 / 2];
      if (a2 == result) {
        v26 = a2;
        v16 = a2;
      }
      else {
        v15 = a2 - result;
        v16 = result;
        v17 = *(unsigned __int8*)(*v14 + 8);
        if ((v17 & 0xFE) == 4) {
          do {
            v18 = v15 >> 1;
            v19 = &v16[v15 >> 1];
            v21 = *v19;
            v20 = v19 + 1;
            v15 += ~(v15 >> 1);
            if ((*(_BYTE*)(v21 + 8) & 0xFE) == 4 &&
                v17 < *(unsigned __int8*)(v21 + 8)) {
              v15 = v18;
            }
            else {
              v16 = v20;
            }
          } while (v15 != 0);
        }
        else {
          do {
            v22 = v15 >> 1;
            v23 = &v16[v15 >> 1];
            v25 = *v23;
            v24 = v23 + 1;
            v15 += ~(v15 >> 1);
            if ((*(_BYTE*)(v25 + 8) & 0xFE) == 4) {
              v15 = v22;
            }
            else {
              v16 = v24;
            }
          } while (v15 != 0);
        }
        v26 = result;
      }
      v27 = v16 - v26;
    }
    v36 = v14;
    if (v16 != a2) {
      v36 = v16;
      if (a2 != v14) {
        v37 = v16 + 1;
        if (v16 + 1 == a2) {
          v44 = (char*)v14 - (char*)a2;
          v45 = a3;
          v46 = a5;
          v47 = a6;
          v48 = a4;
          v93 = *v16;
          v95 = result;
          memmove(v16, v16 + 1, (char*)v14 - (char*)a2);
          result = v95;
          v36 = (__int64*)((char*)v16 + v44);
          a4 = v48;
          a6 = v47;
          a5 = v46;
          a3 = v45;
          *v36 = v93;
        }
        else {
          v38 = a2 + 1;
          if (a2 + 1 == v14) {
            v49 = *(v14 - 1);
            v36 = v16 + 1;
            if (v14 - 1 != v16) {
              v94 = a6;
              v96 = result;
              v50 = a3;
              v51 = a5;
              v52 = a4;
              memmove(v16 + 1, v16, (char*)(v14 - 1) - (char*)v16);
              a4 = v52;
              a6 = v94;
              result = v96;
              a5 = v51;
              a3 = v50;
            }
            *v16 = v49;
          }
          else {
            v39 = (char*)((char*)a2 - (char*)v16);
            v40 = a2 - v16;
            v41 = v14 - a2;
            if (v40 == v41) {
              do {
                v42 = *(v37 - 1);
                *(v37 - 1) = *(v38 - 1);
                *(v38 - 1) = v42;
                if (v37 == a2) {
                  break;
                }
                ++v37;
              } while (v38++ != v14);
              v36 = a2;
            }
            else {
              v53 = a2 - v16;
              do {
                v54 = v53;
                v53 = v41;
                v41 = v54 % v41;
              } while (v41 != 0);
              if (8 * v53 != 0) {
                v55 = &v16[v53];
                do {
                  v57 = *--v55;
                  v56 = v57;
                  v58 = (__int64*)((char*)v55 + (_QWORD)v39);
                  v59 = v55;
                  do {
                    v60 = v58;
                    *v59 = *v58;
                    v61 = &v39[(_QWORD)v58];
                    v62 = v14 - v58;
                    v63 = __OFSUB__(v40, v62);
                    v65 = v40 - v62;
                    v64 = (v65 < 0) ^ v63;
                    v58 = &v16[v65];
                    if (v64) {
                      v58 = (__int64*)v61;
                    }
                    v59 = v60;
                  } while (v58 != v55);
                  *v60 = v56;
                } while (v55 != v16);
              }
              v36 = (__int64*)((char*)v16 + ((char*)v14 - (char*)a2));
            }
          }
        }
      }
    }
    v66 = a4 - v27;
    v67 = a5 - v13;
    if (v27 + v13 >= v66 + v67) {
      v73 = result;
      GameSideStoryData_12b8520((__int64)v36, v14, a3, v66, v67, a6, a7);
      result = v73;
      a5 = v13;
      a4 = v27;
      a3 = v36;
      a2 = v16;
      if (v13 == 0) {
        return result;
      }
    }
    else {
      v68 = v16;
      v69 = a3;
      v70 = v66;
      v71 = v27;
      v72 = v67;
      GameSideStoryData_12b8520((__int64)result, v68, v36, v71, v13, a6, a7);
      a4 = v70;
      a5 = v72;
      a3 = v69;
      result = v36;
      a2 = v14;
      if (v72 == 0) {
        return result;
      }
    }
  }
  if (a4 <= a5) {
    if (result == a2) {
      return result;
    }
    v82 = -a6;
    v83 = (__int64*)a6;
    v84 = result;
    do {
      v85 = *v84++;
      v82 -= 8;
      *v83++ = v85;
    } while (v84 != a2);
    while (1) {
      if (a2 == a3) {
        return (__int64*)memmove(result, a6, -(a6 + v82));
      }
      v86 = *a2;
      v87 = *(unsigned __int8*)(*a2 + 8);
      v88 = *(unsigned __int8*)(*(_QWORD*)a6 + 8LL);
      v89 = v88 & 0xFE;
      if ((v87 & 0xFE) == 4) {
        if (v89 != 4 || v87 >= v88) {
        LABEL_105:
          *result = *(_QWORD*)a6;
          a6 += 8;
          goto LABEL_95;
        }
      }
      else if (v89 != 4) {
        goto LABEL_105;
      }
      ++a2;
      *result = v86;
    LABEL_95:
      ++result;
      if (v83 == (__int64*)a6) {
        return result;
      }
    }
  }
  if (a2 == a3) {
    return result;
  }
  v74 = 0;
  do {
    *(_QWORD*)(a6 + v74 * 8) = a2[v74];
    ++v74;
  } while (&a2[v74] != a3);
  v75 = a6 + v74 * 8;
  while (a2 != result) {
    v77 = a2 - 1;
    v76 = *(a2 - 1);
    v78 = *(unsigned __int8*)(v76 + 8);
    v79 = *(unsigned __int8*)(*(_QWORD*)(v75 - 8) + 8LL);
    v80 = v78 & 0xFE;
    if ((v79 & 0xFE) == 4) {
      if (v80 == 4 && v79 < v78) {
        goto LABEL_80;
      }
    }
    else if (v80 == 4) {
      goto LABEL_80;
    }
    v76 = *(_QWORD*)(v75 - 8);
    v77 = a2;
    v75 -= 8;
  LABEL_80:
    *--a3 = v76;
    a2 = v77;
    if (v75 == a6) {
      return result;
    }
  }
  if (a6 != v75) {
    v91 = 0x1FFFFFFFFFFFFFFFLL;
    do {
      v92 = *(_QWORD*)(v75 - 8);
      v75 -= 8;
      a3[v91--] = v92;
    } while (v75 != a6);
  }
  return result;
}

#pragma GCC visibility pop
