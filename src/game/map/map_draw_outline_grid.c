#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f9f480(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MapDrawOutlineGrid_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapDrawOutlineGrid_Destructor(_QWORD* a1);
__int64 MapDrawOutlineGrid_DeletingDestructor(_QWORD* a1);
_QWORD* GameRoutine_f9f5c0(_QWORD*, _QWORD*);
_QWORD* game_10027c0(_QWORD*, char*);
__int64 CharacterController_d42d20(__int64 result, char*, char*,
                                   unsigned __int64);
__int64 GameRoutine_f9f740(__int64**, unsigned __int64*, _QWORD**);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_map_f54910(__int64);
char** GameRoutine_f155c0(char** result, char*, char*, unsigned __int64,
                          long double);
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_21a60e8;
extern __int64 (*game_map_OutlineGridMeshData_vtable[])();
extern __int64* GameData_212c930;
extern __int64* GameData_212ce98[2];
extern __int64* GameData_212f8b0[14];
extern __int64 GameData_212d020[5];
extern __int64 GameData_21a60e0;
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float32x4_t* GameRoutine_f54fe0(float32x4_t* result);
float32x4_t* MeshData_f555a0(float32x4_t* result, float32x4_t*,
                             unsigned __int64*, unsigned __int64*);
long double game_map_f54d00(__int64);
void __attribute__((noreturn)) String_60a250(const char*);
__int64 MapDrawOutlineGrid_Unknown3(__int64 result);

