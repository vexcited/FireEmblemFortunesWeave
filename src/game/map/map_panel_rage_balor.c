#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_f19700(_QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
extern __int64 (*game_map_MapPanelRageBalor_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
__int64 MapPanelRageBalor_Destructor(_QWORD* a1);
__int64 MapPanelRageBalor_DeletingDestructor(_QWORD* a1);
__int64 GameRoutine_74e080(_QWORD, _QWORD);
extern __int64 (*GameData_1ffed50[])();
__int64
game_map_MapPanelRageBalor_UpdateRage_lambda0_Invoke_feb2a0(__int64 a1,
                                                            __int64* a2);
_QWORD* game_map_MapPanelRageBalor_UpdateRage_lambda0_Invoke_feb430(__int64 a1,
                                                                    int* a2,
                                                                    int* a3);
__int64 game_map_MapPanelRageBalor_UpdateRage_lambda1_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3);
_QWORD* MapDrawConst_fcc4f0(__int64, _QWORD*, int, float32x4_t*, __int64,
                            __int64, char);
_QWORD* MapPanelRage_f19840(_QWORD*, _QWORD*);
__int64 GameRoutine_f1a220(__int64**, __int64);
__int64 MapDrawConst_fcbcc0(__int64, int, char, char, __int64, char);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 game_HashString(__int64 result);
__int64 game_map_f54910(__int64);
extern _UNKNOWN* GameData_212c540;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN GameData_1ac7ed6;
extern _UNKNOWN GameData_21a6130;
extern __int128 GameData_21a6120;
extern __int64 (*GameData_1ffece0[])();
extern __int64 (*GameData_1ffede0[])();
extern __int64* GameData_212cfb8[11];
extern __int64* GameData_212f8b0[14];
extern __int64* GameData_212f8d8[9];
extern __int64 GameData_212d020[5];
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float32x4_t* GameRoutine_f54fe0(float32x4_t* result);
float32x4_t* GameRoutine_fcacb0(__int64, float32x4_t*, int, char, char, __int16,
                                unsigned __int64*);
void __attribute__((noreturn)) GameRoutine_60a310();
__int64 MapPanelRageBalor_Unknown3(__int64 result);

__int64 MapPanelRageBalor_Unknown3(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  __int64 v4;
  __int64* v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  int v10;
  _QWORD* v11;
  _QWORD* v12;
  __int64 v13;
  unsigned __int8* v14;
  unsigned __int8* v15;
  __int64* v16;
  __int64 v17;
  unsigned __int8* v18;
  unsigned __int8* v19;
  unsigned __int8 v20;
  unsigned __int8 v21;
  __int16 v22;
  __int64 v23;
  float32x4_t v24;
  float32x4_t* v25;
  float32x4_t* v26;
  float32x4_t* v27;
  float32x4_t v28;
  float32x4_t v29;
  int8x16_t v30;
  bool v31;
  float32x4_t v32;
  __int64 v33;
  float32x4_t* v34;
  float32x4_t* v35;
  float32x4_t* v36;
  __int64 (**v37)(float32x4_t*);
  __int64 v38;
  __int64 v39;
  _QWORD* v40;
  float32x4_t* v41;
  float32x4_t* v42;
  __int64 v43;
  float v44;
  float v45;
  float v46;
  float v47;
  float v48;
  unsigned __int64 v49;
  _QWORD* v50;
  __int64* v51;
  struct {
    __int64 (**v52)();
    _QWORD* v53;
    char gap32_[16];
    __int64 (***v54)();
  } v52_;
  struct {
    float32x4_t v55;
    __int64* v56;
    char gap88_[8];
    float32x4_t* v57;
    char gap104_[56];
    float32x4_t* v58;
    float32x4_t* v59;
    char gap176_[8];
    __int64 v60;
    __int64 v61;
    char gap200_[40];
    float32x4_t v62;
    char gap256_[52];
    char v63;
  } v55_;
  struct {
    __int64 v64;
    __int64 v65;
    __int64 v66;
  } v64_;
  _QWORD v67[2];

  v1 = result;
  if (*(_BYTE*)(result + 8) != 1) {
    goto LABEL_68;
  }
  v2 = *(_QWORD**)(result + 16);
  v3 = (_QWORD*)(result + 24);
  if (v2 != (_QWORD*)(result + 24)) {
    do {
      v9 = v2[6];
      *((_BYTE*)v2 + 272) = 0;
      if (((*(__int64 (**)(void))(v9 + 48))() & 1) != 0) {
        v10 = 1036831949;
      }
      else {
        v10 = 0;
        *((_DWORD*)v2 + 69) = 0;
      }
      v11 = (_QWORD*)v2[1];
      *((_DWORD*)v2 + 70) = v10;
      if (v11 != nullptr) {
        do {
          v12 = v11;
          v11 = (_QWORD*)*v11;
        } while (v11 != nullptr);
      }
      else {
        do {
          v12 = (_QWORD*)v2[2];
          v31 = v2 == (_QWORD*)*v12;
          v2 = v12;
        } while (!v31);
      }
      v2 = v12;
    } while (v12 != v3);
  }
  *(_QWORD*)(v1 + 48) = *(_QWORD*)(v1 + 40);
  result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 48LL))(v1);
  if ((result & 1) == 0) {
    goto LABEL_67;
  }
  v64_.v65 = 0;
  v64_.v66 = 0;
  v64_.v64 = 0;
  v52_.v53 = &GameData_1ac7ed6;
  v52_.v52 = (__int64 (**)(void))game_HashString((__int64)&GameData_1ac7ed6);
  LANES128(v55_.v55).n128_u64[0] = (unsigned __int64)GameData_1ffece0;
  LANES128(v55_.v55).n128_u64[1] = (unsigned __int64)&v52_.v52;
  result = (__int64)&v55_.v55;
  v55_.v57 = &v55_.v55;
  v55_.v56 = &v64_.v64;
  v4 = *(_QWORD*)(*GameData_212cfb8[0] + 16);
  v5 = *(__int64**)(v4 + 18832);
  v6 = *(__int64**)(v4 + 18824);
  if (v5 == v6) {
    goto LABEL_20;
  }
  do {
    v7 = *v6++;
    v67[0] = v7;
    if (v55_.v57 == nullptr) {
      GameRoutine_60a310();
    }
    (*(void (**)(float32x4_t*, _QWORD*))(LANES128(*(v55_.v57)).n128_u64[0] +
                                         48))(v55_.v57, v67);
  } while (v6 != v5);
  result = (__int64)v55_.v57;
  if (v55_.v57 == &v55_.v55) {
  LABEL_20:
    v8 = 32;
  }
  else {
    if (v55_.v57 == nullptr) {
      goto LABEL_22;
    }
    v8 = 40;
  }
  result = (*(__int64 (**)(__int64))(*(_QWORD*)result + v8))((__int64)result);
