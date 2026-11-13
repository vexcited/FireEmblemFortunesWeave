#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f9f480(_QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MapDrawOutlineGrid_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapDrawOutlineGrid_Destructor(_QWORD* a1);
__int64 MapDrawOutlineGrid_DeletingDestructor_alt1(_QWORD* a1) __asm__(
    "MapDrawOutlineGrid_DeletingDestructor");
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
__int64 MapDrawOutlineGrid_Unknown3_alt1(__int64 result) __asm__(
    "MapDrawOutlineGrid_Unknown3");
__int64* game_8224a0(unsigned __int8);
__int64 PrimitiveDrawStack_f525a0(__int64*, __int64);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__int64 game_GameVariableTable_Find(_QWORD*, unsigned __int64*);
extern __int64* GameData_212f878;
extern __int64 GameData_212d018[6];
extern __int64 game_GameModeData_instance_;
void PrimitiveDrawStack_f51430(__int64, __int64);
void nn_mem_StandardAllocator_Free_alt1(__int64, __int64) __asm__(
    "nn_mem_StandardAllocator_Free");
void MapDrawOutlineGrid_Unknown4(_QWORD* a1);
__int64* GameHr_f9f5c0(__int64**, __int64*);
__int64*
GameRoutine_f155c0_alt1(__int64* result, char*, char*,
                        unsigned __int64) __asm__("GameRoutine_f155c0");
int __cxa_guard_acquire_alt1(__int64) __asm__("__cxa_guard_acquire");
void GameRoutine_f9f480_alt1(_QWORD*) __asm__("GameRoutine_f9f480");
void MeshData_f555a0_alt1(float32x4_t*, float32x4_t*, unsigned __int64*,
                          unsigned __int64*) __asm__("MeshData_f555a0");
void __cxa_guard_release_alt1(__int64) __asm__("__cxa_guard_release");
void MapDrawOutlineGrid_Unknown3(__int64 a1);
void MapDrawOutlineGrid_DeletingDestructor(__int64 a1);

