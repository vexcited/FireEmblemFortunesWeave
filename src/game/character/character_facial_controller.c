#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 CharacterTrailModule_d3d7a0(_QWORD, _QWORD, _QWORD);
__int64 CharacterTrailModule_d3d960(void);
__int64 FileManager_10e120(_QWORD, _QWORD);
__int64 GameRoutine_10adb80(_QWORD, _QWORD, long double);
__int64 GameRoutine_10b39a0(_QWORD);
__int64 GameRoutine_118ff0(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern _UNKNOWN GameData_1a8e4ab;
extern _UNKNOWN GameData_1aa1728;
extern _UNKNOWN GameData_1abbaec;
extern _UNKNOWN GameData_1af6361;
extern __int64 (*GameData_2008fd0[])();
extern __int64 (*game_character_CharacterBaseModule_vtable)();
extern __int64 (*game_character_CharacterFacialController_vtable[])();
extern __int64 (*kaneko_WPHolder_vtable[])();
extern __int64 GameData_2265eb0;
extern int GameData_21d92e0;
extern int GameData_2235720;
void GameRoutine_10b2280(__int64, unsigned int, float);
void CharacterFacialController_10b2650(__int64 a1, int a2, __n128 a3);
void CharacterFacialController_10b2950(__int64 a1, __int64 a2, __n128 a3);
__int64 CharacterFacialController_10b2a20(__int64 result);
__n128 CharacterFacialController_Destructor(__int64 a1);
_QWORD* GameRoutine_10a0100(_QWORD* result, __int64);
__int64 CharacterFacialController_10b4280(__int64 result, float);
__int64 GameRoutine_10b3cb0(_QWORD, _QWORD);
__int64 MaterialAnimModule_be7090(float);
__int64 Model_a661a0(__int64, int, __int64, int);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 nn_os_ConvertToTimeSpan(_QWORD, long double);
__int64 nn_os_LockMutex(_QWORD);
__int64 nn_os_UnlockMutex(_QWORD);
__int64 snd_fnd_WeakHandle_isValid(__int64*);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
extern _UNKNOWN* GameData_212eaa0;
extern _UNKNOWN game_g_random_mutex;
extern __int64 (*GameData_1fc0970[])();
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_212d270;
extern __int64 GameData_21d8778;
extern __int64 GameData_21ec7b0;
extern __int64 game_script_hub_g_frame_counter;
extern int* GameData_212ea98;
float* GameRoutine_a1b580(__int64, float);
float GameRoutine_109d070();
float GameRoutine_a5e890(float, float);
float powf(_QWORD, float, float);
void CharacterFacialController_10b2650_alt1(__int64, int) __asm__(
    "CharacterFacialController_10b2650");
void GameRoutine_10b3d80(__int64, double);
void __attribute__((noreturn)) String_60a250(_QWORD);
void CharacterFacialController_10b2280(__int64 a1, unsigned int a2, float a3);
void CharacterFacialController_Unknown5(__int64 a1);
float CharacterFacialController_10b3f60(__int64 a1, char a2, float result);
void CharacterFacialController_10b4440(float* a1, char a2, long double a3);

void CharacterFacialController_10b2280(__int64 a1, unsigned int a2, float a3)
{
  __int64 v3;
  __int64 v5;
  __int64 v6;
  float v7;
  unsigned int v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _BOOL4 v12;
  float v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int8 explicit;
  int* v18;
  int v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  int v24;
  float v25;
  signed int v26;
  __int64* v27;
  int v28;
  unsigned int v29;
  unsigned int v30;
  int v31;
  unsigned int v32;
  float v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  float v36;
  __int64 v37;
  float v38;
  __int64* v39;
  int v40;
  unsigned int v41;
  unsigned int v42;
  int v43;
  unsigned int v44;
  float v45;
  float v46;
  float v47;
  float v48;
  __int64* v49;
  int v50;
  unsigned int v51;
  unsigned int v52;
  int v53;
  unsigned int v54;
  float v55;
  int v56;
  __int64 v57;

  if (*(_DWORD*)(a1 + 96) == 0) {
    v3 = *(_QWORD*)(a1 + 40);
    v6 = *(_QWORD*)(v3 + 392);
    v5 = *(_QWORD*)(v3 + 400);
    if (v5 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v5 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        v7 = a3;
        v8 = a2;
        (*(void (**)(__int64))(*(_QWORD*)v5 + 16LL))(v5);
        std___1___shared_weak_count___release_weak(v5);
        a3 = v7;
        a2 = v8;
      }
    }
    if (a2 >= 0x18) {
      String_60a250("array::at");
    }
    v9 = *(_QWORD*)(a1 + 136);
    v10 = v6 + 424LL * a2 + 1432;
    v11 = *(_QWORD*)(a1 + 152);
    if (v9 == 0 || v11 != v10) {
      v12 = false;
      if (v9 != 0 && v11 != 0) {
        v12 = *(float*)(v11 + 12) > 0.0;
      }
      v13 = a3;
      if ((GameRoutine_10b3cb0(a1 + 120, v10) & 1) != 0) {
        v14 = *(unsigned __int8*)(v10 + 400);
        v15 = (v14 & 1) != 0 ? *(_QWORD*)(v10 + 408) : v14 >> 1;
        if (v15 != 0) {
          v16 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 416LL);
          if (v16 != 0) {
            explicit = atomic_load_explicit(
                (atomic_uchar* volatile)GameData_212eaa0, memory_order_acquire);
            v18 = GameData_212ea98;
            if ((explicit & 1) == 0) {
              v57 = v16;
              v56 = __cxa_guard_acquire(GameData_212eaa0);
              v18 = GameData_212ea98;
              v16 = v57;
              if (v56 != 0) {
                *GameData_212ea98 = wld_Crc32(0, "MaterialAnimModule", 18);
                __cxa_guard_release(GameData_212eaa0);
                v18 = GameData_212ea98;
                v16 = v57;
              }
            }
            v19 = *v18;
            v21 = *(_QWORD*)(v16 + 504);
            v20 = *(_QWORD*)(v16 + 512);
            v22 = v20;
            v23 = v20;
            while (v23 != v21) {
              v24 = *(_DWORD*)(v23 - 16);
              v23 -= 16;
              v22 -= 16;
              if (v24 == v19) {
                if (v20 != v22 && *(_QWORD*)(v22 + 8) != 0) {
                  MaterialAnimModule_be7090(
                      *(float*)(*(_QWORD*)GameData_212d270 + 356LL));
                }
                break;
              }
            }
          }
        }
      }
      v25 = v13;
      if (!v12) {
        goto LABEL_27;
      }
      if (*(float*)(v10 + 12) <= 0.0) {
        goto LABEL_27;
      }
      v26 = *(_DWORD*)(*(_QWORD*)GameData_212d270 + 352LL);
      nn_os_LockMutex(&game_g_random_mutex);
      v27 = game_map_MapRandom_instance__ptr[0];
      v28 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v29 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v30 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v27 + 1) = v28;
      v31 = (v30 >> 8) ^ (v29 >> 19) ^ v30 ^ v29;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v27) = v29;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v27 + 4) = v31;
      v32 = v31 & 0x7FFFFFFF;
      nn_os_UnlockMutex(&game_g_random_mutex);
      v25 = v13;
      v33 = 0.0;
      if (v26 <= (int)(v32 % 0x64)) {
      LABEL_27:
        v34 = *(unsigned __int8*)(v10 + 112);
        if ((v34 & 1) != 0) {
          v35 = *(_QWORD*)(v10 + 120);
        }
        else {
          v35 = v34 >> 1;
        }
        if (v35 != 0) {
          v36 = *(float*)(v10 + 12);
        }
        else {
          v36 = 0.0;
        }
        if (v36 == 0.0) {
          v33 = 0x1.fffffe0000000p+127;
        }
        else {
          v37 = *(_QWORD*)GameData_212d270;
          if (v25 == 0.0) {
            v38 = *(float*)(v37 + 348);
            nn_os_LockMutex(&game_g_random_mutex);
            v39 = game_map_MapRandom_instance__ptr[0];
            v40 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL));
            v41 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
            v42 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                  (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
            *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
            *((_DWORD*)v39 + 1) = v40;
            v43 = (v42 >> 8) ^ (v41 >> 19) ^ v42 ^ v41;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v39) = v41;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v39 + 4) = v43;
            v44 = v43 & 0x7FFFFFFF;
            nn_os_UnlockMutex(&game_g_random_mutex);
            v45 = (double)v44 / 0x1.fffffffc00000p+30;
            v46 = (float)(v38 * v45) + 0.0;
          }
          else {
            v47 = *(float*)(v37 + 344);
            v48 = *(float*)(v37 + 348);
            nn_os_LockMutex(&game_g_random_mutex);
            v49 = game_map_MapRandom_instance__ptr[0];
            v50 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL));
            v51 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                             (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
            v52 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
                  (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
            *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
                *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
            *((_DWORD*)v49 + 1) = v50;
            v53 = (v52 >> 8) ^ (v51 >> 19) ^ v52 ^ v51;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v49) = v51;
            *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v49 + 4) = v53;
            v54 = v53 & 0x7FFFFFFF;
            nn_os_UnlockMutex(&game_g_random_mutex);
            v55 = (double)v54 / 0x1.fffffffc00000p+30;
            v46 = v47 + (float)((float)(v48 - v47) * v55);
          }
          v33 = v46 / v36;
        }
      }
      *(float*)(a1 + 352) = v33;
    }
  }
}

