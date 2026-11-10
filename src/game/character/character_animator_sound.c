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
__int64 CharacterAnimatorSound_10f7820(__int64* a1, int* a2, __int64* a3,
                                       __int64 a4, __n128 a5);
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
                                       __int64 a4, __n128 a5)
{
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  __int64 v8;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  _QWORD* v34;

  v5 = *a1;
  v6 = a1[1] - *a1;
  v7 = 1 - 0x3333333333333333LL * (v6 >> 4);
  if (v7 > 0x333333333333333LL) {
    GameRoutine_10f7bc0();
  }
  v8 = a1[2];
  v34 = a1 + 2;
  v13 = fw_memory_g_heap_manager_ptr;
  v14 = 0xCCCCCCCCCCCCCCCDLL * ((v8 - v5) >> 4);
  if (2 * v14 > v7) {
    v7 = 2 * v14;
  }
  if (v14 >= 0x199999999999999LL) {
    v15 = 0x333333333333333LL;
  }
  else {
    v15 = v7;
  }
  if (v15 != 0) {
    if (v15 > 0x333333333333333LL) {
      GameRoutine_60a210(a1);
    }
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         80 * v15, 16, 0);
  }
  else {
    v16 = 0;
  }
  v17 = *a2;
  v18 = v16 + v6;
  v30 = v16;
  v31 = v18;
  v33 = v16 + 80 * v15;
  v19 = *a3;
  v20 = a3[1];
  if (v20 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                              memory_order_relaxed);
    *(_DWORD*)v18 = v17;
    *(_QWORD*)(v18 + 8) = v19;
    *(_QWORD*)(v18 + 16) = v20;
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v20 + 16), 1u,
                              memory_order_relaxed);
    v21 = *(_QWORD*)(a4 + 32);
    if (v21 != 0) {
      goto LABEL_13;
    }
  }
  else {
    *(_DWORD*)v18 = v17;
    *(_QWORD*)(v18 + 8) = v19;
    *(_QWORD*)(v18 + 16) = 0;
    v21 = *(_QWORD*)(a4 + 32);
    if (v21 != 0) {
    LABEL_13:
      if (v21 == a4) {
        *(_QWORD*)(v18 + 64) = v18 + 32;
        (*(void (**)(__int64))(*(_QWORD*)v21 + 24LL))(v21);
        if (v20 == 0) {
          goto LABEL_19;
        }
      }
      else {
        *(_QWORD*)(v18 + 64) =
            (*(__int64 (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        if (v20 == 0) {
          goto LABEL_19;
        }
      }
      goto LABEL_18;
    }
  }
  *(_QWORD*)(v18 + 64) = 0;
  if (v20 != 0) {
  LABEL_18:
    a5 = std___1___shared_weak_count___release_weak(v20);
  }
LABEL_19:
  v32 = v18 + 80;
  CharacterAnimatorSound_10f7a60_alt1(a1, &v30, *(long double*)&a5);
  v22 = a1[1];
  v23 = v31;
  while (1) {
    v24 = v32;
    if (v23 == v32) {
      break;
    }
    v32 -= 80;
    v25 = *(_QWORD**)(v24 - 16);
    if (v25 == (_QWORD*)(v24 - 48)) {
      v26 = 32;
      goto LABEL_25;
    }
    if (v25 != nullptr) {
      v26 = 40;
    LABEL_25:
      (*(void (**)(__int64))(*v25 + v26))((__int64)v25);
    }
    v27 = *(_QWORD*)(v24 - 64);
    if (v27 != 0) {
      std___1___shared_weak_count___release_weak(v27);
    }
  }
  if (v30 != 0) {
    v28 = 128;
    if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v28);
  }
  return v22;
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
  long double v15;
  _DWORD* v16;
  _DWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _DWORD* v21;
  int v22;
  __int64 v23;

  v3 = a1[1] - *a1;
  v4 = 1 - 0x5555555555555555LL * (v3 >> 3);
  if (v4 > 0xAAAAAAAAAAAAAAALL) {
    GameRoutine_10f8190();
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
    GameRoutine_60a210(a1);
  }
  v7 = 3 * v6;
  v10 = fw_memory_g_heap_manager_ptr;
  v11 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       24 * v6, 16, 0);
  v12 = *a2;
  v13 = v11 + v3;
  v14 = v11 + 8 * v7;
  *(_QWORD*)(v13 + 8) = 0;
  *(_DWORD*)(v13 + 16) = 0x2000;
  *(_DWORD*)v13 = v12;
  GameRoutine_112180(v13 + 8, a3);
  v16 = (_DWORD*)*a1;
  v17 = (_DWORD*)a1[1];
  v18 = v13 + 24;
  v19 = v13 + *a1 - (_QWORD)v17;
  if (v17 != (_DWORD*)*a1) {
    v20 = v13 + *a1 - (_QWORD)v17;
    v21 = (_DWORD*)*a1;
    do {
      v22 = *v21;
      v21 += 6;
      *(_QWORD*)(v20 + 8) = 0;
      *(_DWORD*)(v20 + 16) = 0x2000;
      *(_DWORD*)v20 = v22;
      GameRoutine_112180(v20 + 8, v16 + 2);
      v20 += 24;
      v16 = v21;
    } while (v21 != v17);
    v16 = (_DWORD*)*a1;
  }
  *a1 = v19;
  a1[1] = v18;
  a1[2] = v14;
  if (v16 != nullptr) {
    v23 = 128;
    if (*(_QWORD*)(*(_QWORD*)v10 + 200LL) == 0) {
      v23 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v10 + v23, v15);
  }
  return v18;
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
