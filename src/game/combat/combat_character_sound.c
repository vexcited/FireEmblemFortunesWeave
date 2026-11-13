#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 GameRoutine_1091720(_QWORD, long double);
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 GameRoutine_a19f00(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_isActive_100100(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN* GameData_212d4e8;
extern __int64 GameData_212fe68;
extern __int64 GameData_21ec7b0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212d4e0;
struct PseudoSret GameRoutine_1095750(_QWORD, _QWORD, _QWORD, float);
__int64 CombatCharacterSound_1091900(_QWORD* a1);
void CombatCharacterSound_1091c00_alt1(__int64 a1, int* a2) __asm__(
    "CombatCharacterSound_1091c00");
__int64 CombatCharacterSound_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "CombatCharacterSound_DeletingDestructor");
__attribute__((swiftcall)) void CharacterSound_1095750(PSEUDO_X8, _QWORD,
                                                       _QWORD, _QWORD, float);
__attribute__((swiftcall)) void
CharacterSound_1095750_alt1(PSEUDO_X8, __int64, __int64, __int64,
                            float) __asm__("CharacterSound_1095750");
__int64 CombatCharacterSound_1091900_alt1(_QWORD, long double) __asm__(
    "CombatCharacterSound_1091900");
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 GameRoutine_a19f00_alt1(__int64 result,
                                __int64) __asm__("GameRoutine_a19f00");
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64 snd_isActive_100100_alt1(__int64*) __asm__("snd_isActive_100100");
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64* GameData_212d448[9];
extern __int64 fw_memory_g_heap_manager;
void __attribute__((noreturn)) String_60a1d0();
__attribute__((swiftcall)) void CombatCharacterSound_1091a50(PSEUDO_X8 x8_,
                                                             __int64 a1,
                                                             __int64 a2,
                                                             long double a4);
__attribute__((swiftcall)) void CombatCharacterSound_1091ac0(PSEUDO_X8 x8_,
                                                             __int64 result,
                                                             __int64 a2,
                                                             float a4);
void game_combat_CombatCharacterSound_CombatCharacterSound_lambda0_Invoke(
    __int64 a1, __int64* a2);
__attribute__((swiftcall)) void
CharacterSound_1095750_alt2(PSEUDO_X8, __int64, const char*, __int64,
                            float) __asm__("CharacterSound_1095750");
__int64 GameHr_1091720(__int64, int, int);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 CombatCharacterSound_1091c00(__int64 result, int* a2);
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 snd_isActive_100100_alt2(__int64) __asm__("snd_isActive_100100");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void CombatCharacterSound_DeletingDestructor(_QWORD* a1);
__int64 CharacterModel_cfb0d0(__int64*, __int64*, __int64, int);
extern __int64 (*GameData_2007b40[])();
extern __int64 (*game_combat_CombatCharacterSound_vtable[])();
__int64 game_combat_CombatCharacterSound_CombatCharacterSound(_QWORD* a1,
                                                              _QWORD* a2);

__int64 game_combat_CombatCharacterSound_CombatCharacterSound(_QWORD* a1,
                                                              _QWORD* a2)
{
  _QWORD* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  struct {
    _QWORD v10[4];
    _QWORD* v11;
  } v10_;
  struct {
    __int64 v12;
    __int64 v13;
  } v12_;

  v2 = a2;
  *a1 = GameData_212fe68 + 16;
  a1[1] = a2;
  {
    v3 = a2[22];
    __asm__ volatile("" ::"r"(v3));
  }
  a1[2] = a2[21];
  a1[3] = v3;
  if (v3 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v3 + 16), 1u,
                              memory_order_relaxed);
    {
      v2 = (_QWORD*)a1[1];
      __asm__ volatile("" ::"r"(v2));
    }
  }
  {
    v4 = a2[23];
    __asm__ volatile("" ::"r"(v4));
  }
  *a1 = game_combat_CombatCharacterSound_vtable;
  a1[4] = v4;
  a1[5] = 0;
  {
    v5 = *(_QWORD*)(v2[11] + 120LL);
    __asm__ volatile("" ::"r"(v5));
  }
  {
    v6 = v2[3];
    __asm__ volatile("" ::"r"(v6));
  }
  {
    v7 = v2[4];
    __asm__ volatile("" ::"r"(v7));
  }
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    v12_.v12 = v6;
    v12_.v13 = v7;
    v10_.v10[0] = GameData_2007b40;
    v10_.v10[1] = a1;
    v10_.v11 = v10_.v10;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v12_.v12 = v2[3];
    v12_.v13 = 0;
    v10_.v10[0] = GameData_2007b40;
    v10_.v10[1] = a1;
    v10_.v11 = v10_.v10;
  }
  CharacterModel_cfb0d0((__int64*)(v5 + 120), &v12_.v12, (__int64)v10_.v10, 1);
  if (v12_.v13 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v12_.v13);
  }
  result = (__int64)v10_.v11;
  if (v10_.v11 == v10_.v10) {
    v9 = 32;
  }
  else {
    if (v10_.v11 == nullptr) {
      goto LABEL_13;
    }
    v9 = 40;
  }
  result = (*(__int64 (**)(__int64))(*v10_.v11 + v9))((__int64)v10_.v11);
