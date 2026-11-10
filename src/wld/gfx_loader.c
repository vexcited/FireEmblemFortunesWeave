#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

_QWORD* GameRoutine_c46f00(_QWORD* result, unsigned __int64);
__int64 GameRoutine_5fc1f0(_QWORD);
__int64 GameRoutine_634d80(_QWORD, _QWORD);
__int64 GameRoutine_a934d0(_QWORD, _QWORD);
__int64 GameRoutine_b86ad0(_QWORD);
__int64 GameRoutine_bdff40(_QWORD, _QWORD);
__int64 GameRoutine_c3f7a0(_QWORD);
__int64 GameRoutine_c4a5a0(_QWORD);
__int64 Manager_c47290(_QWORD);
__int64 Manager_c473c0(_QWORD, _QWORD);
__int64 Manager_c475a0(_QWORD, _QWORD);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 memcpy(_QWORD, _QWORD, _QWORD);
__int64 memset(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(_QWORD);
extern __int64 (*GameData_1fbf780[])();
extern __int64 (*GameData_1fd20c0[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64 game_g_frame_clock;
void __attribute__((noreturn)) GameRoutine_60a210(_QWORD);
void __attribute__((noreturn)) GameRoutine_60a310(_QWORD, _QWORD);
void __attribute__((noreturn)) GameRoutine_c47250(_QWORD);
void __attribute__((noreturn)) GameRoutine_c47270(_QWORD);
void __attribute__((noreturn)) GameRoutine_c47790(_QWORD);
__int64 wld_GfxLoader_loadFile(__int64 a1, unsigned __int8* a2, unsigned int a3,
                               __int64 a4, char a5);
__int64 GfxLoader_c46500(__int64 a1, __int64 a2);
__int64 wld_GfxLoader_loadSunPrecomputeData_lambda0_Invoke(__int64 result,
                                                           __int64 a2);
__int64 wld_GfxLoader_loadCloudTexture_lambda0_Invoke(__int64 result,
                                                      __int64* a2);
__int64 wld_GfxLoader_loadFogTexture_lambda0_Invoke(__int64 result,
                                                    __int64* a2);
_QWORD* wld_GfxLoader_loadFile_lambda0_Clone(__int64 a1);
__int64 wld_GfxLoader_loadFile_lambda0_Invoke(__int64 a1, __int64* a2);

__int64 wld_GfxLoader_loadFile(__int64 a1, unsigned __int8* a2, unsigned int a3,
                               __int64 a4, char a5)
{
  _QWORD* v8;
  __int64 v9;
  unsigned __int64 v10;
  __int64 result;
  unsigned __int64 v12;
  _QWORD* v13;
  _QWORD* v14;
  __int64 v15;
  __int64 v16;
  _BYTE* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  unsigned __int64 v21;
  bool v22;
  unsigned __int64 v23;
  unsigned __int8* v24;
  unsigned __int64 v25;
  __int64 v26;
  _QWORD* v27;
  _BYTE* v28;
  _QWORD* v29;
  _QWORD* v30;
  __int64 v31;
  _QWORD* v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  unsigned __int64 v37;
  bool v38;
  unsigned __int64 v39;
  unsigned __int64 v40;
  unsigned __int8* v41;
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
  _BYTE v52[32];
  _BYTE* v53;
  _BYTE v54[32];
  _BYTE* v55;
  _QWORD v56[4];
  _QWORD* v57;

  v8 = (_QWORD*)(a1 + 24LL * a3 + 536);
  if (*v8 != 0) {
    v9 = *(_QWORD*)(a1 + 24LL * a3 + 552);
    *(_QWORD*)(a1 + 24LL * a3 + 544) = 0;
    *(_QWORD*)(a1 + 24LL * a3 + 552) = 0;
    if (v9 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v9 + 8),
                                    0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v9 + 16LL))(v9);
      std___1___shared_weak_count___release_weak(v9);
    }
    GameRoutine_634d80(*(_QWORD*)(*v8 + 8LL), *v8);
    *v8 = 0;
  }
  v10 = *a2;
  result = *(_QWORD*)(a4 + 32);
  if ((v10 & 1) != 0) {
    v12 = *((_QWORD*)a2 + 1);
  }
  else {
    v12 = v10 >> 1;
  }
  if (v12 == 0) {
    if (result != 0) {
      v56[0] = 0;
      return (*(__int64 (**)(__int64, _QWORD*))(*(_QWORD*)result + 48LL))(
          result, v56);
    }
    return result;
  }
  if (result == 0) {
    v19 = v8[2];
    v8[1] = 0;
    v8[2] = 0;
    if (v19 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v19 + 8),
                                     0xFFFFFFFFFFFFFFFFLL) == 0) {
      (*(void (**)(__int64))(*(_QWORD*)v19 + 16LL))(v19);
      std___1___shared_weak_count___release_weak(v19);
    }
    v20 = *(_QWORD*)(game_g_frame_clock + 13432);
    v21 = *a2;
    v22 = (v21 & 1) == 0;
    v23 = v21 >> 1;
    if (v22) {
      v24 = a2 + 1;
    }
    else {
      v24 = *((unsigned __int8**)a2 + 2);
    }
    if (v22) {
      v25 = v23;
    }
    else {
      v25 = *((_QWORD*)a2 + 1);
    }
    if ((a5 & 1) != 0) {
      v44 = 0;
      v45 = 0;
      *v8 = (*(__int64 (**)(__int64, unsigned __int8*, unsigned __int64,
                            __int64*))(*(_QWORD*)v20 + 40LL))(v20, v24, v25,
                                                              &v44);
      result = v45;
      if (v45 == 0) {
        return result;
      }
    }
    else {
      v46 = 0;
      v47 = 0;
      *v8 = (*(__int64 (**)(__int64, unsigned __int8*, unsigned __int64,
                            __int64*, __int64))(*(_QWORD*)v20 + 16LL))(
          v20, v24, v25, &v46, 255);
      result = v47;
      if (v47 == 0) {
        return result;
      }
    }
    return std___1___shared_weak_count___release_weak(result);
  }
  v13 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  v14 = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 80, 16, 0);
  v14[2] = 0;
  v15 = v8[2];
  v14[8] = 0;
  *v14 = GameData_1fbf780;
  v14[1] = 0;
  v8[1] = v14 + 4;
  v8[2] = v14;
  if (v15 == 0 || atomic_fetch_add((atomic_ullong* volatile)(v15 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) != 0) {
    v16 = *(_QWORD*)(a4 + 32);
    if (v16 != 0) {
      goto LABEL_14;
    }
  LABEL_34:
    v18 = v8[1];
    v53 = nullptr;
    goto LABEL_35;
  }
  (*(void (**)(__int64))(*(_QWORD*)v15 + 16LL))(v15);
  std___1___shared_weak_count___release_weak(v15);
  v16 = *(_QWORD*)(a4 + 32);
  if (v16 == 0) {
    goto LABEL_34;
  }
LABEL_14:
  if (v16 == a4) {
    v53 = v52;
    (*(void (**)(__int64, _BYTE*))(*(_QWORD*)v16 + 24LL))(v16, v52);
    v17 = v53;
    v18 = v8[1];
    if (v53 != nullptr) {
      goto LABEL_37;
    }
  LABEL_35:
    v26 = *v13;
    v55 = nullptr;
    v27 = (_QWORD*)fw_memory_HeapManager_Allocate(v26, 64, 16, 0);
    v27[6] = 0;
    *v27 = GameData_1fd20c0;
    goto LABEL_45;
  }
  v17 = (_BYTE*)(*(__int64 (**)(__int64))(*(_QWORD*)v16 + 16LL))(v16);
  v53 = v17;
  v18 = v8[1];
  if (v17 == nullptr) {
    goto LABEL_35;
  }
LABEL_37:
  if (v17 == v52) {
    v55 = v54;
    (*(void (**)(_BYTE*, _BYTE*))(*(_QWORD*)v17 + 24LL))(v17, v54);
    v28 = v55;
  }
  else {
    v28 = (_BYTE*)(*(__int64 (**)(_BYTE*))(*(_QWORD*)v17 + 16LL))(v17);
    v55 = v28;
  }
  v27 = (_QWORD*)fw_memory_HeapManager_Allocate(*v13, 64, 16, 0);
  *v27 = GameData_1fd20c0;
  v29 = v27 + 2;
  if (v28 != nullptr) {
    if (v28 == v54) {
      v27[6] = v29;
      v32 = v27;
      (*(void (**)(_BYTE*))(*(_QWORD*)v28 + 24LL))(v28);
      v27 = v32;
    }
    else {
      v30 = v27;
      v31 = (*(__int64 (**)(_BYTE*, _QWORD*))(*(_QWORD*)v28 + 16LL))(v28, v29);
      v27 = v30;
      v30[6] = v31;
    }
  }
  else {
    v27[6] = 0;
  }
LABEL_45:
  v57 = v27;
  GameRoutine_a934d0(v56, v18);
  if (v57 == v56) {
    v33 = 32;
  }
  else {
    if (v57 == nullptr) {
      goto LABEL_50;
    }
    v33 = 40;
  }
  (*(void (**)(__int64))(*v57 + v33))((__int64)v57);
LABEL_50:
  if (v55 == v54) {
    v34 = 32;
  }
  else {
    if (v55 == nullptr) {
      goto LABEL_55;
    }
    v34 = 40;
  }
  (*(void (**)(__int64))(*(_QWORD*)v55 + v34))((__int64)v55);
LABEL_55:
  if (v53 == v52) {
    v35 = 32;
    goto LABEL_59;
  }
  if (v53 != nullptr) {
    v35 = 40;
  LABEL_59:
    (*(void (**)(__int64))(*(_QWORD*)v53 + v35))((__int64)v53);
  }
  v36 = *(_QWORD*)(game_g_frame_clock + 13432);
  v37 = *a2;
  v38 = (v37 & 1) == 0;
  v39 = v37 >> 1;
  if (v38) {
    v40 = v39;
  }
  else {
    v40 = *((_QWORD*)a2 + 1);
  }
  if (v38) {
    v41 = a2 + 1;
  }
  else {
    v41 = *((unsigned __int8**)a2 + 2);
  }
  if ((a5 & 1) != 0) {
    v42 = v8[2];
    v48 = v8[1];
    v49 = v42;
    if (v42 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v42 + 16), 1u,
                                memory_order_relaxed);
    }
    *v8 =
        (*(__int64 (**)(__int64, unsigned __int8*, unsigned __int64, __int64*))(
            *(_QWORD*)v36 + 40LL))(v36, v41, v40, &v48);
    result = v49;
    if (v49 == 0) {
      return result;
    }
    return std___1___shared_weak_count___release_weak(result);
  }
  v43 = v8[2];
  v50 = v8[1];
  v51 = v43;
  if (v43 != 0) {
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v43 + 16), 1u,
                              memory_order_relaxed);
  }
  *v8 = (*(__int64 (**)(__int64, unsigned __int8*, unsigned __int64, __int64*,
                        __int64))(*(_QWORD*)v36 + 16LL))(v36, v41, v40, &v50,
                                                         255);
  result = v51;
  if (v51 != 0) {
    return std___1___shared_weak_count___release_weak(result);
  }
  return result;
}

