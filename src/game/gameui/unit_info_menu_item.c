#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_1605f00(__int64);
__int64 GameRoutine_1606250(_QWORD);
__int64 game_gameui_Util_GetMorphRage(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
extern __int64* GameData_212c880[5];
__int64 UnitInfoMenuItem_16061b0(__int64 a1, __int64 a2);
__int64 UnitInfoMenuItem_1606c80(__int64 result, __int64 a2, __int16 a3);
__int64 GameRoutine_18a73c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18a7690(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18a7ae0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                            _QWORD);
__int64 GameRoutine_18a80b0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_18ab7b0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64
    UnitInfoMenuItem_1606c80_alt1(_QWORD, _QWORD,
                                  _QWORD) __asm__("UnitInfoMenuItem_1606c80");
__int64 game_6e8720(_QWORD);
extern __int64 GameData_21f1e08;
extern __int64 game_g_empty_item;
__attribute__((swiftcall)) void
UnitInfoMenuItem_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2);
__int64 GameHr_18a7690(__int64, _WORD*, __int64, char);
__int64 GameHr_18a80b0(__int64, _DWORD*);
__int64 GameHr_18ab7b0(__int64, _DWORD*, __int64, __int64, char);
__int64
GameRoutine_18a73c0_alt1(__int64,
                         unsigned __int16*) __asm__("GameRoutine_18a73c0");
__int64 GameRoutine_18a7ae0_alt1(__int64, unsigned int*, __int64, char, int,
                                 const char*,
                                 char) __asm__("GameRoutine_18a7ae0");
