#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_da9a80(_QWORD, _QWORD);
__int64 GameRoutine_da9c00(_QWORD, _QWORD);
__int64 GameRoutine_da9d60(_QWORD, _QWORD);
__int64 GameRoutine_da9ec0(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_CharacterInputPlayer_vtable[])();
_QWORD* CharacterInputPlayer_Destructor(_QWORD* result);
__int64 CharacterInputPlayer_da9a80(__int64 result, __int64 a2);
_QWORD* CharacterInputPlayer_da9c00(_QWORD* result, __int64 a2);
_QWORD* CharacterInputPlayer_da9d60(_QWORD* result, __int64 a2);
_QWORD* CharacterInputPlayer_da9ec0(_QWORD* result, __int64 a2);
__int64 GameRoutine_dabe80(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_dac0a0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_dac2c0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
extern __int64 (*GameData_1fdc498[])();
extern __int64 (*GameData_1fdc4e8[])();
extern __int64 (*GameData_1fdc578[])();
extern __int64 (*GameData_1fdc608[])();
extern __int64 (*game_zview_CharacterActionCorrection_vtable[])();
extern __int64 GameData_220f848;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212ed08[13];
_QWORD* game_zview_CharacterInputPlayer_CharacterInputPlayer(__int64 a1,
                                                             __int64 a2);
void game_zview_CharacterInputPlayer_CharacterInputPlayer_lambda1_Invoke(
    __int64 a1, unsigned int* a2);
__int64 game_zview_CharacterInputPlayer_CharacterInputPlayer_lambda2_Invoke(
    __int64 a1, int* a2, _QWORD* a3);

_QWORD* game_zview_CharacterInputPlayer_CharacterInputPlayer(__int64 a1,
                                                             __int64 a2)
{
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  __int64 v7;
  _QWORD* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  _QWORD* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  _QWORD* result;
  __int64 v30;
  _QWORD v31[4];
  _QWORD* v32;
  _QWORD v33[4];
  _QWORD* v34;
  _QWORD v35[4];
  _QWORD* v36;

  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_DWORD*)(a1 + 56) = 0;
  *(_QWORD*)a1 = game_zview_CharacterInputPlayer_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  v4 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                      56, 16, 0);
  *(_QWORD*)(v4 + 8) = 0;
  *(_QWORD*)(v4 + 16) = 0;
  *(_QWORD*)v4 = GameData_1fdc498;
  *(_QWORD*)(v4 + 32) = a2;
  *(_QWORD*)(v4 + 40) = 0;
  v5 = *(_QWORD*)(a1 + 24);
  *(_DWORD*)(v4 + 48) = 0;
  *(_QWORD*)(a1 + 24) = v4;
  *(_QWORD*)(v4 + 24) = game_zview_CharacterActionCorrection_vtable;
  *(_QWORD*)(a1 + 16) = v4 + 24;
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
    std___1___shared_weak_count___release_weak(v5);
  }
  v6 = *(_QWORD**)(*(_QWORD*)(a1 + 8) + 32LL);
  v35[0] = GameData_1fdc4e8;
  v35[1] = a1;
  v36 = v35;
  v7 = v6[40];
  v8 = (_QWORD*)v6[29];
  if ((unsigned __int64)v8 >= v6[30]) {
    v11 = GameRoutine_dabe80(v6 + 28, v6 + 40, v35);
  }
  else {
    *v8 = v7;
    v9 = v8 + 2;
    v10 = v36;
    if (v36 != nullptr) {
      if (v36 == v35) {
        v8[6] = v9;
        (*(void (**)(_QWORD*))(*v10 + 24LL))(v10);
      }
      else {
        v8[6] = (*(__int64 (**)(_QWORD*, _QWORD*))(*v36 + 16LL))(v36, v9);
      }
    }
    else {
      v8[6] = 0;
    }
    v11 = (__int64)(v8 + 8);
  }
  v12 = v6[40];
  v6[29] = v11;
  v13 = v36;
  v6[40] = v12 + 1;
  *(_QWORD*)(a1 + 32) = v7;
  if (v13 == v35) {
    v14 = 32;
  }
  else {
    if (v13 == nullptr) {
      goto LABEL_17;
    }
    v14 = 40;
  }
  (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
LABEL_17:
  v15 = v6[41];
  v33[0] = GameData_1fdc578;
  v17 = (_QWORD*)v6[32];
  v16 = v6[33];
  v34 = v33;
  if ((unsigned __int64)v17 >= v16) {
    v19 = GameRoutine_dac0a0(v6 + 31, v6 + 41, v33);
  }
  else {
    *v17 = v15;
    v18 = v34;
    if (v34 != nullptr) {
      if (v34 == v33) {
        v17[6] = v17 + 2;
        (*(void (**)(_QWORD*))(*v18 + 24LL))(v18);
      }
      else {
        v17[6] = (*(__int64 (**)(__int64))(*v34 + 16LL))((__int64)v34);
      }
    }
    else {
      v17[6] = 0;
    }
    v19 = (__int64)(v17 + 8);
  }
  v20 = v6[41];
  v6[32] = v19;
  v21 = v34;
  v6[41] = v20 + 1;
  *(_QWORD*)(a1 + 40) = v15;
  if (v21 == v33) {
    v22 = 32;
  }
  else {
    if (v21 == nullptr) {
      goto LABEL_30;
    }
    v22 = 40;
  }
  (*(void (**)(__int64))(*v21 + v22))((__int64)v21);
LABEL_30:
  v23 = v6[42];
  v31[0] = GameData_1fdc608;
  v25 = (_QWORD*)v6[35];
  v24 = v6[36];
  v32 = v31;
  if ((unsigned __int64)v25 >= v24) {
    v27 = GameRoutine_dac2c0(v6 + 34, v6 + 42, v31);
  }
  else {
    *v25 = v23;
    v26 = v32;
    if (v32 != nullptr) {
      if (v32 == v31) {
        v25[6] = v25 + 2;
        (*(void (**)(_QWORD*))(*v26 + 24LL))(v26);
      }
      else {
        v25[6] = (*(__int64 (**)(_QWORD*))(*v32 + 16LL))(v32);
      }
    }
    else {
      v25[6] = 0;
    }
    v27 = (__int64)(v25 + 8);
  }
  v28 = v6[42];
  v6[35] = v27;
  result = v32;
  v6[42] = v28 + 1;
  *(_QWORD*)(a1 + 48) = v23;
  if (result == v31) {
    v30 = 32;
  }
  else {
    if (result == nullptr) {
      return result;
    }
    v30 = 40;
  }
  return (_QWORD*)(*(__int64 (**)(_QWORD*))(*result + v30))(result);
}

