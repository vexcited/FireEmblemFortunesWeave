#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_stop_ffc40(_QWORD, _QWORD, long double);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
__int64* CharacterAnimatorSound_10f7300(__int64* result);
__int64 CharacterAnimatorSound_10f7520(__int64* a1, __int64 a2, __int64 a3);
__int64 CharacterAnimatorSound_10f76e0(__int64 a1, __int64 a2);
void CharacterAnimatorSound_10f7a60(__int64* a1, _QWORD* a2);
__int64 CharacterAnimatorSound_10f7a60_alt1(
    _QWORD, _QWORD, long double) __asm__("CharacterAnimatorSound_10f7a60");
__int64 GameRoutine_112180(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, long double) __asm__(
    "nn_mem_StandardAllocator_Free");
extern __int64 fw_memory_g_heap_manager_ptr;
void __attribute__((noreturn)) GameRoutine_10f7bc0(void);
void __attribute__((noreturn)) GameRoutine_10f8190(void);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 CharacterAnimatorSound_10f7820_alt1(
    __int64* a1, int* a2, __int64* a3, __int64 a4,
    __n128 a5) __asm__("CharacterAnimatorSound_10f7820");
__int64 CharacterAnimatorSound_10f8000(__int64* a1, int* a2, __int64 a3);
__int64
game_character_CharacterAnimatorSound_CharacterAnimatorSound_lambda1_Invoke(
    __int64 result);
__attribute__((swiftcall)) void
CharacterSound_1095750(__attribute__((swift_indirect_result)) void*,
                       __int64 result, char*, __int64, long double);
__attribute__((swiftcall)) void
CharacterSound_1095a00(__attribute__((swift_indirect_result)) void*, _QWORD*,
                       unsigned __int8*, const char*, __int64);
__attribute__((swiftcall)) void
CharacterSound_10962d0(__attribute__((swift_indirect_result)) void*,
                       __int64* result, __int64, unsigned __int64);
__int64 CharacterAnimatorSound_10f8000_alt1(_QWORD, _QWORD, _QWORD) __asm__(
    "CharacterAnimatorSound_10f8000");
__int64 GameRoutine_190240(_QWORD);
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_fnd_WeakHandle_get(_QWORD, long double);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_isMuted(__int64*);
__int64 snd_mute(__int64*, __int64);
__int64 snd_playAt_ff4e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                         long double, float, float, double, float);
__int64 snd_resumeMute(__int64*, __int64);
__int64 strstr(_QWORD, _QWORD);
extern char GameData_1a9f09e;
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64
game_character_CharacterAnimatorSound_CharacterAnimatorSound_lambda0_Invoke(
    __int64 a1, __int64* a2);
__int64
game_character_CharacterAnimatorSound_CharacterAnimatorSound_lambda2_Invoke(
    __int64 result, float* a2);
__int64 GameRoutine_112180_alt1(__int64, __int64) __asm__("GameRoutine_112180");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
void __attribute__((noreturn))
GameRoutine_10f8190_alt1() __asm__("GameRoutine_10f8190");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 CharacterAnimatorSound_10f73b0(_QWORD*, __int64*, __int64, int);
__int64 CharacterTrailModule_d3d630(_QWORD*, __int64*, __int64, int);
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
extern __int64 (*GameData_200da38[])();
extern __int64 (*GameData_200dac8[])();
extern __int64 (*GameData_200db48[])();
extern int GameData_2235744;
void __attribute__((noreturn)) GameRoutine_10f8320();
_QWORD* game_character_CharacterAnimatorSound_CharacterAnimatorSound(
    _QWORD* a1, _QWORD* a2, _QWORD* a3);
__int64* CharacterAnimatorSound_10f7a60_alt2(__int64* result, _QWORD*) __asm__(
    "CharacterAnimatorSound_10f7a60");
void __attribute__((noreturn))
GameRoutine_10f7bc0_alt1() __asm__("GameRoutine_10f7bc0");
__int64 CharacterAnimatorSound_10f7820(__int64* a1, int* a2, __int64* a3,
                                       __int64 a4);

_QWORD* game_character_CharacterAnimatorSound_CharacterAnimatorSound(_QWORD* a1,
                                                                     _QWORD* a2,
                                                                     _QWORD* a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  unsigned __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  int v27;
  unsigned __int64 v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  _QWORD* v43;
  unsigned __int64 v44;
  __int64 v45;
  _QWORD* v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  _QWORD* v52;
  _QWORD* v53;
  _QWORD* v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  _QWORD* result;
  __int64 v59;
  struct {
    _QWORD v60[2];
    _QWORD* v61;
    char gap40_[8];
    _QWORD* v62;
  } v60_;
  struct {
    __int64 v63;
    __int64 v64;
  } v63_;

  a1[4] = 0;
  a1[5] = 0;
  a1[2] = 0;
  a1[3] = 0;
  *a1 = 0;
  a1[1] = 0;
  v6 = a2[6];
  v7 = a2[7];
  if (v7 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    v60_.v61 = a1;
    v63_.v63 = v6;
    v63_.v64 = v7;
    v60_.v60[0] = GameData_200da38;
    v60_.v60[1] = a2;
    v60_.v62 = v60_.v60;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v60_.v61 = a1;
    v63_.v63 = v6;
    v63_.v64 = 0;
    v60_.v60[0] = GameData_200da38;
    v60_.v60[1] = a2;
    v60_.v62 = v60_.v60;
  }
  CharacterAnimatorSound_10f73b0(a3 + 19, &v63_.v63, (__int64)v60_.v60, 1);
  if (v63_.v64 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v63_.v64);
  }
  if (v60_.v62 == v60_.v60) {
    v8 = 32;
  }
  else {
    if (v60_.v62 == nullptr) {
      goto LABEL_11;
    }
    v8 = 40;
  }
  (*(void (**)(__int64))(*v60_.v62 + v8))((__int64)v60_.v62);
