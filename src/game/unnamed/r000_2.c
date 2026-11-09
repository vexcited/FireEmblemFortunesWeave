#include "decomp/pseudo_helpers.h"
#pragma GCC visibility push(hidden)

extern char GameData_1a9f09e;
extern __int64* GameData_212d480[2];
extern __int64 GameData_212e2d0[2];
extern __int64* GameData_2135fb8[3];
extern __int64 GameData_2198f88;
extern __int64 GameData_2198f90;
__int64 GameRoutine_112290(_QWORD, float);
__int64 GameRoutine_14e360(_QWORD);
__int64 GameRoutine_15a740(__int64*, __int64, __int64);
__int64 GameRoutine_15b4c0(_QWORD, _QWORD);
__int64 GameRoutine_190020(_QWORD, _QWORD);
__int64 GameRoutine_190200(_QWORD, _QWORD);
__int64 GameRoutine_190240(_QWORD);
__int64 GameRoutine_1a09b70(_QWORD);
__int64 GameRoutine_1a09b80(_QWORD);
__int64 GameRoutine_1a09c70(_QWORD);
__int64 GameRoutine_1a09cf0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2760a0(_QWORD);
__int64 GameRoutine_276120(_QWORD, _QWORD);
__int64 GameRoutine_2763f0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_2764c0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_276720(_QWORD, _QWORD);
__int64 GameRoutine_2767b0(_QWORD);
__int64 GameRoutine_277ea0(_QWORD);
__int64 GameRoutine_278770(_QWORD, _QWORD);
__int64 GameRoutine_2798a0(_QWORD);
__int64 GameRoutine_27b820(_QWORD);
__int64 GameRoutine_284370(_QWORD);
__int64 GameRoutine_2843a0(_QWORD);
__int64 GameRoutine_28b580(_QWORD);
__int64 GameRoutine_2a7b20(__int64 result);
__int64 GameRoutine_2abf10(_QWORD, _QWORD);
__int64 GameRoutine_2abfb0(_QWORD);
__int64 GameRoutine_2b9060(void);
__int64 GameRoutine_2b9950(void);
__int64 GameRoutine_55d690(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                           _QWORD);
__int64 GameRoutine_576aa0(_QWORD, _QWORD);
__int64 GameRoutine_577d40(_QWORD, _QWORD);
__int64 GameRoutine_578920(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_578940(_QWORD, _QWORD);
__int64 GameRoutine_58c820(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5987a0(_QWORD);
__int64 GameRoutine_5a0010(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fcd30(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fd650(_QWORD, _QWORD);
__int64 GameRoutine_5fd970(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fdcb0(_QWORD, _QWORD);
__int64 GameRoutine_5fdce0(_QWORD, _QWORD);
__int64 GameRoutine_5fe0a0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_5fe120(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
void GameRoutine_651250(void*, unsigned __int64);
__int64 GameRoutine_a2af20(_QWORD, _QWORD, const char*, ...);
void __attribute__((noreturn)) GameRoutine_a36650(_QWORD, _QWORD);

__int64 GameHr_111080(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;

  GameRoutine_1a09b70(a1 + 96);
  v4 = *(unsigned int*)(a1 + 64);
  if ((int)v4 < 1) {
  LABEL_13:
    GameRoutine_1a09b80(a1 + 96);
    v12 = GameData_212d480[0];
    v13 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 48, 32);
    v13[2] = 0;
    v14 = v13 + 2;
    v15 = v13;
    v13[3] = 0;
    v13[4] = 0;
    v13[5] = 0;
    *v13 = 0xFFFFFFFF00000004LL;
    v13[1] = 0;
    GameRoutine_190020(v13 + 2, &GameData_1a9f09e);
    *((_BYTE*)v15 + 40) = 0;
    *(_DWORD*)v15 = 2;
    GameRoutine_190200(v14, a2);
    GameRoutine_1a09b70(a1 + 96);
    v16 = (_QWORD*)(*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)*v12 + 16LL))(*v12, 24, 32);
    v16[1] = a1 + 72;
    v16[2] = v15;
    *v16 = 0;
    v17 = *(_QWORD*)(a1 + 72);
    *v16 = v17;
    *(_QWORD*)(v17 + 8) = v16;
    *(_QWORD*)(a1 + 72) = v16;
    ++*(_QWORD*)(a1 + 88);
    *(_BYTE*)(a1 + 129) = 0;
  }
  else {
    v5 = *(_QWORD*)(a1 + 8);
    v6 = GameRoutine_1a09c70(a2);
    v8 = (_QWORD*)(v5 + 24);
    v9 = v6;
    while (1) {
      v10 = *((_BYTE*)v8 - 16) >> 1;
      if ((*(_BYTE*)(v8 - 2) & 1) != 0) {
        v10 = *(v8 - 1);
      }
      if (v9 == v10) {
        if (v9 == -1) {
          GameRoutine_a36650(v6, v7);
        }
        v11 = (*(_BYTE*)(v8 - 2) & 1) != 0 ? (_QWORD*)*v8
                                           : (_QWORD*)((char*)v8 - 15);
        v6 = GameRoutine_1a09cf0(v11, a2, v9);
        if ((_DWORD)v6 == 0) {
          break;
        }
      }
      v8 += 7;
      if (--v4 == 0) {
        goto LABEL_13;
      }
    }
  }
  return GameRoutine_1a09b80(a1 + 96);
}

__int64 GameHr_111220(__int64 a1, __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;
  _QWORD* v11;
  __int64* v12;
  _QWORD* v13;
  _QWORD* v14;
  _QWORD* v15;
  _QWORD* v16;
  __int64 v17;

  GameRoutine_1a09b70(a1 + 96);
  v4 = *(unsigned int*)(a1 + 64);
  if ((int)v4 >= 1) {
    v5 = *(_QWORD*)(a1 + 8);
    v6 = GameRoutine_1a09c70(a2);
    v8 = (_QWORD*)(v5 + 24);
    v9 = v6;
    while (1) {
      v10 = *((_BYTE*)v8 - 16) >> 1;
      if ((*(_BYTE*)(v8 - 2) & 1) != 0) {
        v10 = *(v8 - 1);
      }
      if (v9 == v10) {
        if (v9 == -1) {
          GameRoutine_a36650(v6, v7);
        }
        v11 = (*(_BYTE*)(v8 - 2) & 1) != 0 ? (_QWORD*)*v8
                                           : (_QWORD*)((char*)v8 - 15);
        v6 = GameRoutine_1a09cf0(v11, a2, v9);
        if ((_DWORD)v6 == 0) {
          break;
        }
      }
      v8 += 7;
      if (--v4 == 0) {
        return GameRoutine_1a09b80(a1 + 96);
      }
    }
    GameRoutine_1a09b80(a1 + 96);
    v12 = GameData_212d480[0];
    v13 = (_QWORD*)(*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], 48, 32);
    v13[2] = 0;
    v14 = v13 + 2;
    v15 = v13;
    v13[3] = 0;
    v13[4] = 0;
    v13[5] = 0;
    *v13 = 0xFFFFFFFF00000004LL;
    v13[1] = 0;
    GameRoutine_190020(v13 + 2, &GameData_1a9f09e);
    *((_BYTE*)v15 + 40) = 0;
    *(_DWORD*)v15 = 3;
    GameRoutine_190200(v14, a2);
    GameRoutine_1a09b70(a1 + 96);
    v16 = (_QWORD*)(*(__int64 (**)(__int64, __int64, __int64))(
        *(_QWORD*)*v12 + 16LL))(*v12, 24, 32);
    v16[1] = a1 + 72;
    v16[2] = v15;
    *v16 = 0;
    v17 = *(_QWORD*)(a1 + 72);
    *v16 = v17;
    *(_QWORD*)(v17 + 8) = v16;
    *(_QWORD*)(a1 + 72) = v16;
    ++*(_QWORD*)(a1 + 88);
    *(_BYTE*)(a1 + 129) = 0;
  }
  return GameRoutine_1a09b80(a1 + 96);
}

__int64 GameHr_12dce0(_QWORD* a1, __int64 a2)
{
  float v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _BYTE* v10;
  unsigned int v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  _BYTE* v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _BYTE* v25;
  __int64 v26;
  __int64 v27;
  _BYTE* v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  _BYTE* v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  unsigned __int8 v41;
  _BYTE v42[7];
  __int64 v43;
  _BYTE* v44;

  GameRoutine_190020(&v41, a2);
  switch (*(_DWORD*)(a1[761] + 8LL)) {
  case 1:
  case 2:
  case 3:
  case 5:
  case 6:
  case 8:
  case 0xB:
  case 0xC:
    v4 = GameRoutine_112290(a1[763], v3);
    if (v4 == 0) {
      goto LABEL_55;
    }
    v5 = GameRoutine_190240(v4 + 144);
    v6 = GameRoutine_1a09c70(v5);
    v8 = v41 >> 1;
    if ((v41 & 1) != 0) {
      v8 = v43;
    }
    if (v6 != v8) {
      goto LABEL_55;
    }
    v9 = v6;
    if (v6 == -1) {
      goto LABEL_70;
    }
    if ((v41 & 1) != 0) {
      v10 = v44;
    }
    else {
      v10 = v42;
    }
    v11 = GameRoutine_1a09cf0(v10, v5, v9) == 0;
    goto LABEL_56;
  case 4:
    if (*(int*)(a1[762] + 24LL) < 1) {
      goto LABEL_55;
    }
    v19 = 0;
    v20 = 0;
    v11 = 0;
    while (1) {
      v21 = GameRoutine_112290(*(_QWORD*)a1[763] + v19, v3);
      if (v21 != 0) {
        v22 = GameRoutine_190240(v21 + 144);
        v6 = GameRoutine_1a09c70(v22);
        v23 = v41 >> 1;
        if ((v41 & 1) != 0) {
          v23 = v43;
        }
        if (v6 == v23) {
          v24 = v6;
          if (v6 == -1) {
            goto LABEL_70;
          }
          if ((v41 & 1) != 0) {
            v25 = v44;
          }
          else {
            v25 = v42;
          }
          if ((unsigned int)GameRoutine_1a09cf0(v25, v22, v24) == 0) {
            ++v11;
          }
        }
      }
      ++v20;
      v19 += 16;
      if (v20 >= *(int*)(a1[762] + 24LL)) {
        goto LABEL_56;
      }
    }
  case 7:
    if (*(int*)(a1[762] + 24LL) < 1) {
      goto LABEL_55;
    }
    v26 = 0;
    v27 = 0;
    v11 = 0;
    while (1) {
      v29 = GameRoutine_112290(*(_QWORD*)a1[763] + v26, v3);
      if (v29 != 0) {
        v30 = GameRoutine_190240(v29 + 144);
        v6 = GameRoutine_1a09c70(v30);
        v31 = v41 >> 1;
        if ((v41 & 1) != 0) {
          v31 = v43;
        }
        if (v6 == v31) {
          v32 = v6;
          if (v6 == -1) {
            goto LABEL_70;
          }
          if ((v41 & 1) != 0) {
            v28 = v44;
          }
          else {
            v28 = v42;
          }
          if ((unsigned int)GameRoutine_1a09cf0(v28, v30, v32) == 0) {
            ++v11;
          }
        }
      }
      ++v27;
      v26 += 16;
      if (v27 >= *(int*)(a1[762] + 24LL)) {
        goto LABEL_56;
      }
    }
  case 9:
    if (*(int*)(a1[762] + 24LL) < 1) {
      goto LABEL_55;
    }
    v33 = 0;
    v34 = 0;
    v11 = 0;
    while (1) {
      v37 = GameRoutine_112290(*(_QWORD*)a1[763] + v33, v3);
      if (v37 != 0) {
        v38 = GameRoutine_190240(v37 + 144);
        v6 = GameRoutine_1a09c70(v38);
        v39 = v41 >> 1;
        if ((v41 & 1) != 0) {
          v39 = v43;
        }
        if (v6 == v39) {
          v40 = v6;
          if (v6 == -1) {
            goto LABEL_70;
          }
          if ((v41 & 1) != 0) {
            v36 = v44;
          }
          else {
            v36 = v42;
          }
          if ((unsigned int)GameRoutine_1a09cf0(v36, v38, v40) == 0) {
            ++v11;
          }
        }
      }
      ++v34;
      v33 += 16;
      if (v34 >= *(int*)(a1[762] + 24LL)) {
        goto LABEL_56;
      }
    }
  case 0xA:
    if (*(int*)(a1[762] + 24LL) < 1) {
      goto LABEL_55;
    }
    v12 = 0;
    v13 = 0;
    v11 = 0;
    do {
      v14 = GameRoutine_112290(*(_QWORD*)a1[763] + v12, v3);
      if (v14 != 0) {
        v15 = GameRoutine_190240(v14 + 144);
        v6 = GameRoutine_1a09c70(v15);
        v16 = v41 >> 1;
        if ((v41 & 1) != 0) {
          v16 = v43;
        }
        if (v6 == v16) {
          v17 = v6;
          if (v6 == -1) {
          LABEL_70:
            GameRoutine_a36650(v6, v7);
          }
          if ((v41 & 1) != 0) {
            v18 = v44;
          }
          else {
            v18 = v42;
          }
          if ((unsigned int)GameRoutine_1a09cf0(v18, v15, v17) == 0) {
            ++v11;
          }
        }
      }
      ++v13;
      v12 += 16;
    } while (v13 < *(int*)(a1[762] + 24LL));
  LABEL_56:
    if ((v41 & 1) != 0) {
      (*(void (**)(_QWORD, _BYTE*))(**(_QWORD**)GameData_212d480[0] + 24LL))(
          *GameData_212d480[0], v44);
    }
    return v11;
  default:
  LABEL_55:
    v11 = 0;
    goto LABEL_56;
  }
}

bool GameHr_13b140(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 24LL))(*a2);
  v4 = GameRoutine_1a09c70(v3);
  v6 = *(_BYTE*)v2 >> 1;
  if ((*(_BYTE*)v2 & 1) != 0) {
    v6 = *(_QWORD*)(v2 + 8);
  }
  if (v4 != v6) {
    return false;
  }
  v7 = v4;
  if (v4 == -1) {
    GameRoutine_a36650(-1, v5);
  }
  if ((*(_BYTE*)v2 & 1) != 0) {
    v8 = *(_QWORD*)(v2 + 16);
  }
  else {
    v8 = v2 + 1;
  }
  return (unsigned int)GameRoutine_1a09cf0(v8, v3, v7) == 0;
}