__int64 game_6e8720_alt1(__int64 result, __int64) __asm__("game_6e8720");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64* Element_18863e0(__int64, const char**, char);
__int64 AsyncLoadThumbImage_189a3a0(_QWORD*, __int64);
__int64 GameHr_157b5c0(__int64 result, unsigned __int16*);
__int64 GameRoutine_15748c0(__int64, unsigned __int16*, char);
__int64 LayoutAccessor_1562cf0(__int64 result, unsigned int*);
__int64 MenuItem_188bf10(__int64, const char*);
__int64 __dynamic_cast(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_SkillKey_GetRemainingUses(_DWORD*);
__int64 game_UnitItemList_FindEquipped_710080(__int64);
__int64 game_gameui_control_1898940(__int64);
char* GameHr_6ed030(__int64);
extern __int64* GameData_212c878[6];
extern __int64* GameData_212d890[2];
extern __int64* GameData_2131a20[3];
extern __int64* GameData_2131a28[2];
extern __int64* GameData_2131a58[13];
extern __int64* game_g_empty_item_ptr;
void GameRoutine_156c5d0(__int64, __int64, char);
void GameRoutine_189e9c0(__int64);
void MenuItemSkill_1899480(__int64, unsigned int, char, char);
_QWORD* UnitInfoMenuItem_1606250(_QWORD* result);

__int64 UnitInfoMenuItem_16061b0(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  GameRoutine_1605f00(a1);
  v4 = *(_QWORD*)(a1 + 16);
  if (v4 != 0) {
    v5 = std___1___shared_weak_count_lock(v4);
    if (v5 != 0) {
      v6 = v5;
      v7 = *(_QWORD*)(a1 + 8);
      if (v7 != 0) {
        (*(void (**)(__int64, __int64))(*(_QWORD*)v7 + 40LL))(v7, 1);
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
        std___1___shared_weak_count___release_weak(v6);
      }
    }
  }
  *(_DWORD*)(a1 + 24) = 1;
  v8 = strlen(a2);
  *(_QWORD*)(a1 + 40) = a2;
  *(_QWORD*)(a1 + 48) = v8;
  return GameRoutine_1606250(a1);
}

_QWORD* UnitInfoMenuItem_1606250(_QWORD* result)
{
  int v1;
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  const char* v8;
  __int64* v9;
  _QWORD* v10;
  _QWORD* v11;
  __int64* v12;
  __int64 v13;
  const char* v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  int v34;
  int v35;
  char v36;
  _QWORD* v37;
  _QWORD* v38;
  const char** v39;
  _QWORD* v40;
  _QWORD* v41;
  __int64* v42;
  _QWORD* v43;
  _QWORD* v44;
  __int64* v45;
  _QWORD* v46;
  _QWORD* v47;
  const char** v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64* v53;
  __int64 v54;
  unsigned __int16* v55;
  unsigned __int16 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  char* v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  char v66;
  int v67;
  __int64 v68;
  char v69;
  char v70;
  int v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64* v75;
  char v76;
  int v77;
  char v78;
  char v79;
  unsigned __int16 v80;
  struct {
    _QWORD* v81;
    __int64 v82;
  } v81_;
  int v83;
  struct {
    _QWORD* v84;
    __int64 v85;
  } v84_;
  struct {
    const char* v86;
    __int64 v87;
    __int64 v88;
  } v86_;
  __int64 var4;

  v1 = *((_DWORD*)result + 6);
  if (v1 == 0) {
    return result;
  }
  v2 = result;
  if (v1 != 1) {
    if (result[4] == 0) {
      return result;
    }
    if (v1 <= 5) {
      if ((unsigned int)(v1 - 3) >= 3) {
        if (v1 != 2) {
          return result;
        }
        result = (_QWORD*)result[2];
        v86_.v86 = nullptr;
        v86_.v87 = 0;
        if (result != nullptr &&
            (result = (_QWORD*)std___1___shared_weak_count_lock_alt1(
                 (__int64)result),
             v86_.v87 = (__int64)result, result != nullptr) &&
            (v40 = result, result = (_QWORD*)v2[1],
             v86_.v86 = (const char*)result, result != nullptr) &&
            (v41 = v40, (result = (_QWORD*)__dynamic_cast(
                             result, GameData_2131a58[0], GameData_2131a28[0],
                             0)) != nullptr)) {
          v42 = (__int64*)&v86_.v86;
          v81_.v81 = result;
          v81_.v82 = (__int64)v41;
        }
        else {
          v42 = (__int64*)&v81_.v81;
        }
        *v42 = 0;
        v42[1] = 0;
        v73 = v86_.v87;
        if (v86_.v87 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v86_.v87 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v73 + 16LL))(v73);
          result =
              (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v73);
        }
        v33 = (__int64)v81_.v81;
        if (v81_.v81 != nullptr) {
          v74 = *((unsigned int*)v2 + 14);
          if ((int)v74 <= -1) {
            v75 = game_g_empty_item_ptr;
          }
          else {
            v75 = (__int64*)(v2[4] + 8 * v74 + 828);
          }
          LayoutAccessor_1562cf0((__int64)(v81_.v81 + 11),
                                 (unsigned int*)"Info");
          v76 = *((_BYTE*)v75 + 3);
          v77 = *((_DWORD*)v2 + 14);
          if (v77 < 0) {
            v78 = v76 & 1;
          }
          else {
            v78 = (v77 == (unsigned int)game_UnitItemList_FindEquipped_710080(
                              v2[4] + 828LL)) |
                  v76;
          }
          v79 = GameHr_157b5c0(v2[4], (unsigned __int16*)v75);
          if ((unsigned int)*(
                  unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                          64) +
                                               8LL * *(unsigned __int16*)v75) +
                                    72LL) -
                  5 <=
              1) {
            v79 = (GameRoutine_15748c0(v2[4], (unsigned __int16*)v75, 1) &
                   0x100000000LL) != 0;
          }
          *(_BYTE*)(v33 + 1089) = v78 & 1;
          (*(void (**)(__int64, _QWORD))(*(_QWORD*)v33 + 152LL))(v33, v79 & 1);
          *(_QWORD*)(v33 + 1072) = v2[4];
          v80 = *(_WORD*)v75;
          *(_BYTE*)(v33 + 1082) = *((_BYTE*)v75 + 2);
          *(_WORD*)(v33 + 1080) = v80;
          *(_BYTE*)(v33 + 1083) = *((_BYTE*)v75 + 3);
          *(_DWORD*)(v33 + 1084) = *((_DWORD*)v75 + 1);
          goto LABEL_141;
        }
      }
      else {
        result = (_QWORD*)result[2];
        v86_.v86 = nullptr;
        v86_.v87 = 0;
        if (result != nullptr &&
            (result = (_QWORD*)std___1___shared_weak_count_lock_alt1(
                 (__int64)result),
             v86_.v87 = (__int64)result, result != nullptr) &&
            (v10 = result, result = (_QWORD*)v2[1],
             v86_.v86 = (const char*)result, result != nullptr) &&
            (v11 = v10, (result = (_QWORD*)__dynamic_cast(
                             result, GameData_2131a58[0], GameData_2131a20[0],
                             0)) != nullptr)) {
          v12 = (__int64*)&v86_.v86;
          v81_.v81 = result;
          v81_.v82 = (__int64)v11;
        }
        else {
          v12 = (__int64*)&v81_.v81;
        }
        *v12 = 0;
        v12[1] = 0;
        v32 = v86_.v87;
        if (v86_.v87 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v86_.v87 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v32 + 16LL))(v32);
          result =
              (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v32);
        }
        v33 = (__int64)v81_.v81;
        if (v81_.v81 != nullptr) {
          MenuItemSkill_1899480((__int64)v81_.v81, 1u, *((_BYTE*)v2 + 64), 0);
          v34 = *((_DWORD*)v2 + 15);
          if ((*(_BYTE*)(v33 + 1080) & 1) == 0) {
            *(_BYTE*)(v33 + 1080) = 1;
          }
          *(_DWORD*)(v33 + 1076) = v34;
          *(_QWORD*)(v33 + 1096) = v2[4];
          v35 = *((_DWORD*)v2 + 6);
          if (v35 == 4) {
            v36 = 2;
          }
          else {
            v36 = v35 == 3;
          }
          *(_BYTE*)(v33 + 1072) = v36;
        LABEL_141:
          v86_.v88 = 0;
          v86_.v86 = (const char*)(GameData_212d890[0] + 2);
          LODWORD(v86_.v87) = 20;
          result =
              X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                     PSEUDO_X8, __int64, const char**))(
                                     *(_QWORD*)(v33 + 72) + 16LL))(
                                     (void*)&v84_.v84, v33 + 72, &v86_.v86));
        }
      }
    LABEL_142:
      v72 = v81_.v82;
      if (v81_.v82 == 0) {
        return result;
      }
    LABEL_143:
      if (atomic_fetch_add((atomic_ullong* volatile)(v72 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v72 + 16LL))(v72);
        return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v72);
      }
      return result;
    }
    if (v1 <= 7) {
      if (v1 == 6) {
        result = (_QWORD*)result[2];
        v86_.v86 = nullptr;
        v86_.v87 = 0;
        if (result != nullptr &&
            (result = (_QWORD*)std___1___shared_weak_count_lock_alt1(
                 (__int64)result),
             v86_.v87 = (__int64)result, result != nullptr) &&
            (v43 = result, result = (_QWORD*)v2[1],
             v86_.v86 = (const char*)result, result != nullptr) &&
            (v44 = v43, (result = (_QWORD*)__dynamic_cast(
                             result, GameData_2131a58[0], GameData_2131a28[0],
                             0)) != nullptr)) {
          v45 = (__int64*)&v86_.v86;
          v81_.v81 = result;
          v81_.v82 = (__int64)v44;
        }
        else {
          v45 = (__int64*)&v81_.v81;
        }
        *v45 = 0;
        v45[1] = 0;
        v49 = v86_.v87;
        if (v86_.v87 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v86_.v87 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
          result =
              (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v49);
        }
        v33 = (__int64)v81_.v81;
        if (v81_.v81 != nullptr) {
          v50 = v2[4];
          v51 = *((unsigned int*)v2 + 14);
          v52 = (__int64)(v81_.v81 + 11);
          v53 = game_g_empty_item_ptr;
          *((_BYTE*)v81_.v81 + 1089) = 0;
          v54 = v50 + 8 * v51 + 876;
          if ((int)v51 <= -1) {
            v55 = (unsigned __int16*)v53;
          }
          else {
            v55 = (unsigned __int16*)v54;
          }
          LayoutAccessor_1562cf0(v52, (unsigned int*)"Info");
          *(_QWORD*)(v33 + 1072) = v2[4];
          v56 = *v55;
          *(_BYTE*)(v33 + 1082) = *((_BYTE*)v55 + 2);
          *(_WORD*)(v33 + 1080) = v56;
          *(_BYTE*)(v33 + 1083) = *((_BYTE*)v55 + 3);
          *(_DWORD*)(v33 + 1084) = *((_DWORD*)v55 + 1);
          if ((unsigned int)*(
                  unsigned __int8*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c878[0] +
                                                          64) +
                                               8LL * *v55) +
                                    72LL) -
                  5 <=
              1) {
            v57 = GameRoutine_15748c0(v2[4], v55, 1);
            (*(void (**)(__int64, bool))(*(_QWORD*)v33 + 152LL))(
                v33, (v57 & 0x100000000LL) != 0);
          }
          goto LABEL_141;
        }
      }
      else {
        result = (_QWORD*)result[2];
        v86_.v86 = nullptr;
        v86_.v87 = 0;
        if (result != nullptr &&
            (result = (_QWORD*)std___1___shared_weak_count_lock_alt1(
                 (__int64)result),
             v86_.v87 = (__int64)result, result != nullptr) &&
            (v19 = result, result = (_QWORD*)v2[1],
             v86_.v86 = (const char*)result, result != nullptr) &&
            (v20 = v19, (result = (_QWORD*)__dynamic_cast(
                             result, GameData_2131a58[0], GameData_2131a20[0],
                             0)) != nullptr)) {
          v21 = (__int64*)&v86_.v86;
          v81_.v81 = result;
          v81_.v82 = (__int64)v20;
        }
        else {
          v21 = (__int64*)&v81_.v81;
        }
        *v21 = 0;
        v21[1] = 0;
        v65 = v86_.v87;
        if (v86_.v87 != 0 &&
            atomic_fetch_add((atomic_ullong* volatile)(v86_.v87 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v65 + 16LL))(v65);
          result =
              (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v65);
        }
        v33 = (__int64)v81_.v81;
        if (v81_.v81 != nullptr) {
          v66 = (unsigned int)game_SkillKey_GetRemainingUses((_DWORD*)v2 +
                                                             15) == 0;
          MenuItemSkill_1899480(v33, 1u, 0, v66);
          *(_BYTE*)(v33 + 1108) = 1;
          v67 = *((_DWORD*)v2 + 15);
          if ((*(_BYTE*)(v33 + 1080) & 1) == 0) {
            *(_BYTE*)(v33 + 1080) = 1;
          }
          *(_DWORD*)(v33 + 1076) = v67;
          goto LABEL_141;
        }
      }
      goto LABEL_142;
    }
    if (v1 == 8) {
      result = (_QWORD*)result[2];
      v86_.v86 = nullptr;
      v86_.v87 = 0;
      if (result != nullptr &&
          (result =
               (_QWORD*)std___1___shared_weak_count_lock_alt1((__int64)result),
           v86_.v87 = (__int64)result, result != nullptr) &&
          (v46 = result, result = (_QWORD*)v2[1],
           v86_.v86 = (const char*)result, result != nullptr) &&
          (v47 = v46, (result = (_QWORD*)__dynamic_cast(
                           result, GameData_2131a58[0], GameData_2131a20[0],
                           0)) != nullptr)) {
        v48 = &v86_.v86;
        v84_.v84 = result;
        v84_.v85 = (__int64)v47;
      }
      else {
        v48 = (const char**)&v84_.v84;
      }
      *v48 = nullptr;
      v48[1] = nullptr;
      v58 = v86_.v87;
      if (v86_.v87 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v86_.v87 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
        result = (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v58);
      }
      v59 = (__int64)v84_.v84;
      if (v84_.v84 != nullptr) {
        UnitInfoMenuItem_1606c80((__int64)&v81_.v81, v2[4],
                                 *((_DWORD*)v2 + 15));
        MenuItemSkill_1899480(v59, 2u, 0, 0);
        *(_BYTE*)(v59 + 1108) = 1;
        v60 = v2[4];
        v61 = v81_.v82;
        *(_QWORD*)(v59 + 1096) = v60;
        AsyncLoadThumbImage_189a3a0((_QWORD*)v59, v61);
        v62 = GameHr_6ed030(v61);
        v63 = *(_QWORD*)(v59 + 1032);
        if (v63 != 0) {
          GameRoutine_156c5d0(v63, (__int64)v62, 0);
          v64 = *(_QWORD*)(v59 + 1032);
          if (v64 != 0) {
            *(_BYTE*)(v64 + 88) |= 1u;
          }
        }
        v86_.v86 = "NumNone";
        v86_.v87 = 7;
        Element_18863e0(v59, &v86_.v86, 1);
        goto LABEL_124;
      }
    }
    else {
      if (v1 != 9) {
        return result;
      }
      result = (_QWORD*)result[2];
      v86_.v86 = nullptr;
      v86_.v87 = 0;
      if (result != nullptr &&
          (result =
               (_QWORD*)std___1___shared_weak_count_lock_alt1((__int64)result),
           v86_.v87 = (__int64)result, result != nullptr) &&
          (v37 = result, result = (_QWORD*)v2[1],
           v86_.v86 = (const char*)result, result != nullptr) &&
          (v38 = v37, (result = (_QWORD*)__dynamic_cast(
                           result, GameData_2131a58[0], GameData_2131a20[0],
                           0)) != nullptr)) {
        v39 = &v86_.v86;
        v84_.v84 = result;
        v84_.v85 = (__int64)v38;
      }
      else {
        v39 = (const char**)&v84_.v84;
      }
      *v39 = nullptr;
      v39[1] = nullptr;
      v68 = v86_.v87;
      if (v86_.v87 != 0 &&
          atomic_fetch_add((atomic_ullong* volatile)(v86_.v87 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v68 + 16LL))(v68);
        result = (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v68);
      }
      v59 = (__int64)v84_.v84;
      if (v84_.v84 != nullptr) {
        UnitInfoMenuItem_1606c80((__int64)&v81_.v81, v2[4],
                                 *((_DWORD*)v2 + 15));
        v69 = (unsigned int)game_SkillKey_GetRemainingUses(&v83) == 0;
        MenuItemSkill_1899480(v59, 2u, 0, v69);
        v70 = *(_BYTE*)(v59 + 1080);
        v71 = v83;
        *(_BYTE*)(v59 + 1108) = 1;
        if ((v70 & 1) == 0) {
          *(_BYTE*)(v59 + 1080) = 1;
        }
        *(_DWORD*)(v59 + 1076) = v71;
        *(_QWORD*)(v59 + 1096) = v2[4];
      LABEL_124:
        v86_.v88 = 0;
        v86_.v86 = (const char*)(GameData_212d890[0] + 2);
        LODWORD(v86_.v87) = 20;
        result = X8CALL_X0(_QWORD*, (*(__attribute__((swiftcall)) void (**)(
                                        PSEUDO_X8, __int64, const char**))(
                                        *(_QWORD*)(v59 + 72) + 16LL))(
                                        (void*)&var4, v59 + 72, &v86_.v86));
      }
    }
    v72 = v84_.v85;
    if (v84_.v85 == 0) {
      return result;
    }
    goto LABEL_143;
  }
  v3 = result[2];
  v81_.v81 = nullptr;
  v81_.v82 = 0;
  if (v3 != 0 &&
      (v4 = std___1___shared_weak_count_lock_alt1(v3), v81_.v82 = v4,
       v4 != 0) &&
      (v5 = v4, v6 = v2[1], v81_.v81 = (_QWORD*)v6, v6 != 0) &&
      (v7 = v5,
       (v8 = (const char*)__dynamic_cast(v6, GameData_2131a58[0],
                                         GameData_2131a28[0], 0)) != nullptr)) {
    v9 = (__int64*)&v81_.v81;
    v86_.v86 = v8;
    v86_.v87 = v7;
  }
  else {
    v9 = (__int64*)&v86_.v86;
  }
  *v9 = 0;
  v9[1] = 0;
  v13 = v81_.v82;
  if (v81_.v82 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v81_.v82 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
    std___1___shared_weak_count___release_weak_alt1(v13);
    v14 = v86_.v86;
    if (v86_.v86 != nullptr) {
      goto LABEL_20;
    }
  LABEL_39:
    v22 = v2[2];
    v84_.v84 = nullptr;
    v84_.v85 = 0;
    if (v22 != 0 &&
        (v23 = std___1___shared_weak_count_lock_alt1(v22), v84_.v85 = v23,
         v23 != 0) &&
        (v24 = v23, v25 = (_QWORD*)v2[1], v84_.v84 = v25, v25 != nullptr) &&
        (v26 = v24, (v27 = __dynamic_cast(v25, GameData_2131a58[0],
                                          GameData_2131a20[0], 0)) != 0)) {
      v28 = (__int64*)&v84_.v84;
      v81_.v81 = (_QWORD*)v27;
      v81_.v82 = v26;
    }
    else {
      v28 = (__int64*)&v81_.v81;
    }
    *v28 = 0;
    v28[1] = 0;
    v29 = v84_.v85;
    if (v84_.v85 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v84_.v85 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
      std___1___shared_weak_count___release_weak_alt1(v29);
    }
    v30 = (__int64)v81_.v81;
    if (v81_.v81 != nullptr) {
      game_gameui_control_1898940((__int64)v81_.v81);
      MenuItemSkill_1899480(v30, 1u, 0, 0);
    }
    v31 = v81_.v82;
    if (v81_.v82 != 0 &&
        atomic_fetch_add((atomic_ullong* volatile)(v81_.v82 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
      std___1___shared_weak_count___release_weak_alt1(v31);
    }
    goto LABEL_21;
  }
  v14 = v86_.v86;
  if (v86_.v86 == nullptr) {
    goto LABEL_39;
  }
LABEL_20:
  GameRoutine_189e9c0((__int64)v14);
  LayoutAccessor_1562cf0((__int64)(v14 + 88), (unsigned int*)"Info");
  *((_BYTE*)v14 + 1089) = 0;
LABEL_21:
  v15 = v86_.v87;
  if (v86_.v87 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v86_.v87 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
    std___1___shared_weak_count___release_weak_alt1(v15);
    result = (_QWORD*)v2[2];
    if (result == nullptr) {
      return result;
    }
  }
  else {
    result = (_QWORD*)v2[2];
    if (result == nullptr) {
      return result;
    }
  }
  result = (_QWORD*)std___1___shared_weak_count_lock_alt1((__int64)result);
  if (result != nullptr) {
    v16 = (_QWORD*)v2[1];
    v17 = (__int64)result;
    if (v16 != nullptr) {
      MenuItem_188bf10(v2[1], (const char*)v2[5]);
      v18 = v16[129];
      if (v18 != 0) {
        *(_BYTE*)(v18 + 88) |= 1u;
      }
      result =
          (_QWORD*)(*(__int64 (**)(_QWORD*, __int64))(*v16 + 152LL))(v16, 1);
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
      return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v17);
    }
  }
  return result;
}

