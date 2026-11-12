#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__attribute__((swiftcall)) void BlendLayer_d2b700(PSEUDO_X8, __int64*);
__attribute__((swiftcall)) void collision_670c60(PSEUDO_X8, float32x4_t* result,
                                                 float32x4_t*, __int64);
__attribute__((swiftcall)) void collision_672120(PSEUDO_X8, __int128*, __int64,
                                                 float);
__attribute__((swiftcall)) void memory_a6ea10(PSEUDO_X8, __int64, int);
__int64 AnimLayerCtrlModule_ce3880(__int64, __int64, int);
__int64 GameRoutine_2b0();
__int64 GameRoutine_ce3010(__int64, __int64, __int64, unsigned int,
                           unsigned int);
__int64 ResFile_5e5f00(__int64);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 memcpy(__int64, __int64, unsigned __int64);
__int64 nn_os_LockMutex(__int64);
__int64 nn_os_UnlockMutex(__int64);
__int64 std___1___shared_weak_count___release_weak(__int64);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
bool GameRoutine_ad7390(_QWORD*);
extern _DWORD* GameData_212d280;
extern _QWORD GameData_21fdd90[];
extern _UNKNOWN* GameData_212df10;
extern _UNKNOWN* GameData_212df28;
extern _UNKNOWN* GameData_212ed90;
extern _UNKNOWN GameData_1bb2498;
extern _UNKNOWN GameData_21fde98;
extern __int128 GameData_1a82fa0;
extern __int64 fw_memory_g_heap_manager_ptr;
extern int* GameData_212df08;
extern int* GameData_212ed88;
extern int GameData_2235720;
float GameRoutine_1117fb0(__int128*, int8x16_t*, float);
float SkeletalBlendCallback_ce4db0(__int64, int, long double);
int __cxa_guard_acquire(__int64);
void GameHr_a5aca0(__int64);
void GameRoutine_1118720(__int64*, _QWORD*);
void GameRoutine_98f140(__int64*, _QWORD*);
void GameRoutine_a8c0c0(__int64);
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) GameRoutine_98f290();
void __cxa_guard_release(__int64);
void nn_mem_StandardAllocator_Free(__int64, __int64);
void game_character_10b3d80(__int64 a1);
__int64 game_character_10b5460(__int64 result);
void game_character_11182e0(__int128* a1);