bool GameHr_13b290(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 24LL))(*a2);
  v4 = GameRoutine_1a09c70(v3);
  v6 = *(_BYTE*)v2 >> 1;
  if ((*(_BYTE*)v2 & 1) != 0) {
    v6 = *(_QWORD*)(v2 + 8);
  }
  if (v4 != v6) {
    return false;
  }
  v7 = v4;
  if (v4 == -1) {
    GameRoutine_a36650(-1, v5);
  }
  if ((*(_BYTE*)v2 & 1) != 0) {
    v8 = *(_QWORD*)(v2 + 16);
  }
  else {
    v8 = v2 + 1;
  }
  return (unsigned int)GameRoutine_1a09cf0(v8, v3, v7) == 0;
}

bool GameHr_13b3e0(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = (*(__int64 (**)(_QWORD))(*(_QWORD*)*a2 + 24LL))(*a2);
  v4 = GameRoutine_1a09c70(v3);
  v6 = *(_BYTE*)v2 >> 1;
  if ((*(_BYTE*)v2 & 1) != 0) {
    v6 = *(_QWORD*)(v2 + 8);
  }
  if (v4 != v6) {
    return false;
  }
  v7 = v4;
  if (v4 == -1) {
    GameRoutine_a36650(-1, v5);
  }
  if ((*(_BYTE*)v2 & 1) != 0) {
    v8 = *(_QWORD*)(v2 + 16);
  }
  else {
    v8 = v2 + 1;
  }
  return (unsigned int)GameRoutine_1a09cf0(v8, v3, v7) == 0;
}

