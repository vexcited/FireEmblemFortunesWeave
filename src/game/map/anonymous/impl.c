#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_9baec0(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*game_map_anonymous_Impl_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64
Impl_Destructor_9ba4a0_alt1(_QWORD* a1) __asm__("Impl_Destructor_9ba4a0");
__int64 Shape_f64760(_QWORD);
__int64 Impl_9baec0(__int64 result, unsigned __int8 a2);
_QWORD* EntityObject_816820(_QWORD* result, __int64);
_QWORD* GameRoutine_64df20(_QWORD*, __int64, unsigned __int64);
__int64* GameRoutine_7d6200(__int64* result, _DWORD*);
__int64* GameRoutine_c22420(_QWORD*, unsigned __int8*);
__int64* SpineModel_64dde0(__int64*, __int64, unsigned __int64);
__int64 GameRoutine_60a020(__int64, __int64);
__int64 GameRoutine_8151a0(__int64*, __int64, unsigned int);
__int64 GameRoutine_818500(float*, unsigned int*, __int64, _DWORD**);
__int64 ObjectBuildCreate_c21540(__int64, int, __int64, __int64);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(__int64, __int64, __int64, unsigned int);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_HashString(__int64 result);
__int64 game_HashString32(__int64 result);
__int64 nn_mem_StandardAllocator_Free_alt1(_QWORD, _QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count___release_weak_alt1() __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock();
__int64 strlen(_QWORD);
__int64 strstr(_QWORD, _QWORD);
__int64 wld_Crc32(int, unsigned __int8*, unsigned __int64);
char* GameRoutine_60a060(char*, __int64, unsigned __int64);
extern _UNKNOWN* GameData_212d498;
extern _UNKNOWN* std___1_piecewise_construct_ptr;
extern __int64 (*GameData_1f9dc70[])();
extern __int64 (*GameData_1f9e218[])();
extern __int64 (*game_map_anonymous_EntityObject_vtable[])();
extern __int64* GameData_212d1d0[4];
extern __int64 GameData_212c638;
extern __int64 GameData_212ccc0[47];
extern __int64 GameData_212d0c0[4];
extern __int64 GameData_21ec7c8;
extern int* GameData_212d490;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) GameRoutine_60a310();
void __attribute__((noreturn)) game_map_anonymous_8184d0();
void game_map_anonymous_Impl_Entry();
__int64* game_map_anonymous_Impl_Entry_closure_Invoke(__int64 a1, _DWORD* a2,
                                                      _DWORD* a3);
__int64 GameRoutine_60a020_alt1(__int64,
                                const char*) __asm__("GameRoutine_60a020");
__int64 ObjectBuildCreate_c21540_alt1(
    __int64, int, __int64,
    unsigned __int64) __asm__("ObjectBuildCreate_c21540");
__int64 game_map_anonymous_818500(float*, unsigned int*, __int64, _DWORD**);
__int64 std___1___shared_weak_count___release_weak_alt2(__int64) __asm__(
    "std___1___shared_weak_count___release_weak");
__int64 std___1___shared_weak_count_lock_alt1(__int64) __asm__(
    "std___1___shared_weak_count_lock");
__int64 strstr_alt1(const char*, const char*) __asm__("strstr");
const char*
game_HashString32_alt1(const char* result) __asm__("game_HashString32");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
unsigned __int64 strlen_alt1(const char*) __asm__("strlen");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void nn_mem_StandardAllocator_Free_alt2(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void Impl_Destructor_9ba4a0(_QWORD* a1);

void game_map_anonymous_Impl_Entry()
{

#pragma clang fp contract(off)
  __int64 v0;
  __int64* v1;
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64* v7;
  __int64 v8;
  __int64 v9;
  __int64* v10;
  __int64* v11;
  __int64 v12;
  __int64 v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64 v16;
  _QWORD* v17;
  unsigned __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
  unsigned __int64 v22;
  const char* v23;
  const char* v24;
  unsigned int v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  int v29;
  _QWORD* v30;
  unsigned __int8* v31;
  unsigned __int64 v32;
  __int64 v33;
  _BYTE* v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int8* v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  unsigned __int64 v41;
  const char* v42;
  const char* v43;
  __int64 v44;
  unsigned __int64 v45;
  unsigned __int64 v46;
  unsigned __int64 v48;
  unsigned __int64 v49;
  __int64 v50;
  _QWORD* v51;
  _QWORD* v52;
  unsigned __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  float32x4_t* v57;
  __int64 v58;
  float32x4_t v59;
  float32x4_t v60;
  float32x4_t v61;
  float32x4_t v62;
  const char* v63;
  unsigned int v64;
  unsigned __int64 v65;
  unsigned __int64 v66;
  __int64 v67;
  __int64** v68;
  __int64* v69;
  unsigned __int64 v70;
  __int64 v71;
  __int64 v72;
  __int64 v73;
  unsigned __int64 v74;
  __int64 v75;
  __int64 v76;
  unsigned __int64 v77;
  __int64* v78;
  __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  __int64 v82;
  unsigned __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  _QWORD* v87;
  __int64* v88;
  unsigned __int64 v89;
  __int64 v90;
  _BYTE* v91;
  __int64 v92;
  __int64* v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  unsigned __int64 v101;
  __int64* v102;
  __int64 v103;
  __int64 v104;
  __int16 v105;
  __int64 v106;
  __int64 v107;
  __int64 v108;
  __int64 v109;
  __int64 v110;
  __int64 v111;
  __int64 v112;
  void (***v113)(__int64);
  __int64 v114;
  __int64 v115;
  __int64 v116;
  __int64 v117;
  __int64 v118;
  __int64 v119;
  __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;
  __int64 v124;
  __int64 v125;
  __int64 v126;
  __int64 v127;
  __int64 v128;
  void (***v129)(__int64);
  void (**v130)(__int64);
  __int64 v131;
  unsigned int** v132;
  int v133;
  __int16 v134;
  __int64 v135;
  __int64 v136;
  __int64 v137;
  __int16 v138;
  bool v139;
  signed int v140;
  __int64 v141;
  __int64 v142;
  __int64 v143;
  __int64 v144;
  __int64 v145;
  __int64* v146;
  struct {
    unsigned int* v147;
    __int64 v148;
    __int64 v149;
    char gap72_[8];
    unsigned int** v150;
  } v147_;
  __int64 (**v151)();
  struct {
    __int64 v152;
    unsigned __int64 v153;
    const char* v154;
  } v152_;
  __int64 v155;
  unsigned __int64 v156;
  _BYTE* v157;
  __int64 v158;
  __int64 v159;
  __int64 v160;
  __int64 v161;
  __int64 v162;
  _BYTE v163[18];
  __int64* v164;
  __int64 v165;
  __int64 v166;
  __int16 v167;
  __int64 v168;
  __int64 v169;
  unsigned int v170;
  int v171;
  unsigned int v172[5];

  v0 = GameData_21ec7c8;
  v1 = (__int64*)GameData_212c638;
  v2 = *(
      _QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 + 32LL) - 8LL) +
               64LL);
  if (v2 == 0) {
    goto LABEL_210;
  }
  v3 = *(_QWORD*)(v2 + 96);
  if (v3 != 0) {
    v5 = *(_QWORD*)(v3 + 24);
    v4 = *(_QWORD*)(v3 + 32);
    if (v4 == 0) {
      goto LABEL_15;
    }
  LABEL_12:
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v4 + 8), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v4 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v4 + 16LL))(v4);
      std___1___shared_weak_count___release_weak_alt2(v4);
    }
    goto LABEL_15;
  }
  LOWORD(v151) = 0;
  v6 = GameRoutine_c22420((_QWORD*)(v2 + 104), (unsigned __int8*)&v151);
  if (((unsigned __int8)v151 & 1) != 0 && v152_.v153 != 0) {
    v7 = v6;
    v8 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v8 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v8, v152_.v153);
    v6 = v7;
  }
  if (v6 != nullptr) {
    v9 = v6[5];
    v5 = *(_QWORD*)(v9 + 24);
    v4 = *(_QWORD*)(v9 + 32);
    if (v4 != 0) {
      goto LABEL_12;
    }
  }
  else {
    v5 = 0;
  }
