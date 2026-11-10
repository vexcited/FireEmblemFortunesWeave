#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_c43b70(_QWORD);
__int64 GameRoutine_dfa7a0(_QWORD, float);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 (*game_hub_ObjectBuildMapObj_vtable[])();
extern __int64 GameData_21c6978;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f910[2];
_QWORD* ObjectBuildMapObj_Destructor(_QWORD* result);
bool ObjectBuildMapObj_Unknown2();
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__int64* CharacterTrailVertex_d35160(__int64* result, _DWORD*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_f2d770(__int64*, _QWORD*);
__int64 ObjectBuildCreate_c21360(__int64, __int64, __int64);
__int64 game_hub_dfc1e0(__int64);
__int64 strlen(_QWORD);
extern __int64 GameData_212c638;
void GameRoutine_dfa900(__int64);
__int64* ObjectBuildMapObj_Unknown6(__int64* a1);

_QWORD* ObjectBuildMapObj_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  __int64 v3;
  char v4;
  __int64 v5;
  int v6;
  int v7;
  char v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v1 = result;
  *result = game_hub_ObjectBuildMapObj_vtable;
  v2 = result[1];
  v3 = result[2];
  if (v2 != v3) {
    v4 = 0;
    do {
      v5 = *(_QWORD*)(v2 + 8);
      v6 = *(unsigned __int8*)(v2 + 25);
      v7 = *(unsigned __int8*)(v2 + 24);
      if (v6 == *(unsigned __int8*)(v5 + 288)) {
        v8 = 0;
      }
      else {
        *(_BYTE*)(v5 + 288) = v6;
        v8 = v6;
      }
      if (v7 != *(unsigned __int8*)(v5 + 289)) {
        *(_BYTE*)(v5 + 289) = v7;
        v8 |= v7;
      }
      v2 += 32;
      v4 |= v7 & v6 & v8;
    } while (v2 != v3);
    if ((v4 & 1) != 0) {
      result = (_QWORD*)GameRoutine_dfa7a0(result[7], 0.3);
    }
  }
  v9 = v1[1];
  v1[2] = v9;
  *v1 = GameData_212f910[0] + 2;
  if ((v1[4] & 1) != 0 && v1[6] != 0) {
    v10 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v10 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v1[6]);
    v9 = v1[1];
  }
  if (v9 != 0) {
    v1[2] = v9;
    v11 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v11 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v11, v9);
  }
  return result;
}

bool ObjectBuildMapObj_Unknown2()
{
  __int64 v0;
  __int64 v1;
  __int64 v2;
  _QWORD* v3;
  _BOOL8 result;

  v0 = *(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL);
  if ((GameRoutine_c43b70(*(_QWORD*)(v0 + 56)) & 1) == 0) {
    return false;
  }
  v1 = *(_QWORD*)(v0 + 64);
  if (v1 == 0) {
    return false;
  }
  v2 = *(_QWORD*)(v1 + 96);
  if (v2 == 0 || *(_DWORD*)(v2 + 240) != 5) {
    return false;
  }
  v3 = (_QWORD*)(v1 + 120);
  do {
    v3 = (_QWORD*)*v3;
    result = v3 == nullptr;
  } while (v3 != nullptr && *(_DWORD*)(v3[5] + 240LL) == 5);
  return result;
}