__int64 MapDrawOutlineGrid_Unknown3(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  unsigned __int64 v7;
  char* v8;
  char* v9;
  __int64 v10;
  int v11;
  _QWORD* v12;
  _QWORD* v13;
  bool v14;
  __int64 v15;
  int v16;
  _QWORD* v17;
  _QWORD* v18;
  int v19;
  float32x4_t* v20;
  __int64 v21;
  unsigned int v22;
  __int64 v23;
  unsigned __int64 v24;
  __int64 v25;
  _QWORD* v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  float32x4_t v31;
  long double v32;
  float32x4_t v33;
  __int64 v34;
  __int128 v35;
  __int128 v36;
  __int64 v37;
  __int128 v38;
  __int128 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  int v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  char* v51;
  char* v52;
  char* v53;
  __int64 (**v54)(char*);
  __int64 v55;
  float32x4_t* v56;
  __int64 v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  unsigned __int64 v63;
  _QWORD* v64;
  _QWORD* v65;
  float32x4_t* v66;
  float32x4_t* v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  unsigned __int64 v73;
  _QWORD* v74;
  __int64 v75;
  struct {
    float32x4_t v76[5];
    __int64 v77;
    __int64 v78;
    char* v79;
    char* v80;
    char gap128_[8];
    char* v81;
    char* v82;
    char gap152_[8];
    __int128 v83;
    __int64 v84;
    __int64 v85;
    __int128 v86;
    __int64 v87;
    __int64 v88;
    __int64 v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
    int v93;
  } v76_;
  unsigned __int64 v94[3];
  unsigned __int64 v95;
  _QWORD* v96[2];

  v1 = result;
  if (*(_BYTE*)(result + 8) != 1) {
    goto LABEL_81;
  }
  v2 = *(_QWORD**)(result + 40);
  v3 = (_QWORD*)(result + 48);
  v75 = result + 40;
  if (v2 != (_QWORD*)(result + 48)) {
    do {
      v10 = v2[6];
      *((_BYTE*)v2 + 272) = 0;
      if (((*(__int64 (**)(void*))(v10 + 48))(&v2[6]) & 1) != 0) {
        v11 = 1036831949;
      }
      else {
        v11 = 0;
        *((_DWORD*)v2 + 69) = 0;
      }
      v12 = (_QWORD*)v2[1];
      *((_DWORD*)v2 + 70) = v11;
      if (v12 != nullptr) {
        do {
          v13 = v12;
          v12 = (_QWORD*)*v12;
        } while (v12 != nullptr);
      }
      else {
        do {
          v13 = (_QWORD*)v2[2];
          v14 = v2 == (_QWORD*)*v13;
          v2 = v13;
        } while (!v14);
      }
      v2 = v13;
    } while (v13 != v3);
  }
  v4 = *(_QWORD**)(v1 + 16);
  if (v4 != (_QWORD*)(v1 + 24)) {
    do {
      v15 = v4[6];
      *((_BYTE*)v4 + 272) = 0;
      if (((*(__int64 (**)(void*))(v15 + 48))(&v4[6]) & 1) != 0) {
        v16 = 1036831949;
      }
      else {
        v16 = 0;
        *((_DWORD*)v4 + 69) = 0;
      }
      v17 = (_QWORD*)v4[1];
      *((_DWORD*)v4 + 70) = v16;
      if (v17 != nullptr) {
        do {
          v18 = v17;
          v17 = (_QWORD*)*v17;
        } while (v17 != nullptr);
      }
      else {
        do {
          v18 = (_QWORD*)v4[2];
          v14 = v4 == (_QWORD*)*v18;
          v4 = v18;
        } while (!v14);
      }
      v4 = v18;
    } while (v18 != (_QWORD*)(v1 + 24));
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 48LL))(v1);
  if ((result & 1) == 0) {
    goto LABEL_80;
  }
  v5 = *(_QWORD*)GameData_212d020[0];
  v6 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 8LL);
  v7 = *((_QWORD*)GameData_212c958 + 1);
  v94[0] = *(_QWORD*)GameData_212c958;
  v94[1] = v7;
  result = game_map_f54910((__int64)v76_.v76);
  v8 = *(char**)(v5 + 248);
  v9 = *(char**)(v5 + 256);
  BYTE4(v76_.v92) = 0;
  LANES128(v76_.v76[0]).n128_u64[0] =
      (unsigned __int64)game_map_OutlineGridMeshData_vtable;
  v76_.v93 = 3;
  if (v8 == v9) {
    goto LABEL_67;
  }
  while (2) {
    result = (__int64)game_10027c0((_QWORD*)(v6 + 72), v8);
    if (result == 0) {
      goto LABEL_29;
    }
    v20 = (float32x4_t*)result;
    game_map_f54d00((__int64)v76_.v76);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a60e8) != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release(&GameData_21a60e8);
    }
    v96[0] = (_QWORD*)GameData_21a60e0;
    MeshData_f555a0(v76_.v76, v20 + 9, (unsigned __int64*)v96, v94);
    MeshData_f555a0(v76_.v76, v20 + 8, (unsigned __int64*)v96, v94);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a60e8) != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release(&GameData_21a60e8);
    }
    v96[0] = (_QWORD*)GameData_21a60e0;
    MeshData_f555a0(v76_.v76, v20 + 9, (unsigned __int64*)v96, v94);
    MeshData_f555a0(v76_.v76, v20 + 6, (unsigned __int64*)v96, v94);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a60e8) != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release(&GameData_21a60e8);
    }
    v96[0] = (_QWORD*)GameData_21a60e0;
    MeshData_f555a0(v76_.v76, v20 + 8, (unsigned __int64*)v96, v94);
    MeshData_f555a0(v76_.v76, v20 + 7, (unsigned __int64*)v96, v94);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a60e8) != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release(&GameData_21a60e8);
    }
    v96[0] = (_QWORD*)GameData_21a60e0;
    MeshData_f555a0(v76_.v76, v20 + 6, (unsigned __int64*)v96, v94);
    MeshData_f555a0(v76_.v76, v20 + 7, (unsigned __int64*)v96, v94);
    v21 = v1 + 16;
    v22 = *v8 + 32 * v8[1];
    if (v22 >= 0x400) {
      v22 = 0;
    }
    v23 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                   8LL * *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98[0] +
                                                         72) +
                                              2LL * v22 + 8));
    if (v23 != 0) {
      if (*(unsigned __int8*)(*(_QWORD*)(v23 + 48) + 40LL) == 255) {
        v21 = v75;
      }
      else {
        v21 = v1 + 16;
      }
    }
    v24 = (*(__int64 (**)(float32x4_t*))(LANES128(v76_.v76[0]).n128_u64[0] +
                                         32))(v76_.v76);
    v25 = *(_QWORD*)(v21 + 8);
    v95 = v24;
    if (v25 == 0) {
    LABEL_53:
      v96[0] = &v95;
      v29 = GameRoutine_f9f740((__int64**)v21, &v95, v96);
      v30 = v29;
      *(_QWORD*)(v29 + 56) = LANES128(v76_.v76[0]).n128_u64[1];
      v31 = v76_.v76[2];
      *(float32x4_t*)(v29 + 64) = v76_.v76[1];
      *(float32x4_t*)(v29 + 80) = v31;
      v32 = *(long double*)&v76_.v76[3];
      v33 = v76_.v76[4];
      v34 = v76_.v78;
      *(_QWORD*)(v29 + 128) = v76_.v77;
      *(_QWORD*)(v29 + 136) = v34;
      *(long double*)(v29 + 96) = v32;
      *(float32x4_t*)(v29 + 112) = v33;
      if ((float32x4_t*)(v29 + 48) != v76_.v76) {
        GameRoutine_f155c0((char**)(v29 + 144), v76_.v79, v76_.v80,
                           (v76_.v80 - v76_.v79) >> 6, v32);
        CharacterController_d42d20(v30 + 168, v76_.v81, v76_.v82,
                                   (v76_.v82 - v76_.v81) >> 4);
      }
      v35 = v76_.v83;
      v36 = v76_.v86;
      v37 = v76_.v85;
      *(_QWORD*)(v30 + 208) = v76_.v84;
      *(_QWORD*)(v30 + 216) = v37;
      *(_QWORD*)(v30 + 192) = v35;
      *(_QWORD*)(v30 + 224) = v36;
      v38 = *(_OWORD*)(v30 + 192);
      *((_QWORD*)&v38 + 1) = DWORD2(v35);
      v39 = *(_OWORD*)(v30 + 224);
      *((_QWORD*)&v39 + 1) = DWORD2(v36);
      *(_OWORD*)(v30 + 192) = v38;
      v40 = v76_.v87;
      v41 = v76_.v88;
      *(_OWORD*)(v30 + 224) = v39;
      *(_QWORD*)(v30 + 240) = v40;
      *(_QWORD*)(v30 + 248) = v41;
      v42 = v76_.v92;
      v43 = v76_.v93;
      *(_QWORD*)(v30 + 272) = v76_.v91;
      *(_QWORD*)(v30 + 280) = v42;
      v44 = v76_.v89;
      v45 = v76_.v90;
      *(_DWORD*)(v30 + 288) = v43;
      *(_QWORD*)(v30 + 256) = v44;
      *(_QWORD*)(v30 + 264) = v45;
      v96[0] = &v95;
      v25 = GameRoutine_f9f740((__int64**)v21, &v95, v96);
      *(_BYTE*)(v25 + 272) = 1;
      v46 = v25 + 48;
      v47 = *(_QWORD*)(v25 + 48);
      goto LABEL_57;
    }
    v26 = (_QWORD*)v25;
    while (1) {
      v27 = v26[4];
      if (v24 >= v27) {
        if (v27 >= v24) {
          break;
        }
        ++v26;
      }
      v26 = (_QWORD*)*v26;
      if (v26 == nullptr) {
        goto LABEL_53;
      }
    }
    while (1) {
      while (1) {
        v28 = *(_QWORD*)(v25 + 32);
        if (v24 >= v28) {
          break;
        }
        v25 = *(_QWORD*)v25;
        if (v25 == 0) {
          goto LABEL_120;
        }
      }
      if (v28 >= v24) {
        break;
      }
      v25 = *(_QWORD*)(v25 + 8);
      if (v25 == 0) {
      LABEL_120:
        String_60a250("map::at:  key not found");
      }
    }
    v46 = v25 + 48;
    v47 = *(_QWORD*)(v25 + 48);
    *(_BYTE*)(v25 + 272) = 1;
  LABEL_57:
    result = (*(__int64 (**)(__int64))(v47 + 48))(v46);
    if ((result & 1) != 0) {
      v19 = 1036831949;
    }
    else {
      v19 = 0;
      *(_DWORD*)(v25 + 276) = 1065353216;
    }
    *(_DWORD*)(v25 + 280) = v19;
  LABEL_29:
    v8 += 4;
    if (v8 != v9) {
      continue;
    }
    break;
  }
