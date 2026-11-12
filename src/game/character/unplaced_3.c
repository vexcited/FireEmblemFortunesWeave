#include "decomp/pseudo_helpers.h"

#include "decomp/pseudo_float.h"

#pragma GCC visibility push(hidden)

_DWORD* GameRoutine_10ad920(_DWORD* result, _BYTE*);
__attribute__((swiftcall)) void math_6221a0(PSEUDO_X8, float32x4_t*);
__attribute__((swiftcall)) void math_Quat_FromEulerianAngle(PSEUDO_X8, float*);
__int128* math_6225d0();
__int64 AnimLayerCtrlModule_ce3880(__int64, __int64, int, double);
__int64 AnimLayerCtrlModule_ce3970(__int64, __int64, __int64, int);
__int64 GameRoutine_ce3010(__int64, __int64, __int64, unsigned int,
                           unsigned int);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 std___1___shared_weak_count_lock(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
extern _BYTE GameData_1abbaec[];
extern _BYTE GameData_1af6361[];
extern _DWORD GameData_1a835a0[4];
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212ed90;
extern _UNKNOWN game_g_random_mutex;
extern __int128 GameData_1a82dd0;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int64* game_map_MapRandom_instance__ptr[3];
extern __int64 GameData_21c6978;
extern __int64 GameData_21d8778;
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_GameModeData_instance_;
extern char* GameData_2008fe0;
extern char GameData_1a9f09e;
extern int* GameData_212df08;
extern int* GameData_212ed88;
float GameRoutine_10d9570(_QWORD*);
int __cxa_guard_acquire(__int64);
int memcmp(__int64, __int64, unsigned __int64);
int strcmp(const char*, const char*);
unsigned __int64 strlen(const char*);
void GameHr_10d93e0(_QWORD*, int);
void GameRoutine_111d7a0(__int64, int);
void GameRoutine_7d6200(__int64*, _DWORD*);
void GameRoutine_98f140(__int64*, _QWORD*);
void GameRoutine_a8c0c0(__int64);
void SkeletalBlendCallback_ce3be0(_QWORD*, const char**, __int64, unsigned int,
                                  int, float);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_98f290();
void __attribute__((noreturn)) String_60a250(const char*);
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
__int64 game_character_bd7d60(__int64 result);
__int64 game_character_10b3240(__int64 result, _QWORD* a2);
__int64 game_character_10b4280(__int64 result, float a2);
void game_character_10b4f00(__int64 a1, __int64 a2, __int64 a3);
float game_character_10b9f40(int32x2_t* a1, _QWORD* a2, __int64 a3, char a4);

__int64 game_character_bd7d60(__int64 result)
{
  __int64 v1;
  __int64 v2;
  __int64 v3;
  __int128 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  long double v10;
  long double v11;
  __int64 v12;
  __int64 v13;
  _DWORD* v14;
  float* v15;
  _DWORD* v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v22;
  float v23;
  float v24;
  float v25;
  float v27;
  float v28;
  float v29;
  float v30;
  __int64 v32;
  __int64* v33;
  __int64* v34;
  float v35;
  __int64 v36;
  __int128 v37;

  v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
  v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w"));
  v1 = *(_QWORD*)(result + 8);
  v2 = result;
  if (*(_QWORD*)(v1 + 736) != 0) {
    v1 = *(_QWORD*)(v1 + 736);
  }
  v3 = *(_QWORD*)(result + 256);
  if (v3 != 0) {
    v4 = *(_OWORD*)(v3 + 208);
    HIDWORD(v4) = 0;
  }
  else {
    v4 = *(_OWORD*)(v1 + 304);
  }
  v5 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(GameData_21c6978 + 32) - 8LL) + 40LL);
  v6 = *(_QWORD*)(v5 + 24);
  if (v6 != 0) {
    v7 = *(_QWORD*)(v5 + 16);
    v8 = *(_QWORD*)(v5 + 24);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v6 + 16), 1u,
                              memory_order_relaxed);
    v37 = v4;
    v9 = std___1___shared_weak_count_lock(v8),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w"));
    result = std___1___shared_weak_count___release_weak(v6),
    v10 = COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
    v11 = COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w"));
    if (v9 != 0) {
      if (v7 != 0) {
        v12 = *(_QWORD*)(v7 + 288);
        if ((*(_BYTE*)(v12 + 840) & 1) == 0 ||
            (v13 = *(_QWORD*)(v12 + 808), v14 = *(_DWORD**)(v12 + 816),
             (_DWORD*)v13 == v14)) {
        LABEL_26:
          v15 = (float*)(v12 + 844);
        }
        else {
          LODWORD(v10) = DWORD2(v37);
          v15 = (float*)(v13 + 88);
          LODWORD(v11) = COERCE_UNSIGNED_INT((float)(0x1.0000000000000p-1f));
          while (1) {
            v17 = *(v15 - 6);
            v18 = *(v15 - 3);
            v19 = v17 - (float)(v18 * 0x1.0000000000000p-1f);
            v20 = v17 + (float)(v18 * 0x1.0000000000000p-1f);
            if (v19 <= *(float*)&v37 && *(float*)&v37 <= v20) {
              v22 = *(v15 - 5);
              v23 = *(v15 - 2);
              v24 = v22 - (float)(v23 * 0x1.0000000000000p-1f);
              v25 = v22 + (float)(v23 * 0x1.0000000000000p-1f);
              if (v24 <= *((float*)&v37 + 1) && *((float*)&v37 + 1) <= v25) {
                v27 = *(v15 - 4);
                v28 = *(v15 - 1);
                v29 = v27 - (float)(v28 * 0x1.0000000000000p-1f);
                v30 = v27 + (float)(v28 * 0x1.0000000000000p-1f);
                if (v29 <= *((float*)&v37 + 2) && *((float*)&v37 + 2) <= v30) {
                  break;
                }
              }
            }
            v16 = v15 + 1;
            v15 += 23;
            if (v16 == v14) {
              goto LABEL_26;
            }
          }
        }
        v32 = *(_QWORD*)(*(_QWORD*)(v2 + 240) + 24LL);
        v33 = *(__int64**)(v32 + 312);
        v34 = *(__int64**)(v32 + 320);
        if (v33 != v34) {
          v35 = *v15;
          do {
            v36 = *v33;
            v33 += 2;
            result = (*(__int64 (**)(__int64, const char*, __int64, float,
                                     long double, long double))(
                *(_QWORD*)v36 + 16LL))(v36, "InteriorMaskValue", 17, v35, v10,
                                       v11),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w"));
          } while (v33 != v34);
        }
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9),
            v10 =
                COERCE_AS(__typeof__(v10), PSEUDO_REGISTER(__n128, "v1", "=w")),
            v11 =
                COERCE_AS(__typeof__(v11), PSEUDO_REGISTER(__n128, "v2", "=w"));
        return std___1___shared_weak_count___release_weak(v9);
      }
    }
  }
  return result;
}

