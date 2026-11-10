#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_203ef60[])();
extern __int64 (*GameData_203ef90[])();
extern __int64 (*game_facility_SceneCameraWorkUpdater_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
_QWORD* SceneCameraWorkUpdater_Destructor(_QWORD* result);
__attribute__((swiftcall)) void game_13f9460(PSEUDO_X8, _QWORD);
__attribute__((swiftcall)) void
game_facility_1451020(PSEUDO_X8, unsigned __int64, __int64, __int64);
__int64 AnimCtrlModule_a78450(_QWORD, _QWORD);
__int64 GameRoutine_1456360(_QWORD);
__int64 GameRoutine_b3aee0(_QWORD);
__int64 SceneCameraWorkUpdater_14531a0_alt1(_QWORD, _QWORD) __asm__(
    "SceneCameraWorkUpdater_14531a0");
__int64 SceneCameraWorkUpdater_1453690_alt1(
    _QWORD, _QWORD, _QWORD, _QWORD) __asm__("SceneCameraWorkUpdater_1453690");
__int64 SceneCameraWorkUpdater_14567a0(_QWORD);
__int64 SceneManager_138e8c0(_QWORD, _QWORD, _QWORD);
__int64 StateMoveTo_d42860(_QWORD, _QWORD);
__int64 __cxa_guard_acquire(_QWORD);
__int64 __cxa_guard_release(_QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate_alt1(
    __int64, __int64, __int64,
    unsigned int) __asm__("fw_memory_HeapManager_Allocate");
__int64 game_809dc0(_QWORD, _QWORD, float);
__int64 game_facility_144e960(_QWORD);
__int64 game_facility_144f500(_QWORD, _QWORD, _QWORD);
__int64 game_facility_144f680(_QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memmove(_QWORD, _QWORD, _QWORD);
__int64 std___1___next_prime(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
__int64 strlen(_QWORD);
__int64 wld_a7fda0(_QWORD, _QWORD);
__n128 nn_mem_StandardAllocator_Free_alt1(_QWORD) __asm__(
    "nn_mem_StandardAllocator_Free");
extern _UNKNOWN* GameData_212c2a0;
extern _UNKNOWN* GameData_212c2b0;
extern _UNKNOWN* GameData_212c558;
extern _UNKNOWN* GameData_212c958;
extern _UNKNOWN* GameData_212c960;
extern _UNKNOWN GameData_21a6190;
extern __int128 GameData_1a83090;
extern __int128 GameData_1a83610;
extern __int128 GameData_21a6180;
extern __int64* GameData_212e460[2];
extern __int64* GameData_212e740[2];
extern __int64 GameData_212c638;
extern __int64 GameData_212dce8;
extern __int64 GameData_212e438;
extern __int64 fw_memory_g_heap_manager;
extern __int64 game_ProcFadeView_instance_;
extern char GameData_1a9f09e;
void __attribute__((noreturn)) GameRoutine_60a210();
void __attribute__((noreturn)) String_60a1d0(void);
float* SceneCameraWorkUpdater_1452520(float* result);
__int64 SceneCameraWorkUpdater_14531a0(__int64 a1, __int64 a2);
unsigned __int64 SceneCameraWorkUpdater_1453690(_QWORD* a1, __int64 a2,
                                                char** a3, char** a4);
bool SceneCameraWorkUpdater_14543c0(__int64 a1, __int64 a2);
__int64 SceneCameraWorkUpdater_StateBlackOutWait_Unknown3(__int64 a1,
                                                          __int64 a2);
_QWORD* SceneCameraWorkUpdater_14559c0(float* a1, unsigned __int64* a2,
                                       __int64 a3, _QWORD** a4, __int64* a5);
__int64 game_facility_SceneCameraWorkUpdater_InitializeTickTimer_lambda0_Invoke(
    __int64 result);
__attribute__((swiftcall)) void
game_facility_SceneCameraWorkUpdater_CommitCameraParamLinear_lambda0_Invoke(
    PSEUDO_X8 x8_, unsigned __int64 result);
__attribute__((swiftcall)) void
game_facility_SceneCameraWorkUpdater_CommitCameraParamLinear_lambda1_Invoke(
    PSEUDO_X8 x8_, unsigned __int64 result);
__attribute__((swiftcall)) void
game_facility_SceneCameraWorkUpdater_StateTickSpline_Tick_lambda0_Invoke(
    PSEUDO_X8 x8_, float32x4_t* a1);

_QWORD* SceneCameraWorkUpdater_Destructor(_QWORD* result)
{
  _QWORD* v1;
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  _QWORD* v6;
  _QWORD* v7;
  unsigned __int64 v8;
  unsigned __int64 v9;
  __int64 v10;
  unsigned __int64 v11;
  __int64 v12;
  __int64 v13;
  _QWORD* v14;
  __int64 v15;
  unsigned __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
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
  _QWORD* v34;
  __int64 v35;
  __int64 v36;
  _QWORD* v37;
  _QWORD* v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  __int64 v42;
  __int64 v43;
  _QWORD* v44;
  _QWORD* v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;

  v1 = result;
  *result = game_facility_SceneCameraWorkUpdater_vtable;
  v2 = fw_memory_g_heap_manager_ptr;
  if (result[21] != 0) {
    v3 = (_QWORD*)result[20];
    if (v3 != nullptr) {
      do {
        v6 = (_QWORD*)*v3;
        v7 = (_QWORD*)v3[8];
        if (v7 == v3 + 4) {
          v4 = 32;
        }
        else {
          if (v7 == nullptr) {
            goto LABEL_6;
          }
          v4 = 40;
        }
        (*(void (**)(void))(*v7 + v4))();
      LABEL_6:
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v5 = 128;
        }
        else {
          v5 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v5);
        v3 = v6;
      } while (v6 != nullptr);
    }
    v8 = v1[19];
    v1[20] = 0;
    if (v8 != 0) {
      v9 = v8 & 7;
      if (v8 >= 8) {
        v11 = v8 & 0xFFFFFFFFFFFFFFF8LL;
        v10 = 0;
        do {
          *(_QWORD*)(v1[18] + 8 * v10) = 0;
          *(_QWORD*)(v1[18] + 8 * v10 + 8) = 0;
          *(_QWORD*)(v1[18] + 8 * v10 + 16) = 0;
          *(_QWORD*)(v1[18] + 8 * v10 + 24) = 0;
          *(_QWORD*)(v1[18] + 8 * v10 + 32) = 0;
          *(_QWORD*)(v1[18] + 8 * v10 + 40) = 0;
          *(_QWORD*)(v1[18] + 8 * v10 + 48) = 0;
          v12 = v1[18] + 8 * v10;
          v10 += 8;
          *(_QWORD*)(v12 + 56) = 0;
        } while (v11 != v10);
      }
      else {
        v10 = 0;
      }
      if (v9 != 0) {
        v13 = 8 * v10;
        do {
          --v9;
          *(_QWORD*)(v1[18] + v13) = 0;
          v13 += 8;
        } while (v9 != 0);
      }
    }
    v1[21] = 0;
  }
  v14 = (_QWORD*)v1[6];
  v15 = v1[7];
  v1[10] = 0;
  v16 = (v15 - (__int64)v14) >> 3;
  if (v16 >= 3) {
    do {
      if (*v14 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v17 = 128;
        }
        else {
          v17 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v17);
        v14 = (_QWORD*)v1[6];
        v15 = v1[7];
      }
      v1[6] = ++v14;
      v16 = (v15 - (__int64)v14) >> 3;
    } while (v16 > 2);
  }
  if (v16 == 1) {
    v18 = 256;
  }
  else {
    if (v16 != 2) {
      goto LABEL_35;
    }
    v18 = 512;
  }
  v1[9] = v18;

LABEL_35:
  v19 = v1[48];
  v1[47] = GameData_203ef90;
  v20 = v1[56];
  v1[49] = v19;
  v1[57] = v20;
  if (v20 != 0) {
    v21 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v21 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v21);
    v19 = v1[48];
  }
  if (v19 != 0) {
    v22 = *(_QWORD*)v2;
    v1[49] = v19;
    v23 = 128;
    if (*(_QWORD*)(v22 + 200) == 0) {
      v23 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v22 + v23);
  }
  v24 = v1[44];
  v25 = v1[36];
  v1[35] = GameData_203ef60;
  v1[45] = v24;
  v1[37] = v25;
  if (v24 != 0) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v26 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v26);
    v25 = v1[36];
  }
  if (v25 != 0) {
    v27 = *(_QWORD*)v2;
    v1[37] = v25;
    v28 = 128;
    if (*(_QWORD*)(v27 + 200) == 0) {
      v28 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v27 + v28);
  }
  v29 = v1[32];
  v30 = v1[24];
  v1[23] = GameData_203ef60;
  v1[33] = v29;
  v1[25] = v30;
  if (v29 != 0) {
    v31 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v31 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v31);
    v30 = v1[24];
  }
  if (v30 != 0) {
    v32 = *(_QWORD*)v2;
    v1[25] = v30;
    v33 = 128;
    if (*(_QWORD*)(v32 + 200) == 0) {
      v33 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(v32 + v33);
  }
  v34 = (_QWORD*)v1[20];
  if (v34 != nullptr) {
    do {
      v37 = (_QWORD*)*v34;
      v38 = (_QWORD*)v34[8];
      if (v38 == v34 + 4) {
        v35 = 32;
      }
      else {
        if (v38 == nullptr) {
          goto LABEL_63;
        }
        v35 = 40;
      }
      (*(void (**)(void))(*v38 + v35))();
    LABEL_63:
      if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
        v36 = 128;
      }
      else {
        v36 = 56;
      }
      result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v36);
      v34 = v37;
    } while (v37 != nullptr);
  }
  v39 = v1[18];
  v1[18] = 0;
  if (v39 != 0) {
    v40 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v40 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v40);
  }
  v41 = v1[17];
  if (v41 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v41 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v41 + 16LL))(v41);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v41);
  }
  v42 = v1[14];
  if (v42 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v42);
  }
  v43 = v1[12];
  if (v43 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v43 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v43 + 16LL))(v43);
    result = (_QWORD*)std___1___shared_weak_count___release_weak(v43);
  }
  v44 = (_QWORD*)v1[6];
  v45 = (_QWORD*)v1[7];
  v1[10] = 0;
  v46 = v45 - v44;
  if (v46 >= 3) {
    do {
      if (*v44 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v47 = 128;
        }
        else {
          v47 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v47);
        v44 = (_QWORD*)v1[6];
        v45 = (_QWORD*)v1[7];
      }
      v1[6] = ++v44;
      v46 = v45 - v44;
    } while (v46 > 2);
  }
  if (v46 == 1) {
    v48 = 256;
  }
  else {
    if (v46 != 2) {
      goto LABEL_96;
    }
    v48 = 512;
  }
  v1[9] = v48;