void CharacterFacialController_10b2650(__int64 a1, int a2, __n128 a3)
{
  __int64 v3;
  __int64 v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  void* v12;
  unsigned int v13;
  __int64 v14;
  float v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  void* v24;
  __int64 v25;
  __int64 v26;

  if (GameData_21d92e0 == 5) {
    return;
  }
  v3 = *(_QWORD*)(a1 + 32);
  if (v3 == 0 ||
      ((v4 = *(_QWORD*)(a1 + 40), *(_QWORD*)(v3 + 8) != -1) ? (v5 = v4 == 0)
                                                            : (v5 = true),
       v5)) {
    GameData_2235720 = 0;
  }
  else if ((*(_BYTE*)(v4 + 343) & 1) != 0) {
    return;
  }
  if (a2 <= -589947501) {
    if ((unsigned int)(a2 + 1193575789) <= 0x10 &&
        ((1 << (a2 + 109)) & 0x10403) != 0) {
      goto LABEL_13;
    }
    if (a2 != -1101902990) {
      if (a2 == -972548316) {
      LABEL_37:
        if (v3 == 0) {
          return;
        }
        if (*(_QWORD*)(v3 + 8) == -1) {
          return;
        }
        v16 = *(_QWORD*)(a1 + 40);
        if (v16 == 0) {
          return;
        }
        v10 = *(_QWORD*)(v16 + 392);
        v17 = *(_QWORD*)(v16 + 400);
        v11 = a1;
        if (v17 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v17 + 8), 1u,
                                    memory_order_relaxed);
          if (atomic_fetch_add((atomic_ullong* volatile)(v17 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v17 + 16LL))(v17);
            a3 = std___1___shared_weak_count___release_weak(v17);
          }
        }
        v12 = &GameData_1af6361;
        goto LABEL_22;
      }
      goto LABEL_53;
    }
  LABEL_44:
    if (v3 == 0) {
      return;
    }
    v18 = *(_QWORD*)(v3 + 8);
    v19 = *(_QWORD*)(a1 + 40);
    if (v18 == -1 || v19 == 0) {
      return;
    }
    v22 = *(_QWORD*)(v19 + 392);
    v21 = *(_QWORD*)(v19 + 400);
    v23 = a1;
    if (v21 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v21 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v21 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        a3 = std___1___shared_weak_count___release_weak(v21);
      }
    }
    v24 = &GameData_1aa1728;
  LABEL_60:
    v13 = GameRoutine_10adb80(v22 + 1432, v24, *(long double*)&a3);
    if ((v13 & 0x80000000) != 0) {
      return;
    }
    v15 = -1.0;
    v14 = v23;
  LABEL_62:
    GameRoutine_10b2280(v14, v13, v15);
    return;
  }
  if (a2 > -77626399) {
    if (a2 == -77626398 || a2 == 1400556095 || a2 == 1715476756) {
      goto LABEL_13;
    }
  LABEL_53:
    if (v3 == 0) {
      return;
    }
    if (*(_QWORD*)(v3 + 8) == -1) {
      return;
    }
    v25 = *(_QWORD*)(a1 + 40);
    if (v25 == 0) {
      return;
    }
    v22 = *(_QWORD*)(v25 + 392);
    v26 = *(_QWORD*)(v25 + 400);
    v23 = a1;
    if (v26 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v26 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v26 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
        a3 = std___1___shared_weak_count___release_weak(v26);
      }
    }
    v24 = &GameData_1abbaec;
    goto LABEL_60;
  }
  if (a2 == -589947500) {
    goto LABEL_44;
  }
  if (a2 != -270062627) {
    if (a2 == -93581017) {
      goto LABEL_37;
    }
    goto LABEL_53;
  }