LABEL_11:
  if (v7 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v7);
  }
  v9 = a2[9];
  v10 = a2[6];
  v11 = a2[7];
  if (v11 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
    v63_.v63 = v10;
    v63_.v64 = v11;
    v60_.v60[0] = GameData_200dac8;
    v60_.v60[1] = a1;
    v60_.v62 = v60_.v60;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 16), 1u,
                              memory_order_relaxed);
  }
  else {
    v63_.v63 = a2[6];
    v63_.v64 = 0;
    v60_.v60[0] = GameData_200dac8;
    v60_.v60[1] = a1;
    v60_.v62 = v60_.v60;
  }
  CharacterTrailModule_d3d630((_QWORD*)(v9 + 56), &v63_.v63, (__int64)v60_.v60,
                              1);
  if (v63_.v64 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v63_.v64);
  }
  if (v60_.v62 == v60_.v60) {
    v12 = 32;
  }
  else {
    if (v60_.v62 == nullptr) {
      goto LABEL_23;
    }
    v12 = 40;
  }
  (*(void (**)(__int64))(*v60_.v62 + v12))((__int64)v60_.v62);
LABEL_23:
  if (v11 != 0) {
    std___1___shared_weak_count___release_weak_alt1(v11);
  }
  v14 = a2[6];
  v13 = a2[7];
  if (v13 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
    v60_.v62 = v60_.v60;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                              memory_order_relaxed);
    v60_.v60[0] = GameData_200db48;
    v60_.v60[1] = a1;
    if (v60_.v62 == nullptr) {
    LABEL_117:
      std___1___shared_weak_count___release_weak_alt1(v13);
      goto LABEL_118;
    }
  }
  else {
    v60_.v62 = v60_.v60;
    v60_.v60[0] = GameData_200db48;
    v60_.v60[1] = a1;
  }
  v16 = a3[23];
  v15 = a3[24];
  if (0xCCCCCCCCCCCCCCCDLL * ((__int64)(v15 - v16) >> 4) < 0x40) {
    goto LABEL_59;
  }
  v17 = a3[23];
  if (v16 == v15) {
  LABEL_37:
    if (v17 == v15 || (v19 = v17 + 80, v17 + 80 == v15)) {
      if (v17 == v15) {
        goto LABEL_59;
      }
      goto LABEL_61;
    }
    while (1) {
      if (*(_DWORD*)v19 != 0) {
        v20 = *(_QWORD*)(v19 + 16);
        if (v20 != 0 && *(_QWORD*)(v20 + 8) != -1) {
          break;
        }
      }
    LABEL_43:
      v19 += 80LL;
      if (v19 == v15) {
        v15 = a3[24];
        if (v17 == v15) {
          goto LABEL_59;
        }
      LABEL_61:
        if (v17 == v15) {
        LABEL_62:
          a3[24] = v17;
          if (v13 == 0) {
            goto LABEL_118;
          }
        LABEL_63:
          if (*(_QWORD*)(v13 + 8) == -1) {
            goto LABEL_117;
          }
          v27 = GameData_2235744 + 1;
          v28 = a3[25];
          ++GameData_2235744;
          if (v17 < v28) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                      memory_order_relaxed);
            *(_DWORD*)v17 = v27;
            *(_QWORD*)(v17 + 8) = v14;
            *(_QWORD*)(v17 + 16) = v13;
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                      memory_order_relaxed);
            v29 = v60_.v62;
            if (v60_.v62 != nullptr) {
              if (v60_.v62 == v60_.v60) {
                *(_QWORD*)(v17 + 64) = v17 + 32;
                (*(void (**)(_QWORD*))(*v29 + 24LL))(v29);
              }
              else {
                *(_QWORD*)(v17 + 64) = (*(__int64 (**)(__int64))(
                    *v60_.v62 + 16LL))((__int64)v60_.v62);
              }
            }
            else {
              *(_QWORD*)(v17 + 64) = 0;
            }
            std___1___shared_weak_count___release_weak_alt1(v13);
            v44 = v17 + 80;
            goto LABEL_116;
          }
          v33 = a3[23];
          v34 = v17 - v33;
          v35 = 1 - 0x3333333333333333LL * ((__int64)(v17 - v33) >> 4);
          if (v35 > 0x333333333333333LL) {
            GameRoutine_10f8320();
          }
          v36 = fw_memory_g_heap_manager_ptr;
          v37 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v28 - v33) >> 4);
          v38 = 2 * v37;
          if (2 * v37 <= v35) {
            v38 = v35;
          }
          if (v37 >= 0x199999999999999LL) {
            v39 = 0x333333333333333LL;
          }
          else {
            v39 = v38;
          }
          if (v39 != 0) {
            if (v39 > 0x333333333333333LL) {
              GameRoutine_60a210_alt1();
            }
            v40 = 5 * v39;
            v41 = fw_memory_HeapManager_Allocate_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr, 80 * v39, 16, 0);
            v34 += v41;
            v42 = v41 + 16 * v40;
          }
          else {
            v42 = 0;
          }
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                    memory_order_relaxed);
          *(_DWORD*)v34 = v27;
          *(_QWORD*)(v34 + 8) = v14;
          *(_QWORD*)(v34 + 16) = v13;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                    memory_order_relaxed);
          v43 = v60_.v62;
          if (v60_.v62 != nullptr) {
            if (v60_.v62 == v60_.v60) {
              *(_QWORD*)(v34 + 64) = v34 + 32;
              (*(void (**)(_QWORD*))(*v43 + 24LL))(v43);
            }
            else {
              *(_QWORD*)(v34 + 64) = (*(__int64 (**)(__int64))(
                  *v60_.v62 + 16LL))((__int64)v60_.v62);
            }
          }
          else {
            *(_QWORD*)(v34 + 64) = 0;
          }
          std___1___shared_weak_count___release_weak_alt1(v13);
          v45 = a3[23];
          v46 = (_QWORD*)a3[24];
          v44 = v34 + 80;
          v47 = v34 + v45 - (_QWORD)v46;
          if (v46 == (_QWORD*)v45) {
          LABEL_112:
            a3[23] = v47;
            a3[24] = v44;
            a3[25] = v42;
            if (v45 != 0) {
              v57 = 128;
              if (*(_QWORD*)(*(_QWORD*)v36 + 200LL) == 0) {
                v57 = 56;
              }
              nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v36 + v57, v45);
            }
          LABEL_116:
            a3[24] = v44;
            goto LABEL_117;
          }
          v48 = 0;
          do {
            v49 = v45 + v48;
            v50 = v47 + v48;
            *(_DWORD*)v50 = *(_DWORD*)(v45 + v48);
            *(_QWORD*)(v50 + 8) = *(_QWORD*)(v45 + v48 + 8);
            *(_QWORD*)(v50 + 16) = *(_QWORD*)(v45 + v48 + 16);
            *(_QWORD*)(v49 + 8) = 0;
            *(_QWORD*)(v49 + 16) = 0;
            v51 = *(_QWORD*)(v45 + v48 + 64);
            if (v51 != 0) {
              if (v49 + 32 == v51) {
                *(_QWORD*)(v50 + 64) = v50 + 32;
                (*(void (**)(_QWORD))(**(_QWORD**)(v49 + 64) + 24LL))(
                    *(_QWORD*)(v49 + 64));
              }
              else {
                *(_QWORD*)(v50 + 64) = v51;
                *(_QWORD*)(v49 + 64) = 0;
              }
            }
            else {
              *(_QWORD*)(v50 + 64) = 0;
            }
            v48 += 80;
          } while ((_QWORD*)(v45 + v48) != v46);
          v52 = (_QWORD*)(v45 + 32);
          while (2) {
            v54 = (_QWORD*)v52[4];
            if (v52 == v54) {
              v55 = 32;
            LABEL_108:
              (*(void (**)(__int64))(*v54 + v55))((__int64)v54);
            }
            else if (v54 != nullptr) {
              v55 = 40;
              goto LABEL_108;
            }
            v56 = *(v52 - 2);
            if (v56 != 0) {
              std___1___shared_weak_count___release_weak_alt1(v56);
            }
            v53 = v52 + 6;
            v52 += 10;
            if (v53 == v46) {
              v45 = a3[23];
              goto LABEL_112;
            }
            continue;
          }
        }
        while (2) {
          v30 = *(_QWORD**)(v15 - 16);
          if ((_QWORD*)(v15 - 48) == v30) {
            v31 = 32;
          LABEL_73:
            (*(void (**)(__int64))(*v30 + v31))((__int64)v30);
          }
          else if (v30 != nullptr) {
            v31 = 40;
            goto LABEL_73;
          }
          v32 = *(_QWORD*)(v15 - 64);
          if (v32 != 0) {
            std___1___shared_weak_count___release_weak_alt1(v32);
          }
          v15 -= 80LL;
          if (v15 == v17) {
            goto LABEL_62;
          }
          continue;
        }
      }
    }
    *(_DWORD*)v17 = *(_DWORD*)v19;
    v21 = *(_QWORD*)(v19 + 8);
    v22 = *(_QWORD*)(v19 + 16);
    *(_QWORD*)(v19 + 8) = 0;
    *(_QWORD*)(v19 + 16) = 0;
    v23 = *(_QWORD*)(v17 + 16);
    *(_QWORD*)(v17 + 8) = v21;
    *(_QWORD*)(v17 + 16) = v22;
    if (v23 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v23);
    }
    v24 = *(_QWORD**)(v17 + 64);
    *(_QWORD*)(v17 + 64) = 0;
    if (v24 == (_QWORD*)(v17 + 32)) {
      v25 = 32;
    }
    else {
      if (v24 == nullptr) {
      LABEL_54:
        v26 = *(_QWORD*)(v19 + 64);
        if (v26 != 0) {
          if (v19 + 32 == v26) {
            *(_QWORD*)(v17 + 64) = v17 + 32;
            (*(void (**)(_QWORD, unsigned __int64))(
                **(_QWORD**)(v19 + 64) + 24LL))(*(_QWORD*)(v19 + 64), v17 + 32);
          }
          else {
            *(_QWORD*)(v17 + 64) = v26;
            *(_QWORD*)(v19 + 64) = 0;
          }
        }
        else {
          *(_QWORD*)(v17 + 64) = 0;
        }
        v17 += 80LL;
        goto LABEL_43;
      }
      v25 = 40;
    }
    (*(void (**)(__int64))(*v24 + v25))((__int64)v24);
    goto LABEL_54;
  }
  v17 = a3[23];
  do {
    if (*(_DWORD*)v17 == 0) {
      goto LABEL_37;
    }
    v18 = *(_QWORD*)(v17 + 16);
    if (v18 == 0 || *(_QWORD*)(v18 + 8) == -1) {
      goto LABEL_37;
    }
    v17 += 80LL;
  } while (v17 != v15);