__int64 GfxLoader_c46500(__int64 a1, __int64 a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64* v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  unsigned int v11;
  unsigned __int64 v12;
  __int64 v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  int v17;
  __int64 v18;
  char v19;
  __int64 v20;
  __int64 v21;
  __int64 v22;
  char v23;
  __int64 v24;
  __int64 v25;
  char v26;
  __int64 v27;
  __int64 v28;
  __int64 v29;
  __int64 v30;
  __int64 v31;
  char v32;
  __int64 v33;
  __int64 v34;
  __int64 v35;
  unsigned __int64 v36;
  unsigned __int64 v37;
  __int64 v38;
  __int64 v39;
  unsigned __int64 v40;
  unsigned __int64 v41;
  unsigned __int64 v42;
  __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 i;
  __int64 v47;
  __int64 v50;
  __int64 v51;
  __int64 v52;
  unsigned __int64 v53;
  _QWORD* v54;

  v2 = (__int64*)a1;
  *(_BYTE*)(*(_QWORD*)(a2 + 360) + 168LL) = *(_BYTE*)(a1 + 96);
  if (*(_BYTE*)(a1 + 136) == 1 &&
      (v3 = *(_QWORD*)(a2 + 360), v4 = *(_QWORD*)(a1 + 100),
       *(_DWORD*)(v3 + 172) = v4, *(_BYTE*)(v3 + 176) = BYTE4(v4),
       (*(_BYTE*)(a1 + 136) & 1) != 0)) {
    v5 = 120;
  }
  else {
    v5 = 144;
  }
  v6 = (__int64*)(*(_QWORD*)(a2 + 360) + v5);
  v7 = *v6;
  v8 = v6[1];
  if (*v6 != v8) {
    do {
      v8 -= 232;
      a1 = Manager_c47290(v8);
    } while (v8 != v7);
  }
  v6[1] = v7;
  v9 = *v2;
  if (v2[1] != *v2) {
    v10 = 0;
    v11 = 0;
    do {
      v13 = v9 + 232 * v10;
      if (*(_BYTE*)(v13 + 176) == 1) {
        *(_BYTE*)(v13 + 176) = 0;
      }
      if (*(_BYTE*)(v13 + 224) == 1) {
        *(_BYTE*)(v13 + 224) = 0;
      }
      if (*(_BYTE*)(v13 + 200) == 1) {
        *(_BYTE*)(v13 + 200) = 0;
      }
      v14 = v2[3];
      v15 = *(_QWORD*)(v14 + 8 * v10);
      if (v15 == 0) {
        goto LABEL_29;
      }
      a1 = *(_QWORD*)(v15 + 592);
      if (a1 == 0) {
        goto LABEL_29;
      }
      a1 = GameRoutine_5fc1f0(a1);
      if (a1 == 0) {
        goto LABEL_29;
      }
      a1 = GameRoutine_5fc1f0(*(_QWORD*)(*(_QWORD*)(v14 + 8 * v10) + 592LL));
      v16 = **(_QWORD**)(a1 + 40);
      v17 = *(_DWORD*)(v16 + 144);
      v18 = *(_QWORD*)(*(_QWORD*)(v16 + 128) + 8LL);
      if ((*(_BYTE*)(v13 + 176) & 1) == 0) {
        *(_BYTE*)(v13 + 176) = 1;
      }
      *(_QWORD*)(v13 + 160) = v18;
      *(_DWORD*)(v13 + 168) = v17;
      if (*(_QWORD*)(v2[6] + 8 * v10) != 0 ||
          *(int*)(*(_QWORD*)(a1 + 56) + 4LL) < 2) {
        if (*(_BYTE*)(v13 + 224) != 1) {
          goto LABEL_29;
        }
        v23 = 0;
      }
      else {
        v19 = *(_BYTE*)(v13 + 224);
        v20 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 8LL);
        v21 = *(_QWORD*)(v20 + 144);
        v22 = *(_QWORD*)(*(_QWORD*)(v20 + 128) + 8LL);
        *(_DWORD*)(v13 + 216) = v21;
        *(_QWORD*)(v13 + 208) = v22;
        if ((v19 & 1) != 0) {
          goto LABEL_29;
        }
        v23 = 1;
      }
      *(_BYTE*)(v13 + 224) = v23;
    LABEL_29:
      v24 = v2[6];
      v25 = *(_QWORD*)(v24 + 8 * v10);
      if (v25 != 0) {
        a1 = *(_QWORD*)(v25 + 592);
        if (a1 != 0) {
          a1 = GameRoutine_5fc1f0(a1);
          if (a1 != 0) {
            a1 = GameRoutine_5fc1f0(
                *(_QWORD*)(*(_QWORD*)(v24 + 8 * v10) + 592LL));
            v26 = *(_BYTE*)(v13 + 224);
            v27 = *(_QWORD*)(*(_QWORD*)(a1 + 40) +
                             8LL * (*(_DWORD*)(*(_QWORD*)(a1 + 56) + 4LL) > 1));
            v28 = *(_QWORD*)(v27 + 144);
            v29 = *(_QWORD*)(*(_QWORD*)(v27 + 128) + 8LL);
            *(_DWORD*)(v13 + 216) = v28;
            *(_QWORD*)(v13 + 208) = v29;
            if ((v26 & 1) == 0) {
              *(_BYTE*)(v13 + 224) = 1;
            }
          }
        }
      }
      v30 = v2[9];
      v31 = *(_QWORD*)(v30 + 8 * v10);
      if (v31 != 0) {
        a1 = *(_QWORD*)(v31 + 592);
        if (a1 != 0) {
          a1 = GameRoutine_5fc1f0(a1);
          if (a1 != 0) {
            a1 = GameRoutine_5fc1f0(
                *(_QWORD*)(*(_QWORD*)(v30 + 8 * v10) + 592LL));
            v32 = *(_BYTE*)(v13 + 200);
            v33 = **(_QWORD**)(a1 + 40);
            v34 = *(_QWORD*)(v33 + 144);
            v35 = *(_QWORD*)(*(_QWORD*)(v33 + 128) + 8LL);
            *(_DWORD*)(v13 + 192) = v34;
            *(_QWORD*)(v13 + 184) = v35;
            if ((v32 & 1) == 0) {
              *(_BYTE*)(v13 + 200) = 1;
            }
          }
        }
      }
      v37 = v6[1];
      v36 = v6[2];
      if (v37 < v36) {
        a1 = Manager_c473c0(v6[1], v13);
        v12 = v37 + 232;
      }
      else {
        v38 = *v6;
        v39 = v37 - *v6;
        v40 = 0x34F72C234F72C235LL * (v39 >> 3) + 1;
        if (v40 > 0x11A7B9611A7B961LL) {
          GameRoutine_c47790(a1);
        }
        v54 = v6 + 2;
        v41 = 0x34F72C234F72C235LL * ((__int64)(v36 - v38) >> 3);
        if (2 * v41 > v40) {
          v40 = 2 * v41;
        }
        if (v41 >= 0x8D3DCB08D3DCB0LL) {
          v42 = 0x11A7B9611A7B961LL;
        }
        else {
          v42 = v40;
        }
        if (v42 != 0) {
          if (v42 > 0x11A7B9611A7B961LL) {
            GameRoutine_60a210(a1);
          }
          v43 = fw_memory_HeapManager_Allocate(
              *(_QWORD*)fw_memory_g_heap_manager_ptr, 232 * v42, 16, 0);
        }
        else {
          v43 = 0;
        }
        v44 = v43 + v39;
        v50 = v43;
        v51 = v44;
        v53 = v43 + 232 * v42;
        Manager_c473c0(v44, v13);
        v52 = v44 + 232;
        a1 = Manager_c475a0(v6, &v50);
        v12 = v6[1];
        v45 = v51;
        for (i = v52; i != v45; a1 = Manager_c47290(i)) {
          i -= 232;
        }
        if (v50 != 0) {
          v47 = 128;
          if (*(_QWORD*)(*(_QWORD*)fw_memory_g_heap_manager_ptr + 200LL) == 0) {
            v47 = 56;
          }
          a1 = nn_mem_StandardAllocator_Free(
              *(_QWORD*)fw_memory_g_heap_manager_ptr + v47);
        }
      }
      v6[1] = v12;
      v9 = *v2;
      v10 = ++v11;
    } while (0x34F72C234F72C235LL * ((v2[1] - *v2) >> 3) >
             (unsigned __int64)v11);
  }
  return GameRoutine_b86ad0(a2);
}

