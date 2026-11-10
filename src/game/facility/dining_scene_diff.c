#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_7a88a0(_QWORD);
__int64 game_HashString(_QWORD);
extern __int64 GameData_21f4000;
__int64 game_facility_DiningSceneDiff_LoadProp_lambda0_Invoke(__int64 result);
_QWORD* GameRoutine_1413d00(float*, unsigned __int8*, __int64, __int64**,
                            __int64*);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__attribute__((swiftcall)) void
SceneCharacterAppearance_140f320(PSEUDO_X8, __int64, __int64);
__attribute__((swiftcall)) void game_1391f60(PSEUDO_X8, __int64 result);
__attribute__((swiftcall)) void game_92b240(PSEUDO_X8, _QWORD);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_1389160(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_19513c0(_QWORD);
__int64 GameRoutine_195ab40(_QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD, _QWORD);
__int64 GameRoutine_a0d9a0(_QWORD);
__int64 SceneManager_138a920(_QWORD, _QWORD);
__int64 SceneManager_138b7a0(_QWORD, _QWORD);
__int64 SceneManager_138c000(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 SceneManager_138dac0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_memory_HeapManager_Allocate_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 game_facility_SceneManager_CloneObject(__int64, _QWORD*, __int64*);
__int64 game_util_Format(const char*, ...);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 strlen(_QWORD);
__n128 nn_mem_StandardAllocator_Free(_QWORD);
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern _UNKNOWN GameData_1ae7519;
extern _UNKNOWN GameData_1af2a63;
extern __int64 (*GameData_2039748[])();
extern __int64 (*GameData_20397c8[])();
extern __int64 (*GameData_2039848[])();
extern __int64* GameData_2131090;
extern __int64 GameData_212dce8;
extern __int64 GameData_212e1c0;
extern __int64 GameData_2131338[2];
extern __int64 fw_memory_g_heap_manager_ptr;
extern char GameData_1a9f09e;
extern char GameData_1aa5e95[];
extern char GameData_1aa9dde[];
extern char GameData_1aeb216[];
void __attribute__((noreturn)) String_60a1d0();
void __attribute__((noreturn))
String_60a1d0_alt1(_QWORD) __asm__("String_60a1d0");
__n128 game_facility_DiningSceneDiff_Initialize(unsigned __int64 a1,
                                                __int64 a2);
__int64 game_facility_DiningSceneDiff_LoadProp(__int64 a1);
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 std___1___hash_memory(_QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
void GameRoutine_14140e0(__int64*, unsigned __int64);
_QWORD* DiningSceneDiff_1413d00(float* a1, unsigned __int8* a2, __int64 a3,
                                __int64** a4, __int64* a5);

__n128 game_facility_DiningSceneDiff_Initialize(unsigned __int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int64* v6;
  _BYTE* v7;
  __int64 v8;
  __int64* v9;
  unsigned __int64 v10;
  char* v11;
  unsigned __int64 v12;
  __int64* v13;
  __int64 v14;
  _BYTE* v15;
  unsigned __int64 v16;
  _QWORD* v17;
  __int64 v18;
  _QWORD* v19;
  _QWORD* v20;
  __int64 v21;
  __int64 v22;
  unsigned __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __n128 result;
  __int64 v36;
  struct {
    __int64 v37;
    unsigned __int64 v38;
    char* v39;
    char gap24_[8];
    __int64 (***v40)();
  } v37_;
  _BYTE v41[24];
  __int64 (***v42)();
  __int64* v43;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(a1 + 96) = a2;
  v37_.v37 = 0x82A0E59FA3E90CLL;
  v3 = (*(__int64 (**)(unsigned __int64))(*(_QWORD*)a1 + 32LL))(a1),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v4 = strlen(v3),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v4 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(), result = COERCE_AS(__typeof__(result),
                                        PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v5 = v4;
  v6 = (__int64*)fw_memory_g_heap_manager_ptr;
  if (v4 >= 0x17) {
    if ((v4 | 7) == 0x17) {
      v8 = 26;
    }
    else {
      v8 = (v4 | 7) + 1;
    }
    v7 = (_BYTE*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, v8, 16, 0),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    *(_QWORD*)&v41[8] = v5;
    *(_QWORD*)&v41[16] = v7;
    *(_QWORD*)v41 = v8 | 1;
    goto LABEL_9;
  }
  v41[0] = 2 * v4;
  v7 = &v41[1];
  if (v4 != 0) {
  LABEL_9:
    memmove(v7, v3, v5),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v9 = (__int64*)(a1 + 8);
  v7[v5] = 0;
  if ((__int64*)(a1 + 8) != &v37_.v37) {
    if ((*(_BYTE*)v9 & 1) != 0) {
      if ((v37_.v37 & 1) != 0) {
        v11 = v37_.v39;
      }
      else {
        v11 = (char*)&v37_.v37 + 1;
      }
      if ((v37_.v37 & 1) != 0) {
        v12 = v37_.v38;
      }
      else {
        v12 = (unsigned __int64)(unsigned __int8)v37_.v37 >> 1;
      }
      SpineModel_64dde0(v9, (__int64)v11, v12),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else if ((v37_.v37 & 1) != 0) {
      GameRoutine_64df20(v9, (__int64)v37_.v39, v37_.v38),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    else {
      v10 = v37_.v38;
      *v9 = v37_.v37;
      *(_QWORD*)(a1 + 16) = v10;
      *(_QWORD*)(a1 + 24) = v37_.v39;
    }
  }
  v13 = (__int64*)(a1 + 32);
  if ((_BYTE*)(a1 + 32) == v41) {
  LABEL_34:
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_61;
    }
    goto LABEL_35;
  }
  if ((*(_BYTE*)v13 & 1) != 0) {
    if ((v41[0] & 1) != 0) {
      v15 = *(_BYTE**)&v41[16];
    }
    else {
      v15 = &v41[1];
    }
    if ((v41[0] & 1) != 0) {
      v16 = *(_QWORD*)&v41[8];
    }
    else {
      v16 = (unsigned __int64)v41[0] >> 1;
    }
    SpineModel_64dde0(v13, (__int64)v15, v16),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    goto LABEL_34;
  }
  if ((v41[0] & 1) != 0) {
    GameRoutine_64df20(v13, *(__int64*)&v41[16], *(unsigned __int64*)&v41[8]),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_61;
    }
  }
  else {
    v14 = *(_QWORD*)&v41[8];
    *v13 = *(_QWORD*)v41;
    *(_QWORD*)(a1 + 40) = v14;
    *(_QWORD*)(a1 + 48) = *(_QWORD*)&v41[16];
    if (*(_QWORD*)(a1 + 80) == 0) {
      goto LABEL_61;
    }
  }
LABEL_35:
  v17 = *(_QWORD**)(a1 + 72);
  while (v17 != nullptr) {
    v19 = v17;
    v17 = (_QWORD*)*v17;
    v20 = (_QWORD*)v19[10];
    if (v20 == v19 + 6) {
      v21 = 32;
    }
    else {
      if (v20 == nullptr) {
        goto LABEL_46;
      }
      v21 = 40;
    }
    (*(void (**)(__int64))(*v20 + v21))((__int64)v20),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  LABEL_46:
    if ((v19[2] & 1) != 0 && v19[4] != 0) {
      if (*(_QWORD*)(*v6 + 200) != 0) {
        v22 = 128;
      }
      else {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free(*v6 + v22),
          result = COERCE_AS(__typeof__(result),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
    }
    if (*(_QWORD*)(*v6 + 200) != 0) {
      v18 = 128;
    }
    else {
      v18 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v18),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v23 = *(_QWORD*)(a1 + 64);
  *(_QWORD*)(a1 + 72) = 0;
  if (v23 != 0) {
    v24 = v23 & 7;
    if (v23 >= 8) {
      v26 = v23 & 0xFFFFFFFFFFFFFFF8LL;
      v25 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v25) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v25 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v25 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v25 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v25 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v25 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + 8 * v25 + 48) = 0;
        v27 = *(_QWORD*)(a1 + 56) + 8 * v25;
        v25 += 8;
        *(_QWORD*)(v27 + 56) = 0;
      } while (v26 != v25);
    }
    else {
      v25 = 0;
    }
    if (v24 != 0) {
      v28 = 8 * v25;
      do {
        --v24;
        *(_QWORD*)(*(_QWORD*)(a1 + 56) + v28) = 0;
        v28 += 8;
      } while (v24 != 0);
    }
  }
  *(_QWORD*)(a1 + 80) = 0;
LABEL_61:
  if ((v41[0] & 1) != 0 && *(_QWORD*)&v41[16] != 0) {
    v29 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v29),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v37_.v37 & 1) != 0 && v37_.v39 != nullptr) {
    v30 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v30 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v30),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v31 = 4;
  v41[17] = 0;
  v41[0] = 32;
  v37_.v40 = (__int64 (***)(void))&v37_.v37,
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)&v41[9] = 0x8983E3BC83E3AD83LL;
  *(_QWORD*)&v41[1] = 0xE35F82A0E59FA3E9LL;
  v37_.v37 = (__int64)GameData_2039748;
  v37_.v38 = a1;
  v42 = (__int64 (***)(void))&v37_.v37,
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v43 = (__int64*)v41;
  GameRoutine_1413d00((float*)(a1 + 56), v41,
                      (__int64)std___1_piecewise_construct_ptr, &v43,
                      (__int64*)&v42),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v37_.v40 == (__int64 (***)(void))&v37_.v37) {
    goto LABEL_74;
  }
  if (v37_.v40 != nullptr) {
    v31 = 5;
  LABEL_74:
    ((__int64 (*)(__int64))(*v37_.v40)[v31])((__int64)v37_.v40),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v41[0] & 1) != 0 && *(_QWORD*)&v41[16] != 0) {
    v32 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free(*v6 + v32),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  v33 = 4;
  v34 = fw_memory_HeapManager_Allocate(*v6, 32, 16, 0),
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)v41 = 33;
  *(_QWORD*)&v41[8] = 25;
  *(_QWORD*)&v41[16] = v34;
  *(_WORD*)(v34 + 24) = 130;
  v37_.v40 = (__int64 (***)(void))&v37_.v37,
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  *(_QWORD*)(v34 + 16) = 0x99E68BA7E58B96E9LL;
  *(_QWORD*)v34 = 0xE75F82A0E59FA3E9LL;
  *(_QWORD*)(v34 + 8) = 0x8A82E3AE92E6A989LL;
  v37_.v37 = (__int64)GameData_20397c8;
  v37_.v38 = a1;
  v42 = (__int64 (***)(void))&v37_.v37,
  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  v43 = (__int64*)v41;
  GameRoutine_1413d00((float*)(a1 + 56), v41,
                      (__int64)std___1_piecewise_construct_ptr, &v43,
                      (__int64*)&v42),
      result =
          COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (v37_.v40 == (__int64 (***)(void))&v37_.v37) {
    goto LABEL_83;
  }
  if (v37_.v40 != nullptr) {
    v33 = 5;
  LABEL_83:
    ((__int64 (*)(__int64))(*v37_.v40)[v33])((__int64)v37_.v40),
        result =
            COERCE_AS(__typeof__(result), PSEUDO_REGISTER(__n128, "v0", "=w"));
  }
  if ((v41[0] & 1) != 0 && *(_QWORD*)&v41[16] != 0) {
    v36 = 128;
    if (*(_QWORD*)(*v6 + 200) == 0) {
      v36 = 56;
    }
    return nn_mem_StandardAllocator_Free(*v6 + v36);
  }
  return result;
}

