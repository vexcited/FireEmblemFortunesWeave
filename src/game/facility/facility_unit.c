#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 game_HashString(_QWORD);
extern _UNKNOWN* game_g_hero_ids;
extern __int64 GameData_21c99c8;
unsigned __int64
game_facility_FacilityUnit_CalcCause_lambda0_Invoke(__int64 a1,
                                                    unsigned __int8* a2);
__int64 GameConst_7f8610(__int64);
__int64 GameRoutine_15b74b0();
__int64 GameRoutine_ae0660();
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
__int64 game_HasSkill(_QWORD*, unsigned int*);
__int64 game_HashString_alt1(__int64 result) __asm__("game_HashString");
__n128 std___1___shared_weak_count___release_weak();
extern _QWORD game_g_shared_system_skills_ptr;
extern _UNKNOWN GameData_1ade186;
extern __int64 (*GameData_203f7b0[])();
extern __int64 GameData_21c9608;
extern __int64 GameData_21c96e8;
extern __int64 game_GameModeData_instance_;
extern __int64 game_UnitListSet_instance_;
unsigned int* game_gmap_SpotMgr_FindSpot(unsigned int* result);
unsigned int* game_gmap_SpotMgr_GetCurrentSpot();
__n128 game_facility_FacilityUnit_CalcCause(__int64 a1, __int64* a2);
unsigned __int64

game_facility_FacilityUnit_CalcCause_lambda0_Invoke(__int64 a1,
                                                    unsigned __int8* a2)
{
  _WORD* v2;
  __int64 v3;
  unsigned __int64 result;
  unsigned __int64 v5;
  unsigned __int64 v7;
  unsigned __int64 v8;
  _QWORD* v9;
  _QWORD* v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;

  v2 = *(_WORD**)(a1 + 8);
  if (*(_QWORD*)v2 != 0) {
    v3 = *(_QWORD*)(*(_QWORD*)v2 + 392LL);
  }
  else {
    v3 = 0;
  }
  result = game_HashString(*(&game_g_hero_ids + *a2));
  if (result != 0) {
    v5 = *(_QWORD*)(GameData_21c99c8 + 96);
    if (v5 != 0 && *(_QWORD*)(GameData_21c99c8 + 112) != 0) {
      v7 = v5 - 1;
      if ((v5 & (v5 - 1)) != 0) {
        v8 = result;
        if (result >= v5) {
          v8 = result % v5;
        }
      }
      else {
        v8 = v7 & result;
      }
      v9 = *(_QWORD**)(*(_QWORD*)(GameData_21c99c8 + 88) + 8 * v8);
      if (v9 != nullptr) {
        v10 = (_QWORD*)*v9;
        if (v10 != nullptr) {
          if ((v5 & v7) == 0) {
            while (1) {
              v12 = v10[1];
              if (v12 == result) {
                if (v10[2] == result) {
                  goto LABEL_29;
                }
              }
              else if ((v12 & v7) != v8) {
                return result;
              }
              v10 = (_QWORD*)*v10;
              if (v10 == nullptr) {
                return result;
              }
            }
          }
          do {
            v11 = v10[1];
            if (v11 == result) {
              if (v10[2] == result) {
              LABEL_29:
                v13 = v10[3];
                if (v13 != 0 && *(_QWORD*)(*(_QWORD*)(v3 + 24) + 1672LL) ==
                                    *(_QWORD*)(*(_QWORD*)(v13 + 24) + 1672LL)) {
                  v2[24] |= 0x80u;
                }
                return result;
              }
            }
            else {
              if (v11 >= v5) {
                v11 %= v5;
              }
              if (v11 != v8) {
                return result;
              }
            }
            v10 = (_QWORD*)*v10;
          } while (v10 != nullptr);
        }
      }
    }
  }
  return result;
}

