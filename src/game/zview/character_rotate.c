#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

struct PseudoSret {
  _QWORD words[3];
};
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_Fade_Fade_10c910(_QWORD, _QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_zview_CharacterRotate_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
struct PseudoSret GameRoutine_d56a60(_QWORD, _QWORD, _QWORD, float);
__int64 CharacterRotate_Destructor(_QWORD* a1);
__attribute__((swiftcall)) void
CharacterModel_cf8040(PSEUDO_X8, unsigned __int64 result, __int64);
__attribute__((swiftcall)) void GameRoutine_d33900(PSEUDO_X8, __int64);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_d52000(_QWORD);
__int64 Model_a661a0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fmodf(float, float);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
double cos(double);
double sin(double);
extern _UNKNOWN* GameData_212c188;
extern _UNKNOWN* GameData_212c190;
extern __int128 GameData_1a83610;
extern __int128 GameData_1a83800;
extern __int64 (*GameData_1fc0970[])();
extern __int64 fw_memory_g_heap_manager;
float CharacterRotate_d52080_alt1(_QWORD) __asm__("CharacterRotate_d52080");
float atan2f(_QWORD, float, float);
float fmodf_alt1(float, float) __asm__("fmodf");
float powf(float, float);
void __attribute__((noreturn)) GameRoutine_8123d0();
void __attribute__((noreturn)) String_60a1d0(void);
void CharacterRotate_d50de0(__int64 a1);
void CharacterRotate_d514c0(__int64 a1, float a2);
void CharacterRotate_d519c0(int8x16_t* a1);
float CharacterRotate_d52080(__int64 a1);
void CharacterRotate_d521c0(__int64 a1);
__attribute__((swiftcall)) void
CharacterModel_cf8040_alt1(PSEUDO_X8, __int64,
                           const char*) __asm__("CharacterModel_cf8040");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 Model_a661a0_alt1(__int64, int, __int64, int) __asm__("Model_a661a0");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
bool GameRoutine_d52000_alt1(__int64) __asm__("GameRoutine_d52000");
float atan2f_alt1(float, float) __asm__("atan2f");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");

__int64 CharacterRotate_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 result;
  __int64 v9;
  __int64* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD v17[25];

  *a1 = game_zview_CharacterRotate_vtable;
  v2 = *(_QWORD*)(*(_QWORD*)(a1[1] + 8LL) + 40LL);
  if ((snd_fnd_WeakHandle_isValid(a1 + 15) & 1) != 0) {
    v3 = snd_fnd_WeakHandle_get(a1 + 15);
    snd_Fade_Fade_10c910(v17, 100);
    (*(void (**)(__int64, _QWORD*, _QWORD, double))(
        *(_QWORD*)(v3 - 5592) + 248LL))(v3 - 5592, v17, 0, 0.0);
    snd_Fade_Destroy_Fade(v17);
    *(struct PseudoSret*)(v17) =
        GameRoutine_d56a60(v2, "SE_FS_Add_Orhel_Sprint_StepNoise_End", 36, 1.0);
  }
  v4 = a1[43];
  v5 = fw_memory_g_heap_manager_ptr;
  if (v4 != 0) {
    v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[44] = v4;
    v7 = 128;
    if (*(_QWORD*)(v6 + 200) == 0) {
      v7 = 56;
    }
    nn_mem_StandardAllocator_Free(v6 + v7, v4);
  }
  result = a1[26];
  if (result != 0) {
    result = std___1___shared_weak_count___release_weak(result);
  }
  v9 = a1[24];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    result = std___1___shared_weak_count___release_weak(v9);
  }
  v10 = (__int64*)a1[11];
  a1[11] = 0;
  if (v10 != nullptr) {
    v11 = *v10;
    if (*v10 != 0) {
      v12 = v10[1];
      if (v11 == v12) {
        goto LABEL_21;
      }
      do {
        v13 = *(_QWORD*)(v12 - 8);
        if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
          std___1___shared_weak_count___release_weak(v13);
        }
        v12 -= 16;
      } while (v12 != v11);
      v14 = *v10;
      v10[1] = v11;
      v11 = v14;
      if (v14 != 0) {
      LABEL_21:
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v15, v11);
      }
    }
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v16, v10);
  }
  return result;
}