LABEL_59:
  v17 = v15;
  if (v13 != 0) {
    goto LABEL_63;
  }
LABEL_118:
  result = v60_.v62;
  if (v60_.v62 == v60_.v60) {
    v59 = 32;
  }
  else {
    if (v60_.v62 == nullptr) {
      goto LABEL_123;
    }
    v59 = 40;
  }
  result =
      (_QWORD*)(*(__int64 (**)(__int64))(*v60_.v62 + v59))((__int64)v60_.v62);
LABEL_123:
  if (v13 != 0) {
    return (_QWORD*)std___1___shared_weak_count___release_weak_alt1(v13);
  }
  return result;
}

__int64* CharacterAnimatorSound_10f7300(__int64* result)
{
  __int64 v1;
  __int64 v2;
  __int64* v3;
  long double v4;
  __int64 v5;
  __int64 v6;
  long double v7;
  _BYTE v8[200];

  v1 = *result;
  v2 = result[1];
  v3 = result;
  if (*result != v2) {
    do {
      *(__n128*)&v4 = snd_Fade_Fade_10c830(v8, 0.0);
      snd_stop_ffc40(v1 + 8, v8, v4);
      result = (__int64*)snd_Fade_Destroy_Fade(v8);
      v1 += 24;
    } while (v1 != v2);
    v1 = *v3;
  }
  v3[1] = v1;
  v5 = v3[3];
  v6 = v3[4];
  if (v5 != v6) {
    do {
      *(__n128*)&v7 = snd_Fade_Fade_10c830(v8, 0.0);
      snd_stop_ffc40(v5 + 8, v8, v7);
      result = (__int64*)snd_Fade_Destroy_Fade(v8);
      v5 += 24;
    } while (v5 != v6);
    v5 = v3[3];
  }
  v3[4] = v5;
  return result;
}