LABEL_96:
  if (v44 != v45) {
    do {
      if (*v44 != 0) {
        if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) != 0) {
          v49 = 128;
        }
        else {
          v49 = 56;
        }
        result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v49);
      }
      ++v44;
    } while (v44 != v45);
    v50 = v1[7];
    v51 = v1[6] - v50;
    if (v51 != 0) {
      v1[7] = v50 + ((v51 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    }
  }
  if (v1[5] != 0) {
    v52 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v52 = 56;
    }
    result = (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v52);
  }
  if ((v1[2] & 1) != 0 && v1[4] != 0) {
    v53 = 128;
    if (*(_QWORD*)(*(_QWORD*)v2 + 200LL) == 0) {
      v53 = 56;
    }
    return (_QWORD*)nn_mem_StandardAllocator_Free(*(_QWORD*)v2 + v53);
  }
  return result;
}

float* SceneCameraWorkUpdater_1452520(float* result)
{
  float* v1;
  _QWORD* v2;
  unsigned __int64 v3;
  _QWORD* v4;
  __int64 v5;
  float v6;
  int v7;
  float v8;
  float32x4_t v9;
  float32x4_t v10;
  int v11;
  float v12;
  int v13;
  float32x4_t* v14;
  float32x4_t* v15;
  __int64 v16;
  unsigned __int64 v17;
  float32x4_t* v18;
  __int64 v19;
  unsigned __int64 v20;
  float* v21;
  __int64 v22;
  unsigned __int64 v23;
  float v24;
  __int64 v25;
  __int64 v26;
  __int128 v27;
  __int64 v28;
  __int128 v29;
  __int128 v30;
  __int128 v31;
  float v32;
  float32x4_t v33;
  int8x16_t v34;
  float32x4_t v35;
  float32x4_t v36;
  int8x16_t v37;
  float32x4_t v38;
  float32x4_t v39;
  int8x16_t v40;
  float32x4_t v41;
  __int64 v42;
  _QWORD* v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  __int64 v47;
  __int64* v48;
  __int64 v49;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  __int64 v53;
  __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
  __int64 v58;
  __int64 v59;
  __int64 v60;
  __int64 v61;
  __int64 v62;
  __int64 v63;
  __int128 v64;
  __int64 v65;
  __int128 v66;
  __int128 v67;
  __int128 v68;
  float v69;
  float i;
  int v71;
  float j;
  int v74;
  unsigned __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  unsigned __int64 v81;
  unsigned __int64 v82;
  char* v83;
  __int64 v84;
  __int64 v85;
  unsigned __int64 v86;
  unsigned __int64 v87;
  char* v88;
  float32x4_t* v89;
  float32x4_t v90;
  float32x4_t v91;
  float32x4_t* v92;
  float32x4_t v93;
  float32x4_t v94;
  float* v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int128 v103;
  __int128 v104;
  __int64 v105;
  __int64 v106;
  float v107;
  float32x4_t v108;
  float v109;
  float32x4_t v110;
  float v111;
  int v112;
  __int64 v113;
  __int64 v114;
  __int64* v115;
  float32x4_t v116;
  float32x4_t v117;
  float32x4_t v118;
  __int64 v119;
  unsigned __int64 v120;
  __int64 v121;
  __int64 v122;
  __int64 v123;

  if (*((_QWORD*)result + 10) != 0) {
    v1 = result;
    v2 = *((_QWORD**)result + 6);
    v3 = *((_QWORD*)result + 9);
    v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    v114 = GameData_212e438 + 16;
    v115 = GameData_212e460[0] + 2;
    while (1) {
      v5 = *(_QWORD*)(v2[v3 >> 9] + 8 * (v3 & 0x1FF));
      if (**(_BYTE**)(v5 + 24) == 1) {
        SceneCameraWorkUpdater_14531a0_alt1(v1, v5);
        v6 = v1[56];
        v7 = *((_DWORD*)v1 + 59);
        v8 = v1[80];
        v9 = (__typeof__(v9)){0};
        v10 = (__typeof__(v10)){0};
        v11 = *((_DWORD*)v1 + 83);
        v12 = v1[104];
        v13 = *((_DWORD*)v1 + 107);
        v1[57] = v6;
        v15 = *((float32x4_t**)v1 + 24);
        v14 = *((float32x4_t**)v1 + 25);
        *((_DWORD*)v1 + 60) = v7;
        v1[81] = v8;
        *((_DWORD*)v1 + 84) = v11;
        v1[105] = v12;
        *((_DWORD*)v1 + 108) = v13;
        if (v15 != v14) {
          v16 = *((_QWORD*)v1 + 32);
          v17 = (unsigned __int64)(*((_QWORD*)v1 + 33) - v16) >> 6;
          if ((int)v17 < 1 || (float)(v6 / (float)(unsigned int)v17) == 0.0f) {
            v10 = *v15;
          }
          else {
            v89 =
                (float32x4_t*)(v16 + ((unsigned __int64)(unsigned int)(v17 - 1)
                                      << 6));
            if ((_DWORD)v17 == 1) {
              v90 = v89[1];
              v91 = vmulq_n_f32(vsubq_f32(v89[2], v90), 0x1.0000000000000p+0f);
              LANES128(v91).n128_u32[3] = 0;
              v10 = vaddq_f32(v90, v91);
            }
            else {
              v107 = 0x1.0000000000000p+0f *
                     (float)(0x1.0000000000000p+0f * 0x1.0000000000000p+0f);
              LANES128(v108).n128_u64[0] = 0x3F0000003F000000LL;
              LANES128(v108).n128_u64[1] = 0x3F0000003F000000LL;
              v10 = vmulq_f32(
                  vaddq_f32(
                      vaddq_f32(
                          vaddq_f32(
                              vmulq_n_f32(
                                  *v89,
                                  (float)-(
                                      float)(v107 -
                                             (float)((float)(0x1.0000000000000p+0f *
                                                             0x1.0000000000000p+0f) *
                                                     2.0f)) -
                                      0x1.0000000000000p+0f),
                              vmulq_n_f32(
                                  v89[1],
                                  (float)((float)((float)(0x1.0000000000000p+0f *
                                                          0x1.0000000000000p+0f) *
                                                  -5.0f) +
                                          (float)(v107 * 3.0f)) +
                                      2.0f)),
                          vmulq_n_f32(
                              v89[2],
                              (float)((float)((float)(0x1.0000000000000p+0f *
                                                      0x1.0000000000000p+0f) *
                                              4.0f) +
                                      (float)(v107 * -3.0f)) +
                                  0x1.0000000000000p+0f)),
                      vmulq_n_f32(v89[3],
                                  v107 - (float)(0x1.0000000000000p+0f *
                                                 0x1.0000000000000p+0f))),
                  v108);
            }
          }
        }
        v18 = *((float32x4_t**)v1 + 36);
        if (v18 != *((float32x4_t**)v1 + 37)) {
          v19 = *((_QWORD*)v1 + 44);
          v20 = (unsigned __int64)(*((_QWORD*)v1 + 45) - v19) >> 6;
          if ((int)v20 < 1 || (float)(v8 / (float)(unsigned int)v20) == 0.0f) {
            v9 = *v18;
          }
          else {
            v92 =
                (float32x4_t*)(v19 + ((unsigned __int64)(unsigned int)(v20 - 1)
                                      << 6));
            if ((_DWORD)v20 == 1) {
              v93 = v92[1];
              v94 = vmulq_n_f32(vsubq_f32(v92[2], v93), 0x1.0000000000000p+0f);
              LANES128(v94).n128_u32[3] = 0;
              v9 = vaddq_f32(v93, v94);
            }
            else {
              v109 = 0x1.0000000000000p+0f *
                     (float)(0x1.0000000000000p+0f * 0x1.0000000000000p+0f);
              LANES128(v110).n128_u64[0] = 0x3F0000003F000000LL;
              LANES128(v110).n128_u64[1] = 0x3F0000003F000000LL;
              v9 = vmulq_f32(
                  vaddq_f32(
                      vaddq_f32(
                          vaddq_f32(
                              vmulq_n_f32(
                                  *v92,
                                  (float)-(
                                      float)(v109 -
                                             (float)((float)(0x1.0000000000000p+0f *
                                                             0x1.0000000000000p+0f) *
                                                     2.0f)) -
                                      0x1.0000000000000p+0f),
                              vmulq_n_f32(
                                  v92[1],
                                  (float)((float)((float)(0x1.0000000000000p+0f *
                                                          0x1.0000000000000p+0f) *
                                                  -5.0f) +
                                          (float)(v109 * 3.0f)) +
                                      2.0f)),
                          vmulq_n_f32(
                              v92[2],
                              (float)((float)((float)(0x1.0000000000000p+0f *
                                                      0x1.0000000000000p+0f) *
                                              4.0f) +
                                      (float)(v109 * -3.0f)) +
                                  0x1.0000000000000p+0f)),
                      vmulq_n_f32(v92[3],
                                  v109 - (float)(0x1.0000000000000p+0f *
                                                 0x1.0000000000000p+0f))),
                  v110);
            }
          }
        }
        v21 = *((float**)v1 + 48);
        if (v21 == *((float**)v1 + 49)) {
          v24 = 0.0f;
        }
        else {
          v22 = *((_QWORD*)v1 + 56);
          v23 = (unsigned __int64)(*((_QWORD*)v1 + 57) - v22) >> 4;
          if ((int)v23 < 1 || (float)(v12 / (float)(unsigned int)v23) == 0.0f) {
            v24 = *v21;
          }
          else {
            v95 = (float*)(v22 + 16LL * (unsigned int)(v23 - 1));
            if ((_DWORD)v23 == 1) {
              v24 = v95[1] +
                    (float)(0x1.0000000000000p+0f * (float)(v95[2] - v95[1]));
            }
            else {
              v111 = 0x1.0000000000000p+0f *
                     (float)(0x1.0000000000000p+0f * 0x1.0000000000000p+0f);
              v24 =
                  (float)((float)((float)((float)((float)((float)((float)((float)(0x1.0000000000000p+0f *
                                                                                  0x1.0000000000000p+0f) *
                                                                          -5.0f) +
                                                                  (float)(v111 *
                                                                          3.0f)) +
                                                          2.0f) *
                                                  v95[1]) +
                                          (float)((float)((float)-(
                                                              float)(v111 -
                                                                     (float)((float)(0x1.0000000000000p+0f *
                                                                                     0x1.0000000000000p+0f) *
                                                                             2.0f)) -
                                                          0x1.0000000000000p+0f) *
                                                  *v95)) +
                                  (float)((float)((float)((float)((float)(0x1.0000000000000p+0f *
                                                                          0x1.0000000000000p+0f) *
                                                                  4.0f) +
                                                          (float)(v111 *
                                                                  -3.0f)) +
                                                  0x1.0000000000000p+0f) *
                                          v95[2])) +
                          (float)((float)(v111 -
                                          (float)(0x1.0000000000000p+0f *
                                                  0x1.0000000000000p+0f)) *
                                  v95[3])) *
                  0x1.0000000000000p-1f;
            }
          }
        }
        v117 = v10;
        v118 = v9;
        if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                                  memory_order_acquire) &
             1) == 0) {
          v112 = __cxa_guard_acquire(&GameData_21a6190);
          v10 = v117;
          v9 = v118;
          if (v112 != 0) {
            v113 = *((_QWORD*)GameData_212c558 + 1);
            *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
            *((_QWORD*)&GameData_21a6180 + 1) = v113;
            __cxa_guard_release(&GameData_21a6190);
            v10 = v117;
            v9 = v118;
          }
        }
        v33 = vsubq_f32(v9, v10);
        v34 = vmulq_f32(v33, v33);
        LANES128(v34).n128_u64[0] =
            LANES64_OF(
                vadd_f32(
                    COERCE_AS(float32x2_t,
                              LANES128_OF(vextq_s8(v34, v34, 8u)).n128_u64[0]),
                    COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
                .n64_u64[0];
        LANES128(v34).n128_u64[0] =
            LANES64_OF(
                vpadd_f32(COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0]),
                          COERCE_AS(float32x2_t, LANES128(v34).n128_u64[0])))
                .n64_u64[0];
        LANES128(v34).n128_u64[1] = LANES128(v34).n128_u64[0];
        v35 = vrsqrteq_f32(v34);
        v36 = vmulq_f32(v35, vrsqrtsq_f32(v35, vmulq_f32(v34, v35)));
        v37 = vbicq_s8(
            vmulq_f32(v33,
                      vmulq_f32(v36, vrsqrtsq_f32(v36, vmulq_f32(v34, v36)))),
            vceqzq_f32(v34));
        LANES128(v36).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        LANES128(v38).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                                 COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v36).n128_i8[8] =
            vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        *(int8x8_t*)&LANES128(v38).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                      COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        v39 = vmulq_f32(v36, v38);
        LANES128(v38).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v38).n128_i8[8] =
            vqtbl1_s8(v37, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        LANES128(v37).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                                 COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v37).n128_i8[8] =
            vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                      COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        v40 = vmlsq_f32(v39, v37, v38);
        LANES128(v37).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v37).n128_i8[8] =
            vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
        v41 = vmulq_f32(v38, v37);
        LANES128(v37).n128_u64[0] =
            LANES64_OF(vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
                .n64_u64[0];
        *(int8x8_t*)&LANES128(v37).n128_i8[8] =
            vqtbl1_s8(v40, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
        v116 = vmlsq_f32(v41, v36, v37);
        v42 = fw_memory_HeapManager_Allocate(*v4, 432, 16, 0);
        v43 = GameData_212c2a0;
        v44 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0 + 8);
        *(_QWORD*)(v42 + 224) =
            *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)GameData_212c2a0);
        *(_QWORD*)(v42 + 232) = v44;
        v45 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v43);
        *(_QWORD*)(v42 + 240) =
            *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v43);
        *(_QWORD*)(v42 + 248) = v45;
        v46 = v43[1];
        *(_QWORD*)(v42 + 192) = *v43;
        *(_QWORD*)(v42 + 200) = v46;
        v47 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v43 + 8);
        *(_QWORD*)(v42 + 208) =
            *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v43);
        *(_QWORD*)(v42 + 216) = v47;
        v48 = (__int64*)GameData_212c2b0;
        *(_QWORD*)(v42 + 8) = 0;
        *(_QWORD*)(v42 + 16) = 0;
        *(_QWORD*)(v42 + 96) = 0;
        *(_QWORD*)(v42 + 104) = 0;
        *(_QWORD*)(v42 + 112) = 1065353216;
        *(_QWORD*)(v42 + 132) = 0x4210000042480000LL;
        *(_DWORD*)(v42 + 176) = 0;
        *(_QWORD*)(v42 + 408) = 0;
        *(_QWORD*)(v42 + 416) = 0;
        *(_QWORD*)(v42 + 384) = 0;
        *(_QWORD*)(v42 + 392) = 0;
        *(_QWORD*)(v42 + 40) = 0;
        *(float*)(v42 + 128) = v24;
        *(_QWORD*)(v42 + 120) = 0;
        v50 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v48);
        v49 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v48 + 8);
        v52 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v48);
        v51 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v48 + 8);
        v54 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v48);
        v53 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v48);
        v55 = *v48;
        v57 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v48);
        v56 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v48 + 8);
        *(float32x4_t*)(v42 + 48) = v117;
        *(float32x4_t*)(v42 + 64) = v118;
        *(_QWORD*)(v42 + 272) = v49;
        *(_QWORD*)(v42 + 280) = v51;
        v58 = *v48;
        v59 = v48[1];
        *(_QWORD*)(v42 + 320) = v55;
        *(_QWORD*)(v42 + 328) = v50;
        *(float32x4_t*)(v42 + 80) = v116;
        *(_QWORD*)(v42 + 256) = v58;
        *(_QWORD*)(v42 + 264) = v59;
        v60 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v48);
        *(_QWORD*)(v42 + 304) =
            *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v48);
        *(_QWORD*)(v42 + 312) = v53;
        v62 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v48 + 8);
        v61 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v48 + 16);
        *(_QWORD*)(v42 + 352) = v57;
        *(_QWORD*)(v42 + 360) = v60;
        *(_QWORD*)(v42 + 288) = v61;
        *(_QWORD*)(v42 + 296) = v56;
        *(_QWORD*)(v42 + 336) = v52;
        *(_QWORD*)(v42 + 344) = v62;
        *(_BYTE*)(v42 + 164) = 1;
        *(_BYTE*)(v42 + 165) = 1;
        *(_QWORD*)v42 = v115;
        *(_QWORD*)(v42 + 140) = 0x4180000041C00000LL;
        *(_QWORD*)(v42 + 148) = 1091567616;
        *(_QWORD*)(v42 + 168) = 1092616192;
        v63 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v48);
        *(_QWORD*)(v42 + 368) = v54;
        *(_QWORD*)(v42 + 376) = v63;
        *(_QWORD*)(v42 + 32) = v114;
        *(_QWORD*)(v42 + 156) = 0x469C40003DCCCCCDLL;
        *(_QWORD*)(v42 + 424) = 1023;
        *(_QWORD*)(v42 + 392) = 1023;
        *(_QWORD*)(v42 + 400) = 0;
        GameRoutine_b3aee0(v42 + 32);
        v64 = *(_OWORD*)(v42 + 64);
        v65 = *((_QWORD*)v1 + 1);
        *(_QWORD*)(v65 + 40) = 0;
        *(_QWORD*)(v65 + 80) = v64;
        v66 = *(_OWORD*)(v65 + 80);
        *(_QWORD*)(v65 + 64) = v66;
        *((_QWORD*)&v66 + 1) = DWORD2(v64);
        *(_OWORD*)(v65 + 80) = v66;
        v67 = *(_OWORD*)(v65 + 64);
        *(_QWORD*)(v65 + 48) = v67;
        *((_QWORD*)&v67 + 1) = DWORD2(v64);
        v68 = *(_OWORD*)(v65 + 48);
        *((_QWORD*)&v68 + 1) = DWORD2(v64);
        *(_OWORD*)(v65 + 48) = v68;
        *(_OWORD*)(v65 + 64) = v67;
        LODWORD(v64) = *(_DWORD*)(v42 + 112);
        *(_QWORD*)(v65 + 120) = 0;
        *(_DWORD*)(v65 + 132) = v64;
        *(_DWORD*)(v65 + 136) = v64;
        *(_DWORD*)(v65 + 128) = v64;
        v69 = *(float*)(v42 + 116);
        if (v69 >= 0.0f) {
          if (v69 != 0.0f) {
            while (v69 >= 0x1.6800000000000p+8f) {
              v69 = v69 + -0x1.6800000000000p+8f;
            }
          }
        }
        else {
          do {
            v69 = v69 + 0x1.6800000000000p+8f;
          } while (v69 < 0.0f);
        }
        *(_QWORD*)(v65 + 160) = 0;
        *(float*)(v65 + 172) = v69;
        *(float*)(v65 + 176) = v69;
        *(float*)(v65 + 168) = v69;
        for (i = *(float*)(v42 + 120); i < -0x1.6800000000000p+7f;
             i = i + 0x1.6800000000000p+8f)
          ;
        while (i >= 0x1.6800000000000p+7f) {
          i = i + -0x1.6800000000000p+8f;
        }
        *(_QWORD*)(v65 + 200) = 0;
        *(float*)(v65 + 212) = i;
        *(float*)(v65 + 216) = i;
        *(float*)(v65 + 208) = i;
        v71 = *(_DWORD*)(v42 + 128);
        *(_QWORD*)(v65 + 240) = 0;
        *(_DWORD*)(v65 + 252) = v71;
        *(_DWORD*)(v65 + 256) = v71;
        *(_DWORD*)(v65 + 248) = v71;
        *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)GameData_212c638 +
                                                   32LL) -
                                        8LL) +
                             40LL) +
                  226LL) = 1;
        result = (float*)game_facility_144e960(*((_QWORD*)v1 + 1));
        if (atomic_fetch_add((atomic_ullong* volatile)(v42 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v42 + 16LL))(v42);
          result = (float*)std___1___shared_weak_count___release_weak(v42);
        }
        goto LABEL_93;
      }
      v25 = *(_QWORD*)(v5 + 40);
      if (v25 != 0) {
        result = (float*)SceneCameraWorkUpdater_1453690_alt1(
            &v119, *(_QWORD*)(v25 + 8), v5 + 48, v5 + 56);
        v26 = v119;
        if (v119 != 0) {
          v27 = *(_OWORD*)(v119 + 32);
          v28 = *((_QWORD*)v1 + 1);
          *(_QWORD*)(v28 + 40) = 0;
          *(_QWORD*)(v28 + 80) = v27;
          v29 = *(_OWORD*)(v28 + 80);
          *(_QWORD*)(v28 + 64) = v29;
          *((_QWORD*)&v29 + 1) = DWORD2(v27);
          *(_OWORD*)(v28 + 80) = v29;
          v30 = *(_OWORD*)(v28 + 64);
          *(_QWORD*)(v28 + 48) = v30;
          *((_QWORD*)&v30 + 1) = DWORD2(v27);
          v31 = *(_OWORD*)(v28 + 48);
          *((_QWORD*)&v31 + 1) = DWORD2(v27);
          *(_OWORD*)(v28 + 48) = v31;
          *(_OWORD*)(v28 + 64) = v30;
          LODWORD(v27) = *(_DWORD*)(v26 + 80);
          *(_QWORD*)(v28 + 120) = 0;
          *(_DWORD*)(v28 + 132) = v27;
          *(_DWORD*)(v28 + 136) = v27;
          *(_DWORD*)(v28 + 128) = v27;
          v32 = *(float*)(v26 + 84);
          if (v32 >= 0.0f) {
            if (v32 != 0.0f && v32 >= 0x1.6800000000000p+8f) {
              do {
                v32 = v32 + -0x1.6800000000000p+8f;
              } while (v32 >= 0x1.6800000000000p+8f);
            }
          }
          else {
            do {
              v32 = v32 + 0x1.6800000000000p+8f;
            } while (v32 < 0.0f);
          }
          *(_QWORD*)(v28 + 160) = 0;
          *(float*)(v28 + 172) = v32;
          *(float*)(v28 + 176) = v32;
          *(float*)(v28 + 168) = v32;
          for (j = *(float*)(v26 + 88); j < -0x1.6800000000000p+7f;
               j = j + 0x1.6800000000000p+8f)
            ;
          while (j >= 0x1.6800000000000p+7f) {
            j = j + -0x1.6800000000000p+8f;
          }
          *(_QWORD*)(v28 + 200) = 0;
          *(float*)(v28 + 212) = j;
          *(float*)(v28 + 216) = j;
          *(float*)(v28 + 208) = j;
          v74 = *(_DWORD*)(v26 + 96);
          *(_QWORD*)(v28 + 240) = 0;
          *(_DWORD*)(v28 + 252) = v74;
          *(_DWORD*)(v28 + 256) = v74;
          *(_DWORD*)(v28 + 248) = v74;
          *(_BYTE*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)
                                                         GameData_212c638 +
                                                     32LL) -
                                          8LL) +
                               40LL) +
                    226LL) = 1;
          result = (float*)game_facility_144e960(*((_QWORD*)v1 + 1));
        }
        v75 = v120;
        if (v120 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v120 + 8),
                                          0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(unsigned __int64))(*(_QWORD*)v75 + 16LL))(v75);
          result = (float*)std___1___shared_weak_count___release_weak(v75);
        }
      }
      v76 = *(_QWORD*)(v5 + 72);
      if (v76 == 0) {
        goto LABEL_93;
      }
      v77 = *(_QWORD*)(v5 + 88);
      if (v77 == 0) {
        v84 = *(_QWORD*)(v76 + 8);
        v85 = *((_QWORD*)v1 + 1);
        v86 = strlen(v84);
        if (v86 >= 0xFFFFFFFFFFFFFFF7LL) {
        LABEL_104:
          String_60a1d0();
        }
        v87 = v86;
        if (v86 >= 0x17) {
          if ((v86 | 7) == 0x17) {
            v99 = 26;
          }
          else {
            v99 = (v86 | 7) + 1;
          }
          v121 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, v99, 16, 0);
          v100 = v99 | 1;
          v88 = (char*)v121;
          v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
          v119 = v100;
          v120 = v87;
        }
        else {
          v88 = (char*)&v119 + 1;
          LOBYTE(v119) = 2 * v86;
          if (v86 == 0) {
            goto LABEL_87;
          }
        }
        memmove(v88, v84, v87);
      LABEL_87:
        v88[v87] = 0;
        game_facility_144f680(v85, &v119);
        if ((v119 & 1) != 0 && v121 != 0) {
          v101 = 128;
          if (*(_QWORD*)(*v4 + 200LL) == 0) {
            v101 = 56;
          }
          nn_mem_StandardAllocator_Free(*v4 + v101);
        }
        goto LABEL_92;
      }
      SceneCameraWorkUpdater_1453690_alt1(&v122, *(_QWORD*)(v77 + 8), v5 + 96,
                                          v5 + 104);
      v78 = v122;
      if (v122 != 0) {
        break;
      }
    LABEL_79:
      v98 = v123;
      if (v123 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v123 + 8),
                                        0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v98 + 16LL))(v98);
        std___1___shared_weak_count___release_weak(v98);
      }
    LABEL_92:
      v102 = *((_QWORD*)v1 + 1);
      v103 = *(_OWORD*)(v102 + 64);
      *(_QWORD*)(v102 + 80) = v103;
      v104 = *(_OWORD*)(v102 + 80);
      *((_QWORD*)&v104 + 1) = DWORD2(v103);
      *(_DWORD*)(v102 + 44) = *(_DWORD*)(v102 + 40);
      *(_DWORD*)(v102 + 124) = *(_DWORD*)(v102 + 120);
      LODWORD(v103) = *(_DWORD*)(v102 + 132);
      *(_OWORD*)(v102 + 80) = v104;
      *(_DWORD*)(v102 + 136) = v103;
      *(_DWORD*)(v102 + 164) = *(_DWORD*)(v102 + 160);
      *(_DWORD*)(v102 + 176) = *(_DWORD*)(v102 + 172);
      *(_DWORD*)(v102 + 204) = *(_DWORD*)(v102 + 200);
      *(_DWORD*)(v102 + 216) = *(_DWORD*)(v102 + 212);
      *(_DWORD*)(v102 + 244) = *(_DWORD*)(v102 + 240);
      *(_DWORD*)(v102 + 256) = *(_DWORD*)(v102 + 252);
      result = (float*)game_facility_144e960(v102);
    LABEL_93:
      v2 = *((_QWORD**)v1 + 6);
      v105 = *((_QWORD*)v1 + 10) - 1LL;
      v3 = *((_QWORD*)v1 + 9) + 1LL;
      *((_QWORD*)v1 + 9) = v3;
      *((_QWORD*)v1 + 10) = v105;
      if (v3 >= 0x400) {
        if (*v2 != 0) {
          v106 = 128;
          if (*(_QWORD*)(*v4 + 200LL) == 0) {
            v106 = 56;
          }
          result = (float*)nn_mem_StandardAllocator_Free(*v4 + v106);
          v2 = *((_QWORD**)v1 + 6);
          v3 = *((_QWORD*)v1 + 9);
          v105 = *((_QWORD*)v1 + 10);
        }
        ++v2;
        v3 -= 512LL;
        *((_QWORD*)v1 + 6) = v2;
        *((_QWORD*)v1 + 9) = v3;
      }
      if (v105 == 0) {
        return result;
      }
    }
    v79 = *((_QWORD*)v1 + 1);
    v80 = *(_QWORD*)(*(_QWORD*)(v5 + 72) + 8LL);
    v81 = strlen(v80);
    if (v81 >= 0xFFFFFFFFFFFFFFF7LL) {
      goto LABEL_104;
    }
    v82 = v81;
    if (v81 >= 0x17) {
      if ((v81 | 7) == 0x17) {
        v96 = 26;
      }
      else {
        v96 = (v81 | 7) + 1;
      }
      v83 = (char*)fw_memory_HeapManager_Allocate(*v4, v96, 16, 0);
      v120 = v82;
      v121 = (__int64)v83;
      v119 = v96 | 1;
    }
    else {
      v83 = (char*)&v119 + 1;
      LOBYTE(v119) = 2 * v81;
      if (v81 == 0) {
        goto LABEL_74;
      }
    }
    memmove(v83, v80, v82);
  LABEL_74:
    v83[v82] = 0;
    game_facility_144f500(v79, v78, &v119);
    v4 = (_QWORD*)fw_memory_g_heap_manager_ptr;
    if ((v119 & 1) != 0 && v121 != 0) {
      v97 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v97 = 56;
      }
      nn_mem_StandardAllocator_Free(*(_QWORD*)fw_memory_g_heap_manager_ptr +
                                    v97);
    }
    goto LABEL_79;
  }
  return result;
}