__int64 wld_GfxLoader_loadSunPrecomputeData_lambda0_Invoke(__int64 result,
                                                           __int64 a2)
{
  __int64 v2;
  _QWORD* v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  double v9;
  double v10;
  int v11;
  float v12;
  __int64 v13;
  unsigned __int64 v14;
  unsigned __int64 v15;
  __int64 v16;
  __int64 v17;
  __int64 v18;
  _QWORD* v19;
  __int64 v20;
  unsigned __int64 v21;
  unsigned __int64 v22;
  __int64 v23;
  __int64 v24;
  __int64 v25;
  unsigned __int64 v26;
  unsigned __int64 v27;
  __int64 v28;
  __int64 v29;
  unsigned __int64 v30;
  __int64 v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v35;
  __int64 v36;
  __int64 v37;
  __int64 v38;
  __int64 v39;
  __int64 v40;
  __int64 v41;
  unsigned __int64 v42;
  unsigned __int64 v43;
  __int64 v44;
  __int64 v45;
  __int64 v46;
  unsigned __int64 v47;
  unsigned __int64 v48;
  __int64 v49;
  __int64 v50;
  unsigned __int64 v51;
  __int64 v52;
  __int64 v53;
  unsigned __int64 v54;
  __int64 v55;
  __int64 v56;
  __int64 v57;
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
  __int64 v69;

  v2 = *(_QWORD*)(result + 8);
  v3 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (*(_QWORD*)a2 != 0) {
    v4 = *(_QWORD*)(*(_QWORD*)a2 + 592LL);
    if (v4 != 0) {
      v8 = fw_memory_HeapManager_Allocate(
          *(_QWORD*)fw_memory_g_heap_manager_ptr, 248, 16, 0);
      *(_QWORD*)(v8 + 96) = 0;
      *(_QWORD*)(v8 + 112) = 0;
      *(_QWORD*)(v8 + 120) = 0;
      *(_QWORD*)(v8 + 128) = 0;
      *(_QWORD*)(v8 + 136) = 0;
      *(_QWORD*)(v8 + 16) = 0x4022000000000000LL;
      *(_QWORD*)(v8 + 24) = 0x100000000LL;
      *(_QWORD*)(v8 + 32) = 1;
      *(_QWORD*)(v8 + 40) = 0;
      *(_QWORD*)(v8 + 64) = 0x4022000000000000LL;
      *(_QWORD*)(v8 + 72) = 0x100000000LL;
      *(_QWORD*)(v8 + 80) = 1;
      *(_QWORD*)(v8 + 88) = 0;
      *(_QWORD*)(v8 + 144) = 0;
      *(_QWORD*)(v8 + 152) = 0;
      *(_QWORD*)(v8 + 160) = 0;
      *(_QWORD*)(v8 + 168) = 0;
      *(_QWORD*)(v8 + 176) = 0;
      *(_QWORD*)(v8 + 184) = 0;
      *(_QWORD*)(v8 + 192) = 0;
      *(_QWORD*)(v8 + 200) = 0;
      *(_QWORD*)(v8 + 208) = 0;
      *(_QWORD*)(v8 + 216) = 0;
      *(_QWORD*)(v8 + 224) = 0;
      *(_QWORD*)(v8 + 232) = 0;
      *(_QWORD*)(v8 + 240) = 0;
      *(_QWORD*)v8 = 0x40417E353F7CED91LL;
      *(_QWORD*)(v8 + 8) = 0x4060F8474538EF35LL;
      *(_QWORD*)(v8 + 48) = 0x40417E353F7CED91LL;
      *(_QWORD*)(v8 + 56) = 0x4060F8474538EF35LL;
      *(_QWORD*)(v8 + 104) = 0;
      result = v8 + 104;
      if (*(_DWORD*)v4 != 4) {
        goto LABEL_57;
      }
      *(double*)v8 = *(float*)(v4 + 16);
      v9 = *(float*)(v4 + 20);
      *(double*)(v8 + 8) = v9;
      v10 = *(float*)(v4 + 24);
      *(double*)(v8 + 16) = v10;
      v11 = *(_DWORD*)(v4 + 32);
      *(_DWORD*)(v8 + 24) = v11;
      *(_DWORD*)(v8 + 28) = *(_DWORD*)(v4 + 36);
      *(_DWORD*)(v8 + 32) = *(_DWORD*)(v4 + 40);
      v12 = *(float*)(v4 + 28);
      *(double*)(v8 + 64) = v10;
      *(_DWORD*)(v8 + 72) = v11;
      *(double*)(v8 + 48) = v12;
      *(double*)(v8 + 56) = v9;
      *(_DWORD*)(v8 + 76) = *(_DWORD*)(v4 + 44);
      *(_DWORD*)(v8 + 80) = *(_DWORD*)(v4 + 48);
      LODWORD(v10) = *(_DWORD*)(v4 + 56);
      *(_DWORD*)(v8 + 96) = *(_DWORD*)(v4 + 52);
      *(_DWORD*)(v8 + 100) = LODWORD(v10);
      if (*(_DWORD*)(v4 + 4) != 0) {
        GameRoutine_c3f7a0(result);
        v13 = *(_QWORD*)(v8 + 128);
        v14 = *(int*)(v4 + 4);
        v15 = 0x4EC4EC4EC4EC4EC5LL * ((*(_QWORD*)(v8 + 136) - v13) >> 2);
        if (v14 <= v15) {
          if (v14 < v15) {
            *(_QWORD*)(v8 + 136) = v13 + 52LL * (int)v14;
          }
        }
        else {
          GameRoutine_c46f00((_QWORD*)(v8 + 128), v14 - v15);
        }
      }
      v20 = *(_QWORD*)(v8 + 152);
      v19 = (_QWORD*)(v8 + 152);
      v21 = *(int*)(v4 + 8);
      v22 = 0x4EC4EC4EC4EC4EC5LL * ((*(_QWORD*)(v8 + 160) - v20) >> 2);
      if (v21 <= v22) {
        if (v21 < v22) {
          *(_QWORD*)(v8 + 160) = v20 + 52LL * (int)v21;
        }
      }
      else {
        v19 = GameRoutine_c46f00(v19, v21 - v22);
        v21 = *(int*)(v4 + 8);
      }
      v23 = *(_QWORD*)(v8 + 176);
      v24 = *(_QWORD*)(v8 + 184);
      v25 = v24 - v23;
      v26 = (v24 - v23) >> 4;
      v27 = v21 - v26;
      if (v21 <= v26) {
        if (v21 >= v26) {
          goto LABEL_34;
        }
        v40 = v23 + 16 * v21;
      }
      else {
        v28 = *(_QWORD*)(v8 + 192);
        if (v27 > (v28 - v24) >> 4) {
          if (v21 >> 60 != 0) {
            GameRoutine_c47250(v19);
          }
          v29 = v28 - v23;
          if (v29 >> 3 > v21) {
            v21 = v29 >> 3;
          }
          if ((unsigned __int64)v29 >= 0x7FFFFFFFFFFFFFF0LL) {
            v30 = 0xFFFFFFFFFFFFFFFLL;
          }
          else {
            v30 = v21;
          }
          if (v30 >> 60 != 0) {
            goto LABEL_59;
          }
          v31 = fw_memory_HeapManager_Allocate(*v3, 16 * v30, 16, 0);
          v32 = v31 + v25;
          v33 = v31 + 16 * v30;
          memset(v31 + v25, 0, 16 * v27, v34, v35, v36);
          v37 = v32 + 16 * v27;
          v38 = v32 - 16 * v26;
          memcpy(v38, v23, v25);
          *(_QWORD*)(v8 + 176) = v38;
          *(_QWORD*)(v8 + 184) = v37;
          *(_QWORD*)(v8 + 192) = v33;
          if (v23 != 0) {
            v39 = 128;
            if (*(_QWORD*)(*v3 + 200LL) == 0) {
              v39 = 56;
            }
            nn_mem_StandardAllocator_Free(*v3 + v39);
          }
        LABEL_34:
          v41 = *(_QWORD*)(v8 + 200);
          v19 = (_QWORD*)(v8 + 200);
          v42 = *(int*)(v4 + 12);
          v43 = (*(_QWORD*)(v8 + 208) - v41) >> 2;
          if (v42 <= v43) {
            if (v42 < v43) {
              *(_QWORD*)(v8 + 208) = v41 + 4 * v42;
            }
          }
          else {
            v19 = (_QWORD*)GameRoutine_bdff40(v19, v42 - v43);
            v42 = *(int*)(v4 + 12);
          }
          v44 = *(_QWORD*)(v8 + 224);
          v45 = *(_QWORD*)(v8 + 232);
          v46 = v45 - v44;
          v47 = (v45 - v44) >> 3;
          v48 = v42 - v47;
          if (v42 <= v47) {
            if (v42 >= v47) {
              goto LABEL_55;
            }
            v61 = v44 + 8 * v42;
          }
          else {
            v49 = *(_QWORD*)(v8 + 240);
            if (v48 > (v49 - v45) >> 3) {
              if (v42 >> 61 != 0) {
                GameRoutine_c47270(v19);
              }
              v50 = v49 - v44;
              if (v50 >> 2 > v42) {
                v42 = v50 >> 2;
              }
              if ((unsigned __int64)v50 >= 0x7FFFFFFFFFFFFFF8LL) {
                v51 = 0x1FFFFFFFFFFFFFFFLL;
              }
              else {
                v51 = v42;
              }
              if (v51 >> 61 == 0) {
                v52 = fw_memory_HeapManager_Allocate(*v3, 8 * v51, 16, 0);
                v53 = v52 + v46;
                v54 = v52 + 8 * v51;
                memset(v52 + v46, 0, 8 * v48, v55, v56, v57);
                v58 = v53 + 8 * v48;
                v59 = v53 - 8 * v47;
                memcpy(v59, v44, v46);
                *(_QWORD*)(v8 + 224) = v59;
                *(_QWORD*)(v8 + 232) = v58;
                *(_QWORD*)(v8 + 240) = v54;
                if (v44 != 0) {
                  v60 = 128;
                  if (*(_QWORD*)(*v3 + 200LL) == 0) {
                    v60 = 56;
                  }
                  nn_mem_StandardAllocator_Free(*v3 + v60);
                }
                goto LABEL_55;
              }
            LABEL_59:
              GameRoutine_60a210(v19);
            }
            memset(*(_QWORD*)(v8 + 232), 0, 8 * v48, v5, v6, v7);
            v61 = v45 + 8 * v48;
          }
          *(_QWORD*)(v8 + 232) = v61;
        LABEL_55:
          memcpy(*(_QWORD*)(v8 + 104), v4 + 64, 4LL * *(int*)(v4 + 4));
          v62 = *(int*)(v4 + 4);
          v63 = v4 + 64 + 4 * v62;
          memcpy(*(_QWORD*)(v8 + 128), v63, 52LL * (int)v62);
          v64 = v63 + 52LL * *(int*)(v4 + 4);
          memcpy(*(_QWORD*)(v8 + 152), v64, 52LL * *(int*)(v4 + 8));
          v65 = *(int*)(v4 + 8);
          v66 = v64 + 52LL * (int)v65;
          result = memcpy(*(_QWORD*)(v8 + 176), v66, 16 * v65);
          v67 = *(unsigned int*)(v4 + 12);
          if ((int)v67 >= 1) {
            v68 = v66 + 16LL * *(int*)(v4 + 8);
            memcpy(*(_QWORD*)(v8 + 200), v68, 4 * v67);
            result = memcpy(*(_QWORD*)(v8 + 224), v68 + 4LL * *(int*)(v4 + 12),
                            8LL * *(int*)(v4 + 12));
          }
        LABEL_57:
          v69 = *(_QWORD*)(*(_QWORD*)v2 + 360LL);
          v17 = *(_QWORD*)(v69 + 184);
          *(_QWORD*)(v69 + 184) = v8;
          if (v17 == 0) {
            return result;
          }
          goto LABEL_8;
        }
        memset(*(_QWORD*)(v8 + 184), 0, 16 * v27, v5, v6, v7);
        v40 = v24 + 16 * v27;
      }
      *(_QWORD*)(v8 + 184) = v40;
      goto LABEL_34;
    }
  }
  v16 = *(_QWORD*)(*(_QWORD*)v2 + 360LL);
  v17 = *(_QWORD*)(v16 + 184);
  *(_QWORD*)(v16 + 184) = 0;
  if (v17 == 0) {
    return result;
  }
LABEL_8:
  GameRoutine_c4a5a0(v17);
  v18 = 128;
  if (*(_QWORD*)(*v3 + 200LL) == 0) {
    v18 = 56;
  }
  return nn_mem_StandardAllocator_Free(*v3 + v18);
}