LABEL_13:
  if (v3 != 0) {
    v6 = *(_QWORD*)(v3 + 8);
    v7 = *(_QWORD*)(a1 + 40);
    if (v6 != -1 && v7 != 0) {
      v10 = *(_QWORD*)(v7 + 392);
      v9 = *(_QWORD*)(v7 + 400);
      v11 = a1;
      if (v9 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v9 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
          a3 = std___1___shared_weak_count___release_weak(v9);
        }
      }
      v12 = &GameData_1a8e4ab;
    LABEL_22:
      v13 = GameRoutine_10adb80(v10 + 1432, v12, *(long double*)&a3);
      if ((v13 & 0x80000000) != 0) {
        return;
      }
      v14 = v11;
      v15 = 0.0;
      goto LABEL_62;
    }
  }
}

void CharacterFacialController_10b2950(__int64 a1, __int64 a2, __n128 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v7;
  __int64 v8;
  float v9;
  __int64 v11;
  unsigned int v12;

  v3 = *(_QWORD*)(a1 + 32);
  if (v3 != 0) {
    v4 = *(_QWORD*)(v3 + 8);
    v5 = *(_QWORD*)(a1 + 40);
    if (v4 != -1 && v5 != 0) {
      v8 = *(_QWORD*)(v5 + 392);
      v7 = *(_QWORD*)(v5 + 400);
      v9 = ((float*)&a3)[0];
      if (v7 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          v11 = a2;
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          a3 = std___1___shared_weak_count___release_weak(v7);
          a2 = v11;
        }
      }
      v12 = GameRoutine_10adb80(v8 + 1432, a2, *(long double*)&a3);
      if ((v12 & 0x80000000) == 0) {
        GameRoutine_10b2280(a1, v12, v9);
      }
    }
  }
}

