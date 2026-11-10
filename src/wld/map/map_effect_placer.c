#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_198c1e0(_QWORD, _QWORD, _QWORD, float);
__int64 GameRoutine_c24fe0(_QWORD);
__int64 GameRoutine_c25240(_QWORD, _QWORD);
__int64 GameRoutine_c253a0(_QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_211d628[])();
extern __int64 GameData_2131678;
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 wld_map_MapEffectPlacer_PlaceCommon(__int64 a1, __int64* a2, float a3);
__int64 wld_map_MapEffectPlacer_PlaceCommon_lambda0_Invoke(__int64 result);
__int64 wld_map_MapEffectPlacer_PlaceTagged_lambda0_Invoke(__int64 result);
__attribute__((swiftcall)) void wld_c2c890(PSEUDO_X8, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a10d0(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 GameRoutine_14a1e70(_QWORD, float);
__int64 GameRoutine_14a3920(long double, long double);
__int64 GameRoutine_14a3a60(_QWORD, _QWORD, long double);
__int64 GameRoutine_98ed40(_QWORD);
__int64 GameRoutine_bd16c0(_QWORD, _QWORD);
__int64 GameRoutine_c26680(_QWORD, _QWORD);
__int64 Manager_bc6460(_QWORD, _QWORD, _QWORD);
__int64 ObjectGroup_c24fe0(_QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 memcmp(_QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 strcmp(long double);
__int64 strlen(_QWORD);
__int64 wld_Crc32(_QWORD, _QWORD, _QWORD);
__int64 wld_map_c23d20(_QWORD, _QWORD, _QWORD, long double);
__n128 std___1___shared_weak_count___release_weak_alt1(_QWORD) __asm__(
    "std___1___shared_weak_count___release_weak");
extern _UNKNOWN* GameData_212d4a8;
extern __int64 (*GameData_211d6a8[])();
extern __int64* eft_g_effectSystem_ptr[3];
extern int* GameData_212d4a0;
void __attribute__((noreturn)) String_60a250(_QWORD);
bool MapEffectPlacer_198c1e0(_QWORD* a1, __int64** a2, float32x4_t* a3,
                             long double a4);
void wld_map_MapEffectPlacer_PlaceTagged(_QWORD* a1, __int64 a2, __int64 a3,
                                         float a4);

__int64 wld_map_MapEffectPlacer_PlaceCommon(__int64 a1, __int64* a2, float a3)
{
  unsigned __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 result;
  _DWORD* v11;
  _DWORD* v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  _QWORD v22[4];
  _QWORD* v23;
  __int64 v24;
  __int64 v25;

  v6 = 0x8E38E38E38E38E39LL * ((a2[1] - *a2) >> 5);
  v7 = *(_QWORD*)(a1 + 8);
  v9 = *(_QWORD*)(v7 + 24);
  v8 = *(_QWORD*)(v7 + 32);
  if (v8 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v8 + 8), 1u,
                              memory_order_relaxed);
  }
  GameRoutine_c24fe0(v9);
  result = GameRoutine_c25240(v9 + 200, (int)v6);
  v11 = (_DWORD*)a2[9];
  v12 = (_DWORD*)a2[10];
  if (v11 != v12) {
    v13 = GameData_2131678 + 16;
    while (
        ((*(_QWORD*)(a2[3] + 8 * ((unsigned __int64)(unsigned int)*v11 >> 6)) >>
          *v11) &
         1) != 0) {
    LABEL_5:
      if (++v11 == v12) {
        goto LABEL_22;
      }
    }
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         296, 16, 0);
    *(_QWORD*)(v14 + 8) = 0;
    *(_QWORD*)(v14 + 16) = 0;
    *(_QWORD*)v14 = v13;
    v15 = *a2;
    *(_DWORD*)(v14 + 32) = 0;
    *(_QWORD*)(v14 + 40) = 0;
    *(_DWORD*)(v14 + 104) = 0;
    *(_QWORD*)(v14 + 56) = 0;
    *(_QWORD*)(v14 + 64) = 0;
    *(_QWORD*)(v14 + 72) = 0;
    *(_WORD*)(v14 + 80) = 0;
    *(_DWORD*)(v14 + 48) = 0x2000;
    *(_WORD*)(v14 + 116) = 0;
    *(_WORD*)(v14 + 136) = 0;
    *(_BYTE*)(v14 + 160) = 0;
    *(_BYTE*)(v14 + 288) = 0;
    *(_QWORD*)(v14 + 272) = 0;
    *(_QWORD*)(v14 + 280) = 0;
    *(_QWORD*)(v14 + 256) = 0;
    *(_QWORD*)(v14 + 264) = 0;
    *(_QWORD*)(v14 + 240) = 0;
    *(_QWORD*)(v14 + 248) = 0;
    *(_QWORD*)(v14 + 224) = 0;
    *(_QWORD*)(v14 + 232) = 0;
    *(_QWORD*)(v14 + 208) = 0;
    *(_QWORD*)(v14 + 216) = 0;
    *(_QWORD*)(v14 + 192) = 0;
    *(_QWORD*)(v14 + 200) = 0;
    *(_WORD*)(v14 + 108) = 256;
    *(_QWORD*)(v14 + 176) = 0;
    *(_QWORD*)(v14 + 184) = 0;
    *(_QWORD*)(v14 + 168) = 0;
    *(_QWORD*)(v14 + 120) = 0;
    *(_DWORD*)(v14 + 127) = 0;
    *(_DWORD*)(v14 + 292) = 2;
    v25 = v14;
    *(_DWORD*)(v14 + 112) = -1082130432;
    *(_QWORD*)(v14 + 24) = 0;
    v24 = v14 + 24;
    result =
        GameRoutine_198c1e0(a1, &v24, v15 + 288LL * (unsigned int)*v11, a3);
    if ((result & 1) == 0) {
    LABEL_19:
      v21 = v25;
      if (v25 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v25 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v21 + 16LL))(v21);
        result = std___1___shared_weak_count___release_weak(v21);
      }
      goto LABEL_5;
    }
    v16 = *(_QWORD*)(a1 + 8);
    v17 = *(_QWORD*)(v16 + 24);
    v18 = *(_QWORD*)(v16 + 32);
    if (v18 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v18 + 8), 1u,
                                memory_order_relaxed);
    }
    v19 = (unsigned int)*v11;
    v23 = v22;
    v22[0] = GameData_211d628;
    v22[1] = a2;
    v22[2] = v19;
    GameRoutine_c253a0(v17, &v24, v22);
    result = (__int64)v23;
    if (v23 == v22) {
      v20 = 32;
    }
    else {
      if (v23 == nullptr) {
        goto LABEL_15;
      }
      v20 = 40;
    }
    result = (*(__int64 (**)(void*))(*v23 + v20))(v23);
  LABEL_15:
    if (v18 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v18 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v18 + 16LL))(v18);
      result = std___1___shared_weak_count___release_weak(v18);
    }
    *(_QWORD*)(a2[3] + (((unsigned __int64)(unsigned int)*v11 >> 3) &
                        0x1FFFFFF8)) |= 1LL << *v11;
    goto LABEL_19;
  }
