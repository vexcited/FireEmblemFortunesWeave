#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_133f780(__int64 result, _DWORD*, char);
__int64 GameRoutine_65f3d0(_QWORD, _QWORD);
__int64 GameRoutine_65f710(_QWORD);
__int64 GameRoutine_6e5dc0(_QWORD);
__int64 GameRoutine_8680c0(void);
__int64 GameRoutine_888970(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_9011a0(_QWORD, _QWORD);
__int64 GameRoutine_9962a0(_QWORD, _QWORD);
__int64 GameSideStoryData_12b50c0(_QWORD, _QWORD);
__int64 SpotMgr_132ffa0(_QWORD);
__int64 TroopMgr_996180(_QWORD, _QWORD);
__int64 UnitActor_81ae00(_QWORD, long double);
__int64 UnitActor_81aee0(_QWORD, double);
__int64 UnitActor_81b040(_QWORD, double);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_HashString(_QWORD);
__int64 game_gmap_SpotMgr_GetCurrentSpot(_QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 GameData_212c7b8[10];
extern __int64 GameData_21c9f00;
extern __int64 GameData_21f2518;
extern __int64 GameData_21f2520;
extern __int64 GameData_21f2530;
extern __int64 GameData_21fe030;
extern __int64 GameData_21fe038;
extern __int64 GameData_21fe048;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_gmap_GmapClock_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime_ptr;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_8875e0(_QWORD);
__int64 Troop_1342e60(__int64 a1);
__int64 Troop_1343230(__int64 a1);
__int64 Troop_13433c0(__int64 a1, __int64 a2);
__int64 Troop_1343c40_alt1(__int64 a1, __int64* a2) __asm__("Troop_1343c40");
__int64 game_gmap_Troop_TryChangeCorpsLeader_lambda0_Invoke(__int64 result,
                                                            __int64* a2);
__int64 game_gmap_Troop_HasPerson_lambda0_Invoke(__int64 result, __int64 a2);
void game_gmap_Troop_OnEnterGmap_lambda0_Invoke(__int64 a1, __int64 a2);
_QWORD* GameRoutine_9010a0(_QWORD* result);
_QWORD* game_UnitPool_Find_6ead60(__int64*, _DWORD*);
__attribute__((swiftcall)) void GameSituation_906320(PSEUDO_X8, __int64,
                                                     __int64*, __int64);
__int64 GameRoutine_14a1520(_QWORD, _QWORD);
__int64 GameRoutine_932c10(_QWORD, _QWORD);
__int64 GameSituation_906440(__int64, __int64*);
__int64 TroopMgr_13460a0(__int64);
__int64 Troop_133e8b0_alt1(_QWORD) __asm__("Troop_133e8b0");
__int64 Unit_6cd120(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_9953e0(_QWORD);
__int64 game_CorpsManager_EachUnit(__int64 result, __int64);
__int64 game_CorpsManager_EachUnit_alt1(_QWORD, _QWORD) __asm__(
    "game_CorpsManager_EachUnit");
__int64
    game_UnitPool_Find_6ead60_alt1(_QWORD,
                                   _QWORD) __asm__("game_UnitPool_Find_6ead60");
__int64 game_gmap_TroopMgr_CountTroop_134e600(__int64, __int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
bool game_HasActiveSkill_843420(_DWORD*, __int64);
extern _QWORD game_g_shared_system_skills_ptr;
extern __int64 (*GameData_1fb0d30[])();
extern __int64 (*GameData_202c718[])();
extern __int64 (*GameData_202c818[])();
extern __int64 (*GameData_202c898[])();
extern __int64* GameData_212cec0;
extern __int64 GameData_21ca310;
extern __int64 GameData_21f2540;
extern __int64 GameData_21f2548;
extern __int64 game_GameModeData_instance_;
extern __int64 game_ProcFadeView_instance_;
extern __int64 game_ProcGameSkipView_instance_;
extern __int64 game_gmap_GmapClock_kDefaultTime;
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_688200();
_QWORD* Troop_133e4e0(__int64 a1);
__int64 Troop_133e6e0(__int64 a1);
__int64 Troop_133e8b0(__int64 result, __n128 a2, long double a3);
__int64 Troop_133ec20(__int64 result);
__int64 game_gmap_Troop_OnEndPhase(__int64 result);
__int64 Troop_1342b80(__int64 a1);
__attribute__((swiftcall)) void game_gmap_Troop_GetAmong(PSEUDO_X8 x8_,
                                                         _QWORD* result);
__int64 Troop_1342fe0(__int64 a1, __n128 a2, long double a3);
void game_gmap_Troop_GetAmong_lambda0_Invoke(__int64 a1, __int64* a2);
__int64 game_gmap_Troop_IsNextEncount(__int64 a1, __int64* a2);
__int64 game_gmap_Troop_IsNextEncount_lambda0_Invoke(__int64 result,
                                                     __int64* a2);
__int64*
GameRoutine_888970_alt1(__int64* result, __int64, __int64,
                        unsigned __int64) __asm__("GameRoutine_888970");
__int64 GameRoutine_6e5dc0_alt1(__int64) __asm__("GameRoutine_6e5dc0");
__int64 GameRoutine_9962a0_alt1(__int64 result,
                                __int64*) __asm__("GameRoutine_9962a0");
__int64 SpotMgr_132ffa0_alt1(unsigned int*) __asm__("SpotMgr_132ffa0");
__int64 UnitActor_81ae00_alt1(__int64, float) __asm__("UnitActor_81ae00");
__int64 UnitActor_81aee0_alt1(__int64, float) __asm__("UnitActor_81aee0");
__int64 UnitActor_81b040_alt1(__int64, float) __asm__("UnitActor_81b040");
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__int64 game_gmap_133f780(__int64 result, _DWORD*, char);
__int64 memcpy_alt1(__int64, __int64, unsigned __int64) __asm__("memcpy");
bool game_8680c0();
unsigned __int64 GameRoutine_65f710_alt1(__int64) __asm__("GameRoutine_65f710");
unsigned int* game_gmap_SpotMgr_GetCurrentSpot_alt1() __asm__(
    "game_gmap_SpotMgr_GetCurrentSpot");
void __attribute__((noreturn))
GameRoutine_8875e0_alt1() __asm__("GameRoutine_8875e0");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 Troop_1343c40(__int64 a1, __int64 a2);
__int64 GameRoutine_9011a0_alt1(_QWORD*,
                                __int16*) __asm__("GameRoutine_9011a0");
void GameRoutine_932c10_alt1(__int64*, _QWORD*) __asm__("GameRoutine_932c10");
void GameSideStoryData_12b50c0_alt1(__int64, __int64*) __asm__(
    "GameSideStoryData_12b50c0");
void __attribute__((noreturn))
GameRoutine_60a310_alt1() __asm__("GameRoutine_60a310");
__attribute__((swiftcall)) void
GameSituation_906320_alt1(PSEUDO_X8, __int64,
                          __int64*) __asm__("GameSituation_906320");

_QWORD* Troop_133e4e0(__int64 a1)
{
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  unsigned int v6;
  _QWORD* v7;
  unsigned int v8;
  _QWORD* result;
  unsigned int v10;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  __int64 v16;
  int v17;
  int v18;
  struct {
    __int64 v19[4];
    __int64* v20;
  } v19_;
  _QWORD* v21;

  v1 = *(_QWORD*)(a1 + 96);
  if (v1 != 0) {
    if ((unsigned int)*(unsigned __int8*)(v1 + 32) - 1 < 4) {
      v2 = *(_QWORD**)(a1 + 568);
      v3 = *(_QWORD**)(a1 + 576);
      if (v2 != v3) {
        v4 = v2 + 218;
        v5 = game_g_shared_system_skills_ptr;
        v6 = *(int*)((char*)((int*)0x24LL) + game_g_shared_system_skills_ptr);
        while (1) {
          LODWORD(v19_.v19[0]) = v6 & 0xFFF;
          v8 = (v6 >> 5) & 0x7F;
          if (v8 + 1 <= (unsigned __int64)((__int64)(v4[1] - *v4) >> 2) &&
              ((*(_DWORD*)(*v4 + 4LL * v8) >> v6) & 1) != 0) {
            if (game_HasActiveSkill_843420(v19_.v19, (__int64)v4)) {
              return v4 - 218;
            }
            v6 = *(int*)((char*)((int*)0x24LL) + v5);
          }
          v7 = v4 + 60;
          v4 += 278;
          if (v7 == v3) {
            return nullptr;
          }
        }
      }
    }
    return nullptr;
  }
  if (*(_QWORD*)(a1 + 552) != 0) {
    return nullptr;
  }
  v10 = *(_DWORD*)(a1 + 84);
  if ((v10 & 0x80000000) != 0) {
    v13 = game_GameModeData_instance_;
    if (game_GameModeData_instance_ != 0) {
      v13 = *(_QWORD*)(game_GameModeData_instance_ + 96);
    }
    v19_.v19[0] = v13;
    LODWORD(v21) = 241;
    return game_UnitPool_Find_6ead60(v19_.v19, &v21);
  }
  v21 = nullptr;
  v19_.v19[0] = (__int64)GameData_1fb0d30;
  v19_.v19[1] = (__int64)&v21;
  v19_.v20 = v19_.v19;
  game_CorpsManager_EachUnit(v10, (__int64)v19_.v19);
  if (v19_.v20 == v19_.v19) {
    v12 = 32;
  }
  else {
    if (v19_.v20 == nullptr) {
      goto LABEL_23;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v19_.v20 + v12))((__int64)v19_.v20);
LABEL_23:
  result = v21;
  if (v21 == nullptr) {
    result = *(_QWORD**)(*(_QWORD*)(GameData_21ca310 + 56) + 556168LL);
    if (result != nullptr) {
      while (1) {
        v14 = *((_DWORD*)result + 104);
        v15 = *((unsigned __int8*)result + 501);
        if ((v14 & 0x100000) == 0) {
          v15 = -1;
        }
        if ((v14 & 0x80000) != 0 && v15 == *(_DWORD*)(a1 + 84)) {
          break;
        }
        result = (_QWORD*)result[54];
        if (result == nullptr) {
          goto LABEL_32;
        }
      }
    }
    else {
    LABEL_32:
      v16 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + 556120LL);
      if (v16 == 0) {
        return nullptr;
      }
      while (1) {
        v17 = *(_DWORD*)(v16 + 416);
        v18 = *(unsigned __int8*)(v16 + 501);
        if ((v17 & 0x100000) == 0) {
          v18 = -1;
        }
        if ((v17 & 0x80000) != 0 && v18 == *(_DWORD*)(a1 + 84)) {
          break;
        }
        v16 = *(_QWORD*)(v16 + 432);
        result = nullptr;
        if (v16 == 0) {
          return result;
        }
      }
      return (_QWORD*)v16;
    }
  }
  return result;
}

__int64 Troop_133e6e0(__int64 a1)
{
  __int64 v2;
  int v3;
  __int64 result;
  __int64 v5;
  __int64 v6;
  int v7;
  __int16 v8;
  __int64 v9;
  _QWORD v10[4];
  _QWORD* v11;
  __int64 v12;

  if ((*(_BYTE*)(*(_QWORD*)a1 + 113LL) & 1) != 0) {
    goto LABEL_4;
  }
  v2 = *(_QWORD*)(a1 + 96);
  if (v2 != 0) {
    if (*(_BYTE*)(v2 + 130) != 0) {
    LABEL_4:
      v3 = 0;
      goto LABEL_7;
    }
  }
  else if (*(_QWORD*)(a1 + 552) == 0 && game_GameModeData_instance_ != 0) {
    v3 = 2;
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) == 3 &&
        (*(_DWORD*)(a1 + 84) & 0x80000000) != 0) {
      goto LABEL_4;
    }
  LABEL_7:
    if (*(unsigned __int8*)(a1 + 512) != v3) {
      *(_BYTE*)(a1 + 512) = v3;
    }
    game_9953e0(a1 + 112);
    result = Troop_133e8b0_alt1(a1);
    if ((*(_QWORD*)(a1 + 96) | *(_QWORD*)(a1 + 552)) != 0) {
      return result;
    }
    if (game_GameModeData_instance_ == 0) {
      return result;
    }
    if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
      return result;
    }
    result = *(unsigned int*)(a1 + 84);
    v12 = 0;
    if ((result & 0x80000000) != 0) {
      return result;
    }
    v10[0] = GameData_1fb0d30;
    v10[1] = &v12;
    v11 = v10;
    game_CorpsManager_EachUnit_alt1(result, v10);
    result = (__int64)v11;
    if (v11 == v10) {
      v5 = 32;
      goto LABEL_21;
    }
    if (v11 != nullptr) {
      v5 = 40;
    LABEL_21:
      result = (*(__int64 (**)(__int64))(*v11 + v5))((__int64)v11);
    }
    v6 = v12;
    if (v12 != 0) {
      v7 = *(_DWORD*)((char*)((_UNKNOWN*)0x1A0LL) + v12);
      v8 = *(_WORD*)(a1 + 544);
      if ((v7 & 1) != ((v8 & 0x10) != 0)) {
        if ((v8 & 0x10) != 0) {
          if ((v7 & 1) == 0) {
            *(_DWORD*)((char*)((_UNKNOWN*)0x1A0LL) + v12) = v7 & 0xFFFEFFFE | 1;
          LABEL_31:
            *(_WORD*)((char*)((__int128*)0x10LL) + v6 + 4) |= 4u;
          }
        }
        else if ((v7 & 1) != 0) {
          *(_DWORD*)((char*)((_UNKNOWN*)0x1A0LL) + v12) = v7 & 0xFFFFFFFE;
          if (*(_WORD*)((char*)((_UNKNOWN*)0x7ACLL) + v6) != 0) {
            v9 = *GameData_212cec0;
            if (*(_QWORD*)((char*)((_UNKNOWN*)0x7A8LL) + v6) !=
                *GameData_212cec0) {
              *(_QWORD*)((char*)((_UNKNOWN*)0x7A8LL) + v6) = v9;
              LODWORD(v10[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x124LL) +
                                           game_g_shared_system_skills_ptr) &
                                0xFFF;
              result = Unit_6cd120(v6, (v9 & 0xFFFF00000000LL) != 0, v10);
            }
          }
          goto LABEL_31;
        }
        *(_WORD*)(a1 + 132) |= 4u;
      }
    }
    return result;
  }
  v3 = 2;
  goto LABEL_7;
}

