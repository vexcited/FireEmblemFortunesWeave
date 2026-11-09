#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 GameRoutine_19887e0(_QWORD, _QWORD);
__int64 GameRoutine_a70ec0(__int64 result, unsigned __int64);
__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 nn_mem_StandardAllocator_Free(_QWORD, _QWORD);
__int64 std___1___shared_weak_count___release_weak(_QWORD);
__int64 std___1___shared_weak_count_lock(void);
extern __int64 (*GameData_1fc0ae0[])();
extern __int64 (*GameData_1fc0b20[])();
extern __int64 (*wld_ModelModule_vtable[])();
extern __int64 fw_memory_g_heap_manager_ptr;
extern __int64* game_g_frame_clock_ptr[3];
__int64 ModelModule_Destructor(__int64 a1);
__int64 ModelModule_Unknown7(__int64 result, long double a2);

__int64 ModelModule_Destructor(__int64 a1)
{
  __int64 v1;
  __int64 v4;
  __int64 v5;
  __int64 v6;
  __int64 v7;
  __int64 v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  __int64 v13;
  __int64 v14;
  _QWORD* v15;
  __int64 v16;
  _QWORD* v17;
  __int64 v18;
  __int64 v19;
  __int64 v20;
  _QWORD* v21;
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
  __int64 result;

  v1 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)a1 = wld_ModelModule_vtable;
  if (*(_BYTE*)(a1 + 113) == 1 && v1 != 0) {
    v4 = *(_QWORD*)(a1 + 48);
    *(_BYTE*)(a1 + 113) = 0;
    if (v4 != 0) {
      v5 = std___1___shared_weak_count_lock();
      if (v5 != 0) {
        v6 = v5;
        v7 = *(_QWORD*)(a1 + 40);
        if (v7 != 0) {
          GameRoutine_a70ec0(v7, *(_QWORD*)(a1 + 80));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v6 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v6 + 16LL))(v6);
          std___1___shared_weak_count___release_weak(v6);
        }
      }
    }
  }
  if (*(_BYTE*)(a1 + 112) == 1 && *(_QWORD*)(a1 + 24) != 0) {
    v9 = *(_QWORD*)(a1 + 48);
    *(_BYTE*)(a1 + 112) = 0;
    if (v9 != 0) {
      v10 = std___1___shared_weak_count_lock();
      if (v10 != 0) {
        v11 = v10;
        v12 = *(_QWORD*)(a1 + 40);
        if (v12 != 0) {
          GameRoutine_a70ec0(v12, *(_QWORD*)(a1 + 72));
        }
        if (atomic_fetch_add((atomic_ullong* volatile)(v11 + 8),
                             0xFFFFFFFFFFFFFFFFLL) == 0) {
          (*(void (**)(__int64))(*(_QWORD*)v11 + 16LL))(v11);
          std___1___shared_weak_count___release_weak(v11);
        }
      }
    }
  }
  v13 = *(_QWORD*)(a1 + 32);
  v14 = *game_g_frame_clock_ptr[0];
  v15 = (_QWORD*)fw_memory_g_heap_manager_ptr;
  if (v13 != 0) {
    v16 = fw_memory_HeapManager_Allocate(*(_QWORD*)fw_memory_g_heap_manager_ptr,
                                         24, 16, 0);
    *(_QWORD*)(v16 + 16) = v13;
    *(_QWORD*)(a1 + 32) = 0;
    *(_DWORD*)(v16 + 8) = 2;
    *(_QWORD*)v16 = GameData_1fc0ae0;
    v17 = (_QWORD*)fw_memory_HeapManager_Allocate(*v15, 24, 16, 0);
    v17[1] = v14 + 16592;
    v17[2] = v16;
    v18 = *(_QWORD*)(v14 + 16592);
    *v17 = v18;
    *(_QWORD*)(v18 + 8) = v17;
    *(_QWORD*)(v14 + 16592) = v17;
    ++*(_QWORD*)(v14 + 16608);
  }
  v19 = fw_memory_HeapManager_Allocate(*v15, 24, 16, 0);
  *(_DWORD*)(v19 + 8) = 2;
  *(_QWORD*)v19 = GameData_1fc0b20;
  v20 = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  *(_QWORD*)(v19 + 16) = v20;
  v21 = (_QWORD*)fw_memory_HeapManager_Allocate(*v15, 24, 16, 0);
  v21[1] = v14 + 16592;
  v21[2] = v19;
  v22 = *(_QWORD*)(v14 + 16592);
  *v21 = v22;
  *(_QWORD*)(v22 + 8) = v21;
  *(_QWORD*)(v14 + 16592) = v21;
  ++*(_QWORD*)(v14 + 16608);
  v23 = *(_QWORD*)(a1 + 184);
  if (v23 != 0) {
    v24 = *v15;
    *(_QWORD*)(a1 + 192) = v23;
    v25 = 128;
    if (*(_QWORD*)(v24 + 200) == 0) {
      v25 = 56;
    }
    nn_mem_StandardAllocator_Free(v24 + v25, v23);
  }
  v26 = *(_QWORD*)(a1 + 88);
  if (v26 != 0) {
    v27 = *v15;
    *(_QWORD*)(a1 + 96) = v26;
    v28 = 128;
    if (*(_QWORD*)(v27 + 200) == 0) {
      v28 = 56;
    }
    nn_mem_StandardAllocator_Free(v27 + v28, v26);
  }
  v29 = *(_QWORD*)(a1 + 64);
  if (v29 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v29 + 8),
                                   0xFFFFFFFFFFFFFFFFLL) == 0) {
    (*(void (**)(__int64))(*(_QWORD*)v29 + 16LL))(v29);
    std___1___shared_weak_count___release_weak(v29);
  }
  v30 = *(_QWORD*)(a1 + 48);
  if (v30 != 0) {
    std___1___shared_weak_count___release_weak(v30);
  }
  v31 = *(_QWORD*)(a1 + 32);
  *(_QWORD*)(a1 + 32) = 0;
  if (v31 != 0) {
    (*(void (**)(__int64))(*(_QWORD*)v31 + 8LL))(v31);
  }
  result = *(_QWORD*)(a1 + 24);
  *(_QWORD*)(a1 + 24) = 0;
  if (result != 0) {
    return (*(__int64 (**)(__int64))(*(_QWORD*)result + 8LL))(result);
  }
  return result;
}