LABEL_15:
  v10 = *(__int64**)(v5 + 88);
  v11 = *(__int64**)(v5 + 96);
  if (v10 == v11) {
    goto LABEL_210;
  }
  v146 = GameData_212d1d0[0] + 2;
  v145 = GameData_212d0c0[0] + 16;
  while (2) {
    v12 = *v10;
    if (*(_DWORD*)(*v10 + 284) != 1 ||
        strstr_alt1((const char*)(v12 + 16), "_inst") != 0 ||
        strstr_alt1((const char*)(v12 + 16), "_Inst") != 0 ||
        strstr_alt1((const char*)(v12 + 16), "Base:") != 0) {
      goto LABEL_17;
    }
    v13 = *v1;
    v152_.v152 = 0;
    v152_.v153 = 0;
    v152_.v154 = nullptr;
    v155 = 0;
    v156 = 0;
    v157 = nullptr;
    v165 = 0;
    v166 = 0;
    v162 = 0x101010100000000LL;
    v158 = 0;
    v159 = 0;
    v160 = 0;
    *(_DWORD*)v163 = 0;
    v161 = 0;
    v169 = 0;
    v170 = 0;
    v151 = game_map_anonymous_EntityObject_vtable;
    *(_QWORD*)&v163[4] = -1;
    *(_QWORD*)&v163[10] = -1;
    v168 = 0x3F8000003F800000LL;
    v164 = v146;
    v167 = 256;
    v14 = strlen_alt1((const char*)(v12 + 16));
    v15 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v13 + 32) - 8LL) + 64LL);
    if (v15 != 0) {
      v16 = *(_QWORD*)(v15 + 96);
      if (v16 != 0 && *(_DWORD*)(v16 + 240) == 5) {
        v17 = (_QWORD*)(v15 + 120);
        while (1) {
          v17 = (_QWORD*)*v17;
          if (v17 == nullptr) {
            break;
          }
          if (*(_DWORD*)(v17[5] + 240LL) != 5) {
            goto LABEL_28;
          }
        }
        v15 = ObjectBuildCreate_c21540_alt1(v15, 1, v12 + 16, v14);
        v13 = *v1;
      }
      else {
      LABEL_28:
        v15 = 0;
      }
    }
    v159 = v15;
    v18 = strlen_alt1((const char*)(v12 + 16));
    v19 = *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(v13 + 32) - 8LL) + 64LL);
    if (v19 != 0) {
      v20 = *(_QWORD*)(v19 + 96);
      if (v20 != 0 && *(_DWORD*)(v20 + 240) == 5) {
        v21 = (_QWORD*)(v19 + 120);
        while (1) {
          v21 = (_QWORD*)*v21;
          if (v21 == nullptr) {
            break;
          }
          if (*(_DWORD*)(v21[5] + 240LL) != 5) {
            goto LABEL_35;
          }
        }
        v19 = ObjectBuildCreate_c21540_alt1(v19, 2, v12 + 16, v18);
      }
      else {
      LABEL_35:
        v19 = 0;
      }
    }
    v160 = v19;
    GameRoutine_60a020_alt1((__int64)&v152_.v152, (const char*)(v12 + 16));
    if ((v155 & 1) != 0) {
      *v157 = 0;
      v156 = 0;
    }
    else {
      LOWORD(v155) = 0;
    }
    LODWORD(v169) = 0;
    v22 = v152_.v153;
    if ((v152_.v152 & 1) == 0) {
      v22 = (unsigned __int64)(unsigned __int8)v152_.v152 >> 1;
    }
    v23 = (char*)&v152_.v152 + 1;
    if ((v152_.v152 & 1) != 0) {
      v23 = v152_.v154;
    }
    if (v22 != 0) {
      v24 = v23;
    }
    else {
      v24 = nullptr;
    }
    v25 = (unsigned int)game_HashString32_alt1(v24);
    v26 = v159;
    HIDWORD(v169) = v25;
    v170 = v25;
    if (v159 != 0) {
      if ((atomic_load_explicit((atomic_uchar* volatile)GameData_212d498,
                                memory_order_acquire) &
           1) == 0 &&
          __cxa_guard_acquire_alt1((__int64)GameData_212d498) != 0) {
        *GameData_212d490 = wld_Crc32(0, "MapObjectModule", 0xFu);
        __cxa_guard_release_alt1((__int64)GameData_212d498);
      }
      v27 = *(_QWORD*)(v26 + 512);
      v28 = v27;
      while (v28 != *(_QWORD*)(v26 + 504)) {
        v29 = *(_DWORD*)(v28 - 16);
        v28 -= 16;
        v27 -= 16;
        if (v29 == *GameData_212d490) {
          if (*(_QWORD*)(v26 + 512) != v27) {
            v30 = *(_QWORD**)(v27 + 8);
            if (v30 != nullptr) {
              v31 = (unsigned __int8*)(v30 + 3);
              if (&v155 != v30 + 3) {
                v32 = *v31;
                if ((v155 & 1) != 0) {
                  if ((v32 & 1) != 0) {
                    v35 = v30[5];
                  }
                  else {
                    v35 = (__int64)v30 + 25;
                  }
                  if ((v32 & 1) != 0) {
                    v36 = v30[4];
                  }
                  else {
                    v36 = v32 >> 1;
                  }
                  SpineModel_64dde0(&v155, v35, v36);
                }
                else if ((v32 & 1) != 0) {
                  GameRoutine_64df20(&v155, v30[5], v30[4]);
                }
                else {
                  v33 = *(_QWORD*)v31;
                  v34 = (_BYTE*)v30[5];
                  v156 = v30[4];
                  v157 = v34;
                  v155 = v33;
                }
              }
              v37 = (unsigned __int8*)v30[16];
              if ((int)(-1431655765 * ((v30[17] - (_QWORD)v37) >> 3)) >= 1) {
                v38 = *v37;
                if ((v38 & 1) != 0) {
                  v39 = *((_QWORD*)v37 + 1);
                }
                else {
                  v39 = v38 >> 1;
                }
                if ((v38 & 1) != 0) {
                  v40 = *((_QWORD*)v37 + 2);
                }
                else {
                  v40 = (__int64)(v37 + 1);
                }
                GameRoutine_60a060((char*)&v152_.v152, v40, v39);
                v41 = v152_.v153;
                if ((v152_.v152 & 1) == 0) {
                  v41 = (unsigned __int64)(unsigned __int8)v152_.v152 >> 1;
                }
                v42 = (char*)&v152_.v152 + 1;
                if ((v152_.v152 & 1) != 0) {
                  v42 = v152_.v154;
                }
                if (v41 != 0) {
                  v43 = v42;
                }
                else {
                  v43 = nullptr;
                }
                LODWORD(v169) = (unsigned int)game_HashString32_alt1(v43);
                v170 = v169;
              }
            }
          }
          break;
        }
      }
    }
    v44 = (*(__int64 (**)(__int64))((char*)((char*)0x20LL) + (_QWORD)v151))(
        (__int64)&v151);
    v45 = game_HashString(v44);
    if (v45 == 0) {
      v50 = 0;
      goto LABEL_108;
    }
    v46 = *(_QWORD*)(*(_QWORD*)GameData_212ccc0[0] + 96LL);
    if (v46 == 0 || *(_QWORD*)(*(_QWORD*)GameData_212ccc0[0] + 112LL) == 0) {
      goto LABEL_107;
    }
    v48 = v46 - 1;
    if ((v46 & (v46 - 1)) != 0) {
      v49 = v45;
      if (v45 >= v46) {
        v49 = v45 % v46;
      }
    }
    else {
      v49 = v48 & v45;
    }
    v51 =
        *(_QWORD**)(*(_QWORD*)(*(_QWORD*)GameData_212ccc0[0] + 88LL) + 8 * v49);
    if (v51 == nullptr || (v52 = (_QWORD*)*v51) == nullptr) {
    LABEL_107:
      v50 = 0;
      goto LABEL_108;
    }
    if ((v46 & v48) == 0) {
      while (1) {
        v54 = v52[1];
        if (v54 == v45) {
          if (v52[2] == v45) {
            goto LABEL_143;
          }
        }
        else if ((v54 & v48) != v49) {
          goto LABEL_107;
        }
        v52 = (_QWORD*)*v52;
        v50 = 0;
        if (v52 == nullptr) {
          goto LABEL_108;
        }
      }
    }
    while (1) {
      v53 = v52[1];
      if (v53 == v45) {
        break;
      }
      if (v53 >= v46) {
        v53 %= v46;
      }
      if (v53 != v49) {
        goto LABEL_107;
      }
    LABEL_97:
      v52 = (_QWORD*)*v52;
      if (v52 == nullptr) {
        goto LABEL_107;
      }
    }
    if (v52[2] != v45) {
      goto LABEL_97;
    }
  LABEL_143:
    v50 = v52[3];
  LABEL_108:
    v158 = v50;
    EntityObject_816820(&v147_.v147, v159);
    v55 = v147_.v148;
    if (v147_.v148 != 0) {
      v56 = std___1___shared_weak_count_lock_alt1(v147_.v148);
      if (v56 != 0) {
        v57 = (float32x4_t*)v147_.v147;
        v58 = v56;
        std___1___shared_weak_count___release_weak_alt2(v55);
        if (v57 != nullptr) {
          v60 = v57[13];
          v59 = v57[14];
          if ((LANES64_OF(vmovn_s32(vcgtq_f32(v60, v59))).n64_u8[0] & 1) == 0 &&
              LANES128(v60).n128_f32[2] <= LANES128(v59).n128_f32[2]) {
            LANES128(v61).n128_u64[0] = 0x3F0000003F000000LL;
            LANES128(v61).n128_u64[1] = 0x3F0000003F000000LL;
            v62 = vmulq_f32(vaddq_f32(v60, v59), v61);
            *(_WORD*)&v163[10] =
                (int)(float)((float)((float)(LANES128(v60).n128_f32[0] +
                                             0x1.4000000000000p-1f) +
                                     0x1.4000000000000p+10f) *
                             0x1.99999a0000000p-3f) -
                256;
            *(_WORD*)&v163[12] =
                (int)(float)((float)((float)(LANES128(v60).n128_f32[2] +
                                             0x1.4000000000000p-1f) +
                                     0x1.4000000000000p+10f) *
                             0x1.99999a0000000p-3f) -
                256;
            *(_WORD*)&v163[6] = (int)(float)((float)(LANES128(v62).n128_f32[0] +
                                                     0x1.4000000000000p+10f) *
                                             0x1.99999a0000000p-3f) -
                                256;
            *(_WORD*)&v163[8] = (int)(float)((float)(LANES128(v62).n128_f32[2] +
                                                     0x1.4000000000000p+10f) *
                                             0x1.99999a0000000p-3f) -
                                256;
            *(_WORD*)&v163[14] =
                (int)(float)((float)((float)(LANES128(v59).n128_f32[0] +
                                             -0x1.4000000000000p-1f) +
                                     0x1.4000000000000p+10f) *
                             0x1.99999a0000000p-3f) -
                256;
            *(_WORD*)&v163[16] =
                (int)(float)((float)((float)(LANES128(v59).n128_f32[2] +
                                             -0x1.4000000000000p-1f) +
                                     0x1.4000000000000p+10f) *
                             0x1.99999a0000000p-3f) -
                256;
          }
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
          std___1___shared_weak_count___release_weak_alt2(v58);
        }
      }
      else {
        std___1___shared_weak_count___release_weak_alt2(v55);
      }
    }
    if ((((__int64 (*)(__int64 (***)(void)))v151[5])(&v151) & 1) == 0) {
      goto LABEL_188;
    }
    if ((v152_.v152 & 1) != 0) {
      v63 = v152_.v154;
    }
    else {
      v63 = (char*)&v152_.v152 + 1;
    }
    v64 = (unsigned int)game_HashString32_alt1(v63);
    v65 = *(_QWORD*)(v0 + 32);
    if (v65 == 0 || *(_QWORD*)(v0 + 48) == 0) {
      goto LABEL_145;
    }
    v66 = v65 - 1;
    if ((v65 & (v65 - 1)) != 0) {
      v67 = v64;
      if (v65 <= v64) {
        v67 = v64 % (unsigned int)v65;
      }
    }
    else {
      v67 = ((_DWORD)v65 - 1) & v64;
    }
    v68 = *(__int64***)(*(_QWORD*)(v0 + 24) + 8 * v67);
    if (v68 == nullptr || (v69 = *v68) == nullptr) {
    LABEL_145:
      v73 = *(_QWORD*)v0;
      v74 = *(_QWORD*)(v0 + 8);
      v75 = v74 - *(_QWORD*)v0;
      v76 = 0x2E8BA2E8BA2E8BA3LL * (v75 >> 4);
      *(_WORD*)&v163[4] = -29789 * (v75 >> 4);
      v77 = *(_QWORD*)(v0 + 16);
      if (v74 >= v77) {
        if ((unsigned __int64)(v76 + 1) > 0x1745D1745D1745DLL) {
          game_map_anonymous_8184d0();
        }
        v81 = 0x2E8BA2E8BA2E8BA3LL * ((__int64)(v77 - v73) >> 4);
        v82 = 2 * v81;
        if (2 * v81 <= v76 + 1) {
          v82 = v76 + 1;
        }
        if (v81 >= 0xBA2E8BA2E8BA2ELL) {
          v83 = 0x1745D1745D1745DLL;
        }
        else {
          v83 = v82;
        }
        if (v83 > 0x1745D1745D1745DLL) {
          GameRoutine_60a210();
        }
        v84 = 176 * v83;
        v85 = fw_memory_HeapManager_Allocate(
            *(_QWORD*)fw_memory_g_heap_manager_ptr, 176 * v83, 16, 0);
        v86 = v85 + v75;
        v143 = v85;
        v87 = (_QWORD*)(v85 + v75);
        *v87 = game_map_anonymous_EntityObject_vtable;
        v88 = v87 + 1;
        if ((v152_.v152 & 1) != 0) {
          fw_text_String_CopyTerminated(v88, (__int64)v152_.v154, v152_.v153);
        }
        else {
          v89 = v152_.v153;
          *v88 = v152_.v152;
          v88[1] = v89;
          v88[2] = (__int64)v152_.v154;
        }
        v144 = v84;
        if ((v155 & 1) != 0) {
          fw_text_String_CopyTerminated((__int64*)(v86 + 32), (__int64)v157,
                                        v156);
        }
        else {
          v101 = v156;
          *(_QWORD*)(v86 + 32) = v155;
          *(_QWORD*)(v86 + 40) = v101;
          *(_QWORD*)(v86 + 48) = v157;
        }
        v102 = GameData_212d1d0[0];
        v103 = GameData_212d0c0[0];
        v104 = *(_QWORD*)v163;
        v105 = v167;
        *(_QWORD*)(v86 + 88) = v162;
        *(_QWORD*)(v86 + 96) = v104;
        v106 = *(_QWORD*)&v163[8];
        *(_WORD*)(v86 + 144) = v105;
        *(_QWORD*)(v86 + 104) = v106;
        *(_WORD*)(v86 + 112) = *(_WORD*)&v163[16];
        v107 = v159;
        *(_QWORD*)(v86 + 56) = v158;
        *(_QWORD*)(v86 + 64) = v107;
        v108 = v161;
        *(_QWORD*)(v86 + 72) = v160;
        *(_QWORD*)(v86 + 80) = v108;
        v109 = v166;
        *(_QWORD*)(v86 + 128) = v165;
        *(_QWORD*)(v86 + 136) = v109;
        v110 = v168;
        *(_DWORD*)(v86 + 168) = v170;
        v111 = v169;
        *(_QWORD*)(v86 + 148) = v110;
        *(_QWORD*)(v86 + 120) = v102 + 2;
        *(_QWORD*)(v86 + 160) = v111;
        v112 = *(_QWORD*)v0;
        v113 = *(void (****)(__int64))(v0 + 8);
        v114 = v86 + *(_QWORD*)v0 - (_QWORD)v113;
        if (*(void (****)(__int64))v0 != v113) {
          v115 = *(_QWORD*)v0;
          v116 = v86 + *(_QWORD*)v0 - (_QWORD)v113;
          do {
            *(_QWORD*)v116 = game_map_anonymous_EntityObject_vtable;
            v117 = *(_QWORD*)(v115 + 8);
            v118 = *(_QWORD*)(v115 + 24);
            *(_QWORD*)(v116 + 16) = *(_QWORD*)(v115 + 16);
            *(_QWORD*)(v116 + 24) = v118;
            *(_QWORD*)(v116 + 8) = v117;
            *(_QWORD*)(v115 + 16) = 0;
            *(_QWORD*)(v115 + 24) = 0;
            *(_QWORD*)(v115 + 8) = 0;
            v119 = *(_QWORD*)(v115 + 32);
            v120 = *(_QWORD*)(v115 + 48);
            *(_QWORD*)(v116 + 40) = *(_QWORD*)(v115 + 40);
            *(_QWORD*)(v116 + 48) = v120;
            *(_QWORD*)(v116 + 32) = v119;
            *(_QWORD*)(v115 + 40) = 0;
            *(_QWORD*)(v115 + 48) = 0;
            *(_QWORD*)(v115 + 32) = 0;
            v121 = *(_QWORD*)(v115 + 56);
            v122 = *(_QWORD*)(v115 + 64);
            v123 = *(_QWORD*)(v115 + 80);
            *(_QWORD*)(v116 + 72) = *(_QWORD*)(v115 + 72);
            *(_QWORD*)(v116 + 80) = v123;
            *(_QWORD*)(v116 + 56) = v121;
            *(_QWORD*)(v116 + 64) = v122;
            v124 = *(_QWORD*)(v115 + 96);
            v125 = *(_QWORD*)(v115 + 104);
            LOWORD(v123) = *(_WORD*)(v115 + 112);
            *(_QWORD*)(v116 + 88) = *(_QWORD*)(v115 + 88);
            *(_WORD*)(v116 + 112) = v123;
            *(_QWORD*)(v116 + 96) = v124;
            *(_QWORD*)(v116 + 104) = v125;
            *(_QWORD*)(v116 + 120) = v103 + 16;
            v126 = *(_QWORD*)(v115 + 128);
            v127 = *(_QWORD*)(v115 + 136);
            LOWORD(v125) = *(_WORD*)(v115 + 144);
            *(_QWORD*)(v116 + 120) = GameData_1f9dc70;
            *(_WORD*)(v116 + 144) = v125;
            *(_QWORD*)(v116 + 128) = v126;
            *(_QWORD*)(v116 + 136) = v127;
            *(_QWORD*)(v116 + 148) = *(_QWORD*)(v115 + 148);
            *(_QWORD*)(v116 + 120) = v102 + 2;
            v128 = *(_QWORD*)(v115 + 160);
            LODWORD(v127) = *(_DWORD*)(v115 + 168);
            v115 += 176;
            *(_DWORD*)(v116 + 168) = v127;
            *(_QWORD*)(v116 + 160) = v128;
            v116 += 176;
          } while ((void (***)(__int64))v115 != v113);
          v129 = (void (***)(__int64))v112;
          do {
            v130 = *v129;
            v129 += 22;
            (*v130)(v112);
            v112 = (__int64)v129;
          } while (v129 != v113);
          v112 = *(_QWORD*)v0;
        }
        v92 = v86 + 176;
        *(_QWORD*)v0 = v114;
        *(_QWORD*)(v0 + 8) = v86 + 176;
        *(_QWORD*)(v0 + 16) = v143 + v144;
        if (v112 != 0) {
          v131 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v131 = 56;
          }
          nn_mem_StandardAllocator_Free_alt2(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v131, v112);
        }
        v1 = (__int64*)GameData_212c638;
      }
      else {
        *(_QWORD*)v74 = game_map_anonymous_EntityObject_vtable;
        v78 = (__int64*)(v74 + 8);
        if ((v152_.v152 & 1) != 0) {
          fw_text_String_CopyTerminated(v78, (__int64)v152_.v154, v152_.v153);
        }
        else {
          v79 = v152_.v152;
          v80 = (__int64)v152_.v154;
          *(_QWORD*)(v74 + 16) = v152_.v153;
          *(_QWORD*)(v74 + 24) = v80;
          *v78 = v79;
        }
        v1 = (__int64*)GameData_212c638;
        if ((v155 & 1) != 0) {
          fw_text_String_CopyTerminated((__int64*)(v74 + 32), (__int64)v157,
                                        v156);
        }
        else {
          v90 = v155;
          v91 = v157;
          *(_QWORD*)(v74 + 40) = v156;
          *(_QWORD*)(v74 + 48) = v91;
          *(_QWORD*)(v74 + 32) = v90;
        }
        v92 = v74 + 176;
        v93 = GameData_212d1d0[0];
        v94 = v158;
        v95 = v159;
        v96 = v161;
        *(_QWORD*)(v74 + 72) = v160;
        *(_QWORD*)(v74 + 80) = v96;
        *(_QWORD*)(v74 + 56) = v94;
        *(_QWORD*)(v74 + 64) = v95;
        v97 = *(_QWORD*)v163;
        v98 = *(_QWORD*)&v163[8];
        LOWORD(v96) = *(_WORD*)&v163[16];
        *(_QWORD*)(v74 + 88) = v162;
        *(_WORD*)(v74 + 112) = v96;
        *(_QWORD*)(v74 + 96) = v97;
        *(_QWORD*)(v74 + 104) = v98;
        *(_QWORD*)(v74 + 120) = v145;
        v99 = v166;
        LOWORD(v98) = v167;
        *(_QWORD*)(v74 + 128) = v165;
        *(_QWORD*)(v74 + 136) = v99;
        *(_WORD*)(v74 + 144) = v98;
        *(_QWORD*)(v74 + 120) = GameData_1f9dc70;
        *(_QWORD*)(v74 + 148) = v168;
        *(_QWORD*)(v74 + 120) = v93 + 2;
        v100 = v169;
        *(_DWORD*)(v74 + 168) = v170;
        *(_QWORD*)(v74 + 160) = v100;
      }
      *(_QWORD*)(v0 + 8) = v92;
      v72 = (unsigned int)v76;
      goto LABEL_178;
    }
    if ((v65 & v66) == 0) {
      while (1) {
        v71 = v69[1];
        if (v71 == v64) {
          if (*((_DWORD*)v69 + 4) == v64) {
            goto LABEL_144;
          }
        }
        else if ((v71 & v66) != v67) {
          goto LABEL_145;
        }
        v69 = (__int64*)*v69;
        if (v69 == nullptr) {
          goto LABEL_145;
        }
      }
    }
    while (2) {
      v70 = v69[1];
      if (v70 != v64) {
        if (v70 >= v65) {
          v70 %= v65;
        }
        if (v70 != v67) {
          goto LABEL_145;
        }
      }
      else if (*((_DWORD*)v69 + 4) == v64) {
        break;
      }
      v69 = (__int64*)*v69;
      if (v69 == nullptr) {
        goto LABEL_145;
      }
      continue;
    }
  LABEL_144:
    v72 = *((unsigned int*)v69 + 5);
    if ((v72 & 0x80000000) != 0) {
      goto LABEL_145;
    }
  LABEL_178:
    v172[0] = v169;
    if ((_DWORD)v169 != 0) {
      v147_.v147 = v172;
      *(_DWORD*)(game_map_anonymous_818500(
                     (float*)(v0 + 24), v172,
                     (__int64)std___1_piecewise_construct_ptr, &v147_.v147) +
                 20) = v72;
    }
    v172[0] = HIDWORD(v169);
    if (HIDWORD(v169) != 0) {
      v147_.v147 = v172;
      *(_DWORD*)(game_map_anonymous_818500(
                     (float*)(v0 + 24), v172,
                     (__int64)std___1_piecewise_construct_ptr, &v147_.v147) +
                 20) = v72;
    }
    v132 = &v147_.v147;
    v147_.v149 = v72;
    v147_.v147 = (unsigned int*)GameData_1f9e218;
    v147_.v148 = v0;
    v147_.v150 = &v147_.v147;
    if (*(__int16*)&v163[10] < 0) {
      goto LABEL_186;
    }
    v133 = *(__int16*)&v163[12];
    if (*(__int16*)&v163[12] < 0 ||
        (v134 = *(_WORD*)&v163[16],
         *(__int16*)&v163[12] > *(__int16*)&v163[16])) {
      v132 = &v147_.v147;
      goto LABEL_186;
    }
    v138 = *(_WORD*)&v163[14];
    do {
      v140 = *(__int16*)&v163[10];
      if (*(__int16*)&v163[10] <= v138) {
        do {
          v171 = v133;
          v172[0] = v140;
          if (v147_.v150 == nullptr) {
            GameRoutine_60a310();
          }
          (*((void (**)(unsigned int**, unsigned int*, int*))*v147_.v150 + 6))(
              v147_.v150, v172, &v171);
          v139 = v140++ < *(__int16*)&v163[14];
        } while (v139);
        v138 = *(_WORD*)&v163[14];
        v134 = *(_WORD*)&v163[16];
      }
      v139 = v133++ < v134;
    } while (v139);
    v132 = v147_.v150;
    if (v147_.v150 == &v147_.v147) {
    LABEL_186:
      v135 = 8;
      goto LABEL_187;
    }
    if (v147_.v150 != nullptr) {
      v135 = 10;
    LABEL_187:
      (*(void (**)(void*)) & (*v132)[v135])(v132);
    }
  LABEL_188:
    v151 = game_map_anonymous_EntityObject_vtable;
    if ((v155 & 1) != 0 && v157 != nullptr) {
      v136 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v136 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v136, (__int64)v157);
    }
    if ((v152_.v152 & 1) != 0 && v152_.v154 != nullptr) {
      v137 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v137 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v137, (__int64)v152_.v154);
    }
  LABEL_17:
    if (++v10 != v11) {
      continue;
    }
    break;
  }