void MapDrawOutlineGrid_Unknown3(__int64 a1)
{

#pragma clang fp contract(off)
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
  float32x4_t* v21;
  __int64 v22;
  unsigned int v23;
  __int64 v24;
  unsigned __int64 v25;
  __int64 v26;
  _QWORD* v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  __int64 v31;
  float32x4_t v32;
  float32x4_t v33;
  float32x4_t v34;
  __int64 v35;
  __int128 v36;
  __int128 v37;
  __int64 v38;
  __int128 v39;
  __int128 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  int v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  char* v52;
  char* v53;
  char* v54;
  void (**v55)(char*);
  __int64 v56;
  float32x4_t* v57;
  __int64 v58;
  __int64* v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  unsigned __int64 v65;
  __int64* v66;
  __int64** v67;
  float32x4_t* v68;
  float32x4_t* v69;
  __int64* v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  unsigned __int64 v76;
  __int64* v77;
  __int64 v78;
  struct {
    float32x4_t v79[5];
    __int64 v80;
    __int64 v81;
    char* v82;
    char* v83;
    char gap128_[8];
    char* v84;
    char* v85;
    char gap152_[8];
    __int128 v86;
    __int64 v87;
    __int64 v88;
    __int128 v89;
    __int64 v90;
    __int64 v91;
    __int64 v92;
    __int64 v93;
    __int64 v94;
    __int64 v95;
    int v96;
  } v79_;
  unsigned __int64 v97[3];
  unsigned __int64 v98;
  _QWORD* v99[2];

  if (*(_BYTE*)(a1 + 8) != 1) {
    goto LABEL_81;
  }
  v2 = *(_QWORD**)(a1 + 40);
  v3 = (_QWORD*)(a1 + 48);
  v78 = a1 + 40;
  if (v2 != (_QWORD*)(a1 + 48)) {
    do {
      v10 = v2[6];
      *((_BYTE*)v2 + 272) = 0;
      if (((*(__int64 (**)(void*))(v10 + 48))((void*)&v2[6]) & 1) != 0) {
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
  v4 = *(_QWORD**)(a1 + 16);
  if (v4 != (_QWORD*)(a1 + 24)) {
    do {
      v15 = v4[6];
      *((_BYTE*)v4 + 272) = 0;
      if (((*(__int64 (**)(void*))(v15 + 48))((void*)&v4[6]) & 1) != 0) {
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
    } while (v18 != (_QWORD*)(a1 + 24));
  }
  if (((*(__int64 (**)(__int64))(*(_QWORD*)a1 + 48LL))(a1) & 1) == 0) {
    goto LABEL_80;
  }
  v5 = *(_QWORD*)GameData_212d020[0];
  v6 = *(_QWORD*)(*(_QWORD*)GameData_212d020[0] + 8LL);
  v7 = *((_QWORD*)GameData_212c958 + 1);
  v97[0] = *(_QWORD*)GameData_212c958;
  v97[1] = v7;
  game_map_f54910((__int64)v79_.v79);
  v8 = *(char**)(v5 + 248);
  v9 = *(char**)(v5 + 256);
  BYTE4(v79_.v95) = 0;
  LANES128(v79_.v79[0]).n128_u64[0] =
      (unsigned __int64)game_map_OutlineGridMeshData_vtable;
  v79_.v96 = 3;
  if (v8 == v9) {
    goto LABEL_67;
  }
  while (2) {
    v20 = (float32x4_t*)game_10027c0((_QWORD*)(v6 + 72), v8);
    if (v20 == nullptr) {
      goto LABEL_29;
    }
    v21 = v20;
    game_map_f54d00((__int64)v79_.v79);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8) != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release_alt1((__int64)&GameData_21a60e8);
    }
    v99[0] = (_QWORD*)GameData_21a60e0;
    MeshData_f555a0_alt1(v79_.v79, v21 + 9, (unsigned __int64*)v99, v97);
    MeshData_f555a0_alt1(v79_.v79, v21 + 8, (unsigned __int64*)v99, v97);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8) != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release_alt1((__int64)&GameData_21a60e8);
    }
    v99[0] = (_QWORD*)GameData_21a60e0;
    MeshData_f555a0_alt1(v79_.v79, v21 + 9, (unsigned __int64*)v99, v97);
    MeshData_f555a0_alt1(v79_.v79, v21 + 6, (unsigned __int64*)v99, v97);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8) != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release_alt1((__int64)&GameData_21a60e8);
    }
    v99[0] = (_QWORD*)GameData_21a60e0;
    MeshData_f555a0_alt1(v79_.v79, v21 + 8, (unsigned __int64*)v99, v97);
    MeshData_f555a0_alt1(v79_.v79, v21 + 7, (unsigned __int64*)v99, v97);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a60e8,
                              memory_order_acquire) &
         1) == 0 &&
        __cxa_guard_acquire_alt1((__int64)&GameData_21a60e8) != 0) {
      GameData_21a60e0 = 0;
      __cxa_guard_release_alt1((__int64)&GameData_21a60e8);
    }
    v99[0] = (_QWORD*)GameData_21a60e0;
    MeshData_f555a0_alt1(v79_.v79, v21 + 6, (unsigned __int64*)v99, v97);
    MeshData_f555a0_alt1(v79_.v79, v21 + 7, (unsigned __int64*)v99, v97);
    v22 = a1 + 16;
    v23 = *v8 + 32 * v8[1];
    if (v23 >= 0x400) {
      v23 = 0;
    }
    v24 =
        *(_QWORD*)(*(_QWORD*)(*GameData_212c930 + 64) +
                   8LL * *(unsigned __int16*)(*(_QWORD*)(*GameData_212ce98[0] +
                                                         72) +
                                              2LL * v23 + 8));
    if (v24 != 0) {
      if (*(unsigned __int8*)(*(_QWORD*)(v24 + 48) + 40LL) == 255) {
        v22 = v78;
      }
      else {
        v22 = a1 + 16;
      }
    }
    v25 = (*(__int64 (**)(float32x4_t*))(LANES128(v79_.v79[0]).n128_u64[0] +
                                         32))(v79_.v79);
    v26 = *(_QWORD*)(v22 + 8);
    v98 = v25;
    if (v26 == 0) {
    LABEL_53:
      v99[0] = &v98;
      v30 = GameRoutine_f9f740((__int64**)v22, &v98, v99);
      v31 = v30;
      *(_QWORD*)(v30 + 56) = LANES128(v79_.v79[0]).n128_u64[1];
      v32 = v79_.v79[2];
      *(float32x4_t*)(v30 + 64) = v79_.v79[1];
      *(float32x4_t*)(v30 + 80) = v32;
      v33 = v79_.v79[3];
      v34 = v79_.v79[4];
      v35 = v79_.v81;
      *(_QWORD*)(v30 + 128) = v79_.v80;
      *(_QWORD*)(v30 + 136) = v35;
      *(float32x4_t*)(v30 + 96) = v33;
      *(float32x4_t*)(v30 + 112) = v34;
      if ((float32x4_t*)(v30 + 48) != v79_.v79) {
        GameRoutine_f155c0_alt1((__int64*)(v30 + 144), v79_.v82, v79_.v83,
                                (v79_.v83 - v79_.v82) >> 6);
        CharacterController_d42d20(v31 + 168, v79_.v84, v79_.v85,
                                   (v79_.v85 - v79_.v84) >> 4);
      }
      v36 = v79_.v86;
      v37 = v79_.v89;
      v38 = v79_.v88;
      *(_QWORD*)(v31 + 208) = v79_.v87;
      *(_QWORD*)(v31 + 216) = v38;
      *(_QWORD*)(v31 + 192) = v36;
      *(_QWORD*)(v31 + 224) = v37;
      v39 = *(_OWORD*)(v31 + 192);
      *((_QWORD*)&v39 + 1) = DWORD2(v36);
      v40 = *(_OWORD*)(v31 + 224);
      *((_QWORD*)&v40 + 1) = DWORD2(v37);
      *(_OWORD*)(v31 + 192) = v39;
      v41 = v79_.v90;
      v42 = v79_.v91;
      *(_OWORD*)(v31 + 224) = v40;
      *(_QWORD*)(v31 + 240) = v41;
      *(_QWORD*)(v31 + 248) = v42;
      v43 = v79_.v95;
      v44 = v79_.v96;
      *(_QWORD*)(v31 + 272) = v79_.v94;
      *(_QWORD*)(v31 + 280) = v43;
      v45 = v79_.v92;
      v46 = v79_.v93;
      *(_DWORD*)(v31 + 288) = v44;
      *(_QWORD*)(v31 + 256) = v45;
      *(_QWORD*)(v31 + 264) = v46;
      v99[0] = &v98;
      v26 = GameRoutine_f9f740((__int64**)v22, &v98, v99);
      *(_BYTE*)(v26 + 272) = 1;
      v47 = v26 + 48;
      v48 = *(_QWORD*)(v26 + 48);
      goto LABEL_57;
    }
    v27 = (_QWORD*)v26;
    while (1) {
      v28 = v27[4];
      if (v25 >= v28) {
        if (v28 >= v25) {
          break;
        }
        ++v27;
      }
      v27 = (_QWORD*)*v27;
      if (v27 == nullptr) {
        goto LABEL_53;
      }
    }
    while (1) {
      while (1) {
        v29 = *(_QWORD*)(v26 + 32);
        if (v25 >= v29) {
          break;
        }
        v26 = *(_QWORD*)v26;
        if (v26 == 0) {
          goto LABEL_120;
        }
      }
      if (v29 >= v25) {
        break;
      }
      v26 = *(_QWORD*)(v26 + 8);
      if (v26 == 0) {
      LABEL_120:
        String_60a250("map::at:  key not found");
      }
    }
    v47 = v26 + 48;
    v48 = *(_QWORD*)(v26 + 48);
    *(_BYTE*)(v26 + 272) = 1;
  LABEL_57:
    if (((*(__int64 (**)(__int64))(v48 + 48))(v47) & 1) != 0) {
      v19 = 1036831949;
    }
    else {
      v19 = 0;
      *(_DWORD*)(v26 + 276) = 1065353216;
    }
    *(_DWORD*)(v26 + 280) = v19;
  LABEL_29:
    v8 += 4;
    if (v8 != v9) {
      continue;
    }
    break;
  }