LABEL_13:
  if (v7 != 0) {
    return std___1___shared_weak_count___release_weak_alt1(v7);
  }
  return result;
}

__int64 CombatCharacterSound_1091900(_QWORD* a1)
{
  __int64 v1;
  __int64 v4;
  _QWORD* v5;
  __int64 v6;
  unsigned __int8 explicit;
  int* v9;
  int v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  int v15;
  __int64 v16;
  int v17;
  _QWORD* v18;
  _QWORD* v19;

  v1 = a1[3];
  if (v1 == 0) {
    return v1;
  }
  if (*(_QWORD*)(v1 + 8) == -1 || a1[4] == 0) {
    return 0;
  }
  v1 = a1[5];
  if (v1 != 0) {
    return v1;
  }
  v4 = a1[1];
  v5 = *(_QWORD**)(v4 + 80);
  if (v5 != nullptr) {
    v6 = *(_QWORD*)(v4 + 88);
    if (v5[1] == -1 || v6 == 0) {
      v5 = nullptr;
    }
    else {
      v5 = *(_QWORD**)(v6 + 8);
    }
  }
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4e8,
                                  memory_order_acquire);
  v9 = GameData_212d4e0;
  if ((explicit & 1) == 0) {
    v18 = v5;
    v19 = a1;
    v17 = __cxa_guard_acquire(GameData_212d4e8);
    v9 = GameData_212d4e0;
    v5 = v18;
    a1 = v19;
    if (v17 != 0) {
      *GameData_212d4e0 = wld_Crc32(0, "CharacterSound", 14);
      __cxa_guard_release(GameData_212d4e8);
      v9 = GameData_212d4e0;
      v5 = v18;
      a1 = v19;
    }
  }
  v10 = *v9;
  v12 = v5[63];
  v11 = v5[64];
  v13 = v11;
  v14 = v11;
  while (v14 != v12) {
    v15 = *(_DWORD*)(v14 - 16);
    v14 -= 16;
    v13 -= 16;
    if (v15 == v10) {
      if (v11 != v13) {
        v16 = *(_QWORD*)(v13 + 8);
        goto LABEL_24;
      }
      break;
    }
  }
  v16 = 0;
LABEL_24:
  a1[5] = v16;
  return v16;
}