__int64 GameHr_13da20(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = GameRoutine_190240(*a2 + 5736LL);
  result = GameRoutine_1a09c70(v4);
  v7 = *(_BYTE*)v2 >> 1;
  if ((*(_BYTE*)v2 & 1) != 0) {
    v7 = *(_QWORD*)(v2 + 8);
  }
  if (result == v7) {
    v8 = result;
    if (result == -1) {
      GameRoutine_a36650(-1, v6);
    }
    if ((*(_BYTE*)v2 & 1) != 0) {
      v9 = *(_QWORD*)(v2 + 16);
    }
    else {
      v9 = v2 + 1;
    }
    result = GameRoutine_1a09cf0(v9, v4, v8);
    if ((_DWORD)result == 0) {
      ++**(_DWORD**)(a1 + 8);
    }
  }
  return result;
}

__int64 GameHr_13dc90(__int64 a1, _QWORD* a2)
{
  __int64 v2;
  __int64 v4;
  __int64 result;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;

  v2 = *(_QWORD*)(a1 + 16);
  v4 = GameRoutine_190240(*a2 + 5736LL);
  result = GameRoutine_1a09c70(v4);
  v7 = *(_BYTE*)v2 >> 1;
  if ((*(_BYTE*)v2 & 1) != 0) {
    v7 = *(_QWORD*)(v2 + 8);
  }
  if (result == v7) {
    v8 = result;
    if (result == -1) {
      GameRoutine_a36650(-1, v6);
    }
    if ((*(_BYTE*)v2 & 1) != 0) {
      v9 = *(_QWORD*)(v2 + 16);
    }
    else {
      v9 = v2 + 1;
    }
    result = GameRoutine_1a09cf0(v9, v4, v8);
    if ((_DWORD)result == 0) {
      ++**(_DWORD**)(a1 + 8);
    }
  }
  return result;
}