void game_character_10b3d80(__int64 a1)
{

#pragma clang fp contract(off)
  __int64 v1;
  long double v3;
  long double v4;
  float v5;
  float v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  float v10;
  int* v11;
  int* v12;
  int v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  struct {
    int* v21;
    int* v22;
  } v21_;

  v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
  if (*(_QWORD*)(a1 + 16) != 0 && **(_DWORD**)a1 == 0) {
    v1 = *(_QWORD*)(a1 + 32);
    if (v1 != 0 && *(_QWORD*)(v1 + 160) != 0) {
      AnimLayerCtrlModule_ce3880(*(_QWORD*)(a1 + 16),
                                 *(_QWORD*)(a1 + 24) + 136LL, 2),
          v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
      AnimLayerCtrlModule_ce3880(*(_QWORD*)(a1 + 16),
                                 *(_QWORD*)(a1 + 32) + 136LL, 3),
          v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
      *(float*)&v4 = SkeletalBlendCallback_ce4db0(*(_QWORD*)(a1 + 16), 2, v3),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v5 = *(float*)&v4;
      v6 = SkeletalBlendCallback_ce4db0(*(_QWORD*)(a1 + 16), 3, v4),
      v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
      v7 = *(_QWORD*)(a1 + 16);
      v8 = a1;
      v9 = *(_QWORD*)(v7 + 32);
      if (*(_BYTE*)(v9 + 196) == 1) {
        v10 = v6;
        BlendLayer_d2b700(
            (void*)((__int64*)&v21_.v21),
            (__int64*)(*(_QWORD*)(v9 + 168) + 56LL * *(int*)(v9 + 192))),
            v3 = COERCE_AS(__typeof__(v3), PSEUDO_REGISTER(__n128, "v0", "=w"));
        v11 = v21_.v21;
        v12 = v21_.v22;
        if (v21_.v21 != v21_.v22) {
          do {
            v13 = *v11++;
            *(float*)(*(_QWORD*)(*(_QWORD*)(v7 + 24) + 72LL) + 104LL * v13 +
                      8) = v5 / v10;
          } while (v11 != v12);
          v11 = v21_.v21;
        }
        v8 = a1;
        if (v11 != nullptr) {
          v21_.v22 = v11;
          v14 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v14 = 56;
          }
          nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v14, (__int64)v11),
              v3 = COERCE_AS(__typeof__(v3),
                             PSEUDO_REGISTER(__n128, "v0", "=w"));
          v8 = a1;
        }
      }
      v15 = *(_QWORD*)(v8 + 8);
      if (v15 != 0) {
        v16 = *(_QWORD*)(v15 + 120);
        v17 = *(_QWORD*)(v16 + 312);
        v18 = *(_QWORD*)(v16 + 320);
        *(_BYTE*)(v16 + 336) = 1;
        while (v17 != v18) {
          if (*(_DWORD*)v17 != 0) {
            v19 = *(_QWORD*)(v17 + 16);
            if (v19 == 0 || *(_QWORD*)(v19 + 8) == -1) {
              goto LABEL_16;
            }
            LODWORD(v21_.v21) = 0;
            v20 = *(_QWORD*)(v17 + 64);
            if (v20 == 0) {
              GameRoutine_60a310(),
                  v3 = COERCE_AS(__typeof__(v3),
                                 PSEUDO_REGISTER(__n128, "v0", "=w"));
            }
            (*(void (**)(__int64, int**))(*(_QWORD*)v20 + 48LL))(v20,
                                                                 &v21_.v21),
                v3 = COERCE_AS(__typeof__(v3),
                               PSEUDO_REGISTER(__n128, "v0", "=w"));
            if ((*(_DWORD*)v17 & 0x80000000) != 0) {
            LABEL_16:
              *(_DWORD*)v17 = 0;
            }
          }
          v17 += 80;
        }
        *(_BYTE*)(v16 + 336) = 0;
      }
    }
  }
}