__attribute__((swiftcall)) void CombatCharacterSound_1091a50(PSEUDO_X8 x8_,
                                                             __int64 a1,
                                                             __int64 a2,
                                                             long double a4)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  float v4;
  _QWORD* result;

  v4 = *(float*)&a4;
  result = (_QWORD*)CombatCharacterSound_1091900_alt1(a1, a4);
  if (result != nullptr) {
    (CharacterSound_1095750((void*)((_QWORD*)a3), result, a2, 0, v4),
     (void*)((_QWORD*)a3));
    return;
  }
  *(_QWORD*)a3 = 0;
  *(_DWORD*)(a3 + 8) = 0x2000;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void CombatCharacterSound_1091ac0(PSEUDO_X8 x8_,
                                                             __int64 result,
                                                             __int64 a2,
                                                             float a4)
{
  __int64 a3 = (__int64)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v6;
  __int64 v7;
  bool v8;
  __int64 v9;
  __int64 v10;
  __int64 v13;
  _QWORD v14[2];

  v5 = *(_QWORD*)(result + 8);
  v6 = *(_QWORD*)(v5 + 80);
  if (v6 == 0 ||
      ((v7 = *(_QWORD*)(v5 + 88), *(_QWORD*)(v6 + 8) != -1) ? (v8 = v7 == 0)
                                                            : (v8 = true),
       v8)) {
    *(_QWORD*)a3 = 0;
    *(_DWORD*)(a3 + 8) = 0x2000;
  }
  else {
    v9 = *(_QWORD*)(v7 + 136);
    if (*GameData_212d448[0] != 0 &&
            (v10 = *(_QWORD*)(*GameData_212d448[0] + 8)) != 0 &&
            (*(_BYTE*)(v10 + 113) & 0x80) != 0 ||
        (snd_isActive_100100(v9 + 104) & 1) != 0) {
      *(_QWORD*)a3 = 0;
      *(_DWORD*)(a3 + 8) = 0x2000;
    }
    else {
      CharacterSound_1095750((void*)(v14), v9, "V_AV_<VoiceID>_<Arg>", a2, a4);
      GameRoutine_112180(v9 + 104, v14);
      *(_QWORD*)a3 = 0;
      *(_DWORD*)(a3 + 8) = 0x2000;
      GameRoutine_112180(a3, v9 + 104);
    }
    result = snd_fnd_WeakHandle_isValid(a3);
    if ((result & 1) != 0) {
      v13 = *(_QWORD*)(v7 + 88);
      if (*(_DWORD*)(v13 + 96) <= 1u) {
        GameRoutine_112180(v13 + 320, a3);
        {
          GameRoutine_a19f00(v13 + 272, v13 + 320);
          return;
        }
      }
    }
  }
  {
    result;
    return;
  }
}

