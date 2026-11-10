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
__int64 CharacterSound_Unknown7(__int64 result, long double a2);
__int64 CharacterSound_1096020(__int64 a1, _BYTE* a2, float a3);
__n128 CharacterSound_Destructor(_QWORD* a1);
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
__attribute__((swiftcall)) void CharacterSound_1095750(PSEUDO_X8 x8_,
                                                       __int64 result, char* a2,
                                                       __int64 a3,
                                                       long double a5);
__attribute__((swiftcall)) void
CharacterSound_1095a00(PSEUDO_X8 x8_, _QWORD* a1, unsigned __int8* a2,
                       const char* a3, __int64 a4);
__attribute__((swiftcall)) void CharacterSound_10962d0(PSEUDO_X8 x8_,
                                                       __int64* result,
                                                       __int64 a2,
                                                       unsigned __int64 a3);

__int64 CharacterSound_Unknown7(__int64 result, long double a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 v6;
  int v7;
  bool v8;
  char v9;
  __int64 v10;
  float v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  long double* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  long double v19;
  __int64 v20;
  long double v21;
  _BYTE v22[200];

  v2 = *(_QWORD*)(result + 32);
  if (v2 != 0) {
    v3 = *(_QWORD*)(v2 + 8);
    v4 = *(_QWORD*)(result + 40);
    v5 = v3 == -1 || v4 == 0;
    if (!v5 && (*(_BYTE*)(v4 + 342) & 1) != 0) {
      v6 = result;
      v7 = *(unsigned __int8*)(*(_QWORD*)(result + 8) + 289LL);
      if (*(unsigned __int8*)(result + 56) != v7) {
        *(_QWORD*)&a2 = 0;
        v8 = *GameData_212d168 == 3;
        if (*GameData_212d168 == 3) {
          v9 = 1;
        }
        else {
          v9 = *(_BYTE*)(*(_QWORD*)(result + 8) + 289LL);
        }
        *(_BYTE*)(result + 56) = v9;
        v10 = result + 72;
        if (((v8 | (unsigned __int8)v7) & 1) != 0) {
          v11 = 1.0;
        }
        else {
          v11 = 0.0;
        }
        v12 = snd_fnd_WeakHandle_get(v10, a2);
        if (v12 != 0) {
          v13 = v12 - 5592;
        }
        else {
          v13 = 0;
        }
        snd_Fade_Fade_10c830(v22, 0.0);
        (*(void (**)(__int64, _BYTE*, float))(*(_QWORD*)(v13 + 40) + 96LL))(
            v13 + 40, v22, v11);
        snd_Fade_Destroy_Fade(v22);
        result = v6;
      }
      v14 = *(_QWORD*)(result + 64);
      if (v14 != 0) {
        v15 = (long double*)(v14 + 48);
      }
      else {
        v15 =
            (long double*)(*(_QWORD*)(*(_QWORD*)(result + 40) + 408LL) + 304LL);
      }
      v21 = *v15;
      v16 = snd_fnd_WeakHandle_get(v6 + 72, *v15);
      result =
          (*(__int64 (**)(__int64))(*(_QWORD*)(v16 - 5592) + 72LL))(v16 - 5592);
      v17 = *(_QWORD*)(v6 + 32);
      if (v17 != 0 && *(_QWORD*)(v17 + 8) != -1 &&
          (v18 = *(_QWORD*)(v6 + 40)) != 0) {
        if ((*(_BYTE*)(v18 + 340) & 2) != 0) {
          return result;
        }
      }
      else {
        GameData_2235720 = 0;
      }
      result = snd_fnd_WeakHandle_isValid(v6 + 88);
      if ((result & 1) != 0) {
        v20 = snd_fnd_WeakHandle_get(v6 + 88, v19);
        return (*(__int64 (**)(__int64, long double, float, float))(
            *(_QWORD*)(v20 - 5592) + 72LL))(
            v20 - 5592, v21, *((float*)&v21 + 1), *((float*)&v21 + 2));
      }
    }
  }
  return result;
}