__int64 GameHr_15aeb0(__int64 result, const char* a2, const char* a3, char a4)
{
  __int64 v6;
  const char* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  const char* v12;
  __int64 v13;
  __int64* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _BYTE v22[1024];

  if ((*(_BYTE*)(result + 17) & 1) == 0) {
    v6 = result;
    if (a3 != nullptr) {
      v7 = a3;
    }
    else {
      v7 = "noname";
    }
    if (*(_BYTE*)(result + 4137) == 1) {
      v8 = GameRoutine_1a09c70(v7);
      if ((*(_BYTE*)(v6 + 56) & 1) != 0) {
        v10 = *(_QWORD*)(v6 + 64);
      }
      else {
        v10 = *(_BYTE*)(v6 + 56) >> 1;
      }
      if ((v10 & v8) == 0xFFFFFFFFFFFFFFFFLL) {
        GameRoutine_a36650(v8, v9);
      }
      v11 = 0;
    }
    else {
      v11 = result + 56;
      ++*(_DWORD*)(result + 4144);
      *(_BYTE*)(result + 4137) = 1;
      GameRoutine_190200(result + 56, v7);
    }
    *(_BYTE*)(v11 + 4080) = 0;
    v12 = (const char*)(*(__int64 (**)(__int64))(*(_QWORD*)GameData_2198f90 +
                                                 128LL))(GameData_2198f90);
    GameRoutine_a2af20(v22, 1024, "%s%s", v12, a2);
    *(_BYTE*)(v11 + 905) = (a4 & 1) == 0;
    GameRoutine_276120(v11 + 32, v22);
    v13 = (unsigned int)GameRoutine_2843a0(v11 + 704);
    v14 = GameData_212d480[0];
    v15 = (*(__int64 (**)(_QWORD, __int64, __int64))(
        **(_QWORD**)GameData_212d480[0] + 16LL))(*GameData_212d480[0], v13, 64);
    v16 = *(_QWORD*)(v11 + 3920);
    *(_QWORD*)(v11 + 3920) = v15;
    if (v16 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v14 + 24LL))(*v14);
      v17 = *(_QWORD*)(v11 + 3920);
    }
    else {
      v17 = v15;
    }
    GameRoutine_2763f0(v11 + 32, v17, v13);
    v18 = (unsigned int)GameRoutine_284370(v11 + 704);
    v19 = (*(__int64 (**)(__int64, __int64, __int64))(*(_QWORD*)*v14 + 16LL))(
        *v14, v18, 64);
    v20 = *(_QWORD*)(v11 + 3928);
    *(_QWORD*)(v11 + 3928) = v19;
    if (v20 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)*v14 + 24LL))(*v14);
      v21 = *(_QWORD*)(v11 + 3928);
    }
    else {
      v21 = v19;
    }
    GameRoutine_2764c0(v11 + 32, v21, v18);
    return GameRoutine_15a740((__int64*)v6, v11, v11 + 32);
  }
  return result;
}

__int64 GameHr_15b090(__int64 result, __int64 a2, const char* a3)
{
  __int64 v4;
  const char* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  if ((*(_BYTE*)(result + 17) & 1) == 0) {
    v4 = result;
    if (a3 != nullptr) {
      v5 = a3;
    }
    else {
      v5 = "noname";
    }
    if (*(_BYTE*)(result + 4137) == 1) {
      v6 = GameRoutine_1a09c70(v5);
      if ((*(_BYTE*)(v4 + 56) & 1) != 0) {
        v8 = *(_QWORD*)(v4 + 64);
      }
      else {
        v8 = *(_BYTE*)(v4 + 56) >> 1;
      }
      if ((v8 & v6) == 0xFFFFFFFFFFFFFFFFLL) {
        GameRoutine_a36650(v6, v7);
      }
      v9 = 0;
    }
    else {
      v9 = result + 56;
      ++*(_DWORD*)(result + 4144);
      *(_BYTE*)(result + 4137) = 1;
      GameRoutine_190200(result + 56, v5);
    }
    *(_BYTE*)(v9 + 4080) = 1;
    GameRoutine_276720(v9 + 1584, a2);
    v10 = *(_QWORD*)(v9 + 3920);
    *(_QWORD*)(v9 + 3920) = 0;
    if (v10 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_2198f88 + 24LL))(
          GameData_2198f88);
    }
    v11 = *(_QWORD*)(v9 + 3928);
    *(_QWORD*)(v9 + 3928) = 0;
    if (v11 != 0) {
      (*(void (**)(__int64))(*(_QWORD*)GameData_2198f88 + 24LL))(
          GameData_2198f88);
    }
    return GameRoutine_15a740((__int64*)v4, v9, v9 + 1584);
  }
  return result;
}

__int64 GameHr_15b1b0(__int64 result, const char* a2)
{
  __int64 v2;
  const char* v3;
  __int64 v4;
  _QWORD* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
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
  int v21;

  if ((*(_BYTE*)(result + 17) & 1) != 0) {
    return result;
  }
  v2 = result;
  if (a2 != nullptr) {
    v3 = a2;
  }
  else {
    v3 = "noname";
  }
  result = GameRoutine_1a09c70(v3);
  if (result == -1) {
    goto LABEL_50;
  }
  GameRoutine_15b4c0(v2, v2 + 4072);
  v5 = (_QWORD*)GameData_212e2d0[0];
  if (*(_DWORD*)(v2 + 4144) == 1) {
    if ((*(int (**)(_QWORD))(**(_QWORD**)GameData_212e2d0[0] + 304LL))(
            *(_QWORD*)GameData_212e2d0[0]) >= 1) {
      GameRoutine_2b9950();
    }
    if ((*(int (**)(_QWORD))(*(_QWORD*)*v5 + 312LL))(*v5) >= 1) {
      GameRoutine_2b9060();
    }
  }
  GameRoutine_2798a0(v2 + 2392);
  GameRoutine_277ea0(v2 + 3784);
  GameRoutine_277ea0(v2 + 3880);
  GameRoutine_27b820(v2 + 3208);
  if (*(_BYTE*)(v2 + 4136) == 1) {
    result = GameRoutine_2767b0(v2 + 1640);
    v6 = GameData_212d480[0];
    if (*(_DWORD*)(v2 + 4144) != 1) {
      goto LABEL_21;
    }
  }
  else {
    result = GameRoutine_2760a0(v2 + 88);
    v6 = GameData_212d480[0];
    if (*(_DWORD*)(v2 + 4144) != 1) {
      goto LABEL_21;
    }
  }
  if ((*(int (**)(_QWORD))(*(_QWORD*)*v5 + 304LL))(*v5) >= 1 &&
      *(_QWORD*)(v2 + 4264) != 0) {
    v7 = *v6;
    *(_QWORD*)(v2 + 4264) = 0;
    (*(void (**)(__int64))(*(_QWORD*)v7 + 24LL))(v7);
  }
  result = (*(__int64 (**)(_QWORD))(*(_QWORD*)*v5 + 312LL))(*v5);
  if ((int)result >= 1 && *(_QWORD*)(v2 + 4272) != 0) {
    v8 = *v6;
    *(_QWORD*)(v2 + 4272) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v8 + 24LL))(v8);
  }