__int64 Troop_133e8b0(__int64 result, __n128 a2, long double a3)
{
  int v3;
  int v4;
  int v5;
  unsigned __int64 v6;
  __int64 v7;
  __int128 v8;
  unsigned int v9;
  __int64 v10;
  int v11;
  int v12;
  __int64 v13;
  unsigned __int64 v14;
  _BOOL4 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  int v25;

  if (*(_QWORD*)result != 0) {
    v3 = *(unsigned __int8*)(result + 546);
    if (*(_BYTE*)(*(_QWORD*)result + 176LL) == 1) {
      if ((v3 & 2) != 0) {
        return result;
      }
      *(_BYTE*)(result + 546) = v3 | 2;
      if (game_ProcGameSkipView_instance_ == 0 ||
          *(_BYTE*)(game_ProcGameSkipView_instance_ + 152) != 3 ||
          (((v4 = *(_DWORD*)(game_ProcGameSkipView_instance_ + 156)) & 8) != 0
               ? (v5 = 2)
               : (v5 = 3),
           (v5 & v4) != 0)) {
        if (game_ProcFadeView_instance_ == 0 ||
            (*(float*)((v6 =
                            game_ProcFadeView_instance_ +
                            ((unsigned __int64)*(
                                 unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
                             << 6)) +
                       172) != *(float*)(v6 + 168)
                 ? (v8 = *(_OWORD*)(v6 + 208))
                 : (v7 = result,
                    (*(void (**)(unsigned __int64))(*(_QWORD*)(v6 + 160) +
                                                    16LL))(v6 + 160),
                    result = v7),
             *((float*)&v8 + 3) != 0x1.0000000000000p+0 ||
                 (v17 = result,
                  LANES128(a2).n128_u64[1] =
                      LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                                   (_QWORD*)(*(_QWORD*)(v6 + 160) + 16LL))(
                                      v6 + 160, *((float*)&v8 + 3)))
                          .n128_u64[1],
                  result = v17,
                  LANES128(a2).n128_f32[3] != 0x1.0000000000000p+0))) {
          v16 = result + 112;
          return UnitActor_81b040(v16, 0.0);
        }
      }
      goto LABEL_38;
    }
    if ((v3 & 2) == 0) {
      return result;
    }
    v9 = v3 & 0xFFFFFFFD;
    v10 = game_ProcGameSkipView_instance_;
    *(_BYTE*)(result + 546) = v9;
    if (v10 != 0 && *(_BYTE*)(v10 + 152) == 3 &&
        (((v11 = *(_DWORD*)(v10 + 156)) & 8) != 0 ? (v12 = 2) : (v12 = 3),
         (v12 & v11) == 0)) {
      if (v9 != 0) {
      LABEL_38:
        v18 = *(unsigned __int8*)(result + 288);
        v25 = 0;
        if (v18 == 1) {
          v19 = *(_QWORD*)(result + 264);
          v20 = result;
          v21 = result + 264;
          LANES128(a2).n128_u64[0] = 0;
        LABEL_42:
          *(_QWORD*)&a3 = 0;
        LABEL_43:
          result = (*(__int64 (**)(__int64, long double, long double))(
              v19 + 24))(v21, *(long double*)&a2, a3);
        LABEL_51:
          *(_QWORD*)(v20 + 272) = 0;
          *(_WORD*)(v20 + 288) = 256;
          *(_WORD*)(v20 + 132) |= 8u;
          return result;
        }
        if (*(float*)(result + 272) > 0.0) {
          v20 = result;
          (*(void (**)(__int64))(*(_QWORD*)(result + 264) + 16LL))(result +
                                                                   264);
          v19 = *(_QWORD*)(v20 + 264);
          v21 = v20 + 264;
          goto LABEL_42;
        }
        v20 = result;
        result = (*(__int64 (**)(__int64, int*, __int64))(
            *(_QWORD*)(result + 264) + 8LL))(result + 264, &v25, result + 296);
        if ((result & 1) == 0) {
          return result;
        }
        (*(void (**)(__int64))(*(_QWORD*)(v20 + 264) + 16LL))(v20 + 264);
        LODWORD(a3) = v25;
      LABEL_55:
        v19 = *(_QWORD*)(v20 + 264);
        v21 = v20 + 264;
        goto LABEL_43;
      }
    }
    else {
      if (game_ProcFadeView_instance_ != 0) {
        v13 = result;
        v14 = game_ProcFadeView_instance_ +
              ((unsigned __int64)*(
                   unsigned __int8*)(game_ProcFadeView_instance_ + 480)
               << 6);
        if (*(float*)(v14 + 172) == *(float*)(v14 + 168)) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)(v14 + 160) + 16LL))(v14 +
                                                                         160);
        }
        else {
          a2 = *(__n128*)(v14 + 208);
        }
        if (LANES128(a2).n128_f32[3] == 0x1.0000000000000p+0) {
          a2 = ((__n128 (*)(unsigned __int64, float)) *
                (_QWORD*)(*(_QWORD*)(v14 + 160) + 16LL))(
              v14 + 160, LANES128(a2).n128_f32[3]);
          v15 = LANES128(a2).n128_f32[3] == 0x1.0000000000000p+0;
        }
        else {
          v15 = false;
        }
        result = v13;
        v16 = v13 + 112;
        if (v9 != 0) {
        LABEL_35:
          if (!v15) {
            return UnitActor_81b040(v16, 0.0);
          }
          goto LABEL_38;
        }
      }
      else {
        v15 = false;
        v16 = result + 112;
        if (v9 != 0) {
          goto LABEL_35;
        }
      }
      if (!v15) {
        return UnitActor_81aee0(v16, 0.0);
      }
    }
    v24 = 1065353216;
    if (*(_BYTE*)(result + 288) == 1) {
      v22 = *(_QWORD*)(result + 264);
      LANES128(a2).n128_f32[0] = 0x1.0000000000000p+0;
      v20 = result;
      v23 = result + 264;
    LABEL_50:
      LODWORD(a3) = COERCE_UNSIGNED_INT((float)(1.0));
      result = (*(__int64 (**)(__int64, long double, long double))(v22 + 24))(
          v23, *(long double*)&a2, a3);
      goto LABEL_51;
    }
    if (*(float*)(result + 272) > 0.0) {
      v20 = result;
      (*(void (**)(__int64))(*(_QWORD*)(result + 264) + 16LL))(result + 264);
      v22 = *(_QWORD*)(v20 + 264);
      v23 = v20 + 264;
      goto LABEL_50;
    }
    v20 = result;
    result = (*(__int64 (**)(__int64, int*, __int64))(
        *(_QWORD*)(result + 264) + 8LL))(result + 264, &v24, result + 296);
    if ((result & 1) != 0) {
      (*(void (**)(__int64))(*(_QWORD*)(v20 + 264) + 16LL))(v20 + 264);
      LODWORD(a3) = v24;
      goto LABEL_55;
    }
  }
  return result;
}

__int64 Troop_133ec20(__int64 result)
{
  unsigned int v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int16 v6;
  __int64 v7;
  __int64 v8;
  _QWORD v9[4];
  _QWORD* v10;
  __int64 v11;

  if ((*(_QWORD*)(result + 96) | *(_QWORD*)(result + 552)) != 0) {
    return result;
  }
  if (game_GameModeData_instance_ == 0) {
    return result;
  }
  if (*(_DWORD*)(game_GameModeData_instance_ + 60) != 3) {
    return result;
  }
  v1 = *(_DWORD*)(result + 84);
  v11 = 0;
  if ((v1 & 0x80000000) != 0) {
    return result;
  }
  v2 = result;
  v9[0] = GameData_1fb0d30;
  v9[1] = &v11;
  v10 = v9;
  game_CorpsManager_EachUnit_alt1(v1, v9);
  result = (__int64)v10;
  if (v10 == v9) {
    v3 = 32;
    goto LABEL_9;
  }
  if (v10 != nullptr) {
    v3 = 40;
  LABEL_9:
    result = (*(__int64 (**)(__int64))(*v10 + v3))((__int64)v10);
  }
  v4 = v11;
  if (v11 != 0) {
    v5 = *(_DWORD*)((char*)((_UNKNOWN*)0x1A0LL) + v11);
    v6 = *(_WORD*)(v2 + 544);
    v7 = v2;
    if ((v5 & 1) != ((v6 & 0x10) != 0)) {
      if ((v6 & 0x10) != 0) {
        if ((v5 & 1) == 0) {
          *(_DWORD*)((char*)((_UNKNOWN*)0x1A0LL) + v11) = v5 & 0xFFFEFFFE | 1;
        LABEL_19:
          *(_WORD*)((char*)((__int128*)0x10LL) + v4 + 4) |= 4u;
        }
      }
      else if ((v5 & 1) != 0) {
        *(_DWORD*)((char*)((_UNKNOWN*)0x1A0LL) + v11) = v5 & 0xFFFFFFFE;
        if (*(_WORD*)((char*)((_UNKNOWN*)0x7ACLL) + v4) != 0) {
          v8 = *GameData_212cec0;
          if (*(_QWORD*)((char*)((_UNKNOWN*)0x7A8LL) + v4) !=
              *GameData_212cec0) {
            *(_QWORD*)((char*)((_UNKNOWN*)0x7A8LL) + v4) = v8;
            LODWORD(v9[0]) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x124LL) +
                                        game_g_shared_system_skills_ptr) &
                             0xFFF;
            result = Unit_6cd120(v4, (v8 & 0xFFFF00000000LL) != 0, v9);
            v7 = v2;
          }
        }
        goto LABEL_19;
      }
      *(_WORD*)(v7 + 132) |= 4u;
    }
  }
  return result;
}