LABEL_67:
  LANES128(v79_.v79[0]).n128_u64[0] =
      (unsigned __int64)(GameData_212f8b0[0] + 2);
  v49 = fw_memory_g_heap_manager_ptr;
  if (v79_.v84 != nullptr) {
    v50 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    v79_.v85 = v79_.v84;
    v51 = 128;
    if (*(_QWORD*)(v50 + 200) == 0) {
      v51 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(v50 + v51, (__int64)v79_.v84);
  }
  v52 = v79_.v82;
  if (v79_.v82 != nullptr) {
    if (v79_.v82 == v79_.v83) {
      goto LABEL_77;
    }
    v53 = v79_.v83 - 64;
    v54 = v79_.v83 - 64;
    do {
      v55 = *(void (***)(char*))v54;
      v54 -= 64;
      (*v55)(v53);
      v14 = v53 == v52;
      v53 = v54;
    } while (!v14);
    v79_.v83 = v52;
    v52 = v79_.v82;
    if (v79_.v82 != nullptr) {
    LABEL_77:
      v56 = 128;
      if (*(_QWORD*)(*(_QWORD*)v49 + 200LL) == 0) {
        v56 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)v49 + v56, (__int64)v52);
    }
  }
LABEL_80:
  *(_BYTE*)(a1 + 8) = 0;
