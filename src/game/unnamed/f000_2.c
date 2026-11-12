#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
extern __int64 (*GameData_1fd8260[])();
extern __int64 (*GameData_1fd8670[])();
extern __int64 (*GameData_2007458[])();
extern __int64 (*GameData_20074d8[])();
extern __int64 (*GameData_20076d8[])();
extern __int64 (*GameData_2007758[])();
extern _DWORD* GameData_212d168;
extern int* GameData_212ec68;
extern _UNKNOWN* GameData_212ec70;
__int64 GameRoutine_1083e90(_QWORD, _QWORD);
__int64 GameRoutine_10c05f0(_QWORD);
struct PseudoSret GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD, float);
__int64 GameRoutine_540(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_cf4780(_QWORD);
char* GameRoutine_cf5da0(__int64);
__int64 GameRoutine_cf7940(_QWORD);
__int64 GameRoutine_cfa2a0(_QWORD);
__int64 GameRoutine_d19fc0(_QWORD);
__int64 GameRoutine_d1d160(_QWORD);
__int64 CharacterBuilder_1083e90(_QWORD*, __int64);
__int64 CharacterModel_cf4780(__int64);
__int64 GameHr_10c05f0(__int64 result);
__int64 GameHr_d19fc0(_QWORD*);
__int64 HubCharacterNatives_cf7940(__int64);
__int64 WaitRelease_cfa2a0(__int64 result);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
char* CharacterModel_cf5da0(__int64);
int __cxa_guard_acquire(__int64);
void __cxa_guard_release(__int64);
void game_zview_CharacterAnim_CommitReduceFlag(__int64);
__int64 GameHr_cf6d00(__int64 a1);

__int64 GameHr_cf6d00(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v3;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int8 explicit;
  int* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  char v21;
  _BYTE* v22;
  __int64 v23;
  __int64 v24;
  _BYTE* v25;
  _BYTE* v26;
  bool v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 result;
  int v32;
  int v33;
  __int64 v34;
  struct {
    _QWORD v35[4];
    _QWORD* v36;
  } v35_;
  char v37;

  *(_BYTE*)(a1 + 364) = 1;
  if (*GameData_212d168 == 4 || *GameData_212d168 == 2) {
    v3 = HubCharacterNatives_cf7940(a1);
    if (v3 != 0 && (*(_BYTE*)(v3 + 288) & 1) == 0) {
      *(_BYTE*)(v3 + 288) = 1;
    }
  }
  if (*(_BYTE*)(a1 + 145) == 1) {
    v4 = HubCharacterNatives_cf7940(a1);
    if (v4 != 0) {
      *(_BYTE*)(v4 + 289) = 1;
    }
  }
  v5 = *(_QWORD**)(a1 + 232);
  v37 = 0;
  if (v5 == nullptr) {
    goto LABEL_46;
  }
  *(_BYTE*)(a1 + 365) = 0;
  v35_.v35[0] = GameData_1fd8670;
  v35_.v35[1] = &v37;
  v35_.v36 = v35_.v35;
  CharacterBuilder_1083e90(v5, (__int64)v35_.v35);
  if (v35_.v36 == v35_.v35) {
    v6 = 32;
  }
  else {
    if (v35_.v36 == nullptr) {
      goto LABEL_18;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v35_.v36 + v6))((__int64)v35_.v36);
LABEL_18:
  v7 = *(_QWORD*)(a1 + 232);
  if (v7 != 0) {
    v8 = *(_QWORD**)(a1 + 232);
    v35_.v35[0] = GameData_2007458;
    v35_.v36 = v35_.v35;
    LOBYTE(v35_.v35[1]) = 1;
    CharacterBuilder_1083e90(v8, (__int64)v35_.v35);
    if (v35_.v36 == v35_.v35) {
      v9 = 32;
    }
    else {
      if (v35_.v36 == nullptr) {
        goto LABEL_24;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*v35_.v36 + v9))((__int64)v35_.v36);
  LABEL_24:
    v35_.v35[0] = GameData_20074d8;
    v35_.v36 = v35_.v35;
    LOBYTE(v35_.v35[1]) = 1;
    CharacterBuilder_1083e90((_QWORD*)v7, (__int64)v35_.v35);
    if (v35_.v36 == v35_.v35) {
      v10 = 32;
    }
    else {
      if (v35_.v36 == nullptr) {
        goto LABEL_29;
      }
      v10 = 40;
    }
    (*(void (**)(__int64))(*v35_.v36 + v10))((__int64)v35_.v36);
  LABEL_29:
    if (*(float*)(v7 + 348) == 0x1.0000000000000p+0f) {
      goto LABEL_40;
    }
    *(_DWORD*)(v7 + 348) = 1065353216;
    v35_.v35[0] = GameData_20076d8;
    LODWORD(v35_.v35[1]) = 1065353216;
    v35_.v36 = v35_.v35;
    CharacterBuilder_1083e90((_QWORD*)v7, (__int64)v35_.v35);
    if (v35_.v36 == v35_.v35) {
      v11 = 32;
    }
    else {
      if (v35_.v36 == nullptr) {
        goto LABEL_35;
      }
      v11 = 40;
    }
    (*(void (**)(__int64))(*v35_.v36 + v11))((__int64)v35_.v36);
  LABEL_35:
    v35_.v35[0] = GameData_2007758;
    v35_.v36 = v35_.v35;
    LODWORD(v35_.v35[1]) = 1065353216;
    CharacterBuilder_1083e90((_QWORD*)v7, (__int64)v35_.v35);
    if (v35_.v36 == v35_.v35) {
      v12 = 32;
    }
    else {
      if (v35_.v36 == nullptr) {
        goto LABEL_40;
      }
      v12 = 40;
    }
    (*(void (**)(__int64))(*v35_.v36 + v12))((__int64)v35_.v36);
  LABEL_40:
    LOBYTE(v35_.v35[1]) = 0;
    v35_.v35[0] = GameData_1fd8260;
    v35_.v36 = v35_.v35;
    CharacterBuilder_1083e90((_QWORD*)v7, (__int64)v35_.v35);
    if (v35_.v36 == v35_.v35) {
      v13 = 32;
    }
    else {
      if (v35_.v36 == nullptr) {
      LABEL_45:
        *(_DWORD*)(v7 + 340) &= ~0x2000u;
        goto LABEL_46;
      }
      v13 = 40;
    }
    (*(void (**)(__int64))(*v35_.v36 + v13))((__int64)v35_.v36);
    goto LABEL_45;
  }
LABEL_46:
  if (*(_BYTE*)(a1 + 145) == 1) {
    v14 = HubCharacterNatives_cf7940(a1);
    if (v14 != 0) {
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ec70,
                                      memory_order_acquire);
      v16 = GameData_212ec68;
      if ((explicit & 1) == 0) {
        v34 = v14;
        v33 = __cxa_guard_acquire((__int64)GameData_212ec70);
        v14 = v34;
        if (v33 != 0) {
          *v16 = wld_Crc32(0, "HitboxModule", 0xCu);
          __cxa_guard_release((__int64)GameData_212ec70);
          v14 = v34;
        }
      }
      v17 = *(_QWORD*)(v14 + 512);
      v18 = v17;
      while (v18 != *(_QWORD*)(v14 + 504)) {
        v19 = *(_DWORD*)(v18 - 16);
        v18 -= 16;
        v17 -= 16;
        if (v19 == *v16) {
          if (*(_QWORD*)(v14 + 512) != v17) {
            v20 = *(_QWORD*)(v17 + 8);
            if (v20 != 0 && *(_BYTE*)(v20 + 16) != 0) {
              v21 = *(_BYTE*)(v20 + 17);
              *(_BYTE*)(v20 + 16) = 0;
              *(_BYTE*)(v20 + 17) = v21 | 2;
              *(_BYTE*)(v20 + 18) |= 2u;
              *(_BYTE*)(v20 + 19) |= 2u;
              *(_BYTE*)(v20 + 20) |= 2u;
              v22 = *(_BYTE**)(v20 + 8);
              v22[632] = 0;
              v22[664] = 0;
              v22[696] = 0;
              v22[728] = 0;
              (*(void (**)(__int64))(*(_QWORD*)v20 + 72LL))(v20);
            }
          }
          break;
        }
      }
    }
  }
  *(_QWORD*)(a1 + 264) = 0;
  *(_BYTE*)(a1 + 224) = 1;
  v23 = *(_QWORD*)(a1 + 232);
  if (v23 != 0) {
    v24 = *(_QWORD*)(v23 + 104);
    if ((*(_BYTE*)(v24 + 16) & 1) == 0) {
      *(_BYTE*)(v24 + 16) = 1;
      *(_BYTE*)(v24 + 17) &= ~2u;
      *(_BYTE*)(v24 + 18) &= ~2u;
      *(_BYTE*)(v24 + 19) &= ~2u;
      *(_BYTE*)(v24 + 20) &= ~2u;
      v25 = *(_BYTE**)(v24 + 8);
      v25[632] = 0;
      v25[664] = 0;
      v25[696] = 0;
      v25[728] = 0;
      (*(void (**)(__int64))(*(_QWORD*)v24 + 64LL))(v24);
      v26 = *(_BYTE**)(v24 + 8);
      v27 = v26[300] == 3 && v26[301] == 3;
      if (v27 || v26[302] == 1) {
        (*(void (**)(__int64))(*(_QWORD*)v24 + 72LL))(v24);
      }
    }
  }
  game_zview_CharacterAnim_CommitReduceFlag(*(_QWORD*)(a1 + 344));
  v28 = *(_QWORD*)(a1 + 336);
  v29 = *(_QWORD*)(*(_QWORD*)(v28 + 8) + 232LL);
  if (v29 != 0) {
    v30 = *(_QWORD*)(v29 + 112);
    if (v30 != 0 && *(_BYTE*)(v28 + 124) == 1) {
      *(_QWORD*)(v30 + 156) = 0;
      *(_DWORD*)(v30 + 164) = 1065353216;
      if (*(_BYTE*)(v28 + 124) == 1) {
        *(_BYTE*)(v28 + 124) = 0;
      }
    }
  }
  GameHr_d19fc0(*(_QWORD**)(a1 + 344));
  GameHr_10c05f0(*(_QWORD*)(a1 + 352));
  CharacterModel_cf5da0(a1);
  result = CharacterModel_cf4780(a1);
  v32 = *(_DWORD*)(a1 + 8);
  if (*(_BYTE*)(a1 + 44) != 1 || *(_DWORD*)(a1 + 40) != v32) {
    *(_DWORD*)(a1 + 48) = v32;
    *(_BYTE*)(a1 + 52) = 1;
  }
  if ((*(_BYTE*)(a1 + 128) & 1) == 0 && (*(_BYTE*)(a1 + 129) & 1) != 0) {
    return WaitRelease_cfa2a0(a1 + 32);
  }
  return result;
}

#pragma GCC visibility pop