__int64 game_gmap_Troop_OnEndPhase(__int64 result)
{
  __int16* v1;
  __int64 v2;
  int v3;
  __int64 v4;
  __int16 v5;
  __int16* v6;
  __int16 v7;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;

  v1 = (__int16*)result;
  if ((*(_BYTE*)(result + 546) & 0x20) == 0) {
    goto LABEL_10;
  }
  v2 = *(_QWORD*)result;
  v8_.v8[0] = GameData_202c718;
  v8_.v9 = v8_.v8;
  v3 = game_gmap_TroopMgr_CountTroop_134e600(v2, (__int64)v8_.v8);
  result = (__int64)v8_.v9;
  if (v8_.v9 == v8_.v8) {
    v4 = 32;
    goto LABEL_6;
  }
  if (v8_.v9 != nullptr) {
    v4 = 40;
  LABEL_6:
    result = (*(__int64 (**)(__int64))(*v8_.v9 + v4))((__int64)v8_.v9);
  }
  if (v3 >= 2) {
    v5 = v1[272];
    if ((v5 & 0x40) == 0) {
      v1[272] = v5 | 0x40;
    }
  }
LABEL_10:
  if (v1[265] * v1[264] * v1[266] != 0) {
    if (game_gmap_GmapClock_instance_ != 0) {
      v6 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v6 = (__int16*)&game_gmap_GmapClock_kDefaultTime;
    }
    if (((__int64)v1[265] << 24) + ((__int64)v1[264] << 32) +
            ((__int64)v1[266] << 18) + ((__int64)v1[267] << 12) +
            ((__int64)v1[268] << 6) + v1[269] <=
        (unsigned __int64)(((__int64)v6[1] << 24) + ((__int64)*v6 << 32) +
                           ((__int64)v6[2] << 18) + ((__int64)v6[3] << 12) +
                           ((__int64)v6[4] << 6) + v6[5])) {
      v7 = v1[272];
      if ((v7 & 0x40) == 0) {
        v1[272] = v7 | 0x40;
      }
    }
  }
  return result;
}

__int64 Troop_1342b80(__int64 a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  int v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  _QWORD v11[4];
  _QWORD* v12;
  __int64 v13;

  if ((*(_QWORD*)(a1 + 96) | *(_QWORD*)(a1 + 552)) != 0) {
    goto LABEL_23;
  }
  v2 = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0 &&
      *(_DWORD*)(game_GameModeData_instance_ + 60) == 3) {
    v3 = *(unsigned int*)(a1 + 84);
    v13 = 0;
    if ((v3 & 0x80000000) != 0) {
      v5 = 0;
      goto LABEL_13;
    }
    v11[0] = GameData_1fb0d30;
    v11[1] = &v13;
    v12 = v11;
    game_CorpsManager_EachUnit_alt1(v3, v11);
    if (v12 == v11) {
      v4 = 32;
    }
    else {
      if (v12 == nullptr) {
      LABEL_11:
        v5 = v13;
        if ((*(_DWORD*)(a1 + 84) & 0x80000000) == 0 ||
            (v2 = game_GameModeData_instance_,
             game_GameModeData_instance_ == 0)) {
        LABEL_15:
          if (v5 != 0) {
            v6 = *(_DWORD*)(v5 + 416);
            if ((v6 & 1) != 0) {
              *(_DWORD*)(v5 + 416) = v6 & 0xFFFFFFFE;
              if (*(_WORD*)(v5 + 1964) != 0) {
                v7 = *GameData_212cec0;
                if (*(_QWORD*)(v5 + 1960) != *GameData_212cec0) {
                  *(_QWORD*)(v5 + 1960) = v7;
                  v8 = v5;
                  LODWORD(v11[0]) =
                      *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x124LL) +
                                 game_g_shared_system_skills_ptr) &
                      0xFFF;
                  Unit_6cd120(v5, (v7 & 0xFFFF00000000LL) != 0, v11);
                  v5 = v8;
                }
              }
              *(_WORD*)(v5 + 20) |= 4u;
              *(_WORD*)(a1 + 132) |= 4u;
            }
          }
          goto LABEL_21;
        }
      LABEL_13:
        if (*(_DWORD*)(v2 + 60) == 3) {
          v11[0] = *(_QWORD*)(v2 + 96);
          LODWORD(v13) = 241;
          v5 = game_UnitPool_Find_6ead60_alt1(v11, &v13);
        }
        goto LABEL_15;
      }
      v4 = 40;
    }
    (*(void (**)(__int64))(*v12 + v4))((__int64)v12);
    goto LABEL_11;
  }
LABEL_21:
  GameRoutine_888970(a1 + 24, 0, 0, 0);
  v9 = *(_QWORD*)(a1 + 376);
  if (v9 != 0) {
    *(_DWORD*)(*(_QWORD*)(v9 + 304) + 12LL) = 1065353216;
  }
LABEL_23:
  result = GameRoutine_14a1520(a1 + 656, 1);
  *(_BYTE*)(a1 + 652) = 0;
  return result;
}

__attribute__((swiftcall)) void game_gmap_Troop_GetAmong(PSEUDO_X8 x8_,
                                                         _QWORD* result)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;
  __int64 v3;
  bool v4;
  _QWORD* v5;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  struct {
    _QWORD v13[4];
    _QWORD* v14;
  } v13_;
  __int64 v15;

  v7 = COERCE_AS(__typeof__(v7),
                 PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
  v8 = COERCE_AS(__typeof__(v8),
                 PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
  v2 = result[12];
  v3 = result[69];
  a2[1] = 0;
  a2[2] = 0;
  *a2 = 0;
  v4 = v2 != 0 || v3 == 0;
  if (!v4 && (result[13] != 0 || *((__int16*)result + 321) *
                                         *((__int16*)result + 320) *
                                         *((__int16*)result + 322) !=
                                     0)) {
    v5 = result;
    GameRoutine_932c10_alt1(a2, result + 69),
        v7 = COERCE_AS(__typeof__(v7),
                       PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
        v8 = COERCE_AS(__typeof__(v8),
                       PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    v13_.v13[2] = a2;
    result = v13_.v13;
    v13_.v13[0] = GameData_202c818;
    v13_.v13[1] = v5;
    v13_.v14 = v13_.v13;
    v9 = (__int64*)GameData_21f2540;
    v10 = GameData_21f2548;
    if (GameData_21f2540 == GameData_21f2548) {
      goto LABEL_13;
    }
    do {
      v11 = *v9++;
      v15 = v11;
      if (v13_.v14 == nullptr) {
        GameRoutine_60a310_alt1(),
            v7 = COERCE_AS(__typeof__(v7),
                           PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
            v8 = COERCE_AS(__typeof__(v8),
                           PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      }
      (*(void (**)(_QWORD*, __int64*))(*v13_.v14 + 48LL))(v13_.v14, &v15),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
    } while (v9 != (__int64*)v10);
    result = v13_.v14;
    if (v13_.v14 == v13_.v13) {
    LABEL_13:
      v12 = 32;
    }
    else {
      if (v13_.v14 == nullptr) {
        result;
        return;
      }
      v12 = 40;
    }
    {
      (_QWORD*)(*(__int64 (**)(_QWORD*, __int64, __int64))(*result + v12))(
          result, v7, v8),
          v7 = COERCE_AS(__typeof__(v7),
                         PSEUDO_REGISTER(unsigned long long, "x1", "=r")),
          v8 = COERCE_AS(__typeof__(v8),
                         PSEUDO_REGISTER(unsigned long long, "x2", "=r"));
      return;
    }
  }
  {
    result;
    return;
  }
}

__int64 Troop_1342e60(__int64 a1)
{
  bool v3;
  __int64 result;
  __int64* v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int16* v10;
  __int64 v11;
  unsigned int v12;
  __int64 v13;
  struct {
    __int64* v14;
    __int64 v15;
    __int64 v16;
  } v14_;

  v3 = *(_QWORD*)(a1 + 96) != 0 || *(_QWORD*)(a1 + 552) == 0;
  if (v3 || *(_QWORD*)(a1 + 104) == 0 && *(__int16*)(a1 + 642) *
                                                 *(__int16*)(a1 + 640) *
                                                 *(__int16*)(a1 + 644) ==
                                             0) {
    return 0;
  }
  if (game_gmap_GmapClock_instance_ == 0 ||
      *(__int16*)(game_gmap_GmapClock_instance_ + 22) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 20) *
              *(__int16*)(game_gmap_GmapClock_instance_ + 24) ==
          0) {
    return 1;
  }
  if (*(__int16*)(a1 + 642) * *(__int16*)(a1 + 640) * *(__int16*)(a1 + 644) !=
      0) {
    return 0;
  }
  v14_.v15 = 0;
  v14_.v16 = 0;
  v14_.v14 = nullptr;
  GameSideStoryData_12b50c0_alt1(*(_QWORD*)GameData_212c7b8[0],
                                 (__int64*)&v14_.v14);
  v6 = v14_.v14;
  if (v14_.v14 == (__int64*)v14_.v15) {
  LABEL_18:
    v8 = *(_QWORD**)(a1 + 104);
    v9 = *(_QWORD*)(*(_QWORD*)a1 + 120LL);
    if (game_gmap_GmapClock_instance_ != 0) {
      v10 = (__int16*)(game_gmap_GmapClock_instance_ + 8);
    }
    else {
      v10 = (__int16*)game_gmap_GmapClock_kDefaultTime_ptr;
    }
    v11 = GameRoutine_9011a0_alt1(v8, v10);
    if (v11 != 0) {
      result = v9 != *(_QWORD*)(v11 + 64);
      goto LABEL_24;
    }
  }
  else {
    while (1) {
      v7 = *v6++;
      if (*(_QWORD*)(*(_QWORD*)v7 + 216LL) == *(_QWORD*)(a1 + 552)) {
        break;
      }
      if (v6 == (__int64*)v14_.v15) {
        goto LABEL_18;
      }
    }
  }
  result = 1;
LABEL_24:
  if (v14_.v14 != nullptr) {
    v14_.v15 = (__int64)v14_.v14;
    v12 = result;
    v13 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v13 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v13, (__int64)v14_.v14);
    return v12;
  }
  return result;
}

__int64 Troop_1342fe0(__int64 a1, __n128 a2, long double a3)
{
  int v3;
  unsigned int v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  unsigned __int64 v10;
  int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v16;
  int v17;

  v3 = *(unsigned __int8*)(a1 + 546);
  if ((v3 & 0x20) != 0) {
    v5 = v3 & 0xFFFFFFDF;
    v6 = game_ProcGameSkipView_instance_;
    *(_BYTE*)(a1 + 546) = v5;
    if (v6 != 0 && *(_BYTE*)(v6 + 152) == 3) {
      v7 = *(_DWORD*)(v6 + 156);
      v8 = (v7 & 8) != 0 ? 2 : 3;
      if ((v8 & v7) == 0) {
        if (v5 != 0) {
        LABEL_21:
          v11 = *(unsigned __int8*)(a1 + 288);
          v17 = 0;
          if (v11 == 1) {
            v12 = *(_QWORD*)(a1 + 264);
            v13 = a1 + 264;
            LANES128(a2).n128_u64[0] = 0;
          LABEL_27:
            *(_QWORD*)&a3 = 0;
          LABEL_36:
            (*(void (**)(__int64, long double, long double))(v12 + 24))(
                v13, *(long double*)&a2, a3);
            goto LABEL_37;
          }
          if (*(float*)(a1 + 272) > 0.0) {
            (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264);
            v12 = *(_QWORD*)(a1 + 264);
            v13 = a1 + 264;
            goto LABEL_27;
          }
          if (((*(__int64 (**)(__int64, int*, __int64))(
                   *(_QWORD*)(a1 + 264) + 8LL))(a1 + 264, &v17, a1 + 296) &
               1) == 0) {
            return GameRoutine_14a1520(a1 + 656, 1);
          }
          (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264);
          LODWORD(a3) = v17;
        LABEL_35:
          v12 = *(_QWORD*)(a1 + 264);
          v13 = a1 + 264;
          goto LABEL_36;
        }
      LABEL_23:
        v16 = 1065353216;
        if (*(_BYTE*)(a1 + 288) == 1) {
          v14 = *(_QWORD*)(a1 + 264);
          LANES128(a2).n128_f32[0] = 0x1.0000000000000p+0;
        }
        else {
          if (*(float*)(a1 + 272) <= 0.0) {
            if (((*(__int64 (**)(__int64, int*, __int64))(
                     *(_QWORD*)(a1 + 264) + 8LL))(a1 + 264, &v16, a1 + 296) &
                 1) == 0) {
              return GameRoutine_14a1520(a1 + 656, 1);
            }
            (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264);
            LODWORD(a3) = v16;
            goto LABEL_35;
          }
          (*(void (**)(__int64))(*(_QWORD*)(a1 + 264) + 16LL))(a1 + 264);
          v14 = *(_QWORD*)(a1 + 264);
        }
        LODWORD(a3) = COERCE_UNSIGNED_INT((float)(1.0));
        (*(void (**)(__int64, long double, long double))(v14 + 24))(
            a1 + 264, *(long double*)&a2, a3);
      LABEL_37:
        *(_QWORD*)(a1 + 272) = 0;
        *(_WORD*)(a1 + 288) = 256;
        *(_WORD*)(a1 + 132) |= 8u;
        return GameRoutine_14a1520(a1 + 656, 1);
      }
    }
    v9 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v10 = game_ProcFadeView_instance_ +
            ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                   480)
             << 6);
      if (*(float*)(v10 + 172) == *(float*)(v10 + 168)) {
        (*(void (**)(unsigned __int64))(*(_QWORD*)(v10 + 160) + 16LL))(v10 +
                                                                       160);
      }
      else {
        a2 = *(__n128*)(v10 + 208);
      }
      if (LANES128(a2).n128_f32[3] != 0x1.0000000000000p+0) {
        v9 = 0;
        if (v5 != 0) {
        LABEL_15:
          if (v9 == 0) {
            UnitActor_81b040(a1 + 112, 0.0);
            return GameRoutine_14a1520(a1 + 656, 1);
          }
          goto LABEL_21;
        }
        goto LABEL_18;
      }
      a2 = ((__n128 (*)(unsigned __int64, float)) *
            (_QWORD*)(*(_QWORD*)(v10 + 160) + 16LL))(v10 + 160,
                                                     LANES128(a2).n128_f32[3]);
      v9 = LANES128(a2).n128_f32[3] == 0x1.0000000000000p+0;
    }
    if (v5 != 0) {
      goto LABEL_15;
    }
  LABEL_18:
    if (v9 == 0) {
      UnitActor_81aee0(a1 + 112, 0.0);
      return GameRoutine_14a1520(a1 + 656, 1);
    }
    goto LABEL_23;
  }
  return GameRoutine_14a1520(a1 + 656, 1);
}