__int64 game_character_10b5460(__int64 result)
{
  __int64 v1;
  _QWORD* v2;
  __int64 v4;
  unsigned __int8 explicit;
  int* v6;
  __int64 v7;
  __int64 v8;
  int v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  _QWORD* v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  int v23;
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
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
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
  __int64 v53;
  __int64 v54;
  bool v55;
  __int64 v56;
  bool v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  atomic_uchar* v69;
  unsigned __int8 v70;
  int* v71;
  __int64 v72;
  __int64 v73;
  int v74;
  __int64 v75;
  __int64* v76;
  __int64 v77;
  __int64 v78;
  int v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  int v83;
  __int64 v84;
  __int64 v85;
  _BYTE* v86;
  _BYTE* v87;
  bool v88;
  __int64* v89;
  unsigned __int64 v90;
  __int64 v91;
  __int64 v92;
  char* v93;
  __int64 v94;
  unsigned __int64 v95;
  __int64 v96;
  unsigned __int64 v97;
  __int64 v98;
  unsigned __int64 v99;
  unsigned __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64* v103;
  unsigned __int64 v104;
  __int64 v105;
  __int64 v106;
  char* v107;
  __int64 v108;
  unsigned __int64 v109;
  __int64 v110;
  unsigned __int64 v111;
  __int64 v112;
  unsigned __int64 v113;
  unsigned __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  bool v119;
  __int64 v120;
  __int64 v121;
  int v122;
  __int64 v123;
  int v124;
  struct {
    __int64 v125;
    __int64 v126;
    __int64 v127;
    __int64 v128;
    __int64 v129;
    __int64 v130;
    __int64 v131;
    __int64 v132;
    __int64 v133;
  } v125_;

  v1 = *(_QWORD*)(result + 32);
  if (v1 != 0) {
    v2 = *(_QWORD**)(result + 40);
    if (*(_QWORD*)(v1 + 8) != -1 && v2 != nullptr) {
      v4 = v2[54];
      if (v4 != 0 || (v4 = v2[55]) != 0) {
        explicit = atomic_load_explicit(
            (atomic_uchar* volatile)GameData_212df10, memory_order_acquire);
        v6 = GameData_212df08;
        if ((explicit & 1) == 0) {
          v121 = result;
          v122 = __cxa_guard_acquire((__int64)GameData_212df10);
          result = v121;
          if (v122 != 0) {
            *v6 = wld_Crc32(0, "ModelModule", 0xBu);
            __cxa_guard_release((__int64)GameData_212df10);
            result = v121;
          }
        }
        v7 = *(_QWORD*)(v4 + 512);
        v8 = v7;
        do {
          if (v8 == *(_QWORD*)(v4 + 504)) {
            return result;
          }
          v9 = *(_DWORD*)(v8 - 16);
          v8 -= 16;
          v7 -= 16;
        } while (v9 != *v6);
        if (*(_QWORD*)(v4 + 512) != v7) {
          v10 = *(_QWORD*)(v7 + 8);
          if (v10 != 0) {
            v11 = *(_QWORD*)(v10 + 24);
            if (v11 != 0) {
              v13 = (_QWORD*)v2[49];
              v12 = v2[50];
              if (v12 != 0) {
                atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8),
                                          1u, memory_order_relaxed);
              }
              v14 = v13[137];
              if (v14 != 0 && *(_BYTE*)(v14 + 165) == 1) {
                v15 = result;
                if (GameRoutine_ad7390((_QWORD*)v13[137]) &&
                    *(_BYTE*)((v16 = v13[137]) + 165) == 1 &&
                    GameRoutine_ad7390((_QWORD*)v13[137]) &&
                    (v17 = ResFile_5e5f00(
                         *(_QWORD*)(*(_QWORD*)(v16 + 8) + 592LL))) != 0) {
                  memory_a6ea10((void*)(&v125_.v125), v17, 0);
                  result = v15;
                  if ((*(_BYTE*)(v15 + 64) & 1) != 0) {
                    v18 = *(_QWORD*)(v15 + 80);
                    if (v18 != 0) {
                      v19 = 128;
                      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                     200LL) == 0) {
                        v19 = 56;
                      }
                      nn_mem_StandardAllocator_Free(
                          *(_QWORD*)fw_memory_g_heap_manager_ptr + v19, v18);
                      result = v15;
                    }
                  }
                  v20 = v125_.v126;
                  v21 = v125_.v130;
                  v22 = v125_.v131;
                  v23 = 1;
                  v24 = v125_.v127;
                  *(_QWORD*)(result + 64) = v125_.v125;
                  *(_QWORD*)(result + 72) = v20;
                  v25 = v125_.v132;
                  v26 = v125_.v133;
                  *(_QWORD*)(result + 112) = v22;
                  *(_QWORD*)(result + 120) = v25;
                  *(_QWORD*)(result + 128) = v26;
                  v27 = v125_.v128;
                  v28 = v125_.v129;
                  *(_QWORD*)(result + 80) = v24;
                  *(_QWORD*)(result + 88) = v27;
                  *(_QWORD*)(result + 96) = v28;
                  *(_QWORD*)(result + 104) = v21;
                }
                else {
                  v23 = 0;
                  result = v15;
                }
              }
              else {
                v23 = 0;
              }
              v29 = v13[146];
              if (v29 != 0 && *(_BYTE*)(v29 + 165) == 1) {
                v30 = result;
                if (GameRoutine_ad7390((_QWORD*)v13[146]) &&
                    *(_BYTE*)((v31 = v13[146]) + 165) == 1 &&
                    GameRoutine_ad7390((_QWORD*)v13[146])) {
                  v32 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v31 + 8) + 592LL));
                  result = v30;
                  if (v32 != 0) {
                    memory_a6ea10((void*)(&v125_.v125), v32, 0);
                    result = v30;
                    if ((*(_BYTE*)(v30 + 136) & 1) != 0) {
                      v33 = *(_QWORD*)(v30 + 152);
                      if (v33 != 0) {
                        v34 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v34 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v34, v33);
                        result = v30;
                      }
                    }
                    v35 = v125_.v126;
                    v36 = v125_.v127;
                    v23 = 1;
                    *(_QWORD*)(v30 + 136) = v125_.v125;
                    *(_QWORD*)(v30 + 144) = v35;
                    v37 = v125_.v130;
                    v38 = v125_.v131;
                    *(_QWORD*)(v30 + 152) = v36;
                    *(_QWORD*)(result + 176) = v37;
                    *(_QWORD*)(result + 184) = v38;
                    v39 = v125_.v133;
                    *(_QWORD*)(result + 192) = v125_.v132;
                    *(_QWORD*)(result + 200) = v39;
                    v40 = v125_.v129;
                    *(_QWORD*)(result + 160) = v125_.v128;
                    *(_QWORD*)(result + 168) = v40;
                  }
                }
                else {
                  result = v30;
                }
              }
              v41 = v13[155];
              if (v41 != 0 && *(_BYTE*)(v41 + 165) == 1) {
                v42 = result;
                if (GameRoutine_ad7390((_QWORD*)v13[155]) &&
                    *(_BYTE*)((v43 = v13[155]) + 165) == 1 &&
                    GameRoutine_ad7390((_QWORD*)v13[155])) {
                  v44 = ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v43 + 8) + 592LL));
                  result = v42;
                  if (v44 != 0) {
                    memory_a6ea10((void*)(&v125_.v125), v44, 0);
                    result = v42;
                    if ((*(_BYTE*)(v42 + 208) & 1) != 0) {
                      v45 = *(_QWORD*)(v42 + 224);
                      if (v45 != 0) {
                        v46 = 128;
                        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       200LL) == 0) {
                          v46 = 56;
                        }
                        nn_mem_StandardAllocator_Free(
                            *(_QWORD*)fw_memory_g_heap_manager_ptr + v46, v45);
                        result = v42;
                      }
                    }
                    v47 = v125_.v126;
                    v48 = v125_.v127;
                    v23 = 1;
                    *(_QWORD*)(v42 + 208) = v125_.v125;
                    *(_QWORD*)(v42 + 216) = v47;
                    v49 = v125_.v130;
                    v50 = v125_.v131;
                    *(_QWORD*)(v42 + 224) = v48;
                    *(_QWORD*)(result + 248) = v49;
                    *(_QWORD*)(result + 256) = v50;
                    v51 = v125_.v133;
                    *(_QWORD*)(result + 264) = v125_.v132;
                    *(_QWORD*)(result + 272) = v51;
                    v52 = v125_.v129;
                    *(_QWORD*)(result + 232) = v125_.v128;
                    *(_QWORD*)(result + 240) = v52;
                  }
                }
                else {
                  result = v42;
                }
              }
              v53 = v13[164];
              if (v53 == 0) {
                goto LABEL_71;
              }
              if (*(_BYTE*)(v53 + 165) != 1) {
                goto LABEL_71;
              }
              v54 = result;
              v55 = GameRoutine_ad7390((_QWORD*)v13[164]);
              result = v54;
              if (!v55) {
                goto LABEL_71;
              }
              v56 = v13[164];
              if (*(_BYTE*)(v56 + 165) == 1 &&
                  (v57 = GameRoutine_ad7390((_QWORD*)v13[164]), result = v54,
                   v57) &&
                  (v58 =
                       ResFile_5e5f00(*(_QWORD*)(*(_QWORD*)(v56 + 8) + 592LL)),
                   result = v54, v58 != 0)) {
                memory_a6ea10((void*)(&v125_.v125), v58, 0);
                result = v54;
                if ((*(_BYTE*)(v54 + 280) & 1) != 0) {
                  v59 = *(_QWORD*)(v54 + 296);
                  if (v59 != 0) {
                    v60 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v60 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v60, v59);
                    result = v54;
                  }
                }
                v61 = v125_.v126;
                v62 = v125_.v130;
                v63 = v125_.v131;
                *(_QWORD*)(result + 280) = v125_.v125;
                *(_QWORD*)(result + 288) = v61;
                v64 = v125_.v132;
                v65 = v125_.v133;
                *(_QWORD*)(result + 328) = v63;
                *(_QWORD*)(result + 336) = v64;
                v66 = v125_.v127;
                *(_QWORD*)(result + 344) = v65;
                v67 = v125_.v128;
                v68 = v125_.v129;
                *(_QWORD*)(result + 296) = v66;
                *(_QWORD*)(result + 304) = v67;
                *(_QWORD*)(result + 312) = v68;
                *(_QWORD*)(result + 320) = v62;
              }
              else {
              LABEL_71:
                if (v23 == 0) {
                LABEL_147:
                  if (v12 != 0 &&
                      atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
                    (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
                    return std___1___shared_weak_count___release_weak(v12);
                  }
                  return result;
                }
              }
              v69 = (atomic_uchar*)GameData_212ed90;
              v70 =
                  atomic_load_explicit((atomic_uchar* volatile)GameData_212ed90,
                                       memory_order_acquire);
              v71 = GameData_212ed88;
              if ((v70 & 1) == 0) {
                v123 = result;
                v124 = __cxa_guard_acquire((__int64)GameData_212ed90);
                result = v123;
                if (v124 != 0) {
                  *v71 = wld_Crc32(0, "AnimLayerCtrlModule", 0x13u);
                  __cxa_guard_release((__int64)GameData_212ed90);
                  result = v123;
                }
              }
              v72 = *(_QWORD*)(v4 + 512);
              v73 = v72;
              do {
                if (v73 == *(_QWORD*)(v4 + 504)) {
                  goto LABEL_79;
                }
                v74 = *(_DWORD*)(v73 - 16);
                v73 -= 16;
                v72 -= 16;
              } while (v74 != *v71);
              if (*(_QWORD*)(v4 + 512) == v72) {
              LABEL_79:
                v77 = result;
                *(_QWORD*)(result + 56) = 0;
                v76 = (__int64*)(result + 56);
              }
              else {
                v75 = *(_QWORD*)(v72 + 8);
                *(_QWORD*)(result + 56) = v75;
                v76 = (__int64*)(result + 56);
                if (v75 != 0) {
                  goto LABEL_132;
                }
                v77 = result;
              }
              nn_os_LockMutex((__int64)GameData_212df28);
              v78 = fw_memory_HeapManager_Allocate(
                  *(_QWORD*)fw_memory_g_heap_manager_ptr, 120, 16, 0);
              GameRoutine_ce3010(v78, v4, v11, 1u, 2u);
              if ((atomic_load_explicit(v69, memory_order_acquire) & 1) == 0 &&
                  __cxa_guard_acquire((__int64)GameData_212ed90) != 0) {
                *v71 = wld_Crc32(0, "AnimLayerCtrlModule", 0x13u);
                __cxa_guard_release((__int64)GameData_212ed90);
              }
              v79 = *v71;
              v80 = *(_QWORD*)(v4 + 504);
              v81 = *(_QWORD*)(v4 + 512);
              v82 = v81;
              LODWORD(v125_.v125) = v79;
              v125_.v126 = v78;
              while (v82 != v80) {
                v83 = *(_DWORD*)(v82 - 16);
                v82 -= 16;
                if (v83 == v79) {
                  goto LABEL_92;
                }
              }
              if (v80 == v81 &&
                  (unsigned __int64)(*(_QWORD*)(v4 + 520) - v80) <= 0x6F) {
                v84 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 112, 16, 0);
                *(_QWORD*)(v4 + 504) = v84;
                *(_QWORD*)(v4 + 512) = v84;
                *(_QWORD*)(v4 + 520) = v84 + 112;
                if (v81 != 0) {
                  v85 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v85 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v85, v80);
                }
              }
              GameRoutine_98f140((__int64*)(v4 + 504), &v125_.v125);
            LABEL_92:
              if ((*(_BYTE*)(v78 + 16) & 1) == 0) {
                *(_BYTE*)(v78 + 16) = 1;
                *(_BYTE*)(v78 + 17) &= ~2u;
                *(_BYTE*)(v78 + 18) &= ~2u;
                *(_BYTE*)(v78 + 19) &= ~2u;
                *(_BYTE*)(v78 + 20) &= ~2u;
                v86 = *(_BYTE**)(v78 + 8);
                v86[632] = 0;
                v86[664] = 0;
                v86[696] = 0;
                v86[728] = 0;
                (*(void (**)(__int64))(*(_QWORD*)v78 + 64LL))(v78);
                v87 = *(_BYTE**)(v78 + 8);
                v88 = v87[300] == 3 && v87[301] == 3;
                if (v88 || v87[302] == 1) {
                  (*(void (**)(__int64))(*(_QWORD*)v78 + 72LL))(v78);
                }
              }
              v89 = *(__int64**)(v4 + 536);
              v90 = *(_QWORD*)(v4 + 544);
              if ((unsigned __int64)v89 >= v90) {
                v92 = *(_QWORD*)(v4 + 528);
                v93 = (char*)v89 - v92;
                v94 = ((__int64)v89 - v92) >> 3;
                v95 = v94 + 1;
                if ((unsigned __int64)(v94 + 1) >> 61 != 0) {
                  goto LABEL_156;
                }
                v96 = v90 - v92;
                if (v96 >> 2 > v95) {
                  v95 = v96 >> 2;
                }
                if ((unsigned __int64)v96 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v97 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v97 = v95;
                }
                if (v97 != 0) {
                  if (v97 >> 61 != 0) {
                    goto LABEL_157;
                  }
                  v98 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v97, 16, 0);
                }
                else {
                  v98 = 0;
                }
                v99 = v98 + 8 * v97;
                v100 = (unsigned __int64)v89 - v92;
                v101 = (__int64)&v93[v98 + -8 * v94];
                *(_QWORD*)&v93[v98] = v78;
                v91 = (__int64)&v93[v98 + 8];
                memcpy(v101, v92, v100);
                *(_QWORD*)(v4 + 528) = v101;
                *(_QWORD*)(v4 + 536) = v91;
                *(_QWORD*)(v4 + 544) = v99;
                if (v92 != 0) {
                  v102 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v102 = 56;
                  }
                  nn_mem_StandardAllocator_Free(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v102, v92);
                }
              }
              else {
                *v89 = v78;
                v91 = (__int64)(v89 + 1);
              }
              *(_QWORD*)(v4 + 536) = v91;
              v103 = *(__int64**)(v4 + 560);
              v104 = *(_QWORD*)(v4 + 568);
              if ((unsigned __int64)v103 < v104) {
                *v103 = v78;
                v105 = (__int64)(v103 + 1);
              LABEL_131:
                *(_QWORD*)(v4 + 560) = v105;
                GameRoutine_a8c0c0(v4);
                *(_BYTE*)(v4 + 576) = 1;
                nn_os_UnlockMutex((__int64)GameData_212df28);
                *v76 = v78;
                result = v77;
              LABEL_132:
                *(_DWORD*)(result + 352) = -1;
                v117 = *(_QWORD*)(result + 56);
                if (v117 != 0) {
                  v118 = *(_QWORD*)(result + 32);
                  if (v118 == 0 || (*(_QWORD*)(v118 + 8) != -1
                                        ? (v119 = *(_QWORD*)(result + 40) == 0)
                                        : (v119 = true),
                                    v119)) {
                    GameData_2235720 = 0;
                  }
                  if (*(_QWORD*)(result + 88) != 0 ||
                      *(_QWORD*)(result + 96) != 0 ||
                      *(_QWORD*)(result + 104) != 0 ||
                      *(_QWORD*)(result + 112) != 0 ||
                      *(_QWORD*)(result + 120) != 0) {
                    v120 = result;
                    AnimLayerCtrlModule_ce3880(v117, result + 64, 0);
                    result = v120;
                  }
                  *(_DWORD*)(result + 352) = 0;
                  *(_DWORD*)(result + 356) = *GameData_212d280;
                }
                goto LABEL_147;
              }
              v106 = *(_QWORD*)(v4 + 552);
              v107 = (char*)v103 - v106;
              v108 = ((__int64)v103 - v106) >> 3;
              v109 = v108 + 1;
              if ((unsigned __int64)(v108 + 1) >> 61 == 0) {
                v110 = v104 - v106;
                if (v110 >> 2 > v109) {
                  v109 = v110 >> 2;
                }
                if ((unsigned __int64)v110 >= 0x7FFFFFFFFFFFFFF8LL) {
                  v111 = 0x1FFFFFFFFFFFFFFFLL;
                }
                else {
                  v111 = v109;
                }
                if (v111 == 0) {
                  v112 = 0;
                LABEL_127:
                  v113 = v112 + 8 * v111;
                  v114 = (unsigned __int64)v103 - v106;
                  v115 = (__int64)&v107[v112 + -8 * v108];
                  *(_QWORD*)&v107[v112] = v78;
                  v105 = (__int64)&v107[v112 + 8];
                  memcpy(v115, v106, v114);
                  *(_QWORD*)(v4 + 552) = v115;
                  *(_QWORD*)(v4 + 560) = v105;
                  *(_QWORD*)(v4 + 568) = v113;
                  if (v106 != 0) {
                    v116 = 128;
                    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                   200LL) == 0) {
                      v116 = 56;
                    }
                    nn_mem_StandardAllocator_Free(
                        *(_QWORD*)fw_memory_g_heap_manager_ptr + v116, v106);
                  }
                  goto LABEL_131;
                }
                if (v111 >> 61 == 0) {
                  v112 = fw_memory_HeapManager_Allocate(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr, 8 * v111, 16, 0);
                  goto LABEL_127;
                }
              LABEL_157:
                GameRoutine_60a210();
              }
            LABEL_156:
              GameRoutine_98f290();
            }
          }
        }
      }
    }
  }
  return result;
}