__int64 CharacterAnimatorSound_10f7520(__int64* a1, __int64 a2, __int64 a3)
{
  __int64 v4;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  _QWORD* v21;
  __int64 v22;
  __int64 v23;

  if (a2 == a3) {
    return a2;
  }
  v4 = a1[1];
  if (a3 == v4) {
    v19 = a2;
    if (a2 == v4) {
      goto LABEL_20;
    }
  LABEL_23:
    while (1) {
      v21 = *(_QWORD**)(v4 - 16);
      if ((_QWORD*)(v4 - 48) == v21) {
        break;
      }
      if (v21 != nullptr) {
        v22 = 40;
      LABEL_27:
        (*(void (**)(__int64))(*v21 + v22))((__int64)v21);
      }
      v23 = *(_QWORD*)(v4 - 64);
      if (v23 != 0) {
        std___1___shared_weak_count___release_weak(v23);
      }
      v4 -= 80;
      if (v4 == v19) {
        goto LABEL_20;
      }
    }
    v22 = 32;
    goto LABEL_27;
  }
  v6 = *a1;
  v7 = *a1 + a2;
  v8 = -*a1;
  v9 = *a1 + a3;
  do {
    v10 = v9 + v8;
    v11 = v7 + v8;
    *(_DWORD*)v11 = *(_DWORD*)(v9 + v8);
    v12 = *(_QWORD*)(v9 + v8 + 8);
    v13 = *(_QWORD*)(v9 + v8 + 16);
    *(_QWORD*)(v10 + 8) = 0;
    *(_QWORD*)(v10 + 16) = 0;
    v14 = *(_QWORD*)(v7 + v8 + 16);
    *(_QWORD*)(v11 + 8) = v12;
    *(_QWORD*)(v11 + 16) = v13;
    if (v14 != 0) {
      std___1___shared_weak_count___release_weak(v14);
    }
    v15 = *(_QWORD**)(v11 + 64);
    *(_QWORD*)(v11 + 64) = 0;
    if ((_QWORD*)(v11 + 32) == v15) {
      v16 = 32;
    }
    else {
      if (v15 == nullptr) {
        goto LABEL_13;
      }
      v16 = 40;
    }
    (*(void (**)(__int64))(*v15 + v16))((__int64)v15);
  LABEL_13:
    v17 = v9 + v8;
    v18 = *(_QWORD*)(v9 + v8 + 64);
    if (v18 != 0) {
      if (v10 + 32 == v18) {
        *(_QWORD*)(v11 + 64) = v11 + 32;
        (*(void (**)(_QWORD, __int64))(**(_QWORD**)(v17 + 64) + 24LL))(
            *(_QWORD*)(v17 + 64), v11 + 32);
      }
      else {
        *(_QWORD*)(v11 + 64) = v18;
        *(_QWORD*)(v17 + 64) = 0;
      }
    }
    else {
      *(_QWORD*)(v11 + 64) = 0;
    }
    v9 += 80;
    v7 += 80;
  } while (v9 + v8 != v4);
  v4 = a1[1];
  v19 = v7 - v6;
  if (v7 - v6 != v4) {
    goto LABEL_23;
  }
LABEL_20:
  a1[1] = v19;
  return a2;
}