LABEL_210:
  v141 = *(_QWORD*)v0;
  v142 = *(_QWORD*)(v0 + 8);
  if (*(_QWORD*)v0 != v142) {
    do {
      GameRoutine_8151a0((__int64*)v0, v141, 1u);
      GameRoutine_8151a0((__int64*)v0, v141, 2u);
      v141 += 176;
    } while (v141 != v142);
  }
}

__int64* game_map_anonymous_Impl_Entry_closure_Invoke(__int64 a1, _DWORD* a2,
                                                      _DWORD* a3)
{

#pragma clang fp contract(off)
  unsigned __int64 v3;
  __int64 v4;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v8;
  __int64* v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64* v13;
  __int64 v14;
  float v15;
  float v16;
  float v17;
  _BOOL8 v18;
  unsigned __int64 v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  __int64 primeEm;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  __int64 v27;
  bool v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  unsigned __int64 v34;
  unsigned __int64 v35;
  _QWORD* v36;
  unsigned __int64 v37;
  __int64 v38;
  unsigned __int64 v39;
  _QWORD* v40;
  unsigned __int64 v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64* v47;
  unsigned __int64 v48;

  v4 = *(_QWORD*)(a1 + 8);
  v6 = (unsigned int)(*a2 | (*a3 << 16));
  v7 = *(_QWORD*)(v4 + 72);
  if (v7 != 0) {
    v8 = v7 - 1;
    if ((v7 & (v7 - 1)) != 0) {
      v3 = (unsigned int)(*a2 | (*a3 << 16));
      if (v7 <= v6) {
        v3 = (unsigned int)v6 % (unsigned int)v7;
      }
    }
    else {
      v3 = ((_DWORD)v7 - 1) & (unsigned int)v6;
    }
    v9 = *(__int64**)(*(_QWORD*)(v4 + 64) + 8 * v3);
    if (v9 != nullptr) {
      v10 = *v9;
      if (*v9 != 0) {
        if ((v7 & v8) == 0) {
          while (1) {
            v12 = *(_QWORD*)(v10 + 8);
            if (v12 == v6) {
              if (*(_DWORD*)(v10 + 16) == (_DWORD)v6) {
                return GameRoutine_7d6200((__int64*)(v10 + 24),
                                          (_DWORD*)(a1 + 16));
              }
            }
            else if ((v12 & v8) != v3) {
              goto LABEL_22;
            }
            v10 = *(_QWORD*)v10;
            if (v10 == 0) {
              goto LABEL_22;
            }
          }
        }
        do {
          v11 = *(_QWORD*)(v10 + 8);
          if (v11 == v6) {
            if (*(_DWORD*)(v10 + 16) == (_DWORD)v6) {
              return GameRoutine_7d6200((__int64*)(v10 + 24),
                                        (_DWORD*)(a1 + 16));
            }
          }
          else {
            if (v11 >= v7) {
              v11 %= v7;
            }
            if (v11 != v3) {
              break;
            }
          }
          v10 = *(_QWORD*)v10;
        } while (v10 != 0);
      }
    }
  }
LABEL_22:
  v13 = (__int64*)fw_memory_g_heap_manager_ptr;
  v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       48, 16, 0);
  *(_QWORD*)v14 = 0;
  *(_QWORD*)(v14 + 8) = v6;
  *(_DWORD*)(v14 + 16) = v6;
  v10 = v14;
  *(_QWORD*)(v14 + 24) = 0;
  *(_QWORD*)(v14 + 32) = 0;
  *(_QWORD*)(v14 + 40) = 0;
  v15 = *(float*)(v4 + 96);
  v16 = (float)(unsigned __int64)(*(_QWORD*)(v4 + 88) + 1LL);
  if (v7 == 0 || (float)(v15 * (float)v7) < v16) {
    v17 = v16 / v15;
    v18 = true;
    if (v7 >= 3) {
      v18 = (v7 & (v7 - 1)) != 0;
    }
    v19 = v18 | (2 * v7);
    v20 = vcvtps_u64_f32(v17);
    if (v19 <= v20) {
      v21 = v20;
    }
    else {
      v21 = v19;
    }
    if (v21 == 1) {
      v21 = 2;
    }
    else if ((v21 & (v21 - 1)) != 0) {
      primeEm = std___1___next_prime(v21);
      v7 = *(_QWORD*)(v4 + 72);
      v21 = primeEm;
    }
    if (v21 <= v7) {
      if (v21 >= v7) {
        goto LABEL_84;
      }
      v28 = v7 >= 3 && (v7 & (v7 - 1)) == 0;
      v29 = vcvtps_u64_f32((float)*(unsigned __int64*)(v4 + 88) /
                           *(float*)(v4 + 96));
      if (v28) {
        v43 = 1LL << (-(char)__clz(v29 - 1) & 63);
        if (v29 >= 2) {
          v29 = v43;
        }
      }
      else {
        v29 = std___1___next_prime(v29);
      }
      if (v21 <= v29) {
        v21 = v29;
      }
      if (v21 >= v7) {
        goto LABEL_84;
      }
      if (v21 == 0) {
        v44 = *(_QWORD*)(v4 + 64);
        *(_QWORD*)(v4 + 64) = 0;
        if (v44 != 0) {
          v45 = 128;
          if (*(_QWORD*)(*v13 + 200) == 0) {
            v45 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v13 + v45, v44);
        }
        *(_QWORD*)(v4 + 72) = 0;
        goto LABEL_84;
      }
    }
    if (v21 >> 61 != 0) {
      GameRoutine_60a210();
    }
    v23 = fw_memory_HeapManager_Allocate(*v13, 8 * v21, 16, 0);
    v24 = *(_QWORD*)(v4 + 64);
    *(_QWORD*)(v4 + 64) = v23;
    if (v24 != 0) {
      v25 = 128;
      if (*(_QWORD*)(*v13 + 200) == 0) {
        v25 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v13 + v25, v24);
    }
    v26 = v21 & 7;
    *(_QWORD*)(v4 + 72) = v21;
    if (v21 >= 8) {
      v27 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8 * v27) = 0;
        *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8 * v27 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8 * v27 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8 * v27 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8 * v27 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8 * v27 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8 * v27 + 48) = 0;
        v30 = *(_QWORD*)(v4 + 64) + 8 * v27;
        v27 += 8;
        *(_QWORD*)(v30 + 56) = 0;
      } while ((v21 & 0x1FFFFFFFFFFFFFF8LL) != v27);
    }
    else {
      v27 = 0;
    }
    if ((v21 & 7) != 0) {
      v31 = 8 * v27;
      do {
        --v26;
        *(_QWORD*)(*(_QWORD*)(v4 + 64) + v31) = 0;
        v31 += 8;
      } while (v26 != 0);
    }
    v33 = v4 + 80;
    v32 = *(_QWORD**)(v4 + 80);
    if (v32 != nullptr) {
      v34 = v32[1];
      v35 = v21 - 1;
      if ((v21 & (v21 - 1)) != 0) {
        if (v34 >= v21) {
          v34 %= v21;
        }
        *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8 * v34) = v33;
        v36 = (_QWORD*)*v32;
        if (*v32 == 0) {
          goto LABEL_84;
        }
        while (1) {
          v37 = v36[1];
          if (v37 >= v21) {
            v37 %= v21;
          }
          if (v37 != v34) {
            v38 = *(_QWORD*)(v4 + 64);
            if (*(_QWORD*)(v38 + 8 * v37) == 0) {
              *(_QWORD*)(v38 + 8 * v37) = v32;
              goto LABEL_60;
            }
            *v32 = *v36;
            *v36 = **(_QWORD**)(*(_QWORD*)(v4 + 64) + 8 * v37);
            **(_QWORD**)(*(_QWORD*)(v4 + 64) + 8 * v37) = v36;
            v36 = v32;
          }
          v37 = v34;
        LABEL_60:
          v32 = v36;
          v36 = (_QWORD*)*v36;
          v34 = v37;
          if (v36 == nullptr) {
            goto LABEL_84;
          }
        }
      }
      v39 = v34 & v35;
      *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8 * v39) = v33;
      while (1) {
        v40 = (_QWORD*)*v32;
        if (*v32 == 0) {
          break;
        }
        v41 = v40[1] & v35;
        if (v41 == v39) {
          v32 = (_QWORD*)*v32;
        }
        else {
          v42 = *(_QWORD*)(v4 + 64);
          if (*(_QWORD*)(v42 + 8 * v41) != 0) {
            *v32 = *v40;
            *v40 = **(_QWORD**)(*(_QWORD*)(v4 + 64) + 8 * v41);
            **(_QWORD**)(*(_QWORD*)(v4 + 64) + 8 * v41) = v40;
          }
          else {
            *(_QWORD*)(v42 + 8 * v41) = v32;
            v32 = v40;
            v39 = v41;
          }
        }
      }
    }
  LABEL_84:
    v7 = *(_QWORD*)(v4 + 72);
    if ((v7 & (v7 - 1)) != 0) {
      if (v7 <= v6) {
        v3 = v6 % v7;
      }
      else {
        v3 = v6;
      }
    }
    else {
      v3 = ((_DWORD)v7 - 1) & (unsigned int)v6;
    }
  }
  v46 = *(_QWORD*)(v4 + 64);
  v47 = *(__int64**)(v46 + 8 * v3);
  if (v47 != nullptr) {
    *(_QWORD*)v10 = *v47;
    *v47 = v10;
  }
  else {
    *(_QWORD*)v10 = *(_QWORD*)(v4 + 80);
    *(_QWORD*)(v4 + 80) = v10;
    *(_QWORD*)(v46 + 8 * v3) = v4 + 80;
    if (*(_QWORD*)v10 != 0) {
      v48 = *(_QWORD*)(*(_QWORD*)v10 + 8LL);
      if ((v7 & (v7 - 1)) != 0) {
        if (v48 >= v7) {
          v48 %= v7;
        }
      }
      else {
        v48 &= v7 - 1;
      }
      *(_QWORD*)(*(_QWORD*)(v4 + 64) + 8 * v48) = v10;
    }
  }
  ++*(_QWORD*)(v4 + 88);
  return GameRoutine_7d6200((__int64*)(v10 + 24), (_DWORD*)(a1 + 16));
}