void CharacterRotate_d50de0(__int64 a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  _DWORD* v5;
  __int64 v6;
  int v7;
  int v8;
  int v9;
  __int128 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  int v14;
  int v15;
  int v16;
  __int128 v17;
  __int64 v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  int v24;
  int v25;
  _BOOL4 v26;
  float v27;
  int v28;
  const char* v29;
  int v30;
  unsigned __int64 v31;
  unsigned __int64 v32;
  char* v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  float v37;
  float v38;
  float v39;
  float v40;
  const char* v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  char* v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int128 v49;
  __int128 v50;
  int v51;
  __int64 v52;
  struct {
    _QWORD v53[2];
    char* v54;
  } v53_;
  struct {
    char v55[16];
    const char* v56;
  } v55_;

  v1 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(v1 + 8);
  *(_DWORD*)(a1 + 224) = 0;
  v4 = a1 + 224;
  *(_BYTE*)(a1 + 228) = 1;
  if (*(_BYTE*)(a1 + 220) == 1) {
    *(_BYTE*)(a1 + 220) = 0;
  }
  v5 = (_DWORD*)(a1 + 216);
  if (*(_BYTE*)(a1 + 236) == 1) {
    *(_BYTE*)(a1 + 236) = 0;
  }
  v6 = *(_QWORD*)(a1 + 184);
  *(_DWORD*)(a1 + 80) = 0;
  if (v6 != 0) {
    *(_DWORD*)(a1 + 32) = *(_DWORD*)v6;
    v7 = *(_DWORD*)(v6 + 4);
    *(_BYTE*)(a1 + 228) = *(_BYTE*)(v6 + 8);
    *(_DWORD*)v4 = v7;
    v8 = *(_DWORD*)(v6 + 12);
    *(_BYTE*)(a1 + 220) = *(_BYTE*)(v6 + 16);
    *v5 = v8;
    v9 = *(_DWORD*)(v6 + 20);
    *(_BYTE*)(a1 + 236) = *(_BYTE*)(v6 + 24);
    *(_DWORD*)(a1 + 232) = v9;
    if (*(unsigned __int8*)(a1 + 64) == *(unsigned __int8*)(v6 + 48)) {
      if (*(_BYTE*)(a1 + 64) != 0) {
        *(_DWORD*)(a1 + 48) = *(_DWORD*)(v6 + 32);
        *(_DWORD*)(a1 + 52) = *(_DWORD*)(v6 + 36);
        v10 = *(_OWORD*)(a1 + 48);
        *((_QWORD*)&v10 + 1) = *(unsigned int*)(v6 + 40);
        *(_OWORD*)(a1 + 48) = v10;
      }
    }
    else if (*(_BYTE*)(a1 + 64) != 0) {
      *(_BYTE*)(a1 + 64) = 0;
    }
    else {
      *(_QWORD*)(a1 + 56) = *(_QWORD*)(v6 + 40);
      *(_QWORD*)(a1 + 48) = *(_QWORD*)(v6 + 32);
      *(_BYTE*)(a1 + 64) = 1;
    }
    v27 = 0x0.0p+0f;
    v26 = false;
    if (*(_BYTE*)(v6 + 48) != 0) {
      v27 = 0x1.0000000000000p+0f;
    }
    *(float*)(a1 + 80) = v27;
    goto LABEL_93;
  }
  if ((float)((float)(PSEUDO_UNFUSED(*(float*)(v1 + 672) *
                                     *(float*)(v1 + 672))) +
              (float)(*(float*)(v1 + 668) * *(float*)(v1 + 668))) <=
          0x0.0p+0f &&
      ((*(_BYTE*)(v1 + 195) | *(_BYTE*)(v1 + 194)) & 1) != 0 &&
      (*(_BYTE*)(a1 + 320) & 1) != 0 && *(float*)(a1 + 312) > 0x0.0p+0f &&
      (*(_BYTE*)(v1 + 128) & 0x40) == 0) {
    v18 = *(_QWORD*)(v3 + 16);
    v19 = COERCE_FLOAT(*(_OWORD*)(a1 + 256)) - *(float*)(v18 + 292);
    v20 = COERCE_FLOAT(*(_QWORD*)(a1 + 264)) - *(float*)(v18 + 296);
    v21 = (float)(PSEUDO_UNFUSED(v20 * v20)) + (float)(v19 * v19);
    v22 = 0x0.0p+0f;
    if (v21 > 0x0.0p+0f) {
      if (v19 != 0x0.0p+0f || v20 != 0x0.0p+0f) {
        v23 = sqrtf(v21);
        v19 = v19 / v23;
        v20 = v20 / v23;
      }
      v22 = atan2f_alt1(v19, v20);
    }
    v24 = *(unsigned __int8*)(a1 + 316);
    *(float*)(a1 + 32) = v22;
    if (v24 == 1 && !GameRoutine_d52000_alt1(a1)) {
      v26 = false;
      *(_DWORD*)(a1 + 224) = 0;
      *(_BYTE*)(a1 + 228) = 1;
    }
    else {
      v25 = *(_DWORD*)(a1 + 312);
      v26 = true;
      *(_BYTE*)(a1 + 228) = 1;
      *(_BYTE*)(a1 + 220) = 1;
      *(_DWORD*)(a1 + 216) = 1045220557;
      *(_DWORD*)(a1 + 224) = v25;
    }
    goto LABEL_93;
  }
  v11 = *(_QWORD*)(a1 + 208);
  if (v11 != 0) {
    v12 = std___1___shared_weak_count_lock_alt1(v11);
    if (v12 != 0) {
      v13 = *(_QWORD*)(a1 + 200);
      if (v13 != 0) {
        *(_DWORD*)(a1 + 32) = *(_DWORD*)v13;
        v14 = *(_DWORD*)(v13 + 4);
        *(_BYTE*)(v4 + 4) = *(_BYTE*)(v13 + 8);
        *(_DWORD*)v4 = v14;
        v15 = *(_DWORD*)(v13 + 12);
        *(_BYTE*)(v4 - 4) = *(_BYTE*)(v13 + 16);
        *v5 = v15;
        v16 = *(_DWORD*)(v13 + 20);
        *(_BYTE*)(a1 + 236) = *(_BYTE*)(v13 + 24);
        *(_DWORD*)(a1 + 232) = v16;
        if (*(unsigned __int8*)(a1 + 64) == *(unsigned __int8*)(v13 + 48)) {
          if (*(_BYTE*)(a1 + 64) != 0) {
            *(_DWORD*)(a1 + 48) = *(_DWORD*)(v13 + 32);
            *(_DWORD*)(a1 + 52) = *(_DWORD*)(v13 + 36);
            v17 = *(_OWORD*)(a1 + 48);
            *((_QWORD*)&v17 + 1) = *(unsigned int*)(v13 + 40);
            *(_OWORD*)(a1 + 48) = v17;
          }
        }
        else if (*(_BYTE*)(a1 + 64) != 0) {
          *(_BYTE*)(a1 + 64) = 0;
        }
        else {
          *(_QWORD*)(a1 + 56) = *(_QWORD*)(v13 + 40);
          *(_QWORD*)(a1 + 48) = *(_QWORD*)(v13 + 32);
          *(_BYTE*)(a1 + 64) = 1;
        }
        v37 = 0x1.0000000000000p+0f;
        if (*(_BYTE*)(v13 + 48) == 0) {
          v37 = 0x0.0p+0f;
        }
        *(float*)(a1 + 80) = v37;
        v38 = CharacterRotate_d52080(a1);
        v39 = fmodf_alt1(*(float*)(a1 + 36) - v38, 0x1.921fb60000000p+2f);
        if (v39 >= 0x0.0p+0f) {
          v40 = v39 + 0x0.0p+0f;
        }
        else {
          v40 = (float)(v39 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
        }
        if (v40 > 0x1.921fb60000000p+1f) {
          v40 = v40 + -0x1.921fb60000000p+2f;
        }
        strcpy(v55_.v55, "\nStick");
        v41 = &v55_.v55[1];
        v26 = fabsf(v40) < 0x1.41b2f80000000p-1f;
        if (*(_BYTE*)(a1 + 320) == 1) {
          GameRoutine_1a09ce0_alt1((__int64)v55_.v55, "(LookResult)", 0xCu);
          if ((v55_.v55[0] & 1) != 0) {
            v41 = v55_.v56;
          }
        }
        v42 = strlen_alt1(v41);
        if (v42 < 0xFFFFFFFFFFFFFFF7LL) {
          v43 = v42;
          if (v42 >= 0x17) {
            if ((v42 | 7) == 0x17) {
              v45 = 26;
            }
            else {
              v45 = (v42 | 7) + 1;
            }
            v44 = (char*)fw_memory_HeapManager_Allocate_alt1(
                fw_memory_g_heap_manager, v45, 16, 0);
            v53_.v54 = v44;
            v53_.v53[0] = v45 | 1;
          }
          else {
            LOBYTE(v53_.v53[0]) = 2 * v42;
            v44 = (char*)v53_.v53 + 1;
            if (v42 == 0) {
            LABEL_81:
              v44[v43] = 0;
              if ((v53_.v53[0] & 1) != 0 && v53_.v54 != nullptr) {
                v46 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v46 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v46,
                    (__int64)v53_.v54);
              }
              if ((v55_.v55[0] & 1) != 0 && v55_.v56 != nullptr) {
                v47 = 128;
                if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                               200LL) == 0) {
                  v47 = 56;
                }
                nn_mem_StandardAllocator_Free_alt1(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr + v47,
                    (__int64)v55_.v56);
              }
            LABEL_91:
              if (atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
                std___1___shared_weak_count___release_weak_alt1(v12);
              }
              goto LABEL_93;
            }
          }
          memmove_alt1((__int64)v44, (__int64)v41, v43);
          goto LABEL_81;
        }
      LABEL_107:
        String_60a1d0_alt1();
      }
    }
  }
  else {
    v12 = 0;
  }
  v28 = *(_DWORD*)(a1 + 36);
  v55_.v55[0] = 8;
  v29 = &v55_.v55[1];
  strcpy(&v55_.v55[1], "Null");
  v30 = *(unsigned __int8*)(a1 + 320);
  *(_DWORD*)(a1 + 32) = v28;
  if (v30 == 1) {
    GameRoutine_1a09ce0_alt1((__int64)v55_.v55, "(LookResult)", 0xCu);
    if ((v55_.v55[0] & 1) != 0) {
      v29 = v55_.v56;
    }
  }
  v31 = strlen_alt1(v29);
  if (v31 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_107;
  }
  v32 = v31;
  if (v31 >= 0x17) {
    if ((v31 | 7) == 0x17) {
      v34 = 26;
    }
    else {
      v34 = (v31 | 7) + 1;
    }
    v33 = (char*)fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager,
                                                     v34, 16, 0);
    v53_.v54 = v33;
    v53_.v53[0] = v34 | 1;
  }
  else {
    LOBYTE(v53_.v53[0]) = 2 * v31;
    v33 = (char*)v53_.v53 + 1;
    if (v31 == 0) {
      goto LABEL_47;
    }
  }
  memmove_alt1((__int64)v33, (__int64)v29, v32);