__int64 game_character_10b3240(__int64 result, _QWORD* a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v6;
  __int64 v7;
  unsigned __int8 explicit;
  int* v9;
  __int64 v10;
  __int64 v11;
  int v12;
  __int64 v13;
  atomic_uchar* v14;
  unsigned __int8 v15;
  int* v16;
  __int64 v17;
  __int64 v18;
  int v19;
  __int64 v20;
  __int64* v21;
  int v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  int v26;
  __int64 v27;
  __int64 v28;
  _BYTE* v29;
  _BYTE* v30;
  bool v31;
  __int64* v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  char* v36;
  __int64 v37;
  unsigned __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64* v46;
  unsigned __int64 v47;
  __int64 v48;
  __int64 v49;
  char* v50;
  __int64 v51;
  unsigned __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  unsigned __int64 v56;
  unsigned __int64 v57;
  __int64 v58;
  __int64 v59;
  double v60;
  double v61;
  __int64 v62;
  __int64 v63;
  _DWORD* v64;
  _DWORD* v65;
  __int64 v66;
  __int64 v67;
  _DWORD* v68;
  _DWORD* v69;
  _DWORD* v70;
  _QWORD v71[2];

  *(_QWORD*)(result + 8) = a2;
  v2 = a2[52];
  if (v2 == 0) {
    return result;
  }
  v3 = a2[49];
  v4 = a2[50];
  v6 = result;
  if (v4 == 0) {
    result =
        (__int64)GameRoutine_10ad920((_DWORD*)(v3 + 1432), GameData_1abbaec);
    v7 = result;
    if (result == 0) {
      return result;
    }
  LABEL_8:
    *(_QWORD*)(v6 + 24) = v7;
    explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212df10,
                                    memory_order_acquire);
    v9 = GameData_212df08;
    if ((explicit & 1) == 0 &&
        __cxa_guard_acquire((__int64)GameData_212df10) != 0) {
      *v9 = wld_Crc32(0, "ModelModule", 0xBu);
      __cxa_guard_release((__int64)GameData_212df10);
    }
    v10 = *(_QWORD*)(v2 + 512);
    v11 = v10;
    do {
      v12 = *(_DWORD*)(v11 - 16);
      v11 -= 16;
      v10 -= 16;
    } while (v12 != *v9);
    v13 = *(_QWORD*)(*(_QWORD*)(v10 + 8) + 24LL);
    v14 = (atomic_uchar*)GameData_212ed90;
    v15 = atomic_load_explicit((atomic_uchar* volatile)GameData_212ed90,
                               memory_order_acquire);
    v16 = GameData_212ed88;
    if ((v15 & 1) == 0 && __cxa_guard_acquire((__int64)GameData_212ed90) != 0) {
      *v16 = wld_Crc32(0, "AnimLayerCtrlModule", 0x13u);
      __cxa_guard_release((__int64)GameData_212ed90);
    }
    v17 = *(_QWORD*)(v2 + 512);
    v18 = v17;
    do {
      if (v18 == *(_QWORD*)(v2 + 504)) {
        goto LABEL_18;
      }
      v19 = *(_DWORD*)(v18 - 16);
      v18 -= 16;
      v17 -= 16;
    } while (v19 != *v16);
    if (*(_QWORD*)(v2 + 512) == v17) {
    LABEL_18:
      *(_QWORD*)(v6 + 16) = 0;
      v21 = (__int64*)(v6 + 16);
    }
    else {
      v20 = *(_QWORD*)(v17 + 8);
      *(_QWORD*)(v6 + 16) = v20;
      v21 = (__int64*)(v6 + 16);
      if (v20 != 0) {
      LABEL_71:
        SkeletalBlendCallback_ce3be0((_QWORD*)v20,
                                     (const char**)&GameData_2008fe0, 15, 4u, 1,
                                     0x1.0000000000000p+0f);
        SkeletalBlendCallback_ce3be0((_QWORD*)v20,
                                     (const char**)&GameData_2008fe0, 15, 5u, 1,
                                     0x1.0000000000000p+0f);
        LODWORD(v60) = 1042983595;
        AnimLayerCtrlModule_ce3880(*v21, v7 + 40, 0, v60);
        LODWORD(v61) = 1042983595;
        AnimLayerCtrlModule_ce3880(*v21, v7 + 232, 4, v61);
        v62 = a2[49];
        v63 = a2[50];
        if (v63 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v63 + 8), 1u,
                                    memory_order_relaxed);
          v64 = GameRoutine_10ad920((_DWORD*)(v62 + 1432), "BrowUp");
          if (atomic_fetch_add((atomic_ullong* volatile)(v63 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v65 = v64;
            (*(void (**)(__int64))(*(_QWORD*)v63 + 16LL))(v63);
            std___1___shared_weak_count___release_weak(v63);
            v64 = v65;
          }
        }
        else {
          v64 = GameRoutine_10ad920((_DWORD*)(v62 + 1432), "BrowUp");
        }
        if (v64 != nullptr) {
          AnimLayerCtrlModule_ce3970(*v21, (__int64)(v64 + 10), v7 + 40, 6);
        }
        v66 = a2[49];
        v67 = a2[50];
        if (v67 != 0) {
          atomic_fetch_add_explicit((atomic_ullong* volatile)(v67 + 8), 1u,
                                    memory_order_relaxed);
          v68 = GameRoutine_10ad920((_DWORD*)(v66 + 1432), GameData_1af6361);
          if (atomic_fetch_add((atomic_ullong* volatile)(v67 + 8),
                               0xFFFFFFFFFFFFFFFFLL) == 0) {
            v69 = v68;
            (*(void (**)(__int64))(*(_QWORD*)v67 + 16LL))(v67);
            std___1___shared_weak_count___release_weak(v67);
            v68 = v69;
          }
        }
        else {
          v68 = GameRoutine_10ad920((_DWORD*)(v66 + 1432), GameData_1af6361);
        }
        if (v68 != nullptr) {
          v70 = v68;
        }
        else {
          v70 = (_DWORD*)v7;
        }
        result =
            AnimLayerCtrlModule_ce3970(*v21, (__int64)(v70 + 10), v7 + 40, 7);
        if (*v21 != 0) {
          *(_DWORD*)(*(_QWORD*)(*v21 + 32) + 496LL) = 0;
          *(_DWORD*)(*(_QWORD*)(*v21 + 32) + 568LL) = 0;
        }
        return result;
      }
    }
    nn_os_LockMutex((__int64)GameData_212df28);
    v20 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         120, 16, 0);
    GameRoutine_ce3010(v20, v2, v13, 8u, 4u);
    if ((atomic_load_explicit(v14, memory_order_acquire) & 1) == 0 &&
        __cxa_guard_acquire((__int64)GameData_212ed90) != 0) {
      *v16 = wld_Crc32(0, "AnimLayerCtrlModule", 0x13u);
      __cxa_guard_release((__int64)GameData_212ed90);
    }
    v22 = *v16;
    v23 = *(_QWORD*)(v2 + 504);
    v24 = *(_QWORD*)(v2 + 512);
    v25 = v24;
    LODWORD(v71[0]) = v22;
    v71[1] = v20;
    while (v25 != v23) {
      v26 = *(_DWORD*)(v25 - 16);
      v25 -= 16;
      if (v26 == v22) {
        if ((*(_BYTE*)(v20 + 16) & 1) != 0) {
          goto LABEL_38;
        }
        goto LABEL_32;
      }
    }
    if (v23 == v24 && (unsigned __int64)(*(_QWORD*)(v2 + 520) - v23) <= 0x6F) {
      v27 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
      *(_QWORD*)(v2 + 504) = v27;
      *(_QWORD*)(v2 + 512) = v27;
      *(_QWORD*)(v2 + 520) = v27 + 112;
      if (v24 != 0) {
        v28 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v28, v23);
      }
    }
    GameRoutine_98f140((__int64*)(v2 + 504), v71);
    if ((*(_BYTE*)(v20 + 16) & 1) == 0) {
    LABEL_32:
      *(_BYTE*)(v20 + 16) = 1;
      *(_BYTE*)(v20 + 17) &= ~2u;
      *(_BYTE*)(v20 + 18) &= ~2u;
      *(_BYTE*)(v20 + 19) &= ~2u;
      *(_BYTE*)(v20 + 20) &= ~2u;
      v29 = *(_BYTE**)(v20 + 8);
      v29[632] = 0;
      v29[664] = 0;
      v29[696] = 0;
      v29[728] = 0;
      (*(void (**)(__int64))(*(_QWORD*)v20 + 64LL))(v20);
      v30 = *(_BYTE**)(v20 + 8);
      v31 = v30[300] == 3 && v30[301] == 3;
      if (v31 || v30[302] == 1) {
        (*(void (**)(__int64))(*(_QWORD*)v20 + 72LL))(v20);
      }
    }
  LABEL_38:
    v32 = *(__int64**)(v2 + 536);
    v33 = *(_QWORD*)(v2 + 544);
    if ((unsigned __int64)v32 >= v33) {
      v35 = *(_QWORD*)(v2 + 528);
      v36 = (char*)v32 - v35;
      v37 = ((__int64)v32 - v35) >> 3;
      v38 = v37 + 1;
      if ((unsigned __int64)(v37 + 1) >> 61 != 0) {
        goto LABEL_93;
      }
      v39 = v33 - v35;
      if (v39 >> 2 > v38) {
        v38 = v39 >> 2;
      }
      if ((unsigned __int64)v39 >= 0x7FFFFFFFFFFFFFF8LL) {
        v40 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v40 = v38;
      }
      if (v40 != 0) {
        if (v40 >> 61 != 0) {
          goto LABEL_94;
        }
        v41 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v40, 16, 0);
      }
      else {
        v41 = 0;
      }
      v42 = v41 + 8 * v40;
      v43 = (unsigned __int64)v32 - v35;
      v44 = (__int64)&v36[v41 + -8 * v37];
      *(_QWORD*)&v36[v41] = v20;
      v34 = (__int64)&v36[v41 + 8];
      memcpy(v44, v35, v43);
      *(_QWORD*)(v2 + 528) = v44;
      *(_QWORD*)(v2 + 536) = v34;
      *(_QWORD*)(v2 + 544) = v42;
      if (v35 != 0) {
        v45 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v45 = 56;
        }
        nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v45, v35);
      }
    }
    else {
      *v32 = v20;
      v34 = (__int64)(v32 + 1);
    }
    *(_QWORD*)(v2 + 536) = v34;
    v46 = *(__int64**)(v2 + 560);
    v47 = *(_QWORD*)(v2 + 568);
    if ((unsigned __int64)v46 < v47) {
      *v46 = v20;
      v48 = (__int64)(v46 + 1);
    LABEL_70:
      *(_QWORD*)(v2 + 560) = v48;
      GameRoutine_a8c0c0(v2);
      *(_BYTE*)(v2 + 576) = 1;
      nn_os_UnlockMutex((__int64)GameData_212df28);
      *v21 = v20;
      goto LABEL_71;
    }
    v49 = *(_QWORD*)(v2 + 552);
    v50 = (char*)v46 - v49;
    v51 = ((__int64)v46 - v49) >> 3;
    v52 = v51 + 1;
    if ((unsigned __int64)(v51 + 1) >> 61 == 0) {
      v53 = v47 - v49;
      if (v53 >> 2 > v52) {
        v52 = v53 >> 2;
      }
      if ((unsigned __int64)v53 >= 0x7FFFFFFFFFFFFFF8LL) {
        v54 = 0x1FFFFFFFFFFFFFFFLL;
      }
      else {
        v54 = v52;
      }
      if (v54 == 0) {
        v55 = 0;
      LABEL_66:
        v56 = v55 + 8 * v54;
        v57 = (unsigned __int64)v46 - v49;
        v58 = (__int64)&v50[v55 + -8 * v51];
        *(_QWORD*)&v50[v55] = v20;
        v48 = (__int64)&v50[v55 + 8];
        memcpy(v58, v49, v57);
        *(_QWORD*)(v2 + 552) = v58;
        *(_QWORD*)(v2 + 560) = v48;
        *(_QWORD*)(v2 + 568) = v56;
        if (v49 != 0) {
          v59 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v59 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v49);
        }
        goto LABEL_70;
      }
      if (v54 >> 61 == 0) {
        v55 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v54, 16, 0);
        goto LABEL_66;
      }
    LABEL_94:
      GameRoutine_60a210();
    }
  LABEL_93:
    GameRoutine_98f290();
  }
  atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                            memory_order_relaxed);
  result = (__int64)GameRoutine_10ad920((_DWORD*)(v3 + 1432), GameData_1abbaec);
  v7 = result;
  if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
    result = std___1___shared_weak_count___release_weak(v4);
  }
  if (v7 != 0) {
    goto LABEL_8;
  }
  return result;
}