__int64 CharacterFacialController_10b2a20(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;

  if ((*(_BYTE*)(result + 96) & 1) == 0) {
    v1 = result;
    result = GameRoutine_10b39a0(result + 120);
    v2 = *(_QWORD*)(v1 + 32);
    *(_DWORD*)(v1 + 224) = 0;
    *(_QWORD*)(v1 + 208) = 0;
    *(_QWORD*)(v1 + 216) = 0;
    *(_DWORD*)(v1 + 264) = 0;
    *(_QWORD*)(v1 + 232) = 0;
    *(_QWORD*)(v1 + 240) = 0;
    *(_DWORD*)(v1 + 352) = 0;
    *(_BYTE*)(v1 + 357) = 0;
    if (v2 != 0) {
      v3 = *(_QWORD*)(v1 + 40);
      if (*(_QWORD*)(v2 + 8) != -1 && v3 != 0) {
        v5 = *(_DWORD*)(v1 + 360);
        if (v5 != 0) {
          v6 = *(_QWORD*)(v3 + 72);
          result = *(_QWORD*)(v6 + 56);
          v7 = *(_QWORD*)(v6 + 64);
          if (result != v7) {
            do {
              if (v5 == *(_DWORD*)result) {
                *(_DWORD*)result = 0;
              }
              result += 80;
            } while (result != v7);
            result = *(_QWORD*)(v6 + 56);
            v7 = *(_QWORD*)(v6 + 64);
          }
          if (0xCCCCCCCCCCCCCCCDLL * ((v7 - result) >> 4) >= 0x40) {
            v8 = CharacterTrailModule_d3d960();
            result =
                CharacterTrailModule_d3d7a0(v6 + 56, v8, *(_QWORD*)(v6 + 64));
          }
        }
        *(_DWORD*)(v1 + 360) = 0;
      }
    }
    *(_DWORD*)(v1 + 96) |= 1u;
  }
  return result;
}

void CharacterFacialController_Unknown5(__int64 a1)
{
  float v2;
  float v3;
  float v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  bool v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  float v15;
  char v16;
  double v17;
  float* v18;
  float v19;
  float v20;
  float v21;
  float v22;
  float v23;
  __int64 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  float v27;
  float v28;
  float v29;
  char v30;
  __int64 v31;
  float v32;
  float v33;
  bool v34;
  float v35;
  float v36;
  float v37;
  long double v38;
  char v39;
  __int64 v40;
  float v41;
  float v42;
  float v43;
  float v44;
  float v45;

  v40 = COERCE_AS(__typeof__(v40),
                  PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v2 = (float)(*(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 496LL) + 16LL) *
               0x1.0aef000000000p+4f) /
       0x1.f400000000000p+9f;
  if (v2 <= 0x0.0p+0f) {
    if ((*(_BYTE*)(a1 + 112) & 1) == 0) {
      goto LABEL_24;
    }
    goto LABEL_21;
  }
  v3 = *(float*)(a1 + 104);
  v4 = *(float*)(a1 + 108);
  if (*(_DWORD*)(a1 + 96) != 0) {
    v5 = 0x0.0p+0f;
  }
  else {
    v5 = 0x1.0000000000000p+0f;
  }
  v6 = v5 - v3;
  if (v4 <= 0x0.0p+0f) {
    v7 = 0x0.0p+0f;
  }
  else {
    v7 = 0x1.0000000000000p+0f;
    if (v4 < 0x1.0000000000000p+0f) {
      v7 = 0x1.0000000000000p+0f -
           powf(a1, 0x1.0000000000000p+0f - v4, v2 * 0x1.df851e0000000p+4f),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v3 = *(float*)(a1 + 104);
    }
  }
  v8 = v3 + (float)(v6 * v7);
  if (v8 < 0x1.0624de0000000p-10f) {
    v8 = 0x0.0p+0f;
  }
  v9 = *(float*)(a1 + 100);
  if (v8 > 0x1.ff7cee0000000p-1f) {
    v8 = 0x1.0000000000000p+0f;
  }
  *(float*)(a1 + 104) = v8;
  if (v9 <= 0x0.0p+0f || v8 > 0x0.0p+0f) {
    v10 = v8 > 0x0.0p+0f;
    if (v9 > 0x0.0p+0f) {
      v10 = false;
    }
  }
  else {
    v10 = true;
  }
  *(_BYTE*)(a1 + 112) = v10;
  *(float*)(a1 + 100) = v8;
  if (v10) {
  LABEL_21:
    if (*(_DWORD*)(a1 + 96) != 0) {
      v11 = *(_QWORD*)(a1 + 136);
      if (v11 != 0) {
        *(_DWORD*)(*(_QWORD*)(v11 + 32) + 496LL) = 0;
        *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 136) + 32LL) + 568LL) = 0;
      }
    }
  }