LABEL_22:
  if (v8 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v8 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v8 + 16LL))(v8);
    return std___1___shared_weak_count___release_weak(v8);
  }
  return result;
}

bool MapEffectPlacer_198c1e0(_QWORD* a1, __int64** a2, float32x4_t* a3,
                             long double a4)
{
  unsigned int v4;
  __int64 v5;
  float v9;
  __int64 v10;
  __int64 v11;
  __n128 v12;
  long double v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  char* v17;
  __int64* v18;
  __int64* v19;
  unsigned __int64 v20;
  unsigned __int32 v21;
  __int64 v22;
  __int64 v23;
  __int8* v24;
  unsigned __int64 v25;
  float32x4_t v26;
  __int8* v27;
  __int64 v28;
  unsigned __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  unsigned int v32;
  __n128 v33;
  __int64* v34;
  __int64* v35;
  __int64* v36;
  __int64 v37;
  __int64* v38;
  __int64 v40;
  unsigned __int64 v41;
  bool v42;
  unsigned __int64 v43;
  __int8* v44;
  unsigned __int64 v45;
  long double v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64* v50;
  __int64* v51;
  char* v52;
  unsigned __int64 v53;
  unsigned __int32 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  unsigned __int64 v59;
  bool v60;
  unsigned __int64 v61;
  __int8* v62;
  unsigned __int64 v63;
  __int64 v64;
  __int8* v65;
  unsigned __int64 v66;
  __int8* v67;
  __int64 v68;
  unsigned __int64 v69;
  unsigned __int64 v70;
  unsigned __int64 v71;
  __int64 v72;
  unsigned int v73;
  __n128 v74;
  __int64* v75;
  __int64* v76;
  __int64* v77;
  __int64 v78;
  __int64* v79;
  unsigned __int8 explicit;
  int* v81;
  __int64 v82;
  __int64 v83;
  int v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64* v88;
  __int64* v89;
  __int64 v90;
  unsigned __int64 v91;
  unsigned __int64 v92;
  __int8* v93;
  unsigned __int64 v94;
  unsigned __int64 v95;
  char v96;
  __int64 v97;
  char v98;
  __int64 v99;
  unsigned int v100;
  unsigned int i;
  __int64 v102;
  __int8* v103;
  unsigned __int64 v104;
  float32x4_t v105;
  __int8* v106;
  __int64 v107;
  unsigned __int64 v108;
  unsigned __int64 v109;
  __int64 v110;
  unsigned int v111;
  __n128 v112;
  __int64* v113;
  __int64* v114;
  __int64* v115;
  __int64 v116;
  __int64* v117;
  __int64 v118;
  __int64* v119;
  __int64 v120;
  char* v121;
  __int8* v122;
  float32x4_t v123;
  unsigned __int64 v124;
  unsigned __int64 v125;
  unsigned __int64 v126;
  unsigned __int64 v127;

  v4 = LANES128(a3[3]).n128_u32[2];
  if (v4 >= 0xA) {
    String_60a250("bitset test argument out of range");
  }
  v5 = *a1;
  if (((*(_QWORD*)(*a1 + 184LL) >> v4) & 1) == 0) {
    return false;
  }
  if ((LANES128(a3[8]).n128_u8[0] & 1) == 0) {
    if ((LANES128(a3[2]).n128_u8[0] & 1) != 0) {
      v24 = (__int8*)LANES128(a3[3]).n128_u64[0];
    }
    else {
      v24 = &LANES128(a3[2]).n128_i8[1];
    }
    v25 = LANES128(a3[1]).n128_u64[1];
    v26 = vaddq_f32(a3[4], a3[5]);
    v42 = (LANES128(*(a3)).n128_u8[8] & 1) == 0;
    LODWORD(v122) = LANES128(a3[3]).n128_u32[2];
    if (v42) {
      v27 = &LANES128(*(a3)).n128_i8[9];
    }
    else {
      v27 = (__int8*)v25;
    }
    v119 = nullptr;
    v120 = 0;
    v123 = v26;
    v121 = v24;
    v28 = *eft_g_effectSystem_ptr[0];
    v29 = LANES128(a3[6]).n128_u64[1];
    v124 = LANES128(a3[6]).n128_u64[0];
    v125 = v29;
    v30 = LANES128(a3[7]).n128_u64[1];
    v126 = LANES128(a3[7]).n128_u64[0];
    v127 = v30;
    v31 = Manager_bc6460(v28, &v119, 1);
    GameRoutine_14a10d0(&v119, v31, v32, v27);
    v34 = v119;
    v35 = (__int64*)v120;
    if (v120 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v120 + 8), 1u,
                                memory_order_relaxed);
    }
    v36 = a2[1];
    *a2 = v34;
    a2[1] = v35;
    if (v36 != nullptr) {
      if (atomic_fetch_add((atomic_ullong* volatile)(v36 + 1),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64*))(*v36 + 16))(v36);
        v33 = std___1___shared_weak_count___release_weak_alt1(v36);
      }
      v35 = a2[1];
    }
    if (v35 != nullptr) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v35 + 1), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v35 + 1),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64*))(*v35 + 16))(v35);
        v33 = std___1___shared_weak_count___release_weak_alt1(v35);
      }
    }
    v37 = v120;
    if (v120 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v120 + 8),
                                      0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64, long double))(*(_QWORD*)v37 + 16LL))(
          v37, *(long double*)&v33);
      v33 = std___1___shared_weak_count___release_weak_alt1(v37);
    }
    v38 = *a2;
    if (*v38 != 0 && *(_DWORD*)(*v38 + 16) == *((_DWORD*)v38 + 2)) {
      GameRoutine_14a3a60(v38 + 18, &a3[10], *(long double*)&v33);
      v38[33] = LANES128(a3[17]).n128_i64[1];
      return true;
    }
    return false;
  }
  v9 = *(float*)&a4;
  v10 = *(_QWORD*)(LANES128(*(a3)).n128_u64[0] + 72);
  if ((unsigned int)strcmp(a4) == 0) {
    v41 = LANES128(*(a3)).n128_u8[8];
    v42 = (v41 & 1) == 0;
    v43 = v41 >> 1;
    if (v42) {
      v44 = &LANES128(*(a3)).n128_i8[9];
    }
    else {
      v44 = (__int8*)LANES128(a3[1]).n128_u64[1];
    }
    if (v42) {
      v45 = v43;
    }
    else {
      v45 = LANES128(a3[1]).n128_u64[0];
    }
    wld_c2c890((void*)(&v119), v5, v44, v45);
    v47 = a1[1];
    v48 = *(_QWORD*)(v47 + 24);
    v49 = *(_QWORD*)(v47 + 32);
    if (v49 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v49 + 8), 1u,
                                memory_order_relaxed);
    }
    v50 = *(__int64**)(v48 + 88);
    v51 = *(__int64**)(v48 + 96);
    if (((unsigned __int8)v119 & 1) != 0) {
      v52 = v121;
    }
    else {
      v52 = (char*)&v119 + 1;
    }
    if (((unsigned __int8)v119 & 1) != 0) {
      v53 = v120;
    }
    else {
      v53 = (unsigned __int64)(unsigned __int8)v119 >> 1;
    }
    if (v50 != v51) {
      v54 = LANES128(a3[8]).n128_u32[1];
      while (1) {
        v55 = *v50;
        if (v54 == *(_DWORD*)(*v50 + 284) && *(_QWORD*)(v55 + 272) == v53 &&
            (unsigned int)memcmp(v55 + 16, v52, v53) == 0) {
          break;
        }
        if (++v50 == v51) {
          goto LABEL_76;
        }
      }
    }
    if (v50 == v51) {
    LABEL_76:
      v23 = 0;
      if (v49 == 0) {
      LABEL_79:
        if (v23 == 0) {
          v56 = a1[1];
          v57 = *(_QWORD*)(v56 + 24);
          v58 = *(_QWORD*)(v56 + 32);
          if (v58 != 0) {
            atomic_fetch_add_explicit((atomic_ullong* volatile)(v58 + 8), 1u,
                                      memory_order_relaxed);
          }
          v59 = LANES128(*(a3)).n128_u8[8];
          v60 = (v59 & 1) == 0;
          v61 = v59 >> 1;
          if (v60) {
            v62 = &LANES128(*(a3)).n128_i8[9];
          }
          else {
            v62 = (__int8*)LANES128(a3[1]).n128_u64[1];
          }
          if (v60) {
            v63 = v61;
          }
          else {
            v63 = LANES128(a3[1]).n128_u64[0];
          }
          v23 = wld_map_c23d20(v57, v62, v63, v46);
          if (v58 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v58 + 8),
                                           0xFFFFFFFFFFFFFFFFLL) == 0) {
            (*(void (**)(__int64))(*(_QWORD*)v58 + 16LL))(v58);
            std___1___shared_weak_count___release_weak_alt1(v58);
          }
          *(_DWORD*)(v23 + 284) = LANES128(a3[8]).n128_u32[1];
        }
        if (((unsigned __int8)v119 & 1) != 0 && v121 != nullptr) {
          v64 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v64 = 56;
          }
          nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                        v64);
        }
        goto LABEL_97;
      }
    }
    else {
      v23 = *v50;
      if (v49 == 0) {
        goto LABEL_79;
      }
    }
    if (atomic_fetch_add((atomic_ullong* volatile)(v49 + 8),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v49 + 16LL))(v49);
      *(__n128*)&v46 = std___1___shared_weak_count___release_weak_alt1(v49);
    }
    goto LABEL_79;
  }
  v11 = strlen(v10);
  wld_c2c890((void*)(&v119), v5, v10, v11);
  v14 = a1[1];
  v15 = *(_QWORD*)(v14 + 24);
  v16 = *(_QWORD*)(v14 + 32);
  if (v16 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v16 + 8), 1u,
                              memory_order_relaxed);
  }
  if (((unsigned __int8)v119 & 1) != 0) {
    v17 = v121;
  }
  else {
    v17 = (char*)&v119 + 1;
  }
  v18 = *(__int64**)(v15 + 88);
  v19 = *(__int64**)(v15 + 96);
  if (((unsigned __int8)v119 & 1) != 0) {
    v20 = v120;
  }
  else {
    v20 = (unsigned __int64)(unsigned __int8)v119 >> 1;
  }
  if (v18 != v19) {
    v21 = LANES128(a3[8]).n128_u32[1];
    while (1) {
      v22 = *v18;
      if (v21 == *(_DWORD*)(*v18 + 284) && *(_QWORD*)(v22 + 272) == v20 &&
          (unsigned int)memcmp(v22 + 16, v17, v20) == 0) {
        break;
      }
      if (++v18 == v19) {
        goto LABEL_43;
      }
    }
  }
  if (v18 == v19) {
  LABEL_43:
    v23 = 0;
    if (v16 == 0) {
      goto LABEL_46;
    }
  }
  else {
    v23 = *v18;
    if (v16 == 0) {
      goto LABEL_46;
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v16 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
    v12 = std___1___shared_weak_count___release_weak_alt1(v16);
  }
LABEL_46:
  if (((unsigned __int8)v119 & 1) != 0 && v121 != nullptr) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v40 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v40);
  }
  if (v23 == 0) {
    goto LABEL_137;
  }