LABEL_67:
  LANES128(v76_.v76[0]).n128_u64[0] =
      (unsigned __int64)(GameData_212f8b0[0] + 2);
  v48 = fw_memory_g_heap_manager_ptr;
  if (v76_.v81 != nullptr) {
    v49 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v76_.v82 = v76_.v81;
    v50 = 128;
    if (*(_QWORD*)(v49 + 200) == 0) {
      v50 = 56;
    }
    result = nn_mem_StandardAllocator_Free(v49 + v50);
  }
  v51 = v76_.v79;
  if (v76_.v79 != nullptr) {
    if (v76_.v79 == v76_.v80) {
      goto LABEL_77;
    }
    v52 = v76_.v80 - 64;
    v53 = v76_.v80 - 64;
    do {
      v54 = *(__int64 (***)(char*))v53;
      v53 -= 64;
      result = (*v54)(v52);
      v14 = v52 == v51;
      v52 = v53;
    } while (!v14);
    v76_.v80 = v51;
    if (v76_.v79 != nullptr) {
    LABEL_77:
      v55 = 128;
      if (*(_QWORD*)(*(_QWORD*)v48 + 200LL) == 0) {
        v55 = 56;
      }
      result = nn_mem_StandardAllocator_Free(*(_QWORD*)v48 + v55);
    }
  }
LABEL_80:
  *(_BYTE*)(v1 + 8) = 0;