LABEL_47:
  v33[v32] = 0;
  if ((v53_.v53[0] & 1) != 0 && v53_.v54 != nullptr) {
    v35 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v35 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v35, (__int64)v53_.v54);
  }
  if ((v55_.v55[0] & 1) != 0 && v55_.v56 != nullptr) {
    v36 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v36 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v36, (__int64)v55_.v56);
  }
  v26 = true;
  if (v12 != 0) {
    goto LABEL_91;
  }
LABEL_93:
  v48 = *(_QWORD*)(a1 + 8);
  if ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(v48 + 8) + 8LL) + 216LL) & 2) == 0 &&
      *(float*)(v48 + 664) > 0x0.0p+0f && (*(_BYTE*)(a1 + 228) & 1) != 0) {
    *(_BYTE*)(a1 + 228) = 0;
  }
  if (v26) {
    if (*(_BYTE*)(a1 + 320) == 1) {
      if (*(_BYTE*)(a1 + 64) == 1) {
        v49 = *(_OWORD*)(a1 + 272);
        *(_QWORD*)(a1 + 48) = v49;
        v50 = *(_OWORD*)(a1 + 48);
        *((_QWORD*)&v50 + 1) = DWORD2(v49);
        v51 = *(_DWORD*)(a1 + 288);
        *(_OWORD*)(a1 + 48) = v50;
      }
      else {
        v52 = *(_QWORD*)(a1 + 280);
        v51 = *(_DWORD*)(a1 + 288);
        *(_QWORD*)(a1 + 48) = *(_QWORD*)(a1 + 272);
        *(_QWORD*)(a1 + 56) = v52;
        *(_BYTE*)(a1 + 64) = 1;
      }
    }
    else {
      v51 = 0;
      if (*(_BYTE*)(a1 + 64) == 1) {
        *(_BYTE*)(a1 + 64) = 0;
      }
    }
    *(_DWORD*)(a1 + 80) = v51;
  }
}