LABEL_21:
  if (*(_QWORD*)(v2 + 4032) != 0) {
    v9 = *v6;
    *(_QWORD*)(v2 + 4032) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v9 + 24LL))(v9);
  }
  if (*(_QWORD*)(v2 + 4040) != 0) {
    v10 = *v6;
    *(_QWORD*)(v2 + 4040) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v10 + 24LL))(v10);
  }
  if (*(_QWORD*)(v2 + 4000) != 0) {
    v11 = *v6;
    *(_QWORD*)(v2 + 4000) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v11 + 24LL))(v11);
  }
  if (*(_QWORD*)(v2 + 4024) != 0) {
    v12 = *(_QWORD*)v2;
    *(_QWORD*)(v2 + 4024) = 0;
    result = (*(__int64 (**)(__int64))(v12 + 360))(v2);
  }
  if (*(_QWORD*)(v2 + 4016) != 0) {
    v13 = *v6;
    *(_QWORD*)(v2 + 4016) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v13 + 24LL))(v13);
  }
  if (*(_QWORD*)(v2 + 4008) != 0) {
    v14 = *(_QWORD*)v2;
    *(_QWORD*)(v2 + 4008) = 0;
    result = (*(__int64 (**)(__int64))(v14 + 360))(v2);
  }
  if (*(_QWORD*)(v2 + 3992) != 0) {
    v15 = *v6;
    *(_QWORD*)(v2 + 3992) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v15 + 24LL))(v15);
  }
  if (*(_QWORD*)(v2 + 3984) != 0) {
    v16 = *v6;
    *(_QWORD*)(v2 + 3984) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v16 + 24LL))(v16);
  }
  if (*(_QWORD*)(v2 + 3976) != 0) {
    v17 = *v6;
    *(_QWORD*)(v2 + 3976) = 0;
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v17 + 24LL))(v17);
  }
  if (*(_BYTE*)(v2 + 4137) == 1) {
    result = GameRoutine_1a09c70(v3);
    v18 = *(_BYTE*)(v2 + 56) >> 1;
    if ((*(_BYTE*)(v2 + 56) & 1) != 0) {
      v18 = *(_QWORD*)(v2 + 64);
    }
    if (result == v18) {
      v19 = result;
      if (result != -1) {
        if ((*(_BYTE*)(v2 + 56) & 1) != 0) {
          v20 = *(_QWORD*)(v2 + 72);
        }
        else {
          v20 = v2 + 57;
        }
        result = GameRoutine_1a09cf0(v20, v3, v19);
        if ((_DWORD)result == 0) {
          v21 = *(_DWORD*)(v2 + 4144);
          *(_BYTE*)(v2 + 4137) = 0;
          *(_DWORD*)(v2 + 4144) = v21 - 1;
        }
        return result;
      }
    LABEL_50:
      GameRoutine_a36650(result, v4);
    }
  }
  return result;
}

__int64 GameHr_162b10(__int64 a1, const char* a2)
{
  const char* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  if (*(_BYTE*)(a1 + 4137) == 1) {
    if (a2 != nullptr) {
      v3 = a2;
    }
    else {
      v3 = "noname";
    }
    v4 = GameRoutine_1a09c70(v3);
    if ((*(_BYTE*)(a1 + 56) & 1) != 0) {
      v6 = *(_QWORD*)(a1 + 64);
    }
    else {
      v6 = *(_BYTE*)(a1 + 56) >> 1;
    }
    if ((v4 & v6) == 0xFFFFFFFFFFFFFFFFLL) {
      GameRoutine_a36650(v4, v5);
    }
  }
  return 0;
}

__int64 GameHr_1672c0(__int64 result, unsigned int** a2)
{
  unsigned int* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  v2 = *a2;
  v3 = *((_QWORD*)*a2 + 722);
  if (v3 != 0) {
    v4 = *(_QWORD*)(result + 8);
    result = GameRoutine_1a09c70(*((_QWORD*)*a2 + 722));
    v6 = *(_BYTE*)v4 >> 1;
    if ((*(_BYTE*)v4 & 1) != 0) {
      v6 = *(_QWORD*)(v4 + 8);
    }
    if (result == v6) {
      v7 = result;
      if (result == -1) {
        GameRoutine_a36650(-1, v5);
      }
      if ((*(_BYTE*)v4 & 1) != 0) {
        v8 = *(_QWORD*)(v4 + 16);
      }
      else {
        v8 = v4 + 1;
      }
      result = GameRoutine_1a09cf0(v8, v3, v7);
      if ((_DWORD)result == 0) {
        result = GameRoutine_278770(v4 + 32, v2[1442]);
        if ((_DWORD)result != -1) {
          return (*(__int64 (**)(unsigned int*))(*(_QWORD*)v2 + 264LL))(v2);
        }
      }
    }
  }
  return result;
}