__int64 SceneCameraWorkUpdater_14531a0(__int64 a1, __int64 a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  __int64* v14;
  __int64* v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
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
  __int64 result;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  __int64 v50;
  _QWORD* v51;
  _QWORD* i;
  __int64* v53;
  __int64 v54;
  float v55;
  __int128 v56;
  __int128 v57;
  __int64* v58;
  __int64 v59;
  __int128 v60;
  __int128 v61;
  __int128 v62;
  __int128 v63;
  __int64 v64;
  __int64 v65;
  __int64 v66;
  __int64 v67;
  __int64 v68;
  int v69;
  __int64 v70;
  char v71;
  char v72;
  __int64 v73;
  int v74;
  __int64 v75;
  __int64 v76;
  __int64 v77;
  __int64 v78;
  __int64 v79;
  __int64 v80;
  __int64 v81;
  __int64 v82;
  __int64 v83;
  __int64 v84;
  __int64 v85;
  __int64 v86;
  __int64 v87;
  __int64 v88;
  __int64 v89;
  __int64 v90;
  __int64 v91;
  __int64 v92;
  __int64 v93;
  __int64 v94;
  __int64 v95;
  __int64 v96;
  __int64 v97;
  __int64 v98;
  __int64 v99;
  __int64 v100;
  __int64 v101;
  __int64 v102;
  __int64 v103;
  __int64 v104;

  v3 = a1 + 192;
  v2 = *(_QWORD*)(a1 + 192);
  v5 = *(_QWORD*)(a1 + 256);
  *(_DWORD*)(a1 + 240) = 0;
  *(_DWORD*)(a1 + 336) = 0;
  *(_DWORD*)(a1 + 432) = 0;
  *(_QWORD*)(a1 + 424) = 0x3F80000000000000LL;
  v6 = a1 + 184;
  *(_QWORD*)(a1 + 200) = v2;
  *(_QWORD*)(a1 + 264) = v5;
  v8 = a1 + 288;
  v7 = *(_QWORD*)(a1 + 288);
  *(_QWORD*)(a1 + 224) = 1065353216;
  *(_QWORD*)(a1 + 232) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 320) = 1065353216;
  *(_QWORD*)(a1 + 328) = 0x3F80000000000000LL;
  *(_QWORD*)(a1 + 416) = 1065353216;
  v9 = *(_QWORD*)(a1 + 448);
  *(_QWORD*)(a1 + 296) = v7;
  v10 = *(_QWORD*)(a1 + 352);
  *(_QWORD*)(a1 + 456) = v9;
  *(_QWORD*)(a1 + 360) = v10;
  v11 = a1 + 384;
  *(_QWORD*)(a1 + 392) = *(_QWORD*)(a1 + 384);
  v12 = *(_QWORD*)(a2 + 72);
  if (v12 != 0) {
    v13 = *(float*)(v12 + 60);
    if (v13 < *(float*)(a2 + 160)) {
      v13 = *(float*)(a2 + 160);
    }
  }
  else {
    v13 = *(float*)(a2 + 160);
  }
  *(_QWORD*)(a1 + 228) = 0;
  *(float*)(a1 + 224) = v13;
  *(_DWORD*)(a1 + 240) = 0;
  v14 = (__int64*)GameData_212c2a0;
  v15 = (__int64*)GameData_212c2b0;
  *(_QWORD*)(a1 + 324) = 0;
  v16 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v14);
  v17 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v14 + 8);
  *(_QWORD*)(a1 + 420) = 0;
  v64 = 1065353216;
  v65 = 0x100000000LL;
  v66 = 0x4248000041D80000LL;
  v67 = 0x41C0000042100000LL;
  *(float*)(a1 + 236) = v13;
  v18 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v14);
  v19 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v14 + 8);
  *(float*)(a1 + 320) = v13;
  *(float*)(a1 + 332) = v13;
  *(float*)(a1 + 416) = v13;
  *(float*)(a1 + 428) = v13;
  *(_DWORD*)(a1 + 336) = 0;
  *(_DWORD*)(a1 + 432) = 0;
  v69 = 0;
  v74 = 0;
  v68 = 0x4110000041800000LL;
  v73 = 1092616192;
  v20 = *v14;
  v21 = v14[1];
  v23 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v14);
  v22 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v14);
  v77 = v16;
  v78 = v17;
  v79 = v18;
  v80 = v19;
  v25 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v15);
  v24 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v15);
  v26 = *v15;
  v75 = v20;
  v76 = v21;
  v81 = v23;
  v82 = v22;
  v27 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v15);
  v29 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v15);
  v28 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v15 + 8);
  v85 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v15 + 8);
  v86 = v28;
  v30 = *v15;
  v31 = v15[1];
  v33 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v15);
  v32 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v15 + 8);
  v91 = v26;
  v92 = v27;
  v83 = v30;
  v84 = v31;
  v34 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v15);
  v89 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v15);
  v90 = v24;
  v36 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v15 + 8);
  v35 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v15 + 16);
  v37 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v15);
  v95 = v33;
  v96 = v34;
  v87 = v35;
  v88 = v32;
  v93 = v29;
  v94 = v36;
  v97 = v25;
  v98 = v37;
  v71 = 1;
  v60 = GameData_1a83090;
  v61 = (__typeof__(v61)){0};
  v62 = GameData_1a83610;
  v63 = (__typeof__(v63)){0};
  v102 = 0;
  v103 = 0;
  v99 = 0;
  v70 = 0x469C40003DCCCCCDLL;
  v72 = 1;
  v104 = 1023;
  v100 = 1023;
  v101 = 0;
  v58 = (__int64*)(GameData_212e438 + 16);
  v59 = 0;
  v38 = *(_QWORD*)(a2 + 40);
  if (v38 != 0) {
    SceneCameraWorkUpdater_1453690_alt1(&v57, *(_QWORD*)(v38 + 8), a2 + 48,
                                        a2 + 56);
    wld_a7fda0(&v58, v57);
    v39 = *((_QWORD*)&v57 + 1);
    if (*((_QWORD*)&v57 + 1) == 0) {
      goto LABEL_16;
    }
  }
  else {
    v40 = GameData_212dce8;
    v41 = *(_QWORD*)(*(_QWORD*)GameData_212dce8 + 264LL);
    if (v41 == 0) {
      goto LABEL_16;
    }
    v42 = *(_QWORD*)(*(_QWORD*)GameData_212dce8 + 256LL);
    v43 = *(_QWORD*)(*(_QWORD*)GameData_212dce8 + 264LL);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v41 + 16), 1u,
                              memory_order_relaxed);
    v39 = std___1___shared_weak_count_lock(v43);
    std___1___shared_weak_count___release_weak(v41);
    if (v39 == 0) {
      goto LABEL_16;
    }
    if (v42 != 0) {
      v44 = *(_QWORD*)(v42 + 8);
      v45 = *(_QWORD*)(v42 + 16);
      if (v45 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v45 + 8), 1u,
                                  memory_order_relaxed);
        wld_a7fda0(&v58, v44);
        if (atomic_fetch_add((atomic_ullong* volatile)(v45 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v45 + 16LL))(v45);
          std___1___shared_weak_count___release_weak(v45);
        }
      }
      else {
        wld_a7fda0(&v58, v44);
      }
      v56 = v61;
      game_13f9460((void*)(&v57), &v56);
      v55 = *(float*)(*(_QWORD*)v40 + 128LL);
      v61 = v57;
      *((float*)&v64 + 1) = *((float*)&v64 + 1) - v55;
      GameRoutine_b3aee0(&v58);
    }
  }
  if (atomic_fetch_add((atomic_ullong* volatile)(v39 + 8),
                       0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v39 + 16LL))(v39);
    std___1___shared_weak_count___release_weak(v39);
  }