__n128 game_facility_FacilityUnit_CalcCause(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  int v7;
  __int64* v8;
  __int64* v9;
  __int64 v10;
  __int64 v11;
  unsigned int* v12;
  __int64 v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  unsigned int* v17;
  __int64 (**v18)();
  __int64 v19;
  __int64 (*v20)();
  __int64 (*v21)();
  int v22;
  __int64* v23;
  __int64 v24;
  int v25;
  char v26;
  __int64 (**v27)();
  __int16 v28;
  __int16 v29;
  __int64 v30;
  __int64 v31;
  __int64 (*v32)();
  __int16 v33;
  int v34;
  __n128 result;
  __int64 v36;
  struct {
    __int64 (**v37)();
    void* v38;
    char gap16_[16];
    unsigned __int64* v39;
  } v37_;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v3 = *a2;
  v2 = a2[1];
  *a2 = 0;
  a2[1] = 0;
  v4 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(v3 + 56);
  *(_WORD*)(v3 + 48) = 0;
  if (v5 == 0) {
    goto LABEL_25;
  }
  v6 = *(_QWORD*)(GameData_21c96e8 + 8);
  v7 = *(_DWORD*)(v6 + 56);
  v8 = *(__int64**)(v6 + 8);
  v9 = *(__int64**)(v6 + 16);
  if ((v7 & 0x80000000) == 0) {
    while (v8 != v9) {
      v11 = *v8++;
      v10 = v11;
      if (*(_DWORD*)(v11 + 84) == v7) {
        goto LABEL_13;
      }
    }
  LABEL_8:
    v12 = game_gmap_SpotMgr_GetCurrentSpot(),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (v12 == nullptr) {
      goto LABEL_25;
    }
    goto LABEL_14;
  }
  if (v8 == v9) {
    goto LABEL_8;
  }
  while (1) {
    v10 = *v8;
    if (*(_QWORD*)(*v8 + 96) == 0 && *(_QWORD*)(v10 + 552) == 0) {
      break;
    }
    if (++v8 == v9) {
      goto LABEL_8;
    }
  }
LABEL_13:
  v12 = *(unsigned int**)v10;
  if (*(_QWORD*)v10 == 0) {
    goto LABEL_25;
  }
LABEL_14:
  if ((unsigned int*)v5 != v12) {
    v37_.v38 = &GameData_1ade186;
    v37_.v37 =
        (__int64 (**)(void))game_HashString_alt1((__int64)&GameData_1ade186),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (game_GameModeData_instance_ == 0 ||
        (v13 = game_GameVariableTable_Find(
             *(_QWORD**)(game_GameModeData_instance_ + 48),
             (unsigned __int64*)&v37_.v37)) == 0 ||
        *(int*)(v13 + 32) < 1 || game_GameModeData_instance_ == 0 ||
        *(_BYTE*)(game_GameModeData_instance_ + 56) != 2 ||
        (v14 = *(__int64**)(v5 + 48), v15 = *(__int64**)(v5 + 56),
         v14 == v15)) {
    LABEL_23:
      v17 = (unsigned int*)GameRoutine_ae0660(),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v12 == game_gmap_SpotMgr_FindSpot(v17) &&
          (unsigned int*)v5 == game_gmap_SpotMgr_GetCurrentSpot()) {
        goto LABEL_26;
      }
    LABEL_25:
      *(_WORD*)(v3 + 48) |= 1u;
      goto LABEL_26;
    }
    while (1) {
      v16 = *v14++;
      if (*(unsigned int**)(v16 + 8) == v12) {
        break;
      }
      if (v14 == v15) {
        goto LABEL_23;
      }
    }
  }
