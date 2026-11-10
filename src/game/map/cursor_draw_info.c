#include "decomp/pseudo_helpers.h"

#pragma GCC visibility push(hidden)

__int64 fw_memory_HeapManager_Allocate(_QWORD, _QWORD, _QWORD, _QWORD);
__int64 game_UnitPool_GetFirst(_QWORD);
__n128 std___1___shared_weak_count___release_weak(_QWORD);
extern __int64 (*GameData_1ffebf8[])();
extern __int64 GameData_212d020[5];
extern __int64 GameData_21ca310;
extern __int64 fw_memory_g_heap_manager_ptr;
float GameRoutine_1003040(_QWORD, _QWORD, _QWORD, _QWORD);
float game_map_CursorDrawInfo_GetHeightTop(__int64 a1, int a2, int a3,
                                           unsigned int a4, unsigned int a5,
                                           __int64 a6);

float game_map_CursorDrawInfo_GetHeightTop(__int64 a1, int a2, int a3,
                                           unsigned int a4, unsigned int a5,
                                           __int64 a6)
{
  __int64 v7;
  float v8;
  float v9;
  __int64 v10;
  __int64 v11;
  __int64 v12;
  float v13;
  __int64 v14;
  __int64 v15;
  __int64 v16;
  unsigned __int64 v17;
  __int64 v18;
  int v19;
  char v20;
  int v21;
  __int64 (***v22)();
  int v23;
  int v24;
  int v25;
  int v26;
  __int64 (**v27)();
  __int64 v28;
  __int64 v29;
  __int64 v30;
  float v31;
  __int64 v32;
  unsigned __int64 v33;
  __int64 v34;
  __int64 v36;
  __int64 v37;
  unsigned int v38;
  unsigned int v39;
  int v40;
  int v41;
  int v42;
  int v43;

  v40 = a3;
  v41 = a2;
  v38 = a5;
  v39 = a4;
  LOBYTE(v43) = a2;
  BYTE1(v43) = a3;
  v7 = *(_QWORD*)GameData_212d020[0];
  HIWORD(v43) = 0;
  v8 = GameRoutine_1003040(*(_QWORD*)(v7 + 8) + 72LL, &v43, a4, a5);
  v9 = 2.5f;
  if (a6 != 0 && *(_QWORD*)(a6 + 392) != 0 &&
      (*(_BYTE*)(a6 + 417) & 0x1C) == 0 &&
      (*(float (**)(__int64))(*(_QWORD*)(a6 + 152) + 16LL))(a6 + 152) > 0.0f) {
    v10 = *(_QWORD*)(a6 + 264);
    if (v10 != 0) {
      v11 = *(_QWORD*)(v10 + 392);
      v12 = *(_QWORD*)(v10 + 400);
      if (v12 != 0) {
        atomic_fetch_add_explicit((atomic_ullong* volatile)(v12 + 8), 1u,
                                  memory_order_relaxed);
      }
      if (v11 != 0) {
        v13 = *(float*)(*(_QWORD*)(v11 + 11792) + 32LL) *
              (float)(*(float*)(v11 + 32) *
                      (float)(*(float*)(v11 + 40) +
                              (float)((float)(1.0f - *(float*)(v11 + 40)) *
                                      *(float*)(v10 + 336))));
      }
      else {
        v13 = 1.5f;
      }
      if (v12 != 0 && atomic_fetch_add((atomic_ullong* volatile)(v12 + 8),
                                       0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v12 + 16LL))(v12);
        std___1___shared_weak_count___release_weak(v12);
      }
    }
    else {
      v13 = 1.5f;
    }
    v9 = fmaxf(v13 + 0.5f, 2.5f);
  }
  v43 = 15;
  v14 = game_UnitPool_GetFirst(&v43);
  if (v14 == 0) {
    return v8 + v9;
  }
  v15 = *(_QWORD*)(v14 + 432);
  v16 = v14;
  if (v15 == 0) {
    v15 = *(_QWORD*)(v14 + 440);
    if (v15 != 0) {
      v17 = *(unsigned __int8*)(v15 + 16);
      if (v17 <= 8) {
        v36 = 24LL * *(unsigned __int8*)(v15 + 16) + 556024;
        do {
          if (v17 <= 2) {
            v15 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v36);
            if (v15 != 0) {
              goto LABEL_23;
            }
          }
          ++v17;
          v36 += 24;
        } while (v17 != 9);
      }
      v15 = 0;
    }
  }