void __attribute__((noreturn)) DiningSceneDiff_1413c50() { __udf(0x8002u); }

_QWORD* DiningSceneDiff_1413d00(float* a1, unsigned __int8* a2, __int64 a3,
                                __int64** a4, __int64* a5)
{

#pragma clang fp contract(off)
  unsigned __int64 v5;
  unsigned __int64 v6;
  bool v10;
  unsigned __int64 v11;
  unsigned __int8* v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int64 v17;
  _QWORD* v18;
  _QWORD* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  _QWORD* v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  _QWORD* v27;
  _QWORD* v28;
  __int64* v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  float v35;
  float v36;
  float v37;
  _BOOL8 v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 primeEm;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  unsigned __int64 v48;

  v6 = *a2;
  v10 = (v6 & 1) == 0;
  v11 = v6 >> 1;
  if (v10) {
    v12 = a2 + 1;
  }
  else {
    v12 = *((unsigned __int8**)a2 + 2);
  }
  if (v10) {
    v13 = v11;
  }
  else {
    v13 = *((_QWORD*)a2 + 1);
  }
  v14 = std___1___hash_memory(v12, v13);
  v15 = *((_QWORD*)a1 + 1);
  v16 = v14;
  if (v15 != 0) {
    v17 = v15 - 1;
    if ((v15 & (v15 - 1)) != 0) {
      v5 = v14;
      if (v14 >= v15) {
        v5 = v14 % v15;
      }
    }
    else {
      v5 = v17 & v14;
    }
    v18 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v5);
    if (v18 != nullptr) {
      v19 = (_QWORD*)*v18;
      if (*v18 != 0) {
        if ((v15 & v17) == 0) {
          while (1) {
            v24 = v19[1];
            if (v24 == v16) {
              v25 = *((unsigned __int8*)v19 + 16);
              v26 = v19[3];
              if ((v25 & 1) == 0) {
                v26 = v25 >> 1;
              }
              if (v26 == v13) {
                v27 = (v25 & 1) != 0 ? (_QWORD*)v19[4]
                                     : (_QWORD*)((char*)v19 + 17);
                if ((unsigned int)memcmp(v27, v12, v13) == 0) {
                  return v19;
                }
              }
            }
            else if ((v24 & v17) != v5) {
              goto LABEL_41;
            }
            v19 = (_QWORD*)*v19;
            if (v19 == nullptr) {
              goto LABEL_41;
            }
          }
        }
        do {
          v20 = v19[1];
          if (v20 == v16) {
            v21 = *((unsigned __int8*)v19 + 16);
            v22 = v19[3];
            if ((v21 & 1) == 0) {
              v22 = v21 >> 1;
            }
            if (v22 == v13) {
              v23 =
                  (v21 & 1) != 0 ? (_QWORD*)v19[4] : (_QWORD*)((char*)v19 + 17);
              if ((unsigned int)memcmp(v23, v12, v13) == 0) {
                return v19;
              }
            }
          }
          else {
            if (v20 >= v15) {
              v20 %= v15;
            }
            if (v20 != v5) {
              break;
            }
          }
          v19 = (_QWORD*)*v19;
        } while (v19 != nullptr);
      }
    }
  }