_QWORD* CharacterInputPlayer_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  _QWORD v5[16];

  v1 = result;
  *result = game_zview_CharacterInputPlayer_vtable;
  v2 = result[1];
  v3 = *(_QWORD*)(v2 + 32);
  if (v3 != 0) {
    GameRoutine_da9c00(*(_QWORD*)(v2 + 32), result[4]);
    GameRoutine_da9d60(v3, v1[5]);
    GameRoutine_da9ec0(v3, v1[6]);
    memset(v5, 0, sizeof(v5));
    result = (_QWORD*)GameRoutine_da9a80(v3, v5);
  }
  v4 = v1[3];
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return (_QWORD*)std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

void game_zview_CharacterInputPlayer_CharacterInputPlayer_lambda1_Invoke(
    __int64 a1, unsigned int* a2)
{
  unsigned int v2;

  v2 = *a2;
  if (*a2 != 0) {
    if (v2 != 1) {
      return;
    }
    v2 = 2;
  }
  *(_QWORD*)(*GameData_212ed08[0] + 24LL * v2 + 24) =
      *(_QWORD*)(*GameData_212ed08[0] + 24LL * v2 + 16);
}

__int64 game_zview_CharacterInputPlayer_CharacterInputPlayer_lambda2_Invoke(
    __int64 a1, int* a2, _QWORD* a3)
{
  int v3;
  __int64 v4;
  __int64 v5;
  __int64 result;

  v3 = *a2;
  v4 = a3[1];
  *a3 = 0;
  a3[1] = 0;
  if (v3 == 2) {
    v5 = GameData_220f848;
    *(_QWORD*)(GameData_220f848 + 24) = *(_QWORD*)(GameData_220f848 + 16);
    *(_QWORD*)(v5 + 72) = *(_QWORD*)(v5 + 64);
  }
  if (v4 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    return std___1___shared_weak_count___release_weak(v4);
  }
  return result;
}

