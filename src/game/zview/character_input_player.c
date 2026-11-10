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
__int64 CharacterInputPlayer_da9a80_alt1(_QWORD, _QWORD) __asm__(
    "CharacterInputPlayer_da9a80");
__int64 GameRoutine_d1f5e0(_QWORD, _QWORD);
__int64 GameRoutine_d27e60(_QWORD, _QWORD);
bool GameRoutine_d26f50(__int64, int);
extern __int64 GameData_212d310;
extern __int64 GameData_212dc38[7];
extern __int64 GameData_220b6f0;
extern __int64 game_script_hub_g_frame_counter;
float CharacterInputPlayer_d4f350(__int64, __int64);
float GameRoutine_d26b60(__int64);
float GameRoutine_e1f180(_QWORD, _QWORD, _QWORD);
__int64 CharacterInputPlayer_d4f230(__int64 a1);
__int64
game_zview_CharacterInputPlayer_CharacterInputPlayer_lambda0_Invoke(__int64 a1,
                                                                    _DWORD* a2);
__int64 GameRoutine_dabe80_alt1(__int64*, _QWORD*,
                                __int64) __asm__("GameRoutine_dabe80");
__int64 GameRoutine_dac0a0_alt1(__int64*, _QWORD*,
                                __int64) __asm__("GameRoutine_dac0a0");
__int64 GameRoutine_dac2c0_alt1(__int64*, _QWORD*,
                                __int64) __asm__("GameRoutine_dac2c0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");