__int64 CharacterAnimatorSound_10f76e0(__int64 a1, __int64 a2)
{
  __int64 v3;
  __int64 v4;
  __int64 i;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD* v10;
  __int64 v11;
  __int64 v12;

  v3 = a1;
  if (a1 == a2) {
  LABEL_7:
    if (v3 == a2) {
      return v3;
    }
    for (i = v3 + 80;; i += 80) {
      if (i == a2) {
        return v3;
      }
      if (*(_DWORD*)i != 0) {
        v6 = *(_QWORD*)(i + 16);
        if (v6 != 0 && *(_QWORD*)(v6 + 8) != -1) {
          break;
        }
      }
    LABEL_11:;
    }
    *(_DWORD*)v3 = *(_DWORD*)i;
    v7 = *(_QWORD*)(i + 8);
    v8 = *(_QWORD*)(i + 16);
    *(_QWORD*)(i + 8) = 0;
    *(_QWORD*)(i + 16) = 0;
    v9 = *(_QWORD*)(v3 + 16);
    *(_QWORD*)(v3 + 8) = v7;
    *(_QWORD*)(v3 + 16) = v8;
    if (v9 != 0) {
      std___1___shared_weak_count___release_weak(v9);
    }
    v10 = *(_QWORD**)(v3 + 64);
    *(_QWORD*)(v3 + 64) = 0;
    if (v10 == (_QWORD*)(v3 + 32)) {
      v11 = 32;
    }
    else {
      if (v10 == nullptr) {
      LABEL_23:
        v12 = *(_QWORD*)(i + 64);
        if (v12 != 0) {
          if (i + 32 == v12) {
            *(_QWORD*)(v3 + 64) = v3 + 32;
            (*(void (**)(_QWORD, __int64))(**(_QWORD**)(i + 64) + 24LL))(
                *(_QWORD*)(i + 64), v3 + 32);
          }
          else {
            *(_QWORD*)(v3 + 64) = v12;
            *(_QWORD*)(i + 64) = 0;
          }
        }
        else {
          *(_QWORD*)(v3 + 64) = 0;
        }
        v3 += 80;
        goto LABEL_11;
      }
      v11 = 40;
    }
    (*(void (**)(__int64))(*v10 + v11))((__int64)v10);
    goto LABEL_23;
  }
  do {
    if (*(_DWORD*)v3 == 0) {
      goto LABEL_7;
    }
    v4 = *(_QWORD*)(v3 + 16);
    if (v4 == 0 || *(_QWORD*)(v4 + 8) == -1) {
      goto LABEL_7;
    }
    v3 += 80;
  } while (v3 != a2);
  return a2;
}