__int64 CombatCharacterSound_1091c00(__int64 result, int* a2)
{
  unsigned int v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v12;
  int v14;
  const char* v15;
  __int64 v16;
  __int64 v17;
  __int64 v19;
  __int64 v20;
  int* v21;
  int v22;
  int v23;
  __int64 v24;
  struct {
    __int64 v25;
    int v26;
  } v25_;

  if (GameData_21ec7b0 != 0) {
    v2 = a2[3];
    if (v2 <= 3) {
      v3 = GameData_21ec7b0 + 24LL * v2;
      v4 = *(_QWORD*)(v3 + 32);
      if (v4 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                  memory_order_relaxed);
        v5 = *(_QWORD*)(v3 + 40);
        if (*(_QWORD*)(v4 + 8) == -1 || v5 == 0) {
          return std___1___shared_weak_count___release_weak_alt1(v4);
        }
        v7 = *(_QWORD*)(v5 + 80);
        if (v7 == 0) {
          return std___1___shared_weak_count___release_weak_alt1(v4);
        }
        if (*(_QWORD*)(v7 + 8) == -1 || *(_QWORD*)(v5 + 88) == 0) {
          return std___1___shared_weak_count___release_weak_alt1(v4);
        }
        v9 = *(_QWORD*)(v4 + 8);
        v10 = result;
        result = std___1___shared_weak_count___release_weak_alt1(v4);
        v12 = *(_QWORD*)(v10 + 8);
        if (v9 != -1 && v5 == v12) {
          v14 = *a2;
          if ((*a2 & 0x40) == 0) {
            if ((v14 & 9) != 0) {
              v15 = "Dodge";
            }
            else if ((v14 & 0x80) != 0) {
              v23 = a2[2];
              v22 = a2[3];
              if (v22 == v23) {
                return result;
              }
              result =
                  GameHr_1091720(*(_QWORD*)(GameData_21ec7b0 + 8), v22, v23);
              if ((result & 1) != 0) {
                v15 = "Thanks_Senior";
              }
              else {
                v15 = "Thanks";
              }
              v12 = *(_QWORD*)(v10 + 8);
            }
            else if ((v14 & 4) != 0 ||
                     (v21 = &a2[3 * a2[3]])[26] >= v21[24] >> 1) {
              v15 = "Damage_H";
            }
            else {
              v15 = "Damage_L";
            }
            v16 = *(_QWORD*)(v12 + 80);
            if (v16 != 0) {
              v17 = *(_QWORD*)(v12 + 88);
              if (*(_QWORD*)(v16 + 8) != -1 && v17 != 0) {
                v19 = *(_QWORD*)(v17 + 136);
                if (GameData_21ec7b0 != 0 &&
                        (v20 = *(_QWORD*)(GameData_21ec7b0 + 8)) != 0 &&
                        (*(_BYTE*)(v20 + 113) & 0x80) != 0 ||
                    (snd_isActive_100100_alt1((__int64*)(v19 + 104)) & 1) !=
                        0) {
                  v25_.v25 = 0;
                  v25_.v26 = 0x2000;
                }
                else {
                  CharacterSound_1095750_alt2(
                      (void*)((__int64)&v25_.v25), v19, "V_AV_<VoiceID>_<Arg>",
                      (__int64)v15, 0x1.0000000000000p+0f);
                  GameRoutine_112180_alt1(v19 + 104, (__int64)&v25_.v25);
                  v25_.v25 = 0;
                  v25_.v26 = 0x2000;
                  GameRoutine_112180_alt1((__int64)&v25_.v25, v19 + 104);
                }
                result = snd_fnd_WeakHandle_isValid_alt1(&v25_.v25);
                if ((result & 1) != 0) {
                  v24 = *(_QWORD*)(v17 + 88);
                  if (*(_DWORD*)(v24 + 96) <= 1u) {
                    GameRoutine_112180_alt1(v24 + 320, (__int64)&v25_.v25);
                    return GameRoutine_a19f00_alt1(v24 + 272, v24 + 320);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

void CombatCharacterSound_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;

  *a1 = GameData_212fe68 + 16;
  v2 = a1[3];
  if (v2 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v2);
  }
  v3 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v3 = 56;
  }
  nn_mem_StandardAllocator_Free_alt2(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v3, (__int64)a1);
}

void game_combat_CombatCharacterSound_CombatCharacterSound_lambda0_Invoke(
    __int64 a1, __int64* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  unsigned __int64 v9;
  bool v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  char* v15;
  __int64 v16;
  float v17;
  __int64 v18;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  float v26;
  __int64 v27;
  __int64 v29;
  __int64 v30;
  char* v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  struct {
    __int64 v36;
    unsigned __int64 v37;
    char* v38;
  } v36_;
  struct {
    __int64 v39;
    int v40;
  } v39_;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *a2;
  v4 = GameData_212d448[0];
  v5 = *GameData_212d448[0];
  if (*GameData_212d448[0] != 0) {
    v6 = *(_QWORD*)(v5 + 8);
    if (v6 != 0) {
      v7 = *(_QWORD*)(v6 + 64);
      if (v7 != 0 &&
          *(_DWORD*)(v7 + 8) != *(_DWORD*)(*(_QWORD*)(v2 + 8) + 96LL)) {
        return;
      }
    }
  }
  v8 = *(_QWORD**)(v2 + 8);
  if (*(_BYTE*)(v8[46] + 88LL) == 1) {
    v9 = *(unsigned __int8*)(v3 + 32);
    v10 = (v9 & 1) == 0;
    v11 = v9 >> 1;
    if (v10) {
      v12 = v11;
    }
    else {
      v12 = *(_QWORD*)(v3 + 40);
    }
    if (v10) {
      v13 = v3 + 33;
    }
    else {
      v13 = *(_QWORD*)(v3 + 48);
    }
    v14 = v12 + 1;
    if (v12 + 1 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0();
    }
    if (v14 >= 0x17) {
      if ((v14 | 7) == 0x17) {
        v23 = 26;
      }
      else {
        v23 = (v14 | 7) + 1;
      }
      v15 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v23,
                                                  16, 0);
      v36_.v37 = v12 + 1;
      v36_.v38 = v15;
      v36_.v36 = v23 | 1;
    }
    else {
      v36_.v37 = 0;
      v36_.v38 = nullptr;
      v36_.v36 = (unsigned __int8)(2 * v14);
      v15 = (char*)&v36_.v36 + 1;
      if (v12 == 0) {
      LABEL_34:
        *(_WORD*)&v15[v12] = 70;
        v24 = *(_QWORD*)(v2 + 8);
        v25 = *(_QWORD*)(v24 + 80);
        if (v25 != 0) {
          v26 = *(float*)(v3 + 56);
          v27 = *(_QWORD*)(v24 + 88);
          if (*(_QWORD*)(v25 + 8) != -1 && v27 != 0) {
            v29 = *(_QWORD*)(v27 + 136);
            v30 = *v4;
            if ((v36_.v36 & 1) != 0) {
              v31 = v36_.v38;
            }
            else {
              v31 = (char*)&v36_.v36 + 1;
            }
            if (v30 != 0 && (v32 = *(_QWORD*)(v30 + 8)) != 0 &&
                    (*(_BYTE*)(v32 + 113) & 0x80) != 0 ||
                (snd_isActive_100100_alt2(v29 + 104) & 1) != 0) {
              v39_.v39 = 0;
              v39_.v40 = 0x2000;
            }
            else {
              CharacterSound_1095750_alt2((void*)((__int64)&v39_.v39), v29,
                                          "V_AV_<VoiceID>_<Arg>", (__int64)v31,
                                          v26);
              GameRoutine_112180_alt1(v29 + 104, (__int64)&v39_.v39);
              v39_.v39 = 0;
              v39_.v40 = 0x2000;
              GameRoutine_112180_alt1((__int64)&v39_.v39, v29 + 104);
            }
            if ((snd_fnd_WeakHandle_isValid_alt1(&v39_.v39) & 1) != 0) {
              v34 = *(_QWORD*)(v27 + 88);
              if (*(_DWORD*)(v34 + 96) <= 1u) {
                GameRoutine_112180_alt1(v34 + 320, (__int64)&v39_.v39);
                GameRoutine_a19f00_alt1(v34 + 272, v34 + 320);
              }
            }
          }
        }
        if ((v36_.v36 & 1) != 0 && v36_.v38 != nullptr) {
          v35 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v35 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, (__int64)v36_.v38);
        }
        return;
      }
    }
    memmove_alt1((__int64)v15, v13, v12);
    goto LABEL_34;
  }
  v16 = v8[10];
  if (v16 != 0) {
    v17 = *(float*)(v3 + 56);
    v18 = v8[11];
    if (*(_QWORD*)(v16 + 8) != -1 && v18 != 0) {
      v20 = *(_QWORD*)(v18 + 136);
      v21 = (*(_BYTE*)(v3 + 32) & 1) != 0 ? *(_QWORD*)(v3 + 48) : v3 + 33;
      if (v5 != 0 && (v22 = *(_QWORD*)(v5 + 8)) != 0 &&
              (*(_BYTE*)(v22 + 113) & 0x80) != 0 ||
          (snd_isActive_100100_alt2(v20 + 104) & 1) != 0) {
        v36_.v36 = 0;
        LODWORD(v36_.v37) = 0x2000;
      }
      else {
        CharacterSound_1095750_alt2((void*)((__int64)&v36_.v36), v20,
                                    "V_AV_<VoiceID>_<Arg>", v21, v17);
        GameRoutine_112180_alt1(v20 + 104, (__int64)&v36_.v36);
        v36_.v36 = 0;
        LODWORD(v36_.v37) = 0x2000;
        GameRoutine_112180_alt1((__int64)&v36_.v36, v20 + 104);
      }
      if ((snd_fnd_WeakHandle_isValid_alt1(&v36_.v36) & 1) != 0) {
        v33 = *(_QWORD*)(v18 + 88);
        if (*(_DWORD*)(v33 + 96) <= 1u) {
          GameRoutine_112180_alt1(v33 + 320, (__int64)&v36_.v36);
          GameRoutine_a19f00_alt1(v33 + 272, v33 + 320);
        }
      }
    }
  }
}

#pragma GCC visibility pop