void CharacterRotate_d514c0(__int64 a1, float a2)
{
  float v2;
  int v3;
  float v6;
  float v7;
  float v8;
  float v9;
  float v10;
  float v11;
  float v12;
  __int64* v13;
  __int64 v14;
  __int64 v15;
  float v16;
  float i;
  __int64 v18;
  float* v19;
  float v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  float v26;
  float v27;
  float v28;
  int v29;
  float v30;
  float v31;
  float v32;
  float v33;
  bool v34;
  float v35;
  float v36;
  float v37;
  float v38;
  int v39;
  float v40;
  float v41;
  int v42;

  v2 = *(float*)(a1 + 36);
  v3 = *(unsigned __int8*)(a1 + 228);
  *(_DWORD*)(a1 + 172) = 0;
  *(_BYTE*)(a1 + 180) = 1;
  *(float*)(a1 + 176) = v2;
  if (v3 != 1) {
    v9 = 0x1.921fb60000000p+2f;
    goto LABEL_37;
  }
  if (*(_BYTE*)(a1 + 220) == 1) {
    v6 = *(float*)(a1 + 216);
    if (v6 > 0x0.0p+0f) {
      v7 = *(float*)(a1 + 168);
      v8 = fabsf(a2 * (float)(0x1.0000000000000p+0f / v6));
      if (v7 <= 0x1.0000000000000p+0f) {
        if (v7 >= 0x1.0000000000000p+0f) {
          goto LABEL_12;
        }
        v7 = v8 + v7;
        if (v7 <= 0x1.0000000000000p+0f) {
          goto LABEL_12;
        }
      }
      else {
        v7 = v7 - v8;
        if (v7 >= 0x1.0000000000000p+0f) {
          goto LABEL_12;
        }
      }
      v7 = 0x1.0000000000000p+0f;
    LABEL_12:
      *(float*)(a1 + 168) = v7;
      goto LABEL_13;
    }
  }
  *(_DWORD*)(a1 + 168) = 1065353216;
LABEL_13:
  v10 = fmodf_alt1(v2 - *(float*)(a1 + 32), 0x1.921fb60000000p+2f);
  if ((*(_BYTE*)(a1 + 228) & 1) == 0) {
    goto LABEL_82;
  }
  v11 = 0x1.0000000000000p+0f;
  if (v10 >= 0x0.0p+0f) {
    v12 = v10 + 0x0.0p+0f;
  }
  else {
    v12 = (float)(v10 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
  }
  if (v12 > 0x1.921fb60000000p+1f) {
    v12 = v12 + -0x1.921fb60000000p+2f;
  }
  v13 = *(__int64**)(a1 + 88);
  v14 = *v13;
  v15 = v13[1];
  v16 = (float)(fabsf(v12) / 0x1.921fb60000000p+1f) / 0x1.3333340000000p-2f;
  if (v16 > 0x1.0000000000000p+0f) {
    v16 = 0x1.0000000000000p+0f;
  }
  for (i = a2 * (float)((float)((float)(fminf(fmaxf(v16, 0x0.0p+0f),
                                              0x1.0000000000000p+0f) *
                                        0x1.6666660000000p-1f) +
                                0x1.3333340000000p-2f) *
                        *(float*)(a1 + 224));
       v14 != v15; v14 += 16) {
    v19 = *(float**)v14;
    v18 = *(_QWORD*)(v14 + 8);
    if (v18 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v19 != nullptr) {
      v20 = v19[3];
      if (v20 <= 0x0.0p+0f) {
        v23 = *v19;
      }
      else {
        v21 = v19[1];
        v22 = v19[2] / v20;
        if (v21 > 0x0.0p+0f) {
          v22 = powf(v22, v21);
        }
        v23 = (float)(fminf(fmaxf(v22, 0x0.0p+0f), 0x1.0000000000000p+0f) *
                      (float)(*v19 + -0x1.0000000000000p+0f)) +
              0x1.0000000000000p+0f;
      }
      v11 = v11 * v23;
    }
    if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      std___1___shared_weak_count___release_weak(v18);
    }
  }
  v2 = *(float*)(a1 + 36);
  v9 = (float)(i * v11) * *(float*)(a1 + 168);
LABEL_37:
  v24 = fmodf_alt1(*(float*)(a1 + 32) - v2, 0x1.921fb60000000p+2f);
  if (v24 >= 0x0.0p+0f) {
    v25 = v24 + 0x0.0p+0f;
  }
  else {
    v25 = (float)(v24 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
  }
  if (v25 > 0x1.921fb60000000p+1f) {
    v25 = v25 + -0x1.921fb60000000p+2f;
  }
  v26 = fabsf(v9);
  v27 = v2 + v25;
  if (v2 > v27) {
    v2 = v2 - v26;
    if (v2 >= v27) {
      goto LABEL_48;
    }
  LABEL_47:
    v2 = v27;
    goto LABEL_48;
  }
  if (v2 < v27) {
    v2 = v2 + v26;
    if (v2 > v27) {
      goto LABEL_47;
    }
  }
LABEL_48:
  v28 = fmodf_alt1(v2 + 0x1.921fb60000000p+1f, 0x1.921fb60000000p+2f);
  v29 = *(unsigned __int8*)(a1 + 236);
  v30 = v28 + -0x1.921fb60000000p+1f;
  if (v30 < -0x1.921fb60000000p+1f) {
    v30 = v30 + 0x1.921fb60000000p+2f;
  }
  *(float*)(a1 + 36) = v30;
  if (v29 == 1) {
    v31 = fmodf_alt1(v30 - *(float*)(a1 + 32), 0x1.921fb60000000p+2f);
    if (v31 >= 0x0.0p+0f) {
      v32 = v31 + 0x0.0p+0f;
    }
    else {
      v32 = (float)(v31 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
    }
    if (v32 > 0x1.921fb60000000p+1f) {
      v32 = v32 + -0x1.921fb60000000p+2f;
    }
    if ((*(_BYTE*)(a1 + 236) & 1) == 0) {
    LABEL_82:
      GameRoutine_8123d0();
    }
    v33 = *(float*)(a1 + 232);
    if (fabsf(v32) > v33) {
      v34 = v32 < 0x0.0p+0f;
      v35 = 0x1.0000000000000p+0f;
      if (v34) {
        v35 = -0x1.0000000000000p+0f;
      }
      v36 = fmodf_alt1((float)(*(float*)(a1 + 32) + (float)(v35 * v33)) +
                           0x1.921fb60000000p+1f,
                       0x1.921fb60000000p+2f) +
            -0x1.921fb60000000p+1f;
      if (v36 < -0x1.921fb60000000p+1f) {
        v36 = v36 + 0x1.921fb60000000p+2f;
      }
      *(float*)(a1 + 36) = v36;
    }
  }
  if ((v3 & 1) == 0) {
    *(_DWORD*)(a1 + 168) = 0;
  }
  v37 = fmodf_alt1(*(float*)(a1 + 36) - *(float*)(a1 + 32),
                   0x1.921fb60000000p+2f);
  if (v37 >= 0x0.0p+0f) {
    v38 = v37 + 0x0.0p+0f;
  }
  else {
    v38 = (float)(v37 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
  }
  if (v38 > 0x1.921fb60000000p+1f) {
    v38 = v38 + -0x1.921fb60000000p+2f;
  }
  if (fabsf(v38) < 0x1.47ae140000000p-7f) {
    v39 = *(_DWORD*)(a1 + 32);
    *(_DWORD*)(a1 + 168) = 0;
    *(_DWORD*)(a1 + 36) = v39;
  }
  if ((*(_BYTE*)(a1 + 180) & 1) == 0) {
    goto LABEL_82;
  }
  v40 = fmodf_alt1(*(float*)(a1 + 36) - *(float*)(a1 + 176),
                   0x1.921fb60000000p+2f);
  if (v40 >= 0x0.0p+0f) {
    v41 = v40 + 0x0.0p+0f;
  }
  else {
    v41 = (float)(v40 + 0x0.0p+0f) + 0x1.921fb60000000p+2f;
  }
  if (v41 > 0x1.921fb60000000p+1f) {
    v41 = v41 + -0x1.921fb60000000p+2f;
  }
  if (v41 > 0x1.4f8b580000000p-17f) {
    v42 = *(_DWORD*)(a1 + 172) + 1;
  }
  else {
    v42 = 0;
  }
  *(_DWORD*)(a1 + 172) = v42;
}

void CharacterRotate_d519c0(int8x16_t* a1)
{
  __int64 (*v1)();
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float32x4_t v8;
  float32x4_t v9;
  float32x4_t v10;
  float32x4_t v11;
  void* v12;
  float32x4_t v13;
  float v14;
  float v15;
  float v16;
  float v17;
  double v18;
  double v19;
  double v20;
  unsigned int v21;
  double v22;
  int8x16_t v23;
  float32x4_t v24;
  int8x16_t v25;
  float32x4_t v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t v29;
  float32x4_t v30;
  unsigned __int64 v31;
  float32x4_t v32;
  double v33;
  double v34;
  int8x16_t v35;
  double v36;
  unsigned __int64 v37;
  double v38;
  double v39;
  float32x4_t v40;
  int8x16_t v41;
  float32x4_t v42;
  float32x4_t v43;
  float32x4_t v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;
  __int64 v48;
  __int64 v49;
  _BOOL4 v50;
  __int64 v51;
  unsigned __int32 v53;
  __int128 v54;
  __int64 v55;
  char v56;
  __int64 v57;
  int v58;
  int v59;
  __int64 v60;
  struct {
    __int64 (**v61)();
    __int64 v62;
    __int64 (*v63)();
    char gap40_[8];
    __int64 (***v64)();
  } v61_;

  v3 = (float)(PSEUDO_UNFUSED(LANES128(a1[2]).n128_f32[1] *
                              0x1.0000000000000p-1f)) +
       (float)(roundf((float)(LANES128(a1[2]).n128_f32[1] *
                              0x1.0000000000000p-1f) *
                      0x1.45f3060000000p-3f) *
               -0x1.921fb60000000p+2f);
  if (v3 < -0x1.921fb60000000p+0f) {
    v4 = -0x1.0000000000000p+0f;
  }
  else {
    v4 = 0x1.0000000000000p+0f;
  }
  v5 = -0x1.921fb60000000p+1f - v3;
  if (v3 >= -0x1.921fb60000000p+0f) {
    v5 = v3;
  }
  if (v3 > 0x1.921fb60000000p+0f) {
    v6 = 0x1.921fb60000000p+1f - v3;
  }
  else {
    v6 = v5;
  }
  if (v3 > 0x1.921fb60000000p+0f) {
    v7 = -0x1.0000000000000p+0f;
  }
  else {
    v7 = v4;
  }
  LANES128(v8).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, 0x3F80000000000000LL),
                           COERCE_AS(float32x2_t, 0x3F80000000000000LL)))
          .n64_u64[0];
  LANES128(v8).n128_u64[1] = LANES128(v8).n128_u64[0];
  v9 = vrsqrteq_f32(v8);
  v10 = vmulq_f32(v9, vrsqrtsq_f32(v9, vmulq_f32(v8, v9)));
  v11 =
      vbicq_s8(vmulq_f32(vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v8, v10))),
                         COERCE_AS(float32x4_t, GameData_1a83610)),
               vceqzq_f32(v8));
  PSEUDO_LOW_LANE128(v10, n128_f32, v6 * v6);
  v12 = GameData_212c188;
  v13 = vmulq_n_f32(
      v11,
      v6 *
          (float)((float)((float)-(
                              float)(*(float*)((char*)((__int128*)0x10LL) +
                                               (_QWORD)GameData_212c190) -
                                     (float)((float)(*(float*)((char*)((
                                                                   _UNKNOWN**)0x8LL) +
                                                               (_QWORD)
                                                                   GameData_212c190 +
                                                               4) +
                                                     (float)((float)-(
                                                                 float)(*(float*)((char*)((
                                                                                      _UNKNOWN**)0x8LL) +
                                                                                  (_QWORD)
                                                                                      GameData_212c190) -
                                                                        (float)((float)(*((float*)
                                                                                              GameData_212c190 +
                                                                                          1) -
                                                                                        (float)(*(float*)
                                                                                                    GameData_212c190 *
                                                                                                (float)(v6 *
                                                                                                        v6))) *
                                                                                (float)(v6 *
                                                                                        v6))) *
                                                             (float)(v6 *
                                                                     v6))) *
                                             (float)(v6 * v6))) *
                          (float)(v6 * v6)) +
                  0x1.0000000000000p+0f));
  v14 = *((float*)GameData_212c188 + 1) -
        (float)(*(float*)GameData_212c188 * LANES128(v10).n128_f32[0]);
  LANES128(a1[1]).n128_u64[0] = LANES128(v13).n128_u64[0];
  v15 = *(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12 + 4);
  v16 = -(float)(*(float*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v12) -
                 (float)(v14 * LANES128(v10).n128_f32[0]));
  v17 = *(float*)((char*)((__int128*)0x10LL) + (_QWORD)v12);
  LANES128(a1[1]).n128_u32[2] = LANES128(v13).n128_u32[2];
  LANES128(a1[1]).n128_f32[3] =
      v7 *
      (float)((float)((float)-(
                          float)(v17 -
                                 (float)((float)(v15 +
                                                 (float)(v16 *
                                                         LANES128(v10)
                                                             .n128_f32[0])) *
                                         LANES128(v10).n128_f32[0])) *
                      LANES128(v10).n128_f32[0]) +
              0x1.0000000000000p+0f);
  v18 = LANES128(a1[10]).n128_f32[0] * 0x1.0000000000000p-1;
  v19 = cos(v18);
  v20 = sin(v18);
  *(float*)&v21 =
      v19 + PSEUDO_UNFUSED(PSEUDO_UNFUSED(v20 * 0x0.0p+0) * 0x0.0p+0);
  v22 = PSEUDO_UNFUSED(v20 * 0x0.0p+0) + v19 * 0x0.0p+0;
  LANES128(v23).n128_f32[0] =
      PSEUDO_UNFUSED(v19 * 0x0.0p+0) - PSEUDO_UNFUSED(v20 * 0x0.0p+0);
  *(float*)&v22 = v22;
  *(float*)&v20 =
      v20 - PSEUDO_UNFUSED(PSEUDO_UNFUSED(v19 * 0x0.0p+0) * 0x0.0p+0);
  LANES128(v23).n128_u32[1] = LODWORD(v22);
  LANES128(v24).n128_u64[0] = LANES128(v23).n128_u64[0];
  LANES128(v24).n128_u64[1] = __PAIR64__(v21, LODWORD(v20));
  v25 = a1[1];
  LANES128(v26).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  LANES128(v27).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  LANES128(v28).n128_u64[0] = LANES128(a1[1]).n128_u64[0];
  LANES128(v26).n128_u64[1] = LANES128(v26).n128_u64[0];
  LANES128(v28).n128_u64[1] = LANES128(v27).n128_u64[0];
  LANES128(v23).n128_u64[1] = LANES128(v24).n128_u64[1];
  v29 = vmulq_f32(v26, v24);
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v24).n128_i8[8] =
      vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
  LANES128(v30).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int32x2_t*)&LANES128(v30).n128_i8[8] = vdup_lane_s32(*(int32x2_t*)&v22, 0);
  v31 = LANES128(*(a1)).n128_u64[1];
  v32 = vmlaq_f32(v29, COERCE_AS(float32x4_t, GameData_1a83800),
                  vmulq_f32(v28, v24));
  LANES128(v24).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v25, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v27).n128_u64[1] = LANES128(v24).n128_u64[0];
  LANES128(v24).n128_u64[1] = LANES128(v28).n128_u64[0];
  LANES128(v25).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v25).n128_i8[8] =
      vqtbl1_s8(v23, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
  a1[1] = vmlsq_f32(vmlaq_f32(v32, COERCE_AS(float32x4_t, GameData_1a83800),
                              vmulq_f32(v24, v30)),
                    v25, v27);
  if ((*(_BYTE*)(*(_QWORD*)(v31 + 8) + 568LL) & 8) != 0) {
    v33 = LANES128(a1[23]).n128_f32[2] * 0x1.0000000000000p-1;
    v34 = cos(v33);
    LANES128(v35).n128_f64[0] = sin(v33);
    v36 = LANES128(v35).n128_f64[0] * 0x0.0p+0;
    v37 = LANES128(*(a1)).n128_u64[1];
    v38 = LANES128(v35).n128_f64[0] * 0x0.0p+0 * 0x0.0p+0;
    v39 = PSEUDO_UNFUSED(LANES128(v35).n128_f64[0] * 0x0.0p+0) + v34 * 0x0.0p+0;
    LANES128(v35).n128_f32[0] =
        LANES128(v35).n128_f64[0] -
        PSEUDO_UNFUSED(PSEUDO_UNFUSED(v34 * 0x0.0p+0) * 0x0.0p+0);
    *(float*)&v36 = PSEUDO_UNFUSED(v34 * 0x0.0p+0) - v36;
    *(float*)&v38 = v34 + v38;
    *(float*)&v39 = v39;
    LANES128(v35).n128_u32[1] = LODWORD(v39);
    LANES128(v40).n128_u64[0] = LANES128(v35).n128_u64[0];
    LANES128(v40).n128_u64[1] = __PAIR64__(LODWORD(v38), LODWORD(v36));
    v41 = a1[1];
    LANES128(v42).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    LANES128(v43).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    LANES128(v44).n128_u64[0] = LANES128(a1[1]).n128_u64[0];
    LANES128(v42).n128_u64[1] = LANES128(v42).n128_u64[0];
    LANES128(v44).n128_u64[1] = LANES128(v43).n128_u64[0];
    LANES128(v35).n128_u64[1] = LANES128(v40).n128_u64[1];
    v45 = vmulq_f32(v42, v40);
    LANES128(v40).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xF0E0D0C0F0E0D0CLL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v40).n128_i8[8] =
        vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0x30201000F0E0D0CLL));
    LANES128(v46).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
            .n64_u64[0];
    *(int32x2_t*)&LANES128(v46).n128_i8[8] =
        vdup_lane_s32(*(int32x2_t*)&v39, 0);
    v47 = vmlaq_f32(v45, COERCE_AS(float32x4_t, GameData_1a83800),
                    vmulq_f32(v44, v40));
    LANES128(v40).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v41, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    LANES128(v43).n128_u64[1] = LANES128(v40).n128_u64[0];
    LANES128(v40).n128_u64[1] = LANES128(v44).n128_u64[0];
    LANES128(v41).n128_u64[0] =
        LANES64_OF(vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
            .n64_u64[0];
    *(int8x8_t*)&LANES128(v41).n128_i8[8] =
        vqtbl1_s8(v35, COERCE_AS(int8x8_t, 0xB0A090803020100LL));
    a1[1] = vmlsq_f32(vmlaq_f32(v47, COERCE_AS(float32x4_t, GameData_1a83800),
                                vmulq_f32(v40, v46)),
                      v41, v43);
    v48 = *(_QWORD*)(*(_QWORD*)(v37 + 8) + 8LL);
    if (v48 != 0) {
      CharacterModel_cf8040_alt1((void*)(&v61_.v61), v48, "Jnt_C_Spine1");
      if (v61_.v62 != 0) {
        v49 = std___1___shared_weak_count_lock_alt1(v61_.v62);
        if (v49 != 0) {
          v50 = v61_.v61 != nullptr;
          if (v61_.v61 != nullptr) {
            v1 = *v61_.v61;
          }
          if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v51 = v49;
            (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
            std___1___shared_weak_count___release_weak_alt1(v51);
          }
        }
        else {
          v50 = false;
        }
        if (v61_.v62 != 0) {
          std___1___shared_weak_count___release_weak_alt1(v61_.v62);
        }
        if (v1 != nullptr && v50) {
          v53 = LANES128(a1[23]).n128_u32[3];
          *((_QWORD*)v1 + 12) = 0;
          v54 = *((_OWORD*)v1 + 6);
          v55 = *(_QWORD*)v1;
          *((_DWORD*)v1 + 32) |= 0x10u;
          v56 = *((_BYTE*)v1 + 28);
          *((_QWORD*)&v54 + 1) = v53;
          *((_OWORD*)v1 + 6) = v54;
          if ((v56 & 1) != 0) {
          LABEL_34:
            *(_BYTE*)(*(_QWORD*)(v55 + 24) + 504LL) = 1;
            return;
          }
          v57 = *(_QWORD*)(v55 + 24);
          v58 = *((_DWORD*)v1 + 4);
          v61_.v63 = v1;
          v61_.v61 = GameData_1fc0970;
          v61_.v62 = v55;
          v61_.v64 = &v61_.v61;
          v59 = Model_a661a0_alt1(v57, v58, (__int64)&v61_.v61, 0);
          if (v61_.v64 == &v61_.v61) {
            v60 = 4;
          }
          else {
            if (v61_.v64 == nullptr) {
            LABEL_33:
              *((_DWORD*)v1 + 6) = v59;
              *((_BYTE*)v1 + 28) = 1;
              goto LABEL_34;
            }
            v60 = 5;
          }
          ((__int64 (*)(__int64))(*v61_.v64)[v60])((__int64)v61_.v64);
          goto LABEL_33;
        }
      }
    }
  }
}