void Impl_Destructor_9ba4a0(_QWORD* a1)
{
  __int64 v1;
  __int64 v2;
  __int64 v4;
  bool v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64* v21;
  __int64* v22;
  unsigned __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  __int64 v32;

  v2 = a1[2];
  v1 = a1[3];
  v4 = v1 - v2;
  v5 = v1 == v2;
  *a1 = game_map_anonymous_Impl_vtable;
  v7 = a1[5];
  v6 = a1[6];
  v8 = (v4 << 9) - 1;
  if (v5) {
    v8 = 0;
  }
  a1[6] = v6 - 1;
  if ((unsigned __int64)(v8 - (v6 + v7) + 1) >= 0x2000) {
    v9 = *(_QWORD*)(v1 - 8);
    if (v9 != 0) {
      v10 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v10 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v10, v9);
      v1 = a1[3];
    }
    a1[3] = v1 - 8;
  }
  Impl_9baec0((__int64)a1, 0);
  Impl_9baec0((__int64)a1, 1u);
  v11 = a1[10];
  if (v11 != 0) {
    v12 = a1[11];
    if (v11 == v12) {
      goto LABEL_17;
    }
    do {
      v13 = *(_QWORD*)(v12 - 8);
      if (v13 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v13 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v13 + 16LL))(v13);
        std___1___shared_weak_count___release_weak_alt2(v13);
      }
      v12 -= 16;
    } while (v12 != v11);
    v14 = a1[10];
    a1[11] = v11;
    v11 = v14;
    if (v14 != 0) {
    LABEL_17:
      v15 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v15 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v15, v11);
    }
  }
  v16 = a1[7];
  if (v16 != 0) {
    v17 = a1[8];
    if (v16 == v17) {
      goto LABEL_28;
    }
    do {
      v18 = *(_QWORD*)(v17 - 8);
      if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
        std___1___shared_weak_count___release_weak_alt2(v18);
      }
      v17 -= 16;
    } while (v17 != v16);
    v19 = a1[7];
    a1[8] = v16;
    v16 = v19;
    if (v19 != 0) {
    LABEL_28:
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free_alt2(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v20, v16);
    }
  }
  v21 = (__int64*)a1[2];
  v22 = (__int64*)a1[3];
  a1[6] = 0;
  v23 = v22 - v21;
  if (v23 >= 3) {
    v24 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v21 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v24 + 200LL) != 0) {
          v25 = 128;
        }
        else {
          v25 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v24 + v25, *v21);
        v21 = (__int64*)a1[2];
        v22 = (__int64*)a1[3];
      }
      a1[2] = ++v21;
      v23 = v22 - v21;
    } while (v23 > 2);
  }
  if (v23 == 1) {
    v26 = 2048;
  }
  else {
    if (v23 != 2) {
      goto LABEL_44;
    }
    v26 = 4096;
  }
  a1[5] = v26;