__attribute__((swiftcall)) void CharacterSound_1095750(PSEUDO_X8 x8_,
                                                       __int64 result, char* a2,
                                                       __int64 a3,
                                                       long double a5)
{
  __int64 a4 = (__int64)PSEUDO_X8_VALUE(x8_);
  float v5;
  float v6;
  float v9;
  int v11;
  __int64 v12;
  __int64 v13;
  float v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  char v18;
  char v19;
  __int64 v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  _BOOL4 v24;
  unsigned __int64 v25;
  char* v26;
  unsigned __int64 v27;
  char* v28;
  __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  char* v32;

  v5 = *(float*)(result + 60);
  v6 = 1.0;
  if (*(float*)&a5 == 0.0) {
    *(float*)&a5 = 1.0;
  }
  v9 = *(float*)&a5 * v5;
  if ((float)(*(float*)&a5 * v5) > 0.0) {
    if (GameData_21d92e0 == 6 || GameData_21d92e0 == 1) {
      v11 = *(_DWORD*)(result + 128);
      if (v11 == 2) {
        v6 = 0.0;
      }
      else if (v11 == 1) {
        v12 = result;
        v13 = a3;
        v14 = snd_getDefineValue("SetVolume_SE_Bmap_CharaSelect", a5);
        a3 = v13;
        result = v12;
        v6 = v14 * 0x1.47ae140000000p-7;
      }
    }
    v9 = v9 * v6;
  }
  if (v9 <= 0.0) {
    *(_QWORD*)a4 = 0;
    *(_DWORD*)(a4 + 8) = 0x2000;
    {
      result;
      return;
    }
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
      v15 = result;
      v16 = a3;
      v17 = (*(_BYTE*)(GameData_22336e0 + 280) & 1) != 0
                ? *(_QWORD*)(GameData_22336e0 + 296)
                : GameData_22336e0 + 281;
      v18 = Seq_114d520(GameData_22336e0, v17);
      a3 = v16;
      v19 = v18;
      result = v15;
      if ((v19 & 1) == 0) {
        goto LABEL_43;
      }
    }
  LABEL_27:
    v20 = result;
    CharacterSound_1095a00_alt1((void*)(&v30), result, a2, a3,
                                *(_QWORD*)(result + 8) + 304LL);
    if ((v30 & 1) != 0) {
      v21 = v31;
    }
    else {
      v21 = (unsigned __int64)(unsigned __int8)v30 >> 1;
    }
    if (v21 == 0) {
      GameRoutine_60a020(&v30);
    }
    GameRoutine_1a09ce0(&v30, "_Rain", 5);
    if ((v30 & 1) != 0) {
      v22 = v32;
    }
    else {
      v22 = (char*)&v30 + 1;
    }
    v23 = snd_hasSound(v22);
    v24 = (v30 & 1) == 0;
    if ((v23 & 1) == 0) {
      v25 = v31;
      if ((v30 & 1) == 0) {
        v25 = (unsigned __int64)(unsigned __int8)v30 >> 1;
      }
      if (v25 <= 4) {
        String_60a230(v23);
      }
      GameRoutine_a539c0(&v30, v25 - 5, 5);
      v24 = (v30 & 1) == 0;
    }
    if (v24) {
      v26 = (char*)&v30 + 1;
    }
    else {
      v26 = v32;
    }
    goto LABEL_49;
  }
  if ((*(_BYTE*)(GameData_21ca2f8 + 21) & 8) != 0) {
    goto LABEL_27;
  }
LABEL_43:
  v20 = result;
  CharacterSound_1095a00_alt1((void*)(&v30), result, a2, a3,
                              *(_QWORD*)(result + 8) + 304LL);
  v27 = v31;
  if ((v30 & 1) != 0) {
    v28 = v32;
  }
  else {
    v27 = (unsigned __int64)(unsigned __int8)v30 >> 1;
    v28 = (char*)&v30 + 1;
  }
  if (v27 != 0) {
    v26 = v28;
  }
  else {
    v26 = a2;
  }
LABEL_49:
  result = CharacterSound_1096020_alt1(v20, v26, v9);
  if ((v30 & 1) != 0 && v32 != nullptr) {
    v29 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v29 = 56;
    }
    {
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v29);
      return;
    }
  }
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