LABEL_81:
  v57 = *(float32x4_t**)(a1 + 40);
  v58 = game_script_hub_g_frame_counter_ptr[0];
  if (v57 != (float32x4_t*)(a1 + 48)) {
    do {
      v60 = LANES128(v57[17]).n128_f32[2];
      v61 = (float)(*(float*)(*(_QWORD*)v58 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if (v60 <= 0x0.0p+0f) {
        if (LANES128(v57[17]).n128_u8[0] != 0) {
          v64 = 0x1.0000000000000p+0f;
        }
        else {
          v64 = 0x0.0p+0f;
        }
      }
      else {
        v62 = v61 / v60;
        v63 = LANES128(v57[17]).n128_f32[1];
        if (LANES128(v57[17]).n128_u8[0] != 0) {
          v64 = fminf(fmaxf(v62 + v63, 0x1.51eb860000000p-2f),
                      0x1.0000000000000p+0f);
        }
        else {
          v64 = fminf(fmaxf(v63 - v62, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v57[17]).n128_f32[1] = v64;
      v65 = LANES128(v57[3]).n128_u64[0];
      LANES128(v57[15]).n128_f32[0] = v61 + LANES128(v57[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v65 + 40))(v57 + 3);
      GameRoutine_f54fe0(v57 + 3);
      if ((LANES128(v57[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v57[17]).n128_f32[1] > 0x0.0p+0f) {
        v66 = (__int64*)LANES128(*(v57)).n128_u64[1];
        if (v66 != nullptr) {
          do {
            v59 = v66;
            v66 = (__int64*)*v66;
          } while (v66 != nullptr);
        }
        else {
          do {
            v59 = (__int64*)LANES128(v57[1]).n128_u64[0];
            v14 = v57 == (float32x4_t*)*v59;
            v57 = (float32x4_t*)v59;
          } while (!v14);
        }
      }
      else {
        v59 = GameHr_f9f5c0((__int64**)(a1 + 40), (__int64*)v57);
      }
      v57 = (float32x4_t*)v59;
    } while (v59 != (__int64*)(a1 + 48));
  }
  v69 = *(float32x4_t**)(a1 + 16);
  v67 = (__int64**)(a1 + 16);
  v68 = v69;
  if (v69 != (float32x4_t*)(v67 + 1)) {
    do {
      v71 = LANES128(v68[17]).n128_f32[2];
      v72 = (float)(*(float*)(*(_QWORD*)v58 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if (v71 <= 0x0.0p+0f) {
        if (LANES128(v68[17]).n128_u8[0] != 0) {
          v75 = 0x1.0000000000000p+0f;
        }
        else {
          v75 = 0x0.0p+0f;
        }
      }
      else {
        v73 = v72 / v71;
        v74 = LANES128(v68[17]).n128_f32[1];
        if (LANES128(v68[17]).n128_u8[0] != 0) {
          v75 = fminf(fmaxf(v73 + v74, 0x1.51eb860000000p-2f),
                      0x1.0000000000000p+0f);
        }
        else {
          v75 = fminf(fmaxf(v74 - v73, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v68[17]).n128_f32[1] = v75;
      v76 = LANES128(v68[3]).n128_u64[0];
      LANES128(v68[15]).n128_f32[0] = v72 + LANES128(v68[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v76 + 40))(v68 + 3);
      GameRoutine_f54fe0(v68 + 3);
      if ((LANES128(v68[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v68[17]).n128_f32[1] > 0x0.0p+0f) {
        v77 = (__int64*)LANES128(*(v68)).n128_u64[1];
        if (v77 != nullptr) {
          do {
            v70 = v77;
            v77 = (__int64*)*v77;
          } while (v77 != nullptr);
        }
        else {
          do {
            v70 = (__int64*)LANES128(v68[1]).n128_u64[0];
            v14 = v68 == (float32x4_t*)*v70;
            v68 = (float32x4_t*)v70;
          } while (!v14);
        }
      }
      else {
        v70 = GameHr_f9f5c0(v67, (__int64*)v68);
      }
      v68 = (float32x4_t*)v70;
    } while (v70 != (__int64*)(v67 + 1));
  }
}

void MapDrawOutlineGrid_Unknown4(_QWORD* a1)
{
  __int64* v2;
  float v3;
  __int64 v4;
  float v5;
  float32x4_t** v6;
  float v7;
  float32x4_t* v8;
  float v9;
  float v10;
  float v11;
  float32x4_t* v12;
  float32x4_t v13;
  float32x4_t v14;
  __int64* v15;
  _QWORD* v16;
  float32x4_t* v17;
  __int64 v18;
  unsigned __int64 v19;
  int v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  unsigned __int64 v23;
  __int64 v24;
  _QWORD* v25;
  __int64 v26;
  float32x4_t v27;
  float32x4_t v28;
  float32x4_t* v29;
  unsigned __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  bool v33;
  __int64 v34;
  int v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  unsigned __int64 v38;
  unsigned __int64 v39;
  __int64 v40;
  _QWORD* v41;
  _QWORD* v42;
  __int64 v43;
  _QWORD* v44;
  _QWORD* v45;
  struct {
    unsigned __int64 v46;
    unsigned __int64 v47;
    __int64 v48;
    char gap24_[8];
    float32x4_t v49;
    float32x4_t v50;
    unsigned __int64 v51;
    int v52;
    char gap76_[4];
    unsigned __int64 v53;
    unsigned __int64 v54;
    unsigned __int64 v55;
    char v56;
  } v46_;

  v2 = game_8224a0(0x10u);
  v3 = 0x0.0p+0f;
  if (game_GameModeData_instance_ != 0) {
    v4 = game_GameVariableTable_Find(
        *(_QWORD**)(game_GameModeData_instance_ + 48), (unsigned __int64*)v2);
    if (v4 != 0) {
      v3 = (float)*(int*)(v4 + 32);
    }
  }
  v5 = v3 / 0x1.9000000000000p+6f;
  if (v5 >= 0x1.0000000000000p-23f) {
    v6 = (float32x4_t**)GameData_212f878;
    v46_.v56 = 1;
    LOWORD(v46_.v55) = 0;
    v46_.v53 = 0;
    v46_.v54 = 0;
    v46_.v51 = 0;
    v46_.v46 = 0;
    v46_.v47 = 0;
    v46_.v48 = 0;
    v7 = (float)(v5 + -0x1.0000000000000p-1f) +
         (float)(v5 + -0x1.0000000000000p-1f);
    v46_.v52 = 3;
    v8 = (float32x4_t*)*GameData_212f878;
    if (v7 <= 0x1.0000000000000p+0f) {
      v9 = (float)(v5 + -0x1.0000000000000p-1f) +
           (float)(v5 + -0x1.0000000000000p-1f);
    }
    else {
      v9 = 0x1.0000000000000p+0f;
    }
    v10 = fminf(fmaxf(v9, 0x0.0p+0f), 0x1.0000000000000p+0f);
    if (v7 >= 0x0.0p+0f) {
      v11 = v10;
    }
    else {
      v11 = 0x0.0p+0f;
    }
    *((float*)&v46_.v55 + 1) =
        LANES128(v8[90]).n128_f32[2] +
        (float)(v11 * (float)(LANES128(v8[90]).n128_f32[3] -
                              LANES128(v8[90]).n128_f32[2]));
    v12 = (float32x4_t*)GameData_212c958;
    v13 = vmulq_f32(*(float32x4_t*)GameData_212c958, v8[14]);
    v14 = vmulq_f32(*(float32x4_t*)GameData_212c958, v8[13]);
    LANES128(v14).n128_f32[3] = vmuls_lane_f32(v5, v14, 3);
    LANES128(v13).n128_f32[3] = vmuls_lane_f32(v5, v13, 3);
    v46_.v49 = v14;
    v46_.v50 = v13;
    v15 = (__int64*)GameData_212d018[0];
    v16 = *(_QWORD**)GameData_212d018[0];
    v17 = *(float32x4_t**)(*(_QWORD*)GameData_212d018[0] + 24LL);
    if ((unsigned __int64)v17 >=
        *(_QWORD*)(*(_QWORD*)GameData_212d018[0] + 32LL)) {
      v18 = PrimitiveDrawStack_f525a0(v16 + 2, (__int64)&v46_.v46);
    }
    else {
      LANES128(*(v17)).n128_u64[1] = 0;
      LANES128(v17[1]).n128_u64[0] = 0;
      LANES128(*(v17)).n128_u64[0] = 0;
      v18 = (__int64)&v17[7];
      v19 = LANES128(v46_.v50).n128_u64[1];
      v20 = v46_.v52;
      LANES128(v17[5]).n128_u64[0] = 0;
      LANES128(v17[5]).n128_u64[1] = 0;
      LANES128(v17[3]).n128_u64[1] = v19;
      v17[2] = v46_.v49;
      v21 = LANES128(v46_.v50).n128_u64[0];
      v22 = v46_.v51;
      LANES128(v17[4]).n128_u32[2] = v20;
      LANES128(v17[4]).n128_u64[0] = v22;
      LANES128(v17[3]).n128_u64[0] = v21;
      v23 = v46_.v55;
      LANES128(v17[6]).n128_u8[8] = v46_.v56;
      LANES128(v17[6]).n128_u64[0] = v23;
    }
    v24 = v16[2];
    v16[3] = v18;
    v16[1] = 0x6DB6DB6DB6DB6DB7LL * ((v18 - v24) >> 4) - 1;
    v25 = (_QWORD*)a1[5];
    if (v25 != a1 + 6) {
      do {
        PrimitiveDrawStack_f51430(*v15, (__int64)(v25 + 6));
        v31 = (_QWORD*)v25[1];
        if (v31 != nullptr) {
          do {
            v32 = v31;
            v31 = (_QWORD*)*v31;
          } while (v31 != nullptr);
        }
        else {
          do {
            v32 = (_QWORD*)v25[2];
            v33 = v25 == (_QWORD*)*v32;
            v25 = v32;
          } while (!v33);
        }
        v25 = v32;
      } while (v32 != a1 + 6);
    }
    v26 = *v15;
    *(_QWORD*)(v26 + 8) = 1024;
    v46_.v52 = 2;
    v27 = vmulq_f32(*v12, (*v6)[12]);
    v28 = vmulq_f32(*v12, (*v6)[11]);
    LANES128(v28).n128_f32[3] = vmuls_lane_f32(v5, v28, 3);
    LANES128(v27).n128_f32[3] = vmuls_lane_f32(v5, v27, 3);
    v46_.v49 = v28;
    v46_.v50 = v27;
    v29 = *(float32x4_t**)(v26 + 24);
    if ((unsigned __int64)v29 >= *(_QWORD*)(v26 + 32)) {
      v34 = PrimitiveDrawStack_f525a0((__int64*)(v26 + 16), (__int64)&v46_.v46);
    }
    else {
      if ((v46_.v46 & 1) != 0) {
        fw_text_String_CopyTerminated(*(__int64**)(v26 + 24), v46_.v48,
                                      v46_.v47);
      }
      else {
        LANES128(*(v29)).n128_u64[1] = v46_.v47;
        v30 = v46_.v46;
        LANES128(v29[1]).n128_u64[0] = v46_.v48;
        LANES128(*(v29)).n128_u64[0] = v30;
      }
      v35 = v46_.v52;
      v34 = (__int64)&v29[7];
      LANES128(v29[3]).n128_u64[1] = LANES128(v46_.v50).n128_u64[1];
      v29[2] = v46_.v49;
      v36 = LANES128(v46_.v50).n128_u64[0];
      v37 = v46_.v51;
      LANES128(v29[4]).n128_u32[2] = v35;
      LANES128(v29[4]).n128_u64[0] = v37;
      LANES128(v29[3]).n128_u64[0] = v36;
      v38 = v46_.v54;
      LANES128(v29[5]).n128_u64[0] = v46_.v53;
      LANES128(v29[5]).n128_u64[1] = v38;
      v39 = v46_.v55;
      LANES128(v29[6]).n128_u8[8] = v46_.v56;
      LANES128(v29[6]).n128_u64[0] = v39;
    }
    v40 = *(_QWORD*)(v26 + 16);
    *(_QWORD*)(v26 + 24) = v34;
    *(_QWORD*)(v26 + 8) = 0x6DB6DB6DB6DB6DB7LL * ((v34 - v40) >> 4) - 1;
    v41 = (_QWORD*)a1[2];
    v42 = a1 + 3;
    if (v41 != v42) {
      do {
        PrimitiveDrawStack_f51430(*v15, (__int64)(v41 + 6));
        v44 = (_QWORD*)v41[1];
        if (v44 != nullptr) {
          do {
            v45 = v44;
            v44 = (_QWORD*)*v44;
          } while (v44 != nullptr);
        }
        else {
          do {
            v45 = (_QWORD*)v41[2];
            v33 = v41 == (_QWORD*)*v45;
            v41 = v45;
          } while (!v33);
        }
        v41 = v45;
      } while (v45 != v42);
    }
    *(_QWORD*)(*v15 + 8) = 1024;
    if ((v46_.v46 & 1) != 0 && v46_.v48 != 0) {
      v43 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v43 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v43, v46_.v48);
    }
  }
}

__int64 MapDrawOutlineGrid_Destructor(_QWORD* a1)
{
  *a1 = game_map_MapDrawOutlineGrid_vtable;
  GameRoutine_f9f480(a1[6]);
  return GameRoutine_f9f480(a1[3]);
}

void MapDrawOutlineGrid_DeletingDestructor(__int64 a1)
{
  __int64 v2;

  *(_QWORD*)a1 = game_map_MapDrawOutlineGrid_vtable;
  GameRoutine_f9f480_alt1(*(_QWORD**)(a1 + 48));
  GameRoutine_f9f480_alt1(*(_QWORD**)(a1 + 24));
  v2 = 128;
  if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
    v2 = 56;
  }
  nn_mem_StandardAllocator_Free_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr + v2, a1);
}

#pragma GCC visibility pop