__int64 GameHr_2a7e40(__int64 result)
{
  __int16 v1;
  __int64 v2;
  int v3;
  int v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  _DWORD* v9;
  __int64 v10;
  _DWORD* v11;
  __int64 v12;
  float v13;
  __int64 v14;
  float v15;
  int v16;
  float v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  float* v21;
  __int64 v22;
  float* v23;
  __int16 v24;
  int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  _BOOL4 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;

  if (*(_BYTE*)(result + 216) != 1) {
    return result;
  }
  v1 = *(_WORD*)(result + 232);
  v2 = result;
  if ((v1 & 1) == 0 || (*(_BYTE*)(result + 217) & 1) == 0) {
    v3 = 0;
    if (*(_BYTE*)(result + 218) == 0 || (v1 & 2) == 0) {
      goto LABEL_33;
    }
    goto LABEL_29;
  }
  if ((*(_BYTE*)(result + 218) & 1) != 0) {
    v3 = 0;
    if ((v1 & 2) == 0) {
      goto LABEL_33;
    }
    goto LABEL_29;
  }
  v4 = *(_DWORD*)(result + 196);
  if (v4 >= 1) {
    v5 = *(_DWORD*)(result + 240);
    v6 = v4 & 7;
    if ((unsigned int)v4 >= 8) {
      v8 = 0;
      v9 = (_DWORD*)result;
      v10 = -(__int64)(v4 & 0x7FFFFFF8);
      do {
        v9[3] = v5;
        v9[27] = v5;
        v8 -= 8;
        v9[51] = v5;
        v9[75] = v5;
        v9[99] = v5;
        v9[123] = v5;
        v9[147] = v5;
        v9[171] = v5;
        v9 += 192;
      } while (v10 != v8);
      v7 = -v8;
    }
    else {
      v7 = 0;
    }
    if (v6 != 0) {
      v11 = (_DWORD*)(result + 96 * v7 + 12);
      do {
        *v11 = v5;
        v11 += 24;
        --v6;
      } while (v6 != 0);
    }
  }
  v12 = GameRoutine_2a7b20(result);
  v13 = *(float*)(v2 + 236);
  v14 = GameRoutine_14e360(v12);
  result = GameRoutine_28b580(v14);
  v16 = *(_DWORD*)(v2 + 196);
  if (v16 >= 1) {
    v17 = v13 * v15;
    v18 = v16 & 7;
    if ((unsigned int)v16 >= 8) {
      v20 = 0;
      v21 = (float*)v2;
      v22 = -(__int64)(v16 & 0x7FFFFFF8);
      do {
        v21[2] = v17;
        v21[26] = v17;
        v20 -= 8;
        v21[50] = v17;
        v21[74] = v17;
        v21[98] = v17;
        v21[122] = v17;
        v21[146] = v17;
        v21[170] = v17;
        v21 += 192;
      } while (v22 != v20);
      v19 = -v20;
    }
    else {
      v19 = 0;
    }
    if (v18 != 0) {
      v23 = (float*)(v2 + 96 * v19 + 8);
      do {
        *v23 = v17;
        v23 += 24;
        --v18;
      } while (v18 != 0);
    }
  }
  v24 = *(_WORD*)(v2 + 232);
  v3 = 1;
  *(_BYTE*)(v2 + 218) = 1;
  v1 = v24 & 0xFFF2;
  *(_WORD*)(v2 + 232) = v1;
  if ((v1 & 2) != 0) {
  LABEL_29:
    if ((*(_BYTE*)(v2 + 217) & 1) != 0) {
      v25 = *(unsigned __int8*)(v2 + 219);
      *(_WORD*)(v2 + 232) = v1 & 0xFFFD;
      *(_BYTE*)(v2 + 220) = v25;
      if (v25 != 0) {
        v3 = 2;
      }
      else {
        v3 = 1;
      }
    }
  }
LABEL_33:
  if (*(int*)(v2 + 196) < 1) {
    v29 = false;
    if (v3 != 1) {
      goto LABEL_37;
    }
  }
  else {
    v26 = 0;
    v27 = v2;
    do {
      result = GameRoutine_2abfb0(v27);
      v28 = *(int*)(v2 + 196);
      ++v26;
      v27 += 96;
    } while (v26 < v28);
    v29 = (int)v28 > 0;
    if (v3 != 1) {
    LABEL_37:
      if (v3 == 2 && v29) {
        v30 = 0;
        v31 = v2;
        do {
          result = GameRoutine_2abf10(v31, 2);
          ++v30;
          v31 += 96;
        } while (v30 < *(int*)(v2 + 196));
      }
      return result;
    }
  }
  if (v29) {
    v32 = 0;
    v33 = v2;
    do {
      result = GameRoutine_2abf10(v33, 0);
      ++v32;
      v33 += 96;
    } while (v32 < *(int*)(v2 + 196));
  }
  return result;
}

void GameHr_565630(_QWORD* a1)
{
  *a1 = GameData_2135fb8[0] + 2;
  GameRoutine_55d690(a1, 0, 12, 0, 0, 0, 1);
  GameRoutine_651250(a1, 0x28u);
}