CharacterSound_1095a00(PSEUDO_X8 x8_, _QWORD* a1, unsigned __int8* a2,
                       const char* a3, __int64 a4)
{
  unsigned __int8* a5 = (unsigned __int8*)PSEUDO_X8_VALUE(x8_);
  unsigned __int8* v5;
  unsigned __int8* v8;
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
  unsigned __int8* v20;
  int v21;
  int v22;
  int v23;
  __int64 v24;
  __int64 v25;
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
  _QWORD v55[5];
  unsigned int v56;

  v5 = a2;
  *((_QWORD*)a5 + 1) = 0;
  *((_QWORD*)a5 + 2) = 0;
  *(_QWORD*)a5 = 0;
  if (strchr(a2, 60) != 0) {
    v8 = (unsigned __int8*)fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 48, 16, 0);
    v9 = a5[1];
    *((_QWORD*)a5 + 2) = v8;
    *(_QWORD*)a5 = 49;
    *((_QWORD*)a5 + 1) = 0;
    *v8 = v9;
    while (1) {
      while (1) {
        v14 = *v5;
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
          v37 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v18, 16, 0);
          memmove(v37, v17, v16);
          if (!v28 && v17 != nullptr) {
            v38 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v38 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v38);
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
      v21 = v5[1];
      v20 = v5 + 1;
      v19 = v21;
      if (v21 == 62) {
        goto LABEL_6;
      }
      v22 = 0;
      do {
        v22 = v19 - v22 + 32 * v22;
        v23 = *++v20;
        v19 = v23;
      } while (v23 != 62);
      if (v22 > 191034012) {
        break;
      }
      if (v22 > 66101) {
        if (v22 == 66102) {
          v11 = strlen(a3);
          v12 = a5;
          v13 = a3;
          goto LABEL_5;
        }
        if (v22 == 72261004) {
          v32 = a1[4];
          if (v32 == 0 || ((v33 = *(_QWORD*)(v32 + 8), v34 = a1[5], v33 != -1)
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
        v40 = a1[5];
        v41 = *(const char***)(v40 + 392);
        v42 = *(_QWORD*)(v40 + 400);
        if (v42 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
            std___1___shared_weak_count___release_weak(v42);
          }
        }
        v10 = *v41;
        goto LABEL_4;
      }
      if (v22 == -666888105) {
        v24 = a1[15];
        if (v24 == 0) {
          v49 = a1[5];
          v50 = *(_QWORD*)(v49 + 392);
          v51 = *(_QWORD*)(v49 + 400);
          if (v51 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v51 + 8), 1u,
                                      memory_order_relaxed);
            if (atomic_fetch_add((atomic_ullong* volatile)(v51 + 8),
                                 0xFFFFFFFFFFFFFFFFLL) == 0) {
              (*(void (**)(__int64))(*(_QWORD*)v51 + 16LL))(v51);
              std___1___shared_weak_count___release_weak(v51);
            }
          }
          v10 = *(const char**)(v50 + 16);
        LABEL_4:
          v11 = strlen(v10);
          v12 = a5;
          v13 = v10;
          goto LABEL_5;
        }
        v25 = strlen(a1[15]);
        GameRoutine_1a09ce0(a5, v24, v25);
        a1[15] = 0;
        v5 = v20 + 1;
      }
      else {
      LABEL_6:
        v5 = v20 + 1;
      }
    }
    if (v22 > 2109972008) {
      if (v22 == 2109972009) {
        v46 = a1[5];
        v47 = *(_QWORD*)(v46 + 392);
        v48 = *(_QWORD*)(v46 + 400);
        if (v48 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v48 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v48 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v48 + 16LL))(v48);
            std___1___shared_weak_count___release_weak(v48);
          }
        }
        v10 = *(const char**)(v47 + 8);
        goto LABEL_4;
      }
      if (v22 == 2141373863) {
        memset(v55, 0, 32);
        if ((GameRoutine_109e190(v55, a4) & 1) != 0) {
          v36 = *(const char**)(GroundAttributeFile_60b080(v56) + 40);
          if (*GameData_212ce90[0] != 0) {
            if ((*(_BYTE*)(*GameData_212ce90[0] + 21) & 8) == 0) {
              goto LABEL_101;
            }
          LABEL_94:
            if ((unsigned int)strcmp(v36, "Dirt") != 0) {
              if ((unsigned int)strcmp(v36, "Grass") != 0) {
                if ((unsigned int)strcmp(v36, "Stone") == 0) {
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
            if ((Seq_114d520(GameData_22336e0, v52) & 1) != 0) {
              goto LABEL_94;
            }
          }
        LABEL_101:
          v11 = strlen(v36);
          v12 = a5;
          v13 = v36;
        }
        else {
          v12 = a5;
          v13 = "None";
          v11 = 4;
        }
      LABEL_5:
        GameRoutine_1a09ce0(v12, v13, v11);
        goto LABEL_6;
      }
    }
    else if (v22 == 191034013) {
      v43 = a1[5];
      v44 = *(_QWORD*)(v43 + 392);
      v45 = *(_QWORD*)(v43 + 400);
      if (v45 != 0 &&
          (atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 8), 1u,
                                     memory_order_relaxed),
           atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                            0xFFFFFFFFFFFFFFFFLL) == 0)) {
        (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
        std___1___shared_weak_count___release_weak(v45);
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
      v29 = a1[5];
      v30 = *(_QWORD*)(v29 + 392);
      v31 = *(_QWORD*)(v29 + 400);
      if (v31 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v31 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v31 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v31 + 16LL))(v31);
          std___1___shared_weak_count___release_weak(v31);
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

__attribute__((swiftcall)) void CharacterSound_10962d0(PSEUDO_X8 x8_,
                                                       __int64* result,
                                                       __int64 a2,
                                                       unsigned __int64 a3)
{
  __int64* a4 = (__int64*)PSEUDO_X8_VALUE(x8_);
  __int64 v5;
  __int64 v7;
  __int64 v8;
  bool v9;
  char* v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  char v19[16];
  __int64 v20;

  v5 = result[4];
  if (v5 == 0 ||
      ((v7 = *(_QWORD*)(v5 + 8), v8 = result[5], v7 != -1) ? (v9 = v8 == 0)
                                                           : (v9 = true),
       v9)) {
    GameData_2235720 = 0;
  }
  else if ((*(_BYTE*)(v8 + 340) & 2) != 0) {
    v14 = a3 - 10;
    if (a3 >= 0xA && *(_QWORD*)a2 == 0x4C5F5443415F4553LL &&
        *(_WORD*)(a2 + 8) == 24388) {
      v19[0] = 20;
      strcpy(&v19[1], "SE_ACT_MB_");
      result = (__int64*)GameRoutine_1a09ce0(v19, a2 + 10, v14);
      if ((*(_BYTE*)result & 1) != 0) {
        result =
            (__int64*)fw_text_String_CopyTerminated(a4, result[2], result[1]);
      }
      else {
        v16 = *result;
        v17 = result[2];
        a4[1] = result[1];
        a4[2] = v17;
        *a4 = v16;
      }
      if ((v19[0] & 1) != 0 && v20 != 0) {
        v18 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v18 = 56;
        }
        {
          (__int64*)nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v18);
          return;
        }
      }
      {
        result;
        return;
      }
    }
  }
  if (a3 >= 0xFFFFFFFFFFFFFFF7LL) {
    String_60a1d0(result);
  }
  if (a3 >= 0x17) {
    v11 = a2;
    if ((a3 | 7) == 0x17) {
      v12 = 26;
    }
    else {
      v12 = (a3 | 7) + 1;
    }
    v13 = fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v12, 16, 0);
    a2 = v11;
    a4[1] = a3;
    a4[2] = v13;
    *a4 = v12 | 1;
    v10 = (char*)v13;
  }
  else {
    *(_BYTE*)a4 = 2 * a3;
    v10 = (char*)a4 + 1;
    if (a3 == 0) {
      goto LABEL_17;
    }
  }
  result = (__int64*)memmove(v10, a2, a3);