LABEL_16:
  v57 = v60;
  StateMoveTo_d42860(v3, &v57);
  GameRoutine_1456360(v6);
  v57 = v61;
  StateMoveTo_d42860(v8, &v57);
  GameRoutine_1456360(v3 + 88);
  LODWORD(v57) = v66;
  AnimCtrlModule_a78450(v11, &v57);
  result = SceneCameraWorkUpdater_14567a0(v3 + 184);
  v47 = v101;
  v58 = GameData_212e740[0] + 2;
  if (v101 != 0) {
    v48 = v102;
    if (v101 == v102) {
      goto LABEL_23;
    }
    do {
      result = *(_QWORD*)(v48 - 8);
      *(_QWORD*)(v48 - 8) = 0;
      if (result != 0) {
        result = (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
      }
      v48 -= 24;
    } while (v48 != v47);
    v102 = v47;
    if (v101 != 0) {
    LABEL_23:
      v49 = 128;
      if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
        v49 = 56;
      }
      result = nn_mem_StandardAllocator_Free(
          *(_QWORD*)fw_memory_g_heap_manager_ptr + v49);
    }
  }
  v50 = *(_QWORD*)(a2 + 24);
  v51 = *(_QWORD**)(v50 + 8);
  for (i = *(_QWORD**)(v50 + 16); v51 != i; v51 += 3) {
    SceneCameraWorkUpdater_1453690_alt1(&v58, *(_QWORD*)(*v51 + 8LL), v51[1],
                                        v51[2]);
    v53 = v58;
    v57 = *((_OWORD*)v58 + 1);
    StateMoveTo_d42860(v3, &v57);
    GameRoutine_1456360(v6);
    v57 = *((_OWORD*)v53 + 2);
    StateMoveTo_d42860(v8, &v57);
    GameRoutine_1456360(v3 + 88);
    LODWORD(v57) = *((_DWORD*)v53 + 24);
    AnimCtrlModule_a78450(v11, &v57);
    result = SceneCameraWorkUpdater_14567a0(v3 + 184);
    v54 = v59;
    if (v59 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v59 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v54 + 16LL))(v54);
      result = std___1___shared_weak_count___release_weak(v54);
    }
  }
  return result;
}