LABEL_22:
  v67[0] = &v64_.v64;
  v13 = v64_.v64;
  v14 = *(unsigned __int8**)(*(_QWORD*)GameData_212d020[0] + 248LL);
  v15 = *(unsigned __int8**)(*(_QWORD*)GameData_212d020[0] + 256LL);
  if (v14 == v15 || v64_.v64 == v64_.v65) {
    goto LABEL_63;
  }
  v51 = GameData_212f8d8[0] + 2;
  v16 = GameData_212f8b0[0] + 2;
  do {
    v18 = *(unsigned __int8**)v67[0];
    v19 = *(unsigned __int8**)(v67[0] + 8LL);
    if (*(unsigned __int8**)v67[0] == v19) {
      goto LABEL_28;
    }
    v20 = *v14;
    v21 = v14[1];
    while (*v18 != v20 || v18[1] != v21) {
      v18 += 4;
      if (v18 == v19) {
        goto LABEL_28;
      }
    }
    game_map_f54910((__int64)&v55_.v55);
    v55_.v63 = 0;
    v52_.v54 = &v52_.v52;
    LANES128(v55_.v55).n128_u64[0] = (unsigned __int64)v51;
    v52_.v52 = GameData_1ffede0;
    v52_.v53 = v67;
    v22 = MapDrawConst_fcbcc0(v1, 1, v20, v21, (__int64)&v52_.v52, 1);
    if (v52_.v54 == &v52_.v52) {
      v23 = 4;
    }
    else {
      if (v52_.v54 == nullptr) {
        goto LABEL_39;
      }
      v23 = 5;
    }
    ((__int64 (*)(__int64))(*v52_.v54)[v23])((__int64)v52_.v54);
  LABEL_39:
    GameRoutine_fcacb0(v1, &v55_.v55, 1, v20, v21, v22,
                       (unsigned __int64*)GameData_212c958);
    if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6130,
                              memory_order_acquire) &
         1) == 0 &&
        (unsigned int)__cxa_guard_acquire(&GameData_21a6130) != 0) {
      v38 = *((_QWORD*)GameData_212c540 + 1);
      *(_QWORD*)&GameData_21a6120 = *(_QWORD*)GameData_212c540;
      *((_QWORD*)&GameData_21a6120 + 1) = v38;
      __cxa_guard_release(&GameData_21a6130);
    }
    v24 = COERCE_AS(float32x4_t, GameData_21a6120);
    v26 = v55_.v58;
    v25 = v55_.v59;
    if (v55_.v59 != v55_.v58) {
      v27 = v55_.v58;
      do {
        v28 = v27[1];
        v27 += 4;
        v24 = vaddq_f32(v24, v28);
      } while (v27 != v55_.v59);
      v24 = vmulq_n_f32(v24, 0x1.0000000000000p+0f /
                                 (float)(unsigned __int64)(((char*)v55_.v59 -
                                                            (char*)v55_.v58) >>
                                                           6));
      LANES128(v24).n128_u32[3] = 0;
    }
    v29 = vsubq_f32(v24, v55_.v62);
    v30 = vmulq_f32(v29, v29);
    LANES128(v30).n128_u64[0] =
        LANES64_OF(
            vadd_f32(COERCE_AS(float32x2_t,
                               LANES128_OF(vextq_s8(v30, v30, 8u)).n128_u64[0]),
                     COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
            .n64_u64[0];
    v31 =
        LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0]),
                             COERCE_AS(float32x2_t, LANES128(v30).n128_u64[0])))
                .n64_f32[0] <= 0x0.0p+0f ||
        v55_.v59 == v55_.v58;
    if (!v31) {
      do {
        v26[1] = vsubq_f32(v26[1], v29);
        v26 += 4;
      } while (v26 != v25);
    }
    LANES128(v32).n128_u64[0] = LANES128(v24).n128_u64[0];
    LANES128(v32).n128_u64[1] = LANES128(v24).n128_u32[2];
    v55_.v62 = v32;
    MapDrawConst_fcc4f0(v1, (_QWORD*)(v1 + 40), 2, &v55_.v55,
                        (unsigned int)(char)*v14, (unsigned int)(char)v14[1],
                        v22);
    result = GameRoutine_f1a220((__int64**)(v1 + 16), (__int64)&v55_.v55);
    LANES128(v55_.v55).n128_u64[0] = (unsigned __int64)v16;
    if (v55_.v60 != 0) {
      v55_.v61 = v55_.v60;
      v33 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v33 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v33);
    }
    v34 = v55_.v58;
    if (v55_.v58 != nullptr) {
      if (v55_.v58 == v55_.v59) {
        goto LABEL_25;
      }
      v35 = v55_.v59 - 4;
      v36 = v55_.v59 - 4;
      do {
        v37 = (__int64 (**)(float32x4_t*))LANES128(*(v36)).n128_u64[0];
        v36 -= 4;
        result = (*v37)(v35);
        v31 = v35 == v34;
        v35 = v36;
      } while (!v31);
      v55_.v59 = v34;
      if (v55_.v58 != nullptr) {
      LABEL_25:
        v17 = 128;
        if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
          v17 = 56;
        }
        result = nn_mem_StandardAllocator_Free(
            *(_QWORD*)fw_memory_g_heap_manager_ptr + v17);
      }
    }
  LABEL_28:
    v14 += 4;
  } while (v14 != v15);
  v13 = v64_.v64;