__int64 Troop_1343230(__int64 a1)
{
  __int64 v1;
  __int64 v2;

  if (*(_QWORD*)(a1 + 32) != *(_QWORD*)(a1 + 24)) {
    if ((v1 = *(_QWORD*)(a1 + 96), v2 = *(_QWORD*)(a1 + 552), (v1 | v2) == 0) ||
        v1 == 0 && v2 != 0 && *(_QWORD*)(a1 + 104) == 0 &&
            *(__int16*)(a1 + 642) * *(__int16*)(a1 + 640) *
                    *(__int16*)(a1 + 644) ==
                0 &&
            *(_QWORD*)(v2 + 352) == 0 ||
        (*(_WORD*)(a1 + 544) & 3) != 2) {
      a1 = *(_QWORD*)(a1 + 24);
    }
  }
  return *(_QWORD*)a1;
}

__int64 Troop_13433c0(__int64 a1, __int64 a2)
{
  void (**v2)(__int64, int*);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  unsigned int v44;
  __int64* v45;
  __int64* i;
  __int64 v47;
  __int64 v48;
  int v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  char v54;
  __int64 v55;
  char v56;
  __int64 v57;
  char v58;
  __int64 v59;
  char v60;
  __int64 v61;
  __int16 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int128 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  char v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  int v104;

  v2 = *(void (***)(__int64, int*))a2;
  v104 = 0;
  (*v2)(a2, &v104);
  v5 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v5 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v5) = 24;
  v6 = *(_QWORD*)(a1 + 88);
  if (v6 != 0) {
    v6 = **(_QWORD**)(v6 + 24);
  }
  v7 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v7 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v7) = v6;
  v8 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v8 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v8) = BYTE1(v6);
  v9 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v9 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v9) = BYTE2(v6);
  v10 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v10 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v10) = BYTE3(v6);
  v11 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v11 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v11) = BYTE4(v6);
  v12 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v12) = BYTE5(v6);
  v13 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v13 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v13) = BYTE6(v6);
  v14 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v14 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v14) = HIBYTE(v6);
  v15 = *(_QWORD**)(a1 + 96);
  if (v15 != nullptr) {
    v15 = (_QWORD*)*v15;
  }
  v16 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v16 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v16) = (_BYTE)v15;
  v17 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v17 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v17) = BYTE1(v15);
  v18 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v18 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v18) = BYTE2(v15);
  v19 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v19 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v19) = BYTE3(v15);
  v20 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v20 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v20) = BYTE4(v15);
  v21 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v21 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v21) = BYTE5(v15);
  v22 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v22 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v22) = BYTE6(v15);
  v23 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v23 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v23) = HIBYTE(v15);
  v24 = *(_QWORD**)(a1 + 104);
  if (v24 != nullptr) {
    v24 = (_QWORD*)v24[3];
    if (v24 != nullptr) {
      v24 = (_QWORD*)*v24;
    }
  }
  v25 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v25 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v25) = (_BYTE)v24;
  v26 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v26 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v26) = BYTE1(v24);
  v27 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v27 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v27) = BYTE2(v24);
  v28 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v28 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v28) = BYTE3(v24);
  v29 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v29 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v29) = BYTE4(v24);
  v30 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v30 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v30) = BYTE5(v24);
  v31 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v31 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v31) = BYTE6(v24);
  v32 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v32 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v32) = HIBYTE(v24);
  v33 = *(int*)(a2 + 20);
  v34 = *(_DWORD*)(*(_QWORD*)a1 + 96LL);
  *(_DWORD*)(a2 + 20) = v33 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v33) = v34;
  v35 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v35 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v35) = BYTE1(v34);
  v36 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v36 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v36) = BYTE2(v34);
  v37 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v37 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v37) = HIBYTE(v34);
  v38 = *(_QWORD*)(a1 + 8);
  if (v38 != 0) {
    LODWORD(v38) = *(_DWORD*)(v38 + 96);
  }
  v39 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v39 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v39) = v38;
  v40 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v40 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v40) = BYTE1(v38);
  v41 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v41 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v41) = BYTE2(v38);
  v42 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v42 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v42) = BYTE3(v38);
  v43 = *(int*)(a2 + 20);
  v44 = (unsigned int)(*(_DWORD*)(a1 + 32) - *(_DWORD*)(a1 + 24)) >> 3;
  *(_DWORD*)(a2 + 20) = v43 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v43) = v44;
  v45 = *(__int64**)(a1 + 24);
  for (i = *(__int64**)(a1 + 32); v45 != i;
       *(_BYTE*)(*(_QWORD*)(a2 + 8) + v52) = HIBYTE(v49)) {
    v47 = *(int*)(a2 + 20);
    v48 = *v45++;
    v49 = *(_DWORD*)(v48 + 96);
    *(_DWORD*)(a2 + 20) = v47 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v47) = v49;
    v50 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v50 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v50) = BYTE1(v49);
    v51 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v51 + 1;
    *(_BYTE*)(*(_QWORD*)(a2 + 8) + v51) = BYTE2(v49);
    v52 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v52 + 1;
  }
  v53 = *(int*)(a2 + 20);
  v54 = *(_DWORD*)(a1 + 80);
  *(_DWORD*)(a2 + 20) = v53 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v53) = v54;
  v55 = *(int*)(a2 + 20);
  v56 = *(_BYTE*)(a1 + 672);
  *(_DWORD*)(a2 + 20) = v55 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v55) = v56;
  v57 = *(int*)(a2 + 20);
  v58 = *(_BYTE*)(a1 + 673);
  *(_DWORD*)(a2 + 20) = v57 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v57) = v58;
  v59 = *(int*)(a2 + 20);
  v60 = *(_DWORD*)(a1 + 84);
  *(_DWORD*)(a2 + 20) = v59 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v59) = v60;
  v61 = *(int*)(a2 + 20);
  v62 = *(_WORD*)(a1 + 544);
  *(_DWORD*)(a2 + 20) = v61 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v61) = v62;
  v63 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v63 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v63) = HIBYTE(v62);
  GameRoutine_65f3d0(a2, *(_QWORD*)(a1 + 552));
  TroopMgr_996180(a1 + 560, a2);
  TroopMgr_996180(a1 + 600, a2);
  v64 = ((__int64)*(__int16*)(a1 + 642) << 24) +
        ((__int64)*(__int16*)(a1 + 640) << 32) +
        ((__int64)*(__int16*)(a1 + 644) << 18) +
        ((__int64)*(__int16*)(a1 + 646) << 12) +
        ((__int64)*(__int16*)(a1 + 648) << 6) + *(__int16*)(a1 + 650);
  v65 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v65 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v65) = v64;
  v66 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v66 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v66) = BYTE1(v64);
  v67 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v67 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v67) = BYTE2(v64);
  v68 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v68 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v68) = BYTE3(v64);
  v69 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v69 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v69) = BYTE4(v64);
  v70 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v70 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v70) = BYTE5(v64);
  v71 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v71 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v71) = BYTE6(v64);
  v72 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v72 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v72) = HIBYTE(v64);
  v73 = *(int*)(a2 + 20);
  LOBYTE(v64) = *(_BYTE*)(a1 + 512);
  *(_DWORD*)(a2 + 20) = v73 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v73) = v64;
  v74 = *(int*)(a2 + 20);
  v75 = *(_OWORD*)(a1 + 64);
  *(_DWORD*)(a2 + 20) = v74 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v74) = v75;
  v76 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v76 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v76) = BYTE1(v75);
  v77 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v77 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v77) = BYTE2(v75);
  v78 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v78 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v78) = BYTE3(v75);
  v79 = *(int*)(a2 + 20);
  LODWORD(v78) = *(_DWORD*)(a1 + 68);
  *(_DWORD*)(a2 + 20) = v79 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v79) = v78;
  v80 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v80 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v80) = BYTE1(v78);
  v81 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v81 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v81) = BYTE2(v78);
  v82 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v82 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v82) = BYTE3(v78);
  v83 = *(int*)(a2 + 20);
  LODWORD(v78) = *(_DWORD*)(a1 + 72);
  *(_DWORD*)(a2 + 20) = v83 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v83) = v78;
  v84 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v84 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v84) = BYTE1(v78);
  v85 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v85 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v85) = BYTE2(v78);
  v86 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v86 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v86) = BYTE3(v78);
  v87 = *(_QWORD*)(a1 + 16);
  if (v87 != 0) {
    LODWORD(v87) = *(_DWORD*)(v87 + 96);
  }
  v88 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v88 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v88) = v87;
  v89 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v89 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v89) = BYTE1(v87);
  v90 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v90 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v90) = BYTE2(v87);
  v91 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v91 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v91) = BYTE3(v87);
  v92 = *(int*)(a2 + 20);
  v93 = *(_BYTE*)(a1 + 546);
  *(_DWORD*)(a2 + 20) = v92 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v92) = v93;
  v94 = ((__int64)*(__int16*)(a1 + 530) << 24) +
        ((__int64)*(__int16*)(a1 + 528) << 32) +
        ((__int64)*(__int16*)(a1 + 532) << 18) +
        ((__int64)*(__int16*)(a1 + 534) << 12) +
        ((__int64)*(__int16*)(a1 + 536) << 6) + *(__int16*)(a1 + 538);
  v95 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v95 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v95) = v94;
  v96 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v96 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v96) = BYTE1(v94);
  v97 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v97 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v97) = BYTE2(v94);
  v98 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v98 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v98) = BYTE3(v94);
  v99 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v99 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v99) = BYTE4(v94);
  v100 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v100 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v100) = BYTE5(v94);
  v101 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v101 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v101) = BYTE6(v94);
  v102 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v102 + 1;
  *(_BYTE*)(*(_QWORD*)(a2 + 8) + v102) = HIBYTE(v94);
  return (*(__int64 (**)(__int64, _QWORD))(*(_QWORD*)a2 + 8LL))(a2, 0);
}