__int64 ModelModule_Unknown7(__int64 result, long double a2)
{
  __int64 v2;
  float v3;
  __int64 v4;
  __int64 v5;
  bool v6;
  __int64 v7;
  float v8;
  __int64 v9;
  unsigned __int64 v10;
  char v11;
  _BYTE* v12;
  __int64 v13;
  __int64 v14;
  float v15;
  float v16;
  __int64 v17;
  bool v18;
  bool v19;
  float v20;
  __int64 v21;
  __int64 v22;
  __int64 v23;
  __int64 v24;
  bool v25;
  __int64* v26;
  unsigned __int8 v27;
  char v28;
  int v29;
  __int64 v30;
  __int64* v31;
  char v32;
  int v33;
  __int64 v34;

  v2 = result;
  if (*(_BYTE*)(result + 169) == 1) {
    result = GameRoutine_19887e0(result + 120, *(_QWORD*)(result + 24) + 336LL);
    if (*(_BYTE*)(v2 + 169) == 1) {
      v3 = *(float*)(v2 + 124);
      v4 = *(_QWORD*)(v2 + 128);
      v5 = *(_QWORD*)(v2 + 136);
      *(_QWORD*)(v2 + 144) = *(_QWORD*)(v2 + 120);
      *(_QWORD*)(v2 + 152) = v4;
      v6 = true;
      *(_QWORD*)(v2 + 160) = v5;
      if (v3 >= 1.0 && *(float*)(v2 + 128) <= 0.0) {
        v6 = fminf(*(float*)(v2 + 120), *(float*)(v2 + 132)) < 1.0;
      }
      *(_BYTE*)(v2 + 168) = v6;
      *(_BYTE*)(v2 + 169) = 0;
    }
  }
  v7 = *(_QWORD*)(v2 + 184);
  if (v7 != *(_QWORD*)(v2 + 192)) {
    v8 = *(float*)(v2 + 132);
    v9 = *(_QWORD*)(v2 + 136);
    v10 = 0;
    v11 = 0;
  LABEL_11:
    v13 = 56 * v10 + 49;
    do {
      v14 = v7 + v13;
      LODWORD(a2) = *(_DWORD*)(v7 + v13 - 37);
      if (*(float*)&a2 != v8) {
        v15 = *(float*)(v14 - 49);
        v16 = *(float*)(v14 - 25);
        *(float*)(v14 - 37) = v8;
        v19 = v15 != v16 ||
              (v17 = v7 + v13,
               *(float*)(v7 + v13 - 45) != *(float*)(v7 + v13 - 21)) ||
              (*(float*)(v17 - 41) == *(float*)(v17 - 17)
                   ? (v18 = v8 == *(float*)(v17 - 13))
                   : (v18 = false),
               !v18) ||
              ((*(_DWORD*)(v7 + v13 - 33) ^ *(_DWORD*)(v7 + v13 - 9)) &
               0x3FLL) != 0;
        *(float*)&a2 = v8;
        *(_BYTE*)(v7 + v13) = v19;
      }
      if (((*(_DWORD*)(v14 - 33) ^ (unsigned int)v9) & 0x3FLL) != 0) {
        v20 = *(float*)(v14 - 49);
        *(_QWORD*)(v14 - 33) = v9;
        if (v20 != *(float*)(v7 + v13 - 25) ||
            *(float*)(v7 + v13 - 45) != *(float*)(v7 + v13 - 21) ||
            *(float*)(v7 + v13 - 41) != *(float*)(v7 + v13 - 17) ||
            *(float*)&a2 != *(float*)(v7 + v13 - 13)) {
          *(_BYTE*)(v7 + v13) = 1;
        LABEL_32:
          v22 = v7 + v13;
          result = GameRoutine_19887e0(
              v7 + v13 - 49, *(_QWORD*)(*(_QWORD*)(v2 + 32) + 392LL) +
                                 24LL * (*(_DWORD*)(v2 + 176) + (int)v10));
          if (*(_BYTE*)(v7 + v13) == 1) {
            v23 = *(_QWORD*)(v7 + v13 - 41);
            LODWORD(a2) = *(_DWORD*)(v22 - 45);
            *(_QWORD*)(v22 - 25) = *(_QWORD*)(v7 + v13 - 49);
            v24 = *(_QWORD*)(v7 + v13 - 33);
            *(_QWORD*)(v22 - 17) = v23;
            *(_QWORD*)(v22 - 9) = v24;
            v25 = true;
            if (*(float*)&a2 >= 1.0) {
              LODWORD(a2) = *(_DWORD*)(v22 - 41);
              if (*(float*)&a2 <= 0.0) {
                *(float*)&a2 = fminf(*(float*)(v22 - 49), *(float*)(v22 - 37));
                v25 = *(float*)&a2 < 1.0;
              }
            }
            v12 = (_BYTE*)(v7 + v13);
            *(v12 - 1) = v25;
            *v12 = 0;
          }
          v7 = *(_QWORD*)(v2 + 184);
          ++v10;
          v11 = 1;
          if (0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD*)(v2 + 192) - v7) >> 3) <=
              v10) {
            goto LABEL_37;
          }
          goto LABEL_11;
        }
        v21 =
            ((unsigned __int8)*(_DWORD*)(v7 + v13 - 9) ^ (unsigned __int8)v9) &
            0x3F;
        *(_BYTE*)(v7 + v13) =
            (((unsigned __int8)*(_DWORD*)(v7 + v13 - 9) ^ (unsigned __int8)v9) &
             0x3F) != 0;
        if (v21 != 0) {
          goto LABEL_32;
        }
      }
      else if ((*(_BYTE*)(v7 + v13) & 1) != 0) {
        goto LABEL_32;
      }
      v7 = *(_QWORD*)(v2 + 184);
      ++v10;
      v13 += 56;
    } while (0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD*)(v2 + 192) - v7) >> 3) > v10);
    if ((v11 & 1) == 0) {
      goto LABEL_39;
    }
  LABEL_37:
    v26 = *(__int64**)(v2 + 32);
    v27 = *((_BYTE*)v26 + 112);
    v28 = *((_BYTE*)v26 + 115);
    *((_BYTE*)v26 + 417) = 1;
    v29 = v27 & (unsigned __int8)~v28 & 1;
    if (*((unsigned __int8*)v26 + 140) != v29) {
      v30 = *v26;
      *((_BYTE*)v26 + 140) = v29;
      result = (*(__int64 (**)(__int64*, const char*, long double))(v30 + 40))(
          v26, "co_instance", a2);
      *((_BYTE*)v26 + 417) = 1;
    }
  }

LABEL_39:
  v31 = *(__int64**)(v2 + 32);
  if (v31 != nullptr && *((_DWORD*)v31 + 34) != 0) {
    v32 = *((_BYTE*)v31 + 115);
    *((_BYTE*)v31 + 116) = *(float*)(v2 + 132) < 1.0;
    v33 = (_BYTE)v31[14] & (unsigned __int8)~v32 & 1;
    if (*((unsigned __int8*)v31 + 140) != v33) {
      v34 = *v31;
      *((_BYTE*)v31 + 140) = v33;
      result = (*(__int64 (**)(__int64*, const char*))(v34 + 40))(
          v31, "co_instance");
      *((_BYTE*)v31 + 417) = 1;
    }
  }
  return result;
}

#pragma GCC visibility pop