LABEL_81:
  v56 = *(float32x4_t**)(v1 + 40);
  v57 = game_script_hub_g_frame_counter_ptr[0];
  if (v56 != (float32x4_t*)(v1 + 48)) {
    do {
      v58 = LANES128(v56[17]).n128_f32[2];
      v59 = (float)(*(float*)(*(_QWORD*)v57 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if (v58 <= 0x0.0p+0f) {
        if (LANES128(v56[17]).n128_u8[0] != 0) {
          v62 = 0x1.0000000000000p+0f;
        }
        else {
          v62 = 0x0.0p+0f;
        }
      }
      else {
        v60 = v59 / v58;
        v61 = LANES128(v56[17]).n128_f32[1];
        if (LANES128(v56[17]).n128_u8[0] != 0) {
          v62 = fminf(fmaxf(v60 + v61, 0x1.51eb860000000p-2f),
                      0x1.0000000000000p+0f);
        }
        else {
          v62 = fminf(fmaxf(v61 - v60, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v56[17]).n128_f32[1] = v62;
      v63 = LANES128(v56[3]).n128_u64[0];
      LANES128(v56[15]).n128_f32[0] = v59 + LANES128(v56[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v63 + 40))(v56 + 3);
      GameRoutine_f54fe0(v56 + 3);
      if ((LANES128(v56[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v56[17]).n128_f32[1] > 0x0.0p+0f) {
        v64 = (_QWORD*)LANES128(*(v56)).n128_u64[1];
        if (v64 != nullptr) {
          do {
            result = (__int64)v64;
            v64 = (_QWORD*)*v64;
          } while (v64 != nullptr);
        }
        else {
          do {
            result = LANES128(v56[1]).n128_i64[0];
            v14 = v56 == *(float32x4_t**)result;
            v56 = (float32x4_t*)result;
          } while (!v14);
        }
      }
      else {
        result = (__int64)GameRoutine_f9f5c0((_QWORD*)(v1 + 40), v56);
      }
      v56 = (float32x4_t*)result;
    } while (result != v1 + 48);
  }
  v67 = *(float32x4_t**)(v1 + 16);
  v65 = (_QWORD*)(v1 + 16);
  v66 = v67;
  if (v67 != (float32x4_t*)(v65 + 1)) {
    do {
      v68 = LANES128(v66[17]).n128_f32[2];
      v69 = (float)(*(float*)(*(_QWORD*)v57 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if (v68 <= 0x0.0p+0f) {
        if (LANES128(v66[17]).n128_u8[0] != 0) {
          v72 = 0x1.0000000000000p+0f;
        }
        else {
          v72 = 0x0.0p+0f;
        }
      }
      else {
        v70 = v69 / v68;
        v71 = LANES128(v66[17]).n128_f32[1];
        if (LANES128(v66[17]).n128_u8[0] != 0) {
          v72 = fminf(fmaxf(v70 + v71, 0x1.51eb860000000p-2f),
                      0x1.0000000000000p+0f);
        }
        else {
          v72 = fminf(fmaxf(v71 - v70, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v66[17]).n128_f32[1] = v72;
      v73 = LANES128(v66[3]).n128_u64[0];
      LANES128(v66[15]).n128_f32[0] = v69 + LANES128(v66[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v73 + 40))(v66 + 3);
      GameRoutine_f54fe0(v66 + 3);
      if ((LANES128(v66[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v66[17]).n128_f32[1] > 0x0.0p+0f) {
        v74 = (_QWORD*)LANES128(*(v66)).n128_u64[1];
        if (v74 != nullptr) {
          do {
            result = (__int64)v74;
            v74 = (_QWORD*)*v74;
          } while (v74 != nullptr);
        }
        else {
          do {
            result = LANES128(v66[1]).n128_i64[0];
            v14 = v66 == *(float32x4_t**)result;
            v66 = (float32x4_t*)result;
          } while (!v14);
        }
      }
      else {
        result = (__int64)GameRoutine_f9f5c0(v65, v66);
      }
      v66 = (float32x4_t*)result;
    } while ((_QWORD*)result != v65 + 1);
  }
  return result;
}

__int64 MapDrawOutlineGrid_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapDrawOutlineGrid_vtable;
  GameRoutine_f9f480(a1[6]);
  return GameRoutine_f9f480(a1[3]);
}

__int64 MapDrawOutlineGrid_DeletingDestructor(_QWORD* a1)
{
  __int64 v2;

  *a1 = game_map_MapDrawOutlineGrid_vtable;
  GameRoutine_f9f480(a1[6]);
  GameRoutine_f9f480(a1[3]);
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v2);
}

#pragma GCC visibility pop
