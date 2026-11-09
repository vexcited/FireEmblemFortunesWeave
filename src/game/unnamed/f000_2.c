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

__int64 GameHr_cf6d00(__int64 a1)
{
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
  unsigned int v33;
  float v34;
  __int64 v35;
  _QWORD v36[4];
  _QWORD* v37;
  char v38;

  *(_BYTE*)(a1 + 364) = 1;
  if (*GameData_212d168 == 4 || *GameData_212d168 == 2) {
    v3 = GameRoutine_cf7940(a1);
    if (v3 != 0 && (*(_BYTE*)(v3 + 288) & 1) == 0) {
      *(_BYTE*)(v3 + 288) = 1;
    }
  }
  if (*(_BYTE*)(a1 + 145) == 1) {
    v4 = GameRoutine_cf7940(a1);
    if (v4 != 0) {
      *(_BYTE*)(v4 + 289) = 1;
    }
  }
  v5 = *(_QWORD*)(a1 + 232);
  v38 = 0;
  if (v5 == 0) {
    goto LABEL_46;
  }
  *(_BYTE*)(a1 + 365) = 0;
  v36[0] = GameData_1fd8670;
  v36[1] = &v38;
  v37 = v36;
  GameRoutine_1083e90(v5, v36);
  if (v37 == v36) {
    v6 = 32;
  }
  else {
    if (v37 == nullptr) {
      goto LABEL_18;
    }
    v6 = 40;
  }
  (*(void (**)(__int64))(*v37 + v6))((__int64)v37);
LABEL_18:
  v7 = *(_QWORD*)(a1 + 232);
  if (v7 != 0) {
    v8 = *(_QWORD*)(a1 + 232);
    v36[0] = GameData_2007458;
    v37 = v36;
    LOBYTE(v36[1]) = 1;
    GameRoutine_1083e90(v8, v36);
    if (v37 == v36) {
      v9 = 32;
    }
    else {
      if (v37 == nullptr) {
        goto LABEL_24;
      }
      v9 = 40;
    }
    (*(void (**)(__int64))(*v37 + v9))((__int64)v37);
  LABEL_24:
    v36[0] = GameData_20074d8;
    v37 = v36;
    LOBYTE(v36[1]) = 1;
    GameRoutine_1083e90(v7, v36);
    if (v37 == v36) {
      v10 = 32;
    }
    else {
      if (v37 == nullptr) {
        goto LABEL_29;
      }
      v10 = 40;
    }
    (*(void (**)(__int64))(*v37 + v10))((__int64)v37);
  LABEL_29:
    if (*(float*)(v7 + 348) == 1.0f) {
      goto LABEL_40;
    }
    *(_DWORD*)(v7 + 348) = 1065353216;
    v36[0] = GameData_20076d8;
    LODWORD(v36[1]) = 1065353216;
    v37 = v36;
    GameRoutine_1083e90(v7, v36);
    if (v37 == v36) {
      v11 = 32;
    }
    else {
      if (v37 == nullptr) {
        goto LABEL_35;
      }
      v11 = 40;
    }
    (*(void (**)(__int64))(*v37 + v11))((__int64)v37);
  LABEL_35:
    v36[0] = GameData_2007758;
    v37 = v36;
    LODWORD(v36[1]) = 1065353216;
    GameRoutine_1083e90(v7, v36);
    if (v37 == v36) {
      v12 = 32;
    }
    else {
      if (v37 == nullptr) {
        goto LABEL_40;
      }
      v12 = 40;
    }
    (*(void (**)(__int64))(*v37 + v12))((__int64)v37);
  LABEL_40:
    LOBYTE(v36[1]) = 0;
    v36[0] = GameData_1fd8260;
    v37 = v36;
    GameRoutine_1083e90(v7, v36);
    if (v37 == v36) {
      v13 = 32;
    }
    else {
      if (v37 == nullptr) {
      LABEL_45:
        *(_DWORD*)(v7 + 340) &= ~0x2000u;
        goto LABEL_46;
      }
      v13 = 40;
    }
    (*(void (**)(__int64))(*v37 + v13))((__int64)v37);
    goto LABEL_45;
  }
LABEL_46:
  if (*(_BYTE*)(a1 + 145) == 1) {
    v14 = GameRoutine_cf7940(a1);
    if (v14 != 0) {
      explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212ec70,
                                      memory_order_acquire);
      v16 = GameData_212ec68;
      if ((explicit & 1) == 0) {
        v35 = v14;
        v33 = (unsigned int)(*(struct PseudoSret*)(GameData_212ec70) =
                                 GameRoutine_1a09fd0(GameData_212ec70),
                             (void*)(GameData_212ec70));
        v14 = v35;
        if (v33 != 0) {
          *v16 = GameRoutine_540(0, "HitboxModule", 12);
          GameRoutine_1a09fe0(GameData_212ec70, v34);
          v14 = v35;
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
  GameRoutine_d1d160(*(_QWORD*)(a1 + 344));
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
  GameRoutine_d19fc0(*(_QWORD*)(a1 + 344));
  GameRoutine_10c05f0(*(_QWORD*)(a1 + 352));
  GameRoutine_cf5da0(a1);
  result = GameRoutine_cf4780(a1);
  v32 = *(_DWORD*)(a1 + 8);
  if (*(_BYTE*)(a1 + 44) != 1 || *(_DWORD*)(a1 + 40) != v32) {
    *(_DWORD*)(a1 + 48) = v32;
    *(_BYTE*)(a1 + 52) = 1;
  }
  if ((*(_BYTE*)(a1 + 128) & 1) == 0 && (*(_BYTE*)(a1 + 129) & 1) != 0) {
    return GameRoutine_cfa2a0(a1 + 32);
  }
  return result;
}

#pragma GCC visibility pop
