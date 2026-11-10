#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_64dfe0(_QWORD, _QWORD);
__int64 MapPanelRage_f1a700_alt1(_QWORD, _QWORD) __asm__("MapPanelRage_f1a700");
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* GameData_212f8b0[14];
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_74e1f0(_QWORD);
__int64 MapPanelRage_f19700(__int64 result, _QWORD* a2);
_QWORD* MapPanelRage_f19840(_QWORD* a1, _QWORD* a2);
__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1a670(__int64 a1,
                                                               __int64 a2);
_BYTE* MapPanelRage_f1a700(_QWORD* a1, __int64 a2);
__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1a940(__int64 a1,
                                                               _DWORD* a2,
                                                               _DWORD* a3);
__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1aaa0(__int64 a1,
                                                               _DWORD* a2,
                                                               _DWORD* a3);
__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1ac00(__int64 a1,
                                                               _DWORD* a2,
                                                               _DWORD* a3);
__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1ad60(__int64 a1,
                                                               _DWORD* a2,
                                                               _DWORD* a3);
__int64 PrimitiveDrawStack_f525a0(__int64*, __int64);
__int64 fw_text_String_CopyTerminated(__int64*, __int64, unsigned __int64);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN* GameData_212c958;
extern __int64 (*GameData_1ff26e0[])();
extern __int64* GameData_212f878;
extern __int64 GameData_212d018[6];
extern __int64 game_script_hub_g_frame_counter_ptr[3];
float32x4_t* GameRoutine_f54fe0(float32x4_t* result);
void MapDrawConst_fcc360(__int64, __int64);
void PrimitiveDrawStack_f51430(__int64, __int64);
__int64 MapPanelRage_Unknown3(__int64 result);
void MapPanelRage_f191c0(float a1, __int64 a2, _QWORD* a3, __int64 a4);

