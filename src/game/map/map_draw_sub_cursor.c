#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__n128 nn_mem_StandardAllocator_Free(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_map_MapDrawSubCursor_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
void MapDrawSubCursor_Destructor(_QWORD* a1);
__n128 MapDrawSubCursor_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "MapDrawSubCursor_DeletingDestructor");
__int64 std___1___shared_weak_count___release_weak_alt1(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapDrawSubCursor_DeletingDestructor(_QWORD* a1);
_QWORD* game_10027c0(_QWORD*, char*);
__int64* game_UnitPool_Get(_BYTE*);
__int64 GameRoutine_100d7e0(__int64, float);
__int64 InfoCursorBottomImpl_100de20(__int64 result);
__int64 InfoCursorBottomImpl_100e5d0(__int64 result, int);
__int64 MapUtil_753570(int, int);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 std___1___shared_weak_count_lock(__int64);
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212cfc0[10];
extern __int64* GameData_212f878;
extern __int64 GameData_212d020[5];
extern __int64 GameData_212d038[2];
extern __int64 GameData_21cd0e8;
extern __int64 GameData_21cd0f0;
extern __int64 GameData_21cd120;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float InfoCursorBottomImpl_100e0f0(_QWORD*);
void GameRoutine_f28ee0(__int64*, int*);
void InfoCursorBottomImpl_100d310(__int64);
void InfoCursorBottomImpl_100dff0(_QWORD*, long double);
void __attribute__((noreturn)) GameRoutine_101ce30();
void __attribute__((noreturn)) GameRoutine_60a210();
void MapDrawSubCursor_Unknown4(__int64 a1);

void MapDrawSubCursor_Unknown4(__int64 a1)
{

#pragma clang fp contract(off)
  float v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  unsigned __int64 v10;
  __int64 v11;
  int v12;
  unsigned __int64 v13;
  __int64 v14;
  __int64* v15;
  __int64 v16;
  _DWORD* v17;
  _DWORD* v18;
  int v19;
  int v20;
  unsigned __int64 v21;
  signed __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  unsigned __int64 v33;
  float v34;
  float32x4_t v35;
  __int64* v36;
  float32x4_t v37;
  unsigned __int64 v38;
  char v39;
  __int64* v40;
  long double v41;
  unsigned __int64 v42;
  float32x4_t v43;
  float v44;
  __int64 v45;
  float32x4_t v46;
  __int128 v47;
  __int64 v48;
  __int64 v49;
  char v50;
  char* v51;
  __int64 v52;
  __int64 v53;
  int v54;
  float32x4_t* v55;
  int v56;
  int v57;
  float32x4_t v58;
  __int64 v59;
  __int64* v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int64 v64;
  char v65;
  char v66;
  signed __int64 v67;
  unsigned __int64 v68;
  __int64 v69;
  __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  __int64 v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  float32x4_t v78;
  float32x4_t v79;
  struct {
    __int64 v80;
    __int64 v81;
    __int64 v82;
    char gap64_[8];
    __int64 v83;
  } v80_;

  v2 = *(float*)(*(_QWORD*)game_script_hub_g_frame_counter_ptr[0] + 160LL);
  v3 = *(_QWORD*)(GameData_21cd120 + 24);
  v4 = *(_QWORD*)(GameData_21cd120 + 104);
  v80_.v83 = *(_QWORD*)(GameData_21cd120 + 8);
  if (v4 != 0 &&
      (v5 = *(_QWORD*)(GameData_21cd120 + 96),
       atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 16), 1u,
                                 memory_order_relaxed),
       v6 = std___1___shared_weak_count_lock(v4),
       std___1___shared_weak_count___release_weak_alt1(v4), v6 != 0)) {
    if (v5 != 0) {
      v7 = 254936;
    }
    else if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0) {
      v7 = 8;
    }
    else {
      v7 = 127472;
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
      std___1___shared_weak_count___release_weak_alt1(v6);
    }
  }
  else if (*(_BYTE*)(*(_QWORD*)GameData_212d038[0] + 156LL) != 0) {
    v7 = 8;
  }
  else {
    v7 = 127472;
  }
  v8 = v3 + v7;
  if ((*(_QWORD*)(v3 + v7 + 127168) | *(_QWORD*)(v3 + v7 + 127192)) != 0 &&
      v3 != 0) {
    v80_.v81 = 0;
    v80_.v82 = 0;
    v80_.v80 = 0;
    if (GameData_21cd0e8 != 0 && *(_BYTE*)(GameData_21cd0e8 + 32) != 0) {
      v12 = *(_DWORD*)(GameData_21cd120 + 4368);
      if ((unsigned int)(v12 - 7) <= 1) {
        v11 = 0;
        if (v12 != 7) {
          v10 = 0;
          v13 = 0;
        LABEL_27:
          v17 = *(_DWORD**)(v8 + 127432);
          v18 = *(_DWORD**)(v8 + 127440);
          if (v17 != v18) {
            while (1) {
              v20 = v17[8];
              v19 = v17[9];
              v21 = (unsigned int)v17[10] |
                    ((unsigned __int64)(unsigned int)v17[10] << 32);
              if (v10 < v13) {
                *(_BYTE*)v10 = v20;
                *(_BYTE*)(v10 + 1) = v19;
                *(_WORD*)(v10 + 2) = 0;
                *(_QWORD*)(v10 + 4) = v21;
                v10 += 12LL;
              }
              else {
                v22 = v10 - v11;
                v23 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v10 - v11) >> 2) + 1;
                if (v23 > 0x1555555555555555LL) {
                  goto LABEL_106;
                }
                if (0x5555555555555556LL * ((__int64)(v13 - v11) >> 2) > v23) {
                  v23 = 0x5555555555555556LL * ((__int64)(v13 - v11) >> 2);
                }
                if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v13 - v11) >> 2) >=
                    0xAAAAAAAAAAAAAAALL) {
                  v23 = 0x1555555555555555LL;
                }
                if (v23 > 0x1555555555555555LL) {
                  goto LABEL_107;
                }
                v24 = 3 * v23;
                v25 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 12 * v23, 16, 0);
                v26 = v25 + v22;
                *(_QWORD*)(v26 + 4) = v21;
                *(_BYTE*)v26 = v20;
                *(_BYTE*)(v26 + 1) = v19;
                *(_WORD*)(v26 + 2) = 0;
                v27 = v25 + v22 + 12 * (v22 / -12);
                if (v11 != v10) {
                  v28 = v11;
                  v29 = v25 + v22 + 12 * (v22 / -12);
                  do {
                    *(_BYTE*)v29 = *(_BYTE*)v28;
                    *(_BYTE*)(v29 + 1) = *(_BYTE*)(v28 + 1);
                    *(_BYTE*)(v29 + 2) = *(_BYTE*)(v28 + 2);
                    *(_BYTE*)(v29 + 3) = *(_BYTE*)(v28 + 3);
                    v30 = *(_QWORD*)(v28 + 4);
                    v28 += 12;
                    *(_QWORD*)(v29 + 4) = v30;
                    v29 += 12;
                  } while (v28 != v10);
                }
                v13 = v25 + 4 * v24;
                v10 = v26 + 12;
                if (v11 != 0) {
                  v31 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v31 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v31, v11);
                }
                v11 = v27;
              }
              v17 += 12;
              if (v17 == v18) {
                goto LABEL_46;
              }
            }
          }
          goto LABEL_46;
        }
        v10 = 0;
        v13 = 0;
        if ((*(_BYTE*)(*(_QWORD*)(*GameData_212cfc0[0] + 48) + 240LL) & 1) ==
            0) {
          goto LABEL_27;
        }
        v14 = *(unsigned int*)(GameData_21cd0e8 + 37044);
        if ((int)v14 >= 1) {
          v15 = GameData_212cfb8[0];
          v16 = GameData_21cd0e8 + 24756;
          do {
            if ((MapUtil_753570(*(char*)(v16 + 1), *(char*)(v16 + 2)) & 1) !=
                0) {
              if (*(_BYTE*)(v16 + 5) != 0 &&
                      (v60 = game_UnitPool_Get((_BYTE*)(v16 + 5))) != nullptr &&
                      v60[49] != 0 ||
                  (*(__int16*)(v16 + 6) & 0x8000000000000000LL) == 0 &&
                      (v61 = *(_QWORD*)(*(_QWORD*)(*v15 + 16) + 8LL)) != 0 &&
                      ((v62 = v61 + 144LL * *(__int16*)(v16 + 6),
                        ((*(__int64 (**)(__int64))(*(_QWORD*)v62 + 272LL))(
                             v62) &
                         1) != 0) ||
                       ((*(__int64 (**)(__int64))(*(_QWORD*)v62 + 288LL))(v62) &
                        1) != 0)) {
                GameRoutine_f28ee0(&v80_.v80, (int*)v16);
              }
            }
            --v14;
            v16 += 12;
          } while (v14 != 0);
          v63 = v80_.v80;
          v64 = v80_.v81;
          if (v80_.v80 == v80_.v81) {
            v13 = 0;
            v10 = 0;
            v11 = 0;
          }
          else {
            v11 = 0;
            v10 = 0;
            v13 = 0;
            do {
              v65 = *(_BYTE*)(v63 + 1);
              v66 = *(_BYTE*)(v63 + 2);
              if (v10 < v13) {
                *(_BYTE*)v10 = v65;
                *(_BYTE*)(v10 + 1) = v66;
                *(_WORD*)(v10 + 2) = 0;
                *(_QWORD*)(v10 + 4) = 0x100000001LL;
                v10 += 12LL;
              }
              else {
                v67 = v10 - v11;
                v68 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v10 - v11) >> 2) + 1;
                if (v68 > 0x1555555555555555LL) {
                LABEL_106:
                  GameRoutine_101ce30();
                }
                if (0x5555555555555556LL * ((__int64)(v13 - v11) >> 2) > v68) {
                  v68 = 0x5555555555555556LL * ((__int64)(v13 - v11) >> 2);
                }
                if (0xAAAAAAAAAAAAAAABLL * ((__int64)(v13 - v11) >> 2) >=
                    0xAAAAAAAAAAAAAAALL) {
                  v68 = 0x1555555555555555LL;
                }
                if (v68 > 0x1555555555555555LL) {
                LABEL_107:
                  GameRoutine_60a210();
                }
                v69 = 3 * v68;
                v70 = fw_memory_HeapManager_Allocate(
                    *(_QWORD*)fw_memory_g_heap_manager_ptr, 12 * v68, 16, 0);
                v71 = v70 + v67;
                *(_QWORD*)(v71 + 4) = 0x100000001LL;
                *(_BYTE*)v71 = v65;
                *(_BYTE*)(v71 + 1) = v66;
                *(_WORD*)(v71 + 2) = 0;
                v72 = v70 + v67 + 12 * (v67 / -12);
                if (v11 != v10) {
                  v73 = v11;
                  v74 = v70 + v67 + 12 * (v67 / -12);
                  do {
                    *(_BYTE*)v74 = *(_BYTE*)v73;
                    *(_BYTE*)(v74 + 1) = *(_BYTE*)(v73 + 1);
                    *(_BYTE*)(v74 + 2) = *(_BYTE*)(v73 + 2);
                    *(_BYTE*)(v74 + 3) = *(_BYTE*)(v73 + 3);
                    v75 = *(_QWORD*)(v73 + 4);
                    v73 += 12;
                    *(_QWORD*)(v74 + 4) = v75;
                    v74 += 12;
                  } while (v73 != v10);
                }
                v13 = v70 + 4 * v69;
                v10 = v71 + 12;
                if (v11 != 0) {
                  v76 = 128;
                  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                 200LL) == 0) {
                    v76 = 56;
                  }
                  nn_mem_StandardAllocator_Free_alt1(
                      *(_QWORD*)fw_memory_g_heap_manager_ptr + v76, v11);
                }
                v11 = v72;
              }
              v63 += 12;
            } while (v63 != v64);
            v63 = v80_.v80;
          }
          if (v63 != 0) {
            v80_.v81 = v63;
            v77 = 128;
            if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) ==
                0) {
              v77 = 56;
            }
            nn_mem_StandardAllocator_Free_alt1(
                *(_QWORD*)fw_memory_g_heap_manager_ptr + v77, v63);
          }
          goto LABEL_27;
        }
      }
    }
    v11 = 0;
    v10 = 0;
    v13 = 0;
    goto LABEL_27;
  }
  v10 = 0;
  v11 = 0;