__int64 wld_GfxLoader_loadCloudTexture_lambda0_Invoke(__int64 result,
                                                      __int64* a2)
{
  __int64 v2;
  __int64 v3;
  __int64 v4;
  int v5;
  __int64 v6;
  __int64 v7;
  __int64 v8;
  __int64 v9;
  __int64 v10;
  __int64 v11;

  v2 = *(_QWORD*)(result + 8);
  v3 = *a2;
  if (*a2 != 0 && (result = *(_QWORD*)(v3 + 592)) != 0 &&
      (result = GameRoutine_5fc1f0(result)) != 0) {
    result = GameRoutine_5fc1f0(*(_QWORD*)(v3 + 592));
    v4 = **(_QWORD**)(result + 40);
    v5 = *(_DWORD*)(v4 + 144);
    v6 = *(_QWORD*)(*(_QWORD*)(v4 + 128) + 8LL);
  }
  else {
    v6 = 0;
    v5 = -1;
  }
  v7 = *(_QWORD*)(*(_QWORD*)v2 + 24LL);
  if (v7 != 0) {
    v8 = *(_QWORD*)(*(_QWORD*)v2 + 16LL);
    v9 = *(_QWORD*)(*(_QWORD*)v2 + 24LL);
    atomic_fetch_add_explicit((atomic_ullong* volatile)(v7 + 16), 1u,
                              memory_order_relaxed);
    v10 = std___1___shared_weak_count_lock(v9);
    result = std___1___shared_weak_count___release_weak(v7);
    if (v10 != 0) {
      if (v8 != 0) {
        v11 = *(_QWORD*)(v8 + 288);
        *(_QWORD*)(v11 + 528) = v6;
        *(_DWORD*)(v11 + 536) = v5;
      }
      if (atomic_fetch_add((atomic_ullong* volatile)(v10 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v10 + 16LL))(v10);
        return std___1___shared_weak_count___release_weak(v10);
      }
    }
  }
  return result;
}