LABEL_24:
  if (*(float*)(a1 + 104) <= 0x0.0p+0f) {
    return;
  }
  if ((float)((float)(*(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 496LL) + 16LL) *
                      0x1.0aef000000000p+4f) /
              0x1.f400000000000p+9f) <= 0x0.0p+0f) {
    return;
  }
  v12 = *(_QWORD*)(a1 + 32);
  if (v12 == 0) {
    return;
  }
  v13 = *(_QWORD*)(a1 + 40);
  if (*(_QWORD*)(v12 + 8) == -1 || v13 == 0) {
    return;
  }
  if (*(_BYTE*)(a1 + 112) == 1) {
    if (*(_QWORD*)(v12 + 8) == -1) {
      GameData_2235720 = 0;
    }
    else if ((*(_BYTE*)(v13 + 340) & 1) != 0) {
      goto LABEL_37;
    }
    CharacterFacialController_10b2650_alt1(
        a1, *(_DWORD*)(*(_QWORD*)(v13 + 72) + 120LL)),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
LABEL_37:
  v15 =
      (float)(*(float*)(*(_QWORD*)(v13 + 304) + 16LL) * 0x1.0aef000000000p+4f) *
      0x1.0624de0000000p-10f;
  if (*(_QWORD*)(a1 + 136) != 0 && *(_QWORD*)(a1 + 152) != 0) {
    v16 = snd_fnd_WeakHandle_isValid((__int64*)(a1 + 320)),
    v40 = COERCE_AS(__typeof__(v40),
                    PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    v17 = 0x0.0p+0;
    if ((v16 & 1) != 0) {
      v18 = GameRoutine_a1b580(a1 + 272,
                               *(float*)(*(_QWORD*)GameData_212d270 + 360LL) *
                                   0x1.1111120000000p-6f),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      v17 = 0x0.0p+0;
      if (v18 != nullptr) {
        *(float*)&v17 = v18[1] * 0x1.8000000000000p+2f;
      }
    }
    v19 = *(float*)(a1 + 336);
    v20 = *(float*)&v17 + v19;
    LODWORD(v17) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
    if (v20 <= 0x1.0000000000000p+0f) {
      v21 = v20;
    }
    else {
      v21 = 0x1.0000000000000p+0f;
    }
    if (v20 >= 0x0.0p+0f) {
      v22 = v21;
    }
    else {
      v22 = 0x0.0p+0f;
    }
    *(float*)(a1 + 160) = v22;
    if (v19 <= 0x0.0p+0f) {
      v17 = 0x0.0p+0;
      if (v19 >= 0x0.0p+0f) {
        *(float*)&v17 =
            (float)(snd_fnd_WeakHandle_isValid((__int64*)(a1 + 320)) & 1),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
    }
    *(_DWORD*)(a1 + 172) = LODWORD(v17);
    *(_DWORD*)(a1 + 192) = LODWORD(v17);
    v23 = *(float*)(a1 + 352) - v15;
    *(float*)(a1 + 352) = v23;
    if (v23 <= 0x0.0p+0f) {
      v24 = *(_QWORD*)(a1 + 152);
      v25 = *(unsigned __int8*)(v24 + 112);
      if ((v25 & 1) != 0) {
        v26 = *(_QWORD*)(v24 + 120);
      }
      else {
        v26 = v25 >> 1;
      }
      if (v26 != 0) {
        v27 = *(float*)(v24 + 12);
      }
      else {
        v27 = 0x0.0p+0f;
      }
      if (v27 == 0x0.0p+0f) {
        LODWORD(v17) = 2139095039;
      }
      else {
        v28 = *(float*)(GameData_21d8778 + 344);
        v29 = *(float*)(GameData_21d8778 + 348);
        *(float*)&v17 =
            (float)(v28 + (float)((float)(v29 - v28) * GameRoutine_109d070())) /
            v27,
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      }
      *(_DWORD*)(a1 + 352) = LODWORD(v17);
      GameRoutine_10b3d80(a1 + 120, v17),
          v40 = COERCE_AS(__typeof__(v40),
                          PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
    v30 = *(_BYTE*)(a1 + 356);
    if (v30 == 0) {
      v31 = *(_QWORD*)(v13 + 112);
      v32 = 0x1.3333340000000p-2f;
      v33 = *(float*)(v31 + 292);
      if (v33 <= 0x1.3333340000000p-2f) {
        v32 = *(float*)(v31 + 292);
      }
      v34 = v33 < 0x0.0p+0f;
      v35 = 0x0.0p+0f;
      v36 = v32 + v32;
      if (!v34) {
        v35 = v36;
      }
      *(float*)(a1 + 164) = *(float*)(v31 + 296) * v35;
    }
    CharacterFacialController_10b3f60(a1 + 120, v30, v15),
        v40 = COERCE_AS(__typeof__(v40),
                        PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  }
  CharacterFacialController_10b4280(a1 + 208, v15),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v37 = *(float*)(a1 + 336);
  LODWORD(v38) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p+0f));
  if (v37 <= 0x0.0p+0f) {
    *(_QWORD*)&v38 = 0;
    if (v37 >= 0x0.0p+0f) {
      *(float*)&v38 =
          (float)(snd_fnd_WeakHandle_isValid((__int64*)(a1 + 320)) & 1),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
    }
  }
  v39 = *(_BYTE*)(a1 + 356);
  *(_DWORD*)(a1 + 252) = LODWORD(v38);
  *(float*)&v38 = v15;
  CharacterFacialController_10b4440((float*)(a1 + 232), v39, v38),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
  v41 = *(float*)(a1 + 336);
  v42 = *(float*)(a1 + 340);
  if (v41 != v42) {
    v43 = *(float*)(a1 + 344);
    if (v43 > 0x0.0p+0f) {
      if (v43 >= 0x1.0000000000000p+0f) {
        goto LABEL_79;
      }
      if (v15 <= 0x0.0p+0f) {
        goto LABEL_80;
      }
      v44 = 0x1.0000000000000p+0f -
            powf(v40, 0x1.0000000000000p+0f - v43, v15 * 0x1.df851e0000000p+4f),
      v40 = COERCE_AS(__typeof__(v40),
                      PSEUDO_REGISTER(unsigned long long, "x0", "=r"));
      if (v44 <= 0x0.0p+0f) {
        goto LABEL_80;
      }
      if (v44 >= 0x1.0000000000000p+0f) {
      LABEL_79:
        v41 = v42;
      }
      else {
        v41 = v41 + (float)((float)(v42 - v41) * v44);
      }
    }
  LABEL_80:
    v45 = *(float*)(a1 + 340);
    *(float*)(a1 + 336) = v41;
    if (vabds_f32(v45, v41) < 0x1.a36e2e0000000p-14f) {
      *(float*)(a1 + 336) = v45;
    }
  }
}

__n128 CharacterFacialController_Destructor(__int64 a1)
{
  __n128 result;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  *(_QWORD*)a1 = game_character_CharacterFacialController_vtable;
  *(_QWORD*)(a1 + 56) = GameData_2008fd0;
  CharacterFacialController_10b2a20(a1);
  if (*(_BYTE*)(a1 + 312) == 1) {
    v3 = GameRoutine_118ff0(GameData_2265eb0);
    FileManager_10e120(v3, a1 + 296);
    *(_BYTE*)(a1 + 312) = 0;
  }
  v4 = *(_QWORD*)(a1 + 88);
  *(_QWORD*)(a1 + 56) = kaneko_WPHolder_vtable;
  if (v4 != 0) {
    result = std___1___shared_weak_count___release_weak(v4);
  }
  v5 = *(_QWORD*)(a1 + 72);
  if (v5 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v5 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v5 + 16LL))(
        v5, *(long double*)&result);
    result = std___1___shared_weak_count___release_weak(v5);
  }
  v6 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)a1 = &game_character_CharacterBaseModule_vtable;
  if (v6 != 0) {
    return std___1___shared_weak_count___release_weak(v6);
  }
  return result;
}