__int64 Troop_1343c40(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  void (***v5)(_QWORD);
  void (***v6)(_QWORD);
  void (***v7)(_QWORD);
  void (***v8)(_QWORD);
  void (***v9)(_QWORD);
  void (***v10)(_QWORD);
  int v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  unsigned int v23;
  __int64 v24;
  unsigned __int64 v25;
  _QWORD* v26;
  _QWORD* v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  int v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  bool v43;
  unsigned __int64 v44;
  unsigned __int64 v45;
  int v46;
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
  unsigned __int64 v59;
  unsigned __int64 v60;
  unsigned __int64 v62;
  unsigned __int64 v63;
  _QWORD* v64;
  _QWORD* v65;
  unsigned __int64 v66;
  __int64 v67;
  _QWORD* v68;
  _QWORD* v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  unsigned __int64 v76;
  unsigned __int64 v77;
  unsigned __int64 v78;
  __int64 v79;
  unsigned __int64 v80;
  __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  unsigned __int64 v85;
  _QWORD* v86;
  __int64 v87;
  unsigned __int64 v88;
  __int64 v89;
  int v90;
  __int64 v91;
  int v92;
  __int64 v93;
  _DWORD* v94;
  __int64 v95;
  __int64 v96;
  int v97;
  char v98;
  __int64 v99;
  __int64* v100;
  unsigned __int64 v101;
  __int64* v102;
  __int64 v103;
  __int64 v104;
  __int64 v105;
  int v106;
  __int64 v107;
  int v108;
  __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  _QWORD* v119;
  _QWORD* v120;
  unsigned __int64 v121;
  __int64 v122;
  int v123;
  __int64 v124;
  __int64 v125;
  int v126;
  __int64 v127;
  int v128;
  _DWORD* v129;
  __int64 v130;
  __int64 v131;
  int v132;
  __int64 v133;
  __int64 v134;
  __int64 v135;
  int v136;
  unsigned __int64 v137;
  __int64 v138;
  __int64 v139;
  int v140;
  int v141;
  int v142;
  __int64 v143;
  unsigned __int64 v144;
  __int64 v145;
  unsigned __int64 v146;
  unsigned __int64 v147;
  __int64 v148;
  __int64 v149;
  __int64 v150;
  __int64 v151;
  unsigned __int64 v152;
  __int64 v153;
  __int64 v154;
  __int64 v155;
  __int64 v156;
  __int64 v157;
  __int64 v158;
  __int64 v159;
  int v160;
  __int64 v161;
  int v162;
  __int64 v163;
  unsigned int v164;
  int v165;
  int v166;
  __int64 v167;
  __int64 v168;
  __int16 v169;
  __int16 v170;
  __int64 v171;
  __int64 v172;
  __int64 v173;
  unsigned __int8 v174;
  int v175;
  unsigned int v176;
  __int16 v177;
  __int16 v178;
  unsigned int v179;
  __int64 v180;
  int v181;
  __int64 v182;
  __int64 v183;
  int v184;
  int v185;
  int v186;
  int v187;
  int v188;
  int v189;
  int v190;
  int v191;
  int v192;
  int v193;
  int v194;
  __int128 v195;
  __int64 v196;
  __int64 v197;
  int v198;
  int v199;
  int v200;
  __int64 v201;
  __int64 v202;
  int v203;
  bool v204;
  float v205;
  __int64 v206;
  int v207;
  __int16 v208;
  __int16 v209;
  __int64 v210;
  int v211;
  __int16 v212;
  __int64 v213;
  unsigned __int64 v214;
  unsigned int v216;
  _QWORD v217[2];
  struct {
    __int64 v218;
    char* v219;
  } v218_;

  v2 = *(_QWORD*)a2;
  LODWORD(v218_.v218) = 0;
  (*(void (**)(__int64, __int64*))(v2 + 16))(a2, &v218_.v218);
  v5 = *(void (****)(_QWORD))(a1 + 568);
  *(_QWORD*)a1 = 0;
  *(_QWORD*)(a1 + 8) = 0;
  *(_QWORD*)(a1 + 96) = 0;
  *(_QWORD*)(a1 + 104) = 0;
  *(_BYTE*)(a1 + 546) = 0;
  *(_QWORD*)(a1 + 80) = 0xFFFFFFFF00000000LL;
  *(_QWORD*)(a1 + 88) = 0;
  v6 = *(void (****)(_QWORD))(a1 + 576);
  if (v5 != v6) {
    v7 = v6 - 278;
    do {
      (**v7)(v7);
      v43 = v7 == v5;
      v7 -= 278;
    } while (!v43);
  }
  *(_QWORD*)(a1 + 576) = v5;
  v8 = *(void (****)(_QWORD))(a1 + 616);
  v9 = *(void (****)(_QWORD))(a1 + 608);
  *(_QWORD*)(a1 + 552) = 0;
  if (v9 != v8) {
    v10 = v8 - 278;
    do {
      (**v10)(v10);
      v43 = v10 == v9;
      v10 -= 278;
    } while (!v43);
  }
  v11 = *(unsigned __int8*)(a1 + 512);
  *(_QWORD*)(a1 + 616) = v9;
  *(_QWORD*)(a1 + 640) = 0;
  *(_DWORD*)(a1 + 648) = 0;
  if (v11 != 0) {
    *(_BYTE*)(a1 + 512) = 0;
  }
  *(_DWORD*)(a1 + 540) = 0;
  *(_WORD*)(a1 + 544) = 0;
  *(_QWORD*)(a1 + 16) = 0;
  v12 = *(int*)(a2 + 20);
  v13 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v12 + 1;
  v14 = *(unsigned __int8*)(v13 + v12);
  *(_DWORD*)(a2 + 20) = v12 + 2;
  v15 = *(unsigned __int8*)(v13 + v12 + 1);
  *(_DWORD*)(a2 + 20) = v12 + 3;
  v16 = v15 | ((unsigned __int64)*(unsigned __int8*)(v13 + v12 + 2) << 8);
  *(_DWORD*)(a2 + 20) = v12 + 4;
  v17 = v16 | ((unsigned __int64)*(unsigned __int8*)(v13 + v12 + 3) << 16);
  *(_DWORD*)(a2 + 20) = v12 + 5;
  v18 = v17 | ((unsigned __int64)*(unsigned __int8*)(v13 + v12 + 4) << 24);
  *(_DWORD*)(a2 + 20) = v12 + 6;
  v19 = v18 | ((unsigned __int64)*(unsigned __int8*)(v13 + v12 + 5) << 32);
  *(_DWORD*)(a2 + 20) = v12 + 7;
  v20 = v19 | ((unsigned __int64)*(unsigned __int8*)(v13 + v12 + 6) << 40);
  *(_DWORD*)(a2 + 20) = v12 + 8;
  v21 = *(unsigned __int8*)(v13 + v12 + 7);
  *(_DWORD*)(a2 + 20) = v12 + 9;
  v22 = v20 | (v21 << 48) |
        ((unsigned __int64)*(unsigned __int8*)(v13 + v12 + 8) << 56);
  if (v22 == 0) {
    goto LABEL_36;
  }
  v23 = 0;
  if (GameData_21fe038 == 0 || GameData_21fe048 == 0) {
    goto LABEL_247;
  }
  v24 = GameData_21fe038 - 1;
  if ((GameData_21fe038 & (GameData_21fe038 - 1)) != 0) {
    v25 = v22;
    if (v22 >= GameData_21fe038) {
      v25 = v22 % GameData_21fe038;
    }
  }
  else {
    v25 = v24 & v22;
  }
  v26 = *(_QWORD**)(GameData_21fe030 + 8 * v25);
  if (v26 == nullptr) {
    goto LABEL_237;
  }
  v27 = (_QWORD*)*v26;
  if (v27 == nullptr) {
    goto LABEL_237;
  }
  if ((GameData_21fe038 & v24) == 0) {
    while (1) {
      v29 = v27[1];
      if (v29 == v22) {
        if (v27[2] == v22) {
          goto LABEL_34;
        }
      }
      else if ((v29 & v24) != v25) {
        goto LABEL_237;
      }
      v27 = (_QWORD*)*v27;
      v23 = 0;
      if (v27 == nullptr) {
        goto LABEL_247;
      }
    }
  }
  while (1) {
    v28 = v27[1];
    if (v28 == v22) {
      break;
    }
    if (v28 >= GameData_21fe038) {
      v28 %= (unsigned __int64)GameData_21fe038;
    }
    if (v28 != v25) {
      goto LABEL_237;
    }
  LABEL_23:
    v27 = (_QWORD*)*v27;
    if (v27 == nullptr) {
      goto LABEL_237;
    }
  }
  if (v27[2] != v22) {
    goto LABEL_23;
  }
LABEL_34:
  v30 = v27[3];
  if (v30 == 0) {
    goto LABEL_237;
  }
  *(_QWORD*)(a1 + 88) = v30;
  *(_QWORD*)(a1 + 96) = *(_QWORD*)(v30 + 40);
LABEL_36:
  if (v14 < 0x18) {
    v46 = *(_DWORD*)(a2 + 20);
    v32 = *(_QWORD*)(a2 + 8);
    if (v14 < 5) {
      goto LABEL_97;
    }
    v47 = v46 + 3LL;
    v48 = v46 + 4LL;
    v49 = v46 + 5LL;
    v50 = v46 + 6LL;
    *(_DWORD*)(a2 + 20) = v46 + 1;
    v51 = *(unsigned __int8*)(v32 + v46);
    *(_DWORD*)(a2 + 20) = v46 + 2;
    v52 = v46 + 7LL;
    v53 = *(unsigned __int8*)(v32 + v46 + 1LL);
    *(_DWORD*)(a2 + 20) = v47;
    v54 = *(unsigned __int8*)(v32 + v46 + 2LL);
    *(_DWORD*)(a2 + 20) = v48;
    v55 = *(unsigned __int8*)(v32 + v47);
    *(_DWORD*)(a2 + 20) = v49;
    v56 = *(unsigned __int8*)(v32 + v48);
    *(_DWORD*)(a2 + 20) = v50;
    v57 = *(unsigned __int8*)(v32 + v49);
    *(_DWORD*)(a2 + 20) = v52;
    v58 = *(unsigned __int8*)(v32 + v50);
    *(_DWORD*)(a2 + 20) = v46 + 8;
    v59 = v51 | (v53 << 8) | (v54 << 16) | (v55 << 24) | (v56 << 32) |
          (v57 << 40) | (v58 << 48) |
          ((unsigned __int64)*(unsigned __int8*)(v32 + v52) << 56);
    if (v59 != 0) {
      v60 = *(_QWORD*)(GameData_21c9f00 + 96);
      if (v60 != 0 && *(_QWORD*)(GameData_21c9f00 + 112) != 0) {
        v62 = v60 - 1;
        if ((v60 & (v60 - 1)) != 0) {
          v63 = v59;
          if (v59 >= v60) {
            v63 = v59 % v60;
          }
        }
        else {
          v63 = v62 & v59;
        }
        v68 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f00 + 88) + 8 * v63);
        if (v68 != nullptr) {
          v69 = (_QWORD*)*v68;
          if (v69 != nullptr) {
            if ((v60 & v62) == 0) {
              while (1) {
                v72 = v69[1];
                if (v72 == v59) {
                  if (v69[2] == v59) {
                    goto LABEL_239;
                  }
                }
                else if ((v72 & v62) != v63) {
                  goto LABEL_87;
                }
                v69 = (_QWORD*)*v69;
                v71 = 0;
                if (v69 == nullptr) {
                  goto LABEL_88;
                }
              }
            }
            do {
              v70 = v69[1];
              if (v70 == v59) {
                if (v69[2] == v59) {
                LABEL_239:
                  v71 = v69[3];
                  goto LABEL_88;
                }
              }
              else {
                if (v70 >= v60) {
                  v70 %= v60;
                }
                if (v70 != v63) {
                  break;
                }
              }
              v69 = (_QWORD*)*v69;
            } while (v69 != nullptr);
          }
        }
      }
    }
  LABEL_87:
    v71 = 0;
    goto LABEL_88;
  }
  v31 = *(int*)(a2 + 20);
  v32 = *(_QWORD*)(a2 + 8);
  *(_DWORD*)(a2 + 20) = v31 + 1;
  v33 = *(unsigned __int8*)(v32 + v31);
  *(_DWORD*)(a2 + 20) = v31 + 2;
  v34 = v33 | ((unsigned __int64)*(unsigned __int8*)(v32 + v31 + 1) << 8);
  *(_DWORD*)(a2 + 20) = v31 + 3;
  v35 = v34 | ((unsigned __int64)*(unsigned __int8*)(v32 + v31 + 2) << 16);
  *(_DWORD*)(a2 + 20) = v31 + 4;
  v36 = v35 | ((unsigned __int64)*(unsigned __int8*)(v32 + v31 + 3) << 24);
  *(_DWORD*)(a2 + 20) = v31 + 5;
  v37 = v36 | ((unsigned __int64)*(unsigned __int8*)(v32 + v31 + 4) << 32);
  *(_DWORD*)(a2 + 20) = v31 + 6;
  v38 = v37 | ((unsigned __int64)*(unsigned __int8*)(v32 + v31 + 5) << 40);
  *(_DWORD*)(a2 + 20) = v31 + 7;
  v39 = v38 | ((unsigned __int64)*(unsigned __int8*)(v32 + v31 + 6) << 48);
  v40 = v31 + 8;
  *(_DWORD*)(a2 + 20) = v31 + 8;
  v41 = v39 | ((unsigned __int64)*(unsigned __int8*)(v32 + v31 + 7) << 56);
  if (v41 == 0) {
  LABEL_90:
    v73 = v40;
    v74 = v40 + 8;
    *(_DWORD*)(a2 + 20) = v73 + 1;
    v75 = *(unsigned __int8*)(v32 + v73);
    *(_DWORD*)(a2 + 20) = v73 + 2;
    v76 = v75 | ((unsigned __int64)*(unsigned __int8*)(v32 + v73 + 1) << 8);
    *(_DWORD*)(a2 + 20) = v73 + 3;
    v77 = v76 | ((unsigned __int64)*(unsigned __int8*)(v32 + v73 + 2) << 16);
    *(_DWORD*)(a2 + 20) = v73 + 4;
    v78 = v77 | ((unsigned __int64)*(unsigned __int8*)(v32 + v73 + 3) << 24);
    v79 = v73 + 5;
    *(_DWORD*)(a2 + 20) = v73 + 5;
    v80 = v78 | ((unsigned __int64)*(unsigned __int8*)(v32 + v73 + 4) << 32);
    v81 = v73 + 6;
    v73 += 7;
    *(_DWORD*)(a2 + 20) = v81;
    v82 = *(unsigned __int8*)(v32 + v79);
    *(_DWORD*)(a2 + 20) = v73;
    v83 = v80 | (v82 << 40);
    v84 = *(unsigned __int8*)(v32 + v81);
    *(_DWORD*)(a2 + 20) = v74;
    v85 = v83 | (v84 << 48) |
          ((unsigned __int64)*(unsigned __int8*)(v32 + v73) << 56);
    if (v85 != 0) {
      v86 = nullptr;
      if (GameData_21f2520 != 0 && GameData_21f2530 != 0) {
        v87 = GameData_21f2520 - 1;
        if ((GameData_21f2520 & (GameData_21f2520 - 1)) != 0) {
          v88 = v85;
          if (v85 >= GameData_21f2520) {
            v88 = v85 % GameData_21f2520;
          }
        }
        else {
          v88 = v87 & v85;
        }
        v119 = *(_QWORD**)(GameData_21f2518 + 8 * v88);
        if (v119 == nullptr || (v120 = (_QWORD*)*v119) == nullptr) {
        LABEL_143:
          v86 = nullptr;
          goto LABEL_144;
        }
        if ((GameData_21f2520 & v87) == 0) {
          while (1) {
            v122 = v120[1];
            if (v122 == v85) {
              if (v120[2] == v85) {
                goto LABEL_238;
              }
            }
            else if ((v122 & v87) != v88) {
              goto LABEL_143;
            }
            v120 = (_QWORD*)*v120;
            if (v120 == nullptr) {
              goto LABEL_143;
            }
          }
        }
        while (1) {
          v121 = v120[1];
          if (v121 == v85) {
            if (v120[2] == v85) {
            LABEL_238:
              v86 = v120 + 3;
              break;
            }
          }
          else {
            if (v121 >= GameData_21f2520) {
              v121 %= (unsigned __int64)GameData_21f2520;
            }
            if (v121 != v88) {
              goto LABEL_143;
            }
          }
          v120 = (_QWORD*)*v120;
          if (v120 == nullptr) {
            goto LABEL_143;
          }
        }
      }
    LABEL_144:
      *(_QWORD*)(a1 + 104) = v86;
      v74 = *(_DWORD*)(a2 + 20);
      v32 = *(_QWORD*)(a2 + 8);
    }
    goto LABEL_145;
  }
  v42 = *(_QWORD*)(GameData_21c9f00 + 96);
  v43 = v42 == 0 || *(_QWORD*)(GameData_21c9f00 + 112) == 0;
  if (v43) {
    goto LABEL_237;
  }
  v44 = v42 - 1;
  if ((v42 & (v42 - 1)) != 0) {
    v45 = v41;
    if (v41 >= v42) {
      v45 = v41 % v42;
    }
  }
  else {
    v45 = v44 & v41;
  }
  v64 = *(_QWORD**)(*(_QWORD*)(GameData_21c9f00 + 88) + 8 * v45);
  if (v64 == nullptr || (v65 = (_QWORD*)*v64) == nullptr) {
  LABEL_237:
    v23 = 0;
    goto LABEL_247;
  }
  if ((v42 & v44) == 0) {
    while (1) {
      v67 = v65[1];
      if (v67 == v41) {
        if (v65[2] == v41) {
          goto LABEL_236;
        }
      }
      else if ((v67 & v44) != v45) {
        goto LABEL_237;
      }
      v65 = (_QWORD*)*v65;
      v23 = 0;
      if (v65 == nullptr) {
        goto LABEL_247;
      }
    }
  }
  while (1) {
    v66 = v65[1];
    if (v66 == v41) {
      break;
    }
    if (v66 >= v42) {
      v66 %= v42;
    }
    if (v66 != v45) {
      goto LABEL_237;
    }
  LABEL_60:
    v65 = (_QWORD*)*v65;
    v23 = 0;
    if (v65 == nullptr) {
      goto LABEL_247;
    }
  }
  if (v65[2] != v41) {
    goto LABEL_60;
  }