unsigned __int64 SceneCameraWorkUpdater_1453690(_QWORD* a1, __int64 a2,
                                                char** a3, char** a4)
{
  unsigned __int64 result;
  __int64 v9;
  unsigned __int64 v10;
  unsigned __int64 v11;
  char* v12;
  __int64 v13;
  char* v14;
  unsigned __int64 v15;
  unsigned __int64 v16;
  char* v17;
  __int64 v18;
  char* v19;
  unsigned __int64 v20;
  unsigned __int64 v21;
  char* v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64 v26;
  _QWORD v27[2];
  char* v28;
  _QWORD v29[2];
  char* v30;
  _QWORD v31[2];
  char* v32;

  result = SceneManager_138e8c0(*(_QWORD*)GameData_212dce8, a2, 0);
  if (*a1 != 0) {
    return result;
  }
  v9 = a1[1];
  if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                  0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
    std___1___shared_weak_count___release_weak(v9);
  }
  v10 = strlen(a2);
  if (v10 >= 0xFFFFFFFFFFFFFFF7LL) {
  LABEL_54:
    String_60a1d0();
  }
  v11 = v10;
  if (v10 >= 0x17) {
    if ((v10 | 7) == 0x17) {
      v13 = 26;
    }
    else {
      v13 = (v10 | 7) + 1;
    }
    v12 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v13,
                                                16, 0);
    v31[1] = v11;
    v32 = v12;
    v31[0] = v13 | 1;
    goto LABEL_13;
  }
  LOBYTE(v31[0]) = 2 * v10;
  v12 = (char*)v31 + 1;
  if (v10 != 0) {
  LABEL_13:
    memcpy(v12, a2, v11);
  }
  v12[v11] = 0;
  if (*a3 != nullptr) {
    v14 = *a3;
  }
  else {
    v14 = &GameData_1a9f09e;
  }
  v15 = strlen(v14);
  if (v15 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_54;
  }
  v16 = v15;
  if (v15 >= 0x17) {
    if ((v15 | 7) == 0x17) {
      v18 = 26;
    }
    else {
      v18 = (v15 | 7) + 1;
    }
    v17 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v18,
                                                16, 0);
    v29[1] = v16;
    v30 = v17;
    v29[0] = v18 | 1;
    goto LABEL_25;
  }
  LOBYTE(v29[0]) = 2 * v15;
  v17 = (char*)v29 + 1;
  if (v15 != 0) {
  LABEL_25:
    memmove(v17, v14, v16);
  }
  v17[v16] = 0;
  if (*a4 != nullptr) {
    v19 = *a4;
  }
  else {
    v19 = &GameData_1a9f09e;
  }
  v20 = strlen(v19);
  if (v20 >= 0xFFFFFFFFFFFFFFF7LL) {
    goto LABEL_54;
  }
  v21 = v20;
  if (v20 >= 0x17) {
    if ((v20 | 7) == 0x17) {
      v23 = 26;
    }
    else {
      v23 = (v20 | 7) + 1;
    }
    v22 = (char*)fw_memory_HeapManager_Allocate(fw_memory_g_heap_manager, v23,
                                                16, 0);
    v27[1] = v21;
    v28 = v22;
    v27[0] = v23 | 1;
    goto LABEL_37;
  }
  LOBYTE(v27[0]) = 2 * v20;
  v22 = (char*)v27 + 1;
  if (v20 != 0) {
  LABEL_37:
    memmove(v22, v19, v21);
  }
  v22[v21] = 0;
  result = X8CALL_X0(unsigned __int64,
                     game_facility_1451020((void*)((__int64)a1),
                                           (unsigned __int64)v31, (__int64)v29,
                                           (__int64)v27));
  if ((v27[0] & 1) != 0 && v28 != nullptr) {
    v24 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v24 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v24);
  }
  if ((v29[0] & 1) != 0 && v30 != nullptr) {
    v25 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v25 = 56;
    }
    result = nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v25);
  }
  if ((v31[0] & 1) != 0 && v32 != nullptr) {
    v26 = 128;
    if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
      v26 = 56;
    }
    return nn_mem_StandardAllocator_Free(
        *(_QWORD*)fw_memory_g_heap_manager_ptr + v26);
  }
  return result;
}