void game_character_11182e0(__int128* a1)
{
  __int64* v1;
  __int64 v2;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int128 v8;
  float v9;
  int8x16_t v10;
  __int64 v11;
  float v12;
  float v13;
  int* v14;
  unsigned __int64 v15;
  bool v16;
  __int128 v17;
  float v18;
  float32x4_t v19;
  float32x4_t v20;
  float v21;
  float v22;
  __int64 v23;
  float v24;
  int8x16_t v25;
  __int64 v26;
  float v27;
  float v28;
  unsigned __int64 v29;
  unsigned __int32 v30;
  float32x4_t v31;
  struct {
    __int128 v32;
    __int128 v33;
    float v34[4];
  } v32_;
  float32x4_t v35;
  struct {
    int8x16_t v36;
    char gap176_[8];
    char v37;
    char gap185_[55];
    char v38;
  } v36_;

  v1 = (__int64*)(a1 + 2);
  v2 = *((_QWORD*)a1 + 4);
  v4 = *((_QWORD*)a1 + 6);
  *((_QWORD*)a1 + 5) = v2;
  v5 = fw_memory_g_heap_manager_ptr;
  if (0xAAAAAAAAAAAAAAABLL * ((v4 - v2) >> 4) <= 0x30) {
    v6 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                        2352, 16, 0);
    *((_QWORD*)a1 + 4) = v6;
    *((_QWORD*)a1 + 5) = v6;
    *((_QWORD*)a1 + 6) = v6 + 2352;
    if (v2 != 0) {
      v7 = 128;
      if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v7, v2);
    }
  }
  v8 = *a1;
  v32_.v32 = (__typeof__(v32_.v32)){0};
  *(_QWORD*)v32_.v34 = 0;
  v32_.v33 = GameData_1a82fa0;
  v9 = *((float*)a1 + 5);
  LANES128(v10).n128_u32[3] = 0;
  LANES128(v10).n128_u64[0] =
      COERCE_UNSIGNED_INT(*(float*)&v8 + (float)(v9 * 0x0.0p+0f));
  LANES128(v10).n128_f32[2] = *((float*)&v8 + 2) + (float)(v9 * 0x0.0p+0f);
  v36_.v36 = v10;
  GameRoutine_1117fb0(&v32_.v32, &v36_.v36, v9);
  GameRoutine_1118720(v1, &v32_.v32);
  v11 = *((_QWORD*)a1 + 4);
  v12 = v32_.v34[0];
  if (v32_.v34[0] < *(float*)(v11 + 48LL * *((int*)a1 + 14) + 32)) {
    *((_DWORD*)a1 + 14) =
        -1 - 1431655765 * ((unsigned __int64)(*((_QWORD*)a1 + 5) - v11) >> 4);
  }
  v13 = v32_.v34[1];
  if (v32_.v34[1] < *(float*)(v11 + 48LL * *((int*)a1 + 15) + 36)) {
    *((_DWORD*)a1 + 15) =
        -1 - 1431655765 * ((unsigned __int64)(*((_QWORD*)a1 + 5) - v11) >> 4);
  }
  if (v12 >= *((float*)a1 + 6) || v13 >= *((float*)a1 + 7)) {
    v14 = (int*)&GameData_1bb2498;
    v15 = 2;
    do {
      v17 = *a1;
      v18 = *((float*)a1 + 5);
      v32_.v32 = (__typeof__(v32_.v32)){0};
      *(_QWORD*)v32_.v34 = 0;
      v32_.v33 = GameData_1a82fa0;
      LANES128(v19).n128_f32[0] =
          *(float*)&v17 +
          (float)((float)((float)*(v14 - 1) * 0x1.4000000000000p+1f) * v18);
      LANES128(v19).n128_u32[1] = 1128792064;
      DWORD1(v17) = 0;
      *(float*)&v17 =
          *((float*)&v17 + 2) +
          (float)((float)((float)*v14 * 0x1.4000000000000p+1f) * v18);
      LANES128(v20).n128_u64[0] =
          LANES128(v19).n128_u32[0] | 0xC2C8000000000000LL;
      LANES128(v19).n128_u64[1] = (unsigned int)v17;
      v29 = v17;
      v30 = LANES128(v19).n128_u32[0];
      v35 = v19;
      LANES128(v20).n128_u64[1] = (unsigned int)v17;
      v31 = v20;
      if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21fde98,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire((__int64)&GameData_21fde98) != 0) {
        GameHr_a5aca0((__int64)GameData_21fdd90);
        GameRoutine_2b0();
        __cxa_guard_release((__int64)&GameData_21fde98);
      }
      collision_670c60((void*)((__int64)&v36_.v36), &v35, &v31, 1);
      if ((v36_.v38 & 1) != 0) {
        v21 = LANES128(v36_.v36).n128_f32[1];
      }
      else {
        v21 = LANES128(v31).n128_f32[1];
      }
      if (vabds_f32(*((float*)a1 + 1), v21) <= 0x1.8000000000000p+0f) {
        v22 = *((float*)a1 + 4);
        LANES128(v31).n128_f32[1] = v21 + (float)(v22 + 0x1.6666660000000p-1f);
        collision_672120((void*)((__int64)&v36_.v36), (__int128*)&v31,
                         0x1000100000008LL, v22);
        if (v36_.v37 == 1) {
          if (LANES128(v36_.v36).n128_u64[0] != 0) {
            LANES128(v36_.v36).n128_u64[1] = LANES128(v36_.v36).n128_u64[0];
            v23 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v23 = 56;
            }
            nn_mem_StandardAllocator_Free(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v23,
                LANES128(v36_.v36).n128_i64[0]);
          }
        }
        else {
          v24 = *((float*)a1 + 5);
          LANES128(v25).n128_u64[0] = v30;
          LANES128(v25).n128_u64[1] = v29;
          v36_.v36 = v25;
          GameRoutine_1117fb0(&v32_.v32, &v36_.v36, v24);
          GameRoutine_1118720(v1, &v32_.v32);
          v26 = *((_QWORD*)a1 + 4);
          v27 = v32_.v34[0];
          if (v32_.v34[0] < *(float*)(v26 + 48LL * *((int*)a1 + 14) + 32)) {
            *((_DWORD*)a1 + 14) =
                -1 - 1431655765 *
                         ((unsigned __int64)(*((_QWORD*)a1 + 5) - v26) >> 4);
          }
          v28 = v32_.v34[1];
          if (v32_.v34[1] < *(float*)(v26 + 48LL * *((int*)a1 + 15) + 36)) {
            *((_DWORD*)a1 + 15) =
                -1 - 1431655765 *
                         ((unsigned __int64)(*((_QWORD*)a1 + 5) - v26) >> 4);
          }
          if (v27 < *((float*)a1 + 6) && v28 < *((float*)a1 + 7)) {
            return;
          }
        }
      }
      v14 += 2;
      v16 = v15 >= 0x60;
      v15 += 2LL;
    } while (!v16);
  }
}

#pragma GCC visibility pop