LABEL_63:
  if (v13 != 0) {
    v64_.v65 = v13;
    v39 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v39 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v39);
  }
LABEL_67:
  *(_BYTE*)(v1 + 8) = 0;
LABEL_68:
  v42 = *(float32x4_t**)(v1 + 16);
  v40 = (_QWORD*)(v1 + 16);
  v41 = v42;
  if (v42 != (float32x4_t*)(v40 + 1)) {
    v43 = game_script_hub_g_frame_counter_ptr[0];
    do {
      v44 = LANES128(v41[17]).n128_f32[2];
      v45 = (float)(*(float*)(*(_QWORD*)v43 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if (v44 <= 0x0.0p+0f) {
        if (LANES128(v41[17]).n128_u8[0] != 0) {
          v48 = 0x1.0000000000000p+0f;
        }
        else {
          v48 = 0x0.0p+0f;
        }
      }
      else {
        v46 = v45 / v44;
        v47 = LANES128(v41[17]).n128_f32[1];
        if (LANES128(v41[17]).n128_u8[0] != 0) {
          v48 = fminf(fmaxf(v46 + v47, 0x1.51eb860000000p-2f),
                      0x1.0000000000000p+0f);
        }
        else {
          v48 = fminf(fmaxf(v47 - v46, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v41[17]).n128_f32[1] = v48;
      v49 = LANES128(v41[3]).n128_u64[0];
      LANES128(v41[15]).n128_f32[0] = v45 + LANES128(v41[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v49 + 40))(v41 + 3);
      GameRoutine_f54fe0(v41 + 3);
      if ((LANES128(v41[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v41[17]).n128_f32[1] > 0x0.0p+0f) {
        v50 = (_QWORD*)LANES128(*(v41)).n128_u64[1];
        if (v50 != nullptr) {
          do {
            result = (__int64)v50;
            v50 = (_QWORD*)*v50;
          } while (v50 != nullptr);
        }
        else {
          do {
            result = LANES128(v41[1]).n128_i64[0];
            v31 = v41 == *(float32x4_t**)result;
            v41 = (float32x4_t*)result;
          } while (!v31);
        }
      }
      else {
        result = (__int64)MapPanelRage_f19840(v40, v41);
      }
      v41 = (float32x4_t*)result;
    } while ((_QWORD*)result != v40 + 1);
  }
  return result;
}

__int64 MapPanelRageBalor_Destructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;

  v1 = a1[5];
  *a1 = game_map_MapPanelRageBalor_vtable;
  if (v1 != 0) {
    a1[6] = v1;
    v3 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v3 = 56;
    }
    nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr + v3);
  }
  return GameRoutine_f19700(a1 + 2, a1[3]);
}

__int64 MapPanelRageBalor_DeletingDestructor(_QWORD* a1)
{
  __int64 v1;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;

  v1 = a1[5];
  *a1 = game_map_MapPanelRageBalor_vtable;
  v3 = fw_memory_g_heap_manager_ptr;
  if (v1 != 0) {
    v4 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a1[6] = v1;
    v5 = 128;
    if (*(_QWORD*)(v4 + 200) == 0) {
      v5 = 56;
    }
    nn_mem_StandardAllocator_Free(v4 + v5);
  }
  GameRoutine_f19700(a1 + 2, a1[3]);
  v6 = 128;
  if (*(_QWORD*)(*(_QWORD*)v3 + 200LL) == 0) {
    v6 = 56;
  }
  return nn_mem_StandardAllocator_Free(*(_QWORD*)v3 + v6);
}

__int64 game_map_MapPanelRageBalor_UpdateRage_lambda0_Invoke_feb2a0(__int64 a1,
                                                                    __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  __int64 result;
  __int64 v6;
  _QWORD v7[4];
  _QWORD* v8;
  __int64 v9;

  v2 = *(_QWORD*)(a1 + 8);
  v3 = *(_QWORD*)(a1 + 16);
  v4 = *a2;
  v7[0] = GameData_1ffed50;
  v7[1] = &v9;
  v8 = v7;
  v9 = v4;
  v7[2] = v2;
  v7[3] = v3;
  (*(void (**)(__int64, _QWORD*))(*(_QWORD*)v4 + 744LL))(v4, v7);
  result = (__int64)v8;
  if (v8 == v7) {
    v6 = 32;
  }
  else {
    if (v8 == nullptr) {
      return result;
    }
    v6 = 40;
  }
  return (*(__int64 (**)(__int64))(*v8 + v6))((__int64)v8);
}

_QWORD* game_map_MapPanelRageBalor_UpdateRage_lambda0_Invoke_feb430(__int64 a1,
                                                                    int* a2,
                                                                    int* a3)
{
  int v4;
  int v5;
  _QWORD* result;
  __int64 v7;
  _BYTE v8[2];
  __int16 v9;

  v4 = *a2;
  v5 = *a3;
  result = (_QWORD*)(*(__int64 (**)(_QWORD))(***(_QWORD***)(a1 + 8) + 224LL))(
      **(_QWORD**)(a1 + 8));
  if (*result == **(_QWORD**)(a1 + 16)) {
    v7 = *(_QWORD*)(a1 + 24);
    v8[0] = v4;
    v8[1] = v5;
    v9 = 0;
    return (_QWORD*)GameRoutine_74e080(v7, v8);
  }
  return result;
}

__int64 game_map_MapPanelRageBalor_UpdateRage_lambda1_Invoke(__int64 a1,
                                                             _DWORD* a2,
                                                             _DWORD* a3)
{
  char** v3;
  char* v4;
  char* v5;

  v3 = **(char****)(a1 + 8);
  v4 = *v3;
  v5 = v3[1];
  if (v4 == v5) {
    return 0;
  }
  while (*a2 != *v4 || *a3 != v4[1]) {
    v4 += 4;
    if (v4 == v5) {
      return 0;
    }
  }
  return 1;
}

#pragma GCC visibility pop