LABEL_26:
  v18 = *(__int64 (***)(void))v3,
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v19 = *(_QWORD*)(v4 + 80);
  if (v19 != 0) {
    v37_.v37 = *(__int64 (***)(void))v3,
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (((*(__int64 (**)(__int64, __int64 (***)(void)))(*(_QWORD*)v19 + 48LL))(
             v19, &v37_.v37) &
         1) == 0) {
      *(_WORD*)(v3 + 48) |= 8u;
    }
    v18 = *(__int64 (***)(void))v3,
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if (v18 != nullptr) {
    v20 = v18[49];
    if ((*(_BYTE*)(v4 + 32) & 1) == 0) {
      goto LABEL_36;
    }
  }
  else {
    v20 = nullptr;
    if ((*(_BYTE*)(v4 + 32) & 1) == 0) {
      goto LABEL_36;
    }
  }
  if ((*((_BYTE*)v20 + 49) & 4) == 0) {
    *(_WORD*)(v3 + 48) |= 0x10u;
  }
LABEL_36:
  v21 = v18[55];
  if (v21 == nullptr) {
    goto LABEL_72;
  }
  v22 = *((unsigned __int8*)v21 + 16);
  if (v22 > 5) {
    if (v22 == 6) {
      v33 = *(_WORD*)(v3 + 48) | 0x20;
    }
    else {
      if (v22 != 8) {
        goto LABEL_72;
      }
      LODWORD(v37_.v37) = *(_DWORD*)((_BYTE*)((_UNKNOWN*)0x1BCLL) +
                                     game_g_shared_system_skills_ptr) &
                          0xFFF;
      v26 = game_HasSkill(v18 + 218, (unsigned int*)&v37_.v37),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v27 = *(__int64 (***)(void))v3,
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
      if ((v26 & 1) != 0) {
        v28 = 2;
      }
      else {
        v28 = 64;
      }
      v29 = *(_WORD*)(v3 + 48) | v28;
      *(_WORD*)(v3 + 48) = v29;
      if (v27 != nullptr) {
        v30 = *(_QWORD*)(game_UnitListSet_instance_ + 56);
        v31 = *(_QWORD*)(game_UnitListSet_instance_ + 64);
        if (v30 == v31) {
          goto LABEL_72;
        }
        v32 = v27[49];
        if (v32 != nullptr) {
          while (*(_QWORD*)v30 == 0 ||
                 *(_QWORD*)(*((_QWORD*)v32 + 3) + 1672LL) !=
                     *(_QWORD*)(*(_QWORD*)(*(_QWORD*)v30 + 24LL) + 1672LL)) {
            v30 += 8;
            if (v30 == v31) {
              goto LABEL_63;
            }
          }
          if (v30 != v31) {
            goto LABEL_72;
          }
        }
      }
      else if (*(_QWORD*)(game_UnitListSet_instance_ + 56) ==
               *(_QWORD*)(game_UnitListSet_instance_ + 64)) {
        goto LABEL_72;
      }
    LABEL_63:
      v33 = v29 | 1;
    }
  LABEL_71:
    *(_WORD*)(v3 + 48) = v33;
    goto LABEL_72;
  }
  if (v22 != 0) {
    if (v22 != 4) {
      goto LABEL_72;
    }
    if ((GameRoutine_15b74b0() & 1) == 0) {
      goto LABEL_72;
    }
    v23 = *(__int64**)(*(_QWORD*)v3 + 440LL);
    if (v23 == nullptr) {
      goto LABEL_72;
    }
    v24 = *v23;
    if (*v23 == 0) {
      goto LABEL_72;
    }
    v25 = 0;
    while (*(_QWORD*)v3 != v24) {
      v24 = *(_QWORD*)(v24 + 432);
      ++v25;
      if (v24 == 0) {
        goto LABEL_72;
      }
    }
    if (GameData_21c9608 != 0) {
      v34 = (*(_BYTE*)(GameData_21c9608 + 328) & 4) != 0
                ? 1
                : *(_DWORD*)(GameData_21c9608 + 308);
    }
    else {
      v34 = 5;
    }
    if (v25 >= v34) {
    LABEL_72:
      if ((*(_BYTE*)(v4 + 32) & 4) != 0 &&
          (*(_QWORD*)v3 == 0 || *(char*)(*(_QWORD*)v3 + 2090LL) <= 0)) {
        *(_WORD*)(v3 + 48) |= 4u;
      }
      v37_.v37 = GameData_203f7b0;
      v37_.v38 = (void*)v3;
      v37_.v39 = (unsigned __int64*)&v37_.v37;
      GameConst_7f8610((__int64)&v37_.v37),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
      if (v37_.v39 == (unsigned __int64*)&v37_.v37) {
        v36 = 32;
      }
      else {
        if (v37_.v39 == nullptr) {
          goto LABEL_81;
        }
        v36 = 40;
      }
      (*(void (**)(__int64))(*v37_.v39 + v36))((__int64)v37_.v39),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    LABEL_81:
      if (v2 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v2 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v2 + 16LL))(v2),
            result = COERCE_AS(__typeof__(result),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
        return std___1___shared_weak_count___release_weak();
      }
      return result;
    }
  }
  v33 = *(_WORD*)(v3 + 48) | 0x100;
  goto LABEL_71;
}

#pragma GCC visibility pop