float CharacterRotate_d52080(__int64 a1)
{
  __int64 v1;
  float result;
  __int64 v3;
  float v4;
  float v5;
  float v6;
  float v7;
  __int64 v8;
  __int64 v9;
  float* v10;
  float v11;

  result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
  v1 = *(_QWORD*)(a1 + 184);
  if (v1 != 0) {
    return *(float*)v1;
  }
  if (*(_BYTE*)(a1 + 320) == 1 && *(float*)(a1 + 312) > 0x0.0p+0f) {
    v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL) + 16LL);
    v4 = COERCE_FLOAT(*(_OWORD*)(a1 + 256)) - *(float*)(v3 + 292);
    v5 = COERCE_FLOAT(*(_QWORD*)(a1 + 264)) - *(float*)(v3 + 296);
    v6 = (float)(PSEUDO_UNFUSED(v5 * v5)) + (float)(v4 * v4);
    result = 0x0.0p+0f;
    if (v6 > 0x0.0p+0f) {
      if (v4 != 0x0.0p+0f || v5 != 0x0.0p+0f) {
        v7 = sqrtf(v6);
        v4 = v4 / v7;
        v5 = v5 / v7;
      }
      return atan2f_alt1(v4, v5);
    }
  }
  else {
    if (*(_QWORD*)(a1 + 208) == 0) {
      return *(float*)(a1 + 36);
    }
    v8 = a1;
    v9 = std___1___shared_weak_count_lock_alt1(*(_QWORD*)(a1 + 208)),
    result = COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
    a1 = v8;
    if (v9 == 0) {
      return *(float*)(a1 + 36);
    }
    v10 = *(float**)(v8 + 200);
    if (v10 != nullptr) {
      result = *v10;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      v11 = result;
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      std___1___shared_weak_count___release_weak_alt1(v9),
          result =
              COERCE_AS(__typeof__(result), PSEUDO_REGISTER(float, "s0", "=w"));
      result = v11;
      a1 = v8;
    }
    if (v10 == nullptr) {
      return *(float*)(a1 + 36);
    }
  }
  return result;
}