LABEL_41:
  v28 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 96, 16, 0);
  v29 = *a4;
  *v28 = 0;
  v28[1] = v16;
  v30 = *a5;
  v19 = v28;
  if ((*(_BYTE*)v29 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(v28 + 2, v29[2], v29[1]);
    v34 = *(_QWORD*)(v30 + 32);
    if (v34 != 0) {
    LABEL_43:
      if (v34 == v30) {
        v19[10] = v19 + 6;
        (*(void (**)(_QWORD))(**(_QWORD**)(v30 + 32) + 24LL))(
            *(_QWORD*)(v30 + 32));
      }
      else {
        v19[10] = (*(__int64 (**)(__int64))(*(_QWORD*)v34 + 16LL))(v34);
      }
      goto LABEL_48;
    }
  }
  else {
    v31 = *v29;
    v32 = v29[1];
    v33 = v29[2];
    v28[3] = v32;
    v28[4] = v33;
    v28[2] = v31;
    v34 = *(_QWORD*)(v30 + 32);
    if (v34 != 0) {
      goto LABEL_43;
    }
  }
  v19[10] = 0;
LABEL_48:
  v35 = a1[8];
  v36 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v15 == 0 || (float)(v35 * (float)v15) < v36) {
    v37 = v36 / v35;
    v38 = true;
    if (v15 >= 3) {
      v38 = (v15 & (v15 - 1)) != 0;
    }
    v39 = v38 | (2 * v15);
    v40 = vcvtps_u64_f32(v37);
    if (v39 <= v40) {
      primeEm = v40;
    }
    else {
      primeEm = v39;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v42 = *((_QWORD*)a1 + 1);
    if (primeEm > v42) {
      goto LABEL_60;
    }
    if (primeEm < v42) {
      v43 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v42 < 3 || (v42 & (v42 - 1)) != 0) {
        v43 = std___1___next_prime(v43);
      }
      else {
        v44 = 1LL << -(char)__clz(v43 - 1);
        if (v43 >= 2) {
          v43 = v44;
        }
      }
      if (primeEm <= v43) {
        primeEm = v43;
      }
      if (primeEm < v42) {
      LABEL_60:
        GameRoutine_14140e0((__int64*)a1, primeEm);
      }
    }
    v15 = *((_QWORD*)a1 + 1);
    if ((v15 & (v15 - 1)) != 0) {
      if (v16 >= v15) {
        v5 = v16 % v15;
      }
      else {
        v5 = v16;
      }
    }
    else {
      v5 = (v15 - 1) & v16;
    }
  }
  v45 = *(_QWORD*)a1;
  v46 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v5);
  if (v46 != nullptr) {
    *v19 = *v46;
    *v46 = v19;
  }
  else {
    v47 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v19;
    *v19 = v47;
    *(_QWORD*)(v45 + 8 * v5) = a1 + 4;
    if (*v19 != 0) {
      v48 = *(_QWORD*)(*v19 + 8LL);
      if ((v15 & (v15 - 1)) != 0) {
        if (v48 >= v15) {
          v48 %= v15;
        }
      }
      else {
        v48 &= v15 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v48) = v19;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return v19;
}

__int64 game_facility_DiningSceneDiff_LoadProp(__int64 a1)
{
  __int64 v1;
  char* v2;
  unsigned __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 i;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  char* v16;
  __int64 v17;
  __int128 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  char* v37;
  __int64 v38;
  __int64 v39;
  char* v40;
  unsigned int v41;
  __int64* v42;
  char* v43;
  __int128** v44;
  char* v45;
  unsigned __int64 v46;
  char* v47;
  char* v48;
  __int128** v49;
  __int64 v50;
  char* v51;
  __int64* v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  char* v56;
  unsigned __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  unsigned __int64 v60;
  _QWORD* v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  char* v67;
  unsigned __int64 v68;
  __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  unsigned __int64 v72;
  _QWORD* v73;
  _QWORD* v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64* v77;
  __int64 v78;
  __int64 v79;
  __int128* v80;
  __int64 v81;
  unsigned __int64 v82;
  char* v83;
  __int64 v84;
  __int64 v85;
  __int64 result;
  __int64 v87;
  _QWORD v88[6];
  _QWORD* v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  unsigned __int64 v93;
  __int128 v94;
  int v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;
  __int128 v105;
  _BYTE v106[9];
  char v107[3];
  __int128* v108;
  int v109;
  __int128 v110;
  int v111;
  __int64 v112;
  __int64 v113;
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  char v121;
  char v122;
  __int64 v123;
  __int64 v124;
  unsigned __int64 v125;
  char* v126;

  v89 = nullptr;
  v90 = 0;
  v1 = *(_QWORD*)(a1 + 8);
  v91 = 0;
  v88[0] = GameData_2131338[0] + 16;
  memset(&v88[1], 0, 40);
  game_92b240((void*)(&v105), v1);
  if ((v105 & 1) != 0) {
    v2 = *(char**)v106;
  }
  else {
    v2 = (char*)&v105 + 1;
  }
  if ((v105 & 1) != 0) {
    v3 = *((_QWORD*)&v105 + 1);
  }
  else {
    v3 = (unsigned __int64)(unsigned __int8)v105 >> 1;
  }
  GameRoutine_1389160(v88, v2, v3);
  if ((v105 & 1) != 0 && *(_QWORD*)v106 != 0) {
    v4 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v4 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v4);
  }
  SceneManager_138a920(*(_QWORD*)GameData_212dce8, v88);
  BYTE7(v105) = 0;
  LOBYTE(v105) = 12;
  *(_DWORD*)((char*)&v105 + 1) = -442522647;
  *(_WORD*)((char*)&v105 + 5) = -32096;
  GameRoutine_19513c0(&v105);
  if ((v105 & 1) != 0 && *(_QWORD*)v106 != 0) {
    v5 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v5);
  }
  for (i = 0; i != 3; ++i) {
    v7 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 96) + 8LL) + 8 * i);
    if (v7 == 0) {
      continue;
    }
    v8 = *(_QWORD*)(v7 + 392);
    v105 = (__typeof__(v105)){0};
    v106[0] = 20;
    LOBYTE(v109) = 0;
    v121 = 0;
    v122 = 0;
    v123 = 0;
    strcpy(v107, "_D");
    v124 = v8;
    *(_QWORD*)&v106[1] = 0x335FAC9CE6BA9FE5LL;
    SceneCharacterAppearance_140f320((void*)(&v92), (__int64)&v124,
                                     (__int64)&GameData_1af2a63);
    v9 = v92;
    v10 = v93;
    v11 = *((_QWORD*)&v105 + 1);
    v92 = 0;
    v93 = 0;
    *(_QWORD*)&v105 = v9;
    *((_QWORD*)&v105 + 1) = v10;
    if (v11 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
      std___1___shared_weak_count___release_weak(v11);
      v12 = v93;
      if (v93 == 0) {
        goto LABEL_27;
      }
    }
    else {
      v12 = v93;
      if (v93 == 0) {
        goto LABEL_27;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak(v12);
    }
  LABEL_27:
    v13 = game_util_Format(GameData_1aeb216, (unsigned int)i);
    v14 = strlen(v13);
    if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_181;
    }
    v15 = v14;
    if (v14 >= 0x17) {
      if ((v14 | 7) == 0x17) {
        v17 = 26;
      }
      else {
        v17 = (v14 | 7) + 1;
      }
      v16 = (char*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v17, 16, 0);
      v125 = v15;
      v126 = v16;
      v124 = v17 | 1;
    LABEL_35:
      memmove(v16, v13, v15);
      goto LABEL_36;
    }
    v16 = (char*)&v124 + 1;
    LOBYTE(v124) = 2 * v14;
    if (v14 != 0) {
      goto LABEL_35;
    }
  LABEL_36:
    v16[v15] = 0;
    GameRoutine_195ab40(&v92, &v124);
    v109 = v92;
    if (v121 != 1) {
      v23 = v96;
      v24 = v97;
      v96 = 0;
      v97 = 0;
      v112 = v23;
      v113 = v24;
      v25 = v100;
      v26 = v101;
      v110 = v94;
      v100 = 0;
      v101 = 0;
      v111 = v95;
      v116 = v25;
      v117 = v26;
      v27 = v98;
      v28 = v99;
      v98 = 0;
      v99 = 0;
      v114 = v27;
      v115 = v28;
      v30 = v103;
      v29 = v104;
      v103 = 0;
      v104 = 0;
      v119 = v30;
      v120 = v29;
      v31 = v102;
      v102 = 0;
      v118 = v31;
      v121 = 1;
    LABEL_58:
      if ((v96 & 1) == 0) {
        goto LABEL_65;
      }
    LABEL_61:
      if (v98 != 0) {
        v32 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v32 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v32);
      }
      goto LABEL_65;
    }
    *(_QWORD*)&v18 = v94;
    *((_QWORD*)&v18 + 1) = DWORD2(v94);
    v111 = v95;
    v110 = v18;
    if ((v112 & 1) != 0 && v114 != 0) {
      v19 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v19 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19);
    }
    v112 = v96;
    v113 = v97;
    LOWORD(v96) = 0;
    v114 = v98;
    if ((v115 & 1) != 0 && v117 != 0) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20);
    }
    v115 = v99;
    v116 = v100;
    LOWORD(v99) = 0;
    v117 = v101;
    if ((v118 & 1) == 0 || v120 == 0) {
      v118 = v102;
      v119 = v103;
      LOWORD(v102) = 0;
      v120 = v104;
      if ((v96 & 1) == 0) {
        goto LABEL_65;
      }
      goto LABEL_61;
    }
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v21 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v21);
    v118 = v102;
    v119 = v103;
    LOWORD(v102) = 0;
    v120 = v104;
    if ((v99 & 1) == 0 || v101 == 0) {
      goto LABEL_58;
    }
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v22);
    if ((v96 & 1) != 0) {
      goto LABEL_61;
    }
  LABEL_65:
    if ((v124 & 1) != 0 && v126 != nullptr) {
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
    }
    v34 = *(_QWORD*)GameData_212dce8;
    v35 = game_util_Format(GameData_1aa5e95, (unsigned int)i);
    v14 = strlen(v35);
    if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
    LABEL_181:
      String_60a1d0_alt1(v14);
    }
    v36 = v14;
    if (v14 >= 0x17) {
      if ((v14 | 7) == 0x17) {
        v38 = 26;
      }
      else {
        v38 = (v14 | 7) + 1;
      }
      v37 = (char*)fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v38, 16, 0);
      v93 = v36;
      *(_QWORD*)&v94 = v37;
      v92 = v38 | 1;
    LABEL_78:
      memmove(v37, v35, v36);
      goto LABEL_79;
    }
    v37 = (char*)&v92 + 1;
    LOBYTE(v92) = 2 * v14;
    if (v14 != 0) {
      goto LABEL_78;
    }
  LABEL_79:
    v37[v36] = 0;
    SceneManager_138c000(
        v34, &v92, *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 96) + 8LL) + 8 * i),
        &v105);
    if ((v92 & 1) != 0 && (_QWORD)v94 != 0) {
      v39 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v39 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v39);
    }
    GameRoutine_a0d9a0(&v105);
  }
  v40 = &GameData_1a9f09e;
  v41 = 0;
  v42 = GameData_2131090;
  v43 = (char*)&v92 + 1;
  v44 = &v108;
  do {
    if (*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v1 + 96) + 32LL) + 56LL) != 0) {
      v45 = *(char**)(*(_QWORD*)(*(_QWORD*)(v1 + 96) + 32LL) + 56LL);
    }
    else {
      v45 = v40;
    }
    v14 = strlen(v45);
    if (v14 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_181;
    }
    v46 = v14;
    if (v14 >= 0x17) {
      v48 = v43;
      v49 = v44;
      v50 = v1;
      v51 = v40;
      v52 = v42;
      if ((v14 | 7) == 0x17) {
        v53 = 26;
      }
      else {
        v53 = (v14 | 7) + 1;
      }
      v54 = fw_memory_HeapManager_Allocate_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, v53, 16, 0);
      v55 = v53 | 1;
      v42 = v52;
      v40 = v51;
      v1 = v50;
      v44 = v49;
      v43 = v48;
      v47 = (char*)v54;
      v93 = v46;
      *(_QWORD*)&v94 = v54;
      v92 = v55;
    LABEL_97:
      memmove(v47, v45, v46);
      goto LABEL_98;
    }
    v47 = v43;
    LOBYTE(v92) = 2 * v14;
    if (v14 != 0) {
      goto LABEL_97;
    }
  LABEL_98:
    v47[v46] = 0;
    if ((v92 & 1) != 0) {
      v56 = (char*)v94;
    }
    else {
      v56 = v43;
    }
    v57 = game_HashString(v56);
    v58 = *v42;
    v59 = *(_QWORD*)(*v42 + 96);
    if ((v59 & (v59 - 1)) != 0) {
      v60 = v57;
      if (v57 >= v59) {
        v60 = v57 % v59;
      }
      v61 = *(_QWORD**)(*(_QWORD*)(v58 + 88) + 8 * v60);
      do {
        do {
          v61 = (_QWORD*)*v61;
        } while (v61[1] != v57);
      } while (v61[2] != v57);
    }
    else {
      v61 = *(_QWORD**)(*(_QWORD*)(v58 + 88) + 8 * ((v59 - 1) & v57));
      do {
        do {
          v61 = (_QWORD*)*v61;
        } while (v61[1] != v57);
      } while (v61[2] != v57);
    }
    game_1391f60((void*)((unsigned __int8*)&v124), v61[3]);
    *(_QWORD*)&v110 = 0;
    LOBYTE(v105) = 20;
    strcpy((char*)&v105 + 9, "_D");
    *(_QWORD*)((char*)&v105 + 1) = 0x335FAC9CE6BA9FE5LL;
    v62 = game_util_Format(GameData_1aa9dde, v41);
    GameRoutine_60a020(&v105, v62);
    SceneManager_138dac0(*(_QWORD*)GameData_212dce8, &v124, &v92, &v105);
    if ((__int128**)v110 == v44) {
      v63 = 32;
      goto LABEL_115;
    }
    if ((_QWORD)v110 != 0) {
      v63 = 40;
    LABEL_115:
      (*(void (**)(__int64))(*(_QWORD*)v110 + v63))((__int64)v110);
    }
    if ((v105 & 1) != 0 && *(_QWORD*)v106 != 0) {
      v64 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v64 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v64);
    }
    if ((v124 & 1) != 0 && v126 != nullptr) {
      v65 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v65 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v65);
    }
    if ((v92 & 1) != 0 && (_QWORD)v94 != 0) {
      v66 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v66 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v66);
    }
    ++v41;
  } while (v41 != 3);
  game_92b240((void*)(&v92), v1);
  GameRoutine_1a09ce0(&v92, &GameData_1ae7519, 13);
  if ((v92 & 1) != 0) {
    v67 = (char*)v94;
  }
  else {
    v67 = (char*)&v92 + 1;
  }
  v68 = game_HashString(v67);
  if (v68 == 0) {
    goto LABEL_170;
  }
  v69 = *v42;
  v70 = *(_QWORD*)(*v42 + 96);
  if (v70 == 0 || *(_QWORD*)(v69 + 112) == 0) {
    goto LABEL_170;
  }
  v71 = v70 - 1;
  if ((v70 & (v70 - 1)) != 0) {
    v72 = v68;
    if (v68 >= v70) {
      v72 = v68 % v70;
    }
  }
  else {
    v72 = v71 & v68;
  }
  v73 = *(_QWORD**)(*(_QWORD*)(v69 + 88) + 8 * v72);
  if (v73 == nullptr) {
    goto LABEL_170;
  }
  v74 = (_QWORD*)*v73;
  if (v74 == nullptr) {
    goto LABEL_170;
  }
  if ((v70 & v71) == 0) {
    while (1) {
      v76 = v74[1];
      if (v76 == v68) {
        if (v74[2] == v68) {
          goto LABEL_157;
        }
      }
      else if ((v76 & v71) != v72) {
        goto LABEL_170;
      }
      v74 = (_QWORD*)*v74;
      if (v74 == nullptr) {
        goto LABEL_170;
      }
    }
  }
  while (2) {
    v75 = v74[1];
    if (v75 != v68) {
      if (v75 >= v70) {
        v75 %= v70;
      }
      if (v75 != v72) {
        goto LABEL_170;
      }
    }
    else if (v74[2] == v68) {
    LABEL_157:
      if (v74[3] != 0) {
        v77 = (__int64*)GameData_212dce8;
        game_facility_SceneManager_CloneObject(*(_QWORD*)GameData_212dce8, &v92,
                                               &v92);
        v78 = *v77;
        if ((v92 & 1) != 0) {
          fw_text_String_CopyTerminated(&v124, v94, v93);
        }
        else {
          v124 = v92;
          v125 = v93;
          v126 = (char*)v94;
        }
        v79 = 32;
        v80 = (__int128*)fw_memory_HeapManager_Allocate_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 32, 16, 0);
        v81 = v124;
        v82 = v125;
        v124 = 0;
        v125 = 0;
        v108 = v80;
        *(_QWORD*)v80 = GameData_2039848;
        *((_QWORD*)v80 + 1) = v81;
        v83 = v126;
        v126 = nullptr;
        *((_QWORD*)v80 + 2) = v82;
        *((_QWORD*)v80 + 3) = v83;
        SceneManager_138b7a0(v78, &v105);
        if (v108 == &v105) {
        LABEL_164:
          (*(void (**)(__int64))(*(_QWORD*)v108 + v79))((__int64)v108);
        }
        else if (v108 != nullptr) {
          v79 = 40;
          goto LABEL_164;
        }
        if ((v124 & 1) != 0 && v126 != nullptr) {
          v84 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v84 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v84);
        }
      }
    LABEL_170:
      if ((v92 & 1) != 0 && (_QWORD)v94 != 0) {
        v85 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v85 = 56;
        }
        nn_mem_StandardAllocator_Free_alt1(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v85);
      }
      result = (__int64)v89;
      v88[0] = GameData_212e1c0 + 16;
      if (v89 == &v88[2]) {
        v87 = 32;
        return (*(__int64 (**)(__int64))(*v89 + v87))((__int64)v89);
      }
      else if (v89 != nullptr) {
        v87 = 40;
        return (*(__int64 (**)(__int64))(*v89 + v87))((__int64)v89);
      }
      return result;
    }
    v74 = (_QWORD*)*v74;
    if (v74 == nullptr) {
      goto LABEL_170;
    }
    continue;
  }
}

