#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 Crc32List_11ec20(_QWORD, _QWORD, _QWORD);
__int64 snd_Fade_Destroy_Fade(_QWORD);
__int64 snd_fnd_WeakHandle_get(_QWORD, long double);
__int64 snd_fnd_WeakHandle_isValid(_QWORD);
__int64 snd_play_ff3e0(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD,
                       double, float);
__n128 snd_Fade_Fade_10c830(_QWORD, double);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _DWORD* GameData_212d168;
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterSound_vtable[])();
extern __int64* GameData_212e248[2];
extern char GameData_1a9f09e;
extern int GameData_2235720;
__int64
CharacterSound_Unknown7_alt1(__int64 result,
                             long double a2) __asm__("CharacterSound_Unknown7");
__int64 CharacterSound_1096020(__int64 a1, _BYTE* a2, float a3);
__n128
CharacterSound_Destructor_alt1(_QWORD* a1) __asm__("CharacterSound_Destructor");
__attribute__((swiftcall)) void
    CharacterSound_1095a00_alt1(PSEUDO_X8, _QWORD, _QWORD, _QWORD,
                                _QWORD) __asm__("CharacterSound_1095a00");
__int64 CharacterSound_1096020_alt1(_QWORD, _QWORD,
                                    float) __asm__("CharacterSound_1096020");