LABEL_236:
  v71 = v65[3];
  if (v71 == 0) {
    goto LABEL_237;
  }
LABEL_88:
  *(_QWORD*)(a1 + 96) = v71;
  if (v14 >= 0xE) {
    v40 = *(_DWORD*)(a2 + 20);
    v32 = *(_QWORD*)(a2 + 8);
    goto LABEL_90;
  }
  v74 = *(_DWORD*)(a2 + 20);
  v32 = *(_QWORD*)(a2 + 8);
  v46 = v74;
  if (v14 >= 7) {
  LABEL_145:
    v123 = v74 + 4;
    v218_.v218 = 0;
    v218_.v219 = &GameData_1a9f09e;
    v124 = v74 + 1LL;
    v125 = v74 + 2LL;
    *(_DWORD*)(a2 + 20) = v124;
    v126 = *(unsigned __int8*)(v32 + v74);
    *(_DWORD*)(a2 + 20) = v125;
    v127 = v74 + 3LL;
    LODWORD(v124) = *(unsigned __int8*)(v32 + v124);
    *(_DWORD*)(a2 + 20) = v127;
    LODWORD(v124) = v126 | ((_DWORD)v124 << 8);
    v128 = *(unsigned __int8*)(v32 + v125);
    *(_DWORD*)(a2 + 20) = v74 + 4;
    v218_.v218 = (unsigned int)v124 | (v128 << 16) |
                 (*(unsigned __int8*)(v32 + v127) << 24);
    v129 = (_DWORD*)SpotMgr_132ffa0_alt1((unsigned int*)&v218_.v218);
    if (v129 == nullptr) {
      if ((*(_QWORD*)(a1 + 96) | *(_QWORD*)(a1 + 552)) != 0) {
        goto LABEL_149;
      }
      v129 = game_gmap_SpotMgr_GetCurrentSpot_alt1();
    }
    game_gmap_133f780(a1, v129, 1);
    v123 = *(_DWORD*)(a2 + 20);
    v32 = *(_QWORD*)(a2 + 8);
  LABEL_149:
    v217[0] = 0;
    v217[1] = &GameData_1a9f09e;
    v130 = v123 + 1LL;
    v131 = v123 + 2LL;
    *(_DWORD*)(a2 + 20) = v130;
    v132 = *(unsigned __int8*)(v32 + v123);
    *(_DWORD*)(a2 + 20) = v131;
    v133 = v123 + 3LL;
    LODWORD(v130) = *(unsigned __int8*)(v32 + v130);
    *(_DWORD*)(a2 + 20) = v133;
    LODWORD(v130) =
        v132 | ((_DWORD)v130 << 8) | (*(unsigned __int8*)(v32 + v131) << 16);
    *(_DWORD*)(a2 + 20) = v123 + 4;
    v217[0] = (unsigned int)v130 | (*(unsigned __int8*)(v32 + v133) << 24);
    *(_QWORD*)(a1 + 8) = SpotMgr_132ffa0_alt1((unsigned int*)v217);
    v134 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v134 + 1;
    v135 = *(_QWORD*)(a2 + 8);
    v136 = *(unsigned __int8*)(v135 + v134);
    if (*(_BYTE*)(v135 + v134) != 0) {
      v216 = v14;
      v98 = 0;
      v99 = 0;
      v100 = nullptr;
      v137 = 0;
      while (1) {
        v138 = *(int*)(a2 + 20);
        v139 = *(_QWORD*)(a2 + 8);
        v218_.v219 = &GameData_1a9f09e;
        *(_DWORD*)(a2 + 20) = v138 + 1;
        v140 = *(unsigned __int8*)(v139 + v138);
        *(_DWORD*)(a2 + 20) = v138 + 2;
        v141 = v140 | (*(unsigned __int8*)(v139 + v138 + 1) << 8);
        *(_DWORD*)(a2 + 20) = v138 + 3;
        v142 = *(unsigned __int8*)(v139 + v138 + 2);
        *(_DWORD*)(a2 + 20) = v138 + 4;
        v218_.v218 =
            v141 | (v142 << 16) | (*(unsigned __int8*)(v139 + v138 + 3) << 24);
        v143 = SpotMgr_132ffa0_alt1((unsigned int*)&v218_.v218);
        if (v143 != 0) {
          if ((unsigned __int64)v100 >= v137) {
            v144 = (unsigned __int64)v100 - v99;
            v145 = ((__int64)v100 - v99) >> 3;
            v146 = v145 + 1;
            if ((unsigned __int64)(v145 + 1) >> 61 != 0) {
              goto LABEL_248;
            }
            if ((__int64)(v137 - v99) >> 2 > v146) {
              v146 = (__int64)(v137 - v99) >> 2;
            }
            if (v137 - v99 >= 0x7FFFFFFFFFFFFFF8LL) {
              v147 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v147 = v146;
            }
            if (v147 != 0) {
              if (v147 >> 61 != 0) {
                goto LABEL_249;
              }
              v148 = v143;
              v149 = fw_memory_HeapManager_Allocate_alt1(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v147, 16, 0);
              v143 = v148;
            }
            else {
              v149 = 0;
            }
            v137 = v149 + 8 * v147;
            v150 = v149 + v144 - 8 * v145;
            *(_QWORD*)(v149 + v144) = v143;
            v100 = (__int64*)(v149 + v144 + 8);
            memcpy_alt1(v150, v99, v144);
            if (v99 != 0) {
              v151 = 128;
              if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                  0) {
                v151 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr + v151, v99);
            }
            v99 = v150;
          }
          else {
            *v100++ = v143;
          }
        }
        else {
          v98 = 1;
        }
        if (--v136 == 0) {
          goto LABEL_171;
        }
      }
    }
    goto LABEL_184;
  }