__int64 GameHr_5926a0(__int64 result, __int64 a2, __int64 a3)
{
  _BYTE* v3;
  int* v4;
  int* v5;
  __int64 v8;
  char v9;
  int v10;
  unsigned int v11;
  int* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64* v16;
  __int64 v17;
  int v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64 v22;
  __int64 v23;
  int v24;
  unsigned int v25;
  int* v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64* v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  __int64* v35;
  __int64 v36;
  __int64 v37;
  int v38;
  unsigned int v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64* v43;
  __int64 v44;
  int v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64* v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  _QWORD v53[2];

  v3 = *(_BYTE**)(result + 88);
  v4 = (int*)(result + 380);
  v5 = (int*)(result + 376);
  v8 = result;
  v9 = v3[8];
  if ((v9 & 4) != 0 && (*(_DWORD*)(result + 212) & 0x80000000) == 0) {
    v10 = (unsigned __int8)v3[15];
    v11 = 6;
    if (v10 > 2) {
      if (v10 == 3) {
        v11 = 3;
        goto LABEL_12;
      }
      v12 = (int*)(result + 376);
      if (v10 == 4) {
        v11 = 5;
        goto LABEL_12;
      }
    }
    else if (v10 == 1) {
      v11 = 8;
      v12 = (int*)(result + 380);
    }
    else {
      v12 = (int*)(result + 376);
      if (v10 == 2) {
        v11 = 7;
      LABEL_12:
        v12 = (int*)(result + 376);
      }
    }
    v13 = *v12;
    v14 = *(_QWORD*)(result + 224);
    GameRoutine_5a0010(a2, a3, v14, (unsigned int)v13);
    v15 = *(_QWORD*)(a2 + 184);
    v52 = 0;
    v16 = (__int64*)GameRoutine_578920(v15, 0, 0, 1, 1);
    v17 = *(_QWORD*)(v14 + 48);
    v52 = *v16;
    v18 = GameRoutine_5987a0(v14);
    GameRoutine_5fe0a0(a3,
                       *(unsigned int*)(v17 + 4LL * v18 * (unsigned __int8)v13),
                       4, *(_QWORD*)(v8 + 144) + 8LL, &v52);
    v19 = GameRoutine_577d40(*(_QWORD*)(a2 + 184), v11);
    GameRoutine_58c820(a3, a2, v19);
    v20 = *(_QWORD*)(a2 + 184);
    v21 = (__int64*)(*(_QWORD*)(*(_QWORD*)(a2 + 200) + 16LL) +
                     16LL * *(int*)(*(_QWORD*)(a2 + 200) + 48LL));
    v23 = *v21;
    v22 = v21[1];
    v53[0] = v23 + *(int*)(v8 + 188);
    v53[1] = v22;
    GameRoutine_5fe120(a3, *(unsigned int*)(*(_QWORD*)(v14 + 24) + 4 * v13), 0,
                       v53, 560);
    result = GameRoutine_5fcd30(a3, 3, 1, v20 + 584, 6, 0);
    v3 = *(_BYTE**)(v8 + 88);
    v9 = v3[8];
  }
  if ((v9 & 2) != 0 && (*(_DWORD*)(v8 + 208) & 0x80000000) == 0) {
    v24 = (unsigned __int8)v3[14];
    v25 = 6;
    if (v24 > 2) {
      if (v24 == 3) {
        v25 = 3;
        goto LABEL_25;
      }
      v26 = v5;
      if (v24 == 4) {
        v25 = 5;
        goto LABEL_25;
      }
    }
    else if (v24 == 1) {
      v25 = 8;
      v26 = v4;
    }
    else {
      v26 = v5;
      if (v24 == 2) {
        v25 = 7;
      LABEL_25:
        v26 = v5;
      }
    }
    v27 = *v26;
    v28 = *(_QWORD*)(v8 + 224);
    GameRoutine_5a0010(a2, a3, v28, (unsigned int)v27);
    v29 = *(_QWORD*)(a2 + 184);
    v52 = 0;
    v30 = (__int64*)GameRoutine_578920(v29, 0, 0, 1, 1);
    v31 = *(_QWORD*)(v28 + 48);
    v52 = *v30;
    v32 = GameRoutine_5987a0(v28);
    GameRoutine_5fe0a0(a3,
                       *(unsigned int*)(v31 + 4LL * v32 * (unsigned __int8)v27),
                       4, *(_QWORD*)(v8 + 136) + 8LL, &v52);
    v33 = GameRoutine_577d40(*(_QWORD*)(a2 + 184), v25);
    GameRoutine_58c820(a3, a2, v33);
    v34 = *(_QWORD*)(a2 + 184);
    v35 = (__int64*)(*(_QWORD*)(*(_QWORD*)(a2 + 200) + 16LL) +
                     16LL * *(int*)(*(_QWORD*)(a2 + 200) + 48LL));
    v37 = *v35;
    v36 = v35[1];
    v53[0] = v37 + *(int*)(v8 + 184);
    v53[1] = v36;
    GameRoutine_5fe120(a3, *(unsigned int*)(*(_QWORD*)(v28 + 24) + 4 * v27), 0,
                       v53, 560);
    result = GameRoutine_5fcd30(a3, 3, 1, v34 + 584, 6, 0);
    v3 = *(_BYTE**)(v8 + 88);
    v9 = v3[8];
  }
  if ((v9 & 1) != 0 && (*(_DWORD*)(v8 + 204) & 0x80000000) == 0) {
    v38 = (unsigned __int8)v3[13];
    v39 = 6;
    if (v38 > 2) {
      if (v38 == 3) {
        v39 = 3;
      }
      else if (v38 == 4) {
        v39 = 5;
      }
    }
    else if (v38 == 1) {
      v39 = 8;
      v5 = v4;
    }
    else if (v38 == 2) {
      v39 = 7;
    }
    v40 = *v5;
    v41 = *(_QWORD*)(v8 + 224);
    GameRoutine_5a0010(a2, a3, v41, (unsigned int)v40);
    v42 = *(_QWORD*)(a2 + 184);
    v52 = 0;
    v43 = (__int64*)GameRoutine_578920(v42, 0, 0, 1, 1);
    v44 = *(_QWORD*)(v41 + 48);
    v52 = *v43;
    v45 = GameRoutine_5987a0(v41);
    GameRoutine_5fe0a0(a3,
                       *(unsigned int*)(v44 + 4LL * v45 * (unsigned __int8)v40),
                       4, *(_QWORD*)(v8 + 128) + 8LL, &v52);
    v46 = GameRoutine_577d40(*(_QWORD*)(a2 + 184), v39);
    GameRoutine_58c820(a3, a2, v46);
    v47 = *(_QWORD*)(a2 + 200);
    v48 = *(_QWORD*)(a2 + 184);
    v49 = (__int64*)(*(_QWORD*)(v47 + 16) + 16LL * *(int*)(v47 + 48));
    v51 = *v49;
    v50 = v49[1];
    v53[0] = v51 + *(int*)(v8 + 180);
    v53[1] = v50;
    GameRoutine_5fe120(a3, *(unsigned int*)(*(_QWORD*)(v41 + 24) + 4 * v40), 0,
                       v53, 560);
    return GameRoutine_5fcd30(a3, 3, 1, v48 + 584, 6, 0);
  }
  return result;
}

__int64 GameHr_593100(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  __int64 v11;
  char v12;
  int v13;
  bool v14;
  __int64* v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int v20;
  __int64 v21;
  int v22;
  __int64 v23;
  __int64 v25;
  __int64 v26;

  GameRoutine_5a0010(a2, a3, *(_QWORD*)(a1 + 56), *(unsigned int*)(a1 + 64));
  v6 =
      *(_QWORD*)GameRoutine_578920(*(_QWORD*)(a2 + 184), *(_WORD*)(a1 + 16) & 3,
                                   (*(unsigned __int16*)(a1 + 16) >> 2) & 3,
                                   (*(unsigned __int16*)(a1 + 16) >> 4) & 7,
                                   (*(_WORD*)(a1 + 16) & 0x80) != 0);
  v7 = *(_QWORD*)(a2 + 184);
  v26 = v6;
  v8 = *(_QWORD*)GameRoutine_578920(v7, *(_WORD*)(a1 + 32) & 3,
                                    (*(unsigned __int16*)(a1 + 32) >> 2) & 3,
                                    (*(unsigned __int16*)(a1 + 32) >> 4) & 7,
                                    (*(_WORD*)(a1 + 32) & 0x80) != 0);
  v9 = *(_QWORD*)(a1 + 56);
  v10 = *(_DWORD*)(a1 + 64);
  v25 = v8;
  v11 = *(_QWORD*)(v9 + 48);
  v12 = *(_BYTE*)(*(_QWORD*)(a1 + 8) + 4LL);
  v13 = GameRoutine_5987a0(v9) * v10;
  v14 = (v12 & 1) == 0;
  if ((v12 & 1) != 0) {
    v15 = &v26;
  }
  else {
    v15 = &v25;
  }
  if ((v12 & 1) != 0) {
    v16 = &v25;
  }
  else {
    v16 = &v26;
  }
  if (v14) {
    v17 = 40;
  }
  else {
    v17 = 24;
  }
  if (v14) {
    v18 = 24;
  }
  else {
    v18 = 40;
  }
  GameRoutine_5fe0a0(a3, *(unsigned int*)(v11 + 4LL * v13), 4,
                     *(_QWORD*)(a1 + v17) + 8LL, v15);
  v19 = *(_QWORD*)(a1 + 56);
  v20 = *(_DWORD*)(a1 + 64);
  v21 = *(_QWORD*)(v19 + 48);
  v22 = GameRoutine_5987a0(v19);
  GameRoutine_5fe0a0(a3, *(unsigned int*)(v21 + 4LL * v22 * v20 + 4), 4,
                     *(_QWORD*)(a1 + v18) + 8LL, v16);
  v23 = GameRoutine_577d40(*(_QWORD*)(a2 + 184), 1);
  return GameRoutine_58c820(a3, a2, v23);
}