__int64 MapPanelRage_Unknown3(__int64 result)
{

#pragma clang fp contract(off)
  __int64 v1;
  _QWORD* v2;
  _QWORD* v3;
  _QWORD* v4;
  __int64 v5;
  __int64 v6;
  int v7;
  _QWORD* v8;
  _QWORD* v9;
  bool v10;
  __int64 v11;
  int v12;
  _QWORD* v13;
  _QWORD* v14;
  float32x4_t* v15;
  __int64 v16;
  float v17;
  float v18;
  float v19;
  float v20;
  float v21;
  unsigned __int64 v22;
  _QWORD* v23;
  _QWORD* v24;
  float32x4_t* v25;
  float32x4_t* v26;
  float v27;
  float v28;
  float v29;
  float v30;
  float v31;
  unsigned __int64 v32;
  _QWORD* v33;
  struct {
    _QWORD v34[4];
    _QWORD* v35;
  } v34_;

  v1 = result;
  if (*(_BYTE*)(result + 8) == 1) {
    v2 = *(_QWORD**)(result + 16);
    v3 = (_QWORD*)(result + 24);
    if (v2 != (_QWORD*)(result + 24)) {
      do {
        v6 = v2[6];
        *((_BYTE*)v2 + 272) = 0;
        if (((*(__int64 (**)(void*))(v6 + 48))(&v2[6]) & 1) != 0) {
          v7 = 1036831949;
        }
        else {
          v7 = 0;
          *((_DWORD*)v2 + 69) = 0;
        }
        v8 = (_QWORD*)v2[1];
        *((_DWORD*)v2 + 70) = v7;
        if (v8 != nullptr) {
          do {
            v9 = v8;
            v8 = (_QWORD*)*v8;
          } while (v8 != nullptr);
        }
        else {
          do {
            v9 = (_QWORD*)v2[2];
            v10 = v2 == (_QWORD*)*v9;
            v2 = v9;
          } while (!v10);
        }
        v2 = v9;
      } while (v9 != v3);
    }
    v4 = *(_QWORD**)(v1 + 40);
    if (v4 != (_QWORD*)(v1 + 48)) {
      do {
        v11 = v4[6];
        *((_BYTE*)v4 + 272) = 0;
        if (((*(__int64 (**)(void*))(v11 + 48))(&v4[6]) & 1) != 0) {
          v12 = 1036831949;
        }
        else {
          v12 = 0;
          *((_DWORD*)v4 + 69) = 0;
        }
        v13 = (_QWORD*)v4[1];
        *((_DWORD*)v4 + 70) = v12;
        if (v13 != nullptr) {
          do {
            v14 = v13;
            v13 = (_QWORD*)*v13;
          } while (v13 != nullptr);
        }
        else {
          do {
            v14 = (_QWORD*)v4[2];
            v10 = v4 == (_QWORD*)*v14;
            v4 = v14;
          } while (!v10);
        }
        v4 = v14;
      } while (v14 != (_QWORD*)(v1 + 48));
    }
    *(_QWORD*)(v1 + 72) = *(_QWORD*)(v1 + 64);
    result = (*(__int64 (**)(__int64))(*(_QWORD*)v1 + 48LL))(v1);
    if ((result & 1) == 0) {
      goto LABEL_30;
    }
    v34_.v34[0] = GameData_1ff26e0;
    v34_.v34[1] = v1;
    v34_.v35 = v34_.v34;
    MapDrawConst_fcc360(v1, (__int64)v34_.v34);
    result = (__int64)v34_.v35;
    if (v34_.v35 == v34_.v34) {
      v5 = 32;
    }
    else {
      if (v34_.v35 == nullptr) {
      LABEL_30:
        *(_BYTE*)(v1 + 8) = 0;
        goto LABEL_31;
      }
      v5 = 40;
    }
    result = (*(__int64 (**)(__int64))(*v34_.v35 + v5))((__int64)v34_.v35);
    goto LABEL_30;
  }
LABEL_31:
  v15 = *(float32x4_t**)(v1 + 16);
  v16 = game_script_hub_g_frame_counter_ptr[0];
  if (v15 != (float32x4_t*)(v1 + 24)) {
    do {
      v17 = LANES128(v15[17]).n128_f32[2];
      v18 = (float)(*(float*)(*(_QWORD*)v16 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if (v17 <= 0x0.0p+0f) {
        if (LANES128(v15[17]).n128_u8[0] != 0) {
          v21 = 0x1.0000000000000p+0f;
        }
        else {
          v21 = 0x0.0p+0f;
        }
      }
      else {
        v19 = v18 / v17;
        v20 = LANES128(v15[17]).n128_f32[1];
        if (LANES128(v15[17]).n128_u8[0] != 0) {
          v21 = fminf(fmaxf(v19 + v20, 0x1.51eb860000000p-2f),
                      0x1.0000000000000p+0f);
        }
        else {
          v21 = fminf(fmaxf(v20 - v19, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v15[17]).n128_f32[1] = v21;
      v22 = LANES128(v15[3]).n128_u64[0];
      LANES128(v15[15]).n128_f32[0] = v18 + LANES128(v15[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v22 + 40))(v15 + 3);
      GameRoutine_f54fe0(v15 + 3);
      if ((LANES128(v15[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v15[17]).n128_f32[1] > 0x0.0p+0f) {
        v23 = (_QWORD*)LANES128(*(v15)).n128_u64[1];
        if (v23 != nullptr) {
          do {
            result = (__int64)v23;
            v23 = (_QWORD*)*v23;
          } while (v23 != nullptr);
        }
        else {
          do {
            result = LANES128(v15[1]).n128_i64[0];
            v10 = v15 == *(float32x4_t**)result;
            v15 = (float32x4_t*)result;
          } while (!v10);
        }
      }
      else {
        result = (__int64)MapPanelRage_f19840((_QWORD*)(v1 + 16), v15);
      }
      v15 = (float32x4_t*)result;
    } while (result != v1 + 24);
  }
  v26 = *(float32x4_t**)(v1 + 40);
  v24 = (_QWORD*)(v1 + 40);
  v25 = v26;
  if (v26 != (float32x4_t*)(v24 + 1)) {
    do {
      v27 = LANES128(v25[17]).n128_f32[2];
      v28 = (float)(*(float*)(*(_QWORD*)v16 + 160LL) * 0x1.0aef000000000p+4f) /
            0x1.f400000000000p+9f;
      if (v27 <= 0x0.0p+0f) {
        if (LANES128(v25[17]).n128_u8[0] != 0) {
          v31 = 0x1.0000000000000p+0f;
        }
        else {
          v31 = 0x0.0p+0f;
        }
      }
      else {
        v29 = v28 / v27;
        v30 = LANES128(v25[17]).n128_f32[1];
        if (LANES128(v25[17]).n128_u8[0] != 0) {
          v31 = fminf(fmaxf(v29 + v30, 0x1.51eb860000000p-2f),
                      0x1.0000000000000p+0f);
        }
        else {
          v31 = fminf(fmaxf(v30 - v29, 0x0.0p+0f), 0x1.570a3c0000000p-1f);
        }
      }
      LANES128(v25[17]).n128_f32[1] = v31;
      v32 = LANES128(v25[3]).n128_u64[0];
      LANES128(v25[15]).n128_f32[0] = v28 + LANES128(v25[15]).n128_f32[0];
      (*(void (**)(float32x4_t*))(v32 + 40))(v25 + 3);
      GameRoutine_f54fe0(v25 + 3);
      if ((LANES128(v25[17]).n128_u8[0] & 1) != 0 ||
          LANES128(v25[17]).n128_f32[1] > 0x0.0p+0f) {
        v33 = (_QWORD*)LANES128(*(v25)).n128_u64[1];
        if (v33 != nullptr) {
          do {
            result = (__int64)v33;
            v33 = (_QWORD*)*v33;
          } while (v33 != nullptr);
        }
        else {
          do {
            result = LANES128(v25[1]).n128_i64[0];
            v10 = v25 == *(float32x4_t**)result;
            v25 = (float32x4_t*)result;
          } while (!v10);
        }
      }
      else {
        result = (__int64)MapPanelRage_f19840(v24, v25);
      }
      v25 = (float32x4_t*)result;
    } while ((_QWORD*)result != v24 + 1);
  }
  return result;
}

void MapPanelRage_f191c0(float a1, __int64 a2, _QWORD* a3, __int64 a4)
{

#pragma clang fp contract(off)
  __int64* v7;
  float32x4_t* v8;
  unsigned int v9;
  float v10;
  unsigned __int64 v11;
  unsigned __int64 v12;
  unsigned __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  float32x4_t v17;
  float32x4_t v18;
  float32x4_t v19;
  float32x4_t v20;
  __int64* v21;
  _QWORD* v22;
  float32x4_t* v23;
  __int64 v24;
  __int64 v25;
  unsigned __int32 v26;
  unsigned __int64 v27;
  unsigned __int64 v28;
  unsigned __int64 v29;
  __int64 v30;
  _QWORD* v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  unsigned __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  bool v39;
  __int64 v40;
  int v41;
  __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  _QWORD* v47;
  _QWORD* v48;
  _QWORD* v49;
  unsigned int v50;
  struct {
    __int64 v51;
    unsigned __int64 v52;
    __int64 v53;
    char gap40_[8];
    float32x4_t v54;
    float32x4_t v55;
    unsigned __int64 v56;
    unsigned __int32 v57;
    char gap92_[4];
    float32x4_t v58;
    unsigned __int64 v59;
    unsigned __int8 v60;
  } v51_;

  v7 = GameData_212f878;
  v8 = (float32x4_t*)*GameData_212f878;
  v9 = *(_DWORD*)(*GameData_212f878 + 1436);
  v10 = -*(float*)(*GameData_212f878 + 1432);
  if ((*(_BYTE*)a4 & 1) != 0) {
    v50 = *(_DWORD*)(*GameData_212f878 + 1436);
    fw_text_String_CopyTerminated(&v51_.v51, *(_QWORD*)(a4 + 16),
                                  *(_QWORD*)(a4 + 8));
    v9 = v50;
    v8 = (float32x4_t*)*v7;
  }
  else {
    v11 = *(_QWORD*)(a4 + 8);
    v51_.v51 = *(_QWORD*)a4;
    v51_.v52 = v11;
    v51_.v53 = *(_QWORD*)(a4 + 16);
  }
  v12 = *(_QWORD*)(a4 + 32);
  v13 = *(_QWORD*)(a4 + 56);
  LANES128(v51_.v55).n128_u64[0] = *(_QWORD*)(a4 + 48);
  LANES128(v51_.v55).n128_u64[1] = v13;
  v51_.v56 = *(_QWORD*)(a4 + 64);
  v51_.v57 = *(_DWORD*)(a4 + 72);
  v14 = *(_QWORD*)(a4 + 40);
  LANES128(v51_.v54).n128_u64[0] = v12;
  LANES128(v51_.v54).n128_u64[1] = v14;
  v15 = *(_QWORD*)(a4 + 88);
  LANES128(v51_.v58).n128_u64[0] = *(_QWORD*)(a4 + 80);
  LANES128(v51_.v58).n128_u64[1] = v15;
  v16 = *(_QWORD*)(a4 + 96);
  v51_.v60 = *(_BYTE*)(a4 + 104);
  v51_.v59 = v16;
  v18 = v8[3];
  v17 = v8[4];
  LANES128(v51_.v58).n128_u64[0] = __PAIR64__(LODWORD(v10), v9);
  v51_.v57 = 0;
  LOBYTE(v51_.v59) = 1;
  v19 = vmulq_f32(*(float32x4_t*)GameData_212c958, v17);
  v20 = vmulq_f32(*(float32x4_t*)GameData_212c958, v18);
  LANES128(v20).n128_u32[3] = vmuls_lane_f32(a1, v20, 3);
  LANES128(v19).n128_u32[3] = vmuls_lane_f32(a1, v19, 3);
  v51_.v54 = v20;
  v51_.v55 = v19;
  LANES128(v19).n128_f32[0] = LANES128(v19).n128_f32[3] * *(float*)(a4 + 60);
  LANES128(v51_.v54).n128_f32[3] =
      LANES128(v20).n128_f32[3] * *(float*)(a4 + 44);
  LANES128(v20).n128_u64[0] = __PAIR64__(LODWORD(v10), v9);
  LANES128(v51_.v55).n128_u32[3] = LANES128(v19).n128_u32[0];
  LANES128(v20).n128_u64[1] = v9;
  v51_.v58 = v20;
  v21 = (__int64*)GameData_212d018[0];
  v22 = *(_QWORD**)GameData_212d018[0];
  v23 = *(float32x4_t**)(*(_QWORD*)GameData_212d018[0] + 24LL);
  if ((unsigned __int64)v23 >=
      *(_QWORD*)(*(_QWORD*)GameData_212d018[0] + 32LL)) {
    v25 = PrimitiveDrawStack_f525a0(v22 + 2, (__int64)&v51_.v51);
  }
  else {
    if ((v51_.v51 & 1) != 0) {
      fw_text_String_CopyTerminated(
          *(__int64**)(*(_QWORD*)GameData_212d018[0] + 24LL), v51_.v53,
          v51_.v52);
    }
    else {
      LANES128(*(v23)).n128_u64[1] = v51_.v52;
      v24 = v51_.v51;
      LANES128(v23[1]).n128_u64[0] = v51_.v53;
      LANES128(*(v23)).n128_u64[0] = v24;
    }
    v26 = v51_.v57;
    v25 = (__int64)&v23[7];
    LANES128(v23[3]).n128_u64[1] = LANES128(v51_.v55).n128_u64[1];
    v23[2] = v51_.v54;
    v27 = LANES128(v51_.v55).n128_u64[0];
    v28 = v51_.v56;
    LANES128(v23[4]).n128_u32[2] = v26;
    LANES128(v23[4]).n128_u64[0] = v28;
    LANES128(v23[3]).n128_u64[0] = v27;
    v23[5] = v51_.v58;
    v29 = v51_.v59;
    LANES128(v23[6]).n128_u8[8] = v51_.v60;
    LANES128(v23[6]).n128_u64[0] = v29;
  }
  v30 = v22[2];
  v22[3] = v25;
  v22[1] = 0x6DB6DB6DB6DB6DB7LL * ((v25 - v30) >> 4) - 1;
  v32 = a3 + 1;
  v31 = (_QWORD*)*a3;
  if ((_QWORD*)*a3 != a3 + 1) {
    do {
      PrimitiveDrawStack_f51430(*v21, (__int64)(v31 + 6));
      v37 = (_QWORD*)v31[1];
      if (v37 != nullptr) {
        do {
          v38 = v37;
          v37 = (_QWORD*)*v37;
        } while (v37 != nullptr);
      }
      else {
        do {
          v38 = (_QWORD*)v31[2];
          v39 = v31 == (_QWORD*)*v38;
          v31 = v38;
        } while (!v39);
      }
      v31 = v38;
    } while (v38 != v32);
  }
  v33 = *v21;
  *(_QWORD*)(*v21 + 8) = 1024;
  if ((v51_.v51 & 1) != 0 && v51_.v53 != 0) {
    v34 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v34 = 56;
    }
    nn_mem_StandardAllocator_Free_alt1(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                       v34);
    v33 = *v21;
  }
  v35 = *(_QWORD*)(v33 + 24);
  if (v35 >= *(_QWORD*)(v33 + 32)) {
    v40 = PrimitiveDrawStack_f525a0((__int64*)(v33 + 16), a4);
  }
  else {
    if ((*(_BYTE*)a4 & 1) != 0) {
      fw_text_String_CopyTerminated(*(__int64**)(v33 + 24), *(_QWORD*)(a4 + 16),
                                    *(_QWORD*)(a4 + 8));
    }
    else {
      *(_QWORD*)(v35 + 8) = *(_QWORD*)(a4 + 8);
      v36 = *(_QWORD*)a4;
      *(_QWORD*)(v35 + 16) = *(_QWORD*)(a4 + 16);
      *(_QWORD*)v35 = v36;
    }
    v41 = *(_DWORD*)(a4 + 72);
    v40 = v35 + 112;
    *(_QWORD*)(v35 + 56) = *(_QWORD*)(a4 + 56);
    *(_QWORD*)(v35 + 40) = *(_QWORD*)(a4 + 40);
    *(_QWORD*)(v35 + 32) = *(_QWORD*)(a4 + 32);
    v42 = *(_QWORD*)(a4 + 48);
    v43 = *(_QWORD*)(a4 + 64);
    *(_DWORD*)(v35 + 72) = v41;
    *(_QWORD*)(v35 + 64) = v43;
    *(_QWORD*)(v35 + 48) = v42;
    v44 = *(_QWORD*)(a4 + 88);
    *(_QWORD*)(v35 + 80) = *(_QWORD*)(a4 + 80);
    *(_QWORD*)(v35 + 88) = v44;
    v45 = *(_QWORD*)(a4 + 96);
    *(_BYTE*)(v35 + 104) = *(_BYTE*)(a4 + 104);
    *(_QWORD*)(v35 + 96) = v45;
  }
  v46 = *(_QWORD*)(v33 + 16);
  *(_QWORD*)(v33 + 24) = v40;
  *(_QWORD*)(v33 + 8) = 0x6DB6DB6DB6DB6DB7LL * ((v40 - v46) >> 4) - 1;
  v47 = (_QWORD*)*a3;
  if (v47 != v32) {
    do {
      PrimitiveDrawStack_f51430(*v21, (__int64)(v47 + 6));
      v48 = (_QWORD*)v47[1];
      if (v48 != nullptr) {
        do {
          v49 = v48;
          v48 = (_QWORD*)*v48;
        } while (v48 != nullptr);
      }
      else {
        do {
          v49 = (_QWORD*)v47[2];
          v39 = v47 == (_QWORD*)*v49;
          v47 = v49;
        } while (!v39);
      }
      v47 = v49;
    } while (v49 != v32);
  }
  *(_QWORD*)(*v21 + 8) = 1024;
}

__int64 MapPanelRage_f19700(__int64 result, _QWORD* a2)
{
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  void (***v8)(_QWORD);
  void (***v9)(_QWORD);
  void (***v10)(_QWORD);
  void (***v11)(_QWORD);
  void (**v12)(_QWORD);
  bool v13;
  void (***v14)(_QWORD);
  __int64 v15;
  __int64 v16;

  if (a2 != nullptr) {
    v3 = result;
    MapPanelRage_f19700(result, *a2);
    MapPanelRage_f19700(v3, a2[1]);
    v4 = a2[21];
    a2[6] = GameData_212f8b0[0] + 2;
    v5 = fw_memory_g_heap_manager_ptr;
    if (v4 != 0) {
      v6 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
      a2[22] = v4;
      v7 = 128;
      if (*(_QWORD*)(v6 + 200) == 0) {
        v7 = 56;
      }
      nn_mem_StandardAllocator_Free(v6 + v7, v4);
    }
    v8 = (void (***)(_QWORD))a2[18];
    if (v8 != nullptr) {
      v9 = (void (***)(_QWORD))a2[19];
      if (v8 == v9) {
        goto LABEL_12;
      }
      v10 = v9 - 8;
      v11 = v9 - 8;
      do {
        v12 = *v11;
        v11 -= 8;
        (*v12)(v10);
        v13 = v10 == v8;
        v10 = v11;
      } while (!v13);
      v14 = (void (***)(_QWORD))a2[18];
      a2[19] = v8;
      v8 = v14;
      if (v14 != nullptr) {
      LABEL_12:
        v15 = 128;
        if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
          v15 = 56;
        }
        nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v15, v8);
      }
    }
    v16 = 128;
    if (*(_QWORD*)(*(_QWORD*)v5 + 200LL) == 0) {
      v16 = 56;
    }
    return nn_mem_StandardAllocator_Free(*(_QWORD*)v5 + v16, a2);
  }
  return result;
}

_QWORD* MapPanelRage_f19840(_QWORD* a1, _QWORD* a2)
{
  _QWORD* v2;
  _QWORD* v4;
  _QWORD* v5;
  bool v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  void (***v12)(_QWORD);
  void (***v13)(_QWORD);
  void (***v14)(_QWORD);
  void (***v15)(_QWORD);
  void (**v16)(_QWORD);
  void (***v17)(_QWORD);
  __int64 v18;
  __int64 v19;

  v2 = (_QWORD*)a2[1];
  if (v2 != nullptr) {
    do {
      v4 = v2;
      v2 = (_QWORD*)*v2;
    } while (v2 != nullptr);
  }
  else {
    v5 = a2;
    do {
      v4 = (_QWORD*)v5[2];
      v6 = v5 == (_QWORD*)*v4;
      v5 = v4;
    } while (!v6);
  }
  if ((_QWORD*)*a1 == a2) {
    *a1 = v4;
  }
  v7 = a1[1];
  --a1[2];
  GameRoutine_64dfe0(v7, a2);
  v8 = a2[21];
  a2[6] = GameData_212f8b0[0] + 2;
  v9 = fw_memory_g_heap_manager_ptr;
  if (v8 != 0) {
    v10 = *(_QWORD*)fw_memory_g_heap_manager_ptr;
    a2[22] = v8;
    v11 = 128;
    if (*(_QWORD*)(v10 + 200) == 0) {
      v11 = 56;
    }
    nn_mem_StandardAllocator_Free(v10 + v11, v8);
  }
  v12 = (void (***)(_QWORD))a2[18];
  if (v12 != nullptr) {
    v13 = (void (***)(_QWORD))a2[19];
    if (v12 == v13) {
      goto LABEL_19;
    }
    v14 = v13 - 8;
    v15 = v13 - 8;
    do {
      v16 = *v15;
      v15 -= 8;
      (*v16)(v14);
      v6 = v14 == v12;
      v14 = v15;
    } while (!v6);
    v17 = (void (***)(_QWORD))a2[18];
    a2[19] = v12;
    v12 = v17;
    if (v17 != nullptr) {
    LABEL_19:
      v18 = 128;
      if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
        v18 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v18, v12);
    }
  }
  v19 = 128;
  if (*(_QWORD*)(*(_QWORD*)v9 + 200LL) == 0) {
    v19 = 56;
  }
  nn_mem_StandardAllocator_Free(*(_QWORD*)v9 + v19, a2);
  return v4;
}

__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1a670(__int64 a1,
                                                               __int64 a2)
{
  __int16 v2;
  _QWORD* v3;
  _WORD v5[2];

  v2 = *(_WORD*)(a2 + 1);
  v3 = (_QWORD*)(a1 + 8);
  v5[1] = 0;
  v5[0] = v2;
  if ((*(_BYTE*)(a2 + 4) & 8) == 0) {
    v3 = (_QWORD*)(a1 + 16);
  }
  return MapPanelRage_f1a700_alt1(*v3, v5);
}

_BYTE* MapPanelRage_f1a700(_QWORD* a1, __int64 a2)
{
  unsigned __int64 v2;
  _BYTE* v3;
  _BYTE* v6;
  _BYTE* v7;
  __int64 v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  _DWORD* v15;
  _BYTE* v16;
  _BYTE* v17;
  _BYTE* v18;
  char v19;
  __int64 v20;

  v3 = (_BYTE*)a1[1];
  v2 = a1[2];
  if ((unsigned __int64)v3 >= v2) {
    v7 = (_BYTE*)*a1;
    v8 = (__int64)&v3[-*a1];
    v9 = v8 >> 2;
    v10 = (v8 >> 2) + 1;
    if (v10 >> 62 != 0) {
      GameRoutine_74e1f0(a1);
    }
    v11 = v2 - (_QWORD)v7;
    if (v11 >> 1 > v10) {
      v10 = v11 >> 1;
    }
    if ((unsigned __int64)v11 >= 0x7FFFFFFFFFFFFFFCLL) {
      v12 = 0x3FFFFFFFFFFFFFFFLL;
    }
    else {
      v12 = v10;
    }
    if (v12 >> 62 != 0) {
      GameRoutine_60a210(a1);
    }
    v13 = fw_memory_g_heap_manager_ptr;
    v14 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         4 * v12, 16, 0);
    v15 = (_DWORD*)(v14 + v8);
    v16 = &v15[-v9];
    *v15 = *(_DWORD*)a2;
    v6 = v15 + 1;
    if (v7 != v3) {
      v17 = v7;
      v18 = v16;
      do {
        *v18 = *v17;
        v18[1] = v17[1];
        v18[2] = v17[2];
        v19 = v17[3];
        v17 += 4;
        v18[3] = v19;
        v18 += 4;
      } while (v17 != v3);
    }
    *a1 = v16;
    a1[1] = v6;
    a1[2] = v14 + 4 * v12;
    if (v7 != nullptr) {
      v20 = 128;
      if (*(_QWORD*)(*(_QWORD*)v13 + 200LL) == 0) {
        v20 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)v13 + v20, v7);
    }
  }
  else {
    v6 = v3 + 4;
    *v3 = *(_BYTE*)a2;
    v3[1] = *(_BYTE*)(a2 + 1);
    v3[2] = *(_BYTE*)(a2 + 2);
    v3[3] = *(_BYTE*)(a2 + 3);
  }
  a1[1] = v6;
  return v6 - 4;
}

__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1a940(__int64 a1,
                                                               _DWORD* a2,
                                                               _DWORD* a3)
{
  char** v3;
  char* v4;
  char* v5;

  v3 = *(char***)(a1 + 16);
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

__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1aaa0(__int64 a1,
                                                               _DWORD* a2,
                                                               _DWORD* a3)
{
  char** v3;
  char* v4;
  char* v5;

  v3 = *(char***)(a1 + 16);
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

__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1ac00(__int64 a1,
                                                               _DWORD* a2,
                                                               _DWORD* a3)
{
  char** v3;
  char* v4;
  char* v5;

  v3 = *(char***)(a1 + 16);
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

__int64 game_map_MapPanelRage_UpdateRage_lambda0_Invoke_f1ad60(__int64 a1,
                                                               _DWORD* a2,
                                                               _DWORD* a3)
{
  char** v3;
  char* v4;
  char* v5;

  v3 = *(char***)(a1 + 16);
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