__int64 wld_GfxLoader_loadFogTexture_lambda0_Invoke(__int64 result, __int64* a2)
{
  __int64* v2;
  __int64 v3;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  bool v7;
  __int64 v8;

  v2 = *(__int64**)(result + 8);
  v3 = *a2;
  if (*a2 == 0 || (result = *(_QWORD*)(v3 + 592)) == 0 ||
      (result = GameRoutine_5fc1f0(result)) == 0 ||
      ((result = GameRoutine_5fc1f0(*(_QWORD*)(v3 + 592)),
        v4 = **(_QWORD**)(result + 40), v5 = *(unsigned int*)(v4 + 144),
        (v6 = *(_QWORD*)(*(_QWORD*)(v4 + 128) + 8LL)) != 0)
           ? (v7 = v5 == 0xFFFFFFFFLL)
           : (v7 = true),
       v7)) {
    v6 = v2[123];
    LODWORD(v5) = *((_DWORD*)v2 + 248);
  }
  v8 = *v2;
  *(_QWORD*)(v8 + 400) = v6;
  *(_DWORD*)(v8 + 408) = v5;
  return result;
}

_QWORD* wld_GfxLoader_loadFile_lambda0_Clone(__int64 a1)
{
  _QWORD* result;
  _QWORD* v3;
  _QWORD* v4;
  _QWORD* v5;

  result = (_QWORD*)fw_memory_HeapManager_Allocate(
      *(_QWORD*)fw_memory_g_heap_manager_ptr, 64, 16, 0);
  *result = GameData_1fd20c0;
  v3 = result + 2;
  v4 = *(_QWORD**)(a1 + 48);
  if (v4 != nullptr) {
    if (v4 == (_QWORD*)(a1 + 16)) {
      result[6] = v3;
      v5 = result;
      (*(void (**)(_QWORD* __return_ptr, _QWORD*))(*v4 + 24LL))(v4, v4);
    }
    else {
      v5 = result;
      result[6] = (*(_QWORD * (**)(_QWORD * __return_ptr, _QWORD*, _QWORD*))(
          *v4 + 16LL))(v4, v4, v3);
    }
    return v5;
  }
  else {
    result[6] = 0;
  }
  return result;
}

__int64 wld_GfxLoader_loadFile_lambda0_Invoke(__int64 a1, __int64* a2)
{
  __int64 v2;
  __int64 v4;

  v2 = *(_QWORD*)(a1 + 48);
  v4 = *a2;
  if (v2 == 0) {
    GameRoutine_60a310(0, a2);
  }
  return (*(__int64 (**)(__int64, __int64*))(*(_QWORD*)v2 + 48LL))(v2, &v4);
}

#pragma GCC visibility pop