LABEL_97:
  v89 = v46 + 1LL;
  *(_DWORD*)(a2 + 20) = v89;
  v90 = *(unsigned __int8*)(v32 + v46);
  v91 = v46 + 2LL;
  *(_DWORD*)(a2 + 20) = v91;
  v92 = v90 | (*(unsigned __int8*)(v32 + v89) << 8);
  if (v92 != 0) {
    v93 = v32 + v91;
    *(_DWORD*)(a2 + 20) = v91 + v92;
  }
  else {
    v93 = 0;
  }
  v218_.v219 = (char*)v93;
  v218_.v218 = game_HashString_alt1(v93);
  v94 = (_DWORD*)SpotMgr_132ffa0_alt1((unsigned int*)&v218_.v218);
  if (v94 != nullptr) {
    game_gmap_133f780(a1, v94, 1);
  }
  v95 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v95 + 1;
  v96 = *(_QWORD*)(a2 + 8);
  v97 = *(unsigned __int8*)(v96 + v95);
  if (*(_BYTE*)(v96 + v95) != 0) {
    v216 = v14;
    v98 = 0;
    v99 = 0;
    v100 = nullptr;
    v101 = 0;
    v102 = (__int64*)fw_memory_g_heap_manager_ptr;
    do {
      v103 = *(int*)(a2 + 20);
      v104 = *(_QWORD*)(a2 + 8);
      v105 = v103 + 1;
      *(_DWORD*)(a2 + 20) = v103 + 1;
      v106 = *(unsigned __int8*)(v104 + v103);
      v107 = v103 + 2;
      *(_DWORD*)(a2 + 20) = v107;
      v108 = v106 | (*(unsigned __int8*)(v104 + v105) << 8);
      if (v108 != 0) {
        v109 = v104 + v107;
        *(_DWORD*)(a2 + 20) = v107 + v108;
      }
      else {
        v109 = 0;
      }
      v218_.v219 = (char*)v109;
      v218_.v218 = game_HashString_alt1(v109);
      v110 = SpotMgr_132ffa0_alt1((unsigned int*)&v218_.v218);
      if (v110 != 0) {
        if ((unsigned __int64)v100 >= v101) {
          v111 = (unsigned __int64)v100 - v99;
          v112 = ((__int64)v100 - v99) >> 3;
          v113 = v112 + 1;
          if ((unsigned __int64)(v112 + 1) >> 61 != 0) {
            goto LABEL_248;
          }
          if ((__int64)(v101 - v99) >> 2 > v113) {
            v113 = (__int64)(v101 - v99) >> 2;
          }
          if (v101 - v99 >= 0x7FFFFFFFFFFFFFF8LL) {
            v114 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v114 = v113;
          }
          if (v114 != 0) {
            if (v114 >> 61 != 0) {
            LABEL_249:
              GameRoutine_60a210_alt1();
            }
            v115 = v110;
            v116 = fw_memory_HeapManager_Allocate_alt1(*v102, 8 * v114, 16, 0);
            v110 = v115;
          }
          else {
            v116 = 0;
          }
          v101 = v116 + 8 * v114;
          v117 = v116 + v111 - 8 * v112;
          *(_QWORD*)(v116 + v111) = v110;
          v100 = (__int64*)(v116 + v111 + 8);
          memcpy_alt1(v117, v99, v111);
          if (v99 != 0) {
            v118 = 128;
            if (*(_QWORD*)(*v102 + 200) == 0) {
              v118 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*v102 + v118, v99);
          }
          v99 = v117;
        }
        else {
          *v100++ = v110;
        }
      }
      else {
        v98 = 1;
      }
      --v97;
    } while (v97 != 0);
  LABEL_171:
    if ((v98 & 1) != 0 ||
        (v152 = (unsigned __int64)v100 - v99, v100 == (__int64*)v99)) {
      v14 = v216;
      v153 = 0;
      v154 = 0;
    }
    else {
      v14 = v216;
      if ((v152 & 0x8000000000000000LL) != 0) {
      LABEL_248:
        GameRoutine_8875e0_alt1();
      }
      v153 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, (__int64)v100 - v99, 16, 0);
      memcpy_alt1(v153, v99, (unsigned __int64)v100 - v99);
      v154 = v153 + v152;
    }
    GameRoutine_888970_alt1((__int64*)(a1 + 24), v153, v154,
                            (v154 - v153) >> 3);
    if (v153 != 0) {
      v155 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v155 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v155, v153);
    }
    if (v99 != 0) {
      v156 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v156 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v156, v99);
    }
  }
LABEL_184:
  v157 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v157 + 1;
  *(_DWORD*)(a1 + 80) = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v157);
  v158 = *(int*)(a2 + 20);
  if (v14 < 0x17) {
    ++v158;
  }
  *(_DWORD*)(a2 + 20) = v158 + 1;
  *(_BYTE*)(a1 + 672) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v158) != 0;
  v159 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v159 + 1;
  *(_BYTE*)(a1 + 673) = *(_BYTE*)(*(_QWORD*)(a2 + 8) + v159) != 0;
  v160 = *(_DWORD*)(a2 + 20);
  if (v14 <= 0x15) {
    *(_DWORD*)(a2 + 20) = ++v160;
    if (v14 == 0) {
      goto LABEL_246;
    }
  }
  *(_DWORD*)(a2 + 20) = v160 + 1;
  *(_DWORD*)(a1 + 84) = *(char*)(*(_QWORD*)(a2 + 8) + v160);
  if (v14 - 8 <= 0xC) {
    v161 = *(int*)(a2 + 20);
    v162 = v161 + 3;
    v163 = *(_QWORD*)(a2 + 8) + v161;
    *(_DWORD*)(a2 + 20) = v162;
    v164 = *(unsigned __int8*)(v163 + 2);
    if (*(_BYTE*)(v163 + 2) != 0) {
      v165 = v164 & 7;
      if (v164 >= 8) {
        v166 = v164 & 0xF8;
        v162 += 8 * (v166 - 8) + 64;
        do {
          v166 -= 8;
        } while (v166 != 0);
      }
      if (v165 != 0) {
        v162 += 8 * (v165 - 1) + 8;
        do {
          --v165;
        } while (v165 != 0);
      }
      *(_DWORD*)(a2 + 20) = v162;
    }
  }
  if (v14 >= 0x13) {
    v167 = *(int*)(a2 + 20);
    v168 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v167 + 1;
    v169 = *(unsigned __int8*)(v168 + v167);
    *(_DWORD*)(a2 + 20) = v167 + 2;
    v170 = v169 | (*(unsigned __int8*)(v168 + v167 + 1) << 8);
    goto LABEL_201;
  }
  if (v14 >= 0xD) {
    v171 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v171 + 1;
    v170 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v171);
    goto LABEL_201;
  }
  if (v14 >= 0xA) {
    v206 = *(int*)(a2 + 20);
    *(_DWORD*)(a2 + 20) = v206 + 1;
    v207 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v206);
    v208 = *(_WORD*)(a1 + 544);
    if (v207 != 0) {
      if ((v208 & 8) == 0) {
        v209 = v208 | 8;
        goto LABEL_222;
      }
    }
    else if ((v208 & 8) != 0) {
      v209 = v208 & 0xFFF7;
    LABEL_222:
      *(_WORD*)(a1 + 544) = v209;
    }
  }
  if (v14 == 3) {
    v213 = a1 + 560;
    *(_DWORD*)(a2 + 20) += 4;
    goto LABEL_229;
  }
  if (v14 != 12) {
    if (v14 > 5) {
      goto LABEL_202;
    }
    if (v14 < 2) {
      goto LABEL_246;
    }
    GameRoutine_9962a0_alt1(a1 + 560, (__int64*)a2);
    if (v14 < 4) {
      goto LABEL_246;
    }
    v213 = a1 + 600;
  LABEL_229:
    GameRoutine_9962a0_alt1(v213, (__int64*)a2);
    goto LABEL_246;
  }
  v210 = *(int*)(a2 + 20);
  *(_DWORD*)(a2 + 20) = v210 + 1;
  v211 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v210);
  v212 = *(_WORD*)(a1 + 544);
  if (v211 != 0) {
    if ((v212 & 4) == 0) {
      v170 = v212 | 4;
      goto LABEL_201;
    }
  }
  else if ((v212 & 4) != 0) {
    v170 = v212 & 0xFFFB;
  LABEL_201:
    *(_WORD*)(a1 + 544) = v170;
  }
LABEL_202:
  *(_QWORD*)(a1 + 552) = GameRoutine_6e5dc0_alt1(a2);
  GameRoutine_9962a0_alt1(a1 + 560, (__int64*)a2);
  GameRoutine_9962a0_alt1(a1 + 600, (__int64*)a2);
  if (v14 >= 9) {
    v172 = *(int*)(a2 + 20);
    v173 = *(_QWORD*)(a2 + 8);
    *(_DWORD*)(a2 + 20) = v172 + 1;
    v174 = *(_BYTE*)(v173 + v172);
    *(_DWORD*)(a2 + 20) = v172 + 2;
    v175 = *(unsigned __int8*)(v173 + v172 + 1);
    *(_DWORD*)(a2 + 20) = v172 + 3;
    v176 = *(unsigned __int8*)(v173 + v172 + 2);
    *(_DWORD*)(a2 + 20) = v172 + 4;
    v177 = *(unsigned __int8*)(v173 + v172 + 3);
    *(_DWORD*)(a2 + 20) = v172 + 5;
    v178 = *(unsigned __int8*)(v173 + v172 + 4);
    *(_DWORD*)(a2 + 20) = v172 + 6;
    LOWORD(v173) = *(unsigned __int8*)(v173 + v172 + 5);
    *(_DWORD*)(a2 + 20) = v172 + 8;
    v179 = v174 | ((unsigned __int8)v175 << 8);
    *(_WORD*)(a1 + 644) = v176 >> 2;
    *(_WORD*)(a1 + 642) = v177;
    *(_WORD*)(a1 + 646) = (((v175 << 8) | (v176 << 16)) >> 12) & 0x3F;
    *(_WORD*)(a1 + 648) = (v179 >> 6) & 0x3F;
    *(_WORD*)(a1 + 640) = v178 | ((_WORD)v173 << 8);
    *(_WORD*)(a1 + 650) = v179 & 0x3F;
    if (v14 >= 0xB) {
      v180 = *(int*)(a2 + 20);
      *(_DWORD*)(a2 + 20) = v180 + 1;
      v181 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v180);
      if (*(unsigned __int8*)(a1 + 512) != v181) {
        *(_BYTE*)(a1 + 512) = v181;
      }
      if (v14 >= 0xF) {
        v182 = *(int*)(a2 + 20);
        v183 = *(_QWORD*)(a2 + 8);
        *(_DWORD*)(a2 + 20) = v182 + 1;
        v184 = *(unsigned __int8*)(v183 + v182);
        *(_DWORD*)(a2 + 20) = v182 + 2;
        v185 = v184 | (*(unsigned __int8*)(v183 + v182 + 1) << 8);
        *(_DWORD*)(a2 + 20) = v182 + 3;
        v186 = v185 | (*(unsigned __int8*)(v183 + v182 + 2) << 16);
        *(_DWORD*)(a2 + 20) = v182 + 4;
        v187 = v186 | (*(unsigned __int8*)(v183 + v182 + 3) << 24);
        *(_DWORD*)(a2 + 20) = v182 + 5;
        v188 = *(unsigned __int8*)(v183 + v182 + 4);
        *(_DWORD*)(a2 + 20) = v182 + 6;
        v189 = v188 | (*(unsigned __int8*)(v183 + v182 + 5) << 8);
        *(_DWORD*)(a2 + 20) = v182 + 7;
        v190 = v189 | (*(unsigned __int8*)(v183 + v182 + 6) << 16);
        *(_DWORD*)(a2 + 20) = v182 + 8;
        v191 = v190 | (*(unsigned __int8*)(v183 + v182 + 7) << 24);
        *(_DWORD*)(a2 + 20) = v182 + 9;
        v192 = *(unsigned __int8*)(v183 + v182 + 8);
        *(_DWORD*)(a2 + 20) = v182 + 10;
        v193 = v192 | (*(unsigned __int8*)(v183 + v182 + 9) << 8);
        *(_DWORD*)(a2 + 20) = v182 + 11;
        v194 = *(unsigned __int8*)(v183 + v182 + 10);
        *(_DWORD*)(a2 + 20) = v182 + 12;
        LODWORD(v182) = *(unsigned __int8*)(v183 + v182 + 11);
        *(_DWORD*)(a1 + 64) = v187;
        *(_DWORD*)(a1 + 68) = v191;
        v195 = *(_OWORD*)(a1 + 64);
        *((_QWORD*)&v195 + 1) =
            v193 | (unsigned int)(v194 << 16) | ((_DWORD)v182 << 24);
        *(_OWORD*)(a1 + 64) = v195;
        if (v14 != 15) {
          v196 = *(_QWORD*)(a2 + 8);
          v218_.v219 = &GameData_1a9f09e;
          v197 = *(int*)(a2 + 20);
          *(_DWORD*)(a2 + 20) = v197 + 1;
          v198 = *(unsigned __int8*)(v196 + v197);
          *(_DWORD*)(a2 + 20) = v197 + 2;
          v199 = v198 | (*(unsigned __int8*)(v196 + v197 + 1) << 8);
          *(_DWORD*)(a2 + 20) = v197 + 3;
          v200 = *(unsigned __int8*)(v196 + v197 + 2);
          *(_DWORD*)(a2 + 20) = v197 + 4;
          v218_.v218 = v199 | (v200 << 16) |
                       (*(unsigned __int8*)(v196 + v197 + 3) << 24);
          v201 = SpotMgr_132ffa0_alt1((unsigned int*)&v218_.v218);
          if (v201 != 0) {
            *(_QWORD*)(a1 + 16) = v201;
          }
          if (v14 - 17 <= 2) {
            ++*(_DWORD*)(a2 + 20);
          }
          if (v14 >= 0x12) {
            v202 = *(int*)(a2 + 20);
            *(_DWORD*)(a2 + 20) = v202 + 1;
            v203 = *(unsigned __int8*)(*(_QWORD*)(a2 + 8) + v202);
            *(_BYTE*)(a1 + 546) = v203;
            v204 = game_8680c0();
            if (v203 != 0) {
              if (v204) {
                v205 = 0x0.0p+0f;
                goto LABEL_242;
              }
              UnitActor_81b040_alt1(a1 + 112, 0x0.0p+0f);
            }
            else if (v204) {
              v205 = 0x1.0000000000000p+0f;
            LABEL_242:
              UnitActor_81ae00_alt1(a1 + 112, v205);
            }
            else {
              UnitActor_81aee0_alt1(a1 + 112, 0x0.0p+0f);
            }
            v214 = GameRoutine_65f710_alt1(a2);
            *(_WORD*)(a1 + 528) = WORD2(v214);
            *(_WORD*)(a1 + 530) = BYTE3(v214);
            *(_WORD*)(a1 + 532) = ((unsigned int)v214 >> 18) & 0x3F;
            *(_WORD*)(a1 + 534) = ((unsigned int)v214 >> 12) & 0x3F;
            *(_WORD*)(a1 + 536) = ((unsigned int)v214 >> 6) & 0x3F;
            *(_WORD*)(a1 + 538) = v214 & 0x3F;
          }
        }
      }
    }
  }