__int64 game_character_10b4280(__int64 result, float a2)
{
  float32x2_t* v2;
  float32x2_t v3;
  float* v4;
  float32x2_t v5;
  float v6;
  float v7;
  float v8;
  float v9;
  float* v10;
  __int64* v11;
  int v12;
  unsigned int v13;
  unsigned int v14;
  int v15;
  unsigned int v16;
  float v17;
  float v18;
  int v19;
  unsigned int v20;
  unsigned int v21;
  int v22;
  unsigned int v23;
  float v24;
  float v25;
  int v26;
  unsigned int v27;
  unsigned int v28;
  int v29;
  unsigned int v30;
  float v31;

  v2 = *(float32x2_t**)result;
  if (*(_QWORD*)result != 0) {
    LANES64(v3).n64_u64[0] = LANES64(v2[39]).n64_u64[0];
    v4 = (float*)GameData_21d8778;
    LANES64(v5).n64_u64[0] =
        LANES64_OF(vsub_f32(*(float32x2_t*)(result + 12), v3)).n64_u64[0];
    v6 = *(float*)(GameData_21d8778 + 416);
    LANES64(v2[39]).n64_f32[0] =
        LANES64(v3).n64_f32[0] +
        (float)(PSEUDO_UNFUSED(v6 * LANES64(v5).n64_f32[0]));
    LANES64(v2[39]).n64_f32[1] =
        LANES64(v3).n64_f32[1] + vmuls_lane_f32(v6, v5, 1);
    v7 = *(float*)(result + 8) - a2;
    *(float*)(result + 8) = v7;
    if (v7 <= 0x0.0p+0f) {
      v8 = v4[100];
      v9 = v4[101];
      v10 = (float*)result;
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v11 = game_map_MapRandom_instance__ptr[0];
      v12 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL));
      v13 = *(_DWORD*)((char*)game_map_MapRandom_instance__ptr[0] +
                       (unsigned __int64)((_UNKNOWN**)0x8LL) + 4);
      v14 = *(_DWORD*)game_map_MapRandom_instance__ptr[0] ^
            (*(_DWORD*)game_map_MapRandom_instance__ptr[0] << 11);
      *(_DWORD*)game_map_MapRandom_instance__ptr[0] =
          *((_DWORD*)game_map_MapRandom_instance__ptr[0] + 1);
      *((_DWORD*)v11 + 1) = v12;
      v15 = (v14 >> 8) ^ (v13 >> 19) ^ v14 ^ v13;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11) = v13;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11 + 4) = v15;
      v16 = v15 & 0x7FFFFFFF;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      v17 = (double)v16 / 0x1.fffffffc00000p+30;
      v10[2] = v8 + (float)((float)(v9 - v8) * v17);
      v18 = v4[102];
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v19 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11);
      v20 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11 + 4);
      v21 = *(_DWORD*)v11 ^ (*(_DWORD*)v11 << 11);
      *(_DWORD*)v11 = *((_DWORD*)v11 + 1);
      *((_DWORD*)v11 + 1) = v19;
      v22 = (v21 >> 8) ^ (v20 >> 19) ^ v21 ^ v20;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11) = v20;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11 + 4) = v22;
      v23 = v22 & 0x7FFFFFFF;
      nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      v24 = (double)v23 / 0x1.fffffffc00000p+30;
      v10[3] = -(float)(v18 - (float)((float)(v18 + v18) * v24));
      v25 = v4[103];
      nn_os_LockMutex((__int64)&game_g_random_mutex);
      v26 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11);
      v27 = *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11 + 4);
      v28 = *(_DWORD*)v11 ^ (*(_DWORD*)v11 << 11);
      *(_DWORD*)v11 = *((_DWORD*)v11 + 1);
      *((_DWORD*)v11 + 1) = v26;
      v29 = (v28 >> 8) ^ (v27 >> 19) ^ v28 ^ v27;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11) = v27;
      *(_DWORD*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v11 + 4) = v29;
      v30 = v29 & 0x7FFFFFFF;
      result = nn_os_UnlockMutex((__int64)&game_g_random_mutex);
      v31 = (double)v30 / 0x1.fffffffc00000p+30;
      v10[4] = -(float)(v25 - (float)((float)(v25 + v25) * v31));
    }
  }
  return result;
}