bool SceneCameraWorkUpdater_14543c0(__int64 a1, __int64 a2)
{

#pragma clang fp contract(off)
  __int64 v2;
  float v3;
  float v4;
  _QWORD* v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v10;
  _QWORD* v11;
  __int64 v12;
  _QWORD* v13;

  v2 = *(_QWORD*)(a2 + 88);
  v4 = *(float*)(v2 + 32);
  v3 = *(float*)(v2 + 36);
  if (v3 >= v4 && (*(_BYTE*)(v2 + 136) & 1) == 0) {
    v5 = *(_QWORD**)(v2 + 96);
    *(_QWORD*)(v2 + 96) = 0;
    *(_BYTE*)(v2 + 136) = 1;
    if (v5 == (_QWORD*)(v2 + 64)) {
      v6 = 32;
    }
    else {
      if (v5 == nullptr) {
        goto LABEL_8;
      }
      v6 = 40;
    }
    (*(void (**)(__int64))(*v5 + v6))((__int64)v5);
  LABEL_8:
    v7 = *(_QWORD*)(v2 + 112);
    v8 = *(_QWORD*)(v2 + 120);
    if (v7 == v8) {
    LABEL_9:
      *(_QWORD*)(v2 + 120) = v7;
      return v3 >= v4;
    }
    while (1) {
      v11 = *(_QWORD**)(v8 - 16);
      *(_QWORD*)(v8 - 16) = 0;
      if ((_QWORD*)(v8 - 48) == v11) {
        v12 = 32;
      }
      else {
        if (v11 == nullptr) {
          goto LABEL_13;
        }
        v12 = 40;
      }
      (*(void (**)(__int64))(*v11 + v12))((__int64)v11);
      v13 = *(_QWORD**)(v8 - 16);
      if ((_QWORD*)(v8 - 48) == v13) {
        v10 = 32;
      }
      else {
        if (v13 == nullptr) {
          goto LABEL_13;
        }
        v10 = 40;
      }
      (*(void (**)(__int64))(*v13 + v10))((__int64)v13);
    LABEL_13:
      v8 -= 64;
      if (v8 == v7) {
        goto LABEL_9;
      }
    }
  }
  return v3 >= v4;
}

__int64 SceneCameraWorkUpdater_StateBlackOutWait_Unknown3(__int64 a1,
                                                          __int64 a2)
{
  unsigned __int64 v3;
  __int128 v4;
  __int64 result;
  __int64 v6;
  _QWORD* v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  _QWORD* v12;
  __int64 v13;
  _QWORD* v14;

  if (*(_BYTE*)(a2 + 120) == 0) {
    return 1;
  }
  if (game_ProcFadeView_instance_ == 0) {
    return 0;
  }
  v3 = game_ProcFadeView_instance_ +
       ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ + 480)
        << 6);
  if (*(float*)(v3 + 172) == *(float*)(v3 + 168)) {
    (*(void (**)(unsigned __int64))(*(_QWORD*)(v3 + 160) + 16LL))(v3 + 160);
  }
  else {
    v4 = *(_OWORD*)(v3 + 208);
  }
  if (*((float*)&v4 + 3) != 1.0f) {
    return 0;
  }
  if (LANES128_OF(((__n128 (*)(unsigned __int64, float)) *
                   (_QWORD*)(*(_QWORD*)(v3 + 160) + 16LL))(v3 + 160,
                                                           *((float*)&v4 + 3)))
          .n128_f32[3] != 1.0f) {
    return 0;
  }
  v6 = *(_QWORD*)(a2 + 104);
  if (*(float*)(v6 + 36) < *(float*)(v6 + 32)) {
    return 0;
  }
  result = 1;
  if ((*(_BYTE*)(v6 + 136) & 1) == 0) {
    *(_BYTE*)(v6 + 136) = 1;
    v7 = *(_QWORD**)(v6 + 96);
    *(_QWORD*)(v6 + 96) = 0;
    if (v7 == (_QWORD*)(v6 + 64)) {
      v8 = 32;
    }
    else {
      if (v7 == nullptr) {
        goto LABEL_19;
      }
      v8 = 40;
    }
    (*(void (**)(__int64))(*v7 + v8))((__int64)v7);
  LABEL_19:
    v9 = *(_QWORD*)(v6 + 112);
    v10 = *(_QWORD*)(v6 + 120);
    if (v9 == v10) {
    LABEL_20:
      *(_QWORD*)(v6 + 120) = v9;
      return 1;
    }
    while (1) {
      v12 = *(_QWORD**)(v10 - 16);
      *(_QWORD*)(v10 - 16) = 0;
      if ((_QWORD*)(v10 - 48) == v12) {
        v13 = 32;
      }
      else {
        if (v12 == nullptr) {
          goto LABEL_23;
        }
        v13 = 40;
      }
      (*(void (**)(__int64))(*v12 + v13))((__int64)v12);
      v14 = *(_QWORD**)(v10 - 16);
      if ((_QWORD*)(v10 - 48) == v14) {
        v11 = 32;
      }
      else {
        if (v14 == nullptr) {
          goto LABEL_23;
        }
        v11 = 40;
      }
      (*(void (**)(__int64))(*v14 + v11))((__int64)v14);
    LABEL_23:
      v10 -= 64;
      if (v10 == v9) {
        goto LABEL_20;
      }
    }
  }
  return result;
}