LABEL_23:
  while (1) {
    v18 = v15;
    v19 = *(_DWORD*)(v16 + 592);
    v20 = *(_BYTE*)(v16 + 584);
    v21 = *(unsigned __int8*)(v16 + 585);
    v22 = (__int64 (***)())fw_memory_HeapManager_Allocate(
        *(_QWORD*)fw_memory_g_heap_manager_ptr, 40, 16, 0);
    *v22 = GameData_1ffebf8;
    v22[1] = (__int64 (**)())&v39;
    v22[2] = (__int64 (**)())&v38;
    v22[3] = (__int64 (**)())&v41;
    v22[4] = (__int64 (**)())&v40;
    if (v19 >= 1) {
      break;
    }
    v27 = GameData_1ffebf8;
  LABEL_40:
    ((void (*)(__int64 (***)()))v27[5])(v22);
    if (v18 == 0) {
      return v8 + v9;
    }
  LABEL_44:
    v15 = *(_QWORD*)(v18 + 432);
    v16 = v18;
    if (v15 == 0) {
      v32 = *(_QWORD*)(v18 + 440);
      v16 = v18;
      if (v32 != 0) {
        v33 = *(unsigned __int8*)(v32 + 16);
        v15 = 0;
        v16 = v18;
        if (v33 <= 8) {
          v34 = 24LL * (unsigned int)v33 + 556024;
          while (1) {
            if (v33 <= 2) {
              v15 = *(_QWORD*)(*(_QWORD*)(GameData_21ca310 + 56) + v34);
              if (v15 != 0) {
                break;
              }
            }
            ++v33;
            v34 += 24;
            if (v33 == 9) {
              v15 = 0;
              v16 = v18;
              goto LABEL_23;
            }
          }
          v16 = v18;
        }
      }
    }
  }
  v23 = v21 << 24;
  v37 = v18;
  v24 = 0;
LABEL_25:
  v25 = v23;
  v26 = v19;
  while (1) {
    v43 = (char)(v24 + v20);
    v42 = v25 >> 24;
    if ((((__int64 (*)(__int64 (***)(), int*, int*))(*v22)[6])(v22, &v43,
                                                               &v42) &
         1) != 0) {
      break;
    }
    --v26;
    v25 += 0x1000000;
    if (v26 == 0) {
      if (++v24 != v19) {
        goto LABEL_25;
      }
      v27 = *v22;
      v18 = v37;
      goto LABEL_40;
    }
  }
  ((void (*)(__int64 (***)()))(*v22)[5])(v22);
  if (*(_QWORD*)(v16 + 392) == 0) {
    v18 = v37;
    goto LABEL_43;
  }
  v18 = v37;
  if ((*(_BYTE*)(v16 + 417) & 0x1C) != 0 ||
      (*(float (**)(__int64))(*(_QWORD*)(v16 + 152) + 16LL))(v16 + 152) <=
          0.0f) {
  LABEL_43:
    if (v18 == 0) {
      return v8 + v9;
    }
    goto LABEL_44;
  }
  v28 = *(_QWORD*)(v16 + 264);
  if (v28 != 0) {
    v29 = *(_QWORD*)(v28 + 392);
    v30 = *(_QWORD*)(v28 + 400);
    if (v30 != 0) {
      atomic_fetch_add_explicit((atomic_ullong* volatile)(v30 + 8), 1u,
                                memory_order_relaxed);
    }
    if (v29 != 0) {
      v31 = *(float*)(*(_QWORD*)(v29 + 11792) + 32LL) *
            (float)(*(float*)(v29 + 32) *
                    (float)(*(float*)(v29 + 40) +
                            (float)((float)(1.0f - *(float*)(v29 + 40)) *
                                    *(float*)(v28 + 336))));
      if (v30 == 0) {
        goto LABEL_56;
      }
    LABEL_54:
      if (atomic_fetch_add((atomic_ullong* volatile)(v30 + 8),
                           0xFFFFFFFFFFFFFFFFLL) == 0) {
        (*(void (**)(__int64))(*(_QWORD*)v30 + 16LL))(v30);
        std___1___shared_weak_count___release_weak(v30);
      }
      goto LABEL_56;
    }
    v31 = 1.5f;
    if (v30 != 0) {
      goto LABEL_54;
    }
  }
  else {
    v31 = 1.5f;
  }
LABEL_56:
  if (v9 < (float)(v31 + 0.5f)) {
    v9 = v31 + 0.5f;
  }
  if (v37 != 0) {
    goto LABEL_44;
  }
  return v8 + v9;
}

#pragma GCC visibility pop