void CharacterRotate_d521c0(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v2;
  float v3;
  __int64 v4;
  float v5;
  int v6;
  float v7;
  float v8;
  __int128 v9;
  __int128 v10;
  __int64 v11;
  __int64 v12;
  __int128 v13;
  __int128 v14;
  int v15;
  __int128 v16;
  __int128 v17;
  __int64 v18;
  struct {
    __int64 v19;
    char gap8_[8];
    __int128 v20;
    __int128 v21;
    int v22;
    char gap52_[12];
    _QWORD v23[2];
    unsigned __int8 v24;
  } v19_;

  v2 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 8LL);
  if (*(_BYTE*)(a1 + 104) == 1) {
    v3 = *(float*)(a1 + 96);
  }
  else {
    v4 = *(_QWORD*)(v2 + 600);
    v3 = 0x0.0p+0f;
    if (v4 != 0) {
      v5 = 0x1.99999a0000000p-3f;
    }
    else {
      v5 = 0x0.0p+0f;
    }
    if (v4 != 0) {
      v3 = fmodf_alt1(**(float**)(v2 + 144), 0x1.99999a0000000p-3f);
    }
    *(float*)(a1 + 100) = v5;
    *(_BYTE*)(a1 + 109) = 1;
    *(_BYTE*)(a1 + 104) = 1;
  }
  *(_BYTE*)(a1 + 108) = 0;
  *(_DWORD*)(a1 + 112) = 1120403456;
  v6 = *(unsigned __int8*)(a1 + 109);
  v7 = v3 + 0x1.9000000000000p+6f;
  v8 = *(float*)(a1 + 100);
  *(float*)(a1 + 96) = v7;
  if (v6 == 1) {
    if (v8 == 0x0.0p+0f) {
      *(_BYTE*)(a1 + 108) = 1;
      goto LABEL_20;
    }
    if (v8 > v7) {
    LABEL_15:
      if (*(_BYTE*)(a1 + 320) != 1) {
        goto LABEL_26;
      }
      goto LABEL_20;
    }
    *(_BYTE*)(a1 + 108) = 1;
    do {
      v7 = v7 - v8;
    } while (v8 <= v7);
    *(float*)(a1 + 96) = v7;
  }
  else {
    if (v8 > v7) {
      goto LABEL_15;
    }
    *(_DWORD*)(a1 + 96) = 0;
    *(_BYTE*)(a1 + 104) = 0;
    *(_WORD*)(a1 + 108) = 1;
  }