__int64 GameRoutine_109e190(_QWORD, _QWORD);
__int64 GameRoutine_1a09ce0(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_60a020(_QWORD);
__int64 GameRoutine_a539c0(_QWORD, _QWORD, _QWORD);
__int64 GroundAttributeFile_60b080(_QWORD);
__int64 Seq_114d520(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_text_String_CopyTerminated(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 snd_hasSound(_QWORD);
__int64 strchr(_QWORD, _QWORD);
__int64 strcmp(_QWORD, _QWORD);
__int64 strlen(_QWORD);
extern _UNKNOWN GameData_1af62c2;
extern __int64* GameData_212ce90[3];
extern __int64 GameData_21ca2f8;
extern __int64 GameData_2219078;
extern __int64 GameData_22336e0;
extern __int64 fw_memory_g_heap_manager;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int GameData_21d92e0;
float snd_getDefineValue(_QWORD, long double);
void __attribute__((noreturn)) String_60a1d0(_QWORD);
void __attribute__((noreturn)) String_60a230(_QWORD);
__attribute__((swiftcall)) void
CharacterSound_1095750_alt1(PSEUDO_X8 x8_, __int64 result, char* a2, __int64 a3,
                            long double a5) __asm__("CharacterSound_1095750");
__attribute__((swiftcall)) void
CharacterSound_1095a00_alt2(PSEUDO_X8 x8_, _QWORD* a1, unsigned __int8* a2,
                            const char* a3,
                            __int64 a4) __asm__("CharacterSound_1095a00");
__attribute__((swiftcall)) void CharacterSound_10962d0_alt1(
    PSEUDO_X8 x8_, __int64* result, __int64 a2,
    unsigned __int64 a3) __asm__("CharacterSound_10962d0");
__attribute__((swiftcall)) void
CharacterSound_1095a00_alt3(PSEUDO_X8, __int64, const char*, const char*,
                            __int64) __asm__("CharacterSound_1095a00");
__int64 CharacterSound_1096020_alt2(_QWORD*, _BYTE*,
                                    float) __asm__("CharacterSound_1096020");
__int64 Crc32List_11ec20_alt1(__int64, __int64,
                              unsigned int) __asm__("Crc32List_11ec20");
__int64 GameRoutine_109e190_alt1(float32x4_t*,
                                 int8x16_t*) __asm__("GameRoutine_109e190");
__int64
GameRoutine_1a09ce0_alt1(__int64, const char*,
                         unsigned __int64) __asm__("GameRoutine_1a09ce0");
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64
GroundAttributeFile_60b080_alt1(int) __asm__("GroundAttributeFile_60b080");
__int64 Seq_114d520_alt1(__int64, __int64) __asm__("Seq_114d520");
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 fw_text_String_CopyTerminated_alt1(
    __int64*, __int64,
    unsigned __int64) __asm__("fw_text_String_CopyTerminated");
__int64 memmove_alt1(__int64, __int64, unsigned __int64) __asm__("memmove");
__int64 snd_Fade_Destroy_Fade_alt1(_QWORD*) __asm__("snd_Fade_Destroy_Fade");
__int64 snd_fnd_WeakHandle_get_alt1(__int64) __asm__("snd_fnd_WeakHandle_get");
__int64
snd_fnd_WeakHandle_isValid_alt1(__int64*) __asm__("snd_fnd_WeakHandle_isValid");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 strchr_alt1(const char*, int) __asm__("strchr");
bool snd_hasSound_alt1(unsigned __int8*) __asm__("snd_hasSound");
double snd_getDefineValue_alt1(unsigned __int8*) __asm__("snd_getDefineValue");
int strcmp_alt1(const char*, const char*) __asm__("strcmp");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
unsigned __int8*
GameRoutine_a539c0_alt1(unsigned __int8* result, __int64,
                        unsigned __int64) __asm__("GameRoutine_a539c0");
void __attribute__((noreturn)) String_60a1d0_alt1() __asm__("String_60a1d0");
void __attribute__((noreturn)) String_60a230_alt1() __asm__("String_60a230");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void snd_Fade_Fade_10c830_alt1(__int64, float) __asm__("snd_Fade_Fade_10c830");
__int64 CharacterSound_Unknown7(__int64 result);
__attribute__((swiftcall)) void CharacterSound_1095750(PSEUDO_X8 x8_,
                                                       __int64 a1, char* a2,
                                                       const char* a3,
                                                       float a5);
__attribute__((swiftcall)) void
CharacterSound_1095a00(PSEUDO_X8 x8_, __int64 a1, const char* a2,
                       const char* a3, int8x16_t* a4);
__attribute__((swiftcall)) void CharacterSound_10962d0(PSEUDO_X8 x8_,
                                                       __int64 a1, __int64 a2,
                                                       unsigned __int64 a3);
__int64 CharacterSound_Destructor(_QWORD* a1);
__int64 snd_playAt_ff4e0(__int64, __int64, __int64, unsigned int, unsigned int,
                         int, float, float, float, float, float);
__attribute__((swiftcall)) void CharacterSound_1096110(PSEUDO_X8 x8_,
                                                       __int64 a1, char* a2,
                                                       const char* a3,
                                                       __int64 a4, float a6);

__int64 CharacterSound_Unknown7(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  __int64 v2;
  __int64 v3;
  bool v4;
  _QWORD* v5;
  int v6;
  bool v7;
  char v8;
  __int64 v9;
  float v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  long double* v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  long double v19;
  _QWORD v20[25];

  v1 = *(_QWORD*)(result + 32);
  if (v1 != 0) {
    v2 = *(_QWORD*)(v1 + 8);
    v3 = *(_QWORD*)(result + 40);
    v4 = v2 == -1 || v3 == 0;
    if (!v4 && (*(_BYTE*)(v3 + 342) & 1) != 0) {
      v5 = (_QWORD*)result;
      v6 = *(unsigned __int8*)(*(_QWORD*)(result + 8) + 289LL);
      if (*(unsigned __int8*)(result + 56) != v6) {
        v7 = *GameData_212d168 == 3;
        if (*GameData_212d168 == 3) {
          v8 = 1;
        }
        else {
          v8 = *(_BYTE*)(*(_QWORD*)(result + 8) + 289LL);
        }
        *(_BYTE*)(result + 56) = v8;
        v9 = result + 72;
        if (((v7 | (unsigned __int8)v6) & 1) != 0) {
          v10 = 0x1.0000000000000p+0f;
        }
        else {
          v10 = 0x0.0p+0f;
        }
        v11 = snd_fnd_WeakHandle_get_alt1(v9);
        if (v11 != 0) {
          v12 = v11 - 5592;
        }
        else {
          v12 = 0;
        }
        snd_Fade_Fade_10c830_alt1((__int64)v20, 0x0.0p+0f);
        (*(void (**)(__int64, _QWORD*, float))(*(_QWORD*)(v12 + 40) + 96LL))(
            v12 + 40, v20, v10);
        snd_Fade_Destroy_Fade_alt1(v20);
        result = (__int64)v5;
      }
      v13 = *(_QWORD*)(result + 64);
      if (v13 != 0) {
        v14 = (long double*)(v13 + 48);
      }
      else {
        v14 =
            (long double*)(*(_QWORD*)(*(_QWORD*)(result + 40) + 408LL) + 304LL);
      }
      v19 = *v14;
      v15 = snd_fnd_WeakHandle_get_alt1((__int64)(v5 + 9));
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)(v15 - 5592) + 72LL))(v15 - 5592);
      v16 = v5[4];
      if (v16 != 0 && *(_QWORD*)(v16 + 8) != -1 && (v17 = v5[5]) != 0) {
        if ((*(_BYTE*)(v17 + 340) & 2) != 0) {
          return result;
        }
      }
      else {
        GameData_2235720 = 0;
      }
      result = snd_fnd_WeakHandle_isValid_alt1(v5 + 11);
      if ((result & 1) != 0) {
        v18 = snd_fnd_WeakHandle_get_alt1((__int64)(v5 + 11));
        return (*(__int64 (**)(__int64, long double, float, float))(
            *(_QWORD*)(v18 - 5592) + 72LL))(
            v18 - 5592, v19, *((float*)&v19 + 1), *((float*)&v19 + 2));
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void CharacterSound_1095750(PSEUDO_X8 x8_,
                                                       __int64 a1, char* a2,
                                                       const char* a3, float a5)
{

#pragma clang fp contract(off)
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  float v5;
  float v6;
  float v9;
  int v11;
  __int64 v12;
  const char* v13;
  double v14;
  __int64 v15;
  const char* v16;
  __int64 v17;
  char v18;
  char v19;
  _QWORD* v20;
  unsigned __int64 v21;
  unsigned __int8* v22;
  bool v23;
  _BOOL4 v24;
  unsigned __int64 v25;
  char* v26;
  unsigned __int64 v27;
  char* v28;
  __int64 v29;
  struct {
    unsigned __int8 v30;
    _BYTE v31[7];
    unsigned __int64 v32;
    unsigned __int8* v33;
  } v31_;

  v5 = *(float*)(a1 + 60);
  v6 = 0x1.0000000000000p+0f;
  if (a5 == 0x0.0p+0f) {
    a5 = 0x1.0000000000000p+0f;
  }
  v9 = a5 * v5;
  if ((float)(a5 * v5) > 0x0.0p+0f) {
    if (GameData_21d92e0 == 6 || GameData_21d92e0 == 1) {
      v11 = *(_DWORD*)(a1 + 128);
      if (v11 == 2) {
        v6 = 0x0.0p+0f;
      }
      else if (v11 == 1) {
        v12 = a1;
        v13 = a3;
        v14 = snd_getDefineValue_alt1("SetVolume_SE_Bmap_CharaSelect");
        a3 = v13;
        a1 = v12;
        v6 = *(float*)&v14 * 0x1.47ae140000000p-7f;
      }
    }
    v9 = v9 * v6;
  }
  if (v9 <= 0x0.0p+0f) {
    *(_QWORD*)a4 = 0;
    *(_DWORD*)(a4 + 8) = 0x2000;
    return;
  }
  if (GameData_21ca2f8 == 0) {
    if (GameData_2219078 != 0) {
      if ((*(_BYTE*)(*(_QWORD*)(GameData_2219078 + 56) + 8LL) & 4) == 0) {
        goto LABEL_43;
      }
    }
    else {
      if (GameData_22336e0 == 0) {
        goto LABEL_43;
      }
      v15 = a1;
      v16 = a3;
      v17 = (*(_BYTE*)(GameData_22336e0 + 280) & 1) != 0
                ? *(_QWORD*)(GameData_22336e0 + 296)
                : GameData_22336e0 + 281;
      v18 = Seq_114d520_alt1(GameData_22336e0, v17);
      a3 = v16;
      v19 = v18;
      a1 = v15;
      if ((v19 & 1) == 0) {
        goto LABEL_43;
      }
    }
  LABEL_27:
    v20 = (_QWORD*)a1;
    CharacterSound_1095a00_alt3((void*)(&v31_.v30), a1, a2, a3,
                                *(_QWORD*)(a1 + 8) + 304LL);
    if ((v31_.v30 & 1) != 0) {
      v21 = v31_.v32;
    }
    else {
      v21 = (unsigned __int64)v31_.v30 >> 1;
    }
    if (v21 == 0) {
      GameRoutine_60a020_alt1((__int64)&v31_.v30, a2);
    }
    GameRoutine_1a09ce0_alt1((__int64)&v31_.v30, "_Rain", 5u);
    if ((v31_.v30 & 1) != 0) {
      v22 = v31_.v33;
    }
    else {
      v22 = v31_.v31;
    }
    v23 = snd_hasSound_alt1(v22);
    v24 = (v31_.v30 & 1) == 0;
    if (!v23) {
      v25 = v31_.v32;
      if ((v31_.v30 & 1) == 0) {
        v25 = (unsigned __int64)v31_.v30 >> 1;
      }
      if (v25 <= 4) {
        String_60a230_alt1();
      }
      GameRoutine_a539c0_alt1(&v31_.v30, v25 - 5, 5u);
      v24 = (v31_.v30 & 1) == 0;
    }
    if (v24) {
      v26 = v31_.v31;
    }
    else {
      v26 = (char*)v31_.v33;
    }
    goto LABEL_49;
  }
  if ((*(_BYTE*)(GameData_21ca2f8 + 21) & 8) != 0) {
    goto LABEL_27;
  }
LABEL_43:
  v20 = (_QWORD*)a1;
  CharacterSound_1095a00_alt3((void*)(&v31_.v30), a1, a2, a3,
                              *(_QWORD*)(a1 + 8) + 304LL);
  v27 = v31_.v32;
  if ((v31_.v30 & 1) != 0) {
    v28 = (char*)v31_.v33;
  }
  else {
    v27 = (unsigned __int64)v31_.v30 >> 1;
    v28 = v31_.v31;
  }
  if (v27 != 0) {
    v26 = v28;
  }
  else {
    v26 = a2;
  }
LABEL_49:
  CharacterSound_1096020_alt2(v20, v26, v9);
  if ((v31_.v30 & 1) != 0 && v31_.v33 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v29, (__int64)v31_.v33);
  }
}

__attribute__((swiftcall)) void

CharacterSound_1095a00(PSEUDO_X8 x8_, __int64 a1, const char* a2,
                       const char* a3, int8x16_t* a4)
{

#pragma clang fp contract(off)
  unsigned __int8* a5 = (unsigned __int8*)PSEUDO_X8_VALUE(x8_);
  const char* v5;
  _BYTE* v8;
  unsigned __int8 v9;
  const char* v10;
  __int64 v11;
  unsigned __int8* v12;
  const char* v13;
  int v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  unsigned __int8* v17;
  __int64 v18;
  int v19;
  const char* v20;
  int v21;
  int v22;
  int v23;
  const char* v24;
  unsigned __int64 v25;
  __int64 v26;
  __int64 v27;
  bool v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;
  __int64 v33;
  __int64 v34;
  bool v35;
  const char* v36;
  __int64 v37;
  __int64 v38;
  unsigned __int8* v39;
  __int64 v40;
  const char** v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  struct {
    float32x4_t v55;
    __int64 v56;
    __int64 v57;
    char gap48_[8];
    int v58;
  } v55_;

  v5 = a2;
  *((_QWORD*)a5 + 1) = 0;
  *((_QWORD*)a5 + 2) = 0;
  *(_QWORD*)a5 = 0;
  if (strchr_alt1(a2, 60) != 0) {
    v8 = (_BYTE*)fw_memory_HeapManager_Allocate_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    v9 = a5[1];
    *((_QWORD*)a5 + 2) = v8;
    *(_QWORD*)a5 = 49;
    *((_QWORD*)a5 + 1) = 0;
    *v8 = v9;
    while (1) {
      while (1) {
        v14 = *(unsigned __int8*)v5;
        if (v14 == 60) {
          break;
        }
        if (*v5 == 0) {
          return;
        }
        v15 = *a5;
        if ((v15 & 1) == 0) {
          if ((_DWORD)v15 != 44) {
            v16 = v15 >> 1;
            v17 = a5 + 1;
            *a5 = v15 + 2;
            goto LABEL_62;
          }
          v16 = 22;
          v17 = a5 + 1;
          v18 = 48;
        LABEL_29:
          v28 = v16 == 22;
          goto LABEL_55;
        }
        v17 = *((unsigned __int8**)a5 + 2);
        v16 = (*(_QWORD*)a5 & 0xFFFFFFFFFFFFFFFELL) - 1;
        if (*((_QWORD*)a5 + 1) == v16) {
          if (v16 <= 0x7FFFFFFFFFFFFFF2LL) {
            v26 = (2 * v16) | 7;
            if (v26 == 23) {
              v27 = 26;
            }
            else {
              v27 = v26 + 1;
            }
            if (v16 >= 0xC) {
              v18 = v27;
            }
            else {
              v18 = 23;
            }
            goto LABEL_29;
          }
          v28 = false;
          v18 = -9;
        LABEL_55:
          v37 = fw_memory_HeapManager_Allocate_alt1(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v18, 16, 0);
          memmove_alt1(v37, (__int64)v17, v16);
          if (!v28 && v17 != nullptr) {
            v38 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v38 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v38, (__int64)v17);
          }
          *((_QWORD*)a5 + 2) = v37;
          v17 = (unsigned __int8*)v37;
          *(_QWORD*)a5 = v18 | 1;
          goto LABEL_61;
        }
        v16 = *((_QWORD*)a5 + 1);
      LABEL_61:
        *((_QWORD*)a5 + 1) = v16 + 1;
      LABEL_62:
        v39 = &v17[v16];
        ++v5;
        *v39 = v14;
        v39[1] = 0;
      }
      v21 = *((unsigned __int8*)v5 + 1);
      v20 = v5 + 1;
      v19 = v21;
      if (v21 == 62) {
        goto LABEL_6;
      }
      v22 = 0;
      do {
        v22 = v19 - v22 + 32 * v22;
        v23 = *(unsigned __int8*)++v20;
        v19 = v23;
      } while (v23 != 62);
      if (v22 > 191034012) {
        break;
      }
      if (v22 > 66101) {
        if (v22 == 66102) {
          v11 = strlen_alt1(a3);
          v12 = a5;
          v13 = a3;
          goto LABEL_5;
        }
        if (v22 == 72261004) {
          v32 = *(_QWORD*)(a1 + 32);
          if (v32 == 0 ||
              ((v33 = *(_QWORD*)(v32 + 8), v34 = *(_QWORD*)(a1 + 40), v33 != -1)
                   ? (v35 = v34 == 0)
                   : (v35 = true),
               v35)) {
            v13 = (const char*)&GameData_1af62c2;
            GameData_2235720 = 0;
          }
          else if ((*(_DWORD*)(v34 + 340) & 2) != 0) {
            v13 = "MB";
          }
          else {
            v13 = (const char*)&GameData_1af62c2;
          }
          v12 = a5;
          v11 = 2;
          goto LABEL_5;
        }
        goto LABEL_6;
      }
      if (v22 == -2001207891) {
        v40 = *(_QWORD*)(a1 + 40);
        v41 = *(const char***)(v40 + 392);
        v42 = *(_QWORD*)(v40 + 400);
        if (v42 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
            std___1___shared_weak_count___release_weak_alt1(v42);
          }
        }
        v10 = *v41;
        goto LABEL_4;
      }
      if (v22 == -666888105) {
        v24 = *(const char**)(a1 + 120);
        if (v24 == nullptr) {
          v49 = *(_QWORD*)(a1 + 40);
          v50 = *(_QWORD*)(v49 + 392);
          v51 = *(_QWORD*)(v49 + 400);
          if (v51 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 8), 1u,
                                      memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
              std___1___shared_weak_count___release_weak_alt1(v51);
            }
          }
          v10 = *(const char**)(v50 + 16);
        LABEL_4:
          v11 = strlen_alt1(v10);
          v12 = a5;
          v13 = v10;
          goto LABEL_5;
        }
        v25 = strlen_alt1(*(const char**)(a1 + 120));
        GameRoutine_1a09ce0_alt1((__int64)a5, v24, v25);
        *(_QWORD*)(a1 + 120) = 0;
        v5 = v20 + 1;
      }
      else {
      LABEL_6:
        v5 = v20 + 1;
      }
    }
    if (v22 > 2109972008) {
      if (v22 == 2109972009) {
        v46 = *(_QWORD*)(a1 + 40);
        v47 = *(_QWORD*)(v46 + 392);
        v48 = *(_QWORD*)(v46 + 400);
        if (v48 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
            std___1___shared_weak_count___release_weak_alt1(v48);
          }
        }
        v10 = *(const char**)(v47 + 8);
        goto LABEL_4;
      }
      if (v22 == 2141373863) {
        v55_.v56 = 0;
        v55_.v57 = 0;
        v55_.v55 = (__typeof__(v55_.v55)){0};
        if ((GameRoutine_109e190_alt1(&v55_.v55, a4) & 1) != 0) {
          v36 = *(const char**)(GroundAttributeFile_60b080_alt1(v55_.v58) + 40);
          if (*GameData_212ce90[0] != 0) {
            if ((*(_BYTE*)(*GameData_212ce90[0] + 21) & 8) == 0) {
              goto LABEL_101;
            }
          LABEL_94:
            if (strcmp_alt1(v36, "Dirt") != 0) {
              if (strcmp_alt1(v36, "Grass") != 0) {
                if (strcmp_alt1(v36, "Stone") == 0) {
                  v36 = "StoneWet";
                }
              }
              else {
                v36 = "GrassWet";
              }
            }
            else {
              v36 = "DirtWet";
            }
          }
          else if (GameData_2219078 != 0) {
            if ((*(_BYTE*)(*(_QWORD*)(GameData_2219078 + 56) + 8LL) & 4) != 0) {
              goto LABEL_94;
            }
          }
          else if (GameData_22336e0 != 0) {
            v52 = (*(_BYTE*)(GameData_22336e0 + 280) & 1) != 0
                      ? *(_QWORD*)(GameData_22336e0 + 296)
                      : GameData_22336e0 + 281;
            if ((Seq_114d520_alt1(GameData_22336e0, v52) & 1) != 0) {
              goto LABEL_94;
            }
          }
        LABEL_101:
          v11 = strlen_alt1(v36);
          v12 = a5;
          v13 = v36;
        }
        else {
          v12 = a5;
          v13 = "None";
          v11 = 4;
        }
      LABEL_5:
        GameRoutine_1a09ce0_alt1((__int64)v12, v13, v11);
        goto LABEL_6;
      }
    }
    else if (v22 == 191034013) {
      v43 = *(_QWORD*)(a1 + 40);
      v44 = *(_QWORD*)(v43 + 392);
      v45 = *(_QWORD*)(v43 + 400);
      if (v45 != 0 &&
          (atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 8), 1u,
                                     memory_order_relaxed),
           atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                            0xFFFFFFFFFFFFFFFFLL) == 0)) {
        (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
        std___1___shared_weak_count___release_weak_alt1(v45);
        v10 = *(const char**)(v44 + 11720);
        if (v10 != nullptr) {
          goto LABEL_4;
        }
      }
      else {
        v10 = *(const char**)(v44 + 11720);
        if (v10 != nullptr) {
          goto LABEL_4;
        }
      }
    }
    else if (v22 == 926002810) {
      v29 = *(_QWORD*)(a1 + 40);
      v30 = *(_QWORD*)(v29 + 392);
      v31 = *(_QWORD*)(v29 + 400);
      if (v31 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
          std___1___shared_weak_count___release_weak_alt1(v31);
        }
      }
      v10 = *(const char**)(v30 + 24);
      goto LABEL_4;
    }
    goto LABEL_6;
  }
}