LABEL_97:
  if ((LANES128(a3[2]).n128_u8[0] & 1) != 0) {
    v65 = (__int8*)LANES128(a3[3]).n128_u64[0];
  }
  else {
    v65 = &LANES128(a3[2]).n128_i8[1];
  }
  v66 = LANES128(a3[1]).n128_u64[1];
  v42 = (LANES128(*(a3)).n128_u8[8] & 1) == 0;
  LODWORD(v122) = LANES128(a3[3]).n128_u32[2];
  if (v42) {
    v67 = &LANES128(*(a3)).n128_i8[9];
  }
  else {
    v67 = (__int8*)v66;
  }
  v119 = nullptr;
  v120 = 0;
  v121 = v65;
  v68 = *eft_g_effectSystem_ptr[0];
  v69 = LANES128(a3[4]).n128_u64[1];
  LANES128(v123).n128_u64[0] = LANES128(a3[4]).n128_u64[0];
  LANES128(v123).n128_u64[1] = v69;
  v70 = LANES128(a3[6]).n128_u64[1];
  v124 = LANES128(a3[6]).n128_u64[0];
  v125 = v70;
  v71 = LANES128(a3[7]).n128_u64[1];
  v126 = LANES128(a3[7]).n128_u64[0];
  v127 = v71;
  v72 = Manager_bc6460(v68, &v119, 1);
  GameRoutine_14a10d0(&v119, v72, v73, v67);
  v75 = v119;
  v76 = (__int64*)v120;
  if (v120 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v120 + 8), 1u,
                              memory_order_relaxed);
  }
  v77 = a2[1];
  *a2 = v75;
  a2[1] = v76;
  if (v77 != nullptr) {
    if (atomic_fetch_add((atomic_ullong* volatile)(v77 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v77 + 16))(v77);
      v74 = std___1___shared_weak_count___release_weak_alt1(v77);
    }
    v76 = a2[1];
  }
  if (v76 != nullptr) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v76 + 1), 1u,
                              memory_order_relaxed);
    if (atomic_fetch_add((atomic_ullong* volatile)(v76 + 1),
                         0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64*))(*v76 + 16))(v76);
      v74 = std___1___shared_weak_count___release_weak_alt1(v76);
    }
  }
  v78 = v120;
  if (v120 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v120 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64, long double))(*(_QWORD*)v78 + 16LL))(
        v78, *(long double*)&v74);
    v74 = std___1___shared_weak_count___release_weak_alt1(v78);
  }
  v79 = *a2;
  GameRoutine_14a3a60(*a2 + 18, &a3[10], *(long double*)&v74);
  v79[33] = LANES128(a3[17]).n128_i64[1];
  explicit = atomic_load_explicit((atomic_uchar* volatile)GameData_212d4a8,
                                  memory_order_acquire);
  v81 = GameData_212d4a0;
  if ((explicit & 1) == 0 &&
      (unsigned int)__cxa_guard_acquire(GameData_212d4a8) != 0) {
    *v81 = wld_Crc32(0, "EffectModule", 12);
    __cxa_guard_release(GameData_212d4a8);
  }
  v82 = *(_QWORD*)(v23 + 512);
  v83 = v82;
  while (v83 != *(_QWORD*)(v23 + 504)) {
    v84 = *(_DWORD*)(v83 - 16);
    v83 -= 16;
    v82 -= 16;
    if (v84 == *v81) {
      if (*(_QWORD*)(v23 + 512) != v82) {
        v85 = *(_QWORD*)(v82 + 8);
        if (v85 != 0) {
          goto LABEL_122;
        }
      }
      break;
    }
  }
  v85 = GameRoutine_98ed40(v23);
  if (v85 == 0) {
    goto LABEL_137;
  }