__int64 GameHr_5941d0(_QWORD* a1, _QWORD* a2, __int64 a3, unsigned int a4,
                      unsigned int a5, char a6)
{
  int* v6;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  unsigned int v19;
  __int64* v20;
  __int64 v21;
  int v22;
  __int64* v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  int v32;
  bool v33;
  int v34;
  int v35;
  unsigned int v36;
  __int64 v37;
  int v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  _QWORD* v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  __int64 v48;
  __int64 v49;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v55;
  _QWORD v57[2];
  __int64 v58;
  _QWORD v59[2];
  _QWORD v60[2];

  v6 = (int*)a1 + a4;
  v10 = v6[51];
  v11 = v6[48];
  v51 = v6[39];
  v55 = v6[42];
  (*(void (**)(_QWORD*, __int64))(*a2 + 32LL))(a2, a3);
  v12 = a2[31];
  v13 = a2[42];
  v14 = a1[9];
  v15 = a1[28];
  v59[0] = 0;
  v59[1] = 0;
  v52 = v13;
  v53 = v12;
  if (a1[1] != 0) {
    v16 = v14;
  }
  else {
    v16 = a1[13];
  }
  v17 = a1[15] + 64LL;
  GameRoutine_5fd970(a3, v17, v59, 0);
  v18 = *a2;
  a2[31] = v17;
  a2[42] = 0;
  (*(void (**)(_QWORD*, __int64))(v18 + 24))(a2, a3);
  GameRoutine_5fd650(a3, a1[15] + 136LL);
  v19 = *((_DWORD*)a1 + v10 + 58);
  GameRoutine_5a0010(a2, a3, v15, v19);
  v20 = (__int64*)GameRoutine_578940(a2[23], 36);
  v21 = *(_QWORD*)(v15 + 48);
  v58 = *v20;
  v22 = GameRoutine_5987a0(v15);
  GameRoutine_5fe0a0(a3,
                     *(unsigned int*)(v21 + 4LL * v22 * (unsigned __int8)v19),
                     4, v16 + 8, &v58);
  v23 = (__int64*)(*(_QWORD*)(a2[25] + 16LL) + 16LL * *(int*)(a2[25] + 48LL));
  v25 = *v23;
  v24 = v23[1];
  v26 = *((unsigned int*)a1 + v10 + 96);
  v57[0] = v25 + v11;
  v57[1] = v24;
  if ((v26 & 0x80000000) == 0) {
    GameRoutine_5fe120(a3, v26, 4, v57, 224);
  }
  v27 = GameRoutine_577d40(a2[23], 1);
  GameRoutine_58c820(a3, a2, v27);
  v28 = a2[23];
  v29 = (__int64*)(*(_QWORD*)(a2[25] + 16LL) + 16LL * *(int*)(a2[25] + 48LL));
  v31 = *v29;
  v30 = v29[1];
  v60[0] = v31 + v51;
  v60[1] = v30;
  GameRoutine_5fe120(
      a3, *(unsigned int*)(*(_QWORD*)(v15 + 24) + 4LL * (int)v19), 0, v60, 560);
  GameRoutine_5fcd30(a3, 3, 1, v28 + 584, 6, 0);
  (*(void (**)(_QWORD*, __int64))(*a2 + 32LL))(a2, a3);
  GameRoutine_5fdcb0(a3, 128);
  GameRoutine_5fdce0(a3, 32);
  a2[31] = v53;
  a2[42] = v52;
  GameRoutine_576aa0(a2, a3);
  (*(void (**)(_QWORD*, __int64))(*a2 + 24LL))(a2, a3);
  if (a5 == 8 || a5 == 4) {
    v32 = 16;
    v33 = (a6 & 1) == 0;
    v34 = 8;
  }
  else {
    v32 = 12;
    v33 = (a6 & 1) == 0;
    v34 = 4;
  }
  if (!v33) {
    v34 = v32;
  }
  v35 = v10 + v34 + ((*(unsigned __int8*)(a1[11] + 8LL) >> 2) & 0x10);
  v36 = *((_DWORD*)a1 + v35 + 58);
  GameRoutine_5a0010(a2, a3, v15, v36);
  v37 = *(_QWORD*)(v15 + 48);
  v38 = GameRoutine_5987a0(v15);
  GameRoutine_5fe0a0(a3,
                     *(unsigned int*)(v37 + 4LL * v38 * (unsigned __int8)v36),
                     4, a1[15] + 8LL, &v58);
  if ((*(_BYTE*)(a1[11] + 8LL) & 8) != 0) {
    v39 = a1[1];
    v40 = *(_QWORD*)(v15 + 48);
    v41 = *(unsigned int*)(v40 +
                           4LL * (int)(GameRoutine_5987a0(v15) *
                                       (unsigned __int8)v36) +
                           4);
    v42 = a1 + 9;
    if (v39 == 0) {
      v42 = a1 + 13;
    }
    GameRoutine_5fe0a0(a3, v41, 4, *v42 + 8LL, &v58);
  }
  v43 = *((unsigned int*)a1 + v35 + 96);
  if ((v43 & 0x80000000) == 0) {
    GameRoutine_5fe120(a3, v43, 4, v57, 224);
  }
  v44 = GameRoutine_577d40(a2[23], a5);
  GameRoutine_58c820(a3, a2, v44);
  v45 = a2[25];
  v46 = a2[23];
  v47 = (__int64*)(*(_QWORD*)(v45 + 16) + 16LL * *(int*)(v45 + 48));
  v49 = *v47;
  v48 = v47[1];
  v60[0] = v49 + v55;
  v60[1] = v48;
  GameRoutine_5fe120(
      a3, *(unsigned int*)(*(_QWORD*)(v15 + 24) + 4LL * (int)v36), 0, v60, 560);
  return GameRoutine_5fcd30(a3, 3, 1, v46 + 584, 6, 0);
}

#pragma GCC visibility pop