void game_character_10b4f00(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  const char* v6;
  __int64 v8;
  int v9;
  __int64 v10;
  int v11;
  unsigned __int64 v12;
  __int64 v13;
  int v14;
  __int64 v15;
  __int64 v16;
  bool v17;
  unsigned __int64 v18;
  unsigned __int16* v19;
  unsigned __int64 v20;
  __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  int v24;
  __int64 v25;
  __int64 v26;
  unsigned __int64 v27;
  unsigned __int16* v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  int v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  unsigned __int16* v36;
  unsigned __int64 v37;
  const char* v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  unsigned __int16* v42;
  __int64 v43;
  unsigned __int64 v44;
  float32x4_t v45;
  __int64 v46;
  __int64 v47;
  int v48;
  unsigned __int64 v49;
  __int64 v50;
  float32x4_t v51;
  float32x4_t v52;
  float32x4_t v53;
  signed __int32 v54;
  signed __int32 i;
  signed __int32 v56;
  unsigned __int64 v58;
  __int64 v59;
  float32x4_t v60;
  __int64 v61;
  __int64 v63;
  float32x4_t v64[4];
  float32x4_t v65[2];

  *(_QWORD*)a1 = a2;
  v3 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 112) + 24LL) + 8LL);
  v63 = *(_QWORD*)(*(_QWORD*)(a2 + 112) + 24LL);
  if (v3 != 0) {
    v4 = v3 + 12;
    v5 = v3 + 8;
    v6 = *(const char**)a3;
    v8 = *(unsigned __int16*)(v3 + 12);
    v9 = *(_DWORD*)(v3 + 8);
    v61 = *(_QWORD*)(a2 + 168);
    v10 = v3 + 8 + 16 * v8;
    v11 = *(_DWORD*)v10;
    if (*(_QWORD*)a3 != 0) {
      v12 = strlen(v6);
    }
    else {
      v12 = 0;
    }
    v13 = v3 + 8 + 16 * v8;
    if (v9 < v11) {
      v14 = v11;
      v15 = v8;
      do {
        v18 = (__int64)v14 >> 3;
        if (v12 > v18) {
          v16 = ((unsigned __int8)v6[v12 + ~v18] >> (v14 & 7)) & 1;
        }
        else {
          v16 = 0;
        }
        v15 = *(unsigned __int16*)(v4 + 16 * v15 + 2 * v16);
        v17 = v14 < (signed __int32)*(_DWORD*)(v5 + 16 * v15);
        v14 = *(_DWORD*)(v5 + 16 * v15);
      } while (v17);
      v13 = v5 + 16 * v15;
    }
    v19 = *(unsigned __int16**)(v13 + 8);
    if (v12 == *v19 && memcmp((__int64)(v19 + 1), (__int64)v6, v12) == 0) {
      v59 = v3 + 24;
      v20 = (unsigned __int64)(v13 - (v3 + 24)) >> 4;
      if ((_DWORD)v20 != -1) {
        v21 = *(_QWORD*)(a3 + 8);
        if (v21 != 0) {
          v22 = strlen(*(const char**)(a3 + 8));
        }
        else {
          v22 = 0;
        }
        v23 = v3 + 8 + 16 * v8;
        if (v9 < v11) {
          v24 = v11;
          v25 = v8;
          do {
            v27 = (__int64)v24 >> 3;
            if (v22 > v27) {
              v26 = (*(unsigned __int8*)(v21 + v22 + ~v27) >> (v24 & 7)) & 1;
            }
            else {
              v26 = 0;
            }
            v25 = *(unsigned __int16*)(v4 + 16 * v25 + 2 * v26);
            v17 = v24 < (signed __int32)*(_DWORD*)(v5 + 16 * v25);
            v24 = *(_DWORD*)(v5 + 16 * v25);
          } while (v17);
          v23 = v5 + 16 * v25;
        }
        v28 = *(unsigned __int16**)(v23 + 8);
        if (v22 == *v28 && memcmp((__int64)(v28 + 1), v21, v22) == 0) {
          v58 = (unsigned __int64)(v23 - v59) >> 4;
          if ((_DWORD)v58 != -1) {
            v29 = *(_QWORD*)(a3 + 16);
            if (v29 != 0) {
              v30 = strlen(*(const char**)(a3 + 16));
            }
            else {
              v30 = 0;
            }
            v31 = v10;
            if (v9 < v11) {
              v32 = v11;
              v33 = v8;
              do {
                v35 = (__int64)v32 >> 3;
                if (v30 > v35) {
                  v34 =
                      (*(unsigned __int8*)(v29 + v30 + ~v35) >> (v32 & 7)) & 1;
                }
                else {
                  v34 = 0;
                }
                v33 = *(unsigned __int16*)(v4 + 16 * v33 + 2 * v34);
                v17 = v32 < (signed __int32)*(_DWORD*)(v5 + 16 * v33);
                v32 = *(_DWORD*)(v5 + 16 * v33);
              } while (v17);
              v31 = v5 + 16 * v33;
            }
            v36 = *(unsigned __int16**)(v31 + 8);
            if (v30 == *v36 && memcmp((__int64)(v36 + 1), v29, v30) == 0) {
              v37 = (unsigned __int64)(v31 - v59) >> 4;
              if ((_DWORD)v37 != -1) {
                v38 = *(const char**)(a3 + 24);
                if (v38 != nullptr) {
                  v39 = strlen(v38);
                }
                else {
                  v39 = 0;
                }
                if (v9 < v11) {
                  do {
                    v41 = (__int64)v11 >> 3;
                    if (v39 > v41) {
                      v40 = ((unsigned __int8)v38[v39 + ~v41] >> (v11 & 7)) & 1;
                    }
                    else {
                      v40 = 0;
                    }
                    v8 = *(unsigned __int16*)(v4 + 16 * v8 + 2 * v40);
                    v17 = v11 < (signed __int32)*(_DWORD*)(v5 + 16 * v8);
                    v11 = *(_DWORD*)(v5 + 16 * v8);
                  } while (v17);
                  v10 = v5 + 16 * v8;
                }
                v42 = *(unsigned __int16**)(v10 + 8);
                if (v39 == *v42 &&
                    memcmp((__int64)(v42 + 1), (__int64)v38, v39) == 0) {
                  v43 = v10 - v59;
                  v44 = (unsigned __int64)(v10 - v59) >> 4;
                  if ((_DWORD)v44 != -1) {
                    GameHr_10d93e0((_QWORD*)a1, v20);
                    GameHr_10d93e0((_QWORD*)a1, v58);
                    GameHr_10d93e0((_QWORD*)a1, v37);
                    v45 = COERCE_AS(float32x4_t, math_6225d0()[3]);
                    if ((_DWORD)v44 != 0) {
                      v46 = v63;
                      while (1) {
                        v47 = *(_QWORD*)(v63 + 16) + 96LL * (int)v44;
                        v48 = *(_DWORD*)(v47 + 52);
                        if ((v48 & 0x3000000) != 0) {
                          if ((v48 & 0x4000000) != 0) {
                            goto LABEL_60;
                          }
                        }
                        else {
                          LODWORD(v49) = 0;
                          v50 = *(_QWORD*)(v47 + 56);
                          HIDWORD(v49) = HIDWORD(v50);
                          LANES128(v51).n128_u64[0] = 0;
                          LANES128(v51).n128_u64[1] =
                              *(unsigned int*)(v47 + 64);
                          v45 = vaddq_f32(
                              vmlaq_laneq_f32(
                                  vmlaq_lane_f32(
                                      vmulq_n_f32(COERCE_AS(float32x4_t,
                                                            (unsigned int)v50),
                                                  LANES128(v45).n128_f32[0]),
                                      COERCE_AS(float32x4_t, v49),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v45).n128_u64[0]),
                                      1),
                                  v51, v45, 2),
                              COERCE_AS(float32x4_t, 0));
                          if ((v48 & 0x4000000) != 0) {
                          LABEL_60:
                            if ((v48 & 0x8000000) == 0) {
                              goto LABEL_64;
                            }
                            goto LABEL_57;
                          }
                        }
                        LANES128(v52).n128_u64[0] = *(_QWORD*)(v47 + 68);
                        v60 = v45;
                        LANES128(v52).n128_u64[1] = *(unsigned int*)(v47 + 76);
                        v64[0] = v52;
                        math_Quat_FromEulerianAngle((void*)((float*)v65),
                                                    (float*)v64);
                        math_6221a0((void*)(v64), v65);
                        v45 = vaddq_f32(
                            v64[3],
                            vmlaq_laneq_f32(
                                vmlaq_lane_f32(
                                    vmulq_n_f32(v64[0],
                                                LANES128(v60).n128_f32[0]),
                                    v64[1],
                                    COERCE_AS(float32x2_t,
                                              LANES128(v60).n128_u64[0]),
                                    1),
                                v64[2], v60, 2));
                        if ((v48 & 0x8000000) == 0) {
                        LABEL_64:
                          LANES128(v53).n128_u64[0] = *(_QWORD*)(v47 + 84);
                          LANES128(v53).n128_u64[1] =
                              *(unsigned int*)(v47 + 92);
                          v45 = vaddq_f32(
                              vmlaq_laneq_f32(
                                  vmlaq_lane_f32(
                                      vmulq_n_f32(COERCE_AS(float32x4_t,
                                                            GameData_1a82dd0),
                                                  LANES128(v45).n128_f32[0]),
                                      COERCE_AS(float32x4_t, GameData_1a83610),
                                      COERCE_AS(float32x2_t,
                                                LANES128(v45).n128_u64[0]),
                                      1),
                                  COERCE_AS(float32x4_t, GameData_1a83090), v45,
                                  2),
                              v53);
                        }
                      LABEL_57:
                        v44 = *(unsigned __int16*)(v47 + 42);
                        if (v44 == 0) {
                          goto LABEL_66;
                        }
                      }
                    }
                    v46 = v63;
                  LABEL_66:
                    *(_DWORD*)(a1 + 96) = LANES128(v45).n128_u32[1];
                    *(_QWORD*)(a1 + 80) =
                        *(_QWORD*)(v61 + 32) + ((__int64)(int)(v43 >> 4) << 6);
                    GameRoutine_10d9570((_QWORD*)a1);
                    v54 = *(unsigned __int16*)(v46 + 56);
                    for (i = v20 + 1; i < v54; ++i) {
                      if (i != 0 && i != (_DWORD)v58 && i != (_DWORD)v37) {
                        v56 = i;
                        do {
                          v56 = *(unsigned __int16*)(*(_QWORD*)(v63 + 16) +
                                                     96LL * v56 + 42);
                        } while (v56 != 0 && (_DWORD)v20 != v56);
                        if (v56 != 0) {
                          LANES128(v64[0]).n128_u32[0] = i;
                          GameRoutine_7d6200((__int64*)(a1 + 32), v64);
                          v54 = *(unsigned __int16*)(v63 + 56);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

float game_character_10b9f40(int32x2_t* a1, _QWORD* a2, __int64 a3, char a4)
{
  unsigned __int64 v8;
  __int64 v9;
  const char* v10;
  const char* v11;
  unsigned __int64 v12;
  const char* v13;
  const char* v14;
  float32x4_t v15;
  __int16 v16;
  __int16 v17;
  float32x4_t v18;
  unsigned __int64 v19;
  __int64 v20;
  unsigned __int32 v21;
  __int64 v22;
  __int64 v23;
  unsigned int v24;
  __int64 v25;
  __int64 v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  bool v30;
  float* v31;
  _BOOL4 v32;
  _BOOL4 v33;
  int8x16_t v34;
  int32x2_t* v35;
  int8x16_t v36;
  int32x2_t* v37;
  _DWORD* v38;
  int v39;
  int v40;
  int v41;
  float v42;
  float* v43;
  int* v44;
  float v45;
  float v46;
  float v47;
  float v48;
  float* v49;
  int32x2_t* v50;
  int32x2_t* v51;
  __int64 v52;
  unsigned __int32 v53;
  __int64 v54;
  float v55;
  int16x4_t v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float v66;
  bool v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  bool v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  bool v87;
  bool v88;
  bool v89;
  bool v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float* v96;
  float v97;
  float v98;
  float v99;
  float v100;
  float v101;
  float v102;
  float v103;
  float v104;
  float v105;
  float v106;
  float v107;
  float v108;
  float* v109;
  float* v110;
  float v111;
  float v112;
  float v113;
  float v114;
  float v115;
  float v116;

  v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
  v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w"));
  LODWORD(v8) = game_GameModeData_instance_;
  if (game_GameModeData_instance_ != 0) {
    v9 = *(_QWORD*)(game_GameModeData_instance_ + 16);
    if (v9 == 0) {
      goto LABEL_18;
    }
    v10 = *(const char**)(v9 + 8);
    if (strcmp(v10, "SC00_01") == 0) {
      LODWORD(v8) = 1;
      goto LABEL_21;
    }
    if (strcmp(v10, "SC00_16") == 0) {
      LODWORD(v8) = 2;
      goto LABEL_21;
    }
    v11 = *(_QWORD*)(v9 + 112) != 0 ? *(const char**)(v9 + 112)
                                    : &GameData_1a9f09e;
    v12 = strlen(v11),
    v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
    v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w"));
    if (v12 == 0) {
    LABEL_18:
      LODWORD(v8) = 0;
      goto LABEL_21;
    }
    v8 = v12;
    while (v8 != 0) {
      v13 = &v11[v8--];
      if (*(v13 - 1) == 47) {
        if (v8 == -1) {
          goto LABEL_18;
        }
        if (v8 >= v12) {
          String_60a250("string_view::substr"),
              v62 = COERCE_AS(__typeof__(v62),
                              PSEUDO_REGISTER(float, "s0", "=w")),
              v71 = COERCE_AS(__typeof__(v71),
                              PSEUDO_REGISTER(float, "s0", "=w"));
        }
        v14 = &v11[v8];
        if (strcmp(v14 + 1, "Btl_008") != 0) {
          if (strcmp(v14 + 1, "Btl_011") != 0) {
            LODWORD(v8) = 0;
          }
          else {
            LODWORD(v8) = 4;
          }
        }
        else {
          LODWORD(v8) = 3;
        }
        break;
      }
    }
  }
LABEL_21:
  LANES64(a1[10]).n64_u32[0] = v8;
  LANES128(v15).n128_u64[0] = 0x40A0000040A00000LL;
  LANES128(v15).n128_u64[1] = 0x40A0000040A00000LL;
  v16 = *(_WORD*)(a2[1413] + 248LL);
  LANES64(a1[9]).n64_u8[5] = (v16 & 0x80) != 0;
  v17 = *(_WORD*)(a2[1413] + 248LL);
  LANES64(a1[9]).n64_u8[6] = a4 & 1;
  LANES64(a1[9]).n64_u8[4] = (v17 & 4) != 0;
  v18 = vmulq_f32(*(float32x4_t*)(a2[1413] + 224LL), v15);
  LANES64(a1[7]).n64_u64[0] =
      LANES64_OF(
          vzip1_s32(COERCE_AS(int32x2_t, LANES128(v18).n128_u64[0]),
                    COERCE_AS(int32x2_t,
                              LANES128_OF(vextq_s8(v18, v18, 8u)).n128_u64[0])))
          .n64_u64[0];
  v19 = *(_QWORD*)(a2[1413] + 240LL);
  if (v19 != 0) {
    v19 = *(_QWORD*)(v19 + 336);
  }
  LANES64(a1[11]).n64_u64[0] = v19;
  v20 = a2[1413];
  if ((*(_WORD*)(v20 + 248) & 2) != 0) {
    v21 = *(_DWORD*)(v20 + 252);
    LANES64(a1[9]).n64_u8[0] = 1;
    LANES64(a1[8]).n64_u32[1] = v21;
  }
  v22 = a2[5];
  if (v22 != 0 && (v23 = *(_QWORD*)(v22 + 440)) != 0) {
    v24 = *(unsigned __int8*)(v23 + 16);
    v25 = a2[100];
    if (v25 == 0) {
      goto LABEL_34;
    }
  }
  else {
    v24 = 9;
    v25 = a2[100];
    if (v25 == 0) {
      goto LABEL_34;
    }
  }
  v26 = *(_QWORD*)(v25 + 440);
  if (v26 != 0) {
    v27 = *(unsigned __int8*)(v26 + 16);
    if (v24 <= 3) {
      goto LABEL_35;
    }
    goto LABEL_32;
  }
LABEL_34:
  v27 = 9;
  if (v24 <= 3) {
  LABEL_35:
    v28 = GameData_1a835a0[v24];
    if (v27 > 3) {
      goto LABEL_36;
    }
  LABEL_33:
    v29 = GameData_1a835a0[v27];
    goto LABEL_37;
  }
LABEL_32:
  v28 = 2;
  if (v27 <= 3) {
    goto LABEL_33;
  }
LABEL_36:
  v29 = 2;
LABEL_37:
  v30 = v28 > v29;
  v31 = (float*)&a1[4];
  v32 = v28 > v29;
  v33 = v28 <= v29;
  v34 = *(int8x16_t*)(a2[1413] + 80LL);
  v35 = &a1[(v28 > v29) + 4];
  LANES64(*(v35)).n64_u64[0] =
      LANES64_OF(
          vzip1_s32(COERCE_AS(int32x2_t, LANES128(v34).n128_u64[0]),
                    COERCE_AS(int32x2_t,
                              LANES128_OF(vextq_s8(v34, v34, 8u)).n128_u64[0])))
          .n64_u64[0];
  v36 = *(int8x16_t*)(a2[1413] + 176LL);
  v37 = &a1[v33 + 4];
  LANES64(*(v37)).n64_u64[0] =
      LANES64_OF(
          vzip1_s32(COERCE_AS(int32x2_t, LANES128(v36).n128_u64[0]),
                    COERCE_AS(int32x2_t,
                              LANES128_OF(vextq_s8(v36, v36, 8u)).n128_u64[0])))
          .n64_u64[0];
  v38 = (_DWORD*)a2[1413];
  v39 = v38[8];
  v40 = v38[9];
  v41 = v38[10];
  v42 = (float)(v38[11] + 1);
  v43 = (float*)&a1[2 * v32];
  v43[2] = (float)(v41 + 1) * 0x1.4000000000000p+2f;
  v43[3] = v42 * 0x1.4000000000000p+2f;
  *v43 = (float)v39 * 0x1.4000000000000p+2f;
  v43[1] = (float)v40 * 0x1.4000000000000p+2f;
  v44 = (int*)a2[1413];
  v45 = (float)v44[32];
  v46 = (float)v44[33];
  v47 = (float)(v44[34] + 1);
  v48 = (float)(v44[35] + 1);
  v49 = (float*)&a1[2 * v33];
  v50 = a1 + 8;
  if (v30) {
    v51 = (int32x2_t*)((char*)a1 + 65);
  }
  else {
    v51 = a1 + 8;
  }
  if (!v30) {
    v50 = (int32x2_t*)((char*)a1 + 65);
  }
  *v49 = v45 * 0x1.4000000000000p+2f;
  v49[1] = v46 * 0x1.4000000000000p+2f;
  v49[2] = v47 * 0x1.4000000000000p+2f;
  v49[3] = v48 * 0x1.4000000000000p+2f;
  LANES64(*(v51)).n64_u8[0] = a2[5] != 0;
  LANES64(*(v50)).n64_u8[0] = a2[100] != 0;
  v52 = a2[5];
  if (v52 != 0) {
    v53 = *(_DWORD*)(v52 + 592);
  }
  else {
    v53 = 0;
  }
  LANES64(a1[6]).n64_u32[v32] = v53;
  v54 = a2[100];
  if (v54 != 0) {
    LODWORD(v54) = *(_DWORD*)(v54 + 592);
  }
  LANES64(a1[6]).n64_u32[v33] = v54;
  v55 = LANES128(v36).n128_f32[2];
  LANES64(v56).n64_u64[0] =
      LANES64_OF(vmovn_s32(vceqq_f32(*(float32x4_t*)(a2[1413] + 80LL),
                                     *(float32x4_t*)(a2[1413] + 176LL))))
          .n64_u64[0];
  if ((LANES64(v56).n64_u8[0] & 1) != 0 && (LANES64(v56).n64_u8[2] & 1) != 0 &&
      (LANES64(v56).n64_u8[4] & 1) != 0) {
    v57 = LANES128(v18).n128_f32[2];
    if (fabsf(LANES128(v18).n128_f32[0]) >= fabsf(LANES128(v18).n128_f32[2])) {
      v58 = LANES64(a1[1]).n64_f32[0] - LANES64(*(a1)).n64_f32[0];
      if (v58 >= 0x1.4000000000000p+4f) {
        goto LABEL_57;
      }
      v59 = LANES64(a1[1]).n64_f32[1];
      v60 = LANES64(*(a1)).n64_f32[1];
    }
    else {
      v58 = LANES64(a1[1]).n64_f32[1] - LANES64(*(a1)).n64_f32[1];
      if (v58 >= 0x1.4000000000000p+4f) {
        goto LABEL_57;
      }
      v59 = LANES64(a1[1]).n64_f32[0];
      v60 = LANES64(*(a1)).n64_f32[0];
    }
    if (v58 < (float)(v59 - v60)) {
      v61 = LANES128(v18).n128_f32[0];
      LANES64(a1[7]).n64_u32[0] = LANES128(v18).n128_u32[2];
      LANES64(a1[7]).n64_u32[1] = LANES128(v18).n128_u32[0];
    LABEL_58:
      LANES128(v36).n128_f32[0] = v57 + LANES128(v36).n128_f32[0];
      v55 = v61 + LANES128(v36).n128_f32[2];
      LANES64(*(v37)).n64_u32[0] = LANES128(v36).n128_u32[0];
      LANES64(*(v37)).n64_f32[1] = v61 + LANES128(v36).n128_f32[2];
      goto LABEL_59;
    }
  LABEL_57:
    v61 = LANES128(v18).n128_f32[2];
    v57 = LANES128(v18).n128_f32[0];
    goto LABEL_58;
  }
LABEL_59:
  if ((v16 & 0x80) != 0) {
    GameRoutine_111d7a0(a3, 0),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w"));
    v63 = LANES64(a1[4]).n64_f32[0];
    v64 = v62 + LANES64(*(a1)).n64_f32[0];
    v65 = v62 + LANES64(*(a1)).n64_f32[1];
    v66 = LANES64(a1[1]).n64_f32[1];
    v67 = v63 < v64;
    if (v63 >= v64) {
      v64 = LANES64(a1[4]).n64_f32[0];
    }
    v68 = LANES64(a1[1]).n64_f32[0] - v62;
    if (v67 || v64 > v68) {
      if (v64 <= v68) {
        v68 = v64;
      }
      *v31 = v68;
    }
    v69 = v66 - v62;
    v70 = LANES64(a1[4]).n64_f32[1];
    if (v70 < v65 || (v65 = LANES64(a1[4]).n64_f32[1], v70 > v69)) {
      if (v65 <= v69) {
        v69 = v65;
      }
      LANES64(a1[4]).n64_f32[1] = v69;
    }
    GameRoutine_111d7a0(a3, 1),
        v62 = COERCE_AS(__typeof__(v62), PSEUDO_REGISTER(float, "s0", "=w")),
        v71 = COERCE_AS(__typeof__(v71), PSEUDO_REGISTER(float, "s0", "=w"));
    v72 = LANES64(a1[5]).n64_f32[0];
    v73 = v71 + LANES64(a1[2]).n64_f32[0];
    v74 = v71 + LANES64(a1[2]).n64_f32[1];
    v75 = LANES64(a1[3]).n64_f32[1];
    v76 = v72 < v73;
    if (v72 >= v73) {
      v73 = LANES64(a1[5]).n64_f32[0];
    }
    v77 = LANES64(a1[3]).n64_f32[0] - v71;
    if (v76 || v73 > v77) {
      if (v73 <= v77) {
        v77 = v73;
      }
      LANES64(a1[5]).n64_f32[0] = v77;
    }
    LANES128(v34).n128_f32[0] = v75 - v71;
    v78 = LANES64(a1[5]).n64_f32[1];
    if (v78 < v74 ||
        (v74 = LANES64(a1[5]).n64_f32[1], v78 > LANES128(v34).n128_f32[0])) {
      if (v74 <= LANES128(v34).n128_f32[0]) {
        LANES128(v34).n128_f32[0] = v74;
      }
      LANES64(a1[5]).n64_u32[1] = LANES128(v34).n128_u32[0];
    }
  }
  else if ((v17 & 4) != 0) {
    v79 = LANES64(a1[1]).n64_f32[0];
    v80 = LANES64(a1[2]).n64_f32[0];
    if (v79 >= v80) {
      v81 = LANES64(a1[3]).n64_f32[0];
      v82 = LANES64(*(a1)).n64_f32[0];
      if (v81 >= LANES64(*(a1)).n64_f32[0]) {
        v83 = LANES64(a1[1]).n64_f32[1];
        v84 = LANES64(a1[2]).n64_f32[1];
        if (v83 >= v84) {
          v85 = LANES64(a1[3]).n64_f32[1];
          v86 = LANES64(*(a1)).n64_f32[1];
          if (v85 >= v86) {
            v87 = v81 == v82 || v79 == v80;
            v88 = !v87;
            v89 = v85 == v86 || v83 == v84;
            v90 = !v89;
            if (v88 || v90) {
              v91 = v81 - v80;
              v92 = 0x0.0p+0f;
              v93 = 0x0.0p+0f;
              if (v91 >= 0x1.e000000000000p+3f) {
                v94 = v85 - v84;
                if (v94 >= 0x1.e000000000000p+3f) {
                  v93 = v91 * v94;
                }
              }
              v95 = v79 - v82;
              if (v95 >= 0x1.e000000000000p+3f &&
                  (float)(v83 - v86) >= 0x1.e000000000000p+3f) {
                v92 = v95 * (float)(v83 - v86);
              }
              v96 = (float*)&a1[2 * (v93 > v92)];
              if (LANES64(a1[6]).n64_i32[0] <= 1 &&
                      LANES64(a1[6]).n64_i32[1] < 2 ||
                  (v115 = v96[2] - *v96) >= 0x1.e000000000000p+3f &&
                      (v116 = v96[3] - v96[1]) >= 0x1.e000000000000p+3f &&
                      (float)(v115 * v116) > 0x0.0p+0f) {
                v97 = LANES128(v36).n128_f32[0] - LANES128(v34).n128_f32[0];
                v98 = v55 - LANES128(v34).n128_f32[2];
                v99 = (float)(PSEUDO_UNFUSED(v98 * v98)) + (float)(v97 * v97);
                v100 = 0x1.0000000000000p+0f;
                v101 = 0x1.0000000000000p+0f;
                if (v99 >= 0x1.0000000000000p-23f) {
                  v102 = 0x1.0000000000000p+0f / sqrtf(v99);
                  v103 = v97 * v102;
                  v104 = v98 * v102;
                  v100 = v103 == 0x0.0p+0f ? 0x1.0000000000000p+0f : v103;
                  if (v104 != 0x0.0p+0f) {
                    v101 = v104;
                  }
                }
                v105 = v96[2];
                v106 = v96[3];
                v107 = *v96;
                v108 = v96[1];
                v109 = (float*)&a1[2 * (v93 <= v92)];
                v110 = &v31[2 * (v93 > v92)];
                LANES64(a1[9]).n64_u8[4] = 0;
                v111 = v105 - v107;
                v112 = v106 - v108;
                v109[2] = v105;
                v109[3] = v106;
                v113 = *v110;
                v114 = v110[1];
                *v109 = v107;
                v109[1] = v108;
                if (v111 > v112) {
                  v101 = 0x0.0p+0f;
                }
                else {
                  v100 = 0x0.0p+0f;
                }
                LANES64(*(v37)).n64_f32[0] = v113;
                LANES64(*(v37)).n64_f32[1] = v114;
                LANES128(v34).n128_f32[0] = v113 - v100;
                LANES64(*(v35)).n64_u32[0] = LANES128(v34).n128_u32[0];
                LANES64(*(v35)).n64_f32[1] = v114 - v101;
              }
            }
          }
        }
      }
    }
  }
  return LANES128(v34).n128_f32[0];
}

#pragma GCC visibility pop