LABEL_122:
  v86 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       296, 16, 0);
  *(_DWORD*)(v86 + 48) = 0x2000;
  v87 = GameData_2131678;
  *(_WORD*)(v86 + 108) = 256;
  *(_QWORD*)(v86 + 16) = 0;
  *(_QWORD*)(v86 + 24) = 0;
  *(_DWORD*)(v86 + 32) = 0;
  *(_QWORD*)(v86 + 40) = 0;
  *(_DWORD*)(v86 + 104) = 0;
  *(_DWORD*)(v86 + 112) = -1082130432;
  *(_QWORD*)(v86 + 56) = 0;
  *(_QWORD*)(v86 + 64) = 0;
  *(_QWORD*)(v86 + 72) = 0;
  *(_WORD*)(v86 + 80) = 0;
  *(_WORD*)(v86 + 116) = 0;
  *(_WORD*)(v86 + 136) = 0;
  *(_BYTE*)(v86 + 160) = 0;
  *(_BYTE*)(v86 + 288) = 0;
  *(_QWORD*)(v86 + 272) = 0;
  *(_QWORD*)(v86 + 280) = 0;
  *(_QWORD*)(v86 + 256) = 0;
  *(_QWORD*)(v86 + 264) = 0;
  *(_QWORD*)(v86 + 240) = 0;
  *(_QWORD*)(v86 + 248) = 0;
  *(_QWORD*)(v86 + 224) = 0;
  *(_QWORD*)(v86 + 232) = 0;
  *(_QWORD*)(v86 + 208) = 0;
  *(_QWORD*)(v86 + 216) = 0;
  *(_QWORD*)(v86 + 192) = 0;
  *(_QWORD*)(v86 + 200) = 0;
  *(_QWORD*)(v86 + 176) = 0;
  *(_QWORD*)(v86 + 184) = 0;
  *(_QWORD*)(v86 + 168) = 0;
  *(_QWORD*)(v86 + 120) = 0;
  *(_DWORD*)(v86 + 127) = 0;
  v120 = v86;
  LOBYTE(v121) = 0;
  BYTE4(v121) = 0;
  LANES128(v123).n128_u8[12] = 0;
  LANES128(v123).n128_u8[8] = 0;
  v122 = nullptr;
  LANES128(v123).n128_u64[0] = 0;
  LODWORD(v125) = -1;
  BYTE4(v124) = 0;
  *(_QWORD*)v86 = v87 + 16;
  *(_QWORD*)(v86 + 8) = 0;
  *(_DWORD*)(v86 + 292) = 2;
  LODWORD(v124) = 1;
  v88 = *a2;
  v89 = a2[1];
  if (v89 != nullptr) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v89 + 1), 1u,
                              memory_order_relaxed);
    v86 = v120;
    v119 = v88;
    v120 = (__int64)v89;
    if (v86 == 0) {
    LABEL_129:
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v89 + 1), 1u,
                                memory_order_relaxed);
      if (atomic_fetch_add((atomic_ullong* volatile)(v89 + 1),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64*))(*v89 + 16))(v89);
        std___1___shared_weak_count___release_weak_alt1(v89);
      }
      goto LABEL_131;
    }
  }
  else {
    v119 = *a2;
    v120 = 0;
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v86 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    v90 = v86;
    (*(void (**)(__int64))(*(_QWORD*)v86 + 16LL))(v86);
    std___1___shared_weak_count___release_weak_alt1(v90);
  }
  v89 = (__int64*)v120;
  if (v120 != 0) {
    goto LABEL_129;
  }