__int64 game_facility_DiningSceneDiff_LoadProp_lambda0_Invoke(__int64 result)
{
  __int64* v1;
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  __int64 v11;
  bool v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64 v15;
  _QWORD v16[2];

  v1 = *(__int64**)(GameData_21f4000 + 232);
  v2 = *(__int64**)(GameData_21f4000 + 240);
  if (v1 != v2) {
    v3 = result;
    v4 = result + 9;
    while (1) {
      v6 = *v1++;
      v5 = v6;
      v7 = *(_QWORD*)(v6 + 40);
      v8 = v6 + 25;
      v9 = *(unsigned __int8*)(v3 + 8);
      v10 = (*(_BYTE*)(v6 + 24) & 1) != 0 ? v7 : v8;
      v11 = *(_QWORD*)(v3 + 24);
      v12 = (v9 & 1) == 0;
      v13 = v9 >> 1;
      if (v12) {
        v11 = v4;
      }
      else {
        v13 = *(_QWORD*)(v3 + 16);
      }
      v16[0] = v11;
      v16[1] = v13;
      v14 = game_HashString(v10);
      result = GameRoutine_7a88a0(v16);
      if (v14 == result) {
        break;
      }
      if (v1 == v2) {
        return result;
      }
    }
    v15 = *(_QWORD*)(v5 + 8);
    if (v15 != 0) {
      *(_BYTE*)(v15 + 289) = 0;
    }
  }
  return result;
}

#pragma GCC visibility pop