__int64 CharacterInputPlayer_da9a80(__int64 result, __int64 a2)
{
  __int128 v2;
  __int64 v3;

  *(_DWORD*)(result + 32) = *(_DWORD*)a2;
  *(_DWORD*)(result + 36) = *(_DWORD*)(a2 + 4);
  *(_QWORD*)(result + 40) = *(_QWORD*)(a2 + 8);
  if (*(unsigned __int8*)(result + 112) == *(unsigned __int8*)(a2 + 80)) {
    if (*(_BYTE*)(result + 112) != 0) {
      *(_DWORD*)(result + 48) = *(_DWORD*)(a2 + 16);
      *(_DWORD*)(result + 52) = *(_DWORD*)(a2 + 20);
      *(_DWORD*)(result + 56) = *(_DWORD*)(a2 + 24);
      *(_QWORD*)(result + 64) = *(_QWORD*)(a2 + 32);
      if (*(unsigned __int8*)(result + 96) == *(unsigned __int8*)(a2 + 64)) {
        if (*(_BYTE*)(result + 96) != 0) {
          *(_DWORD*)(result + 80) = *(_DWORD*)(a2 + 48);
          *(_DWORD*)(result + 84) = *(_DWORD*)(a2 + 52);
          v2 = *(_OWORD*)(result + 80);
          *((_QWORD*)&v2 + 1) = *(unsigned int*)(a2 + 56);
          *(_OWORD*)(result + 80) = v2;
        }
      }
      else if (*(_BYTE*)(result + 96) != 0) {
        *(_BYTE*)(result + 96) = 0;
      }
      else {
        *(_QWORD*)(result + 88) = *(_QWORD*)(a2 + 56);
        *(_QWORD*)(result + 80) = *(_QWORD*)(a2 + 48);
        *(_BYTE*)(result + 96) = 1;
      }
    }
  }
  else if (*(_BYTE*)(result + 112) != 0) {
    *(_BYTE*)(result + 112) = 0;
  }
  else {
    *(_QWORD*)(result + 56) = *(_QWORD*)(a2 + 24);
    v3 = *(_QWORD*)(a2 + 32);
    *(_QWORD*)(result + 48) = *(_QWORD*)(a2 + 16);
    *(_BYTE*)(result + 80) = 0;
    *(_QWORD*)(result + 64) = v3;
    *(_BYTE*)(result + 96) = 0;
    if (*(_BYTE*)(a2 + 64) == 1) {
      *(_QWORD*)(result + 88) = *(_QWORD*)(a2 + 56);
      *(_QWORD*)(result + 80) = *(_QWORD*)(a2 + 48);
      *(_BYTE*)(result + 96) = 1;
    }
    *(_BYTE*)(result + 112) = 1;
  }
  if (*(unsigned __int8*)(result + 144) == *(unsigned __int8*)(a2 + 112)) {
    if (*(_BYTE*)(result + 144) != 0) {
      *(_DWORD*)(result + 128) = *(_DWORD*)(a2 + 96);
      *(_DWORD*)(result + 132) = *(_DWORD*)(a2 + 100);
      *(_QWORD*)(result + 136) = *(_QWORD*)(a2 + 104);
    }
  }
  else if (*(_BYTE*)(result + 144) != 0) {
    *(_BYTE*)(result + 144) = 0;
  }
  else {
    *(_QWORD*)(result + 136) = *(_QWORD*)(a2 + 104);
    *(_QWORD*)(result + 128) = *(_QWORD*)(a2 + 96);
    *(_BYTE*)(result + 144) = 1;
  }
  return result;
}

_QWORD* CharacterInputPlayer_da9c00(_QWORD* result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)result[28];
  v3 = (_QWORD*)result[29];
  v4 = result;
  if (v2 != v3) {
    while (*v2 != a2) {
      v2 += 8;
      if (v2 == v3) {
        return result;
      }
    }
  }
  if (v2 != v3) {
    if (v2 + 8 == v3) {
      if (v2 != v3) {
        goto LABEL_26;
      }
    LABEL_21:
      v4[29] = v2;
      return result;
    }
    while (1) {
      v5 = v2[8];
      v6 = v2;
      v7 = (_QWORD*)v2[6];
      v2[6] = 0;
      *v2 = v5;
      v8 = v2 + 2;
      if (v8 == v7) {
        break;
      }
      if (v7 != nullptr) {
        v9 = 40;
      LABEL_15:
        (*(void (**)(__int64))(*v7 + v9))((__int64)v7);
      }
      result = (_QWORD*)v6[14];
      if (result != nullptr) {
        if (v6 + 10 == result) {
          v6[6] = v8;
          result = (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD*))(*result + 24LL))(
              result, v8);
        }
        else {
          v6[6] = result;
          v6[14] = 0;
        }
      }
      else {
        v6[6] = 0;
      }
      v2 = v6 + 8;
      if (v6 + 16 == v3) {
        v3 = (_QWORD*)v4[29];
        if (v2 == v3) {
          goto LABEL_21;
        }
      LABEL_26:
        while (2) {
          result = (_QWORD*)*(v3 - 2);
          if (v3 - 6 != result) {
            if (result != nullptr) {
              v10 = 40;
            LABEL_24:
              result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))(
                  (__int64)result);
            }
            v3 -= 8;
            if (v3 == v2) {
              goto LABEL_21;
            }
            continue;
          }
          break;
        }
        v10 = 32;
        goto LABEL_24;
      }
    }
    v9 = 32;
    goto LABEL_15;
  }
  return result;
}