LABEL_131:
  v92 = LANES128(a3[9]).n128_u64[0];
  v91 = LANES128(a3[9]).n128_u64[1];
  v93 = &LANES128(a3[8]).n128_i8[9];
  BYTE4(v124) = 1;
  v94 = LANES128(a3[8]).n128_u8[8];
  v42 = (v94 & 1) == 0;
  v95 = v94 >> 1;
  if (!v42) {
    v93 = (__int8*)v91;
    v95 = v92;
  }
  v122 = v93;
  LANES128(v123).n128_u64[0] = v95;
  v96 = GameRoutine_bd16c0(v85, &v119);
  v97 = v120;
  if (v120 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v120 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
    v98 = v96;
    (*(void (**)(__int64))(*(_QWORD*)v97 + 16LL))(v97);
    v12 = std___1___shared_weak_count___release_weak_alt1(v97);
    v96 = v98;
  }
  if ((v96 & 1) == 0) {
  LABEL_137:
    v99 = **a2;
    if (v99 != 0 && *(_DWORD*)(v99 + 16) == *((_DWORD*)*a2 + 2)) {
      v100 = *(_DWORD*)(v99 + 36);
      if (v100 != 0) {
        for (i = 0; i < v100; ++i) {
          if ((int)v100 > (int)i) {
            v102 = *(_QWORD*)(v99 + 40 + 8LL * (int)i);
            if (v102 != 0) {
              *(_QWORD*)(v102 + 16) = 0;
              *(_QWORD*)(v102 + 24) = 0;
              *(_BYTE*)(v102 + 128) = 1;
              v100 = *(_DWORD*)(v99 + 36);
            }
          }
        }
      }
      GameRoutine_14a3920(*(long double*)&v12, v13);
    }
    else {
      if ((LANES128(a3[2]).n128_u8[0] & 1) != 0) {
        v103 = (__int8*)LANES128(a3[3]).n128_u64[0];
      }
      else {
        v103 = &LANES128(a3[2]).n128_i8[1];
      }
      v104 = LANES128(a3[1]).n128_u64[1];
      v105 = vaddq_f32(a3[5], COERCE_AS(float32x4_t, 0LL));
      v42 = (LANES128(*(a3)).n128_u8[8] & 1) == 0;
      LODWORD(v122) = LANES128(a3[3]).n128_u32[2];
      if (v42) {
        v106 = &LANES128(*(a3)).n128_i8[9];
      }
      else {
        v106 = (__int8*)v104;
      }
      v119 = nullptr;
      v120 = 0;
      v123 = v105;
      v121 = v103;
      v107 = *eft_g_effectSystem_ptr[0];
      v108 = LANES128(a3[6]).n128_u64[1];
      v124 = LANES128(a3[6]).n128_u64[0];
      v125 = v108;
      v109 = LANES128(a3[7]).n128_u64[1];
      v126 = LANES128(a3[7]).n128_u64[0];
      v127 = v109;
      v110 = Manager_bc6460(v107, &v119, 1);
      GameRoutine_14a10d0(&v119, v110, v111, v106);
      v113 = v119;
      v114 = (__int64*)v120;
      if (v120 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v120 + 8), 1u,
                                  memory_order_relaxed);
      }
      v115 = a2[1];
      *a2 = v113;
      a2[1] = v114;
      if (v115 != nullptr) {
        if (atomic_fetch_add((atomic_ullong* volatile)(v115 + 1),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64*))(*v115 + 16))(v115);
          v112 = std___1___shared_weak_count___release_weak_alt1(v115);
        }
        v114 = a2[1];
      }
      if (v114 != nullptr) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v114 + 1), 1u,
                                  memory_order_relaxed);
        if (atomic_fetch_add((atomic_ullong* volatile)(v114 + 1),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64*))(*v114 + 16))(v114);
          v112 = std___1___shared_weak_count___release_weak_alt1(v114);
        }
      }
      v116 = v120;
      if (v120 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v120 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64, long double))(*(_QWORD*)v116 + 16LL))(
            v116, *(long double*)&v112);
        v112 = std___1___shared_weak_count___release_weak_alt1(v116);
      }
      v117 = *a2;
      GameRoutine_14a3a60(*a2 + 18, &a3[10], *(long double*)&v112);
      v117[33] = LANES128(a3[17]).n128_i64[1];
      if (v9 > 0.0) {
        GameRoutine_14a1e70(a2, v9);
      }
    }
  }
  v118 = **a2;
  if (v118 != 0) {
    return *(_DWORD*)(v118 + 16) == *((_DWORD*)*a2 + 2);
  }
  return false;
}