__int64 UnitInfoMenuItem_1606c80(__int64 result, __int64 a2, __int16 a3)
{
  __int64 v3;
  int v4;
  __int64 v5;
  __int64 v6;

  *(_DWORD*)(result + 16) = 0;
  *(_QWORD*)result = 0;
  *(_QWORD*)(result + 8) = 0;
  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*GameData_212c880[0] + 64) +
                             8LL * (a3 & 0xFFF)) +
                  592LL);
  if (v3 != 0) {
    v4 = *(unsigned __int16*)(v3 + 128);
    *(_QWORD*)result = v3;
    if (v4 != 0) {
      v5 = *(_QWORD*)(*(_QWORD*)(v3 + 136) + 8LL);
    }
    else {
      v5 = 0;
    }
    *(_QWORD*)(result + 8) = v5;
    v6 = result;
    result = game_gameui_Util_GetMorphRage(a2, v3);
    *(_DWORD*)(v6 + 16) = *(_DWORD*)result;
  }
  return result;
}

__attribute__((swiftcall)) void

UnitInfoMenuItem_Unknown2(PSEUDO_X8 x8_, __int64 result, __int64 a2)
{
  _DWORD* a3 = (_DWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _DWORD* v9;
  __int64 v10;
  int v11;
  __int64 v12;
  unsigned __int16* v13;
  __int64 v14;
  __int64 v15[2];
  int v16;
  __int16 v19;

  if (*(_DWORD*)(a2 + 8) != 45) {
    goto LABEL_30;
  }
  if (*(_QWORD*)(result + 32) == 0) {
    goto LABEL_30;
  }
  if (*(_DWORD*)(result + 24) == 0) {
    goto LABEL_30;
  }
  if (GameData_21f1e08 == 0) {
    goto LABEL_30;
  }
  v5 = *(_QWORD*)(GameData_21f1e08 + 144);
  if (v5 == 0) {
    goto LABEL_30;
  }
  v6 = *(_QWORD*)(GameData_21f1e08 + 136);
  v7 = result;
  v8 = *(_QWORD*)(GameData_21f1e08 + 144);
  v9 = a3;
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 16), 1u,
                            memory_order_relaxed);
  v10 = std___1___shared_weak_count_lock_alt1(v8);
  result = std___1___shared_weak_count___release_weak_alt1(v5);
  a3 = v9;
  if (v10 == 0) {
    goto LABEL_30;
  }
  if (v6 != 0) {
    v11 = *(_DWORD*)(v7 + 24);
    if (v11 > 5) {
      if (v11 > 7) {
        if (v11 == 8) {
          UnitInfoMenuItem_1606c80((__int64)v15, *(_QWORD*)(v7 + 32),
                                   *(_DWORD*)(v7 + 60));
          game_6e8720_alt1((__int64)&v19, v15[1]);
          result = GameHr_18a7690(v6, &v19, *(_QWORD*)(v7 + 32), 0);
        }
        else {
          if (v11 != 9) {
            goto LABEL_28;
          }
          UnitInfoMenuItem_1606c80((__int64)v15, *(_QWORD*)(v7 + 32),
                                   *(_DWORD*)(v7 + 60));
          result = GameHr_18ab7b0(v6, &v16, *(_QWORD*)(v7 + 32), v15[0], 0);
        }
        goto LABEL_27;
      }
      if (v11 == 6) {
        v12 = *(unsigned int*)(v7 + 56);
        if ((int)v12 <= -1) {
          v13 = (unsigned __int16*)&game_g_empty_item;
        }
        else {
          v13 = (unsigned __int16*)(*(_QWORD*)(v7 + 32) + 8 * v12 + 876);
        }
      LABEL_26:
        result = GameRoutine_18a73c0_alt1(v6, v13);
        goto LABEL_27;
      }
    }
    else if ((unsigned int)(v11 - 3) >= 2) {
      if (v11 != 2) {
        a3 = v9;
        if (v11 != 5) {
          goto LABEL_28;
        }
        result = GameHr_18a80b0(v6, (_DWORD*)(v7 + 60));
        goto LABEL_27;
      }
      v14 = *(unsigned int*)(v7 + 56);
      if ((int)v14 <= -1) {
        v13 = (unsigned __int16*)&game_g_empty_item;
      }
      else {
        v13 = (unsigned __int16*)(*(_QWORD*)(v7 + 32) + 8 * v14 + 828);
      }
      goto LABEL_26;
    }
    result = GameRoutine_18a7ae0_alt1(v6, (unsigned int*)(v7 + 60),
                                      *(_QWORD*)(v7 + 32), 0, 0, nullptr, 0);
  LABEL_27:
    a3 = v9;
  }
LABEL_28:
  if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
    result = std___1___shared_weak_count___release_weak_alt1(v10);
    a3 = v9;
  }
LABEL_30:
  *a3 = 0x8000;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
