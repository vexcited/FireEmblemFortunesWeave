#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64* GameRoutine_a94240(__int64* result, unsigned __int64);
__int64* Manager_bc6460(_QWORD*, float32x4_t*, char);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__n128 GameRoutine_14a10d0(_QWORD*, __int64, __int64, __int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c548;
extern __int64 (*GameData_20dc808[])();
extern __int64 (*GameData_20dc8b0[])();
extern __int64 (*GameData_20dc958[])();
extern __int64 (*GameData_20dca00[])();
extern __int64 (*GameData_20dcb50[])();
extern __int64 (*GameData_20dcbf8[])();
extern __int64 (*GameData_20dcca0[])();
extern __int64 (*GameData_20dcd48[])();
extern __int64 (*GameData_20dcdf0[])();
extern __int64 (*GameData_20dcf40[])();
extern __int64 (*GameData_20dcfe8[])();
extern __int64 (*GameData_20dd3d8[])();
extern __int64 (*GameData_20dd528[])();
extern __int64 (*GameData_20dd918[])();
extern __int64 (*GameData_20dd9c0[])();
extern __int64 (*game_cutscene_Signal_Bloom_vtable[])();
extern __int64 (*game_cutscene_Signal_CharaWind_vtable[])();
extern __int64 (*game_cutscene_Signal_ColorGrading_vtable[])();
extern __int64 (*game_cutscene_Signal_Constrain_vtable[])();
extern __int64 (*game_cutscene_Signal_CustomGrad_vtable[])();
extern __int64 (*game_cutscene_Signal_DOF2_vtable[])();
extern __int64 (*game_cutscene_Signal_Dissolve_vtable[])();
extern __int64 (*game_cutscene_Signal_Fog_vtable[])();
extern __int64 (*game_cutscene_Signal_LightMove_vtable[])();
extern __int64 (*game_cutscene_Signal_LightShow_vtable[])();
extern __int64 (*game_cutscene_Signal_Light_vtable[])();
extern __int64 (*game_cutscene_Signal_Particle2_vtable[])();
extern __int64 (*game_cutscene_Signal_ParticleMove_vtable[])();
extern __int64 (*game_cutscene_Signal_RadialBlur_vtable[])();
extern __int64 (*game_cutscene_Signal_Vignette_vtable[])();
extern __int64* eft_g_effectSystem_ptr[3];
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 game_templates_a93ea0(__int64 a1, unsigned __int8* a2, __int64 a3,
                              __int64** a4);
__attribute__((swiftcall)) void game_templates_14a4be0(PSEUDO_X8 x8_,
                                                       __int64 unused_int0,
                                                       int a1, __int64 a2,
                                                       __int64 a3);
__attribute__((swiftcall)) void game_templates_17e8580(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_templates_17e86a0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_templates_17e87c0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_templates_17e88c0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_templates_17e8ac0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_templates_17e8bd0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_templates_17e8ce0(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_templates_17e8e00(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_templates_17e8f30(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_templates_17e9120(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_templates_17e9250(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_templates_17e9620(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_templates_17e9850(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_templates_17e9d20(PSEUDO_X8 x8_);
__attribute__((swiftcall)) void game_templates_17e9e30(PSEUDO_X8 x8_);
__int64* Manager_bc6460_alt1(float*, __int64, char) __asm__("Manager_bc6460");
unsigned __int128 Manager_bc6460_alt1_pair(float*, __int64,
                                           char) __asm__("Manager_bc6460");
__int64 GameHr_14a10d0(_QWORD*, __int64, __int64, __int64);

__int64 game_templates_a93ea0(__int64 a1, unsigned __int8* a2, __int64 a3,
                              __int64** a4)
{

#pragma clang fp contract(off)
  unsigned __int64 v4;
  unsigned __int64 v5;
  bool v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64* v16;
  __int64 v17;
  unsigned __int64 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64* v27;
  __int64 v28;
  __int64 v29;
  float v30;
  float v31;
  float v32;
  _BOOL8 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  unsigned __int64 primeEm;
  unsigned __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64* v41;
  __int64 v42;
  unsigned __int64 v43;

  v5 = *a2;
  v8 = (v5 & 1) == 0;
  v9 = v5 >> 1;
  if (v8) {
    v10 = a2 + 1;
  }
  else {
    v10 = *((unsigned __int8**)a2 + 2);
  }
  if (v8) {
    v11 = v9;
  }
  else {
    v11 = *((_QWORD*)a2 + 1);
  }
  v12 = std___1___hash_memory(v10, v11);
  v13 = *(_QWORD*)(a1 + 8);
  v14 = v12;
  if (v13 != 0) {
    v15 = v13 - 1;
    if ((v13 & (v13 - 1)) != 0) {
      v4 = v12;
      if (v12 >= v13) {
        v4 = v12 % v13;
      }
    }
    else {
      v4 = v15 & v12;
    }
    v16 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
    if (v16 != nullptr) {
      v17 = *v16;
      if (*v16 != 0) {
        if ((v13 & v15) == 0) {
          while (1) {
            v22 = *(_QWORD*)(v17 + 8);
            if (v22 == v14) {
              v23 = *(unsigned __int8*)(v17 + 16);
              v24 = *(_QWORD*)(v17 + 24);
              if ((v23 & 1) == 0) {
                v24 = v23 >> 1;
              }
              if (v24 == v11) {
                v25 = (v23 & 1) != 0 ? *(_QWORD*)(v17 + 32) : v17 + 17;
                if ((unsigned int)memcmp(v25, v10, v11) == 0) {
                  return v17;
                }
              }
            }
            else if ((v22 & v15) != v4) {
              goto LABEL_41;
            }
            v17 = *(_QWORD*)v17;
            if (v17 == 0) {
              goto LABEL_41;
            }
          }
        }
        do {
          v18 = *(_QWORD*)(v17 + 8);
          if (v18 == v14) {
            v19 = *(unsigned __int8*)(v17 + 16);
            v20 = *(_QWORD*)(v17 + 24);
            if ((v19 & 1) == 0) {
              v20 = v19 >> 1;
            }
            if (v20 == v11) {
              v21 = (v19 & 1) != 0 ? *(_QWORD*)(v17 + 32) : v17 + 17;
              if ((unsigned int)memcmp(v21, v10, v11) == 0) {
                return v17;
              }
            }
          }
          else {
            if (v18 >= v13) {
              v18 %= v13;
            }
            if (v18 != v4) {
              break;
            }
          }
          v17 = *(_QWORD*)v17;
        } while (v17 != 0);
      }
    }
  }
LABEL_41:
  v26 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       48, 16, 0);
  v27 = *a4;
  *(_QWORD*)v26 = 0;
  *(_QWORD*)(v26 + 8) = v14;
  v17 = v26;
  v28 = *v27;
  v29 = v27[2];
  *(_QWORD*)(v26 + 24) = v27[1];
  *(_QWORD*)(v26 + 32) = v29;
  *(_QWORD*)(v26 + 16) = v28;
  v27[1] = 0;
  v27[2] = 0;
  *v27 = 0;
  *(_DWORD*)(v26 + 40) = 0;
  v30 = *(float*)(a1 + 32);
  v31 = (float)(unsigned __int64)(*(_QWORD*)(a1 + 24) + 1LL);
  if (v13 == 0 || (float)(v30 * (float)v13) < v31) {
    v32 = v31 / v30;
    v33 = true;
    if (v13 >= 3) {
      v33 = (v13 & (v13 - 1)) != 0;
    }
    v34 = v33 | (2 * v13);
    v35 = vcvtps_u64_f32(v32);
    if (v34 <= v35) {
      primeEm = v35;
    }
    else {
      primeEm = v34;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v37 = *(_QWORD*)(a1 + 8);
    if (primeEm > v37) {
      goto LABEL_53;
    }
    if (primeEm < v37) {
      v38 = vcvtps_u64_f32((float)*(unsigned __int64*)(a1 + 24) /
                           *(float*)(a1 + 32));
      if (v37 < 3 || (v37 & (v37 - 1)) != 0) {
        v38 = std___1___next_prime(v38);
      }
      else {
        v39 = 1LL << (-(char)__clz(v38 - 1) & 63);
        if (v38 >= 2) {
          v38 = v39;
        }
      }
      if (primeEm <= v38) {
        primeEm = v38;
      }
      if (primeEm < v37) {
      LABEL_53:
        GameRoutine_a94240((__int64*)a1, primeEm);
      }
    }
    v13 = *(_QWORD*)(a1 + 8);
    if ((v13 & (v13 - 1)) != 0) {
      if (v14 >= v13) {
        v4 = v14 % v13;
      }
      else {
        v4 = v14;
      }
    }
    else {
      v4 = (v13 - 1) & v14;
    }
  }
  v40 = *(_QWORD*)a1;
  v41 = *(__int64**)(*(_QWORD*)a1 + 8 * v4);
  if (v41 != nullptr) {
    *(_QWORD*)v17 = *v41;
    *v41 = v17;
  }
  else {
    v42 = *(_QWORD*)(a1 + 16);
    *(_QWORD*)(a1 + 16) = v17;
    *(_QWORD*)v17 = v42;
    *(_QWORD*)(v40 + 8 * v4) = a1 + 16;
    if (*(_QWORD*)v17 != 0) {
      v43 = *(_QWORD*)(*(_QWORD*)v17 + 8LL);
      if ((v13 & (v13 - 1)) != 0) {
        if (v43 >= v13) {
          v43 %= v13;
        }
      }
      else {
        v43 &= v13 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v43) = v17;
    }
  }
  ++*(_QWORD*)(a1 + 24);
  return v17;
}

__attribute__((swiftcall)) void game_templates_14a4be0(PSEUDO_X8 x8_,
                                                       __int64 unused_int0,
                                                       int a1, __int64 a2,
                                                       __int64 a3)
{

#pragma clang fp contract(off)
  _QWORD* a4 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64* v9;
  unsigned int v10;
  struct {
    _QWORD v12[3];
    int v13;
    char gap28_[4];
    __int64 v14;
    __int64 v15;
    __int64 v16;
    __int64 v17;
    __int64 v18;
    __int64 v19;
  } v12_;

  v10 = COERCE_AS(__typeof__(v10),
                  PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
  v12_.v12[0] = 0;
  v12_.v12[1] = 0;
  v12_.v13 = a1;
  v12_.v12[2] = a2;
  v6 = *((_QWORD*)GameData_212c540 + 1);
  v8 = *(_QWORD*)GameData_212c548;
  v7 = *((_QWORD*)GameData_212c548 + 1);
  v12_.v14 = *(_QWORD*)GameData_212c540;
  v12_.v15 = v6;
  v12_.v16 = v8;
  v12_.v17 = v7;
  v12_.v18 = v12_.v14;
  v12_.v19 = v6;
  v9 = ({
    unsigned __int128 r_ = Manager_bc6460_alt1_pair(
        *(float**)eft_g_effectSystem_ptr[0], (__int64)v12_.v12, 0);
    v10 = COERCE_AS(__typeof__(v10), (unsigned long long)(r_ >> 64));
    (__int64*)(unsigned long long)r_;
  });
  {
    GameHr_14a10d0(a4, (__int64)v9, v10, a3),
        v10 = COERCE_AS(__typeof__(v10),
                        PSEUDO_REGISTER(unsigned long long, "x1", "=r"));
    return;
  }
}

__attribute__((swiftcall)) void game_templates_17e8580(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* result;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 240, 16, 0);
  v2[1] = 0;
  v2[2] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[22] = 0;
  *v2 = GameData_20dc808;
  v2[23] = 0;
  v2[24] = 0;
  v2[25] = 0;
  v2[26] = 0;
  v2[27] = 0;
  v2[28] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[23] = 0;
  v2[24] = 0;
  v2[25] = 0;
  v2[27] = 0;
  v2[29] = 0;
  a1[1] = v2;
  v2[4] = 0;
  result = v2 + 4;
  *a1 = result;
  *result = game_cutscene_Signal_CharaWind_vtable;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_templates_17e86a0(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* result;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 240, 16, 0);
  v2[1] = 0;
  v2[2] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[22] = 0;
  *v2 = GameData_20dc8b0;
  v2[23] = 0;
  v2[24] = 0;
  v2[25] = 0;
  v2[26] = 0;
  v2[27] = 0;
  v2[28] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[23] = 0;
  v2[24] = 0;
  v2[25] = 0;
  v2[27] = 0;
  v2[29] = 0;
  a1[1] = v2;
  v2[4] = 0;
  result = v2 + 4;
  *a1 = result;
  *result = game_cutscene_Signal_Dissolve_vtable;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_templates_17e87c0(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* result;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
  v2[1] = 0;
  v2[2] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[22] = 0;
  *v2 = GameData_20dc958;
  v2[23] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  a1[1] = v2;
  v2[4] = 0;
  result = v2 + 4;
  *a1 = result;
  *result = game_cutscene_Signal_Particle2_vtable;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_templates_17e88c0(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* result;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 240, 16, 0);
  v2[1] = 0;
  v2[2] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[22] = 0;
  *v2 = GameData_20dca00;
  v2[23] = 0;
  v2[24] = 0;
  v2[25] = 0;
  v2[26] = 0;
  v2[27] = 0;
  v2[28] = 0;
  v2[29] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[21] = 0;
  v2[22] = 0;
  v2[23] = 0;
  v2[25] = 0;
  v2[26] = 0;
  v2[27] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  a1[1] = v2;
  v2[4] = 0;
  result = v2 + 4;
  *a1 = result;
  *result = game_cutscene_Signal_ParticleMove_vtable;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_templates_17e8ac0(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* result;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
  v2[1] = 0;
  v2[2] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[22] = 0;
  *v2 = GameData_20dcb50;
  v2[23] = 0;
  v2[24] = 0;
  v2[24] = 0;
  v2[25] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[22] = 0;
  v2[23] = 0;
  a1[1] = v2;
  v2[4] = 0;
  result = v2 + 4;
  *a1 = result;
  *result = game_cutscene_Signal_DOF2_vtable;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_templates_17e8bd0(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* result;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
  v2[1] = 0;
  v2[2] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[22] = 0;
  *v2 = GameData_20dcbf8;
  v2[23] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  a1[1] = v2;
  v2[4] = 0;
  result = v2 + 4;
  *a1 = result;
  *result = game_cutscene_Signal_RadialBlur_vtable;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_templates_17e8ce0(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* result;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 256, 16, 0);
  v2[1] = 0;
  v2[2] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[22] = 0;
  *v2 = GameData_20dcca0;
  v2[23] = 0;
  v2[24] = 0;
  v2[25] = 0;
  v2[26] = 0;
  v2[27] = 0;
  v2[28] = 0;
  v2[29] = 0;
  v2[30] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[21] = 0;
  v2[22] = 0;
  v2[23] = 0;
  v2[25] = 0;
  v2[26] = 0;
  v2[27] = 0;
  v2[29] = 0;
  v2[31] = 0;
  a1[1] = v2;
  v2[4] = 0;
  result = v2 + 4;
  *a1 = result;
  *result = game_cutscene_Signal_ColorGrading_vtable;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_templates_17e8e00(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* result;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
  v2[1] = 0;
  v2[2] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[22] = 0;
  *v2 = GameData_20dcd48;
  v2[23] = 0;
  v2[24] = 0;
  v2[25] = 0;
  v2[26] = 0;
  v2[27] = 0;
  v2[28] = 0;
  v2[29] = 0;
  v2[30] = 0;
  v2[31] = 0;
  v2[32] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[21] = 0;
  v2[22] = 0;
  v2[23] = 0;
  v2[25] = 0;
  v2[26] = 0;
  v2[27] = 0;
  v2[29] = 0;
  v2[30] = 0;
  v2[31] = 0;
  v2[34] = 0;
  v2[35] = 0;
  v2[33] = 0;
  v2[33] = 0;
  a1[1] = v2;
  v2[4] = 0;
  result = v2 + 4;
  *a1 = result;
  *result = game_cutscene_Signal_CustomGrad_vtable;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_templates_17e8f30(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* result;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
  v2[1] = 0;
  v2[2] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[22] = 0;
  *v2 = GameData_20dcdf0;
  v2[23] = 0;
  v2[24] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[23] = 0;
  v2[25] = 0;
  a1[1] = v2;
  v2[4] = 0;
  result = v2 + 4;
  *a1 = result;
  *result = game_cutscene_Signal_Fog_vtable;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_templates_17e9120(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* result;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 288, 16, 0);
  v2[1] = 0;
  v2[2] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[22] = 0;
  *v2 = GameData_20dcf40;
  v2[23] = 0;
  v2[24] = 0;
  v2[25] = 0;
  v2[26] = 0;
  v2[27] = 0;
  v2[28] = 0;
  v2[29] = 0;
  v2[30] = 0;
  v2[31] = 0;
  v2[32] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[21] = 0;
  v2[22] = 0;
  v2[23] = 0;
  v2[25] = 0;
  v2[26] = 0;
  v2[27] = 0;
  v2[29] = 0;
  v2[30] = 0;
  v2[31] = 0;
  v2[34] = 0;
  v2[35] = 0;
  v2[33] = 0;
  v2[33] = 0;
  a1[1] = v2;
  v2[4] = 0;
  result = v2 + 4;
  *a1 = result;
  *result = game_cutscene_Signal_Vignette_vtable;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_templates_17e9250(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* result;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
  v2[1] = 0;
  v2[2] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[22] = 0;
  *v2 = GameData_20dcfe8;
  v2[23] = 0;
  v2[24] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[23] = 0;
  v2[25] = 0;
  a1[1] = v2;
  v2[4] = 0;
  result = v2 + 4;
  *a1 = result;
  *result = game_cutscene_Signal_Bloom_vtable;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_templates_17e9620(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* result;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 208, 16, 0);
  v2[1] = 0;
  v2[2] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[22] = 0;
  *v2 = GameData_20dd3d8;
  v2[23] = 0;
  v2[24] = 0;
  v2[24] = 0;
  v2[25] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[22] = 0;
  v2[23] = 0;
  a1[1] = v2;
  v2[4] = 0;
  result = v2 + 4;
  *a1 = result;
  *result = game_cutscene_Signal_LightMove_vtable;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_templates_17e9850(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* result;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 192, 16, 0);
  v2[1] = 0;
  v2[2] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[22] = 0;
  *v2 = GameData_20dd528;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[21] = 0;
  v2[23] = 0;
  a1[1] = v2;
  v2[4] = 0;
  result = v2 + 4;
  *a1 = result;
  *result = game_cutscene_Signal_LightShow_vtable;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_templates_17e9d20(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* result;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 240, 16, 0);
  v2[1] = 0;
  v2[2] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[22] = 0;
  *v2 = GameData_20dd918;
  v2[23] = 0;
  v2[24] = 0;
  v2[25] = 0;
  v2[26] = 0;
  v2[27] = 0;
  v2[28] = 0;
  v2[29] = 0;
  v2[25] = 0;
  v2[26] = 0;
  v2[27] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  a1[1] = v2;
  v2[4] = 0;
  result = v2 + 4;
  *a1 = result;
  *result = game_cutscene_Signal_Light_vtable;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void game_templates_17e9e30(PSEUDO_X8 x8_)
{
  _QWORD* a1 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  _QWORD* v2;
  _QWORD* result;

  v2 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 176, 16, 0);
  v2[1] = 0;
  v2[2] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  v2[10] = 0;
  v2[11] = 0;
  v2[12] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[7] = 0;
  v2[8] = 0;
  v2[9] = 0;
  *v2 = GameData_20dd9c0;
  v2[12] = 0;
  v2[13] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[14] = 0;
  v2[15] = 0;
  a1[1] = v2;
  v2[4] = 0;
  result = v2 + 4;
  *a1 = result;
  *result = game_cutscene_Signal_Constrain_vtable;
  {
    result;
    return;
  }
}

#pragma GCC visibility pop