LABEL_17:
  v10[a3] = 0;
  {
    result;
    return;
  }
}

__n128 CharacterSound_Destructor(_QWORD* a1)
{
  _QWORD* v2;
  __n128 result;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;

  *a1 = game_character_CharacterSound_vtable;
  v2 = a1 + 9;
  if ((snd_fnd_WeakHandle_isValid(a1 + 9) & 1) != 0) {
    Crc32List_11ec20(*GameData_212e248[0], v2, 0);
  }
  v4 = a1[4];
  if (v4 == 0 ||
      ((v5 = *(_QWORD*)(v4 + 8), v6 = a1[5], v5 != -1) ? (v7 = v6 == 0)
                                                       : (v7 = true),
       v7)) {
    GameData_2235720 = 0;
  }
  else if ((*(_BYTE*)(v6 + 340) & 2) != 0) {
    goto LABEL_13;
  }
  if ((snd_fnd_WeakHandle_isValid(a1 + 11) & 1) != 0) {
    Crc32List_11ec20(*GameData_212e248[0], a1 + 11, 0);
  }
LABEL_13:
  a1[8] = 0;
  v8 = a1[4];
  *a1 = &game_character_CharacterBaseModule_vtable;
  if (v8 != 0) {
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

#pragma GCC visibility pop