__int64 CharacterSound_1096020(__int64 a1, _BYTE* a2, float a3)
{
  __int64 v6;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  _BYTE v12[200];

  if (a2 == nullptr || *a2 != 86) {
    goto LABEL_13;
  }
  v6 = *(_QWORD*)(a1 + 32);
  if (v6 == 0 || ((v7 = *(_QWORD*)(v6 + 8), v8 = *(_QWORD*)(a1 + 40), v7 != -1)
                      ? (v9 = v8 == 0)
                      : (v9 = true),
                  v9)) {
    GameData_2235720 = 0;
  }
  else if ((*(_BYTE*)(v8 + 340) & 2) != 0) {
    goto LABEL_13;
  }
  if ((snd_fnd_WeakHandle_isValid(a1 + 88) & 1) == 0) {
  LABEL_13:
    snd_Fade_Fade_10c830(v12, 0.0f);
    v10 = a1 + 72;
    goto LABEL_14;
  }
  snd_Fade_Fade_10c830(v12, 0.0f);
  v10 = a1 + 88;
LABEL_14:
  snd_play_ff3e0(&GameData_1a9f09e, a2, v10, v12, 0, 0, 0, 0.0f, a3);
  return snd_Fade_Destroy_Fade(v12);
}

__attribute__((swiftcall)) void CharacterSound_1096110(PSEUDO_X8 x8_,
                                                       __int64 a1, char* a2,
                                                       const char* a3,
                                                       __int64 a4, float a6)
{

#pragma clang fp contract(off)
  __int64 a5 = (__int64)PSEUDO_X8_VALUE(x8_);
  float v7;
  float v8;
  int v10;
  __int64 v11;
  __int64 v12;
  char* v13;
  const char* v14;
  double v15;
  char* v16;
  __int64 v17;
  unsigned __int64 v18;
  float v19;
  float v20;
  char* v21;
  __int64 v22;
  __int128 v23;
  _QWORD v24[25];
  struct {
    unsigned __int8 v25;
    _BYTE v26[15];
    char* v27;
  } v25_;

  v7 = a6 * *(float*)(a1 + 60);
  if (v7 > 0x0.0p+0f) {
    v8 = 0x1.0000000000000p+0f;
    if (*GameData_212d168 == 6 || *GameData_212d168 == 1) {
      v10 = *(_DWORD*)(a1 + 128);
      if (v10 == 2) {
        v8 = 0x0.0p+0f;
      }
      else if (v10 == 1) {
        v11 = a1;
        v12 = a4;
        v13 = a2;
        v14 = a3;
        v15 = snd_getDefineValue_alt1("SetVolume_SE_Bmap_CharaSelect");
        a1 = v11;
        a3 = v14;
        a2 = v13;
        a4 = v12;
        v8 = *(float*)&v15 * 0x1.47ae140000000p-7f;
      }
    }
    v7 = v7 * v8;
  }
  if (v7 <= 0x0.0p+0f) {
    *(_QWORD*)a5 = 0;
    *(_DWORD*)(a5 + 8) = 0x2000;
  }
  else {
    v16 = a2;
    v17 = a4;
    CharacterSound_1095a00_alt3((void*)(&v25_.v25), a1, a2, a3, a4);
    v18 = *(_QWORD*)&v25_.v26[7];
    v23 = *(_OWORD*)v17;
    LODWORD(v19) = HIDWORD(*(_QWORD*)v17);
    LODWORD(v20) = *(_QWORD*)(v17 + 8);
    if ((v25_.v25 & 1) != 0) {
      v21 = v25_.v27;
    }
    else {
      v18 = (unsigned __int64)v25_.v25 >> 1;
      v21 = v25_.v26;
    }
    if (v18 != 0) {
      v16 = v21;
    }
    snd_Fade_Fade_10c830_alt1((__int64)v24, 0x0.0p+0f);
    snd_playAt_ff4e0((__int64)&GameData_1a9f09e, (__int64)v16, (__int64)v24, 0,
                     0x10001u, 0, *(float*)&v23, v19, v20, 0x0.0p+0f, v7);
    snd_Fade_Destroy_Fade_alt1(v24);
    if ((v25_.v25 & 1) != 0 && v25_.v27 != nullptr) {
      v22 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v22 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v22, (__int64)v25_.v27);
    }
  }
}