LABEL_246:
  v23 = 1;
LABEL_247:
  (*(void (**)(__int64, _QWORD))(*(_QWORD*)a2 + 24LL))(a2, 0);
  return v23;
}

__int64 game_gmap_Troop_TryChangeCorpsLeader_lambda0_Invoke(__int64 result,
                                                            __int64* a2)
{
  __int64 v2;
  int v3;

  v2 = *a2;
  v3 = *(_DWORD*)(*a2 + 416);
  if ((v3 & 8) != 0) {
    *(_DWORD*)(v2 + 416) = v3 & 0xFFF7FFFF;
  }
  else {
    *(_DWORD*)(v2 + 416) =
        v3 & 0xFFF7FFF7 | (**(unsigned __int8**)(result + 8) << 19);
    **(_BYTE**)(result + 8) = 0;
  }
  return result;
}

__int64 game_gmap_Troop_HasPerson_lambda0_Invoke(__int64 result, __int64 a2)
{
  if (*(_QWORD*)(*(_QWORD*)a2 + 392LL) == *(_QWORD*)(result + 16)) {
    **(_BYTE**)(result + 8) = 1;
  }
  return result;
}

void game_gmap_Troop_OnEnterGmap_lambda0_Invoke(__int64 a1, __int64 a2)
{
  int v2;

  v2 = *(_DWORD*)(*(_QWORD*)a2 + 416LL);
  if ((v2 & 0x1000) != 0) {
    *(_DWORD*)(*(_QWORD*)a2 + 416LL) = v2 & 0xFFFFEFFF;
  }
}

void game_gmap_Troop_GetAmong_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64* v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  signed __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28[2];
  struct {
    __int64 v29[2];
    char v30;
    char gap33_[15];
    __int64 v31;
  } v29_;

  v2 = *a2;
  v3 = *(_QWORD*)(a1 + 8);
  v29_.v29[0] = 0;
  v29_.v29[1] = v2;
  if ((unsigned __int8)GameSituation_906440(game_GameModeData_instance_ + 136,
                                            v29_.v29) != 3) {
    if (v2 != 0) {
      v5 = *(_QWORD*)(GameData_21ca310 + 56);
      if (v5 != 0) {
        v6 = 250;
        while (1) {
          v7 = *(_QWORD*)(v5 + 440);
          if (v7 != 0 && *(_BYTE*)(v7 + 16) != 9 &&
              *(_QWORD*)(v5 + 392) == v2) {
            goto LABEL_25;
          }
          v8 = *(_QWORD*)(v5 + 2664);
          if (v8 != 0 && *(_BYTE*)(v8 + 16) != 9 &&
              *(_QWORD*)(v5 + 2616) == v2) {
            if ((*(_BYTE*)(v5 + 2640) & 8) == 0) {
              goto LABEL_29;
            }
            return;
          }
          v9 = *(_QWORD*)(v5 + 4888);
          if (v9 != 0 && *(_BYTE*)(v9 + 16) != 9 &&
              *(_QWORD*)(v5 + 4840) == v2) {
            v5 += 4448;
          LABEL_25:
            if ((*(_BYTE*)(v5 + 416) & 8) != 0) {
              return;
            }
            goto LABEL_29;
          }
          v10 = *(_QWORD*)(v5 + 7112);
          if (v10 != 0 && *(_BYTE*)(v10 + 16) != 9 &&
              *(_QWORD*)(v5 + 7064) == v2) {
            break;
          }
          v11 = *(_QWORD*)(v5 + 9336);
          if (v11 != 0 && *(_BYTE*)(v11 + 16) != 9 &&
              *(_QWORD*)(v5 + 9288) == v2) {
            v12 = 8896;
            goto LABEL_28;
          }
          v5 += 11120;
          v6 -= 5;
          if (v6 == 0) {
            goto LABEL_29;
          }
        }
        v12 = 6672;
      LABEL_28:
        if ((*(_BYTE*)(v5 + v12 + 416) & 8) != 0) {
          return;
        }
      }
    }
  LABEL_29:
    v28[0] = 0;
    v28[1] = v2;
    GameSituation_906320_alt1((void*)(v29_.v29),
                              game_GameModeData_instance_ + 136, v28);
    if (v29_.v30 != 0 && v29_.v31 != 0) {
      v13 = GameRoutine_9010a0(*(_QWORD**)(v29_.v31 + 88));
      if (v13 != nullptr && v13[3] == *(_QWORD*)(v3 + 552)) {
        v14 = *(__int64**)(a1 + 16);
        v16 = (__int64*)v14[1];
        v15 = v14[2];
        if ((unsigned __int64)v16 >= v15) {
          v18 = *v14;
          v19 = (signed __int64)v16 - *v14;
          v20 = (v19 >> 3) + 1;
          if (v20 >> 61 != 0) {
            GameRoutine_688200();
          }
          v21 = v15 - v18;
          v22 = fw_memory_g_heap_manager_ptr;
          if (v21 >> 2 > v20) {
            v20 = v21 >> 2;
          }
          if ((unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFF8LL) {
            v23 = 0x1FFFFFFFFFFFFFFFLL;
          }
          else {
            v23 = v20;
          }
          if (v23 != 0) {
            if (v23 >> 61 != 0) {
              GameRoutine_60a210_alt1();
            }
            v24 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v23, 16, 0);
          }
          else {
            v24 = 0;
          }
          v25 = v24 + 8 * v23;
          v26 = v24 + v19 - 8 * (v19 >> 3);
          *(_QWORD*)(v24 + v19) = v2;
          v17 = v24 + v19 + 8;
          memcpy_alt1(v26, v18, v19);
          *v14 = v26;
          v14[1] = v17;
          v14[2] = v25;
          if (v18 != 0) {
            v27 = 128;
            if (*(_QWORD*)(*(_QWORD*)v22 + 200LL) == 0) {
              v27 = 56;
            }
            nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v22 + v27, v18);
          }
        }
        else {
          *v16 = v2;
          v17 = (__int64)(v16 + 1);
        }
        v14[1] = v17;
      }
    }
  }
}

__int64 game_gmap_Troop_IsNextEncount_lambda0_Invoke(__int64 result,
                                                     __int64* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  int v7;
  __int64 v8;
  bool v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = *(__int64**)(result + 8);
  v3 = *a2;
  if (v2[4] != v2[3]) {
    if ((v4 = v2[12], v5 = v2[69], (v4 | v5) == 0) ||
        v4 == 0 && (v5 != 0 ? (v6 = v2[13] == 0) : (v6 = false),
                    v6 &&
                        *((__int16*)v2 + 321) * *((__int16*)v2 + 320) *
                                *((__int16*)v2 + 322) ==
                            0 &&
                        *(_QWORD*)(v5 + 352) == 0) ||
        (v2[68] & 3) != 2) {
      v2 = (__int64*)v2[3];
    }
  }
  v7 = *(_DWORD*)(v3 + 540);
  v8 = *v2;
  v9 = __OFSUB__(v7, 1);
  v10 = (unsigned int)(v7 - 1);
  if (((v10 & 0x80000000) != 0LL) == v9) {
    v11 = *(_QWORD*)(v3 + 24);
    v12 = *(_QWORD*)(v3 + 32) - v11;
    v13 = v11 + 8LL * (unsigned int)v10;
    if (v10 < v12 >> 3) {
      v3 = v13;
    }
  }
  if (v8 == *(_QWORD*)v3) {
    **(_BYTE**)(result + 16) = 1;
  }
  return result;
}

__int64 game_gmap_Troop_IsNextEncount(__int64 a1, __int64* a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v7;
  struct {
    _QWORD v8[4];
    _QWORD* v9;
  } v8_;
  char v12;

  v4 = *a2;
  v5 = *(_QWORD*)(*a2 + 96);
  if (v5 == 0 || *(_BYTE*)(v5 + 32) != 1 ||
      *(_QWORD*)(v4 + 32) == *(_QWORD*)(v4 + 24) ||
      (*(_WORD*)(v4 + 544) & 3) == 2 || (*(_BYTE*)(v4 + 546) & 0xEF) != 0) {
    return 0;
  }
  v12 = 0;
  v8_.v8[0] = GameData_202c898;
  v8_.v8[1] = v4;
  v8_.v9 = v8_.v8;
  v8_.v8[2] = &v12;
  TroopMgr_13460a0((__int64)v8_.v8);
  if (v8_.v9 == v8_.v8) {
    v7 = 32;
    goto LABEL_11;
  }
  if (v8_.v9 != nullptr) {
    v7 = 40;
  LABEL_11:
    (*(void (**)(__int64))(*v8_.v9 + v7))((__int64)v8_.v9);
  }
  return v12 & 1;
}

#pragma GCC visibility pop