__int64 CharacterAnimatorSound_10f7820(__int64* a1, int* a2, __int64* a3,
                                       __int64 a4)
{
  __int64 v4;
  __int64 v5;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  int v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  _QWORD* v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  struct {
    __int64 v29;
    __int64 v30;
    __int64 v31;
    unsigned __int64 v32;
    __int64* v33;
  } v29_;

  v4 = *a1;
  v5 = a1[1] - *a1;
  v6 = 1 - 0x3333333333333333LL * (v5 >> 4);
  if (v6 > 0x333333333333333LL) {
    GameRoutine_10f7bc0_alt1();
  }
  v7 = a1[2];
  v29_.v33 = a1 + 2;
  v12 = fw_memory_g_heap_manager_ptr;
  v13 = 0xCCCCCCCCCCCCCCCDLL * ((v7 - v4) >> 4);
  if (2 * v13 > v6) {
    v6 = 2 * v13;
  }
  if (v13 >= 0x199999999999999LL) {
    v14 = 0x333333333333333LL;
  }
  else {
    v14 = v6;
  }
  if (v14 != 0) {
    if (v14 > 0x333333333333333LL) {
      GameRoutine_60a210_alt1();
    }
    v15 = fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 80 * v14, 16, 0);
  }
  else {
    v15 = 0;
  }
  v16 = *a2;
  v17 = v15 + v5;
  v29_.v29 = v15;
  v29_.v30 = v17;
  v29_.v32 = v15 + 80 * v14;
  v18 = *a3;
  v19 = a3[1];
  if (v19 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    *(_DWORD*)v17 = v16;
    *(_QWORD*)(v17 + 8) = v18;
    *(_QWORD*)(v17 + 16) = v19;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v19 + 16), 1u,
                              memory_order_relaxed);
    v20 = *(_QWORD*)(a4 + 32);
    if (v20 != 0) {
      goto LABEL_13;
    }
  }
  else {
    *(_DWORD*)v17 = v16;
    *(_QWORD*)(v17 + 8) = v18;
    *(_QWORD*)(v17 + 16) = 0;
    v20 = *(_QWORD*)(a4 + 32);
    if (v20 != 0) {
    LABEL_13:
      if (v20 == a4) {
        *(_QWORD*)(v17 + 64) = v17 + 32;
        (*(void (**)(__int64))(*(_QWORD*)v20 + 24LL))(v20);
        if (v19 == 0) {
          goto LABEL_19;
        }
      }
      else {
        *(_QWORD*)(v17 + 64) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
        if (v19 == 0) {
          goto LABEL_19;
        }
      }
      goto LABEL_18;
    }
  }
  *(_QWORD*)(v17 + 64) = 0;
  if (v19 != 0) {
  LABEL_18:
    std___1___shared_weak_count___release_weak_alt1(v19);
  }
LABEL_19:
  v29_.v31 = v17 + 80;
  CharacterAnimatorSound_10f7a60_alt2(a1, &v29_.v29);
  v21 = a1[1];
  v22 = v29_.v30;
  while (1) {
    v23 = v29_.v31;
    if (v22 == v29_.v31) {
      break;
    }
    v29_.v31 -= 80;
    v24 = *(_QWORD**)(v23 - 16);
    if (v24 == (_QWORD*)(v23 - 48)) {
      v25 = 32;
      goto LABEL_25;
    }
    if (v24 != nullptr) {
      v25 = 40;
    LABEL_25:
      (*(void (**)(__int64))(*v24 + v25))((__int64)v24);
    }
    v26 = *(_QWORD*)(v23 - 64);
    if (v26 != 0) {
      std___1___shared_weak_count___release_weak_alt1(v26);
    }
  }
  if (v29_.v29 != 0) {
    v27 = 128;
    if (*(_QWORD*)(*(_QWORD*)v12 + 200LL) == 0) {
      v27 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v12 + v27, v29_.v29);
  }
  return v21;
}

void CharacterAnimatorSound_10f7a60(__int64* a1, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v3;
  __int64 v6;
  __int64 v7;
  _QWORD* v8;
  __int64 v9;
  _QWORD* v10;
  _QWORD* v11;
  _QWORD* v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  _QWORD* v16;
  __int64 v17;
  __int64 v18;

  v3 = (_QWORD*)*a1;
  v2 = (_QWORD*)a1[1];
  v6 = a2[1] + *a1 - (_QWORD)v2;
  if (v2 != (_QWORD*)*a1) {
    v7 = 0;
    do {
      v8 = &v3[v7];
      v9 = v6 + v7 * 8;
      *(_DWORD*)v9 = v3[v7];
      *(_QWORD*)(v9 + 8) = v3[v7 + 1];
      *(_QWORD*)(v9 + 16) = v3[v7 + 2];
      v8[1] = 0;
      v8[2] = 0;
      v10 = (_QWORD*)v3[v7 + 8];
      if (v10 != nullptr) {
        if (v8 + 4 == v10) {
          *(_QWORD*)(v9 + 64) = v9 + 32;
          (*(void (**)(_QWORD))(*(_QWORD*)v8[8] + 24LL))(v8[8]);
        }
        else {
          *(_QWORD*)(v9 + 64) = v10;
          v8[8] = 0;
        }
      }
      else {
        *(_QWORD*)(v9 + 64) = 0;
      }
      v7 += 10;
    } while (&v3[v7] != v2);
    v11 = v3 + 4;
    while (1) {
      v13 = (_QWORD*)v11[4];
      if (v11 == v13) {
        break;
      }
      if (v13 != nullptr) {
        v14 = 40;
      LABEL_15:
        (*(void (**)(__int64))(*v13 + v14))((__int64)v13);
      }
      v15 = *(v11 - 2);
      if (v15 != 0) {
        std___1___shared_weak_count___release_weak(v15);
      }
      v12 = v11 + 6;
      v11 += 10;
      if (v12 == v2) {
        goto LABEL_18;
      }
    }
    v14 = 32;
    goto LABEL_15;
  }
LABEL_18:
  a2[1] = v6;
  v16 = (_QWORD*)*a1;
  a1[1] = *a1;
  *a1 = a2[1];
  a2[1] = v16;
  v17 = a1[1];
  a1[1] = a2[2];
  a2[2] = v17;
  v18 = a1[2];
  a1[2] = a2[3];
  a2[3] = v18;
  *a2 = a2[1];
}

__int64