_QWORD* CharacterInputPlayer_da9d60(_QWORD* result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)result[31];
  v3 = (_QWORD*)result[32];
  v4 = result;
  if (v2 != v3) {
    while (*v2 != a2) {
      v2 += 8;
      if (v2 == v3) {
        return result;
      }
    }
  }
  if (v2 != v3) {
    if (v2 + 8 == v3) {
      if (v2 != v3) {
        goto LABEL_26;
      }
    LABEL_21:
      v4[32] = v2;
      return result;
    }
    while (1) {
      v5 = v2[8];
      v6 = v2;
      v7 = (_QWORD*)v2[6];
      v2[6] = 0;
      *v2 = v5;
      v8 = v2 + 2;
      if (v8 == v7) {
        break;
      }
      if (v7 != nullptr) {
        v9 = 40;
      LABEL_15:
        (*(void (**)(__int64))(*v7 + v9))((__int64)v7);
      }
      result = (_QWORD*)v6[14];
      if (result != nullptr) {
        if (v6 + 10 == result) {
          v6[6] = v8;
          result = (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD*))(*result + 24LL))(
              result, v8);
        }
        else {
          v6[6] = result;
          v6[14] = 0;
        }
      }
      else {
        v6[6] = 0;
      }
      v2 = v6 + 8;
      if (v6 + 16 == v3) {
        v3 = (_QWORD*)v4[32];
        if (v2 == v3) {
          goto LABEL_21;
        }
      LABEL_26:
        while (2) {
          result = (_QWORD*)*(v3 - 2);
          if (v3 - 6 != result) {
            if (result != nullptr) {
              v10 = 40;
            LABEL_24:
              result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))(
                  (__int64)result);
            }
            v3 -= 8;
            if (v3 == v2) {
              goto LABEL_21;
            }
            continue;
          }
          break;
        }
        v10 = 32;
        goto LABEL_24;
      }
    }
    v9 = 32;
    goto LABEL_15;
  }
  return result;
}

_QWORD* CharacterInputPlayer_da9ec0(_QWORD* result, __int64 a2)
{
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  _QWORD* v8;
  __int64 v9;
  __int64 v10;

  v2 = (_QWORD*)result[34];
  v3 = (_QWORD*)result[35];
  v4 = result;
  if (v2 != v3) {
    while (*v2 != a2) {
      v2 += 8;
      if (v2 == v3) {
        return result;
      }
    }
  }
  if (v2 != v3) {
    if (v2 + 8 == v3) {
      if (v2 != v3) {
        goto LABEL_26;
      }
    LABEL_21:
      v4[35] = v2;
      return result;
    }
    while (1) {
      v5 = v2[8];
      v6 = v2;
      v7 = (_QWORD*)v2[6];
      v2[6] = 0;
      *v2 = v5;
      v8 = v2 + 2;
      if (v8 == v7) {
        break;
      }
      if (v7 != nullptr) {
        v9 = 40;
      LABEL_15:
        (*(void (**)(__int64))(*v7 + v9))((__int64)v7);
      }
      result = (_QWORD*)v6[14];
      if (result != nullptr) {
        if (v6 + 10 == result) {
          v6[6] = v8;
          result = (_QWORD*)(*(__int64 (**)(_QWORD*, _QWORD*))(*result + 24LL))(
              result, v8);
        }
        else {
          v6[6] = result;
          v6[14] = 0;
        }
      }
      else {
        v6[6] = 0;
      }
      v2 = v6 + 8;
      if (v6 + 16 == v3) {
        v3 = (_QWORD*)v4[35];
        if (v2 == v3) {
          goto LABEL_21;
        }
      LABEL_26:
        while (2) {
          result = (_QWORD*)*(v3 - 2);
          if (v3 - 6 != result) {
            if (result != nullptr) {
              v10 = 40;
            LABEL_24:
              result = (_QWORD*)(*(__int64 (**)(__int64))(*result + v10))(
                  (__int64)result);
            }
            v3 -= 8;
            if (v3 == v2) {
              goto LABEL_21;
            }
            continue;
          }
          break;
        }
        v10 = 32;
        goto LABEL_24;
      }
    }
    v9 = 32;
    goto LABEL_15;
  }
  return result;
}

#pragma GCC visibility pop