__int64* ObjectBuildMapObj_Unknown6(__int64* a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* result;
  __int64 v7;
  _QWORD* v8;
  int v9;
  __int64* v10;
  __int64 v11;
  float32x4_t* v12;
  float v13;
  float v14;
  float32x4_t* v15;
  float32x4_t* v16;
  float32x4_t v17;
  int16x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  int16x4_t v21;
  float32x4_t v22;
  float32x4_t* v23;
  float32x4_t v24;
  int16x4_t v25;
  float32x4_t v26;
  __int64* v27;
  __int64* v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64* v39;
  float v40;

  v1 = a1[7];
  v3 = *(_QWORD*)GameData_212c638;
  if ((*(_BYTE*)(v1 + 152) & 1) != 0) {
    v4 = *(_QWORD*)(v1 + 168);
  }
  else {
    v4 = v1 + 153;
  }
  v5 = strlen(v4);
  result = *(__int64**)(*(_QWORD*)(*(_QWORD*)(v3 + 32) - 8LL) + 64LL);
  if (result != nullptr) {
    v7 = result[12];
    if (v7 != 0 && *(_DWORD*)(v7 + 240) == 5) {
      v8 = result + 15;
      while (1) {
        v8 = (_QWORD*)*v8;
        if (v8 == nullptr) {
          break;
        }
        if (*(_DWORD*)(v8[5] + 240LL) != 5) {
          return result;
        }
      }
      result = (__int64*)ObjectBuildCreate_c21360((__int64)result, v4, v5);
      v39 = result;
      if (result != nullptr) {
        v9 = *((_DWORD*)result + 76);
        v11 = *(_QWORD*)(v1 + 192);
        v10 = (__int64*)(v1 + 192);
        v12 = (float32x4_t*)result;
        v40 = 0x0.0p+0f;
        *((_DWORD*)v10 - 4) = v9;
        *((_DWORD*)v10 - 3) = *((_DWORD*)result + 77);
        *((_DWORD*)v10 - 2) = *((_DWORD*)result + 78);
        v13 = *((float*)result + 81);
        v10[1] = v11;
        v14 = v13 * 0x1.ca5dc20000000p+5f;
        CharacterTrailVertex_d35160(v10, &v40);
        v40 = v14;
        CharacterTrailVertex_d35160(v10, &v40);
        v40 = 0x0.0p+0f;
        CharacterTrailVertex_d35160(v10, &v40);
        v15 = (float32x4_t*)a1[7];
        v16 = v15 + 60;
        if (LANES128(v15[61]).n128_u8[0] == 1) {
          v17 = v12[19];
          LANES64(v18).n64_u64[0] =
              LANES64_OF(vmovn_s32(vceqq_f32(*v16, v17))).n64_u64[0];
          if ((LANES64(v18).n64_u8[0] & 1) != 0 &&
              (LANES64(v18).n64_u8[2] & 1) != 0 &&
              (LANES64(v18).n64_u8[4] & 1) != 0) {
          LABEL_19:
            v20 = vmulq_f32(v12[20], vdupq_n_s32(0x42652EE1u));
            if (LANES128(v15[63]).n128_u8[0] == 1) {
              LANES64(v21).n64_u64[0] =
                  LANES64_OF(vmovn_s32(vceqq_f32(v15[62], v20))).n64_u64[0];
              if ((LANES64(v21).n64_u8[0] & 1) != 0 &&
                  (LANES64(v21).n64_u8[2] & 1) != 0 &&
                  (LANES64(v21).n64_u8[4] & 1) != 0) {
              LABEL_26:
                v23 = v15 + 64;
                if (LANES128(v15[65]).n128_u8[0] == 1) {
                  v24 = v12[22];
                  LANES64(v25).n64_u64[0] =
                      LANES64_OF(vmovn_s32(vceqq_f32(*v23, v24))).n64_u64[0];
                  if ((LANES64(v25).n64_u8[0] & 1) != 0 &&
                      (LANES64(v25).n64_u8[2] & 1) != 0 &&
                      (LANES64(v25).n64_u8[4] & 1) != 0) {
                  LABEL_33:
                    a1[2] = a1[1];
                    GameRoutine_f2d770(a1 + 1, &v39);
                    result = (__int64*)game_hub_dfc1e0(a1[7]);
                    if (result != nullptr) {
                      v27 = result;
                      v28 = result + 3;
                      result = a1 + 4;
                      if (a1 + 4 != v28) {
                        v29 = *(unsigned __int8*)v28;
                        if ((*(_BYTE*)result & 1) != 0) {
                          v33 = (__int64)v27 + 25;
                          v36 = v27 + 4;
                          v34 = v27[4];
                          v35 = v36[1];
                          if ((v29 & 1) != 0) {
                            v37 = v35;
                          }
                          else {
                            v37 = v33;
                          }
                          if ((v29 & 1) != 0) {
                            v38 = v34;
                          }
                          else {
                            v38 = v29 >> 1;
                          }
                          return SpineModel_64dde0(result, v37, v38);
                        }
                        else if ((v29 & 1) != 0) {
                          return GameRoutine_64df20(result, v27[5], v27[4]);
                        }
                        else {
                          v30 = *v28;
                          v31 = v28[1];
                          v32 = v28[2];
                          a1[5] = v31;
                          a1[6] = v32;
                          *result = v30;
                        }
                      }
                    }
                    return result;
                  }
                  LANES128(v15[64]).n128_u32[0] = LANES128(v24).n128_u32[0];
                  LANES128(v15[64]).n128_u32[1] = LANES128(v12[22]).n128_u32[1];
                  v26 = v15[64];
                  LANES128(v26).n128_u64[1] = LANES128(v12[22]).n128_u32[2];
                  v15[64] = v26;
                }
                else {
                  LANES128(v15[64]).n128_u64[1] = LANES128(v12[22]).n128_u64[1];
                  LANES128(*(v23)).n128_u64[0] = LANES128(v12[22]).n128_u64[0];
                  LANES128(v15[65]).n128_u8[0] = 1;
                }
                GameRoutine_dfa900((__int64)v15);
                goto LABEL_33;
              }
              LANES128(v15[62]).n128_u64[0] = LANES128(v20).n128_u64[0];
              v22 = v15[62];
              LANES128(v22).n128_u64[1] = LANES128(v20).n128_u32[2];
              v15[62] = v22;
            }
            else {
              v15[62] = v20;
              LANES128(v15[63]).n128_u8[0] = 1;
            }
            GameRoutine_dfa900((__int64)v15);
            v15 = (float32x4_t*)a1[7];
            goto LABEL_26;
          }
          LANES128(v15[60]).n128_u32[0] = LANES128(v17).n128_u32[0];
          LANES128(v15[60]).n128_u32[1] = LANES128(v12[19]).n128_u32[1];
          v19 = v15[60];
          LANES128(v19).n128_u64[1] = LANES128(v12[19]).n128_u32[2];
          v15[60] = v19;
        }
        else {
          LANES128(v15[60]).n128_u64[1] = LANES128(v12[19]).n128_u64[1];
          LANES128(*(v16)).n128_u64[0] = LANES128(v12[19]).n128_u64[0];
          LANES128(v15[61]).n128_u8[0] = 1;
        }
        GameRoutine_dfa900((__int64)v15);
        v15 = (float32x4_t*)a1[7];
        goto LABEL_19;
      }
    }
  }
  return result;
}

#pragma GCC visibility pop