game_character_CharacterAnimatorSound_CharacterAnimatorSound_lambda0_Invoke(
    __int64 a1, __int64* a2)
{
  __int64 v2;
  _QWORD* v3;
  int v5;
  char v6;
  unsigned __int8* v7;
  unsigned __int8* v8;
  unsigned __int64 v9;
  unsigned __int8* v10;
  float v11;
  float v12;
  __int64 result;
  __int64 v14;
  int v15;
  __int64* v16;
  unsigned __int64 v17;
  bool v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  long double v22;
  char* v23;
  __int64 v24;
  long double v25;
  int v26;
  __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  long double v30;
  char v31[16];
  unsigned __int8 v32;
  _BYTE v33[15];
  unsigned __int8* v34;
  __int64 v35;
  int v36;
  __int64 v37[2];
  char* v38;
  int v39;

  v2 = *a2;
  v3 = *(_QWORD**)(a1 + 16);
  v35 = 0;
  v39 = 0;
  v36 = 0x2000;
  v5 = *(unsigned __int8*)(v2 + 61);
  if (v5 == 1) {
    v6 = *(_BYTE*)(v2 + 32);
    v7 = *(unsigned __int8**)(v2 + 48);
    v37[0] = 0;
    v37[1] = 0;
    if ((v6 & 1) != 0) {
      v8 = v7;
    }
    else {
      v8 = (unsigned __int8*)(v2 + 33);
    }
    CharacterSound_1095a00((void*)(&v32),
                           *(_QWORD**)(*(_QWORD*)(a1 + 8) + 136LL), v8, nullptr,
                           (__int64)v37);
    v9 = *(_QWORD*)&v33[7];
    if ((v32 & 1) != 0) {
      v10 = v34;
    }
    else {
      v9 = (unsigned __int64)v32 >> 1;
      v10 = v33;
    }
    if (v9 != 0) {
      v8 = v10;
    }
    v30 = *(long double*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 304LL);
    LODWORD(v11) =
        HIDWORD(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 304LL));
    LODWORD(v12) = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 312LL);
    snd_Fade_Fade_10c830(v37, 0.0);
    snd_playAt_ff4e0(&GameData_1a9f09e, v8, v37, 0, 65537, 0, v30, v11, v12,
                     0.0, 1.0);
    snd_Fade_Destroy_Fade(v37);
    result = GameRoutine_112180(&v35, v31);
    v39 = 4;
    if ((v32 & 1) != 0 && v34 != nullptr) {
      v14 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v14 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v14);
    }
    v15 = 4;
  }
  else {
    v16 = *(__int64**)(*(_QWORD*)(a1 + 8) + 136LL);
    v17 = *(unsigned __int8*)(v2 + 32);
    v18 = (v17 & 1) == 0;
    v19 = v17 >> 1;
    if (v18) {
      v20 = v2 + 33;
    }
    else {
      v20 = *(_QWORD*)(v2 + 48);
    }
    if (v18) {
      v21 = v19;
    }
    else {
      v21 = *(_QWORD*)(v2 + 40);
    }
    CharacterSound_10962d0((void*)(v37), v16, v20, v21);
    if ((v37[0] & 1) != 0) {
      v23 = v38;
    }
    else {
      v23 = (char*)v37 + 1;
    }
    LODWORD(v22) = *(_DWORD*)(v2 + 56);
    CharacterSound_1095750((void*)((__int64)&v32), (__int64)v16, v23, 0, v22);
    if ((v37[0] & 1) != 0 && v38 != nullptr) {
      v24 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v24 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v24);
    }
    result = GameRoutine_112180(&v35, &v32);
    v15 = 0;
  }
  if ((*(_BYTE*)(*(_QWORD*)(a1 + 8) + 340LL) & 2) == 0) {
    result = snd_fnd_WeakHandle_isValid(&v35);
    if ((result & 1) != 0) {
      if ((*(_BYTE*)(v2 + 60) & 1) != 0) {
        v26 = 2;
      }
      else {
        v27 = snd_fnd_WeakHandle_get(&v35, v25);
        result = GameRoutine_190240(v27 + 88);
        if (result == 0 || (result = strstr(result, "_lp")) == 0) {
          if ((v5 & 1) == 0) {
            return result;
          }
          goto LABEL_39;
        }
        v26 = 1;
      }
      v15 |= v26;
      v39 = v15;
    LABEL_39:
      if ((v15 & 4) != 0) {
        v29 = v3[4];
        if (v29 >= v3[5]) {
          result = CharacterAnimatorSound_10f8000_alt1(v3 + 3, &v39, &v35);
          v3[4] = result;
        }
        else {
          *(_QWORD*)(v29 + 8) = 0;
          *(_DWORD*)v29 = v15;
          *(_DWORD*)(v29 + 16) = 0x2000;
          result = GameRoutine_112180(v29 + 8, &v35);
          v3[4] = v29 + 24;
        }
      }
      else {
        v28 = v3[1];
        if (v28 >= v3[2]) {
          result = CharacterAnimatorSound_10f8000_alt1(v3, &v39, &v35);
        }
        else {
          *(_QWORD*)(v28 + 8) = 0;
          *(_DWORD*)v28 = v15;
          *(_DWORD*)(v28 + 16) = 0x2000;
          GameRoutine_112180(v28 + 8, &v35);
          result = v28 + 24;
        }
        v3[1] = result;
      }
    }
  }
  return result;
}