_QWORD* SceneCameraWorkUpdater_14559c0(float* a1, unsigned __int64* a2,
                                       __int64 a3, _QWORD** a4, __int64* a5)
{

#pragma clang fp contract(off)
  unsigned __int64 v5;
  unsigned __int64 v6;
  unsigned __int64 v7;
  unsigned __int64 v11;
  _QWORD** v12;
  _QWORD* v13;
  unsigned __int64 v14;
  __int64 v15;
  __int64* v16;
  _QWORD* v17;
  _QWORD* v18;
  __int64 v19;
  __int64 v20;
  float v21;
  float v22;
  float v23;
  _BOOL8 v24;
  unsigned __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 primeEm;
  unsigned __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  unsigned __int64 v32;
  __int64 v33;
  unsigned __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  _QWORD* v38;
  float* v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  _QWORD* v42;
  unsigned __int64 v43;
  unsigned __int64 v44;
  _QWORD* v45;
  unsigned __int64 v46;
  __int64 v47;
  __int64 v48;
  __int64 v49;
  _QWORD* v50;
  __int64 v51;
  unsigned __int64 v52;

  v6 = *a2;
  v7 = *((_QWORD*)a1 + 1);
  if (v7 != 0) {
    v11 = v7 - 1;
    if ((v7 & (v7 - 1)) != 0) {
      v5 = *a2;
      if (v6 >= v7) {
        v5 = v6 % v7;
      }
    }
    else {
      v5 = v11 & v6;
    }
    v12 = *(_QWORD***)(*(_QWORD*)a1 + 8 * v5);
    if (v12 != nullptr) {
      v13 = *v12;
      if (*v12 != nullptr) {
        if ((v7 & v11) == 0) {
          while (1) {
            v15 = v13[1];
            if (v15 == v6) {
              if (v13[2] == v6) {
                return v13;
              }
            }
            else if ((v15 & v11) != v5) {
              goto LABEL_23;
            }
            v13 = (_QWORD*)*v13;
            if (v13 == nullptr) {
              goto LABEL_23;
            }
          }
        }
        do {
          v14 = v13[1];
          if (v14 == v6) {
            if (v13[2] == v6) {
              return v13;
            }
          }
          else {
            if (v14 >= v7) {
              v14 %= v7;
            }
            if (v14 != v5) {
              break;
            }
          }
          v13 = (_QWORD*)*v13;
        } while (v13 != nullptr);
      }
    }
  }
LABEL_23:
  v16 = (__int64*)fw_memory_g_heap_manager_ptr;
  v17 = (_QWORD*)fw_memory_HeapManager_Allocate_alt1(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v18 = *a4;
  *v17 = 0;
  v17[1] = v6;
  v19 = *a5;
  v13 = v17;
  v17[2] = *v18;
  v20 = *(_QWORD*)(v19 + 32);
  if (v20 != 0) {
    if (v20 == v19) {
      v13[8] = v13 + 4;
      (*(void (**)(_QWORD))(**(_QWORD**)(v19 + 32) + 24LL))(
          *(_QWORD*)(v19 + 32));
    }
    else {
      v13[8] = (*(__int64 (**)(__int64))(*(_QWORD*)v20 + 16LL))(v20);
    }
  }
  else {
    v13[8] = 0;
  }
  v21 = a1[8];
  v22 = (float)(unsigned __int64)(*((_QWORD*)a1 + 3) + 1LL);
  if (v7 == 0 || (float)(v21 * (float)v7) < v22) {
    v23 = v22 / v21;
    v24 = true;
    if (v7 >= 3) {
      v24 = (v7 & (v7 - 1)) != 0;
    }
    v25 = v24 | (2 * v7);
    v26 = vcvtps_u64_f32(v23);
    if (v25 <= v26) {
      primeEm = v26;
    }
    else {
      primeEm = v25;
    }
    if (primeEm == 1) {
      primeEm = 2;
    }
    else if ((primeEm & (primeEm - 1)) != 0) {
      primeEm = std___1___next_prime(primeEm);
    }
    v28 = *((_QWORD*)a1 + 1);
    if (primeEm <= v28) {
      if (primeEm >= v28) {
        goto LABEL_89;
      }
      v34 = vcvtps_u64_f32((float)*((unsigned __int64*)a1 + 3) / a1[8]);
      if (v28 < 3 || (v28 & (v28 - 1)) != 0) {
        v34 = std___1___next_prime(v34);
      }
      else {
        v35 = 1LL << -(char)__clz(v34 - 1);
        if (v34 >= 2) {
          v34 = v35;
        }
      }
      if (primeEm <= v34) {
        primeEm = v34;
      }
      if (primeEm >= v28) {
        goto LABEL_89;
      }
      if (primeEm == 0) {
        v47 = *(_QWORD*)a1;
        *(_QWORD*)a1 = 0;
        if (v47 != 0) {
          v48 = 128;
          if (*(_QWORD*)(*v16 + 200) == 0) {
            v48 = 56;
          }
          nn_mem_StandardAllocator_Free_alt1(*v16 + v48);
        }
        *((_QWORD*)a1 + 1) = 0;
        goto LABEL_89;
      }
    }
    if (primeEm >> 61 != 0) {
      GameRoutine_60a210();
    }
    v29 = fw_memory_HeapManager_Allocate_alt1(*v16, 8 * primeEm, 16, 0);
    v30 = *(_QWORD*)a1;
    *(_QWORD*)a1 = v29;
    if (v30 != 0) {
      v31 = 128;
      if (*(_QWORD*)(*v16 + 200) == 0) {
        v31 = 56;
      }
      nn_mem_StandardAllocator_Free_alt1(*v16 + v31);
    }
    v32 = primeEm & 7;
    *((_QWORD*)a1 + 1) = primeEm;
    if (primeEm >= 8) {
      v33 = 0;
      do {
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v33) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v33 + 8) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v33 + 16) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v33 + 24) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v33 + 32) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v33 + 40) = 0;
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v33 + 48) = 0;
        v36 = *(_QWORD*)a1 + 8 * v33;
        v33 += 8;
        *(_QWORD*)(v36 + 56) = 0;
      } while ((primeEm & 0x1FFFFFFFFFFFFFF8LL) != v33);
    }
    else {
      v33 = 0;
    }
    if ((primeEm & 7) != 0) {
      v37 = 8 * v33;
      do {
        --v32;
        *(_QWORD*)(*(_QWORD*)a1 + v37) = 0;
        v37 += 8;
      } while (v32 != 0);
    }
    v39 = a1 + 4;
    v38 = *((_QWORD**)a1 + 2);
    if (v38 != nullptr) {
      v40 = v38[1];
      v41 = primeEm - 1;
      if ((primeEm & (primeEm - 1)) != 0) {
        if (v40 >= primeEm) {
          v40 %= primeEm;
        }
        *(_QWORD*)(*(_QWORD*)a1 + 8 * v40) = v39;
        v42 = (_QWORD*)*v38;
        if (*v38 == 0) {
          goto LABEL_89;
        }
        while (1) {
          v43 = v42[1];
          if (v43 >= primeEm) {
            v43 %= primeEm;
          }
          if (v43 != v40) {
            if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v43) == 0) {
              *(_QWORD*)(*(_QWORD*)a1 + 8 * v43) = v38;
              goto LABEL_66;
            }
            *v38 = *v42;
            *v42 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v43);
            **(_QWORD**)(*(_QWORD*)a1 + 8 * v43) = v42;
            v42 = v38;
          }
          v43 = v40;
        LABEL_66:
          v38 = v42;
          v42 = (_QWORD*)*v42;
          v40 = v43;
          if (v42 == nullptr) {
            goto LABEL_89;
          }
        }
      }
      v44 = v40 & v41;
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v44) = v39;
      while (1) {
        v45 = (_QWORD*)*v38;
        if (*v38 == 0) {
          break;
        }
        v46 = v45[1] & v41;
        if (v46 == v44) {
          v38 = (_QWORD*)*v38;
        }
        else if (*(_QWORD*)(*(_QWORD*)a1 + 8 * v46) != 0) {
          *v38 = *v45;
          *v45 = **(_QWORD**)(*(_QWORD*)a1 + 8 * v46);
          **(_QWORD**)(*(_QWORD*)a1 + 8 * v46) = v45;
        }
        else {
          *(_QWORD*)(*(_QWORD*)a1 + 8 * v46) = v38;
          v38 = v45;
          v44 = v46;
        }
      }
    }
  LABEL_89:
    v7 = *((_QWORD*)a1 + 1);
    if ((v7 & (v7 - 1)) != 0) {
      if (v6 >= v7) {
        v5 = v6 % v7;
      }
      else {
        v5 = v6;
      }
    }
    else {
      v5 = (v7 - 1) & v6;
    }
  }
  v49 = *(_QWORD*)a1;
  v50 = *(_QWORD**)(*(_QWORD*)a1 + 8 * v5);
  if (v50 != nullptr) {
    *v13 = *v50;
    *v50 = v13;
  }
  else {
    v51 = *((_QWORD*)a1 + 2);
    *((_QWORD*)a1 + 2) = v13;
    *v13 = v51;
    *(_QWORD*)(v49 + 8 * v5) = a1 + 4;
    if (*v13 != 0) {
      v52 = *(_QWORD*)(*v13 + 8LL);
      if ((v7 & (v7 - 1)) != 0) {
        if (v52 >= v7) {
          v52 %= v7;
        }
      }
      else {
        v52 &= v7 - 1;
      }
      *(_QWORD*)(*(_QWORD*)a1 + 8 * v52) = v13;
    }
  }
  ++*((_QWORD*)a1 + 3);
  return v13;
}

__int64 game_facility_SceneCameraWorkUpdater_InitializeTickTimer_lambda0_Invoke(
    __int64 result)
{
  float v1;
  void* v2;
  __int64 v3;
  unsigned __int64 v4;
  unsigned __int64 v5;
  __int128 v6;
  __int128 v7;

  *(_BYTE*)(*(_QWORD*)(result + 8) + 120LL) = 1;
  if ((*(_BYTE*)(*(_QWORD*)(result + 16) + 200LL) & 1) != 0) {
    v3 = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ == 0) {
      return result;
    }
    v4 = game_ProcFadeView_instance_ +
         ((unsigned __int64)*(unsigned __int8*)(game_ProcFadeView_instance_ +
                                                480)
          << 6);
    if (*(float*)(v4 + 172) != *(float*)(v4 + 168) ||
        (v5 = v4 + 160,
         LANES128_OF(((__n128 (*)(unsigned __int64)) *
                      (_QWORD*)(*(_QWORD*)(v4 + 160) + 16LL))(v4 + 160))
                 .n128_f32[3] != 1.0f)) {
      v1 = 0.5f;
      result = v3;
      v2 = GameData_212c960;
      return game_809dc0(result, v2, v1);
    }
    if (*(float*)(v5 + 12) == *(float*)(v5 + 8)) {
      (*(void (**)(unsigned __int64))(*(_QWORD*)v5 + 16LL))(v5);
    }
    else {
      v6 = *(_OWORD*)(v5 + 48);
    }
    v7 = v6;
    return game_809dc0(v3, &v7, 0.5f);
  }
  else if ((*(_BYTE*)(*(_QWORD*)(result + 16) + 200LL) & 2) != 0) {
    result = game_ProcFadeView_instance_;
    if (game_ProcFadeView_instance_ != 0) {
      v1 = 0.5f;
      v2 = GameData_212c958;
      return game_809dc0(result, v2, v1);
    }
  }
  return result;
}