LABEL_46:
  v32 = 0;
  v33 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v10 - v11) >> 2);
  v34 = (float)(v2 * 0x1.0aef000000000p+4f) / 0x1.f400000000000p+9f;
  LANES128(v35).n128_u64[0] = 0x4020000040200000LL;
  LANES128(v35).n128_u64[1] = 0x4020000040200000LL;
  v78 = v35;
  v36 = GameData_212f878;
  do {
    v50 = (*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1);
    v37 = (__typeof__(v37)){0};
    v38 = 0x100000001LL;
    v39 = 0;
    if ((v50 & 1) != 0 && v33 > v32) {
      v51 = (char*)(v11 + 12 * v32);
      v52 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 4536LL);
      if (v52 == 0 ||
          ((*(__int64 (**)(__int64, long double))(*(_QWORD*)v52 + 48LL))(
               v52, COERCE_LONG_DOUBLE((unsigned __int128)0LL)) &
           1) != 0) {
        v53 = *(_QWORD*)(GameData_21cd0f0 + 112);
        if ((int)v53 >= 1 && SHIDWORD(v53) >= 1) {
          v54 = *v51 - *(char*)(GameData_21cd0f0 + 82);
          while (v54 != 0 || v51[1] - *(char*)(GameData_21cd0f0 + 83) >
                                 (unsigned int)(HIDWORD(v53) - 1)) {
            LODWORD(v53) = v53 - 1;
            --v54;
            if ((_DWORD)v53 == 0) {
              goto LABEL_62;
            }
          }
        LABEL_47:
          v37 = (__typeof__(v37)){0};
          v38 = 0x100000001LL;
          v39 = 0;
          goto LABEL_48;
        }
      }
    LABEL_62:
      v55 = (float32x4_t*)game_10027c0((_QWORD*)(v80_.v83 + 72),
                                       (char*)(v11 + 12 * v32));
      if (v55 == nullptr) {
        goto LABEL_47;
      }
      v56 = *((_DWORD*)v51 + 1);
      v57 = *((_DWORD*)v51 + 2);
      LANES128(v58).n128_u32[1] = 0;
      LANES128(v58).n128_u32[3] = 0;
      v38 = *(_QWORD*)(v51 + 4);
      v39 = 1;
      LANES128(v58).n128_f32[0] = (float)v56 + -0x1.0000000000000p+0f;
      LANES128(v58).n128_f32[2] = (float)v57 + -0x1.0000000000000p+0f;
      v37 = vaddq_f32(v55[10], vmulq_f32(v58, v78));
      LANES128(v37).n128_u32[3] = 0;
    }
  LABEL_48:
    v79 = v37;
    v40 = *(__int64**)(a1 + 16 + 16 * v32);
    InfoCursorBottomImpl_100d310(*v40);
    *(float*)&v41 = InfoCursorBottomImpl_100e0f0(
        *(_QWORD**)(*(_QWORD*)(GameData_21cd120 + 4536) + 40LL));
    InfoCursorBottomImpl_100dff0((_QWORD*)*v40, v41);
    v42 = HIDWORD(v38);
    LANES128(v43).n128_u32[0] = 0;
    LANES128(v43).n128_u64[1] = 0;
    if (SHIDWORD(v38) >= (int)v38) {
      LODWORD(v42) = v38;
    }
    v44 = (float)(int)v42;
    LANES128(v43).n128_u32[1] = *(_DWORD*)(*v36 + 1424);
    v45 = *v40;
    v46 = vaddq_f32(v79, v43);
    *(_QWORD*)(v45 + 112) = LANES128(v46).n128_u64[0];
    v47 = *(_OWORD*)(v45 + 112);
    *((_QWORD*)&v47 + 1) = LANES128(v46).n128_u32[2];
    *(_OWORD*)(v45 + 112) = v47;
    v48 = *v40;
    *(_BYTE*)(v48 + 128) = v39;
    InfoCursorBottomImpl_100de20(v48);
    v49 = *v40;
    *(_BYTE*)(v49 + 160) = 0;
    InfoCursorBottomImpl_100de20(v49);
    *(float*)(*v40 + 192) = v44;
    InfoCursorBottomImpl_100e5d0(*v40, 0);
    GameRoutine_100d7e0(*v40, v34);
    ++v32;
  } while (v32 != 64);
  if (v11 != 0) {
    v59 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v59 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v59, v11);
  }
}

void MapDrawSubCursor_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = 129;
  *a1 = game_map_MapDrawSubCursor_vtable;
  do {
    v3 = a1[v1];
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak(v3);
    }
    v1 -= 2;
  } while (v1 != 1);
}

void MapDrawSubCursor_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;

  v1 = 129;
  *a1 = game_map_MapDrawSubCursor_vtable;
  do {
    v3 = a1[v1];
    if (v3 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v3 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v3 + 16LL))(v3);
      std___1___shared_weak_count___release_weak_alt1(v3);
    }
    v1 -= 2;
  } while (v1 != 1);
  v4 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v4 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v4, (__int64)a1);
}

#pragma GCC visibility pop