__attribute__((swiftcall)) void CharacterSound_10962d0(PSEUDO_X8 x8_,
                                                       __int64 a1, __int64 a2,
                                                       unsigned __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v7;
  __int64 v8;
  bool v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  bool v15;
  __int64* v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  struct {
    char v20[16];
    __int64 v21;
  } v20_;

  v5 = *(_QWORD*)(a1 + 32);
  if (v5 == 0 || ((v7 = *(_QWORD*)(v5 + 8), v8 = *(_QWORD*)(a1 + 40), v7 != -1)
                      ? (v9 = v8 == 0)
                      : (v9 = true),
                  v9)) {
    GameData_2235720 = 0;
    goto LABEL_8;
  }
  if ((*(_BYTE*)(v8 + 340) & 2) == 0 || (v14 = a3 - 10, a3 < 0xA) ||
      (*(_QWORD*)a2 == 0x4C5F5443415F4553LL
           ? (v15 = *(unsigned __int16*)(a2 + 8) == 24388)
           : (v15 = false),
       !v15)) {
  LABEL_8:
    if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
      String_60a1d0_alt1();
    }
    if (a3 >= 0x17) {
      v11 = a2;
      if ((a3 | 7) == 0x17) {
        v12 = 26;
      }
      else {
        v12 = (a3 | 7) + 1;
      }
      v13 = fw_memory_HeapManager_Allocate_alt1(fw_memory_g_heap_manager, v12,
                                                16, 0);
      a2 = v11;
      a4[1] = a3;
      a4[2] = v13;
      *a4 = v12 | 1;
      v10 = v13;
    }
    else {
      *(_BYTE*)a4 = 2 * a3;
      v10 = (__int64)a4 + 1;
      if (a3 == 0) {
        goto LABEL_17;
      }
    }
    memmove_alt1(v10, a2, a3);
  LABEL_17:
    *(_BYTE*)(v10 + a3) = 0;
    return;
  }
  v20_.v20[0] = 20;
  strcpy(&v20_.v20[1], "SE_ACT_MB_");
  v16 = (__int64*)GameRoutine_1a09ce0_alt1((__int64)v20_.v20,
                                           (const char*)(a2 + 10), v14);
  if ((*(_BYTE*)v16 & 1) != 0) {
    fw_text_String_CopyTerminated_alt1(a4, v16[2], v16[1]);
  }
  else {
    v17 = *v16;
    v18 = v16[2];
    a4[1] = v16[1];
    a4[2] = v18;
    *a4 = v17;
  }
  if ((v20_.v20[0] & 1) != 0 && v20_.v21 != 0) {
    v19 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v19 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v20_.v21);
  }
}

__int64 CharacterSound_Destructor(_QWORD* a1)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 result;

  *a1 = game_character_CharacterSound_vtable;
  v2 = (__int64)(a1 + 9);
  if ((snd_fnd_WeakHandle_isValid_alt1(a1 + 9) & 1) != 0) {
    Crc32List_11ec20_alt1(*GameData_212e248[0], v2, 0);
  }
  v3 = a1[4];
  if (v3 == 0 ||
      ((v4 = *(_QWORD*)(v3 + 8), v5 = a1[5], v4 != -1) ? (v6 = v5 == 0)
                                                       : (v6 = true),
       v6)) {
    GameData_2235720 = 0;
  }
  else if ((*(_BYTE*)(v5 + 340) & 2) != 0) {
    goto LABEL_13;
  }
  if ((snd_fnd_WeakHandle_isValid_alt1(a1 + 11) & 1) != 0) {
    Crc32List_11ec20_alt1(*GameData_212e248[0], (__int64)(a1 + 11), 0);
  }
LABEL_13:
  a1[8] = 0;
  result = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (result != 0) {
    return std___1___shared_weak_count___release_weak_alt1(result);
  }
  return result;
}

#pragma GCC visibility pop