__attribute__((swiftcall)) void

game_facility_SceneCameraWorkUpdater_CommitCameraParamLinear_lambda0_Invoke(
    PSEUDO_X8 x8_, unsigned __int64 result)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;

  v2 = *(_QWORD*)(result + 8);
  if (v2 != 0) {
    SceneCameraWorkUpdater_1453690(a2, *(_QWORD*)(*(_QWORD*)(v2 + 40) + 8LL),
                                   (char**)(v2 + 48), (char**)(v2 + 56));
    return;
  }
  *a2 = 0;
  a2[1] = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

game_facility_SceneCameraWorkUpdater_CommitCameraParamLinear_lambda1_Invoke(
    PSEUDO_X8 x8_, unsigned __int64 result)
{
  _QWORD* a2 = (_QWORD*)PSEUDO_X8_VALUE(x8_);
  __int64 v2;

  v2 = *(_QWORD*)(result + 8);
  if (v2 != 0) {
    SceneCameraWorkUpdater_1453690(a2, *(_QWORD*)(*(_QWORD*)(v2 + 88) + 8LL),
                                   (char**)(v2 + 96), (char**)(v2 + 104));
    return;
  }
  *a2 = 0;
  a2[1] = 0;
  {
    result;
    return;
  }
}

__attribute__((swiftcall)) void

game_facility_SceneCameraWorkUpdater_StateTickSpline_Tick_lambda0_Invoke(
    PSEUDO_X8 x8_, float32x4_t* a1)
{
  __int64* a2 = (__int64*)PSEUDO_X8_VALUE(x8_);
  unsigned __int32 v3;
  float32x4_t v4;
  float32x4_t v5;
  float32x4_t v7;
  int8x16_t v8;
  float32x4_t v9;
  float32x4_t v10;
  int8x16_t v11;
  float32x4_t v12;
  float32x4_t v13;
  int8x16_t v14;
  float32x4_t v15;
  __int64 v16;
  float32x4_t v17;
  __int64* v18;
  _QWORD* v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  __int64* v26;
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
  int v43;
  __int64 v44;
  float32x4_t v45;
  float32x4_t v46;
  float32x4_t v47;

  v3 = LANES128(a1[3]).n128_u32[0];
  v5 = a1[1];
  v4 = a1[2];
  if ((atomic_load_explicit((atomic_uchar* volatile)&GameData_21a6190,
                            memory_order_acquire) &
       1) == 0) {
    v45 = v5;
    v47 = v4;
    v43 = __cxa_guard_acquire(&GameData_21a6190);
    v5 = v45;
    v4 = v47;
    if (v43 != 0) {
      v44 = *((_QWORD*)GameData_212c558 + 1);
      *(_QWORD*)&GameData_21a6180 = *(_QWORD*)GameData_212c558;
      *((_QWORD*)&GameData_21a6180 + 1) = v44;
      __cxa_guard_release(&GameData_21a6190);
      v5 = v45;
      v4 = v47;
    }
  }
  v7 = vsubq_f32(v4, v5);
  v8 = vmulq_f32(v7, v7);
  LANES128(v8).n128_u64[0] =
      LANES64_OF(
          vadd_f32(COERCE_AS(float32x2_t,
                             LANES128_OF(vextq_s8(v8, v8, 8u)).n128_u64[0]),
                   COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  LANES128(v8).n128_u64[0] =
      LANES64_OF(vpadd_f32(COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0]),
                           COERCE_AS(float32x2_t, LANES128(v8).n128_u64[0])))
          .n64_u64[0];
  LANES128(v8).n128_u64[1] = LANES128(v8).n128_u64[0];
  v9 = vrsqrteq_f32(v8);
  v10 = vmulq_f32(v9, vrsqrtsq_f32(v9, vmulq_f32(v8, v9)));
  v11 = vbicq_s8(
      vmulq_f32(v7, vmulq_f32(v10, vrsqrtsq_f32(v10, vmulq_f32(v8, v10)))),
      vceqzq_f32(v8));
  LANES128(v10).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v10).n128_i8[8] =
      vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v13 = vmulq_f32(v10, v12);
  LANES128(v12).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v12).n128_i8[8] =
      vqtbl1_s8(v11, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  LANES128(v11).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                           COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v11).n128_i8[8] =
      vqtbl1_s8(COERCE_AS(int8x16_t, GameData_21a6180),
                COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v14 = vmlsq_f32(v13, v11, v12);
  LANES128(v11).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xB0A090807060504LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v11).n128_i8[8] =
      vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C03020100LL));
  v15 = vmulq_f32(v12, v11);
  LANES128(v11).n128_u64[0] =
      LANES64_OF(vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0x30201000B0A0908LL)))
          .n64_u64[0];
  *(int8x8_t*)&LANES128(v11).n128_i8[8] =
      vqtbl1_s8(v14, COERCE_AS(int8x8_t, 0xF0E0D0C07060504LL));
  v46 = vmlsq_f32(v15, v10, v11);
  v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                       432, 16, 0);
  v17 = a1[2];
  *(float32x4_t*)(v16 + 48) = a1[1];
  *(float32x4_t*)(v16 + 64) = v17;
  v18 = GameData_212e460[0];
  *(_QWORD*)(v16 + 112) = 1065353216;
  v19 = GameData_212c2a0;
  *(_QWORD*)(v16 + 132) = 0x4210000042480000LL;
  *(_QWORD*)(v16 + 140) = 0x4180000041C00000LL;
  *(_QWORD*)(v16 + 148) = 1091567616;
  *(_QWORD*)(v16 + 168) = 1092616192;
  v20 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v19);
  v21 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v19 + 8);
  *(_QWORD*)v16 = v18 + 2;
  *(_QWORD*)(v16 + 8) = 0;
  *(_QWORD*)(v16 + 208) = v20;
  *(_QWORD*)(v16 + 216) = v21;
  v22 = v19[1];
  *(_QWORD*)(v16 + 192) = *v19;
  *(_QWORD*)(v16 + 200) = v22;
  v23 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v19);
  *(_QWORD*)(v16 + 240) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v19);
  *(_QWORD*)(v16 + 248) = v23;
  v24 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v19);
  v25 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v19 + 8);
  *(_QWORD*)(v16 + 224) = v24;
  *(_QWORD*)(v16 + 232) = v25;
  v26 = (__int64*)GameData_212c2b0;
  *(_QWORD*)(v16 + 16) = 0;
  *(_DWORD*)(v16 + 176) = 0;
  *(_QWORD*)(v16 + 408) = 0;
  *(_QWORD*)(v16 + 416) = 0;
  *(_QWORD*)(v16 + 384) = 0;
  *(_QWORD*)(v16 + 392) = 0;
  a2[1] = v16;
  v27 = *(__int64*)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v26);
  v29 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v26);
  v28 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v26 + 8);
  v31 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v26);
  v30 = *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[2] + (_QWORD)v26);
  v32 = *v26;
  v34 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v26);
  v33 = *(_QWORD*)((char*)((char*)0x20LL) + (_QWORD)v26 + 8);
  *(_QWORD*)(v16 + 272) =
      *(_UNKNOWN**)((char*)((_UNKNOWN**)0x8LL) + (_QWORD)v26 + 8);
  *(_QWORD*)(v16 + 280) = v28;
  v35 = *v26;
  v36 = v26[1];
  *(_QWORD*)(v16 + 320) = v32;
  *(_QWORD*)(v16 + 328) = v27;
  *(_QWORD*)(v16 + 424) = 1023;
  *(_QWORD*)(v16 + 392) = 1023;
  *(_QWORD*)(v16 + 400) = 0;
  *(_QWORD*)(v16 + 256) = v35;
  *(_QWORD*)(v16 + 264) = v36;
  v37 = *(__int64*)((char*)(*(__int64 (*)[2])0x28LL) + (_QWORD)v26);
  *(_QWORD*)(v16 + 304) =
      *(__int64*)((char*)&(*(__int64 (*)[2])0x28LL)[1] + (_QWORD)v26);
  *(_QWORD*)(v16 + 312) = v30;
  v39 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v26 + 8);
  v38 = *(_QWORD*)((char*)((__int128*)0x10LL) + (_QWORD)v26 + 16);
  v40 = *(__int64*)((char*)((_UNKNOWN**)0x38LL) + (_QWORD)v26);
  *(_QWORD*)(v16 + 352) = v34;
  *(_QWORD*)(v16 + 360) = v37;
  *(_QWORD*)(v16 + 368) = v31;
  *(_QWORD*)(v16 + 376) = v40;
  *(_QWORD*)(v16 + 288) = v38;
  *(_QWORD*)(v16 + 296) = v33;
  *(_QWORD*)(v16 + 336) = v29;
  *(_QWORD*)(v16 + 344) = v39;
  *(_BYTE*)(v16 + 164) = 1;
  *(_BYTE*)(v16 + 165) = 1;
  *(_QWORD*)(v16 + 156) = 0x469C40003DCCCCCDLL;
  v41 = GameData_212e438;
  *(_QWORD*)(v16 + 40) = 0;
  *(_DWORD*)(v16 + 128) = v3;
  *(_QWORD*)(v16 + 120) = 0;
  *(float32x4_t*)(v16 + 80) = v46;
  *(_OWORD*)(v16 + 96) = (__typeof__(*(_OWORD*)(v16 + 96))){0};
  *(_QWORD*)(v16 + 32) = v41 + 16;
  v16 += 32;
  *a2 = v16;
  {
    GameRoutine_b3aee0(v16);
    return;
  }
}

#pragma GCC visibility pop