__int64 CharacterAnimatorSound_10f8000(__int64* a1, int* a2, __int64 a3)
{
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v6;
  __int64 v7;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  int* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  int* v20;
  int v21;
  __int64 v22;

  v3 = a1[1] - *a1;
  v4 = 1 - 0x5555555555555555LL * (v3 >> 3);
  if (v4 > 0xAAAAAAAAAAAAAAALL) {
    GameRoutine_10f8190_alt1();
  }
  if (0x5555555555555556LL * ((a1[2] - *a1) >> 3) > v4) {
    v4 = 0x5555555555555556LL * ((a1[2] - *a1) >> 3);
  }
  if (0xAAAAAAAAAAAAAAABLL * ((a1[2] - *a1) >> 3) >= 0x555555555555555LL) {
    v6 = 0xAAAAAAAAAAAAAAALL;
  }
  else {
    v6 = v4;
  }
  if (v6 > 0xAAAAAAAAAAAAAAALL) {
    GameRoutine_60a210_alt1();
  }
  v7 = 3 * v6;
  v10 = fw_memory_g_heap_manager_ptr;
  v11 = fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 24 * v6, 16, 0);
  v12 = *a2;
  v13 = v11 + v3;
  v14 = v11 + 8 * v7;
  *(_QWORD*)(v13 + 8) = 0;
  *(_DWORD*)(v13 + 16) = 0x2000;
  *(_DWORD*)v13 = v12;
  GameRoutine_112180_alt1(v13 + 8, a3);
  v15 = *a1;
  v16 = (int*)a1[1];
  v17 = v13 + 24;
  v18 = v13 + *a1 - (_QWORD)v16;
  if (v16 != (int*)*a1) {
    v19 = v13 + *a1 - (_QWORD)v16;
    v20 = (int*)*a1;
    do {
      v21 = *v20;
      v20 += 6;
      *(_QWORD*)(v19 + 8) = 0;
      *(_DWORD*)(v19 + 16) = 0x2000;
      *(_DWORD*)v19 = v21;
      GameRoutine_112180_alt1(v19 + 8, v15 + 8);
      v19 += 24;
      v15 = (__int64)v20;
    } while (v20 != v16);
    v15 = *a1;
  }
  *a1 = v18;
  a1[1] = v17;
  a1[2] = v14;
  if (v15 != 0) {
    v22 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v22 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v10 + v22, v15);
  }
  return v17;
}

__int64

game_character_CharacterAnimatorSound_CharacterAnimatorSound_lambda1_Invoke(
    __int64 result)
{
  __int64* v1;
  __int64 v2;
  __int64 v3;
  long double v4;
  _BYTE v5[200];

  v1 = *(__int64**)(result + 8);
  v2 = *v1;
  v3 = v1[1];
  if (*v1 != v3) {
    do {
      *(__n128*)&v4 = snd_Fade_Fade_10c830(v5, 0.0);
      snd_stop_ffc40(v2 + 8, v5, v4);
      result = snd_Fade_Destroy_Fade(v5);
      v2 += 24;
    } while (v2 != v3);
    v2 = *v1;
  }
  v1[1] = v2;
  return result;
}

__int64

game_character_CharacterAnimatorSound_CharacterAnimatorSound_lambda2_Invoke(
    __int64 result, float* a2)
{

#pragma clang fp contract(off)
  float v2;
  __int64* v3;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  _QWORD v10[25];

  v2 = a2[1];
  v3 = *(__int64**)(result + 8);
  if (*a2 >= 0x1.99999a0000000p-3f && v2 < 0x1.99999a0000000p-3f) {
    v8 = *v3;
    v9 = v3[1];
    if (*v3 != v9) {
      do {
        if ((*(_BYTE*)v8 & 2) != 0) {
          result = snd_isMuted((__int64*)(v8 + 8));
          if ((result & 1) == 0) {
            snd_Fade_Fade_10c830_alt1((__int64)v10, 0x1.99999a0000000p-2f);
            snd_mute((__int64*)(v8 + 8), (__int64)v10);
            result = snd_Fade_Destroy_Fade_alt1(v10);
          }
        }
        v8 += 24;
      } while (v8 != v9);
    }
  }
  else if (*a2 < 0x1.99999a0000000p-3f && v2 >= 0x1.99999a0000000p-3f) {
    v6 = *v3;
    v7 = v3[1];
    if (*v3 != v7) {
      do {
        if ((*(_BYTE*)v6 & 2) != 0) {
          result = snd_isMuted((__int64*)(v6 + 8));
          if ((result & 1) != 0) {
            snd_Fade_Fade_10c830_alt1((__int64)v10, 0x1.99999a0000000p-2f);
            snd_resumeMute((__int64*)(v6 + 8), (__int64)v10);
            result = snd_Fade_Destroy_Fade_alt1(v10);
          }
        }
        v6 += 24;
      } while (v6 != v7);
    }
  }
  return result;
}

#pragma GCC visibility pop