void wld_map_MapEffectPlacer_PlaceTagged(_QWORD* a1, __int64 a2, __int64 a3,
                                         float a4)
{
  unsigned __int64 v4;
  unsigned __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  _DWORD* v14;
  _DWORD* v15;
  __int64 v16;
  unsigned __int64 v17;
  float32x4_t* v18;
  __int64 v19;
  long double v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD v27[4];
  _QWORD* v28;
  __int64* v29;
  __int64 v30;

  v4 = *(unsigned __int8*)(a3 + 72);
  if ((v4 & 1) != 0) {
    v9 = *(_QWORD*)(a3 + 80);
  }
  else {
    v9 = v4 >> 1;
  }
  if (v9 != 0 || (*(_BYTE*)(a3 + 120) & *(_BYTE*)(a2 + 96)) != 0) {
    v10 = 0x8E38E38E38E38E39LL *
          ((__int64)(*(_QWORD*)(a2 + 8) - *(_QWORD*)a2) >> 5);
    v11 = a1[1];
    v13 = *(_QWORD*)(v11 + 24);
    v12 = *(_QWORD*)(v11 + 32);
    if (v12 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                memory_order_relaxed);
    }
    ObjectGroup_c24fe0(v13);
    GameRoutine_c25240(v13 + 200, (int)v10);
    v14 = *(_DWORD**)(a2 + 48);
    v15 = *(_DWORD**)(a2 + 56);
    if (v14 != v15) {
      v16 = GameData_2131678 + 16;
      while (1) {
        v17 = (unsigned int)*v14;
        if (((*(_QWORD*)(*(_QWORD*)(a2 + 24) + 8 * (v17 >> 6)) >> v17) & 1) ==
            0) {
          v18 = (float32x4_t*)(*(_QWORD*)a2 + 288LL * (unsigned int)v17);
          if ((GameRoutine_c26680(&v18[10], a3) & 1) != 0) {
            break;
          }
        }
      LABEL_10:
        if (++v14 == v15) {
          goto LABEL_28;
        }
      }
      v19 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 296, 16, 0);
      *(float*)&v20 = a4;
      *(_QWORD*)(v19 + 8) = 0;
      *(_QWORD*)(v19 + 16) = 0;
      *(_QWORD*)v19 = v16;
      *(_DWORD*)(v19 + 32) = 0;
      *(_QWORD*)(v19 + 40) = 0;
      *(_DWORD*)(v19 + 104) = 0;
      *(_QWORD*)(v19 + 56) = 0;
      *(_QWORD*)(v19 + 64) = 0;
      *(_QWORD*)(v19 + 72) = 0;
      *(_WORD*)(v19 + 80) = 0;
      *(_DWORD*)(v19 + 48) = 0x2000;
      *(_WORD*)(v19 + 116) = 0;
      *(_WORD*)(v19 + 136) = 0;
      *(_BYTE*)(v19 + 160) = 0;
      *(_BYTE*)(v19 + 288) = 0;
      *(_QWORD*)(v19 + 272) = 0;
      *(_QWORD*)(v19 + 280) = 0;
      *(_QWORD*)(v19 + 256) = 0;
      *(_QWORD*)(v19 + 264) = 0;
      *(_QWORD*)(v19 + 240) = 0;
      *(_QWORD*)(v19 + 248) = 0;
      *(_QWORD*)(v19 + 224) = 0;
      *(_QWORD*)(v19 + 232) = 0;
      *(_QWORD*)(v19 + 208) = 0;
      *(_QWORD*)(v19 + 216) = 0;
      *(_QWORD*)(v19 + 192) = 0;
      *(_QWORD*)(v19 + 200) = 0;
      *(_WORD*)(v19 + 108) = 256;
      *(_QWORD*)(v19 + 176) = 0;
      *(_QWORD*)(v19 + 184) = 0;
      *(_QWORD*)(v19 + 168) = 0;
      *(_QWORD*)(v19 + 120) = 0;
      *(_DWORD*)(v19 + 127) = 0;
      v30 = v19;
      *(_DWORD*)(v19 + 112) = -1082130432;
      *(_DWORD*)(v19 + 292) = 2;
      *(_QWORD*)(v19 + 24) = 0;
      v29 = (__int64*)(v19 + 24);
      if (!MapEffectPlacer_198c1e0(a1, &v29, v18, v20)) {
      LABEL_25:
        v26 = v30;
        if (v30 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                                         0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v26 + 16LL))(v26);
          std___1___shared_weak_count___release_weak_alt1(v26);
        }
        goto LABEL_10;
      }
      v21 = a1[1];
      v22 = *(_QWORD*)(v21 + 24);
      v23 = *(_QWORD*)(v21 + 32);
      if (v23 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v23 + 8), 1u,
                                  memory_order_relaxed);
      }
      v24 = (unsigned int)*v14;
      v28 = v27;
      v27[0] = GameData_211d6a8;
      v27[1] = a2;
      v27[2] = v24;
      GameRoutine_c253a0(v22, &v29, v27);
      if (v28 == v27) {
        v25 = 32;
      }
      else {
        if (v28 == nullptr) {
          goto LABEL_21;
        }
        v25 = 40;
      }
      (*(void (**)(__int64))(*v28 + v25))((__int64)v28);
    LABEL_21:
      if (v23 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v23 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v23 + 16LL))(v23);
        std___1___shared_weak_count___release_weak_alt1(v23);
      }
      *(_QWORD*)(*(_QWORD*)(a2 + 24) +
                 (((unsigned __int64)(unsigned int)*v14 >> 3) & 0x1FFFFFF8)) |=
          1LL << *v14;
      goto LABEL_25;
    }
  LABEL_28:
    if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
      std___1___shared_weak_count___release_weak_alt1(v12);
    }
  }
}

__int64 wld_map_MapEffectPlacer_PlaceCommon_lambda0_Invoke(__int64 result)
{
  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 24LL) +
             (((unsigned __int64)*(unsigned int*)(result + 16) >> 3) &
              0x1FFFFFF8)) &= ~(1LL << *(_DWORD*)(result + 16));
  return result;
}

__int64 wld_map_MapEffectPlacer_PlaceTagged_lambda0_Invoke(__int64 result)
{
  *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(result + 8) + 24LL) +
             (((unsigned __int64)*(unsigned int*)(result + 16) >> 3) &
              0x1FFFFFF8)) &= ~(1LL << *(_DWORD*)(result + 16));
  return result;
}

#pragma GCC visibility pop