float CharacterFacialController_10b3f60(__int64 a1, char a2, float result)
{
  __int64 v3;
  __int64 v4;
  float v5;
  float v6;
  float v7;
  float v8;
  float v9;
  __int64 v10;
  float v11;
  float v12;
  float v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  float v18;
  float v19;
  __int64 v20;
  float v21;
  float v22;
  float v23;
  float v24;
  float v25;
  __int64 v26;
  float v27;
  bool v28;
  float v29;
  float v30;
  float v31;
  __int64 v32;
  float v33;
  float v34;
  float v35;
  float v36;
  float v37;
  float v38;
  float v39;
  float v40;

  v3 = *(_QWORD*)(a1 + 16);
  if (v3 != 0) {
    v4 = GameData_21d8778;
    if ((a2 & 1) == 0) {
      v5 = *(float*)(a1 + 48);
      v6 = *(float*)(a1 + 52);
      v7 = *(float*)(GameData_21d8778 + 380);
      if (v5 != v6) {
        v8 = *(float*)(a1 + 56);
        if (v8 > 0x0.0p+0f) {
          if (v8 >= 0x1.0000000000000p+0f) {
            v5 = *(float*)(a1 + 52);
          }
          else if (result > 0x0.0p+0f) {
            v9 = result;
            v10 = a1;
            v11 = 0x1.0000000000000p+0f - powf(a1, 0x1.0000000000000p+0f - v8,
                                               result * 0x1.df851e0000000p+4f);
            if (v11 <= 0x0.0p+0f) {
              a1 = v10;
            }
            else {
              a1 = v10;
              if (v11 >= 0x1.0000000000000p+0f) {
                v5 = v6;
              }
              else {
                v5 = v5 + (float)((float)(v6 - v5) * v11);
              }
            }
            result = v9;
          }
        }
        v12 = *(float*)(a1 + 52);
        *(float*)(a1 + 48) = v5;
        if (vabds_f32(v12, v5) < 0x1.a36e2e0000000p-14f) {
          v5 = v12;
          *(float*)(a1 + 48) = v12;
        }
      }
      v13 = 0x0.0p+0f;
      if (v5 > 0x0.0p+0f) {
        v14 = a1;
        v15 = result + *(float*)(a1 + 60);
        v16 = v15 * 0x0.0p+0f;
        *(float*)(a1 + 60) = v15;
        v17 = v7 * v15;
        v18 = result;
        v19 = GameRoutine_a5e890(v16, v17);
        a1 = v14;
        result = v18;
        v13 = (float)((float)(v19 * 0x1.0000000000000p-1f) +
                      0x1.0000000000000p-1f) *
              *(float*)(v14 + 48);
      }
      v20 = GameData_21d8778;
      v21 = *(float*)(a1 + 68);
      v22 = *(float*)(a1 + 72);
      *(float*)(a1 + 64) = v13;
      v23 = *(float*)(v20 + 388);
      if (v21 != v22) {
        v24 = *(float*)(a1 + 76);
        if (v24 > 0x0.0p+0f) {
          if (v24 >= 0x1.0000000000000p+0f) {
            v21 = v22;
          }
          else if (result > 0x0.0p+0f) {
            v25 = result;
            v26 = a1;
            v27 = 0x1.0000000000000p+0f - powf(a1, 0x1.0000000000000p+0f - v24,
                                               result * 0x1.df851e0000000p+4f);
            if (v27 > 0x0.0p+0f) {
              v28 = v27 < 0x1.0000000000000p+0f;
              v29 = v21 + (float)((float)(v22 - v21) * v27);
              if (v28) {
                v21 = v29;
              }
              else {
                v21 = v22;
              }
            }
            result = v25;
            a1 = v26;
          }
        }
        v30 = *(float*)(a1 + 72);
        *(float*)(a1 + 68) = v21;
        if (vabds_f32(v30, v21) < 0x1.a36e2e0000000p-14f) {
          v21 = v30;
          *(float*)(a1 + 68) = v30;
        }
      }
      v31 = 0x0.0p+0f;
      if (v21 > 0x0.0p+0f) {
        v32 = a1;
        v33 = result + *(float*)(a1 + 80);
        *(float*)(a1 + 80) = v33;
        v34 = GameRoutine_a5e890(v23 * v33, v33);
        a1 = v32;
        v31 = (float)((float)(v34 * 0x1.0000000000000p-1f) +
                      0x1.0000000000000p-1f) *
              *(float*)(v32 + 68);
      }
      v3 = *(_QWORD*)(a1 + 16);
      v4 = GameData_21d8778;
      *(float*)(a1 + 84) = v31;
    }
    v35 = *(float*)(*(_QWORD*)a1 + 8LL);
    v36 = v35 * *(float*)(a1 + 40);
    *(float*)(*(_QWORD*)(v3 + 32) + 352LL) = 0x1.0000000000000p+0f - v36;
    *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL) + 424LL) = v36;
    *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL) + 496LL) =
        (float)(v35 * *(float*)(a1 + 84)) * *(float*)(v4 + 384);
    v37 = v35 * *(float*)(a1 + 44);
    v38 = v35 * (float)(*(float*)(a1 + 64) * *(float*)(v4 + 376));
    if (*(float*)(*(_QWORD*)(a1 + 32) + 12LL) <= 0x0.0p+0f) {
      v37 = 0x0.0p+0f;
      v38 = 0x0.0p+0f;
    }
    *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL) + 568LL) = v37;
    *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL) + 64LL) = v37 * v38;
    v39 = v37 * (float)(0x1.0000000000000p+0f - v38);
    v40 = 0x1.0000000000000p+0f - v37;
    *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL) + 136LL) = v39;
    *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL) + 208LL) = v38 * v40;
    result = v40 * (float)(0x1.0000000000000p+0f - v38);
    *(float*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32LL) + 280LL) = result;
  }
  return result;
}