LABEL_20:
  GameRoutine_d33900((void*)((__int64)&v19_.v19), *(_QWORD*)(v2 + 24));
  if (*(unsigned __int8*)(a1 + 320) == v19_.v24) {
    if (*(_BYTE*)(a1 + 320) != 0) {
      v9 = v19_.v20;
      v10 = v19_.v21;
      v11 = v19_.v19;
      *(_QWORD*)(a1 + 304) = v19_.v23[0];
      v12 = *(_QWORD*)((char*)v19_.v23 + 5);
      *(_QWORD*)(a1 + 240) = v11;
      *(_QWORD*)(a1 + 256) = v9;
      *(_QWORD*)(a1 + 272) = v10;
      v13 = *(_OWORD*)(a1 + 256);
      v14 = *(_OWORD*)(a1 + 272);
      *(_QWORD*)(a1 + 309) = v12;
      *((_QWORD*)&v13 + 1) = DWORD2(v9);
      *((_QWORD*)&v14 + 1) = DWORD2(v10);
      *(_DWORD*)(a1 + 288) = v19_.v22;
      *(_OWORD*)(a1 + 256) = v13;
      *(_OWORD*)(a1 + 272) = v14;
    }
  }
  else if (*(_BYTE*)(a1 + 320) != 0) {
    *(_BYTE*)(a1 + 320) = 0;
  }
  else {
    v15 = v19_.v22;
    *(_QWORD*)(a1 + 240) = v19_.v19;
    v16 = v19_.v20;
    *(_DWORD*)(a1 + 288) = v15;
    *(_OWORD*)(a1 + 256) = v16;
    v17 = v19_.v21;
    *(_QWORD*)(a1 + 304) = v19_.v23[0];
    v18 = *(_QWORD*)((char*)v19_.v23 + 5);
    *(_OWORD*)(a1 + 272) = v17;
    *(_QWORD*)(a1 + 309) = v18;
    *(_BYTE*)(a1 + 320) = 1;
  }
LABEL_26:
  CharacterRotate_d50de0(a1);
  CharacterRotate_d514c0(a1, 0x1.9000000000000p+6f);
}

#pragma GCC visibility pop
