#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

extern _UNKNOWN GameData_1aa1728;
extern _UNKNOWN GameData_1abbaec;
extern __int64 (*GameData_2006198[])();
extern __int64 (*GameData_2010fd0[])();
extern __int64 (*GameData_2011030[])();
extern __int64 GameData_212bf68;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN GameData_2167580;
extern int GameData_2236590;
extern _UNKNOWN GameData_2236598;
__int64 GameRoutine_10adb80(_QWORD, _QWORD, long double);
void GameRoutine_10b2280(__int64, unsigned int, float);
__int64 GameRoutine_1129780(_QWORD, _QWORD, long double);
__int64 GameRoutine_1a09b70(_QWORD);
__n128 GameRoutine_1a09b80(_QWORD);
__n128 GameRoutine_1a09c50(_QWORD);
__int64 GameRoutine_1a09fd0(_QWORD);
__int64 GameRoutine_1a09fe0(_QWORD);
__int64 GameRoutine_1a0a4e0(_QWORD);
__int64 GameRoutine_1a0b950(_QWORD, _QWORD, _QWORD);
__int64 GameRoutine_540(_QWORD, _QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
__int64 GameRoutine_651b90(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_98f140(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_98f290(_QWORD);
__int64 GameRoutine_a8c0c0(_QWORD);
__int64 GameRoutine_10adb80_alt1(_DWORD*,
                                 _BYTE*) __asm__("GameRoutine_10adb80");
__int64 std___1___shared_weak_count___release_weak(__int64);
void CharacterFacialController_10b2280(__int64, unsigned int, float);
void GameHr_10c0490(__int64 a1, __int64 a2);
__int64 GameHr_10c05f0(__int64 result);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern __int64 (*game_character_FootprintModule2_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
int __cxa_guard_acquire(__int64);
void GameRoutine_98f140_alt1(__int64*, _QWORD*) __asm__("GameRoutine_98f140");
void GameRoutine_a8c0c0_alt1(__int64) __asm__("GameRoutine_a8c0c0");
void __attribute__((noreturn))
GameRoutine_60a210_alt1() __asm__("GameRoutine_60a210");
void __attribute__((noreturn))
GameRoutine_98f290_alt1() __asm__("GameRoutine_98f290");
void __cxa_guard_release(__int64);
void game_character_FootprintModule2_Start(_QWORD*, _QWORD*);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void GameHr_10e9660(_QWORD* a1);

void GameHr_10c0490(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  _WORD* v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  float v9;
  __int64 v10;
  __int64 v11;
  __int64 v13;
  __int64 v14;
  unsigned int v15;
  int v16;
  __int16 v17;
  char v18;
  __int64 v19;
  __int64 v20;
  int v21;
  char v22;

  v2 = *(_QWORD*)(a1 + 8);
  v19 = 0;
  v20 = 0;
  v18 = 0;
  v3 = *(_QWORD*)(v2 + 16);
  v21 = a2;
  if ((*(_QWORD*)(v3 + 384) & 0x10LL) != 0) {
    v4 = &GameData_1aa1728;
  }
  else {
    v4 = &GameData_1abbaec;
  }
  v5 = *(_DWORD*)v4;
  v17 = v4[2];
  v16 = v5;
  v22 = BYTE4(a2);
  if (*(_BYTE*)(v2 + 145) == 1) {
    v6 = *(_QWORD*)(v2 + 232);
    if (v6 != 0) {
      v7 = *(_QWORD*)(v6 + 88);
      if (v7 != 0) {
        v8 = *(_QWORD*)(v7 + 32);
        v9 = (a2 & 0x100000000LL) != 0 ? *(float*)&a2 : -0x1.0000000000000p+0f;
        if (v8 != 0) {
          v10 = *(_QWORD*)(v8 + 8);
          v11 = *(_QWORD*)(v7 + 40);
          if (v10 != -1 && v11 != 0) {
            v14 = *(_QWORD*)(v11 + 392);
            v13 = *(_QWORD*)(v11 + 400);
            if (v13 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 8), 1u,
                                        memory_order_relaxed);
              if (atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
                std___1___shared_weak_count___release_weak(v13);
              }
            }
            v15 = GameRoutine_10adb80_alt1((_DWORD*)(v14 + 1432), &v16);
            if ((v15 & 0x80000000) == 0) {
              CharacterFacialController_10b2280(v7, v15, v9);
            }
          }
        }
      }
    }
  }
}

__int64 GameHr_10c05f0(__int64 result)
{
  __int64 v1;
  __int64 v2;
  _WORD* v3;
  int v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  unsigned int v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  int v18;
  __int16 v19;
  char v20;
  __int64 v21;
  __int64 v22;
  int v23;
  char v24;

  v1 = *(_QWORD*)(result + 8);
  v21 = 0;
  v22 = 0;
  v20 = 0;
  v2 = *(_QWORD*)(v1 + 16);
  v23 = 0;
  if ((*(_QWORD*)(v2 + 384) & 0x10LL) != 0) {
    v3 = &GameData_1aa1728;
  }
  else {
    v3 = &GameData_1abbaec;
  }
  v4 = *(_DWORD*)v3;
  v19 = v3[2];
  v18 = v4;
  v24 = 1;
  if (*(_BYTE*)(v1 + 145) == 1) {
    v5 = *(_QWORD*)(v1 + 232);
    if (v5 != 0) {
      v6 = *(_QWORD*)(v5 + 88);
      if (v6 != 0) {
        v7 = *(_QWORD*)(v6 + 32);
        if (v7 != 0) {
          v8 = *(_QWORD*)(v7 + 8);
          v9 = *(_QWORD*)(v6 + 40);
          if (v8 != -1 && v9 != 0) {
            v12 = *(_QWORD*)(v9 + 392);
            v11 = *(_QWORD*)(v9 + 400);
            v13 = result;
            if (v11 != 0) {
              atomic_fetch_add_explicit((atomic_ullong* volatile)(v11 + 8), 1u,
                                        memory_order_relaxed);
              if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
                (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
                std___1___shared_weak_count___release_weak(v11);
              }
            }
            v14 = GameRoutine_10adb80_alt1((_DWORD*)(v12 + 1432), &v18);
            result = v13;
            if ((v14 & 0x80000000) == 0) {
              CharacterFacialController_10b2280(v6, v14, 0x0.0p+0f);
              result = v13;
            }
          }
        }
      }
    }
  }
  v15 = *(_QWORD*)(result + 8);
  if (*(_BYTE*)(v15 + 145) == 1) {
    v16 = *(_QWORD*)(v15 + 232);
    if (v16 != 0) {
      v17 = *(_QWORD*)(v16 + 88);
      if (v17 != 0) {
        *(_DWORD*)(v17 + 340) = 0;
      }
    }
  }
  return result;
}

void GameHr_10e9660(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  int v8;
  __int64 v9;
  int v10;
  __int64* v11;
  _QWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  __int64 v19;
  _BYTE* v20;
  _BYTE* v21;
  bool v22;
  _QWORD* v23;
  unsigned __int64 v24;
  __int64 v25;
  __int64 v26;
  char* v27;
  __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  unsigned __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  unsigned __int64 v38;
  __int64 v39;
  __int64 v40;
  char* v41;
  __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  unsigned __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD v51[2];

  if (a1 != nullptr) {
    v2 = a1[49];
    v1 = a1[50];
    if (v1 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v1 + 8), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v1 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v1 + 16LL))(v1);
        std___1___shared_weak_count___release_weak(v1);
      }
    }
    if (*(_QWORD*)(v2 + 11632) != *(_QWORD*)(v2 + 11640)) {
      v4 = a1[56];
      if (v4 != 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2236598,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_2236598) != 0) {
          GameData_2236590 = wld_Crc32(0, "FootprintModule2", 0x10u);
          __cxa_guard_release((__int64)&GameData_2236598);
        }
        v5 = *(_QWORD*)(v4 + 512);
        v6 = v5;
        v7 = v5;
        while (v7 != *(_QWORD*)(v4 + 504)) {
          v8 = *(_DWORD*)(v7 - 16);
          v7 -= 16;
          v6 -= 16;
          if (v8 == GameData_2236590) {
            goto LABEL_17;
          }
        }
        goto LABEL_20;
      }
      v4 = a1[51];
      if (v4 != 0) {
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2236598,
                                  memory_order_acquire) &
             1) == 0 &&
            __cxa_guard_acquire((__int64)&GameData_2236598) != 0) {
          GameData_2236590 = wld_Crc32(0, "FootprintModule2", 0x10u);
          __cxa_guard_release((__int64)&GameData_2236598);
        }
        v5 = *(_QWORD*)(v4 + 512);
        v6 = v5;
        v9 = v5;
        do {
          if (v9 == *(_QWORD*)(v4 + 504)) {
            goto LABEL_20;
          }
          v10 = *(_DWORD*)(v9 - 16);
          v9 -= 16;
          v6 -= 16;
        } while (v10 != GameData_2236590);
      LABEL_17:
        if (v5 == v6 || *(_QWORD*)(v6 + 8) == 0) {
        LABEL_20:
          nn_os_LockMutex((__int64)&GameData_2167580);
          v11 = (__int64*)fw_memory_g_heap_manager_ptr;
          v12 = (_QWORD*)fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 136, 16, 0);
          v12[1] = v4;
          *((_BYTE*)v12 + 16) = 0;
          *(_DWORD*)((char*)v12 + 17) = 33686018;
          v13 = fw_memory_HeapManager_Allocate(*v11, 32, 16, 0);
          *(_QWORD*)v13 = GameData_2006198;
          *(_QWORD*)(v13 + 8) = 0;
          *(_DWORD*)(v13 + 24) = 0;
          v12[4] = v13 + 24;
          v12[5] = v13;
          v12[6] = v13 + 24;
          v12[7] = v13;
          *(_QWORD*)(v13 + 16) = 0;
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v13 + 16), 1u,
                                    memory_order_relaxed);
          v12[8] = 0;
          v12[9] = 0;
          v12[10] = 0;
          v12[11] = 0;
          v12[12] = 0;
          v12[13] = 0;
          v12[14] = 0;
          v12[15] = 0;
          v12[16] = 0;
          *v12 = game_character_FootprintModule2_vtable;
          v12[3] = GameData_2011030;
          if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_2236598,
                                    memory_order_acquire) &
               1) == 0 &&
              __cxa_guard_acquire((__int64)&GameData_2236598) != 0) {
            GameData_2236590 = wld_Crc32(0, "FootprintModule2", 0x10u);
            __cxa_guard_release((__int64)&GameData_2236598);
          }
          v14 = *(_QWORD*)(v4 + 504);
          v15 = *(_QWORD*)(v4 + 512);
          v16 = v15;
          LODWORD(v51[0]) = GameData_2236590;
          v51[1] = v12;
          while (v16 != v14) {
            v17 = *(_DWORD*)(v16 - 16);
            v16 -= 16;
            if (v17 == GameData_2236590) {
              if ((v12[2] & 1) != 0) {
                goto LABEL_39;
              }
              goto LABEL_33;
            }
          }
          if (v14 == v15 &&
              (unsigned __int64)(*(_QWORD*)(v4 + 520) - v14) <= 0x6F) {
            v18 = fw_memory_HeapManager_Allocate(*v11, 112, 16, 0);
            *(_QWORD*)(v4 + 504) = v18;
            *(_QWORD*)(v4 + 512) = v18;
            *(_QWORD*)(v4 + 520) = v18 + 112;
            if (v15 != 0) {
              v19 = 128;
              if (*(_QWORD*)(*v11 + 200) == 0) {
                v19 = 56;
              }
              nn_mem_StandardAllocator_Free(*v11 + v19, v14);
            }
          }
          GameRoutine_98f140_alt1((__int64*)(v4 + 504), v51);
          if ((v12[2] & 1) == 0) {
          LABEL_33:
            *((_BYTE*)v12 + 16) = 1;
            *((_BYTE*)v12 + 17) &= ~2u;
            *((_BYTE*)v12 + 18) &= ~2u;
            *((_BYTE*)v12 + 19) &= ~2u;
            *((_BYTE*)v12 + 20) &= ~2u;
            v20 = (_BYTE*)v12[1];
            v20[632] = 0;
            v20[664] = 0;
            v20[696] = 0;
            v20[728] = 0;
            (*(void (**)(_QWORD*))(*v12 + 64LL))(v12);
            v21 = (_BYTE*)v12[1];
            v22 = v21[300] == 3 && v21[301] == 3;
            if (v22 || v21[302] == 1) {
              (*(void (**)(_QWORD*))(*v12 + 72LL))(v12);
            }
          }
        LABEL_39:
          v23 = *(_QWORD**)(v4 + 536);
          v24 = *(_QWORD*)(v4 + 544);
          if ((unsigned __int64)v23 >= v24) {
            v26 = *(_QWORD*)(v4 + 528);
            v27 = (char*)v23 - v26;
            v28 = ((__int64)v23 - v26) >> 3;
            v29 = v28 + 1;
            if ((unsigned __int64)(v28 + 1) >> 61 != 0) {
              goto LABEL_74;
            }
            v30 = v24 - v26;
            if (v30 >> 2 > v29) {
              v29 = v30 >> 2;
            }
            if ((unsigned __int64)v30 >= 0x7FFFFFFFFFFFFFF8LL) {
              v31 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v31 = v29;
            }
            if (v31 != 0) {
              if (v31 >> 61 != 0) {
                goto LABEL_77;
              }
              v32 = fw_memory_HeapManager_Allocate(*v11, 8 * v31, 16, 0);
            }
            else {
              v32 = 0;
            }
            v33 = v32 + 8 * v31;
            v34 = (unsigned __int64)v23 - v26;
            v35 = (__int64)&v27[v32 + -8 * v28];
            *(_QWORD*)&v27[v32] = v12;
            v25 = (__int64)&v27[v32 + 8];
            memcpy(v35, v26, v34);
            *(_QWORD*)(v4 + 528) = v35;
            *(_QWORD*)(v4 + 536) = v25;
            *(_QWORD*)(v4 + 544) = v33;
            if (v26 != 0) {
              v36 = 128;
              if (*(_QWORD*)(*v11 + 200) == 0) {
                v36 = 56;
              }
              nn_mem_StandardAllocator_Free(*v11 + v36, v26);
            }
          }
          else {
            *v23 = v12;
            v25 = (__int64)(v23 + 1);
          }
          *(_QWORD*)(v4 + 536) = v25;
          v37 = *(_QWORD**)(v4 + 560);
          v38 = *(_QWORD*)(v4 + 568);
          if ((unsigned __int64)v37 < v38) {
            *v37 = v12;
            v39 = (__int64)(v37 + 1);
          LABEL_71:
            *(_QWORD*)(v4 + 560) = v39;
            GameRoutine_a8c0c0_alt1(v4);
            *(_BYTE*)(v4 + 576) = 1;
            nn_os_UnlockMutex((__int64)GameData_212df28);
            game_character_FootprintModule2_Start(v12, a1);
            return;
          }
          v40 = *(_QWORD*)(v4 + 552);
          v41 = (char*)v37 - v40;
          v42 = ((__int64)v37 - v40) >> 3;
          v43 = v42 + 1;
          if ((unsigned __int64)(v42 + 1) >> 61 == 0) {
            v44 = v38 - v40;
            if (v44 >> 2 > v43) {
              v43 = v44 >> 2;
            }
            if ((unsigned __int64)v44 >= 0x7FFFFFFFFFFFFFF8LL) {
              v45 = 0x1FFFFFFFFFFFFFFFLL;
            }
            else {
              v45 = v43;
            }
            if (v45 == 0) {
              v46 = 0;
            LABEL_67:
              v47 = v46 + 8 * v45;
              v48 = (unsigned __int64)v37 - v40;
              v49 = (__int64)&v41[v46 + -8 * v42];
              *(_QWORD*)&v41[v46] = v12;
              v39 = (__int64)&v41[v46 + 8];
              memcpy(v49, v40, v48);
              *(_QWORD*)(v4 + 552) = v49;
              *(_QWORD*)(v4 + 560) = v39;
              *(_QWORD*)(v4 + 568) = v47;
              if (v40 != 0) {
                v50 = 128;
                if (*(_QWORD*)(*v11 + 200) == 0) {
                  v50 = 56;
                }
                nn_mem_StandardAllocator_Free(*v11 + v50, v40);
              }
              goto LABEL_71;
            }
            if (v45 >> 61 == 0) {
              v46 = fw_memory_HeapManager_Allocate(*v11, 8 * v45, 16, 0);
              goto LABEL_67;
            }
          LABEL_77:
            GameRoutine_60a210_alt1();
          }
        LABEL_74:
          GameRoutine_98f290_alt1();
        }
      }
    }
  }
}

#pragma GCC visibility pop