_QWORD* game_zview_CharacterInputPlayer_CharacterInputPlayer(__int64 a1,
                                                             __int64 a2)
{
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64* v8;
  _QWORD* v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64* v25;
  _QWORD* v26;
  __int64 v27;
  __int64 v28;
  _QWORD* result;
  __int64 v30;
  struct {
    _QWORD v31[4];
    _QWORD* v32;
  } v31_;
  struct {
    _QWORD v33[4];
    _QWORD* v34;
  } v33_;
  struct {
    _QWORD v35[4];
    _QWORD* v36;
  } v35_;

  *(_QWORD*)(a1 + 16) = 0;
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(a1 + 32) = 0;
  *(_QWORD*)(a1 + 40) = 0;
  *(_QWORD*)(a1 + 48) = 0;
  *(_DWORD*)(a1 + 56) = 0;
  *(_QWORD*)a1 = game_zview_CharacterInputPlayer_vtable;
  *(_QWORD*)(a1 + 8) = a2;
  v4 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 56, 16, 0);
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
    std___1___shared_weak_count___release_weak_alt1(v5);
  }
  v6 = *(__int64**)(*(_QWORD*)(a1 + 8) + 32LL);
  v35_.v35[0] = GameData_1fdc4e8;
  v35_.v35[1] = a1;
  v35_.v36 = v35_.v35;
  v7 = v6[40];
  v8 = (__int64*)v6[29];
  if ((unsigned __int64)v8 >= v6[30]) {
    v11 = GameRoutine_dabe80_alt1(v6 + 28, v6 + 40, (__int64)v35_.v35);
  }
  else {
    *v8 = v7;
    v9 = v8 + 2;
    v10 = v35_.v36;
    if (v35_.v36 != nullptr) {
      if (v35_.v36 == v35_.v35) {
        v8[6] = (__int64)v9;
        (*(void (**)(_QWORD*))(*v10 + 24LL))(v10);
      }
      else {
        v8[6] =
            (*(__int64 (**)(_QWORD*, _QWORD*))(*v35_.v36 + 16LL))(v35_.v36, v9);
      }
    }
    else {
      v8[6] = 0;
    }
    v11 = (__int64)(v8 + 8);
  }
  v12 = v6[40];
  v6[29] = v11;
  v13 = v35_.v36;
  v6[40] = v12 + 1;
  *(_QWORD*)(a1 + 32) = v7;
  if (v13 == v35_.v35) {
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
  v33_.v33[0] = GameData_1fdc578;
  v17 = (__int64*)v6[32];
  v16 = v6[33];
  v33_.v34 = v33_.v33;
  if ((unsigned __int64)v17 >= v16) {
    v19 = GameRoutine_dac0a0_alt1(v6 + 31, v6 + 41, (__int64)v33_.v33);
  }
  else {
    *v17 = v15;
    v18 = v33_.v34;
    if (v33_.v34 != nullptr) {
      if (v33_.v34 == v33_.v33) {
        v17[6] = (__int64)(v17 + 2);
        (*(void (**)(_QWORD*))(*v18 + 24LL))(v18);
      }
      else {
        v17[6] =
            (*(__int64 (**)(__int64))(*v33_.v34 + 16LL))((__int64)v33_.v34);
      }
    }
    else {
      v17[6] = 0;
    }
    v19 = (__int64)(v17 + 8);
  }
  v20 = v6[41];
  v6[32] = v19;
  v21 = v33_.v34;
  v6[41] = v20 + 1;
  *(_QWORD*)(a1 + 40) = v15;
  if (v21 == v33_.v33) {
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
  v31_.v31[0] = GameData_1fdc608;
  v25 = (__int64*)v6[35];
  v24 = v6[36];
  v31_.v32 = v31_.v31;
  if ((unsigned __int64)v25 >= v24) {
    v27 = GameRoutine_dac2c0_alt1(v6 + 34, v6 + 42, (__int64)v31_.v31);
  }
  else {
    *v25 = v23;
    v26 = v31_.v32;
    if (v31_.v32 != nullptr) {
      if (v31_.v32 == v31_.v31) {
        v25[6] = (__int64)(v25 + 2);
        (*(void (**)(_QWORD*))(*v26 + 24LL))(v26);
      }
      else {
        v25[6] = (*(__int64 (**)(_QWORD*))(*v31_.v32 + 16LL))(v31_.v32);
      }
    }
    else {
      v25[6] = 0;
    }
    v27 = (__int64)(v25 + 8);
  }
  v28 = v6[42];
  v6[35] = v27;
  result = v31_.v32;
  v6[42] = v28 + 1;
  *(_QWORD*)(a1 + 48) = v23;
  if (result == v31_.v31) {
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

__int64 CharacterInputPlayer_d4f230(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  float v11;
  __int64 v12;
  float v13;
  unsigned int v14;
  unsigned int v15;
  __int64 v16;
  __int64 v17;
  struct {
    _QWORD v19[2];
    __int64 v20;
    __int64 v21;
    __int64 v22;
    char gap40_[8];
    __int64 v23;
    __int64 v24;
    char v25;
    char gap65_[15];
    char v26;
    char gap81_[15];
    __int64 v27;
    __int64 v28;
    __int64 v29;
  } v19_;

  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
  v1 = *(_QWORD*)(a1 + 8);
  LOBYTE(v19_.v20) = 0;
  v3 = *(_QWORD*)(v1 + 32);
  v19_.v26 = 0;
  if (*(_BYTE*)(v3 + 112) == 1) {
    v4 = *(_QWORD*)(v3 + 56);
    v19_.v20 = *(_QWORD*)(v3 + 48);
    v19_.v21 = v4;
    v5 = *(_QWORD*)(v3 + 64);
    LOBYTE(v19_.v23) = 0;
    v19_.v25 = 0;
    v19_.v22 = v5;
    if (*(_BYTE*)(v3 + 96) == 1) {
      v6 = *(_QWORD*)(v3 + 88);
      v19_.v23 = *(_QWORD*)(v3 + 80);
      v19_.v24 = v6;
      v19_.v25 = 1;
    }
    v19_.v26 = 1;
  }
  v7 = *(_QWORD*)(v3 + 128);
  v8 = *(_QWORD*)(v3 + 136);
  v9 = *(_QWORD*)(v3 + 144);
  v19_.v27 = v7;
  v19_.v28 = v8;
  v19_.v29 = v9;
  v10 = GameData_212ed08[0];
  v11 = GameRoutine_d26b60(*GameData_212ed08[0]),
  v14 = COERCE_AS(__typeof__(v14), PSEUDO_REGISTER(float, "s1", "=w"));
  v12 = *v10;
  v13 = v11;
  v15 = v14;
  if (GameRoutine_d26f50(v12, 2) &&
      (v16 = *(_QWORD*)(v12 + 40), *(_QWORD*)(v12 + 48) != v16) &&
      (*(_BYTE*)(v16 + 8) & 1) != 0) {
    v17 = 0x100000001LL;
  }
  else {
    v17 = 0;
  }
  v19_.v19[0] = __PAIR64__(v15, LODWORD(v13));
  if (*(_DWORD*)(*(_QWORD*)GameData_212d310 + 8LL) == 1) {
    v17 = v17 & 1 | 0x200000000LL;
  }
  v19_.v19[1] = v17;
  return CharacterInputPlayer_da9a80(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 32LL),
                                     (__int64)v19_.v19);
}

__int64

game_zview_CharacterInputPlayer_CharacterInputPlayer_lambda0_Invoke(__int64 a1,
                                                                    _DWORD* a2)
{
  unsigned __int8 v2;
  __int64 v3;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  float v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64* v23;
  float v24;
  __int64 v25;
  int v26;
  float v27;
  __int64 v28;
  int v29;
  float v30;
  __int64 v31;
  __int64 v32;
  int v33;
  unsigned __int8* v34;
  unsigned __int8* v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int8* v38;
  int v39;
  int v40;
  __int64* v42;
  __int64* v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  float32x4_t v48;
  int8x16_t v49;
  int8x16_t v50;
  float v51;
  int v52;
  float32x4_t v53;
  int8x16_t v54;
  unsigned int v55;
  int8x16_t v56;
  int8x16_t v57;
  unsigned int v58;
  int8x16_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  __int64 v63;
  __int64 v64;
  int v65;
  __int64 v67;
  _QWORD v68[4];
  __int64 v69;
  float32x4_t v70;
  char v71;
  char v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  float v76;
  int v77;

  v3 = *(_QWORD*)(a1 + 8);
  v5 = *(_QWORD*)(*(_QWORD*)(v3 + 8) + 32LL);
  if (v5 != 0 && (float)((float)(*(float*)(v5 + 36) * *(float*)(v5 + 36)) +
                         (float)(*(float*)(v5 + 32) * *(float*)(v5 + 32))) >
                     0x1.f5c28e0000000p-2f ||
      (v6 = (__int64*)GameData_212dc38[0],
       *(float*)(*(_QWORD*)GameData_212dc38[0] + 1060LL) < 1.0f) ||
      (v7 = *GameData_212ed08[0],
       !GameRoutine_d26f50(*GameData_212ed08[0], 2)) ||
      (v8 = *(_QWORD*)(v7 + 112), *(_QWORD*)(v7 + 120) == v8) ||
      *(_BYTE*)(v8 + 8) != 1) {
    *(_DWORD*)(v3 + 56) = 0;
  }
  else {
    v9 = *(float*)(v3 + 56) +
         (float)((float)(*(float*)(game_script_hub_g_frame_counter + 160) *
                         0x1.0aef000000000p+4f) /
                 0x1.f400000000000p+9f);
    *(float*)(v3 + 56) = v9;
    if (v9 >= 0x1.6666660000000p-2f) {
      v10 = *v6;
      LOBYTE(v68[0]) = 0;
      BYTE4(v68[0]) = 0;
      GameRoutine_d1f5e0(v10, v68);
      *a2 = (*a2 & 0xFFFFFBF1) != 0;
    }
  }
  v11 = *(_QWORD*)(v3 + 8);
  LOBYTE(v68[2]) = 0;
  v12 = *(_QWORD*)(v11 + 32);
  v13 = *(_QWORD*)(v12 + 32);
  v14 = *(_QWORD*)(v12 + 40);
  v15 = *(unsigned __int8*)(v12 + 112);
  v72 = 0;
  v68[0] = v13;
  v68[1] = v14;
  if (v15 == 1) {
    v16 = *(_QWORD*)(v12 + 56);
    v2 = 0;
    v68[2] = *(_QWORD*)(v12 + 48);
    v68[3] = v16;
    v17 = *(_QWORD*)(v12 + 64);
    LANES128(v70).n128_u8[0] = 0;
    v71 = 0;
    v69 = v17;
    if (*(_BYTE*)(v12 + 96) == 1) {
      v18 = *(_QWORD*)(v12 + 80);
      v19 = *(_QWORD*)(v12 + 88);
      v2 = 1;
      v71 = 1;
      LANES128(v70).n128_u64[0] = v18;
      LANES128(v70).n128_u64[1] = v19;
    }
    v72 = 1;
  }
  v20 = *(_QWORD*)(v12 + 128);
  v21 = *(_QWORD*)(v12 + 136);
  v22 = *(_QWORD*)(v12 + 144);
  v73 = v20;
  v74 = v21;
  v75 = v22;
  if (*(_QWORD*)(*(_QWORD*)(v11 + 8) + 232LL) != 0) {
    v23 = GameData_212ed08[0];
    if ((GameRoutine_d27e60(*GameData_212ed08[0], 0) & 1) != 0) {
      v24 = CharacterInputPlayer_d4f350(v3, (__int64)a2);
      v25 = *(_QWORD*)(v3 + 16);
      v76 = v24;
      v77 = v26;
      v67 = 0;
      v27 = GameRoutine_e1f180(v25, &v76, &v67);
      v28 = *v23;
      v76 = v27;
      v77 = v29;
      v30 = v67 != 0 ? 0x1.6666660000000p-2f : 0.0f;
      if (GameRoutine_d26f50(v28, 2)) {
        v31 = *(_QWORD*)(v28 + 16);
        v32 = *(_QWORD*)(v28 + 24);
        if (v31 != v32) {
          while (*(float*)(v31 + 4) >= (float)(*(float*)(v28 + 8) - v30)) {
            if (*(_BYTE*)(v31 + 9) == 1) {
              v33 = v67;
              if (v67 != 0) {
                v34 = *(unsigned __int8**)((char*)((_UNKNOWN*)0xB8LL) + v67);
                v35 =
                    *(unsigned __int8**)((char*)((_UNKNOWN*)0xB8LL) + v67 + 8);
                if (v34 != v35) {
                  while (1) {
                    v36 = *v34;
                    v37 = *((_QWORD*)v34 + 1);
                    if ((v36 & 1) == 0) {
                      v37 = v36 >> 1;
                    }
                    if (v37 == 6) {
                      v38 = (v36 & 1) != 0 ? *((unsigned __int8**)v34 + 2)
                                           : v34 + 1;
                      v39 = *(_DWORD*)v38;
                      v40 = *((unsigned __int16*)v38 + 2);
                      if (*(_DWORD*)"MakeId" == v39 &&
                          *(unsigned __int16*)"Id" == v40) {
                        break;
                      }
                    }
                    v34 += 160;
                    if (v34 == v35) {
                      goto LABEL_46;
                    }
                  }
                }
                if (v34 == v35 || *((_DWORD*)v34 + 36) != 3 ||
                    (v42 = *(__int64**)(GameData_220b6f0 + 8),
                     v43 = *(__int64**)(GameData_220b6f0 + 16), v42 == v43)) {
                LABEL_46:
                  v45 = 0;
                }
                else {
                  v44 = *((_DWORD*)v34 + 12);
                  while (1) {
                    v46 = *v42;
                    v42 += 2;
                    v45 = v46;
                    if (*(_DWORD*)(v46 + 184) == v44) {
                      break;
                    }
                    if (v42 == v43) {
                      goto LABEL_46;
                    }
                  }
                }
                v47 = *(_QWORD*)((char*)((_UNKNOWN*)0xA4LL) + v67 + 4);
                if (v47 != 0) {
                  v48 = *(float32x4_t*)(*(_QWORD*)(v47 + 8) + 304LL);
                  v49 = vaddq_f32(
                      v48, *(float32x4_t*)((char*)((_UNKNOWN*)0x50LL) + v67));
                  v50 = vaddq_f32(
                      v48,
                      *(float32x4_t*)((char*)((_UNKNOWN*)0x50LL) + v67 + 16));
                  LANES128(v49).n128_u32[3] = 0;
                  LANES128(v50).n128_u32[3] = 0;
                }
                else {
                  v50 = (__typeof__(v50)){0};
                  v49 = (__typeof__(v49)){0};
                }
                v54 = *(int8x16_t*)((char*)((__int128*)0x10LL) + v67);
                v51 = v76;
                v52 = v77;
                LANES128(v54).n128_u32[3] = 0;
                if (*((_BYTE*)((char*)0x20LL) + v67) != 0) {
                  v55 = -1;
                }
                else {
                  v55 = 0;
                }
                v56 = vbslq_s8(vdupq_n_s32(v55), v54, v49);
                v57 = *(int8x16_t*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + v67);
                if (*((_BYTE*)((char*)0x40LL) + v67) != 0) {
                  v58 = -1;
                }
                else {
                  v58 = 0;
                }
                v59 = vdupq_n_s32(v58);
                v33 = 1;
                LANES128(v57).n128_u32[3] = 0;
                v60 = vaddq_f32(v56, vbslq_s8(v59, v57, v50));
                LANES128(v61).n128_u64[0] = 0x3F0000003F000000LL;
                LANES128(v61).n128_u64[1] = 0x3F0000003F000000LL;
                v53 = vmulq_f32(v60, v61);
              }
              else {
                v51 = v76;
                v52 = v77;
                v45 = 0;
                v53 = (__typeof__(v53)){0};
              }
              *((float*)&v68[2] + 1) = v51;
              LODWORD(v68[3]) = v52;
              LODWORD(v68[2]) = 1;
              if (v15 != 0) {
                v69 = v45;
                if (v33 == v2) {
                  if ((v2 & 1) != 0) {
                    LANES128(v62).n128_u64[0] = LANES128(v53).n128_u64[0];
                    LANES128(v62).n128_u64[1] = LANES128(v53).n128_u32[2];
                    v70 = v62;
                  }
                }
                else if ((v2 & 1) != 0) {
                  v71 = 0;
                }
                else {
                  v70 = v53;
                  v71 = 1;
                }
              }
              else {
                HIDWORD(v68[3]) = 0;
                v69 = v45;
                LANES128(v70).n128_u8[0] = 0;
                v71 = 0;
                if (v33 != 0) {
                  v70 = v53;
                  v71 = 1;
                }
                v72 = 1;
              }
              break;
            }
            v31 += 12;
            if (v31 == v32) {
              break;
            }
          }
        }
      }
    }
    v63 = *v23;
    if (GameRoutine_d26f50(*v23, 2)) {
      v64 = *(_QWORD*)(v63 + 64);
      if (*(_QWORD*)(v63 + 72) != v64 && *(_BYTE*)(v64 + 8) == 1) {
        LODWORD(v73) = CharacterInputPlayer_d4f350(v3, (__int64)a2);
        HIDWORD(v73) = v65;
        v74 = 0;
        if ((v75 & 1) == 0) {
          LOBYTE(v75) = 1;
        }
      }
    }
  }
  return CharacterInputPlayer_da9a80_alt1(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 32LL),
                                          v68);
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