LABEL_44:
  if (v21 != v22) {
    v27 = fw_memory_g_heap_manager_ptr;
    do {
      if (*v21 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v27 + 200LL) != 0) {
          v28 = 128;
        }
        else {
          v28 = 56;
        }
        nn_mem_StandardAllocator_Free_alt2(*(_QWORD*)v27 + v28, *v21);
      }
      ++v21;
    } while (v21 != v22);
    v29 = a1[3];
    v30 = a1[2] - v29;
    if (v30 != 0) {
      a1[3] = v29 + ((v30 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  v31 = a1[1];
  if (v31 != 0) {
    v32 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v32 = 56;
    }
    nn_mem_StandardAllocator_Free_alt2(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v32, v31);
  }
}

__int64 Impl_9baec0(__int64 result, unsigned __int8 a2)
{
  __int64 v2;
  __int64 v3;
  __int64* v4;
  __int64* v5;
  __int64 v6;
  __int64 v7;
  atomic_ullong* v8;
  __int64 v9;
  _QWORD v10[2];

  v2 = result + 24LL * a2;
  v4 = *(__int64**)(v2 + 56);
  v5 = *(__int64**)(v2 + 64);
  v3 = v2 + 56;
  if (v4 != v5) {
    while (1) {
      v6 = *v4;
      v7 = v4[1];
      if (v7 != 0) {
        v8 = (atomic_ullong*)(v7 + 8);
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                  memory_order_relaxed);
        v10[0] = v6;
        v10[1] = v7;
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 8), 1u,
                                  memory_order_relaxed);
        result = Shape_f64760(v10);
        if (atomic_fetch_add((atomic_ullong* volatile)(v7 + 8),
                             0xFFFFFFFFFFFFFFFFLL) != 0) {
          if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) == 0) {
            goto LABEL_10;
          }
        }
        else {
          (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
          result = std___1___shared_weak_count___release_weak(v7);
          if (atomic_fetch_add(v8, 0xFFFFFFFFFFFFFFFFLL) == 0) {
          LABEL_10:
            (*(void (**)(__int64))(*(_QWORD*)v7 + 16LL))(v7);
            result = std___1___shared_weak_count___release_weak(v7);
          }
        }
      }
      else {
        v10[0] = *v4;
        v10[1] = 0;
        result = Shape_f64760(v10);
      }
      v4 += 2;
      if (v4 == v5) {
        v4 = *(__int64**)v3;
        v5 = *(__int64**)(v3 + 8);
        break;
      }
    }
  }
  while (v5 != v4) {
    v9 = *(v5 - 1);
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      result = std___1___shared_weak_count___release_weak(v9);
    }
    v5 -= 2;
  }
  *(_QWORD*)(v3 + 8) = v4;
  return result;
}

#pragma GCC visibility pop