void CharacterFacialController_10b4440(float* a1, char a2, long double a3)
{
  float v4;
  float v5;
  float v6;
  float v7;
  int v8;
  float v9;
  float v10;
  float v11;
  __int64 v12;
  float v13;
  __int64 v14;
  __int64 v15;
  float v16;
  __int64 v17;
  __int64 v18;
  float v19;
  float32x4_t* v20;
  float32x4_t* v21;
  float32x4_t v24;
  float32x4_t v25;
  int8x16_t v26;
  float32x4_t v27;
  int8x16_t v28;
  int8x16_t v29;
  float v30;
  float v31;
  bool v32;
  bool v33;
  __int64* v35;
  __int128 v36;
  __int64 v37;
  __int128 v38;
  char v39;
  __int64 v40;
  int v41;
  int v42;
  __int64 v43;
  _QWORD* v44;
  struct {
    _QWORD v45[4];
    _QWORD* v46;
  } v45_;

  if ((a2 & 1) == 0) {
    v4 = a1[4];
    v5 = a1[5];
    v6 = *(float*)(GameData_21d8778 + 372);
    if (v4 != v5) {
      v7 = a1[6];
      if (v7 > 0x0.0p+0f) {
        if (v7 >= 0x1.0000000000000p+0f) {
          v4 = a1[5];
        }
        else if (*(float*)&a3 > 0x0.0p+0f) {
          v8 = LODWORD(a3);
          *(float*)&a3 = 0x1.0000000000000p+0f -
                         powf(a1, 0x1.0000000000000p+0f - v7,
                              *(float*)&a3 * 0x1.df851e0000000p+4f);
          if (*(float*)&a3 > 0x0.0p+0f) {
            if (*(float*)&a3 >= 0x1.0000000000000p+0f) {
              v4 = v5;
            }
            else {
              v4 = v4 + (float)((float)(v5 - v4) * *(float*)&a3);
            }
          }
          LODWORD(a3) = v8;
        }
      }
      v9 = a1[5];
      a1[4] = v4;
      if (vabds_f32(v9, v4) < 0x1.a36e2e0000000p-14f) {
        v4 = v9;
        a1[4] = v9;
      }
    }
    v10 = 0x0.0p+0f;
    if (v4 > 0x0.0p+0f) {
      v11 = *(float*)&a3 + a1[7];
      a1[7] = v11;
      *(float*)&a3 = (float)(GameRoutine_a5e890(v6 * v11, v11 * 0x0.0p+0f) *
                             0x1.0000000000000p-1f) +
                     0x1.0000000000000p-1f;
      v10 = *(float*)&a3 * a1[4];
    }
    a1[8] = v10;
  }
  if (*((_QWORD*)a1 + 1) == 0) {
    *(float*)&a3 = a1[8];
    if (*(float*)&a3 <= 0x0.0p+0f) {
      return;
    }
    v17 = *(_QWORD*)a1;
    if (*(_QWORD*)a1 == 0) {
      return;
    }
    v18 = *(_QWORD*)(v17 + 560);
    if (v18 != 0) {
      *((_QWORD*)a1 + 1) = v18;
    }
    else {
      v44 = GameRoutine_10a0100(*(_QWORD**)(v17 + 408), (__int64)"Jnt_C_Head");
      *(_QWORD*)(v17 + 560) = v44;
      *((_QWORD*)a1 + 1) = v44;
      if (v44 == nullptr) {
        return;
      }
    }
  }
  v12 = *(_QWORD*)(*(_QWORD*)a1 + 128LL);
  v13 = *(float*)(v12 + 144);
  if (v13 <= 0x0.0p+0f ||
      ((v14 = GameData_21ec7b0, GameData_21ec7b0 == 0)
           ? (v15 = nn_os_ConvertToTimeSpan(
                        *(_QWORD*)(game_script_hub_g_frame_counter + 344), a3) /
                    1000000,
              v16 = 0x1.f400000000000p+9f)
           : (v15 = nn_os_ConvertToTimeSpan(
                        *(_QWORD*)(game_script_hub_g_frame_counter + 344), a3) /
                        1000 -
                    *(_QWORD*)(v14 + 136),
              v16 = 0x1.e848000000000p+19f),
       v19 = 0x0.0p+0f, (float)((float)v15 / v16) >= v13)) {
    v21 = *(float32x4_t**)(v12 + 128);
    v20 = *(float32x4_t**)(v12 + 136);
    if (v21 == nullptr || v20 == nullptr || *(_QWORD*)(v12 + 120) == 0) {
      goto LABEL_45;
    }
    v24 = v21[3];
    v25 = v20[3];
    v26 = vmulq_f32(v24, v24);
    v27 = vsubq_f32(v24, v25);
    v28 = vmulq_f32(v27, v27);
    LANES128(v26).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v26, v26, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
            .n64_u64[0];
    v32 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v26).n128_u64[0])))
            .n64_f32[0] < 0x1.47ae160000000p-9f;
    v29 = vmulq_f32(v25, v25);
    LANES128(v28).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v28, v28, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
            .n64_u64[0];
    LANES128(v29).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v29, v29, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])))
            .n64_u64[0];
    LODWORD(v30) =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v28).n128_u64[0])))
            .n64_u32[0];
    LODWORD(v31) =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v29).n128_u64[0])))
            .n64_u32[0];
    v32 = v32 && v31 < 0x1.47ae160000000p-9f;
    v33 = v32;
    if (v33 || v30 < 0x1.47ae160000000p-9f) {
    LABEL_45:
      v19 = (float)(a1[8] * *(float*)(*(_QWORD*)GameData_212d270 + 368LL)) *
            0x1.1df46a0000000p-6f;
    }
    else {
      v19 = 0x0.0p+0f;
    }
  }
  v35 = *((__int64**)a1 + 1);
  v36 = *((_OWORD*)v35 + 6);
  if (*(float*)&v36 != v19 || *((float*)&v36 + 1) != 0x0.0p+0f ||
      *((float*)&v36 + 2) != 0x0.0p+0f) {
    *((float*)v35 + 24) = v19;
    *((_DWORD*)v35 + 25) = 0;
    v37 = *v35;
    v38 = *((_OWORD*)v35 + 6);
    *((_DWORD*)v35 + 32) |= 0x10u;
    v39 = *((_BYTE*)v35 + 28);
    *((_OWORD*)v35 + 6) = (unsigned __int64)v38;
    if ((v39 & 1) != 0) {
    LABEL_56:
      *(_BYTE*)(*(_QWORD*)(v37 + 24) + 504LL) = 1;
      return;
    }
    v40 = *(_QWORD*)(v37 + 24);
    v41 = *((_DWORD*)v35 + 4);
    v45_.v45[2] = v35;
    v45_.v45[0] = GameData_1fc0970;
    v45_.v45[1] = v37;
    v45_.v46 = v45_.v45;
    v42 = Model_a661a0(v40, v41, (__int64)v45_.v45, 0);
    if (v45_.v46 == v45_.v45) {
      v43 = 32;
    }
    else {
      if (v45_.v46 == nullptr) {
      LABEL_55:
        *((_DWORD*)v35 + 6) = v42;
        *((_BYTE*)v35 + 28) = 1;
        goto LABEL_56;
      }
      v43 = 40;
    }
    (*(void (**)(__int64))(*v45_.v46 + v43))((__int64)v45_.v46);
    goto LABEL_55;
  }
}

#pragma GCC visibility pop
